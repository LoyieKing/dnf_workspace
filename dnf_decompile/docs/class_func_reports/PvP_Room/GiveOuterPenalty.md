# GiveOuterPenalty

`_ZN8PvP_Room16GiveOuterPenaltyEP5CUser`

`PvP_Room::GiveOuterPenalty(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dcaf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dcaf2  _ZN8PvP_Room16GiveOuterPenaltyEP5CUser
#           PvP_Room::GiveOuterPenalty(CUser*)
# range [0x085dcaf2, 0x085dcd7d]
085dcaf2 +0x000:  push   %ebp
085dcaf3 +0x001:  mov    %esp,%ebp
085dcaf5 +0x003:  push   %esi
085dcaf6 +0x004:  push   %ebx
085dcaf7 +0x005:  sub    $0xc0,%esp
085dcafd +0x00b:  lea    -0xb0(%ebp),%eax
085dcb03 +0x011:  mov    %eax,(%esp)
085dcb06 +0x014:  call   085d58da <_ZN13PvpResultTypeC1Ev>  ; PvpResultType::PvpResultType()
085dcb0b +0x019:  lea    -0xb0(%ebp),%eax
085dcb11 +0x01f:  mov    %eax,(%esp)
085dcb14 +0x022:  call   085d5dc0 <_ZN13PvpResultType5ClearEv>  ; PvpResultType::Clear()
085dcb19 +0x027:  lea    -0xb0(%ebp),%eax
085dcb1f +0x02d:  mov    %eax,0x4(%esp)
085dcb23 +0x031:  mov    0xc(%ebp),%eax
085dcb26 +0x034:  mov    %eax,(%esp)
085dcb29 +0x037:  call   0865cf84 <_ZN5CUser15update_pvp_rankERK13PvpResultType>  ; CUser::update_pvp_rank(PvpResultType const&)
085dcb2e +0x03c:  mov    0xc(%ebp),%eax
085dcb31 +0x03f:  mov    %eax,0x4(%esp)
085dcb35 +0x043:  mov    0x8(%ebp),%eax
085dcb38 +0x046:  mov    %eax,(%esp)
085dcb3b +0x049:  call   085dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>  ; PvP_Room::GetTeamIndex(CUser*)
085dcb40 +0x04e:  mov    %eax,-0xc(%ebp)
085dcb43 +0x051:  mov    0x8(%ebp),%eax
085dcb46 +0x054:  lea    0x268(%eax),%edx
085dcb4c +0x05a:  mov    -0xc(%ebp),%eax
085dcb4f +0x05d:  mov    %eax,0x4(%esp)
085dcb53 +0x061:  mov    %edx,(%esp)
085dcb56 +0x064:  call   085d4a14 <_ZN12PvpUserTable11IsValidTeamEi>  ; PvpUserTable::IsValidTeam(int)
085dcb5b +0x069:  xor    $0x1,%eax
085dcb5e +0x06c:  test   %al,%al
085dcb60 +0x06e:  je     085dcba4 <+0xb2>
085dcb62 +0x070:  movl   $0x5,0xc(%esp)
085dcb6a +0x078:  movl   $0x10f8,0x8(%esp)
085dcb72 +0x080:  movl   $&_ZZN8PvP_Room16GiveOuterPenaltyEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085dcb7a +0x088:  lea    -0x1c(%ebp),%eax
085dcb7d +0x08b:  mov    %eax,(%esp)
085dcb80 +0x08e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085dcb85 +0x093:  mov    -0xc(%ebp),%eax
085dcb88 +0x096:  mov    %eax,0x8(%esp)
085dcb8c +0x09a:  movl   $"PVP로직오류 PvP_Room::GiveOuterPenalty team index %d",0x4(%esp)
085dcb94 +0x0a2:  lea    -0x1c(%ebp),%eax
085dcb97 +0x0a5:  mov    %eax,(%esp)
085dcb9a +0x0a8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085dcb9f +0x0ad:  jmp    085dcd66 <+0x274>
085dcba4 +0x0b2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dcba9 +0x0b7:  mov    %eax,(%esp)
085dcbac +0x0ba:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
085dcbb1 +0x0bf:  test   %al,%al
085dcbb3 +0x0c1:  je     085dcbe9 <+0xf7>
085dcbb5 +0x0c3:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085dcbba +0x0c8:  movl   $0x38,0x4(%esp)
085dcbc2 +0x0d0:  mov    %eax,(%esp)
085dcbc5 +0x0d3:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085dcbca +0x0d8:  mov    (%eax),%edx
085dcbcc +0x0da:  add    $0x34,%edx
085dcbcf +0x0dd:  mov    (%edx),%edx
085dcbd1 +0x0df:  movl   $0x0,0x4(%esp)
085dcbd9 +0x0e7:  mov    %eax,(%esp)
085dcbdc +0x0ea:  call   *%edx
085dcbde +0x0ec:  test   %al,%al
085dcbe0 +0x0ee:  je     085dcbe9 <+0xf7>
085dcbe2 +0x0f0:  mov    $0x1,%eax
085dcbe7 +0x0f5:  jmp    085dcbee <+0xfc>
085dcbe9 +0x0f7:  mov    $0x0,%eax
085dcbee +0x0fc:  test   %al,%al
085dcbf0 +0x0fe:  je     085dcc57 <+0x165>
085dcbf2 +0x100:  mov    0xc(%ebp),%eax
085dcbf5 +0x103:  mov    %eax,(%esp)
085dcbf8 +0x106:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085dcbfd +0x10b:  test   %eax,%eax
085dcbff +0x10d:  setne  %al
085dcc02 +0x110:  test   %al,%al
085dcc04 +0x112:  je     085dcc57 <+0x165>
085dcc06 +0x114:  lea    -0x29(%ebp),%eax
085dcc09 +0x117:  mov    %eax,(%esp)
085dcc0c +0x11a:  call   085df954 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1db>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1db
085dcc11 +0x11f:  mov    0xc(%ebp),%eax
085dcc14 +0x122:  mov    %eax,(%esp)
085dcc17 +0x125:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085dcc1c +0x12a:  mov    %al,-0x1f(%ebp)
085dcc1f +0x12d:  movb   $0x1,-0x1d(%ebp)
085dcc23 +0x131:  lea    -0x29(%ebp),%ebx
085dcc26 +0x134:  mov    0xc(%ebp),%eax
085dcc29 +0x137:  mov    %eax,(%esp)
085dcc2c +0x13a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085dcc31 +0x13f:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
085dcc37 +0x145:  mov    %eax,0x4(%esp)
085dcc3b +0x149:  mov    %edx,(%esp)
085dcc3e +0x14c:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085dcc43 +0x151:  movl   $0xd,0x8(%esp)
085dcc4b +0x159:  mov    %ebx,0x4(%esp)
085dcc4f +0x15d:  mov    %eax,(%esp)
085dcc52 +0x160:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085dcc57 +0x165:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dcc5c +0x16a:  mov    %eax,(%esp)
085dcc5f +0x16d:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085dcc64 +0x172:  test   %al,%al
085dcc66 +0x174:  je     085dccf5 <+0x203>
085dcc6c +0x17a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dcc71 +0x17f:  mov    %eax,(%esp)
085dcc74 +0x182:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085dcc79 +0x187:  cmp    $0x4,%eax
085dcc7c +0x18a:  je     085dcc90 <+0x19e>
085dcc7e +0x18c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dcc83 +0x191:  mov    %eax,(%esp)
085dcc86 +0x194:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085dcc8b +0x199:  cmp    $0x8,%eax
085dcc8e +0x19c:  jne    085dcc97 <+0x1a5>
085dcc90 +0x19e:  mov    $0x1,%eax
085dcc95 +0x1a3:  jmp    085dcc9c <+0x1aa>
085dcc97 +0x1a5:  mov    $0x0,%eax
085dcc9c +0x1aa:  test   %al,%al
085dcc9e +0x1ac:  je     085dccc9 <+0x1d7>
085dcca0 +0x1ae:  mov    0x8(%ebp),%eax
085dcca3 +0x1b1:  lea    0x268(%eax),%edx
085dcca9 +0x1b7:  mov    -0xc(%ebp),%eax
085dccac +0x1ba:  mov    %eax,0x4(%esp)
085dccb0 +0x1be:  mov    %edx,(%esp)
085dccb3 +0x1c1:  call   085d5730 <_ZN12PvpUserTable15GetLeavePenaltyEi>  ; PvpUserTable::GetLeavePenalty(int)
085dccb8 +0x1c6:  mov    %eax,0x4(%esp)
085dccbc +0x1ca:  mov    0xc(%ebp),%eax
085dccbf +0x1cd:  mov    %eax,(%esp)
085dccc2 +0x1d0:  call   0865cfd8 <_ZN5CUser16update_pvp_pointEi>  ; CUser::update_pvp_point(int)
085dccc7 +0x1d5:  jmp    085dccf5 <+0x203>
085dccc9 +0x1d7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dccce +0x1dc:  mov    %eax,(%esp)
085dccd1 +0x1df:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085dccd6 +0x1e4:  cmp    $0x6,%eax
085dccd9 +0x1e7:  sete   %al
085dccdc +0x1ea:  test   %al,%al
085dccde +0x1ec:  je     085dccf5 <+0x203>
085dcce0 +0x1ee:  movl   $0xffffffff,0x4(%esp)
085dcce8 +0x1f6:  mov    0xc(%ebp),%eax
085dcceb +0x1f9:  mov    %eax,(%esp)
085dccee +0x1fc:  call   0865c936 <_ZN5CUser20add_guild_pvp_resultEi>  ; CUser::add_guild_pvp_result(int)
085dccf3 +0x201:  jmp    085dcd66 <+0x274>
085dccf5 +0x203:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dccfa +0x208:  mov    %eax,(%esp)
085dccfd +0x20b:  call   085dfa92 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x319>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x319
085dcd02 +0x210:  test   %al,%al
085dcd04 +0x212:  je     085dcd21 <+0x22f>
085dcd06 +0x214:  movl   $0x0,0x8(%esp)
085dcd0e +0x21c:  movl   $0x0,0x4(%esp)
085dcd16 +0x224:  mov    0xc(%ebp),%eax
085dcd19 +0x227:  mov    %eax,(%esp)
085dcd1c +0x22a:  call   0865c678 <_ZN5CUser14add_pvp_resultEbPj>  ; CUser::add_pvp_result(bool, unsigned int*)
085dcd21 +0x22f:  mov    0x8(%ebp),%eax
085dcd24 +0x232:  mov    0x6e4(%eax),%eax
085dcd2a +0x238:  mov    (%eax),%eax
085dcd2c +0x23a:  add    $0x60,%eax
085dcd2f +0x23d:  mov    (%eax),%ecx
085dcd31 +0x23f:  mov    0x8(%ebp),%eax
085dcd34 +0x242:  mov    0x6e4(%eax),%eax
085dcd3a +0x248:  mov    0xc(%ebp),%edx
085dcd3d +0x24b:  mov    %edx,0x4(%esp)
085dcd41 +0x24f:  mov    %eax,(%esp)
085dcd44 +0x252:  call   *%ecx
085dcd46 +0x254:  jmp    085dcd66 <+0x274>
085dcd48 +0x256:  mov    %edx,%ebx
085dcd4a +0x258:  mov    %eax,%esi
085dcd4c +0x25a:  lea    -0xb0(%ebp),%eax
085dcd52 +0x260:  mov    %eax,(%esp)
085dcd55 +0x263:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
085dcd5a +0x268:  mov    %esi,%eax
085dcd5c +0x26a:  mov    %ebx,%edx
085dcd5e +0x26c:  mov    %eax,(%esp)
085dcd61 +0x26f:  call   08ae3750 <_Unwind_Resume>
085dcd66 +0x274:  lea    -0xb0(%ebp),%eax
085dcd6c +0x27a:  mov    %eax,(%esp)
085dcd6f +0x27d:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
085dcd74 +0x282:  add    $0xc0,%esp
085dcd7a +0x288:  pop    %ebx
085dcd7b +0x289:  pop    %esi
085dcd7c +0x28a:  pop    %ebp
085dcd7d +0x28b:  ret
```

