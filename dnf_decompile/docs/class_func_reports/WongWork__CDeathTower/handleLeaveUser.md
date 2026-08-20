# handleLeaveUser

`_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser`

`WongWork::CDeathTower::handleLeaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08465ac2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08465ac2  _ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser
#           WongWork::CDeathTower::handleLeaveUser(CUser*)
# range [0x08465ac2, 0x08465c93]
08465ac2 +0x000:  push   %ebp
08465ac3 +0x001:  mov    %esp,%ebp
08465ac5 +0x003:  push   %esi
08465ac6 +0x004:  push   %ebx
08465ac7 +0x005:  sub    $0x20,%esp
08465aca +0x008:  movl   $0x0,-0xc(%ebp)
08465ad1 +0x00f:  movl   $0x0,-0xc(%ebp)
08465ad8 +0x016:  jmp    08465b50 <+0x8e>
08465ada +0x018:  mov    0x8(%ebp),%eax
08465add +0x01b:  mov    (%eax),%eax
08465adf +0x01d:  mov    -0xc(%ebp),%edx
08465ae2 +0x020:  mov    %edx,0x4(%esp)
08465ae6 +0x024:  mov    %eax,(%esp)
08465ae9 +0x027:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08465aee +0x02c:  test   %al,%al
08465af0 +0x02e:  je     08465b4c <+0x8a>
08465af2 +0x030:  mov    0x8(%ebp),%eax
08465af5 +0x033:  mov    (%eax),%eax
08465af7 +0x035:  mov    -0xc(%ebp),%edx
08465afa +0x038:  mov    %edx,0x4(%esp)
08465afe +0x03c:  mov    %eax,(%esp)
08465b01 +0x03f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08465b06 +0x044:  cmp    0xc(%ebp),%eax
08465b09 +0x047:  sete   %al
08465b0c +0x04a:  test   %al,%al
08465b0e +0x04c:  je     08465b4c <+0x8a>
08465b10 +0x04e:  mov    0x8(%ebp),%eax
08465b13 +0x051:  mov    (%eax),%eax
08465b15 +0x053:  movl   $0x2,0x8(%esp)
08465b1d +0x05b:  mov    0xc(%ebp),%edx
08465b20 +0x05e:  mov    %edx,0x4(%esp)
08465b24 +0x062:  mov    %eax,(%esp)
08465b27 +0x065:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
08465b2c +0x06a:  mov    0x8(%ebp),%eax
08465b2f +0x06d:  lea    0x110(%eax),%edx
08465b35 +0x073:  movl   $0x0,0x8(%esp)
08465b3d +0x07b:  mov    -0xc(%ebp),%eax
08465b40 +0x07e:  mov    %eax,0x4(%esp)
08465b44 +0x082:  mov    %edx,(%esp)
08465b47 +0x085:  call   08469b5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x23d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x23d
08465b4c +0x08a:  addl   $0x1,-0xc(%ebp)
08465b50 +0x08e:  cmpl   $0x3,-0xc(%ebp)
08465b54 +0x092:  setle  %al
08465b57 +0x095:  test   %al,%al
08465b59 +0x097:  jne    08465ada <+0x18>
08465b5f +0x09d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08465b64 +0x0a2:  mov    0xc(%ebp),%edx
08465b67 +0x0a5:  mov    %edx,0x4(%esp)
08465b6b +0x0a9:  mov    %eax,(%esp)
08465b6e +0x0ac:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
08465b73 +0x0b1:  lea    -0x18(%ebp),%eax
08465b76 +0x0b4:  mov    %eax,(%esp)
08465b79 +0x0b7:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465b7e +0x0bc:  movl   $0x2,0x8(%esp)
08465b86 +0x0c4:  movl   $0x0,0x4(%esp)
08465b8e +0x0cc:  lea    -0x18(%ebp),%eax
08465b91 +0x0cf:  mov    %eax,(%esp)
08465b94 +0x0d2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08465b99 +0x0d7:  movl   $0x0,0x4(%esp)
08465ba1 +0x0df:  lea    -0x18(%ebp),%eax
08465ba4 +0x0e2:  mov    %eax,(%esp)
08465ba7 +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08465bac +0x0ea:  movl   $0x1,0x4(%esp)
08465bb4 +0x0f2:  lea    -0x18(%ebp),%eax
08465bb7 +0x0f5:  mov    %eax,(%esp)
08465bba +0x0f8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08465bbf +0x0fd:  lea    -0x18(%ebp),%eax
08465bc2 +0x100:  movl   $0x0,0x8(%esp)
08465bca +0x108:  mov    %eax,0x4(%esp)
08465bce +0x10c:  mov    0xc(%ebp),%eax
08465bd1 +0x10f:  mov    %eax,(%esp)
08465bd4 +0x112:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08465bd9 +0x117:  movl   $0x1,0x4(%esp)
08465be1 +0x11f:  lea    -0x18(%ebp),%eax
08465be4 +0x122:  mov    %eax,(%esp)
08465be7 +0x125:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08465bec +0x12a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08465bf1 +0x12f:  mov    0xc(%ebp),%edx
08465bf4 +0x132:  mov    %edx,0x8(%esp)
08465bf8 +0x136:  lea    -0x18(%ebp),%edx
08465bfb +0x139:  mov    %edx,0x4(%esp)
08465bff +0x13d:  mov    %eax,(%esp)
08465c02 +0x140:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
08465c07 +0x145:  mov    0xc(%ebp),%eax
08465c0a +0x148:  mov    %eax,0x4(%esp)
08465c0e +0x14c:  mov    0x8(%ebp),%eax
08465c11 +0x14f:  mov    %eax,(%esp)
08465c14 +0x152:  call   084636f2 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser>  ; WongWork::CDeathTower::onLeaveUser(CUser*)
08465c19 +0x157:  mov    0x8(%ebp),%eax
08465c1c +0x15a:  mov    (%eax),%eax
08465c1e +0x15c:  mov    %eax,(%esp)
08465c21 +0x15f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08465c26 +0x164:  test   %eax,%eax
08465c28 +0x166:  jle    08465c40 <+0x17e>
08465c2a +0x168:  mov    0x8(%ebp),%eax
08465c2d +0x16b:  mov    %eax,(%esp)
08465c30 +0x16e:  call   08467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>  ; WongWork::CDeathTower::_checkMemberDie()
08465c35 +0x173:  test   %al,%al
08465c37 +0x175:  je     08465c40 <+0x17e>
08465c39 +0x177:  mov    $0x1,%eax
08465c3e +0x17c:  jmp    08465c45 <+0x183>
08465c40 +0x17e:  mov    $0x0,%eax
08465c45 +0x183:  test   %al,%al
08465c47 +0x185:  je     08465c5f <+0x19d>
08465c49 +0x187:  mov    0x8(%ebp),%eax
08465c4c +0x18a:  mov    %eax,(%esp)
08465c4f +0x18d:  call   08467cc2 <_ZN8WongWork11CDeathTower14_onFinishStageEv>  ; WongWork::CDeathTower::_onFinishStage()
08465c54 +0x192:  mov    0x8(%ebp),%eax
08465c57 +0x195:  mov    %eax,(%esp)
08465c5a +0x198:  call   08467e00 <_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv>  ; WongWork::CDeathTower::_onPrepareFinishTower()
08465c5f +0x19d:  mov    $0x1,%ebx
08465c64 +0x1a2:  lea    -0x18(%ebp),%eax
08465c67 +0x1a5:  mov    %eax,(%esp)
08465c6a +0x1a8:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465c6f +0x1ad:  mov    %ebx,%eax
08465c71 +0x1af:  add    $0x20,%esp
08465c74 +0x1b2:  pop    %ebx
08465c75 +0x1b3:  pop    %esi
08465c76 +0x1b4:  pop    %ebp
08465c77 +0x1b5:  ret
08465c78 +0x1b6:  mov    %edx,%ebx
08465c7a +0x1b8:  mov    %eax,%esi
08465c7c +0x1ba:  lea    -0x18(%ebp),%eax
08465c7f +0x1bd:  mov    %eax,(%esp)
08465c82 +0x1c0:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465c87 +0x1c5:  mov    %esi,%eax
08465c89 +0x1c7:  mov    %ebx,%edx
08465c8b +0x1c9:  mov    %eax,(%esp)
08465c8e +0x1cc:  call   08ae3750 <_Unwind_Resume>
08465c93 +0x1d1:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::handleLeaveUser @ 0x8465ac2

/* WongWork::CDeathTower::handleLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::handleLeaveUser(CDeathTower *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CUser *pCVar3;
  GameWorld *pGVar4;
  int iVar5;
  CPacketHandler local_1c [12];
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if (cVar2 != '\0') {
      pCVar3 = (CUser *)CParty::get_user(*(CParty **)this,local_10);
      if (pCVar3 == param_1) {
        CParty::leave_user(*(CParty **)this,param_1,2);
        CPlayData::setMemberAlive((CPlayData *)(this + 0x110),local_10,false);
      }
    }
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  GameWorld::out_from_dungeon(pGVar4,param_1);
  CPacketHandler::CPacketHandler(local_1c);
                    /* try { // try from 08465b94 to 08465c5e has its CatchHandler @ 08465c78 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
  CUser::make_basic_info(param_1,(char *)local_1c,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  pGVar4 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(pGVar4,(PacketGuard *)local_1c,param_1);
  onLeaveUser(this,param_1);
  iVar5 = CParty::get_member_count(*(CParty **)this);
  if (0 < iVar5) {
    cVar2 = _checkMemberDie(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08465c45;
    }
  }
  bVar1 = false;
LAB_08465c45:
  if (bVar1) {
    _onFinishStage(this);
    _onPrepareFinishTower(this);
  }
  CPacketHandler::~CPacketHandler(local_1c);
  return 1;
}
```
