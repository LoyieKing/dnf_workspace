# SendOpenflag

`_ZN5CUser12SendOpenflagEv`

`CUser::SendOpenflag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086568fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086568fc  _ZN5CUser12SendOpenflagEv
#           CUser::SendOpenflag()
# range [0x086568fc, 0x08656abb]
086568fc +0x000:  push   %ebp
086568fd +0x001:  mov    %esp,%ebp
086568ff +0x003:  push   %esi
08656900 +0x004:  push   %ebx
08656901 +0x005:  sub    $0x30,%esp
08656904 +0x008:  mov    0x8(%ebp),%eax
08656907 +0x00b:  mov    %eax,(%esp)
0865690a +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865690f +0x013:  test   %eax,%eax
08656911 +0x015:  sete   %al
08656914 +0x018:  test   %al,%al
08656916 +0x01a:  jne    08656ab4 <+0x1b8>
0865691c +0x020:  movl   $0x0,-0x14(%ebp)
08656923 +0x027:  movl   $0x0,-0x10(%ebp)
0865692a +0x02e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0865692f +0x033:  movl   $0x4,0x4(%esp)
08656937 +0x03b:  mov    %eax,(%esp)
0865693a +0x03e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0865693f +0x043:  mov    %eax,-0xc(%ebp)
08656942 +0x046:  cmpl   $0x0,-0xc(%ebp)
08656946 +0x04a:  je     0865696d <+0x71>
08656948 +0x04c:  mov    -0xc(%ebp),%eax
0865694b +0x04f:  mov    (%eax),%eax
0865694d +0x051:  add    $0x34,%eax
08656950 +0x054:  mov    (%eax),%edx
08656952 +0x056:  mov    -0xc(%ebp),%eax
08656955 +0x059:  movl   $0x0,0x4(%esp)
0865695d +0x061:  mov    %eax,(%esp)
08656960 +0x064:  call   *%edx
08656962 +0x066:  test   %al,%al
08656964 +0x068:  je     0865696d <+0x71>
08656966 +0x06a:  mov    $0x1,%eax
0865696b +0x06f:  jmp    08656972 <+0x76>
0865696d +0x071:  mov    $0x0,%eax
08656972 +0x076:  test   %al,%al
08656974 +0x078:  je     0865698c <+0x90>
08656976 +0x07a:  movl   $0x1,0x4(%esp)
0865697e +0x082:  mov    -0xc(%ebp),%eax
08656981 +0x085:  mov    %eax,(%esp)
08656984 +0x088:  call   0810ad16 <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi>  ; CCoinEventPerDay::GetCoinNoPerDay(int)
08656989 +0x08d:  mov    %eax,-0x14(%ebp)
0865698c +0x090:  mov    0x8(%ebp),%eax
0865698f +0x093:  mov    %eax,(%esp)
08656992 +0x096:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
08656997 +0x09b:  test   %al,%al
08656999 +0x09d:  je     086569b1 <+0xb5>
0865699b +0x09f:  mov    0x8(%ebp),%eax
0865699e +0x0a2:  mov    %eax,(%esp)
086569a1 +0x0a5:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
086569a6 +0x0aa:  mov    %eax,(%esp)
086569a9 +0x0ad:  call   0822e4be <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b68>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b68
086569ae +0x0b2:  add    %eax,-0x14(%ebp)
086569b1 +0x0b5:  mov    0x8(%ebp),%eax
086569b4 +0x0b8:  mov    %eax,(%esp)
086569b7 +0x0bb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086569bc +0x0c0:  mov    %eax,(%esp)
086569bf +0x0c3:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
086569c4 +0x0c8:  cmp    -0x14(%ebp),%eax
086569c7 +0x0cb:  jae    086569d8 <+0xdc>
086569c9 +0x0cd:  mov    0x8(%ebp),%eax
086569cc +0x0d0:  mov    %eax,(%esp)
086569cf +0x0d3:  call   0822f816 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ec0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ec0
086569d4 +0x0d8:  cmp    $0x1,%al
086569d6 +0x0da:  jne    086569df <+0xe3>
086569d8 +0x0dc:  mov    $0x1,%eax
086569dd +0x0e1:  jmp    086569e4 <+0xe8>
086569df +0x0e3:  mov    $0x0,%eax
086569e4 +0x0e8:  test   %al,%al
086569e6 +0x0ea:  je     086569f1 <+0xf5>
086569e8 +0x0ec:  movl   $0x0,-0x10(%ebp)
086569ef +0x0f3:  jmp    08656a10 <+0x114>
086569f1 +0x0f5:  mov    0x8(%ebp),%eax
086569f4 +0x0f8:  mov    %eax,(%esp)
086569f7 +0x0fb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086569fc +0x100:  mov    %eax,(%esp)
086569ff +0x103:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
08656a04 +0x108:  mov    -0x14(%ebp),%edx
08656a07 +0x10b:  mov    %edx,%ecx
08656a09 +0x10d:  sub    %eax,%ecx
08656a0b +0x10f:  mov    %ecx,%eax
08656a0d +0x111:  mov    %eax,-0x10(%ebp)
08656a10 +0x114:  lea    -0x20(%ebp),%eax
08656a13 +0x117:  mov    %eax,(%esp)
08656a16 +0x11a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08656a1b +0x11f:  movl   $0xb1,0x8(%esp)
08656a23 +0x127:  movl   $0x0,0x4(%esp)
08656a2b +0x12f:  lea    -0x20(%ebp),%eax
08656a2e +0x132:  mov    %eax,(%esp)
08656a31 +0x135:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08656a36 +0x13a:  mov    0x8(%ebp),%eax
08656a39 +0x13d:  mov    %eax,(%esp)
08656a3c +0x140:  call   0822f816 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ec0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ec0
08656a41 +0x145:  movsbl %al,%eax
08656a44 +0x148:  mov    %eax,0x4(%esp)
08656a48 +0x14c:  lea    -0x20(%ebp),%eax
08656a4b +0x14f:  mov    %eax,(%esp)
08656a4e +0x152:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08656a53 +0x157:  mov    -0x10(%ebp),%eax
08656a56 +0x15a:  mov    %eax,0x4(%esp)
08656a5a +0x15e:  lea    -0x20(%ebp),%eax
08656a5d +0x161:  mov    %eax,(%esp)
08656a60 +0x164:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08656a65 +0x169:  movl   $0x1,0x4(%esp)
08656a6d +0x171:  lea    -0x20(%ebp),%eax
08656a70 +0x174:  mov    %eax,(%esp)
08656a73 +0x177:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08656a78 +0x17c:  lea    -0x20(%ebp),%eax
08656a7b +0x17f:  mov    %eax,0x4(%esp)
08656a7f +0x183:  mov    0x8(%ebp),%eax
08656a82 +0x186:  mov    %eax,(%esp)
08656a85 +0x189:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08656a8a +0x18e:  jmp    08656aa7 <+0x1ab>
08656a8c +0x190:  mov    %edx,%ebx
08656a8e +0x192:  mov    %eax,%esi
08656a90 +0x194:  lea    -0x20(%ebp),%eax
08656a93 +0x197:  mov    %eax,(%esp)
08656a96 +0x19a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08656a9b +0x19f:  mov    %esi,%eax
08656a9d +0x1a1:  mov    %ebx,%edx
08656a9f +0x1a3:  mov    %eax,(%esp)
08656aa2 +0x1a6:  call   08ae3750 <_Unwind_Resume>
08656aa7 +0x1ab:  lea    -0x20(%ebp),%eax
08656aaa +0x1ae:  mov    %eax,(%esp)
08656aad +0x1b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08656ab2 +0x1b6:  jmp    08656ab5 <+0x1b9>
08656ab4 +0x1b8:  nop
08656ab5 +0x1b9:  add    $0x30,%esp
08656ab8 +0x1bc:  pop    %ebx
08656ab9 +0x1bd:  pop    %esi
08656aba +0x1be:  pop    %ebp
08656abb +0x1bf:  ret
```

