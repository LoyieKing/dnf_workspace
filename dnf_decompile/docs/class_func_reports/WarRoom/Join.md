# Join

`_ZN7WarRoom4JoinEP5CUserRi`

`WarRoom::Join(CUser*, int&)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bae9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bae9a  _ZN7WarRoom4JoinEP5CUserRi
#           WarRoom::Join(CUser*, int&)
# range [0x086bae9a, 0x086bb53b]
086bae9a +0x000:  push   %ebp
086bae9b +0x001:  mov    %esp,%ebp
086bae9d +0x003:  push   %esi
086bae9e +0x004:  push   %ebx
086bae9f +0x005:  sub    $0x40,%esp
086baea2 +0x008:  mov    0x8(%ebp),%eax
086baea5 +0x00b:  mov    %eax,(%esp)
086baea8 +0x00e:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086baead +0x013:  mov    %eax,-0x18(%ebp)
086baeb0 +0x016:  lea    -0x24(%ebp),%eax
086baeb3 +0x019:  mov    %eax,(%esp)
086baeb6 +0x01c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086baebb +0x021:  lea    -0x30(%ebp),%eax
086baebe +0x024:  mov    %eax,(%esp)
086baec1 +0x027:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086baec6 +0x02c:  movl   $0x2,0x8(%esp)
086baece +0x034:  movl   $0x0,0x4(%esp)
086baed6 +0x03c:  lea    -0x24(%ebp),%eax
086baed9 +0x03f:  mov    %eax,(%esp)
086baedc +0x042:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086baee1 +0x047:  movl   $0xb,0x8(%esp)
086baee9 +0x04f:  movl   $0x0,0x4(%esp)
086baef1 +0x057:  lea    -0x30(%ebp),%eax
086baef4 +0x05a:  mov    %eax,(%esp)
086baef7 +0x05d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086baefc +0x062:  movl   $0x1,0x4(%esp)
086baf04 +0x06a:  lea    -0x24(%ebp),%eax
086baf07 +0x06d:  mov    %eax,(%esp)
086baf0a +0x070:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086baf0f +0x075:  mov    -0x18(%ebp),%eax
086baf12 +0x078:  mov    %eax,0x4(%esp)
086baf16 +0x07c:  lea    -0x24(%ebp),%eax
086baf19 +0x07f:  mov    %eax,(%esp)
086baf1c +0x082:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086baf21 +0x087:  mov    -0x18(%ebp),%eax
086baf24 +0x08a:  mov    %eax,0x4(%esp)
086baf28 +0x08e:  lea    -0x30(%ebp),%eax
086baf2b +0x091:  mov    %eax,(%esp)
086baf2e +0x094:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086baf33 +0x099:  movl   $0x0,-0x10(%ebp)
086baf3a +0x0a0:  jmp    086bb0f8 <+0x25e>
086baf3f +0x0a5:  mov    -0x10(%ebp),%edx
086baf42 +0x0a8:  mov    0x8(%ebp),%eax
086baf45 +0x0ab:  add    $0x48,%edx
086baf48 +0x0ae:  mov    0xc(%eax,%edx,4),%eax
086baf4c +0x0b2:  test   %eax,%eax
086baf4e +0x0b4:  je     086bb0f4 <+0x25a>
086baf54 +0x0ba:  lea    -0x24(%ebp),%edx
086baf57 +0x0bd:  mov    -0x10(%ebp),%ecx
086baf5a +0x0c0:  mov    0x8(%ebp),%eax
086baf5d +0x0c3:  add    $0x48,%ecx
086baf60 +0x0c6:  mov    0xc(%eax,%ecx,4),%eax
086baf64 +0x0ca:  movl   $0x1,0x8(%esp)
086baf6c +0x0d2:  mov    %edx,0x4(%esp)
086baf70 +0x0d6:  mov    %eax,(%esp)
086baf73 +0x0d9:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086baf78 +0x0de:  mov    -0x10(%ebp),%edx
086baf7b +0x0e1:  mov    0x8(%ebp),%eax
086baf7e +0x0e4:  add    $0x48,%edx
086baf81 +0x0e7:  mov    0xc(%eax,%edx,4),%eax
086baf85 +0x0eb:  mov    %eax,(%esp)
086baf88 +0x0ee:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086baf8d +0x0f3:  movzwl %ax,%eax
086baf90 +0x0f6:  mov    %eax,0x4(%esp)
086baf94 +0x0fa:  lea    -0x30(%ebp),%eax
086baf97 +0x0fd:  mov    %eax,(%esp)
086baf9a +0x100:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086baf9f +0x105:  mov    -0x10(%ebp),%edx
086bafa2 +0x108:  mov    0x8(%ebp),%eax
086bafa5 +0x10b:  add    $0x48,%edx
086bafa8 +0x10e:  mov    0xc(%eax,%edx,4),%eax
086bafac +0x112:  add    $0xe0,%eax
086bafb1 +0x117:  mov    %eax,(%esp)
086bafb4 +0x11a:  call   082f1bd8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x195c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x195c
086bafb9 +0x11f:  mov    %eax,0x4(%esp)
086bafbd +0x123:  lea    -0x30(%ebp),%eax
086bafc0 +0x126:  mov    %eax,(%esp)
086bafc3 +0x129:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bafc8 +0x12e:  mov    -0x10(%ebp),%edx
086bafcb +0x131:  mov    0x8(%ebp),%eax
086bafce +0x134:  add    $0x48,%edx
086bafd1 +0x137:  mov    0xc(%eax,%edx,4),%eax
086bafd5 +0x13b:  add    $0xe0,%eax
086bafda +0x140:  mov    %eax,(%esp)
086bafdd +0x143:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
086bafe2 +0x148:  mov    %eax,0x4(%esp)
086bafe6 +0x14c:  lea    -0x30(%ebp),%eax
086bafe9 +0x14f:  mov    %eax,(%esp)
086bafec +0x152:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086baff1 +0x157:  mov    -0x10(%ebp),%edx
086baff4 +0x15a:  mov    0x8(%ebp),%eax
086baff7 +0x15d:  add    $0x48,%edx
086baffa +0x160:  mov    0xc(%eax,%edx,4),%eax
086baffe +0x164:  add    $0xe0,%eax
086bb003 +0x169:  mov    %eax,(%esp)
086bb006 +0x16c:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
086bb00b +0x171:  movzwl %ax,%eax
086bb00e +0x174:  mov    %eax,0x4(%esp)
086bb012 +0x178:  lea    -0x30(%ebp),%eax
086bb015 +0x17b:  mov    %eax,(%esp)
086bb018 +0x17e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb01d +0x183:  mov    -0x10(%ebp),%edx
086bb020 +0x186:  mov    0x8(%ebp),%eax
086bb023 +0x189:  add    $0x48,%edx
086bb026 +0x18c:  mov    0xc(%eax,%edx,4),%eax
086bb02a +0x190:  mov    %eax,(%esp)
086bb02d +0x193:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086bb032 +0x198:  mov    %eax,0x4(%esp)
086bb036 +0x19c:  lea    -0x30(%ebp),%eax
086bb039 +0x19f:  mov    %eax,(%esp)
086bb03c +0x1a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb041 +0x1a7:  mov    -0x10(%ebp),%edx
086bb044 +0x1aa:  mov    0x8(%ebp),%eax
086bb047 +0x1ad:  add    $0x48,%edx
086bb04a +0x1b0:  mov    0xc(%eax,%edx,4),%eax
086bb04e +0x1b4:  add    $0xe0,%eax
086bb053 +0x1b9:  mov    %eax,(%esp)
086bb056 +0x1bc:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
086bb05b +0x1c1:  movsbl %al,%eax
086bb05e +0x1c4:  mov    %eax,0x4(%esp)
086bb062 +0x1c8:  lea    -0x30(%ebp),%eax
086bb065 +0x1cb:  mov    %eax,(%esp)
086bb068 +0x1ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb06d +0x1d3:  mov    -0x10(%ebp),%edx
086bb070 +0x1d6:  mov    0x8(%ebp),%eax
086bb073 +0x1d9:  add    $0x48,%edx
086bb076 +0x1dc:  mov    0xc(%eax,%edx,4),%eax
086bb07a +0x1e0:  add    $0xe0,%eax
086bb07f +0x1e5:  mov    %eax,(%esp)
086bb082 +0x1e8:  call   082f1c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1988
086bb087 +0x1ed:  mov    %eax,0x4(%esp)
086bb08b +0x1f1:  lea    -0x30(%ebp),%eax
086bb08e +0x1f4:  mov    %eax,(%esp)
086bb091 +0x1f7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb096 +0x1fc:  mov    -0x10(%ebp),%edx
086bb099 +0x1ff:  mov    0x8(%ebp),%eax
086bb09c +0x202:  add    $0x48,%edx
086bb09f +0x205:  mov    0xc(%eax,%edx,4),%eax
086bb0a3 +0x209:  mov    %eax,(%esp)
086bb0a6 +0x20c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086bb0ab +0x211:  test   %eax,%eax
086bb0ad +0x213:  setne  %al
086bb0b0 +0x216:  test   %al,%al
086bb0b2 +0x218:  je     086bb0e1 <+0x247>
086bb0b4 +0x21a:  mov    -0x10(%ebp),%edx
086bb0b7 +0x21d:  mov    0x8(%ebp),%eax
086bb0ba +0x220:  add    $0x48,%edx
086bb0bd +0x223:  mov    0xc(%eax,%edx,4),%eax
086bb0c1 +0x227:  mov    %eax,(%esp)
086bb0c4 +0x22a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086bb0c9 +0x22f:  movzbl 0x75(%eax),%eax
086bb0cd +0x233:  movzbl %al,%eax
086bb0d0 +0x236:  mov    %eax,0x4(%esp)
086bb0d4 +0x23a:  lea    -0x30(%ebp),%eax
086bb0d7 +0x23d:  mov    %eax,(%esp)
086bb0da +0x240:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb0df +0x245:  jmp    086bb0f4 <+0x25a>
086bb0e1 +0x247:  movl   $0x0,0x4(%esp)
086bb0e9 +0x24f:  lea    -0x30(%ebp),%eax
086bb0ec +0x252:  mov    %eax,(%esp)
086bb0ef +0x255:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb0f4 +0x25a:  addl   $0x1,-0x10(%ebp)
086bb0f8 +0x25e:  cmpl   $0x5,-0x10(%ebp)
086bb0fc +0x262:  setle  %al
086bb0ff +0x265:  test   %al,%al
086bb101 +0x267:  jne    086baf3f <+0xa5>
086bb107 +0x26d:  movl   $0x1,0x4(%esp)
086bb10f +0x275:  lea    -0x24(%ebp),%eax
086bb112 +0x278:  mov    %eax,(%esp)
086bb115 +0x27b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb11a +0x280:  movl   $0x1,0x4(%esp)
086bb122 +0x288:  lea    -0x30(%ebp),%eax
086bb125 +0x28b:  mov    %eax,(%esp)
086bb128 +0x28e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb12d +0x293:  movl   $0xffffffff,-0x14(%ebp)
086bb134 +0x29a:  movl   $0x0,-0xc(%ebp)
086bb13b +0x2a1:  jmp    086bb19c <+0x302>
086bb13d +0x2a3:  mov    -0xc(%ebp),%edx
086bb140 +0x2a6:  mov    0x8(%ebp),%eax
086bb143 +0x2a9:  add    $0x48,%edx
086bb146 +0x2ac:  mov    0xc(%eax,%edx,4),%eax
086bb14a +0x2b0:  test   %eax,%eax
086bb14c +0x2b2:  jne    086bb198 <+0x2fe>
086bb14e +0x2b4:  mov    -0xc(%ebp),%edx
086bb151 +0x2b7:  mov    0x8(%ebp),%eax
086bb154 +0x2ba:  add    $0x50,%edx
086bb157 +0x2bd:  mov    0x8(%eax,%edx,4),%eax
086bb15b +0x2c1:  cmp    $0xff,%eax
086bb160 +0x2c6:  jne    086bb198 <+0x2fe>
086bb162 +0x2c8:  mov    -0xc(%ebp),%eax
086bb165 +0x2cb:  mov    %eax,-0x14(%ebp)
086bb168 +0x2ce:  mov    -0xc(%ebp),%edx
086bb16b +0x2d1:  mov    0x8(%ebp),%eax
086bb16e +0x2d4:  lea    0x48(%edx),%ecx
086bb171 +0x2d7:  mov    0xc(%ebp),%edx
086bb174 +0x2da:  mov    %edx,0xc(%eax,%ecx,4)
086bb178 +0x2de:  mov    0x8(%ebp),%eax
086bb17b +0x2e1:  mov    0x4(%eax),%eax
086bb17e +0x2e4:  cwtl
086bb17f +0x2e5:  mov    %eax,0x4(%esp)
086bb183 +0x2e9:  mov    0xc(%ebp),%eax
086bb186 +0x2ec:  mov    %eax,(%esp)
086bb189 +0x2ef:  call   086c0b50 <_GLOBAL__I__ZN7WarRoomC2Ev+0x49>  ; global constructors keyed to WarRoom::WarRoom()+0x49
086bb18e +0x2f4:  mov    0x10(%ebp),%eax
086bb191 +0x2f7:  mov    -0xc(%ebp),%edx
086bb194 +0x2fa:  mov    %edx,(%eax)
086bb196 +0x2fc:  jmp    086bb1a7 <+0x30d>
086bb198 +0x2fe:  addl   $0x1,-0xc(%ebp)
086bb19c +0x302:  cmpl   $0x5,-0xc(%ebp)
086bb1a0 +0x306:  setle  %al
086bb1a3 +0x309:  test   %al,%al
086bb1a5 +0x30b:  jne    086bb13d <+0x2a3>
086bb1a7 +0x30d:  cmpl   $0xffffffff,-0x14(%ebp)
086bb1ab +0x311:  jne    086bb1b7 <+0x31d>
086bb1ad +0x313:  mov    $0x4,%ebx
086bb1b2 +0x318:  jmp    086bb4ff <+0x665>
086bb1b7 +0x31d:  lea    -0x24(%ebp),%eax
086bb1ba +0x320:  mov    %eax,0x4(%esp)
086bb1be +0x324:  mov    0xc(%ebp),%eax
086bb1c1 +0x327:  mov    %eax,(%esp)
086bb1c4 +0x32a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bb1c9 +0x32f:  lea    -0x30(%ebp),%eax
086bb1cc +0x332:  mov    %eax,0x4(%esp)
086bb1d0 +0x336:  mov    0xc(%ebp),%eax
086bb1d3 +0x339:  mov    %eax,(%esp)
086bb1d6 +0x33c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bb1db +0x341:  mov    0x8(%ebp),%eax
086bb1de +0x344:  mov    0x1d0(%eax),%eax
086bb1e4 +0x34a:  test   %eax,%eax
086bb1e6 +0x34c:  je     086bb21b <+0x381>
086bb1e8 +0x34e:  mov    0x8(%ebp),%eax
086bb1eb +0x351:  movzbl (%eax),%eax
086bb1ee +0x354:  movzbl %al,%ebx
086bb1f1 +0x357:  mov    0x8(%ebp),%eax
086bb1f4 +0x35a:  mov    0x1d0(%eax),%eax
086bb1fa +0x360:  mov    %eax,(%esp)
086bb1fd +0x363:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
086bb202 +0x368:  mov    0xc(%ebp),%edx
086bb205 +0x36b:  add    $0x79700,%edx
086bb20b +0x371:  mov    %ebx,0x8(%esp)
086bb20f +0x375:  mov    %eax,0x4(%esp)
086bb213 +0x379:  mov    %edx,(%esp)
086bb216 +0x37c:  call   08684a16 <_ZN15cUserHistoryLog12EnterDungeonEPKci>  ; cUserHistoryLog::EnterDungeon(char const*, int)
086bb21b +0x381:  mov    -0x14(%ebp),%edx
086bb21e +0x384:  mov    0x8(%ebp),%eax
086bb221 +0x387:  add    $0x50,%edx
086bb224 +0x38a:  movl   $0x0,0x8(%eax,%edx,4)
086bb22c +0x392:  mov    -0x14(%ebp),%eax
086bb22f +0x395:  mov    0x8(%ebp),%edx
086bb232 +0x398:  movb   $0x1,0x184(%edx,%eax,1)
086bb23a +0x3a0:  lea    -0x24(%ebp),%eax
086bb23d +0x3a3:  mov    %eax,(%esp)
086bb240 +0x3a6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bb245 +0x3ab:  movl   $0x2,0x8(%esp)
086bb24d +0x3b3:  movl   $0x0,0x4(%esp)
086bb255 +0x3bb:  lea    -0x24(%ebp),%eax
086bb258 +0x3be:  mov    %eax,(%esp)
086bb25b +0x3c1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bb260 +0x3c6:  movl   $0x1,0x4(%esp)
086bb268 +0x3ce:  lea    -0x24(%ebp),%eax
086bb26b +0x3d1:  mov    %eax,(%esp)
086bb26e +0x3d4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb273 +0x3d9:  movl   $0x1,0x4(%esp)
086bb27b +0x3e1:  lea    -0x24(%ebp),%eax
086bb27e +0x3e4:  mov    %eax,(%esp)
086bb281 +0x3e7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb286 +0x3ec:  lea    -0x24(%ebp),%eax
086bb289 +0x3ef:  movl   $0x1,0x8(%esp)
086bb291 +0x3f7:  mov    %eax,0x4(%esp)
086bb295 +0x3fb:  mov    0xc(%ebp),%eax
086bb298 +0x3fe:  mov    %eax,(%esp)
086bb29b +0x401:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086bb2a0 +0x406:  movl   $0x1,0x4(%esp)
086bb2a8 +0x40e:  lea    -0x24(%ebp),%eax
086bb2ab +0x411:  mov    %eax,(%esp)
086bb2ae +0x414:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb2b3 +0x419:  lea    -0x24(%ebp),%eax
086bb2b6 +0x41c:  mov    %eax,0x4(%esp)
086bb2ba +0x420:  mov    0x8(%ebp),%eax
086bb2bd +0x423:  mov    %eax,(%esp)
086bb2c0 +0x426:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bb2c5 +0x42b:  lea    -0x30(%ebp),%eax
086bb2c8 +0x42e:  mov    %eax,(%esp)
086bb2cb +0x431:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bb2d0 +0x436:  movl   $0xb,0x8(%esp)
086bb2d8 +0x43e:  movl   $0x0,0x4(%esp)
086bb2e0 +0x446:  lea    -0x30(%ebp),%eax
086bb2e3 +0x449:  mov    %eax,(%esp)
086bb2e6 +0x44c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bb2eb +0x451:  movl   $0x1,0x4(%esp)
086bb2f3 +0x459:  lea    -0x30(%ebp),%eax
086bb2f6 +0x45c:  mov    %eax,(%esp)
086bb2f9 +0x45f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb2fe +0x464:  mov    0xc(%ebp),%eax
086bb301 +0x467:  mov    %eax,(%esp)
086bb304 +0x46a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bb309 +0x46f:  movzwl %ax,%eax
086bb30c +0x472:  mov    %eax,0x4(%esp)
086bb310 +0x476:  lea    -0x30(%ebp),%eax
086bb313 +0x479:  mov    %eax,(%esp)
086bb316 +0x47c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb31b +0x481:  mov    0xc(%ebp),%eax
086bb31e +0x484:  add    $0xe0,%eax
086bb323 +0x489:  mov    %eax,(%esp)
086bb326 +0x48c:  call   082f1bd8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x195c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x195c
086bb32b +0x491:  mov    %eax,0x4(%esp)
086bb32f +0x495:  lea    -0x30(%ebp),%eax
086bb332 +0x498:  mov    %eax,(%esp)
086bb335 +0x49b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb33a +0x4a0:  mov    0xc(%ebp),%eax
086bb33d +0x4a3:  add    $0xe0,%eax
086bb342 +0x4a8:  mov    %eax,(%esp)
086bb345 +0x4ab:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
086bb34a +0x4b0:  mov    %eax,0x4(%esp)
086bb34e +0x4b4:  lea    -0x30(%ebp),%eax
086bb351 +0x4b7:  mov    %eax,(%esp)
086bb354 +0x4ba:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb359 +0x4bf:  mov    0xc(%ebp),%eax
086bb35c +0x4c2:  add    $0xe0,%eax
086bb361 +0x4c7:  mov    %eax,(%esp)
086bb364 +0x4ca:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
086bb369 +0x4cf:  movzwl %ax,%eax
086bb36c +0x4d2:  mov    %eax,0x4(%esp)
086bb370 +0x4d6:  lea    -0x30(%ebp),%eax
086bb373 +0x4d9:  mov    %eax,(%esp)
086bb376 +0x4dc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb37b +0x4e1:  mov    0xc(%ebp),%eax
086bb37e +0x4e4:  mov    %eax,(%esp)
086bb381 +0x4e7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086bb386 +0x4ec:  mov    %eax,0x4(%esp)
086bb38a +0x4f0:  lea    -0x30(%ebp),%eax
086bb38d +0x4f3:  mov    %eax,(%esp)
086bb390 +0x4f6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb395 +0x4fb:  mov    0xc(%ebp),%eax
086bb398 +0x4fe:  add    $0xe0,%eax
086bb39d +0x503:  mov    %eax,(%esp)
086bb3a0 +0x506:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
086bb3a5 +0x50b:  movsbl %al,%eax
086bb3a8 +0x50e:  mov    %eax,0x4(%esp)
086bb3ac +0x512:  lea    -0x30(%ebp),%eax
086bb3af +0x515:  mov    %eax,(%esp)
086bb3b2 +0x518:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb3b7 +0x51d:  mov    0xc(%ebp),%eax
086bb3ba +0x520:  add    $0xe0,%eax
086bb3bf +0x525:  mov    %eax,(%esp)
086bb3c2 +0x528:  call   082f1c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1988
086bb3c7 +0x52d:  mov    %eax,0x4(%esp)
086bb3cb +0x531:  lea    -0x30(%ebp),%eax
086bb3ce +0x534:  mov    %eax,(%esp)
086bb3d1 +0x537:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb3d6 +0x53c:  mov    0xc(%ebp),%eax
086bb3d9 +0x53f:  mov    %eax,(%esp)
086bb3dc +0x542:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086bb3e1 +0x547:  test   %eax,%eax
086bb3e3 +0x549:  setne  %al
086bb3e6 +0x54c:  test   %al,%al
086bb3e8 +0x54e:  je     086bb40d <+0x573>
086bb3ea +0x550:  mov    0xc(%ebp),%eax
086bb3ed +0x553:  mov    %eax,(%esp)
086bb3f0 +0x556:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086bb3f5 +0x55b:  movzbl 0x75(%eax),%eax
086bb3f9 +0x55f:  movzbl %al,%eax
086bb3fc +0x562:  mov    %eax,0x4(%esp)
086bb400 +0x566:  lea    -0x30(%ebp),%eax
086bb403 +0x569:  mov    %eax,(%esp)
086bb406 +0x56c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb40b +0x571:  jmp    086bb420 <+0x586>
086bb40d +0x573:  movl   $0x0,0x4(%esp)
086bb415 +0x57b:  lea    -0x30(%ebp),%eax
086bb418 +0x57e:  mov    %eax,(%esp)
086bb41b +0x581:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb420 +0x586:  movl   $0x1,0x4(%esp)
086bb428 +0x58e:  lea    -0x30(%ebp),%eax
086bb42b +0x591:  mov    %eax,(%esp)
086bb42e +0x594:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb433 +0x599:  lea    -0x30(%ebp),%eax
086bb436 +0x59c:  mov    %eax,0x4(%esp)
086bb43a +0x5a0:  mov    0x8(%ebp),%eax
086bb43d +0x5a3:  mov    %eax,(%esp)
086bb440 +0x5a6:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bb445 +0x5ab:  lea    -0x24(%ebp),%eax
086bb448 +0x5ae:  mov    %eax,(%esp)
086bb44b +0x5b1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bb450 +0x5b6:  movl   $0x5d,0x8(%esp)
086bb458 +0x5be:  movl   $0x1,0x4(%esp)
086bb460 +0x5c6:  lea    -0x24(%ebp),%eax
086bb463 +0x5c9:  mov    %eax,(%esp)
086bb466 +0x5cc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bb46b +0x5d1:  movl   $0x1,0x4(%esp)
086bb473 +0x5d9:  lea    -0x24(%ebp),%eax
086bb476 +0x5dc:  mov    %eax,(%esp)
086bb479 +0x5df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bb47e +0x5e4:  mov    0xc(%ebp),%eax
086bb481 +0x5e7:  mov    %eax,(%esp)
086bb484 +0x5ea:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
086bb489 +0x5ef:  mov    %eax,0x4(%esp)
086bb48d +0x5f3:  lea    -0x24(%ebp),%eax
086bb490 +0x5f6:  mov    %eax,(%esp)
086bb493 +0x5f9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bb498 +0x5fe:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086bb49f +0x605:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086bb4a4 +0x60a:  mov    0x8(%ebp),%edx
086bb4a7 +0x60d:  mov    0x1cc(%edx),%edx
086bb4ad +0x613:  sub    %edx,%eax
086bb4af +0x615:  mov    %eax,0x4(%esp)
086bb4b3 +0x619:  lea    -0x24(%ebp),%eax
086bb4b6 +0x61c:  mov    %eax,(%esp)
086bb4b9 +0x61f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb4be +0x624:  movl   $0x1,0x4(%esp)
086bb4c6 +0x62c:  lea    -0x24(%ebp),%eax
086bb4c9 +0x62f:  mov    %eax,(%esp)
086bb4cc +0x632:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb4d1 +0x637:  lea    -0x24(%ebp),%eax
086bb4d4 +0x63a:  mov    %eax,0x4(%esp)
086bb4d8 +0x63e:  mov    0xc(%ebp),%eax
086bb4db +0x641:  mov    %eax,(%esp)
086bb4de +0x644:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bb4e3 +0x649:  mov    $0x0,%ebx
086bb4e8 +0x64e:  jmp    086bb4ff <+0x665>
086bb4ea +0x650:  mov    %edx,%ebx
086bb4ec +0x652:  mov    %eax,%esi
086bb4ee +0x654:  lea    -0x30(%ebp),%eax
086bb4f1 +0x657:  mov    %eax,(%esp)
086bb4f4 +0x65a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb4f9 +0x65f:  mov    %esi,%eax
086bb4fb +0x661:  mov    %ebx,%edx
086bb4fd +0x663:  jmp    086bb50c <+0x672>
086bb4ff +0x665:  lea    -0x30(%ebp),%eax
086bb502 +0x668:  mov    %eax,(%esp)
086bb505 +0x66b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb50a +0x670:  jmp    086bb527 <+0x68d>
086bb50c +0x672:  mov    %edx,%ebx
086bb50e +0x674:  mov    %eax,%esi
086bb510 +0x676:  lea    -0x24(%ebp),%eax
086bb513 +0x679:  mov    %eax,(%esp)
086bb516 +0x67c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb51b +0x681:  mov    %esi,%eax
086bb51d +0x683:  mov    %ebx,%edx
086bb51f +0x685:  mov    %eax,(%esp)
086bb522 +0x688:  call   08ae3750 <_Unwind_Resume>
086bb527 +0x68d:  lea    -0x24(%ebp),%eax
086bb52a +0x690:  mov    %eax,(%esp)
086bb52d +0x693:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb532 +0x698:  mov    %ebx,%eax
086bb534 +0x69a:  add    $0x40,%esp
086bb537 +0x69d:  pop    %ebx
086bb538 +0x69e:  pop    %esi
086bb539 +0x69f:  pop    %ebp
086bb53a +0x6a0:  ret
086bb53b +0x6a1:  nop
```

