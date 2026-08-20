# handleStartGame

`_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE`

`WongWork::CBossTower::handleStartGame(CParty*, int, char, ENUM_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081434f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081434f4  _ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE
#           WongWork::CBossTower::handleStartGame(CParty*, int, char, ENUM_DUNGEON_TYPE)
# range [0x081434f4, 0x08143995]
081434f4 +0x000:  push   %ebp
081434f5 +0x001:  mov    %esp,%ebp
081434f7 +0x003:  push   %edi
081434f8 +0x004:  push   %esi
081434f9 +0x005:  push   %ebx
081434fa +0x006:  sub    $0x15c,%esp
08143500 +0x00c:  mov    0x14(%ebp),%eax
08143503 +0x00f:  mov    %al,-0x13c(%ebp)
08143509 +0x015:  cmpl   $0x1,0x18(%ebp)
0814350d +0x019:  jne    08143519 <+0x25>
0814350f +0x01b:  mov    $0x0,%ebx
08143514 +0x020:  jmp    08143989 <+0x495>
08143519 +0x025:  mov    0xc(%ebp),%eax
0814351c +0x028:  mov    0xcd8(%eax),%eax
08143522 +0x02e:  cmp    $0x1,%eax
08143525 +0x031:  jne    08143531 <+0x3d>
08143527 +0x033:  mov    $0x0,%ebx
0814352c +0x038:  jmp    08143989 <+0x495>
08143531 +0x03d:  mov    0x8(%ebp),%eax
08143534 +0x040:  mov    0x18(%ebp),%edx
08143537 +0x043:  mov    %edx,0xaec(%eax)
0814353d +0x049:  movsbl -0x13c(%ebp),%edx
08143544 +0x050:  mov    0x8(%ebp),%eax
08143547 +0x053:  mov    %edx,0xae8(%eax)
0814354d +0x059:  mov    0x8(%ebp),%eax
08143550 +0x05c:  mov    %eax,(%esp)
08143553 +0x05f:  call   08149120 <_ZN8WongWork9CBossPlay5resetEv>  ; WongWork::CBossPlay::reset()
08143558 +0x064:  mov    0x8(%ebp),%eax
0814355b +0x067:  mov    %eax,(%esp)
0814355e +0x06a:  call   0814bea2 <_ZN8WongWork10CBossStage5resetEv>  ; WongWork::CBossStage::reset()
08143563 +0x06f:  mov    0x8(%ebp),%eax
08143566 +0x072:  add    $0xb00,%eax
0814356b +0x077:  mov    %eax,(%esp)
0814356e +0x07a:  call   08145746 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1c9>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1c9
08143573 +0x07f:  mov    0x8(%ebp),%eax
08143576 +0x082:  movl   $0x1,0xae0(%eax)
08143580 +0x08c:  mov    0x10(%ebp),%eax
08143583 +0x08f:  mov    %eax,0x8(%esp)
08143587 +0x093:  mov    0xc(%ebp),%eax
0814358a +0x096:  mov    %eax,0x4(%esp)
0814358e +0x09a:  mov    0x8(%ebp),%eax
08143591 +0x09d:  mov    %eax,(%esp)
08143594 +0x0a0:  call   08142f32 <_ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi>  ; WongWork::CBossTower::InitBossTower(CParty*, int)
08143599 +0x0a5:  xor    $0x1,%eax
0814359c +0x0a8:  test   %al,%al
0814359e +0x0aa:  je     081435aa <+0xb6>
081435a0 +0x0ac:  mov    $0x0,%ebx
081435a5 +0x0b1:  jmp    08143989 <+0x495>
081435aa +0x0b6:  movb   $0x0,-0x29(%ebp)
081435ae +0x0ba:  movl   $0x1,0x8(%esp)
081435b6 +0x0c2:  lea    -0x29(%ebp),%eax
081435b9 +0x0c5:  mov    %eax,0x4(%esp)
081435bd +0x0c9:  mov    0x8(%ebp),%eax
081435c0 +0x0cc:  mov    %eax,(%esp)
081435c3 +0x0cf:  call   08142fa6 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb>  ; WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)
081435c8 +0x0d4:  xor    $0x1,%eax
081435cb +0x0d7:  test   %al,%al
081435cd +0x0d9:  je     081435d9 <+0xe5>
081435cf +0x0db:  mov    $0x0,%ebx
081435d4 +0x0e0:  jmp    08143989 <+0x495>
081435d9 +0x0e5:  mov    0xc(%ebp),%eax
081435dc +0x0e8:  mov    %eax,(%esp)
081435df +0x0eb:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081435e4 +0x0f0:  mov    %eax,-0x28(%ebp)
081435e7 +0x0f3:  mov    -0x28(%ebp),%eax
081435ea +0x0f6:  mov    %eax,(%esp)
081435ed +0x0f9:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081435f2 +0x0fe:  test   %al,%al
081435f4 +0x100:  je     0814361e <+0x12a>
081435f6 +0x102:  mov    -0x28(%ebp),%eax
081435f9 +0x105:  movzbl 0x796cc(%eax),%eax
08143600 +0x10c:  test   %al,%al
08143602 +0x10e:  je     0814361e <+0x12a>
08143604 +0x110:  mov    -0x28(%ebp),%eax
08143607 +0x113:  movzbl 0x796cc(%eax),%eax
0814360e +0x11a:  mov    %al,-0x13c(%ebp)
08143614 +0x120:  mov    -0x28(%ebp),%eax
08143617 +0x123:  movb   $0x0,0x796cc(%eax)
0814361e +0x12a:  mov    0x8(%ebp),%eax
08143621 +0x12d:  mov    -0x28(%ebp),%edx
08143624 +0x130:  mov    %edx,0x4(%esp)
08143628 +0x134:  mov    %eax,(%esp)
0814362b +0x137:  call   0814f426 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser>  ; WongWork::CBossStage::RandomConsistMap(CUser&)
08143630 +0x13c:  xor    $0x1,%eax
08143633 +0x13f:  test   %al,%al
08143635 +0x141:  je     08143641 <+0x14d>
08143637 +0x143:  mov    $0x0,%ebx
0814363c +0x148:  jmp    08143989 <+0x495>
08143641 +0x14d:  mov    0x8(%ebp),%eax
08143644 +0x150:  mov    0xaf0(%eax),%edx
0814364a +0x156:  mov    0x8(%ebp),%eax
0814364d +0x159:  mov    %edx,0x8(%esp)
08143651 +0x15d:  mov    0x10(%ebp),%edx
08143654 +0x160:  mov    %edx,0x4(%esp)
08143658 +0x164:  mov    %eax,(%esp)
0814365b +0x167:  call   0814926e <_ZN8WongWork9CBossPlay12InitPlayUserEii>  ; WongWork::CBossPlay::InitPlayUser(int, int)
08143660 +0x16c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08143667 +0x173:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0814366c +0x178:  mov    %eax,%edx
0814366e +0x17a:  mov    0x8(%ebp),%eax
08143671 +0x17d:  mov    %edx,0xaf4(%eax)
08143677 +0x183:  mov    0x8(%ebp),%eax
0814367a +0x186:  movl   $0x0,0xaf8(%eax)
08143684 +0x190:  lea    -0x138(%ebp),%ebx
0814368a +0x196:  mov    $0x0,%eax
0814368f +0x19b:  mov    $0x40,%edx
08143694 +0x1a0:  mov    %ebx,%edi
08143696 +0x1a2:  mov    %edx,%ecx
08143698 +0x1a4:  rep stos %eax,%es:(%edi)
0814369a +0x1a6:  mov    0x8(%ebp),%eax
0814369d +0x1a9:  mov    0x4(%eax),%eax
081436a0 +0x1ac:  lea    -0x138(%ebp),%edx
081436a6 +0x1b2:  mov    %edx,0x4(%esp)
081436aa +0x1b6:  mov    %eax,(%esp)
081436ad +0x1b9:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
081436b2 +0x1be:  movl   $0x0,-0x20(%ebp)
081436b9 +0x1c5:  jmp    081437e7 <+0x2f3>
081436be +0x1ca:  mov    0x8(%ebp),%eax
081436c1 +0x1cd:  mov    0x4(%eax),%eax
081436c4 +0x1d0:  mov    -0x20(%ebp),%edx
081436c7 +0x1d3:  mov    %edx,0x4(%esp)
081436cb +0x1d7:  mov    %eax,(%esp)
081436ce +0x1da:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081436d3 +0x1df:  mov    %eax,-0x1c(%ebp)
081436d6 +0x1e2:  cmpl   $0x0,-0x1c(%ebp)
081436da +0x1e6:  je     081436f8 <+0x204>
081436dc +0x1e8:  mov    0x8(%ebp),%eax
081436df +0x1eb:  mov    0x4(%eax),%eax
081436e2 +0x1ee:  mov    -0x20(%ebp),%edx
081436e5 +0x1f1:  mov    %edx,0x4(%esp)
081436e9 +0x1f5:  mov    %eax,(%esp)
081436ec +0x1f8:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081436f1 +0x1fd:  xor    $0x1,%eax
081436f4 +0x200:  test   %al,%al
081436f6 +0x202:  je     081436ff <+0x20b>
081436f8 +0x204:  mov    $0x1,%eax
081436fd +0x209:  jmp    08143704 <+0x210>
081436ff +0x20b:  mov    $0x0,%eax
08143704 +0x210:  test   %al,%al
08143706 +0x212:  jne    081437e2 <+0x2ee>
0814370c +0x218:  mov    0x8(%ebp),%eax
0814370f +0x21b:  mov    0xae8(%eax),%eax
08143715 +0x221:  movzbl %al,%edx
08143718 +0x224:  mov    0x8(%ebp),%eax
0814371b +0x227:  mov    0xae0(%eax),%eax
08143721 +0x22d:  movzbl %al,%eax
08143724 +0x230:  mov    0x8(%ebp),%ecx
08143727 +0x233:  add    $0xb00,%ecx
0814372d +0x239:  mov    %edx,0xc(%esp)
08143731 +0x23d:  mov    %eax,0x8(%esp)
08143735 +0x241:  mov    -0x1c(%ebp),%eax
08143738 +0x244:  mov    %eax,0x4(%esp)
0814373c +0x248:  mov    %ecx,(%esp)
0814373f +0x24b:  call   081564f0 <_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh>  ; CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)
08143744 +0x250:  mov    0x8(%ebp),%eax
08143747 +0x253:  mov    0x4(%eax),%eax
0814374a +0x256:  mov    0xcd8(%eax),%eax
08143750 +0x25c:  cmp    $0x1,%eax
08143753 +0x25f:  je     08143773 <+0x27f>
08143755 +0x261:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
0814375a +0x266:  movl   $0x0,0x8(%esp)
08143762 +0x26e:  mov    0x10(%ebp),%edx
08143765 +0x271:  mov    %edx,0x4(%esp)
08143769 +0x275:  mov    %eax,(%esp)
0814376c +0x278:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
08143771 +0x27d:  jmp    0814378f <+0x29b>
08143773 +0x27f:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
08143778 +0x284:  movl   $0x1,0x8(%esp)
08143780 +0x28c:  mov    0x10(%ebp),%edx
08143783 +0x28f:  mov    %edx,0x4(%esp)
08143787 +0x293:  mov    %eax,(%esp)
0814378a +0x296:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
0814378f +0x29b:  mov    0x8(%ebp),%eax
08143792 +0x29e:  mov    0x4(%eax),%eax
08143795 +0x2a1:  mov    0xcd8(%eax),%eax
0814379b +0x2a7:  mov    %eax,%esi
0814379d +0x2a9:  mov    0x8(%ebp),%eax
081437a0 +0x2ac:  mov    0xae8(%eax),%eax
081437a6 +0x2b2:  mov    %eax,%ebx
081437a8 +0x2b4:  mov    0x8(%ebp),%eax
081437ab +0x2b7:  mov    0x9f0(%eax),%eax
081437b1 +0x2bd:  mov    %eax,(%esp)
081437b4 +0x2c0:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
081437b9 +0x2c5:  mov    -0x1c(%ebp),%edx
081437bc +0x2c8:  lea    0x79700(%edx),%ecx
081437c2 +0x2ce:  mov    %esi,0x10(%esp)
081437c6 +0x2d2:  lea    -0x138(%ebp),%edx
081437cc +0x2d8:  mov    %edx,0xc(%esp)
081437d0 +0x2dc:  mov    %ebx,0x8(%esp)
081437d4 +0x2e0:  mov    %eax,0x4(%esp)
081437d8 +0x2e4:  mov    %ecx,(%esp)
081437db +0x2e7:  call   086849a2 <_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i>  ; cUserHistoryLog::EnterDungeon(char const*, int, char const*, int)
081437e0 +0x2ec:  jmp    081437e3 <+0x2ef>
081437e2 +0x2ee:  nop
081437e3 +0x2ef:  addl   $0x1,-0x20(%ebp)
081437e7 +0x2f3:  cmpl   $0x3,-0x20(%ebp)
081437eb +0x2f7:  setle  %al
081437ee +0x2fa:  test   %al,%al
081437f0 +0x2fc:  jne    081436be <+0x1ca>
081437f6 +0x302:  mov    0x8(%ebp),%eax
081437f9 +0x305:  mov    0x4(%eax),%eax
081437fc +0x308:  movl   $0x1,0x4(%esp)
08143804 +0x310:  mov    %eax,(%esp)
08143807 +0x313:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
0814380c +0x318:  mov    0x8(%ebp),%eax
0814380f +0x31b:  mov    0x4(%eax),%eax
08143812 +0x31e:  movl   $0x2d,0x4(%esp)
0814381a +0x326:  mov    %eax,(%esp)
0814381d +0x329:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
08143822 +0x32e:  mov    0x8(%ebp),%eax
08143825 +0x331:  mov    0x4(%eax),%eax
08143828 +0x334:  movl   $0xffffffff,0x4(%esp)
08143830 +0x33c:  mov    %eax,(%esp)
08143833 +0x33f:  call   08145828 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2ab>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2ab
08143838 +0x344:  lea    -0x38(%ebp),%eax
0814383b +0x347:  mov    %eax,(%esp)
0814383e +0x34a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08143843 +0x34f:  movl   $0x1e1,0x8(%esp)
0814384b +0x357:  movl   $0x0,0x4(%esp)
08143853 +0x35f:  lea    -0x38(%ebp),%eax
08143856 +0x362:  mov    %eax,(%esp)
08143859 +0x365:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814385e +0x36a:  mov    0x10(%ebp),%eax
08143861 +0x36d:  mov    %eax,0x4(%esp)
08143865 +0x371:  lea    -0x38(%ebp),%eax
08143868 +0x374:  mov    %eax,(%esp)
0814386b +0x377:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08143870 +0x37c:  mov    0x8(%ebp),%eax
08143873 +0x37f:  mov    0xae4(%eax),%eax
08143879 +0x385:  mov    %eax,0x4(%esp)
0814387d +0x389:  lea    -0x38(%ebp),%eax
08143880 +0x38c:  mov    %eax,(%esp)
08143883 +0x38f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08143888 +0x394:  mov    0x8(%ebp),%eax
0814388b +0x397:  mov    0x4(%eax),%eax
0814388e +0x39a:  mov    0xcd8(%eax),%eax
08143894 +0x3a0:  mov    %eax,0x4(%esp)
08143898 +0x3a4:  lea    -0x38(%ebp),%eax
0814389b +0x3a7:  mov    %eax,(%esp)
0814389e +0x3aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081438a3 +0x3af:  movsbl -0x13c(%ebp),%eax
081438aa +0x3b6:  mov    %eax,0x4(%esp)
081438ae +0x3ba:  lea    -0x38(%ebp),%eax
081438b1 +0x3bd:  mov    %eax,(%esp)
081438b4 +0x3c0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081438b9 +0x3c5:  movl   $0x1,0x4(%esp)
081438c1 +0x3cd:  lea    -0x38(%ebp),%eax
081438c4 +0x3d0:  mov    %eax,(%esp)
081438c7 +0x3d3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081438cc +0x3d8:  mov    0x8(%ebp),%eax
081438cf +0x3db:  mov    0x4(%eax),%eax
081438d2 +0x3de:  lea    -0x38(%ebp),%edx
081438d5 +0x3e1:  mov    %edx,0x4(%esp)
081438d9 +0x3e5:  mov    %eax,(%esp)
081438dc +0x3e8:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081438e1 +0x3ed:  mov    0x8(%ebp),%eax
081438e4 +0x3f0:  mov    %eax,(%esp)
081438e7 +0x3f3:  call   0814ce12 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv>  ; WongWork::CBossStage::SendMapInfoPacket()
081438ec +0x3f8:  movl   $0x0,-0x24(%ebp)
081438f3 +0x3ff:  mov    0x8(%ebp),%eax
081438f6 +0x402:  mov    0x4(%eax),%eax
081438f9 +0x405:  mov    %eax,(%esp)
081438fc +0x408:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08143901 +0x40d:  cmp    $0x1,%eax
08143904 +0x410:  sete   %al
08143907 +0x413:  test   %al,%al
08143909 +0x415:  je     08143914 <+0x420>
0814390b +0x417:  movl   $0x5a,-0x24(%ebp)
08143912 +0x41e:  jmp    0814391b <+0x427>
08143914 +0x420:  movl   $0x78,-0x24(%ebp)
0814391b +0x427:  mov    0x8(%ebp),%eax
0814391e +0x42a:  mov    0xaf0(%eax),%ebx
08143924 +0x430:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08143929 +0x435:  movl   $0xa5,0x18(%esp)
08143931 +0x43d:  movl   $0xa5,0x14(%esp)
08143939 +0x445:  mov    -0x24(%ebp),%edx
0814393c +0x448:  mov    %edx,0x10(%esp)
08143940 +0x44c:  movl   $0xa5,0xc(%esp)
08143948 +0x454:  mov    %ebx,0x8(%esp)
0814394c +0x458:  movl   $0x7,0x4(%esp)
08143954 +0x460:  mov    %eax,(%esp)
08143957 +0x463:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0814395c +0x468:  mov    $0x1,%ebx
08143961 +0x46d:  lea    -0x38(%ebp),%eax
08143964 +0x470:  mov    %eax,(%esp)
08143967 +0x473:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814396c +0x478:  jmp    08143989 <+0x495>
0814396e +0x47a:  mov    %edx,%ebx
08143970 +0x47c:  mov    %eax,%esi
08143972 +0x47e:  lea    -0x38(%ebp),%eax
08143975 +0x481:  mov    %eax,(%esp)
08143978 +0x484:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814397d +0x489:  mov    %esi,%eax
0814397f +0x48b:  mov    %ebx,%edx
08143981 +0x48d:  mov    %eax,(%esp)
08143984 +0x490:  call   08ae3750 <_Unwind_Resume>
08143989 +0x495:  mov    %ebx,%eax
0814398b +0x497:  add    $0x15c,%esp
08143991 +0x49d:  pop    %ebx
08143992 +0x49e:  pop    %esi
08143993 +0x49f:  pop    %edi
08143994 +0x4a0:  pop    %ebp
08143995 +0x4a1:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::handleStartGame @ 0x81434f4

/* WongWork::CBossTower::handleStartGame(CParty*, int, char, ENUM_DUNGEON_TYPE) */

undefined4 __thiscall
WongWork::CBossTower::handleStartGame
          (CBossTower *this,CParty *param_1,int param_2,CUser param_3,int param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  CDungeonEntranceLog *pCVar4;
  char *pcVar5;
  TimerQueue *pTVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  CUser local_140;
  char local_13c [256];
  PacketGuard local_3c [15];
  uchar local_2d;
  CUser *local_2c;
  undefined4 local_28;
  int local_24;
  CUser *local_20;
  
  bVar9 = 0;
  local_140 = param_3;
  if (param_5 == 1) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0xcd8) == 1) {
    uVar8 = 0;
  }
  else {
    *(int *)(this + 0xaec) = param_5;
    *(int *)(this + 0xae8) = (int)(char)param_3;
    CBossPlay::reset((CBossPlay *)this);
    CBossStage::reset((CBossStage *)this);
    CBossDungeonEntranceLog::reset((CBossDungeonEntranceLog *)(this + 0xb00));
    *(undefined4 *)(this + 0xae0) = 1;
    cVar3 = InitBossTower((CParty *)this,(int)param_1);
    if (cVar3 == '\x01') {
      local_2d = '\0';
      cVar3 = checkStartGameCondition(this,&local_2d,true);
      if (cVar3 == '\x01') {
        local_2c = (CUser *)CParty::getManager(param_1);
        cVar3 = CUser::isGMUser(local_2c);
        if ((cVar3 != '\0') && (local_2c[0x796cc] != (CUser)0x0)) {
          local_140 = local_2c[0x796cc];
          local_2c[0x796cc] = (CUser)0x0;
        }
        cVar3 = CBossStage::RandomConsistMap((CBossStage *)this,local_2c);
        if (cVar3 == '\x01') {
          CBossPlay::InitPlayUser((CBossPlay *)this,param_2,*(int *)(this + 0xaf0));
          uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          *(undefined4 *)(this + 0xaf4) = uVar8;
          *(undefined4 *)(this + 0xaf8) = 0;
          pcVar5 = local_13c;
          for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
          }
          CParty::_getMemberNames(*(CParty **)(this + 4),local_13c);
          for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
            local_20 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_24);
            if (local_20 == (CUser *)0x0) {
LAB_081436f8:
              bVar2 = true;
            }
            else {
              cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_24);
              if (cVar3 != '\x01') goto LAB_081436f8;
              bVar2 = false;
            }
            if (!bVar2) {
              CBossDungeonEntranceLog::IncrementBossStageStart
                        ((CBossDungeonEntranceLog *)(this + 0xb00),local_20,
                         (uchar)*(undefined4 *)(this + 0xae0),(uchar)*(undefined4 *)(this + 0xae8));
              if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
                pCVar4 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
                CDungeonEntranceLog::IncrementDungeonEntrance(pCVar4,param_2,true);
              }
              else {
                pCVar4 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
                CDungeonEntranceLog::IncrementDungeonEntrance(pCVar4,param_2,false);
              }
              iVar7 = *(int *)(*(int *)(this + 4) + 0xcd8);
              iVar1 = *(int *)(this + 0xae8);
              pcVar5 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x9f0));
              cUserHistoryLog::EnterDungeon
                        ((cUserHistoryLog *)(local_20 + 0x79700),pcVar5,iVar1,local_13c,iVar7);
            }
          }
          CParty::SetEPLPState(*(CParty **)(this + 4),'\x01');
          CParty::gen_timer_key(*(CParty **)(this + 4),0x2d);
          CParty::SetSelectedEPLPCmd(*(CParty **)(this + 4),-1);
          PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08143859 to 0814395b has its CatchHandler @ 0814396e */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x1e1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,*(int *)(this + 0xae4));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_3c,*(int *)(*(int *)(this + 4) + 0xcd8));
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)(char)local_140);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
          CParty::send_to_party(*(CParty **)(this + 4),local_3c);
          CBossStage::SendMapInfoPacket((CBossStage *)this);
          local_28 = 0;
          iVar7 = CParty::get_member_count(*(CParty **)(this + 4));
          if (iVar7 == 1) {
            local_28 = 0x5a;
          }
          else {
            local_28 = 0x78;
          }
          uVar8 = *(undefined4 *)(this + 0xaf0);
          pTVar6 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar6,7,uVar8,0xa5,local_28,0xa5,0xa5);
          uVar8 = 1;
          PacketGuard::~PacketGuard(local_3c);
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}
```
