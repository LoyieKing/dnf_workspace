# UpgradeAccountCargo

`_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser`

`CAccountCargo::UpgradeAccountCargo(CUser*)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828b0b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b0b2  _ZN13CAccountCargo19UpgradeAccountCargoEP5CUser
#           CAccountCargo::UpgradeAccountCargo(CUser*)
# range [0x0828b0b2, 0x0828b3cf]
0828b0b2 +0x000:  push   %ebp
0828b0b3 +0x001:  mov    %esp,%ebp
0828b0b5 +0x003:  push   %esi
0828b0b6 +0x004:  push   %ebx
0828b0b7 +0x005:  add    $0xffffff80,%esp
0828b0ba +0x008:  mov    0x8(%ebp),%eax
0828b0bd +0x00b:  mov    %eax,(%esp)
0828b0c0 +0x00e:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0828b0c5 +0x013:  xor    $0x1,%eax
0828b0c8 +0x016:  test   %al,%al
0828b0ca +0x018:  je     0828b0ec <+0x3a>
0828b0cc +0x01a:  movl   $0x15,0x8(%esp)
0828b0d4 +0x022:  movl   $0x132,0x4(%esp)
0828b0dc +0x02a:  mov    0x8(%ebp),%eax
0828b0df +0x02d:  mov    %eax,(%esp)
0828b0e2 +0x030:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b0e7 +0x035:  jmp    0828b3c9 <+0x317>
0828b0ec +0x03a:  mov    0x8(%ebp),%eax
0828b0ef +0x03d:  mov    %eax,(%esp)
0828b0f2 +0x040:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
0828b0f7 +0x045:  mov    %eax,-0x1c(%ebp)
0828b0fa +0x048:  mov    -0x1c(%ebp),%eax
0828b0fd +0x04b:  mov    %eax,(%esp)
0828b100 +0x04e:  call   0822f012 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46bc
0828b105 +0x053:  mov    %eax,%ebx
0828b107 +0x055:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828b10c +0x05a:  add    $0xa7e0,%eax
0828b111 +0x05f:  mov    %ebx,0x4(%esp)
0828b115 +0x063:  mov    %eax,(%esp)
0828b118 +0x066:  call   088c8124 <_ZN18AccountCargoScript18GetNextUpgradeInfoEi>  ; AccountCargoScript::GetNextUpgradeInfo(int)
0828b11d +0x06b:  mov    %eax,-0x18(%ebp)
0828b120 +0x06e:  cmpl   $0x0,-0x18(%ebp)
0828b124 +0x072:  jne    0828b146 <+0x94>
0828b126 +0x074:  movl   $0x13,0x8(%esp)
0828b12e +0x07c:  movl   $0x133,0x4(%esp)
0828b136 +0x084:  mov    0x8(%ebp),%eax
0828b139 +0x087:  mov    %eax,(%esp)
0828b13c +0x08a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b141 +0x08f:  jmp    0828b3c9 <+0x317>
0828b146 +0x094:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0828b14b +0x099:  movl   $0x19,0xc(%esp)
0828b153 +0x0a1:  movl   $0x1,0x8(%esp)
0828b15b +0x0a9:  mov    0x8(%ebp),%edx
0828b15e +0x0ac:  mov    %edx,0x4(%esp)
0828b162 +0x0b0:  mov    %eax,(%esp)
0828b165 +0x0b3:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0828b16a +0x0b8:  test   %al,%al
0828b16c +0x0ba:  je     0828b18e <+0xdc>
0828b16e +0x0bc:  movl   $0xd1,0x8(%esp)
0828b176 +0x0c4:  movl   $0x133,0x4(%esp)
0828b17e +0x0cc:  mov    0x8(%ebp),%eax
0828b181 +0x0cf:  mov    %eax,(%esp)
0828b184 +0x0d2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b189 +0x0d7:  jmp    0828b3c9 <+0x317>
0828b18e +0x0dc:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0828b193 +0x0e1:  movl   $0x5,0x8(%esp)
0828b19b +0x0e9:  mov    0x8(%ebp),%edx
0828b19e +0x0ec:  mov    %edx,0x4(%esp)
0828b1a2 +0x0f0:  mov    %eax,(%esp)
0828b1a5 +0x0f3:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0828b1aa +0x0f8:  mov    %eax,-0x14(%ebp)
0828b1ad +0x0fb:  cmpl   $0x0,-0x14(%ebp)
0828b1b1 +0x0ff:  je     0828b1d5 <+0x123>
0828b1b3 +0x101:  mov    -0x14(%ebp),%eax
0828b1b6 +0x104:  movzbl %al,%eax
0828b1b9 +0x107:  mov    %eax,0x8(%esp)
0828b1bd +0x10b:  movl   $0x133,0x4(%esp)
0828b1c5 +0x113:  mov    0x8(%ebp),%eax
0828b1c8 +0x116:  mov    %eax,(%esp)
0828b1cb +0x119:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b1d0 +0x11e:  jmp    0828b3c9 <+0x317>
0828b1d5 +0x123:  lea    -0x59(%ebp),%eax
0828b1d8 +0x126:  mov    %eax,(%esp)
0828b1db +0x129:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0828b1e0 +0x12e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828b1e5 +0x133:  mov    0xa7e4(%eax),%eax
0828b1eb +0x139:  mov    %eax,-0x10(%ebp)
0828b1ee +0x13c:  mov    0x8(%ebp),%eax
0828b1f1 +0x13f:  mov    %eax,(%esp)
0828b1f4 +0x142:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0828b1f9 +0x147:  lea    -0x59(%ebp),%edx
0828b1fc +0x14a:  mov    %edx,0x8(%esp)
0828b200 +0x14e:  mov    -0x10(%ebp),%edx
0828b203 +0x151:  mov    %edx,0x4(%esp)
0828b207 +0x155:  mov    %eax,(%esp)
0828b20a +0x158:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
0828b20f +0x15d:  mov    %eax,-0xc(%ebp)
0828b212 +0x160:  mov    -0x18(%ebp),%eax
0828b215 +0x163:  mov    0x8(%eax),%eax
0828b218 +0x166:  test   %eax,%eax
0828b21a +0x168:  je     0828b24f <+0x19d>
0828b21c +0x16a:  cmpl   $0xffffffff,-0xc(%ebp)
0828b220 +0x16e:  je     0828b22f <+0x17d>
0828b222 +0x170:  mov    -0x18(%ebp),%eax
0828b225 +0x173:  mov    0x8(%eax),%edx
0828b228 +0x176:  mov    -0x52(%ebp),%eax
0828b22b +0x179:  cmp    %eax,%edx
0828b22d +0x17b:  jle    0828b24f <+0x19d>
0828b22f +0x17d:  movl   $0x16,0x8(%esp)
0828b237 +0x185:  movl   $0x133,0x4(%esp)
0828b23f +0x18d:  mov    0x8(%ebp),%eax
0828b242 +0x190:  mov    %eax,(%esp)
0828b245 +0x193:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b24a +0x198:  jmp    0828b3c9 <+0x317>
0828b24f +0x19d:  mov    -0x18(%ebp),%eax
0828b252 +0x1a0:  mov    0xc(%eax),%eax
0828b255 +0x1a3:  test   %eax,%eax
0828b257 +0x1a5:  jle    0828b275 <+0x1c3>
0828b259 +0x1a7:  mov    -0x18(%ebp),%eax
0828b25c +0x1aa:  mov    0xc(%eax),%ebx
0828b25f +0x1ad:  mov    0x8(%ebp),%eax
0828b262 +0x1b0:  mov    %eax,(%esp)
0828b265 +0x1b3:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0828b26a +0x1b8:  cmp    %eax,%ebx
0828b26c +0x1ba:  jle    0828b275 <+0x1c3>
0828b26e +0x1bc:  mov    $0x1,%eax
0828b273 +0x1c1:  jmp    0828b27a <+0x1c8>
0828b275 +0x1c3:  mov    $0x0,%eax
0828b27a +0x1c8:  test   %al,%al
0828b27c +0x1ca:  je     0828b29e <+0x1ec>
0828b27e +0x1cc:  movl   $0x16,0x8(%esp)
0828b286 +0x1d4:  movl   $0x133,0x4(%esp)
0828b28e +0x1dc:  mov    0x8(%ebp),%eax
0828b291 +0x1df:  mov    %eax,(%esp)
0828b294 +0x1e2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b299 +0x1e7:  jmp    0828b3c9 <+0x317>
0828b29e +0x1ec:  mov    -0x18(%ebp),%eax
0828b2a1 +0x1ef:  mov    0x8(%eax),%eax
0828b2a4 +0x1f2:  test   %eax,%eax
0828b2a6 +0x1f4:  je     0828b2f2 <+0x240>
0828b2a8 +0x1f6:  mov    -0x18(%ebp),%eax
0828b2ab +0x1f9:  mov    0x8(%eax),%ebx
0828b2ae +0x1fc:  mov    0x8(%ebp),%eax
0828b2b1 +0x1ff:  mov    %eax,(%esp)
0828b2b4 +0x202:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828b2b9 +0x207:  movl   $0x1,0x14(%esp)
0828b2c1 +0x20f:  movl   $0x24,0x10(%esp)
0828b2c9 +0x217:  mov    %ebx,0xc(%esp)
0828b2cd +0x21b:  mov    -0xc(%ebp),%edx
0828b2d0 +0x21e:  mov    %edx,0x8(%esp)
0828b2d4 +0x222:  movl   $0x1,0x4(%esp)
0828b2dc +0x22a:  mov    %eax,(%esp)
0828b2df +0x22d:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0828b2e4 +0x232:  xor    $0x1,%eax
0828b2e7 +0x235:  test   %al,%al
0828b2e9 +0x237:  je     0828b2f2 <+0x240>
0828b2eb +0x239:  mov    $0x1,%eax
0828b2f0 +0x23e:  jmp    0828b2f7 <+0x245>
0828b2f2 +0x240:  mov    $0x0,%eax
0828b2f7 +0x245:  test   %al,%al
0828b2f9 +0x247:  je     0828b31b <+0x269>
0828b2fb +0x249:  movl   $0x16,0x8(%esp)
0828b303 +0x251:  movl   $0x133,0x4(%esp)
0828b30b +0x259:  mov    0x8(%ebp),%eax
0828b30e +0x25c:  mov    %eax,(%esp)
0828b311 +0x25f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b316 +0x264:  jmp    0828b3c9 <+0x317>
0828b31b +0x269:  mov    -0x18(%ebp),%eax
0828b31e +0x26c:  mov    0xc(%eax),%eax
0828b321 +0x26f:  test   %eax,%eax
0828b323 +0x271:  jle    0828b376 <+0x2c4>
0828b325 +0x273:  mov    -0x18(%ebp),%eax
0828b328 +0x276:  mov    0xc(%eax),%ebx
0828b32b +0x279:  mov    0x8(%ebp),%eax
0828b32e +0x27c:  mov    %eax,(%esp)
0828b331 +0x27f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828b336 +0x284:  movl   $0x1,0xc(%esp)
0828b33e +0x28c:  movl   $0x29,0x8(%esp)
0828b346 +0x294:  mov    %ebx,0x4(%esp)
0828b34a +0x298:  mov    %eax,(%esp)
0828b34d +0x29b:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0828b352 +0x2a0:  xor    $0x1,%eax
0828b355 +0x2a3:  test   %al,%al
0828b357 +0x2a5:  je     0828b376 <+0x2c4>
0828b359 +0x2a7:  movl   $0x16,0x8(%esp)
0828b361 +0x2af:  movl   $0x133,0x4(%esp)
0828b369 +0x2b7:  mov    0x8(%ebp),%eax
0828b36c +0x2ba:  mov    %eax,(%esp)
0828b36f +0x2bd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828b374 +0x2c2:  jmp    0828b3c9 <+0x317>
0828b376 +0x2c4:  mov    -0x18(%ebp),%eax
0828b379 +0x2c7:  mov    0x8(%eax),%eax
0828b37c +0x2ca:  test   %eax,%eax
0828b37e +0x2cc:  setne  %al
0828b381 +0x2cf:  movzbl %al,%eax
0828b384 +0x2d2:  mov    %eax,0x8(%esp)
0828b388 +0x2d6:  mov    -0xc(%ebp),%eax
0828b38b +0x2d9:  mov    %eax,0x4(%esp)
0828b38f +0x2dd:  mov    0x8(%ebp),%eax
0828b392 +0x2e0:  mov    %eax,(%esp)
0828b395 +0x2e3:  call   0828b3d0 <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib>  ; CAccountCargo::SendNotifyRecipe(CUser*, int, bool)
0828b39a +0x2e8:  mov    -0x18(%ebp),%eax
0828b39d +0x2eb:  mov    (%eax),%eax
0828b39f +0x2ed:  mov    %eax,%esi
0828b3a1 +0x2ef:  mov    0x8(%ebp),%eax
0828b3a4 +0x2f2:  mov    %eax,(%esp)
0828b3a7 +0x2f5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0828b3ac +0x2fa:  mov    %eax,%ebx
0828b3ae +0x2fc:  mov    0x8(%ebp),%eax
0828b3b1 +0x2ff:  mov    %eax,(%esp)
0828b3b4 +0x302:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0828b3b9 +0x307:  mov    %esi,0x8(%esp)
0828b3bd +0x30b:  mov    %ebx,0x4(%esp)
0828b3c1 +0x30f:  mov    %eax,(%esp)
0828b3c4 +0x312:  call   0843b15e <_ZN22DB_UpgradeAccountCargo11makeRequestEijj>  ; DB_UpgradeAccountCargo::makeRequest(int, unsigned int, unsigned int)
0828b3c9 +0x317:  sub    $0xffffff80,%esp
0828b3cc +0x31a:  pop    %ebx
0828b3cd +0x31b:  pop    %esi
0828b3ce +0x31c:  pop    %ebp
0828b3cf +0x31d:  ret
```

