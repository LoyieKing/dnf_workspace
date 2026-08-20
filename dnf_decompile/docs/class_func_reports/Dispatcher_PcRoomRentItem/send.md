# send

`_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase`

`Dispatcher_PcRoomRentItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomRentItem` | `0x081e542e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e542e  _ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase
#           Dispatcher_PcRoomRentItem::send(CUser*, ParamBase&)
# range [0x081e542e, 0x081e5761]
081e542e +0x000:  push   %ebp
081e542f +0x001:  mov    %esp,%ebp
081e5431 +0x003:  push   %esi
081e5432 +0x004:  push   %ebx
081e5433 +0x005:  sub    $0x50,%esp
081e5436 +0x008:  mov    0x10(%ebp),%eax
081e5439 +0x00b:  mov    %eax,-0x1c(%ebp)
081e543c +0x00e:  mov    -0x1c(%ebp),%eax
081e543f +0x011:  add    $0x8,%eax
081e5442 +0x014:  mov    %eax,-0x18(%ebp)
081e5445 +0x017:  movb   $0x0,-0x11(%ebp)
081e5449 +0x01b:  lea    -0x34(%ebp),%eax
081e544c +0x01e:  mov    %eax,(%esp)
081e544f +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e5454 +0x026:  movl   $0x1ee,0x8(%esp)
081e545c +0x02e:  movl   $0x1,0x4(%esp)
081e5464 +0x036:  lea    -0x34(%ebp),%eax
081e5467 +0x039:  mov    %eax,(%esp)
081e546a +0x03c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e546f +0x041:  mov    -0x1c(%ebp),%eax
081e5472 +0x044:  mov    0x4(%eax),%eax
081e5475 +0x047:  test   %eax,%eax
081e5477 +0x049:  jne    081e5581 <+0x153>
081e547d +0x04f:  movl   $0x1,0x4(%esp)
081e5485 +0x057:  lea    -0x34(%ebp),%eax
081e5488 +0x05a:  mov    %eax,(%esp)
081e548b +0x05d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5490 +0x062:  mov    -0x18(%ebp),%eax
081e5493 +0x065:  add    $0xc,%eax
081e5496 +0x068:  mov    %eax,(%esp)
081e5499 +0x06b:  call   082374d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb82
081e549e +0x070:  movsbl %al,%eax
081e54a1 +0x073:  mov    %eax,0x4(%esp)
081e54a5 +0x077:  lea    -0x34(%ebp),%eax
081e54a8 +0x07a:  mov    %eax,(%esp)
081e54ab +0x07d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e54b0 +0x082:  mov    -0x18(%ebp),%eax
081e54b3 +0x085:  lea    0xc(%eax),%edx
081e54b6 +0x088:  lea    -0x38(%ebp),%eax
081e54b9 +0x08b:  mov    %edx,0x4(%esp)
081e54bd +0x08f:  mov    %eax,(%esp)
081e54c0 +0x092:  call   082374f4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb9e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb9e
081e54c5 +0x097:  sub    $0x4,%esp
081e54c8 +0x09a:  jmp    081e554d <+0x11f>
081e54cd +0x09f:  lea    -0x38(%ebp),%eax
081e54d0 +0x0a2:  mov    %eax,(%esp)
081e54d3 +0x0a5:  call   08237580 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc2a
081e54d8 +0x0aa:  mov    %eax,-0x10(%ebp)
081e54db +0x0ad:  mov    -0x10(%ebp),%eax
081e54de +0x0b0:  movzbl (%eax),%eax
081e54e1 +0x0b3:  test   %al,%al
081e54e3 +0x0b5:  je     081e5518 <+0xea>
081e54e5 +0x0b7:  movl   $0x3,0x4(%esp)
081e54ed +0x0bf:  lea    -0x34(%ebp),%eax
081e54f0 +0x0c2:  mov    %eax,(%esp)
081e54f3 +0x0c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e54f8 +0x0ca:  mov    -0x10(%ebp),%eax
081e54fb +0x0cd:  movzwl 0x2(%eax),%eax
081e54ff +0x0d1:  cmp    $0x9,%ax
081e5503 +0x0d5:  jle    081e552b <+0xfd>
081e5505 +0x0d7:  mov    -0x10(%ebp),%eax
081e5508 +0x0da:  movzwl 0x2(%eax),%eax
081e550c +0x0de:  cmp    $0x15,%ax
081e5510 +0x0e2:  jg     081e552b <+0xfd>
081e5512 +0x0e4:  movb   $0x1,-0x11(%ebp)
081e5516 +0x0e8:  jmp    081e552b <+0xfd>
081e5518 +0x0ea:  movl   $0x0,0x4(%esp)
081e5520 +0x0f2:  lea    -0x34(%ebp),%eax
081e5523 +0x0f5:  mov    %eax,(%esp)
081e5526 +0x0f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e552b +0x0fd:  mov    -0x10(%ebp),%eax
081e552e +0x100:  movzwl 0x2(%eax),%eax
081e5532 +0x104:  cwtl
081e5533 +0x105:  mov    %eax,0x4(%esp)
081e5537 +0x109:  lea    -0x34(%ebp),%eax
081e553a +0x10c:  mov    %eax,(%esp)
081e553d +0x10f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e5542 +0x114:  lea    -0x38(%ebp),%eax
081e5545 +0x117:  mov    %eax,(%esp)
081e5548 +0x11a:  call   0823756a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc14>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc14
081e554d +0x11f:  mov    -0x18(%ebp),%eax
081e5550 +0x122:  lea    0xc(%eax),%edx
081e5553 +0x125:  lea    -0x28(%ebp),%eax
081e5556 +0x128:  mov    %edx,0x4(%esp)
081e555a +0x12c:  mov    %eax,(%esp)
081e555d +0x12f:  call   08237518 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc2
081e5562 +0x134:  sub    $0x4,%esp
081e5565 +0x137:  lea    -0x28(%ebp),%eax
081e5568 +0x13a:  mov    %eax,0x4(%esp)
081e556c +0x13e:  lea    -0x38(%ebp),%eax
081e556f +0x141:  mov    %eax,(%esp)
081e5572 +0x144:  call   0823753e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbe8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbe8
081e5577 +0x149:  test   %al,%al
081e5579 +0x14b:  jne    081e54cd <+0x9f>
081e557f +0x151:  jmp    081e55ac <+0x17e>
081e5581 +0x153:  movl   $0x0,0x4(%esp)
081e5589 +0x15b:  lea    -0x34(%ebp),%eax
081e558c +0x15e:  mov    %eax,(%esp)
081e558f +0x161:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5594 +0x166:  mov    -0x1c(%ebp),%eax
081e5597 +0x169:  mov    0x4(%eax),%eax
081e559a +0x16c:  movzbl %al,%eax
081e559d +0x16f:  mov    %eax,0x4(%esp)
081e55a1 +0x173:  lea    -0x34(%ebp),%eax
081e55a4 +0x176:  mov    %eax,(%esp)
081e55a7 +0x179:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e55ac +0x17e:  movl   $0x1,0x4(%esp)
081e55b4 +0x186:  lea    -0x34(%ebp),%eax
081e55b7 +0x189:  mov    %eax,(%esp)
081e55ba +0x18c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e55bf +0x191:  lea    -0x34(%ebp),%eax
081e55c2 +0x194:  mov    %eax,0x4(%esp)
081e55c6 +0x198:  mov    0xc(%ebp),%eax
081e55c9 +0x19b:  mov    %eax,(%esp)
081e55cc +0x19e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e55d1 +0x1a3:  mov    -0x1c(%ebp),%eax
081e55d4 +0x1a6:  mov    0x4(%eax),%eax
081e55d7 +0x1a9:  test   %eax,%eax
081e55d9 +0x1ab:  jne    081e5717 <+0x2e9>
081e55df +0x1b1:  lea    -0x44(%ebp),%eax
081e55e2 +0x1b4:  mov    %eax,(%esp)
081e55e5 +0x1b7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e55ea +0x1bc:  movl   $0xe,0x8(%esp)
081e55f2 +0x1c4:  movl   $0x0,0x4(%esp)
081e55fa +0x1cc:  lea    -0x44(%ebp),%eax
081e55fd +0x1cf:  mov    %eax,(%esp)
081e5600 +0x1d2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e5605 +0x1d7:  movl   $0x0,0x4(%esp)
081e560d +0x1df:  lea    -0x44(%ebp),%eax
081e5610 +0x1e2:  mov    %eax,(%esp)
081e5613 +0x1e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5618 +0x1ea:  mov    -0x18(%ebp),%eax
081e561b +0x1ed:  mov    %eax,(%esp)
081e561e +0x1f0:  call   0823758a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc34
081e5623 +0x1f5:  cwtl
081e5624 +0x1f6:  mov    %eax,0x4(%esp)
081e5628 +0x1fa:  lea    -0x44(%ebp),%eax
081e562b +0x1fd:  mov    %eax,(%esp)
081e562e +0x200:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e5633 +0x205:  mov    -0x18(%ebp),%edx
081e5636 +0x208:  lea    -0x24(%ebp),%eax
081e5639 +0x20b:  mov    %edx,0x4(%esp)
081e563d +0x20f:  mov    %eax,(%esp)
081e5640 +0x212:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
081e5645 +0x217:  sub    $0x4,%esp
081e5648 +0x21a:  lea    -0x24(%ebp),%eax
081e564b +0x21d:  mov    %eax,0x4(%esp)
081e564f +0x221:  lea    -0x48(%ebp),%eax
081e5652 +0x224:  mov    %eax,(%esp)
081e5655 +0x227:  call   082375ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc74
081e565a +0x22c:  jmp    081e56a5 <+0x277>
081e565c +0x22e:  lea    -0x48(%ebp),%eax
081e565f +0x231:  mov    %eax,(%esp)
081e5662 +0x234:  call   0823764c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccf6
081e5667 +0x239:  mov    %eax,-0xc(%ebp)
081e566a +0x23c:  mov    -0xc(%ebp),%eax
081e566d +0x23f:  movzwl 0x2(%eax),%eax
081e5671 +0x243:  movswl %ax,%ebx
081e5674 +0x246:  mov    0xc(%ebp),%eax
081e5677 +0x249:  mov    %eax,(%esp)
081e567a +0x24c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e567f +0x251:  lea    -0x44(%ebp),%edx
081e5682 +0x254:  mov    %edx,0xc(%esp)
081e5686 +0x258:  mov    %ebx,0x8(%esp)
081e568a +0x25c:  movl   $0x1,0x4(%esp)
081e5692 +0x264:  mov    %eax,(%esp)
081e5695 +0x267:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
081e569a +0x26c:  lea    -0x48(%ebp),%eax
081e569d +0x26f:  mov    %eax,(%esp)
081e56a0 +0x272:  call   08237636 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcce0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcce0
081e56a5 +0x277:  mov    -0x18(%ebp),%edx
081e56a8 +0x27a:  lea    -0x20(%ebp),%eax
081e56ab +0x27d:  mov    %edx,0x4(%esp)
081e56af +0x281:  mov    %eax,(%esp)
081e56b2 +0x284:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
081e56b7 +0x289:  sub    $0x4,%esp
081e56ba +0x28c:  lea    -0x20(%ebp),%eax
081e56bd +0x28f:  mov    %eax,0x4(%esp)
081e56c1 +0x293:  lea    -0x48(%ebp),%eax
081e56c4 +0x296:  mov    %eax,(%esp)
081e56c7 +0x299:  call   0823760a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccb4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccb4
081e56cc +0x29e:  test   %al,%al
081e56ce +0x2a0:  jne    081e565c <+0x22e>
081e56d0 +0x2a2:  movl   $0x1,0x4(%esp)
081e56d8 +0x2aa:  lea    -0x44(%ebp),%eax
081e56db +0x2ad:  mov    %eax,(%esp)
081e56de +0x2b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e56e3 +0x2b5:  lea    -0x44(%ebp),%eax
081e56e6 +0x2b8:  mov    %eax,0x4(%esp)
081e56ea +0x2bc:  mov    0xc(%ebp),%eax
081e56ed +0x2bf:  mov    %eax,(%esp)
081e56f0 +0x2c2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e56f5 +0x2c7:  jmp    081e570c <+0x2de>
081e56f7 +0x2c9:  mov    %edx,%ebx
081e56f9 +0x2cb:  mov    %eax,%esi
081e56fb +0x2cd:  lea    -0x44(%ebp),%eax
081e56fe +0x2d0:  mov    %eax,(%esp)
081e5701 +0x2d3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5706 +0x2d8:  mov    %esi,%eax
081e5708 +0x2da:  mov    %ebx,%edx
081e570a +0x2dc:  jmp    081e5732 <+0x304>
081e570c +0x2de:  lea    -0x44(%ebp),%eax
081e570f +0x2e1:  mov    %eax,(%esp)
081e5712 +0x2e4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5717 +0x2e9:  cmpb   $0x0,-0x11(%ebp)
081e571b +0x2ed:  je     081e574d <+0x31f>
081e571d +0x2ef:  movl   $0xa,0x4(%esp)
081e5725 +0x2f7:  mov    0xc(%ebp),%eax
081e5728 +0x2fa:  mov    %eax,(%esp)
081e572b +0x2fd:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
081e5730 +0x302:  jmp    081e574d <+0x31f>
081e5732 +0x304:  mov    %edx,%ebx
081e5734 +0x306:  mov    %eax,%esi
081e5736 +0x308:  lea    -0x34(%ebp),%eax
081e5739 +0x30b:  mov    %eax,(%esp)
081e573c +0x30e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5741 +0x313:  mov    %esi,%eax
081e5743 +0x315:  mov    %ebx,%edx
081e5745 +0x317:  mov    %eax,(%esp)
081e5748 +0x31a:  call   08ae3750 <_Unwind_Resume>
081e574d +0x31f:  lea    -0x34(%ebp),%eax
081e5750 +0x322:  mov    %eax,(%esp)
081e5753 +0x325:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5758 +0x32a:  lea    -0x8(%ebp),%esp
081e575b +0x32d:  add    $0x0,%esp
081e575e +0x330:  pop    %ebx
081e575f +0x331:  pop    %esi
081e5760 +0x332:  pop    %ebp
081e5761 +0x333:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomRentItem::send @ 0x81e542e

/* Dispatcher_PcRoomRentItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PcRoomRentItem::send(Dispatcher_PcRoomRentItem *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  CInventory *pCVar4;
  __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_4c [4];
  PacketGuard local_48 [12];
  __normal_iterator<InstanceRentalSystem::DeletedRentItem*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
  local_3c [4];
  PacketGuard local_38 [12];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator local_24 [4];
  ParamBase *local_20;
  ParamBase *local_1c;
  char local_15;
  char *local_14;
  int local_10;
  
  local_20 = param_2;
  local_1c = param_2 + 8;
  local_15 = '\0';
  PacketGuard::PacketGuard(local_38);
                    /* try { // try from 081e546a to 081e55e9 has its CatchHandler @ 081e5732 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x1ee);
  if (*(int *)(local_20 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
    cVar1 = std::
            vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
            ::size((vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
                    *)(local_1c + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,(int)cVar1);
    std::
    vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
    ::begin();
    while( true ) {
      std::
      vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_3c,local_2c);
      if (!bVar2) break;
      local_14 = (char *)__gnu_cxx::
                         __normal_iterator<InstanceRentalSystem::DeletedRentItem*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
                         ::operator*(local_3c);
      if (*local_14 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,3);
        if ((9 < *(short *)(local_14 + 2)) && (*(short *)(local_14 + 2) < 0x16)) {
          local_15 = '\x01';
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,(int)*(short *)(local_14 + 2));
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::DeletedRentItem*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
      ::operator++(local_3c);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(uint *)(local_20 + 4) & 0xff);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
  CUser::Send(param_1,local_38);
  if (*(int *)(local_20 + 4) == 0) {
    PacketGuard::PacketGuard(local_48);
                    /* try { // try from 081e5600 to 081e56f4 has its CatchHandler @ 081e56f7 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
    sVar3 = std::
            vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
            ::size((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
                    *)local_1c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,(int)sVar3);
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    begin();
    __gnu_cxx::
    __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
    ::__normal_iterator<InstanceRentalSystem::RentalInfo*>(local_4c,local_28);
    while( true ) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_4c,local_24);
      if (!bVar2) break;
      local_10 = __gnu_cxx::
                 __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                 ::operator*(local_4c);
      sVar3 = *(short *)(local_10 + 2);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar4,1,(int)sVar3,local_48);
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
      ::operator++(local_4c);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send(param_1,local_48);
                    /* try { // try from 081e5712 to 081e572f has its CatchHandler @ 081e5732 */
    PacketGuard::~PacketGuard(local_48);
  }
  if (local_15 != '\0') {
    CUser::send_equip(param_1,10);
  }
  PacketGuard::~PacketGuard(local_38);
  return;
}
```
