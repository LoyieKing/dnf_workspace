# dispatch_sig

`_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Shop_Coin_Event::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Shop_Coin_Event` | `0x081ea622` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ea622  _ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Shop_Coin_Event::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ea622, 0x081ea8ff]
081ea622 +0x000:  push   %ebp
081ea623 +0x001:  mov    %esp,%ebp
081ea625 +0x003:  push   %esi
081ea626 +0x004:  push   %ebx
081ea627 +0x005:  sub    $0x40,%esp
081ea62a +0x008:  mov    0xc(%ebp),%eax
081ea62d +0x00b:  mov    %eax,(%esp)
081ea630 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ea635 +0x013:  cmp    $0x2,%eax
081ea638 +0x016:  setle  %al
081ea63b +0x019:  test   %al,%al
081ea63d +0x01b:  je     081ea649 <+0x27>
081ea63f +0x01d:  mov    $0x0,%ebx
081ea644 +0x022:  jmp    081ea8f6 <+0x2d4>
081ea649 +0x027:  movl   $0x1,-0x14(%ebp)
081ea650 +0x02e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081ea655 +0x033:  movl   $0x4,0x4(%esp)
081ea65d +0x03b:  mov    %eax,(%esp)
081ea660 +0x03e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081ea665 +0x043:  mov    %eax,-0x10(%ebp)
081ea668 +0x046:  cmpl   $0x0,-0x10(%ebp)
081ea66c +0x04a:  je     081ea693 <+0x71>
081ea66e +0x04c:  mov    -0x10(%ebp),%eax
081ea671 +0x04f:  mov    (%eax),%eax
081ea673 +0x051:  add    $0x34,%eax
081ea676 +0x054:  mov    (%eax),%edx
081ea678 +0x056:  mov    -0x10(%ebp),%eax
081ea67b +0x059:  movl   $0x0,0x4(%esp)
081ea683 +0x061:  mov    %eax,(%esp)
081ea686 +0x064:  call   *%edx
081ea688 +0x066:  test   %al,%al
081ea68a +0x068:  je     081ea693 <+0x71>
081ea68c +0x06a:  mov    $0x1,%eax
081ea691 +0x06f:  jmp    081ea698 <+0x76>
081ea693 +0x071:  mov    $0x0,%eax
081ea698 +0x076:  test   %al,%al
081ea69a +0x078:  je     081ea6b2 <+0x90>
081ea69c +0x07a:  movl   $0x1,0x4(%esp)
081ea6a4 +0x082:  mov    -0x10(%ebp),%eax
081ea6a7 +0x085:  mov    %eax,(%esp)
081ea6aa +0x088:  call   0810ad16 <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi>  ; CCoinEventPerDay::GetCoinNoPerDay(int)
081ea6af +0x08d:  mov    %eax,-0x14(%ebp)
081ea6b2 +0x090:  mov    0xc(%ebp),%eax
081ea6b5 +0x093:  mov    %eax,(%esp)
081ea6b8 +0x096:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
081ea6bd +0x09b:  test   %al,%al
081ea6bf +0x09d:  je     081ea6dc <+0xba>
081ea6c1 +0x09f:  mov    0xc(%ebp),%eax
081ea6c4 +0x0a2:  mov    %eax,(%esp)
081ea6c7 +0x0a5:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
081ea6cc +0x0aa:  mov    %eax,(%esp)
081ea6cf +0x0ad:  call   0822e4be <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b68>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b68
081ea6d4 +0x0b2:  mov    -0x14(%ebp),%edx
081ea6d7 +0x0b5:  add    %edx,%eax
081ea6d9 +0x0b7:  mov    %eax,-0x14(%ebp)
081ea6dc +0x0ba:  mov    0xc(%ebp),%eax
081ea6df +0x0bd:  mov    %eax,(%esp)
081ea6e2 +0x0c0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ea6e7 +0x0c5:  mov    %eax,(%esp)
081ea6ea +0x0c8:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
081ea6ef +0x0cd:  cmp    -0x14(%ebp),%eax
081ea6f2 +0x0d0:  jge    081ea703 <+0xe1>
081ea6f4 +0x0d2:  mov    0xc(%ebp),%eax
081ea6f7 +0x0d5:  mov    %eax,(%esp)
081ea6fa +0x0d8:  call   0822f816 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ec0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ec0
081ea6ff +0x0dd:  cmp    $0x1,%al
081ea701 +0x0df:  jne    081ea70a <+0xe8>
081ea703 +0x0e1:  mov    $0x1,%eax
081ea708 +0x0e6:  jmp    081ea70f <+0xed>
081ea70a +0x0e8:  mov    $0x0,%eax
081ea70f +0x0ed:  test   %al,%al
081ea711 +0x0ef:  je     081ea7cb <+0x1a9>
081ea717 +0x0f5:  lea    -0x2c(%ebp),%eax
081ea71a +0x0f8:  mov    %eax,(%esp)
081ea71d +0x0fb:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ea722 +0x100:  movl   $0xd2,0x8(%esp)
081ea72a +0x108:  movl   $0x1,0x4(%esp)
081ea732 +0x110:  lea    -0x2c(%ebp),%eax
081ea735 +0x113:  mov    %eax,(%esp)
081ea738 +0x116:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ea73d +0x11b:  movl   $0x1,0x4(%esp)
081ea745 +0x123:  lea    -0x2c(%ebp),%eax
081ea748 +0x126:  mov    %eax,(%esp)
081ea74b +0x129:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ea750 +0x12e:  movl   $0x0,0x4(%esp)
081ea758 +0x136:  lea    -0x2c(%ebp),%eax
081ea75b +0x139:  mov    %eax,(%esp)
081ea75e +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ea763 +0x141:  movl   $0x1,0x4(%esp)
081ea76b +0x149:  lea    -0x2c(%ebp),%eax
081ea76e +0x14c:  mov    %eax,(%esp)
081ea771 +0x14f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ea776 +0x154:  lea    -0x2c(%ebp),%eax
081ea779 +0x157:  mov    %eax,0x4(%esp)
081ea77d +0x15b:  mov    0xc(%ebp),%eax
081ea780 +0x15e:  mov    %eax,(%esp)
081ea783 +0x161:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ea788 +0x166:  mov    0xc(%ebp),%eax
081ea78b +0x169:  movl   $0x1,0x4(%esp)
081ea793 +0x171:  mov    %eax,(%esp)
081ea796 +0x174:  call   0822f7d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e7a
081ea79b +0x179:  mov    $0x0,%ebx
081ea7a0 +0x17e:  lea    -0x2c(%ebp),%eax
081ea7a3 +0x181:  mov    %eax,(%esp)
081ea7a6 +0x184:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ea7ab +0x189:  jmp    081ea8f6 <+0x2d4>
081ea7b0 +0x18e:  mov    %edx,%ebx
081ea7b2 +0x190:  mov    %eax,%esi
081ea7b4 +0x192:  lea    -0x2c(%ebp),%eax
081ea7b7 +0x195:  mov    %eax,(%esp)
081ea7ba +0x198:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ea7bf +0x19d:  mov    %esi,%eax
081ea7c1 +0x19f:  mov    %ebx,%edx
081ea7c3 +0x1a1:  mov    %eax,(%esp)
081ea7c6 +0x1a4:  call   08ae3750 <_Unwind_Resume>
081ea7cb +0x1a9:  mov    -0x14(%ebp),%ebx
081ea7ce +0x1ac:  mov    0xc(%ebp),%eax
081ea7d1 +0x1af:  mov    %eax,(%esp)
081ea7d4 +0x1b2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ea7d9 +0x1b7:  mov    %eax,(%esp)
081ea7dc +0x1ba:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
081ea7e1 +0x1bf:  mov    %ebx,%edx
081ea7e3 +0x1c1:  sub    %eax,%edx
081ea7e5 +0x1c3:  mov    %edx,%eax
081ea7e7 +0x1c5:  mov    %eax,-0xc(%ebp)
081ea7ea +0x1c8:  mov    -0x14(%ebp),%ebx
081ea7ed +0x1cb:  mov    0xc(%ebp),%eax
081ea7f0 +0x1ce:  mov    %eax,(%esp)
081ea7f3 +0x1d1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081ea7f8 +0x1d6:  mov    %ebx,0x4(%esp)
081ea7fc +0x1da:  mov    %eax,(%esp)
081ea7ff +0x1dd:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
081ea804 +0x1e2:  mov    0xc(%ebp),%eax
081ea807 +0x1e5:  movl   $0x1,0x4(%esp)
081ea80f +0x1ed:  mov    %eax,(%esp)
081ea812 +0x1f0:  call   0822f7d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e7a
081ea817 +0x1f5:  mov    0xc(%ebp),%eax
081ea81a +0x1f8:  mov    %eax,(%esp)
081ea81d +0x1fb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ea822 +0x200:  mov    %eax,(%esp)
081ea825 +0x203:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
081ea82a +0x208:  mov    0xc(%ebp),%edx
081ea82d +0x20b:  lea    0x79700(%edx),%ecx
081ea833 +0x211:  movl   $0x4,0xc(%esp)
081ea83b +0x219:  mov    -0xc(%ebp),%edx
081ea83e +0x21c:  mov    %edx,0x8(%esp)
081ea842 +0x220:  mov    %eax,0x4(%esp)
081ea846 +0x224:  mov    %ecx,(%esp)
081ea849 +0x227:  call   08683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>  ; cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)
081ea84e +0x22c:  lea    -0x20(%ebp),%eax
081ea851 +0x22f:  mov    %eax,(%esp)
081ea854 +0x232:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ea859 +0x237:  movl   $0xd2,0x8(%esp)
081ea861 +0x23f:  movl   $0x1,0x4(%esp)
081ea869 +0x247:  lea    -0x20(%ebp),%eax
081ea86c +0x24a:  mov    %eax,(%esp)
081ea86f +0x24d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ea874 +0x252:  movl   $0x1,0x4(%esp)
081ea87c +0x25a:  lea    -0x20(%ebp),%eax
081ea87f +0x25d:  mov    %eax,(%esp)
081ea882 +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ea887 +0x265:  mov    -0xc(%ebp),%eax
081ea88a +0x268:  mov    %eax,0x4(%esp)
081ea88e +0x26c:  lea    -0x20(%ebp),%eax
081ea891 +0x26f:  mov    %eax,(%esp)
081ea894 +0x272:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ea899 +0x277:  movl   $0x1,0x4(%esp)
081ea8a1 +0x27f:  lea    -0x20(%ebp),%eax
081ea8a4 +0x282:  mov    %eax,(%esp)
081ea8a7 +0x285:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ea8ac +0x28a:  lea    -0x20(%ebp),%eax
081ea8af +0x28d:  mov    %eax,0x4(%esp)
081ea8b3 +0x291:  mov    0xc(%ebp),%eax
081ea8b6 +0x294:  mov    %eax,(%esp)
081ea8b9 +0x297:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ea8be +0x29c:  mov    0xc(%ebp),%eax
081ea8c1 +0x29f:  mov    %eax,(%esp)
081ea8c4 +0x2a2:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
081ea8c9 +0x2a7:  mov    $0x0,%ebx
081ea8ce +0x2ac:  lea    -0x20(%ebp),%eax
081ea8d1 +0x2af:  mov    %eax,(%esp)
081ea8d4 +0x2b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ea8d9 +0x2b7:  jmp    081ea8f6 <+0x2d4>
081ea8db +0x2b9:  mov    %edx,%ebx
081ea8dd +0x2bb:  mov    %eax,%esi
081ea8df +0x2bd:  lea    -0x20(%ebp),%eax
081ea8e2 +0x2c0:  mov    %eax,(%esp)
081ea8e5 +0x2c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ea8ea +0x2c8:  mov    %esi,%eax
081ea8ec +0x2ca:  mov    %ebx,%edx
081ea8ee +0x2cc:  mov    %eax,(%esp)
081ea8f1 +0x2cf:  call   08ae3750 <_Unwind_Resume>
081ea8f6 +0x2d4:  mov    %ebx,%eax
081ea8f8 +0x2d6:  add    $0x40,%esp
081ea8fb +0x2d9:  pop    %ebx
081ea8fc +0x2da:  pop    %esi
081ea8fd +0x2db:  pop    %ebp
081ea8fe +0x2dc:  ret
081ea8ff +0x2dd:  nop
```

## 反编译 C

```c
// Dispatcher_Shop_Coin_Event::dispatch_sig @ 0x81ea622