## 反编译 C

```c
// PvP_Room::GiveOuterPenalty @ 0x85dcaf2

/* PvP_Room::GiveOuterPenalty(CUser*) */

void __thiscall PvP_Room::GiveOuterPenalty(PvP_Room *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  CStatisticServerProxy *this_00;
  PvpResultType local_b4 [135];
  Packet_Server_Match_data local_2d [10];
  undefined1 local_23;
  undefined1 local_21;
  cMyTrace local_20 [16];
  int local_10;
  
  PvpResultType::PvpResultType(local_b4);
  PvpResultType::Clear(local_b4);
                    /* try { // try from 085dcb29 to 085dcd45 has its CatchHandler @ 085dcd48 */
  CUser::update_pvp_rank(param_1,local_b4);
  local_10 = GetTeamIndex(this,param_1);
  cVar2 = PvpUserTable::IsValidTeam((PvpUserTable *)(this + 0x268),local_10);
  if (cVar2 != '\x01') {
    cMyTrace::cMyTrace(local_20,"void PvP_Room::GiveOuterPenalty(CUser*)",0x10f8,5);
    cMyTrace::operator()(local_20,&DAT_08cc125c,local_10);
    goto LAB_085dcd66;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar2 == '\0') {
LAB_085dcbe9:
    bVar1 = false;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x38);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar2 == '\0') goto LAB_085dcbe9;
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = CUser::GetServerGroup(param_1);
    if (iVar5 != 0) {
      Packet_Server_Match_data::Packet_Server_Match_data(local_2d);
      local_23 = CUser::GetServerGroup(param_1);
      local_21 = 1;
      uVar6 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar6);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_2d,0xd);
    }
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar3);
  if (cVar2 != '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(pGVar3);
    if (iVar5 == 4) {
LAB_085dcc90:
      bVar1 = true;
    }
    else {
      pGVar3 = (GameWorld *)G_GameWorld();
      iVar5 = GameWorld::GetChannelType(pGVar3);
      if (iVar5 == 8) goto LAB_085dcc90;
      bVar1 = false;
    }
    if (bVar1) {
      iVar5 = PvpUserTable::GetLeavePenalty((PvpUserTable *)(this + 0x268),local_10);
      CUser::update_pvp_point(param_1,iVar5);
    }
    else {
      pGVar3 = (GameWorld *)G_GameWorld();
      iVar5 = GameWorld::GetChannelType(pGVar3);
      if (iVar5 == 6) {
        CUser::add_guild_pvp_result(param_1,-1);
        goto LAB_085dcd66;
      }
    }
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsWinPointPvPChannel(pGVar3);
  if (cVar2 != '\0') {
    CUser::add_pvp_result(param_1,false,(uint *)0x0);
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x60))(*(undefined4 *)(this + 0x6e4),param_1);
LAB_085dcd66:
  PvpResultType::~PvpResultType(local_b4);
  return;
}
```
