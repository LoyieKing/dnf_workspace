# dispatch_sig

`_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij`

`Timer_QuickPartyWaitingStartGame::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_QuickPartyWaitingStartGame` | `0x0863ae82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863ae82  _ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij
#           Timer_QuickPartyWaitingStartGame::dispatch_sig(int, int, unsigned int)
# range [0x0863ae82, 0x0863b0b9]
0863ae82 +0x000:  push   %ebp
0863ae83 +0x001:  mov    %esp,%ebp
0863ae85 +0x003:  push   %esi
0863ae86 +0x004:  push   %ebx
0863ae87 +0x005:  sub    $0x40,%esp
0863ae8a +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863ae8f +0x00d:  mov    0xc(%ebp),%edx
0863ae92 +0x010:  mov    %edx,0x4(%esp)
0863ae96 +0x014:  mov    %eax,(%esp)
0863ae99 +0x017:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0863ae9e +0x01c:  mov    %eax,-0x18(%ebp)
0863aea1 +0x01f:  cmpl   $0x0,-0x18(%ebp)
0863aea5 +0x023:  jne    0863aeb1 <+0x2f>
0863aea7 +0x025:  mov    $0x0,%eax
0863aeac +0x02a:  jmp    0863b0b3 <+0x231>
0863aeb1 +0x02f:  mov    0x10(%ebp),%eax
0863aeb4 +0x032:  mov    %eax,0x8(%esp)
0863aeb8 +0x036:  mov    0x14(%ebp),%eax
0863aebb +0x039:  mov    %eax,0x4(%esp)
0863aebf +0x03d:  mov    -0x18(%ebp),%eax
0863aec2 +0x040:  mov    %eax,(%esp)
0863aec5 +0x043:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863aeca +0x048:  xor    $0x1,%eax
0863aecd +0x04b:  test   %al,%al
0863aecf +0x04d:  je     0863aedb <+0x59>
0863aed1 +0x04f:  mov    $0x0,%eax
0863aed6 +0x054:  jmp    0863b0b3 <+0x231>
0863aedb +0x059:  movl   $0x0,0x8(%esp)
0863aee3 +0x061:  movl   $0x0,0x4(%esp)
0863aeeb +0x069:  mov    -0x18(%ebp),%eax
0863aeee +0x06c:  mov    %eax,(%esp)
0863aef1 +0x06f:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
0863aef6 +0x074:  movl   $0x0,0x4(%esp)
0863aefe +0x07c:  mov    -0x18(%ebp),%eax
0863af01 +0x07f:  mov    %eax,(%esp)
0863af04 +0x082:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
0863af09 +0x087:  mov    -0x18(%ebp),%eax
0863af0c +0x08a:  mov    %eax,(%esp)
0863af0f +0x08d:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0863af14 +0x092:  mov    %eax,(%esp)
0863af17 +0x095:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0863af1c +0x09a:  mov    %eax,%ebx
0863af1e +0x09c:  movl   $0x0,0xc(%esp)
0863af26 +0x0a4:  movl   $0x16a8,0x8(%esp)
0863af2e +0x0ac:  movl   $&_ZZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863af36 +0x0b4:  lea    -0x28(%ebp),%eax
0863af39 +0x0b7:  mov    %eax,(%esp)
0863af3c +0x0ba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863af41 +0x0bf:  mov    %ebx,0x8(%esp)
0863af45 +0x0c3:  movl   $"QUICK_PARTY_LOG : PARTY DESTROY AND LEAVE DUNGEON !! : MANAGER (%s)",0x4(%esp)
0863af4d +0x0cb:  lea    -0x28(%ebp),%eax
0863af50 +0x0ce:  mov    %eax,(%esp)
0863af53 +0x0d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863af58 +0x0d6:  movl   $0x0,-0x14(%ebp)
0863af5f +0x0dd:  jmp    0863b09f <+0x21d>
0863af64 +0x0e2:  mov    -0x14(%ebp),%eax
0863af67 +0x0e5:  mov    %eax,0x4(%esp)
0863af6b +0x0e9:  mov    -0x18(%ebp),%eax
0863af6e +0x0ec:  mov    %eax,(%esp)
0863af71 +0x0ef:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0863af76 +0x0f4:  xor    $0x1,%eax
0863af79 +0x0f7:  test   %al,%al
0863af7b +0x0f9:  jne    0863b09a <+0x218>
0863af81 +0x0ff:  mov    -0x14(%ebp),%eax
0863af84 +0x102:  mov    %eax,0x4(%esp)
0863af88 +0x106:  mov    -0x18(%ebp),%eax
0863af8b +0x109:  mov    %eax,(%esp)
0863af8e +0x10c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0863af93 +0x111:  mov    %eax,-0x10(%ebp)
0863af96 +0x114:  movl   $0x2,0x8(%esp)
0863af9e +0x11c:  mov    -0x10(%ebp),%eax
0863afa1 +0x11f:  mov    %eax,0x4(%esp)
0863afa5 +0x123:  mov    -0x18(%ebp),%eax
0863afa8 +0x126:  mov    %eax,(%esp)
0863afab +0x129:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0863afb0 +0x12e:  mov    %eax,-0xc(%ebp)
0863afb3 +0x131:  cmpl   $0x1,-0xc(%ebp)
0863afb7 +0x135:  je     0863b09b <+0x219>
0863afbd +0x13b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863afc2 +0x140:  mov    -0x10(%ebp),%edx
0863afc5 +0x143:  mov    %edx,0x4(%esp)
0863afc9 +0x147:  mov    %eax,(%esp)
0863afcc +0x14a:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
0863afd1 +0x14f:  lea    -0x34(%ebp),%eax
0863afd4 +0x152:  mov    %eax,(%esp)
0863afd7 +0x155:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863afdc +0x15a:  lea    -0x34(%ebp),%eax
0863afdf +0x15d:  mov    %eax,(%esp)
0863afe2 +0x160:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863afe7 +0x165:  movl   $0x2,0x8(%esp)
0863afef +0x16d:  movl   $0x0,0x4(%esp)
0863aff7 +0x175:  lea    -0x34(%ebp),%eax
0863affa +0x178:  mov    %eax,(%esp)
0863affd +0x17b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863b002 +0x180:  movl   $0x0,0x4(%esp)
0863b00a +0x188:  lea    -0x34(%ebp),%eax
0863b00d +0x18b:  mov    %eax,(%esp)
0863b010 +0x18e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b015 +0x193:  movl   $0x1,0x4(%esp)
0863b01d +0x19b:  lea    -0x34(%ebp),%eax
0863b020 +0x19e:  mov    %eax,(%esp)
0863b023 +0x1a1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0863b028 +0x1a6:  lea    -0x34(%ebp),%eax
0863b02b +0x1a9:  movl   $0x0,0x8(%esp)
0863b033 +0x1b1:  mov    %eax,0x4(%esp)
0863b037 +0x1b5:  mov    -0x10(%ebp),%eax
0863b03a +0x1b8:  mov    %eax,(%esp)
0863b03d +0x1bb:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0863b042 +0x1c0:  movl   $0x1,0x4(%esp)
0863b04a +0x1c8:  lea    -0x34(%ebp),%eax
0863b04d +0x1cb:  mov    %eax,(%esp)
0863b050 +0x1ce:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863b055 +0x1d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863b05a +0x1d8:  mov    -0x10(%ebp),%edx
0863b05d +0x1db:  mov    %edx,0x8(%esp)
0863b061 +0x1df:  lea    -0x34(%ebp),%edx
0863b064 +0x1e2:  mov    %edx,0x4(%esp)
0863b068 +0x1e6:  mov    %eax,(%esp)
0863b06b +0x1e9:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0863b070 +0x1ee:  jmp    0863b08d <+0x20b>
0863b072 +0x1f0:  mov    %edx,%ebx
0863b074 +0x1f2:  mov    %eax,%esi
0863b076 +0x1f4:  lea    -0x34(%ebp),%eax
0863b079 +0x1f7:  mov    %eax,(%esp)
0863b07c +0x1fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b081 +0x1ff:  mov    %esi,%eax
0863b083 +0x201:  mov    %ebx,%edx
0863b085 +0x203:  mov    %eax,(%esp)
0863b088 +0x206:  call   08ae3750 <_Unwind_Resume>
0863b08d +0x20b:  lea    -0x34(%ebp),%eax
0863b090 +0x20e:  mov    %eax,(%esp)
0863b093 +0x211:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b098 +0x216:  jmp    0863b09b <+0x219>
0863b09a +0x218:  nop
0863b09b +0x219:  addl   $0x1,-0x14(%ebp)
0863b09f +0x21d:  cmpl   $0x3,-0x14(%ebp)
0863b0a3 +0x221:  setle  %al
0863b0a6 +0x224:  test   %al,%al
0863b0a8 +0x226:  jne    0863af64 <+0xe2>
0863b0ae +0x22c:  mov    $0x1,%eax
0863b0b3 +0x231:  add    $0x40,%esp
0863b0b6 +0x234:  pop    %ebx
0863b0b7 +0x235:  pop    %esi
0863b0b8 +0x236:  pop    %ebp
0863b0b9 +0x237:  ret
```

