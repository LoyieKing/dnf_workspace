# GiveupPanalty

`_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv`

`pvp_assault::CAssaulter::GiveupPanalty()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6868` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6868  _ZN11pvp_assault10CAssaulter13GiveupPanaltyEv
#           pvp_assault::CAssaulter::GiveupPanalty()
# range [0x082e6868, 0x082e6a3f]
082e6868 +0x000:  push   %ebp
082e6869 +0x001:  mov    %esp,%ebp
082e686b +0x003:  push   %esi
082e686c +0x004:  push   %ebx
082e686d +0x005:  sub    $0x20,%esp
082e6870 +0x008:  mov    0x8(%ebp),%eax
082e6873 +0x00b:  mov    (%eax),%eax
082e6875 +0x00d:  test   %eax,%eax
082e6877 +0x00f:  je     082e6a39 <+0x1d1>
082e687d +0x015:  mov    0x8(%ebp),%eax
082e6880 +0x018:  mov    (%eax),%eax
082e6882 +0x01a:  mov    %eax,(%esp)
082e6885 +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e688a +0x022:  test   %eax,%eax
082e688c +0x024:  setne  %al
082e688f +0x027:  test   %al,%al
082e6891 +0x029:  je     082e6a39 <+0x1d1>
082e6897 +0x02f:  mov    0x8(%ebp),%eax
082e689a +0x032:  mov    (%eax),%eax
082e689c +0x034:  mov    %eax,(%esp)
082e689f +0x037:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
082e68a4 +0x03c:  movzbl %al,%edx
082e68a7 +0x03f:  mov    0x8(%ebp),%eax
082e68aa +0x042:  mov    (%eax),%eax
082e68ac +0x044:  mov    %edx,0x4(%esp)
082e68b0 +0x048:  mov    %eax,(%esp)
082e68b3 +0x04b:  call   082f093a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6be>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6be
082e68b8 +0x050:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e68bd +0x055:  mov    %eax,(%esp)
082e68c0 +0x058:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e68c5 +0x05d:  xor    $0x1,%eax
082e68c8 +0x060:  test   %al,%al
082e68ca +0x062:  je     082e68e4 <+0x7c>
082e68cc +0x064:  mov    0x8(%ebp),%eax
082e68cf +0x067:  mov    (%eax),%eax
082e68d1 +0x069:  mov    %eax,(%esp)
082e68d4 +0x06c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e68d9 +0x071:  cmp    $0x7,%al
082e68db +0x073:  je     082e68e4 <+0x7c>
082e68dd +0x075:  mov    $0x1,%eax
082e68e2 +0x07a:  jmp    082e68e9 <+0x81>
082e68e4 +0x07c:  mov    $0x0,%eax
082e68e9 +0x081:  test   %al,%al
082e68eb +0x083:  je     082e6909 <+0xa1>
082e68ed +0x085:  mov    0x8(%ebp),%eax
082e68f0 +0x088:  mov    (%eax),%eax
082e68f2 +0x08a:  add    $0x79700,%eax
082e68f7 +0x08f:  movl   $0x7,0x4(%esp)
082e68ff +0x097:  mov    %eax,(%esp)
082e6902 +0x09a:  call   0868646c <_ZN15cUserHistoryLog9GiveupPvPE23ENUM_PVP_HISTORY_REASON>  ; cUserHistoryLog::GiveupPvP(ENUM_PVP_HISTORY_REASON)
082e6907 +0x09f:  jmp    082e6923 <+0xbb>
082e6909 +0x0a1:  mov    0x8(%ebp),%eax
082e690c +0x0a4:  mov    (%eax),%eax
082e690e +0x0a6:  add    $0x79700,%eax
082e6913 +0x0ab:  movl   $0x3,0x4(%esp)
082e691b +0x0b3:  mov    %eax,(%esp)
082e691e +0x0b6:  call   0868646c <_ZN15cUserHistoryLog9GiveupPvPE23ENUM_PVP_HISTORY_REASON>  ; cUserHistoryLog::GiveupPvP(ENUM_PVP_HISTORY_REASON)
082e6923 +0x0bb:  movl   $0x0,-0x14(%ebp)
082e692a +0x0c2:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e692f +0x0c7:  mov    %eax,(%esp)
082e6932 +0x0ca:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e6937 +0x0cf:  test   %al,%al
082e6939 +0x0d1:  jne    082e694c <+0xe4>
082e693b +0x0d3:  mov    0x8(%ebp),%eax
082e693e +0x0d6:  mov    (%eax),%eax
082e6940 +0x0d8:  mov    %eax,(%esp)
082e6943 +0x0db:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e6948 +0x0e0:  cmp    $0x7,%al
082e694a +0x0e2:  jne    082e6953 <+0xeb>
082e694c +0x0e4:  mov    $0x1,%eax
082e6951 +0x0e9:  jmp    082e6958 <+0xf0>
082e6953 +0x0eb:  mov    $0x0,%eax
082e6958 +0x0f0:  test   %al,%al
082e695a +0x0f2:  je     082e6997 <+0x12f>
082e695c +0x0f4:  mov    0x8(%ebp),%eax
082e695f +0x0f7:  mov    (%eax),%edx
082e6961 +0x0f9:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e6966 +0x0fe:  mov    %edx,0x4(%esp)
082e696a +0x102:  mov    %eax,(%esp)
082e696d +0x105:  call   08480ec8 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser>  ; CPowerManager::GetPowerWarResponPenalty(CUser*)
082e6972 +0x10a:  fstps  -0x10(%ebp)
082e6975 +0x10d:  mov    0x8(%ebp),%eax
082e6978 +0x110:  mov    (%eax),%edx
082e697a +0x112:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e697f +0x117:  mov    -0x10(%ebp),%ecx
082e6982 +0x11a:  mov    %ecx,0x8(%esp)
082e6986 +0x11e:  mov    %edx,0x4(%esp)
082e698a +0x122:  mov    %eax,(%esp)
082e698d +0x125:  call   08480e92 <_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf>  ; CPowerManager::GetPowerWarGhostTime(CUser*, float)
082e6992 +0x12a:  mov    %eax,-0x14(%ebp)
082e6995 +0x12d:  jmp    082e69d0 <+0x168>
082e6997 +0x12f:  mov    0x8(%ebp),%eax
082e699a +0x132:  mov    (%eax),%eax
082e699c +0x134:  mov    %eax,(%esp)
082e699f +0x137:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082e69a4 +0x13c:  mov    %eax,%esi
082e69a6 +0x13e:  mov    0x8(%ebp),%eax
082e69a9 +0x141:  mov    (%eax),%eax
082e69ab +0x143:  mov    %eax,(%esp)
082e69ae +0x146:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082e69b3 +0x14b:  mov    %eax,%ebx
082e69b5 +0x14d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082e69ba +0x152:  add    $0x68,%eax
082e69bd +0x155:  mov    %esi,0x8(%esp)
082e69c1 +0x159:  mov    %ebx,0x4(%esp)
082e69c5 +0x15d:  mov    %eax,(%esp)
082e69c8 +0x160:  call   08a8c804 <_ZN21ServerParameterScript19getAssaultGhostTimeEii>  ; ServerParameterScript::getAssaultGhostTime(int, int)
082e69cd +0x165:  mov    %eax,-0x14(%ebp)
082e69d0 +0x168:  cmpl   $0x0,-0x14(%ebp)
082e69d4 +0x16c:  je     082e6a39 <+0x1d1>
082e69d6 +0x16e:  mov    0x8(%ebp),%eax
082e69d9 +0x171:  mov    (%eax),%eax
082e69db +0x173:  movl   $0x1,0x4(%esp)
082e69e3 +0x17b:  mov    %eax,(%esp)
082e69e6 +0x17e:  call   082f0c30 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9b4
082e69eb +0x183:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e69f2 +0x18a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e69f7 +0x18f:  mov    %eax,-0xc(%ebp)
082e69fa +0x192:  mov    0x8(%ebp),%eax
082e69fd +0x195:  mov    (%eax),%eax
082e69ff +0x197:  mov    -0xc(%ebp),%edx
082e6a02 +0x19a:  mov    %edx,0x4(%esp)
082e6a06 +0x19e:  mov    %eax,(%esp)
082e6a09 +0x1a1:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
082e6a0e +0x1a6:  mov    -0x14(%ebp),%eax
082e6a11 +0x1a9:  mov    -0xc(%ebp),%edx
082e6a14 +0x1ac:  add    %eax,%edx
082e6a16 +0x1ae:  mov    0x8(%ebp),%eax
082e6a19 +0x1b1:  mov    (%eax),%eax
082e6a1b +0x1b3:  mov    %edx,0x4(%esp)
082e6a1f +0x1b7:  mov    %eax,(%esp)
082e6a22 +0x1ba:  call   0868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>  ; CUserCharacInfo::SetCurCharacChaosResponTime(int)
082e6a27 +0x1bf:  mov    0x8(%ebp),%eax
082e6a2a +0x1c2:  mov    (%eax),%eax
082e6a2c +0x1c4:  add    $0x796f4,%eax
082e6a31 +0x1c9:  mov    %eax,(%esp)
082e6a34 +0x1cc:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
082e6a39 +0x1d1:  add    $0x20,%esp
082e6a3c +0x1d4:  pop    %ebx
082e6a3d +0x1d5:  pop    %esi
082e6a3e +0x1d6:  pop    %ebp
082e6a3f +0x1d7:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaulter::GiveupPanalty @ 0x82e6868

