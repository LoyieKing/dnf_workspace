# _MakeRoom

`_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser`

`fair_pvp::CFairMatch::_MakeRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563692` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563692  _ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser
#           fair_pvp::CFairMatch::_MakeRoom(CUser*)
# range [0x08563692, 0x08563a31]
08563692 +0x000:  push   %ebp
08563693 +0x001:  mov    %esp,%ebp
08563695 +0x003:  push   %edi
08563696 +0x004:  push   %esi
08563697 +0x005:  push   %ebx
08563698 +0x006:  sub    $0x7c,%esp
0856369b +0x009:  lea    -0x3c(%ebp),%eax
0856369e +0x00c:  mov    %eax,(%esp)
085636a1 +0x00f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085636a6 +0x014:  movl   $0x35,0x8(%esp)
085636ae +0x01c:  movl   $0x1,0x4(%esp)
085636b6 +0x024:  lea    -0x3c(%ebp),%eax
085636b9 +0x027:  mov    %eax,(%esp)
085636bc +0x02a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085636c1 +0x02f:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085636c6 +0x034:  mov    %eax,(%esp)
085636c9 +0x037:  call   0829507c <_ZN12CGameManager6GetPvpEv>  ; CGameManager::GetPvp()
085636ce +0x03c:  mov    %eax,-0x20(%ebp)
085636d1 +0x03f:  cmpl   $0x0,-0x20(%ebp)
085636d5 +0x043:  jne    0856372c <+0x9a>
085636d7 +0x045:  movl   $0x0,0x4(%esp)
085636df +0x04d:  lea    -0x3c(%ebp),%eax
085636e2 +0x050:  mov    %eax,(%esp)
085636e5 +0x053:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085636ea +0x058:  movl   $0x4,0x4(%esp)
085636f2 +0x060:  lea    -0x3c(%ebp),%eax
085636f5 +0x063:  mov    %eax,(%esp)
085636f8 +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085636fd +0x06b:  movl   $0x1,0x4(%esp)
08563705 +0x073:  lea    -0x3c(%ebp),%eax
08563708 +0x076:  mov    %eax,(%esp)
0856370b +0x079:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08563710 +0x07e:  lea    -0x3c(%ebp),%eax
08563713 +0x081:  mov    %eax,0x4(%esp)
08563717 +0x085:  mov    0xc(%ebp),%eax
0856371a +0x088:  mov    %eax,(%esp)
0856371d +0x08b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08563722 +0x090:  mov    $0x0,%ebx
08563727 +0x095:  jmp    08563a1c <+0x38a>
0856372c +0x09a:  mov    0x8(%ebp),%eax
0856372f +0x09d:  add    $0x14,%eax
08563732 +0x0a0:  mov    %eax,(%esp)
08563735 +0x0a3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0856373a +0x0a8:  mov    %eax,-0x50(%ebp)
0856373d +0x0ab:  mov    0x8(%ebp),%eax
08563740 +0x0ae:  add    $0x14,%eax
08563743 +0x0b1:  mov    %eax,(%esp)
08563746 +0x0b4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0856374b +0x0b9:  mov    %eax,%ebx
0856374d +0x0bb:  mov    0x8(%ebp),%eax
08563750 +0x0be:  movzbl 0x10(%eax),%eax
08563754 +0x0c2:  movzbl %al,%edi
08563757 +0x0c5:  mov    0x8(%ebp),%eax
0856375a +0x0c8:  movzwl 0xe(%eax),%eax
0856375e +0x0cc:  movswl %ax,%esi
08563761 +0x0cf:  mov    0x8(%ebp),%eax
08563764 +0x0d2:  add    $0x8,%eax
08563767 +0x0d5:  mov    %eax,(%esp)
0856376a +0x0d8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0856376f +0x0dd:  mov    0x8(%ebp),%edx
08563772 +0x0e0:  movzbl 0xc(%edx),%edx
08563776 +0x0e4:  movsbl %dl,%edx
08563779 +0x0e7:  movl   $0x2,0x20(%esp)
08563781 +0x0ef:  mov    -0x50(%ebp),%ecx
08563784 +0x0f2:  mov    %ecx,0x1c(%esp)
08563788 +0x0f6:  mov    %ebx,0x18(%esp)
0856378c +0x0fa:  mov    %edi,0x14(%esp)
08563790 +0x0fe:  mov    %esi,0x10(%esp)
08563794 +0x102:  mov    %eax,0xc(%esp)
08563798 +0x106:  mov    %edx,0x8(%esp)
0856379c +0x10a:  mov    0xc(%ebp),%eax
0856379f +0x10d:  mov    %eax,0x4(%esp)
085637a3 +0x111:  mov    -0x20(%ebp),%eax
085637a6 +0x114:  mov    %eax,(%esp)
085637a9 +0x117:  call   085d6908 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE>  ; PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE)
085637ae +0x11c:  mov    %eax,-0x1c(%ebp)
085637b1 +0x11f:  mov    -0x20(%ebp),%eax
085637b4 +0x122:  mov    %eax,(%esp)
085637b7 +0x125:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085637bc +0x12a:  mov    %eax,-0x4c(%ebp)
085637bf +0x12d:  mov    -0x20(%ebp),%eax
085637c2 +0x130:  mov    %eax,(%esp)
085637c5 +0x133:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085637ca +0x138:  mov    %eax,%edi
085637cc +0x13a:  mov    0xc(%ebp),%eax
085637cf +0x13d:  mov    %eax,(%esp)
085637d2 +0x140:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085637d7 +0x145:  mov    %eax,%esi
085637d9 +0x147:  mov    0xc(%ebp),%eax
085637dc +0x14a:  mov    %eax,(%esp)
085637df +0x14d:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085637e4 +0x152:  mov    %eax,%ebx
085637e6 +0x154:  movl   $0x0,0x10(%esp)
085637ee +0x15c:  movl   $0x0,0xc(%esp)
085637f6 +0x164:  movl   $0xba0,0x8(%esp)
085637fe +0x16c:  movl   $&_ZZN8fair_pvp10CFairMatch9_MakeRoomEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08563806 +0x174:  lea    -0x30(%ebp),%eax
08563809 +0x177:  mov    %eax,(%esp)
0856380c +0x17a:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08563811 +0x17f:  mov    -0x1c(%ebp),%eax
08563814 +0x182:  mov    %eax,0x18(%esp)
08563818 +0x186:  mov    -0x4c(%ebp),%eax
0856381b +0x189:  mov    %eax,0x14(%esp)
0856381f +0x18d:  mov    %edi,0x10(%esp)
08563823 +0x191:  mov    %esi,0xc(%esp)
08563827 +0x195:  mov    %ebx,0x8(%esp)
0856382b +0x199:  movl   $"pvp@log %s,%s,room(%d),%d,%d",0x4(%esp)
08563833 +0x1a1:  lea    -0x30(%ebp),%eax
08563836 +0x1a4:  mov    %eax,(%esp)
08563839 +0x1a7:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
0856383e +0x1ac:  cmpl   $0x0,-0x1c(%ebp)
08563842 +0x1b0:  jle    085638eb <+0x259>
08563848 +0x1b6:  movl   $0x0,0x4(%esp)
08563850 +0x1be:  lea    -0x3c(%ebp),%eax
08563853 +0x1c1:  mov    %eax,(%esp)
08563856 +0x1c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0856385b +0x1c9:  mov    -0x1c(%ebp),%eax
0856385e +0x1cc:  mov    %eax,0x4(%esp)
08563862 +0x1d0:  lea    -0x3c(%ebp),%eax
08563865 +0x1d3:  mov    %eax,(%esp)
08563868 +0x1d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0856386d +0x1db:  movl   $0x1,0x4(%esp)
08563875 +0x1e3:  lea    -0x3c(%ebp),%eax
08563878 +0x1e6:  mov    %eax,(%esp)
0856387b +0x1e9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08563880 +0x1ee:  lea    -0x3c(%ebp),%eax
08563883 +0x1f1:  mov    %eax,0x4(%esp)
08563887 +0x1f5:  mov    0xc(%ebp),%eax
0856388a +0x1f8:  mov    %eax,(%esp)
0856388d +0x1fb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08563892 +0x200:  mov    -0x20(%ebp),%eax
08563895 +0x203:  mov    %eax,(%esp)
08563898 +0x206:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
0856389d +0x20b:  mov    %eax,0x14(%esp)
085638a1 +0x20f:  movl   $"create_room fail: PVP슬롯반환 ID[%d]\n",0x10(%esp)
085638a9 +0x217:  movl   $0xba9,0xc(%esp)
085638b1 +0x21f:  movl   $&_ZZN8fair_pvp10CFairMatch9_MakeRoomEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
085638b9 +0x227:  movl   $"MatchingSystem.cpp",0x4(%esp)
085638c1 +0x22f:  movl   $0x1,(%esp)
085638c8 +0x236:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085638cd +0x23b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085638d2 +0x240:  mov    -0x20(%ebp),%edx
085638d5 +0x243:  mov    %edx,0x4(%esp)
085638d9 +0x247:  mov    %eax,(%esp)
085638dc +0x24a:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
085638e1 +0x24f:  mov    $0x0,%ebx
085638e6 +0x254:  jmp    08563a1c <+0x38a>
085638eb +0x259:  lea    -0x3c(%ebp),%eax
085638ee +0x25c:  mov    %eax,(%esp)
085638f1 +0x25f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085638f6 +0x264:  movl   $0x2,0x8(%esp)
085638fe +0x26c:  movl   $0x0,0x4(%esp)
08563906 +0x274:  lea    -0x3c(%ebp),%eax
08563909 +0x277:  mov    %eax,(%esp)
0856390c +0x27a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08563911 +0x27f:  movl   $0x1,0x4(%esp)
08563919 +0x287:  lea    -0x3c(%ebp),%eax
0856391c +0x28a:  mov    %eax,(%esp)
0856391f +0x28d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08563924 +0x292:  movl   $0x1,0x4(%esp)
0856392c +0x29a:  lea    -0x3c(%ebp),%eax
0856392f +0x29d:  mov    %eax,(%esp)
08563932 +0x2a0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08563937 +0x2a5:  lea    -0x3c(%ebp),%eax
0856393a +0x2a8:  movl   $0x1,0x8(%esp)
08563942 +0x2b0:  mov    %eax,0x4(%esp)
08563946 +0x2b4:  mov    0xc(%ebp),%eax
08563949 +0x2b7:  mov    %eax,(%esp)
0856394c +0x2ba:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08563951 +0x2bf:  movl   $0x1,0x4(%esp)
08563959 +0x2c7:  lea    -0x3c(%ebp),%eax
0856395c +0x2ca:  mov    %eax,(%esp)
0856395f +0x2cd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08563964 +0x2d2:  lea    -0x3c(%ebp),%eax
08563967 +0x2d5:  mov    %eax,0x4(%esp)
0856396b +0x2d9:  mov    0xc(%ebp),%eax
0856396e +0x2dc:  mov    %eax,(%esp)
08563971 +0x2df:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08563976 +0x2e4:  lea    -0x3c(%ebp),%eax
08563979 +0x2e7:  mov    %eax,(%esp)
0856397c +0x2ea:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08563981 +0x2ef:  movl   $0x29,0x8(%esp)
08563989 +0x2f7:  movl   $0x0,0x4(%esp)
08563991 +0x2ff:  lea    -0x3c(%ebp),%eax
08563994 +0x302:  mov    %eax,(%esp)
08563997 +0x305:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0856399c +0x30a:  movl   $0x1,0x4(%esp)
085639a4 +0x312:  lea    -0x3c(%ebp),%eax
085639a7 +0x315:  mov    %eax,(%esp)
085639aa +0x318:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085639af +0x31d:  lea    -0x3c(%ebp),%eax
085639b2 +0x320:  mov    %eax,0x4(%esp)
085639b6 +0x324:  mov    -0x20(%ebp),%eax
085639b9 +0x327:  mov    %eax,(%esp)
085639bc +0x32a:  call   085db7f6 <_ZN8PvP_Room14make_room_infoEPc>  ; PvP_Room::make_room_info(char*)
085639c1 +0x32f:  movl   $0x1,0x4(%esp)
085639c9 +0x337:  lea    -0x3c(%ebp),%eax
085639cc +0x33a:  mov    %eax,(%esp)
085639cf +0x33d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085639d4 +0x342:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085639d9 +0x347:  lea    -0x3c(%ebp),%edx
085639dc +0x34a:  mov    %edx,0x4(%esp)
085639e0 +0x34e:  mov    %eax,(%esp)
085639e3 +0x351:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085639e8 +0x356:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085639ed +0x35b:  mov    0xc(%ebp),%edx
085639f0 +0x35e:  mov    %edx,0x4(%esp)
085639f4 +0x362:  mov    %eax,(%esp)
085639f7 +0x365:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
085639fc +0x36a:  mov    -0x20(%ebp),%ebx
085639ff +0x36d:  jmp    08563a1c <+0x38a>
08563a01 +0x36f:  mov    %edx,%ebx
08563a03 +0x371:  mov    %eax,%esi
08563a05 +0x373:  lea    -0x3c(%ebp),%eax
08563a08 +0x376:  mov    %eax,(%esp)
08563a0b +0x379:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08563a10 +0x37e:  mov    %esi,%eax
08563a12 +0x380:  mov    %ebx,%edx
08563a14 +0x382:  mov    %eax,(%esp)
08563a17 +0x385:  call   08ae3750 <_Unwind_Resume>
08563a1c +0x38a:  lea    -0x3c(%ebp),%eax
08563a1f +0x38d:  mov    %eax,(%esp)
08563a22 +0x390:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08563a27 +0x395:  mov    %ebx,%eax
08563a29 +0x397:  add    $0x7c,%esp
08563a2c +0x39a:  pop    %ebx
08563a2d +0x39b:  pop    %esi
08563a2e +0x39c:  pop    %edi
08563a2f +0x39d:  pop    %ebp
08563a30 +0x39e:  ret
08563a31 +0x39f:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_MakeRoom @ 0x8563692

