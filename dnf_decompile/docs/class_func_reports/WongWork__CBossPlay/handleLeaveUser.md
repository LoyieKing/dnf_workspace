# handleLeaveUser

`_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser`

`WongWork::CBossPlay::handleLeaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x08149724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08149724  _ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser
#           WongWork::CBossPlay::handleLeaveUser(CUser*)
# range [0x08149724, 0x08149913]
08149724 +0x000:  push   %ebp
08149725 +0x001:  mov    %esp,%ebp
08149727 +0x003:  push   %esi
08149728 +0x004:  push   %ebx
08149729 +0x005:  sub    $0x30,%esp
0814972c +0x008:  movl   $0x0,-0xc(%ebp)
08149733 +0x00f:  movl   $0x0,-0xc(%ebp)
0814973a +0x016:  jmp    08149828 <+0x104>
0814973f +0x01b:  mov    0x8(%ebp),%eax
08149742 +0x01e:  mov    0x4(%eax),%eax
08149745 +0x021:  mov    -0xc(%ebp),%edx
08149748 +0x024:  mov    %edx,0x4(%esp)
0814974c +0x028:  mov    %eax,(%esp)
0814974f +0x02b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08149754 +0x030:  test   %al,%al
08149756 +0x032:  je     08149824 <+0x100>
0814975c +0x038:  mov    0x8(%ebp),%eax
0814975f +0x03b:  mov    0x4(%eax),%eax
08149762 +0x03e:  mov    -0xc(%ebp),%edx
08149765 +0x041:  mov    %edx,0x4(%esp)
08149769 +0x045:  mov    %eax,(%esp)
0814976c +0x048:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08149771 +0x04d:  cmp    0xc(%ebp),%eax
08149774 +0x050:  sete   %al
08149777 +0x053:  test   %al,%al
08149779 +0x055:  je     08149824 <+0x100>
0814977f +0x05b:  mov    -0xc(%ebp),%edx
08149782 +0x05e:  mov    0x8(%ebp),%eax
08149785 +0x061:  add    $0x274,%edx
0814978b +0x067:  mov    0x8(%eax,%edx,4),%eax
0814978f +0x06b:  test   %eax,%eax
08149791 +0x06d:  jne    081497aa <+0x86>
08149793 +0x06f:  mov    0xc(%ebp),%eax
08149796 +0x072:  mov    %eax,(%esp)
08149799 +0x075:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0814979e +0x07a:  cmp    $0xc,%eax
081497a1 +0x07d:  jne    081497aa <+0x86>
081497a3 +0x07f:  mov    $0x1,%eax
081497a8 +0x084:  jmp    081497af <+0x8b>
081497aa +0x086:  mov    $0x0,%eax
081497af +0x08b:  test   %al,%al
081497b1 +0x08d:  je     081497ed <+0xc9>
081497b3 +0x08f:  mov    0xc(%ebp),%eax
081497b6 +0x092:  mov    %eax,(%esp)
081497b9 +0x095:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081497be +0x09a:  movl   $0x0,0x14(%esp)
081497c6 +0x0a2:  movl   $0x0,0x10(%esp)
081497ce +0x0aa:  movl   $0x1,0xc(%esp)
081497d6 +0x0b2:  movl   $0x13a,0x8(%esp)
081497de +0x0ba:  mov    0xc(%ebp),%edx
081497e1 +0x0bd:  mov    %edx,0x4(%esp)
081497e5 +0x0c1:  mov    %eax,(%esp)
081497e8 +0x0c4:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081497ed +0x0c9:  mov    0x8(%ebp),%eax
081497f0 +0x0cc:  mov    0x4(%eax),%eax
081497f3 +0x0cf:  movl   $0x2,0x8(%esp)
081497fb +0x0d7:  mov    0xc(%ebp),%edx
081497fe +0x0da:  mov    %edx,0x4(%esp)
08149802 +0x0de:  mov    %eax,(%esp)
08149805 +0x0e1:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0814980a +0x0e6:  movl   $0x0,0x8(%esp)
08149812 +0x0ee:  mov    -0xc(%ebp),%eax
08149815 +0x0f1:  mov    %eax,0x4(%esp)
08149819 +0x0f5:  mov    0x8(%ebp),%eax
0814981c +0x0f8:  mov    %eax,(%esp)
0814981f +0x0fb:  call   0814a7e4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x583>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x583
08149824 +0x100:  addl   $0x1,-0xc(%ebp)
08149828 +0x104:  cmpl   $0x3,-0xc(%ebp)
0814982c +0x108:  setle  %al
0814982f +0x10b:  test   %al,%al
08149831 +0x10d:  jne    0814973f <+0x1b>
08149837 +0x113:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0814983c +0x118:  mov    0xc(%ebp),%edx
0814983f +0x11b:  mov    %edx,0x4(%esp)
08149843 +0x11f:  mov    %eax,(%esp)
08149846 +0x122:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
0814984b +0x127:  lea    -0x18(%ebp),%eax
0814984e +0x12a:  mov    %eax,(%esp)
08149851 +0x12d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08149856 +0x132:  movl   $0x2,0x8(%esp)
0814985e +0x13a:  movl   $0x0,0x4(%esp)
08149866 +0x142:  lea    -0x18(%ebp),%eax
08149869 +0x145:  mov    %eax,(%esp)
0814986c +0x148:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08149871 +0x14d:  movl   $0x0,0x4(%esp)
08149879 +0x155:  lea    -0x18(%ebp),%eax
0814987c +0x158:  mov    %eax,(%esp)
0814987f +0x15b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08149884 +0x160:  movl   $0x1,0x4(%esp)
0814988c +0x168:  lea    -0x18(%ebp),%eax
0814988f +0x16b:  mov    %eax,(%esp)
08149892 +0x16e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08149897 +0x173:  lea    -0x18(%ebp),%eax
0814989a +0x176:  movl   $0x0,0x8(%esp)
081498a2 +0x17e:  mov    %eax,0x4(%esp)
081498a6 +0x182:  mov    0xc(%ebp),%eax
081498a9 +0x185:  mov    %eax,(%esp)
081498ac +0x188:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
081498b1 +0x18d:  movl   $0x1,0x4(%esp)
081498b9 +0x195:  lea    -0x18(%ebp),%eax
081498bc +0x198:  mov    %eax,(%esp)
081498bf +0x19b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081498c4 +0x1a0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081498c9 +0x1a5:  mov    0xc(%ebp),%edx
081498cc +0x1a8:  mov    %edx,0x8(%esp)
081498d0 +0x1ac:  lea    -0x18(%ebp),%edx
081498d3 +0x1af:  mov    %edx,0x4(%esp)
081498d7 +0x1b3:  mov    %eax,(%esp)
081498da +0x1b6:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
081498df +0x1bb:  mov    $0x1,%ebx
081498e4 +0x1c0:  lea    -0x18(%ebp),%eax
081498e7 +0x1c3:  mov    %eax,(%esp)
081498ea +0x1c6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081498ef +0x1cb:  mov    %ebx,%eax
081498f1 +0x1cd:  add    $0x30,%esp
081498f4 +0x1d0:  pop    %ebx
081498f5 +0x1d1:  pop    %esi
081498f6 +0x1d2:  pop    %ebp
081498f7 +0x1d3:  ret
081498f8 +0x1d4:  mov    %edx,%ebx
081498fa +0x1d6:  mov    %eax,%esi
081498fc +0x1d8:  lea    -0x18(%ebp),%eax
081498ff +0x1db:  mov    %eax,(%esp)
08149902 +0x1de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08149907 +0x1e3:  mov    %esi,%eax
08149909 +0x1e5:  mov    %ebx,%edx
0814990b +0x1e7:  mov    %eax,(%esp)
0814990e +0x1ea:  call   08ae3750 <_Unwind_Resume>
08149913 +0x1ef:  nop
```

## 反编译 C

```c
// WongWork::CBossPlay::handleLeaveUser @ 0x8149724

/* WongWork::CBossPlay::handleLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CBossPlay::handleLeaveUser(CBossPlay *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CUser *pCVar3;
  int iVar4;
  CHackAnalyzer *pCVar5;
  GameWorld *pGVar6;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      pGVar6 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_dungeon(pGVar6,param_1);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0814986c to 081498de has its CatchHandler @ 081498f8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      CUser::make_basic_info(param_1,(char *)local_1c,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar6 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar6,local_1c,param_1);
      PacketGuard::~PacketGuard(local_1c);
      return 1;
    }
    cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if (cVar2 != '\0') {
      pCVar3 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_10);
      if (pCVar3 == param_1) {
        if (*(int *)(this + (local_10 + 0x274) * 4 + 8) == 0) {
          iVar4 = CUser::get_state(param_1);
          if (iVar4 != 0xc) goto LAB_081497aa;
          bVar1 = true;
        }
        else {
LAB_081497aa:
          bVar1 = false;
        }
        if (bVar1) {
          pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x13a,1,0,0);
        }
        CParty::leave_user(*(CParty **)(this + 4),param_1,2);
        setMemberAlive(this,local_10,false);
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
