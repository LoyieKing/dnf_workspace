# user_disconnect

`_ZN12CGameManager15user_disconnectEP5CUser`

`CGameManager::user_disconnect(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298b48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298b48  _ZN12CGameManager15user_disconnectEP5CUser
#           CGameManager::user_disconnect(CUser*)
# range [0x08298b48, 0x08298dbf]
08298b48 +0x000:  push   %ebp
08298b49 +0x001:  mov    %esp,%ebp
08298b4b +0x003:  sub    $0x28,%esp
08298b4e +0x006:  cmpl   $0x0,0xc(%ebp)
08298b52 +0x00a:  jne    08298b9f <+0x57>
08298b54 +0x00c:  movl   $0x5,0xc(%esp)
08298b5c +0x014:  movl   $0x138b,0x8(%esp)
08298b64 +0x01c:  movl   $&_ZZN12CGameManager15user_disconnectEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08298b6c +0x024:  lea    -0x18(%ebp),%eax
08298b6f +0x027:  mov    %eax,(%esp)
08298b72 +0x02a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08298b77 +0x02f:  movl   $0x138b,0xc(%esp)
08298b7f +0x037:  movl   $&_ZZN12CGameManager15user_disconnectEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08298b87 +0x03f:  movl   $"USER DISCONNECT [%s][%d]",0x4(%esp)
08298b8f +0x047:  lea    -0x18(%ebp),%eax
08298b92 +0x04a:  mov    %eax,(%esp)
08298b95 +0x04d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08298b9a +0x052:  jmp    08298dbd <+0x275>
08298b9f +0x057:  mov    0xc(%ebp),%eax
08298ba2 +0x05a:  mov    0x796f8(%eax),%eax
08298ba8 +0x060:  mov    %eax,(%esp)
08298bab +0x063:  call   084b9d34 <_ZN10HistoryLog8LogCloseEP8_IO_FILE>  ; HistoryLog::LogClose(_IO_FILE*)
08298bb0 +0x068:  mov    0xc(%ebp),%eax
08298bb3 +0x06b:  mov    %eax,(%esp)
08298bb6 +0x06e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08298bbb +0x073:  test   %eax,%eax
08298bbd +0x075:  sete   %al
08298bc0 +0x078:  test   %al,%al
08298bc2 +0x07a:  jne    08298dbc <+0x274>
08298bc8 +0x080:  mov    0xc(%ebp),%eax
08298bcb +0x083:  mov    %eax,(%esp)
08298bce +0x086:  call   086487ea <_ZN5CUser17prepareDisconnectEv>  ; CUser::prepareDisconnect()
08298bd3 +0x08b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08298bd8 +0x090:  mov    0xc(%ebp),%edx
08298bdb +0x093:  mov    %edx,0x4(%esp)
08298bdf +0x097:  mov    %eax,(%esp)
08298be2 +0x09a:  call   086cf602 <_ZN9GameWorld14EraseLoginUserEP5CUser>  ; GameWorld::EraseLoginUser(CUser*)
08298be7 +0x09f:  movl   $0x0,0x4(%esp)
08298bef +0x0a7:  mov    0xc(%ebp),%eax
08298bf2 +0x0aa:  mov    %eax,(%esp)
08298bf5 +0x0ad:  call   082a676a <_GLOBAL__I__ZN4CLog5this_E+0x2b91>  ; global constructors keyed to CLog::this_+0x2b91
08298bfa +0x0b2:  mov    0xc(%ebp),%eax
08298bfd +0x0b5:  mov    %eax,(%esp)
08298c00 +0x0b8:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08298c05 +0x0bd:  cmp    $0x2,%eax
08298c08 +0x0c0:  setg   %al
08298c0b +0x0c3:  test   %al,%al
08298c0d +0x0c5:  je     08298d5b <+0x213>
08298c13 +0x0cb:  mov    0xc(%ebp),%eax
08298c16 +0x0ce:  mov    %eax,0x4(%esp)
08298c1a +0x0d2:  mov    0x8(%ebp),%eax
08298c1d +0x0d5:  mov    %eax,(%esp)
08298c20 +0x0d8:  call   08297c14 <_ZN12CGameManager13CheckOutTradeEP5CUser>  ; CGameManager::CheckOutTrade(CUser*)
08298c25 +0x0dd:  movl   $0x1,0x8(%esp)
08298c2d +0x0e5:  mov    0xc(%ebp),%eax
08298c30 +0x0e8:  mov    %eax,0x4(%esp)
08298c34 +0x0ec:  mov    0x8(%ebp),%eax
08298c37 +0x0ef:  mov    %eax,(%esp)
08298c3a +0x0f2:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
08298c3f +0x0f7:  movl   $0x0,0x8(%esp)
08298c47 +0x0ff:  mov    0xc(%ebp),%eax
08298c4a +0x102:  mov    %eax,0x4(%esp)
08298c4e +0x106:  mov    0x8(%ebp),%eax
08298c51 +0x109:  mov    %eax,(%esp)
08298c54 +0x10c:  call   08297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>  ; CGameManager::CheckOutPvp(CUser*, bool)
08298c59 +0x111:  mov    0xc(%ebp),%eax
08298c5c +0x114:  mov    %eax,0x4(%esp)
08298c60 +0x118:  mov    0x8(%ebp),%eax
08298c63 +0x11b:  mov    %eax,(%esp)
08298c66 +0x11e:  call   08297df8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser>  ; CGameManager::CheckOutWarRoom(CUser*)
08298c6b +0x123:  mov    0xc(%ebp),%eax
08298c6e +0x126:  mov    %eax,0x4(%esp)
08298c72 +0x12a:  mov    0x8(%ebp),%eax
08298c75 +0x12d:  mov    %eax,(%esp)
08298c78 +0x130:  call   0829833a <_ZN12CGameManager18checkOutDeathTowerEP5CUser>  ; CGameManager::checkOutDeathTower(CUser*)
08298c7d +0x135:  mov    0xc(%ebp),%eax
08298c80 +0x138:  mov    %eax,0x4(%esp)
08298c84 +0x13c:  mov    0x8(%ebp),%eax
08298c87 +0x13f:  mov    %eax,(%esp)
08298c8a +0x142:  call   082981a4 <_ZN12CGameManager17checkOutBossTowerEP5CUser>  ; CGameManager::checkOutBossTower(CUser*)
08298c8f +0x147:  mov    0xc(%ebp),%eax
08298c92 +0x14a:  mov    %eax,0x4(%esp)
08298c96 +0x14e:  mov    0x8(%ebp),%eax
08298c99 +0x151:  mov    %eax,(%esp)
08298c9c +0x154:  call   08298272 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser>  ; CGameManager::checkOutAdvanceAltar(CUser*)
08298ca1 +0x159:  mov    0xc(%ebp),%eax
08298ca4 +0x15c:  mov    %eax,0x4(%esp)
08298ca8 +0x160:  mov    0x8(%ebp),%eax
08298cab +0x163:  mov    %eax,(%esp)
08298cae +0x166:  call   0829844a <_ZN12CGameManager18checkOutBlueMarbleEP5CUser>  ; CGameManager::checkOutBlueMarble(CUser*)
08298cb3 +0x16b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08298cb8 +0x170:  mov    0xc(%ebp),%edx
08298cbb +0x173:  mov    %edx,0x4(%esp)
08298cbf +0x177:  mov    %eax,(%esp)
08298cc2 +0x17a:  call   086c5288 <_ZN9GameWorld16leave_game_worldEP5CUser>  ; GameWorld::leave_game_world(CUser*)
08298cc7 +0x17f:  movl   $0x0,0x4(%esp)
08298ccf +0x187:  mov    0xc(%ebp),%eax
08298cd2 +0x18a:  mov    %eax,(%esp)
08298cd5 +0x18d:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
08298cda +0x192:  mov    0xc(%ebp),%eax
08298cdd +0x195:  mov    %eax,(%esp)
08298ce0 +0x198:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
08298ce5 +0x19d:  movl   $0x0,0x4(%esp)
08298ced +0x1a5:  mov    0xc(%ebp),%eax
08298cf0 +0x1a8:  mov    %eax,(%esp)
08298cf3 +0x1ab:  call   0864cb66 <_ZN5CUser21LogoutCachedCharacterEh>  ; CUser::LogoutCachedCharacter(unsigned char)
08298cf8 +0x1b0:  movl   $0x1,0x4(%esp)
08298d00 +0x1b8:  mov    0xc(%ebp),%eax
08298d03 +0x1bb:  mov    %eax,(%esp)
08298d06 +0x1be:  call   086554aa <_ZN5CUser12UpdateLogoutEb>  ; CUser::UpdateLogout(bool)
08298d0b +0x1c3:  movl   $0x1,0x4(%esp)
08298d13 +0x1cb:  mov    0xc(%ebp),%eax
08298d16 +0x1ce:  mov    %eax,(%esp)
08298d19 +0x1d1:  call   08677022 <_ZN5CUser20DeleteRentalItemInfoEi>  ; CUser::DeleteRentalItemInfo(int)
08298d1e +0x1d6:  movl   $0x2,0x4(%esp)
08298d26 +0x1de:  mov    0xc(%ebp),%eax
08298d29 +0x1e1:  mov    %eax,(%esp)
08298d2c +0x1e4:  call   08677022 <_ZN5CUser20DeleteRentalItemInfoEi>  ; CUser::DeleteRentalItemInfo(int)
08298d31 +0x1e9:  mov    0xc(%ebp),%eax
08298d34 +0x1ec:  mov    %eax,(%esp)
08298d37 +0x1ef:  call   0865851c <_ZN5CUser14ResetCurCharacEv>  ; CUser::ResetCurCharac()
08298d3c +0x1f4:  mov    0xc(%ebp),%eax
08298d3f +0x1f7:  mov    %eax,(%esp)
08298d42 +0x1fa:  call   08652c8e <_ZN5CUser22doLinkCharacDisconnectEv>  ; CUser::doLinkCharacDisconnect()
08298d47 +0x1ff:  mov    0xc(%ebp),%eax
08298d4a +0x202:  mov    %eax,0x4(%esp)
08298d4e +0x206:  mov    0x8(%ebp),%eax
08298d51 +0x209:  mov    %eax,(%esp)
08298d54 +0x20c:  call   08294b2c <_ZN12CGameManager14returnUserPoolEP5CUser>  ; CGameManager::returnUserPool(CUser*)
08298d59 +0x211:  jmp    08298da6 <+0x25e>
08298d5b +0x213:  movl   $0x0,0x4(%esp)
08298d63 +0x21b:  mov    0xc(%ebp),%eax
08298d66 +0x21e:  mov    %eax,(%esp)
08298d69 +0x221:  call   082a676a <_GLOBAL__I__ZN4CLog5this_E+0x2b91>  ; global constructors keyed to CLog::this_+0x2b91
08298d6e +0x226:  movl   $0x0,0x4(%esp)
08298d76 +0x22e:  mov    0xc(%ebp),%eax
08298d79 +0x231:  mov    %eax,(%esp)
08298d7c +0x234:  call   0864cb66 <_ZN5CUser21LogoutCachedCharacterEh>  ; CUser::LogoutCachedCharacter(unsigned char)
08298d81 +0x239:  movl   $0x1,0x4(%esp)
08298d89 +0x241:  mov    0xc(%ebp),%eax
08298d8c +0x244:  mov    %eax,(%esp)
08298d8f +0x247:  call   086554aa <_ZN5CUser12UpdateLogoutEb>  ; CUser::UpdateLogout(bool)
08298d94 +0x24c:  mov    0xc(%ebp),%eax
08298d97 +0x24f:  mov    %eax,0x4(%esp)
08298d9b +0x253:  mov    0x8(%ebp),%eax
08298d9e +0x256:  mov    %eax,(%esp)
08298da1 +0x259:  call   08294b2c <_ZN12CGameManager14returnUserPoolEP5CUser>  ; CGameManager::returnUserPool(CUser*)
08298da6 +0x25e:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
08298dab +0x263:  mov    0xc(%ebp),%edx
08298dae +0x266:  mov    %edx,0x4(%esp)
08298db2 +0x26a:  mov    %eax,(%esp)
08298db5 +0x26d:  call   082a37c8 <_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser>  ; CShutdowManager::SendLastMsgDBQueue(CUser*)
08298dba +0x272:  jmp    08298dbd <+0x275>
08298dbc +0x274:  nop
08298dbd +0x275:  leave
08298dbe +0x276:  ret
08298dbf +0x277:  nop
```

