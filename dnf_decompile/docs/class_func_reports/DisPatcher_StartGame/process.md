# process

`_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_StartGame` | `0x081ca2fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca2fe  _ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ca2fe, 0x081ca4f1]
081ca2fe +0x000:  push   %ebp
081ca2ff +0x001:  mov    %esp,%ebp
081ca301 +0x003:  sub    $0x48,%esp
081ca304 +0x006:  mov    0x14(%ebp),%eax
081ca307 +0x009:  mov    %eax,-0x1c(%ebp)
081ca30a +0x00c:  mov    0x14(%ebp),%eax
081ca30d +0x00f:  mov    %eax,0xc(%esp)
081ca311 +0x013:  mov    0x10(%ebp),%eax
081ca314 +0x016:  mov    %eax,0x8(%esp)
081ca318 +0x01a:  mov    0xc(%ebp),%eax
081ca31b +0x01d:  mov    %eax,0x4(%esp)
081ca31f +0x021:  mov    0x8(%ebp),%eax
081ca322 +0x024:  mov    %eax,(%esp)
081ca325 +0x027:  call   081c9f6c <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_StartGame::check_error(CUser*, MSG_BASE&, ParamBase&)
081ca32a +0x02c:  mov    %eax,%edx
081ca32c +0x02e:  mov    -0x1c(%ebp),%eax
081ca32f +0x031:  mov    %edx,0x4(%eax)
081ca332 +0x034:  mov    -0x1c(%ebp),%eax
081ca335 +0x037:  mov    0x4(%eax),%eax
081ca338 +0x03a:  test   %eax,%eax
081ca33a +0x03c:  jle    081ca346 <+0x48>
081ca33c +0x03e:  mov    $0x0,%eax
081ca341 +0x043:  jmp    081ca4ef <+0x1f1>
081ca346 +0x048:  mov    -0x1c(%ebp),%eax
081ca349 +0x04b:  mov    0x4(%eax),%eax
081ca34c +0x04e:  test   %eax,%eax
081ca34e +0x050:  jns    081ca382 <+0x84>
081ca350 +0x052:  mov    0xc(%ebp),%eax
081ca353 +0x055:  mov    %eax,(%esp)
081ca356 +0x058:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ca35b +0x05d:  mov    -0x1c(%ebp),%edx
081ca35e +0x060:  mov    0x4(%edx),%edx
081ca361 +0x063:  mov    %eax,0xc(%esp)
081ca365 +0x067:  mov    %edx,0x8(%esp)
081ca369 +0x06b:  movl   $&_ZZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ca371 +0x073:  movl   $0x1e5b,(%esp)
081ca378 +0x07a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ca37d +0x07f:  jmp    081ca4ef <+0x1f1>
081ca382 +0x084:  movb   $0x0,-0x15(%ebp)
081ca386 +0x088:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ca38b +0x08d:  mov    0xc(%ebp),%edx
081ca38e +0x090:  mov    %edx,0x4(%esp)
081ca392 +0x094:  mov    %eax,(%esp)
081ca395 +0x097:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
081ca39a +0x09c:  mov    %eax,-0x14(%ebp)
081ca39d +0x09f:  cmpl   $0x0,-0x14(%ebp)
081ca3a1 +0x0a3:  jle    081ca3d4 <+0xd6>
081ca3a3 +0x0a5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ca3a8 +0x0aa:  lea    0x8780(%eax),%edx
081ca3ae +0x0b0:  mov    -0x14(%ebp),%eax
081ca3b1 +0x0b3:  mov    %eax,0x4(%esp)
081ca3b5 +0x0b7:  mov    %edx,(%esp)
081ca3b8 +0x0ba:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
081ca3bd +0x0bf:  mov    %eax,-0xc(%ebp)
081ca3c0 +0x0c2:  cmpl   $0x0,-0xc(%ebp)
081ca3c4 +0x0c6:  je     081ca3d4 <+0xd6>
081ca3c6 +0x0c8:  mov    -0xc(%ebp),%eax
081ca3c9 +0x0cb:  mov    %eax,(%esp)
081ca3cc +0x0ce:  call   0822b520 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbca
081ca3d1 +0x0d3:  mov    %al,-0x15(%ebp)
081ca3d4 +0x0d6:  movl   $0x0,-0x10(%ebp)
081ca3db +0x0dd:  mov    0xc(%ebp),%eax
081ca3de +0x0e0:  mov    %eax,(%esp)
081ca3e1 +0x0e3:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081ca3e6 +0x0e8:  test   %al,%al
081ca3e8 +0x0ea:  je     081ca432 <+0x134>
081ca3ea +0x0ec:  mov    0xc(%ebp),%eax
081ca3ed +0x0ef:  mov    %eax,(%esp)
081ca3f0 +0x0f2:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ca3f5 +0x0f7:  cmp    $0x3,%eax
081ca3f8 +0x0fa:  sete   %al
081ca3fb +0x0fd:  test   %al,%al
081ca3fd +0x0ff:  je     081ca4ea <+0x1ec>
081ca403 +0x105:  mov    0xc(%ebp),%eax
081ca406 +0x108:  mov    %eax,(%esp)
081ca409 +0x10b:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ca40e +0x110:  mov    %eax,-0x10(%ebp)
081ca411 +0x113:  cmpl   $0x0,-0x10(%ebp)
081ca415 +0x117:  je     081ca4ea <+0x1ec>
081ca41b +0x11d:  mov    0xc(%ebp),%eax
081ca41e +0x120:  mov    %eax,0x4(%esp)
081ca422 +0x124:  mov    -0x10(%ebp),%eax
081ca425 +0x127:  mov    %eax,(%esp)
081ca428 +0x12a:  call   0859d718 <_ZN6CParty10game_startEP5CUser>  ; CParty::game_start(CUser*)
081ca42d +0x12f:  jmp    081ca4ea <+0x1ec>
081ca432 +0x134:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ca437 +0x139:  mov    %eax,(%esp)
081ca43a +0x13c:  call   08294e10 <_ZN12CGameManager8GetPartyEv>  ; CGameManager::GetParty()
081ca43f +0x141:  mov    %eax,-0x10(%ebp)
081ca442 +0x144:  cmpl   $0x0,-0x10(%ebp)
081ca446 +0x148:  je     081ca4be <+0x1c0>
081ca448 +0x14a:  mov    0xc(%ebp),%eax
081ca44b +0x14d:  mov    %eax,0x4(%esp)
081ca44f +0x151:  mov    0x8(%ebp),%eax
081ca452 +0x154:  mov    %eax,(%esp)
081ca455 +0x157:  call   081ca2a8 <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser>  ; DisPatcher_StartGame::excludeAddHackCount(CUser*)
081ca45a +0x15c:  test   %al,%al
081ca45c +0x15e:  je     081ca498 <+0x19a>
081ca45e +0x160:  mov    0xc(%ebp),%eax
081ca461 +0x163:  mov    %eax,(%esp)
081ca464 +0x166:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ca469 +0x16b:  movl   $0x0,0x14(%esp)
081ca471 +0x173:  movl   $0x0,0x10(%esp)
081ca479 +0x17b:  movl   $0x1,0xc(%esp)
081ca481 +0x183:  movl   $0x1f6,0x8(%esp)
081ca489 +0x18b:  mov    0xc(%ebp),%edx
081ca48c +0x18e:  mov    %edx,0x4(%esp)
081ca490 +0x192:  mov    %eax,(%esp)
081ca493 +0x195:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ca498 +0x19a:  mov    0xc(%ebp),%eax
081ca49b +0x19d:  mov    %eax,0x4(%esp)
081ca49f +0x1a1:  mov    -0x10(%ebp),%eax
081ca4a2 +0x1a4:  mov    %eax,(%esp)
081ca4a5 +0x1a7:  call   0859b142 <_ZN6CParty15set_single_playEP5CUser>  ; CParty::set_single_play(CUser*)
081ca4aa +0x1ac:  mov    0xc(%ebp),%eax
081ca4ad +0x1af:  mov    %eax,0x4(%esp)
081ca4b1 +0x1b3:  mov    -0x10(%ebp),%eax
081ca4b4 +0x1b6:  mov    %eax,(%esp)
081ca4b7 +0x1b9:  call   0859d718 <_ZN6CParty10game_startEP5CUser>  ; CParty::game_start(CUser*)
081ca4bc +0x1be:  jmp    081ca4ea <+0x1ec>
081ca4be +0x1c0:  movl   $"cant party memory : you must free party memory!!!",0x10(%esp)
081ca4c6 +0x1c8:  movl   $0x1e99,0xc(%esp)
081ca4ce +0x1d0:  movl   $&_ZZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081ca4d6 +0x1d8:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081ca4de +0x1e0:  movl   $0x1,(%esp)
081ca4e5 +0x1e7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081ca4ea +0x1ec:  mov    $0x0,%eax
081ca4ef +0x1f1:  leave
081ca4f0 +0x1f2:  ret
081ca4f1 +0x1f3:  nop
```

