# get_candidator_map

`_ZN13CBattle_Field18get_candidator_mapEPK8CDungeonPK10GridScriptRiRSt6vectorIiSaIiEEiii`

`CBattle_Field::get_candidator_map(CDungeon const*, GridScript const*, int&, std::vector<int, std::allocator<int> >&, int, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08308214` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08308214  _ZN13CBattle_Field18get_candidator_mapEPK8CDungeonPK10GridScriptRiRSt6vectorIiSaIiEEiii
#           CBattle_Field::get_candidator_map(CDungeon const*, GridScript const*, int&, std::vector<int, std::allocator<int> >&, int, int, int)
# range [0x08308214, 0x083086d1]
08308214 +0x000:  push   %ebp
08308215 +0x001:  mov    %esp,%ebp
08308217 +0x003:  push   %edi
08308218 +0x004:  push   %esi
08308219 +0x005:  push   %ebx
0830821a +0x006:  sub    $0x6c,%esp
0830821d +0x009:  cmpl   $0x0,0xc(%ebp)
08308221 +0x00d:  je     08308229 <+0x15>
08308223 +0x00f:  cmpl   $0x0,0x10(%ebp)
08308227 +0x013:  jne    08308233 <+0x1f>
08308229 +0x015:  mov    $0x17,%eax
0830822e +0x01a:  jmp    083086c9 <+0x4b5>
08308233 +0x01f:  mov    0x14(%ebp),%eax
08308236 +0x022:  mov    (%eax),%eax
08308238 +0x024:  cmp    $0xffffffff,%eax
0830823b +0x027:  jne    083086c4 <+0x4b0>
08308241 +0x02d:  mov    0x8(%ebp),%eax
08308244 +0x030:  mov    0xc(%eax),%eax
08308247 +0x033:  cmp    0x1c(%ebp),%eax
0830824a +0x036:  jne    08308346 <+0x132>
08308250 +0x03c:  mov    0x8(%ebp),%eax
08308253 +0x03f:  mov    0x10(%eax),%eax
08308256 +0x042:  cmp    0x20(%ebp),%eax
08308259 +0x045:  jne    08308346 <+0x132>
0830825f +0x04b:  mov    0x10(%ebp),%eax
08308262 +0x04e:  add    $0x10,%eax
08308265 +0x051:  mov    %eax,(%esp)
08308268 +0x054:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0830826d +0x059:  test   %eax,%eax
0830826f +0x05b:  sete   %al
08308272 +0x05e:  test   %al,%al
08308274 +0x060:  je     083082a3 <+0x8f>
08308276 +0x062:  mov    0x10(%ebp),%eax
08308279 +0x065:  mov    (%eax),%eax
0830827b +0x067:  mov    0x24(%ebp),%edx
0830827e +0x06a:  mov    %edx,0xc(%esp)
08308282 +0x06e:  mov    %eax,0x8(%esp)
08308286 +0x072:  movl   $0x1,0x4(%esp)
0830828e +0x07a:  mov    0xc(%ebp),%eax
08308291 +0x07d:  mov    %eax,(%esp)
08308294 +0x080:  call   0834bf56 <_ZNK8CDungeon15ChooseRandomMapEiii>  ; CDungeon::ChooseRandomMap(int, int, int) const
08308299 +0x085:  mov    0x14(%ebp),%edx
0830829c +0x088:  mov    %eax,(%edx)
0830829e +0x08a:  jmp    083086c4 <+0x4b0>
083082a3 +0x08f:  movl   $0x0,-0x28(%ebp)
083082aa +0x096:  jmp    08308325 <+0x111>
083082ac +0x098:  mov    0x10(%ebp),%eax
083082af +0x09b:  lea    0x10(%eax),%edx
083082b2 +0x09e:  mov    -0x28(%ebp),%eax
083082b5 +0x0a1:  mov    %eax,0x4(%esp)
083082b9 +0x0a5:  mov    %edx,(%esp)
083082bc +0x0a8:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
083082c1 +0x0ad:  mov    (%eax),%ebx
083082c3 +0x0af:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083082c8 +0x0b4:  mov    %ebx,0x4(%esp)
083082cc +0x0b8:  mov    %eax,(%esp)
083082cf +0x0bb:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
083082d4 +0x0c0:  mov    %eax,-0x2c(%ebp)
083082d7 +0x0c3:  cmpl   $0x0,-0x2c(%ebp)
083082db +0x0c7:  jne    083082e7 <+0xd3>
083082dd +0x0c9:  mov    $0x17,%eax
083082e2 +0x0ce:  jmp    083086c9 <+0x4b5>
083082e7 +0x0d3:  mov    0x24(%ebp),%eax
083082ea +0x0d6:  mov    %eax,0x4(%esp)
083082ee +0x0da:  mov    -0x2c(%ebp),%eax
083082f1 +0x0dd:  mov    %eax,(%esp)
083082f4 +0x0e0:  call   0834ecaa <_ZNK4CMap13CheckEntranceEi>  ; CMap::CheckEntrance(int) const
083082f9 +0x0e5:  test   %al,%al
083082fb +0x0e7:  je     08308321 <+0x10d>
083082fd +0x0e9:  mov    0x10(%ebp),%eax
08308300 +0x0ec:  lea    0x10(%eax),%edx
08308303 +0x0ef:  mov    -0x28(%ebp),%eax
08308306 +0x0f2:  mov    %eax,0x4(%esp)
0830830a +0x0f6:  mov    %edx,(%esp)
0830830d +0x0f9:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08308312 +0x0fe:  mov    %eax,0x4(%esp)
08308316 +0x102:  mov    0x18(%ebp),%eax
08308319 +0x105:  mov    %eax,(%esp)
0830831c +0x108:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08308321 +0x10d:  addl   $0x1,-0x28(%ebp)
08308325 +0x111:  mov    0x10(%ebp),%eax
08308328 +0x114:  add    $0x10,%eax
0830832b +0x117:  mov    %eax,(%esp)
0830832e +0x11a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08308333 +0x11f:  cmp    -0x28(%ebp),%eax
08308336 +0x122:  seta   %al
08308339 +0x125:  test   %al,%al
0830833b +0x127:  jne    083082ac <+0x98>
08308341 +0x12d:  jmp    083086c4 <+0x4b0>
08308346 +0x132:  mov    0x8(%ebp),%eax
08308349 +0x135:  mov    0x14(%eax),%eax
0830834c +0x138:  cmp    0x1c(%ebp),%eax
0830834f +0x13b:  jne    08308463 <+0x24f>
08308355 +0x141:  mov    0x8(%ebp),%eax
08308358 +0x144:  mov    0x18(%eax),%eax
0830835b +0x147:  cmp    0x20(%ebp),%eax
0830835e +0x14a:  jne    08308463 <+0x24f>
08308364 +0x150:  mov    0x8(%ebp),%eax
08308367 +0x153:  mov    0x19c(%eax),%eax
0830836d +0x159:  test   %eax,%eax
0830836f +0x15b:  je     08308463 <+0x24f>
08308375 +0x161:  mov    0x8(%ebp),%eax
08308378 +0x164:  mov    0x19c(%eax),%edx
0830837e +0x16a:  mov    0x14(%ebp),%eax
08308381 +0x16d:  mov    %edx,(%eax)
08308383 +0x16f:  mov    0x14(%ebp),%eax
08308386 +0x172:  mov    (%eax),%eax
08308388 +0x174:  test   %eax,%eax
0830838a +0x176:  jg     083086c3 <+0x4af>
08308390 +0x17c:  mov    0x10(%ebp),%eax
08308393 +0x17f:  add    $0x1c,%eax
08308396 +0x182:  mov    %eax,(%esp)
08308399 +0x185:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0830839e +0x18a:  mov    %eax,%esi
083083a0 +0x18c:  mov    0x8(%ebp),%eax
083083a3 +0x18f:  mov    0x64(%eax),%edx
083083a6 +0x192:  mov    0x8(%ebp),%eax
083083a9 +0x195:  mov    0x60(%eax),%eax
083083ac +0x198:  movl   $0x0,0xc(%esp)
083083b4 +0x1a0:  mov    %edx,0x8(%esp)
083083b8 +0x1a4:  mov    %eax,0x4(%esp)
083083bc +0x1a8:  mov    0x8(%ebp),%eax
083083bf +0x1ab:  mov    %eax,(%esp)
083083c2 +0x1ae:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
083083c7 +0x1b3:  movzbl 0xe8(%eax),%eax
083083ce +0x1ba:  test   %al,%al
083083d0 +0x1bc:  je     083083d9 <+0x1c5>
083083d2 +0x1be:  mov    $"layeredMap",%eax
083083d7 +0x1c3:  jmp    083083de <+0x1ca>
083083d9 +0x1c5:  mov    $"generalMap",%eax
083083de +0x1ca:  mov    %eax,-0x3c(%ebp)
083083e1 +0x1cd:  mov    0x10(%ebp),%eax
083083e4 +0x1d0:  add    $0x4,%eax
083083e7 +0x1d3:  mov    %eax,(%esp)
083083ea +0x1d6:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083083ef +0x1db:  mov    %eax,%ebx
083083f1 +0x1dd:  mov    0x18(%ebp),%eax
083083f4 +0x1e0:  mov    %eax,(%esp)
083083f7 +0x1e3:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083083fc +0x1e8:  mov    %eax,%edx
083083fe +0x1ea:  mov    0x8(%ebp),%eax
08308401 +0x1ed:  mov    0x64(%eax),%edi
08308404 +0x1f0:  mov    0x8(%ebp),%eax
08308407 +0x1f3:  mov    0x60(%eax),%ecx
0830840a +0x1f6:  mov    0x8(%ebp),%eax
0830840d +0x1f9:  mov    0x194(%eax),%eax
08308413 +0x1ff:  mov    %esi,0x2c(%esp)
08308417 +0x203:  mov    -0x3c(%ebp),%esi
0830841a +0x206:  mov    %esi,0x28(%esp)
0830841e +0x20a:  mov    %ebx,0x24(%esp)
08308422 +0x20e:  mov    %edx,0x20(%esp)
08308426 +0x212:  mov    %edi,0x1c(%esp)
0830842a +0x216:  mov    %ecx,0x18(%esp)
0830842e +0x21a:  mov    %eax,0x14(%esp)
08308432 +0x21e:  movl   $"[CBattle_Field::MoveMap] Error(quest_stage_map_==-1) Dungeon[%d] Pos(%d,%d), candidator(%d), gs->mapIndex(%d), [Map Kind : %s], gs->layeredMapIndex(%d)\n",0x10(%esp)
0830843a +0x226:  movl   $0x12bb,0xc(%esp)
08308442 +0x22e:  movl   $&_ZZN13CBattle_Field18get_candidator_mapEPK8CDungeonPK10GridScriptRiRSt6vectorIiSaIiEEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0830844a +0x236:  movl   $"battle_field.cpp",0x4(%esp)
08308452 +0x23e:  movl   $0x1,(%esp)
08308459 +0x245:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830845e +0x24a:  jmp    083086c4 <+0x4b0>
08308463 +0x24f:  mov    0x8(%ebp),%eax
08308466 +0x252:  mov    0x1c0(%eax),%eax
0830846c +0x258:  cmp    0x1c(%ebp),%eax
0830846f +0x25b:  jne    083084aa <+0x296>
08308471 +0x25d:  mov    0x8(%ebp),%eax
08308474 +0x260:  mov    0x1c4(%eax),%eax
0830847a +0x266:  cmp    0x20(%ebp),%eax
0830847d +0x269:  jne    083084aa <+0x296>
0830847f +0x26b:  mov    0x8(%ebp),%eax
08308482 +0x26e:  movzbl 0x1b8(%eax),%eax
08308489 +0x275:  test   %al,%al
0830848b +0x277:  je     083084aa <+0x296>
0830848d +0x279:  mov    0x8(%ebp),%eax
08308490 +0x27c:  mov    0x1bc(%eax),%edx
08308496 +0x282:  mov    0x14(%ebp),%eax
08308499 +0x285:  mov    %edx,(%eax)
0830849b +0x287:  mov    0x8(%ebp),%eax
0830849e +0x28a:  movb   $0x1,0x1c8(%eax)
083084a5 +0x291:  jmp    083086c4 <+0x4b0>
083084aa +0x296:  mov    0x10(%ebp),%eax
083084ad +0x299:  add    $0x4,%eax
083084b0 +0x29c:  mov    %eax,(%esp)
083084b3 +0x29f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083084b8 +0x2a4:  test   %eax,%eax
083084ba +0x2a6:  sete   %al
083084bd +0x2a9:  test   %al,%al
083084bf +0x2ab:  je     083084ee <+0x2da>
083084c1 +0x2ad:  mov    0x10(%ebp),%eax
083084c4 +0x2b0:  mov    (%eax),%eax
083084c6 +0x2b2:  mov    0x24(%ebp),%edx
083084c9 +0x2b5:  mov    %edx,0xc(%esp)
083084cd +0x2b9:  mov    %eax,0x8(%esp)
083084d1 +0x2bd:  movl   $0x0,0x4(%esp)
083084d9 +0x2c5:  mov    0xc(%ebp),%eax
083084dc +0x2c8:  mov    %eax,(%esp)
083084df +0x2cb:  call   0834bf56 <_ZNK8CDungeon15ChooseRandomMapEiii>  ; CDungeon::ChooseRandomMap(int, int, int) const
083084e4 +0x2d0:  mov    0x14(%ebp),%edx
083084e7 +0x2d3:  mov    %eax,(%edx)
083084e9 +0x2d5:  jmp    083086c4 <+0x4b0>
083084ee +0x2da:  movl   $0x0,-0x20(%ebp)
083084f5 +0x2e1:  jmp    08308570 <+0x35c>
083084f7 +0x2e3:  mov    0x10(%ebp),%eax
083084fa +0x2e6:  lea    0x4(%eax),%edx
083084fd +0x2e9:  mov    -0x20(%ebp),%eax
08308500 +0x2ec:  mov    %eax,0x4(%esp)
08308504 +0x2f0:  mov    %edx,(%esp)
08308507 +0x2f3:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0830850c +0x2f8:  mov    (%eax),%ebx
0830850e +0x2fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08308513 +0x2ff:  mov    %ebx,0x4(%esp)
08308517 +0x303:  mov    %eax,(%esp)
0830851a +0x306:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0830851f +0x30b:  mov    %eax,-0x24(%ebp)
08308522 +0x30e:  cmpl   $0x0,-0x24(%ebp)
08308526 +0x312:  jne    08308532 <+0x31e>
08308528 +0x314:  mov    $0x17,%eax
0830852d +0x319:  jmp    083086c9 <+0x4b5>
08308532 +0x31e:  mov    0x24(%ebp),%eax
08308535 +0x321:  mov    %eax,0x4(%esp)
08308539 +0x325:  mov    -0x24(%ebp),%eax
0830853c +0x328:  mov    %eax,(%esp)
0830853f +0x32b:  call   0834ecaa <_ZNK4CMap13CheckEntranceEi>  ; CMap::CheckEntrance(int) const
08308544 +0x330:  test   %al,%al
08308546 +0x332:  je     0830856c <+0x358>
08308548 +0x334:  mov    0x10(%ebp),%eax
0830854b +0x337:  lea    0x4(%eax),%edx
0830854e +0x33a:  mov    -0x20(%ebp),%eax
08308551 +0x33d:  mov    %eax,0x4(%esp)
08308555 +0x341:  mov    %edx,(%esp)
08308558 +0x344:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0830855d +0x349:  mov    %eax,0x4(%esp)
08308561 +0x34d:  mov    0x18(%ebp),%eax
08308564 +0x350:  mov    %eax,(%esp)
08308567 +0x353:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0830856c +0x358:  addl   $0x1,-0x20(%ebp)
08308570 +0x35c:  mov    0x10(%ebp),%eax
08308573 +0x35f:  add    $0x4,%eax
08308576 +0x362:  mov    %eax,(%esp)
08308579 +0x365:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0830857e +0x36a:  cmp    -0x20(%ebp),%eax
08308581 +0x36d:  seta   %al
08308584 +0x370:  test   %al,%al
08308586 +0x372:  jne    083084f7 <+0x2e3>
0830858c +0x378:  mov    0x8(%ebp),%eax
0830858f +0x37b:  mov    %eax,(%esp)
08308592 +0x37e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308597 +0x383:  movzbl 0xe8(%eax),%eax
0830859e +0x38a:  xor    $0x1,%eax
083085a1 +0x38d:  test   %al,%al
083085a3 +0x38f:  je     083085bb <+0x3a7>
083085a5 +0x391:  mov    0x18(%ebp),%eax
083085a8 +0x394:  mov    %eax,(%esp)
083085ab +0x397:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083085b0 +0x39c:  test   %eax,%eax
083085b2 +0x39e:  jne    083085bb <+0x3a7>
083085b4 +0x3a0:  mov    $0x1,%eax
083085b9 +0x3a5:  jmp    083085c0 <+0x3ac>
083085bb +0x3a7:  mov    $0x0,%eax
083085c0 +0x3ac:  test   %al,%al
083085c2 +0x3ae:  je     083086c4 <+0x4b0>
083085c8 +0x3b4:  movl   $0x0,-0x1c(%ebp)
083085cf +0x3bb:  jmp    083086a5 <+0x491>
083085d4 +0x3c0:  mov    0x10(%ebp),%eax
083085d7 +0x3c3:  lea    0x4(%eax),%edx
083085da +0x3c6:  mov    -0x1c(%ebp),%eax
083085dd +0x3c9:  mov    %eax,0x4(%esp)
083085e1 +0x3cd:  mov    %edx,(%esp)
083085e4 +0x3d0:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
083085e9 +0x3d5:  mov    (%eax),%ebx
083085eb +0x3d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083085f0 +0x3dc:  mov    %ebx,0x4(%esp)
083085f4 +0x3e0:  mov    %eax,(%esp)
083085f7 +0x3e3:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
083085fc +0x3e8:  mov    %eax,-0x24(%ebp)
083085ff +0x3eb:  mov    0x8(%ebp),%eax
08308602 +0x3ee:  mov    0x64(%eax),%ecx
08308605 +0x3f1:  mov    0x8(%ebp),%eax
08308608 +0x3f4:  mov    0x60(%eax),%edx
0830860b +0x3f7:  mov    0x8(%ebp),%eax
0830860e +0x3fa:  mov    0x194(%eax),%eax
08308614 +0x400:  mov    0x24(%ebp),%ebx
08308617 +0x403:  mov    %ebx,0x20(%esp)
0830861b +0x407:  mov    %ecx,0x1c(%esp)
0830861f +0x40b:  mov    %edx,0x18(%esp)
08308623 +0x40f:  mov    %eax,0x14(%esp)
08308627 +0x413:  movl   $"[CBattle_Field::MoveMap] Error(< map_candidator.size()==0) Dungeon[%d] Pos(%d,%d), (Direction: %d) \n",0x10(%esp)
0830862f +0x41b:  movl   $0x12e4,0xc(%esp)
08308637 +0x423:  movl   $&_ZZN13CBattle_Field18get_candidator_mapEPK8CDungeonPK10GridScriptRiRSt6vectorIiSaIiEEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0830863f +0x42b:  movl   $"battle_field.cpp",0x4(%esp)
08308647 +0x433:  movl   $0x1,(%esp)
0830864e +0x43a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08308653 +0x43f:  mov    0x10(%ebp),%eax
08308656 +0x442:  lea    0x4(%eax),%edx
08308659 +0x445:  mov    -0x1c(%ebp),%eax
0830865c +0x448:  mov    %eax,0x4(%esp)
08308660 +0x44c:  mov    %edx,(%esp)
08308663 +0x44f:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08308668 +0x454:  mov    (%eax),%eax
0830866a +0x456:  mov    %eax,0x18(%esp)
0830866e +0x45a:  mov    -0x1c(%ebp),%eax
08308671 +0x45d:  mov    %eax,0x14(%esp)
08308675 +0x461:  movl   $"[CBattle_Field::MoveMap] Error(< map_candidator.size()==0) gs->mapIndexes_[%d]=%d \n",0x10(%esp)
0830867d +0x469:  movl   $0x12e5,0xc(%esp)
08308685 +0x471:  movl   $&_ZZN13CBattle_Field18get_candidator_mapEPK8CDungeonPK10GridScriptRiRSt6vectorIiSaIiEEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0830868d +0x479:  movl   $"battle_field.cpp",0x4(%esp)
08308695 +0x481:  movl   $0x1,(%esp)
0830869c +0x488:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083086a1 +0x48d:  addl   $0x1,-0x1c(%ebp)
083086a5 +0x491:  mov    0x10(%ebp),%eax
083086a8 +0x494:  add    $0x4,%eax
083086ab +0x497:  mov    %eax,(%esp)
083086ae +0x49a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083086b3 +0x49f:  cmp    -0x1c(%ebp),%eax
083086b6 +0x4a2:  seta   %al
083086b9 +0x4a5:  test   %al,%al
083086bb +0x4a7:  jne    083085d4 <+0x3c0>
083086c1 +0x4ad:  jmp    083086c4 <+0x4b0>
083086c3 +0x4af:  nop
083086c4 +0x4b0:  mov    $0x0,%eax
083086c9 +0x4b5:  add    $0x6c,%esp
083086cc +0x4b8:  pop    %ebx
083086cd +0x4b9:  pop    %esi
083086ce +0x4ba:  pop    %edi
083086cf +0x4bb:  pop    %ebp
083086d0 +0x4bc:  ret
083086d1 +0x4bd:  nop
```

## 反编译 C

```c
// CBattle_Field::get_candidator_map @ 0x8308214

