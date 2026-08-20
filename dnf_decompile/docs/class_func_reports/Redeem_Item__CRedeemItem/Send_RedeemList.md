# Send_RedeemList

`_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser`

`Redeem_Item::CRedeemItem::Send_RedeemList(CUser*)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f73ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f73ee  _ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser
#           Redeem_Item::CRedeemItem::Send_RedeemList(CUser*)
# range [0x085f73ee, 0x085f7667]
085f73ee +0x000:  push   %ebp
085f73ef +0x001:  mov    %esp,%ebp
085f73f1 +0x003:  push   %esi
085f73f2 +0x004:  push   %ebx
085f73f3 +0x005:  sub    $0x30,%esp
085f73f6 +0x008:  lea    -0x20(%ebp),%eax
085f73f9 +0x00b:  mov    %eax,(%esp)
085f73fc +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085f7401 +0x013:  movl   $0x121,0x8(%esp)
085f7409 +0x01b:  movl   $0x0,0x4(%esp)
085f7411 +0x023:  lea    -0x20(%ebp),%eax
085f7414 +0x026:  mov    %eax,(%esp)
085f7417 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085f741c +0x02e:  mov    0x8(%ebp),%eax
085f741f +0x031:  add    $0x8,%eax
085f7422 +0x034:  mov    %eax,(%esp)
085f7425 +0x037:  call   085f7cac <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0xe8>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0xe8
085f742a +0x03c:  mov    %eax,0x4(%esp)
085f742e +0x040:  lea    -0x20(%ebp),%eax
085f7431 +0x043:  mov    %eax,(%esp)
085f7434 +0x046:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085f7439 +0x04b:  mov    0x8(%ebp),%eax
085f743c +0x04e:  lea    0x8(%eax),%edx
085f743f +0x051:  lea    -0x24(%ebp),%eax
085f7442 +0x054:  mov    %edx,0x4(%esp)
085f7446 +0x058:  mov    %eax,(%esp)
085f7449 +0x05b:  call   085f7ddc <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x218>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x218
085f744e +0x060:  sub    $0x4,%esp
085f7451 +0x063:  movl   $0x0,-0x10(%ebp)
085f7458 +0x06a:  jmp    085f75c1 <+0x1d3>
085f745d +0x06f:  lea    -0x24(%ebp),%eax
085f7460 +0x072:  mov    %eax,(%esp)
085f7463 +0x075:  call   085f7f3a <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x376>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x376
085f7468 +0x07a:  mov    %eax,-0xc(%ebp)
085f746b +0x07d:  lea    -0x24(%ebp),%eax
085f746e +0x080:  mov    %eax,(%esp)
085f7471 +0x083:  call   085f7f3a <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x376>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x376
085f7476 +0x088:  mov    0x40(%eax),%eax
085f7479 +0x08b:  mov    %eax,0x4(%esp)
085f747d +0x08f:  lea    -0x20(%ebp),%eax
085f7480 +0x092:  mov    %eax,(%esp)
085f7483 +0x095:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085f7488 +0x09a:  mov    -0xc(%ebp),%eax
085f748b +0x09d:  mov    0x2(%eax),%eax
085f748e +0x0a0:  mov    %eax,0x4(%esp)
085f7492 +0x0a4:  lea    -0x20(%ebp),%eax
085f7495 +0x0a7:  mov    %eax,(%esp)
085f7498 +0x0aa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085f749d +0x0af:  mov    -0xc(%ebp),%eax
085f74a0 +0x0b2:  mov    0x7(%eax),%eax
085f74a3 +0x0b5:  mov    %eax,0x4(%esp)
085f74a7 +0x0b9:  lea    -0x20(%ebp),%eax
085f74aa +0x0bc:  mov    %eax,(%esp)
085f74ad +0x0bf:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085f74b2 +0x0c4:  mov    -0xc(%ebp),%eax
085f74b5 +0x0c7:  mov    %eax,(%esp)
085f74b8 +0x0ca:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085f74bd +0x0cf:  movzbl %al,%eax
085f74c0 +0x0d2:  mov    %eax,0x4(%esp)
085f74c4 +0x0d6:  lea    -0x20(%ebp),%eax
085f74c7 +0x0d9:  mov    %eax,(%esp)
085f74ca +0x0dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085f74cf +0x0e1:  mov    -0xc(%ebp),%eax
085f74d2 +0x0e4:  movzwl 0xb(%eax),%eax
085f74d6 +0x0e8:  movzwl %ax,%eax
085f74d9 +0x0eb:  mov    %eax,0x4(%esp)
085f74dd +0x0ef:  lea    -0x20(%ebp),%eax
085f74e0 +0x0f2:  mov    %eax,(%esp)
085f74e3 +0x0f5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085f74e8 +0x0fa:  mov    -0xc(%ebp),%eax
085f74eb +0x0fd:  movzbl (%eax),%eax
085f74ee +0x100:  movzbl %al,%eax
085f74f1 +0x103:  mov    %eax,0x4(%esp)
085f74f5 +0x107:  lea    -0x20(%ebp),%eax
085f74f8 +0x10a:  mov    %eax,(%esp)
085f74fb +0x10d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085f7500 +0x112:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085f7505 +0x117:  mov    %eax,(%esp)
085f7508 +0x11a:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
085f750d +0x11f:  test   %al,%al
085f750f +0x121:  je     085f7526 <+0x138>
085f7511 +0x123:  movl   $0x0,0x4(%esp)
085f7519 +0x12b:  lea    -0x20(%ebp),%eax
085f751c +0x12e:  mov    %eax,(%esp)
085f751f +0x131:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085f7524 +0x136:  jmp    085f753b <+0x14d>
085f7526 +0x138:  mov    -0xc(%ebp),%eax
085f7529 +0x13b:  mov    0xd(%eax),%eax
085f752c +0x13e:  mov    %eax,0x4(%esp)
085f7530 +0x142:  lea    -0x20(%ebp),%eax
085f7533 +0x145:  mov    %eax,(%esp)
085f7536 +0x148:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085f753b +0x14d:  mov    -0xc(%ebp),%eax
085f753e +0x150:  add    $0x11,%eax
085f7541 +0x153:  mov    %eax,(%esp)
085f7544 +0x156:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085f7549 +0x15b:  movzbl %al,%eax
085f754c +0x15e:  mov    %eax,0x4(%esp)
085f7550 +0x162:  lea    -0x20(%ebp),%eax
085f7553 +0x165:  mov    %eax,(%esp)
085f7556 +0x168:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085f755b +0x16d:  mov    -0xc(%ebp),%eax
085f755e +0x170:  add    $0x11,%eax
085f7561 +0x173:  mov    %eax,(%esp)
085f7564 +0x176:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085f7569 +0x17b:  movzwl %ax,%eax
085f756c +0x17e:  mov    %eax,0x4(%esp)
085f7570 +0x182:  lea    -0x20(%ebp),%eax
085f7573 +0x185:  mov    %eax,(%esp)
085f7576 +0x188:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085f757b +0x18d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085f7580 +0x192:  mov    0x20(%eax),%eax
085f7583 +0x195:  lea    -0x20(%ebp),%edx
085f7586 +0x198:  mov    %edx,0xc(%esp)
085f758a +0x19c:  mov    -0xc(%ebp),%edx
085f758d +0x19f:  mov    %edx,0x8(%esp)
085f7591 +0x1a3:  mov    0xc(%ebp),%edx
085f7594 +0x1a6:  mov    %edx,0x4(%esp)
085f7598 +0x1aa:  mov    %eax,(%esp)
085f759b +0x1ad:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
085f75a0 +0x1b2:  mov    -0xc(%ebp),%eax
085f75a3 +0x1b5:  mov    %eax,0x4(%esp)
085f75a7 +0x1b9:  lea    -0x20(%ebp),%eax
085f75aa +0x1bc:  mov    %eax,(%esp)
085f75ad +0x1bf:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
085f75b2 +0x1c4:  addl   $0x1,-0x10(%ebp)
085f75b6 +0x1c8:  lea    -0x24(%ebp),%eax
085f75b9 +0x1cb:  mov    %eax,(%esp)
085f75bc +0x1ce:  call   085f7f26 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x362>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x362
085f75c1 +0x1d3:  mov    -0x10(%ebp),%eax
085f75c4 +0x1d6:  cmp    $0x14,%eax
085f75c7 +0x1d9:  ja     085f75fe <+0x210>
085f75c9 +0x1db:  mov    0x8(%ebp),%eax
085f75cc +0x1de:  lea    0x8(%eax),%edx
085f75cf +0x1e1:  lea    -0x14(%ebp),%eax
085f75d2 +0x1e4:  mov    %edx,0x4(%esp)
085f75d6 +0x1e8:  mov    %eax,(%esp)
085f75d9 +0x1eb:  call   085f7e86 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2c2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2c2
085f75de +0x1f0:  sub    $0x4,%esp
085f75e1 +0x1f3:  lea    -0x14(%ebp),%eax
085f75e4 +0x1f6:  mov    %eax,0x4(%esp)
085f75e8 +0x1fa:  lea    -0x24(%ebp),%eax
085f75eb +0x1fd:  mov    %eax,(%esp)
085f75ee +0x200:  call   085f7eaa <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2e6>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2e6
085f75f3 +0x205:  test   %al,%al
085f75f5 +0x207:  je     085f75fe <+0x210>
085f75f7 +0x209:  mov    $0x1,%eax
085f75fc +0x20e:  jmp    085f7603 <+0x215>
085f75fe +0x210:  mov    $0x0,%eax
085f7603 +0x215:  test   %al,%al
085f7605 +0x217:  jne    085f745d <+0x6f>
085f760b +0x21d:  movl   $0x1,0x4(%esp)
085f7613 +0x225:  lea    -0x20(%ebp),%eax
085f7616 +0x228:  mov    %eax,(%esp)
085f7619 +0x22b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085f761e +0x230:  lea    -0x20(%ebp),%eax
085f7621 +0x233:  mov    %eax,0x4(%esp)
085f7625 +0x237:  mov    0xc(%ebp),%eax
085f7628 +0x23a:  mov    %eax,(%esp)
085f762b +0x23d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085f7630 +0x242:  mov    $0x1,%ebx
085f7635 +0x247:  lea    -0x20(%ebp),%eax
085f7638 +0x24a:  mov    %eax,(%esp)
085f763b +0x24d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085f7640 +0x252:  mov    %ebx,%eax
085f7642 +0x254:  lea    -0x8(%ebp),%esp
085f7645 +0x257:  add    $0x0,%esp
085f7648 +0x25a:  pop    %ebx
085f7649 +0x25b:  pop    %esi
085f764a +0x25c:  pop    %ebp
085f764b +0x25d:  ret
085f764c +0x25e:  mov    %edx,%ebx
085f764e +0x260:  mov    %eax,%esi
085f7650 +0x262:  lea    -0x20(%ebp),%eax
085f7653 +0x265:  mov    %eax,(%esp)
085f7656 +0x268:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085f765b +0x26d:  mov    %esi,%eax
085f765d +0x26f:  mov    %ebx,%edx
085f765f +0x271:  mov    %eax,(%esp)
085f7662 +0x274:  call   08ae3750 <_Unwind_Resume>
085f7667 +0x279:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::Send_RedeemList @ 0x85f73ee

/* Redeem_Item::CRedeemItem::Send_RedeemList(CUser*) */

undefined4 __thiscall Redeem_Item::CRedeemItem::Send_RedeemList(CRedeemItem *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this_00;
  _List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_28 [4];
  PacketGuard local_24 [12];
  _List_iterator local_18 [4];
  uint local_14;
  Inven_Item *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085f7417 to 085f762f has its CatchHandler @ 085f764c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x121);
  iVar3 = std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::size();
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,iVar3);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::begin();
  local_14 = 0;
  do {
    if (local_14 < 0x15) {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::end();
      cVar2 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_28,local_18);
      if (cVar2 == '\0') goto LAB_085f75fe;
      bVar1 = true;
    }
    else {
LAB_085f75fe:
      bVar1 = false;
    }
    if (!bVar1) {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send(param_1,local_24);
      PacketGuard::~PacketGuard(local_24);
      return 1;
    }
    local_10 = (Inven_Item *)
               std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->(local_28);
    iVar3 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->(local_28);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(iVar3 + 0x40));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_10 + 2));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_10 + 7));
    uVar4 = Inven_Item::GetItemAttr(local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar4 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_10 + 0xb));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(byte)*local_10);
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsEnchantRevisionChannel(this_00);
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_10 + 0xd));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,0);
    }
    uVar4 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_10 + 0x11));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar4 & 0xff);
    uVar4 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_10 + 0x11));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar4 & 0xffff);
    iVar3 = G_CDataManager();
    WongWork::CItemUpgrade::make3rdChroniclePacket
              (*(CItemUpgrade **)(iVar3 + 0x20),param_1,local_10,local_24);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_24,local_10);
    local_14 = local_14 + 1;
    std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_28);
  } while( true );
}
```
