# _MakeDropItems

`_ZN13CBattle_Field14_MakeDropItemsERSt4listI8map_itemSaIS1_EER7MapInfoRK11map_monstertiiibRSt6vectorIbSaIbEEfi`

`CBattle_Field::_MakeDropItems(std::list<map_item, std::allocator<map_item> >&, MapInfo&, map_monster const&, unsigned short, int, int, int, bool, std::vector<bool, std::allocator<bool> >&, float, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830adf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830adf6  _ZN13CBattle_Field14_MakeDropItemsERSt4listI8map_itemSaIS1_EER7MapInfoRK11map_monstertiiibRSt6vectorIbSaIbEEfi
#           CBattle_Field::_MakeDropItems(std::list<map_item, std::allocator<map_item> >&, MapInfo&, map_monster const&, unsigned short, int, int, int, bool, std::vector<bool, std::allocator<bool> >&, float, int)
# range [0x0830adf6, 0x0830b847]
0830adf6 +0x000:  push   %ebp
0830adf7 +0x001:  mov    %esp,%ebp
0830adf9 +0x003:  push   %edi
0830adfa +0x004:  push   %esi
0830adfb +0x005:  push   %ebx
0830adfc +0x006:  sub    $0x17c,%esp
0830ae02 +0x00c:  mov    0x18(%ebp),%edx
0830ae05 +0x00f:  mov    0x28(%ebp),%eax
0830ae08 +0x012:  mov    %dx,-0x11c(%ebp)
0830ae0f +0x019:  mov    %al,-0x120(%ebp)
0830ae15 +0x01f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830ae1c +0x026:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0830ae21 +0x02b:  mov    %eax,-0x40(%ebp)
0830ae24 +0x02e:  mov    0x14(%ebp),%eax
0830ae27 +0x031:  movzbl 0x8(%eax),%eax
0830ae2b +0x035:  movsbl %al,%eax
0830ae2e +0x038:  mov    %eax,0x4(%esp)
0830ae32 +0x03c:  mov    0x8(%ebp),%eax
0830ae35 +0x03f:  mov    %eax,(%esp)
0830ae38 +0x042:  call   0830a812 <_ZNK13CBattle_Field34convertAPCRoleType2MonsterRoleTypeEc>  ; CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const
0830ae3d +0x047:  mov    %al,-0x39(%ebp)
0830ae40 +0x04a:  lea    -0xc0(%ebp),%eax
0830ae46 +0x050:  mov    %eax,(%esp)
0830ae49 +0x053:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
0830ae4e +0x058:  mov    0x24(%ebp),%eax
0830ae51 +0x05b:  mov    %eax,-0xc0(%ebp)
0830ae57 +0x061:  mov    0x8(%ebp),%eax
0830ae5a +0x064:  mov    %eax,(%esp)
0830ae5d +0x067:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830ae62 +0x06c:  mov    %al,-0x89(%ebp)
0830ae68 +0x072:  mov    0x8(%ebp),%eax
0830ae6b +0x075:  mov    0x188(%eax),%eax
0830ae71 +0x07b:  mov    %eax,(%esp)
0830ae74 +0x07e:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0830ae79 +0x083:  test   %al,%al
0830ae7b +0x085:  setg   %al
0830ae7e +0x088:  test   %al,%al
0830ae80 +0x08a:  je     0830ae93 <+0x9d>
0830ae82 +0x08c:  mov    0x8(%ebp),%eax
0830ae85 +0x08f:  mov    0x238(%eax),%eax
0830ae8b +0x095:  mov    %al,-0x8a(%ebp)
0830ae91 +0x09b:  jmp    0830aeaa <+0xb4>
0830ae93 +0x09d:  mov    0x8(%ebp),%eax
0830ae96 +0x0a0:  mov    0x188(%eax),%eax
0830ae9c +0x0a6:  mov    %eax,(%esp)
0830ae9f +0x0a9:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0830aea4 +0x0ae:  mov    %al,-0x8a(%ebp)
0830aeaa +0x0b4:  movzbl -0x39(%ebp),%eax
0830aeae +0x0b8:  mov    %al,-0x8b(%ebp)
0830aeb4 +0x0be:  mov    0x14(%ebp),%eax
0830aeb7 +0x0c1:  movzbl 0x10(%eax),%eax
0830aebb +0x0c5:  mov    %al,-0x8c(%ebp)
0830aec1 +0x0cb:  mov    0x1c(%ebp),%eax
0830aec4 +0x0ce:  mov    %al,-0x88(%ebp)
0830aeca +0x0d4:  mov    0x14(%ebp),%eax
0830aecd +0x0d7:  movzbl 0x12(%eax),%eax
0830aed1 +0x0db:  mov    %al,-0x87(%ebp)
0830aed7 +0x0e1:  mov    0x20(%ebp),%eax
0830aeda +0x0e4:  mov    %eax,-0x84(%ebp)
0830aee0 +0x0ea:  movb   $0x0,-0x80(%ebp)
0830aee4 +0x0ee:  mov    0x8(%ebp),%eax
0830aee7 +0x0f1:  mov    %eax,(%esp)
0830aeea +0x0f4:  call   0830aa46 <_ZN13CBattle_Field22getItemDropDungeonTypeEv>  ; CBattle_Field::getItemDropDungeonType()
0830aeef +0x0f9:  mov    %al,-0x7f(%ebp)
0830aef2 +0x0fc:  mov    0x2c(%ebp),%eax
0830aef5 +0x0ff:  mov    %eax,0x4(%esp)
0830aef9 +0x103:  lea    -0xc0(%ebp),%eax
0830aeff +0x109:  add    $0x8,%eax
0830af02 +0x10c:  mov    %eax,(%esp)
0830af05 +0x10f:  call   08311d3a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x391f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x391f
0830af0a +0x114:  mov    0x30(%ebp),%eax
0830af0d +0x117:  mov    %eax,-0xa4(%ebp)
0830af13 +0x11d:  movl   $0x0,-0x38(%ebp)
0830af1a +0x124:  movl   $0x0,-0x34(%ebp)
0830af21 +0x12b:  lea    -0x78(%ebp),%eax
0830af24 +0x12e:  mov    %eax,(%esp)
0830af27 +0x131:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
0830af2c +0x136:  mov    0x8(%ebp),%eax
0830af2f +0x139:  mov    (%eax),%eax
0830af31 +0x13b:  test   %eax,%eax
0830af33 +0x13d:  je     0830b067 <+0x271>
0830af39 +0x143:  mov    0x8(%ebp),%eax
0830af3c +0x146:  mov    (%eax),%eax
0830af3e +0x148:  movl   $0x1,0x8(%esp)
0830af46 +0x150:  lea    -0x78(%ebp),%edx
0830af49 +0x153:  add    $0xc,%edx
0830af4c +0x156:  mov    %edx,0x4(%esp)
0830af50 +0x15a:  mov    %eax,(%esp)
0830af53 +0x15d:  call   085b61be <_ZN6CParty12GetLuckPointEP10CLuckPointb>  ; CParty::GetLuckPoint(CLuckPoint*, bool)
0830af58 +0x162:  mov    0x8(%ebp),%eax
0830af5b +0x165:  mov    (%eax),%eax
0830af5d +0x167:  mov    %eax,(%esp)
0830af60 +0x16a:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
0830af65 +0x16f:  test   %al,%al
0830af67 +0x171:  je     0830af81 <+0x18b>
0830af69 +0x173:  mov    0x8(%ebp),%eax
0830af6c +0x176:  mov    (%eax),%eax
0830af6e +0x178:  mov    %eax,(%esp)
0830af71 +0x17b:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830af76 +0x180:  test   %eax,%eax
0830af78 +0x182:  je     0830af81 <+0x18b>
0830af7a +0x184:  mov    $0x1,%eax
0830af7f +0x189:  jmp    0830af86 <+0x190>
0830af81 +0x18b:  mov    $0x0,%eax
0830af86 +0x190:  test   %al,%al
0830af88 +0x192:  je     0830b067 <+0x271>
0830af8e +0x198:  mov    0x8(%ebp),%eax
0830af91 +0x19b:  mov    (%eax),%eax
0830af93 +0x19d:  mov    %eax,(%esp)
0830af96 +0x1a0:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830af9b +0x1a5:  mov    %eax,(%esp)
0830af9e +0x1a8:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0830afa3 +0x1ad:  cmp    $0x1,%eax
0830afa6 +0x1b0:  sete   %al
0830afa9 +0x1b3:  test   %al,%al
0830afab +0x1b5:  je     0830b067 <+0x271>
0830afb1 +0x1bb:  mov    0x8(%ebp),%eax
0830afb4 +0x1be:  mov    (%eax),%eax
0830afb6 +0x1c0:  mov    %eax,(%esp)
0830afb9 +0x1c3:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830afbe +0x1c8:  mov    %eax,(%esp)
0830afc1 +0x1cb:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
0830afc6 +0x1d0:  mov    %eax,-0x2c(%ebp)
0830afc9 +0x1d3:  cmpl   $0x0,-0x2c(%ebp)
0830afcd +0x1d7:  je     0830b067 <+0x271>
0830afd3 +0x1dd:  mov    0x8(%ebp),%eax
0830afd6 +0x1e0:  mov    (%eax),%eax
0830afd8 +0x1e2:  mov    %eax,(%esp)
0830afdb +0x1e5:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830afe0 +0x1ea:  movl   $0x1,0x8(%esp)
0830afe8 +0x1f2:  mov    %eax,0x4(%esp)
0830afec +0x1f6:  mov    -0x2c(%ebp),%eax
0830afef +0x1f9:  mov    %eax,(%esp)
0830aff2 +0x1fc:  call   080d990e <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE>  ; BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)
0830aff7 +0x201:  mov    %eax,-0x38(%ebp)
0830affa +0x204:  mov    0x8(%ebp),%eax
0830affd +0x207:  mov    (%eax),%eax
0830afff +0x209:  mov    %eax,(%esp)
0830b002 +0x20c:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830b007 +0x211:  movl   $0x2,0x8(%esp)
0830b00f +0x219:  mov    %eax,0x4(%esp)
0830b013 +0x21d:  mov    -0x2c(%ebp),%eax
0830b016 +0x220:  mov    %eax,(%esp)
0830b019 +0x223:  call   080d990e <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE>  ; BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)
0830b01e +0x228:  mov    %eax,-0x34(%ebp)
0830b021 +0x22b:  movb   $0x1,-0x9b(%ebp)
0830b028 +0x232:  mov    0x8(%ebp),%eax
0830b02b +0x235:  mov    (%eax),%eax
0830b02d +0x237:  mov    %eax,(%esp)
0830b030 +0x23a:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830b035 +0x23f:  mov    %eax,(%esp)
0830b038 +0x242:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0830b03d +0x247:  mov    %eax,-0x98(%ebp)
0830b043 +0x24d:  mov    0x8(%ebp),%eax
0830b046 +0x250:  mov    (%eax),%eax
0830b048 +0x252:  mov    %eax,(%esp)
0830b04b +0x255:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830b050 +0x25a:  mov    %eax,(%esp)
0830b053 +0x25d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0830b058 +0x262:  mov    %eax,-0x94(%ebp)
0830b05e +0x268:  mov    -0x34(%ebp),%eax
0830b061 +0x26b:  mov    %eax,-0x90(%ebp)
0830b067 +0x271:  mov    0x34(%ebp),%eax
0830b06a +0x274:  mov    %eax,0x8(%esp)
0830b06e +0x278:  lea    -0xc0(%ebp),%eax
0830b074 +0x27e:  mov    %eax,0x4(%esp)
0830b078 +0x282:  mov    0x8(%ebp),%eax
0830b07b +0x285:  mov    %eax,(%esp)
0830b07e +0x288:  call   0830b848 <_ZN13CBattle_Field18setPremiumDropRateERN8WongWork19stGenerateRefData_tEi>  ; CBattle_Field::setPremiumDropRate(WongWork::stGenerateRefData_t&, int)
0830b083 +0x28d:  mov    0x8(%ebp),%eax
0830b086 +0x290:  mov    0x188(%eax),%eax
0830b08c +0x296:  movzbl 0x89f(%eax),%eax
0830b093 +0x29d:  test   %al,%al
0830b095 +0x29f:  jle    0830b09d <+0x2a7>
0830b097 +0x2a1:  movb   $0x1,-0x7c(%ebp)
0830b09b +0x2a5:  jmp    0830b0a1 <+0x2ab>
0830b09d +0x2a7:  movb   $0x0,-0x7c(%ebp)
0830b0a1 +0x2ab:  mov    0x8(%ebp),%eax
0830b0a4 +0x2ae:  mov    0x188(%eax),%eax
0830b0aa +0x2b4:  movzbl 0x89e(%eax),%eax
0830b0b1 +0x2bb:  test   %al,%al
0830b0b3 +0x2bd:  je     0830b0bc <+0x2c6>
0830b0b5 +0x2bf:  mov    $0x1,%eax
0830b0ba +0x2c4:  jmp    0830b0c1 <+0x2cb>
0830b0bc +0x2c6:  mov    $0x0,%eax
0830b0c1 +0x2cb:  mov    %al,-0x7d(%ebp)
0830b0c4 +0x2ce:  movzbl -0x7d(%ebp),%eax
0830b0c8 +0x2d2:  xor    $0x1,%eax
0830b0cb +0x2d5:  test   %al,%al
0830b0cd +0x2d7:  je     0830b125 <+0x32f>
0830b0cf +0x2d9:  movzbl -0x7c(%ebp),%eax
0830b0d3 +0x2dd:  xor    $0x1,%eax
0830b0d6 +0x2e0:  test   %al,%al
0830b0d8 +0x2e2:  je     0830b125 <+0x32f>
0830b0da +0x2e4:  mov    0x14(%ebp),%eax
0830b0dd +0x2e7:  movzbl 0x349(%eax),%eax
0830b0e4 +0x2ee:  xor    $0x1,%eax
0830b0e7 +0x2f1:  test   %al,%al
0830b0e9 +0x2f3:  je     0830b125 <+0x32f>
0830b0eb +0x2f5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b0f0 +0x2fa:  mov    %eax,(%esp)
0830b0f3 +0x2fd:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b0f8 +0x302:  movl   $0x0,0x4(%esp)
0830b100 +0x30a:  mov    %eax,(%esp)
0830b103 +0x30d:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b108 +0x312:  mov    (%eax),%edx
0830b10a +0x314:  add    $0x8,%edx
0830b10d +0x317:  mov    (%edx),%ecx
0830b10f +0x319:  lea    -0x78(%ebp),%edx
0830b112 +0x31c:  mov    %edx,0x8(%esp)
0830b116 +0x320:  lea    -0xc0(%ebp),%edx
0830b11c +0x326:  mov    %edx,0x4(%esp)
0830b120 +0x32a:  mov    %eax,(%esp)
0830b123 +0x32d:  call   *%ecx
0830b125 +0x32f:  mov    0x8(%ebp),%eax
0830b128 +0x332:  mov    0x188(%eax),%eax
0830b12e +0x338:  mov    %eax,(%esp)
0830b131 +0x33b:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0830b136 +0x340:  test   %al,%al
0830b138 +0x342:  setg   %al
0830b13b +0x345:  test   %al,%al
0830b13d +0x347:  je     0830b150 <+0x35a>
0830b13f +0x349:  mov    0x8(%ebp),%eax
0830b142 +0x34c:  mov    0x238(%eax),%eax
0830b148 +0x352:  mov    %al,-0x8b(%ebp)
0830b14e +0x358:  jmp    0830b167 <+0x371>
0830b150 +0x35a:  mov    0x8(%ebp),%eax
0830b153 +0x35d:  mov    0x188(%eax),%eax
0830b159 +0x363:  mov    %eax,(%esp)
0830b15c +0x366:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0830b161 +0x36b:  mov    %al,-0x8b(%ebp)
0830b167 +0x371:  mov    0x8(%ebp),%eax
0830b16a +0x374:  mov    %eax,(%esp)
0830b16d +0x377:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830b172 +0x37c:  mov    %al,-0x8a(%ebp)
0830b178 +0x382:  mov    0x14(%ebp),%eax
0830b17b +0x385:  mov    0xc(%eax),%eax
0830b17e +0x388:  mov    %eax,-0x88(%ebp)
0830b184 +0x38e:  mov    0x14(%ebp),%eax
0830b187 +0x391:  movzbl 0x8(%eax),%eax
0830b18b +0x395:  mov    %al,-0x84(%ebp)
0830b191 +0x39b:  mov    0x14(%ebp),%eax
0830b194 +0x39e:  movzbl 0x10(%eax),%eax
0830b198 +0x3a2:  mov    %al,-0x8c(%ebp)
0830b19e +0x3a8:  mov    0x14(%ebp),%eax
0830b1a1 +0x3ab:  movzbl 0x11(%eax),%eax
0830b1a5 +0x3af:  mov    %al,-0x83(%ebp)
0830b1ab +0x3b5:  mov    0x1c(%ebp),%eax
0830b1ae +0x3b8:  mov    %al,-0x82(%ebp)
0830b1b4 +0x3be:  mov    0x8(%ebp),%eax
0830b1b7 +0x3c1:  mov    (%eax),%eax
0830b1b9 +0x3c3:  mov    %eax,(%esp)
0830b1bc +0x3c6:  call   085b60be <_ZN6CParty17getMemberMaxLevelEv>  ; CParty::getMemberMaxLevel()
0830b1c1 +0x3cb:  mov    %al,-0x81(%ebp)
0830b1c7 +0x3d1:  movzbl -0x120(%ebp),%eax
0830b1ce +0x3d8:  mov    %al,-0x80(%ebp)
0830b1d1 +0x3db:  mov    0x14(%ebp),%eax
0830b1d4 +0x3de:  movzwl 0x334(%eax),%eax
0830b1db +0x3e5:  test   %ax,%ax
0830b1de +0x3e8:  setne  %al
0830b1e1 +0x3eb:  mov    %al,-0x7f(%ebp)
0830b1e4 +0x3ee:  mov    0x14(%ebp),%eax
0830b1e7 +0x3f1:  movzbl 0x338(%eax),%eax
0830b1ee +0x3f8:  mov    %al,-0x7e(%ebp)
0830b1f1 +0x3fb:  mov    0x14(%ebp),%eax
0830b1f4 +0x3fe:  movzbl 0x34b(%eax),%eax
0830b1fb +0x405:  test   %al,%al
0830b1fd +0x407:  je     0830b206 <+0x410>
0830b1ff +0x409:  mov    $0x1,%eax
0830b204 +0x40e:  jmp    0830b20b <+0x415>
0830b206 +0x410:  mov    $0x0,%eax
0830b20b +0x415:  mov    %al,-0x7b(%ebp)
0830b20e +0x418:  mov    0x8(%ebp),%eax
0830b211 +0x41b:  mov    (%eax),%eax
0830b213 +0x41d:  mov    %eax,(%esp)
0830b216 +0x420:  call   085bdc00 <_ZN6CParty27GetPartyMemberForceDropFlagEv>  ; CParty::GetPartyMemberForceDropFlag()
0830b21b +0x425:  mov    %al,-0x9c(%ebp)
0830b221 +0x42b:  mov    0x14(%ebp),%eax
0830b224 +0x42e:  movzbl 0x349(%eax),%eax
0830b22b +0x435:  xor    $0x1,%eax
0830b22e +0x438:  test   %al,%al
0830b230 +0x43a:  jne    0830b23a <+0x444>
0830b232 +0x43c:  movzbl -0x7f(%ebp),%eax
0830b236 +0x440:  test   %al,%al
0830b238 +0x442:  je     0830b274 <+0x47e>
0830b23a +0x444:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b23f +0x449:  mov    %eax,(%esp)
0830b242 +0x44c:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b247 +0x451:  movl   $0x0,0x4(%esp)
0830b24f +0x459:  mov    %eax,(%esp)
0830b252 +0x45c:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b257 +0x461:  mov    (%eax),%edx
0830b259 +0x463:  add    $0xc,%edx
0830b25c +0x466:  mov    (%edx),%ecx
0830b25e +0x468:  lea    -0x78(%ebp),%edx
0830b261 +0x46b:  mov    %edx,0x8(%esp)
0830b265 +0x46f:  lea    -0xc0(%ebp),%edx
0830b26b +0x475:  mov    %edx,0x4(%esp)
0830b26f +0x479:  mov    %eax,(%esp)
0830b272 +0x47c:  call   *%ecx
0830b274 +0x47e:  mov    0x8(%ebp),%eax
0830b277 +0x481:  mov    0x188(%eax),%eax
0830b27d +0x487:  mov    %eax,(%esp)
0830b280 +0x48a:  call   0830e604 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1e9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1e9
0830b285 +0x48f:  mov    %eax,-0x8c(%ebp)
0830b28b +0x495:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b290 +0x49a:  mov    %eax,(%esp)
0830b293 +0x49d:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b298 +0x4a2:  movl   $0x4,0x4(%esp)
0830b2a0 +0x4aa:  mov    %eax,(%esp)
0830b2a3 +0x4ad:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b2a8 +0x4b2:  mov    (%eax),%edx
0830b2aa +0x4b4:  add    $0xc,%edx
0830b2ad +0x4b7:  mov    (%edx),%ecx
0830b2af +0x4b9:  lea    -0x78(%ebp),%edx
0830b2b2 +0x4bc:  mov    %edx,0x8(%esp)
0830b2b6 +0x4c0:  lea    -0xc0(%ebp),%edx
0830b2bc +0x4c6:  mov    %edx,0x4(%esp)
0830b2c0 +0x4ca:  mov    %eax,(%esp)
0830b2c3 +0x4cd:  call   *%ecx
0830b2c5 +0x4cf:  mov    0x14(%ebp),%eax
0830b2c8 +0x4d2:  movzbl 0x10(%eax),%eax
0830b2cc +0x4d6:  mov    %al,-0x8b(%ebp)
0830b2d2 +0x4dc:  movzbl -0x7d(%ebp),%eax
0830b2d6 +0x4e0:  xor    $0x1,%eax
0830b2d9 +0x4e3:  test   %al,%al
0830b2db +0x4e5:  je     0830b3ba <+0x5c4>
0830b2e1 +0x4eb:  movzbl -0x7c(%ebp),%eax
0830b2e5 +0x4ef:  xor    $0x1,%eax
0830b2e8 +0x4f2:  test   %al,%al
0830b2ea +0x4f4:  je     0830b3ba <+0x5c4>
0830b2f0 +0x4fa:  mov    0x14(%ebp),%eax
0830b2f3 +0x4fd:  movzbl 0x349(%eax),%eax
0830b2fa +0x504:  xor    $0x1,%eax
0830b2fd +0x507:  test   %al,%al
0830b2ff +0x509:  je     0830b3ba <+0x5c4>
0830b305 +0x50f:  cmpl   $0x0,0x1c(%ebp)
0830b309 +0x513:  jle    0830b380 <+0x58a>
0830b30b +0x515:  cmpl   $0x4,0x1c(%ebp)
0830b30f +0x519:  jg     0830b380 <+0x58a>
0830b311 +0x51b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b316 +0x520:  mov    0x1c(%ebp),%edx
0830b319 +0x523:  sub    $0x1,%edx
0830b31c +0x526:  movzbl 0x524(%eax,%edx,1),%eax
0830b324 +0x52e:  movsbl %al,%eax
0830b327 +0x531:  mov    %eax,-0x28(%ebp)
0830b32a +0x534:  movl   $0x0,-0x24(%ebp)
0830b331 +0x53b:  jmp    0830b371 <+0x57b>
0830b333 +0x53d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b338 +0x542:  mov    %eax,(%esp)
0830b33b +0x545:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b340 +0x54a:  movl   $0x3,0x4(%esp)
0830b348 +0x552:  mov    %eax,(%esp)
0830b34b +0x555:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b350 +0x55a:  mov    (%eax),%edx
0830b352 +0x55c:  add    $0x8,%edx
0830b355 +0x55f:  mov    (%edx),%ecx
0830b357 +0x561:  lea    -0x78(%ebp),%edx
0830b35a +0x564:  mov    %edx,0x8(%esp)
0830b35e +0x568:  lea    -0xc0(%ebp),%edx
0830b364 +0x56e:  mov    %edx,0x4(%esp)
0830b368 +0x572:  mov    %eax,(%esp)
0830b36b +0x575:  call   *%ecx
0830b36d +0x577:  addl   $0x1,-0x24(%ebp)
0830b371 +0x57b:  mov    -0x24(%ebp),%eax
0830b374 +0x57e:  cmp    -0x28(%ebp),%eax
0830b377 +0x581:  setl   %al
0830b37a +0x584:  test   %al,%al
0830b37c +0x586:  jne    0830b333 <+0x53d>
0830b37e +0x588:  jmp    0830b3ba <+0x5c4>
0830b380 +0x58a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b385 +0x58f:  mov    %eax,(%esp)
0830b388 +0x592:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b38d +0x597:  movl   $0x3,0x4(%esp)
0830b395 +0x59f:  mov    %eax,(%esp)
0830b398 +0x5a2:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b39d +0x5a7:  mov    (%eax),%edx
0830b39f +0x5a9:  add    $0x8,%edx
0830b3a2 +0x5ac:  mov    (%edx),%ecx
0830b3a4 +0x5ae:  lea    -0x78(%ebp),%edx
0830b3a7 +0x5b1:  mov    %edx,0x8(%esp)
0830b3ab +0x5b5:  lea    -0xc0(%ebp),%edx
0830b3b1 +0x5bb:  mov    %edx,0x4(%esp)
0830b3b5 +0x5bf:  mov    %eax,(%esp)
0830b3b8 +0x5c2:  call   *%ecx
0830b3ba +0x5c4:  movzbl -0x7d(%ebp),%eax
0830b3be +0x5c8:  xor    $0x1,%eax
0830b3c1 +0x5cb:  test   %al,%al
0830b3c3 +0x5cd:  je     0830b51c <+0x726>
0830b3c9 +0x5d3:  movzbl -0x7c(%ebp),%eax
0830b3cd +0x5d7:  xor    $0x1,%eax
0830b3d0 +0x5da:  test   %al,%al
0830b3d2 +0x5dc:  je     0830b51c <+0x726>
0830b3d8 +0x5e2:  mov    0x8(%ebp),%eax
0830b3db +0x5e5:  mov    (%eax),%eax
0830b3dd +0x5e7:  test   %eax,%eax
0830b3df +0x5e9:  je     0830b437 <+0x641>
0830b3e1 +0x5eb:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0830b3e6 +0x5f0:  movl   $0x16,0x4(%esp)
0830b3ee +0x5f8:  mov    %eax,(%esp)
0830b3f1 +0x5fb:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0830b3f6 +0x600:  mov    (%eax),%edx
0830b3f8 +0x602:  add    $0x34,%edx
0830b3fb +0x605:  mov    (%edx),%edx
0830b3fd +0x607:  movl   $0x0,0x4(%esp)
0830b405 +0x60f:  mov    %eax,(%esp)
0830b408 +0x612:  call   *%edx
0830b40a +0x614:  test   %al,%al
0830b40c +0x616:  je     0830b437 <+0x641>
0830b40e +0x618:  mov    0x8(%ebp),%eax
0830b411 +0x61b:  mov    (%eax),%eax
0830b413 +0x61d:  mov    %eax,(%esp)
0830b416 +0x620:  call   085b4a70 <_ZN6CParty15hasPCRoomPlayerEv>  ; CParty::hasPCRoomPlayer()
0830b41b +0x625:  test   %al,%al
0830b41d +0x627:  je     0830b437 <+0x641>
0830b41f +0x629:  mov    0x14(%ebp),%eax
0830b422 +0x62c:  movzbl 0x349(%eax),%eax
0830b429 +0x633:  xor    $0x1,%eax
0830b42c +0x636:  test   %al,%al
0830b42e +0x638:  je     0830b437 <+0x641>
0830b430 +0x63a:  mov    $0x1,%eax
0830b435 +0x63f:  jmp    0830b43c <+0x646>
0830b437 +0x641:  mov    $0x0,%eax
0830b43c +0x646:  test   %al,%al
0830b43e +0x648:  je     0830b47a <+0x684>
0830b440 +0x64a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b445 +0x64f:  mov    %eax,(%esp)
0830b448 +0x652:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b44d +0x657:  movl   $0x5,0x4(%esp)
0830b455 +0x65f:  mov    %eax,(%esp)
0830b458 +0x662:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b45d +0x667:  mov    (%eax),%edx
0830b45f +0x669:  add    $0x8,%edx
0830b462 +0x66c:  mov    (%edx),%ecx
0830b464 +0x66e:  lea    -0x78(%ebp),%edx
0830b467 +0x671:  mov    %edx,0x8(%esp)
0830b46b +0x675:  lea    -0xc0(%ebp),%edx
0830b471 +0x67b:  mov    %edx,0x4(%esp)
0830b475 +0x67f:  mov    %eax,(%esp)
0830b478 +0x682:  call   *%ecx
0830b47a +0x684:  mov    0x8(%ebp),%eax
0830b47d +0x687:  mov    (%eax),%eax
0830b47f +0x689:  test   %eax,%eax
0830b481 +0x68b:  je     0830b4d9 <+0x6e3>
0830b483 +0x68d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0830b488 +0x692:  movl   $0x30,0x4(%esp)
0830b490 +0x69a:  mov    %eax,(%esp)
0830b493 +0x69d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0830b498 +0x6a2:  mov    (%eax),%edx
0830b49a +0x6a4:  add    $0x34,%edx
0830b49d +0x6a7:  mov    (%edx),%edx
0830b49f +0x6a9:  movl   $0x0,0x4(%esp)
0830b4a7 +0x6b1:  mov    %eax,(%esp)
0830b4aa +0x6b4:  call   *%edx
0830b4ac +0x6b6:  test   %al,%al
0830b4ae +0x6b8:  je     0830b4d9 <+0x6e3>
0830b4b0 +0x6ba:  mov    0x8(%ebp),%eax
0830b4b3 +0x6bd:  mov    (%eax),%eax
0830b4b5 +0x6bf:  mov    %eax,(%esp)
0830b4b8 +0x6c2:  call   085b4a70 <_ZN6CParty15hasPCRoomPlayerEv>  ; CParty::hasPCRoomPlayer()
0830b4bd +0x6c7:  test   %al,%al
0830b4bf +0x6c9:  je     0830b4d9 <+0x6e3>
0830b4c1 +0x6cb:  mov    0x14(%ebp),%eax
0830b4c4 +0x6ce:  movzbl 0x349(%eax),%eax
0830b4cb +0x6d5:  xor    $0x1,%eax
0830b4ce +0x6d8:  test   %al,%al
0830b4d0 +0x6da:  je     0830b4d9 <+0x6e3>
0830b4d2 +0x6dc:  mov    $0x1,%eax
0830b4d7 +0x6e1:  jmp    0830b4de <+0x6e8>
0830b4d9 +0x6e3:  mov    $0x0,%eax
0830b4de +0x6e8:  test   %al,%al
0830b4e0 +0x6ea:  je     0830b51c <+0x726>
0830b4e2 +0x6ec:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b4e7 +0x6f1:  mov    %eax,(%esp)
0830b4ea +0x6f4:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b4ef +0x6f9:  movl   $0x6,0x4(%esp)
0830b4f7 +0x701:  mov    %eax,(%esp)
0830b4fa +0x704:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b4ff +0x709:  mov    (%eax),%edx
0830b501 +0x70b:  add    $0x8,%edx
0830b504 +0x70e:  mov    (%edx),%ecx
0830b506 +0x710:  lea    -0x78(%ebp),%edx
0830b509 +0x713:  mov    %edx,0x8(%esp)
0830b50d +0x717:  lea    -0xc0(%ebp),%edx
0830b513 +0x71d:  mov    %edx,0x4(%esp)
0830b517 +0x721:  mov    %eax,(%esp)
0830b51a +0x724:  call   *%ecx
0830b51c +0x726:  mov    0x8(%ebp),%eax
0830b51f +0x729:  mov    (%eax),%eax
0830b521 +0x72b:  mov    %eax,(%esp)
0830b524 +0x72e:  call   085b4a70 <_ZN6CParty15hasPCRoomPlayerEv>  ; CParty::hasPCRoomPlayer()
0830b529 +0x733:  test   %al,%al
0830b52b +0x735:  je     0830b567 <+0x771>
0830b52d +0x737:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b532 +0x73c:  mov    %eax,(%esp)
0830b535 +0x73f:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0830b53a +0x744:  movl   $0x7,0x4(%esp)
0830b542 +0x74c:  mov    %eax,(%esp)
0830b545 +0x74f:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0830b54a +0x754:  mov    (%eax),%edx
0830b54c +0x756:  add    $0x8,%edx
0830b54f +0x759:  mov    (%edx),%ecx
0830b551 +0x75b:  lea    -0x78(%ebp),%edx
0830b554 +0x75e:  mov    %edx,0x8(%esp)
0830b558 +0x762:  lea    -0xc0(%ebp),%edx
0830b55e +0x768:  mov    %edx,0x4(%esp)
0830b562 +0x76c:  mov    %eax,(%esp)
0830b565 +0x76f:  call   *%ecx
0830b567 +0x771:  movl   $0x0,-0x30(%ebp)
0830b56e +0x778:  lea    -0x44(%ebp),%eax
0830b571 +0x77b:  lea    -0x78(%ebp),%edx
0830b574 +0x77e:  mov    %edx,0x4(%esp)
0830b578 +0x782:  mov    %eax,(%esp)
0830b57b +0x785:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0830b580 +0x78a:  sub    $0x4,%esp
0830b583 +0x78d:  lea    -0x48(%ebp),%eax
0830b586 +0x790:  lea    -0x78(%ebp),%edx
0830b589 +0x793:  mov    %edx,0x4(%esp)
0830b58d +0x797:  mov    %eax,(%esp)
0830b590 +0x79a:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0830b595 +0x79f:  sub    $0x4,%esp
0830b598 +0x7a2:  jmp    0830b7d2 <+0x9dc>
0830b59d +0x7a7:  lea    -0x114(%ebp),%eax
0830b5a3 +0x7ad:  mov    %eax,(%esp)
0830b5a6 +0x7b0:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
0830b5ab +0x7b5:  movb   $0x1,-0x114(%ebp)
0830b5b2 +0x7bc:  mov    0x10(%ebp),%eax
0830b5b5 +0x7bf:  mov    0x40(%eax),%eax
0830b5b8 +0x7c2:  mov    %eax,-0x110(%ebp)
0830b5be +0x7c8:  lea    0x1(%eax),%edx
0830b5c1 +0x7cb:  mov    0x10(%ebp),%eax
0830b5c4 +0x7ce:  mov    %edx,0x40(%eax)
0830b5c7 +0x7d1:  movzwl -0x11c(%ebp),%eax
0830b5ce +0x7d8:  mov    %ax,-0x10c(%ebp)
0830b5d5 +0x7df:  mov    -0x40(%ebp),%eax
0830b5d8 +0x7e2:  mov    %eax,-0x108(%ebp)
0830b5de +0x7e8:  lea    -0x44(%ebp),%eax
0830b5e1 +0x7eb:  mov    %eax,(%esp)
0830b5e4 +0x7ee:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0830b5e9 +0x7f3:  mov    (%eax),%edx
0830b5eb +0x7f5:  mov    %edx,-0x104(%ebp)
0830b5f1 +0x7fb:  mov    0x4(%eax),%edx
0830b5f4 +0x7fe:  mov    %edx,-0x100(%ebp)
0830b5fa +0x804:  mov    0x8(%eax),%edx
0830b5fd +0x807:  mov    %edx,-0xfc(%ebp)
0830b603 +0x80d:  mov    0xc(%eax),%edx
0830b606 +0x810:  mov    %edx,-0xf8(%ebp)
0830b60c +0x816:  mov    0x10(%eax),%edx
0830b60f +0x819:  mov    %edx,-0xf4(%ebp)
0830b615 +0x81f:  mov    0x14(%eax),%edx
0830b618 +0x822:  mov    %edx,-0xf0(%ebp)
0830b61e +0x828:  mov    0x18(%eax),%edx
0830b621 +0x82b:  mov    %edx,-0xec(%ebp)
0830b627 +0x831:  mov    0x1c(%eax),%edx
0830b62a +0x834:  mov    %edx,-0xe8(%ebp)
0830b630 +0x83a:  mov    0x20(%eax),%edx
0830b633 +0x83d:  mov    %edx,-0xe4(%ebp)
0830b639 +0x843:  mov    0x24(%eax),%edx
0830b63c +0x846:  mov    %edx,-0xe0(%ebp)
0830b642 +0x84c:  mov    0x28(%eax),%edx
0830b645 +0x84f:  mov    %edx,-0xdc(%ebp)
0830b64b +0x855:  mov    0x2c(%eax),%edx
0830b64e +0x858:  mov    %edx,-0xd8(%ebp)
0830b654 +0x85e:  mov    0x30(%eax),%edx
0830b657 +0x861:  mov    %edx,-0xd4(%ebp)
0830b65d +0x867:  mov    0x34(%eax),%edx
0830b660 +0x86a:  mov    %edx,-0xd0(%ebp)
0830b666 +0x870:  mov    0x38(%eax),%edx
0830b669 +0x873:  mov    %edx,-0xcc(%ebp)
0830b66f +0x879:  movzbl 0x3c(%eax),%eax
0830b673 +0x87d:  mov    %al,-0xc8(%ebp)
0830b679 +0x883:  mov    0x8(%ebp),%eax
0830b67c +0x886:  mov    (%eax),%eax
0830b67e +0x888:  test   %eax,%eax
0830b680 +0x88a:  je     0830b771 <+0x97b>
0830b686 +0x890:  mov    0x8(%ebp),%eax
0830b689 +0x893:  mov    (%eax),%eax
0830b68b +0x895:  mov    %eax,(%esp)
0830b68e +0x898:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
0830b693 +0x89d:  test   %al,%al
0830b695 +0x89f:  je     0830b6af <+0x8b9>
0830b697 +0x8a1:  mov    0x8(%ebp),%eax
0830b69a +0x8a4:  mov    (%eax),%eax
0830b69c +0x8a6:  mov    %eax,(%esp)
0830b69f +0x8a9:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830b6a4 +0x8ae:  test   %eax,%eax
0830b6a6 +0x8b0:  je     0830b6af <+0x8b9>
0830b6a8 +0x8b2:  mov    $0x1,%eax
0830b6ad +0x8b7:  jmp    0830b6b4 <+0x8be>
0830b6af +0x8b9:  mov    $0x0,%eax
0830b6b4 +0x8be:  test   %al,%al
0830b6b6 +0x8c0:  je     0830b771 <+0x97b>
0830b6bc +0x8c6:  mov    0x8(%ebp),%eax
0830b6bf +0x8c9:  mov    (%eax),%eax
0830b6c1 +0x8cb:  mov    %eax,(%esp)
0830b6c4 +0x8ce:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830b6c9 +0x8d3:  mov    %eax,(%esp)
0830b6cc +0x8d6:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0830b6d1 +0x8db:  cmp    $0x1,%eax
0830b6d4 +0x8de:  sete   %al
0830b6d7 +0x8e1:  test   %al,%al
0830b6d9 +0x8e3:  je     0830b771 <+0x97b>
0830b6df +0x8e9:  mov    -0x102(%ebp),%eax
0830b6e5 +0x8ef:  test   %eax,%eax
0830b6e7 +0x8f1:  jne    0830b771 <+0x97b>
0830b6ed +0x8f7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b6f2 +0x8fc:  mov    %eax,(%esp)
0830b6f5 +0x8ff:  call   08365eea <_ZN12CDataManager19getBlueMarbleScriptEv>  ; CDataManager::getBlueMarbleScript()
0830b6fa +0x904:  mov    0x68(%eax),%eax
0830b6fd +0x907:  mov    %eax,-0x20(%ebp)
0830b700 +0x90a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b705 +0x90f:  mov    %eax,(%esp)
0830b708 +0x912:  call   08365eea <_ZN12CDataManager19getBlueMarbleScriptEv>  ; CDataManager::getBlueMarbleScript()
0830b70d +0x917:  mov    0x6c(%eax),%eax
0830b710 +0x91a:  mov    %eax,-0x1c(%ebp)
0830b713 +0x91d:  cmpl   $0x0,-0x38(%ebp)
0830b717 +0x921:  jg     0830b720 <+0x92a>
0830b719 +0x923:  movl   $0x1,-0x38(%ebp)
0830b720 +0x92a:  mov    -0xfd(%ebp),%eax
0830b726 +0x930:  mov    %eax,-0x124(%ebp)
0830b72c +0x936:  fildl  -0x124(%ebp)
0830b732 +0x93c:  fildl  -0x38(%ebp)
0830b735 +0x93f:  fmuls  -0x1c(%ebp)
0830b738 +0x942:  fadds  -0x20(%ebp)
0830b73b +0x945:  fmulp  %st,%st(1)
0830b73d +0x947:  fnstcw -0x126(%ebp)
0830b743 +0x94d:  movzwl -0x126(%ebp),%eax
0830b74a +0x954:  mov    $0xc,%ah
0830b74c +0x956:  mov    %ax,-0x128(%ebp)
0830b753 +0x95d:  fldcw  -0x128(%ebp)
0830b759 +0x963:  fistpl -0x124(%ebp)
0830b75f +0x969:  fldcw  -0x126(%ebp)
0830b765 +0x96f:  mov    -0x124(%ebp),%eax
0830b76b +0x975:  mov    %eax,-0xfd(%ebp)
0830b771 +0x97b:  mov    -0x30(%ebp),%eax
0830b774 +0x97e:  mov    %eax,0x4(%esp)
0830b778 +0x982:  lea    -0x78(%ebp),%eax
0830b77b +0x985:  add    $0xc,%eax
0830b77e +0x988:  mov    %eax,(%esp)
0830b781 +0x98b:  call   08550e50 <_ZN10CLuckPoint15GetUserGainItemEi>  ; CLuckPoint::GetUserGainItem(int)
0830b786 +0x990:  mov    %eax,-0xc4(%ebp)
0830b78c +0x996:  lea    -0x114(%ebp),%eax
0830b792 +0x99c:  mov    %eax,0x4(%esp)
0830b796 +0x9a0:  mov    0xc(%ebp),%eax
0830b799 +0x9a3:  mov    %eax,(%esp)
0830b79c +0x9a6:  call   08152b52 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2487>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2487
0830b7a1 +0x9ab:  lea    0x4(%esp),%edx
0830b7a5 +0x9af:  lea    -0x114(%ebp),%ebx
0830b7ab +0x9b5:  mov    $0x15,%eax
0830b7b0 +0x9ba:  mov    %edx,%edi
0830b7b2 +0x9bc:  mov    %ebx,%esi
0830b7b4 +0x9be:  mov    %eax,%ecx
0830b7b6 +0x9c0:  rep movsl %ds:(%esi),%es:(%edi)
0830b7b8 +0x9c2:  mov    0x10(%ebp),%eax
0830b7bb +0x9c5:  mov    %eax,(%esp)
0830b7be +0x9c8:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
0830b7c3 +0x9cd:  addl   $0x1,-0x30(%ebp)
0830b7c7 +0x9d1:  lea    -0x44(%ebp),%eax
0830b7ca +0x9d4:  mov    %eax,(%esp)
0830b7cd +0x9d7:  call   0815293c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2271>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2271
0830b7d2 +0x9dc:  lea    -0x48(%ebp),%eax
0830b7d5 +0x9df:  mov    %eax,0x4(%esp)
0830b7d9 +0x9e3:  lea    -0x44(%ebp),%eax
0830b7dc +0x9e6:  mov    %eax,(%esp)
0830b7df +0x9e9:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
0830b7e4 +0x9ee:  test   %al,%al
0830b7e6 +0x9f0:  jne    0830b59d <+0x7a7>
0830b7ec +0x9f6:  jmp    0830b803 <+0xa0d>
0830b7ee +0x9f8:  mov    %edx,%ebx
0830b7f0 +0x9fa:  mov    %eax,%esi
0830b7f2 +0x9fc:  lea    -0x78(%ebp),%eax
0830b7f5 +0x9ff:  mov    %eax,(%esp)
0830b7f8 +0xa02:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0830b7fd +0xa07:  mov    %esi,%eax
0830b7ff +0xa09:  mov    %ebx,%edx
0830b801 +0xa0b:  jmp    0830b810 <+0xa1a>
0830b803 +0xa0d:  lea    -0x78(%ebp),%eax
0830b806 +0xa10:  mov    %eax,(%esp)
0830b809 +0xa13:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0830b80e +0xa18:  jmp    0830b82e <+0xa38>
0830b810 +0xa1a:  mov    %edx,%ebx
0830b812 +0xa1c:  mov    %eax,%esi
0830b814 +0xa1e:  lea    -0xc0(%ebp),%eax
0830b81a +0xa24:  mov    %eax,(%esp)
0830b81d +0xa27:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0830b822 +0xa2c:  mov    %esi,%eax
0830b824 +0xa2e:  mov    %ebx,%edx
0830b826 +0xa30:  mov    %eax,(%esp)
0830b829 +0xa33:  call   08ae3750 <_Unwind_Resume>
0830b82e +0xa38:  lea    -0xc0(%ebp),%eax
0830b834 +0xa3e:  mov    %eax,(%esp)
0830b837 +0xa41:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0830b83c +0xa46:  lea    -0xc(%ebp),%esp
0830b83f +0xa49:  add    $0x0,%esp
0830b842 +0xa4c:  pop    %ebx
0830b843 +0xa4d:  pop    %esi
0830b844 +0xa4e:  pop    %edi
0830b845 +0xa4f:  pop    %ebp
0830b846 +0xa50:  ret
0830b847 +0xa51:  nop
```

