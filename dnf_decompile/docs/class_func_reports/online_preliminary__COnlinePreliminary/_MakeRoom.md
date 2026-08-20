# _MakeRoom

`_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser`

`online_preliminary::COnlinePreliminary::_MakeRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560f92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560f92  _ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser
#           online_preliminary::COnlinePreliminary::_MakeRoom(CUser*)
# range [0x08560f92, 0x085612a3]
08560f92 +0x000:  push   %ebp
08560f93 +0x001:  mov    %esp,%ebp
08560f95 +0x003:  push   %edi
08560f96 +0x004:  push   %esi
08560f97 +0x005:  push   %ebx
08560f98 +0x006:  sub    $0x6c,%esp
08560f9b +0x009:  lea    -0x2c(%ebp),%eax
08560f9e +0x00c:  mov    %eax,(%esp)
08560fa1 +0x00f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08560fa6 +0x014:  movl   $0x35,0x8(%esp)
08560fae +0x01c:  movl   $0x1,0x4(%esp)
08560fb6 +0x024:  lea    -0x2c(%ebp),%eax
08560fb9 +0x027:  mov    %eax,(%esp)
08560fbc +0x02a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08560fc1 +0x02f:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08560fc6 +0x034:  mov    %eax,(%esp)
08560fc9 +0x037:  call   0829507c <_ZN12CGameManager6GetPvpEv>  ; CGameManager::GetPvp()
08560fce +0x03c:  mov    %eax,-0x20(%ebp)
08560fd1 +0x03f:  cmpl   $0x0,-0x20(%ebp)
08560fd5 +0x043:  jne    0856102c <+0x9a>
08560fd7 +0x045:  movl   $0x0,0x4(%esp)
08560fdf +0x04d:  lea    -0x2c(%ebp),%eax
08560fe2 +0x050:  mov    %eax,(%esp)
08560fe5 +0x053:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08560fea +0x058:  movl   $0x4,0x4(%esp)
08560ff2 +0x060:  lea    -0x2c(%ebp),%eax
08560ff5 +0x063:  mov    %eax,(%esp)
08560ff8 +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08560ffd +0x06b:  movl   $0x1,0x4(%esp)
08561005 +0x073:  lea    -0x2c(%ebp),%eax
08561008 +0x076:  mov    %eax,(%esp)
0856100b +0x079:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08561010 +0x07e:  lea    -0x2c(%ebp),%eax
08561013 +0x081:  mov    %eax,0x4(%esp)
08561017 +0x085:  mov    0xc(%ebp),%eax
0856101a +0x088:  mov    %eax,(%esp)
0856101d +0x08b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08561022 +0x090:  mov    $0x0,%ebx
08561027 +0x095:  jmp    0856128f <+0x2fd>
0856102c +0x09a:  mov    0x8(%ebp),%eax
0856102f +0x09d:  add    $0x14,%eax
08561032 +0x0a0:  mov    %eax,(%esp)
08561035 +0x0a3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0856103a +0x0a8:  mov    %eax,-0x3c(%ebp)
0856103d +0x0ab:  mov    0x8(%ebp),%eax
08561040 +0x0ae:  add    $0x14,%eax
08561043 +0x0b1:  mov    %eax,(%esp)
08561046 +0x0b4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0856104b +0x0b9:  mov    %eax,%ebx
0856104d +0x0bb:  mov    0x8(%ebp),%eax
08561050 +0x0be:  movzbl 0x10(%eax),%eax
08561054 +0x0c2:  movzbl %al,%edi
08561057 +0x0c5:  mov    0x8(%ebp),%eax
0856105a +0x0c8:  movzwl 0xe(%eax),%eax
0856105e +0x0cc:  movswl %ax,%esi
08561061 +0x0cf:  mov    0x8(%ebp),%eax
08561064 +0x0d2:  add    $0x8,%eax
08561067 +0x0d5:  mov    %eax,(%esp)
0856106a +0x0d8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0856106f +0x0dd:  mov    0x8(%ebp),%edx
08561072 +0x0e0:  movzbl 0xc(%edx),%edx
08561076 +0x0e4:  movsbl %dl,%edx
08561079 +0x0e7:  movl   $0x2,0x20(%esp)
08561081 +0x0ef:  mov    -0x3c(%ebp),%ecx
08561084 +0x0f2:  mov    %ecx,0x1c(%esp)
08561088 +0x0f6:  mov    %ebx,0x18(%esp)
0856108c +0x0fa:  mov    %edi,0x14(%esp)
08561090 +0x0fe:  mov    %esi,0x10(%esp)
08561094 +0x102:  mov    %eax,0xc(%esp)
08561098 +0x106:  mov    %edx,0x8(%esp)
0856109c +0x10a:  mov    0xc(%ebp),%eax
0856109f +0x10d:  mov    %eax,0x4(%esp)
085610a3 +0x111:  mov    -0x20(%ebp),%eax
085610a6 +0x114:  mov    %eax,(%esp)
085610a9 +0x117:  call   085d6908 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE>  ; PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE)
085610ae +0x11c:  mov    %eax,-0x1c(%ebp)
085610b1 +0x11f:  cmpl   $0x0,-0x1c(%ebp)
085610b5 +0x123:  jle    0856115e <+0x1cc>
085610bb +0x129:  movl   $0x0,0x4(%esp)
085610c3 +0x131:  lea    -0x2c(%ebp),%eax
085610c6 +0x134:  mov    %eax,(%esp)
085610c9 +0x137:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085610ce +0x13c:  mov    -0x1c(%ebp),%eax
085610d1 +0x13f:  mov    %eax,0x4(%esp)
085610d5 +0x143:  lea    -0x2c(%ebp),%eax
085610d8 +0x146:  mov    %eax,(%esp)
085610db +0x149:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085610e0 +0x14e:  movl   $0x1,0x4(%esp)
085610e8 +0x156:  lea    -0x2c(%ebp),%eax
085610eb +0x159:  mov    %eax,(%esp)
085610ee +0x15c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085610f3 +0x161:  lea    -0x2c(%ebp),%eax
085610f6 +0x164:  mov    %eax,0x4(%esp)
085610fa +0x168:  mov    0xc(%ebp),%eax
085610fd +0x16b:  mov    %eax,(%esp)
08561100 +0x16e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08561105 +0x173:  mov    -0x20(%ebp),%eax
08561108 +0x176:  mov    %eax,(%esp)
0856110b +0x179:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08561110 +0x17e:  mov    %eax,0x14(%esp)
08561114 +0x182:  movl   $"create_room fail: PVP슬롯반환 ID[%d]\n",0x10(%esp)
0856111c +0x18a:  movl   $0x73c,0xc(%esp)
08561124 +0x192:  movl   $&_ZZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0856112c +0x19a:  movl   $"MatchingSystem.cpp",0x4(%esp)
08561134 +0x1a2:  movl   $0x1,(%esp)
0856113b +0x1a9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08561140 +0x1ae:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08561145 +0x1b3:  mov    -0x20(%ebp),%edx
08561148 +0x1b6:  mov    %edx,0x4(%esp)
0856114c +0x1ba:  mov    %eax,(%esp)
0856114f +0x1bd:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
08561154 +0x1c2:  mov    $0x0,%ebx
08561159 +0x1c7:  jmp    0856128f <+0x2fd>
0856115e +0x1cc:  lea    -0x2c(%ebp),%eax
08561161 +0x1cf:  mov    %eax,(%esp)
08561164 +0x1d2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08561169 +0x1d7:  movl   $0x2,0x8(%esp)
08561171 +0x1df:  movl   $0x0,0x4(%esp)
08561179 +0x1e7:  lea    -0x2c(%ebp),%eax
0856117c +0x1ea:  mov    %eax,(%esp)
0856117f +0x1ed:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08561184 +0x1f2:  movl   $0x1,0x4(%esp)
0856118c +0x1fa:  lea    -0x2c(%ebp),%eax
0856118f +0x1fd:  mov    %eax,(%esp)
08561192 +0x200:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08561197 +0x205:  movl   $0x1,0x4(%esp)
0856119f +0x20d:  lea    -0x2c(%ebp),%eax
085611a2 +0x210:  mov    %eax,(%esp)
085611a5 +0x213:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085611aa +0x218:  lea    -0x2c(%ebp),%eax
085611ad +0x21b:  movl   $0x1,0x8(%esp)
085611b5 +0x223:  mov    %eax,0x4(%esp)
085611b9 +0x227:  mov    0xc(%ebp),%eax
085611bc +0x22a:  mov    %eax,(%esp)
085611bf +0x22d:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085611c4 +0x232:  movl   $0x1,0x4(%esp)
085611cc +0x23a:  lea    -0x2c(%ebp),%eax
085611cf +0x23d:  mov    %eax,(%esp)
085611d2 +0x240:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085611d7 +0x245:  lea    -0x2c(%ebp),%eax
085611da +0x248:  mov    %eax,0x4(%esp)
085611de +0x24c:  mov    0xc(%ebp),%eax
085611e1 +0x24f:  mov    %eax,(%esp)
085611e4 +0x252:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085611e9 +0x257:  lea    -0x2c(%ebp),%eax
085611ec +0x25a:  mov    %eax,(%esp)
085611ef +0x25d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085611f4 +0x262:  movl   $0x29,0x8(%esp)
085611fc +0x26a:  movl   $0x0,0x4(%esp)
08561204 +0x272:  lea    -0x2c(%ebp),%eax
08561207 +0x275:  mov    %eax,(%esp)
0856120a +0x278:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0856120f +0x27d:  movl   $0x1,0x4(%esp)
08561217 +0x285:  lea    -0x2c(%ebp),%eax
0856121a +0x288:  mov    %eax,(%esp)
0856121d +0x28b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08561222 +0x290:  lea    -0x2c(%ebp),%eax
08561225 +0x293:  mov    %eax,0x4(%esp)
08561229 +0x297:  mov    -0x20(%ebp),%eax
0856122c +0x29a:  mov    %eax,(%esp)
0856122f +0x29d:  call   085db7f6 <_ZN8PvP_Room14make_room_infoEPc>  ; PvP_Room::make_room_info(char*)
08561234 +0x2a2:  movl   $0x1,0x4(%esp)
0856123c +0x2aa:  lea    -0x2c(%ebp),%eax
0856123f +0x2ad:  mov    %eax,(%esp)
08561242 +0x2b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08561247 +0x2b5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0856124c +0x2ba:  lea    -0x2c(%ebp),%edx
0856124f +0x2bd:  mov    %edx,0x4(%esp)
08561253 +0x2c1:  mov    %eax,(%esp)
08561256 +0x2c4:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0856125b +0x2c9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08561260 +0x2ce:  mov    0xc(%ebp),%edx
08561263 +0x2d1:  mov    %edx,0x4(%esp)
08561267 +0x2d5:  mov    %eax,(%esp)
0856126a +0x2d8:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
0856126f +0x2dd:  mov    -0x20(%ebp),%ebx
08561272 +0x2e0:  jmp    0856128f <+0x2fd>
08561274 +0x2e2:  mov    %edx,%ebx
08561276 +0x2e4:  mov    %eax,%esi
08561278 +0x2e6:  lea    -0x2c(%ebp),%eax
0856127b +0x2e9:  mov    %eax,(%esp)
0856127e +0x2ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561283 +0x2f1:  mov    %esi,%eax
08561285 +0x2f3:  mov    %ebx,%edx
08561287 +0x2f5:  mov    %eax,(%esp)
0856128a +0x2f8:  call   08ae3750 <_Unwind_Resume>
0856128f +0x2fd:  lea    -0x2c(%ebp),%eax
08561292 +0x300:  mov    %eax,(%esp)
08561295 +0x303:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0856129a +0x308:  mov    %ebx,%eax
0856129c +0x30a:  add    $0x6c,%esp
0856129f +0x30d:  pop    %ebx
085612a0 +0x30e:  pop    %esi
085612a1 +0x30f:  pop    %edi
085612a2 +0x310:  pop    %ebp
085612a3 +0x311:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_MakeRoom @ 0x8560f92

/* online_preliminary::COnlinePreliminary::_MakeRoom(CUser*) */

PvP_Room * __thiscall
online_preliminary::COnlinePreliminary::_MakeRoom(COnlinePreliminary *this,CUser *param_1)

{
  COnlinePreliminary CVar1;
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
                    /* try { // try from 08560fbc to 0856126e has its CatchHandler @ 08561274 */
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
                (1,"MatchingSystem.cpp",
                 "PvP_Room* online_preliminary::COnlinePreliminary::_MakeRoom(CUser*)",0x73c,
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
