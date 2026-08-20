# OnDungeonClear

`_ZN6CParty14OnDungeonClearEP5CUserb`

`CParty::OnDungeonClear(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b5518` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b5518  _ZN6CParty14OnDungeonClearEP5CUserb
#           CParty::OnDungeonClear(CUser*, bool)
# range [0x085b5518, 0x085b58ab]
085b5518 +0x000:  push   %ebp
085b5519 +0x001:  mov    %esp,%ebp
085b551b +0x003:  push   %esi
085b551c +0x004:  push   %ebx
085b551d +0x005:  sub    $0x40,%esp
085b5520 +0x008:  mov    0x10(%ebp),%eax
085b5523 +0x00b:  mov    %al,-0x2c(%ebp)
085b5526 +0x00e:  call   08484a51 <_Z25IsCollectDungeonStatisticv>  ; IsCollectDungeonStatistic()
085b552b +0x013:  test   %al,%al
085b552d +0x015:  je     085b5544 <+0x2c>
085b552f +0x017:  mov    0x8(%ebp),%eax
085b5532 +0x01a:  mov    0xcd8(%eax),%eax
085b5538 +0x020:  cmp    $0x1,%eax
085b553b +0x023:  je     085b5544 <+0x2c>
085b553d +0x025:  mov    $0x1,%eax
085b5542 +0x02a:  jmp    085b5549 <+0x31>
085b5544 +0x02c:  mov    $0x0,%eax
085b5549 +0x031:  test   %al,%al
085b554b +0x033:  je     085b559c <+0x84>
085b554d +0x035:  cmpl   $0x0,0xc(%ebp)
085b5551 +0x039:  je     085b559c <+0x84>
085b5553 +0x03b:  mov    0xc(%ebp),%eax
085b5556 +0x03e:  mov    %eax,(%esp)
085b5559 +0x041:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b555e +0x046:  test   %eax,%eax
085b5560 +0x048:  setne  %al
085b5563 +0x04b:  test   %al,%al
085b5565 +0x04d:  je     085b559c <+0x84>
085b5567 +0x04f:  mov    0xc(%ebp),%eax
085b556a +0x052:  movzbl 0x8e074(%eax),%eax
085b5571 +0x059:  test   %al,%al
085b5573 +0x05b:  je     085b559c <+0x84>
085b5575 +0x05d:  mov    0x8(%ebp),%eax
085b5578 +0x060:  mov    0xcac(%eax),%eax
085b557e +0x066:  test   %eax,%eax
085b5580 +0x068:  je     085b559c <+0x84>
085b5582 +0x06a:  movzbl -0x2c(%ebp),%eax
085b5586 +0x06e:  mov    %eax,0x8(%esp)
085b558a +0x072:  mov    0xc(%ebp),%eax
085b558d +0x075:  mov    %eax,0x4(%esp)
085b5591 +0x079:  mov    0x8(%ebp),%eax
085b5594 +0x07c:  mov    %eax,(%esp)
085b5597 +0x07f:  call   085b5098 <_ZN6CParty21SendDungeonCharacInfoEP5CUserb>  ; CParty::SendDungeonCharacInfo(CUser*, bool)
085b559c +0x084:  mov    0x8(%ebp),%eax
085b559f +0x087:  mov    0xcd8(%eax),%eax
085b55a5 +0x08d:  cmp    $0x1,%eax
085b55a8 +0x090:  je     085b56bc <+0x1a4>
085b55ae +0x096:  mov    0x8(%ebp),%eax
085b55b1 +0x099:  mov    0xcac(%eax),%eax
085b55b7 +0x09f:  test   %eax,%eax
085b55b9 +0x0a1:  je     085b55d7 <+0xbf>
085b55bb +0x0a3:  mov    0x8(%ebp),%eax
085b55be +0x0a6:  mov    0xcac(%eax),%eax
085b55c4 +0x0ac:  mov    %eax,(%esp)
085b55c7 +0x0af:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085b55cc +0x0b4:  test   %al,%al
085b55ce +0x0b6:  jle    085b55d7 <+0xbf>
085b55d0 +0x0b8:  mov    $0x1,%eax
085b55d5 +0x0bd:  jmp    085b55dc <+0xc4>
085b55d7 +0x0bf:  mov    $0x0,%eax
085b55dc +0x0c4:  test   %al,%al
085b55de +0x0c6:  je     085b561f <+0x107>
085b55e0 +0x0c8:  mov    0xc(%ebp),%eax
085b55e3 +0x0cb:  mov    0x8e064(%eax),%esi
085b55e9 +0x0d1:  mov    0xc(%ebp),%eax
085b55ec +0x0d4:  mov    0x8e05c(%eax),%ebx
085b55f2 +0x0da:  mov    0xc(%ebp),%eax
085b55f5 +0x0dd:  mov    %eax,(%esp)
085b55f8 +0x0e0:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b55fd +0x0e5:  mov    &_ZN10GlobalData14s_statisticMgrE,%edx
085b5603 +0x0eb:  add    $0x18,%edx
085b5606 +0x0ee:  mov    %esi,0xc(%esp)
085b560a +0x0f2:  mov    %ebx,0x8(%esp)
085b560e +0x0f6:  mov    %eax,0x4(%esp)
085b5612 +0x0fa:  mov    %edx,(%esp)
085b5615 +0x0fd:  call   0860efca <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii>  ; CDungeonExpStatistic::IncreaseDungeonExp(int, int, int)
085b561a +0x102:  jmp    085b56bc <+0x1a4>
085b561f +0x107:  mov    0x8(%ebp),%eax
085b5622 +0x10a:  mov    0xcac(%eax),%eax
085b5628 +0x110:  test   %eax,%eax
085b562a +0x112:  je     085b5679 <+0x161>
085b562c +0x114:  mov    0x8(%ebp),%eax
085b562f +0x117:  mov    0xcac(%eax),%eax
085b5635 +0x11d:  mov    %eax,(%esp)
085b5638 +0x120:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085b563d +0x125:  lea    -0x5(%eax),%ebx
085b5640 +0x128:  mov    0xc(%ebp),%eax
085b5643 +0x12b:  mov    %eax,(%esp)
085b5646 +0x12e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b564b +0x133:  cmp    %eax,%ebx
085b564d +0x135:  jg     085b5679 <+0x161>
085b564f +0x137:  mov    0x8(%ebp),%eax
085b5652 +0x13a:  mov    0xcac(%eax),%eax
085b5658 +0x140:  mov    %eax,(%esp)
085b565b +0x143:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085b5660 +0x148:  lea    0x3(%eax),%ebx
085b5663 +0x14b:  mov    0xc(%ebp),%eax
085b5666 +0x14e:  mov    %eax,(%esp)
085b5669 +0x151:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b566e +0x156:  cmp    %eax,%ebx
085b5670 +0x158:  jl     085b5679 <+0x161>
085b5672 +0x15a:  mov    $0x1,%eax
085b5677 +0x15f:  jmp    085b567e <+0x166>
085b5679 +0x161:  mov    $0x0,%eax
085b567e +0x166:  test   %al,%al
085b5680 +0x168:  je     085b56bc <+0x1a4>
085b5682 +0x16a:  mov    0xc(%ebp),%eax
085b5685 +0x16d:  mov    0x8e064(%eax),%esi
085b568b +0x173:  mov    0xc(%ebp),%eax
085b568e +0x176:  mov    0x8e05c(%eax),%ebx
085b5694 +0x17c:  mov    0xc(%ebp),%eax
085b5697 +0x17f:  mov    %eax,(%esp)
085b569a +0x182:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b569f +0x187:  mov    &_ZN10GlobalData14s_statisticMgrE,%edx
085b56a5 +0x18d:  add    $0x18,%edx
085b56a8 +0x190:  mov    %esi,0xc(%esp)
085b56ac +0x194:  mov    %ebx,0x8(%esp)
085b56b0 +0x198:  mov    %eax,0x4(%esp)
085b56b4 +0x19c:  mov    %edx,(%esp)
085b56b7 +0x19f:  call   0860efca <_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii>  ; CDungeonExpStatistic::IncreaseDungeonExp(int, int, int)
085b56bc +0x1a4:  movzbl -0x2c(%ebp),%eax
085b56c0 +0x1a8:  mov    %eax,0x4(%esp)
085b56c4 +0x1ac:  mov    0xc(%ebp),%eax
085b56c7 +0x1af:  mov    %eax,(%esp)
085b56ca +0x1b2:  call   086802aa <_ZN5CUser14onDungeonClearEb>  ; CUser::onDungeonClear(bool)
085b56cf +0x1b7:  movzbl -0x2c(%ebp),%eax
085b56d3 +0x1bb:  mov    %eax,0x4(%esp)
085b56d7 +0x1bf:  mov    0xc(%ebp),%eax
085b56da +0x1c2:  mov    %eax,(%esp)
085b56dd +0x1c5:  call   08649b96 <_ZN5CUser24setDungeonClearHackCheckEb>  ; CUser::setDungeonClearHackCheck(bool)
085b56e2 +0x1ca:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b56e9 +0x1d1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085b56ee +0x1d6:  mov    0x8(%ebp),%edx
085b56f1 +0x1d9:  mov    0x185c(%edx),%edx
085b56f7 +0x1df:  mov    %eax,%ecx
085b56f9 +0x1e1:  sub    %edx,%ecx
085b56fb +0x1e3:  cmpb   $0x0,-0x2c(%ebp)
085b56ff +0x1e7:  je     085b5708 <+0x1f0>
085b5701 +0x1e9:  mov    $0x1,%eax
085b5706 +0x1ee:  jmp    085b570d <+0x1f5>
085b5708 +0x1f0:  mov    $0x0,%eax
085b570d +0x1f5:  mov    0xc(%ebp),%edx
085b5710 +0x1f8:  add    $0x79700,%edx
085b5716 +0x1fe:  mov    %ecx,0x8(%esp)
085b571a +0x202:  mov    %eax,0x4(%esp)
085b571e +0x206:  mov    %edx,(%esp)
085b5721 +0x209:  call   08684ac4 <_ZN15cUserHistoryLog16DungeonClearInfoEil>  ; cUserHistoryLog::DungeonClearInfo(int, long)
085b5726 +0x20e:  mov    0x8(%ebp),%eax
085b5729 +0x211:  add    $0xb24,%eax
085b572e +0x216:  movl   $0x0,0x4(%esp)
085b5736 +0x21e:  mov    %eax,(%esp)
085b5739 +0x221:  call   0830dd2c <_ZN13CBattle_Field10onClearMapEb>  ; CBattle_Field::onClearMap(bool)
085b573e +0x226:  cmpl   $0x0,0xc(%ebp)
085b5742 +0x22a:  je     085b57f2 <+0x2da>
085b5748 +0x230:  mov    0x8(%ebp),%eax
085b574b +0x233:  mov    0xcac(%eax),%eax
085b5751 +0x239:  test   %eax,%eax
085b5753 +0x23b:  je     085b57f2 <+0x2da>
085b5759 +0x241:  mov    0xc(%ebp),%eax
085b575c +0x244:  mov    %eax,(%esp)
085b575f +0x247:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b5764 +0x24c:  test   %eax,%eax
085b5766 +0x24e:  je     085b5783 <+0x26b>
085b5768 +0x250:  mov    0x8(%ebp),%eax
085b576b +0x253:  mov    0xcac(%eax),%eax
085b5771 +0x259:  movzbl 0x89f(%eax),%eax
085b5778 +0x260:  test   %al,%al
085b577a +0x262:  jle    085b5783 <+0x26b>
085b577c +0x264:  mov    $0x1,%eax
085b5781 +0x269:  jmp    085b5788 <+0x270>
085b5783 +0x26b:  mov    $0x0,%eax
085b5788 +0x270:  test   %al,%al
085b578a +0x272:  je     085b57f2 <+0x2da>
085b578c +0x274:  lea    -0x24(%ebp),%eax
085b578f +0x277:  mov    %eax,(%esp)
085b5792 +0x27a:  call   085bee52 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x3b0>  ; global constructors keyed to CParty::cMember::cMember()+0x3b0
085b5797 +0x27f:  mov    0xc(%ebp),%eax
085b579a +0x282:  mov    %eax,(%esp)
085b579d +0x285:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b57a2 +0x28a:  mov    %eax,-0x16(%ebp)
085b57a5 +0x28d:  cmpb   $0x0,-0x2c(%ebp)
085b57a9 +0x291:  je     085b57b2 <+0x29a>
085b57ab +0x293:  mov    $0x1,%eax
085b57b0 +0x298:  jmp    085b57b7 <+0x29f>
085b57b2 +0x29a:  mov    $0x0,%eax
085b57b7 +0x29f:  mov    %al,-0x11(%ebp)
085b57ba +0x2a2:  movb   $0x1,-0x12(%ebp)
085b57be +0x2a6:  lea    -0x24(%ebp),%ebx
085b57c1 +0x2a9:  mov    0xc(%ebp),%eax
085b57c4 +0x2ac:  mov    %eax,(%esp)
085b57c7 +0x2af:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085b57cc +0x2b4:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
085b57d2 +0x2ba:  mov    %eax,0x4(%esp)
085b57d6 +0x2be:  mov    %edx,(%esp)
085b57d9 +0x2c1:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085b57de +0x2c6:  movl   $0x14,0x8(%esp)
085b57e6 +0x2ce:  mov    %ebx,0x4(%esp)
085b57ea +0x2d2:  mov    %eax,(%esp)
085b57ed +0x2d5:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085b57f2 +0x2da:  mov    0x8(%ebp),%eax
085b57f5 +0x2dd:  movzwl 0xc4c(%eax),%eax
085b57fc +0x2e4:  test   %ax,%ax
085b57ff +0x2e7:  je     085b589f <+0x387>
085b5805 +0x2ed:  movzbl -0x2c(%ebp),%eax
085b5809 +0x2f1:  xor    $0x1,%eax
085b580c +0x2f4:  test   %al,%al
085b580e +0x2f6:  je     085b589f <+0x387>
085b5814 +0x2fc:  movl   $0xfffffdc6,-0x10(%ebp)
085b581b +0x303:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b5822 +0x30a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085b5827 +0x30f:  mov    %eax,-0xc(%ebp)
085b582a +0x312:  mov    0xc(%ebp),%eax
085b582d +0x315:  mov    -0xc(%ebp),%edx
085b5830 +0x318:  mov    %edx,0x4(%esp)
085b5834 +0x31c:  mov    %eax,(%esp)
085b5837 +0x31f:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
085b583c +0x324:  mov    -0xc(%ebp),%eax
085b583f +0x327:  add    $0x258,%eax
085b5844 +0x32c:  mov    %eax,%edx
085b5846 +0x32e:  add    -0x10(%ebp),%edx
085b5849 +0x331:  mov    0xc(%ebp),%eax
085b584c +0x334:  mov    %edx,0x4(%esp)
085b5850 +0x338:  mov    %eax,(%esp)
085b5853 +0x33b:  call   0868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>  ; CUserCharacInfo::SetCurCharacChaosResponTime(int)
085b5858 +0x340:  mov    -0x10(%ebp),%eax
085b585b +0x343:  lea    0x258(%eax),%edx
085b5861 +0x349:  mov    -0x10(%ebp),%eax
085b5864 +0x34c:  add    $0x258,%eax
085b5869 +0x351:  mov    %edx,0x8(%esp)
085b586d +0x355:  mov    %eax,0x4(%esp)
085b5871 +0x359:  mov    0xc(%ebp),%eax
085b5874 +0x35c:  mov    %eax,(%esp)
085b5877 +0x35f:  call   082eff42 <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii>  ; pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int)
085b587c +0x364:  mov    0xc(%ebp),%eax
085b587f +0x367:  movl   $0x1,0x4(%esp)
085b5887 +0x36f:  mov    %eax,(%esp)
085b588a +0x372:  call   082f0c30 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9b4
085b588f +0x377:  mov    0xc(%ebp),%eax
085b5892 +0x37a:  add    $0x796f4,%eax
085b5897 +0x37f:  mov    %eax,(%esp)
085b589a +0x382:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
085b589f +0x387:  mov    $0x1,%eax
085b58a4 +0x38c:  add    $0x40,%esp
085b58a7 +0x38f:  pop    %ebx
085b58a8 +0x390:  pop    %esi
085b58a9 +0x391:  pop    %ebp
085b58aa +0x392:  ret
085b58ab +0x393:  nop
```

## 反编译 C

```c
// CParty::OnDungeonClear @ 0x85b5518

