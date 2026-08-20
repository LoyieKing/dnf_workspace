# MoveMap

`_ZN13CBattle_Field7MoveMapEiiRb`

`CBattle_Field::MoveMap(int, int, bool&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08308ae6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08308ae6  _ZN13CBattle_Field7MoveMapEiiRb
#           CBattle_Field::MoveMap(int, int, bool&)
# range [0x08308ae6, 0x08308f4d]
08308ae6 +0x000:  push   %ebp
08308ae7 +0x001:  mov    %esp,%ebp
08308ae9 +0x003:  push   %esi
08308aea +0x004:  push   %ebx
08308aeb +0x005:  sub    $0x50,%esp
08308aee +0x008:  mov    0x8(%ebp),%eax
08308af1 +0x00b:  mov    %eax,(%esp)
08308af4 +0x00e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308af9 +0x013:  mov    %eax,-0x1c(%ebp)
08308afc +0x016:  mov    0x8(%ebp),%eax
08308aff +0x019:  mov    0x188(%eax),%eax
08308b05 +0x01f:  mov    %eax,(%esp)
08308b08 +0x022:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
08308b0d +0x027:  xor    $0x1,%eax
08308b10 +0x02a:  test   %al,%al
08308b12 +0x02c:  je     08308b49 <+0x63>
08308b14 +0x02e:  mov    0x8(%ebp),%eax
08308b17 +0x031:  mov    %eax,(%esp)
08308b1a +0x034:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
08308b1f +0x039:  xor    $0x1,%eax
08308b22 +0x03c:  test   %al,%al
08308b24 +0x03e:  je     08308b49 <+0x63>
08308b26 +0x040:  mov    0x10(%ebp),%eax
08308b29 +0x043:  mov    %eax,0x8(%esp)
08308b2d +0x047:  mov    0xc(%ebp),%eax
08308b30 +0x04a:  mov    %eax,0x4(%esp)
08308b34 +0x04e:  mov    0x8(%ebp),%eax
08308b37 +0x051:  mov    %eax,(%esp)
08308b3a +0x054:  call   0830766e <_ZN13CBattle_Field13moveMap_1_LogEii>  ; CBattle_Field::moveMap_1_Log(int, int)
08308b3f +0x059:  mov    $0x14,%ebx
08308b44 +0x05e:  jmp    08308f44 <+0x45e>
08308b49 +0x063:  mov    0x8(%ebp),%eax
08308b4c +0x066:  mov    0x188(%eax),%eax
08308b52 +0x06c:  test   %eax,%eax
08308b54 +0x06e:  je     08308b95 <+0xaf>
08308b56 +0x070:  mov    0x8(%ebp),%eax
08308b59 +0x073:  mov    0x188(%eax),%eax
08308b5f +0x079:  movzbl 0x89f(%eax),%eax
08308b66 +0x080:  test   %al,%al
08308b68 +0x082:  jle    08308b95 <+0xaf>
08308b6a +0x084:  mov    0x8(%ebp),%eax
08308b6d +0x087:  mov    %eax,(%esp)
08308b70 +0x08a:  call   08306d86 <_ZN13CBattle_Field18reset_blood_valuesEv>  ; CBattle_Field::reset_blood_values()
08308b75 +0x08f:  mov    0x8(%ebp),%eax
08308b78 +0x092:  add    $0x2ac,%eax
08308b7d +0x097:  mov    %eax,(%esp)
08308b80 +0x09a:  call   08306d66 <_ZN13CBattle_Field11CBloodRound18reset_blood_valuesEv>  ; CBattle_Field::CBloodRound::reset_blood_values()
08308b85 +0x09f:  mov    0x8(%ebp),%eax
08308b88 +0x0a2:  add    $0x2ac,%eax
08308b8d +0x0a7:  mov    %eax,(%esp)
08308b90 +0x0aa:  call   0830eb72 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x757>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x757
08308b95 +0x0af:  cmpl   $0x0,0xc(%ebp)
08308b99 +0x0b3:  js     08308bad <+0xc7>
08308b9b +0x0b5:  cmpl   $0x31,0xc(%ebp)
08308b9f +0x0b9:  jg     08308bad <+0xc7>
08308ba1 +0x0bb:  cmpl   $0x0,0x10(%ebp)
08308ba5 +0x0bf:  js     08308bad <+0xc7>
08308ba7 +0x0c1:  cmpl   $0x31,0x10(%ebp)
08308bab +0x0c5:  jle    08308bb7 <+0xd1>
08308bad +0x0c7:  mov    $0x1,%ebx
08308bb2 +0x0cc:  jmp    08308f44 <+0x45e>
08308bb7 +0x0d1:  mov    0x8(%ebp),%eax
08308bba +0x0d4:  mov    %eax,(%esp)
08308bbd +0x0d7:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308bc2 +0x0dc:  movzbl 0xe8(%eax),%eax
08308bc9 +0x0e3:  xor    $0x1,%eax
08308bcc +0x0e6:  test   %al,%al
08308bce +0x0e8:  je     08308c11 <+0x12b>
08308bd0 +0x0ea:  movl   $0xffffffff,-0x34(%ebp)
08308bd7 +0x0f1:  movl   $0xffffffff,-0x38(%ebp)
08308bde +0x0f8:  lea    -0x38(%ebp),%eax
08308be1 +0x0fb:  mov    %eax,0x8(%esp)
08308be5 +0x0ff:  lea    -0x34(%ebp),%eax
08308be8 +0x102:  mov    %eax,0x4(%esp)
08308bec +0x106:  mov    0x8(%ebp),%eax
08308bef +0x109:  mov    %eax,(%esp)
08308bf2 +0x10c:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08308bf7 +0x111:  mov    -0x34(%ebp),%eax
08308bfa +0x114:  cmp    %eax,0xc(%ebp)
08308bfd +0x117:  jne    08308c11 <+0x12b>
08308bff +0x119:  mov    -0x38(%ebp),%eax
08308c02 +0x11c:  cmp    %eax,0x10(%ebp)
08308c05 +0x11f:  jne    08308c11 <+0x12b>
08308c07 +0x121:  mov    $0x12,%ebx
08308c0c +0x126:  jmp    08308f44 <+0x45e>
08308c11 +0x12b:  mov    0x8(%ebp),%eax
08308c14 +0x12e:  mov    0x74(%eax),%eax
08308c17 +0x131:  test   %eax,%eax
08308c19 +0x133:  jne    08308c3e <+0x158>
08308c1b +0x135:  mov    0x10(%ebp),%eax
08308c1e +0x138:  mov    %eax,0x8(%esp)
08308c22 +0x13c:  mov    0xc(%ebp),%eax
08308c25 +0x13f:  mov    %eax,0x4(%esp)
08308c29 +0x143:  mov    0x8(%ebp),%eax
08308c2c +0x146:  mov    %eax,(%esp)
08308c2f +0x149:  call   08307740 <_ZN13CBattle_Field13moveMap_2_LogEii>  ; CBattle_Field::moveMap_2_Log(int, int)
08308c34 +0x14e:  mov    $0x15,%ebx
08308c39 +0x153:  jmp    08308f44 <+0x45e>
08308c3e +0x158:  mov    0x8(%ebp),%eax
08308c41 +0x15b:  mov    0x74(%eax),%eax
08308c44 +0x15e:  mov    (%eax),%eax
08308c46 +0x160:  cmp    0xc(%ebp),%eax
08308c49 +0x163:  jle    08308c59 <+0x173>
08308c4b +0x165:  mov    0x8(%ebp),%eax
08308c4e +0x168:  mov    0x74(%eax),%eax
08308c51 +0x16b:  mov    0x4(%eax),%eax
08308c54 +0x16e:  cmp    0x10(%ebp),%eax
08308c57 +0x171:  jg     08308c63 <+0x17d>
08308c59 +0x173:  mov    $0x15,%ebx
08308c5e +0x178:  jmp    08308f44 <+0x45e>
08308c63 +0x17d:  movl   $0x0,-0x18(%ebp)
08308c6a +0x184:  mov    0x10(%ebp),%eax
08308c6d +0x187:  mov    %eax,0x8(%esp)
08308c71 +0x18b:  mov    0xc(%ebp),%eax
08308c74 +0x18e:  mov    %eax,0x4(%esp)
08308c78 +0x192:  mov    0x8(%ebp),%eax
08308c7b +0x195:  mov    %eax,(%esp)
08308c7e +0x198:  call   083079ba <_ZN13CBattle_Field14check_boss_mapEii>  ; CBattle_Field::check_boss_map(int, int)
08308c83 +0x19d:  mov    %eax,-0x18(%ebp)
08308c86 +0x1a0:  cmpl   $0x0,-0x18(%ebp)
08308c8a +0x1a4:  setne  %al
08308c8d +0x1a7:  test   %al,%al
08308c8f +0x1a9:  je     08308c99 <+0x1b3>
08308c91 +0x1ab:  mov    -0x18(%ebp),%ebx
08308c94 +0x1ae:  jmp    08308f44 <+0x45e>
08308c99 +0x1b3:  mov    0x10(%ebp),%eax
08308c9c +0x1b6:  mov    %eax,0x8(%esp)
08308ca0 +0x1ba:  mov    0xc(%ebp),%eax
08308ca3 +0x1bd:  mov    %eax,0x4(%esp)
08308ca7 +0x1c1:  mov    0x8(%ebp),%eax
08308caa +0x1c4:  mov    %eax,(%esp)
08308cad +0x1c7:  call   08307b2a <_ZN13CBattle_Field19check_movemap_rangeEii>  ; CBattle_Field::check_movemap_range(int, int)
08308cb2 +0x1cc:  mov    %eax,-0x18(%ebp)
08308cb5 +0x1cf:  cmpl   $0x0,-0x18(%ebp)
08308cb9 +0x1d3:  setne  %al
08308cbc +0x1d6:  test   %al,%al
08308cbe +0x1d8:  je     08308cc8 <+0x1e2>
08308cc0 +0x1da:  mov    -0x18(%ebp),%ebx
08308cc3 +0x1dd:  jmp    08308f44 <+0x45e>
08308cc8 +0x1e2:  mov    0x8(%ebp),%eax
08308ccb +0x1e5:  mov    0x74(%eax),%eax
08308cce +0x1e8:  mov    0x10(%ebp),%edx
08308cd1 +0x1eb:  mov    %edx,0x8(%esp)
08308cd5 +0x1ef:  mov    0xc(%ebp),%edx
08308cd8 +0x1f2:  mov    %edx,0x4(%esp)
08308cdc +0x1f6:  mov    %eax,(%esp)
08308cdf +0x1f9:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
08308ce4 +0x1fe:  mov    %eax,-0x14(%ebp)
08308ce7 +0x201:  cmpl   $0x0,-0x14(%ebp)
08308ceb +0x205:  jne    08308d10 <+0x22a>
08308ced +0x207:  mov    0x10(%ebp),%eax
08308cf0 +0x20a:  mov    %eax,0x8(%esp)
08308cf4 +0x20e:  mov    0xc(%ebp),%eax
08308cf7 +0x211:  mov    %eax,0x4(%esp)
08308cfb +0x215:  mov    0x8(%ebp),%eax
08308cfe +0x218:  mov    %eax,(%esp)
08308d01 +0x21b:  call   08307812 <_ZN13CBattle_Field13moveMap_3_LogEii>  ; CBattle_Field::moveMap_3_Log(int, int)
08308d06 +0x220:  mov    $0x15,%ebx
08308d0b +0x225:  jmp    08308f44 <+0x45e>
08308d10 +0x22a:  mov    0x14(%ebp),%eax
08308d13 +0x22d:  mov    %eax,0xc(%esp)
08308d17 +0x231:  mov    0x10(%ebp),%eax
08308d1a +0x234:  mov    %eax,0x8(%esp)
08308d1e +0x238:  mov    0xc(%ebp),%eax
08308d21 +0x23b:  mov    %eax,0x4(%esp)
08308d25 +0x23f:  mov    0x8(%ebp),%eax
08308d28 +0x242:  mov    %eax,(%esp)
08308d2b +0x245:  call   08307d7c <_ZN13CBattle_Field17check_visited_mapEiiRb>  ; CBattle_Field::check_visited_map(int, int, bool&)
08308d30 +0x24a:  test   %al,%al
08308d32 +0x24c:  je     08308d3e <+0x258>
08308d34 +0x24e:  mov    $0x0,%ebx
08308d39 +0x253:  jmp    08308f44 <+0x45e>
08308d3e +0x258:  mov    0x10(%ebp),%eax
08308d41 +0x25b:  mov    %eax,0x8(%esp)
08308d45 +0x25f:  mov    0xc(%ebp),%eax
08308d48 +0x262:  mov    %eax,0x4(%esp)
08308d4c +0x266:  mov    0x8(%ebp),%eax
08308d4f +0x269:  mov    %eax,(%esp)
08308d52 +0x26c:  call   08307e44 <_ZN13CBattle_Field20get_invade_directionEii>  ; CBattle_Field::get_invade_direction(int, int)
08308d57 +0x271:  mov    %eax,-0x10(%ebp)
08308d5a +0x274:  mov    0x8(%ebp),%eax
08308d5d +0x277:  mov    0x194(%eax),%ebx
08308d63 +0x27d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08308d68 +0x282:  mov    %ebx,0x4(%esp)
08308d6c +0x286:  mov    %eax,(%esp)
08308d6f +0x289:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08308d74 +0x28e:  mov    %eax,-0xc(%ebp)
08308d77 +0x291:  cmpl   $0x0,-0xc(%ebp)
08308d7b +0x295:  jne    08308da7 <+0x2c1>
08308d7d +0x297:  mov    -0x14(%ebp),%eax
08308d80 +0x29a:  mov    %eax,0xc(%esp)
08308d84 +0x29e:  mov    0x10(%ebp),%eax
08308d87 +0x2a1:  mov    %eax,0x8(%esp)
08308d8b +0x2a5:  mov    0xc(%ebp),%eax
08308d8e +0x2a8:  mov    %eax,0x4(%esp)
08308d92 +0x2ac:  mov    0x8(%ebp),%eax
08308d95 +0x2af:  mov    %eax,(%esp)
08308d98 +0x2b2:  call   083078e4 <_ZN13CBattle_Field13moveMap_4_LogEiiPK10GridScript>  ; CBattle_Field::moveMap_4_Log(int, int, GridScript const*)
08308d9d +0x2b7:  mov    $0x1,%ebx
08308da2 +0x2bc:  jmp    08308f44 <+0x45e>
08308da7 +0x2c1:  movl   $0xffffffff,-0x20(%ebp)
08308dae +0x2c8:  movb   $0x1,-0x21(%ebp)
08308db2 +0x2cc:  mov    -0x10(%ebp),%eax
08308db5 +0x2cf:  mov    %eax,0x1c(%esp)
08308db9 +0x2d3:  mov    0x10(%ebp),%eax
08308dbc +0x2d6:  mov    %eax,0x18(%esp)
08308dc0 +0x2da:  mov    0xc(%ebp),%eax
08308dc3 +0x2dd:  mov    %eax,0x14(%esp)
08308dc7 +0x2e1:  lea    -0x21(%ebp),%eax
08308dca +0x2e4:  mov    %eax,0x10(%esp)
08308dce +0x2e8:  lea    -0x20(%ebp),%eax
08308dd1 +0x2eb:  mov    %eax,0xc(%esp)
08308dd5 +0x2ef:  mov    -0x14(%ebp),%eax
08308dd8 +0x2f2:  mov    %eax,0x8(%esp)
08308ddc +0x2f6:  mov    -0xc(%ebp),%eax
08308ddf +0x2f9:  mov    %eax,0x4(%esp)
08308de3 +0x2fd:  mov    0x8(%ebp),%eax
08308de6 +0x300:  mov    %eax,(%esp)
08308de9 +0x303:  call   08307eca <_ZN13CBattle_Field36choose_random_bossmap_from_dummymapsEPK8CDungeonPK10GridScriptRiRbiii>  ; CBattle_Field::choose_random_bossmap_from_dummymaps(CDungeon const*, GridScript const*, int&, bool&, int, int, int)
08308dee +0x308:  lea    -0x30(%ebp),%eax
08308df1 +0x30b:  mov    %eax,(%esp)
08308df4 +0x30e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08308df9 +0x313:  mov    0x8(%ebp),%eax
08308dfc +0x316:  movb   $0x0,0x1c8(%eax)
08308e03 +0x31d:  mov    -0x10(%ebp),%eax
08308e06 +0x320:  mov    %eax,0x1c(%esp)
08308e0a +0x324:  mov    0x10(%ebp),%eax
08308e0d +0x327:  mov    %eax,0x18(%esp)
08308e11 +0x32b:  mov    0xc(%ebp),%eax
08308e14 +0x32e:  mov    %eax,0x14(%esp)
08308e18 +0x332:  lea    -0x30(%ebp),%eax
08308e1b +0x335:  mov    %eax,0x10(%esp)
08308e1f +0x339:  lea    -0x20(%ebp),%eax
08308e22 +0x33c:  mov    %eax,0xc(%esp)
08308e26 +0x340:  mov    -0x14(%ebp),%eax
08308e29 +0x343:  mov    %eax,0x8(%esp)
08308e2d +0x347:  mov    -0xc(%ebp),%eax
08308e30 +0x34a:  mov    %eax,0x4(%esp)
08308e34 +0x34e:  mov    0x8(%ebp),%eax
08308e37 +0x351:  mov    %eax,(%esp)
08308e3a +0x354:  call   08308214 <_ZN13CBattle_Field18get_candidator_mapEPK8CDungeonPK10GridScriptRiRSt6vectorIiSaIiEEiii>  ; CBattle_Field::get_candidator_map(CDungeon const*, GridScript const*, int&, std::vector<int, std::allocator<int> >&, int, int, int)
08308e3f +0x359:  mov    %eax,-0x18(%ebp)
08308e42 +0x35c:  cmpl   $0x0,-0x18(%ebp)
08308e46 +0x360:  setne  %al
08308e49 +0x363:  test   %al,%al
08308e4b +0x365:  je     08308e55 <+0x36f>
08308e4d +0x367:  mov    -0x18(%ebp),%ebx
08308e50 +0x36a:  jmp    08308f39 <+0x453>
08308e55 +0x36f:  movzbl -0x21(%ebp),%eax
08308e59 +0x373:  movzbl %al,%eax
08308e5c +0x376:  mov    %eax,0xc(%esp)
08308e60 +0x37a:  mov    0x10(%ebp),%eax
08308e63 +0x37d:  mov    %eax,0x8(%esp)
08308e67 +0x381:  mov    0xc(%ebp),%eax
08308e6a +0x384:  mov    %eax,0x4(%esp)
08308e6e +0x388:  mov    0x8(%ebp),%eax
08308e71 +0x38b:  mov    %eax,(%esp)
08308e74 +0x38e:  call   083086d2 <_ZN13CBattle_Field15set_visited_mapEiib>  ; CBattle_Field::set_visited_map(int, int, bool)
08308e79 +0x393:  mov    0x10(%ebp),%eax
08308e7c +0x396:  mov    %eax,0x8(%esp)
08308e80 +0x39a:  mov    0xc(%ebp),%eax
08308e83 +0x39d:  mov    %eax,0x4(%esp)
08308e87 +0x3a1:  mov    0x8(%ebp),%eax
08308e8a +0x3a4:  mov    %eax,(%esp)
08308e8d +0x3a7:  call   0830878e <_ZN13CBattle_Field14swap_curpos_xyEii>  ; CBattle_Field::swap_curpos_xy(int, int)
08308e92 +0x3ac:  mov    0x10(%ebp),%eax
08308e95 +0x3af:  mov    %eax,0x8(%esp)
08308e99 +0x3b3:  mov    0xc(%ebp),%eax
08308e9c +0x3b6:  mov    %eax,0x4(%esp)
08308ea0 +0x3ba:  mov    0x8(%ebp),%eax
08308ea3 +0x3bd:  mov    %eax,(%esp)
08308ea6 +0x3c0:  call   08308a24 <_ZN13CBattle_Field20set_visited_map_gotoEii>  ; CBattle_Field::set_visited_map_goto(int, int)
08308eab +0x3c5:  mov    0x8(%ebp),%eax
08308eae +0x3c8:  mov    %eax,(%esp)
08308eb1 +0x3cb:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308eb6 +0x3d0:  mov    -0x14(%ebp),%edx
08308eb9 +0x3d3:  mov    (%edx),%edx
08308ebb +0x3d5:  mov    %dl,0x8(%eax)
08308ebe +0x3d8:  lea    -0x30(%ebp),%eax
08308ec1 +0x3db:  mov    %eax,0xc(%esp)
08308ec5 +0x3df:  lea    -0x20(%ebp),%eax
08308ec8 +0x3e2:  mov    %eax,0x8(%esp)
08308ecc +0x3e6:  mov    -0x14(%ebp),%eax
08308ecf +0x3e9:  mov    %eax,0x4(%esp)
08308ed3 +0x3ed:  mov    0x8(%ebp),%eax
08308ed6 +0x3f0:  mov    %eax,(%esp)
08308ed9 +0x3f3:  call   08308882 <_ZN13CBattle_Field10set_map_idEPK10GridScriptRiRSt6vectorIiSaIiEE>  ; CBattle_Field::set_map_id(GridScript const*, int&, std::vector<int, std::allocator<int> >&)
08308ede +0x3f8:  mov    %eax,-0x18(%ebp)
08308ee1 +0x3fb:  cmpl   $0x0,-0x18(%ebp)
08308ee5 +0x3ff:  setne  %al
08308ee8 +0x402:  test   %al,%al
08308eea +0x404:  je     08308ef1 <+0x40b>
08308eec +0x406:  mov    -0x18(%ebp),%ebx
08308eef +0x409:  jmp    08308f39 <+0x453>
08308ef1 +0x40b:  mov    0x8(%ebp),%eax
08308ef4 +0x40e:  mov    %eax,(%esp)
08308ef7 +0x411:  call   083031d2 <_ZN13CBattle_Field10ConsistMapEv>  ; CBattle_Field::ConsistMap()
08308efc +0x416:  mov    0x8(%ebp),%eax
08308eff +0x419:  mov    (%eax),%eax
08308f01 +0x41b:  test   %eax,%eax
08308f03 +0x41d:  je     08308f17 <+0x431>
08308f05 +0x41f:  mov    0x8(%ebp),%eax
08308f08 +0x422:  mov    (%eax),%eax
08308f0a +0x424:  add    $0x1844,%eax
08308f0f +0x429:  mov    %eax,(%esp)
08308f12 +0x42c:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
08308f17 +0x431:  mov    $0x0,%ebx
08308f1c +0x436:  jmp    08308f39 <+0x453>
08308f1e +0x438:  mov    %edx,%ebx
08308f20 +0x43a:  mov    %eax,%esi
08308f22 +0x43c:  lea    -0x30(%ebp),%eax
08308f25 +0x43f:  mov    %eax,(%esp)
08308f28 +0x442:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08308f2d +0x447:  mov    %esi,%eax
08308f2f +0x449:  mov    %ebx,%edx
08308f31 +0x44b:  mov    %eax,(%esp)
08308f34 +0x44e:  call   08ae3750 <_Unwind_Resume>
08308f39 +0x453:  lea    -0x30(%ebp),%eax
08308f3c +0x456:  mov    %eax,(%esp)
08308f3f +0x459:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08308f44 +0x45e:  mov    %ebx,%eax
08308f46 +0x460:  add    $0x50,%esp
08308f49 +0x463:  pop    %ebx
08308f4a +0x464:  pop    %esi
08308f4b +0x465:  pop    %ebp
08308f4c +0x466:  ret
08308f4d +0x467:  nop
```

