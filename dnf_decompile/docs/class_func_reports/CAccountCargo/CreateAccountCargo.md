# CreateAccountCargo

`_ZN13CAccountCargo18CreateAccountCargoEP5CUser`

`CAccountCargo::CreateAccountCargo(CUser*)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828ad72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828ad72  _ZN13CAccountCargo18CreateAccountCargoEP5CUser
#           CAccountCargo::CreateAccountCargo(CUser*)
# range [0x0828ad72, 0x0828b0b1]
0828ad72 +0x000:  push   %ebp
0828ad73 +0x001:  mov    %esp,%ebp
0828ad75 +0x003:  push   %esi
0828ad76 +0x004:  push   %ebx
0828ad77 +0x005:  sub    $0x70,%esp
0828ad7a +0x008:  mov    0x8(%ebp),%eax
0828ad7d +0x00b:  mov    %eax,(%esp)
0828ad80 +0x00e:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0828ad85 +0x013:  test   %al,%al
0828ad87 +0x015:  je     0828ada9 <+0x37>
0828ad89 +0x017:  movl   $0x14,0x8(%esp)
0828ad91 +0x01f:  movl   $0x132,0x4(%esp)
0828ad99 +0x027:  mov    0x8(%ebp),%eax
0828ad9c +0x02a:  mov    %eax,(%esp)
0828ad9f +0x02d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828ada4 +0x032:  jmp    0828b0ab <+0x339>
0828ada9 +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828adae +0x03c:  mov    0xa7e0(%eax),%ebx
0828adb4 +0x042:  mov    0x8(%ebp),%eax
0828adb7 +0x045:  mov    %eax,(%esp)
0828adba +0x048:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0828adbf +0x04d:  movzwl 0x27(%eax),%eax
0828adc3 +0x051:  cwtl
0828adc4 +0x052:  cmp    %eax,%ebx
0828adc6 +0x054:  setg   %al
0828adc9 +0x057:  test   %al,%al
0828adcb +0x059:  je     0828aded <+0x7b>
0828adcd +0x05b:  movl   $0xe,0x8(%esp)
0828add5 +0x063:  movl   $0x132,0x4(%esp)
0828addd +0x06b:  mov    0x8(%ebp),%eax
0828ade0 +0x06e:  mov    %eax,(%esp)
0828ade3 +0x071:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828ade8 +0x076:  jmp    0828b0ab <+0x339>
0828aded +0x07b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828adf2 +0x080:  add    $0xa7e0,%eax
0828adf7 +0x085:  mov    %eax,(%esp)
0828adfa +0x088:  call   088c8056 <_ZN18AccountCargoScript13GetCreateInfoEv>  ; AccountCargoScript::GetCreateInfo()
0828adff +0x08d:  mov    %eax,-0x18(%ebp)
0828ae02 +0x090:  cmpl   $0x0,-0x18(%ebp)
0828ae06 +0x094:  jne    0828ae28 <+0xb6>
0828ae08 +0x096:  movl   $0x13,0x8(%esp)
0828ae10 +0x09e:  movl   $0x132,0x4(%esp)
0828ae18 +0x0a6:  mov    0x8(%ebp),%eax
0828ae1b +0x0a9:  mov    %eax,(%esp)
0828ae1e +0x0ac:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828ae23 +0x0b1:  jmp    0828b0ab <+0x339>
0828ae28 +0x0b6:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0828ae2d +0x0bb:  movl   $0x18,0xc(%esp)
0828ae35 +0x0c3:  movl   $0x1,0x8(%esp)
0828ae3d +0x0cb:  mov    0x8(%ebp),%edx
0828ae40 +0x0ce:  mov    %edx,0x4(%esp)
0828ae44 +0x0d2:  mov    %eax,(%esp)
0828ae47 +0x0d5:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0828ae4c +0x0da:  test   %al,%al
0828ae4e +0x0dc:  je     0828ae70 <+0xfe>
0828ae50 +0x0de:  movl   $0xd1,0x8(%esp)
0828ae58 +0x0e6:  movl   $0x132,0x4(%esp)
0828ae60 +0x0ee:  mov    0x8(%ebp),%eax
0828ae63 +0x0f1:  mov    %eax,(%esp)
0828ae66 +0x0f4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828ae6b +0x0f9:  jmp    0828b0ab <+0x339>
0828ae70 +0x0fe:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0828ae75 +0x103:  movl   $0x4,0x8(%esp)
0828ae7d +0x10b:  mov    0x8(%ebp),%edx
0828ae80 +0x10e:  mov    %edx,0x4(%esp)
0828ae84 +0x112:  mov    %eax,(%esp)
0828ae87 +0x115:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0828ae8c +0x11a:  mov    %eax,-0x14(%ebp)
0828ae8f +0x11d:  cmpl   $0x0,-0x14(%ebp)
0828ae93 +0x121:  je     0828aeb7 <+0x145>
0828ae95 +0x123:  mov    -0x14(%ebp),%eax
0828ae98 +0x126:  movzbl %al,%eax
0828ae9b +0x129:  mov    %eax,0x8(%esp)
0828ae9f +0x12d:  movl   $0x132,0x4(%esp)
0828aea7 +0x135:  mov    0x8(%ebp),%eax
0828aeaa +0x138:  mov    %eax,(%esp)
0828aead +0x13b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828aeb2 +0x140:  jmp    0828b0ab <+0x339>
0828aeb7 +0x145:  lea    -0x55(%ebp),%eax
0828aeba +0x148:  mov    %eax,(%esp)
0828aebd +0x14b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0828aec2 +0x150:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828aec7 +0x155:  mov    0xa7e4(%eax),%eax
0828aecd +0x15b:  mov    %eax,-0x10(%ebp)
0828aed0 +0x15e:  mov    0x8(%ebp),%eax
0828aed3 +0x161:  mov    %eax,(%esp)
0828aed6 +0x164:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0828aedb +0x169:  lea    -0x55(%ebp),%edx
0828aede +0x16c:  mov    %edx,0x8(%esp)
0828aee2 +0x170:  mov    -0x10(%ebp),%edx
0828aee5 +0x173:  mov    %edx,0x4(%esp)
0828aee9 +0x177:  mov    %eax,(%esp)
0828aeec +0x17a:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
0828aef1 +0x17f:  mov    %eax,-0xc(%ebp)
0828aef4 +0x182:  mov    -0x18(%ebp),%eax
0828aef7 +0x185:  mov    0x8(%eax),%eax
0828aefa +0x188:  test   %eax,%eax
0828aefc +0x18a:  je     0828af31 <+0x1bf>
0828aefe +0x18c:  cmpl   $0xffffffff,-0xc(%ebp)
0828af02 +0x190:  je     0828af11 <+0x19f>
0828af04 +0x192:  mov    -0x18(%ebp),%eax
0828af07 +0x195:  mov    0x8(%eax),%edx
0828af0a +0x198:  mov    -0x4e(%ebp),%eax
0828af0d +0x19b:  cmp    %eax,%edx
0828af0f +0x19d:  jle    0828af31 <+0x1bf>
0828af11 +0x19f:  movl   $0x16,0x8(%esp)
0828af19 +0x1a7:  movl   $0x132,0x4(%esp)
0828af21 +0x1af:  mov    0x8(%ebp),%eax
0828af24 +0x1b2:  mov    %eax,(%esp)
0828af27 +0x1b5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828af2c +0x1ba:  jmp    0828b0ab <+0x339>
0828af31 +0x1bf:  mov    -0x18(%ebp),%eax
0828af34 +0x1c2:  mov    0xc(%eax),%eax
0828af37 +0x1c5:  test   %eax,%eax
0828af39 +0x1c7:  jle    0828af57 <+0x1e5>
0828af3b +0x1c9:  mov    -0x18(%ebp),%eax
0828af3e +0x1cc:  mov    0xc(%eax),%ebx
0828af41 +0x1cf:  mov    0x8(%ebp),%eax
0828af44 +0x1d2:  mov    %eax,(%esp)
0828af47 +0x1d5:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0828af4c +0x1da:  cmp    %eax,%ebx
0828af4e +0x1dc:  jle    0828af57 <+0x1e5>
0828af50 +0x1de:  mov    $0x1,%eax
0828af55 +0x1e3:  jmp    0828af5c <+0x1ea>
0828af57 +0x1e5:  mov    $0x0,%eax
0828af5c +0x1ea:  test   %al,%al
0828af5e +0x1ec:  je     0828af80 <+0x20e>
0828af60 +0x1ee:  movl   $0x16,0x8(%esp)
0828af68 +0x1f6:  movl   $0x132,0x4(%esp)
0828af70 +0x1fe:  mov    0x8(%ebp),%eax
0828af73 +0x201:  mov    %eax,(%esp)
0828af76 +0x204:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828af7b +0x209:  jmp    0828b0ab <+0x339>
0828af80 +0x20e:  mov    -0x18(%ebp),%eax
0828af83 +0x211:  mov    0x8(%eax),%eax
0828af86 +0x214:  test   %eax,%eax
0828af88 +0x216:  je     0828afd4 <+0x262>
0828af8a +0x218:  mov    -0x18(%ebp),%eax
0828af8d +0x21b:  mov    0x8(%eax),%ebx
0828af90 +0x21e:  mov    0x8(%ebp),%eax
0828af93 +0x221:  mov    %eax,(%esp)
0828af96 +0x224:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828af9b +0x229:  movl   $0x1,0x14(%esp)
0828afa3 +0x231:  movl   $0x24,0x10(%esp)
0828afab +0x239:  mov    %ebx,0xc(%esp)
0828afaf +0x23d:  mov    -0xc(%ebp),%edx
0828afb2 +0x240:  mov    %edx,0x8(%esp)
0828afb6 +0x244:  movl   $0x1,0x4(%esp)
0828afbe +0x24c:  mov    %eax,(%esp)
0828afc1 +0x24f:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0828afc6 +0x254:  xor    $0x1,%eax
0828afc9 +0x257:  test   %al,%al
0828afcb +0x259:  je     0828afd4 <+0x262>
0828afcd +0x25b:  mov    $0x1,%eax
0828afd2 +0x260:  jmp    0828afd9 <+0x267>
0828afd4 +0x262:  mov    $0x0,%eax
0828afd9 +0x267:  test   %al,%al
0828afdb +0x269:  je     0828affd <+0x28b>
0828afdd +0x26b:  movl   $0x16,0x8(%esp)
0828afe5 +0x273:  movl   $0x132,0x4(%esp)
0828afed +0x27b:  mov    0x8(%ebp),%eax
0828aff0 +0x27e:  mov    %eax,(%esp)
0828aff3 +0x281:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828aff8 +0x286:  jmp    0828b0ab <+0x339>
0828affd +0x28b:  mov    -0x18(%ebp),%eax
0828b000 +0x28e:  mov    0xc(%eax),%eax
0828b003 +0x291:  test   %eax,%eax
0828b005 +0x293:  jle    0828b058 <+0x2e6>
0828b007 +0x295:  mov    -0x18(%ebp),%eax
0828b00a +0x298:  mov    0xc(%eax),%ebx
0828b00d +0x29b:  mov    0x8(%ebp),%eax
0828b010 +0x29e:  mov    %eax,(%esp)
0828b013 +0x2a1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828b018 +0x2a6:  movl   $0x1,0xc(%esp)
0828b020 +0x2ae:  movl   $0x29,0x8(%esp)
0828b028 +0x2b6:  mov    %ebx,0x4(%esp)
0828b02c +0x2ba:  mov    %eax,(%esp)
0828b02f +0x2bd:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0828b034 +0x2c2:  xor    $0x1,%eax
0828b037 +0x2c5:  test   %al,%al
0828b039 +0x2c7:  je     0828b058 <+0x2e6>
0828b03b +0x2c9:  movl   $0x16,0x8(%esp)
0828b043 +0x2d1:  movl   $0x132,0x4(%esp)
0828b04b +0x2d9:  mov    0x8(%ebp),%eax
0828b04e +0x2dc:  mov    %eax,(%esp)
0828b051 +0x2df:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b056 +0x2e4:  jmp    0828b0ab <+0x339>
0828b058 +0x2e6:  mov    -0x18(%ebp),%eax
0828b05b +0x2e9:  mov    0x8(%eax),%eax
0828b05e +0x2ec:  test   %eax,%eax
0828b060 +0x2ee:  setne  %al
0828b063 +0x2f1:  movzbl %al,%eax
0828b066 +0x2f4:  mov    %eax,0x8(%esp)
0828b06a +0x2f8:  mov    -0xc(%ebp),%eax
0828b06d +0x2fb:  mov    %eax,0x4(%esp)
0828b071 +0x2ff:  mov    0x8(%ebp),%eax
0828b074 +0x302:  mov    %eax,(%esp)
0828b077 +0x305:  call   0828b3d0 <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib>  ; CAccountCargo::SendNotifyRecipe(CUser*, int, bool)
0828b07c +0x30a:  mov    -0x18(%ebp),%eax
0828b07f +0x30d:  mov    (%eax),%eax
0828b081 +0x30f:  mov    %eax,%esi
0828b083 +0x311:  mov    0x8(%ebp),%eax
0828b086 +0x314:  mov    %eax,(%esp)
0828b089 +0x317:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0828b08e +0x31c:  mov    %eax,%ebx
0828b090 +0x31e:  mov    0x8(%ebp),%eax
0828b093 +0x321:  mov    %eax,(%esp)
0828b096 +0x324:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0828b09b +0x329:  mov    %esi,0x8(%esp)
0828b09f +0x32d:  mov    %ebx,0x4(%esp)
0828b0a3 +0x331:  mov    %eax,(%esp)
0828b0a6 +0x334:  call   0843ae86 <_ZN21DB_CreateAccountCargo11makeRequestEijj>  ; DB_CreateAccountCargo::makeRequest(int, unsigned int, unsigned int)
0828b0ab +0x339:  add    $0x70,%esp
0828b0ae +0x33c:  pop    %ebx
0828b0af +0x33d:  pop    %esi
0828b0b0 +0x33e:  pop    %ebp
0828b0b1 +0x33f:  ret
```

