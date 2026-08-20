# dispatch_sig

`_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci`

`Inter_NotifyAuctionMail::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NotifyAuctionMail` | `0x084d55a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d55a4  _ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci
#           Inter_NotifyAuctionMail::dispatch_sig(CUser*, char*, int)
# range [0x084d55a4, 0x084d573f]
084d55a4 +0x000:  push   %ebp
084d55a5 +0x001:  mov    %esp,%ebp
084d55a7 +0x003:  push   %esi
084d55a8 +0x004:  push   %ebx
084d55a9 +0x005:  sub    $0x20,%esp
084d55ac +0x008:  mov    0x10(%ebp),%eax
084d55af +0x00b:  mov    %eax,-0xc(%ebp)
084d55b2 +0x00e:  mov    0xc(%ebp),%eax
084d55b5 +0x011:  mov    %eax,(%esp)
084d55b8 +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d55bd +0x019:  test   %eax,%eax
084d55bf +0x01b:  je     084d55d6 <+0x32>
084d55c1 +0x01d:  mov    0xc(%ebp),%eax
084d55c4 +0x020:  mov    %eax,(%esp)
084d55c7 +0x023:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d55cc +0x028:  mov    -0xc(%ebp),%edx
084d55cf +0x02b:  mov    0xa(%edx),%edx
084d55d2 +0x02e:  cmp    %edx,%eax
084d55d4 +0x030:  je     084d55dd <+0x39>
084d55d6 +0x032:  mov    $0x1,%eax
084d55db +0x037:  jmp    084d55e2 <+0x3e>
084d55dd +0x039:  mov    $0x0,%eax
084d55e2 +0x03e:  test   %al,%al
084d55e4 +0x040:  je     084d55f0 <+0x4c>
084d55e6 +0x042:  mov    $0x3748,%ebx
084d55eb +0x047:  jmp    084d5737 <+0x193>
084d55f0 +0x04c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d55f5 +0x051:  mov    %eax,(%esp)
084d55f8 +0x054:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084d55fd +0x059:  cmp    $0x7,%eax
084d5600 +0x05c:  je     084d5613 <+0x6f>
084d5602 +0x05e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d5607 +0x063:  mov    %eax,(%esp)
084d560a +0x066:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084d560f +0x06b:  test   %al,%al
084d5611 +0x06d:  je     084d561a <+0x76>
084d5613 +0x06f:  mov    $0x1,%eax
084d5618 +0x074:  jmp    084d561f <+0x7b>
084d561a +0x076:  mov    $0x0,%eax
084d561f +0x07b:  test   %al,%al
084d5621 +0x07d:  je     084d562d <+0x89>
084d5623 +0x07f:  mov    $0x0,%ebx
084d5628 +0x084:  jmp    084d5737 <+0x193>
084d562d +0x089:  mov    0xc(%ebp),%eax
084d5630 +0x08c:  mov    %eax,(%esp)
084d5633 +0x08f:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d5638 +0x094:  mov    %eax,(%esp)
084d563b +0x097:  call   084ed330 <_GLOBAL__I__Z7getUserj+0x42e2>  ; global constructors keyed to getUser(unsigned int)+0x42e2
084d5640 +0x09c:  lea    -0x18(%ebp),%eax
084d5643 +0x09f:  mov    %eax,(%esp)
084d5646 +0x0a2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d564b +0x0a7:  movl   $0xa9,0x8(%esp)
084d5653 +0x0af:  movl   $0x0,0x4(%esp)
084d565b +0x0b7:  lea    -0x18(%ebp),%eax
084d565e +0x0ba:  mov    %eax,(%esp)
084d5661 +0x0bd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d5666 +0x0c2:  mov    -0xc(%ebp),%eax
084d5669 +0x0c5:  movzbl 0x17(%eax),%eax
084d566d +0x0c9:  movzbl %al,%eax
084d5670 +0x0cc:  mov    %eax,0x4(%esp)
084d5674 +0x0d0:  lea    -0x18(%ebp),%eax
084d5677 +0x0d3:  mov    %eax,(%esp)
084d567a +0x0d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d567f +0x0db:  mov    -0xc(%ebp),%eax
084d5682 +0x0de:  movzbl 0x12(%eax),%eax
084d5686 +0x0e2:  movzbl %al,%eax
084d5689 +0x0e5:  mov    %eax,0x4(%esp)
084d568d +0x0e9:  lea    -0x18(%ebp),%eax
084d5690 +0x0ec:  mov    %eax,(%esp)
084d5693 +0x0ef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d5698 +0x0f4:  mov    -0xc(%ebp),%eax
084d569b +0x0f7:  mov    0x13(%eax),%eax
084d569e +0x0fa:  mov    %eax,0x4(%esp)
084d56a2 +0x0fe:  lea    -0x18(%ebp),%eax
084d56a5 +0x101:  mov    %eax,(%esp)
084d56a8 +0x104:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d56ad +0x109:  mov    0xc(%ebp),%eax
084d56b0 +0x10c:  mov    %eax,(%esp)
084d56b3 +0x10f:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
084d56b8 +0x114:  mov    %eax,(%esp)
084d56bb +0x117:  call   0823455a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c04
084d56c0 +0x11c:  cwtl
084d56c1 +0x11d:  mov    %eax,0x4(%esp)
084d56c5 +0x121:  lea    -0x18(%ebp),%eax
084d56c8 +0x124:  mov    %eax,(%esp)
084d56cb +0x127:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d56d0 +0x12c:  mov    -0xc(%ebp),%eax
084d56d3 +0x12f:  lea    0x18(%eax),%edx
084d56d6 +0x132:  lea    -0x18(%ebp),%eax
084d56d9 +0x135:  mov    %eax,0x4(%esp)
084d56dd +0x139:  mov    %edx,(%esp)
084d56e0 +0x13c:  call   0811f1ae <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x4a9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x4a9
084d56e5 +0x141:  movl   $0x1,0x4(%esp)
084d56ed +0x149:  lea    -0x18(%ebp),%eax
084d56f0 +0x14c:  mov    %eax,(%esp)
084d56f3 +0x14f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d56f8 +0x154:  lea    -0x18(%ebp),%eax
084d56fb +0x157:  mov    %eax,0x4(%esp)
084d56ff +0x15b:  mov    0xc(%ebp),%eax
084d5702 +0x15e:  mov    %eax,(%esp)
084d5705 +0x161:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d570a +0x166:  mov    $0x0,%ebx
084d570f +0x16b:  lea    -0x18(%ebp),%eax
084d5712 +0x16e:  mov    %eax,(%esp)
084d5715 +0x171:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d571a +0x176:  jmp    084d5737 <+0x193>
084d571c +0x178:  mov    %edx,%ebx
084d571e +0x17a:  mov    %eax,%esi
084d5720 +0x17c:  lea    -0x18(%ebp),%eax
084d5723 +0x17f:  mov    %eax,(%esp)
084d5726 +0x182:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d572b +0x187:  mov    %esi,%eax
084d572d +0x189:  mov    %ebx,%edx
084d572f +0x18b:  mov    %eax,(%esp)
084d5732 +0x18e:  call   08ae3750 <_Unwind_Resume>
084d5737 +0x193:  mov    %ebx,%eax
084d5739 +0x195:  add    $0x20,%esp
084d573c +0x198:  pop    %ebx
084d573d +0x199:  pop    %esi
084d573e +0x19a:  pop    %ebp
084d573f +0x19b:  ret
```

## 反编译 C

```c
// Inter_NotifyAuctionMail::dispatch_sig @ 0x84d55a4

/* Inter_NotifyAuctionMail::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NotifyAuctionMail::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  GameWorld *pGVar5;
  CMailBox *pCVar6;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if ((iVar4 == 0) ||
     (iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
     iVar4 != *(int *)(local_10 + 10))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0x3748;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar5);
  if (iVar4 != 7) {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_084d561f;
    }
  }
  bVar1 = true;
LAB_084d561f:
  if (!bVar1) {
    pCVar6 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    WongWork::CMailBox::IncNotLoadedMailCount(pCVar6);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d5661 to 084d5709 has its CatchHandler @ 084d571c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa9);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x17));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    pCVar6 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    sVar3 = WongWork::CMailBox::GetNotLoadedMailCount(pCVar6);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)sVar3);
    RandomOption::put_packet_random_option<PacketGuard>((RandomOption *)(local_10 + 0x18),local_1c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
