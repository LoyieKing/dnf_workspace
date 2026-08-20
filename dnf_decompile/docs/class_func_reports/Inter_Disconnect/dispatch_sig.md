# dispatch_sig

`_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci`

`Inter_Disconnect::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Disconnect` | `0x084beb3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084beb3c  _ZN16Inter_Disconnect12dispatch_sigEP5CUserPci
#           Inter_Disconnect::dispatch_sig(CUser*, char*, int)
# range [0x084beb3c, 0x084bee05]
084beb3c +0x000:  push   %ebp
084beb3d +0x001:  mov    %esp,%ebp
084beb3f +0x003:  push   %esi
084beb40 +0x004:  push   %ebx
084beb41 +0x005:  sub    $0x40,%esp
084beb44 +0x008:  mov    0xc(%ebp),%eax
084beb47 +0x00b:  mov    %eax,(%esp)
084beb4a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084beb4f +0x013:  test   %eax,%eax
084beb51 +0x015:  sete   %al
084beb54 +0x018:  test   %al,%al
084beb56 +0x01a:  je     084beb8e <+0x52>
084beb58 +0x01c:  movl   $"State(NONE)",0x10(%esp)
084beb60 +0x024:  movl   $0x651,0xc(%esp)
084beb68 +0x02c:  movl   $&_ZZN16Inter_Disconnect12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084beb70 +0x034:  movl   $"InterDispatcher.cpp",0x4(%esp)
084beb78 +0x03c:  movl   $0x1,(%esp)
084beb7f +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084beb84 +0x048:  mov    $0x0,%eax
084beb89 +0x04d:  jmp    084bedfe <+0x2c2>
084beb8e +0x052:  mov    0xc(%ebp),%eax
084beb91 +0x055:  mov    %eax,(%esp)
084beb94 +0x058:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084beb99 +0x05d:  cmp    $0x2,%eax
084beb9c +0x060:  setg   %al
084beb9f +0x063:  test   %al,%al
084beba1 +0x065:  je     084bec1c <+0xe0>
084beba3 +0x067:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084beba8 +0x06c:  mov    %eax,(%esp)
084bebab +0x06f:  call   0823443e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ae8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ae8
084bebb0 +0x074:  test   %al,%al
084bebb2 +0x076:  je     084bec1c <+0xe0>
084bebb4 +0x078:  mov    0xc(%ebp),%eax
084bebb7 +0x07b:  mov    %eax,(%esp)
084bebba +0x07e:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
084bebbf +0x083:  cmp    $0x1,%al
084bebc1 +0x085:  sete   %al
084bebc4 +0x088:  test   %al,%al
084bebc6 +0x08a:  je     084bec1c <+0xe0>
084bebc8 +0x08c:  movl   $0x9,0x4(%esp)
084bebd0 +0x094:  mov    0xc(%ebp),%eax
084bebd3 +0x097:  mov    %eax,(%esp)
084bebd6 +0x09a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084bebdb +0x09f:  mov    %eax,-0x14(%ebp)
084bebde +0x0a2:  mov    0xc(%ebp),%eax
084bebe1 +0x0a5:  mov    %eax,(%esp)
084bebe4 +0x0a8:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
084bebe9 +0x0ad:  movsbl %al,%ebx
084bebec +0x0b0:  mov    0xc(%ebp),%eax
084bebef +0x0b3:  mov    %eax,(%esp)
084bebf2 +0x0b6:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
084bebf7 +0x0bb:  movsbl %al,%eax
084bebfa +0x0be:  mov    %ebx,0x10(%esp)
084bebfe +0x0c2:  mov    %eax,0xc(%esp)
084bec02 +0x0c6:  movl   $0x0,0x8(%esp)
084bec0a +0x0ce:  mov    0xc(%ebp),%eax
084bec0d +0x0d1:  mov    %eax,0x4(%esp)
084bec11 +0x0d5:  mov    -0x14(%ebp),%eax
084bec14 +0x0d8:  mov    %eax,(%esp)
084bec17 +0x0db:  call   0849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>  ; CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)
084bec1c +0x0e0:  mov    0xc(%ebp),%eax
084bec1f +0x0e3:  mov    %eax,(%esp)
084bec22 +0x0e6:  call   08652f0c <_ZN5CUser14WorkPerFiveMinEv>  ; CUser::WorkPerFiveMin()
084bec27 +0x0eb:  mov    0xc(%ebp),%eax
084bec2a +0x0ee:  mov    %eax,(%esp)
084bec2d +0x0f1:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
084bec32 +0x0f6:  test   %eax,%eax
084bec34 +0x0f8:  setne  %al
084bec37 +0x0fb:  test   %al,%al
084bec39 +0x0fd:  je     084bece3 <+0x1a7>
084bec3f +0x103:  mov    0xc(%ebp),%eax
084bec42 +0x106:  mov    %eax,(%esp)
084bec45 +0x109:  call   0822f612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cbc
084bec4a +0x10e:  mov    %eax,-0x10(%ebp)
084bec4d +0x111:  mov    0xc(%ebp),%eax
084bec50 +0x114:  mov    %eax,(%esp)
084bec53 +0x117:  call   0822f652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cfc
084bec58 +0x11c:  mov    %eax,-0xc(%ebp)
084bec5b +0x11f:  mov    0xc(%ebp),%eax
084bec5e +0x122:  mov    %eax,(%esp)
084bec61 +0x125:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084bec66 +0x12a:  mov    %eax,%ebx
084bec68 +0x12c:  mov    0xc(%ebp),%eax
084bec6b +0x12f:  mov    %eax,(%esp)
084bec6e +0x132:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
084bec73 +0x137:  movzbl %al,%esi
084bec76 +0x13a:  mov    0xc(%ebp),%eax
084bec79 +0x13d:  mov    %eax,(%esp)
084bec7c +0x140:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084bec81 +0x145:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084bec87 +0x14b:  mov    %eax,0x4(%esp)
084bec8b +0x14f:  mov    %edx,(%esp)
084bec8e +0x152:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084bec93 +0x157:  mov    -0xc(%ebp),%edx
084bec96 +0x15a:  mov    %edx,0x10(%esp)
084bec9a +0x15e:  mov    -0x10(%ebp),%edx
084bec9d +0x161:  mov    %edx,0xc(%esp)
084beca1 +0x165:  mov    %ebx,0x8(%esp)
084beca5 +0x169:  mov    %esi,0x4(%esp)
084beca9 +0x16d:  mov    %eax,(%esp)
084becac +0x170:  call   08470fb4 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii>  ; CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int)
084becb1 +0x175:  cmpl   $0x0,-0x10(%ebp)
084becb5 +0x179:  jle    084becca <+0x18e>
084becb7 +0x17b:  mov    0xc(%ebp),%eax
084becba +0x17e:  movl   $0x0,0x4(%esp)
084becc2 +0x186:  mov    %eax,(%esp)
084becc5 +0x189:  call   0822f634 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cde>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cde
084becca +0x18e:  cmpl   $0x0,-0xc(%ebp)
084becce +0x192:  jle    084bece3 <+0x1a7>
084becd0 +0x194:  mov    0xc(%ebp),%eax
084becd3 +0x197:  movl   $0x0,0x4(%esp)
084becdb +0x19f:  mov    %eax,(%esp)
084becde +0x1a2:  call   0822f674 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d1e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d1e
084bece3 +0x1a7:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
084bece8 +0x1ac:  mov    (%eax),%edx
084becea +0x1ae:  mov    (%edx),%ecx
084becec +0x1b0:  mov    0xc(%ebp),%edx
084becef +0x1b3:  mov    %edx,0x4(%esp)
084becf3 +0x1b7:  mov    %eax,(%esp)
084becf6 +0x1ba:  call   *%ecx
084becf8 +0x1bc:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
084becfd +0x1c1:  movl   $0x1,0x8(%esp)
084bed05 +0x1c9:  mov    0xc(%ebp),%edx
084bed08 +0x1cc:  mov    %edx,0x4(%esp)
084bed0c +0x1d0:  mov    %eax,(%esp)
084bed0f +0x1d3:  call   082ef176 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb>  ; pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool)
084bed14 +0x1d8:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
084bed19 +0x1dd:  mov    0xc(%ebp),%edx
084bed1c +0x1e0:  mov    %edx,0x4(%esp)
084bed20 +0x1e4:  mov    %eax,(%esp)
084bed23 +0x1e7:  call   0849e214 <_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser>  ; expert_job::CExpertJobMgr::OnLeaveUser(CUser*)
084bed28 +0x1ec:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
084bed2d +0x1f1:  mov    0xc(%ebp),%edx
084bed30 +0x1f4:  mov    %edx,0x4(%esp)
084bed34 +0x1f8:  mov    %eax,(%esp)
084bed37 +0x1fb:  call   08588ae8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser>  ; online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*)
084bed3c +0x200:  mov    0xc(%ebp),%eax
084bed3f +0x203:  mov    %eax,(%esp)
084bed42 +0x206:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084bed47 +0x20b:  mov    %eax,-0x1c(%ebp)
084bed4a +0x20e:  mov    0xc(%ebp),%eax
084bed4d +0x211:  mov    %eax,(%esp)
084bed50 +0x214:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084bed55 +0x219:  mov    %eax,-0x18(%ebp)
084bed58 +0x21c:  mov    0xc(%ebp),%eax
084bed5b +0x21f:  add    $0x8e3f0,%eax
084bed60 +0x224:  mov    %eax,(%esp)
084bed63 +0x227:  call   0822eede <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4588>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4588
084bed68 +0x22c:  test   %al,%al
084bed6a +0x22e:  je     084beda5 <+0x269>
084bed6c +0x230:  mov    0xc(%ebp),%eax
084bed6f +0x233:  mov    %eax,(%esp)
084bed72 +0x236:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084bed77 +0x23b:  mov    %eax,%ebx
084bed79 +0x23d:  mov    0xc(%ebp),%eax
084bed7c +0x240:  add    $0x8e3f0,%eax
084bed81 +0x245:  mov    %eax,(%esp)
084bed84 +0x248:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
084bed89 +0x24d:  mov    %ebx,0x4(%esp)
084bed8d +0x251:  mov    %eax,(%esp)
084bed90 +0x254:  call   08432fe2 <_ZN20DB_SaveCleanpadPoint11makeRequestEji>  ; DB_SaveCleanpadPoint::makeRequest(unsigned int, int)
084bed95 +0x259:  mov    0xc(%ebp),%eax
084bed98 +0x25c:  add    $0x8e3f0,%eax
084bed9d +0x261:  mov    %eax,(%esp)
084beda0 +0x264:  call   0822eeea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4594>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4594
084beda5 +0x269:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084bedaa +0x26e:  mov    0xc(%ebp),%edx
084bedad +0x271:  mov    %edx,0x4(%esp)
084bedb1 +0x275:  mov    %eax,(%esp)
084bedb4 +0x278:  call   08298b48 <_ZN12CGameManager15user_disconnectEP5CUser>  ; CGameManager::user_disconnect(CUser*)
084bedb9 +0x27d:  mov    -0x18(%ebp),%eax
084bedbc +0x280:  mov    %eax,0x8(%esp)
084bedc0 +0x284:  movl   $0x1,0x4(%esp)
084bedc8 +0x28c:  mov    -0x1c(%ebp),%eax
084bedcb +0x28f:  mov    %eax,(%esp)
084bedce +0x292:  call   0842ad30 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj>  ; DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int)
084bedd3 +0x297:  movl   $0x0,0x4(%esp)
084beddb +0x29f:  mov    -0x1c(%ebp),%eax
084bedde +0x2a2:  mov    %eax,(%esp)
084bede1 +0x2a5:  call   0842bce8 <_ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj>  ; DB_SecurityCardUpdateValidityTime::makeRequest(unsigned int, unsigned int)
084bede6 +0x2aa:  movl   $0x0,0x4(%esp)
084bedee +0x2b2:  mov    -0x1c(%ebp),%eax
084bedf1 +0x2b5:  mov    %eax,(%esp)
084bedf4 +0x2b8:  call   0842f2ae <_ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj>  ; DB_GoblinPadUpdateValidityTime::makeRequest(unsigned int, unsigned int)
084bedf9 +0x2bd:  mov    $0x0,%eax
084bedfe +0x2c2:  add    $0x40,%esp
084bee01 +0x2c5:  pop    %ebx
084bee02 +0x2c6:  pop    %esi
084bee03 +0x2c7:  pop    %ebp
084bee04 +0x2c8:  ret
084bee05 +0x2c9:  nop
```

