# change_equip

`_ZN5CUser12change_equipEisi`

`CUser::change_equip(int, short, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865eed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865eed2  _ZN5CUser12change_equipEisi
#           CUser::change_equip(int, short, int)
# range [0x0865eed2, 0x0865f1e0]
0865eed2 +0x000:  push   %ebp
0865eed3 +0x001:  mov    %esp,%ebp
0865eed5 +0x003:  push   %ebx
0865eed6 +0x004:  sub    $0x34,%esp
0865eed9 +0x007:  mov    0x10(%ebp),%eax
0865eedc +0x00a:  mov    %ax,-0x1c(%ebp)
0865eee0 +0x00e:  movl   $0x0,-0x18(%ebp)
0865eee7 +0x015:  mov    0xc(%ebp),%eax
0865eeea +0x018:  cmp    $0x1,%eax
0865eeed +0x01b:  je     0865f07e <+0x1ac>
0865eef3 +0x021:  cmp    $0x2,%eax
0865eef6 +0x024:  je     0865f061 <+0x18f>
0865eefc +0x02a:  test   %eax,%eax
0865eefe +0x02c:  jne    0865f19d <+0x2cb>
0865ef04 +0x032:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865ef09 +0x037:  mov    %eax,(%esp)
0865ef0c +0x03a:  call   0869779e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ff3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ff3
0865ef11 +0x03f:  test   %al,%al
0865ef13 +0x041:  je     0865ef92 <+0xc0>
0865ef15 +0x043:  movswl -0x1c(%ebp),%ebx
0865ef19 +0x047:  mov    0x8(%ebp),%eax
0865ef1c +0x04a:  mov    %eax,(%esp)
0865ef1f +0x04d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865ef24 +0x052:  mov    %ebx,0x8(%esp)
0865ef28 +0x056:  movl   $0x1,0x4(%esp)
0865ef30 +0x05e:  mov    %eax,(%esp)
0865ef33 +0x061:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0865ef38 +0x066:  mov    %eax,-0x14(%ebp)
0865ef3b +0x069:  mov    -0x14(%ebp),%eax
0865ef3e +0x06c:  mov    %eax,(%esp)
0865ef41 +0x06f:  call   08560920 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)
0865ef46 +0x074:  xor    $0x1,%eax
0865ef49 +0x077:  test   %al,%al
0865ef4b +0x079:  je     0865ef92 <+0xc0>
0865ef4d +0x07b:  movl   $0x0,0xc(%esp)
0865ef55 +0x083:  movl   $"game_server_msg_146",0x8(%esp)
0865ef5d +0x08b:  movl   $0x4,0x4(%esp)
0865ef65 +0x093:  movl   $&g_scriptStringManager_,(%esp)
0865ef6c +0x09a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0865ef71 +0x09f:  movl   $0x0,0x8(%esp)
0865ef79 +0x0a7:  mov    %eax,0x4(%esp)
0865ef7d +0x0ab:  mov    0x8(%ebp),%eax
0865ef80 +0x0ae:  mov    %eax,(%esp)
0865ef83 +0x0b1:  call   086886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>  ; CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
0865ef88 +0x0b6:  mov    $0x1,%eax
0865ef8d +0x0bb:  jmp    0865f1db <+0x309>
0865ef92 +0x0c0:  mov    0x8(%ebp),%eax
0865ef95 +0x0c3:  mov    %eax,(%esp)
0865ef98 +0x0c6:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0865ef9d +0x0cb:  cmp    $0x1,%al
0865ef9f +0x0cd:  sete   %al
0865efa2 +0x0d0:  test   %al,%al
0865efa4 +0x0d2:  je     0865f022 <+0x150>
0865efa6 +0x0d4:  cmpl   $0xb,0x14(%ebp)
0865efaa +0x0d8:  je     0865f022 <+0x150>
0865efac +0x0da:  movswl -0x1c(%ebp),%ebx
0865efb0 +0x0de:  mov    0x8(%ebp),%eax
0865efb3 +0x0e1:  mov    %eax,(%esp)
0865efb6 +0x0e4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865efbb +0x0e9:  mov    %ebx,0x8(%esp)
0865efbf +0x0ed:  movl   $0x1,0x4(%esp)
0865efc7 +0x0f5:  mov    %eax,(%esp)
0865efca +0x0f8:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0865efcf +0x0fd:  mov    0x2(%eax),%eax
0865efd2 +0x100:  mov    %eax,%ebx
0865efd4 +0x102:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865efd9 +0x107:  mov    %ebx,0x4(%esp)
0865efdd +0x10b:  mov    %eax,(%esp)
0865efe0 +0x10e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0865efe5 +0x113:  mov    %eax,-0x10(%ebp)
0865efe8 +0x116:  cmpl   $0x0,-0x10(%ebp)
0865efec +0x11a:  je     0865f00f <+0x13d>
0865efee +0x11c:  movl   $0x1,0x4(%esp)
0865eff6 +0x124:  mov    -0x10(%ebp),%eax
0865eff9 +0x127:  mov    %eax,(%esp)
0865effc +0x12a:  call   0822c87c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f26
0865f001 +0x12f:  xor    $0x1,%eax
0865f004 +0x132:  test   %al,%al
0865f006 +0x134:  je     0865f00f <+0x13d>
0865f008 +0x136:  mov    $0x1,%eax
0865f00d +0x13b:  jmp    0865f014 <+0x142>
0865f00f +0x13d:  mov    $0x0,%eax
0865f014 +0x142:  test   %al,%al
0865f016 +0x144:  je     0865f022 <+0x150>
0865f018 +0x146:  mov    $0x1,%eax
0865f01d +0x14b:  jmp    0865f1db <+0x309>
0865f022 +0x150:  movswl -0x1c(%ebp),%ebx
0865f026 +0x154:  mov    0x8(%ebp),%eax
0865f029 +0x157:  mov    %eax,(%esp)
0865f02c +0x15a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865f031 +0x15f:  mov    0x14(%ebp),%edx
0865f034 +0x162:  mov    %edx,0xc(%esp)
0865f038 +0x166:  mov    %ebx,0x8(%esp)
0865f03c +0x16a:  movl   $0x1,0x4(%esp)
0865f044 +0x172:  mov    %eax,(%esp)
0865f047 +0x175:  call   084fc37e <_ZN10CInventory11ChangeEquipE10INVEN_TYPEii>  ; CInventory::ChangeEquip(INVEN_TYPE, int, int)
0865f04c +0x17a:  mov    %eax,-0x18(%ebp)
0865f04f +0x17d:  cmpl   $0x0,-0x18(%ebp)
0865f053 +0x181:  jle    0865f1a4 <+0x2d2>
0865f059 +0x187:  mov    -0x18(%ebp),%eax
0865f05c +0x18a:  jmp    0865f1db <+0x309>
0865f061 +0x18f:  mov    0x8(%ebp),%eax
0865f064 +0x192:  mov    %eax,(%esp)
0865f067 +0x195:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865f06c +0x19a:  test   %al,%al
0865f06e +0x19c:  je     0865f1a7 <+0x2d5>
0865f074 +0x1a2:  mov    $0x13,%eax
0865f079 +0x1a7:  jmp    0865f1db <+0x309>
0865f07e +0x1ac:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865f083 +0x1b1:  mov    %eax,(%esp)
0865f086 +0x1b4:  call   0869779e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ff3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ff3
0865f08b +0x1b9:  test   %al,%al
0865f08d +0x1bb:  je     0865f10c <+0x23a>
0865f08f +0x1bd:  movswl -0x1c(%ebp),%ebx
0865f093 +0x1c1:  mov    0x8(%ebp),%eax
0865f096 +0x1c4:  mov    %eax,(%esp)
0865f099 +0x1c7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865f09e +0x1cc:  mov    %ebx,0x8(%esp)
0865f0a2 +0x1d0:  movl   $0x2,0x4(%esp)
0865f0aa +0x1d8:  mov    %eax,(%esp)
0865f0ad +0x1db:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0865f0b2 +0x1e0:  mov    %eax,-0xc(%ebp)
0865f0b5 +0x1e3:  mov    -0xc(%ebp),%eax
0865f0b8 +0x1e6:  mov    %eax,(%esp)
0865f0bb +0x1e9:  call   08560920 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)
0865f0c0 +0x1ee:  xor    $0x1,%eax
0865f0c3 +0x1f1:  test   %al,%al
0865f0c5 +0x1f3:  je     0865f10c <+0x23a>
0865f0c7 +0x1f5:  movl   $0x0,0xc(%esp)
0865f0cf +0x1fd:  movl   $"game_server_msg_146",0x8(%esp)
0865f0d7 +0x205:  movl   $0x4,0x4(%esp)
0865f0df +0x20d:  movl   $&g_scriptStringManager_,(%esp)
0865f0e6 +0x214:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0865f0eb +0x219:  movl   $0x0,0x8(%esp)
0865f0f3 +0x221:  mov    %eax,0x4(%esp)
0865f0f7 +0x225:  mov    0x8(%ebp),%eax
0865f0fa +0x228:  mov    %eax,(%esp)
0865f0fd +0x22b:  call   086886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>  ; CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
0865f102 +0x230:  mov    $0x1,%eax
0865f107 +0x235:  jmp    0865f1db <+0x309>
0865f10c +0x23a:  mov    0x8(%ebp),%eax
0865f10f +0x23d:  mov    %eax,(%esp)
0865f112 +0x240:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
0865f117 +0x245:  test   %al,%al
0865f119 +0x247:  je     0865f125 <+0x253>
0865f11b +0x249:  mov    $0xb3,%eax
0865f120 +0x24e:  jmp    0865f1db <+0x309>
0865f125 +0x253:  movswl -0x1c(%ebp),%ebx
0865f129 +0x257:  mov    0x8(%ebp),%eax
0865f12c +0x25a:  mov    %eax,(%esp)
0865f12f +0x25d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865f134 +0x262:  mov    0x14(%ebp),%edx
0865f137 +0x265:  mov    %edx,0xc(%esp)
0865f13b +0x269:  mov    %ebx,0x8(%esp)
0865f13f +0x26d:  movl   $0x2,0x4(%esp)
0865f147 +0x275:  mov    %eax,(%esp)
0865f14a +0x278:  call   084fc37e <_ZN10CInventory11ChangeEquipE10INVEN_TYPEii>  ; CInventory::ChangeEquip(INVEN_TYPE, int, int)
0865f14f +0x27d:  mov    %eax,-0x18(%ebp)
0865f152 +0x280:  cmpl   $0x0,-0x18(%ebp)
0865f156 +0x284:  jne    0865f175 <+0x2a3>
0865f158 +0x286:  mov    0x8(%ebp),%eax
0865f15b +0x289:  mov    %eax,(%esp)
0865f15e +0x28c:  call   0868ea68 <_ZNK5CUser24CalcMercenaryAvatarBonusEv>  ; CUser::CalcMercenaryAvatarBonus() const
0865f163 +0x291:  movsbl %al,%eax
0865f166 +0x294:  mov    %eax,0x4(%esp)
0865f16a +0x298:  mov    0x8(%ebp),%eax
0865f16d +0x29b:  mov    %eax,(%esp)
0865f170 +0x29e:  call   0868ebaa <_ZN5CUser18setAvatarTypeBonusEc>  ; CUser::setAvatarTypeBonus(char)
0865f175 +0x2a3:  cmpl   $0x0,-0x18(%ebp)
0865f179 +0x2a7:  jle    0865f180 <+0x2ae>
0865f17b +0x2a9:  mov    -0x18(%ebp),%eax
0865f17e +0x2ac:  jmp    0865f1db <+0x309>
0865f180 +0x2ae:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
0865f185 +0x2b3:  mov    0x14(%ebp),%edx
0865f188 +0x2b6:  mov    %edx,0x8(%esp)
0865f18c +0x2ba:  mov    0x8(%ebp),%edx
0865f18f +0x2bd:  mov    %edx,0x4(%esp)
0865f193 +0x2c1:  mov    %eax,(%esp)
0865f196 +0x2c4:  call   081905b4 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri>  ; AvatarRechargeServer::CalcDurabilityChangeEquip(CUser*, int)
0865f19b +0x2c9:  jmp    0865f1a8 <+0x2d6>
0865f19d +0x2cb:  mov    $0x1,%eax
0865f1a2 +0x2d0:  jmp    0865f1db <+0x309>
0865f1a4 +0x2d2:  nop
0865f1a5 +0x2d3:  jmp    0865f1a8 <+0x2d6>
0865f1a7 +0x2d5:  nop
0865f1a8 +0x2d6:  cmpl   $0x0,0x14(%ebp)
0865f1ac +0x2da:  js     0865f1c4 <+0x2f2>
0865f1ae +0x2dc:  cmpl   $0xb,0x14(%ebp)
0865f1b2 +0x2e0:  jg     0865f1c4 <+0x2f2>
0865f1b4 +0x2e2:  mov    0x8(%ebp),%eax
0865f1b7 +0x2e5:  add    $0x796f4,%eax
0865f1bc +0x2ea:  mov    %eax,(%esp)
0865f1bf +0x2ed:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0865f1c4 +0x2f2:  mov    0x14(%ebp),%eax
0865f1c7 +0x2f5:  mov    %eax,0x4(%esp)
0865f1cb +0x2f9:  mov    0x8(%ebp),%eax
0865f1ce +0x2fc:  mov    %eax,(%esp)
0865f1d1 +0x2ff:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
0865f1d6 +0x304:  mov    $0x0,%eax
0865f1db +0x309:  add    $0x34,%esp
0865f1de +0x30c:  pop    %ebx
0865f1df +0x30d:  pop    %ebp
0865f1e0 +0x30e:  ret
```