/* CParty::OnDungeonClear(CUser*, bool) */

undefined4 __thiscall CParty::OnDungeonClear(CParty *this,CUser *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CStatisticServerProxy *this_00;
  Packet_Blood_dungeon_statistic local_28 [14];
  undefined4 local_1a;
  undefined1 local_16;
  undefined1 local_15;
  int local_14;
  int local_10;
  
  cVar2 = IsCollectDungeonStatistic();
  if ((cVar2 == '\0') || (*(int *)(this + 0xcd8) == 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((bVar1) && (param_1 != (CUser *)0x0)) &&
      (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) &&
     ((param_1[0x8e074] != (CUser)0x0 && (*(int *)(this + 0xcac) != 0)))) {
    SendDungeonCharacInfo(this,param_1,param_2);
  }
  if (*(int *)(this + 0xcd8) == 1) goto LAB_085b56bc;
  if ((*(int *)(this + 0xcac) == 0) ||
     (cVar2 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac)), cVar2 < '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = *(int *)(param_1 + 0x8e064);
    iVar5 = *(int *)(param_1 + 0x8e05c);
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    CDungeonExpStatistic::IncreaseDungeonExp
              ((CDungeonExpStatistic *)(GlobalData::s_statisticMgr + 0x18),iVar4,iVar5,iVar3);
    goto LAB_085b56bc;
  }
  if (*(int *)(this + 0xcac) == 0) {
LAB_085b5679:
    bVar1 = false;
  }
  else {
    iVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
    iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar5 < iVar3 + -5) goto LAB_085b5679;
    iVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
    iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar3 + 3 < iVar5) goto LAB_085b5679;
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = *(int *)(param_1 + 0x8e064);
    iVar5 = *(int *)(param_1 + 0x8e05c);
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    CDungeonExpStatistic::IncreaseDungeonExp
              ((CDungeonExpStatistic *)(GlobalData::s_statisticMgr + 0x18),iVar4,iVar5,iVar3);
  }
