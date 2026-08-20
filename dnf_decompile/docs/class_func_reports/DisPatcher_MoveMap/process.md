# process

`_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_MoveMap::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveMap` | `0x081c5330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5330  _ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_MoveMap::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c5330, 0x081c54df]
081c5330 +0x000:  push   %ebp
081c5331 +0x001:  mov    %esp,%ebp
081c5333 +0x003:  sub    $0x38,%esp
081c5336 +0x006:  mov    0x14(%ebp),%eax
081c5339 +0x009:  mov    %eax,-0x18(%ebp)
081c533c +0x00c:  mov    0x10(%ebp),%eax
081c533f +0x00f:  mov    %eax,0x8(%esp)
081c5343 +0x013:  mov    0xc(%ebp),%eax
081c5346 +0x016:  mov    %eax,0x4(%esp)
081c534a +0x01a:  mov    0x8(%ebp),%eax
081c534d +0x01d:  mov    %eax,(%esp)
081c5350 +0x020:  call   081c4a90 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_MoveMap::check_error(CUser*, MSG_BASE&)
081c5355 +0x025:  mov    %eax,%edx
081c5357 +0x027:  mov    -0x18(%ebp),%eax
081c535a +0x02a:  mov    %edx,0x4(%eax)
081c535d +0x02d:  mov    -0x18(%ebp),%eax
081c5360 +0x030:  mov    0x4(%eax),%eax
081c5363 +0x033:  test   %eax,%eax
081c5365 +0x035:  jle    081c5371 <+0x41>
081c5367 +0x037:  mov    $0x0,%eax
081c536c +0x03c:  jmp    081c54de <+0x1ae>
081c5371 +0x041:  mov    -0x18(%ebp),%eax
081c5374 +0x044:  mov    0x4(%eax),%eax
081c5377 +0x047:  test   %eax,%eax
081c5379 +0x049:  jns    081c53ad <+0x7d>
081c537b +0x04b:  mov    0xc(%ebp),%eax
081c537e +0x04e:  mov    %eax,(%esp)
081c5381 +0x051:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c5386 +0x056:  mov    -0x18(%ebp),%edx
081c5389 +0x059:  mov    0x4(%edx),%edx
081c538c +0x05c:  mov    %eax,0xc(%esp)
081c5390 +0x060:  mov    %edx,0x8(%esp)
081c5394 +0x064:  movl   $&_ZZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c539c +0x06c:  movl   $0x1268,(%esp)
081c53a3 +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c53a8 +0x078:  jmp    081c54de <+0x1ae>
081c53ad +0x07d:  mov    0x10(%ebp),%eax
081c53b0 +0x080:  mov    %eax,-0x14(%ebp)
081c53b3 +0x083:  mov    -0x14(%ebp),%eax
081c53b6 +0x086:  movzbl 0x1a(%eax),%eax
081c53ba +0x08a:  xor    $0x1,%eax
081c53bd +0x08d:  test   %al,%al
081c53bf +0x08f:  je     081c53fb <+0xcb>
081c53c1 +0x091:  mov    0xc(%ebp),%eax
081c53c4 +0x094:  mov    %eax,(%esp)
081c53c7 +0x097:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c53cc +0x09c:  movl   $0x0,0x14(%esp)
081c53d4 +0x0a4:  movl   $0x0,0x10(%esp)
081c53dc +0x0ac:  movl   $0x1,0xc(%esp)
081c53e4 +0x0b4:  movl   $0x25a,0x8(%esp)
081c53ec +0x0bc:  mov    0xc(%ebp),%edx
081c53ef +0x0bf:  mov    %edx,0x4(%esp)
081c53f3 +0x0c3:  mov    %eax,(%esp)
081c53f6 +0x0c6:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c53fb +0x0cb:  mov    0xc(%ebp),%eax
081c53fe +0x0ce:  mov    %eax,(%esp)
081c5401 +0x0d1:  call   0823080e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eb8
081c5406 +0x0d6:  mov    %eax,(%esp)
081c5409 +0x0d9:  call   0827a7f4 <_ZN17Secu_HackLogCheck7MoveMapEv>  ; Secu_HackLogCheck::MoveMap()
081c540e +0x0de:  mov    -0x14(%ebp),%eax
081c5411 +0x0e1:  mov    %eax,0x8(%esp)
081c5415 +0x0e5:  mov    0xc(%ebp),%eax
081c5418 +0x0e8:  mov    %eax,0x4(%esp)
081c541c +0x0ec:  mov    0x8(%ebp),%eax
081c541f +0x0ef:  mov    %eax,(%esp)
081c5422 +0x0f2:  call   081c4b7a <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP>  ; DisPatcher_MoveMap::CheckTrapBitsHackCnt(CUser*, MSG_MOVE_MAP&)
081c5427 +0x0f7:  mov    -0x14(%ebp),%eax
081c542a +0x0fa:  mov    %eax,0x8(%esp)
081c542e +0x0fe:  mov    0xc(%ebp),%eax
081c5431 +0x101:  mov    %eax,0x4(%esp)
081c5435 +0x105:  mov    0x8(%ebp),%eax
081c5438 +0x108:  mov    %eax,(%esp)
081c543b +0x10b:  call   081c4d26 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP>  ; DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt(CUser*, MSG_MOVE_MAP&)
081c5440 +0x110:  mov    -0x14(%ebp),%eax
081c5443 +0x113:  add    $0x1b,%eax
081c5446 +0x116:  mov    %eax,0x4(%esp)
081c544a +0x11a:  mov    0xc(%ebp),%eax
081c544d +0x11d:  mov    %eax,(%esp)
081c5450 +0x120:  call   08146ba2 <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt>  ; Global::CBossTowerFunc::MoveMap(CUser*, unsigned short*)
081c5455 +0x125:  test   %al,%al
081c5457 +0x127:  je     081c5460 <+0x130>
081c5459 +0x129:  mov    $0x0,%eax
081c545e +0x12e:  jmp    081c54de <+0x1ae>
081c5460 +0x130:  mov    0xc(%ebp),%eax
081c5463 +0x133:  mov    %eax,(%esp)
081c5466 +0x136:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c546b +0x13b:  mov    %eax,-0x10(%ebp)
081c546e +0x13e:  mov    -0x10(%ebp),%eax
081c5471 +0x141:  mov    %eax,(%esp)
081c5474 +0x144:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
081c5479 +0x149:  test   %al,%al
081c547b +0x14b:  je     081c54ad <+0x17d>
081c547d +0x14d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c5482 +0x152:  mov    %eax,(%esp)
081c5485 +0x155:  call   08298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>  ; CGameManager::GetSpecialItemRoutingManager()
081c548a +0x15a:  mov    %eax,-0xc(%ebp)
081c548d +0x15d:  cmpl   $0x0,-0xc(%ebp)
081c5491 +0x161:  je     081c54ad <+0x17d>
081c5493 +0x163:  movl   $0x0,0x8(%esp)
081c549b +0x16b:  mov    -0x10(%ebp),%eax
081c549e +0x16e:  mov    %eax,0x4(%esp)
081c54a2 +0x172:  mov    -0xc(%ebp),%eax
081c54a5 +0x175:  mov    %eax,(%esp)
081c54a8 +0x178:  call   0860b332 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi>  ; CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int)
081c54ad +0x17d:  mov    0xc(%ebp),%eax
081c54b0 +0x180:  mov    %eax,0x4(%esp)
081c54b4 +0x184:  mov    -0x10(%ebp),%eax
081c54b7 +0x187:  mov    %eax,(%esp)
081c54ba +0x18a:  call   085a277a <_ZN6CParty16get_party_seatnoEP5CUser>  ; CParty::get_party_seatno(CUser*)
081c54bf +0x18f:  mov    %eax,%edx
081c54c1 +0x191:  mov    -0x14(%ebp),%eax
081c54c4 +0x194:  mov    %dl,0x39(%eax)
081c54c7 +0x197:  mov    -0x14(%ebp),%eax
081c54ca +0x19a:  mov    %eax,0x4(%esp)
081c54ce +0x19e:  mov    -0x10(%ebp),%eax
081c54d1 +0x1a1:  mov    %eax,(%esp)
081c54d4 +0x1a4:  call   085a8f4e <_ZN6CParty8move_mapER12MSG_MOVE_MAP>  ; CParty::move_map(MSG_MOVE_MAP&)
081c54d9 +0x1a9:  mov    $0x0,%eax
081c54de +0x1ae:  leave
081c54df +0x1af:  ret
```

