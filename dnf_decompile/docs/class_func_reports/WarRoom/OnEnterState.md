# OnEnterState

`_ZN7WarRoom12OnEnterStateEv`

`WarRoom::OnEnterState()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bb71c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bb71c  _ZN7WarRoom12OnEnterStateEv
#           WarRoom::OnEnterState()
# range [0x086bb71c, 0x086bbea5]
086bb71c +0x000:  push   %ebp
086bb71d +0x001:  mov    %esp,%ebp
086bb71f +0x003:  push   %edi
086bb720 +0x004:  push   %esi
086bb721 +0x005:  push   %ebx
086bb722 +0x006:  sub    $0x7c,%esp
086bb725 +0x009:  mov    0x8(%ebp),%eax
086bb728 +0x00c:  mov    %eax,(%esp)
086bb72b +0x00f:  call   086be120 <_ZN7WarRoom14CancelAllTimerEv>  ; WarRoom::CancelAllTimer()
086bb730 +0x014:  mov    0x8(%ebp),%eax
086bb733 +0x017:  mov    %eax,(%esp)
086bb736 +0x01a:  call   086bb582 <_ZN7WarRoom16InvalidUserCheckEv>  ; WarRoom::InvalidUserCheck()
086bb73b +0x01f:  mov    0x8(%ebp),%eax
086bb73e +0x022:  mov    %eax,(%esp)
086bb741 +0x025:  call   086bb672 <_ZN7WarRoom15SendStatePacketEv>  ; WarRoom::SendStatePacket()
086bb746 +0x02a:  mov    0x8(%ebp),%eax
086bb749 +0x02d:  mov    0x144(%eax),%eax
086bb74f +0x033:  cmp    $0x5,%eax
086bb752 +0x036:  ja     086bbe9e <+0x782>
086bb758 +0x03c:  mov    &data#f8fedf01(.rodata)(,%eax,4),%eax
086bb75f +0x043:  jmp    *%eax
086bb761 +0x045:  mov    0x8(%ebp),%eax
086bb764 +0x048:  mov    %eax,(%esp)
086bb767 +0x04b:  call   086ba850 <_ZN7WarRoom13UpdateBanListEv>  ; WarRoom::UpdateBanList()
086bb76c +0x050:  mov    0x8(%ebp),%eax
086bb76f +0x053:  movzbl 0x30(%eax),%eax
086bb773 +0x057:  test   %al,%al
086bb775 +0x059:  je     086bbe9a <+0x77e>
086bb77b +0x05f:  movl   $0x0,-0x34(%ebp)
086bb782 +0x066:  jmp    086bb7ab <+0x8f>
086bb784 +0x068:  mov    -0x34(%ebp),%edx
086bb787 +0x06b:  mov    0x8(%ebp),%eax
086bb78a +0x06e:  add    $0x48,%edx
086bb78d +0x071:  mov    0xc(%eax,%edx,4),%eax
086bb791 +0x075:  test   %eax,%eax
086bb793 +0x077:  je     086bb7a7 <+0x8b>
086bb795 +0x079:  mov    -0x34(%ebp),%eax
086bb798 +0x07c:  mov    %eax,0x4(%esp)
086bb79c +0x080:  mov    0x8(%ebp),%eax
086bb79f +0x083:  mov    %eax,(%esp)
086bb7a2 +0x086:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086bb7a7 +0x08b:  addl   $0x1,-0x34(%ebp)
086bb7ab +0x08f:  cmpl   $0x5,-0x34(%ebp)
086bb7af +0x093:  setle  %al
086bb7b2 +0x096:  test   %al,%al
086bb7b4 +0x098:  jne    086bb784 <+0x68>
086bb7b6 +0x09a:  mov    0x8(%ebp),%eax
086bb7b9 +0x09d:  mov    %eax,(%esp)
086bb7bc +0x0a0:  call   086bd520 <_ZN7WarRoom5CloseEv>  ; WarRoom::Close()
086bb7c1 +0x0a5:  mov    0x8(%ebp),%eax
086bb7c4 +0x0a8:  movb   $0x0,0x30(%eax)
086bb7c8 +0x0ac:  lea    -0x40(%ebp),%eax
086bb7cb +0x0af:  mov    %eax,(%esp)
086bb7ce +0x0b2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bb7d3 +0x0b7:  movl   $0x58,0x8(%esp)
086bb7db +0x0bf:  movl   $0x0,0x4(%esp)
086bb7e3 +0x0c7:  lea    -0x40(%ebp),%eax
086bb7e6 +0x0ca:  mov    %eax,(%esp)
086bb7e9 +0x0cd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bb7ee +0x0d2:  movl   $0x1,0x4(%esp)
086bb7f6 +0x0da:  lea    -0x40(%ebp),%eax
086bb7f9 +0x0dd:  mov    %eax,(%esp)
086bb7fc +0x0e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb801 +0x0e5:  lea    -0x40(%ebp),%eax
086bb804 +0x0e8:  mov    %eax,0x4(%esp)
086bb808 +0x0ec:  mov    0x8(%ebp),%eax
086bb80b +0x0ef:  mov    %eax,(%esp)
086bb80e +0x0f2:  call   086be07a <_ZN7WarRoom13MakeStateInfoEPc>  ; WarRoom::MakeStateInfo(char*)
086bb813 +0x0f7:  movl   $0x1,0x4(%esp)
086bb81b +0x0ff:  lea    -0x40(%ebp),%eax
086bb81e +0x102:  mov    %eax,(%esp)
086bb821 +0x105:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb826 +0x10a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086bb82b +0x10f:  lea    -0x40(%ebp),%edx
086bb82e +0x112:  mov    %edx,0x4(%esp)
086bb832 +0x116:  mov    %eax,(%esp)
086bb835 +0x119:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086bb83a +0x11e:  jmp    086bb857 <+0x13b>
086bb83c +0x120:  mov    %edx,%ebx
086bb83e +0x122:  mov    %eax,%esi
086bb840 +0x124:  lea    -0x40(%ebp),%eax
086bb843 +0x127:  mov    %eax,(%esp)
086bb846 +0x12a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb84b +0x12f:  mov    %esi,%eax
086bb84d +0x131:  mov    %ebx,%edx
086bb84f +0x133:  mov    %eax,(%esp)
086bb852 +0x136:  call   08ae3750 <_Unwind_Resume>
086bb857 +0x13b:  lea    -0x40(%ebp),%eax
086bb85a +0x13e:  mov    %eax,(%esp)
086bb85d +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb862 +0x146:  jmp    086bbe9e <+0x782>
086bb867 +0x14b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086bb86e +0x152:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086bb873 +0x157:  mov    0x8(%ebp),%edx
086bb876 +0x15a:  mov    %eax,0x1cc(%edx)
086bb87c +0x160:  mov    0x8(%ebp),%eax
086bb87f +0x163:  mov    %eax,(%esp)
086bb882 +0x166:  call   086baa8e <_ZN7WarRoom11BattleResetEv>  ; WarRoom::BattleReset()
086bb887 +0x16b:  movl   $0x0,-0x30(%ebp)
086bb88e +0x172:  jmp    086bb8c3 <+0x1a7>
086bb890 +0x174:  mov    -0x30(%ebp),%edx
086bb893 +0x177:  mov    0x8(%ebp),%eax
086bb896 +0x17a:  add    $0x48,%edx
086bb899 +0x17d:  mov    0xc(%eax,%edx,4),%eax
086bb89d +0x181:  test   %eax,%eax
086bb89f +0x183:  je     086bb8b1 <+0x195>
086bb8a1 +0x185:  mov    -0x30(%ebp),%eax
086bb8a4 +0x188:  mov    0x8(%ebp),%edx
086bb8a7 +0x18b:  movb   $0x1,0x184(%edx,%eax,1)
086bb8af +0x193:  jmp    086bb8bf <+0x1a3>
086bb8b1 +0x195:  mov    -0x30(%ebp),%eax
086bb8b4 +0x198:  mov    0x8(%ebp),%edx
086bb8b7 +0x19b:  movb   $0x0,0x184(%edx,%eax,1)
086bb8bf +0x1a3:  addl   $0x1,-0x30(%ebp)
086bb8c3 +0x1a7:  cmpl   $0x5,-0x30(%ebp)
086bb8c7 +0x1ab:  setle  %al
086bb8ca +0x1ae:  test   %al,%al
086bb8cc +0x1b0:  jne    086bb890 <+0x174>
086bb8ce +0x1b2:  mov    0x8(%ebp),%eax
086bb8d1 +0x1b5:  mov    %eax,(%esp)
086bb8d4 +0x1b8:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bb8d9 +0x1bd:  cmp    $0x2,%eax
086bb8dc +0x1c0:  setle  %al
086bb8df +0x1c3:  test   %al,%al
086bb8e1 +0x1c5:  je     086bb953 <+0x237>
086bb8e3 +0x1c7:  movb   $0x0,-0x29(%ebp)
086bb8e7 +0x1cb:  movl   $0x0,-0x28(%ebp)
086bb8ee +0x1d2:  jmp    086bb925 <+0x209>
086bb8f0 +0x1d4:  mov    -0x28(%ebp),%edx
086bb8f3 +0x1d7:  mov    0x8(%ebp),%eax
086bb8f6 +0x1da:  add    $0x48,%edx
086bb8f9 +0x1dd:  mov    0xc(%eax,%edx,4),%eax
086bb8fd +0x1e1:  test   %eax,%eax
086bb8ff +0x1e3:  je     086bb920 <+0x204>
086bb901 +0x1e5:  mov    -0x28(%ebp),%edx
086bb904 +0x1e8:  mov    0x8(%ebp),%eax
086bb907 +0x1eb:  add    $0x48,%edx
086bb90a +0x1ee:  mov    0xc(%eax,%edx,4),%eax
086bb90e +0x1f2:  mov    %eax,(%esp)
086bb911 +0x1f5:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
086bb916 +0x1fa:  test   %al,%al
086bb918 +0x1fc:  je     086bb921 <+0x205>
086bb91a +0x1fe:  movb   $0x1,-0x29(%ebp)
086bb91e +0x202:  jmp    086bb930 <+0x214>
086bb920 +0x204:  nop
086bb921 +0x205:  addl   $0x1,-0x28(%ebp)
086bb925 +0x209:  cmpl   $0x5,-0x28(%ebp)
086bb929 +0x20d:  setle  %al
086bb92c +0x210:  test   %al,%al
086bb92e +0x212:  jne    086bb8f0 <+0x1d4>
086bb930 +0x214:  movzbl -0x29(%ebp),%eax
086bb934 +0x218:  xor    $0x1,%eax
086bb937 +0x21b:  test   %al,%al
086bb939 +0x21d:  je     086bb953 <+0x237>
086bb93b +0x21f:  movl   $0x0,0x4(%esp)
086bb943 +0x227:  mov    0x8(%ebp),%eax
086bb946 +0x22a:  mov    %eax,(%esp)
086bb949 +0x22d:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086bb94e +0x232:  jmp    086bbe9e <+0x782>
086bb953 +0x237:  movl   $0x41,0x4(%esp)
086bb95b +0x23f:  mov    0x8(%ebp),%eax
086bb95e +0x242:  mov    %eax,(%esp)
086bb961 +0x245:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086bb966 +0x24a:  mov    %eax,%edi
086bb968 +0x24c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bb96d +0x251:  mov    0x88a8(%eax),%eax
086bb973 +0x257:  mov    %eax,%ebx
086bb975 +0x259:  mov    %eax,%esi
086bb977 +0x25b:  sar    $0x1f,%esi
086bb97a +0x25e:  mov    0x8(%ebp),%eax
086bb97d +0x261:  mov    0x4(%eax),%eax
086bb980 +0x264:  mov    %eax,-0x5c(%ebp)
086bb983 +0x267:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086bb988 +0x26c:  movl   $0x0,0x1c(%esp)
086bb990 +0x274:  mov    %edi,0x18(%esp)
086bb994 +0x278:  mov    %ebx,0x10(%esp)
086bb998 +0x27c:  mov    %esi,0x14(%esp)
086bb99c +0x280:  movl   $0x41,0xc(%esp)
086bb9a4 +0x288:  mov    -0x5c(%ebp),%edx
086bb9a7 +0x28b:  mov    %edx,0x8(%esp)
086bb9ab +0x28f:  movl   $0x3,0x4(%esp)
086bb9b3 +0x297:  mov    %eax,(%esp)
086bb9b6 +0x29a:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
086bb9bb +0x29f:  jmp    086bbe9e <+0x782>
086bb9c0 +0x2a4:  movl   $0x42,0x4(%esp)
086bb9c8 +0x2ac:  mov    0x8(%ebp),%eax
086bb9cb +0x2af:  mov    %eax,(%esp)
086bb9ce +0x2b2:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086bb9d3 +0x2b7:  mov    %eax,%ebx
086bb9d5 +0x2b9:  mov    0x8(%ebp),%eax
086bb9d8 +0x2bc:  mov    0x4(%eax),%esi
086bb9db +0x2bf:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086bb9e0 +0x2c4:  movl   $0x0,0x1c(%esp)
086bb9e8 +0x2cc:  mov    %ebx,0x18(%esp)
086bb9ec +0x2d0:  movl   $0x2af8,0x10(%esp)
086bb9f4 +0x2d8:  movl   $0x0,0x14(%esp)
086bb9fc +0x2e0:  movl   $0x42,0xc(%esp)
086bba04 +0x2e8:  mov    %esi,0x8(%esp)
086bba08 +0x2ec:  movl   $0x3,0x4(%esp)
086bba10 +0x2f4:  mov    %eax,(%esp)
086bba13 +0x2f7:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
086bba18 +0x2fc:  mov    0x8(%ebp),%eax
086bba1b +0x2ff:  movl   $0x1,0xc(%eax)
086bba22 +0x306:  jmp    086bbe9e <+0x782>
086bba27 +0x30b:  mov    0x8(%ebp),%eax
086bba2a +0x30e:  mov    %eax,(%esp)
086bba2d +0x311:  call   086bc460 <_ZN7WarRoom9ReviveAllEv>  ; WarRoom::ReviveAll()
086bba32 +0x316:  movl   $0x43,0x4(%esp)
086bba3a +0x31e:  mov    0x8(%ebp),%eax
086bba3d +0x321:  mov    %eax,(%esp)
086bba40 +0x324:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086bba45 +0x329:  mov    %eax,%ebx
086bba47 +0x32b:  mov    0x8(%ebp),%eax
086bba4a +0x32e:  mov    0x4(%eax),%esi
086bba4d +0x331:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086bba52 +0x336:  movl   $0x0,0x18(%esp)
086bba5a +0x33e:  mov    %ebx,0x14(%esp)
086bba5e +0x342:  movl   $0xa,0x10(%esp)
086bba66 +0x34a:  movl   $0x43,0xc(%esp)
086bba6e +0x352:  mov    %esi,0x8(%esp)
086bba72 +0x356:  movl   $0x3,0x4(%esp)
086bba7a +0x35e:  mov    %eax,(%esp)
086bba7d +0x361:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086bba82 +0x366:  mov    0x8(%ebp),%eax
086bba85 +0x369:  mov    0xc(%eax),%edx
086bba88 +0x36c:  mov    0x8(%ebp),%eax
086bba8b +0x36f:  mov    0x1d0(%eax),%eax
086bba91 +0x375:  mov    0x744(%eax),%eax
086bba97 +0x37b:  cmp    %eax,%edx
086bba99 +0x37d:  je     086bbe9d <+0x781>
086bba9f +0x383:  mov    0x8(%ebp),%eax
086bbaa2 +0x386:  mov    0xc(%eax),%eax
086bbaa5 +0x389:  lea    0x1(%eax),%edx
086bbaa8 +0x38c:  mov    0x8(%ebp),%eax
086bbaab +0x38f:  mov    %edx,0xc(%eax)
086bbaae +0x392:  jmp    086bbe9e <+0x782>
086bbab3 +0x397:  mov    0x8(%ebp),%eax
086bbab6 +0x39a:  movb   $0x0,0x10(%eax)
086bbaba +0x39e:  mov    0x8(%ebp),%eax
086bbabd +0x3a1:  movb   $0x0,0x11(%eax)
086bbac1 +0x3a5:  lea    -0x4c(%ebp),%eax
086bbac4 +0x3a8:  mov    %eax,(%esp)
086bbac7 +0x3ab:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bbacc +0x3b0:  lea    -0x4c(%ebp),%eax
086bbacf +0x3b3:  mov    %eax,(%esp)
086bbad2 +0x3b6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bbad7 +0x3bb:  mov    0x8(%ebp),%eax
086bbada +0x3be:  mov    %eax,(%esp)
086bbadd +0x3c1:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bbae2 +0x3c6:  mov    %eax,%ecx
086bbae4 +0x3c8:  mov    0x8(%ebp),%eax
086bbae7 +0x3cb:  movzbl (%eax),%eax
086bbaea +0x3ce:  movzbl %al,%eax
086bbaed +0x3d1:  add    $0x1,%eax
086bbaf0 +0x3d4:  mov    %eax,%edx
086bbaf2 +0x3d6:  mov    %edx,%eax
086bbaf4 +0x3d8:  shl    $0x2,%eax
086bbaf7 +0x3db:  add    %edx,%eax
086bbaf9 +0x3dd:  add    %eax,%eax
086bbafb +0x3df:  movzbl %al,%ebx
086bbafe +0x3e2:  mov    0x8(%ebp),%eax
086bbb01 +0x3e5:  mov    0x1d4(%eax),%edx
086bbb07 +0x3eb:  mov    0x8(%ebp),%eax
086bbb0a +0x3ee:  mov    0x1d0(%eax),%eax
086bbb10 +0x3f4:  mov    0x8(%ebp),%esi
086bbb13 +0x3f7:  add    $0x34,%esi
086bbb16 +0x3fa:  mov    %ecx,0x14(%esp)
086bbb1a +0x3fe:  mov    %ebx,0x10(%esp)
086bbb1e +0x402:  mov    %edx,0xc(%esp)
086bbb22 +0x406:  mov    %eax,0x8(%esp)
086bbb26 +0x40a:  lea    -0x4c(%ebp),%eax
086bbb29 +0x40d:  mov    %eax,0x4(%esp)
086bbb2d +0x411:  mov    %esi,(%esp)
086bbb30 +0x414:  call   086b8a38 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi>  ; WarField::ConsistMap(void*, CDungeon const*, CMap const*, unsigned char, int)
086bbb35 +0x419:  lea    -0x4c(%ebp),%eax
086bbb38 +0x41c:  mov    %eax,0x4(%esp)
086bbb3c +0x420:  mov    0x8(%ebp),%eax
086bbb3f +0x423:  mov    %eax,(%esp)
086bbb42 +0x426:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bbb47 +0x42b:  movl   $0x0,-0x24(%ebp)
086bbb4e +0x432:  jmp    086bbb8d <+0x471>
086bbb50 +0x434:  mov    -0x24(%ebp),%edx
086bbb53 +0x437:  mov    0x8(%ebp),%eax
086bbb56 +0x43a:  add    $0x48,%edx
086bbb59 +0x43d:  mov    0xc(%eax,%edx,4),%eax
086bbb5d +0x441:  test   %eax,%eax
086bbb5f +0x443:  je     086bbb89 <+0x46d>
086bbb61 +0x445:  mov    0x8(%ebp),%eax
086bbb64 +0x448:  mov    0x1d0(%eax),%eax
086bbb6a +0x44e:  mov    0x7e8(%eax),%edx
086bbb70 +0x454:  mov    -0x24(%ebp),%ecx
086bbb73 +0x457:  mov    0x8(%ebp),%eax
086bbb76 +0x45a:  add    $0x48,%ecx
086bbb79 +0x45d:  mov    0xc(%eax,%ecx,4),%eax
086bbb7d +0x461:  mov    %edx,0x4(%esp)
086bbb81 +0x465:  mov    %eax,(%esp)
086bbb84 +0x468:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
086bbb89 +0x46d:  addl   $0x1,-0x24(%ebp)
086bbb8d +0x471:  cmpl   $0x5,-0x24(%ebp)
086bbb91 +0x475:  setle  %al
086bbb94 +0x478:  test   %al,%al
086bbb96 +0x47a:  jne    086bbb50 <+0x434>
086bbb98 +0x47c:  movl   $0x45,0x4(%esp)
086bbba0 +0x484:  mov    0x8(%ebp),%eax
086bbba3 +0x487:  mov    %eax,(%esp)
086bbba6 +0x48a:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086bbbab +0x48f:  mov    %eax,%ebx
086bbbad +0x491:  mov    0x8(%ebp),%eax
086bbbb0 +0x494:  mov    0x1d0(%eax),%eax
086bbbb6 +0x49a:  mov    0x7f0(%eax),%ecx
086bbbbc +0x4a0:  mov    $0x10624dd3,%edx
086bbbc1 +0x4a5:  mov    %ecx,%eax
086bbbc3 +0x4a7:  imul   %edx
086bbbc5 +0x4a9:  sar    $0x6,%edx
086bbbc8 +0x4ac:  mov    %ecx,%eax
086bbbca +0x4ae:  sar    $0x1f,%eax
086bbbcd +0x4b1:  mov    %edx,%edi
086bbbcf +0x4b3:  sub    %eax,%edi
086bbbd1 +0x4b5:  mov    0x8(%ebp),%eax
086bbbd4 +0x4b8:  mov    0x4(%eax),%esi
086bbbd7 +0x4bb:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086bbbdc +0x4c0:  movl   $0x0,0x18(%esp)
086bbbe4 +0x4c8:  mov    %ebx,0x14(%esp)
086bbbe8 +0x4cc:  mov    %edi,0x10(%esp)
086bbbec +0x4d0:  movl   $0x45,0xc(%esp)
086bbbf4 +0x4d8:  mov    %esi,0x8(%esp)
086bbbf8 +0x4dc:  movl   $0x3,0x4(%esp)
086bbc00 +0x4e4:  mov    %eax,(%esp)
086bbc03 +0x4e7:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086bbc08 +0x4ec:  jmp    086bbc25 <+0x509>
086bbc0a +0x4ee:  mov    %edx,%ebx
086bbc0c +0x4f0:  mov    %eax,%esi
086bbc0e +0x4f2:  lea    -0x4c(%ebp),%eax
086bbc11 +0x4f5:  mov    %eax,(%esp)
086bbc14 +0x4f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bbc19 +0x4fd:  mov    %esi,%eax
086bbc1b +0x4ff:  mov    %ebx,%edx
086bbc1d +0x501:  mov    %eax,(%esp)
086bbc20 +0x504:  call   08ae3750 <_Unwind_Resume>
086bbc25 +0x509:  lea    -0x4c(%ebp),%eax
086bbc28 +0x50c:  mov    %eax,(%esp)
086bbc2b +0x50f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bbc30 +0x514:  jmp    086bbe9e <+0x782>
086bbc35 +0x519:  mov    0x8(%ebp),%eax
086bbc38 +0x51c:  movzbl 0x10(%eax),%eax
086bbc3c +0x520:  test   %al,%al
086bbc3e +0x522:  je     086bbdcc <+0x6b0>
086bbc44 +0x528:  mov    0x8(%ebp),%eax
086bbc47 +0x52b:  mov    0x128(%eax),%edx
086bbc4d +0x531:  mov    0x8(%ebp),%eax
086bbc50 +0x534:  mov    0x1d0(%eax),%eax
086bbc56 +0x53a:  mov    0x744(%eax),%eax
086bbc5c +0x540:  cmp    %eax,%edx
086bbc5e +0x542:  jne    086bbdcc <+0x6b0>
086bbc64 +0x548:  lea    -0x58(%ebp),%eax
086bbc67 +0x54b:  mov    %eax,(%esp)
086bbc6a +0x54e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bbc6f +0x553:  movl   $0x156,0x8(%esp)
086bbc77 +0x55b:  movl   $0x0,0x4(%esp)
086bbc7f +0x563:  lea    -0x58(%ebp),%eax
086bbc82 +0x566:  mov    %eax,(%esp)
086bbc85 +0x569:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bbc8a +0x56e:  mov    0x8(%ebp),%eax
086bbc8d +0x571:  mov    %eax,(%esp)
086bbc90 +0x574:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bbc95 +0x579:  mov    %eax,0x4(%esp)
086bbc99 +0x57d:  lea    -0x58(%ebp),%eax
086bbc9c +0x580:  mov    %eax,(%esp)
086bbc9f +0x583:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bbca4 +0x588:  movl   $0x0,-0x20(%ebp)
086bbcab +0x58f:  jmp    086bbd70 <+0x654>
086bbcb0 +0x594:  mov    -0x20(%ebp),%edx
086bbcb3 +0x597:  mov    0x8(%ebp),%eax
086bbcb6 +0x59a:  add    $0x48,%edx
086bbcb9 +0x59d:  mov    0xc(%eax,%edx,4),%eax
086bbcbd +0x5a1:  test   %eax,%eax
086bbcbf +0x5a3:  je     086bbd6b <+0x64f>
086bbcc5 +0x5a9:  mov    -0x20(%ebp),%edx
086bbcc8 +0x5ac:  mov    0x8(%ebp),%eax
086bbccb +0x5af:  add    $0x48,%edx
086bbcce +0x5b2:  mov    0xc(%eax,%edx,4),%eax
086bbcd2 +0x5b6:  mov    %eax,(%esp)
086bbcd5 +0x5b9:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bbcda +0x5be:  mov    %eax,%ebx
086bbcdc +0x5c0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bbce1 +0x5c5:  mov    0x88ec(%eax),%eax
086bbce7 +0x5cb:  cmp    %eax,%ebx
086bbce9 +0x5cd:  setle  %al
086bbcec +0x5d0:  test   %al,%al
086bbcee +0x5d2:  je     086bbd0f <+0x5f3>
086bbcf0 +0x5d4:  mov    -0x20(%ebp),%edx
086bbcf3 +0x5d7:  mov    0x8(%ebp),%eax
086bbcf6 +0x5da:  add    $0x48,%edx
086bbcf9 +0x5dd:  mov    0xc(%eax,%edx,4),%eax
086bbcfd +0x5e1:  movl   $0x0,0x4(%esp)
086bbd05 +0x5e9:  mov    %eax,(%esp)
086bbd08 +0x5ec:  call   08645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>  ; CUserCharacInfo::DecreaseWarPoint(int)
086bbd0d +0x5f1:  jmp    086bbd33 <+0x617>
086bbd0f +0x5f3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bbd14 +0x5f8:  mov    0x88ec(%eax),%edx
086bbd1a +0x5fe:  mov    -0x20(%ebp),%ecx
086bbd1d +0x601:  mov    0x8(%ebp),%eax
086bbd20 +0x604:  add    $0x48,%ecx
086bbd23 +0x607:  mov    0xc(%eax,%ecx,4),%eax
086bbd27 +0x60b:  mov    %edx,0x4(%esp)
086bbd2b +0x60f:  mov    %eax,(%esp)
086bbd2e +0x612:  call   08645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>  ; CUserCharacInfo::DecreaseWarPoint(int)
086bbd33 +0x617:  mov    -0x20(%ebp),%eax
086bbd36 +0x61a:  mov    %eax,0x4(%esp)
086bbd3a +0x61e:  lea    -0x58(%ebp),%eax
086bbd3d +0x621:  mov    %eax,(%esp)
086bbd40 +0x624:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bbd45 +0x629:  mov    -0x20(%ebp),%edx
086bbd48 +0x62c:  mov    0x8(%ebp),%eax
086bbd4b +0x62f:  add    $0x48,%edx
086bbd4e +0x632:  mov    0xc(%eax,%edx,4),%eax
086bbd52 +0x636:  mov    %eax,(%esp)
086bbd55 +0x639:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bbd5a +0x63e:  mov    %eax,0x4(%esp)
086bbd5e +0x642:  lea    -0x58(%ebp),%eax
086bbd61 +0x645:  mov    %eax,(%esp)
086bbd64 +0x648:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bbd69 +0x64d:  jmp    086bbd6c <+0x650>
086bbd6b +0x64f:  nop
086bbd6c +0x650:  addl   $0x1,-0x20(%ebp)
086bbd70 +0x654:  cmpl   $0x5,-0x20(%ebp)
086bbd74 +0x658:  setle  %al
086bbd77 +0x65b:  test   %al,%al
086bbd79 +0x65d:  jne    086bbcb0 <+0x594>
086bbd7f +0x663:  movl   $0x1,0x4(%esp)
086bbd87 +0x66b:  lea    -0x58(%ebp),%eax
086bbd8a +0x66e:  mov    %eax,(%esp)
086bbd8d +0x671:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bbd92 +0x676:  lea    -0x58(%ebp),%eax
086bbd95 +0x679:  mov    %eax,0x4(%esp)
086bbd99 +0x67d:  mov    0x8(%ebp),%eax
086bbd9c +0x680:  mov    %eax,(%esp)
086bbd9f +0x683:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bbda4 +0x688:  jmp    086bbdc1 <+0x6a5>
086bbda6 +0x68a:  mov    %edx,%ebx
086bbda8 +0x68c:  mov    %eax,%esi
086bbdaa +0x68e:  lea    -0x58(%ebp),%eax
086bbdad +0x691:  mov    %eax,(%esp)
086bbdb0 +0x694:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bbdb5 +0x699:  mov    %esi,%eax
086bbdb7 +0x69b:  mov    %ebx,%edx
086bbdb9 +0x69d:  mov    %eax,(%esp)
086bbdbc +0x6a0:  call   08ae3750 <_Unwind_Resume>
086bbdc1 +0x6a5:  lea    -0x58(%ebp),%eax
086bbdc4 +0x6a8:  mov    %eax,(%esp)
086bbdc7 +0x6ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bbdcc +0x6b0:  movl   $0x0,-0x1c(%ebp)
086bbdd3 +0x6b7:  jmp    086bbe1c <+0x700>
086bbdd5 +0x6b9:  mov    -0x1c(%ebp),%edx
086bbdd8 +0x6bc:  mov    0x8(%ebp),%eax
086bbddb +0x6bf:  add    $0x48,%edx
086bbdde +0x6c2:  mov    0xc(%eax,%edx,4),%eax
086bbde2 +0x6c6:  test   %eax,%eax
086bbde4 +0x6c8:  je     086bbe17 <+0x6fb>
086bbde6 +0x6ca:  mov    -0x1c(%ebp),%edx
086bbde9 +0x6cd:  mov    0x8(%ebp),%eax
086bbdec +0x6d0:  add    $0x48,%edx
086bbdef +0x6d3:  mov    0xc(%eax,%edx,4),%eax
086bbdf3 +0x6d7:  mov    %eax,(%esp)
086bbdf6 +0x6da:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bbdfb +0x6df:  test   %eax,%eax
086bbdfd +0x6e1:  sete   %al
086bbe00 +0x6e4:  test   %al,%al
086bbe02 +0x6e6:  je     086bbe18 <+0x6fc>
086bbe04 +0x6e8:  mov    -0x1c(%ebp),%edx
086bbe07 +0x6eb:  mov    0x8(%ebp),%eax
086bbe0a +0x6ee:  add    $0x60,%edx
086bbe0d +0x6f1:  movl   $0x6,0xc(%eax,%edx,4)
086bbe15 +0x6f9:  jmp    086bbe18 <+0x6fc>
086bbe17 +0x6fb:  nop
086bbe18 +0x6fc:  addl   $0x1,-0x1c(%ebp)
086bbe1c +0x700:  cmpl   $0x5,-0x1c(%ebp)
086bbe20 +0x704:  setle  %al
086bbe23 +0x707:  test   %al,%al
086bbe25 +0x709:  jne    086bbdd5 <+0x6b9>
086bbe27 +0x70b:  mov    0x8(%ebp),%eax
086bbe2a +0x70e:  mov    %eax,(%esp)
086bbe2d +0x711:  call   086bc5fe <_ZN7WarRoom11ClearRewardEv>  ; WarRoom::ClearReward()
086bbe32 +0x716:  mov    0x8(%ebp),%eax
086bbe35 +0x719:  mov    %eax,(%esp)
086bbe38 +0x71c:  call   086bc0b0 <_ZN7WarRoom11SendGuildFPEv>  ; WarRoom::SendGuildFP()
086bbe3d +0x721:  mov    0x8(%ebp),%eax
086bbe40 +0x724:  mov    %eax,(%esp)
086bbe43 +0x727:  call   086bd094 <_ZN7WarRoom8RemoveKCEv>  ; WarRoom::RemoveKC()
086bbe48 +0x72c:  movl   $0x44,0x4(%esp)
086bbe50 +0x734:  mov    0x8(%ebp),%eax
086bbe53 +0x737:  mov    %eax,(%esp)
086bbe56 +0x73a:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086bbe5b +0x73f:  mov    %eax,%ebx
086bbe5d +0x741:  mov    0x8(%ebp),%eax
086bbe60 +0x744:  mov    0x4(%eax),%esi
086bbe63 +0x747:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086bbe68 +0x74c:  movl   $0x0,0x18(%esp)
086bbe70 +0x754:  mov    %ebx,0x14(%esp)
086bbe74 +0x758:  movl   $0x18,0x10(%esp)
086bbe7c +0x760:  movl   $0x44,0xc(%esp)
086bbe84 +0x768:  mov    %esi,0x8(%esp)
086bbe88 +0x76c:  movl   $0x3,0x4(%esp)
086bbe90 +0x774:  mov    %eax,(%esp)
086bbe93 +0x777:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086bbe98 +0x77c:  jmp    086bbe9e <+0x782>
086bbe9a +0x77e:  nop
086bbe9b +0x77f:  jmp    086bbe9e <+0x782>
086bbe9d +0x781:  nop
086bbe9e +0x782:  add    $0x7c,%esp
086bbea1 +0x785:  pop    %ebx
086bbea2 +0x786:  pop    %esi
086bbea3 +0x787:  pop    %edi
086bbea4 +0x788:  pop    %ebp
086bbea5 +0x789:  ret
```

