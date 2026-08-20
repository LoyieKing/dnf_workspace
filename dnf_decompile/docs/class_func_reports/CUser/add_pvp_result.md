# add_pvp_result

`_ZN5CUser14add_pvp_resultEbPj`

`CUser::add_pvp_result(bool, unsigned int*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865c678` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865c678  _ZN5CUser14add_pvp_resultEbPj
#           CUser::add_pvp_result(bool, unsigned int*)
# range [0x0865c678, 0x0865c935]
0865c678 +0x000:  push   %ebp
0865c679 +0x001:  mov    %esp,%ebp
0865c67b +0x003:  push   %ebx
0865c67c +0x004:  sub    $0x44,%esp
0865c67f +0x007:  mov    0xc(%ebp),%eax
0865c682 +0x00a:  mov    %al,-0x2c(%ebp)
0865c685 +0x00d:  mov    0x8(%ebp),%eax
0865c688 +0x010:  mov    %eax,(%esp)
0865c68b +0x013:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0865c690 +0x018:  mov    %eax,-0x1c(%ebp)
0865c693 +0x01b:  cmpl   $0x0,-0x1c(%ebp)
0865c697 +0x01f:  je     0865c92b <+0x2b3>
0865c69d +0x025:  mov    0x8(%ebp),%eax
0865c6a0 +0x028:  mov    %eax,0x4(%esp)
0865c6a4 +0x02c:  mov    -0x1c(%ebp),%eax
0865c6a7 +0x02f:  mov    %eax,(%esp)
0865c6aa +0x032:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
0865c6af +0x037:  mov    %eax,-0x18(%ebp)
0865c6b2 +0x03a:  mov    -0x18(%ebp),%eax
0865c6b5 +0x03d:  mov    %eax,0x4(%esp)
0865c6b9 +0x041:  mov    -0x1c(%ebp),%eax
0865c6bc +0x044:  mov    %eax,(%esp)
0865c6bf +0x047:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
0865c6c4 +0x04c:  test   %al,%al
0865c6c6 +0x04e:  jne    0865c92e <+0x2b6>
0865c6cc +0x054:  mov    0x8(%ebp),%eax
0865c6cf +0x057:  mov    %eax,(%esp)
0865c6d2 +0x05a:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
0865c6d7 +0x05f:  mov    0x8(%ebp),%eax
0865c6da +0x062:  mov    %eax,(%esp)
0865c6dd +0x065:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865c6e2 +0x06a:  mov    0x58(%eax),%eax
0865c6e5 +0x06d:  mov    %eax,-0x14(%ebp)
0865c6e8 +0x070:  mov    0x8(%ebp),%eax
0865c6eb +0x073:  mov    0x796fc(%eax),%eax
0865c6f1 +0x079:  mov    %eax,-0x10(%ebp)
0865c6f4 +0x07c:  mov    0x8(%ebp),%eax
0865c6f7 +0x07f:  movl   $0x0,0x796fc(%eax)
0865c701 +0x089:  cmpb   $0x0,-0x2c(%ebp)
0865c705 +0x08d:  je     0865c751 <+0xd9>
0865c707 +0x08f:  addl   $0x1,-0x10(%ebp)
0865c70b +0x093:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865c710 +0x098:  mov    %eax,(%esp)
0865c713 +0x09b:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0865c718 +0x0a0:  test   %al,%al
0865c71a +0x0a2:  je     0865c734 <+0xbc>
0865c71c +0x0a4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865c721 +0x0a9:  mov    %eax,(%esp)
0865c724 +0x0ac:  call   085e68a8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x30>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x30
0865c729 +0x0b1:  test   %eax,%eax
0865c72b +0x0b3:  jne    0865c734 <+0xbc>
0865c72d +0x0b5:  mov    $0x1,%eax
0865c732 +0x0ba:  jmp    0865c739 <+0xc1>
0865c734 +0x0bc:  mov    $0x0,%eax
0865c739 +0x0c1:  test   %al,%al
0865c73b +0x0c3:  jne    0865c797 <+0x11f>
0865c73d +0x0c5:  mov    0x8(%ebp),%eax
0865c740 +0x0c8:  mov    %eax,(%esp)
0865c743 +0x0cb:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0865c748 +0x0d0:  mov    (%eax),%edx
0865c74a +0x0d2:  add    $0x1,%edx
0865c74d +0x0d5:  mov    %edx,(%eax)
0865c74f +0x0d7:  jmp    0865c797 <+0x11f>
0865c751 +0x0d9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865c756 +0x0de:  mov    %eax,(%esp)
0865c759 +0x0e1:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0865c75e +0x0e6:  test   %al,%al
0865c760 +0x0e8:  je     0865c77a <+0x102>
0865c762 +0x0ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865c767 +0x0ef:  mov    %eax,(%esp)
0865c76a +0x0f2:  call   085e68a8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x30>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x30
0865c76f +0x0f7:  test   %eax,%eax
0865c771 +0x0f9:  jne    0865c77a <+0x102>
0865c773 +0x0fb:  mov    $0x1,%eax
0865c778 +0x100:  jmp    0865c77f <+0x107>
0865c77a +0x102:  mov    $0x0,%eax
0865c77f +0x107:  test   %al,%al
0865c781 +0x109:  jne    0865c797 <+0x11f>
0865c783 +0x10b:  mov    0x8(%ebp),%eax
0865c786 +0x10e:  mov    %eax,(%esp)
0865c789 +0x111:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0865c78e +0x116:  mov    0x4(%eax),%edx
0865c791 +0x119:  add    $0x1,%edx
0865c794 +0x11c:  mov    %edx,0x4(%eax)
0865c797 +0x11f:  mov    0x8(%ebp),%eax
0865c79a +0x122:  mov    %eax,(%esp)
0865c79d +0x125:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0865c7a2 +0x12a:  mov    0x58(%eax),%edx
0865c7a5 +0x12d:  add    -0x10(%ebp),%edx
0865c7a8 +0x130:  mov    %edx,0x58(%eax)
0865c7ab +0x133:  mov    0x8(%ebp),%eax
0865c7ae +0x136:  mov    %eax,(%esp)
0865c7b1 +0x139:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865c7b6 +0x13e:  mov    0x58(%eax),%eax
0865c7b9 +0x141:  mov    0x8(%ebp),%edx
0865c7bc +0x144:  lea    0x79700(%edx),%ecx
0865c7c2 +0x14a:  movl   $0x0,0xc(%esp)
0865c7ca +0x152:  mov    -0x10(%ebp),%edx
0865c7cd +0x155:  mov    %edx,0x8(%esp)
0865c7d1 +0x159:  mov    %eax,0x4(%esp)
0865c7d5 +0x15d:  mov    %ecx,(%esp)
0865c7d8 +0x160:  call   08682c96 <_ZN15cUserHistoryLog5WPAddEii12eWPAddReason>  ; cUserHistoryLog::WPAdd(int, int, eWPAddReason)
0865c7dd +0x165:  mov    0x8(%ebp),%eax
0865c7e0 +0x168:  mov    %eax,(%esp)
0865c7e3 +0x16b:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0865c7e8 +0x170:  mov    0x58(%eax),%eax
0865c7eb +0x173:  sub    -0x14(%ebp),%eax
0865c7ee +0x176:  mov    %eax,0x4(%esp)
0865c7f2 +0x17a:  mov    -0x1c(%ebp),%eax
0865c7f5 +0x17d:  mov    %eax,(%esp)
0865c7f8 +0x180:  call   085d9358 <_ZN8PvP_Room19get_extra_win_pointEi>  ; PvP_Room::get_extra_win_point(int)
0865c7fd +0x185:  mov    %eax,-0xc(%ebp)
0865c800 +0x188:  cmpl   $0x0,-0xc(%ebp)
0865c804 +0x18c:  je     0865c84c <+0x1d4>
0865c806 +0x18e:  mov    0x8(%ebp),%eax
0865c809 +0x191:  mov    %eax,(%esp)
0865c80c +0x194:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0865c811 +0x199:  mov    0x58(%eax),%edx
0865c814 +0x19c:  add    -0xc(%ebp),%edx
0865c817 +0x19f:  mov    %edx,0x58(%eax)
0865c81a +0x1a2:  mov    0x8(%ebp),%eax
0865c81d +0x1a5:  mov    %eax,(%esp)
0865c820 +0x1a8:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865c825 +0x1ad:  mov    0x58(%eax),%eax
0865c828 +0x1b0:  mov    0x8(%ebp),%edx
0865c82b +0x1b3:  lea    0x79700(%edx),%ecx
0865c831 +0x1b9:  movl   $0x0,0xc(%esp)
0865c839 +0x1c1:  mov    -0xc(%ebp),%edx
0865c83c +0x1c4:  mov    %edx,0x8(%esp)
0865c840 +0x1c8:  mov    %eax,0x4(%esp)
0865c844 +0x1cc:  mov    %ecx,(%esp)
0865c847 +0x1cf:  call   08682c96 <_ZN15cUserHistoryLog5WPAddEii12eWPAddReason>  ; cUserHistoryLog::WPAdd(int, int, eWPAddReason)
0865c84c +0x1d4:  mov    0x8(%ebp),%eax
0865c84f +0x1d7:  mov    %eax,(%esp)
0865c852 +0x1da:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
0865c857 +0x1df:  mov    -0x1c(%ebp),%eax
0865c85a +0x1e2:  mov    %eax,(%esp)
0865c85d +0x1e5:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
0865c862 +0x1ea:  cmp    $0x4,%eax
0865c865 +0x1ed:  je     0865c877 <+0x1ff>
0865c867 +0x1ef:  mov    -0x1c(%ebp),%eax
0865c86a +0x1f2:  mov    %eax,(%esp)
0865c86d +0x1f5:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
0865c872 +0x1fa:  cmp    $0x5,%eax
0865c875 +0x1fd:  jne    0865c87e <+0x206>
0865c877 +0x1ff:  mov    $0x1,%eax
0865c87c +0x204:  jmp    0865c883 <+0x20b>
0865c87e +0x206:  mov    $0x0,%eax
0865c883 +0x20b:  test   %al,%al
0865c885 +0x20d:  je     0865c8f8 <+0x280>
0865c887 +0x20f:  cmpl   $0x0,0x10(%ebp)
0865c88b +0x213:  je     0865c8f8 <+0x280>
0865c88d +0x215:  movl   $0x0,-0x20(%ebp)
0865c894 +0x21c:  mov    0x8(%ebp),%eax
0865c897 +0x21f:  mov    %eax,(%esp)
0865c89a +0x222:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0865c89f +0x227:  mov    %eax,%ebx
0865c8a1 +0x229:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865c8a6 +0x22e:  lea    -0x20(%ebp),%edx
0865c8a9 +0x231:  mov    %edx,0x8(%esp)
0865c8ad +0x235:  mov    %ebx,0x4(%esp)
0865c8b1 +0x239:  mov    %eax,(%esp)
0865c8b4 +0x23c:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
0865c8b9 +0x241:  mov    0x8(%ebp),%eax
0865c8bc +0x244:  mov    %eax,(%esp)
0865c8bf +0x247:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0865c8c4 +0x24c:  mov    0x58(%eax),%eax
0865c8c7 +0x24f:  sub    -0x14(%ebp),%eax
0865c8ca +0x252:  mov    %eax,%edx
0865c8cc +0x254:  mov    -0x20(%ebp),%eax
0865c8cf +0x257:  imul   %eax,%edx
0865c8d2 +0x25a:  mov    0x10(%ebp),%eax
0865c8d5 +0x25d:  mov    %edx,(%eax)
0865c8d7 +0x25f:  mov    0x10(%ebp),%eax
0865c8da +0x262:  mov    (%eax),%ebx
0865c8dc +0x264:  mov    0x10(%ebp),%eax
0865c8df +0x267:  mov    (%eax),%eax
0865c8e1 +0x269:  mov    %eax,0x4(%esp)
0865c8e5 +0x26d:  mov    0x8(%ebp),%eax
0865c8e8 +0x270:  mov    %eax,(%esp)
0865c8eb +0x273:  call   0864fc34 <_ZN5CUser21gainPowerWarRewardExpEi>  ; CUser::gainPowerWarRewardExp(int)
0865c8f0 +0x278:  lea    (%ebx,%eax,1),%edx
0865c8f3 +0x27b:  mov    0x10(%ebp),%eax
0865c8f6 +0x27e:  mov    %edx,(%eax)
0865c8f8 +0x280:  mov    0x8(%ebp),%eax
0865c8fb +0x283:  mov    %eax,(%esp)
0865c8fe +0x286:  call   0865cd52 <_ZN5CUser15send_pvp_recordEv>  ; CUser::send_pvp_record()
0865c903 +0x28b:  mov    0x8(%ebp),%eax
0865c906 +0x28e:  movl   $0x0,0x4(%esp)
0865c90e +0x296:  mov    %eax,(%esp)
0865c911 +0x299:  call   084ec02e <_GLOBAL__I__Z7getUserj+0x2fe0>  ; global constructors keyed to getUser(unsigned int)+0x2fe0
0865c916 +0x29e:  mov    0x8(%ebp),%eax
0865c919 +0x2a1:  movl   $0x0,0x4(%esp)
0865c921 +0x2a9:  mov    %eax,(%esp)
0865c924 +0x2ac:  call   084ec04a <_GLOBAL__I__Z7getUserj+0x2ffc>  ; global constructors keyed to getUser(unsigned int)+0x2ffc
0865c929 +0x2b1:  jmp    0865c92f <+0x2b7>
0865c92b +0x2b3:  nop
0865c92c +0x2b4:  jmp    0865c92f <+0x2b7>
0865c92e +0x2b6:  nop
0865c92f +0x2b7:  add    $0x44,%esp
0865c932 +0x2ba:  pop    %ebx
0865c933 +0x2bb:  pop    %ebp
0865c934 +0x2bc:  ret
0865c935 +0x2bd:  nop
```

## 反编译 C

```c
// CUser::add_pvp_result @ 0x865c678