## 反编译 C

```c
// CAccountCargo::UpgradeAccountCargo @ 0x828b0b2

/* CAccountCargo::UpgradeAccountCargo(CUser*) */

void CAccountCargo::UpgradeAccountCargo(CUser *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  CInventory *pCVar6;
  uint uVar7;
  Inven_Item local_5d [7];
  int local_56;
  CAccountCargo *local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  cVar3 = CUser::IsExistAccountCargo(param_1);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x132,0x15);
    return;
  }
  local_20 = (CAccountCargo *)CUser::GetAccountCargo(param_1);
  GetCapacity(local_20);
  iVar4 = G_CDataManager();
  local_1c = (uint *)AccountCargoScript::GetNextUpgradeInfo(iVar4 + 0xa7e0);
  if (local_1c == (uint *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x13);
    return;
  }
  pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,0x19);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x133,0xd1);
    return;
  }
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,5);
  if (local_18 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x133,local_18 & 0xff);
    return;
  }
  Inven_Item::Inven_Item(local_5d);
  iVar4 = G_CDataManager();
  local_14 = *(int *)(iVar4 + 0xa7e4);
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenData(pCVar6,local_14,local_5d);
  if ((local_1c[2] != 0) && ((local_10 == -1 || (local_56 < (int)local_1c[2])))) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x16);
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
    CUser::SendCmdErrorPacket(param_1,0x133,0x16);
    return;
  }
  if (local_1c[2] != 0) {
    uVar1 = local_1c[2];
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar6,1,local_10,uVar1,0x24,1);
    if (cVar3 != '\x01') {
      bVar2 = true;
      goto LAB_0828b2f7;
    }
  }
  bVar2 = false;
LAB_0828b2f7:
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x16);
  }
  else {
    if (0 < (int)local_1c[3]) {
      uVar1 = local_1c[3];
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::use_money(pCVar6,uVar1,0x29,1);
      if (cVar3 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x133,0x16);
        return;
      }
    }
    SendNotifyRecipe(param_1,local_10,local_1c[2] != 0);
    uVar1 = *local_1c;
    uVar7 = CUser::get_acc_id(param_1);
    iVar4 = CUser::GetUID(param_1);
    DB_UpgradeAccountCargo::makeRequest(iVar4,uVar7,uVar1);
  }
  return;
}
```
