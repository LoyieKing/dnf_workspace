# send

`_ZN18DisPatcher_BuyItem4sendEP5CUserR9ParamBase`

`DisPatcher_BuyItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081be20a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081be20a  _ZN18DisPatcher_BuyItem4sendEP5CUserR9ParamBase
#           DisPatcher_BuyItem::send(CUser*, ParamBase&)
# range [0x081be20a, 0x081be469]
081be20a +0x000:  push   %ebp
081be20b +0x001:  mov    %esp,%ebp
081be20d +0x003:  push   %esi
081be20e +0x004:  push   %ebx
081be20f +0x005:  sub    $0x30,%esp
081be212 +0x008:  mov    0x10(%ebp),%eax
081be215 +0x00b:  mov    %eax,-0x10(%ebp)
081be218 +0x00e:  lea    -0x1c(%ebp),%eax
081be21b +0x011:  mov    %eax,(%esp)
081be21e +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081be223 +0x019:  movl   $0x15,0x8(%esp)
081be22b +0x021:  movl   $0x1,0x4(%esp)
081be233 +0x029:  lea    -0x1c(%ebp),%eax
081be236 +0x02c:  mov    %eax,(%esp)
081be239 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081be23e +0x034:  movl   $0x1,0x4(%esp)
081be246 +0x03c:  lea    -0x1c(%ebp),%eax
081be249 +0x03f:  mov    %eax,(%esp)
081be24c +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081be251 +0x047:  mov    0xc(%ebp),%eax
081be254 +0x04a:  mov    %eax,(%esp)
081be257 +0x04d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081be25c +0x052:  mov    %eax,(%esp)
081be25f +0x055:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081be264 +0x05a:  mov    %eax,0x4(%esp)
081be268 +0x05e:  lea    -0x1c(%ebp),%eax
081be26b +0x061:  mov    %eax,(%esp)
081be26e +0x064:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be273 +0x069:  mov    -0x10(%ebp),%eax
081be276 +0x06c:  mov    0x88(%eax),%eax
081be27c +0x072:  movl   $0x0,0x8(%esp)
081be284 +0x07a:  mov    %eax,0x4(%esp)
081be288 +0x07e:  mov    0xc(%ebp),%eax
081be28b +0x081:  mov    %eax,(%esp)
081be28e +0x084:  call   0864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>  ; CUser::UseWinPoint(int, eWPSubReason)
081be293 +0x089:  mov    %eax,0x4(%esp)
081be297 +0x08d:  lea    -0x1c(%ebp),%eax
081be29a +0x090:  mov    %eax,(%esp)
081be29d +0x093:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be2a2 +0x098:  mov    -0x10(%ebp),%eax
081be2a5 +0x09b:  mov    0x8c(%eax),%eax
081be2ab +0x0a1:  mov    %eax,%edx
081be2ad +0x0a3:  mov    0xc(%ebp),%eax
081be2b0 +0x0a6:  mov    %edx,0x4(%esp)
081be2b4 +0x0aa:  mov    %eax,(%esp)
081be2b7 +0x0ad:  call   08645620 <_ZN15CUserCharacInfo14UseFinishPointEi>  ; CUserCharacInfo::UseFinishPoint(int)
081be2bc +0x0b2:  mov    %eax,0x4(%esp)
081be2c0 +0x0b6:  lea    -0x1c(%ebp),%eax
081be2c3 +0x0b9:  mov    %eax,(%esp)
081be2c6 +0x0bc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be2cb +0x0c1:  mov    -0x10(%ebp),%eax
081be2ce +0x0c4:  mov    0x84(%eax),%eax
081be2d4 +0x0ca:  mov    %eax,0x4(%esp)
081be2d8 +0x0ce:  mov    0xc(%ebp),%eax
081be2db +0x0d1:  mov    %eax,(%esp)
081be2de +0x0d4:  call   0817a1c6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x244>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x244
081be2e3 +0x0d9:  mov    %eax,0x4(%esp)
081be2e7 +0x0dd:  lea    -0x1c(%ebp),%eax
081be2ea +0x0e0:  mov    %eax,(%esp)
081be2ed +0x0e3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be2f2 +0x0e8:  mov    -0x10(%ebp),%eax
081be2f5 +0x0eb:  mov    0xa0(%eax),%eax
081be2fb +0x0f1:  mov    %eax,0x4(%esp)
081be2ff +0x0f5:  lea    -0x1c(%ebp),%eax
081be302 +0x0f8:  mov    %eax,(%esp)
081be305 +0x0fb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081be30a +0x100:  mov    -0x10(%ebp),%eax
081be30d +0x103:  mov    0x6(%eax),%eax
081be310 +0x106:  mov    %eax,0x4(%esp)
081be314 +0x10a:  lea    -0x1c(%ebp),%eax
081be317 +0x10d:  mov    %eax,(%esp)
081be31a +0x110:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be31f +0x115:  mov    -0x10(%ebp),%eax
081be322 +0x118:  mov    0xb(%eax),%eax
081be325 +0x11b:  mov    %eax,0x4(%esp)
081be329 +0x11f:  lea    -0x1c(%ebp),%eax
081be32c +0x122:  mov    %eax,(%esp)
081be32f +0x125:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be334 +0x12a:  mov    -0x10(%ebp),%eax
081be337 +0x12d:  movzwl 0xf(%eax),%eax
081be33b +0x131:  movzwl %ax,%eax
081be33e +0x134:  mov    %eax,0x4(%esp)
081be342 +0x138:  lea    -0x1c(%ebp),%eax
081be345 +0x13b:  mov    %eax,(%esp)
081be348 +0x13e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081be34d +0x143:  mov    -0x10(%ebp),%eax
081be350 +0x146:  add    $0x15,%eax
081be353 +0x149:  mov    %eax,(%esp)
081be356 +0x14c:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
081be35b +0x151:  movzbl %al,%eax
081be35e +0x154:  mov    %eax,0x4(%esp)
081be362 +0x158:  lea    -0x1c(%ebp),%eax
081be365 +0x15b:  mov    %eax,(%esp)
081be368 +0x15e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081be36d +0x163:  mov    -0x10(%ebp),%eax
081be370 +0x166:  add    $0x15,%eax
081be373 +0x169:  mov    %eax,(%esp)
081be376 +0x16c:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
081be37b +0x171:  movzwl %ax,%eax
081be37e +0x174:  mov    %eax,0x4(%esp)
081be382 +0x178:  lea    -0x1c(%ebp),%eax
081be385 +0x17b:  mov    %eax,(%esp)
081be388 +0x17e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081be38d +0x183:  mov    -0x10(%ebp),%eax
081be390 +0x186:  add    $0x4,%eax
081be393 +0x189:  mov    %eax,0x4(%esp)
081be397 +0x18d:  lea    -0x1c(%ebp),%eax
081be39a +0x190:  mov    %eax,(%esp)
081be39d +0x193:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
081be3a2 +0x198:  mov    -0x10(%ebp),%eax
081be3a5 +0x19b:  mov    0x98(%eax),%eax
081be3ab +0x1a1:  mov    %eax,0x4(%esp)
081be3af +0x1a5:  lea    -0x1c(%ebp),%eax
081be3b2 +0x1a8:  mov    %eax,(%esp)
081be3b5 +0x1ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be3ba +0x1b0:  mov    -0x10(%ebp),%eax
081be3bd +0x1b3:  mov    0xa4(%eax),%ebx
081be3c3 +0x1b9:  mov    0xc(%ebp),%eax
081be3c6 +0x1bc:  mov    %eax,(%esp)
081be3c9 +0x1bf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081be3ce +0x1c4:  mov    %ebx,0x8(%esp)
081be3d2 +0x1c8:  movl   $0x1,0x4(%esp)
081be3da +0x1d0:  mov    %eax,(%esp)
081be3dd +0x1d3:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081be3e2 +0x1d8:  mov    %eax,-0xc(%ebp)
081be3e5 +0x1db:  cmpl   $0x0,-0xc(%ebp)
081be3e9 +0x1df:  jne    081be400 <+0x1f6>
081be3eb +0x1e1:  movl   $0x0,0x4(%esp)
081be3f3 +0x1e9:  lea    -0x1c(%ebp),%eax
081be3f6 +0x1ec:  mov    %eax,(%esp)
081be3f9 +0x1ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be3fe +0x1f4:  jmp    081be415 <+0x20b>
081be400 +0x1f6:  mov    -0xc(%ebp),%eax
081be403 +0x1f9:  mov    0x7(%eax),%eax
081be406 +0x1fc:  mov    %eax,0x4(%esp)
081be40a +0x200:  lea    -0x1c(%ebp),%eax
081be40d +0x203:  mov    %eax,(%esp)
081be410 +0x206:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081be415 +0x20b:  movl   $0x1,0x4(%esp)
081be41d +0x213:  lea    -0x1c(%ebp),%eax
081be420 +0x216:  mov    %eax,(%esp)
081be423 +0x219:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081be428 +0x21e:  lea    -0x1c(%ebp),%eax
081be42b +0x221:  mov    %eax,0x4(%esp)
081be42f +0x225:  mov    0xc(%ebp),%eax
081be432 +0x228:  mov    %eax,(%esp)
081be435 +0x22b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081be43a +0x230:  jmp    081be457 <+0x24d>
081be43c +0x232:  mov    %edx,%ebx
081be43e +0x234:  mov    %eax,%esi
081be440 +0x236:  lea    -0x1c(%ebp),%eax
081be443 +0x239:  mov    %eax,(%esp)
081be446 +0x23c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081be44b +0x241:  mov    %esi,%eax
081be44d +0x243:  mov    %ebx,%edx
081be44f +0x245:  mov    %eax,(%esp)
081be452 +0x248:  call   08ae3750 <_Unwind_Resume>
081be457 +0x24d:  lea    -0x1c(%ebp),%eax
081be45a +0x250:  mov    %eax,(%esp)
081be45d +0x253:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081be462 +0x258:  add    $0x30,%esp
081be465 +0x25b:  pop    %ebx
081be466 +0x25c:  pop    %esi
081be467 +0x25d:  pop    %ebp
081be468 +0x25e:  ret
081be469 +0x25f:  nop
```

## 反编译 C

```c
// DisPatcher_BuyItem::send @ 0x81be20a

/* DisPatcher_BuyItem::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_BuyItem::send(DisPatcher_BuyItem *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *pCVar1;
  int iVar2;
  uint uVar3;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081be239 to 081be439 has its CatchHandler @ 081be43c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x15);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_money(pCVar1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  iVar2 = CUser::UseWinPoint(param_1,*(undefined4 *)(local_14 + 0x88),0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  iVar2 = CUserCharacInfo::UseFinishPoint((CUserCharacInfo *)param_1,*(int *)(local_14 + 0x8c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  iVar2 = CUser::UseCera(param_1,*(uint *)(local_14 + 0x84));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xa0));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 6));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xb));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0xf));
  uVar3 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_14 + 0x15));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,uVar3 & 0xff);
  uVar3 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_14 + 0x15));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar3 & 0xffff);
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_20,(Inven_Item *)(local_14 + 4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x98));
  iVar2 = *(int *)(local_14 + 0xa4);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenRef(pCVar1,1,iVar2);
  if (local_10 == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_10 + 7));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