## 反编译 C

```c
// DisPatcher_StartGame::process @ 0x81ca2fe

/* DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_StartGame::process
          (DisPatcher_StartGame *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  GameWorld *this_00;
  int iVar4;
  CWorldMap *this_01;
  CParty *pCVar5;
  CGameManager *this_02;
  CHackAnalyzer *pCVar6;
  
  uVar2 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x1e5b,
                       "virtual int DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar3);
    }
    else {
      this_00 = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::GetWorldMapIndex(this_00,param_1);
      if (0 < iVar4) {
        iVar4 = G_CDataManager();
        this_01 = (CWorldMap *)CWorldMapList::find_world_map(iVar4 + 0x8780);
        if (this_01 != (CWorldMap *)0x0) {
          CWorldMap::hasDeathTower(this_01);
        }
      }
      cVar1 = CUser::CheckInParty(param_1);
      if (cVar1 == '\0') {
        this_02 = (CGameManager *)G_CGameManager();
        pCVar5 = (CParty *)CGameManager::GetParty(this_02);
        if (pCVar5 == (CParty *)0x0) {
          LogManager::logFormat
                    (1,"PacketDispatcher_Impl_1.cpp",
                     "virtual int DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)",
                     0x1e99,"cant party memory : you must free party memory!!!");
        }
        else {
          cVar1 = excludeAddHackCount(this,param_1);
          if (cVar1 != '\0') {
            pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x1f6,1,0,0);
          }
          CParty::set_single_play(pCVar5,param_1);
          CParty::game_start(pCVar5,param_1);
        }
      }
      else {
        iVar4 = CUser::get_state(param_1);
        if (iVar4 == 3) {
          pCVar5 = (CParty *)CUser::GetParty(param_1);
          if (pCVar5 != (CParty *)0x0) {
            CParty::game_start(pCVar5,param_1);
          }
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
