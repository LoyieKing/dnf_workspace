# generateRewardItem

`_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty`

`WongWork::CDeathTower::CPlayData::generateRewardItem(int, int, WongWork::CDeathTower::CDungeonMgr const&, unsigned int, unsigned int, CParty*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08461fc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461fc0  _ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty
#           WongWork::CDeathTower::CPlayData::generateRewardItem(int, int, WongWork::CDeathTower::CDungeonMgr const&, unsigned int, unsigned int, CParty*)
# range [0x08461fc0, 0x08462537]
08461fc0 +0x000:  push   %ebp
08461fc1 +0x001:  mov    %esp,%ebp
08461fc3 +0x003:  push   %edi
08461fc4 +0x004:  push   %esi
08461fc5 +0x005:  push   %ebx
08461fc6 +0x006:  sub    $0x16c,%esp
08461fcc +0x00c:  mov    0xc(%ebp),%eax
08461fcf +0x00f:  mov    0x8(%ebp),%edx
08461fd2 +0x012:  imul   $0x268,%eax,%eax
08461fd8 +0x018:  lea    (%edx,%eax,1),%eax
08461fdb +0x01b:  lea    0x18(%eax),%edx
08461fde +0x01e:  mov    0x10(%ebp),%eax
08461fe1 +0x021:  mov    %eax,(%edx)
08461fe3 +0x023:  movl   $0x0,-0x24(%ebp)
08461fea +0x02a:  jmp    0846251c <+0x55c>
08461fef +0x02f:  lea    -0x140(%ebp),%eax
08461ff5 +0x035:  mov    %eax,(%esp)
08461ff8 +0x038:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
08461ffd +0x03d:  lea    -0x88(%ebp),%eax
08462003 +0x043:  mov    %eax,(%esp)
08462006 +0x046:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
0846200b +0x04b:  cmpl   $0x0,0x20(%ebp)
0846200f +0x04f:  je     08462031 <+0x71>
08462011 +0x051:  movl   $0x0,0x8(%esp)
08462019 +0x059:  lea    -0x88(%ebp),%eax
0846201f +0x05f:  add    $0xc,%eax
08462022 +0x062:  mov    %eax,0x4(%esp)
08462026 +0x066:  mov    0x20(%ebp),%eax
08462029 +0x069:  mov    %eax,(%esp)
0846202c +0x06c:  call   085b61be <_ZN6CParty12GetLuckPointEP10CLuckPointb>  ; CParty::GetLuckPoint(CLuckPoint*, bool)
08462031 +0x071:  movl   $0x3e8,(%esp)
08462038 +0x078:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0846203d +0x07d:  mov    %eax,-0x20(%ebp)
08462040 +0x080:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08462045 +0x085:  mov    0x5e20(%eax),%eax
0846204b +0x08b:  imul   0x1c(%ebp),%eax
0846204f +0x08f:  cmp    -0x20(%ebp),%eax
08462052 +0x092:  seta   %al
08462055 +0x095:  test   %al,%al
08462057 +0x097:  je     0846229f <+0x2df>
0846205d +0x09d:  movb   $0x0,-0x10b(%ebp)
08462064 +0x0a4:  mov    0x18(%ebp),%eax
08462067 +0x0a7:  mov    %al,-0x10c(%ebp)
0846206d +0x0ad:  movb   $0x1,-0x10a(%ebp)
08462074 +0x0b4:  movl   $0x1,-0x108(%ebp)
0846207e +0x0be:  movw   $0x1,-0x104(%ebp)
08462087 +0x0c7:  movw   $0x1,-0x102(%ebp)
08462090 +0x0d0:  movw   $0x1,-0x100(%ebp)
08462099 +0x0d9:  movw   $0x1,-0xfe(%ebp)
084620a2 +0x0e2:  lea    -0xb8(%ebp),%eax
084620a8 +0x0e8:  mov    %eax,(%esp)
084620ab +0x0eb:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
084620b0 +0x0f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084620b5 +0x0f5:  mov    %eax,(%esp)
084620b8 +0x0f8:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
084620bd +0x0fd:  movl   $0x2,0x4(%esp)
084620c5 +0x105:  mov    %eax,(%esp)
084620c8 +0x108:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
084620cd +0x10d:  mov    (%eax),%edx
084620cf +0x10f:  add    $0xc,%edx
084620d2 +0x112:  mov    (%edx),%ecx
084620d4 +0x114:  lea    -0xb8(%ebp),%edx
084620da +0x11a:  mov    %edx,0x8(%esp)
084620de +0x11e:  lea    -0x140(%ebp),%edx
084620e4 +0x124:  mov    %edx,0x4(%esp)
084620e8 +0x128:  mov    %eax,(%esp)
084620eb +0x12b:  call   *%ecx
084620ed +0x12d:  cmpl   $0x0,0x20(%ebp)
084620f1 +0x131:  je     0846218c <+0x1cc>
084620f7 +0x137:  lea    -0x34(%ebp),%eax
084620fa +0x13a:  lea    -0xb8(%ebp),%edx
08462100 +0x140:  mov    %edx,0x4(%esp)
08462104 +0x144:  mov    %eax,(%esp)
08462107 +0x147:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0846210c +0x14c:  sub    $0x4,%esp
0846210f +0x14f:  mov    0x20(%ebp),%eax
08462112 +0x152:  mov    %eax,0x4(%esp)
08462116 +0x156:  lea    -0x3c(%ebp),%eax
08462119 +0x159:  mov    %eax,(%esp)
0846211c +0x15c:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
08462121 +0x161:  mov    0x14(%ebp),%eax
08462124 +0x164:  mov    %eax,(%esp)
08462127 +0x167:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846212c +0x16c:  mov    %eax,(%esp)
0846212f +0x16f:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08462134 +0x174:  mov    %eax,-0x38(%ebp)
08462137 +0x177:  lea    -0x58(%ebp),%eax
0846213a +0x17a:  mov    %eax,(%esp)
0846213d +0x17d:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
08462142 +0x182:  lea    -0x34(%ebp),%eax
08462145 +0x185:  mov    %eax,(%esp)
08462148 +0x188:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0846214d +0x18d:  mov    0x7(%eax),%eax
08462150 +0x190:  mov    %eax,-0x58(%ebp)
08462153 +0x193:  lea    -0x58(%ebp),%eax
08462156 +0x196:  mov    %eax,0x10(%esp)
0846215a +0x19a:  mov    -0x3c(%ebp),%eax
0846215d +0x19d:  mov    -0x38(%ebp),%edx
08462160 +0x1a0:  mov    %eax,0x8(%esp)
08462164 +0x1a4:  mov    %edx,0xc(%esp)
08462168 +0x1a8:  movl   $0xb,0x4(%esp)
08462170 +0x1b0:  mov    0x20(%ebp),%eax
08462173 +0x1b3:  mov    %eax,(%esp)
08462176 +0x1b6:  call   0859b992 <_ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
0846217b +0x1bb:  lea    -0x34(%ebp),%eax
0846217e +0x1be:  mov    %eax,(%esp)
08462181 +0x1c1:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
08462186 +0x1c6:  mov    -0x58(%ebp),%edx
08462189 +0x1c9:  mov    %edx,0x7(%eax)
0846218c +0x1cc:  lea    -0x30(%ebp),%eax
0846218f +0x1cf:  lea    -0xb8(%ebp),%edx
08462195 +0x1d5:  mov    %edx,0x4(%esp)
08462199 +0x1d9:  mov    %eax,(%esp)
0846219c +0x1dc:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
084621a1 +0x1e1:  sub    $0x4,%esp
084621a4 +0x1e4:  lea    -0x30(%ebp),%eax
084621a7 +0x1e7:  mov    %eax,(%esp)
084621aa +0x1ea:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
084621af +0x1ef:  mov    0xc(%ebp),%edx
084621b2 +0x1f2:  mov    -0x24(%ebp),%ecx
084621b5 +0x1f5:  imul   $0x3d,%ecx,%ecx
084621b8 +0x1f8:  imul   $0x268,%edx,%edx
084621be +0x1fe:  lea    (%ecx,%edx,1),%edx
084621c1 +0x201:  add    $0x10,%edx
084621c4 +0x204:  add    0x8(%ebp),%edx
084621c7 +0x207:  add    $0xc,%edx
084621ca +0x20a:  mov    %eax,0x4(%esp)
084621ce +0x20e:  mov    %edx,(%esp)
084621d1 +0x211:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084621d6 +0x216:  mov    0xc(%ebp),%eax
084621d9 +0x219:  mov    -0x24(%ebp),%edx
084621dc +0x21c:  imul   $0x3d,%edx,%edx
084621df +0x21f:  imul   $0x268,%eax,%eax
084621e5 +0x225:  lea    (%edx,%eax,1),%eax
084621e8 +0x228:  add    $0x10,%eax
084621eb +0x22b:  add    0x8(%ebp),%eax
084621ee +0x22e:  add    $0xc,%eax
084621f1 +0x231:  mov    %eax,(%esp)
084621f4 +0x234:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084621f9 +0x239:  mov    %eax,-0x150(%ebp)
084621ff +0x23f:  fildl  -0x150(%ebp)
08462205 +0x245:  fstps  -0x154(%ebp)
0846220b +0x24b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08462210 +0x250:  flds   0x5e2c(%eax)
08462216 +0x256:  fmuls  -0x154(%ebp)
0846221c +0x25c:  fnstcw -0x14a(%ebp)
08462222 +0x262:  movzwl -0x14a(%ebp),%eax
08462229 +0x269:  mov    $0xc,%ah
0846222b +0x26b:  mov    %ax,-0x14c(%ebp)
08462232 +0x272:  fldcw  -0x14c(%ebp)
08462238 +0x278:  fistpl -0x150(%ebp)
0846223e +0x27e:  fldcw  -0x14a(%ebp)
08462244 +0x284:  mov    -0x150(%ebp),%eax
0846224a +0x28a:  mov    0xc(%ebp),%edx
0846224d +0x28d:  mov    -0x24(%ebp),%ecx
08462250 +0x290:  imul   $0x3d,%ecx,%ecx
08462253 +0x293:  imul   $0x268,%edx,%edx
08462259 +0x299:  lea    (%ecx,%edx,1),%edx
0846225c +0x29c:  add    $0x10,%edx
0846225f +0x29f:  add    0x8(%ebp),%edx
08462262 +0x2a2:  add    $0xc,%edx
08462265 +0x2a5:  mov    %eax,0x4(%esp)
08462269 +0x2a9:  mov    %edx,(%esp)
0846226c +0x2ac:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08462271 +0x2b1:  lea    -0xb8(%ebp),%eax
08462277 +0x2b7:  mov    %eax,(%esp)
0846227a +0x2ba:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
0846227f +0x2bf:  jmp    084624bb <+0x4fb>
08462284 +0x2c4:  mov    %edx,%ebx
08462286 +0x2c6:  mov    %eax,%esi
08462288 +0x2c8:  lea    -0xb8(%ebp),%eax
0846228e +0x2ce:  mov    %eax,(%esp)
08462291 +0x2d1:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08462296 +0x2d6:  mov    %esi,%eax
08462298 +0x2d8:  mov    %ebx,%edx
0846229a +0x2da:  jmp    084624c2 <+0x502>
0846229f +0x2df:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084622a4 +0x2e4:  mov    0x5e24(%eax),%eax
084622aa +0x2ea:  imul   0x1c(%ebp),%eax
084622ae +0x2ee:  cmp    -0x20(%ebp),%eax
084622b1 +0x2f1:  seta   %al
084622b4 +0x2f4:  test   %al,%al
084622b6 +0x2f6:  je     084624bb <+0x4fb>
084622bc +0x2fc:  movb   $0x0,-0x10b(%ebp)
084622c3 +0x303:  mov    0x18(%ebp),%eax
084622c6 +0x306:  mov    %al,-0x10c(%ebp)
084622cc +0x30c:  mov    $0x3f800000,%eax
084622d1 +0x311:  mov    %eax,-0x108(%ebp)
084622d7 +0x317:  mov    0x14(%ebp),%eax
084622da +0x31a:  mov    %eax,(%esp)
084622dd +0x31d:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
084622e2 +0x322:  mov    %eax,-0x100(%ebp)
084622e8 +0x328:  movl   $0x0,-0x104(%ebp)
084622f2 +0x332:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084622f7 +0x337:  mov    %eax,(%esp)
084622fa +0x33a:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
084622ff +0x33f:  movl   $0x2,0x4(%esp)
08462307 +0x347:  mov    %eax,(%esp)
0846230a +0x34a:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0846230f +0x34f:  mov    (%eax),%edx
08462311 +0x351:  add    $0x8,%edx
08462314 +0x354:  mov    (%edx),%ecx
08462316 +0x356:  lea    -0x88(%ebp),%edx
0846231c +0x35c:  mov    %edx,0x8(%esp)
08462320 +0x360:  lea    -0x140(%ebp),%edx
08462326 +0x366:  mov    %edx,0x4(%esp)
0846232a +0x36a:  mov    %eax,(%esp)
0846232d +0x36d:  call   *%ecx
0846232f +0x36f:  lea    -0x88(%ebp),%eax
08462335 +0x375:  mov    %eax,(%esp)
08462338 +0x378:  call   0814ad32 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xad1>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xad1
0846233d +0x37d:  xor    $0x1,%eax
08462340 +0x380:  test   %al,%al
08462342 +0x382:  je     084624bb <+0x4fb>
08462348 +0x388:  lea    -0x2c(%ebp),%eax
0846234b +0x38b:  lea    -0x88(%ebp),%edx
08462351 +0x391:  mov    %edx,0x4(%esp)
08462355 +0x395:  mov    %eax,(%esp)
08462358 +0x398:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0846235d +0x39d:  sub    $0x4,%esp
08462360 +0x3a0:  lea    -0x2c(%ebp),%eax
08462363 +0x3a3:  mov    %eax,(%esp)
08462366 +0x3a6:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0846236b +0x3ab:  mov    0xc(%ebp),%edx
0846236e +0x3ae:  mov    -0x24(%ebp),%ecx
08462371 +0x3b1:  imul   $0x3d,%ecx,%ecx
08462374 +0x3b4:  imul   $0x268,%edx,%edx
0846237a +0x3ba:  lea    (%ecx,%edx,1),%edx
0846237d +0x3bd:  add    $0x10,%edx
08462380 +0x3c0:  add    0x8(%ebp),%edx
08462383 +0x3c3:  add    $0xc,%edx
08462386 +0x3c6:  mov    %eax,0x4(%esp)
0846238a +0x3ca:  mov    %edx,(%esp)
0846238d +0x3cd:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08462392 +0x3d2:  lea    -0x28(%ebp),%eax
08462395 +0x3d5:  lea    -0x88(%ebp),%edx
0846239b +0x3db:  mov    %edx,0x4(%esp)
0846239f +0x3df:  mov    %eax,(%esp)
084623a2 +0x3e2:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
084623a7 +0x3e7:  sub    $0x4,%esp
084623aa +0x3ea:  lea    -0x28(%ebp),%eax
084623ad +0x3ed:  mov    %eax,(%esp)
084623b0 +0x3f0:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
084623b5 +0x3f5:  mov    (%eax),%edx
084623b7 +0x3f7:  mov    %edx,-0xf5(%ebp)
084623bd +0x3fd:  mov    0x4(%eax),%edx
084623c0 +0x400:  mov    %edx,-0xf1(%ebp)
084623c6 +0x406:  mov    0x8(%eax),%edx
084623c9 +0x409:  mov    %edx,-0xed(%ebp)
084623cf +0x40f:  mov    0xc(%eax),%edx
084623d2 +0x412:  mov    %edx,-0xe9(%ebp)
084623d8 +0x418:  mov    0x10(%eax),%edx
084623db +0x41b:  mov    %edx,-0xe5(%ebp)
084623e1 +0x421:  mov    0x14(%eax),%edx
084623e4 +0x424:  mov    %edx,-0xe1(%ebp)
084623ea +0x42a:  mov    0x18(%eax),%edx
084623ed +0x42d:  mov    %edx,-0xdd(%ebp)
084623f3 +0x433:  mov    0x1c(%eax),%edx
084623f6 +0x436:  mov    %edx,-0xd9(%ebp)
084623fc +0x43c:  mov    0x20(%eax),%edx
084623ff +0x43f:  mov    %edx,-0xd5(%ebp)
08462405 +0x445:  mov    0x24(%eax),%edx
08462408 +0x448:  mov    %edx,-0xd1(%ebp)
0846240e +0x44e:  mov    0x28(%eax),%edx
08462411 +0x451:  mov    %edx,-0xcd(%ebp)
08462417 +0x457:  mov    0x2c(%eax),%edx
0846241a +0x45a:  mov    %edx,-0xc9(%ebp)
08462420 +0x460:  mov    0x30(%eax),%edx
08462423 +0x463:  mov    %edx,-0xc5(%ebp)
08462429 +0x469:  mov    0x34(%eax),%edx
0846242c +0x46c:  mov    %edx,-0xc1(%ebp)
08462432 +0x472:  mov    0x38(%eax),%edx
08462435 +0x475:  mov    %edx,-0xbd(%ebp)
0846243b +0x47b:  movzbl 0x3c(%eax),%eax
0846243f +0x47f:  mov    %al,-0xb9(%ebp)
08462445 +0x485:  mov    -0xf3(%ebp),%eax
0846244b +0x48b:  mov    %eax,%ebx
0846244d +0x48d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08462452 +0x492:  mov    0xc(%eax),%eax
08462455 +0x495:  mov    %ebx,0x4(%esp)
08462459 +0x499:  mov    %eax,(%esp)
0846245c +0x49c:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08462461 +0x4a1:  mov    %eax,-0x1c(%ebp)
08462464 +0x4a4:  cmpl   $0x0,-0x1c(%ebp)
08462468 +0x4a8:  jne    08462471 <+0x4b1>
0846246a +0x4aa:  mov    $0x0,%ebx
0846246f +0x4af:  jmp    084624da <+0x51a>
08462471 +0x4b1:  mov    -0x1c(%ebp),%eax
08462474 +0x4b4:  mov    %eax,(%esp)
08462477 +0x4b7:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0846247c +0x4bc:  mov    %eax,%ebx
0846247e +0x4be:  mov    -0x1c(%ebp),%eax
08462481 +0x4c1:  mov    %eax,(%esp)
08462484 +0x4c4:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08462489 +0x4c9:  mov    %eax,%edi
0846248b +0x4cb:  movzbl -0xf4(%ebp),%eax
08462492 +0x4d2:  movzbl %al,%esi
08462495 +0x4d5:  mov    0xc(%ebp),%eax
08462498 +0x4d8:  mov    %eax,0x4(%esp)
0846249c +0x4dc:  mov    0x20(%ebp),%eax
0846249f +0x4df:  mov    %eax,(%esp)
084624a2 +0x4e2:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
084624a7 +0x4e7:  mov    %ebx,0xc(%esp)
084624ab +0x4eb:  mov    %edi,0x8(%esp)
084624af +0x4ef:  mov    %esi,0x4(%esp)
084624b3 +0x4f3:  mov    %eax,(%esp)
084624b6 +0x4f6:  call   08550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>  ; CLuckPoint::UseLuckPoint(CUser*, int, int, int)
084624bb +0x4fb:  mov    $0x1,%ebx
084624c0 +0x500:  jmp    084624da <+0x51a>
084624c2 +0x502:  mov    %edx,%ebx
084624c4 +0x504:  mov    %eax,%esi
084624c6 +0x506:  lea    -0x88(%ebp),%eax
084624cc +0x50c:  mov    %eax,(%esp)
084624cf +0x50f:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
084624d4 +0x514:  mov    %esi,%eax
084624d6 +0x516:  mov    %ebx,%edx
084624d8 +0x518:  jmp    084624fe <+0x53e>
084624da +0x51a:  lea    -0x88(%ebp),%eax
084624e0 +0x520:  mov    %eax,(%esp)
084624e3 +0x523:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
084624e8 +0x528:  test   %ebx,%ebx
084624ea +0x52a:  lea    -0x140(%ebp),%eax
084624f0 +0x530:  mov    %eax,(%esp)
084624f3 +0x533:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
084624f8 +0x538:  addl   $0x1,-0x24(%ebp)
084624fc +0x53c:  jmp    0846251c <+0x55c>
084624fe +0x53e:  mov    %edx,%ebx
08462500 +0x540:  mov    %eax,%esi
08462502 +0x542:  lea    -0x140(%ebp),%eax
08462508 +0x548:  mov    %eax,(%esp)
0846250b +0x54b:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08462510 +0x550:  mov    %esi,%eax
08462512 +0x552:  mov    %ebx,%edx
08462514 +0x554:  mov    %eax,(%esp)
08462517 +0x557:  call   08ae3750 <_Unwind_Resume>
0846251c +0x55c:  mov    -0x24(%ebp),%eax
0846251f +0x55f:  cmp    0x10(%ebp),%eax
08462522 +0x562:  setl   %al
08462525 +0x565:  test   %al,%al
08462527 +0x567:  jne    08461fef <+0x2f>
0846252d +0x56d:  lea    -0xc(%ebp),%esp
08462530 +0x570:  add    $0x0,%esp
08462533 +0x573:  pop    %ebx
08462534 +0x574:  pop    %esi
08462535 +0x575:  pop    %edi
08462536 +0x576:  pop    %ebp
08462537 +0x577:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::generateRewardItem @ 0x8461fc0

/* WongWork::CDeathTower::CPlayData::generateRewardItem(int, int, WongWork::CDeathTower::CDungeonMgr
   const&, unsigned int, unsigned int, CParty*) */

void __thiscall
WongWork::CDeathTower::CPlayData::generateRewardItem
          (CPlayData *this,int param_1,int param_2,CDungeonMgr *param_3,uint param_4,uint param_5,
          CParty *param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CDataManager *pCVar5;
  CItemGeneratorMgr *pCVar6;
  int *piVar7;
  CDungeon *this_00;
  Inven_Item *pIVar8;
  int iVar9;
  undefined4 *puVar10;
  CUser *pCVar11;
  stGenerateRefData_t local_144 [52];
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_f9;
  byte bStack_f8;
  undefined2 uStack_f7;
  undefined2 local_f5;
  undefined2 uStack_f3;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined4 local_e9;
  undefined4 local_e5;
  undefined4 local_e1;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined1 local_bd;
  stGenerateResult_t local_bc [48];
  stGenerateResult_t local_8c [12];
  CLuckPoint aCStack_80 [36];
  undefined4 local_5c [7];
  undefined4 local_40;
  undefined4 local_3c;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_38 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_34 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_30 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_2c [4];
  int local_28;
  uint local_24;
  CItem *local_20;
  
  *(int *)(this + param_1 * 0x268 + 0x18) = param_2;
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    stGenerateRefData_t::stGenerateRefData_t(local_144);
                    /* try { // try from 08462006 to 0846200a has its CatchHandler @ 084624fe */
    stGenerateResult_t::stGenerateResult_t(local_8c);
    if (param_6 != (CParty *)0x0) {
                    /* try { // try from 0846202c to 084620af has its CatchHandler @ 084624c2 */
      CParty::GetLuckPoint(param_6,aCStack_80,false);
    }
    local_24 = get_rand_int(1000);
    iVar3 = G_CDataManager();
    uVar4 = *(int *)(iVar3 + 0x5e20) * param_5;
    if (uVar4 < local_24 || uVar4 - local_24 == 0) {
                    /* try { // try from 0846229f to 084624ba has its CatchHandler @ 084624c2 */
      iVar3 = G_CDataManager();
      uVar4 = *(int *)(iVar3 + 0x5e24) * param_5;
      if (local_24 <= uVar4 && uVar4 - local_24 != 0) {
        local_10f = 0;
        local_10c = 0x3f800000;
        local_110 = (char)param_4;
        local_104 = CDungeonMgr::getDungeon(param_3);
        local_108 = 0;
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
        piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
        (**(code **)(*piVar7 + 8))(piVar7,local_144,local_8c);
        cVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::empty();
        if (cVar2 != '\x01') {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          pIVar8 = (Inven_Item *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_30);
          Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c),pIVar8
                             );
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          puVar10 = (undefined4 *)
                    __gnu_cxx::
                    __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                    ::operator*(local_2c);
          uVar1 = *puVar10;
          local_f9 = (undefined1)uVar1;
          bStack_f8 = (byte)((uint)uVar1 >> 8);
          uStack_f7 = (undefined2)((uint)uVar1 >> 0x10);
          local_f5 = (undefined2)puVar10[1];
          uStack_f3 = (undefined2)((uint)puVar10[1] >> 0x10);
          local_f1 = puVar10[2];
          local_ed = puVar10[3];
          local_e9 = puVar10[4];
          local_e5 = puVar10[5];
          local_e1 = puVar10[6];
          local_dd = puVar10[7];
          local_d9 = puVar10[8];
          local_d5 = puVar10[9];
          local_d1 = puVar10[10];
          local_cd = puVar10[0xb];
          local_c9 = puVar10[0xc];
          local_c5 = puVar10[0xd];
          local_c1 = puVar10[0xe];
          local_bd = *(undefined1 *)(puVar10 + 0xf);
          iVar3 = CONCAT22(local_f5,uStack_f7);
          iVar9 = G_CDataManager();
          local_20 = (CItem *)CItemList::find_item(*(CItemList **)(iVar9 + 0xc),iVar3);
          if (local_20 != (CItem *)0x0) {
            iVar3 = CItem::get_grade(local_20);
            iVar9 = CItem::get_rarity(local_20);
            uVar4 = (uint)bStack_f8;
            pCVar11 = (CUser *)CParty::get_user(param_6,param_1);
            CLuckPoint::UseLuckPoint(pCVar11,uVar4,iVar9,iVar3);
          }
        }
      }
    }
    else {
      local_10f = 0;
      local_10e = 1;
      local_10c = 1;
      local_108 = 0x10001;
      local_104 = 0x10001;
      local_110 = (char)param_4;
      stGenerateResult_t::stGenerateResult_t(local_bc);
                    /* try { // try from 084620b0 to 0846220f has its CatchHandler @ 08462284 */
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
      (**(code **)(*piVar7 + 0xc))(piVar7,local_144,local_bc);
      if (param_6 != (CParty *)0x0) {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_40,param_6);
        this_00 = (CDungeon *)CDungeonMgr::getDungeon(param_3);
        local_3c = CDungeon::get_index(this_00);
        QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_5c);
        iVar3 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_38);
        local_5c[0] = *(undefined4 *)(iVar3 + 7);
        CParty::set_basic_reward(param_6,0xb,local_40,local_3c,local_5c);
        iVar3 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_38);
        *(undefined4 *)(iVar3 + 7) = local_5c[0];
      }
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      pIVar8 = (Inven_Item *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_34);
      Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c),pIVar8);
      iVar3 = Inven_Item::get_add_info
                        ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c));
      iVar9 = G_CDataManager();
      Inven_Item::set_add_info
                ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c),
                 (int)ROUND(*(float *)(iVar9 + 0x5e2c) * (float)iVar3));
                    /* try { // try from 0846227a to 0846227e has its CatchHandler @ 084624c2 */
      stGenerateResult_t::~stGenerateResult_t(local_bc);
    }
                    /* try { // try from 084624e3 to 084624e7 has its CatchHandler @ 084624fe */
    stGenerateResult_t::~stGenerateResult_t(local_8c);
    stGenerateRefData_t::~stGenerateRefData_t(local_144);
  }
  return;
}
```