## 反编译 C

```c
// Timer_QuickPartyWaitingStartGame::dispatch_sig @ 0x863ae82

/* Timer_QuickPartyWaitingStartGame::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_QuickPartyWaitingStartGame::dispatch_sig
          (Timer_QuickPartyWaitingStartGame *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CUserCharacInfo *this_00;
  GameWorld *pGVar4;
  PacketGuard local_38 [12];
  cMyTrace local_2c [16];
  CParty *local_1c;
  int local_18;
  CUser *local_14;
  int local_10;
  
  iVar2 = G_CGameManager();
  local_1c = (CParty *)CGameManager::GetParty(iVar2);
  if (local_1c == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_1c,param_3,param_2);
    if (cVar1 == '\x01') {
      CParty::send_quick_party_matching_result(local_1c,false,(CUser *)0x0);
      CParty::set_quick_party(local_1c,false);
      this_00 = (CUserCharacInfo *)CParty::getManager(local_1c);
      uVar3 = CUserCharacInfo::getCurCharacName(this_00);
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool Timer_QuickPartyWaitingStartGame::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x16a8,0);
      cMyTrace::operator()
                (local_2c,"QUICK_PARTY_LOG : PARTY DESTROY AND LEAVE DUNGEON !! : MANAGER (%s)",
                 uVar3);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        cVar1 = CParty::checkValidUser(local_1c,local_18);
        if (cVar1 == '\x01') {
          local_14 = (CUser *)CParty::get_user(local_1c,local_18);
          local_10 = CParty::leave_user(local_1c,local_14,2);
          if (local_10 != 1) {
            pGVar4 = (GameWorld *)G_GameWorld();
            GameWorld::out_from_dungeon(pGVar4,local_14);
            PacketGuard::PacketGuard(local_38);
                    /* try { // try from 0863afe2 to 0863b06f has its CatchHandler @ 0863b072 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,2);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,1);
            CUser::make_basic_info(local_14,(char *)local_38,'\0');
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
            pGVar4 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar4,local_38,local_14);
            PacketGuard::~PacketGuard(local_38);
          }
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