## 反编译 C

```c
// CGameManager::user_disconnect @ 0x8298b48

/* CGameManager::user_disconnect(CUser*) */

void __thiscall CGameManager::user_disconnect(CGameManager *this,CUser *param_1)

{
  int iVar1;
  GameWorld *pGVar2;
  CUser *pCVar3;
  cMyTrace local_1c [24];
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_1c,"void CGameManager::user_disconnect(CUser*)",0x138b,5);
    cMyTrace::operator()
              (local_1c,"USER DISCONNECT [%s][%d]","void CGameManager::user_disconnect(CUser*)",
               0x138b);
  }
  else {
    HistoryLog::LogClose(*(_IO_FILE **)(param_1 + 0x796f8));
    iVar1 = CUser::get_state(param_1);
    if (iVar1 != 0) {
      CUser::prepareDisconnect(param_1);
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::EraseLoginUser(pGVar2,param_1);
      CUser::SetSaveRentalInfoToExchange(param_1,false);
      iVar1 = CUser::get_state(param_1);
      if (iVar1 < 3) {
        CUser::SetSaveRentalInfoToExchange(param_1,false);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,true);
        returnUserPool(this,param_1);
      }
      else {
        CheckOutTrade(this,param_1);
        CheckOutParty((CUser *)this,SUB41(param_1,0));
        CheckOutPvp(this,param_1,false);
        CheckOutWarRoom(this,param_1);
        checkOutDeathTower(this,param_1);
        checkOutBossTower(this,param_1);
        checkOutAdvanceAltar(this,param_1);
        checkOutBlueMarble(this,param_1);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::leave_game_world(pGVar2,param_1);
        CUser::SetGameMasterMode(param_1,false);
        CUser::UpdateData(param_1);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,true);
        CUser::DeleteRentalItemInfo(param_1,1);
        CUser::DeleteRentalItemInfo(param_1,2);
        CUser::ResetCurCharac(param_1);
        CUser::doLinkCharacDisconnect(param_1);
        returnUserPool(this,param_1);
      }
      pCVar3 = (CUser *)GetInstanceShutdowManager();
      CShutdowManager::SendLastMsgDBQueue(pCVar3);
    }
  }
  return;
}
```