/* CBattle_Field::get_candidator_map(CDungeon const*, GridScript const*, int&, std::vector<int,
   std::allocator<int> >&, int, int, int) */

undefined4 __thiscall
CBattle_Field::get_candidator_map
          (CBattle_Field *this,CDungeon *param_1,GridScript *param_2,int *param_3,vector *param_4,
          int param_5,int param_6,int param_7)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CMap *pCVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint local_2c;
  uint local_24;
  uint local_20;
  
  if ((param_1 == (CDungeon *)0x0) || (param_2 == (GridScript *)0x0)) {
    uVar3 = 0x17;
  }
  else {
    if (*param_3 == -1) {
      if ((*(int *)(this + 0xc) == param_5) && (*(int *)(this + 0x10) == param_6)) {
        iVar4 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(param_2 + 0x10));
        if (iVar4 == 0) {
          iVar4 = CDungeon::ChooseRandomMap(param_1,1,*(int *)param_2,param_7);
          *param_3 = iVar4;
        }
        else {
          for (local_2c = 0;
              uVar7 = std::vector<int,std::allocator<int>>::size
                                ((vector<int,std::allocator<int>> *)(param_2 + 0x10)),
              local_2c < uVar7; local_2c = local_2c + 1) {
            std::vector<int,std::allocator<int>>::operator[]
                      ((vector<int,std::allocator<int>> *)(param_2 + 0x10),local_2c);
            iVar4 = G_CDataManager();
            pCVar5 = (CMap *)CDataManager::find_map(iVar4);
            if (pCVar5 == (CMap *)0x0) {
              return 0x17;
            }
            cVar2 = CMap::CheckEntrance(pCVar5,param_7);
            if (cVar2 != '\0') {
              piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                        ((vector<int,std::allocator<int>> *)(param_2 + 0x10),
                                         local_2c);
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)param_4,piVar6);
            }
          }
        }
      }
      else if ((*(int *)(this + 0x14) == param_5) &&
              ((*(int *)(this + 0x18) == param_6 && (*(int *)(this + 0x19c) != 0)))) {
        *param_3 = *(int *)(this + 0x19c);
        if (*param_3 < 1) {
          uVar3 = std::vector<int,std::allocator<int>>::size
                            ((vector<int,std::allocator<int>> *)(param_2 + 0x1c));
          iVar4 = GetMapInfoFromPos(this,*(int *)(this + 0x60),*(int *)(this + 100),false);
          if (*(char *)(iVar4 + 0xe8) == '\0') {
            pcVar8 = "generalMap";
          }
          else {
            pcVar8 = "layeredMap";
          }
          uVar9 = std::vector<int,std::allocator<int>>::size
                            ((vector<int,std::allocator<int>> *)(param_2 + 4));
          uVar10 = std::vector<int,std::allocator<int>>::size
                             ((vector<int,std::allocator<int>> *)param_4);
          LogManager::logFormat
                    (1,"battle_field.cpp",
                     "int CBattle_Field::get_candidator_map(const CDungeon*, const GridScript*, int&, INT_VECTOR&, int, int, int)"
                     ,0x12bb,
                     "[CBattle_Field::MoveMap] Error(quest_stage_map_==-1) Dungeon[%d] Pos(%d,%d), candidator(%d), gs->mapIndex(%d), [Map Kind : %s], gs->layeredMapIndex(%d)\n"
                     ,*(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x60),
                     *(undefined4 *)(this + 100),uVar10,uVar9,pcVar8,uVar3);
        }
      }
      else if ((*(int *)(this + 0x1c0) == param_5) &&
              ((*(int *)(this + 0x1c4) == param_6 && (this[0x1b8] != (CBattle_Field)0x0)))) {
        *param_3 = *(int *)(this + 0x1bc);
        this[0x1c8] = (CBattle_Field)0x1;
      }
      else {
        iVar4 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(param_2 + 4));
        if (iVar4 == 0) {
          iVar4 = CDungeon::ChooseRandomMap(param_1,0,*(int *)param_2,param_7);
          *param_3 = iVar4;
        }
        else {
          for (local_24 = 0;
              uVar7 = std::vector<int,std::allocator<int>>::size
                                ((vector<int,std::allocator<int>> *)(param_2 + 4)), local_24 < uVar7
              ; local_24 = local_24 + 1) {
            std::vector<int,std::allocator<int>>::operator[]
                      ((vector<int,std::allocator<int>> *)(param_2 + 4),local_24);
            iVar4 = G_CDataManager();
            pCVar5 = (CMap *)CDataManager::find_map(iVar4);
            if (pCVar5 == (CMap *)0x0) {
              return 0x17;
            }
            cVar2 = CMap::CheckEntrance(pCVar5,param_7);
            if (cVar2 != '\0') {
              piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                        ((vector<int,std::allocator<int>> *)(param_2 + 4),local_24);
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)param_4,piVar6);
            }
          }
          iVar4 = GetCurrentMapInfo(this);
          if ((*(char *)(iVar4 + 0xe8) == '\x01') ||
             (iVar4 = std::vector<int,std::allocator<int>>::size
                                ((vector<int,std::allocator<int>> *)param_4), iVar4 != 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            for (local_20 = 0;
                uVar7 = std::vector<int,std::allocator<int>>::size
                                  ((vector<int,std::allocator<int>> *)(param_2 + 4)),
                local_20 < uVar7; local_20 = local_20 + 1) {
              std::vector<int,std::allocator<int>>::operator[]
                        ((vector<int,std::allocator<int>> *)(param_2 + 4),local_20);
              iVar4 = G_CDataManager();
              CDataManager::find_map(iVar4);
              LogManager::logFormat
                        (1,"battle_field.cpp",
                         "int CBattle_Field::get_candidator_map(const CDungeon*, const GridScript*, int&, INT_VECTOR&, int, int, int)"
                         ,0x12e4,
                         "[CBattle_Field::MoveMap] Error(< map_candidator.size()==0) Dungeon[%d] Pos(%d,%d), (Direction: %d) \n"
                         ,*(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x60),
                         *(undefined4 *)(this + 100),param_7);
              puVar11 = (undefined4 *)
                        std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(param_2 + 4),local_20);
              LogManager::logFormat
                        (1,"battle_field.cpp",
                         "int CBattle_Field::get_candidator_map(const CDungeon*, const GridScript*, int&, INT_VECTOR&, int, int, int)"
                         ,0x12e5,
                         "[CBattle_Field::MoveMap] Error(< map_candidator.size()==0) gs->mapIndexes_[%d]=%d \n"
                         ,local_20,*puVar11);
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