LAB_085b56bc:
  CUser::onDungeonClear(SUB41(param_1,0));
  CUser::setDungeonClearHackCheck(param_1,param_2);
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cUserHistoryLog::DungeonClearInfo
            ((cUserHistoryLog *)(param_1 + 0x79700),(uint)param_2,iVar3 - *(int *)(this + 0x185c));
  CBattle_Field::onClearMap((CBattle_Field *)(this + 0xb24),false);
  if ((param_1 != (CUser *)0x0) && (*(int *)(this + 0xcac) != 0)) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if ((iVar3 == 0) || (*(char *)(*(int *)(this + 0xcac) + 0x89f) < '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      Packet_Blood_dungeon_statistic::Packet_Blood_dungeon_statistic(local_28);
      local_1a = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_15 = param_2;
      local_16 = 1;
      uVar6 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar6);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_28,0x14);
    }
  }
  if ((*(short *)(this + 0xc4c) != 0) && (!param_2)) {
    local_14 = -0x23a;
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::SetCurCharacChaosDieTime((CUserCharacInfo *)param_1,local_10);
    CUserCharacInfo::SetCurCharacChaosResponTime
              ((CUserCharacInfo *)param_1,local_10 + 600 + local_14);
    pvp_assault::CAssaultMgr::NotifyGhostTime(param_1,local_14 + 600,local_14 + 600);
    CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_1,true);
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
  }
  return 1;
}
```
