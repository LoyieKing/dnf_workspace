# party_dungeon_fail

`_ZN6CParty18party_dungeon_failEv`

`CParty::party_dungeon_fail()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3670  _ZN6CParty18party_dungeon_failEv
#           CParty::party_dungeon_fail()
# range [0x085b3670, 0x085b3c8f]
085b3670 +0x000:  push   %ebp
085b3671 +0x001:  mov    %esp,%ebp
085b3673 +0x003:  push   %edi
085b3674 +0x004:  push   %esi
085b3675 +0x005:  push   %ebx
085b3676 +0x006:  sub    $0x6c,%esp
085b3679 +0x009:  mov    0x8(%ebp),%eax
085b367c +0x00c:  movzbl 0x11a(%eax),%eax
085b3683 +0x013:  test   %al,%al
085b3685 +0x015:  jne    085b3c81 <+0x611>
085b368b +0x01b:  mov    0x8(%ebp),%eax
085b368e +0x01e:  mov    %eax,(%esp)
085b3691 +0x021:  call   085b2b52 <_ZN6CParty19check_allmember_dieEv>  ; CParty::check_allmember_die()
085b3696 +0x026:  xor    $0x1,%eax
085b3699 +0x029:  test   %al,%al
085b369b +0x02b:  jne    085b3c84 <+0x614>
085b36a1 +0x031:  mov    0x8(%ebp),%eax
085b36a4 +0x034:  mov    0xcac(%eax),%eax
085b36aa +0x03a:  test   %eax,%eax
085b36ac +0x03c:  je     085b3c87 <+0x617>
085b36b2 +0x042:  movb   $0x0,-0x2d(%ebp)
085b36b6 +0x046:  mov    0x8(%ebp),%eax
085b36b9 +0x049:  mov    0xcac(%eax),%eax
085b36bf +0x04f:  mov    %eax,-0x2c(%ebp)
085b36c2 +0x052:  cmpl   $0x0,-0x2c(%ebp)
085b36c6 +0x056:  je     085b36ed <+0x7d>
085b36c8 +0x058:  mov    -0x2c(%ebp),%eax
085b36cb +0x05b:  movzbl 0x89f(%eax),%eax
085b36d2 +0x062:  test   %al,%al
085b36d4 +0x064:  jle    085b36da <+0x6a>
085b36d6 +0x066:  movb   $0x1,-0x2d(%ebp)
085b36da +0x06a:  mov    -0x2c(%ebp),%eax
085b36dd +0x06d:  mov    %eax,(%esp)
085b36e0 +0x070:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085b36e5 +0x075:  test   %al,%al
085b36e7 +0x077:  je     085b36ed <+0x7d>
085b36e9 +0x079:  movb   $0x1,-0x2d(%ebp)
085b36ed +0x07d:  mov    0x8(%ebp),%eax
085b36f0 +0x080:  movzwl 0xc4c(%eax),%eax
085b36f7 +0x087:  test   %ax,%ax
085b36fa +0x08a:  je     085b3700 <+0x90>
085b36fc +0x08c:  movb   $0x1,-0x2d(%ebp)
085b3700 +0x090:  cmpl   $0x0,-0x2c(%ebp)
085b3704 +0x094:  je     085b3737 <+0xc7>
085b3706 +0x096:  mov    -0x2c(%ebp),%eax
085b3709 +0x099:  mov    %eax,(%esp)
085b370c +0x09c:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085b3711 +0x0a1:  test   %al,%al
085b3713 +0x0a3:  jg     085b3723 <+0xb3>
085b3715 +0x0a5:  mov    -0x2c(%ebp),%eax
085b3718 +0x0a8:  movzbl 0x89c(%eax),%eax
085b371f +0x0af:  test   %al,%al
085b3721 +0x0b1:  je     085b372a <+0xba>
085b3723 +0x0b3:  mov    $0x1,%eax
085b3728 +0x0b8:  jmp    085b372f <+0xbf>
085b372a +0x0ba:  mov    $0x0,%eax
085b372f +0x0bf:  test   %al,%al
085b3731 +0x0c1:  je     085b3737 <+0xc7>
085b3733 +0x0c3:  movb   $0x1,-0x2d(%ebp)
085b3737 +0x0c7:  mov    0x8(%ebp),%eax
085b373a +0x0ca:  mov    0xcac(%eax),%eax
085b3740 +0x0d0:  mov    %eax,(%esp)
085b3743 +0x0d3:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085b3748 +0x0d8:  test   %al,%al
085b374a +0x0da:  je     085b3778 <+0x108>
085b374c +0x0dc:  mov    0x8(%ebp),%eax
085b374f +0x0df:  add    $0x17bc,%eax
085b3754 +0x0e4:  mov    %eax,(%esp)
085b3757 +0x0e7:  call   08284820 <_ZN24CTournamentDungeonReward11ResetRewardEv>  ; CTournamentDungeonReward::ResetReward()
085b375c +0x0ec:  mov    0x8(%ebp),%eax
085b375f +0x0ef:  add    $0x17bc,%eax
085b3764 +0x0f4:  mov    %eax,0x4(%esp)
085b3768 +0x0f8:  mov    0x8(%ebp),%eax
085b376b +0x0fb:  mov    %eax,(%esp)
085b376e +0x0fe:  call   085bcb40 <_ZN6CParty20MakeTournamentRewardER24CTournamentDungeonReward>  ; CParty::MakeTournamentReward(CTournamentDungeonReward&)
085b3773 +0x103:  jmp    085b3c88 <+0x618>
085b3778 +0x108:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b377f +0x10f:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085b3784 +0x114:  mov    $0x0,%edx
085b3789 +0x119:  mov    0x8(%ebp),%ecx
085b378c +0x11c:  mov    0x350(%ecx),%ebx
085b3792 +0x122:  mov    0x34c(%ecx),%ecx
085b3798 +0x128:  sub    %ecx,%eax
085b379a +0x12a:  sbb    %ebx,%edx
085b379c +0x12c:  mov    0x8(%ebp),%ecx
085b379f +0x12f:  mov    0x35c(%ecx),%ebx
085b37a5 +0x135:  mov    0x358(%ecx),%ecx
085b37ab +0x13b:  sub    %ecx,%eax
085b37ad +0x13d:  sbb    %ebx,%edx
085b37af +0x13f:  mov    0x8(%ebp),%ecx
085b37b2 +0x142:  mov    %eax,0x32c(%ecx)
085b37b8 +0x148:  mov    %edx,0x330(%ecx)
085b37be +0x14e:  movl   $0x2,0x4(%esp)
085b37c6 +0x156:  mov    0x8(%ebp),%eax
085b37c9 +0x159:  mov    %eax,(%esp)
085b37cc +0x15c:  call   085b3520 <_ZN6CParty8SaveCoinE14eCoinSubReason>  ; CParty::SaveCoin(eCoinSubReason)
085b37d1 +0x161:  mov    0x8(%ebp),%eax
085b37d4 +0x164:  mov    %eax,(%esp)
085b37d7 +0x167:  call   085bb0ac <_ZN6CParty24CheckHackAverageHitCountEv>  ; CParty::CheckHackAverageHitCount()
085b37dc +0x16c:  mov    0x8(%ebp),%eax
085b37df +0x16f:  add    $0x1abc,%eax
085b37e4 +0x174:  mov    %eax,(%esp)
085b37e7 +0x177:  call   0827aaca <_ZN24Secu_HackLogCheckByParty11dungeonFailEv>  ; Secu_HackLogCheckByParty::dungeonFail()
085b37ec +0x17c:  lea    -0x4c(%ebp),%eax
085b37ef +0x17f:  mov    %eax,(%esp)
085b37f2 +0x182:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b37f7 +0x187:  movl   $0x0,-0x28(%ebp)
085b37fe +0x18e:  jmp    085b39c1 <+0x351>
085b3803 +0x193:  mov    -0x28(%ebp),%eax
085b3806 +0x196:  mov    %eax,0x4(%esp)
085b380a +0x19a:  mov    0x8(%ebp),%eax
085b380d +0x19d:  mov    %eax,(%esp)
085b3810 +0x1a0:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b3815 +0x1a5:  test   %al,%al
085b3817 +0x1a7:  je     085b39bd <+0x34d>
085b381d +0x1ad:  mov    -0x28(%ebp),%edx
085b3820 +0x1b0:  mov    0x8(%ebp),%ecx
085b3823 +0x1b3:  mov    %edx,%eax
085b3825 +0x1b5:  add    %eax,%eax
085b3827 +0x1b7:  add    %edx,%eax
085b3829 +0x1b9:  shl    $0x3,%eax
085b382c +0x1bc:  lea    (%ecx,%eax,1),%eax
085b382f +0x1bf:  add    $0x78,%eax
085b3832 +0x1c2:  mov    (%eax),%eax
085b3834 +0x1c4:  mov    %eax,0x4(%esp)
085b3838 +0x1c8:  mov    0x8(%ebp),%eax
085b383b +0x1cb:  mov    %eax,(%esp)
085b383e +0x1ce:  call   085bf7da <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd38>  ; global constructors keyed to CParty::cMember::cMember()+0xd38
085b3843 +0x1d3:  mov    -0x28(%ebp),%edx
085b3846 +0x1d6:  mov    0x8(%ebp),%ecx
085b3849 +0x1d9:  mov    %edx,%eax
085b384b +0x1db:  add    %eax,%eax
085b384d +0x1dd:  add    %edx,%eax
085b384f +0x1df:  shl    $0x3,%eax
085b3852 +0x1e2:  lea    (%ecx,%eax,1),%eax
085b3855 +0x1e5:  add    $0x78,%eax
085b3858 +0x1e8:  mov    (%eax),%ebx
085b385a +0x1ea:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b385f +0x1ef:  mov    %ebx,0x4(%esp)
085b3863 +0x1f3:  mov    %eax,(%esp)
085b3866 +0x1f6:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085b386b +0x1fb:  mov    -0x28(%ebp),%edx
085b386e +0x1fe:  mov    0x8(%ebp),%ecx
085b3871 +0x201:  mov    %edx,%eax
085b3873 +0x203:  add    %eax,%eax
085b3875 +0x205:  add    %edx,%eax
085b3877 +0x207:  shl    $0x3,%eax
085b387a +0x20a:  lea    (%ecx,%eax,1),%eax
085b387d +0x20d:  add    $0x78,%eax
085b3880 +0x210:  mov    (%eax),%eax
085b3882 +0x212:  mov    %eax,(%esp)
085b3885 +0x215:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085b388a +0x21a:  cmp    $0x1,%eax
085b388d +0x21d:  setne  %al
085b3890 +0x220:  test   %al,%al
085b3892 +0x222:  je     085b38c0 <+0x250>
085b3894 +0x224:  mov    0x8(%ebp),%eax
085b3897 +0x227:  mov    0xcac(%eax),%eax
085b389d +0x22d:  mov    %eax,(%esp)
085b38a0 +0x230:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b38a5 +0x235:  mov    %eax,%ebx
085b38a7 +0x237:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
085b38ac +0x23c:  movl   $0x0,0x8(%esp)
085b38b4 +0x244:  mov    %ebx,0x4(%esp)
085b38b8 +0x248:  mov    %eax,(%esp)
085b38bb +0x24b:  call   0860e324 <_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib>  ; CDungeonEntranceLog::DecrementDungeonEntrance(int, bool)
085b38c0 +0x250:  mov    -0x28(%ebp),%edx
085b38c3 +0x253:  mov    0x8(%ebp),%ecx
085b38c6 +0x256:  mov    %edx,%eax
085b38c8 +0x258:  add    %eax,%eax
085b38ca +0x25a:  add    %edx,%eax
085b38cc +0x25c:  shl    $0x3,%eax
085b38cf +0x25f:  lea    (%ecx,%eax,1),%eax
085b38d2 +0x262:  add    $0x78,%eax
085b38d5 +0x265:  mov    (%eax),%eax
085b38d7 +0x267:  mov    %eax,(%esp)
085b38da +0x26a:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085b38df +0x26f:  cmp    $0x1,%eax
085b38e2 +0x272:  sete   %al
085b38e5 +0x275:  test   %al,%al
085b38e7 +0x277:  je     085b3937 <+0x2c7>
085b38e9 +0x279:  mov    -0x28(%ebp),%edx
085b38ec +0x27c:  mov    0x8(%ebp),%ecx
085b38ef +0x27f:  mov    %edx,%eax
085b38f1 +0x281:  add    %eax,%eax
085b38f3 +0x283:  add    %edx,%eax
085b38f5 +0x285:  shl    $0x3,%eax
085b38f8 +0x288:  lea    (%ecx,%eax,1),%eax
085b38fb +0x28b:  add    $0x78,%eax
085b38fe +0x28e:  mov    (%eax),%eax
085b3900 +0x290:  mov    %eax,(%esp)
085b3903 +0x293:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
085b3908 +0x298:  mov    %eax,-0x24(%ebp)
085b390b +0x29b:  cmpl   $0x0,-0x24(%ebp)
085b390f +0x29f:  je     085b3937 <+0x2c7>
085b3911 +0x2a1:  mov    -0x28(%ebp),%edx
085b3914 +0x2a4:  mov    0x8(%ebp),%ecx
085b3917 +0x2a7:  mov    %edx,%eax
085b3919 +0x2a9:  add    %eax,%eax
085b391b +0x2ab:  add    %edx,%eax
085b391d +0x2ad:  shl    $0x3,%eax
085b3920 +0x2b0:  lea    (%ecx,%eax,1),%eax
085b3923 +0x2b3:  add    $0x78,%eax
085b3926 +0x2b6:  mov    (%eax),%eax
085b3928 +0x2b8:  mov    %eax,0x4(%esp)
085b392c +0x2bc:  mov    -0x24(%ebp),%eax
085b392f +0x2bf:  mov    %eax,(%esp)
085b3932 +0x2c2:  call   080d9572 <_ZN10BlueMarble13giveupDungeonEP5CUser>  ; BlueMarble::giveupDungeon(CUser*)
085b3937 +0x2c7:  mov    0x8(%ebp),%eax
085b393a +0x2ca:  mov    0xcd8(%eax),%eax
085b3940 +0x2d0:  cmp    $0x1,%eax
085b3943 +0x2d3:  je     085b39bd <+0x34d>
085b3945 +0x2d5:  movb   $0x0,-0x1e(%ebp)
085b3949 +0x2d9:  cmpl   $0x0,-0x2c(%ebp)
085b394d +0x2dd:  je     085b3961 <+0x2f1>
085b394f +0x2df:  mov    -0x2c(%ebp),%eax
085b3952 +0x2e2:  movzbl 0x85c(%eax),%eax
085b3959 +0x2e9:  test   %al,%al
085b395b +0x2eb:  je     085b3961 <+0x2f1>
085b395d +0x2ed:  movb   $0x1,-0x1e(%ebp)
085b3961 +0x2f1:  movb   $0x0,-0x1d(%ebp)
085b3965 +0x2f5:  cmpl   $0x0,-0x2c(%ebp)
085b3969 +0x2f9:  je     085b397d <+0x30d>
085b396b +0x2fb:  mov    -0x2c(%ebp),%eax
085b396e +0x2fe:  movzbl 0x87a(%eax),%eax
085b3975 +0x305:  test   %al,%al
085b3977 +0x307:  je     085b397d <+0x30d>
085b3979 +0x309:  movb   $0x1,-0x1d(%ebp)
085b397d +0x30d:  movzbl -0x2d(%ebp),%eax
085b3981 +0x311:  xor    $0x1,%eax
085b3984 +0x314:  test   %al,%al
085b3986 +0x316:  je     085b39bd <+0x34d>
085b3988 +0x318:  movzbl -0x1e(%ebp),%eax
085b398c +0x31c:  xor    $0x1,%eax
085b398f +0x31f:  test   %al,%al
085b3991 +0x321:  je     085b39bd <+0x34d>
085b3993 +0x323:  movzbl -0x1d(%ebp),%eax
085b3997 +0x327:  xor    $0x1,%eax
085b399a +0x32a:  test   %al,%al
085b399c +0x32c:  je     085b39bd <+0x34d>
085b399e +0x32e:  mov    -0x28(%ebp),%edx
085b39a1 +0x331:  mov    0x8(%ebp),%ecx
085b39a4 +0x334:  mov    %edx,%eax
085b39a6 +0x336:  add    %eax,%eax
085b39a8 +0x338:  add    %edx,%eax
085b39aa +0x33a:  shl    $0x3,%eax
085b39ad +0x33d:  lea    (%ecx,%eax,1),%eax
085b39b0 +0x340:  add    $0x78,%eax
085b39b3 +0x343:  mov    (%eax),%eax
085b39b5 +0x345:  mov    %eax,(%esp)
085b39b8 +0x348:  call   086786be <_ZN5CUser14giveup_panaltyEv>  ; CUser::giveup_panalty()
085b39bd +0x34d:  addl   $0x1,-0x28(%ebp)
085b39c1 +0x351:  cmpl   $0x3,-0x28(%ebp)
085b39c5 +0x355:  setle  %al
085b39c8 +0x358:  test   %al,%al
085b39ca +0x35a:  jne    085b3803 <+0x193>
085b39d0 +0x360:  lea    -0x4c(%ebp),%eax
085b39d3 +0x363:  mov    %eax,(%esp)
085b39d6 +0x366:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b39db +0x36b:  movl   $0x2,0x8(%esp)
085b39e3 +0x373:  movl   $0x0,0x4(%esp)
085b39eb +0x37b:  lea    -0x4c(%ebp),%eax
085b39ee +0x37e:  mov    %eax,(%esp)
085b39f1 +0x381:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b39f6 +0x386:  movl   $0x0,0x4(%esp)
085b39fe +0x38e:  lea    -0x4c(%ebp),%eax
085b3a01 +0x391:  mov    %eax,(%esp)
085b3a04 +0x394:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b3a09 +0x399:  mov    0x8(%ebp),%eax
085b3a0c +0x39c:  mov    %eax,(%esp)
085b3a0f +0x39f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b3a14 +0x3a4:  mov    %eax,0x4(%esp)
085b3a18 +0x3a8:  lea    -0x4c(%ebp),%eax
085b3a1b +0x3ab:  mov    %eax,(%esp)
085b3a1e +0x3ae:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b3a23 +0x3b3:  mov    0x8(%ebp),%eax
085b3a26 +0x3b6:  movzbl 0x13c(%eax),%eax
085b3a2d +0x3bd:  test   %al,%al
085b3a2f +0x3bf:  je     085b3b93 <+0x523>
085b3a35 +0x3c5:  mov    0x8(%ebp),%eax
085b3a38 +0x3c8:  mov    0x74(%eax),%eax
085b3a3b +0x3cb:  mov    %eax,(%esp)
085b3a3e +0x3ce:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
085b3a43 +0x3d3:  movswl %ax,%edi
085b3a46 +0x3d6:  mov    0x8(%ebp),%eax
085b3a49 +0x3d9:  mov    0x74(%eax),%eax
085b3a4c +0x3dc:  mov    %eax,(%esp)
085b3a4f +0x3df:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085b3a54 +0x3e4:  mov    %eax,%esi
085b3a56 +0x3e6:  mov    0x8(%ebp),%eax
085b3a59 +0x3e9:  mov    0x74(%eax),%eax
085b3a5c +0x3ec:  mov    %eax,(%esp)
085b3a5f +0x3ef:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085b3a64 +0x3f4:  movl   $0x0,0x4(%esp)
085b3a6c +0x3fc:  mov    %eax,(%esp)
085b3a6f +0x3ff:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085b3a74 +0x404:  mov    %eax,%ebx
085b3a76 +0x406:  movl   $0x0,0xc(%esp)
085b3a7e +0x40e:  movl   $0x3541,0x8(%esp)
085b3a86 +0x416:  movl   $&_ZZN6CParty18party_dungeon_failEvE19__PRETTY_FUNCTION__,0x4(%esp)
085b3a8e +0x41e:  lea    -0x40(%ebp),%eax
085b3a91 +0x421:  mov    %eax,(%esp)
085b3a94 +0x424:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b3a99 +0x429:  mov    %edi,0x10(%esp)
085b3a9d +0x42d:  mov    %esi,0xc(%esp)
085b3aa1 +0x431:  mov    %ebx,0x8(%esp)
085b3aa5 +0x435:  movl   $"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",0x4(%esp)
085b3aad +0x43d:  lea    -0x40(%ebp),%eax
085b3ab0 +0x440:  mov    %eax,(%esp)
085b3ab3 +0x443:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b3ab8 +0x448:  mov    0x8(%ebp),%eax
085b3abb +0x44b:  mov    0x74(%eax),%eax
085b3abe +0x44e:  movl   $0xffffffff,0x4(%esp)
085b3ac6 +0x456:  mov    %eax,(%esp)
085b3ac9 +0x459:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
085b3ace +0x45e:  mov    0x8(%ebp),%eax
085b3ad1 +0x461:  mov    %eax,(%esp)
085b3ad4 +0x464:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085b3ad9 +0x469:  mov    %eax,(%esp)
085b3adc +0x46c:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085b3ae1 +0x471:  cmp    $0x1,%eax
085b3ae4 +0x474:  setne  %al
085b3ae7 +0x477:  test   %al,%al
085b3ae9 +0x479:  je     085b3b01 <+0x491>
085b3aeb +0x47b:  mov    0x8(%ebp),%eax
085b3aee +0x47e:  mov    0x74(%eax),%eax
085b3af1 +0x481:  movl   $0x3,0x4(%esp)
085b3af9 +0x489:  mov    %eax,(%esp)
085b3afc +0x48c:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
085b3b01 +0x491:  lea    -0x4c(%ebp),%edx
085b3b04 +0x494:  mov    0x8(%ebp),%eax
085b3b07 +0x497:  mov    0x74(%eax),%eax
085b3b0a +0x49a:  movl   $0x0,0x8(%esp)
085b3b12 +0x4a2:  mov    %edx,0x4(%esp)
085b3b16 +0x4a6:  mov    %eax,(%esp)
085b3b19 +0x4a9:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085b3b1e +0x4ae:  mov    0x8(%ebp),%eax
085b3b21 +0x4b1:  mov    %eax,(%esp)
085b3b24 +0x4b4:  call   0859ad4c <_ZN6CParty7destroyEv>  ; CParty::destroy()
085b3b29 +0x4b9:  movl   $0x1,0x4(%esp)
085b3b31 +0x4c1:  lea    -0x4c(%ebp),%eax
085b3b34 +0x4c4:  mov    %eax,(%esp)
085b3b37 +0x4c7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b3b3c +0x4cc:  mov    0x8(%ebp),%eax
085b3b3f +0x4cf:  mov    %eax,(%esp)
085b3b42 +0x4d2:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085b3b47 +0x4d7:  mov    %eax,(%esp)
085b3b4a +0x4da:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085b3b4f +0x4df:  cmp    $0x1,%eax
085b3b52 +0x4e2:  setne  %al
085b3b55 +0x4e5:  test   %al,%al
085b3b57 +0x4e7:  je     085b3b7c <+0x50c>
085b3b59 +0x4e9:  mov    0x8(%ebp),%eax
085b3b5c +0x4ec:  mov    0x74(%eax),%ebx
085b3b5f +0x4ef:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b3b64 +0x4f4:  mov    %ebx,0x8(%esp)
085b3b68 +0x4f8:  lea    -0x4c(%ebp),%edx
085b3b6b +0x4fb:  mov    %edx,0x4(%esp)
085b3b6f +0x4ff:  mov    %eax,(%esp)
085b3b72 +0x502:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
085b3b77 +0x507:  jmp    085b3c74 <+0x604>
085b3b7c +0x50c:  lea    -0x4c(%ebp),%eax
085b3b7f +0x50f:  mov    %eax,0x4(%esp)
085b3b83 +0x513:  mov    0x8(%ebp),%eax
085b3b86 +0x516:  mov    %eax,(%esp)
085b3b89 +0x519:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b3b8e +0x51e:  jmp    085b3c74 <+0x604>
085b3b93 +0x523:  movl   $0x0,-0x1c(%ebp)
085b3b9a +0x52a:  jmp    085b3be4 <+0x574>
085b3b9c +0x52c:  mov    -0x1c(%ebp),%eax
085b3b9f +0x52f:  mov    %eax,0x4(%esp)
085b3ba3 +0x533:  mov    0x8(%ebp),%eax
085b3ba6 +0x536:  mov    %eax,(%esp)
085b3ba9 +0x539:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b3bae +0x53e:  test   %al,%al
085b3bb0 +0x540:  je     085b3be0 <+0x570>
085b3bb2 +0x542:  lea    -0x4c(%ebp),%ecx
085b3bb5 +0x545:  mov    -0x1c(%ebp),%edx
085b3bb8 +0x548:  mov    0x8(%ebp),%ebx
085b3bbb +0x54b:  mov    %edx,%eax
085b3bbd +0x54d:  add    %eax,%eax
085b3bbf +0x54f:  add    %edx,%eax
085b3bc1 +0x551:  shl    $0x3,%eax
085b3bc4 +0x554:  lea    (%ebx,%eax,1),%eax
085b3bc7 +0x557:  add    $0x78,%eax
085b3bca +0x55a:  mov    (%eax),%eax
085b3bcc +0x55c:  movl   $0x0,0x8(%esp)
085b3bd4 +0x564:  mov    %ecx,0x4(%esp)
085b3bd8 +0x568:  mov    %eax,(%esp)
085b3bdb +0x56b:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085b3be0 +0x570:  addl   $0x1,-0x1c(%ebp)
085b3be4 +0x574:  cmpl   $0x3,-0x1c(%ebp)
085b3be8 +0x578:  setle  %al
085b3beb +0x57b:  test   %al,%al
085b3bed +0x57d:  jne    085b3b9c <+0x52c>
085b3bef +0x57f:  movl   $0x1,0x4(%esp)
085b3bf7 +0x587:  mov    0x8(%ebp),%eax
085b3bfa +0x58a:  mov    %eax,(%esp)
085b3bfd +0x58d:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085b3c02 +0x592:  mov    0x8(%ebp),%eax
085b3c05 +0x595:  mov    %eax,(%esp)
085b3c08 +0x598:  call   0859aec2 <_ZN6CParty17battle_data_resetEv>  ; CParty::battle_data_reset()
085b3c0d +0x59d:  movl   $0x1,0x4(%esp)
085b3c15 +0x5a5:  lea    -0x4c(%ebp),%eax
085b3c18 +0x5a8:  mov    %eax,(%esp)
085b3c1b +0x5ab:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b3c20 +0x5b0:  mov    0x8(%ebp),%eax
085b3c23 +0x5b3:  mov    %eax,(%esp)
085b3c26 +0x5b6:  call   085b6410 <_ZN6CParty16IsExistInvisibleEv>  ; CParty::IsExistInvisible()
085b3c2b +0x5bb:  test   %al,%al
085b3c2d +0x5bd:  je     085b3c43 <+0x5d3>
085b3c2f +0x5bf:  lea    -0x4c(%ebp),%eax
085b3c32 +0x5c2:  mov    %eax,0x4(%esp)
085b3c36 +0x5c6:  mov    0x8(%ebp),%eax
085b3c39 +0x5c9:  mov    %eax,(%esp)
085b3c3c +0x5cc:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b3c41 +0x5d1:  jmp    085b3c74 <+0x604>
085b3c43 +0x5d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b3c48 +0x5d8:  lea    -0x4c(%ebp),%edx
085b3c4b +0x5db:  mov    %edx,0x4(%esp)
085b3c4f +0x5df:  mov    %eax,(%esp)
085b3c52 +0x5e2:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085b3c57 +0x5e7:  jmp    085b3c74 <+0x604>
085b3c59 +0x5e9:  mov    %edx,%ebx
085b3c5b +0x5eb:  mov    %eax,%esi
085b3c5d +0x5ed:  lea    -0x4c(%ebp),%eax
085b3c60 +0x5f0:  mov    %eax,(%esp)
085b3c63 +0x5f3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b3c68 +0x5f8:  mov    %esi,%eax
085b3c6a +0x5fa:  mov    %ebx,%edx
085b3c6c +0x5fc:  mov    %eax,(%esp)
085b3c6f +0x5ff:  call   08ae3750 <_Unwind_Resume>
085b3c74 +0x604:  lea    -0x4c(%ebp),%eax
085b3c77 +0x607:  mov    %eax,(%esp)
085b3c7a +0x60a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b3c7f +0x60f:  jmp    085b3c88 <+0x618>
085b3c81 +0x611:  nop
085b3c82 +0x612:  jmp    085b3c88 <+0x618>
085b3c84 +0x614:  nop
085b3c85 +0x615:  jmp    085b3c88 <+0x618>
085b3c87 +0x617:  nop
085b3c88 +0x618:  add    $0x6c,%esp
085b3c8b +0x61b:  pop    %ebx
085b3c8c +0x61c:  pop    %esi
085b3c8d +0x61d:  pop    %edi
085b3c8e +0x61e:  pop    %ebp
085b3c8f +0x61f:  ret
```