## 反编译 C

```c
// DisPatcher_MoveMap::process @ 0x81c5330

/* DisPatcher_MoveMap::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_MoveMap::process
          (DisPatcher_MoveMap *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  uint uVar4;
  CHackAnalyzer *pCVar5;
  Secu_HackLogCheck *this_00;
  CParty *this_01;
  CGameManager *this_02;
  CSpecialItemRoutingManager *this_03;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x1268,
                       "virtual int DisPatcher_MoveMap::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar4);
    }
    else {
      if (param_2[0x1a] != (MSG_BASE)0x1) {
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x25a,1,0,0);
      }
      this_00 = (Secu_HackLogCheck *)CUser::GetHackCheck(param_1);
      Secu_HackLogCheck::MoveMap(this_00);
      CheckTrapBitsHackCnt(this,param_1,(MSG_MOVE_MAP *)param_2);
      CheckOneMapPlayTimeHackCnt(this,param_1,(MSG_MOVE_MAP *)param_2);
      cVar1 = Global::CBossTowerFunc::MoveMap(param_1,(ushort *)(param_2 + 0x1b));
      if (cVar1 == '\0') {
        this_01 = (CParty *)CUser::GetParty(param_1);
        cVar1 = CParty::IsRoutingState(this_01);
        if (cVar1 != '\0') {
          this_02 = (CGameManager *)G_CGameManager();
          this_03 = (CSpecialItemRoutingManager *)
                    CGameManager::GetSpecialItemRoutingManager(this_02);
          if (this_03 != (CSpecialItemRoutingManager *)0x0) {
            CSpecialItemRoutingManager::ProcessFailEtc(this_03,this_01,0);
          }
        }
        MVar2 = (MSG_BASE)CParty::get_party_seatno(this_01,param_1);
        param_2[0x39] = MVar2;
        CParty::move_map(this_01,(MSG_MOVE_MAP *)param_2);
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
