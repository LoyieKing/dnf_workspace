# check_error

`_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_StartGame::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_StartGame` | `0x081c9f6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9f6c  _ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_StartGame::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c9f6c, 0x081ca2a7]
081c9f6c +0x000:  push   %ebp
081c9f6d +0x001:  mov    %esp,%ebp
081c9f6f +0x003:  push   %ebx
081c9f70 +0x004:  sub    $0x34,%esp
081c9f73 +0x007:  mov    0xc(%ebp),%eax
081c9f76 +0x00a:  mov    %eax,(%esp)
081c9f79 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c9f7e +0x012:  cmp    $0x3,%eax
081c9f81 +0x015:  je     081c9f9a <+0x2e>
081c9f83 +0x017:  mov    0xc(%ebp),%eax
081c9f86 +0x01a:  mov    %eax,(%esp)
081c9f89 +0x01d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c9f8e +0x022:  cmp    $0xb,%eax
081c9f91 +0x025:  je     081c9f9a <+0x2e>
081c9f93 +0x027:  mov    $0x1,%eax
081c9f98 +0x02c:  jmp    081c9f9f <+0x33>
081c9f9a +0x02e:  mov    $0x0,%eax
081c9f9f +0x033:  test   %al,%al
081c9fa1 +0x035:  je     081c9fad <+0x41>
081c9fa3 +0x037:  mov    $0x7fffffff,%eax
081c9fa8 +0x03c:  jmp    081ca2a2 <+0x336>
081c9fad +0x041:  mov    0x14(%ebp),%eax
081c9fb0 +0x044:  mov    %eax,-0x18(%ebp)
081c9fb3 +0x047:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c9fb8 +0x04c:  mov    %eax,(%esp)
081c9fbb +0x04f:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081c9fc0 +0x054:  test   %al,%al
081c9fc2 +0x056:  je     081c9fd8 <+0x6c>
081c9fc4 +0x058:  mov    -0x18(%ebp),%eax
081c9fc7 +0x05b:  movl   $0xffffffff,0x8(%eax)
081c9fce +0x062:  mov    $0x8,%eax
081c9fd3 +0x067:  jmp    081ca2a2 <+0x336>
081c9fd8 +0x06c:  mov    0xc(%ebp),%eax
081c9fdb +0x06f:  mov    %eax,(%esp)
081c9fde +0x072:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081c9fe3 +0x077:  test   %al,%al
081c9fe5 +0x079:  je     081c9ffb <+0x8f>
081c9fe7 +0x07b:  mov    -0x18(%ebp),%eax
081c9fea +0x07e:  movl   $0xffffffff,0x8(%eax)
081c9ff1 +0x085:  mov    $0x13,%eax
081c9ff6 +0x08a:  jmp    081ca2a2 <+0x336>
081c9ffb +0x08f:  mov    0xc(%ebp),%eax
081c9ffe +0x092:  mov    %eax,(%esp)
081ca001 +0x095:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
081ca006 +0x09a:  test   %al,%al
081ca008 +0x09c:  je     081ca01e <+0xb2>
081ca00a +0x09e:  mov    -0x18(%ebp),%eax
081ca00d +0x0a1:  movl   $0xffffffff,0x8(%eax)
081ca014 +0x0a8:  mov    $0xea,%eax
081ca019 +0x0ad:  jmp    081ca2a2 <+0x336>
081ca01e +0x0b2:  mov    0xc(%ebp),%eax
081ca021 +0x0b5:  mov    %eax,(%esp)
081ca024 +0x0b8:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ca029 +0x0bd:  mov    %eax,-0x14(%ebp)
081ca02c +0x0c0:  cmpl   $0x0,-0x14(%ebp)
081ca030 +0x0c4:  je     081ca09e <+0x132>
081ca032 +0x0c6:  mov    -0x14(%ebp),%eax
081ca035 +0x0c9:  mov    %eax,(%esp)
081ca038 +0x0cc:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081ca03d +0x0d1:  mov    %eax,(%esp)
081ca040 +0x0d4:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
081ca045 +0x0d9:  test   %al,%al
081ca047 +0x0db:  js     081ca067 <+0xfb>
081ca049 +0x0dd:  mov    -0x14(%ebp),%eax
081ca04c +0x0e0:  mov    %eax,(%esp)
081ca04f +0x0e3:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081ca054 +0x0e8:  mov    %eax,(%esp)
081ca057 +0x0eb:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
081ca05c +0x0f0:  cmp    $0x3,%al
081ca05e +0x0f2:  jg     081ca067 <+0xfb>
081ca060 +0x0f4:  mov    $0x1,%eax
081ca065 +0x0f9:  jmp    081ca06c <+0x100>
081ca067 +0x0fb:  mov    $0x0,%eax
081ca06c +0x100:  test   %al,%al
081ca06e +0x102:  je     081ca09e <+0x132>
081ca070 +0x104:  mov    -0x14(%ebp),%eax
081ca073 +0x107:  mov    %eax,(%esp)
081ca076 +0x10a:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081ca07b +0x10f:  mov    %eax,(%esp)
081ca07e +0x112:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
081ca083 +0x117:  mov    -0x14(%ebp),%eax
081ca086 +0x11a:  mov    %eax,(%esp)
081ca089 +0x11d:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081ca08e +0x122:  movl   $0x0,0x4(%esp)
081ca096 +0x12a:  mov    %eax,(%esp)
081ca099 +0x12d:  call   085bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>  ; CPartyTelePort::send_teleport_status(unsigned char)
081ca09e +0x132:  mov    0xc(%ebp),%eax
081ca0a1 +0x135:  mov    %eax,(%esp)
081ca0a4 +0x138:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081ca0a9 +0x13d:  mov    %eax,%ebx
081ca0ab +0x13f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ca0b0 +0x144:  mov    %ebx,0x4(%esp)
081ca0b4 +0x148:  mov    %eax,(%esp)
081ca0b7 +0x14b:  call   086cdab4 <_ZN9GameWorld15IsForbiddenMoveEPKc>  ; GameWorld::IsForbiddenMove(char const*)
081ca0bc +0x150:  test   %al,%al
081ca0be +0x152:  je     081ca119 <+0x1ad>
081ca0c0 +0x154:  mov    0xc(%ebp),%eax
081ca0c3 +0x157:  mov    %eax,(%esp)
081ca0c6 +0x15a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081ca0cb +0x15f:  mov    %eax,%ebx
081ca0cd +0x161:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ca0d2 +0x166:  mov    %ebx,0x4(%esp)
081ca0d6 +0x16a:  mov    %eax,(%esp)
081ca0d9 +0x16d:  call   086ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>  ; GameWorld::GetLeftTimeOfForbiddenMove(char const*)
081ca0de +0x172:  test   %eax,%eax
081ca0e0 +0x174:  setne  %al
081ca0e3 +0x177:  test   %al,%al
081ca0e5 +0x179:  je     081ca0fb <+0x18f>
081ca0e7 +0x17b:  mov    -0x18(%ebp),%eax
081ca0ea +0x17e:  movl   $0x0,0x8(%eax)
081ca0f1 +0x185:  mov    $0x44,%eax
081ca0f6 +0x18a:  jmp    081ca2a2 <+0x336>
081ca0fb +0x18f:  mov    0xc(%ebp),%eax
081ca0fe +0x192:  mov    %eax,(%esp)
081ca101 +0x195:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081ca106 +0x19a:  mov    %eax,%ebx
081ca108 +0x19c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ca10d +0x1a1:  mov    %ebx,0x4(%esp)
081ca111 +0x1a5:  mov    %eax,(%esp)
081ca114 +0x1a8:  call   086cde5a <_ZN9GameWorld10EnableMoveEPKc>  ; GameWorld::EnableMove(char const*)
081ca119 +0x1ad:  movl   $0x0,-0x14(%ebp)
081ca120 +0x1b4:  mov    0xc(%ebp),%eax
081ca123 +0x1b7:  mov    %eax,(%esp)
081ca126 +0x1ba:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081ca12b +0x1bf:  test   %al,%al
081ca12d +0x1c1:  je     081ca29d <+0x331>
081ca133 +0x1c7:  mov    0xc(%ebp),%eax
081ca136 +0x1ca:  mov    %eax,(%esp)
081ca139 +0x1cd:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ca13e +0x1d2:  cmp    $0x3,%eax
081ca141 +0x1d5:  sete   %al
081ca144 +0x1d8:  test   %al,%al
081ca146 +0x1da:  je     081ca29d <+0x331>
081ca14c +0x1e0:  mov    0xc(%ebp),%eax
081ca14f +0x1e3:  mov    %eax,(%esp)
081ca152 +0x1e6:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ca157 +0x1eb:  mov    %eax,-0x14(%ebp)
081ca15a +0x1ee:  cmpl   $0x0,-0x14(%ebp)
081ca15e +0x1f2:  je     081ca29d <+0x331>
081ca164 +0x1f8:  mov    -0x14(%ebp),%eax
081ca167 +0x1fb:  mov    %eax,(%esp)
081ca16a +0x1fe:  call   0859d656 <_ZN6CParty15CheckMemberAreaEv>  ; CParty::CheckMemberArea()
081ca16f +0x203:  xor    $0x1,%eax
081ca172 +0x206:  test   %al,%al
081ca174 +0x208:  je     081ca18f <+0x223>
081ca176 +0x20a:  mov    -0x14(%ebp),%eax
081ca179 +0x20d:  mov    %eax,(%esp)
081ca17c +0x210:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
081ca181 +0x215:  xor    $0x1,%eax
081ca184 +0x218:  test   %al,%al
081ca186 +0x21a:  je     081ca18f <+0x223>
081ca188 +0x21c:  mov    $0x1,%eax
081ca18d +0x221:  jmp    081ca194 <+0x228>
081ca18f +0x223:  mov    $0x0,%eax
081ca194 +0x228:  test   %al,%al
081ca196 +0x22a:  je     081ca1ac <+0x240>
081ca198 +0x22c:  mov    -0x18(%ebp),%eax
081ca19b +0x22f:  movl   $0xffffffff,0x8(%eax)
081ca1a2 +0x236:  mov    $0x15,%eax
081ca1a7 +0x23b:  jmp    081ca2a2 <+0x336>
081ca1ac +0x240:  mov    0xc(%ebp),%eax
081ca1af +0x243:  mov    %eax,0x4(%esp)
081ca1b3 +0x247:  mov    0x8(%ebp),%eax
081ca1b6 +0x24a:  mov    %eax,(%esp)
081ca1b9 +0x24d:  call   081ca2a8 <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser>  ; DisPatcher_StartGame::excludeAddHackCount(CUser*)
081ca1be +0x252:  test   %al,%al
081ca1c0 +0x254:  je     081ca1fc <+0x290>
081ca1c2 +0x256:  mov    0xc(%ebp),%eax
081ca1c5 +0x259:  mov    %eax,(%esp)
081ca1c8 +0x25c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ca1cd +0x261:  movl   $0x0,0x14(%esp)
081ca1d5 +0x269:  movl   $0x0,0x10(%esp)
081ca1dd +0x271:  movl   $0x1,0xc(%esp)
081ca1e5 +0x279:  movl   $0x1f6,0x8(%esp)
081ca1ed +0x281:  mov    0xc(%ebp),%edx
081ca1f0 +0x284:  mov    %edx,0x4(%esp)
081ca1f4 +0x288:  mov    %eax,(%esp)
081ca1f7 +0x28b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ca1fc +0x290:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ca201 +0x295:  mov    0xc(%ebp),%edx
081ca204 +0x298:  mov    %edx,0x4(%esp)
081ca208 +0x29c:  mov    %eax,(%esp)
081ca20b +0x29f:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
081ca210 +0x2a4:  mov    %eax,-0x10(%ebp)
081ca213 +0x2a7:  cmpl   $0x0,-0x10(%ebp)
081ca217 +0x2ab:  jle    081ca296 <+0x32a>
081ca219 +0x2ad:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ca21e +0x2b2:  lea    0x8780(%eax),%edx
081ca224 +0x2b8:  mov    -0x10(%ebp),%eax
081ca227 +0x2bb:  mov    %eax,0x4(%esp)
081ca22b +0x2bf:  mov    %edx,(%esp)
081ca22e +0x2c2:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
081ca233 +0x2c7:  mov    %eax,-0xc(%ebp)
081ca236 +0x2ca:  cmpl   $0x0,-0xc(%ebp)
081ca23a +0x2ce:  jne    081ca24d <+0x2e1>
081ca23c +0x2d0:  mov    -0x18(%ebp),%eax
081ca23f +0x2d3:  movl   $0xffffffff,0x8(%eax)
081ca246 +0x2da:  mov    $0x15,%eax
081ca24b +0x2df:  jmp    081ca2a2 <+0x336>
081ca24d +0x2e1:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
081ca252 +0x2e6:  mov    %eax,(%esp)
081ca255 +0x2e9:  call   08234ff6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6a0
081ca25a +0x2ee:  xor    $0x1,%eax
081ca25d +0x2f1:  test   %al,%al
081ca25f +0x2f3:  je     081ca296 <+0x32a>
081ca261 +0x2f5:  mov    -0xc(%ebp),%eax
081ca264 +0x2f8:  mov    %eax,(%esp)
081ca267 +0x2fb:  call   0822b514 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbbe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbbe
081ca26c +0x300:  mov    %eax,%ebx
081ca26e +0x302:  mov    -0x14(%ebp),%eax
081ca271 +0x305:  mov    %eax,(%esp)
081ca274 +0x308:  call   085b603e <_ZN6CParty17getMemberMinLevelEv>  ; CParty::getMemberMinLevel()
081ca279 +0x30d:  add    $0x6,%eax
081ca27c +0x310:  cmp    %eax,%ebx
081ca27e +0x312:  setge  %al
081ca281 +0x315:  test   %al,%al
081ca283 +0x317:  je     081ca296 <+0x32a>
081ca285 +0x319:  mov    -0x18(%ebp),%eax
081ca288 +0x31c:  movl   $0xffffffff,0x8(%eax)
081ca28f +0x323:  mov    $0xe,%eax
081ca294 +0x328:  jmp    081ca2a2 <+0x336>
081ca296 +0x32a:  mov    $0x0,%eax
081ca29b +0x32f:  jmp    081ca2a2 <+0x336>
081ca29d +0x331:  mov    $0x0,%eax
081ca2a2 +0x336:  add    $0x34,%esp
081ca2a5 +0x339:  pop    %ebx
081ca2a6 +0x33a:  pop    %ebp
081ca2a7 +0x33b:  ret
```