## 反编译 C

```c
// CUser::change_equip @ 0x865eed2

/* CUser::change_equip(int, short, int) */

int __thiscall CUser::change_equip(CUser *this,int param_1,short param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  CInventory *pCVar4;
  Inven_Item *pIVar5;
  undefined4 uVar6;
  int iVar7;
  CDataManager *this_00;
  CItem *pCVar8;
  AvatarRechargeServer *this_01;
  
  if (param_1 == 1) {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsCheckUnusableEquipmentChannel(pGVar3);
    if (cVar2 != '\0') {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pIVar5 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,(int)param_2);
      cVar2 = online_preliminary::COnlinePreliminary::CheckUnusableEquipment(pIVar5);
      if (cVar2 != '\x01') {
        uVar6 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_146"
                           ,(bool *)0x0);
        SendNotiPacketMessage(this,uVar6,0);
        return 1;
      }
    }
    cVar2 = isCompetitionMercenary(this);
    if (cVar2 != '\0') {
      return 0xb3;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    iVar7 = CInventory::ChangeEquip(pCVar4,2,(int)param_2,param_3);
    if (iVar7 == 0) {
      cVar2 = CalcMercenaryAvatarBonus(this);
      setAvatarTypeBonus(this,cVar2);
    }
    if (0 < iVar7) {
      return iVar7;
    }
    this_01 = (AvatarRechargeServer *)ARAD::Singleton<AvatarRechargeServer>::Get();
    AvatarRechargeServer::CalcDurabilityChangeEquip(this_01,this,param_3);
  }
  else if (param_1 == 2) {
    cVar2 = CheckInTrade(this);
    if (cVar2 != '\0') {
      return 0x13;
    }
  }
  else {
    if (param_1 != 0) {
      return 1;
    }
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsCheckUnusableEquipmentChannel(pGVar3);
    if (cVar2 != '\0') {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pIVar5 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,1,(int)param_2);
      cVar2 = online_preliminary::COnlinePreliminary::CheckUnusableEquipment(pIVar5);
      if (cVar2 != '\x01') {
        uVar6 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_146"
                           ,(bool *)0x0);
        SendNotiPacketMessage(this,uVar6,0);
        return 1;
      }
    }
    cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)this);
    if ((cVar2 == '\x01') && (param_3 != 0xb)) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      iVar7 = CInventory::GetInvenRef(pCVar4,1,(int)param_2);
      iVar7 = *(int *)(iVar7 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      pCVar8 = (CItem *)CDataManager::find_item(this_00,iVar7);
      if ((pCVar8 == (CItem *)0x0) || (cVar2 = CItem::IsEnableWorld(pCVar8,1), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return 1;
      }
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    iVar7 = CInventory::ChangeEquip(pCVar4,1,(int)param_2,param_3);
    if (0 < iVar7) {
      return iVar7;
    }
  }
  if ((-1 < param_3) && (param_3 < 0xc)) {
    CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  }
  send_equip(this,param_3);
  return 0;
}
```