## 反编译 C

```c
// CBattle_Field::_MakeDropItems @ 0x830adf6

/* CBattle_Field::_MakeDropItems(std::list<map_item, std::allocator<map_item> >&, MapInfo&,
   map_monster const&, unsigned short, int, int, int, bool, std::vector<bool, std::allocator<bool>
   >&, float, int) */

void __thiscall
CBattle_Field::_MakeDropItems
          (CBattle_Field *this,list *param_1,MapInfo *param_2,map_monster *param_3,ushort param_4,
          int param_5,int param_6,int param_7,bool param_8,vector *param_9,float param_10,
          int param_11)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  CUser *pCVar7;
  CUserCharacInfo *pCVar8;
  CDataManager *pCVar9;
  CItemGeneratorMgr *pCVar10;
  int *piVar11;
  undefined4 *puVar12;
  map_item *pmVar13;
  byte bVar14;
  map_item local_118 [4];
  int local_114;
  ushort local_110;
  undefined4 local_10c;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined2 local_104;
  undefined1 uStack_102;
  int iStack_101;
  undefined1 uStack_fd;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  int local_c4 [2];
  vector<bool,std::allocator<bool>> avStack_bc [20];
  float local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  char local_83;
  map_monster local_82;
  char local_81;
  char local_80;
  undefined1 local_7f;
  stGenerateResult_t local_7c [12];
  CLuckPoint aCStack_70 [36];
  __normal_iterator local_4c [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_48 [4];
  undefined4 local_44;
  undefined1 local_3d;
  int local_3c;
  undefined4 local_38;
  int local_34;
  BlueMarble *local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  
  bVar14 = 0;
  local_44 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_3d = convertAPCRoleType2MonsterRoleType(this,(char)param_3[8]);
  WongWork::stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)local_c4);
  local_c4[0] = param_7;
  uVar3 = get_dungeon_diff(this);
  local_90._3_1_ = uVar3;
  cVar4 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
  if (cVar4 < '\x01') {
    uVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
    uVar2 = CONCAT11(local_90._3_1_,uVar3);
  }
  else {
    uVar2 = CONCAT11(local_90._3_1_,(char)*(undefined4 *)(this + 0x238));
  }
  local_90 = CONCAT31(CONCAT21(uVar2,local_3d),param_3[0x10]);
  local_8c._0_2_ = CONCAT11(param_3[0x12],(char)param_5);
  local_88 = param_6;
  local_84 = 0;
  local_83 = getItemDropDungeonType(this);
                    /* try { // try from 0830af05 to 0830af2b has its CatchHandler @ 0830b810 */
  std::vector<bool,std::allocator<bool>>::operator=(avStack_bc,param_9);
  local_a8 = param_10;
  local_3c = 0;
  local_38 = 0;
  WongWork::stGenerateResult_t::stGenerateResult_t(local_7c);
  if (*(int *)this != 0) {
                    /* try { // try from 0830af53 to 0830b7e3 has its CatchHandler @ 0830b7ee */
    CParty::GetLuckPoint(*(CParty **)this,aCStack_70,true);
    cVar4 = CParty::IsSinglePlay(*(CParty **)this);
    if ((cVar4 == '\0') || (iVar6 = CParty::getManager(*(CParty **)this), iVar6 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pCVar7 = (CUser *)CParty::getManager(*(CParty **)this);
      iVar6 = CUser::getMoveSpace(pCVar7);
      if (iVar6 == 1) {
        pCVar7 = (CUser *)CParty::getManager(*(CParty **)this);
        local_30 = (BlueMarble *)CUser::getBlueMarble(pCVar7);
        if (local_30 != (BlueMarble *)0x0) {
          CParty::getManager(*(CParty **)this);
          local_3c = BlueMarble::getBuff(local_30);
          CParty::getManager(*(CParty **)this);
          local_38 = BlueMarble::getBuff(local_30);
          local_9f = 1;
          pCVar8 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
          local_9c = CUserCharacInfo::get_charac_job(pCVar8);
          pCVar8 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
          local_98 = CUserCharacInfo::get_charac_level(pCVar8);
          local_94 = local_38;
        }
      }
    }
  }
  setPremiumDropRate(this,(stGenerateRefData_t *)local_c4,param_11);
  local_80 = '\0' < *(char *)(*(int *)(this + 0x188) + 0x89f);
  local_81 = *(char *)(*(int *)(this + 0x188) + 0x89e) != '\0';
  if (((!(bool)local_81) && (!(bool)local_80)) && (param_3[0x349] != (map_monster)0x1)) {
    pCVar9 = (CDataManager *)G_CDataManager();
    pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
    piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
    (**(code **)(*piVar11 + 8))(piVar11);
  }
  cVar4 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
  if (cVar4 < '\x01') {
    uVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
    local_90._0_2_ = CONCAT11(uVar3,(undefined1)local_90);
  }
  else {
    local_90._0_2_ = CONCAT11((char)*(undefined4 *)(this + 0x238),(undefined1)local_90);
  }
  uVar3 = get_dungeon_diff(this);
  iVar6 = local_88;
  local_90._0_3_ = CONCAT12(uVar3,(undefined2)local_90);
  local_8c = *(undefined4 *)(param_3 + 0xc);
  local_90 = CONCAT31(local_90._1_3_,param_3[0x10]);
  local_88._3_1_ = SUB41(iVar6,3);
  local_88._0_3_ = CONCAT12((char)param_5,CONCAT11(param_3[0x11],param_3[8]));
  uVar3 = CParty::getMemberMaxLevel(*(CParty **)this);
  local_88 = CONCAT13(uVar3,(undefined3)local_88);
  local_83 = *(short *)(param_3 + 0x334) != 0;
  local_82 = param_3[0x338];
  local_7f = param_3[0x34b] != (map_monster)0x0;
  local_84 = param_8;
  local_a0 = CParty::GetPartyMemberForceDropFlag(*(CParty **)this);
  if ((param_3[0x349] != (map_monster)0x1) || (local_83 != '\0')) {
    pCVar9 = (CDataManager *)G_CDataManager();
    pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
    piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
    (**(code **)(*piVar11 + 0xc))(piVar11);
  }
  local_90 = CDungeon::getDropItems(*(CDungeon **)(this + 0x188));
  pCVar9 = (CDataManager *)G_CDataManager();
  pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
  piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
  (**(code **)(*piVar11 + 0xc))(piVar11);
  local_90._0_2_ = CONCAT11(param_3[0x10],(undefined1)local_90);
  if (((local_81 != '\x01') && (local_80 != '\x01')) && (param_3[0x349] != (map_monster)0x1)) {
    if ((param_5 < 1) || (4 < param_5)) {
      pCVar9 = (CDataManager *)G_CDataManager();
      pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
      piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    else {
      iVar6 = G_CDataManager();
      local_2c = (int)*(char *)(iVar6 + param_5 + 0x523);
      for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
        pCVar9 = (CDataManager *)G_CDataManager();
        pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
        piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
        (**(code **)(*piVar11 + 8))(piVar11);
      }
    }
  }
  if ((local_81 == '\x01') || (local_80 == '\x01')) goto LAB_0830b51c;
  if (*(int *)this == 0) {
LAB_0830b437:
    bVar5 = false;
  }
  else {
    piVar11 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x16);
    cVar4 = (**(code **)(*piVar11 + 0x34))(piVar11);
    if (((cVar4 == '\0') || (cVar4 = CParty::hasPCRoomPlayer(*(CParty **)this), cVar4 == '\0')) ||
       (param_3[0x349] == (map_monster)0x1)) goto LAB_0830b437;
    bVar5 = true;
  }
  if (bVar5) {
    pCVar9 = (CDataManager *)G_CDataManager();
    pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
    piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
    (**(code **)(*piVar11 + 8))(piVar11);
  }
  if (*(int *)this == 0) {
LAB_0830b4d9:
    bVar5 = false;
  }
  else {
    piVar11 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x30);
    cVar4 = (**(code **)(*piVar11 + 0x34))(piVar11);
    if (((cVar4 == '\0') || (cVar4 = CParty::hasPCRoomPlayer(*(CParty **)this), cVar4 == '\0')) ||
       (param_3[0x349] == (map_monster)0x1)) goto LAB_0830b4d9;
    bVar5 = true;
  }
  if (bVar5) {
    pCVar9 = (CDataManager *)G_CDataManager();
    pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
    piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
    (**(code **)(*piVar11 + 8))(piVar11);
  }
LAB_0830b51c:
  cVar4 = CParty::hasPCRoomPlayer(*(CParty **)this);
  if (cVar4 != '\0') {
    pCVar9 = (CDataManager *)G_CDataManager();
    pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar9);
    piVar11 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar10);
    (**(code **)(*piVar11 + 8))(piVar11);
  }
  local_34 = 0;
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  while (bVar5 = __gnu_cxx::operator!=(local_48,local_4c), bVar5) {
    map_item::map_item(local_118);
    local_118[0] = (map_item)0x1;
    local_114 = *(int *)(param_2 + 0x40);
    *(int *)(param_2 + 0x40) = local_114 + 1;
    local_110 = param_4;
    local_10c = local_44;
    puVar12 = (undefined4 *)
              __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator*(local_48);
    local_108 = (undefined2)*puVar12;
    uStack_106 = (undefined2)((uint)*puVar12 >> 0x10);
    uVar1 = puVar12[1];
    local_104 = (undefined2)uVar1;
    uStack_102 = (undefined1)((uint)uVar1 >> 0x10);
    iStack_101._1_3_ = (undefined3)puVar12[2];
    iStack_101 = CONCAT31(iStack_101._1_3_,(char)((uint)uVar1 >> 0x18));
    uStack_fd = (undefined1)((uint)puVar12[2] >> 0x18);
    local_fc = puVar12[3];
    local_f8 = puVar12[4];
    local_f4 = puVar12[5];
    local_f0 = puVar12[6];
    local_ec = puVar12[7];
    local_e8 = puVar12[8];
    local_e4 = puVar12[9];
    local_e0 = puVar12[10];
    local_dc = puVar12[0xb];
    local_d8 = puVar12[0xc];
    local_d4 = puVar12[0xd];
    local_d0 = puVar12[0xe];
    local_cc = *(undefined1 *)(puVar12 + 0xf);
    if (*(int *)this != 0) {
      cVar4 = CParty::IsSinglePlay(*(CParty **)this);
      if ((cVar4 == '\0') || (iVar6 = CParty::getManager(*(CParty **)this), iVar6 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pCVar7 = (CUser *)CParty::getManager(*(CParty **)this);
        iVar6 = CUser::getMoveSpace(pCVar7);
        if ((iVar6 == 1) && (CONCAT22(local_104,uStack_106) == 0)) {
          pCVar9 = (CDataManager *)G_CDataManager();
          iVar6 = CDataManager::getBlueMarbleScript(pCVar9);
          local_24 = *(float *)(iVar6 + 0x68);
          pCVar9 = (CDataManager *)G_CDataManager();
          iVar6 = CDataManager::getBlueMarbleScript(pCVar9);
          local_20 = *(float *)(iVar6 + 0x6c);
          if (local_3c < 1) {
            local_3c = 1;
          }
          iStack_101 = (int)ROUND(((float)local_3c * local_20 + local_24) * (float)iStack_101);
        }
      }
    }
    local_c8 = CLuckPoint::GetUserGainItem(aCStack_70,local_34);
    std::list<map_item,std::allocator<map_item>>::push_back
              ((list<map_item,std::allocator<map_item>> *)param_1,local_118);
    pmVar13 = local_118;
    puVar12 = (undefined4 *)&stack0xfffffe78;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *(undefined4 *)pmVar13;
      pmVar13 = pmVar13 + ((uint)bVar14 * -2 + 1) * 4;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
    }
    MapInfo::Add_Item(param_2);
    local_34 = local_34 + 1;
    __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_48);
  }
                    /* try { // try from 0830b809 to 0830b80d has its CatchHandler @ 0830b810 */
  WongWork::stGenerateResult_t::~stGenerateResult_t(local_7c);
  WongWork::stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)local_c4);
  return;
}
```
