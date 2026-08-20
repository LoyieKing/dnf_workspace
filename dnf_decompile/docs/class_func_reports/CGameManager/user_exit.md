# user_exit

`_ZN12CGameManager9user_exitEP5CUser`

`CGameManager::user_exit(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082985a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082985a8  _ZN12CGameManager9user_exitEP5CUser
#           CGameManager::user_exit(CUser*)
# range [0x082985a8, 0x0829893f]
082985a8 +0x000:  push   %ebp
082985a9 +0x001:  mov    %esp,%ebp
082985ab +0x003:  push   %esi
082985ac +0x004:  push   %ebx
082985ad +0x005:  sub    $0x70,%esp
082985b0 +0x008:  cmpl   $0x0,0xc(%ebp)
082985b4 +0x00c:  jne    08298606 <+0x5e>
082985b6 +0x00e:  movl   $0x5,0xc(%esp)
082985be +0x016:  movl   $0x1271,0x8(%esp)
082985c6 +0x01e:  movl   $&_ZZN12CGameManager9user_exitEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
082985ce +0x026:  lea    -0x3c(%ebp),%eax
082985d1 +0x029:  mov    %eax,(%esp)
082985d4 +0x02c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082985d9 +0x031:  movl   $0x1271,0xc(%esp)
082985e1 +0x039:  movl   $&_ZZN12CGameManager9user_exitEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082985e9 +0x041:  movl   $"USER_EXIT [%s][%d]",0x4(%esp)
082985f1 +0x049:  lea    -0x3c(%ebp),%eax
082985f4 +0x04c:  mov    %eax,(%esp)
082985f7 +0x04f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082985fc +0x054:  mov    $0x0,%eax
08298601 +0x059:  jmp    08298939 <+0x391>
08298606 +0x05e:  mov    0xc(%ebp),%eax
08298609 +0x061:  mov    %eax,(%esp)
0829860c +0x064:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08298611 +0x069:  test   %eax,%eax
08298613 +0x06b:  sete   %al
08298616 +0x06e:  test   %al,%al
08298618 +0x070:  je     0829867b <+0xd3>
0829861a +0x072:  mov    0xc(%ebp),%eax
0829861d +0x075:  mov    %eax,(%esp)
08298620 +0x078:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08298625 +0x07d:  mov    %eax,%ebx
08298627 +0x07f:  movl   $0x5,0xc(%esp)
0829862f +0x087:  movl   $0x127a,0x8(%esp)
08298637 +0x08f:  movl   $&_ZZN12CGameManager9user_exitEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0829863f +0x097:  lea    -0x2c(%ebp),%eax
08298642 +0x09a:  mov    %eax,(%esp)
08298645 +0x09d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0829864a +0x0a2:  mov    %ebx,0x10(%esp)
0829864e +0x0a6:  movl   $0x127a,0xc(%esp)
08298656 +0x0ae:  movl   $&_ZZN12CGameManager9user_exitEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0829865e +0x0b6:  movl   $"USER_EXIT STATE NONE [%s][%d]mid(%d)",0x4(%esp)
08298666 +0x0be:  lea    -0x2c(%ebp),%eax
08298669 +0x0c1:  mov    %eax,(%esp)
0829866c +0x0c4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08298671 +0x0c9:  mov    $0x0,%eax
08298676 +0x0ce:  jmp    08298939 <+0x391>
0829867b +0x0d3:  mov    0xc(%ebp),%eax
0829867e +0x0d6:  mov    0x796f8(%eax),%eax
08298684 +0x0dc:  mov    %eax,(%esp)
08298687 +0x0df:  call   084b9d34 <_ZN10HistoryLog8LogCloseEP8_IO_FILE>  ; HistoryLog::LogClose(_IO_FILE*)
0829868c +0x0e4:  mov    0xc(%ebp),%eax
0829868f +0x0e7:  mov    %eax,(%esp)
08298692 +0x0ea:  call   086487ea <_ZN5CUser17prepareDisconnectEv>  ; CUser::prepareDisconnect()
08298697 +0x0ef:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0829869c +0x0f4:  mov    0xc(%ebp),%edx
0829869f +0x0f7:  mov    %edx,0x4(%esp)
082986a3 +0x0fb:  mov    %eax,(%esp)
082986a6 +0x0fe:  call   086cf602 <_ZN9GameWorld14EraseLoginUserEP5CUser>  ; GameWorld::EraseLoginUser(CUser*)
082986ab +0x103:  mov    0xc(%ebp),%eax
082986ae +0x106:  mov    %eax,(%esp)
082986b1 +0x109:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082986b6 +0x10e:  cmp    $0x2,%eax
082986b9 +0x111:  setg   %al
082986bc +0x114:  test   %al,%al
082986be +0x116:  je     082988fb <+0x353>
082986c4 +0x11c:  mov    0xc(%ebp),%eax
082986c7 +0x11f:  mov    %eax,0x4(%esp)
082986cb +0x123:  mov    0x8(%ebp),%eax
082986ce +0x126:  mov    %eax,(%esp)
082986d1 +0x129:  call   08297c14 <_ZN12CGameManager13CheckOutTradeEP5CUser>  ; CGameManager::CheckOutTrade(CUser*)
082986d6 +0x12e:  movl   $0x1,0x8(%esp)
082986de +0x136:  mov    0xc(%ebp),%eax
082986e1 +0x139:  mov    %eax,0x4(%esp)
082986e5 +0x13d:  mov    0x8(%ebp),%eax
082986e8 +0x140:  mov    %eax,(%esp)
082986eb +0x143:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
082986f0 +0x148:  movl   $0x0,0x8(%esp)
082986f8 +0x150:  mov    0xc(%ebp),%eax
082986fb +0x153:  mov    %eax,0x4(%esp)
082986ff +0x157:  mov    0x8(%ebp),%eax
08298702 +0x15a:  mov    %eax,(%esp)
08298705 +0x15d:  call   08297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>  ; CGameManager::CheckOutPvp(CUser*, bool)
0829870a +0x162:  mov    0xc(%ebp),%eax
0829870d +0x165:  mov    %eax,0x4(%esp)
08298711 +0x169:  mov    0x8(%ebp),%eax
08298714 +0x16c:  mov    %eax,(%esp)
08298717 +0x16f:  call   08297df8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser>  ; CGameManager::CheckOutWarRoom(CUser*)
0829871c +0x174:  mov    0xc(%ebp),%eax
0829871f +0x177:  mov    %eax,0x4(%esp)
08298723 +0x17b:  mov    0x8(%ebp),%eax
08298726 +0x17e:  mov    %eax,(%esp)
08298729 +0x181:  call   0829833a <_ZN12CGameManager18checkOutDeathTowerEP5CUser>  ; CGameManager::checkOutDeathTower(CUser*)
0829872e +0x186:  mov    0xc(%ebp),%eax
08298731 +0x189:  mov    %eax,0x4(%esp)
08298735 +0x18d:  mov    0x8(%ebp),%eax
08298738 +0x190:  mov    %eax,(%esp)
0829873b +0x193:  call   082981a4 <_ZN12CGameManager17checkOutBossTowerEP5CUser>  ; CGameManager::checkOutBossTower(CUser*)
08298740 +0x198:  mov    0xc(%ebp),%eax
08298743 +0x19b:  mov    %eax,0x4(%esp)
08298747 +0x19f:  mov    0x8(%ebp),%eax
0829874a +0x1a2:  mov    %eax,(%esp)
0829874d +0x1a5:  call   08298272 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser>  ; CGameManager::checkOutAdvanceAltar(CUser*)
08298752 +0x1aa:  mov    0xc(%ebp),%eax
08298755 +0x1ad:  mov    %eax,0x4(%esp)
08298759 +0x1b1:  mov    0x8(%ebp),%eax
0829875c +0x1b4:  mov    %eax,(%esp)
0829875f +0x1b7:  call   0829844a <_ZN12CGameManager18checkOutBlueMarbleEP5CUser>  ; CGameManager::checkOutBlueMarble(CUser*)
08298764 +0x1bc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08298769 +0x1c1:  mov    0xc(%ebp),%edx
0829876c +0x1c4:  mov    %edx,0x4(%esp)
08298770 +0x1c8:  mov    %eax,(%esp)
08298773 +0x1cb:  call   086c5288 <_ZN9GameWorld16leave_game_worldEP5CUser>  ; GameWorld::leave_game_world(CUser*)
08298778 +0x1d0:  movl   $0x0,0x4(%esp)
08298780 +0x1d8:  mov    0xc(%ebp),%eax
08298783 +0x1db:  mov    %eax,(%esp)
08298786 +0x1de:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
0829878b +0x1e3:  mov    0xc(%ebp),%eax
0829878e +0x1e6:  mov    %eax,(%esp)
08298791 +0x1e9:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
08298796 +0x1ee:  movl   $0x0,0x4(%esp)
0829879e +0x1f6:  mov    0xc(%ebp),%eax
082987a1 +0x1f9:  mov    %eax,(%esp)
082987a4 +0x1fc:  call   0864cb66 <_ZN5CUser21LogoutCachedCharacterEh>  ; CUser::LogoutCachedCharacter(unsigned char)
082987a9 +0x201:  movl   $0x0,0x4(%esp)
082987b1 +0x209:  mov    0xc(%ebp),%eax
082987b4 +0x20c:  mov    %eax,(%esp)
082987b7 +0x20f:  call   086554aa <_ZN5CUser12UpdateLogoutEb>  ; CUser::UpdateLogout(bool)
082987bc +0x214:  mov    0xc(%ebp),%eax
082987bf +0x217:  mov    %eax,(%esp)
082987c2 +0x21a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082987c7 +0x21f:  movzwl %ax,%esi
082987ca +0x222:  mov    0xc(%ebp),%eax
082987cd +0x225:  mov    %eax,(%esp)
082987d0 +0x228:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082987d5 +0x22d:  mov    %eax,%ebx
082987d7 +0x22f:  movl   $0x0,0xc(%esp)
082987df +0x237:  movl   $0x12dc,0x8(%esp)
082987e7 +0x23f:  movl   $&_ZZN12CGameManager9user_exitEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
082987ef +0x247:  lea    -0x1c(%ebp),%eax
082987f2 +0x24a:  mov    %eax,(%esp)
082987f5 +0x24d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082987fa +0x252:  mov    %esi,0xc(%esp)
082987fe +0x256:  mov    %ebx,0x8(%esp)
08298802 +0x25a:  movl   $"ID: %s - UID: %d from Logout",0x4(%esp)
0829880a +0x262:  lea    -0x1c(%ebp),%eax
0829880d +0x265:  mov    %eax,(%esp)
08298810 +0x268:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08298815 +0x26d:  movl   $0x0,-0xc(%ebp)
0829881c +0x274:  mov    0xc(%ebp),%eax
0829881f +0x277:  add    $0xe0,%eax
08298824 +0x27c:  mov    %eax,(%esp)
08298827 +0x27f:  call   082b2cb8 <_GLOBAL__I__ZN4CLog5this_E+0xf0df>  ; global constructors keyed to CLog::this_+0xf0df
0829882c +0x284:  mov    %eax,%ebx
0829882e +0x286:  call   082a70ab <_GLOBAL__I__ZN4CLog5this_E+0x34d2>  ; global constructors keyed to CLog::this_+0x34d2
08298833 +0x28b:  mov    %ebx,0x4(%esp)
08298837 +0x28f:  mov    %eax,(%esp)
0829883a +0x292:  call   0857c258 <_ZN12EpollHandler10ResetEpollEi>  ; EpollHandler::ResetEpoll(int)
0829883f +0x297:  mov    %eax,-0xc(%ebp)
08298842 +0x29a:  cmpl   $0x0,-0xc(%ebp)
08298846 +0x29e:  setne  %al
08298849 +0x2a1:  test   %al,%al
0829884b +0x2a3:  je     082988c6 <+0x31e>
0829884d +0x2a5:  mov    -0xc(%ebp),%eax
08298850 +0x2a8:  mov    %eax,(%esp)
08298853 +0x2ab:  call   0807d730 <_init+0x28>
08298858 +0x2b0:  mov    %eax,%esi
0829885a +0x2b2:  mov    0xc(%ebp),%eax
0829885d +0x2b5:  add    $0xe0,%eax
08298862 +0x2ba:  mov    %eax,(%esp)
08298865 +0x2bd:  call   082b2cb8 <_GLOBAL__I__ZN4CLog5this_E+0xf0df>  ; global constructors keyed to CLog::this_+0xf0df
0829886a +0x2c2:  mov    %eax,%ebx
0829886c +0x2c4:  mov    0xc(%ebp),%eax
0829886f +0x2c7:  mov    %eax,(%esp)
08298872 +0x2ca:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08298877 +0x2cf:  movl   $0x0,0x4(%esp)
0829887f +0x2d7:  mov    %eax,(%esp)
08298882 +0x2da:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08298887 +0x2df:  mov    %esi,0x20(%esp)
0829888b +0x2e3:  mov    -0xc(%ebp),%edx
0829888e +0x2e6:  mov    %edx,0x1c(%esp)
08298892 +0x2ea:  mov    %ebx,0x18(%esp)
08298896 +0x2ee:  mov    %eax,0x14(%esp)
0829889a +0x2f2:  movl   $"(m_id: %s) G_EpollHandler()->ResetEpoll(pUser->get_socket(%d)) %d(%s)",0x10(%esp)
082988a2 +0x2fa:  movl   $0x12e3,0xc(%esp)
082988aa +0x302:  movl   $&_ZZN12CGameManager9user_exitEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082988b2 +0x30a:  movl   $"App.cpp",0x4(%esp)
082988ba +0x312:  movl   $0x1,(%esp)
082988c1 +0x319:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082988c6 +0x31e:  mov    0xc(%ebp),%eax
082988c9 +0x321:  mov    %eax,(%esp)
082988cc +0x324:  call   0865851c <_ZN5CUser14ResetCurCharacEv>  ; CUser::ResetCurCharac()
082988d1 +0x329:  mov    0xc(%ebp),%eax
082988d4 +0x32c:  mov    %eax,(%esp)
082988d7 +0x32f:  call   08652c8e <_ZN5CUser22doLinkCharacDisconnectEv>  ; CUser::doLinkCharacDisconnect()
082988dc +0x334:  mov    0xc(%ebp),%eax
082988df +0x337:  mov    %eax,0x4(%esp)
082988e3 +0x33b:  mov    0x8(%ebp),%eax
082988e6 +0x33e:  mov    %eax,(%esp)
082988e9 +0x341:  call   08294b2c <_ZN12CGameManager14returnUserPoolEP5CUser>  ; CGameManager::returnUserPool(CUser*)
082988ee +0x346:  mov    0xc(%ebp),%eax
082988f1 +0x349:  mov    %eax,(%esp)
082988f4 +0x34c:  call   08658a3e <_ZN5CUser20checkLogOutCorrectlyEv>  ; CUser::checkLogOutCorrectly()
082988f9 +0x351:  jmp    08298934 <+0x38c>
082988fb +0x353:  movl   $0x0,0x4(%esp)
08298903 +0x35b:  mov    0xc(%ebp),%eax
08298906 +0x35e:  mov    %eax,(%esp)
08298909 +0x361:  call   082a676a <_GLOBAL__I__ZN4CLog5this_E+0x2b91>  ; global constructors keyed to CLog::this_+0x2b91
0829890e +0x366:  movl   $0x0,0x4(%esp)
08298916 +0x36e:  mov    0xc(%ebp),%eax
08298919 +0x371:  mov    %eax,(%esp)
0829891c +0x374:  call   0864cb66 <_ZN5CUser21LogoutCachedCharacterEh>  ; CUser::LogoutCachedCharacter(unsigned char)
08298921 +0x379:  movl   $0x0,0x4(%esp)
08298929 +0x381:  mov    0xc(%ebp),%eax
0829892c +0x384:  mov    %eax,(%esp)
0829892f +0x387:  call   086554aa <_ZN5CUser12UpdateLogoutEb>  ; CUser::UpdateLogout(bool)
08298934 +0x38c:  mov    $0x1,%eax
08298939 +0x391:  add    $0x70,%esp
0829893c +0x394:  pop    %ebx
0829893d +0x395:  pop    %esi
0829893e +0x396:  pop    %ebp
0829893f +0x397:  ret
```