## 反编译 C

```c
// WarRoom::Join @ 0x86bae9a

/* WarRoom::Join(CUser*, int&) */

undefined4 __thiscall WarRoom::Join(WarRoom *this,CUser *param_1,int *param_2)

{
  WarRoom WVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  PacketGuard local_34 [12];
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = GetWaiterCount(this);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086baec1 to 086baec5 has its CatchHandler @ 086bb50c */
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 086baedc to 086bb4e2 has its CatchHandler @ 086bb4ea */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_1c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_1c);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
      CUser::make_basic_info
                (*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc),(char *)local_28,'\x01');
      uVar4 = CUser::get_unique_id(*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      iVar5 = CNetwork<4096,450000>::get_inner_ip
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      iVar5 = CNetwork<4096,450000>::get_ip
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      uVar4 = CNetwork<4096,450000>::get_port
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      iVar5 = CUser::get_acc_id(*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      cVar2 = CNetwork<4096,450000>::get_nat_type
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      iVar5 = CNetwork<4096,450000>::get_mtu
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      iVar5 = CUserCharacInfo::getCurCharacR
                        (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
      if (iVar5 == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
      }
      else {
        iVar5 = CUserCharacInfo::getCurCharacR
                          (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(iVar5 + 0x75));
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  local_18 = -1;
  local_10 = 0;
  do {
    if (5 < local_10) {
LAB_086bb1a7:
      if (local_18 == -1) {
        uVar6 = 4;
      }
      else {
        CUser::Send(param_1,local_28);
        CUser::Send(param_1,local_34);
        if (*(int *)(this + 0x1d0) != 0) {
          WVar1 = *this;
          pcVar3 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x1d0));
          cUserHistoryLog::EnterDungeon
                    ((cUserHistoryLog *)(param_1 + 0x79700),pcVar3,(uint)(byte)WVar1);
        }
        *(undefined4 *)(this + (local_18 + 0x50) * 4 + 8) = 0;
        this[local_18 + 0x184] = (WarRoom)0x1;
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
        CUser::make_basic_info(param_1,(char *)local_28,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        SendToRoom(this,local_28);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xb);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
        uVar4 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
        iVar5 = CNetwork<4096,450000>::get_inner_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        iVar5 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        uVar4 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
        iVar5 = CUser::get_acc_id(param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        cVar2 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
        iVar5 = CNetwork<4096,450000>::get_mtu((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        if (iVar5 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
        }
        else {
          iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(iVar5 + 0x75))
          ;
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        SendToRoom(this,local_34);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x5d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
        iVar5 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar5);
        iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar5 - *(int *)(this + 0x1cc))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(param_1,local_28);
        uVar6 = 0;
      }
                    /* try { // try from 086bb505 to 086bb509 has its CatchHandler @ 086bb50c */
      PacketGuard::~PacketGuard(local_34);
      PacketGuard::~PacketGuard(local_28);
      return uVar6;
    }
    if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) == 0) &&
       (*(int *)(this + (local_10 + 0x50) * 4 + 8) == 0xff)) {
      local_18 = local_10;
      *(CUser **)(this + (local_10 + 0x48) * 4 + 0xc) = param_1;
      CUser::SetWarRoomIndex(param_1,(short)*(undefined4 *)(this + 4));
      *param_2 = local_10;
      goto LAB_086bb1a7;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