## 反编译 C

```c
// CBattle_Field::MoveMap @ 0x8308ae6

/* CBattle_Field::MoveMap(int, int, bool&) */

int __thiscall CBattle_Field::MoveMap(CBattle_Field *this,int param_1,int param_2,bool *param_3)

{
  char cVar1;
  int iVar2;
  int local_3c;
  int local_38;
  vector<int,std::allocator<int>> local_34 [15];
  bool local_25;
  int local_24;
  undefined4 local_20;
  int local_1c;
  GridScript *local_18;
  int local_14;
  CDungeon *local_10;
  
  local_20 = GetCurrentMapInfo(this);
  cVar1 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188));
  if ((cVar1 == '\x01') || (cVar1 = check_grid_clear(this), cVar1 == '\x01')) {
    if ((*(int *)(this + 0x188) != 0) && ('\0' < *(char *)(*(int *)(this + 0x188) + 0x89f))) {
      reset_blood_values(this);
      CBloodRound::reset_blood_values((CBloodRound *)(this + 0x2ac));
      CBloodRound::setBloodRoundOrder((CBloodRound *)(this + 0x2ac));
    }
    if ((((param_1 < 0) || (0x31 < param_1)) || (param_2 < 0)) || (0x31 < param_2)) {
      iVar2 = 1;
    }
    else {
      iVar2 = GetCurrentMapInfo(this);
      if (*(char *)(iVar2 + 0xe8) != '\x01') {
        local_38 = -1;
        local_3c = -1;
        getCurPosXY(this,&local_38,&local_3c);
        if ((param_1 == local_38) && (param_2 == local_3c)) {
          return 0x12;
        }
      }
      if (*(int *)(this + 0x74) == 0) {
        moveMap_2_Log(this,param_1,param_2);
        iVar2 = 0x15;
      }
      else if ((param_1 < **(int **)(this + 0x74)) &&
              (param_2 < *(int *)(*(int *)(this + 0x74) + 4))) {
        local_1c = 0;
        iVar2 = check_boss_map(this,param_1,param_2);
        if ((iVar2 == 0) &&
           (local_1c = iVar2, iVar2 = check_movemap_range(this,param_1,param_2), iVar2 == 0)) {
          local_1c = iVar2;
          local_18 = (GridScript *)
                     MazeScript::getGridR(*(MazeScript **)(this + 0x74),param_1,param_2);
          if (local_18 == (GridScript *)0x0) {
            moveMap_3_Log(this,param_1,param_2);
            iVar2 = 0x15;
          }
          else {
            cVar1 = check_visited_map(this,param_1,param_2,param_3);
            if (cVar1 == '\0') {
              local_14 = get_invade_direction(this,param_1,param_2);
              iVar2 = G_CDataManager();
              local_10 = (CDungeon *)CDataManager::find_dungeon(iVar2);
              if (local_10 == (CDungeon *)0x0) {
                moveMap_4_Log(this,param_1,param_2,local_18);
                iVar2 = 1;
              }
              else {
                local_24 = -1;
                local_25 = true;
                choose_random_bossmap_from_dummymaps
                          (this,local_10,local_18,&local_24,&local_25,param_1,param_2,local_14);
                std::vector<int,std::allocator<int>>::vector(local_34);
                this[0x1c8] = (CBattle_Field)0x0;
                    /* try { // try from 08308e3a to 08308f16 has its CatchHandler @ 08308f1e */
                iVar2 = get_candidator_map(this,local_10,local_18,&local_24,(vector *)local_34,
                                           param_1,param_2,local_14);
                local_1c = iVar2;
                if (iVar2 == 0) {
                  set_visited_map(this,param_1,param_2,local_25);
                  swap_curpos_xy(this,param_1,param_2);
                  set_visited_map_goto(this,param_1,param_2);
                  iVar2 = GetCurrentMapInfo(this);
                  *(char *)(iVar2 + 8) = (char)*(undefined4 *)local_18;
                  iVar2 = set_map_id(this,local_18,&local_24,(vector *)local_34);
                  local_1c = iVar2;
                  if (iVar2 == 0) {
                    ConsistMap(this);
                    if (*(int *)this != 0) {
                      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      clear((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            (*(int *)this + 0x1844));
                    }
                    iVar2 = 0;
                  }
                }
                std::vector<int,std::allocator<int>>::~vector(local_34);
              }
            }
            else {
              iVar2 = 0;
            }
          }
        }
      }
      else {
        iVar2 = 0x15;
      }
    }
  }
  else {
    moveMap_1_Log(this,param_1,param_2);
    iVar2 = 0x14;
  }
  return iVar2;
}
```