/* pvp_assault::CAssaulter::GiveupPanalty() */

void __thiscall pvp_assault::CAssaulter::GiveupPanalty(CAssaulter *this)

{
  bool bVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longdouble lVar7;
  int local_18;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  if (iVar4 != 0) {
    uVar2 = CUserCharacInfo::getCurCharacStamina(*(CUserCharacInfo **)this);
    CUserCharacInfo::setCurCharacBackupStamina(*(CUserCharacInfo **)this,uVar2);
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\x01') ||
       (cVar3 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)this), cVar3 == '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cUserHistoryLog::GiveupPvP((cUserHistoryLog *)(*(int *)this + 0x79700),7);
    }
    else {
      cUserHistoryLog::GiveupPvP((cUserHistoryLog *)(*(int *)this + 0x79700),3);
    }
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\0') &&
       (cVar3 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)this), cVar3 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar7 = (longdouble)
              CPowerManager::GetPowerWarResponPenalty(GlobalData::s_power_manager,*(CUser **)this);
      local_18 = CPowerManager::GetPowerWarGhostTime
                           (GlobalData::s_power_manager,*(CUser **)this,(float)lVar7);
    }
    else {
      iVar4 = CUserCharacInfo::GetCurCharacChaosPoint(*(CUserCharacInfo **)this);
      iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
      iVar6 = G_CDataManager();
      local_18 = ServerParameterScript::getAssaultGhostTime
                           ((ServerParameterScript *)(iVar6 + 0x68),iVar5,iVar4);
    }
    if (local_18 != 0) {
      CUserCharacInfo::SetCurCharacGhost(*(CUserCharacInfo **)this,true);
      iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUserCharacInfo::SetCurCharacChaosDieTime(*(CUserCharacInfo **)this,iVar4);
      CUserCharacInfo::SetCurCharacChaosResponTime(*(CUserCharacInfo **)this,iVar4 + local_18);
      CCharacterView::enableSaveCharacView((CCharacterView *)(*(int *)this + 0x796f4));
    }
    return;
  }
  return;
}
```
