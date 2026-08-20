# _DelUser

`_ZN11pvp_assault13CAssaultPlace8_DelUserEib`

`pvp_assault::CAssaultPlace::_DelUser(int, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6e2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6e2c  _ZN11pvp_assault13CAssaultPlace8_DelUserEib
#           pvp_assault::CAssaultPlace::_DelUser(int, bool)
# range [0x082e6e2c, 0x082e7017]
082e6e2c +0x000:  push   %ebp
082e6e2d +0x001:  mov    %esp,%ebp
082e6e2f +0x003:  push   %ebx
082e6e30 +0x004:  sub    $0x34,%esp
082e6e33 +0x007:  mov    0x10(%ebp),%eax
082e6e36 +0x00a:  mov    %al,-0x1c(%ebp)
082e6e39 +0x00d:  cmpb   $0x0,-0x1c(%ebp)
082e6e3d +0x011:  je     082e6e7e <+0x52>
082e6e3f +0x013:  mov    0xc(%ebp),%eax
082e6e42 +0x016:  shl    $0x5,%eax
082e6e45 +0x019:  add    0x8(%ebp),%eax
082e6e48 +0x01c:  mov    %eax,(%esp)
082e6e4b +0x01f:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082e6e50 +0x024:  cmp    $0x4,%eax
082e6e53 +0x027:  setg   %al
082e6e56 +0x02a:  test   %al,%al
082e6e58 +0x02c:  je     082e6e7e <+0x52>
082e6e5a +0x02e:  mov    0xc(%ebp),%eax
082e6e5d +0x031:  shl    $0x5,%eax
082e6e60 +0x034:  add    0x8(%ebp),%eax
082e6e63 +0x037:  mov    %eax,(%esp)
082e6e66 +0x03a:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6e6b +0x03f:  mov    %eax,%ebx
082e6e6d +0x041:  call   082348df <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f89>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f89
082e6e72 +0x046:  mov    %ebx,0x4(%esp)
082e6e76 +0x04a:  mov    %eax,(%esp)
082e6e79 +0x04d:  call   0847236a <_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser>  ; disconnect_detecter::CDisconnectDetecter::UnregisterUser(CUser*)
082e6e7e +0x052:  mov    0xc(%ebp),%eax
082e6e81 +0x055:  shl    $0x5,%eax
082e6e84 +0x058:  add    0x8(%ebp),%eax
082e6e87 +0x05b:  mov    %eax,(%esp)
082e6e8a +0x05e:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e6e8f +0x063:  mov    %eax,-0x18(%ebp)
082e6e92 +0x066:  mov    0xc(%ebp),%eax
082e6e95 +0x069:  shl    $0x5,%eax
082e6e98 +0x06c:  add    0x8(%ebp),%eax
082e6e9b +0x06f:  mov    %eax,(%esp)
082e6e9e +0x072:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6ea3 +0x077:  mov    %eax,-0x14(%ebp)
082e6ea6 +0x07a:  mov    0xc(%ebp),%eax
082e6ea9 +0x07d:  shl    $0x5,%eax
082e6eac +0x080:  add    0x8(%ebp),%eax
082e6eaf +0x083:  mov    %eax,(%esp)
082e6eb2 +0x086:  call   082e6812 <_ZN11pvp_assault10CAssaulter10DetachUserEv>  ; pvp_assault::CAssaulter::DetachUser()
082e6eb7 +0x08b:  mov    0x8(%ebp),%eax
082e6eba +0x08e:  mov    0x100(%eax),%eax
082e6ec0 +0x094:  lea    -0x1(%eax),%edx
082e6ec3 +0x097:  mov    0x8(%ebp),%eax
082e6ec6 +0x09a:  mov    %edx,0x100(%eax)
082e6ecc +0x0a0:  cmpl   $0x0,-0x14(%ebp)
082e6ed0 +0x0a4:  je     082e7012 <+0x1e6>
082e6ed6 +0x0aa:  mov    -0x14(%ebp),%eax
082e6ed9 +0x0ad:  mov    %eax,(%esp)
082e6edc +0x0b0:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e6ee1 +0x0b5:  test   %eax,%eax
082e6ee3 +0x0b7:  setne  %al
082e6ee6 +0x0ba:  test   %al,%al
082e6ee8 +0x0bc:  je     082e7012 <+0x1e6>
082e6eee +0x0c2:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e6ef3 +0x0c7:  mov    %eax,(%esp)
082e6ef6 +0x0ca:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e6efb +0x0cf:  test   %al,%al
082e6efd +0x0d1:  je     082e6f15 <+0xe9>
082e6eff +0x0d3:  mov    -0x14(%ebp),%eax
082e6f02 +0x0d6:  mov    %eax,(%esp)
082e6f05 +0x0d9:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e6f0a +0x0de:  cmp    $0x7,%al
082e6f0c +0x0e0:  jne    082e6f15 <+0xe9>
082e6f0e +0x0e2:  mov    $0x1,%eax
082e6f13 +0x0e7:  jmp    082e6f1a <+0xee>
082e6f15 +0x0e9:  mov    $0x0,%eax
082e6f1a +0x0ee:  test   %al,%al
082e6f1c +0x0f0:  jne    082e6f69 <+0x13d>
082e6f1e +0x0f2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e6f25 +0x0f9:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e6f2a +0x0fe:  mov    0x8(%ebp),%edx
082e6f2d +0x101:  mov    0x13c(%edx),%edx
082e6f33 +0x107:  sub    %edx,%eax
082e6f35 +0x109:  mov    %eax,%edx
082e6f37 +0x10b:  mov    -0x18(%ebp),%eax
082e6f3a +0x10e:  mov    0x8(%ebp),%ecx
082e6f3d +0x111:  movzbl 0x120(%ecx,%eax,1),%eax
082e6f45 +0x119:  movzbl %al,%eax
082e6f48 +0x11c:  mov    -0x14(%ebp),%ecx
082e6f4b +0x11f:  add    $0x79700,%ecx
082e6f51 +0x125:  mov    %edx,0xc(%esp)
082e6f55 +0x129:  mov    %eax,0x8(%esp)
082e6f59 +0x12d:  movl   $0x5,0x4(%esp)
082e6f61 +0x135:  mov    %ecx,(%esp)
082e6f64 +0x138:  call   0868642e <_ZN15cUserHistoryLog6EndPvPE23ENUM_PVP_HISTORY_REASONbj>  ; cUserHistoryLog::EndPvP(ENUM_PVP_HISTORY_REASON, bool, unsigned int)
082e6f69 +0x13d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e6f6e +0x142:  mov    -0x14(%ebp),%edx
082e6f71 +0x145:  mov    %edx,0x4(%esp)
082e6f75 +0x149:  mov    %eax,(%esp)
082e6f78 +0x14c:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
082e6f7d +0x151:  mov    %eax,-0x10(%ebp)
082e6f80 +0x154:  cmpl   $0x0,-0x10(%ebp)
082e6f84 +0x158:  je     082e6fd7 <+0x1ab>
082e6f86 +0x15a:  movl   $0x0,0x4(%esp)
082e6f8e +0x162:  mov    -0x14(%ebp),%eax
082e6f91 +0x165:  mov    %eax,(%esp)
082e6f94 +0x168:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082e6f99 +0x16d:  mov    %eax,0x4(%esp)
082e6f9d +0x171:  mov    -0x10(%ebp),%eax
082e6fa0 +0x174:  mov    %eax,(%esp)
082e6fa3 +0x177:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
082e6fa8 +0x17c:  mov    %eax,-0xc(%ebp)
082e6fab +0x17f:  cmpl   $0x0,-0xc(%ebp)
082e6faf +0x183:  je     082e6fd7 <+0x1ab>
082e6fb1 +0x185:  mov    -0x14(%ebp),%eax
082e6fb4 +0x188:  mov    %eax,0x4(%esp)
082e6fb8 +0x18c:  mov    -0xc(%ebp),%eax
082e6fbb +0x18f:  mov    %eax,(%esp)
082e6fbe +0x192:  call   086c22f2 <_ZN4Area15send_area_usersEP5CUser>  ; Area::send_area_users(CUser*)
082e6fc3 +0x197:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
082e6fc8 +0x19c:  mov    -0x14(%ebp),%edx
082e6fcb +0x19f:  mov    %edx,0x4(%esp)
082e6fcf +0x1a3:  mov    %eax,(%esp)
082e6fd2 +0x1a6:  call   082ef610 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser>  ; pvp_assault::CAssaultMgr::OnMoveArea(CUser*)
082e6fd7 +0x1ab:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
082e6fdc +0x1b0:  mov    -0x14(%ebp),%edx
082e6fdf +0x1b3:  mov    %edx,0x4(%esp)
082e6fe3 +0x1b7:  mov    %eax,(%esp)
082e6fe6 +0x1ba:  call   086b71da <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser>  ; village_object::CVillageObjectMgr::on_move_area(CUser*)
082e6feb +0x1bf:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
082e6ff0 +0x1c4:  mov    -0x14(%ebp),%edx
082e6ff3 +0x1c7:  mov    %edx,0x4(%esp)
082e6ff7 +0x1cb:  mov    %eax,(%esp)
082e6ffa +0x1ce:  call   086b45bc <_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser>  ; village_attacked::CVillageMonsterMgr::OnMoveArea(CUser*)
082e6fff +0x1d3:  mov    -0x14(%ebp),%eax
082e7002 +0x1d6:  movl   $0x0,0x4(%esp)
082e700a +0x1de:  mov    %eax,(%esp)
082e700d +0x1e1:  call   082f0a7a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7fe>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7fe
082e7012 +0x1e6:  add    $0x34,%esp
082e7015 +0x1e9:  pop    %ebx
082e7016 +0x1ea:  pop    %ebp
082e7017 +0x1eb:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_DelUser @ 0x82e6e2c

/* pvp_assault::CAssaultPlace::_DelUser(int, bool) */

void __thiscall pvp_assault::CAssaultPlace::_DelUser(CAssaultPlace *this,int param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *pCVar4;
  CDisconnectDetecter *this_00;
  CUserCharacInfo *this_01;
  int iVar5;
  GameWorld *this_02;
  Village *this_03;
  Area *this_04;
  CAssaultMgr *this_05;
  
  if ((param_2) && (iVar3 = CAssaulter::GetState((CAssaulter *)(this + param_1 * 0x20)), 4 < iVar3))
  {
    pCVar4 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    this_00 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
    disconnect_detecter::CDisconnectDetecter::UnregisterUser(this_00,pCVar4);
  }
  iVar3 = CAssaulter::GetTeam((CAssaulter *)(this + param_1 * 0x20));
  this_01 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
  CAssaulter::DetachUser((CAssaulter *)(this + param_1 * 0x20));
  *(int *)(this + 0x100) = *(int *)(this + 0x100) + -1;
  if (this_01 != (CUserCharacInfo *)0x0) {
    iVar5 = CUserCharacInfo::getCurCharacR(this_01);
    if (iVar5 != 0) {
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(this_01), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        cUserHistoryLog::EndPvP
                  ((cUserHistoryLog *)(this_01 + 0x79700),5,this[iVar3 + 0x120],
                   iVar5 - *(int *)(this + 0x13c));
      }
      this_02 = (GameWorld *)G_GameWorld();
      this_03 = (Village *)GameWorld::getUserVillage(this_02,(CUser *)this_01);
      if (this_03 != (Village *)0x0) {
        iVar3 = CUser::get_area((CUser *)this_01,false);
        this_04 = (Area *)Village::getArea(this_03,iVar3);
        if (this_04 != (Area *)0x0) {
          Area::send_area_users(this_04,(CUser *)this_01);
          this_05 = (CAssaultMgr *)GetInstanceAssaultMgr();
          CAssaultMgr::OnMoveArea(this_05,(CUser *)this_01);
        }
      }
      village_object::CVillageObjectMgr::on_move_area
                (GlobalData::s_villageObjectMgr,(CUser *)this_01);
      village_attacked::CVillageMonsterMgr::OnMoveArea
                (GlobalData::s_villageMonsterMgr,(CUser *)this_01);
      CUserCharacInfo::SetAssaultPlace(this_01,0);
      return;
    }
    return;
  }
  return;
}
```