/* Dispatcher_Shop_Coin_Event::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Shop_Coin_Event::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  CUserPremium *this;
  CInventory *pCVar6;
  undefined4 uVar7;
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  uint local_18;
  CCoinEventPerDay *local_14;
  int local_10;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (2 < iVar5) {
    local_18 = 1;
    local_14 = (CCoinEventPerDay *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,4);
    if ((local_14 == (CCoinEventPerDay *)0x0) ||
       (cVar4 = (**(code **)(*(int *)local_14 + 0x34))(local_14,0), cVar4 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = CCoinEventPerDay::GetCoinNoPerDay(local_14,1);
    }
    cVar4 = CUser::IsHavePremiumAdvantage((CUser *)param_2);
    if (cVar4 != '\0') {
      this = (CUserPremium *)CUser::GetPremiumInfo((CUser *)param_2);
      iVar5 = WongWork::CUserPremium::GetAdvantageCoin(this);
      local_18 = iVar5 + local_18;
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    iVar5 = CInventory::GetCoin(pCVar6);
    if ((iVar5 < (int)local_18) &&
       (cVar4 = CUserCharacInfo::GetOpencoin((CUserCharacInfo *)param_2), cVar4 != '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar2 = local_18;
    if (bVar1) {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081ea738 to 081ea787 has its CatchHandler @ 081ea7b0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xd2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      CUserCharacInfo::SetOpencoin((CUserCharacInfo *)param_2,'\x01');
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      local_10 = CInventory::GetCoin(pCVar6);
      uVar3 = local_18;
      local_10 = uVar2 - local_10;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::SetCoin(pCVar6,uVar3);
      CUserCharacInfo::SetOpencoin((CUserCharacInfo *)param_2,'\x01');
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      uVar7 = CInventory::GetCoin(pCVar6);
      cUserHistoryLog::CoinAdd((cUserHistoryLog *)(param_2 + 0x79700),uVar7,local_10,4);
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081ea86f to 081ea8c8 has its CatchHandler @ 081ea8db */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      CUser::SendCoin((CUser *)param_2);
      PacketGuard::~PacketGuard(local_24);
    }
  }
  return 0;
}
```
