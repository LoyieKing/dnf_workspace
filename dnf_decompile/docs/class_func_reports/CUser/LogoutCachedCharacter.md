# LogoutCachedCharacter

`_ZN5CUser21LogoutCachedCharacterEh`

`CUser::LogoutCachedCharacter(unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864cb66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864cb66  _ZN5CUser21LogoutCachedCharacterEh
#           CUser::LogoutCachedCharacter(unsigned char)
# range [0x0864cb66, 0x0864cd91]
0864cb66 +0x000:  push   %ebp
0864cb67 +0x001:  mov    %esp,%ebp
0864cb69 +0x003:  push   %edi
0864cb6a +0x004:  push   %esi
0864cb6b +0x005:  push   %ebx
0864cb6c +0x006:  sub    $0x7c,%esp
0864cb6f +0x009:  mov    0xc(%ebp),%eax
0864cb72 +0x00c:  mov    %al,-0x2c(%ebp)
0864cb75 +0x00f:  mov    0x8(%ebp),%eax
0864cb78 +0x012:  mov    %eax,(%esp)
0864cb7b +0x015:  call   0868f472 <_ZN5CUser12SendMoenyLogEv>  ; CUser::SendMoenyLog()
0864cb80 +0x01a:  mov    0x8(%ebp),%eax
0864cb83 +0x01d:  mov    %eax,(%esp)
0864cb86 +0x020:  call   0864c85a <_ZN5CUser20CacheCharacterMemoryEv>  ; CUser::CacheCharacterMemory()
0864cb8b +0x025:  mov    %al,-0x19(%ebp)
0864cb8e +0x028:  movzbl -0x2c(%ebp),%eax
0864cb92 +0x02c:  mov    %eax,-0x50(%ebp)
0864cb95 +0x02f:  mov    0x8(%ebp),%eax
0864cb98 +0x032:  mov    %eax,(%esp)
0864cb9b +0x035:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
0864cba0 +0x03a:  mov    %eax,-0x4c(%ebp)
0864cba3 +0x03d:  mov    0x8(%ebp),%eax
0864cba6 +0x040:  mov    %eax,(%esp)
0864cba9 +0x043:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0864cbae +0x048:  mov    %eax,-0x48(%ebp)
0864cbb1 +0x04b:  movl   $0xffffffff,0x4(%esp)
0864cbb9 +0x053:  mov    0x8(%ebp),%eax
0864cbbc +0x056:  mov    %eax,(%esp)
0864cbbf +0x059:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0864cbc4 +0x05e:  mov    %eax,-0x44(%ebp)
0864cbc7 +0x061:  mov    0x8(%ebp),%eax
0864cbca +0x064:  mov    %eax,(%esp)
0864cbcd +0x067:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0864cbd2 +0x06c:  mov    %eax,%edi
0864cbd4 +0x06e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864cbd9 +0x073:  mov    %eax,(%esp)
0864cbdc +0x076:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0864cbe1 +0x07b:  mov    %eax,%esi
0864cbe3 +0x07d:  mov    0x8(%ebp),%eax
0864cbe6 +0x080:  mov    %eax,(%esp)
0864cbe9 +0x083:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864cbee +0x088:  mov    %eax,%ebx
0864cbf0 +0x08a:  mov    0x8(%ebp),%eax
0864cbf3 +0x08d:  mov    %eax,(%esp)
0864cbf6 +0x090:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0864cbfb +0x095:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0864cc01 +0x09b:  mov    %eax,0x4(%esp)
0864cc05 +0x09f:  mov    %edx,(%esp)
0864cc08 +0x0a2:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0864cc0d +0x0a7:  mov    -0x50(%ebp),%edx
0864cc10 +0x0aa:  mov    %edx,0x1c(%esp)
0864cc14 +0x0ae:  mov    -0x4c(%ebp),%edx
0864cc17 +0x0b1:  mov    %edx,0x18(%esp)
0864cc1b +0x0b5:  mov    -0x48(%ebp),%edx
0864cc1e +0x0b8:  mov    %edx,0x14(%esp)
0864cc22 +0x0bc:  mov    -0x44(%ebp),%edx
0864cc25 +0x0bf:  mov    %edx,0x10(%esp)
0864cc29 +0x0c3:  mov    %edi,0xc(%esp)
0864cc2d +0x0c7:  mov    %esi,0x8(%esp)
0864cc31 +0x0cb:  mov    %ebx,0x4(%esp)
0864cc35 +0x0cf:  mov    %eax,(%esp)
0864cc38 +0x0d2:  call   0846dbfe <_ZN17CGuildServerProxy10SendLogoutEjiPcjjjh>  ; CGuildServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int, unsigned char)
0864cc3d +0x0d7:  movzbl -0x19(%ebp),%eax
0864cc41 +0x0db:  mov    %eax,-0x40(%ebp)
0864cc44 +0x0de:  movzbl -0x2c(%ebp),%edx
0864cc48 +0x0e2:  mov    %edx,-0x3c(%ebp)
0864cc4b +0x0e5:  mov    0x8(%ebp),%eax
0864cc4e +0x0e8:  mov    %eax,(%esp)
0864cc51 +0x0eb:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
0864cc56 +0x0f0:  mov    %eax,-0x38(%ebp)
0864cc59 +0x0f3:  mov    0x8(%ebp),%eax
0864cc5c +0x0f6:  mov    %eax,(%esp)
0864cc5f +0x0f9:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0864cc64 +0x0fe:  mov    %eax,-0x34(%ebp)
0864cc67 +0x101:  movl   $0xffffffff,0x4(%esp)
0864cc6f +0x109:  mov    0x8(%ebp),%eax
0864cc72 +0x10c:  mov    %eax,(%esp)
0864cc75 +0x10f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0864cc7a +0x114:  mov    %eax,-0x30(%ebp)
0864cc7d +0x117:  mov    0x8(%ebp),%eax
0864cc80 +0x11a:  mov    %eax,(%esp)
0864cc83 +0x11d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0864cc88 +0x122:  mov    %eax,%edi
0864cc8a +0x124:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864cc8f +0x129:  mov    %eax,(%esp)
0864cc92 +0x12c:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0864cc97 +0x131:  mov    %eax,%esi
0864cc99 +0x133:  mov    0x8(%ebp),%eax
0864cc9c +0x136:  mov    %eax,(%esp)
0864cc9f +0x139:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864cca4 +0x13e:  mov    %eax,%ebx
0864cca6 +0x140:  mov    0x8(%ebp),%eax
0864cca9 +0x143:  mov    %eax,(%esp)
0864ccac +0x146:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0864ccb1 +0x14b:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
0864ccb7 +0x151:  mov    %eax,0x4(%esp)
0864ccbb +0x155:  mov    %edx,(%esp)
0864ccbe +0x158:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0864ccc3 +0x15d:  mov    -0x40(%ebp),%edx
0864ccc6 +0x160:  mov    %edx,0x20(%esp)
0864ccca +0x164:  mov    -0x3c(%ebp),%edx
0864cccd +0x167:  mov    %edx,0x1c(%esp)
0864ccd1 +0x16b:  mov    -0x38(%ebp),%edx
0864ccd4 +0x16e:  mov    %edx,0x18(%esp)
0864ccd8 +0x172:  mov    -0x34(%ebp),%edx
0864ccdb +0x175:  mov    %edx,0x14(%esp)
0864ccdf +0x179:  mov    -0x30(%ebp),%edx
0864cce2 +0x17c:  mov    %edx,0x10(%esp)
0864cce6 +0x180:  mov    %edi,0xc(%esp)
0864ccea +0x184:  mov    %esi,0x8(%esp)
0864ccee +0x188:  mov    %ebx,0x4(%esp)
0864ccf2 +0x18c:  mov    %eax,(%esp)
0864ccf5 +0x18f:  call   08470d68 <_ZN19CMonitorServerProxy10SendLogoutEjiPcjjjhh>  ; CMonitorServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int, unsigned char, unsigned char)
0864ccfa +0x194:  cmpb   $0x0,-0x2c(%ebp)
0864ccfe +0x198:  jne    0864cd3f <+0x1d9>
0864cd00 +0x19a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864cd05 +0x19f:  mov    0x378(%eax),%esi
0864cd0b +0x1a5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864cd10 +0x1aa:  mov    %eax,(%esp)
0864cd13 +0x1ad:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0864cd18 +0x1b2:  mov    %eax,%ebx
0864cd1a +0x1b4:  mov    0x8(%ebp),%eax
0864cd1d +0x1b7:  mov    %eax,(%esp)
0864cd20 +0x1ba:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864cd25 +0x1bf:  mov    &_ZN10GlobalData20s_double_check_proxyE,%edx
0864cd2b +0x1c5:  mov    %esi,0xc(%esp)
0864cd2f +0x1c9:  mov    %ebx,0x8(%esp)
0864cd33 +0x1cd:  mov    %eax,0x4(%esp)
0864cd37 +0x1d1:  mov    %edx,(%esp)
0864cd3a +0x1d4:  call   0846d47c <_ZN27CDoubleConnCheckServerProxy10SendLogoutEjii>  ; CDoubleConnCheckServerProxy::SendLogout(unsigned int, int, int)
0864cd3f +0x1d9:  mov    0x8(%ebp),%eax
0864cd42 +0x1dc:  mov    %eax,(%esp)
0864cd45 +0x1df:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864cd4a +0x1e4:  test   %eax,%eax
0864cd4c +0x1e6:  setne  %al
0864cd4f +0x1e9:  test   %al,%al
0864cd51 +0x1eb:  je     0864cd5e <+0x1f8>
0864cd53 +0x1ed:  mov    0x8(%ebp),%eax
0864cd56 +0x1f0:  mov    %eax,(%esp)
0864cd59 +0x1f3:  call   0868170c <_ZN5CUser24SendLogoutToPCRoomServerEv>  ; CUser::SendLogoutToPCRoomServer()
0864cd5e +0x1f8:  mov    0x8(%ebp),%eax
0864cd61 +0x1fb:  mov    %eax,(%esp)
0864cd64 +0x1fe:  call   0868c3bc <_ZN5CUser25delete_ontime_reward_listEv>  ; CUser::delete_ontime_reward_list()
0864cd69 +0x203:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
0864cd6e +0x208:  movl   $0x1,0x8(%esp)
0864cd76 +0x210:  mov    0x8(%ebp),%edx
0864cd79 +0x213:  mov    %edx,0x4(%esp)
0864cd7d +0x217:  mov    %eax,(%esp)
0864cd80 +0x21a:  call   08166d38 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb>  ; HeroMissionEvent::saveEventData(CUser*, bool)
0864cd85 +0x21f:  mov    $0x1,%eax
0864cd8a +0x224:  add    $0x7c,%esp
0864cd8d +0x227:  pop    %ebx
0864cd8e +0x228:  pop    %esi
0864cd8f +0x229:  pop    %edi
0864cd90 +0x22a:  pop    %ebp
0864cd91 +0x22b:  ret
```