## 反编译 C

```c
// CGameManager::user_exit @ 0x82985a8

/* CGameManager::user_exit(CUser*) */

undefined4 __thiscall CGameManager::user_exit(CGameManager *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  GameWorld *pGVar3;
  uint uVar4;
  EpollHandler *this_00;
  char *pcVar5;
  undefined4 uVar6;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_40,"bool CGameManager::user_exit(CUser*)",0x1271,5);
    cMyTrace::operator()
              (local_40,"USER_EXIT [%s][%d]","bool CGameManager::user_exit(CUser*)",0x1271);
    uVar1 = 0;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 == 0) {
      uVar1 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_30,"bool CGameManager::user_exit(CUser*)",0x127a,5);
      cMyTrace::operator()
                (local_30,"USER_EXIT STATE NONE [%s][%d]mid(%d)",
                 "bool CGameManager::user_exit(CUser*)",0x127a,uVar1);
      uVar1 = 0;
    }
    else {
      HistoryLog::LogClose(*(_IO_FILE **)(param_1 + 0x796f8));
      CUser::prepareDisconnect(param_1);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::EraseLoginUser(pGVar3,param_1);
      iVar2 = CUser::get_state(param_1);
      if (iVar2 < 3) {
        CUser::SetSaveRentalInfoToExchange(param_1,false);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,false);
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
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::leave_game_world(pGVar3,param_1);
        CUser::SetGameMasterMode(param_1,false);
        CUser::UpdateData(param_1);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,false);
        uVar4 = CUser::get_unique_id(param_1);
        uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_20,"bool CGameManager::user_exit(CUser*)",0x12dc,0);
        cMyTrace::operator()(local_20,"ID: %s - UID: %d from Logout",uVar1,uVar4 & 0xffff);
        local_10 = 0;
        iVar2 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(param_1 + 0xe0));
        this_00 = (EpollHandler *)G_EpollHandler();
        local_10 = EpollHandler::ResetEpoll(this_00,iVar2);
        if (local_10 != 0) {
          pcVar5 = strerror(local_10);
          uVar1 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(param_1 + 0xe0));
          uVar4 = CUser::get_acc_id(param_1);
          uVar6 = NumberToString(uVar4,0);
          LogManager::logFormat
                    (1,"App.cpp","bool CGameManager::user_exit(CUser*)",0x12e3,
                     "(m_id: %s) G_EpollHandler()->ResetEpoll(pUser->get_socket(%d)) %d(%s)",uVar6,
                     uVar1,local_10,pcVar5);
        }
        CUser::ResetCurCharac(param_1);
        CUser::doLinkCharacDisconnect(param_1);
        returnUserPool(this,param_1);
        CUser::checkLogOutCorrectly(param_1);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
