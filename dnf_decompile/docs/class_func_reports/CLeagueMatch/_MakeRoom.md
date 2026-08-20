# _MakeRoom

`_ZN12CLeagueMatch9_MakeRoomEP5CUser`

`CLeagueMatch::_MakeRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d572  _ZN12CLeagueMatch9_MakeRoomEP5CUser
#           CLeagueMatch::_MakeRoom(CUser*)
# range [0x0855d572, 0x0855d883]
0855d572 +0x000:  push   %ebp
0855d573 +0x001:  mov    %esp,%ebp
0855d575 +0x003:  push   %edi
0855d576 +0x004:  push   %esi
0855d577 +0x005:  push   %ebx
0855d578 +0x006:  sub    $0x6c,%esp
0855d57b +0x009:  lea    -0x2c(%ebp),%eax
0855d57e +0x00c:  mov    %eax,(%esp)
0855d581 +0x00f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0855d586 +0x014:  movl   $0x35,0x8(%esp)
0855d58e +0x01c:  movl   $0x1,0x4(%esp)
0855d596 +0x024:  lea    -0x2c(%ebp),%eax
0855d599 +0x027:  mov    %eax,(%esp)
0855d59c +0x02a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855d5a1 +0x02f:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0855d5a6 +0x034:  mov    %eax,(%esp)
0855d5a9 +0x037:  call   0829507c <_ZN12CGameManager6GetPvpEv>  ; CGameManager::GetPvp()
0855d5ae +0x03c:  mov    %eax,-0x20(%ebp)
0855d5b1 +0x03f:  cmpl   $0x0,-0x20(%ebp)
0855d5b5 +0x043:  jne    0855d60c <+0x9a>
0855d5b7 +0x045:  movl   $0x0,0x4(%esp)
0855d5bf +0x04d:  lea    -0x2c(%ebp),%eax
0855d5c2 +0x050:  mov    %eax,(%esp)
0855d5c5 +0x053:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d5ca +0x058:  movl   $0x4,0x4(%esp)
0855d5d2 +0x060:  lea    -0x2c(%ebp),%eax
0855d5d5 +0x063:  mov    %eax,(%esp)
0855d5d8 +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d5dd +0x06b:  movl   $0x1,0x4(%esp)
0855d5e5 +0x073:  lea    -0x2c(%ebp),%eax
0855d5e8 +0x076:  mov    %eax,(%esp)
0855d5eb +0x079:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855d5f0 +0x07e:  lea    -0x2c(%ebp),%eax
0855d5f3 +0x081:  mov    %eax,0x4(%esp)
0855d5f7 +0x085:  mov    0xc(%ebp),%eax
0855d5fa +0x088:  mov    %eax,(%esp)
0855d5fd +0x08b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855d602 +0x090:  mov    $0x0,%ebx
0855d607 +0x095:  jmp    0855d86f <+0x2fd>
0855d60c +0x09a:  mov    0x8(%ebp),%eax
0855d60f +0x09d:  add    $0x14,%eax
0855d612 +0x0a0:  mov    %eax,(%esp)
0855d615 +0x0a3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0855d61a +0x0a8:  mov    %eax,-0x3c(%ebp)
0855d61d +0x0ab:  mov    0x8(%ebp),%eax
0855d620 +0x0ae:  add    $0x14,%eax
0855d623 +0x0b1:  mov    %eax,(%esp)
0855d626 +0x0b4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0855d62b +0x0b9:  mov    %eax,%ebx
0855d62d +0x0bb:  mov    0x8(%ebp),%eax
0855d630 +0x0be:  movzbl 0x10(%eax),%eax
0855d634 +0x0c2:  movzbl %al,%edi
0855d637 +0x0c5:  mov    0x8(%ebp),%eax
0855d63a +0x0c8:  movzwl 0xe(%eax),%eax
0855d63e +0x0cc:  movswl %ax,%esi
0855d641 +0x0cf:  mov    0x8(%ebp),%eax
0855d644 +0x0d2:  add    $0x8,%eax
0855d647 +0x0d5:  mov    %eax,(%esp)
0855d64a +0x0d8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0855d64f +0x0dd:  mov    0x8(%ebp),%edx
0855d652 +0x0e0:  movzbl 0xc(%edx),%edx
0855d656 +0x0e4:  movsbl %dl,%edx
0855d659 +0x0e7:  movl   $0x2,0x20(%esp)
0855d661 +0x0ef:  mov    -0x3c(%ebp),%ecx
0855d664 +0x0f2:  mov    %ecx,0x1c(%esp)
0855d668 +0x0f6:  mov    %ebx,0x18(%esp)
0855d66c +0x0fa:  mov    %edi,0x14(%esp)
0855d670 +0x0fe:  mov    %esi,0x10(%esp)
0855d674 +0x102:  mov    %eax,0xc(%esp)
0855d678 +0x106:  mov    %edx,0x8(%esp)
0855d67c +0x10a:  mov    0xc(%ebp),%eax
0855d67f +0x10d:  mov    %eax,0x4(%esp)
0855d683 +0x111:  mov    -0x20(%ebp),%eax
0855d686 +0x114:  mov    %eax,(%esp)
0855d689 +0x117:  call   085d6908 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE>  ; PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE)
0855d68e +0x11c:  mov    %eax,-0x1c(%ebp)
0855d691 +0x11f:  cmpl   $0x0,-0x1c(%ebp)
0855d695 +0x123:  jle    0855d73e <+0x1cc>
0855d69b +0x129:  movl   $0x0,0x4(%esp)
0855d6a3 +0x131:  lea    -0x2c(%ebp),%eax
0855d6a6 +0x134:  mov    %eax,(%esp)
0855d6a9 +0x137:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d6ae +0x13c:  mov    -0x1c(%ebp),%eax
0855d6b1 +0x13f:  mov    %eax,0x4(%esp)
0855d6b5 +0x143:  lea    -0x2c(%ebp),%eax
0855d6b8 +0x146:  mov    %eax,(%esp)
0855d6bb +0x149:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d6c0 +0x14e:  movl   $0x1,0x4(%esp)
0855d6c8 +0x156:  lea    -0x2c(%ebp),%eax
0855d6cb +0x159:  mov    %eax,(%esp)
0855d6ce +0x15c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855d6d3 +0x161:  lea    -0x2c(%ebp),%eax
0855d6d6 +0x164:  mov    %eax,0x4(%esp)
0855d6da +0x168:  mov    0xc(%ebp),%eax
0855d6dd +0x16b:  mov    %eax,(%esp)
0855d6e0 +0x16e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855d6e5 +0x173:  mov    -0x20(%ebp),%eax
0855d6e8 +0x176:  mov    %eax,(%esp)
0855d6eb +0x179:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
0855d6f0 +0x17e:  mov    %eax,0x14(%esp)
0855d6f4 +0x182:  movl   $"create_room fail: PVP슬롯반환 ID[%d]\n",0x10(%esp)
0855d6fc +0x18a:  movl   $0x1fe,0xc(%esp)
0855d704 +0x192:  movl   $&_ZZN12CLeagueMatch9_MakeRoomEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0855d70c +0x19a:  movl   $"MatchingSystem.cpp",0x4(%esp)
0855d714 +0x1a2:  movl   $0x1,(%esp)
0855d71b +0x1a9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0855d720 +0x1ae:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0855d725 +0x1b3:  mov    -0x20(%ebp),%edx
0855d728 +0x1b6:  mov    %edx,0x4(%esp)
0855d72c +0x1ba:  mov    %eax,(%esp)
0855d72f +0x1bd:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
0855d734 +0x1c2:  mov    $0x0,%ebx
0855d739 +0x1c7:  jmp    0855d86f <+0x2fd>
0855d73e +0x1cc:  lea    -0x2c(%ebp),%eax
0855d741 +0x1cf:  mov    %eax,(%esp)
0855d744 +0x1d2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0855d749 +0x1d7:  movl   $0x2,0x8(%esp)
0855d751 +0x1df:  movl   $0x0,0x4(%esp)
0855d759 +0x1e7:  lea    -0x2c(%ebp),%eax
0855d75c +0x1ea:  mov    %eax,(%esp)
0855d75f +0x1ed:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855d764 +0x1f2:  movl   $0x1,0x4(%esp)
0855d76c +0x1fa:  lea    -0x2c(%ebp),%eax
0855d76f +0x1fd:  mov    %eax,(%esp)
0855d772 +0x200:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d777 +0x205:  movl   $0x1,0x4(%esp)
0855d77f +0x20d:  lea    -0x2c(%ebp),%eax
0855d782 +0x210:  mov    %eax,(%esp)
0855d785 +0x213:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0855d78a +0x218:  lea    -0x2c(%ebp),%eax
0855d78d +0x21b:  movl   $0x1,0x8(%esp)
0855d795 +0x223:  mov    %eax,0x4(%esp)
0855d799 +0x227:  mov    0xc(%ebp),%eax
0855d79c +0x22a:  mov    %eax,(%esp)
0855d79f +0x22d:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0855d7a4 +0x232:  movl   $0x1,0x4(%esp)
0855d7ac +0x23a:  lea    -0x2c(%ebp),%eax
0855d7af +0x23d:  mov    %eax,(%esp)
0855d7b2 +0x240:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855d7b7 +0x245:  lea    -0x2c(%ebp),%eax
0855d7ba +0x248:  mov    %eax,0x4(%esp)
0855d7be +0x24c:  mov    0xc(%ebp),%eax
0855d7c1 +0x24f:  mov    %eax,(%esp)
0855d7c4 +0x252:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855d7c9 +0x257:  lea    -0x2c(%ebp),%eax
0855d7cc +0x25a:  mov    %eax,(%esp)
0855d7cf +0x25d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0855d7d4 +0x262:  movl   $0x29,0x8(%esp)
0855d7dc +0x26a:  movl   $0x0,0x4(%esp)
0855d7e4 +0x272:  lea    -0x2c(%ebp),%eax
0855d7e7 +0x275:  mov    %eax,(%esp)
0855d7ea +0x278:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855d7ef +0x27d:  movl   $0x1,0x4(%esp)
0855d7f7 +0x285:  lea    -0x2c(%ebp),%eax
0855d7fa +0x288:  mov    %eax,(%esp)
0855d7fd +0x28b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0855d802 +0x290:  lea    -0x2c(%ebp),%eax
0855d805 +0x293:  mov    %eax,0x4(%esp)
0855d809 +0x297:  mov    -0x20(%ebp),%eax
0855d80c +0x29a:  mov    %eax,(%esp)
0855d80f +0x29d:  call   085db7f6 <_ZN8PvP_Room14make_room_infoEPc>  ; PvP_Room::make_room_info(char*)
0855d814 +0x2a2:  movl   $0x1,0x4(%esp)
0855d81c +0x2aa:  lea    -0x2c(%ebp),%eax
0855d81f +0x2ad:  mov    %eax,(%esp)
0855d822 +0x2b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855d827 +0x2b5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0855d82c +0x2ba:  lea    -0x2c(%ebp),%edx
0855d82f +0x2bd:  mov    %edx,0x4(%esp)
0855d833 +0x2c1:  mov    %eax,(%esp)
0855d836 +0x2c4:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0855d83b +0x2c9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0855d840 +0x2ce:  mov    0xc(%ebp),%edx
0855d843 +0x2d1:  mov    %edx,0x4(%esp)
0855d847 +0x2d5:  mov    %eax,(%esp)
0855d84a +0x2d8:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
0855d84f +0x2dd:  mov    -0x20(%ebp),%ebx
0855d852 +0x2e0:  jmp    0855d86f <+0x2fd>
0855d854 +0x2e2:  mov    %edx,%ebx
0855d856 +0x2e4:  mov    %eax,%esi
0855d858 +0x2e6:  lea    -0x2c(%ebp),%eax
0855d85b +0x2e9:  mov    %eax,(%esp)
0855d85e +0x2ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855d863 +0x2f1:  mov    %esi,%eax
0855d865 +0x2f3:  mov    %ebx,%edx
0855d867 +0x2f5:  mov    %eax,(%esp)
0855d86a +0x2f8:  call   08ae3750 <_Unwind_Resume>
0855d86f +0x2fd:  lea    -0x2c(%ebp),%eax
0855d872 +0x300:  mov    %eax,(%esp)
0855d875 +0x303:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855d87a +0x308:  mov    %ebx,%eax
0855d87c +0x30a:  add    $0x6c,%esp
0855d87f +0x30d:  pop    %ebx
0855d880 +0x30e:  pop    %esi
0855d881 +0x30f:  pop    %edi
0855d882 +0x310:  pop    %ebp
0855d883 +0x311:  ret
```