## 反编译 C

```c
// CUser::LogoutCachedCharacter @ 0x864cb66

/* CUser::LogoutCachedCharacter(unsigned char) */

undefined4 __thiscall CUser::LogoutCachedCharacter(CUser *this,uchar param_1)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  CEnvironment *pCVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  CGuildServerProxy *this_00;
  CMonitorServerProxy *this_01;
  int iVar10;
  HeroMissionEvent *this_02;
  
  SendMoenyLog(this);
  uVar1 = CacheCharacterMemory(this);
  uVar2 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
  uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
  uVar4 = get_charac_no(this,-1);
  pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  pCVar6 = (CEnvironment *)G_CEnvironment();
  iVar7 = CEnvironment::get_channel_no(pCVar6);
  uVar8 = get_acc_id(this);
  uVar9 = GetServerGroup(this);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar9);
  CGuildServerProxy::SendLogout(this_00,uVar8,iVar7,pcVar5,uVar4,uVar3,uVar2,param_1);
  uVar2 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
  uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
  uVar4 = get_charac_no(this,-1);
  pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  pCVar6 = (CEnvironment *)G_CEnvironment();
  iVar7 = CEnvironment::get_channel_no(pCVar6);
  uVar8 = get_acc_id(this);
  uVar9 = GetServerGroup(this);
  this_01 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar9);
  CMonitorServerProxy::SendLogout(this_01,uVar8,iVar7,pcVar5,uVar4,uVar3,uVar2,param_1,uVar1);
  if (param_1 == '\0') {
    iVar7 = G_CEnvironment();
    iVar7 = *(int *)(iVar7 + 0x378);
    pCVar6 = (CEnvironment *)G_CEnvironment();
    iVar10 = CEnvironment::get_channel_no(pCVar6);
    uVar2 = get_acc_id(this);
    CDoubleConnCheckServerProxy::SendLogout(GlobalData::s_double_check_proxy,uVar2,iVar10,iVar7);
  }
  iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar7 != 0) {
    SendLogoutToPCRoomServer(this);
  }
  delete_ontime_reward_list(this);
  this_02 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
  HeroMissionEvent::saveEventData(this_02,this,true);
  return 1;
}
```
