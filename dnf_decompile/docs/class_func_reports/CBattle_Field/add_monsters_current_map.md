# add_monsters_current_map

`_ZN13CBattle_Field24add_monsters_current_mapERSt4listI11_mapMonsterSaIS1_EERSt6vectorIiSaIiEER11map_monsterRiSB_SB_`

`CBattle_Field::add_monsters_current_map(std::list<_mapMonster, std::allocator<_mapMonster> >&, std::vector<int, std::allocator<int> >&, map_monster&, int&, int&, int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830162e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830162e  _ZN13CBattle_Field24add_monsters_current_mapERSt4listI11_mapMonsterSaIS1_EERSt6vectorIiSaIiEER11map_monsterRiSB_SB_
#           CBattle_Field::add_monsters_current_map(std::list<_mapMonster, std::allocator<_mapMonster> >&, std::vector<int, std::allocator<int> >&, map_monster&, int&, int&, int&)
# range [0x0830162e, 0x08301b8b]
0830162e +0x000:  push   %ebp
0830162f +0x001:  mov    %esp,%ebp
08301631 +0x003:  push   %esi
08301632 +0x004:  push   %ebx
08301633 +0x005:  sub    $0x3b0,%esp
08301639 +0x00b:  mov    0x8(%ebp),%eax
0830163c +0x00e:  mov    0x188(%eax),%eax
08301642 +0x014:  test   %eax,%eax
08301644 +0x016:  je     08301b80 <+0x552>
0830164a +0x01c:  movl   $0x0,-0x18(%ebp)
08301651 +0x023:  mov    0x8(%ebp),%eax
08301654 +0x026:  mov    %eax,(%esp)
08301657 +0x029:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830165c +0x02e:  mov    %eax,-0x14(%ebp)
0830165f +0x031:  lea    -0x378(%ebp),%eax
08301665 +0x037:  mov    0xc(%ebp),%edx
08301668 +0x03a:  mov    %edx,0x4(%esp)
0830166c +0x03e:  mov    %eax,(%esp)
0830166f +0x041:  call   0815281c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2151>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2151
08301674 +0x046:  sub    $0x4,%esp
08301677 +0x049:  lea    -0x378(%ebp),%eax
0830167d +0x04f:  mov    %eax,0x4(%esp)
08301681 +0x053:  lea    -0x37c(%ebp),%eax
08301687 +0x059:  mov    %eax,(%esp)
0830168a +0x05c:  call   08152842 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2177>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2177
0830168f +0x061:  jmp    08301b2e <+0x500>
08301694 +0x066:  lea    -0x37c(%ebp),%eax
0830169a +0x06c:  mov    %eax,(%esp)
0830169d +0x06f:  call   08139874 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x547b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x547b
083016a2 +0x074:  mov    %eax,-0x10(%ebp)
083016a5 +0x077:  mov    0x8(%ebp),%eax
083016a8 +0x07a:  mov    0x188(%eax),%eax
083016ae +0x080:  add    $0x8f0,%eax
083016b3 +0x085:  mov    %eax,(%esp)
083016b6 +0x088:  call   0830ffaa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b8f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b8f
083016bb +0x08d:  xor    $0x1,%eax
083016be +0x090:  test   %al,%al
083016c0 +0x092:  je     083016d4 <+0xa6>
083016c2 +0x094:  mov    -0x10(%ebp),%eax
083016c5 +0x097:  movzbl 0x1c(%eax),%eax
083016c9 +0x09b:  test   %al,%al
083016cb +0x09d:  je     083016d4 <+0xa6>
083016cd +0x09f:  mov    $0x1,%eax
083016d2 +0x0a4:  jmp    083016d9 <+0xab>
083016d4 +0x0a6:  mov    $0x0,%eax
083016d9 +0x0ab:  test   %al,%al
083016db +0x0ad:  je     0830172a <+0xfc>
083016dd +0x0af:  mov    -0x10(%ebp),%eax
083016e0 +0x0b2:  mov    (%eax),%edx
083016e2 +0x0b4:  mov    -0x10(%ebp),%eax
083016e5 +0x0b7:  mov    0x20(%eax),%eax
083016e8 +0x0ba:  movzbl %al,%eax
083016eb +0x0bd:  mov    %edx,0x8(%esp)
083016ef +0x0c1:  mov    %eax,0x4(%esp)
083016f3 +0x0c5:  mov    0x8(%ebp),%eax
083016f6 +0x0c8:  mov    %eax,(%esp)
083016f9 +0x0cb:  call   08300c76 <_ZN13CBattle_Field27checkClearedNamedMonsterMapEhi>  ; CBattle_Field::checkClearedNamedMonsterMap(unsigned char, int)
083016fe +0x0d0:  test   %al,%al
08301700 +0x0d2:  je     0830172a <+0xfc>
08301702 +0x0d4:  lea    -0x36c(%ebp),%eax
08301708 +0x0da:  movl   $0x0,0x8(%esp)
08301710 +0x0e2:  lea    -0x37c(%ebp),%edx
08301716 +0x0e8:  mov    %edx,0x4(%esp)
0830171a +0x0ec:  mov    %eax,(%esp)
0830171d +0x0ef:  call   08135de6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19ed>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19ed
08301722 +0x0f4:  sub    $0x4,%esp
08301725 +0x0f7:  jmp    08301b2e <+0x500>
0830172a +0x0fc:  mov    -0x10(%ebp),%eax
0830172d +0x0ff:  mov    0xc(%eax),%eax
08301730 +0x102:  cmp    $0x1,%eax
08301733 +0x105:  je     08301747 <+0x119>
08301735 +0x107:  cmp    $0x2,%eax
08301738 +0x10a:  je     08301767 <+0x139>
0830173a +0x10c:  test   %eax,%eax
0830173c +0x10e:  jne    08301773 <+0x145>
0830173e +0x110:  movl   $0x1,-0x18(%ebp)
08301745 +0x117:  jmp    08301773 <+0x145>
08301747 +0x119:  mov    0x8(%ebp),%eax
0830174a +0x11c:  mov    0x198(%eax),%eax
08301750 +0x122:  cmp    $0x2,%eax
08301753 +0x125:  jle    0830175e <+0x130>
08301755 +0x127:  movl   $0x2,-0x18(%ebp)
0830175c +0x12e:  jmp    08301773 <+0x145>
0830175e +0x130:  movl   $0x1,-0x18(%ebp)
08301765 +0x137:  jmp    08301773 <+0x145>
08301767 +0x139:  mov    0x8(%ebp),%eax
0830176a +0x13c:  mov    0x198(%eax),%eax
08301770 +0x142:  mov    %eax,-0x18(%ebp)
08301773 +0x145:  movl   $0x0,-0xc(%ebp)
0830177a +0x14c:  jmp    08301af0 <+0x4c2>
0830177f +0x151:  mov    -0x10(%ebp),%eax
08301782 +0x154:  mov    0x2c(%eax),%edx
08301785 +0x157:  mov    0x14(%ebp),%eax
08301788 +0x15a:  mov    %edx,(%eax)
0830178a +0x15c:  mov    0x8(%ebp),%eax
0830178d +0x15f:  movzwl 0x128(%eax),%eax
08301794 +0x166:  test   %ax,%ax
08301797 +0x169:  je     083017e4 <+0x1b6>
08301799 +0x16b:  mov    0x8(%ebp),%eax
0830179c +0x16e:  mov    (%eax),%eax
0830179e +0x170:  test   %eax,%eax
083017a0 +0x172:  je     083017e4 <+0x1b6>
083017a2 +0x174:  mov    0x8(%ebp),%eax
083017a5 +0x177:  mov    (%eax),%eax
083017a7 +0x179:  mov    %eax,(%esp)
083017aa +0x17c:  call   085b60be <_ZN6CParty17getMemberMaxLevelEv>  ; CParty::getMemberMaxLevel()
083017af +0x181:  mov    %eax,%edx
083017b1 +0x183:  mov    0x14(%ebp),%eax
083017b4 +0x186:  mov    %dl,0x10(%eax)
083017b7 +0x189:  mov    0x14(%ebp),%eax
083017ba +0x18c:  movzbl 0x10(%eax),%eax
083017be +0x190:  test   %al,%al
083017c0 +0x192:  jne    083017c9 <+0x19b>
083017c2 +0x194:  mov    0x14(%ebp),%eax
083017c5 +0x197:  movb   $0x1,0x10(%eax)
083017c9 +0x19b:  mov    0x14(%ebp),%eax
083017cc +0x19e:  movzbl 0x10(%eax),%eax
083017d0 +0x1a2:  cmp    $0xc8,%al
083017d2 +0x1a4:  jbe    083018a0 <+0x272>
083017d8 +0x1aa:  mov    0x14(%ebp),%eax
083017db +0x1ad:  movb   $0xc8,0x10(%eax)
083017df +0x1b1:  jmp    083018a1 <+0x273>
083017e4 +0x1b6:  mov    -0x10(%ebp),%eax
083017e7 +0x1b9:  movzbl 0x4(%eax),%eax
083017eb +0x1bd:  test   %al,%al
083017ed +0x1bf:  je     08301863 <+0x235>
083017ef +0x1c1:  mov    0x8(%ebp),%eax
083017f2 +0x1c4:  mov    0x188(%eax),%eax
083017f8 +0x1ca:  mov    %eax,(%esp)
083017fb +0x1cd:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
08301800 +0x1d2:  test   %al,%al
08301802 +0x1d4:  setg   %al
08301805 +0x1d7:  test   %al,%al
08301807 +0x1d9:  je     0830181c <+0x1ee>
08301809 +0x1db:  mov    0x8(%ebp),%eax
0830180c +0x1de:  mov    0x238(%eax),%eax
08301812 +0x1e4:  mov    %eax,%edx
08301814 +0x1e6:  mov    0x14(%ebp),%eax
08301817 +0x1e9:  mov    %dl,0x10(%eax)
0830181a +0x1ec:  jmp    0830183d <+0x20f>
0830181c +0x1ee:  mov    0x8(%ebp),%eax
0830181f +0x1f1:  mov    0x188(%eax),%eax
08301825 +0x1f7:  mov    %eax,(%esp)
08301828 +0x1fa:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0830182d +0x1ff:  mov    %eax,%edx
0830182f +0x201:  mov    -0x10(%ebp),%eax
08301832 +0x204:  mov    0x8(%eax),%eax
08301835 +0x207:  add    %eax,%edx
08301837 +0x209:  mov    0x14(%ebp),%eax
0830183a +0x20c:  mov    %dl,0x10(%eax)
0830183d +0x20f:  mov    0x14(%ebp),%eax
08301840 +0x212:  movzbl 0x10(%eax),%eax
08301844 +0x216:  test   %al,%al
08301846 +0x218:  jne    0830184f <+0x221>
08301848 +0x21a:  mov    0x14(%ebp),%eax
0830184b +0x21d:  movb   $0x1,0x10(%eax)
0830184f +0x221:  mov    0x14(%ebp),%eax
08301852 +0x224:  movzbl 0x10(%eax),%eax
08301856 +0x228:  cmp    $0xc8,%al
08301858 +0x22a:  jbe    083018a1 <+0x273>
0830185a +0x22c:  mov    0x14(%ebp),%eax
0830185d +0x22f:  movb   $0xc8,0x10(%eax)
08301861 +0x233:  jmp    083018a1 <+0x273>
08301863 +0x235:  mov    0x8(%ebp),%eax
08301866 +0x238:  mov    0x188(%eax),%eax
0830186c +0x23e:  mov    %eax,(%esp)
0830186f +0x241:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
08301874 +0x246:  test   %al,%al
08301876 +0x248:  setg   %al
08301879 +0x24b:  test   %al,%al
0830187b +0x24d:  je     08301890 <+0x262>
0830187d +0x24f:  mov    0x8(%ebp),%eax
08301880 +0x252:  mov    0x238(%eax),%eax
08301886 +0x258:  mov    %eax,%edx
08301888 +0x25a:  mov    0x14(%ebp),%eax
0830188b +0x25d:  mov    %dl,0x10(%eax)
0830188e +0x260:  jmp    083018a1 <+0x273>
08301890 +0x262:  mov    -0x10(%ebp),%eax
08301893 +0x265:  mov    0x8(%eax),%eax
08301896 +0x268:  mov    %eax,%edx
08301898 +0x26a:  mov    0x14(%ebp),%eax
0830189b +0x26d:  mov    %dl,0x10(%eax)
0830189e +0x270:  jmp    083018a1 <+0x273>
083018a0 +0x272:  nop
083018a1 +0x273:  mov    -0x10(%ebp),%eax
083018a4 +0x276:  mov    (%eax),%eax
083018a6 +0x278:  cmp    $0xffffffff,%eax
083018a9 +0x27b:  jne    08301943 <+0x315>
083018af +0x281:  mov    0x14(%ebp),%eax
083018b2 +0x284:  movzbl 0x10(%eax),%eax
083018b6 +0x288:  movzbl %al,%ebx
083018b9 +0x28b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083018be +0x290:  mov    0x8(%eax),%eax
083018c1 +0x293:  mov    %ebx,0x4(%esp)
083018c5 +0x297:  mov    %eax,(%esp)
083018c8 +0x29a:  call   0834ff20 <_ZN15CMonsterManager19get_levelrandom_mobEi>  ; CMonsterManager::get_levelrandom_mob(int)
083018cd +0x29f:  mov    0x14(%ebp),%edx
083018d0 +0x2a2:  mov    %eax,0xc(%edx)
083018d3 +0x2a5:  mov    -0x14(%ebp),%eax
083018d6 +0x2a8:  movzbl 0xe8(%eax),%eax
083018dd +0x2af:  test   %al,%al
083018df +0x2b1:  je     083018e8 <+0x2ba>
083018e1 +0x2b3:  mov    $"layeredMap",%eax
083018e6 +0x2b8:  jmp    083018ed <+0x2bf>
083018e8 +0x2ba:  mov    $"generalMap",%eax
083018ed +0x2bf:  mov    %eax,%ebx
083018ef +0x2c1:  mov    -0x14(%ebp),%eax
083018f2 +0x2c4:  mov    0x4(%eax),%ecx
083018f5 +0x2c7:  mov    0x14(%ebp),%eax
083018f8 +0x2ca:  movzbl 0x10(%eax),%eax
083018fc +0x2ce:  movzbl %al,%edx
083018ff +0x2d1:  mov    0x14(%ebp),%eax
08301902 +0x2d4:  mov    0xc(%eax),%eax
08301905 +0x2d7:  mov    %ebx,0x20(%esp)
08301909 +0x2db:  mov    %ecx,0x1c(%esp)
0830190d +0x2df:  mov    %edx,0x18(%esp)
08301911 +0x2e3:  mov    %eax,0x14(%esp)
08301915 +0x2e7:  movl   $"HEROES_LOG : RANDOM MONSTER INDEX (%d) MONSTER LEVEL (%d) MAP INDEX (%d) [Map Kind : %s]\n",0x10(%esp)
0830191d +0x2ef:  movl   $0x5c0,0xc(%esp)
08301925 +0x2f7:  movl   $&_ZZN13CBattle_Field24add_monsters_current_mapERSt4listI11_mapMonsterSaIS1_EERSt6vectorIiSaIiEER11map_monsterRiSB_SB_E19__PRETTY_FUNCTION__,0x8(%esp)
0830192d +0x2ff:  movl   $"battle_field.cpp",0x4(%esp)
08301935 +0x307:  movl   $0x1,(%esp)
0830193c +0x30e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08301941 +0x313:  jmp    0830194e <+0x320>
08301943 +0x315:  mov    -0x10(%ebp),%eax
08301946 +0x318:  mov    (%eax),%edx
08301948 +0x31a:  mov    0x14(%ebp),%eax
0830194b +0x31d:  mov    %edx,0xc(%eax)
0830194e +0x320:  mov    -0x10(%ebp),%eax
08301951 +0x323:  mov    0x10(%eax),%eax
08301954 +0x326:  mov    %eax,%edx
08301956 +0x328:  mov    0x14(%ebp),%eax
08301959 +0x32b:  mov    %dl,0x11(%eax)
0830195c +0x32e:  mov    -0x10(%ebp),%eax
0830195f +0x331:  mov    0x14(%eax),%eax
08301962 +0x334:  mov    %eax,%edx
08301964 +0x336:  mov    0x14(%ebp),%eax
08301967 +0x339:  mov    %dl,0x12(%eax)
0830196a +0x33c:  mov    -0x10(%ebp),%eax
0830196d +0x33f:  mov    0x18(%eax),%eax
08301970 +0x342:  mov    %eax,%edx
08301972 +0x344:  mov    0x14(%ebp),%eax
08301975 +0x347:  mov    %dl,0x8(%eax)
08301978 +0x34a:  mov    0x1c(%ebp),%eax
0830197b +0x34d:  mov    (%eax),%eax
0830197d +0x34f:  mov    0x14(%ebp),%edx
08301980 +0x352:  mov    %eax,0x4(%edx)
08301983 +0x355:  lea    0x1(%eax),%edx
08301986 +0x358:  mov    0x1c(%ebp),%eax
08301989 +0x35b:  mov    %edx,(%eax)
0830198b +0x35d:  mov    0x14(%ebp),%eax
0830198e +0x360:  movl   $0x0,0x20(%eax)
08301995 +0x367:  mov    0x14(%ebp),%eax
08301998 +0x36a:  movl   $0x0,0x24(%eax)
0830199f +0x371:  mov    0x14(%ebp),%eax
083019a2 +0x374:  movzbl 0x8(%eax),%eax
083019a6 +0x378:  test   %al,%al
083019a8 +0x37a:  jne    083019db <+0x3ad>
083019aa +0x37c:  mov    0x14(%ebp),%eax
083019ad +0x37f:  mov    %eax,(%esp)
083019b0 +0x382:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
083019b5 +0x387:  xor    $0x1,%eax
083019b8 +0x38a:  test   %al,%al
083019ba +0x38c:  je     083019db <+0x3ad>
083019bc +0x38e:  mov    0x8(%ebp),%eax
083019bf +0x391:  mov    0x188(%eax),%eax
083019c5 +0x397:  mov    %eax,(%esp)
083019c8 +0x39a:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
083019cd +0x39f:  xor    $0x1,%eax
083019d0 +0x3a2:  test   %al,%al
083019d2 +0x3a4:  je     083019db <+0x3ad>
083019d4 +0x3a6:  mov    $0x1,%eax
083019d9 +0x3ab:  jmp    083019e0 <+0x3b2>
083019db +0x3ad:  mov    $0x0,%eax
083019e0 +0x3b2:  test   %al,%al
083019e2 +0x3b4:  je     083019f9 <+0x3cb>
083019e4 +0x3b6:  mov    0x14(%ebp),%eax
083019e7 +0x3b9:  add    $0x4,%eax
083019ea +0x3bc:  mov    %eax,0x4(%esp)
083019ee +0x3c0:  mov    0x10(%ebp),%eax
083019f1 +0x3c3:  mov    %eax,(%esp)
083019f4 +0x3c6:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
083019f9 +0x3cb:  mov    -0x10(%ebp),%eax
083019fc +0x3ce:  movzbl 0x1c(%eax),%eax
08301a00 +0x3d2:  mov    %eax,%edx
08301a02 +0x3d4:  mov    0x14(%ebp),%eax
08301a05 +0x3d7:  mov    %dl,0x13(%eax)
08301a08 +0x3da:  mov    -0x10(%ebp),%eax
08301a0b +0x3dd:  mov    0x20(%eax),%eax
08301a0e +0x3e0:  mov    %eax,%edx
08301a10 +0x3e2:  mov    0x14(%ebp),%eax
08301a13 +0x3e5:  mov    %dl,0x14(%eax)
08301a16 +0x3e8:  mov    -0x10(%ebp),%eax
08301a19 +0x3eb:  lea    0x34(%eax),%edx
08301a1c +0x3ee:  mov    0x14(%ebp),%eax
08301a1f +0x3f1:  add    $0x328,%eax
08301a24 +0x3f6:  mov    %edx,0x4(%esp)
08301a28 +0x3fa:  mov    %eax,(%esp)
08301a2b +0x3fd:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08301a30 +0x402:  mov    -0x10(%ebp),%eax
08301a33 +0x405:  mov    0x28(%eax),%edx
08301a36 +0x408:  mov    0x14(%ebp),%eax
08301a39 +0x40b:  mov    %edx,0x2c(%eax)
08301a3c +0x40e:  mov    -0x10(%ebp),%eax
08301a3f +0x411:  movzbl 0x30(%eax),%edx
08301a43 +0x415:  mov    0x14(%ebp),%eax
08301a46 +0x418:  mov    %dl,0x34(%eax)
08301a49 +0x41b:  mov    0x14(%ebp),%eax
08301a4c +0x41e:  mov    %eax,0x4(%esp)
08301a50 +0x422:  lea    -0x368(%ebp),%eax
08301a56 +0x428:  mov    %eax,(%esp)
08301a59 +0x42b:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
08301a5e +0x430:  lea    -0x368(%ebp),%eax
08301a64 +0x436:  mov    %eax,0x4(%esp)
08301a68 +0x43a:  mov    -0x14(%ebp),%eax
08301a6b +0x43d:  mov    %eax,(%esp)
08301a6e +0x440:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
08301a73 +0x445:  jmp    08301a93 <+0x465>
08301a75 +0x447:  mov    %edx,%ebx
08301a77 +0x449:  mov    %eax,%esi
08301a79 +0x44b:  lea    -0x368(%ebp),%eax
08301a7f +0x451:  mov    %eax,(%esp)
08301a82 +0x454:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08301a87 +0x459:  mov    %esi,%eax
08301a89 +0x45b:  mov    %ebx,%edx
08301a8b +0x45d:  mov    %eax,(%esp)
08301a8e +0x460:  call   08ae3750 <_Unwind_Resume>
08301a93 +0x465:  lea    -0x368(%ebp),%eax
08301a99 +0x46b:  mov    %eax,(%esp)
08301a9c +0x46e:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08301aa1 +0x473:  mov    0x14(%ebp),%eax
08301aa4 +0x476:  movzbl 0x13(%eax),%eax
08301aa8 +0x47a:  test   %al,%al
08301aaa +0x47c:  jne    08301ab9 <+0x48b>
08301aac +0x47e:  mov    0x18(%ebp),%eax
08301aaf +0x481:  mov    (%eax),%eax
08301ab1 +0x483:  lea    0x1(%eax),%edx
08301ab4 +0x486:  mov    0x18(%ebp),%eax
08301ab7 +0x489:  mov    %edx,(%eax)
08301ab9 +0x48b:  mov    0x14(%ebp),%eax
08301abc +0x48e:  movzbl 0x8(%eax),%eax
08301ac0 +0x492:  cmp    $0x3,%al
08301ac2 +0x494:  jne    08301aec <+0x4be>
08301ac4 +0x496:  mov    -0x14(%ebp),%eax
08301ac7 +0x499:  movzbl 0x45(%eax),%eax
08301acb +0x49d:  xor    $0x1,%eax
08301ace +0x4a0:  test   %al,%al
08301ad0 +0x4a2:  je     08301aec <+0x4be>
08301ad2 +0x4a4:  mov    0x14(%ebp),%eax
08301ad5 +0x4a7:  lea    0x4(%eax),%edx
08301ad8 +0x4aa:  mov    0x8(%ebp),%eax
08301adb +0x4ad:  add    $0x118,%eax
08301ae0 +0x4b2:  mov    %edx,0x4(%esp)
08301ae4 +0x4b6:  mov    %eax,(%esp)
08301ae7 +0x4b9:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08301aec +0x4be:  addl   $0x1,-0xc(%ebp)
08301af0 +0x4c2:  mov    -0xc(%ebp),%eax
08301af3 +0x4c5:  cmp    -0x18(%ebp),%eax
08301af6 +0x4c8:  setl   %al
08301af9 +0x4cb:  test   %al,%al
08301afb +0x4cd:  jne    0830177f <+0x151>
08301b01 +0x4d3:  lea    -0x1c(%ebp),%eax
08301b04 +0x4d6:  movl   $0x0,0x8(%esp)
08301b0c +0x4de:  lea    -0x37c(%ebp),%edx
08301b12 +0x4e4:  mov    %edx,0x4(%esp)
08301b16 +0x4e8:  mov    %eax,(%esp)
08301b19 +0x4eb:  call   08135de6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19ed>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19ed
08301b1e +0x4f0:  sub    $0x4,%esp
08301b21 +0x4f3:  mov    0x20(%ebp),%eax
08301b24 +0x4f6:  mov    (%eax),%eax
08301b26 +0x4f8:  lea    0x1(%eax),%edx
08301b29 +0x4fb:  mov    0x20(%ebp),%eax
08301b2c +0x4fe:  mov    %edx,(%eax)
08301b2e +0x500:  lea    -0x370(%ebp),%eax
08301b34 +0x506:  mov    0xc(%ebp),%edx
08301b37 +0x509:  mov    %edx,0x4(%esp)
08301b3b +0x50d:  mov    %eax,(%esp)
08301b3e +0x510:  call   0813ba0c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7613>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7613
08301b43 +0x515:  sub    $0x4,%esp
08301b46 +0x518:  lea    -0x370(%ebp),%eax
08301b4c +0x51e:  mov    %eax,0x4(%esp)
08301b50 +0x522:  lea    -0x374(%ebp),%eax
08301b56 +0x528:  mov    %eax,(%esp)
08301b59 +0x52b:  call   08152842 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2177>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2177
08301b5e +0x530:  lea    -0x374(%ebp),%eax
08301b64 +0x536:  mov    %eax,0x4(%esp)
08301b68 +0x53a:  lea    -0x37c(%ebp),%eax
08301b6e +0x540:  mov    %eax,(%esp)
08301b71 +0x543:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
08301b76 +0x548:  test   %al,%al
08301b78 +0x54a:  jne    08301694 <+0x66>
08301b7e +0x550:  jmp    08301b81 <+0x553>
08301b80 +0x552:  nop
08301b81 +0x553:  lea    -0x8(%ebp),%esp
08301b84 +0x556:  add    $0x0,%esp
08301b87 +0x559:  pop    %ebx
08301b88 +0x55a:  pop    %esi
08301b89 +0x55b:  pop    %ebp
08301b8a +0x55c:  ret
08301b8b +0x55d:  nop
```