## 反编译 C

```c
// CLeagueMatch::_MakeRoom @ 0x855d572

/* CLeagueMatch::_MakeRoom(CUser*) */

PvP_Room * __thiscall CLeagueMatch::_MakeRoom(CLeagueMatch *this,CUser *param_1)

{
  CLeagueMatch CVar1;
  short sVar2;
  CGameManager *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GameWorld *pGVar7;
  PvP_Room *pPVar8;
  PacketGuard local_30 [12];
  PvP_Room *local_24;
  int local_20;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0855d59c to 0855d84e has its CatchHandler @ 0855d854 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x35);
  pCVar3 = (CGameManager *)G_CGameManager();
  local_24 = (PvP_Room *)CGameManager::GetPvp(pCVar3);
  if (local_24 == (PvP_Room *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(param_1,local_30);
    pPVar8 = (PvP_Room *)0x0;
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
    if (local_20 < 1) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
      CUser::make_basic_info(param_1,(char *)local_30,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x29);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
      PvP_Room::make_room_info(local_24,(char *)local_30);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      pGVar7 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar7,local_30);
      pGVar7 = (GameWorld *)G_GameWorld();
      GameWorld::goto_pvp(pGVar7,param_1);
      pPVar8 = local_24;
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      uVar4 = PvP_Room::get_index(local_24);
      LogManager::logFormat
                (1,"MatchingSystem.cpp","PvP_Room* CLeagueMatch::_MakeRoom(CUser*)",0x1fe,
                 &DAT_08ca223c,uVar4);
      pCVar3 = (CGameManager *)G_CGameManager();
      CGameManager::PutPvp(pCVar3,local_24);
      pPVar8 = (PvP_Room *)0x0;
    }
  }
  PacketGuard::~PacketGuard(local_30);
  return pPVar8;
}
```