## 反编译 C

```c
// WarRoom::OnEnterState @ 0x86bb71c

/* WarRoom::OnEnterState() */

void __thiscall WarRoom::OnEnterState(WarRoom *this)

{
  char cVar1;
  GameWorld *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  PacketGuard local_5c [12];
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  int local_38;
  int local_34;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  CancelAllTimer(this);
  InvalidUserCheck(this);
  SendStatePacket(this);
  switch(*(undefined4 *)(this + 0x144)) {
  case 0:
    UpdateBanList(this);
    if (this[0x30] != (WarRoom)0x0) {
      for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
        if (*(int *)(this + (local_38 + 0x48) * 4 + 0xc) != 0) {
          WalkOutUserBySlot(this,local_38);
        }
      }
      Close(this);
      this[0x30] = (WarRoom)0x0;
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 086bb7e9 to 086bb839 has its CatchHandler @ 086bb83c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x58);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,1);
      MakeStateInfo(this,(char *)local_44);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    break;
  case 1:
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x1cc) = uVar2;
    BattleReset(this);
    for (local_34 = 0; local_34 < 6; local_34 = local_34 + 1) {
      if (*(int *)(this + (local_34 + 0x48) * 4 + 0xc) == 0) {
        this[local_34 + 0x184] = (WarRoom)0x0;
      }
      else {
        this[local_34 + 0x184] = (WarRoom)0x1;
      }
    }
    iVar4 = GetWaiterCount(this);
    if (iVar4 < 3) {
      local_2d = '\0';
      for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
        if ((*(int *)(this + (local_2c + 0x48) * 4 + 0xc) != 0) &&
           (cVar1 = CUser::isGMUser(*(CUser **)(this + (local_2c + 0x48) * 4 + 0xc)), cVar1 != '\0')
           ) {
          local_2d = '\x01';
          break;
        }
      }
      if (local_2d != '\x01') {
        ChangeState(this,0);
        return;
      }
    }
    uVar6 = GenTimerKey(this,0x41);
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x88a8);
    uVar2 = *(undefined4 *)(this + 4);
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,3,uVar2,0x41,iVar4,iVar4 >> 0x1f,uVar6,0);
    break;
  case 2:
    uVar6 = GenTimerKey(this,0x42);
    uVar2 = *(undefined4 *)(this + 4);
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,3,uVar2,0x42,11000,0,uVar6,0);
    *(undefined4 *)(this + 0xc) = 1;
    break;
  case 3:
    this[0x10] = (WarRoom)0x0;
    this[0x11] = (WarRoom)0x0;
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 086bbad2 to 086bbc07 has its CatchHandler @ 086bbc0a */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
    iVar4 = GetWaiterCount(this);
    WarField::ConsistMap
              ((WarField *)(this + 0x34),local_50,*(CDungeon **)(this + 0x1d0),
               *(CMap **)(this + 0x1d4),((char)*this + '\x01') * '\n',iVar4);
    SendToRoom(this,local_50);
    for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
      if (*(int *)(this + (local_28 + 0x48) * 4 + 0xc) != 0) {
        CUser::FatigueUp(*(CUser **)(this + (local_28 + 0x48) * 4 + 0xc),
                         *(int *)(*(int *)(this + 0x1d0) + 0x7e8));
      }
    }
    uVar6 = GenTimerKey(this,0x45);
    iVar4 = *(int *)(*(int *)(this + 0x1d0) + 0x7f0);
    uVar2 = *(undefined4 *)(this + 4);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,3,uVar2,0x45,iVar4 / 1000,uVar6,0);
    PacketGuard::~PacketGuard(local_50);
    break;
  case 4:
    ReviveAll(this);
    uVar6 = GenTimerKey(this,0x43);
    uVar2 = *(undefined4 *)(this + 4);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,3,uVar2,0x43,10,uVar6,0);
    if (*(int *)(this + 0xc) != *(int *)(*(int *)(this + 0x1d0) + 0x744)) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    }
    break;
  case 5:
    if ((this[0x10] != (WarRoom)0x0) &&
       (*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744))) {
      PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 086bbc85 to 086bbda3 has its CatchHandler @ 086bbda6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x156);
      iVar4 = GetWaiterCount(this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,iVar4);
      for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
        if (*(int *)(this + (local_24 + 0x48) * 4 + 0xc) != 0) {
          iVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc));
          iVar5 = G_CDataManager();
          if (*(int *)(iVar5 + 0x88ec) < iVar4) {
            iVar4 = G_CDataManager();
            CUserCharacInfo::DecreaseWarPoint
                      (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc),
                       *(int *)(iVar4 + 0x88ec));
          }
          else {
            CUserCharacInfo::DecreaseWarPoint
                      (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc),0);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,local_24);
          iVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar4);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
      SendToRoom(this,local_5c);
      PacketGuard::~PacketGuard(local_5c);
    }
    for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
      if ((*(int *)(this + (local_20 + 0x48) * 4 + 0xc) != 0) &&
         (iVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_20 + 0x48) * 4 + 0xc)), iVar4 == 0)
         ) {
        *(undefined4 *)(this + (local_20 + 0x60) * 4 + 0xc) = 6;
      }
    }
    ClearReward(this);
    SendGuildFP(this);
    RemoveKC(this);
    uVar6 = GenTimerKey(this,0x44);
    uVar2 = *(undefined4 *)(this + 4);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,3,uVar2,0x44,0x18,uVar6,0);
  }
  return;
}
```
