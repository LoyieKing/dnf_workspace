# handleKillMonster

`_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi`

`WongWork::CDeathTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846483e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846483e  _ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi
#           WongWork::CDeathTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
# range [0x0846483e, 0x08465959]
0846483e +0x0000:  push   %ebp
0846483f +0x0001:  mov    %esp,%ebp
08464841 +0x0003:  push   %edi
08464842 +0x0004:  push   %esi
08464843 +0x0005:  push   %ebx
08464844 +0x0006:  sub    $0x59c,%esp
0846484a +0x000c:  mov    0x10(%ebp),%edx
0846484d +0x000f:  mov    0x14(%ebp),%eax
08464850 +0x0012:  mov    %dx,-0x53c(%ebp)
08464857 +0x0019:  mov    %ax,-0x540(%ebp)
0846485e +0x0020:  mov    0x8(%ebp),%eax
08464861 +0x0023:  add    $0x14,%eax
08464864 +0x0026:  mov    %eax,(%esp)
08464867 +0x0029:  call   08469b18 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1fb>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1fb
0846486c +0x002e:  cmp    $0x1,%eax
0846486f +0x0031:  setne  %al
08464872 +0x0034:  test   %al,%al
08464874 +0x0036:  je     0846489b <+0x5d>
08464876 +0x0038:  movl   $0x13,0x8(%esp)
0846487e +0x0040:  movl   $0x2a,0x4(%esp)
08464886 +0x0048:  mov    0xc(%ebp),%eax
08464889 +0x004b:  mov    %eax,(%esp)
0846488c +0x004e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08464891 +0x0053:  mov    $0x0,%ebx
08464896 +0x0058:  jmp    0846594c <+0x110e>
0846489b +0x005d:  mov    0x8(%ebp),%eax
0846489e +0x0060:  add    $0xb58,%eax
084648a3 +0x0065:  mov    %eax,(%esp)
084648a6 +0x0068:  call   08469cda <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3bd>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3bd
084648ab +0x006d:  test   %eax,%eax
084648ad +0x006f:  jne    084648e4 <+0xa6>
084648af +0x0071:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084648b6 +0x0078:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
084648bb +0x007d:  mov    0x8(%ebp),%edx
084648be +0x0080:  add    $0xb58,%edx
084648c4 +0x0086:  movl   $0x3e8,0x8(%esp)
084648cc +0x008e:  mov    %eax,0x4(%esp)
084648d0 +0x0092:  mov    %edx,(%esp)
084648d3 +0x0095:  call   08469c96 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x379>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x379
084648d8 +0x009a:  cmp    $0x2,%eax
084648db +0x009d:  jbe    084648e4 <+0xa6>
084648dd +0x009f:  mov    $0x1,%eax
084648e2 +0x00a4:  jmp    084648e9 <+0xab>
084648e4 +0x00a6:  mov    $0x0,%eax
084648e9 +0x00ab:  test   %al,%al
084648eb +0x00ad:  je     08464a68 <+0x22a>
084648f1 +0x00b3:  movb   $0x0,-0x51(%ebp)
084648f5 +0x00b7:  cmpl   $0x0,0xc(%ebp)
084648f9 +0x00bb:  je     08464912 <+0xd4>
084648fb +0x00bd:  mov    0xc(%ebp),%eax
084648fe +0x00c0:  mov    %eax,(%esp)
08464901 +0x00c3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08464906 +0x00c8:  cmp    $0x1d,%eax
08464909 +0x00cb:  jle    08464912 <+0xd4>
0846490b +0x00cd:  mov    $0x1,%eax
08464910 +0x00d2:  jmp    08464917 <+0xd9>
08464912 +0x00d4:  mov    $0x0,%eax
08464917 +0x00d9:  test   %al,%al
08464919 +0x00db:  je     08464924 <+0xe6>
0846491b +0x00dd:  movb   $0x1,-0x51(%ebp)
0846491f +0x00e1:  jmp    08464a18 <+0x1da>
08464924 +0x00e6:  cmpl   $0x0,0xc(%ebp)
08464928 +0x00ea:  je     08464941 <+0x103>
0846492a +0x00ec:  mov    0xc(%ebp),%eax
0846492d +0x00ef:  mov    %eax,(%esp)
08464930 +0x00f2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08464935 +0x00f7:  cmp    $0x18,%eax
08464938 +0x00fa:  jle    08464941 <+0x103>
0846493a +0x00fc:  mov    $0x1,%eax
0846493f +0x0101:  jmp    08464946 <+0x108>
08464941 +0x0103:  mov    $0x0,%eax
08464946 +0x0108:  test   %al,%al
08464948 +0x010a:  je     08464a18 <+0x1da>
0846494e +0x0110:  mov    0xc(%ebp),%eax
08464951 +0x0113:  mov    %eax,(%esp)
08464954 +0x0116:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08464959 +0x011b:  lea    -0xdc(%ebp),%edx
0846495f +0x0121:  movl   $0x270f,0x8(%esp)
08464967 +0x0129:  mov    %eax,0x4(%esp)
0846496b +0x012d:  mov    %edx,(%esp)
0846496e +0x0130:  call   086ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>  ; WongWork::CUserPremium::GetPremiumInfoList(int) const
08464973 +0x0135:  sub    $0x4,%esp
08464976 +0x0138:  movl   $0x0,-0x50(%ebp)
0846497d +0x013f:  jmp    084649ee <+0x1b0>
0846497f +0x0141:  mov    -0x50(%ebp),%eax
08464982 +0x0144:  mov    %eax,0x4(%esp)
08464986 +0x0148:  lea    -0xdc(%ebp),%eax
0846498c +0x014e:  mov    %eax,(%esp)
0846498f +0x0151:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
08464994 +0x0156:  mov    (%eax),%eax
08464996 +0x0158:  cmp    $0x16,%eax
08464999 +0x015b:  jle    084649db <+0x19d>
0846499b +0x015d:  mov    -0x50(%ebp),%eax
0846499e +0x0160:  mov    %eax,0x4(%esp)
084649a2 +0x0164:  lea    -0xdc(%ebp),%eax
084649a8 +0x016a:  mov    %eax,(%esp)
084649ab +0x016d:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
084649b0 +0x0172:  mov    (%eax),%eax
084649b2 +0x0174:  cmp    $0x1b,%eax
084649b5 +0x0177:  jg     084649db <+0x19d>
084649b7 +0x0179:  mov    -0x50(%ebp),%eax
084649ba +0x017c:  mov    %eax,0x4(%esp)
084649be +0x0180:  lea    -0xdc(%ebp),%eax
084649c4 +0x0186:  mov    %eax,(%esp)
084649c7 +0x0189:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
084649cc +0x018e:  mov    0x10(%eax),%eax
084649cf +0x0191:  cmp    $0x1,%eax
084649d2 +0x0194:  jne    084649db <+0x19d>
084649d4 +0x0196:  mov    $0x1,%eax
084649d9 +0x019b:  jmp    084649e0 <+0x1a2>
084649db +0x019d:  mov    $0x0,%eax
084649e0 +0x01a2:  test   %al,%al
084649e2 +0x01a4:  je     084649ea <+0x1ac>
084649e4 +0x01a6:  movb   $0x1,-0x51(%ebp)
084649e8 +0x01aa:  jmp    08464a0a <+0x1cc>
084649ea +0x01ac:  addl   $0x1,-0x50(%ebp)
084649ee +0x01b0:  lea    -0xdc(%ebp),%eax
084649f4 +0x01b6:  mov    %eax,(%esp)
084649f7 +0x01b9:  call   08329b1c <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1a75>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1a75
084649fc +0x01be:  cmp    -0x50(%ebp),%eax
084649ff +0x01c1:  seta   %al
08464a02 +0x01c4:  test   %al,%al
08464a04 +0x01c6:  jne    0846497f <+0x141>
08464a0a +0x01cc:  lea    -0xdc(%ebp),%eax
08464a10 +0x01d2:  mov    %eax,(%esp)
08464a13 +0x01d5:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
08464a18 +0x01da:  cmpb   $0x0,-0x51(%ebp)
08464a1c +0x01de:  je     08464a68 <+0x22a>
08464a1e +0x01e0:  mov    0x8(%ebp),%eax
08464a21 +0x01e3:  add    $0xb58,%eax
08464a26 +0x01e8:  mov    %eax,(%esp)
08464a29 +0x01eb:  call   08469c86 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x369>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x369
08464a2e +0x01f0:  mov    0xc(%ebp),%eax
08464a31 +0x01f3:  mov    %eax,(%esp)
08464a34 +0x01f6:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08464a39 +0x01fb:  movl   $0x0,0x14(%esp)
08464a41 +0x0203:  movl   $0x0,0x10(%esp)
08464a49 +0x020b:  movl   $0x1,0xc(%esp)
08464a51 +0x0213:  movl   $0xd6,0x8(%esp)
08464a59 +0x021b:  mov    0xc(%ebp),%edx
08464a5c +0x021e:  mov    %edx,0x4(%esp)
08464a60 +0x0222:  mov    %eax,(%esp)
08464a63 +0x0225:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08464a68 +0x022a:  lea    -0x530(%ebp),%eax
08464a6e +0x0230:  mov    %eax,(%esp)
08464a71 +0x0233:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08464a76 +0x0238:  movzwl -0x53c(%ebp),%eax
08464a7d +0x023f:  mov    0x8(%ebp),%edx
08464a80 +0x0242:  lea    0x14(%edx),%ecx
08464a83 +0x0245:  lea    -0x530(%ebp),%edx
08464a89 +0x024b:  mov    %edx,0x8(%esp)
08464a8d +0x024f:  mov    %eax,0x4(%esp)
08464a91 +0x0253:  mov    %ecx,(%esp)
08464a94 +0x0256:  call   08461708 <_ZN8WongWork11CDeathTower6CStage11killMonsterEiR11map_monster>  ; WongWork::CDeathTower::CStage::killMonster(int, map_monster&)
08464a99 +0x025b:  mov    %eax,-0x64(%ebp)
08464a9c +0x025e:  cmpl   $0x0,-0x64(%ebp)
08464aa0 +0x0262:  jne    08464aac <+0x26e>
08464aa2 +0x0264:  mov    $0x0,%ebx
08464aa7 +0x0269:  jmp    0846593e <+0x1100>
08464aac +0x026e:  mov    0x8(%ebp),%eax
08464aaf +0x0271:  mov    (%eax),%eax
08464ab1 +0x0273:  mov    %eax,(%esp)
08464ab4 +0x0276:  call   08151a70 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13a5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13a5
08464ab9 +0x027b:  mov    %eax,-0x60(%ebp)
08464abc +0x027e:  movl   $0x0,-0x5c(%ebp)
08464ac3 +0x0285:  lea    -0x88(%ebp),%eax
08464ac9 +0x028b:  mov    %eax,(%esp)
08464acc +0x028e:  call   080f53c2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x373>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x373
08464ad1 +0x0293:  lea    -0x90(%ebp),%eax
08464ad7 +0x0299:  mov    %eax,(%esp)
08464ada +0x029c:  call   08152a2c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2361>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2361
08464adf +0x02a1:  lea    -0x150(%ebp),%eax
08464ae5 +0x02a7:  mov    %eax,(%esp)
08464ae8 +0x02aa:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
08464aed +0x02af:  cmpl   $0x0,0x1c(%ebp)
08464af1 +0x02b3:  je     08464afe <+0x2c0>
08464af3 +0x02b5:  mov    -0x524(%ebp),%edx
08464af9 +0x02bb:  mov    0x1c(%ebp),%eax
08464afc +0x02be:  mov    %edx,(%eax)
08464afe +0x02c0:  movzbl -0x528(%ebp),%eax
08464b05 +0x02c7:  cmp    $0x4,%al
08464b07 +0x02c9:  jle    08464b97 <+0x359>
08464b0d +0x02cf:  mov    -0x524(%ebp),%eax
08464b13 +0x02d5:  mov    %eax,%ebx
08464b15 +0x02d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464b1a +0x02dc:  mov    0x869c(%eax),%eax
08464b20 +0x02e2:  mov    %ebx,0x4(%esp)
08464b24 +0x02e6:  mov    %eax,(%esp)
08464b27 +0x02e9:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
08464b2c +0x02ee:  mov    %eax,-0x4c(%ebp)
08464b2f +0x02f1:  cmpl   $0x0,-0x4c(%ebp)
08464b33 +0x02f5:  je     08464c1f <+0x3e1>
08464b39 +0x02fb:  mov    0x8(%ebp),%eax
08464b3c +0x02fe:  add    $0xc,%eax
08464b3f +0x0301:  mov    %eax,(%esp)
08464b42 +0x0304:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08464b47 +0x0309:  mov    %eax,(%esp)
08464b4a +0x030c:  call   0815092e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x263>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x263
08464b4f +0x0311:  test   %al,%al
08464b51 +0x0313:  je     08464b68 <+0x32a>
08464b53 +0x0315:  lea    -0x88(%ebp),%eax
08464b59 +0x031b:  mov    %eax,0x4(%esp)
08464b5d +0x031f:  mov    -0x4c(%ebp),%eax
08464b60 +0x0322:  mov    %eax,(%esp)
08464b63 +0x0325:  call   0834a19c <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE>  ; CAICharacter::deathTowerSpecifyItemDrop(std::vector<unsigned long, std::allocator<unsigned long> >&) const
08464b68 +0x032a:  mov    -0x504(%ebp),%eax
08464b6e +0x0330:  cmp    $0x64,%eax
08464b71 +0x0333:  je     08464b84 <+0x346>
08464b73 +0x0335:  mov    -0x504(%ebp),%eax
08464b79 +0x033b:  cmp    $0xc8,%eax
08464b7e +0x0340:  jne    08464c1f <+0x3e1>
08464b84 +0x0346:  mov    -0x4c(%ebp),%eax
08464b87 +0x0349:  mov    %eax,(%esp)
08464b8a +0x034c:  call   0834a240 <_ZNK12CAICharacter14getPvPWinPointEv>  ; CAICharacter::getPvPWinPoint() const
08464b8f +0x0351:  mov    %eax,-0x5c(%ebp)
08464b92 +0x0354:  jmp    08464c1f <+0x3e1>
08464b97 +0x0359:  movl   $0xfffffffe,-0xe0(%ebp)
08464ba1 +0x0363:  mov    -0x524(%ebp),%ebx
08464ba7 +0x0369:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464bac +0x036e:  mov    %ebx,0x4(%esp)
08464bb0 +0x0372:  mov    %eax,(%esp)
08464bb3 +0x0375:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
08464bb8 +0x037a:  mov    %eax,-0x48(%ebp)
08464bbb +0x037d:  cmpl   $0x0,-0x48(%ebp)
08464bbf +0x0381:  je     08464be2 <+0x3a4>
08464bc1 +0x0383:  mov    0x8(%ebp),%eax
08464bc4 +0x0386:  add    $0xc,%eax
08464bc7 +0x0389:  mov    %eax,(%esp)
08464bca +0x038c:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08464bcf +0x0391:  mov    %eax,(%esp)
08464bd2 +0x0394:  call   0815092e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x263>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x263
08464bd7 +0x0399:  test   %al,%al
08464bd9 +0x039b:  je     08464be2 <+0x3a4>
08464bdb +0x039d:  mov    $0x1,%eax
08464be0 +0x03a2:  jmp    08464be7 <+0x3a9>
08464be2 +0x03a4:  mov    $0x0,%eax
08464be7 +0x03a9:  test   %al,%al
08464be9 +0x03ab:  je     08464bfc <+0x3be>
08464beb +0x03ad:  mov    -0x48(%ebp),%eax
08464bee +0x03b0:  mov    %eax,(%esp)
08464bf1 +0x03b3:  call   0834f84a <_ZNK8CMonster25deathTowerSpecifyItemDropEv>  ; CMonster::deathTowerSpecifyItemDrop() const
08464bf6 +0x03b8:  mov    %eax,-0xe0(%ebp)
08464bfc +0x03be:  mov    -0xe0(%ebp),%eax
08464c02 +0x03c4:  cmp    $0xfffffffe,%eax
08464c05 +0x03c7:  je     08464c1f <+0x3e1>
08464c07 +0x03c9:  lea    -0xe0(%ebp),%eax
08464c0d +0x03cf:  mov    %eax,0x4(%esp)
08464c11 +0x03d3:  lea    -0x88(%ebp),%eax
08464c17 +0x03d9:  mov    %eax,(%esp)
08464c1a +0x03dc:  call   08469e54 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x537>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x537
08464c1f +0x03e1:  lea    -0x88(%ebp),%eax
08464c25 +0x03e7:  mov    %eax,(%esp)
08464c28 +0x03ea:  call   08193732 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x39a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x39a
08464c2d +0x03ef:  xor    $0x1,%eax
08464c30 +0x03f2:  test   %al,%al
08464c32 +0x03f4:  je     08464d88 <+0x54a>
08464c38 +0x03fa:  lea    -0x7c(%ebp),%eax
08464c3b +0x03fd:  lea    -0x88(%ebp),%edx
08464c41 +0x0403:  mov    %edx,0x4(%esp)
08464c45 +0x0407:  mov    %eax,(%esp)
08464c48 +0x040a:  call   0819d1b6 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x47>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x47
08464c4d +0x040f:  sub    $0x4,%esp
08464c50 +0x0412:  lea    -0x7c(%ebp),%eax
08464c53 +0x0415:  mov    %eax,0x4(%esp)
08464c57 +0x0419:  lea    -0xe4(%ebp),%eax
08464c5d +0x041f:  mov    %eax,(%esp)
08464c60 +0x0422:  call   08469ec8 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x5ab>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x5ab
08464c65 +0x0427:  lea    -0x78(%ebp),%eax
08464c68 +0x042a:  lea    -0x88(%ebp),%edx
08464c6e +0x0430:  mov    %edx,0x4(%esp)
08464c72 +0x0434:  mov    %eax,(%esp)
08464c75 +0x0437:  call   0819d1da <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6b>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6b
08464c7a +0x043c:  sub    $0x4,%esp
08464c7d +0x043f:  lea    -0x78(%ebp),%eax
08464c80 +0x0442:  mov    %eax,0x4(%esp)
08464c84 +0x0446:  lea    -0xe8(%ebp),%eax
08464c8a +0x044c:  mov    %eax,(%esp)
08464c8d +0x044f:  call   08469ec8 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x5ab>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x5ab
08464c92 +0x0454:  jmp    08464d68 <+0x52a>
08464c97 +0x0459:  lea    -0xe4(%ebp),%eax
08464c9d +0x045f:  mov    %eax,(%esp)
08464ca0 +0x0462:  call   08469f24 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x607>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x607
08464ca5 +0x0467:  mov    (%eax),%eax
08464ca7 +0x0469:  mov    %eax,%ebx
08464ca9 +0x046b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464cae +0x0470:  mov    0xc(%eax),%eax
08464cb1 +0x0473:  mov    %ebx,0x4(%esp)
08464cb5 +0x0477:  mov    %eax,(%esp)
08464cb8 +0x047a:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08464cbd +0x047f:  mov    %eax,-0x44(%ebp)
08464cc0 +0x0482:  cmpl   $0x0,-0x44(%ebp)
08464cc4 +0x0486:  je     08464d5a <+0x51c>
08464cca +0x048c:  lea    -0x18d(%ebp),%eax
08464cd0 +0x0492:  mov    %eax,(%esp)
08464cd3 +0x0495:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08464cd8 +0x049a:  lea    -0xe4(%ebp),%eax
08464cde +0x04a0:  mov    %eax,(%esp)
08464ce1 +0x04a3:  call   08469f24 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x607>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x607
08464ce6 +0x04a8:  mov    (%eax),%eax
08464ce8 +0x04aa:  mov    %eax,-0x18b(%ebp)
08464cee +0x04b0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464cf3 +0x04b5:  mov    0xc(%eax),%eax
08464cf6 +0x04b8:  movl   $0x1,0xc(%esp)
08464cfe +0x04c0:  lea    -0x18d(%ebp),%edx
08464d04 +0x04c6:  mov    %edx,0x8(%esp)
08464d08 +0x04ca:  movl   $0x1,0x4(%esp)
08464d10 +0x04d2:  mov    %eax,(%esp)
08464d13 +0x04d5:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08464d18 +0x04da:  mov    0x8(%ebp),%eax
08464d1b +0x04dd:  mov    (%eax),%eax
08464d1d +0x04df:  mov    %eax,(%esp)
08464d20 +0x04e2:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08464d25 +0x04e7:  mov    %eax,-0x40(%ebp)
08464d28 +0x04ea:  movl   $0x0,-0x3c(%ebp)
08464d2f +0x04f1:  jmp    08464d4d <+0x50f>
08464d31 +0x04f3:  lea    -0x18d(%ebp),%eax
08464d37 +0x04f9:  mov    %eax,0x4(%esp)
08464d3b +0x04fd:  lea    -0x150(%ebp),%eax
08464d41 +0x0503:  mov    %eax,(%esp)
08464d44 +0x0506:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08464d49 +0x050b:  addl   $0x1,-0x3c(%ebp)
08464d4d +0x050f:  mov    -0x3c(%ebp),%eax
08464d50 +0x0512:  cmp    -0x40(%ebp),%eax
08464d53 +0x0515:  setb   %al
08464d56 +0x0518:  test   %al,%al
08464d58 +0x051a:  jne    08464d31 <+0x4f3>
08464d5a +0x051c:  lea    -0xe4(%ebp),%eax
08464d60 +0x0522:  mov    %eax,(%esp)
08464d63 +0x0525:  call   08469f0e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x5f1>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x5f1
08464d68 +0x052a:  lea    -0xe8(%ebp),%eax
08464d6e +0x0530:  mov    %eax,0x4(%esp)
08464d72 +0x0534:  lea    -0xe4(%ebp),%eax
08464d78 +0x053a:  mov    %eax,(%esp)
08464d7b +0x053d:  call   08469ee2 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x5c5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x5c5
08464d80 +0x0542:  test   %al,%al
08464d82 +0x0544:  jne    08464c97 <+0x459>
08464d88 +0x054a:  movl   $0x0,-0x38(%ebp)
08464d8f +0x0551:  jmp    08465294 <+0xa56>
08464d94 +0x0556:  movl   $0x0,-0x34(%ebp)
08464d9b +0x055d:  mov    0x8(%ebp),%eax
08464d9e +0x0560:  mov    (%eax),%eax
08464da0 +0x0562:  mov    -0x38(%ebp),%edx
08464da3 +0x0565:  mov    %edx,0x4(%esp)
08464da7 +0x0569:  mov    %eax,(%esp)
08464daa +0x056c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08464daf +0x0571:  mov    %eax,-0x34(%ebp)
08464db2 +0x0574:  cmpl   $0x0,-0x34(%ebp)
08464db6 +0x0578:  je     08464dd3 <+0x595>
08464db8 +0x057a:  mov    0x8(%ebp),%eax
08464dbb +0x057d:  mov    (%eax),%eax
08464dbd +0x057f:  mov    -0x38(%ebp),%edx
08464dc0 +0x0582:  mov    %edx,0x4(%esp)
08464dc4 +0x0586:  mov    %eax,(%esp)
08464dc7 +0x0589:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08464dcc +0x058e:  xor    $0x1,%eax
08464dcf +0x0591:  test   %al,%al
08464dd1 +0x0593:  je     08464dda <+0x59c>
08464dd3 +0x0595:  mov    $0x1,%eax
08464dd8 +0x059a:  jmp    08464ddf <+0x5a1>
08464dda +0x059c:  mov    $0x0,%eax
08464ddf +0x05a1:  test   %al,%al
08464de1 +0x05a3:  jne    0846528c <+0xa4e>
08464de7 +0x05a9:  mov    0x8(%ebp),%eax
08464dea +0x05ac:  mov    (%eax),%eax
08464dec +0x05ae:  mov    0xcd8(%eax),%eax
08464df2 +0x05b4:  cmp    $0x1,%eax
08464df5 +0x05b7:  je     0846528f <+0xa51>
08464dfb +0x05bd:  movl   $0x0,-0xec(%ebp)
08464e05 +0x05c7:  mov    -0x34(%ebp),%eax
08464e08 +0x05ca:  mov    %eax,(%esp)
08464e0b +0x05cd:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08464e10 +0x05d2:  mov    %eax,%ebx
08464e12 +0x05d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464e17 +0x05d9:  lea    -0xec(%ebp),%edx
08464e1d +0x05df:  mov    %edx,0x8(%esp)
08464e21 +0x05e3:  mov    %ebx,0x4(%esp)
08464e25 +0x05e7:  mov    %eax,(%esp)
08464e28 +0x05ea:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
08464e2d +0x05ef:  mov    -0xec(%ebp),%edx
08464e33 +0x05f5:  mov    0x8(%ebp),%eax
08464e36 +0x05f8:  mov    (%eax),%eax
08464e38 +0x05fa:  movl   $0x0,0x18(%esp)
08464e40 +0x0602:  mov    $0x3f800000,%ecx
08464e45 +0x0607:  mov    %ecx,0x14(%esp)
08464e49 +0x060b:  mov    $0x3f800000,%ecx
08464e4e +0x0610:  mov    %ecx,0x10(%esp)
08464e52 +0x0614:  movl   $0x0,0xc(%esp)
08464e5a +0x061c:  movl   $0x0,0x8(%esp)
08464e62 +0x0624:  mov    %edx,0x4(%esp)
08464e66 +0x0628:  mov    %eax,(%esp)
08464e69 +0x062b:  call   085a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>  ; CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)
08464e6e +0x0630:  mov    %eax,-0xec(%ebp)
08464e74 +0x0636:  mov    0x8(%ebp),%eax
08464e77 +0x0639:  mov    (%eax),%eax
08464e79 +0x063b:  mov    %eax,0x4(%esp)
08464e7d +0x063f:  lea    -0xf4(%ebp),%eax
08464e83 +0x0645:  mov    %eax,(%esp)
08464e86 +0x0648:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
08464e8b +0x064d:  lea    -0x110(%ebp),%eax
08464e91 +0x0653:  mov    %eax,(%esp)
08464e94 +0x0656:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
08464e99 +0x065b:  mov    -0xec(%ebp),%eax
08464e9f +0x0661:  mov    %eax,-0x110(%ebp)
08464ea5 +0x0667:  mov    0x8(%ebp),%eax
08464ea8 +0x066a:  mov    (%eax),%ecx
08464eaa +0x066c:  lea    -0x110(%ebp),%eax
08464eb0 +0x0672:  mov    %eax,0x10(%esp)
08464eb4 +0x0676:  mov    -0xf4(%ebp),%eax
08464eba +0x067c:  mov    -0xf0(%ebp),%edx
08464ec0 +0x0682:  mov    %eax,0x8(%esp)
08464ec4 +0x0686:  mov    %edx,0xc(%esp)
08464ec8 +0x068a:  movl   $0x0,0x4(%esp)
08464ed0 +0x0692:  mov    %ecx,(%esp)
08464ed3 +0x0695:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
08464ed8 +0x069a:  mov    -0x110(%ebp),%eax
08464ede +0x06a0:  mov    %eax,-0xec(%ebp)
08464ee4 +0x06a6:  movzbl -0x528(%ebp),%eax
08464eeb +0x06ad:  cmp    $0x5,%al
08464eed +0x06af:  jne    08464f57 <+0x719>
08464eef +0x06b1:  mov    -0xec(%ebp),%eax
08464ef5 +0x06b7:  mov    $0x0,%edx
08464efa +0x06bc:  mov    %eax,-0x550(%ebp)
08464f00 +0x06c2:  mov    %edx,-0x54c(%ebp)
08464f06 +0x06c8:  fildll -0x550(%ebp)
08464f0c +0x06ce:  fstps  -0x56c(%ebp)
08464f12 +0x06d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464f17 +0x06d9:  flds   0x5198(%eax)
08464f1d +0x06df:  fmuls  -0x56c(%ebp)
08464f23 +0x06e5:  fnstcw -0x542(%ebp)
08464f29 +0x06eb:  movzwl -0x542(%ebp),%eax
08464f30 +0x06f2:  mov    $0xc,%ah
08464f32 +0x06f4:  mov    %ax,-0x544(%ebp)
08464f39 +0x06fb:  fldcw  -0x544(%ebp)
08464f3f +0x0701:  fistpl -0x548(%ebp)
08464f45 +0x0707:  fldcw  -0x542(%ebp)
08464f4b +0x070d:  mov    -0x548(%ebp),%eax
08464f51 +0x0713:  mov    %eax,-0xec(%ebp)
08464f57 +0x0719:  mov    -0xec(%ebp),%eax
08464f5d +0x071f:  mov    $0x0,%edx
08464f62 +0x0724:  mov    %eax,-0x550(%ebp)
08464f68 +0x072a:  mov    %edx,-0x54c(%ebp)
08464f6e +0x0730:  fildll -0x550(%ebp)
08464f74 +0x0736:  fstps  -0x568(%ebp)
08464f7a +0x073c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464f7f +0x0741:  flds   0x5e1c(%eax)
08464f85 +0x0747:  fmuls  -0x568(%ebp)
08464f8b +0x074d:  fnstcw -0x542(%ebp)
08464f91 +0x0753:  movzwl -0x542(%ebp),%eax
08464f98 +0x075a:  mov    $0xc,%ah
08464f9a +0x075c:  mov    %ax,-0x544(%ebp)
08464fa1 +0x0763:  fldcw  -0x544(%ebp)
08464fa7 +0x0769:  fistpl -0x548(%ebp)
08464fad +0x076f:  fldcw  -0x542(%ebp)
08464fb3 +0x0775:  mov    -0x548(%ebp),%eax
08464fb9 +0x077b:  mov    %eax,-0xec(%ebp)
08464fbf +0x0781:  lea    -0x118(%ebp),%eax
08464fc5 +0x0787:  mov    %eax,(%esp)
08464fc8 +0x078a:  call   08151a56 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x138b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x138b
08464fcd +0x078f:  mov    -0xec(%ebp),%eax
08464fd3 +0x0795:  mov    %eax,-0x118(%ebp)
08464fd9 +0x079b:  mov    0x8(%ebp),%eax
08464fdc +0x079e:  mov    (%eax),%eax
08464fde +0x07a0:  lea    -0x118(%ebp),%edx
08464fe4 +0x07a6:  mov    %edx,0x8(%esp)
08464fe8 +0x07aa:  mov    -0x34(%ebp),%edx
08464feb +0x07ad:  mov    %edx,0x4(%esp)
08464fef +0x07b1:  mov    %eax,(%esp)
08464ff2 +0x07b4:  call   085a2488 <_ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData>  ; CParty::sumGainedEachExp(CUser*, STGainedEachExpData const&)
08464ff7 +0x07b9:  mov    %eax,-0xec(%ebp)
08464ffd +0x07bf:  cmpl   $0x0,-0x5c(%ebp)
08465001 +0x07c3:  je     0846509e <+0x860>
08465007 +0x07c9:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0846500c +0x07ce:  movl   $0x27,0x4(%esp)
08465014 +0x07d6:  mov    %eax,(%esp)
08465017 +0x07d9:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0846501c +0x07de:  mov    %eax,(%esp)
0846501f +0x07e1:  call   08469dcc <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x4af>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x4af
08465024 +0x07e6:  fstps  -0x28(%ebp)
08465027 +0x07e9:  flds   -0x28(%ebp)
0846502a +0x07ec:  fldz
0846502c +0x07ee:  fxch   %st(1)
0846502e +0x07f0:  fucompp
08465030 +0x07f2:  fnstsw %ax
08465032 +0x07f4:  sahf
08465033 +0x07f5:  jp     08465037 <+0x7f9>
08465035 +0x07f7:  je     08465084 <+0x846>
08465037 +0x07f9:  fildl  -0x5c(%ebp)
0846503a +0x07fc:  fmuls  -0x28(%ebp)
0846503d +0x07ff:  fnstcw -0x542(%ebp)
08465043 +0x0805:  movzwl -0x542(%ebp),%eax
0846504a +0x080c:  mov    $0xc,%ah
0846504c +0x080e:  mov    %ax,-0x544(%ebp)
08465053 +0x0815:  fldcw  -0x544(%ebp)
08465059 +0x081b:  fistpl -0x548(%ebp)
0846505f +0x0821:  fldcw  -0x542(%ebp)
08465065 +0x0827:  mov    -0x548(%ebp),%eax
0846506b +0x082d:  movl   $0x2,0x8(%esp)
08465073 +0x0835:  mov    %eax,0x4(%esp)
08465077 +0x0839:  mov    -0x34(%ebp),%eax
0846507a +0x083c:  mov    %eax,(%esp)
0846507d +0x083f:  call   0864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>  ; CUser::gainWinPoint(int, eWPAddReason)
08465082 +0x0844:  jmp    0846509e <+0x860>
08465084 +0x0846:  movl   $0x2,0x8(%esp)
0846508c +0x084e:  mov    -0x5c(%ebp),%eax
0846508f +0x0851:  mov    %eax,0x4(%esp)
08465093 +0x0855:  mov    -0x34(%ebp),%eax
08465096 +0x0858:  mov    %eax,(%esp)
08465099 +0x085b:  call   0864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>  ; CUser::gainWinPoint(int, eWPAddReason)
0846509e +0x0860:  mov    -0xec(%ebp),%edx
084650a4 +0x0866:  mov    -0x34(%ebp),%eax
084650a7 +0x0869:  movl   $0x0,0x8(%esp)
084650af +0x0871:  mov    %edx,0x4(%esp)
084650b3 +0x0875:  mov    %eax,(%esp)
084650b6 +0x0878:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
084650bb +0x087d:  movl   $0x0,-0x11c(%ebp)
084650c5 +0x0887:  movl   $0xb,-0x30(%ebp)
084650cc +0x088e:  movzbl -0x528(%ebp),%eax
084650d3 +0x0895:  cmp    $0x5,%al
084650d5 +0x0897:  jne    084650de <+0x8a0>
084650d7 +0x0899:  movl   $0xc,-0x30(%ebp)
084650de +0x08a0:  movl   $0x0,-0x120(%ebp)
084650e8 +0x08aa:  mov    -0x524(%ebp),%edx
084650ee +0x08b0:  mov    -0xec(%ebp),%eax
084650f4 +0x08b6:  movl   $0x0,0x18(%esp)
084650fc +0x08be:  mov    %edx,0x14(%esp)
08465100 +0x08c2:  mov    -0x30(%ebp),%edx
08465103 +0x08c5:  mov    %edx,0x10(%esp)
08465107 +0x08c9:  lea    -0x120(%ebp),%edx
0846510d +0x08cf:  mov    %edx,0xc(%esp)
08465111 +0x08d3:  lea    -0x11c(%ebp),%edx
08465117 +0x08d9:  mov    %edx,0x8(%esp)
0846511b +0x08dd:  mov    %eax,0x4(%esp)
0846511f +0x08e1:  mov    -0x34(%ebp),%eax
08465122 +0x08e4:  mov    %eax,(%esp)
08465125 +0x08e7:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
0846512a +0x08ec:  test   %al,%al
0846512c +0x08ee:  je     08465151 <+0x913>
0846512e +0x08f0:  movl   $0x1,0xc(%esp)
08465136 +0x08f8:  movl   $0x2,0x8(%esp)
0846513e +0x0900:  movl   $0x2,0x4(%esp)
08465146 +0x0908:  mov    -0x34(%ebp),%eax
08465149 +0x090b:  mov    %eax,(%esp)
0846514c +0x090e:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08465151 +0x0913:  mov    -0xec(%ebp),%eax
08465157 +0x0919:  mov    %eax,%esi
08465159 +0x091b:  mov    -0x34(%ebp),%eax
0846515c +0x091e:  mov    %eax,(%esp)
0846515f +0x0921:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08465164 +0x0926:  mov    %eax,%ecx
08465166 +0x0928:  movzbl -0x528(%ebp),%eax
0846516d +0x092f:  cmp    $0x5,%al
0846516f +0x0931:  sete   %al
08465172 +0x0934:  movzbl %al,%eax
08465175 +0x0937:  mov    %eax,-0x564(%ebp)
0846517b +0x093d:  movzbl -0x528(%ebp),%eax
08465182 +0x0944:  movsbl %al,%eax
08465185 +0x0947:  mov    %eax,-0x560(%ebp)
0846518b +0x094d:  mov    0x18(%ebp),%eax
0846518e +0x0950:  movzwl 0xa26(%eax),%eax
08465195 +0x0957:  movzwl %ax,%eax
08465198 +0x095a:  mov    %eax,-0x55c(%ebp)
0846519e +0x0960:  mov    0x18(%ebp),%eax
084651a1 +0x0963:  movzwl 0xa24(%eax),%eax
084651a8 +0x096a:  movzwl %ax,%eax
084651ab +0x096d:  mov    %eax,-0x558(%ebp)
084651b1 +0x0973:  mov    0x18(%ebp),%eax
084651b4 +0x0976:  mov    0xa1a(%eax),%eax
084651ba +0x097c:  mov    %eax,-0x554(%ebp)
084651c0 +0x0982:  mov    0x18(%ebp),%eax
084651c3 +0x0985:  mov    0xa1e(%eax),%edi
084651c9 +0x098b:  mov    -0x524(%ebp),%ebx
084651cf +0x0991:  mov    -0x34(%ebp),%eax
084651d2 +0x0994:  lea    0x79700(%eax),%edx
084651d8 +0x099a:  mov    -0x30(%ebp),%eax
084651db +0x099d:  mov    %eax,0x2c(%esp)
084651df +0x09a1:  mov    %esi,0x28(%esp)
084651e3 +0x09a5:  mov    %ecx,0x24(%esp)
084651e7 +0x09a9:  mov    -0x564(%ebp),%eax
084651ed +0x09af:  mov    %eax,0x20(%esp)
084651f1 +0x09b3:  mov    -0x560(%ebp),%eax
084651f7 +0x09b9:  mov    %eax,0x1c(%esp)
084651fb +0x09bd:  mov    0x18(%ebp),%eax
084651fe +0x09c0:  mov    %eax,0x18(%esp)
08465202 +0x09c4:  mov    -0x55c(%ebp),%eax
08465208 +0x09ca:  mov    %eax,0x14(%esp)
0846520c +0x09ce:  mov    -0x558(%ebp),%eax
08465212 +0x09d4:  mov    %eax,0x10(%esp)
08465216 +0x09d8:  mov    -0x554(%ebp),%eax
0846521c +0x09de:  mov    %eax,0xc(%esp)
08465220 +0x09e2:  mov    %edi,0x8(%esp)
08465224 +0x09e6:  mov    %ebx,0x4(%esp)
08465228 +0x09ea:  mov    %edx,(%esp)
0846522b +0x09ed:  call   086851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>  ; cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short, MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason)
08465230 +0x09f2:  movl   $0x1,-0x2c(%ebp)
08465237 +0x09f9:  movzbl -0x528(%ebp),%eax
0846523e +0x0a00:  cmp    $0x4,%al
08465240 +0x0a02:  jle    08465254 <+0xa16>
08465242 +0x0a04:  movzbl -0x528(%ebp),%eax
08465249 +0x0a0b:  cmp    $0x8,%al
0846524b +0x0a0d:  jg     08465254 <+0xa16>
0846524d +0x0a0f:  movl   $0x2,-0x2c(%ebp)
08465254 +0x0a16:  mov    -0x524(%ebp),%ebx
0846525a +0x0a1c:  mov    0x8(%ebp),%eax
0846525d +0x0a1f:  add    $0xc,%eax
08465260 +0x0a22:  mov    %eax,(%esp)
08465263 +0x0a25:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08465268 +0x0a2a:  mov    %eax,(%esp)
0846526b +0x0a2d:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08465270 +0x0a32:  mov    -0x2c(%ebp),%edx
08465273 +0x0a35:  mov    %edx,0xc(%esp)
08465277 +0x0a39:  mov    %ebx,0x8(%esp)
0846527b +0x0a3d:  mov    %eax,0x4(%esp)
0846527f +0x0a41:  mov    -0x34(%ebp),%eax
08465282 +0x0a44:  mov    %eax,(%esp)
08465285 +0x0a47:  call   0866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>  ; CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)
0846528a +0x0a4c:  jmp    08465290 <+0xa52>
0846528c +0x0a4e:  nop
0846528d +0x0a4f:  jmp    08465290 <+0xa52>
0846528f +0x0a51:  nop
08465290 +0x0a52:  addl   $0x1,-0x38(%ebp)
08465294 +0x0a56:  cmpl   $0x3,-0x38(%ebp)
08465298 +0x0a5a:  setle  %al
0846529b +0x0a5d:  test   %al,%al
0846529d +0x0a5f:  jne    08464d94 <+0x556>
084652a3 +0x0a65:  lea    -0x74(%ebp),%eax
084652a6 +0x0a68:  lea    -0x150(%ebp),%edx
084652ac +0x0a6e:  mov    %edx,0x4(%esp)
084652b0 +0x0a72:  mov    %eax,(%esp)
084652b3 +0x0a75:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
084652b8 +0x0a7a:  sub    $0x4,%esp
084652bb +0x0a7d:  lea    -0x74(%ebp),%eax
084652be +0x0a80:  mov    %eax,0x4(%esp)
084652c2 +0x0a84:  lea    -0x94(%ebp),%eax
084652c8 +0x0a8a:  mov    %eax,(%esp)
084652cb +0x0a8d:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
084652d0 +0x0a92:  lea    -0x70(%ebp),%eax
084652d3 +0x0a95:  lea    -0x150(%ebp),%edx
084652d9 +0x0a9b:  mov    %edx,0x4(%esp)
084652dd +0x0a9f:  mov    %eax,(%esp)
084652e0 +0x0aa2:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
084652e5 +0x0aa7:  sub    $0x4,%esp
084652e8 +0x0aaa:  lea    -0x70(%ebp),%eax
084652eb +0x0aad:  mov    %eax,0x4(%esp)
084652ef +0x0ab1:  lea    -0x98(%ebp),%eax
084652f5 +0x0ab7:  mov    %eax,(%esp)
084652f8 +0x0aba:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
084652fd +0x0abf:  jmp    08465413 <+0xbd5>
08465302 +0x0ac4:  lea    -0x1e4(%ebp),%eax
08465308 +0x0aca:  mov    %eax,(%esp)
0846530b +0x0acd:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
08465310 +0x0ad2:  movb   $0x1,-0x1e4(%ebp)
08465317 +0x0ad9:  movzwl -0x540(%ebp),%eax
0846531e +0x0ae0:  mov    %ax,-0x1dc(%ebp)
08465325 +0x0ae7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0846532c +0x0aee:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08465331 +0x0af3:  mov    %eax,-0x1d8(%ebp)
08465337 +0x0af9:  lea    -0x94(%ebp),%eax
0846533d +0x0aff:  mov    %eax,(%esp)
08465340 +0x0b02:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
08465345 +0x0b07:  mov    (%eax),%edx
08465347 +0x0b09:  mov    %edx,-0x1d4(%ebp)
0846534d +0x0b0f:  mov    0x4(%eax),%edx
08465350 +0x0b12:  mov    %edx,-0x1d0(%ebp)
08465356 +0x0b18:  mov    0x8(%eax),%edx
08465359 +0x0b1b:  mov    %edx,-0x1cc(%ebp)
0846535f +0x0b21:  mov    0xc(%eax),%edx
08465362 +0x0b24:  mov    %edx,-0x1c8(%ebp)
08465368 +0x0b2a:  mov    0x10(%eax),%edx
0846536b +0x0b2d:  mov    %edx,-0x1c4(%ebp)
08465371 +0x0b33:  mov    0x14(%eax),%edx
08465374 +0x0b36:  mov    %edx,-0x1c0(%ebp)
0846537a +0x0b3c:  mov    0x18(%eax),%edx
0846537d +0x0b3f:  mov    %edx,-0x1bc(%ebp)
08465383 +0x0b45:  mov    0x1c(%eax),%edx
08465386 +0x0b48:  mov    %edx,-0x1b8(%ebp)
0846538c +0x0b4e:  mov    0x20(%eax),%edx
0846538f +0x0b51:  mov    %edx,-0x1b4(%ebp)
08465395 +0x0b57:  mov    0x24(%eax),%edx
08465398 +0x0b5a:  mov    %edx,-0x1b0(%ebp)
0846539e +0x0b60:  mov    0x28(%eax),%edx
084653a1 +0x0b63:  mov    %edx,-0x1ac(%ebp)
084653a7 +0x0b69:  mov    0x2c(%eax),%edx
084653aa +0x0b6c:  mov    %edx,-0x1a8(%ebp)
084653b0 +0x0b72:  mov    0x30(%eax),%edx
084653b3 +0x0b75:  mov    %edx,-0x1a4(%ebp)
084653b9 +0x0b7b:  mov    0x34(%eax),%edx
084653bc +0x0b7e:  mov    %edx,-0x1a0(%ebp)
084653c2 +0x0b84:  mov    0x38(%eax),%edx
084653c5 +0x0b87:  mov    %edx,-0x19c(%ebp)
084653cb +0x0b8d:  movzbl 0x3c(%eax),%eax
084653cf +0x0b91:  mov    %al,-0x198(%ebp)
084653d5 +0x0b97:  mov    0x8(%ebp),%eax
084653d8 +0x0b9a:  lea    0x14(%eax),%edx
084653db +0x0b9d:  lea    -0x1e4(%ebp),%eax
084653e1 +0x0ba3:  mov    %eax,0x4(%esp)
084653e5 +0x0ba7:  mov    %edx,(%esp)
084653e8 +0x0baa:  call   084616a8 <_ZN8WongWork11CDeathTower6CStage8dropItemER8map_item>  ; WongWork::CDeathTower::CStage::dropItem(map_item&)
084653ed +0x0baf:  lea    -0x1e4(%ebp),%eax
084653f3 +0x0bb5:  mov    %eax,0x4(%esp)
084653f7 +0x0bb9:  lea    -0x90(%ebp),%eax
084653fd +0x0bbf:  mov    %eax,(%esp)
08465400 +0x0bc2:  call   08152b52 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2487>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2487
08465405 +0x0bc7:  lea    -0x94(%ebp),%eax
0846540b +0x0bcd:  mov    %eax,(%esp)
0846540e +0x0bd0:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
08465413 +0x0bd5:  lea    -0x98(%ebp),%eax
08465419 +0x0bdb:  mov    %eax,0x4(%esp)
0846541d +0x0bdf:  lea    -0x94(%ebp),%eax
08465423 +0x0be5:  mov    %eax,(%esp)
08465426 +0x0be8:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
0846542b +0x0bed:  test   %al,%al
0846542d +0x0bef:  jne    08465302 <+0xac4>
08465433 +0x0bf5:  lea    -0xa4(%ebp),%eax
08465439 +0x0bfb:  mov    %eax,(%esp)
0846543c +0x0bfe:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465441 +0x0c03:  movl   $0x26,0x8(%esp)
08465449 +0x0c0b:  movl   $0x0,0x4(%esp)
08465451 +0x0c13:  lea    -0xa4(%ebp),%eax
08465457 +0x0c19:  mov    %eax,(%esp)
0846545a +0x0c1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0846545f +0x0c21:  movzwl -0x53c(%ebp),%eax
08465466 +0x0c28:  mov    %eax,0x4(%esp)
0846546a +0x0c2c:  lea    -0xa4(%ebp),%eax
08465470 +0x0c32:  mov    %eax,(%esp)
08465473 +0x0c35:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08465478 +0x0c3a:  lea    -0xa4(%ebp),%eax
0846547e +0x0c40:  mov    %eax,(%esp)
08465481 +0x0c43:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08465486 +0x0c48:  mov    %eax,-0xa8(%ebp)
0846548c +0x0c4e:  movl   $0x0,-0x58(%ebp)
08465493 +0x0c55:  mov    -0x58(%ebp),%eax
08465496 +0x0c58:  mov    %eax,0x4(%esp)
0846549a +0x0c5c:  lea    -0xa4(%ebp),%eax
084654a0 +0x0c62:  mov    %eax,(%esp)
084654a3 +0x0c65:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084654a8 +0x0c6a:  lea    -0xc6(%ebp),%eax
084654ae +0x0c70:  mov    %eax,(%esp)
084654b1 +0x0c73:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
084654b6 +0x0c78:  lea    -0x6c(%ebp),%eax
084654b9 +0x0c7b:  lea    -0x90(%ebp),%edx
084654bf +0x0c81:  mov    %edx,0x4(%esp)
084654c3 +0x0c85:  mov    %eax,(%esp)
084654c6 +0x0c88:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
084654cb +0x0c8d:  sub    $0x4,%esp
084654ce +0x0c90:  lea    -0x6c(%ebp),%eax
084654d1 +0x0c93:  mov    %eax,0x4(%esp)
084654d5 +0x0c97:  lea    -0xcc(%ebp),%eax
084654db +0x0c9d:  mov    %eax,(%esp)
084654de +0x0ca0:  call   08152bae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24e3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24e3
084654e3 +0x0ca5:  lea    -0x68(%ebp),%eax
084654e6 +0x0ca8:  lea    -0x90(%ebp),%edx
084654ec +0x0cae:  mov    %edx,0x4(%esp)
084654f0 +0x0cb2:  mov    %eax,(%esp)
084654f3 +0x0cb5:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
084654f8 +0x0cba:  sub    $0x4,%esp
084654fb +0x0cbd:  lea    -0x68(%ebp),%eax
084654fe +0x0cc0:  mov    %eax,0x4(%esp)
08465502 +0x0cc4:  lea    -0xd0(%ebp),%eax
08465508 +0x0cca:  mov    %eax,(%esp)
0846550b +0x0ccd:  call   08152bae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24e3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24e3
08465510 +0x0cd2:  jmp    0846577e <+0xf40>
08465515 +0x0cd7:  lea    -0xcc(%ebp),%eax
0846551b +0x0cdd:  mov    %eax,(%esp)
0846551e +0x0ce0:  call   08152c0a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x253f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x253f
08465523 +0x0ce5:  mov    %eax,-0x24(%ebp)
08465526 +0x0ce8:  mov    -0x24(%ebp),%eax
08465529 +0x0ceb:  mov    0x4(%eax),%eax
0846552c +0x0cee:  mov    %eax,0x4(%esp)
08465530 +0x0cf2:  lea    -0xa4(%ebp),%eax
08465536 +0x0cf8:  mov    %eax,(%esp)
08465539 +0x0cfb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0846553e +0x0d00:  mov    -0x24(%ebp),%eax
08465541 +0x0d03:  mov    0x12(%eax),%eax
08465544 +0x0d06:  mov    %eax,0x4(%esp)
08465548 +0x0d0a:  lea    -0xa4(%ebp),%eax
0846554e +0x0d10:  mov    %eax,(%esp)
08465551 +0x0d13:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08465556 +0x0d18:  mov    -0x24(%ebp),%eax
08465559 +0x0d1b:  add    $0x10,%eax
0846555c +0x0d1e:  mov    %eax,(%esp)
0846555f +0x0d21:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08465564 +0x0d26:  movzbl %al,%eax
08465567 +0x0d29:  mov    %eax,0x4(%esp)
0846556b +0x0d2d:  lea    -0xa4(%ebp),%eax
08465571 +0x0d33:  mov    %eax,(%esp)
08465574 +0x0d36:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08465579 +0x0d3b:  mov    -0x24(%ebp),%eax
0846557c +0x0d3e:  add    $0x10,%eax
0846557f +0x0d41:  mov    %eax,(%esp)
08465582 +0x0d44:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
08465587 +0x0d49:  test   %al,%al
08465589 +0x0d4b:  je     08465640 <+0xe02>
0846558f +0x0d51:  mov    -0x24(%ebp),%eax
08465592 +0x0d54:  mov    0x12(%eax),%eax
08465595 +0x0d57:  mov    %eax,%ebx
08465597 +0x0d59:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846559c +0x0d5e:  mov    %ebx,0x4(%esp)
084655a0 +0x0d62:  mov    %eax,(%esp)
084655a3 +0x0d65:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084655a8 +0x0d6a:  mov    %eax,-0x20(%ebp)
084655ab +0x0d6d:  cmpl   $0x0,-0x20(%ebp)
084655af +0x0d71:  jne    084655d6 <+0xd98>
084655b1 +0x0d73:  mov    -0x24(%ebp),%eax
084655b4 +0x0d76:  add    $0x10,%eax
084655b7 +0x0d79:  mov    %eax,(%esp)
084655ba +0x0d7c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084655bf +0x0d81:  mov    %eax,0x4(%esp)
084655c3 +0x0d85:  lea    -0xa4(%ebp),%eax
084655c9 +0x0d8b:  mov    %eax,(%esp)
084655cc +0x0d8e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084655d1 +0x0d93:  jmp    08465660 <+0xe22>
084655d6 +0x0d98:  mov    -0x20(%ebp),%eax
084655d9 +0x0d9b:  mov    %eax,-0x1c(%ebp)
084655dc +0x0d9e:  mov    -0x24(%ebp),%eax
084655df +0x0da1:  movzwl 0x1b(%eax),%eax
084655e3 +0x0da5:  movzbl %al,%edx
084655e6 +0x0da8:  mov    -0x20(%ebp),%eax
084655e9 +0x0dab:  mov    %edx,0x4(%esp)
084655ed +0x0daf:  mov    %eax,(%esp)
084655f0 +0x0db2:  call   08151120 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa55>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa55
084655f5 +0x0db7:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
084655fb +0x0dbd:  mov    %eax,0x4(%esp)
084655ff +0x0dc1:  lea    -0xa4(%ebp),%eax
08465605 +0x0dc7:  mov    %eax,(%esp)
08465608 +0x0dca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846560d +0x0dcf:  lea    -0xc6(%ebp),%eax
08465613 +0x0dd5:  mov    %eax,(%esp)
08465616 +0x0dd8:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0846561b +0x0ddd:  mov    -0x24(%ebp),%eax
0846561e +0x0de0:  movzwl 0x1b(%eax),%eax
08465622 +0x0de4:  movzwl %ax,%eax
08465625 +0x0de7:  lea    -0xc6(%ebp),%edx
0846562b +0x0ded:  mov    %edx,0x8(%esp)
0846562f +0x0df1:  mov    %eax,0x4(%esp)
08465633 +0x0df5:  mov    -0x1c(%ebp),%eax
08465636 +0x0df8:  mov    %eax,(%esp)
08465639 +0x0dfb:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
0846563e +0x0e00:  jmp    08465660 <+0xe22>
08465640 +0x0e02:  mov    -0x24(%ebp),%eax
08465643 +0x0e05:  add    $0x10,%eax
08465646 +0x0e08:  mov    %eax,(%esp)
08465649 +0x0e0b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0846564e +0x0e10:  mov    %eax,0x4(%esp)
08465652 +0x0e14:  lea    -0xa4(%ebp),%eax
08465658 +0x0e1a:  mov    %eax,(%esp)
0846565b +0x0e1d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08465660 +0x0e22:  mov    -0x24(%ebp),%eax
08465663 +0x0e25:  movzwl 0x1b(%eax),%eax
08465667 +0x0e29:  movzwl %ax,%eax
0846566a +0x0e2c:  mov    %eax,0x4(%esp)
0846566e +0x0e30:  lea    -0xa4(%ebp),%eax
08465674 +0x0e36:  mov    %eax,(%esp)
08465677 +0x0e39:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0846567c +0x0e3e:  mov    -0x24(%ebp),%eax
0846567f +0x0e41:  add    $0x21,%eax
08465682 +0x0e44:  mov    %eax,(%esp)
08465685 +0x0e47:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0846568a +0x0e4c:  movzbl %al,%eax
0846568d +0x0e4f:  mov    %eax,0x4(%esp)
08465691 +0x0e53:  lea    -0xa4(%ebp),%eax
08465697 +0x0e59:  mov    %eax,(%esp)
0846569a +0x0e5c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0846569f +0x0e61:  mov    -0x24(%ebp),%eax
084656a2 +0x0e64:  add    $0x21,%eax
084656a5 +0x0e67:  mov    %eax,(%esp)
084656a8 +0x0e6a:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084656ad +0x0e6f:  movzwl %ax,%eax
084656b0 +0x0e72:  mov    %eax,0x4(%esp)
084656b4 +0x0e76:  lea    -0xa4(%ebp),%eax
084656ba +0x0e7c:  mov    %eax,(%esp)
084656bd +0x0e7f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084656c2 +0x0e84:  mov    -0x24(%ebp),%eax
084656c5 +0x0e87:  add    $0x10,%eax
084656c8 +0x0e8a:  mov    %eax,0x4(%esp)
084656cc +0x0e8e:  lea    -0xa4(%ebp),%eax
084656d2 +0x0e94:  mov    %eax,(%esp)
084656d5 +0x0e97:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084656da +0x0e9c:  mov    -0x24(%ebp),%eax
084656dd +0x0e9f:  add    $0x10,%eax
084656e0 +0x0ea2:  mov    %eax,(%esp)
084656e3 +0x0ea5:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
084656e8 +0x0eaa:  test   %al,%al
084656ea +0x0eac:  je     0846573a <+0xefc>
084656ec +0x0eae:  movl   $0x1,0x4(%esp)
084656f4 +0x0eb6:  lea    -0xa4(%ebp),%eax
084656fa +0x0ebc:  mov    %eax,(%esp)
084656fd +0x0ebf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08465702 +0x0ec4:  movl   $0x1e,0x4(%esp)
0846570a +0x0ecc:  lea    -0xa4(%ebp),%eax
08465710 +0x0ed2:  mov    %eax,(%esp)
08465713 +0x0ed5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08465718 +0x0eda:  lea    -0xc6(%ebp),%eax
0846571e +0x0ee0:  movl   $0x1e,0x8(%esp)
08465726 +0x0ee8:  mov    %eax,0x4(%esp)
0846572a +0x0eec:  lea    -0xa4(%ebp),%eax
08465730 +0x0ef2:  mov    %eax,(%esp)
08465733 +0x0ef5:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08465738 +0x0efa:  jmp    08465750 <+0xf12>
0846573a +0x0efc:  movl   $0x0,0x4(%esp)
08465742 +0x0f04:  lea    -0xa4(%ebp),%eax
08465748 +0x0f0a:  mov    %eax,(%esp)
0846574b +0x0f0d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08465750 +0x0f12:  mov    -0x24(%ebp),%eax
08465753 +0x0f15:  movzwl 0x8(%eax),%eax
08465757 +0x0f19:  movzwl %ax,%eax
0846575a +0x0f1c:  mov    %eax,0x4(%esp)
0846575e +0x0f20:  lea    -0xa4(%ebp),%eax
08465764 +0x0f26:  mov    %eax,(%esp)
08465767 +0x0f29:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0846576c +0x0f2e:  addl   $0x1,-0x58(%ebp)
08465770 +0x0f32:  lea    -0xcc(%ebp),%eax
08465776 +0x0f38:  mov    %eax,(%esp)
08465779 +0x0f3b:  call   08152bf6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x252b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x252b
0846577e +0x0f40:  lea    -0xd0(%ebp),%eax
08465784 +0x0f46:  mov    %eax,0x4(%esp)
08465788 +0x0f4a:  lea    -0xcc(%ebp),%eax
0846578e +0x0f50:  mov    %eax,(%esp)
08465791 +0x0f53:  call   08152be2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2517>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2517
08465796 +0x0f58:  test   %al,%al
08465798 +0x0f5a:  jne    08465515 <+0xcd7>
0846579e +0x0f60:  movl   $0x0,0x4(%esp)
084657a6 +0x0f68:  lea    -0xa4(%ebp),%eax
084657ac +0x0f6e:  mov    %eax,(%esp)
084657af +0x0f71:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084657b4 +0x0f76:  movl   $0x0,0x4(%esp)
084657bc +0x0f7e:  lea    -0xa4(%ebp),%eax
084657c2 +0x0f84:  mov    %eax,(%esp)
084657c5 +0x0f87:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084657ca +0x0f8c:  movl   $0x0,0x4(%esp)
084657d2 +0x0f94:  lea    -0xa4(%ebp),%eax
084657d8 +0x0f9a:  mov    %eax,(%esp)
084657db +0x0f9d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084657e0 +0x0fa2:  mov    -0x58(%ebp),%eax
084657e3 +0x0fa5:  mov    %eax,0x8(%esp)
084657e7 +0x0fa9:  lea    -0xa8(%ebp),%eax
084657ed +0x0faf:  mov    %eax,0x4(%esp)
084657f1 +0x0fb3:  lea    -0xa4(%ebp),%eax
084657f7 +0x0fb9:  mov    %eax,(%esp)
084657fa +0x0fbc:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084657ff +0x0fc1:  movl   $0x1,0x4(%esp)
08465807 +0x0fc9:  lea    -0xa4(%ebp),%eax
0846580d +0x0fcf:  mov    %eax,(%esp)
08465810 +0x0fd2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08465815 +0x0fd7:  mov    0x8(%ebp),%eax
08465818 +0x0fda:  mov    (%eax),%eax
0846581a +0x0fdc:  lea    -0xa4(%ebp),%edx
08465820 +0x0fe2:  mov    %edx,0x4(%esp)
08465824 +0x0fe6:  mov    %eax,(%esp)
08465827 +0x0fe9:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0846582c +0x0fee:  mov    0x8(%ebp),%eax
0846582f +0x0ff1:  add    $0x14,%eax
08465832 +0x0ff4:  mov    %eax,(%esp)
08465835 +0x0ff7:  call   08461b3e <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv>  ; WongWork::CDeathTower::CStage::checkClearStage()
0846583a +0x0ffc:  test   %al,%al
0846583c +0x0ffe:  je     0846587b <+0x103d>
0846583e +0x1000:  mov    0x8(%ebp),%eax
08465841 +0x1003:  mov    %eax,(%esp)
08465844 +0x1006:  call   08467cc2 <_ZN8WongWork11CDeathTower14_onFinishStageEv>  ; WongWork::CDeathTower::_onFinishStage()
08465849 +0x100b:  mov    0x8(%ebp),%eax
0846584c +0x100e:  add    $0x14,%eax
0846584f +0x1011:  mov    %eax,(%esp)
08465852 +0x1014:  call   08469b02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1e5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1e5
08465857 +0x1019:  mov    %eax,%ebx
08465859 +0x101b:  mov    0x8(%ebp),%eax
0846585c +0x101e:  add    $0xc,%eax
0846585f +0x1021:  mov    %eax,(%esp)
08465862 +0x1024:  call   08469ab4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x197>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x197
08465867 +0x1029:  cmp    %eax,%ebx
08465869 +0x102b:  sete   %al
0846586c +0x102e:  test   %al,%al
0846586e +0x1030:  je     0846587b <+0x103d>
08465870 +0x1032:  mov    0x8(%ebp),%eax
08465873 +0x1035:  mov    %eax,(%esp)
08465876 +0x1038:  call   08467e00 <_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv>  ; WongWork::CDeathTower::_onPrepareFinishTower()
0846587b +0x103d:  mov    $0x1,%ebx
08465880 +0x1042:  lea    -0xa4(%ebp),%eax
08465886 +0x1048:  mov    %eax,(%esp)
08465889 +0x104b:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
0846588e +0x1050:  jmp    084658c0 <+0x1082>
08465890 +0x1052:  mov    %edx,%ebx
08465892 +0x1054:  mov    %eax,%esi
08465894 +0x1056:  lea    -0xa4(%ebp),%eax
0846589a +0x105c:  mov    %eax,(%esp)
0846589d +0x105f:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
084658a2 +0x1064:  mov    %esi,%eax
084658a4 +0x1066:  mov    %ebx,%edx
084658a6 +0x1068:  jmp    084658a8 <+0x106a>
084658a8 +0x106a:  mov    %edx,%ebx
084658aa +0x106c:  mov    %eax,%esi
084658ac +0x106e:  lea    -0x150(%ebp),%eax
084658b2 +0x1074:  mov    %eax,(%esp)
084658b5 +0x1077:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
084658ba +0x107c:  mov    %esi,%eax
084658bc +0x107e:  mov    %ebx,%edx
084658be +0x1080:  jmp    084658d0 <+0x1092>
084658c0 +0x1082:  lea    -0x150(%ebp),%eax
084658c6 +0x1088:  mov    %eax,(%esp)
084658c9 +0x108b:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
084658ce +0x1090:  jmp    084658e8 <+0x10aa>
084658d0 +0x1092:  mov    %edx,%ebx
084658d2 +0x1094:  mov    %eax,%esi
084658d4 +0x1096:  lea    -0x90(%ebp),%eax
084658da +0x109c:  mov    %eax,(%esp)
084658dd +0x109f:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
084658e2 +0x10a4:  mov    %esi,%eax
084658e4 +0x10a6:  mov    %ebx,%edx
084658e6 +0x10a8:  jmp    084658f8 <+0x10ba>
084658e8 +0x10aa:  lea    -0x90(%ebp),%eax
084658ee +0x10b0:  mov    %eax,(%esp)
084658f1 +0x10b3:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
084658f6 +0x10b8:  jmp    08465910 <+0x10d2>
084658f8 +0x10ba:  mov    %edx,%ebx
084658fa +0x10bc:  mov    %eax,%esi
084658fc +0x10be:  lea    -0x88(%ebp),%eax
08465902 +0x10c4:  mov    %eax,(%esp)
08465905 +0x10c7:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
0846590a +0x10cc:  mov    %esi,%eax
0846590c +0x10ce:  mov    %ebx,%edx
0846590e +0x10d0:  jmp    08465920 <+0x10e2>
08465910 +0x10d2:  lea    -0x88(%ebp),%eax
08465916 +0x10d8:  mov    %eax,(%esp)
08465919 +0x10db:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
0846591e +0x10e0:  jmp    0846593e <+0x1100>
08465920 +0x10e2:  mov    %edx,%ebx
08465922 +0x10e4:  mov    %eax,%esi
08465924 +0x10e6:  lea    -0x530(%ebp),%eax
0846592a +0x10ec:  mov    %eax,(%esp)
0846592d +0x10ef:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08465932 +0x10f4:  mov    %esi,%eax
08465934 +0x10f6:  mov    %ebx,%edx
08465936 +0x10f8:  mov    %eax,(%esp)
08465939 +0x10fb:  call   08ae3750 <_Unwind_Resume>
0846593e +0x1100:  lea    -0x530(%ebp),%eax
08465944 +0x1106:  mov    %eax,(%esp)
08465947 +0x1109:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0846594c +0x110e:  mov    %ebx,%eax
0846594e +0x1110:  lea    -0xc(%ebp),%esp
08465951 +0x1113:  add    $0x0,%esp
08465954 +0x1116:  pop    %ebx
08465955 +0x1117:  pop    %esi
08465956 +0x1118:  pop    %edi
08465957 +0x1119:  pop    %ebp
08465958 +0x111a:  ret
08465959 +0x111b:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::handleKillMonster @ 0x846483e

/* WongWork::CDeathTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE
   const&, int*) */

undefined4 __thiscall
WongWork::CDeathTower::handleKillMonster
          (CDeathTower *this,CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,
          int *param_5)

{
  ulonglong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  CDungeon *pCVar7;
  int *piVar8;
  CDeathTowerWinPointEvent *this_00;
  undefined4 *puVar9;
  CDataManager *pCVar10;
  int iVar11;
  undefined4 uVar12;
  longdouble lVar13;
  map_monster local_534 [8];
  char local_52c;
  uint local_528;
  int local_508;
  map_item local_1e8 [8];
  ushort local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  Inven_Item local_191 [2];
  undefined4 local_18f;
  stGenerateResult_t local_154 [48];
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c [2];
  uint local_114 [7];
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
  local_ec [4];
  __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
  local_e8 [4];
  ulong local_e4;
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_e0 [12];
  _List_const_iterator<map_item> local_d4 [4];
  _List_const_iterator<map_item> local_d0 [6];
  stAvatarEmblemInfo_t local_ca [30];
  int local_ac;
  CPacketHandler local_a8 [12];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_9c [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_98 [4];
  list<map_item,std::allocator<map_item>> local_94 [8];
  vector<unsigned_long,std::allocator<unsigned_long>> local_8c [12];
  __normal_iterator local_80 [4];
  __normal_iterator local_7c [4];
  __normal_iterator local_78 [4];
  __normal_iterator local_74 [4];
  _List_iterator local_70 [4];
  _List_iterator local_6c [4];
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  char local_55;
  uint local_54;
  CAICharacter *local_50;
  CMonster *local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  CUserCharacInfo *local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  int local_28;
  CEquipItem *local_24;
  CEquipItem *local_20;
  
  iVar4 = CStage::getState((CStage *)(this + 0x14));
  if (iVar4 != 1) {
    CUser::SendCmdErrorPacket(param_1,0x2a,0x13);
    return 0;
  }
  iVar4 = stMapMonsterKillChecker_t::getUseSkillMaterialTime
                    ((stMapMonsterKillChecker_t *)(this + 0xb58));
  if (iVar4 == 0) {
    uVar5 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    uVar5 = stMapMonsterKillChecker_t::dieMonster
                      ((stMapMonsterKillChecker_t *)(this + 0xb58),uVar5,1000);
    if (uVar5 < 3) goto LAB_084648e4;
    bVar3 = true;
  }
  else {
LAB_084648e4:
    bVar3 = false;
  }
  if (bVar3) {
    local_55 = '\0';
    if ((param_1 == (CUser *)0x0) ||
       (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar4 < 0x1e)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_55 = '\x01';
    }
    else {
      if ((param_1 == (CUser *)0x0) ||
         (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar4 < 0x19)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        CUser::GetPremiumInfo(param_1);
        CUserPremium::GetPremiumInfoList((int)local_e0);
        local_54 = 0;
        while (uVar5 = std::
                       vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                       ::size(local_e0), local_54 < uVar5) {
          piVar8 = (int *)std::
                          vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                          ::operator[](local_e0,local_54);
          if (((*piVar8 < 0x17) ||
              (piVar8 = (int *)std::
                               vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                               ::operator[](local_e0,local_54), 0x1b < *piVar8)) ||
             (iVar4 = std::
                      vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                      ::operator[](local_e0,local_54), *(int *)(iVar4 + 0x10) != 1)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_55 = '\x01';
            break;
          }
          local_54 = local_54 + 1;
        }
        std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
                  (local_e0);
      }
    }
    if (local_55 != '\0') {
      stMapMonsterKillChecker_t::initMonsterInfo((stMapMonsterKillChecker_t *)(this + 0xb58));
      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xd6,1,0,0);
    }
  }
  map_monster::map_monster(local_534);
                    /* try { // try from 08464a94 to 08464ad0 has its CatchHandler @ 08465920 */
  local_68 = CStage::killMonster((CStage *)(this + 0x14),(uint)param_2,local_534);
  if (local_68 == 0) {
    uVar12 = 0;
    goto LAB_0846593e;
  }
  local_64 = CParty::getMemberLevelGap(*(CParty **)this);
  local_60 = 0;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::vector(local_8c);
                    /* try { // try from 08464ada to 08464ade has its CatchHandler @ 084658f8 */
  std::list<map_item,std::allocator<map_item>>::list(local_94);
                    /* try { // try from 08464ae8 to 08464aec has its CatchHandler @ 084658d0 */
  stGenerateResult_t::stGenerateResult_t(local_154);
  uVar5 = local_528;
  if (param_5 != (int *)0x0) {
    *param_5 = local_528;
  }
  if (local_52c < '\x05') {
    local_e4 = 0xfffffffe;
    iVar4 = G_CDataManager();
    local_4c = (CMonster *)CDataManager::find_monster(iVar4);
    if (local_4c == (CMonster *)0x0) {
LAB_08464be2:
      bVar3 = false;
    }
    else {
      pCVar7 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      cVar2 = CDungeon::hasTowerItemDrop(pCVar7);
      if (cVar2 == '\0') goto LAB_08464be2;
      bVar3 = true;
    }
    if (bVar3) {
      local_e4 = CMonster::deathTowerSpecifyItemDrop(local_4c);
    }
    if (local_e4 != 0xfffffffe) {
      std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back(local_8c,&local_e4);
    }
  }
  else {
                    /* try { // try from 08464b15 to 08465440 has its CatchHandler @ 084658a8 */
    iVar4 = G_CDataManager();
    local_50 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar5);
    if (local_50 != (CAICharacter *)0x0) {
      pCVar7 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      cVar2 = CDungeon::hasTowerItemDrop(pCVar7);
      if (cVar2 != '\0') {
        CAICharacter::deathTowerSpecifyItemDrop(local_50,(vector *)local_8c);
      }
      if ((local_508 == 100) || (local_508 == 200)) {
        local_60 = CAICharacter::getPvPWinPoint(local_50);
      }
    }
  }
  cVar2 = std::vector<unsigned_long,std::allocator<unsigned_long>>::empty();
  if (cVar2 != '\x01') {
    std::vector<unsigned_long,std::allocator<unsigned_long>>::begin();
    __gnu_cxx::
    __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
    ::__normal_iterator<unsigned_long*>(local_e8,local_80);
    std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
    __gnu_cxx::
    __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
    ::__normal_iterator<unsigned_long*>(local_ec,local_7c);
    while (bVar3 = __gnu_cxx::operator!=(local_e8,local_ec), bVar3) {
      piVar8 = (int *)__gnu_cxx::
                      __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
                      ::operator*(local_e8);
      iVar4 = *piVar8;
      iVar11 = G_CDataManager();
      local_48 = CItemList::find_item(*(CItemList **)(iVar11 + 0xc),iVar4);
      if (local_48 != 0) {
        Inven_Item::Inven_Item(local_191);
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
                 ::operator*(local_e8);
        local_18f = *puVar9;
        iVar4 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar4 + 0xc),1,local_191,1);
        local_44 = CParty::get_member_count(*(CParty **)this);
        for (local_40 = 0; local_40 < local_44; local_40 = local_40 + 1) {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_154,local_191);
        }
      }
      __gnu_cxx::
      __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
      ::operator++(local_e8);
    }
  }
  for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
    local_38 = (CUserCharacInfo *)0x0;
    local_38 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_3c);
    if ((local_38 == (CUserCharacInfo *)0x0) ||
       (cVar2 = CParty::checkValidUser(*(CParty **)this,local_3c), cVar2 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((!bVar3) && (*(int *)(*(int *)this + 0xcd8) != 1)) {
      local_f0 = 0;
      iVar4 = CUserCharacInfo::get_charac_level(local_38);
      pCVar10 = (CDataManager *)G_CDataManager();
      CDataManager::get_mob_reward(pCVar10,iVar4,&local_f0);
      local_f0 = CParty::getMonsterTotalExp(*(CParty **)this,local_f0,'\0',0,1.0,1.0,false);
      QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_f8,*(CParty **)this)
      ;
      QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_114);
      local_114[0] = local_f0;
      CParty::set_random_reward(*(undefined4 *)this,0,local_f8,local_f4,local_114);
      local_f0 = local_114[0];
      if (local_52c == '\x05') {
        uVar1 = (ulonglong)local_114[0];
        iVar4 = G_CDataManager();
        local_f0 = (uint)ROUND(*(float *)(iVar4 + 0x5198) * (float)uVar1);
      }
      uVar1 = (ulonglong)local_f0;
      iVar4 = G_CDataManager();
      local_f0 = (uint)ROUND(*(float *)(iVar4 + 0x5e1c) * (float)uVar1);
      STGainedEachExpData::STGainedEachExpData((STGainedEachExpData *)local_11c);
      local_11c[0] = local_f0;
      local_f0 = CParty::sumGainedEachExp
                           (*(CParty **)this,(CUser *)local_38,(STGainedEachExpData *)local_11c);
      if (local_60 != 0) {
        this_00 = (CDeathTowerWinPointEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x27);
        lVar13 = (longdouble)CDeathTowerWinPointEvent::getBonusRate(this_00);
        local_2c = (float)lVar13;
        if (local_2c == 0.0) {
          CUser::gainWinPoint((CUser *)local_38,local_60,2);
        }
        else {
          CUser::gainWinPoint((CUser *)local_38,(int)ROUND((float)local_60 * local_2c),2);
        }
      }
      CUserCharacInfo::calcHelpAbuseRatio((uint)local_38,SUB41(local_f0,0));
      local_120 = 0;
      local_34 = 0xb;
      if (local_52c == '\x05') {
        local_34 = 0xc;
      }
      local_124 = 0;
      cVar2 = CUser::gain_exp_sp((CUser *)local_38,local_f0,&local_120,&local_124,local_34,local_528
                                 ,0);
      if (cVar2 != '\0') {
        CUser::SendNotiPacket((CUser *)local_38,2,2,1);
      }
      uVar5 = local_f0;
      uVar12 = CUserCharacInfo::getCurCharacExp(local_38);
      cUserHistoryLog::KillMonster
                ((cUserHistoryLog *)(local_38 + 0x79700),local_528,*(undefined4 *)(param_4 + 0xa1e),
                 *(undefined4 *)(param_4 + 0xa1a),*(undefined2 *)(param_4 + 0xa24),
                 *(undefined2 *)(param_4 + 0xa26),param_4,(int)local_52c,local_52c == '\x05',uVar12,
                 uVar5,local_34);
      uVar5 = local_528;
      local_30 = 1;
      if (('\x04' < local_52c) && (local_52c < '\t')) {
        local_30 = 2;
      }
      pCVar7 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      uVar12 = CDungeon::get_index(pCVar7);
      CUser::CheckQuestMonster((CUser *)local_38,uVar12,uVar5,local_30);
    }
  }
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_98,local_78);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_9c,local_74);
  while (bVar3 = __gnu_cxx::operator!=(local_98,local_9c), bVar3) {
    map_item::map_item(local_1e8);
    local_1e8[0] = (map_item)0x1;
    local_1e0 = param_3;
    local_1dc = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
             ::operator*(local_98);
    local_1d8 = *puVar9;
    local_1d4 = puVar9[1];
    local_1d0 = puVar9[2];
    local_1cc = puVar9[3];
    local_1c8 = puVar9[4];
    local_1c4 = puVar9[5];
    local_1c0 = puVar9[6];
    local_1bc = puVar9[7];
    local_1b8 = puVar9[8];
    local_1b4 = puVar9[9];
    local_1b0 = puVar9[10];
    local_1ac = puVar9[0xb];
    local_1a8 = puVar9[0xc];
    local_1a4 = puVar9[0xd];
    local_1a0 = puVar9[0xe];
    local_19c = *(undefined1 *)(puVar9 + 0xf);
    CStage::dropItem((CStage *)(this + 0x14),local_1e8);
    std::list<map_item,std::allocator<map_item>>::push_back(local_94,local_1e8);
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_98);
  }
  CPacketHandler::CPacketHandler(local_a8);
                    /* try { // try from 0846545a to 0846587a has its CatchHandler @ 08465890 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a8,0,0x26);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,(uint)param_2);
  local_ac = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_a8);
  local_5c = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  stAvatarEmblemInfo_t::init(local_ca);
  std::list<map_item,std::allocator<map_item>>::begin();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_d0,local_70);
  std::list<map_item,std::allocator<map_item>>::end();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_d4,local_6c);
  while (cVar2 = std::_List_const_iterator<map_item>::operator!=(local_d0,local_d4), cVar2 != '\0')
  {
    local_28 = std::_List_const_iterator<map_item>::operator*(local_d0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,*(int *)(local_28 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,*(int *)(local_28 + 0x12));
    uVar5 = Inven_Item::GetItemAttr((Inven_Item *)(local_28 + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,uVar5 & 0xff);
    cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
    if (cVar2 == '\0') {
      iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,iVar4);
    }
    else {
      iVar4 = *(int *)(local_28 + 0x12);
      pCVar10 = (CDataManager *)G_CDataManager();
      local_24 = (CEquipItem *)CDataManager::find_item(pCVar10,iVar4);
      if (local_24 == (CEquipItem *)0x0) {
        iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,iVar4);
      }
      else {
        local_20 = local_24;
        iVar4 = CEquipItem::getAvatarPeriod(local_24,(uchar)*(undefined2 *)(local_28 + 0x1b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,iVar4 * 0x15180);
        stAvatarEmblemInfo_t::init(local_ca);
        CEquipItem::getAvatarSocket(local_20,(uint)*(ushort *)(local_28 + 0x1b),local_ca);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,(uint)*(ushort *)(local_28 + 0x1b))
    ;
    uVar5 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_28 + 0x21));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,uVar5 & 0xff);
    uVar5 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_28 + 0x21));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,uVar5 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_a8,(Inven_Item *)(local_28 + 0x10));
    cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,0x1e);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_a8,(char *)local_ca,0x1e);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,(uint)*(ushort *)(local_28 + 8));
    local_5c = local_5c + 1;
    std::_List_const_iterator<map_item>::operator++(local_d0);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,&local_ac,local_5c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a8,true);
  CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_a8);
  cVar2 = CStage::checkClearStage();
  if (cVar2 != '\0') {
    _onFinishStage(this);
    iVar4 = CStage::getCurrentStage((CStage *)(this + 0x14));
    iVar11 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
    if (iVar4 == iVar11) {
      _onPrepareFinishTower(this);
    }
  }
  uVar12 = 1;
                    /* try { // try from 08465889 to 0846588d has its CatchHandler @ 084658a8 */
  CPacketHandler::~CPacketHandler(local_a8);
                    /* try { // try from 084658c9 to 084658cd has its CatchHandler @ 084658d0 */
  stGenerateResult_t::~stGenerateResult_t(local_154);
                    /* try { // try from 084658f1 to 084658f5 has its CatchHandler @ 084658f8 */
  std::list<map_item,std::allocator<map_item>>::~list(local_94);
                    /* try { // try from 08465919 to 0846591d has its CatchHandler @ 08465920 */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(local_8c);
LAB_0846593e:
  map_monster::~map_monster(local_534);
  return uVar12;
}
```