## 反编译 C

```c
// CAccountCargo::CreateAccountCargo @ 0x828ad72

/* CAccountCargo::CreateAccountCargo(CUser*) */

void CAccountCargo::CreateAccountCargo(CUser *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ServiceRestrictManager *pSVar6;
  CInventory *pCVar7;
  uint uVar8;
  Inven_Item local_59 [7];
  int local_52;
  uint *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  cVar3 = CUser::IsExistAccountCargo(param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x132,0x14);
    return;
  }
  iVar4 = G_CDataManager();
  iVar4 = *(int *)(iVar4 + 0xa7e0);
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (*(short *)(iVar5 + 0x27) < iVar4) {
    CUser::SendCmdErrorPacket(param_1,0x132,0xe);
    return;
  }
  G_CDataManager();
  local_1c = (uint *)AccountCargoScript::GetCreateInfo();
  if (local_1c == (uint *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x13);
    return;
  }
  pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_1,1,0x18);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x132,0xd1);
    return;
  }
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,4);
  if (local_18 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x132,local_18 & 0xff);
    return;
  }
  Inven_Item::Inven_Item(local_59);
  iVar4 = G_CDataManager();
  local_14 = *(int *)(iVar4 + 0xa7e4);
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenData(pCVar7,local_14,local_59);
  if ((local_1c[2] != 0) && ((local_10 == -1 || (local_52 < (int)local_1c[2])))) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x16);
    return;
  }
  if (((int)local_1c[3] < 1) ||
     (uVar1 = local_1c[3], iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1),
     (int)uVar1 <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x16);
    return;
  }
  if (local_1c[2] != 0) {
    uVar1 = local_1c[2];
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar7,1,local_10,uVar1,0x24,1);
    if (cVar3 != '\x01') {
      bVar2 = true;
      goto LAB_0828afd9;
    }
  }
  bVar2 = false;
LAB_0828afd9:
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x16);
  }
  else {
    if (0 < (int)local_1c[3]) {
      uVar1 = local_1c[3];
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::use_money(pCVar7,uVar1,0x29,1);
      if (cVar3 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x132,0x16);
        return;
      }
    }
    SendNotifyRecipe(param_1,local_10,local_1c[2] != 0);
    uVar1 = *local_1c;
    uVar8 = CUser::get_acc_id(param_1);
    iVar4 = CUser::GetUID(param_1);
    DB_CreateAccountCargo::makeRequest(iVar4,uVar8,uVar1);
  }
  return;
}
```