/* CUser::add_pvp_result(bool, unsigned int*) */

void __thiscall CUser::add_pvp_result(CUser *this,bool param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *pGVar5;
  CDataManager *pCVar6;
  int *piVar7;
  uint local_24;
  PvP_Room *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = (PvP_Room *)GetPVPRoom(this);
  if (local_20 == (PvP_Room *)0x0) {
    return;
  }
  local_1c = PvP_Room::get_user_seat(local_20,this);
  cVar3 = PvP_Room::IsPvpObserver(local_20,local_1c);
  if (cVar3 != '\0') {
    return;
  }
  lock(this);
  iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
  local_18 = *(int *)(iVar4 + 0x58);
  local_14 = *(int *)(this + 0x796fc);
  *(undefined4 *)(this + 0x796fc) = 0;
  if (!param_1) {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
    if (cVar3 == '\0') {
LAB_0865c77a:
      bVar2 = false;
    }
    else {
      pCVar6 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::GetPvPChannelType(pCVar6);
      if (iVar4 != 0) goto LAB_0865c77a;
      bVar2 = true;
    }
    if (!bVar2) {
      iVar4 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
    goto LAB_0865c797;
  }
  local_14 = local_14 + 1;
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar3 == '\0') {
LAB_0865c734:
    bVar2 = false;
  }
  else {
    pCVar6 = (CDataManager *)G_CDataManager();
    iVar4 = CDataManager::GetPvPChannelType(pCVar6);
    if (iVar4 != 0) goto LAB_0865c734;
    bVar2 = true;
  }
  if (!bVar2) {
    piVar7 = (int *)CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
    *piVar7 = *piVar7 + 1;
  }
LAB_0865c797:
  iVar4 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
  *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) + local_14;
  iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
  cUserHistoryLog::WPAdd
            ((cUserHistoryLog *)(this + 0x79700),*(undefined4 *)(iVar4 + 0x58),local_14,0);
  iVar4 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
  local_10 = PvP_Room::get_extra_win_point(local_20,*(int *)(iVar4 + 0x58) - local_18);
  if (local_10 != 0) {
    iVar4 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
    *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) + local_10;
    iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    cUserHistoryLog::WPAdd
              ((cUserHistoryLog *)(this + 0x79700),*(undefined4 *)(iVar4 + 0x58),local_10,0);
  }
  unlock(this);
  iVar4 = PvP_Room::get_pvp_battle_mode(local_20);
  if ((iVar4 == 4) || (iVar4 = PvP_Room::get_pvp_battle_mode(local_20), iVar4 == 5)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (param_2 != (uint *)0x0)) {
    local_24 = 0;
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    pCVar6 = (CDataManager *)G_CDataManager();
    CDataManager::get_mob_reward(pCVar6,iVar4,&local_24);
    iVar4 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    *param_2 = (*(int *)(iVar4 + 0x58) - local_18) * local_24;
    uVar1 = *param_2;
    iVar4 = gainPowerWarRewardExp((int)this);
    *param_2 = uVar1 + iVar4;
  }
  send_pvp_record(this);
  CUserCharacInfo::SetReliablePerson((CUserCharacInfo *)this,false);
  CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)this,0);
  return;
}
```