## 反编译 C

```c
// CUser::SendOpenflag @ 0x86568fc

/* CUser::SendOpenflag() */

void __thiscall CUser::SendOpenflag(CUser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUserPremium *this_00;
  CInventory *pCVar4;
  uint uVar5;
  PacketGuard local_24 [12];
  uint local_18;
  int local_14;
  CCoinEventPerDay *local_10;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = (CCoinEventPerDay *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,4);
    if ((local_10 == (CCoinEventPerDay *)0x0) ||
       (cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = CCoinEventPerDay::GetCoinNoPerDay(local_10,1);
    }
    cVar2 = IsHavePremiumAdvantage(this);
    if (cVar2 != '\0') {
      this_00 = (CUserPremium *)GetPremiumInfo(this);
      iVar3 = WongWork::CUserPremium::GetAdvantageCoin(this_00);
      local_18 = local_18 + iVar3;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar5 = CInventory::GetCoin(pCVar4);
    if ((uVar5 < local_18) &&
       (cVar2 = CUserCharacInfo::GetOpencoin((CUserCharacInfo *)this), cVar2 != '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = 0;
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      local_14 = CInventory::GetCoin(pCVar4);
      local_14 = local_18 - local_14;
    }
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08656a31 to 08656a89 has its CatchHandler @ 08656a8c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xb1);
    cVar2 = CUserCharacInfo::GetOpencoin((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)cVar2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    Send(this,local_24);
    PacketGuard::~PacketGuard(local_24);
    return;
  }
  return;
}
```