## 反编译 C

```c
// CParty::party_dungeon_fail @ 0x85b3670

/* CParty::party_dungeon_fail() */

void __thiscall CParty::party_dungeon_fail(CParty *this)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CUser *pCVar9;
  GameWorld *pGVar10;
  PacketGuard local_50 [12];
  cMyTrace local_44 [19];
  char local_31;
  CDungeon *local_30;
  int local_2c;
  BlueMarble *local_28;
  char local_22;
  char local_21;
  int local_20;
  
  if (((this[0x11a] == (CParty)0x0) && (cVar1 = check_allmember_die(this), cVar1 == '\x01')) &&
     (*(int *)(this + 0xcac) != 0)) {
    local_31 = '\0';
    local_30 = *(CDungeon **)(this + 0xcac);
    if (local_30 != (CDungeon *)0x0) {
      local_31 = '\0' < (char)local_30[0x89f];
      cVar1 = CDungeon::isTowerOfDespairDungeon(local_30);
      if (cVar1 != '\0') {
        local_31 = '\x01';
      }
    }
    if (*(short *)(this + 0xc4c) != 0) {
      local_31 = '\x01';
    }
    if (local_30 != (CDungeon *)0x0) {
      cVar1 = CDungeon::get_dimension_possible(local_30);
      if ((cVar1 < '\x01') && (local_30[0x89c] == (CDungeon)0x0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_31 = '\x01';
      }
    }
    cVar1 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0xcac));
    if (cVar1 == '\0') {
      uVar4 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
      uVar5 = uVar4 - *(uint *)(this + 0x34c);
      *(uint *)(this + 0x32c) = uVar5 - *(uint *)(this + 0x358);
      *(uint *)(this + 0x330) =
           ((-(uint)(uVar4 < *(uint *)(this + 0x34c)) - *(int *)(this + 0x350)) -
           *(int *)(this + 0x35c)) - (uint)(uVar5 < *(uint *)(this + 0x358));
      SaveCoin(this,2);
      CheckHackAverageHitCount(this);
      Secu_HackLogCheckByParty::dungeonFail((Secu_HackLogCheckByParty *)(this + 0x1abc));
      PacketGuard::PacketGuard(local_50);
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
                    /* try { // try from 085b3810 to 085b3c56 has its CatchHandler @ 085b3c59 */
        cVar1 = _checkValidUser(this,local_2c);
        if (cVar1 != '\0') {
          OnFailedDungeonClear(this,*(CUser **)(this + local_2c * 0x18 + 0x78));
          pCVar9 = *(CUser **)(this + local_2c * 0x18 + 0x78);
          pGVar10 = (GameWorld *)G_GameWorld();
          GameWorld::out_from_dungeon(pGVar10,pCVar9);
          iVar6 = CUser::getMoveSpace(*(CUser **)(this + local_2c * 0x18 + 0x78));
          if (iVar6 != 1) {
            bVar2 = (bool)CDungeon::get_index(*(CDungeon **)(this + 0xcac));
            iVar6 = GetInstanceDungeonEntranceLog();
            CDungeonEntranceLog::DecrementDungeonEntrance(iVar6,bVar2);
          }
          iVar6 = CUser::getMoveSpace(*(CUser **)(this + local_2c * 0x18 + 0x78));
          if ((iVar6 == 1) &&
             (local_28 = (BlueMarble *)
                         CUser::getBlueMarble(*(CUser **)(this + local_2c * 0x18 + 0x78)),
             local_28 != (BlueMarble *)0x0)) {
            BlueMarble::giveupDungeon(local_28,*(CUser **)(this + local_2c * 0x18 + 0x78));
          }
          if (*(int *)(this + 0xcd8) != 1) {
            local_22 = '\0';
            if ((local_30 != (CDungeon *)0x0) && (local_30[0x85c] != (CDungeon)0x0)) {
              local_22 = '\x01';
            }
            local_21 = '\0';
            if ((local_30 != (CDungeon *)0x0) && (local_30[0x87a] != (CDungeon)0x0)) {
              local_21 = '\x01';
            }
            if (((local_31 != '\x01') && (local_22 != '\x01')) && (local_21 != '\x01')) {
              CUser::giveup_panalty(*(CUser **)(this + local_2c * 0x18 + 0x78));
            }
          }
        }
      }
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      iVar6 = get_member_count(this);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,iVar6);
      if (this[0x13c] == (CParty)0x0) {
        for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
          cVar1 = _checkValidUser(this,local_20);
          if (cVar1 != '\0') {
            CUser::make_basic_info(*(CUser **)(this + local_20 * 0x18 + 0x78),(char *)local_50,'\0')
            ;
          }
        }
        set_state(this,'\x01');
        battle_data_reset(this);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        cVar1 = IsExistInvisible(this);
        if (cVar1 == '\0') {
          pGVar10 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar10,local_50);
        }
        else {
          send_to_party(this,local_50);
        }
      }
      else {
        sVar3 = CUser::GetPartyIndex(*(CUser **)(this + 0x74));
        uVar7 = CUser::get_state(*(CUser **)(this + 0x74));
        uVar4 = CUser::get_acc_id(*(CUser **)(this + 0x74));
        uVar8 = NumberToString(uVar4,0);
        cMyTrace::cMyTrace(local_44,"void CParty::party_dungeon_fail()",0x3541,0);
        cMyTrace::operator()
                  (local_44,"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",uVar8
                   ,uVar7,(int)sVar3);
        CUser::SetPartyIndex(*(CUser **)(this + 0x74),-1);
        pCVar9 = (CUser *)getManager(this);
        iVar6 = CUser::getMoveSpace(pCVar9);
        if (iVar6 != 1) {
          CUser::set_state(*(CUser **)(this + 0x74),3);
        }
        CUser::make_basic_info(*(CUser **)(this + 0x74),(char *)local_50,'\0');
        destroy(this);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        pCVar9 = (CUser *)getManager(this);
        iVar6 = CUser::getMoveSpace(pCVar9);
        if (iVar6 == 1) {
          send_to_party(this,local_50);
        }
        else {
          pCVar9 = *(CUser **)(this + 0x74);
          pGVar10 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar10,local_50,pCVar9);
        }
      }
      PacketGuard::~PacketGuard(local_50);
    }
    else {
      CTournamentDungeonReward::ResetReward((CTournamentDungeonReward *)(this + 0x17bc));
      MakeTournamentReward(this,(CTournamentDungeonReward *)(this + 0x17bc));
    }
  }
  return;
}
```