## 反编译 C

```c
// CBattle_Field::add_monsters_current_map @ 0x830162e

/* CBattle_Field::add_monsters_current_map(std::list<_mapMonster, std::allocator<_mapMonster> >&,
   std::vector<int, std::allocator<int> >&, map_monster&, int&, int&, int&) */

void __thiscall
CBattle_Field::add_monsters_current_map
          (CBattle_Field *this,list *param_1,vector *param_2,map_monster *param_3,int *param_4,
          int *param_5,int *param_6)

{
  bool bVar1;
  map_monster mVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  _List_const_iterator<_mapMonster> local_380 [4];
  _List_iterator local_37c [4];
  _List_const_iterator<_mapMonster> local_378 [4];
  _List_iterator local_374 [4];
  _List_const_iterator<_mapMonster> local_370 [4];
  map_monster local_36c [844];
  _List_const_iterator<_mapMonster> local_20 [4];
  int local_1c;
  MapInfo *local_18;
  int *local_14;
  int local_10;
  
  if (*(int *)(this + 0x188) != 0) {
    local_1c = 0;
    local_18 = (MapInfo *)GetCurrentMapInfo(this);
    std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
    std::_List_const_iterator<_mapMonster>::_List_const_iterator(local_380,local_37c);
    while( true ) {
      std::list<_mapMonster,std::allocator<_mapMonster>>::end();
      std::_List_const_iterator<_mapMonster>::_List_const_iterator(local_378,local_374);
      cVar3 = std::_List_const_iterator<_mapMonster>::operator!=(local_380,local_378);
      if (cVar3 == '\0') break;
      local_14 = (int *)std::_List_const_iterator<_mapMonster>::operator*(local_380);
      cVar3 = std::vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>>::empty();
      if ((cVar3 == '\x01') || ((char)local_14[7] == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (cVar3 = checkClearedNamedMonsterMap(this,(uchar)local_14[8],*local_14), cVar3 != '\0')) {
        std::_List_const_iterator<_mapMonster>::operator++(local_370,(int)local_380);
      }
      else {
        iVar4 = local_14[3];
        if (iVar4 == 1) {
          if (*(int *)(this + 0x198) < 3) {
            local_1c = 1;
          }
          else {
            local_1c = 2;
          }
        }
        else if (iVar4 == 2) {
          local_1c = *(int *)(this + 0x198);
        }
        else if (iVar4 == 0) {
          local_1c = 1;
        }
        for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
          *(int *)param_3 = local_14[0xb];
          if ((*(short *)(this + 0x128) == 0) || (*(int *)this == 0)) {
            if ((char)local_14[1] == '\0') {
              cVar3 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
              if (cVar3 < '\x01') {
                param_3[0x10] = SUB41(local_14[2],0);
              }
              else {
                param_3[0x10] = SUB41(*(undefined4 *)(this + 0x238),0);
              }
            }
            else {
              cVar3 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
              if (cVar3 < '\x01') {
                cVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
                param_3[0x10] = (map_monster)(cVar3 + (char)local_14[2]);
              }
              else {
                param_3[0x10] = SUB41(*(undefined4 *)(this + 0x238),0);
              }
              if (param_3[0x10] == (map_monster)0x0) {
                param_3[0x10] = (map_monster)0x1;
              }
              if (200 < (byte)param_3[0x10]) {
                param_3[0x10] = (map_monster)0xc8;
              }
            }
          }
          else {
            mVar2 = (map_monster)CParty::getMemberMaxLevel(*(CParty **)this);
            param_3[0x10] = mVar2;
            if (param_3[0x10] == (map_monster)0x0) {
              param_3[0x10] = (map_monster)0x1;
            }
            if (200 < (byte)param_3[0x10]) {
              param_3[0x10] = (map_monster)0xc8;
            }
          }
          if (*local_14 == -1) {
            iVar4 = G_CDataManager();
            uVar5 = CMonsterManager::get_levelrandom_mob(*(int *)(iVar4 + 8));
            *(undefined4 *)(param_3 + 0xc) = uVar5;
            if (local_18[0xe8] == (MapInfo)0x0) {
              pcVar6 = "generalMap";
            }
            else {
              pcVar6 = "layeredMap";
            }
            LogManager::logFormat
                      (1,"battle_field.cpp",
                       "void CBattle_Field::add_monsters_current_map(MOB_REF_LIST&, std::vector<int, std::allocator<int> >&, map_monster&, int&, int&, int&)"
                       ,0x5c0,
                       "HEROES_LOG : RANDOM MONSTER INDEX (%d) MONSTER LEVEL (%d) MAP INDEX (%d) [Map Kind : %s]\n"
                       ,*(undefined4 *)(param_3 + 0xc),(uint)(byte)param_3[0x10],
                       *(undefined4 *)(local_18 + 4),pcVar6);
          }
          else {
            *(int *)(param_3 + 0xc) = *local_14;
          }
          param_3[0x11] = SUB41(local_14[4],0);
          param_3[0x12] = SUB41(local_14[5],0);
          param_3[8] = SUB41(local_14[6],0);
          iVar4 = *param_5;
          *(int *)(param_3 + 4) = iVar4;
          *param_5 = iVar4 + 1;
          *(undefined4 *)(param_3 + 0x20) = 0;
          *(undefined4 *)(param_3 + 0x24) = 0;
          if (((param_3[8] == (map_monster)0x0) &&
              (cVar3 = map_monster::isNamedMonster(param_3), cVar3 != '\x01')) &&
             (cVar3 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0x188)), cVar3 != '\x01'))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)param_2,(int *)(param_3 + 4));
          }
          param_3[0x13] = *(map_monster *)(local_14 + 7);
          param_3[0x14] = SUB41(local_14[8],0);
          std::vector<int,std::allocator<int>>::operator=
                    ((vector<int,std::allocator<int>> *)(param_3 + 0x328),(vector *)(local_14 + 0xd)
                    );
          *(int *)(param_3 + 0x2c) = local_14[10];
          param_3[0x34] = *(map_monster *)(local_14 + 0xc);
          map_monster::map_monster(local_36c,param_3);
                    /* try { // try from 08301a6e to 08301a72 has its CatchHandler @ 08301a75 */
          MapInfo::Add_Mob(local_18,local_36c);
          map_monster::~map_monster(local_36c);
          if (param_3[0x13] == (map_monster)0x0) {
            *param_4 = *param_4 + 1;
          }
          if ((param_3[8] == (map_monster)0x3) && (local_18[0x45] != (MapInfo)0x1)) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(this + 0x118),(int *)(param_3 + 4));
          }
        }
        std::_List_const_iterator<_mapMonster>::operator++(local_20,(int)local_380);
        *param_6 = *param_6 + 1;
      }
    }
  }
  return;
}
```