/* fair_pvp::CFairMatch::_MakeRoom(CUser*) */

PvP_Room * __thiscall fair_pvp::CFairMatch::_MakeRoom(CFairMatch *this,CUser *param_1)

{
  CFairMatch CVar1;
  short sVar2;
  CGameManager *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameWorld *pGVar8;
  PvP_Room *pPVar9;
  PacketGuard local_40 [12];
  CSwitchLog local_34 [16];
  PvP_Room *local_24;
  int local_20;
  
  PacketGuard::PacketGuard(local_40);
                    /* try { // try from 085636bc to 085639fb has its CatchHandler @ 08563a01 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x35);
  pCVar3 = (CGameManager *)G_CGameManager();
  local_24 = (PvP_Room *)CGameManager::GetPvp(pCVar3);
  if (local_24 == (PvP_Room *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    CUser::Send(param_1,local_40);
    pPVar9 = (PvP_Room *)0x0;
  }
  else {
    uVar4 = std::string::length((string *)(this + 0x14));
    uVar5 = std::string::c_str((string *)(this + 0x14));
    CVar1 = this[0x10];
    sVar2 = *(short *)(this + 0xe);
    uVar6 = std::string::c_str((string *)(this + 8));
    local_20 = PvP_Room::create_room
                         (local_24,param_1,(int)(char)this[0xc],uVar6,(int)sVar2,CVar1,uVar5,uVar4,2
                         );
    uVar4 = PvP_Room::get_pvp_battle_mode(local_24);
    uVar5 = PvP_Room::get_index(local_24);
    uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_name(param_1);
    CSwitchLog::CSwitchLog(local_34,"PvP_Room* fair_pvp::CFairMatch::_MakeRoom(CUser*)",0xba0,0,0);
    CSwitchLog::operator()(local_34,"pvp@log %s,%s,room(%d),%d,%d",uVar7,uVar6,uVar5,uVar4,local_20)
    ;
    if (local_20 < 1) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
      CUser::make_basic_info(param_1,(char *)local_40,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x29);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
      PvP_Room::make_room_info(local_24,(char *)local_40);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      pGVar8 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar8,local_40);
      pGVar8 = (GameWorld *)G_GameWorld();
      GameWorld::goto_pvp(pGVar8,param_1);
      pPVar9 = local_24;
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      uVar4 = PvP_Room::get_index(local_24);
      LogManager::logFormat
                (1,"MatchingSystem.cpp","PvP_Room* fair_pvp::CFairMatch::_MakeRoom(CUser*)",0xba9,
                 &DAT_08ca223c,uVar4);
      pCVar3 = (CGameManager *)G_CGameManager();
      CGameManager::PutPvp(pCVar3,local_24);
      pPVar9 = (PvP_Room *)0x0;
    }
  }
  PacketGuard::~PacketGuard(local_40);
  return pPVar9;
}
```
