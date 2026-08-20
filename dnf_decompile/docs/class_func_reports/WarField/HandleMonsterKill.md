# HandleMonsterKill

`_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon`

`WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b9672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b9672  _ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon
#           WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, CDungeon const*)
# range [0x086b9672, 0x086b9fe5]
086b9672 +0x000:  push   %ebp
086b9673 +0x001:  mov    %esp,%ebp
086b9675 +0x003:  push   %edi
086b9676 +0x004:  push   %esi
086b9677 +0x005:  push   %ebx
086b9678 +0x006:  sub    $0x1bc,%esp
086b967e +0x00c:  movl   $0xffff,-0x40(%ebp)
086b9685 +0x013:  movl   $0x0,-0x3c(%ebp)
086b968c +0x01a:  cmpl   $0x0,0x18(%ebp)
086b9690 +0x01e:  je     086b9737 <+0xc5>
086b9696 +0x024:  mov    0x18(%ebp),%eax
086b9699 +0x027:  mov    %eax,(%esp)
086b969c +0x02a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086b96a1 +0x02f:  movzwl %ax,%eax
086b96a4 +0x032:  mov    %eax,-0x40(%ebp)
086b96a7 +0x035:  mov    0x18(%ebp),%eax
086b96aa +0x038:  mov    %eax,(%esp)
086b96ad +0x03b:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
086b96b2 +0x040:  mov    %eax,%esi
086b96b4 +0x042:  mov    0x18(%ebp),%eax
086b96b7 +0x045:  mov    %eax,(%esp)
086b96ba +0x048:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086b96bf +0x04d:  mov    %eax,%ebx
086b96c1 +0x04f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b96c6 +0x054:  mov    %esi,0x8(%esp)
086b96ca +0x058:  mov    %ebx,0x4(%esp)
086b96ce +0x05c:  mov    %eax,(%esp)
086b96d1 +0x05f:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
086b96d6 +0x064:  mov    %eax,-0x28(%ebp)
086b96d9 +0x067:  cmpl   $0x0,-0x28(%ebp)
086b96dd +0x06b:  jg     086b971e <+0xac>
086b96df +0x06d:  movl   $0x5,0xc(%esp)
086b96e7 +0x075:  movl   $0x178,0x8(%esp)
086b96ef +0x07d:  movl   $&_ZZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeonE19__PRETTY_FUNCTION__,0x4(%esp)
086b96f7 +0x085:  lea    -0x5c(%ebp),%eax
086b96fa +0x088:  mov    %eax,(%esp)
086b96fd +0x08b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086b9702 +0x090:  mov    -0x28(%ebp),%eax
086b9705 +0x093:  mov    %eax,0x8(%esp)
086b9709 +0x097:  movl   $"WarField::HandleMonsterKill limitMoney(%d) is under 0",0x4(%esp)
086b9711 +0x09f:  lea    -0x5c(%ebp),%eax
086b9714 +0x0a2:  mov    %eax,(%esp)
086b9717 +0x0a5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086b971c +0x0aa:  jmp    086b9737 <+0xc5>
086b971e +0x0ac:  mov    0x18(%ebp),%eax
086b9721 +0x0af:  mov    %eax,(%esp)
086b9724 +0x0b2:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
086b9729 +0x0b7:  imul   $0x64,%eax,%eax
086b972c +0x0ba:  mov    %eax,%edx
086b972e +0x0bc:  sar    $0x1f,%edx
086b9731 +0x0bf:  idivl  -0x28(%ebp)
086b9734 +0x0c2:  mov    %eax,-0x3c(%ebp)
086b9737 +0x0c5:  mov    0x8(%ebp),%eax
086b973a +0x0c8:  add    $0x8,%eax
086b973d +0x0cb:  mov    %eax,-0x38(%ebp)
086b9740 +0x0ce:  mov    -0x38(%ebp),%eax
086b9743 +0x0d1:  lea    0xc(%eax),%ecx
086b9746 +0x0d4:  lea    -0x60(%ebp),%eax
086b9749 +0x0d7:  lea    0xc(%ebp),%edx
086b974c +0x0da:  mov    %edx,0x8(%esp)
086b9750 +0x0de:  mov    %ecx,0x4(%esp)
086b9754 +0x0e2:  mov    %eax,(%esp)
086b9757 +0x0e5:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
086b975c +0x0ea:  sub    $0x4,%esp
086b975f +0x0ed:  mov    -0x38(%ebp),%eax
086b9762 +0x0f0:  lea    0xc(%eax),%edx
086b9765 +0x0f3:  lea    -0x4c(%ebp),%eax
086b9768 +0x0f6:  mov    %edx,0x4(%esp)
086b976c +0x0fa:  mov    %eax,(%esp)
086b976f +0x0fd:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
086b9774 +0x102:  sub    $0x4,%esp
086b9777 +0x105:  lea    -0x4c(%ebp),%eax
086b977a +0x108:  mov    %eax,0x4(%esp)
086b977e +0x10c:  lea    -0x60(%ebp),%eax
086b9781 +0x10f:  mov    %eax,(%esp)
086b9784 +0x112:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
086b9789 +0x117:  test   %al,%al
086b978b +0x119:  je     086b9797 <+0x125>
086b978d +0x11b:  mov    $0x0,%ebx
086b9792 +0x120:  jmp    086b9fd8 <+0x966>
086b9797 +0x125:  lea    -0x60(%ebp),%eax
086b979a +0x128:  mov    %eax,(%esp)
086b979d +0x12b:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
086b97a2 +0x130:  add    $0x4,%eax
086b97a5 +0x133:  mov    %eax,-0x34(%ebp)
086b97a8 +0x136:  mov    -0x34(%ebp),%eax
086b97ab +0x139:  mov    0xc(%eax),%ebx
086b97ae +0x13c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b97b3 +0x141:  mov    %ebx,0x4(%esp)
086b97b7 +0x145:  mov    %eax,(%esp)
086b97ba +0x148:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
086b97bf +0x14d:  mov    %eax,-0x30(%ebp)
086b97c2 +0x150:  cmpl   $0x0,-0x30(%ebp)
086b97c6 +0x154:  jne    086b9808 <+0x196>
086b97c8 +0x156:  mov    -0x34(%ebp),%eax
086b97cb +0x159:  mov    0xc(%eax),%eax
086b97ce +0x15c:  mov    %eax,0x14(%esp)
086b97d2 +0x160:  movl   $"G_CDataManager()->find_monster(%u) fail",0x10(%esp)
086b97da +0x168:  movl   $0x18c,0xc(%esp)
086b97e2 +0x170:  movl   $&_ZZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeonE19__PRETTY_FUNCTION__,0x8(%esp)
086b97ea +0x178:  movl   $"WarField.cpp",0x4(%esp)
086b97f2 +0x180:  movl   $0x1,(%esp)
086b97f9 +0x187:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086b97fe +0x18c:  mov    $0x0,%ebx
086b9803 +0x191:  jmp    086b9fd8 <+0x966>
086b9808 +0x196:  mov    -0x34(%ebp),%eax
086b980b +0x199:  mov    %eax,0x4(%esp)
086b980f +0x19d:  mov    0x14(%ebp),%eax
086b9812 +0x1a0:  mov    %eax,(%esp)
086b9815 +0x1a3:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
086b981a +0x1a8:  mov    0x10(%ebp),%eax
086b981d +0x1ab:  movl   $0x26,0x8(%esp)
086b9825 +0x1b3:  movl   $0x0,0x4(%esp)
086b982d +0x1bb:  mov    %eax,(%esp)
086b9830 +0x1be:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b9835 +0x1c3:  mov    0xc(%ebp),%edx
086b9838 +0x1c6:  mov    0x10(%ebp),%eax
086b983b +0x1c9:  mov    %edx,0x4(%esp)
086b983f +0x1cd:  mov    %eax,(%esp)
086b9842 +0x1d0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b9847 +0x1d5:  lea    -0x68(%ebp),%eax
086b984a +0x1d8:  mov    %eax,(%esp)
086b984d +0x1db:  call   08152a2c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2361>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2361
086b9852 +0x1e0:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086b9859 +0x1e7:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086b985e +0x1ec:  mov    %eax,-0x2c(%ebp)
086b9861 +0x1ef:  lea    -0x110(%ebp),%eax
086b9867 +0x1f5:  mov    %eax,(%esp)
086b986a +0x1f8:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
086b986f +0x1fd:  cmpl   $0x0,0x18(%ebp)
086b9873 +0x201:  je     086b98b1 <+0x23f>
086b9875 +0x203:  movl   $0x64,-0x110(%ebp)
086b987f +0x20d:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
086b9884 +0x212:  movl   $0x1,0x8(%esp)
086b988c +0x21a:  movl   $0x3,0x4(%esp)
086b9894 +0x222:  mov    %eax,(%esp)
086b9897 +0x225:  call   0816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)
086b989c +0x22a:  test   %al,%al
086b989e +0x22c:  je     086b98b1 <+0x23f>
086b98a0 +0x22e:  mov    0x18(%ebp),%eax
086b98a3 +0x231:  mov    %eax,(%esp)
086b98a6 +0x234:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
086b98ab +0x239:  mov    %eax,-0x110(%ebp)
086b98b1 +0x23f:  movb   $0x0,-0xd9(%ebp)
086b98b8 +0x246:  mov    -0x34(%ebp),%eax
086b98bb +0x249:  movzbl 0x10(%eax),%eax
086b98bf +0x24d:  mov    %al,-0xda(%ebp)
086b98c5 +0x253:  mov    -0x34(%ebp),%eax
086b98c8 +0x256:  movzbl 0x8(%eax),%eax
086b98cc +0x25a:  mov    %al,-0xdb(%ebp)
086b98d2 +0x260:  mov    -0x34(%ebp),%eax
086b98d5 +0x263:  movzbl 0x10(%eax),%eax
086b98d9 +0x267:  mov    %al,-0xdc(%ebp)
086b98df +0x26d:  movb   $0x1,-0xd8(%ebp)
086b98e6 +0x274:  mov    -0x34(%ebp),%eax
086b98e9 +0x277:  movzbl 0x12(%eax),%eax
086b98ed +0x27b:  mov    %al,-0xd7(%ebp)
086b98f3 +0x281:  mov    -0x3c(%ebp),%eax
086b98f6 +0x284:  mov    %eax,-0xd4(%ebp)
086b98fc +0x28a:  movb   $0x1,-0xd0(%ebp)
086b9903 +0x291:  movb   $0x0,-0xcf(%ebp)
086b990a +0x298:  lea    -0xc8(%ebp),%eax
086b9910 +0x29e:  mov    %eax,(%esp)
086b9913 +0x2a1:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
086b9918 +0x2a6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b991d +0x2ab:  mov    %eax,(%esp)
086b9920 +0x2ae:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
086b9925 +0x2b3:  movl   $0x0,0x4(%esp)
086b992d +0x2bb:  mov    %eax,(%esp)
086b9930 +0x2be:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
086b9935 +0x2c3:  mov    (%eax),%edx
086b9937 +0x2c5:  add    $0x8,%edx
086b993a +0x2c8:  mov    (%edx),%ecx
086b993c +0x2ca:  lea    -0xc8(%ebp),%edx
086b9942 +0x2d0:  mov    %edx,0x8(%esp)
086b9946 +0x2d4:  lea    -0x110(%ebp),%edx
086b994c +0x2da:  mov    %edx,0x4(%esp)
086b9950 +0x2de:  mov    %eax,(%esp)
086b9953 +0x2e1:  call   *%ecx
086b9955 +0x2e3:  mov    -0x34(%ebp),%eax
086b9958 +0x2e6:  mov    0xc(%eax),%eax
086b995b +0x2e9:  mov    %eax,-0xd8(%ebp)
086b9961 +0x2ef:  mov    -0x34(%ebp),%eax
086b9964 +0x2f2:  movzbl 0x8(%eax),%eax
086b9968 +0x2f6:  mov    %al,-0xd4(%ebp)
086b996e +0x2fc:  mov    -0x34(%ebp),%eax
086b9971 +0x2ff:  movzbl 0x11(%eax),%eax
086b9975 +0x303:  mov    %al,-0xd3(%ebp)
086b997b +0x309:  movb   $0x0,-0xda(%ebp)
086b9982 +0x310:  movb   $0x1,-0xd2(%ebp)
086b9989 +0x317:  mov    -0x34(%ebp),%eax
086b998c +0x31a:  movzbl 0x10(%eax),%eax
086b9990 +0x31e:  mov    %al,-0xdb(%ebp)
086b9996 +0x324:  movb   $0x0,-0xd0(%ebp)
086b999d +0x32b:  movb   $0x0,-0xcf(%ebp)
086b99a4 +0x332:  movb   $0x0,-0xcd(%ebp)
086b99ab +0x339:  movb   $0x0,-0xcc(%ebp)
086b99b2 +0x340:  cmpl   $0x0,0x18(%ebp)
086b99b6 +0x344:  je     086b99ce <+0x35c>
086b99b8 +0x346:  mov    0x18(%ebp),%eax
086b99bb +0x349:  mov    %eax,(%esp)
086b99be +0x34c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
086b99c3 +0x351:  test   %al,%al
086b99c5 +0x353:  je     086b99ce <+0x35c>
086b99c7 +0x355:  mov    $0x1,%eax
086b99cc +0x35a:  jmp    086b99d3 <+0x361>
086b99ce +0x35c:  mov    $0x0,%eax
086b99d3 +0x361:  test   %al,%al
086b99d5 +0x363:  je     086b99e8 <+0x376>
086b99d7 +0x365:  mov    0x18(%ebp),%eax
086b99da +0x368:  mov    %eax,(%esp)
086b99dd +0x36b:  call   0868f716 <_ZN5CUser16getForceDropFlagEv>  ; CUser::getForceDropFlag()
086b99e2 +0x370:  mov    %al,-0xec(%ebp)
086b99e8 +0x376:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b99ed +0x37b:  mov    %eax,(%esp)
086b99f0 +0x37e:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
086b99f5 +0x383:  movl   $0x0,0x4(%esp)
086b99fd +0x38b:  mov    %eax,(%esp)
086b9a00 +0x38e:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
086b9a05 +0x393:  mov    (%eax),%edx
086b9a07 +0x395:  add    $0xc,%edx
086b9a0a +0x398:  mov    (%edx),%ecx
086b9a0c +0x39a:  lea    -0xc8(%ebp),%edx
086b9a12 +0x3a0:  mov    %edx,0x8(%esp)
086b9a16 +0x3a4:  lea    -0x110(%ebp),%edx
086b9a1c +0x3aa:  mov    %edx,0x4(%esp)
086b9a20 +0x3ae:  mov    %eax,(%esp)
086b9a23 +0x3b1:  call   *%ecx
086b9a25 +0x3b3:  mov    0x1c(%ebp),%eax
086b9a28 +0x3b6:  mov    %eax,(%esp)
086b9a2b +0x3b9:  call   0830e604 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1e9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1e9
086b9a30 +0x3be:  mov    %eax,-0xdc(%ebp)
086b9a36 +0x3c4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b9a3b +0x3c9:  mov    %eax,(%esp)
086b9a3e +0x3cc:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
086b9a43 +0x3d1:  movl   $0x4,0x4(%esp)
086b9a4b +0x3d9:  mov    %eax,(%esp)
086b9a4e +0x3dc:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
086b9a53 +0x3e1:  mov    (%eax),%edx
086b9a55 +0x3e3:  add    $0xc,%edx
086b9a58 +0x3e6:  mov    (%edx),%ecx
086b9a5a +0x3e8:  lea    -0xc8(%ebp),%edx
086b9a60 +0x3ee:  mov    %edx,0x8(%esp)
086b9a64 +0x3f2:  lea    -0x110(%ebp),%edx
086b9a6a +0x3f8:  mov    %edx,0x4(%esp)
086b9a6e +0x3fc:  mov    %eax,(%esp)
086b9a71 +0x3ff:  call   *%ecx
086b9a73 +0x401:  movb   $0x1,-0xdc(%ebp)
086b9a7a +0x408:  mov    -0x34(%ebp),%eax
086b9a7d +0x40b:  movzbl 0x10(%eax),%eax
086b9a81 +0x40f:  mov    %al,-0xdb(%ebp)
086b9a87 +0x415:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b9a8c +0x41a:  mov    %eax,(%esp)
086b9a8f +0x41d:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
086b9a94 +0x422:  movl   $0x3,0x4(%esp)
086b9a9c +0x42a:  mov    %eax,(%esp)
086b9a9f +0x42d:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
086b9aa4 +0x432:  mov    (%eax),%edx
086b9aa6 +0x434:  add    $0x8,%edx
086b9aa9 +0x437:  mov    (%edx),%ecx
086b9aab +0x439:  lea    -0xc8(%ebp),%edx
086b9ab1 +0x43f:  mov    %edx,0x8(%esp)
086b9ab5 +0x443:  lea    -0x110(%ebp),%edx
086b9abb +0x449:  mov    %edx,0x4(%esp)
086b9abf +0x44d:  mov    %eax,(%esp)
086b9ac2 +0x450:  call   *%ecx
086b9ac4 +0x452:  lea    -0x8c(%ebp),%eax
086b9aca +0x458:  lea    -0xc8(%ebp),%edx
086b9ad0 +0x45e:  mov    %edx,0x4(%esp)
086b9ad4 +0x462:  mov    %eax,(%esp)
086b9ad7 +0x465:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
086b9adc +0x46a:  sub    $0x4,%esp
086b9adf +0x46d:  lea    -0x90(%ebp),%eax
086b9ae5 +0x473:  lea    -0xc8(%ebp),%edx
086b9aeb +0x479:  mov    %edx,0x4(%esp)
086b9aef +0x47d:  mov    %eax,(%esp)
086b9af2 +0x480:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
086b9af7 +0x485:  sub    $0x4,%esp
086b9afa +0x488:  jmp    086b9c1f <+0x5ad>
086b9aff +0x48d:  lea    -0x164(%ebp),%eax
086b9b05 +0x493:  mov    %eax,(%esp)
086b9b08 +0x496:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
086b9b0d +0x49b:  movb   $0x1,-0x164(%ebp)
086b9b14 +0x4a2:  mov    -0x38(%ebp),%eax
086b9b17 +0x4a5:  mov    0x40(%eax),%eax
086b9b1a +0x4a8:  mov    %eax,-0x160(%ebp)
086b9b20 +0x4ae:  lea    0x1(%eax),%edx
086b9b23 +0x4b1:  mov    -0x38(%ebp),%eax
086b9b26 +0x4b4:  mov    %edx,0x40(%eax)
086b9b29 +0x4b7:  mov    -0x40(%ebp),%eax
086b9b2c +0x4ba:  mov    %ax,-0x15c(%ebp)
086b9b33 +0x4c1:  mov    -0x2c(%ebp),%eax
086b9b36 +0x4c4:  mov    %eax,-0x158(%ebp)
086b9b3c +0x4ca:  lea    -0x8c(%ebp),%eax
086b9b42 +0x4d0:  mov    %eax,(%esp)
086b9b45 +0x4d3:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
086b9b4a +0x4d8:  mov    (%eax),%edx
086b9b4c +0x4da:  mov    %edx,-0x154(%ebp)
086b9b52 +0x4e0:  mov    0x4(%eax),%edx
086b9b55 +0x4e3:  mov    %edx,-0x150(%ebp)
086b9b5b +0x4e9:  mov    0x8(%eax),%edx
086b9b5e +0x4ec:  mov    %edx,-0x14c(%ebp)
086b9b64 +0x4f2:  mov    0xc(%eax),%edx
086b9b67 +0x4f5:  mov    %edx,-0x148(%ebp)
086b9b6d +0x4fb:  mov    0x10(%eax),%edx
086b9b70 +0x4fe:  mov    %edx,-0x144(%ebp)
086b9b76 +0x504:  mov    0x14(%eax),%edx
086b9b79 +0x507:  mov    %edx,-0x140(%ebp)
086b9b7f +0x50d:  mov    0x18(%eax),%edx
086b9b82 +0x510:  mov    %edx,-0x13c(%ebp)
086b9b88 +0x516:  mov    0x1c(%eax),%edx
086b9b8b +0x519:  mov    %edx,-0x138(%ebp)
086b9b91 +0x51f:  mov    0x20(%eax),%edx
086b9b94 +0x522:  mov    %edx,-0x134(%ebp)
086b9b9a +0x528:  mov    0x24(%eax),%edx
086b9b9d +0x52b:  mov    %edx,-0x130(%ebp)
086b9ba3 +0x531:  mov    0x28(%eax),%edx
086b9ba6 +0x534:  mov    %edx,-0x12c(%ebp)
086b9bac +0x53a:  mov    0x2c(%eax),%edx
086b9baf +0x53d:  mov    %edx,-0x128(%ebp)
086b9bb5 +0x543:  mov    0x30(%eax),%edx
086b9bb8 +0x546:  mov    %edx,-0x124(%ebp)
086b9bbe +0x54c:  mov    0x34(%eax),%edx
086b9bc1 +0x54f:  mov    %edx,-0x120(%ebp)
086b9bc7 +0x555:  mov    0x38(%eax),%edx
086b9bca +0x558:  mov    %edx,-0x11c(%ebp)
086b9bd0 +0x55e:  movzbl 0x3c(%eax),%eax
086b9bd4 +0x562:  mov    %al,-0x118(%ebp)
086b9bda +0x568:  lea    -0x164(%ebp),%eax
086b9be0 +0x56e:  mov    %eax,0x4(%esp)
086b9be4 +0x572:  lea    -0x68(%ebp),%eax
086b9be7 +0x575:  mov    %eax,(%esp)
086b9bea +0x578:  call   08152b52 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2487>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2487
086b9bef +0x57d:  lea    0x4(%esp),%edx
086b9bf3 +0x581:  lea    -0x164(%ebp),%ebx
086b9bf9 +0x587:  mov    $0x15,%eax
086b9bfe +0x58c:  mov    %edx,%edi
086b9c00 +0x58e:  mov    %ebx,%esi
086b9c02 +0x590:  mov    %eax,%ecx
086b9c04 +0x592:  rep movsl %ds:(%esi),%es:(%edi)
086b9c06 +0x594:  mov    -0x38(%ebp),%eax
086b9c09 +0x597:  mov    %eax,(%esp)
086b9c0c +0x59a:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
086b9c11 +0x59f:  lea    -0x8c(%ebp),%eax
086b9c17 +0x5a5:  mov    %eax,(%esp)
086b9c1a +0x5a8:  call   0815293c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2271>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2271
086b9c1f +0x5ad:  lea    -0x90(%ebp),%eax
086b9c25 +0x5b3:  mov    %eax,0x4(%esp)
086b9c29 +0x5b7:  lea    -0x8c(%ebp),%eax
086b9c2f +0x5bd:  mov    %eax,(%esp)
086b9c32 +0x5c0:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
086b9c37 +0x5c5:  test   %al,%al
086b9c39 +0x5c7:  jne    086b9aff <+0x48d>
086b9c3f +0x5cd:  lea    -0x68(%ebp),%eax
086b9c42 +0x5d0:  mov    %eax,(%esp)
086b9c45 +0x5d3:  call   08311e2c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a11>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a11
086b9c4a +0x5d8:  mov    %eax,%edx
086b9c4c +0x5da:  mov    0x10(%ebp),%eax
086b9c4f +0x5dd:  mov    %edx,0x4(%esp)
086b9c53 +0x5e1:  mov    %eax,(%esp)
086b9c56 +0x5e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9c5b +0x5e9:  lea    -0x86(%ebp),%eax
086b9c61 +0x5ef:  mov    %eax,(%esp)
086b9c64 +0x5f2:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
086b9c69 +0x5f7:  lea    -0x94(%ebp),%eax
086b9c6f +0x5fd:  lea    -0x68(%ebp),%edx
086b9c72 +0x600:  mov    %edx,0x4(%esp)
086b9c76 +0x604:  mov    %eax,(%esp)
086b9c79 +0x607:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
086b9c7e +0x60c:  sub    $0x4,%esp
086b9c81 +0x60f:  jmp    086b9f16 <+0x8a4>
086b9c86 +0x614:  lea    -0x94(%ebp),%eax
086b9c8c +0x61a:  mov    %eax,(%esp)
086b9c8f +0x61d:  call   08311ebc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3aa1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3aa1
086b9c94 +0x622:  mov    %eax,-0x24(%ebp)
086b9c97 +0x625:  mov    -0x24(%ebp),%eax
086b9c9a +0x628:  mov    0x4(%eax),%edx
086b9c9d +0x62b:  mov    0x10(%ebp),%eax
086b9ca0 +0x62e:  mov    %edx,0x4(%esp)
086b9ca4 +0x632:  mov    %eax,(%esp)
086b9ca7 +0x635:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b9cac +0x63a:  mov    -0x24(%ebp),%eax
086b9caf +0x63d:  mov    0x12(%eax),%eax
086b9cb2 +0x640:  mov    %eax,%edx
086b9cb4 +0x642:  mov    0x10(%ebp),%eax
086b9cb7 +0x645:  mov    %edx,0x4(%esp)
086b9cbb +0x649:  mov    %eax,(%esp)
086b9cbe +0x64c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b9cc3 +0x651:  mov    -0x24(%ebp),%eax
086b9cc6 +0x654:  add    $0x10,%eax
086b9cc9 +0x657:  mov    %eax,(%esp)
086b9ccc +0x65a:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
086b9cd1 +0x65f:  movzbl %al,%edx
086b9cd4 +0x662:  mov    0x10(%ebp),%eax
086b9cd7 +0x665:  mov    %edx,0x4(%esp)
086b9cdb +0x669:  mov    %eax,(%esp)
086b9cde +0x66c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9ce3 +0x671:  mov    -0x24(%ebp),%eax
086b9ce6 +0x674:  add    $0x10,%eax
086b9ce9 +0x677:  mov    %eax,(%esp)
086b9cec +0x67a:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
086b9cf1 +0x67f:  test   %al,%al
086b9cf3 +0x681:  je     086b9da6 <+0x734>
086b9cf9 +0x687:  mov    -0x24(%ebp),%eax
086b9cfc +0x68a:  mov    0x12(%eax),%eax
086b9cff +0x68d:  mov    %eax,%ebx
086b9d01 +0x68f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b9d06 +0x694:  mov    %ebx,0x4(%esp)
086b9d0a +0x698:  mov    %eax,(%esp)
086b9d0d +0x69b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086b9d12 +0x6a0:  mov    %eax,-0x20(%ebp)
086b9d15 +0x6a3:  cmpl   $0x0,-0x20(%ebp)
086b9d19 +0x6a7:  jne    086b9d3d <+0x6cb>
086b9d1b +0x6a9:  mov    -0x24(%ebp),%eax
086b9d1e +0x6ac:  add    $0x10,%eax
086b9d21 +0x6af:  mov    %eax,(%esp)
086b9d24 +0x6b2:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086b9d29 +0x6b7:  mov    0x10(%ebp),%edx
086b9d2c +0x6ba:  mov    %eax,0x4(%esp)
086b9d30 +0x6be:  mov    %edx,(%esp)
086b9d33 +0x6c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b9d38 +0x6c6:  jmp    086b9dc3 <+0x751>
086b9d3d +0x6cb:  mov    -0x20(%ebp),%eax
086b9d40 +0x6ce:  mov    %eax,-0x1c(%ebp)
086b9d43 +0x6d1:  mov    -0x24(%ebp),%eax
086b9d46 +0x6d4:  movzwl 0x1b(%eax),%eax
086b9d4a +0x6d8:  movzbl %al,%edx
086b9d4d +0x6db:  mov    -0x20(%ebp),%eax
086b9d50 +0x6de:  mov    %edx,0x4(%esp)
086b9d54 +0x6e2:  mov    %eax,(%esp)
086b9d57 +0x6e5:  call   08151120 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa55>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa55
086b9d5c +0x6ea:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
086b9d62 +0x6f0:  mov    %eax,%edx
086b9d64 +0x6f2:  mov    0x10(%ebp),%eax
086b9d67 +0x6f5:  mov    %edx,0x4(%esp)
086b9d6b +0x6f9:  mov    %eax,(%esp)
086b9d6e +0x6fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b9d73 +0x701:  lea    -0x86(%ebp),%eax
086b9d79 +0x707:  mov    %eax,(%esp)
086b9d7c +0x70a:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
086b9d81 +0x70f:  mov    -0x24(%ebp),%eax
086b9d84 +0x712:  movzwl 0x1b(%eax),%eax
086b9d88 +0x716:  movzwl %ax,%eax
086b9d8b +0x719:  lea    -0x86(%ebp),%edx
086b9d91 +0x71f:  mov    %edx,0x8(%esp)
086b9d95 +0x723:  mov    %eax,0x4(%esp)
086b9d99 +0x727:  mov    -0x1c(%ebp),%eax
086b9d9c +0x72a:  mov    %eax,(%esp)
086b9d9f +0x72d:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
086b9da4 +0x732:  jmp    086b9dc3 <+0x751>
086b9da6 +0x734:  mov    -0x24(%ebp),%eax
086b9da9 +0x737:  add    $0x10,%eax
086b9dac +0x73a:  mov    %eax,(%esp)
086b9daf +0x73d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086b9db4 +0x742:  mov    0x10(%ebp),%edx
086b9db7 +0x745:  mov    %eax,0x4(%esp)
086b9dbb +0x749:  mov    %edx,(%esp)
086b9dbe +0x74c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b9dc3 +0x751:  mov    -0x24(%ebp),%eax
086b9dc6 +0x754:  movzwl 0x1b(%eax),%eax
086b9dca +0x758:  movzwl %ax,%edx
086b9dcd +0x75b:  mov    0x10(%ebp),%eax
086b9dd0 +0x75e:  mov    %edx,0x4(%esp)
086b9dd4 +0x762:  mov    %eax,(%esp)
086b9dd7 +0x765:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b9ddc +0x76a:  mov    -0x24(%ebp),%eax
086b9ddf +0x76d:  add    $0x21,%eax
086b9de2 +0x770:  mov    %eax,(%esp)
086b9de5 +0x773:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
086b9dea +0x778:  movzbl %al,%edx
086b9ded +0x77b:  mov    0x10(%ebp),%eax
086b9df0 +0x77e:  mov    %edx,0x4(%esp)
086b9df4 +0x782:  mov    %eax,(%esp)
086b9df7 +0x785:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9dfc +0x78a:  mov    -0x24(%ebp),%eax
086b9dff +0x78d:  add    $0x21,%eax
086b9e02 +0x790:  mov    %eax,(%esp)
086b9e05 +0x793:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
086b9e0a +0x798:  movzwl %ax,%edx
086b9e0d +0x79b:  mov    0x10(%ebp),%eax
086b9e10 +0x79e:  mov    %edx,0x4(%esp)
086b9e14 +0x7a2:  mov    %eax,(%esp)
086b9e17 +0x7a5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b9e1c +0x7aa:  mov    -0x24(%ebp),%eax
086b9e1f +0x7ad:  lea    0x10(%eax),%edx
086b9e22 +0x7b0:  mov    0x10(%ebp),%eax
086b9e25 +0x7b3:  mov    %edx,0x4(%esp)
086b9e29 +0x7b7:  mov    %eax,(%esp)
086b9e2c +0x7ba:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
086b9e31 +0x7bf:  mov    -0x24(%ebp),%eax
086b9e34 +0x7c2:  add    $0x10,%eax
086b9e37 +0x7c5:  mov    %eax,(%esp)
086b9e3a +0x7c8:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
086b9e3f +0x7cd:  test   %al,%al
086b9e41 +0x7cf:  je     086b9eca <+0x858>
086b9e47 +0x7d5:  mov    0x10(%ebp),%eax
086b9e4a +0x7d8:  movl   $0x1,0x4(%esp)
086b9e52 +0x7e0:  mov    %eax,(%esp)
086b9e55 +0x7e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9e5a +0x7e8:  mov    0x10(%ebp),%eax
086b9e5d +0x7eb:  movl   $0x1e,0x4(%esp)
086b9e65 +0x7f3:  mov    %eax,(%esp)
086b9e68 +0x7f6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b9e6d +0x7fb:  lea    -0x86(%ebp),%edx
086b9e73 +0x801:  mov    0x10(%ebp),%eax
086b9e76 +0x804:  movl   $0x1e,0x8(%esp)
086b9e7e +0x80c:  mov    %edx,0x4(%esp)
086b9e82 +0x810:  mov    %eax,(%esp)
086b9e85 +0x813:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
086b9e8a +0x818:  lea    -0x98(%ebp),%eax
086b9e90 +0x81e:  mov    %eax,(%esp)
086b9e93 +0x821:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
086b9e98 +0x826:  mov    0x10(%ebp),%eax
086b9e9b +0x829:  movl   $0x4,0x4(%esp)
086b9ea3 +0x831:  mov    %eax,(%esp)
086b9ea6 +0x834:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086b9eab +0x839:  lea    -0x98(%ebp),%edx
086b9eb1 +0x83f:  mov    0x10(%ebp),%eax
086b9eb4 +0x842:  movl   $0x4,0x8(%esp)
086b9ebc +0x84a:  mov    %edx,0x4(%esp)
086b9ec0 +0x84e:  mov    %eax,(%esp)
086b9ec3 +0x851:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
086b9ec8 +0x856:  jmp    086b9edd <+0x86b>
086b9eca +0x858:  mov    0x10(%ebp),%eax
086b9ecd +0x85b:  movl   $0x0,0x4(%esp)
086b9ed5 +0x863:  mov    %eax,(%esp)
086b9ed8 +0x866:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b9edd +0x86b:  mov    -0x24(%ebp),%eax
086b9ee0 +0x86e:  movzwl 0x8(%eax),%eax
086b9ee4 +0x872:  movzwl %ax,%edx
086b9ee7 +0x875:  mov    0x10(%ebp),%eax
086b9eea +0x878:  mov    %edx,0x4(%esp)
086b9eee +0x87c:  mov    %eax,(%esp)
086b9ef1 +0x87f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b9ef6 +0x884:  lea    -0x44(%ebp),%eax
086b9ef9 +0x887:  movl   $0x0,0x8(%esp)
086b9f01 +0x88f:  lea    -0x94(%ebp),%edx
086b9f07 +0x895:  mov    %edx,0x4(%esp)
086b9f0b +0x899:  mov    %eax,(%esp)
086b9f0e +0x89c:  call   08311e84 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a69>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a69
086b9f13 +0x8a1:  sub    $0x4,%esp
086b9f16 +0x8a4:  lea    -0x48(%ebp),%eax
086b9f19 +0x8a7:  lea    -0x68(%ebp),%edx
086b9f1c +0x8aa:  mov    %edx,0x4(%esp)
086b9f20 +0x8ae:  mov    %eax,(%esp)
086b9f23 +0x8b1:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
086b9f28 +0x8b6:  sub    $0x4,%esp
086b9f2b +0x8b9:  lea    -0x48(%ebp),%eax
086b9f2e +0x8bc:  mov    %eax,0x4(%esp)
086b9f32 +0x8c0:  lea    -0x94(%ebp),%eax
086b9f38 +0x8c6:  mov    %eax,(%esp)
086b9f3b +0x8c9:  call   08311e70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a55>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a55
086b9f40 +0x8ce:  test   %al,%al
086b9f42 +0x8d0:  jne    086b9c86 <+0x614>
086b9f48 +0x8d6:  mov    -0x38(%ebp),%eax
086b9f4b +0x8d9:  lea    0xc(%eax),%edx
086b9f4e +0x8dc:  mov    -0x60(%ebp),%eax
086b9f51 +0x8df:  mov    %eax,0x4(%esp)
086b9f55 +0x8e3:  mov    %edx,(%esp)
086b9f58 +0x8e6:  call   08311946 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x352b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x352b
086b9f5d +0x8eb:  mov    $0x1,%ebx
086b9f62 +0x8f0:  lea    -0xc8(%ebp),%eax
086b9f68 +0x8f6:  mov    %eax,(%esp)
086b9f6b +0x8f9:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
086b9f70 +0x8fe:  jmp    086b9fa2 <+0x930>
086b9f72 +0x900:  mov    %edx,%ebx
086b9f74 +0x902:  mov    %eax,%esi
086b9f76 +0x904:  lea    -0xc8(%ebp),%eax
086b9f7c +0x90a:  mov    %eax,(%esp)
086b9f7f +0x90d:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
086b9f84 +0x912:  mov    %esi,%eax
086b9f86 +0x914:  mov    %ebx,%edx
086b9f88 +0x916:  jmp    086b9f8a <+0x918>
086b9f8a +0x918:  mov    %edx,%ebx
086b9f8c +0x91a:  mov    %eax,%esi
086b9f8e +0x91c:  lea    -0x110(%ebp),%eax
086b9f94 +0x922:  mov    %eax,(%esp)
086b9f97 +0x925:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
086b9f9c +0x92a:  mov    %esi,%eax
086b9f9e +0x92c:  mov    %ebx,%edx
086b9fa0 +0x92e:  jmp    086b9fb2 <+0x940>
086b9fa2 +0x930:  lea    -0x110(%ebp),%eax
086b9fa8 +0x936:  mov    %eax,(%esp)
086b9fab +0x939:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
086b9fb0 +0x93e:  jmp    086b9fcd <+0x95b>
086b9fb2 +0x940:  mov    %edx,%ebx
086b9fb4 +0x942:  mov    %eax,%esi
086b9fb6 +0x944:  lea    -0x68(%ebp),%eax
086b9fb9 +0x947:  mov    %eax,(%esp)
086b9fbc +0x94a:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
086b9fc1 +0x94f:  mov    %esi,%eax
086b9fc3 +0x951:  mov    %ebx,%edx
086b9fc5 +0x953:  mov    %eax,(%esp)
086b9fc8 +0x956:  call   08ae3750 <_Unwind_Resume>
086b9fcd +0x95b:  lea    -0x68(%ebp),%eax
086b9fd0 +0x95e:  mov    %eax,(%esp)
086b9fd3 +0x961:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
086b9fd8 +0x966:  mov    %ebx,%eax
086b9fda +0x968:  lea    -0xc(%ebp),%esp
086b9fdd +0x96b:  add    $0x0,%esp
086b9fe0 +0x96e:  pop    %ebx
086b9fe1 +0x96f:  pop    %esi
086b9fe2 +0x970:  pop    %edi
086b9fe3 +0x971:  pop    %ebp
086b9fe4 +0x972:  ret
086b9fe5 +0x973:  nop
```