## 反编译 C

```c
// DisPatcher_StartGame::check_error @ 0x81c9f6c

/* DisPatcher_StartGame::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_StartGame::check_error
          (DisPatcher_StartGame *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  CParty *pCVar5;
  CPartyTelePort *pCVar6;
  char *pcVar7;
  CHackAnalyzer *pCVar8;
  CWorldMap *this_00;
  int iVar9;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) || (iVar3 = CUser::get_state(param_1), iVar3 == 0xb)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x7fffffff;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    return 8;
  }
  cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    return 0x13;
  }
  cVar2 = CUser::isCompetitionMercenary(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    return 0xea;
  }
  pCVar5 = (CParty *)CUser::GetParty(param_1);
  if (pCVar5 == (CParty *)0x0) goto LAB_081ca09e;
  pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar6);
  if (cVar2 < '\0') {
LAB_081ca067:
    bVar1 = false;
  }
  else {
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar6);
    if ('\x03' < cVar2) goto LAB_081ca067;
    bVar1 = true;
  }
  if (bVar1) {
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
    CPartyTelePort::reset_teleport_data(pCVar6);
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
    CPartyTelePort::send_teleport_status(pCVar6,'\0');
  }
LAB_081ca09e:
  pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsForbiddenMove(pGVar4,pcVar7);
  if (cVar2 != '\0') {
    pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetLeftTimeOfForbiddenMove(pGVar4,pcVar7);
    if (iVar3 != 0) {
      *(undefined4 *)(param_3 + 8) = 0;
      return 0x44;
    }
    pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::EnableMove(pGVar4,pcVar7);
  }
  cVar2 = CUser::CheckInParty(param_1);
  if (((cVar2 != '\0') && (iVar3 = CUser::get_state(param_1), iVar3 == 3)) &&
     (pCVar5 = (CParty *)CUser::GetParty(param_1), pCVar5 != (CParty *)0x0)) {
    cVar2 = CParty::CheckMemberArea(pCVar5);
    if ((cVar2 == '\x01') || (cVar2 = CParty::is_quick_party(pCVar5), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_3 + 8) = 0xffffffff;
      return 0x15;
    }
    cVar2 = excludeAddHackCount(this,param_1);
    if (cVar2 != '\0') {
      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0x1f6,1,0,0);
    }
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetWorldMapIndex(pGVar4,param_1);
    if (0 < iVar3) {
      iVar3 = G_CDataManager();
      this_00 = (CWorldMap *)CWorldMapList::find_world_map(iVar3 + 0x8780);
      if (this_00 == (CWorldMap *)0x0) {
        *(undefined4 *)(param_3 + 8) = 0xffffffff;
        return 0x15;
      }
      cVar2 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon
                        (GlobalData::s_revengeDungeonMgr);
      if (cVar2 != '\x01') {
        iVar3 = CWorldMap::getDungeonMinLevel(this_00);
        iVar9 = CParty::getMemberMinLevel(pCVar5);
        if (iVar9 + 6 <= iVar3) {
          *(undefined4 *)(param_3 + 8) = 0xffffffff;
          return 0xe;
        }
      }
    }
    return 0;
  }
  return 0;
}
```