## 反编译 C

```c
// Inter_Disconnect::dispatch_sig @ 0x84beb3c

/* Inter_Disconnect::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Disconnect::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  GameWorld *this;
  CExpandEquipslot *this_00;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  CMonitorServerProxy *this_01;
  undefined4 *puVar8;
  CAssaultMgr *this_02;
  uint uVar9;
  uint uVar10;
  CGameManager *this_03;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 0) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_Disconnect::dispatch_sig(CUser*, char*, int)",0x651,"State(NONE)")
    ;
  }
  else {
    iVar4 = CUser::get_state((CUser *)param_2);
    if (2 < iVar4) {
      this = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsEquipSlotSwitchChannel(this);
      if (cVar1 != '\0') {
        cVar1 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_2);
        if (cVar1 == '\x01') {
          this_00 = (CExpandEquipslot *)CUser::GetCharacExpandData((CUser *)param_2,9);
          cVar1 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_2);
          cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_2);
          CExpandEquipslot::EquipslotSwitch(this_00,(CUser *)param_2,'\0',cVar2,cVar1);
        }
      }
    }
    CUser::WorkPerFiveMin((CUser *)param_2);
    iVar4 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar4 != 0) {
      iVar4 = CUserCharacInfo::get_member_pay_tex_money_to_upper((CUserCharacInfo *)param_2);
      iVar5 = CUserCharacInfo::get_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_2);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      bVar3 = (bool)CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)param_2);
      uVar7 = CUser::GetServerGroup((CUser *)param_2);
      this_01 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar7);
      CMonitorServerProxy::SendMemberPayTax(this_01,bVar3,uVar6,iVar4,iVar5);
      if (0 < iVar4) {
        CUserCharacInfo::set_member_pay_tex_money_to_upper((CUserCharacInfo *)param_2,0);
      }
      if (0 < iVar5) {
        CUserCharacInfo::set_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_2,0);
      }
    }
    puVar8 = (undefined4 *)private_store::GetInstancePrivateStoreMgr();
    (**(code **)*puVar8)(puVar8,param_2);
    this_02 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(this_02,(CUser *)param_2,true);
    expert_job::CExpertJobMgr::OnLeaveUser(GlobalData::s_ExpertJobMgr,(CUser *)param_2);
    online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
              (GlobalData::s_onlinePreliminaryTeamMgr,(CUser *)param_2);
    uVar6 = CUser::get_acc_id((CUser *)param_2);
    uVar9 = CUser::GetUID((CUser *)param_2);
    cVar1 = WongWork::CMCAPManager::IsSaveCleanPadPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    if (cVar1 != '\0') {
      iVar4 = CUser::get_acc_id((CUser *)param_2);
      uVar10 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
      DB_SaveCleanpadPoint::makeRequest(uVar10,iVar4);
      WongWork::CMCAPManager::disableCleanPadPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    }
    this_03 = (CGameManager *)G_CGameManager();
    CGameManager::user_disconnect(this_03,(CUser *)param_2);
    DB_ArrangeUserLoginInfo::makeRequest(uVar6,true,uVar9);
    DB_SecurityCardUpdateValidityTime::makeRequest(uVar6,0);
    DB_GoblinPadUpdateValidityTime::makeRequest(uVar6,0);
  }
  return 0;
}
```