## 反编译 C

```c
// WarField::HandleMonsterKill @ 0x86b9672

/* WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, CDungeon const*) */

undefined4 __thiscall
WarField::HandleMonsterKill
          (WarField *this,int param_1,PacketGuard *param_2,map_monster *param_3,CUser *param_4,
          CDungeon *param_5)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  CDataManager *pCVar5;
  ServiceRestrictManager *pSVar6;
  CItemGeneratorMgr *pCVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  map_item *pmVar11;
  byte bVar12;
  map_item local_168 [4];
  int local_164;
  undefined2 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_114 [9];
  undefined1 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d1;
  undefined1 local_d0;
  stGenerateResult_t local_cc [48];
  stAvatarExpansionInfo_t local_9c [4];
  _List_iterator<map_item> local_98 [4];
  __normal_iterator local_94 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_90 [6];
  stAvatarEmblemInfo_t local_8a [30];
  list<map_item,std::allocator<map_item>> local_6c [8];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_64 [4];
  cMyTrace local_60 [16];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_50 [4];
  _List_iterator local_4c [4];
  _List_iterator<map_item> local_48 [4];
  uint local_44;
  int local_40;
  WarField *local_3c;
  map_monster *local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  CEquipItem *local_24;
  CEquipItem *local_20;
  
  bVar12 = 0;
  local_44 = 0xffff;
  local_40 = 0;
  if (param_4 != (CUser *)0x0) {
    local_44 = CUser::get_unique_id(param_4);
    local_44 = local_44 & 0xffff;
    pcVar3 = (char *)CUser::get_acc_name(param_4);
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_4);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_2c = CDataManager::GetMoneyLimitPerLevel(pCVar5,iVar4,pcVar3);
    if (local_2c < 1) {
      cMyTrace::cMyTrace(local_60,
                         "bool WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, const CDungeon*)"
                         ,0x178,5);
      cMyTrace::operator()(local_60,"WarField::HandleMonsterKill limitMoney(%d) is under 0");
    }
    else {
      iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_4);
      local_40 = (iVar4 * 100) / local_2c;
    }
  }
  local_3c = this + 8;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_64);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_50);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    (local_64,(_Rb_tree_iterator *)local_50);
  if (cVar1 == '\0') {
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->(local_64);
    local_38 = (map_monster *)(iVar4 + 4);
    iVar4 = G_CDataManager();
    local_34 = CDataManager::find_monster(iVar4);
    if (local_34 != 0) {
      map_monster::operator=(param_3,local_38);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)param_2,0,0x26);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,param_1);
      std::list<map_item,std::allocator<map_item>>::list(local_6c);
      local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 086b986a to 086b986e has its CatchHandler @ 086b9fb2 */
      WongWork::stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)local_114);
      if (param_4 != (CUser *)0x0) {
        local_114[0] = 100;
                    /* try { // try from 086b987f to 086b9917 has its CatchHandler @ 086b9f8a */
        pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
        cVar1 = ServiceRestrictManager::isRestricted(pSVar6);
        if (cVar1 != '\0') {
          local_114[0] = CUser::getStdDropRate(param_4);
        }
      }
      local_e0 = (uint)CONCAT21(CONCAT11(local_38[0x10],local_38[8]),local_38[0x10]);
      local_dc._0_2_ = CONCAT11(local_38[0x12],1);
      local_d8 = local_40;
      local_d4 = 1;
      local_d3 = 0;
      WongWork::stGenerateResult_t::stGenerateResult_t(local_cc);
                    /* try { // try from 086b9918 to 086b9f5c has its CatchHandler @ 086b9f72 */
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 8))(piVar8);
      iVar4 = local_d8;
      local_dc = *(undefined4 *)(local_38 + 0xc);
      uVar10 = local_e0 >> 0x10;
      local_d8._3_1_ = SUB41(iVar4,3);
      local_d8._0_3_ = CONCAT12(1,CONCAT11(local_38[0x11],local_38[8]));
      local_e0._0_2_ = CONCAT11(local_38[0x10],(undefined1)local_e0);
      local_e0 = CONCAT22((short)uVar10,(undefined2)local_e0) & 0xff00ffff;
      local_d4 = 0;
      local_d3 = 0;
      local_d1 = 0;
      local_d0 = 0;
      if ((param_4 == (CUser *)0x0) || (cVar1 = CUser::isGMUser(param_4), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_f0 = CUser::getForceDropFlag(param_4);
      }
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 0xc))(piVar8);
      local_e0 = CDungeon::getDropItems(param_5);
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 0xc))(piVar8);
      local_e0._0_2_ = CONCAT11(local_38[0x10],1);
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 8))(piVar8);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_90,local_94), bVar2) {
        map_item::map_item(local_168);
        local_168[0] = (map_item)0x1;
        local_164 = *(int *)(local_3c + 0x40);
        *(int *)(local_3c + 0x40) = local_164 + 1;
        local_160 = (undefined2)local_44;
        local_15c = local_30;
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*(local_90);
        local_158 = *puVar9;
        local_154 = puVar9[1];
        local_150 = puVar9[2];
        local_14c = puVar9[3];
        local_148 = puVar9[4];
        local_144 = puVar9[5];
        local_140 = puVar9[6];
        local_13c = puVar9[7];
        local_138 = puVar9[8];
        local_134 = puVar9[9];
        local_130 = puVar9[10];
        local_12c = puVar9[0xb];
        local_128 = puVar9[0xc];
        local_124 = puVar9[0xd];
        local_120 = puVar9[0xe];
        local_11c = *(undefined1 *)(puVar9 + 0xf);
        std::list<map_item,std::allocator<map_item>>::push_back(local_6c,local_168);
        pmVar11 = local_168;
        puVar9 = (undefined4 *)&stack0xfffffe38;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *(undefined4 *)pmVar11;
          pmVar11 = pmVar11 + ((uint)bVar12 * -2 + 1) * 4;
          puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        }
        MapInfo::Add_Item(local_3c);
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++(local_90);
      }
      iVar4 = std::list<map_item,std::allocator<map_item>>::size();
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,iVar4);
      stAvatarEmblemInfo_t::init(local_8a);
      std::list<map_item,std::allocator<map_item>>::begin();
      while( true ) {
        std::list<map_item,std::allocator<map_item>>::end();
        cVar1 = std::_List_iterator<map_item>::operator!=(local_98,local_4c);
        if (cVar1 == '\0') break;
        local_28 = std::_List_iterator<map_item>::operator*(local_98);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,*(int *)(local_28 + 4));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*(int *)(local_28 + 0x12));
        uVar10 = Inven_Item::GetItemAttr((Inven_Item *)(local_28 + 0x10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,uVar10 & 0xff);
        cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
        if (cVar1 == '\0') {
          iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar4);
        }
        else {
          iVar4 = *(int *)(local_28 + 0x12);
          pCVar5 = (CDataManager *)G_CDataManager();
          local_24 = (CEquipItem *)CDataManager::find_item(pCVar5,iVar4);
          if (local_24 == (CEquipItem *)0x0) {
            iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar4);
          }
          else {
            local_20 = local_24;
            iVar4 = CEquipItem::getAvatarPeriod(local_24,(uchar)*(undefined2 *)(local_28 + 0x1b));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar4 * 0x15180);
            stAvatarEmblemInfo_t::init(local_8a);
            CEquipItem::getAvatarSocket(local_20,(uint)*(ushort *)(local_28 + 0x1b),local_8a);
          }
        }
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)param_2,(uint)*(ushort *)(local_28 + 0x1b));
        uVar10 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_28 + 0x21));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,uVar10 & 0xff);
        uVar10 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_28 + 0x21));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,uVar10 & 0xffff);
        InterfacePacketBuf::put_packet
                  ((InterfacePacketBuf *)param_2,(Inven_Item *)(local_28 + 0x10));
        cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
        if (cVar1 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,0x1e);
          InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_2,(char *)local_8a,0x1e);
          stAvatarExpansionInfo_t::init(local_9c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,4);
          InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_2,(char *)local_9c,4);
        }
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,(uint)*(ushort *)(local_28 + 8))
        ;
        std::_List_iterator<map_item>::operator++(local_48,(int)local_98);
      }
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      erase((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> *)
            (local_3c + 0xc));
                    /* try { // try from 086b9f6b to 086b9f6f has its CatchHandler @ 086b9f8a */
      WongWork::stGenerateResult_t::~stGenerateResult_t(local_cc);
                    /* try { // try from 086b9fab to 086b9faf has its CatchHandler @ 086b9fb2 */
      WongWork::stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)local_114);
      std::list<map_item,std::allocator<map_item>>::~list(local_6c);
      return 1;
    }
    LogManager::logFormat
              (1,"WarField.cpp",
               "bool WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, const CDungeon*)"
               ,0x18c,"G_CDataManager()->find_monster(%u) fail");
    return 0;
  }
  return 0;
}
```
