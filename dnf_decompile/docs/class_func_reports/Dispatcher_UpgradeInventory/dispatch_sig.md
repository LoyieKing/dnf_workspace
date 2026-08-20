# dispatch_sig

`_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeInventory` | `0x0822a4bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822a4bc  _ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822a4bc, 0x0822a915]
0822a4bc +0x000:  push   %ebp
0822a4bd +0x001:  mov    %esp,%ebp
0822a4bf +0x003:  push   %edi
0822a4c0 +0x004:  push   %esi
0822a4c1 +0x005:  push   %ebx
0822a4c2 +0x006:  sub    $0x8c,%esp
0822a4c8 +0x00c:  mov    0xc(%ebp),%eax
0822a4cb +0x00f:  mov    %eax,(%esp)
0822a4ce +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0822a4d3 +0x017:  cmp    $0x3,%eax
0822a4d6 +0x01a:  jne    0822a4e7 <+0x2b>
0822a4d8 +0x01c:  mov    0xc(%ebp),%eax
0822a4db +0x01f:  mov    %eax,(%esp)
0822a4de +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0822a4e3 +0x027:  test   %eax,%eax
0822a4e5 +0x029:  jne    0822a4ee <+0x32>
0822a4e7 +0x02b:  mov    $0x1,%eax
0822a4ec +0x030:  jmp    0822a4f3 <+0x37>
0822a4ee +0x032:  mov    $0x0,%eax
0822a4f3 +0x037:  test   %al,%al
0822a4f5 +0x039:  je     0822a522 <+0x66>
0822a4f7 +0x03b:  movl   $0x0,0xc(%esp)
0822a4ff +0x043:  movl   $0x0,0x8(%esp)
0822a507 +0x04b:  movl   $&_ZZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822a50f +0x053:  movl   $0xe828,(%esp)
0822a516 +0x05a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822a51b +0x05f:  mov    %eax,%ebx
0822a51d +0x061:  jmp    0822a909 <+0x44d>
0822a522 +0x066:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0822a527 +0x06b:  movl   $0x1d,0x8(%esp)
0822a52f +0x073:  mov    0xc(%ebp),%edx
0822a532 +0x076:  mov    %edx,0x4(%esp)
0822a536 +0x07a:  mov    %eax,(%esp)
0822a539 +0x07d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0822a53e +0x082:  mov    %eax,-0x1c(%ebp)
0822a541 +0x085:  cmpl   $0x0,-0x1c(%ebp)
0822a545 +0x089:  je     0822a56e <+0xb2>
0822a547 +0x08b:  mov    -0x1c(%ebp),%eax
0822a54a +0x08e:  movzbl %al,%eax
0822a54d +0x091:  mov    %eax,0x8(%esp)
0822a551 +0x095:  movl   $0x1af,0x4(%esp)
0822a559 +0x09d:  mov    0xc(%ebp),%eax
0822a55c +0x0a0:  mov    %eax,(%esp)
0822a55f +0x0a3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a564 +0x0a8:  mov    $0x0,%ebx
0822a569 +0x0ad:  jmp    0822a909 <+0x44d>
0822a56e +0x0b2:  movw   $0x0,-0x1e(%ebp)
0822a574 +0x0b8:  lea    -0x1e(%ebp),%eax
0822a577 +0x0bb:  mov    %eax,0x4(%esp)
0822a57b +0x0bf:  mov    0x10(%ebp),%eax
0822a57e +0x0c2:  mov    %eax,(%esp)
0822a581 +0x0c5:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0822a586 +0x0ca:  xor    $0x1,%eax
0822a589 +0x0cd:  test   %al,%al
0822a58b +0x0cf:  je     0822a5b8 <+0xfc>
0822a58d +0x0d1:  movl   $0x0,0xc(%esp)
0822a595 +0x0d9:  movl   $0x0,0x8(%esp)
0822a59d +0x0e1:  movl   $&_ZZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822a5a5 +0x0e9:  movl   $0xe832,(%esp)
0822a5ac +0x0f0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822a5b1 +0x0f5:  mov    %eax,%ebx
0822a5b3 +0x0f7:  jmp    0822a909 <+0x44d>
0822a5b8 +0x0fc:  movzwl -0x1e(%ebp),%eax
0822a5bc +0x100:  movswl %ax,%ebx
0822a5bf +0x103:  mov    0xc(%ebp),%eax
0822a5c2 +0x106:  mov    %eax,(%esp)
0822a5c5 +0x109:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a5ca +0x10e:  lea    -0x69(%ebp),%edx
0822a5cd +0x111:  mov    %ebx,0xc(%esp)
0822a5d1 +0x115:  movl   $0x1,0x8(%esp)
0822a5d9 +0x11d:  mov    %eax,0x4(%esp)
0822a5dd +0x121:  mov    %edx,(%esp)
0822a5e0 +0x124:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822a5e5 +0x129:  sub    $0x4,%esp
0822a5e8 +0x12c:  mov    -0x62(%ebp),%eax
0822a5eb +0x12f:  test   %eax,%eax
0822a5ed +0x131:  jg     0822a614 <+0x158>
0822a5ef +0x133:  movl   $0x11,0x8(%esp)
0822a5f7 +0x13b:  movl   $0x1af,0x4(%esp)
0822a5ff +0x143:  mov    0xc(%ebp),%eax
0822a602 +0x146:  mov    %eax,(%esp)
0822a605 +0x149:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a60a +0x14e:  mov    $0x0,%ebx
0822a60f +0x153:  jmp    0822a909 <+0x44d>
0822a614 +0x158:  mov    -0x67(%ebp),%eax
0822a617 +0x15b:  cmp    $0x2897ca,%eax
0822a61c +0x160:  je     0822a64d <+0x191>
0822a61e +0x162:  mov    -0x67(%ebp),%eax
0822a621 +0x165:  cmp    $0x203b,%eax
0822a626 +0x16a:  je     0822a64d <+0x191>
0822a628 +0x16c:  movl   $0x11,0x8(%esp)
0822a630 +0x174:  movl   $0x1af,0x4(%esp)
0822a638 +0x17c:  mov    0xc(%ebp),%eax
0822a63b +0x17f:  mov    %eax,(%esp)
0822a63e +0x182:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a643 +0x187:  mov    $0x0,%ebx
0822a648 +0x18c:  jmp    0822a909 <+0x44d>
0822a64d +0x191:  mov    0xc(%ebp),%eax
0822a650 +0x194:  mov    %eax,(%esp)
0822a653 +0x197:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a658 +0x19c:  mov    %eax,(%esp)
0822a65b +0x19f:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0822a660 +0x1a4:  cmp    $0xf,%eax
0822a663 +0x1a7:  setg   %al
0822a666 +0x1aa:  test   %al,%al
0822a668 +0x1ac:  je     0822a68f <+0x1d3>
0822a66a +0x1ae:  movl   $0x13,0x8(%esp)
0822a672 +0x1b6:  movl   $0x1af,0x4(%esp)
0822a67a +0x1be:  mov    0xc(%ebp),%eax
0822a67d +0x1c1:  mov    %eax,(%esp)
0822a680 +0x1c4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a685 +0x1c9:  mov    $0x0,%ebx
0822a68a +0x1ce:  jmp    0822a909 <+0x44d>
0822a68f +0x1d3:  movzwl -0x1e(%ebp),%eax
0822a693 +0x1d7:  movswl %ax,%ebx
0822a696 +0x1da:  mov    0xc(%ebp),%eax
0822a699 +0x1dd:  mov    %eax,(%esp)
0822a69c +0x1e0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822a6a1 +0x1e5:  movl   $0x1,0x14(%esp)
0822a6a9 +0x1ed:  movl   $0x3,0x10(%esp)
0822a6b1 +0x1f5:  movl   $0x1,0xc(%esp)
0822a6b9 +0x1fd:  mov    %ebx,0x8(%esp)
0822a6bd +0x201:  movl   $0x1,0x4(%esp)
0822a6c5 +0x209:  mov    %eax,(%esp)
0822a6c8 +0x20c:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0822a6cd +0x211:  xor    $0x1,%eax
0822a6d0 +0x214:  test   %al,%al
0822a6d2 +0x216:  je     0822a6f9 <+0x23d>
0822a6d4 +0x218:  movl   $0x11,0x8(%esp)
0822a6dc +0x220:  movl   $0x1af,0x4(%esp)
0822a6e4 +0x228:  mov    0xc(%ebp),%eax
0822a6e7 +0x22b:  mov    %eax,(%esp)
0822a6ea +0x22e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a6ef +0x233:  mov    $0x0,%ebx
0822a6f4 +0x238:  jmp    0822a909 <+0x44d>
0822a6f9 +0x23d:  lea    -0x2c(%ebp),%eax
0822a6fc +0x240:  mov    %eax,(%esp)
0822a6ff +0x243:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0822a704 +0x248:  movl   $0xe,0x8(%esp)
0822a70c +0x250:  movl   $0x0,0x4(%esp)
0822a714 +0x258:  lea    -0x2c(%ebp),%eax
0822a717 +0x25b:  mov    %eax,(%esp)
0822a71a +0x25e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822a71f +0x263:  movl   $0x0,0x4(%esp)
0822a727 +0x26b:  lea    -0x2c(%ebp),%eax
0822a72a +0x26e:  mov    %eax,(%esp)
0822a72d +0x271:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0822a732 +0x276:  movl   $0x1,0x4(%esp)
0822a73a +0x27e:  lea    -0x2c(%ebp),%eax
0822a73d +0x281:  mov    %eax,(%esp)
0822a740 +0x284:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0822a745 +0x289:  movzwl -0x1e(%ebp),%eax
0822a749 +0x28d:  movswl %ax,%ebx
0822a74c +0x290:  mov    0xc(%ebp),%eax
0822a74f +0x293:  mov    %eax,(%esp)
0822a752 +0x296:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a757 +0x29b:  lea    -0x2c(%ebp),%edx
0822a75a +0x29e:  mov    %edx,0xc(%esp)
0822a75e +0x2a2:  mov    %ebx,0x8(%esp)
0822a762 +0x2a6:  movl   $0x1,0x4(%esp)
0822a76a +0x2ae:  mov    %eax,(%esp)
0822a76d +0x2b1:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0822a772 +0x2b6:  movl   $0x1,0x4(%esp)
0822a77a +0x2be:  lea    -0x2c(%ebp),%eax
0822a77d +0x2c1:  mov    %eax,(%esp)
0822a780 +0x2c4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822a785 +0x2c9:  lea    -0x2c(%ebp),%eax
0822a788 +0x2cc:  mov    %eax,0x4(%esp)
0822a78c +0x2d0:  mov    0xc(%ebp),%eax
0822a78f +0x2d3:  mov    %eax,(%esp)
0822a792 +0x2d6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822a797 +0x2db:  mov    0xc(%ebp),%eax
0822a79a +0x2de:  mov    %eax,(%esp)
0822a79d +0x2e1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a7a2 +0x2e6:  mov    %eax,(%esp)
0822a7a5 +0x2e9:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0822a7aa +0x2ee:  lea    0x8(%eax),%ebx
0822a7ad +0x2f1:  mov    0xc(%ebp),%eax
0822a7b0 +0x2f4:  mov    %eax,(%esp)
0822a7b3 +0x2f7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a7b8 +0x2fc:  mov    %eax,(%esp)
0822a7bb +0x2ff:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0822a7c0 +0x304:  mov    0xc(%ebp),%edx
0822a7c3 +0x307:  add    $0x79700,%edx
0822a7c9 +0x30d:  movl   $0x1,0xc(%esp)
0822a7d1 +0x315:  mov    %ebx,0x8(%esp)
0822a7d5 +0x319:  mov    %eax,0x4(%esp)
0822a7d9 +0x31d:  mov    %edx,(%esp)
0822a7dc +0x320:  call   08683cbc <_ZN15cUserHistoryLog15ExpandInventoryEiii>  ; cUserHistoryLog::ExpandInventory(int, int, int)
0822a7e1 +0x325:  mov    0xc(%ebp),%eax
0822a7e4 +0x328:  mov    %eax,(%esp)
0822a7e7 +0x32b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a7ec +0x330:  mov    %eax,(%esp)
0822a7ef +0x333:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0822a7f4 +0x338:  lea    0x8(%eax),%ebx
0822a7f7 +0x33b:  mov    0xc(%ebp),%eax
0822a7fa +0x33e:  mov    %eax,(%esp)
0822a7fd +0x341:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a802 +0x346:  mov    %ebx,0x4(%esp)
0822a806 +0x34a:  mov    %eax,(%esp)
0822a809 +0x34d:  call   0822d6ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d98
0822a80e +0x352:  mov    0xc(%ebp),%eax
0822a811 +0x355:  mov    %eax,(%esp)
0822a814 +0x358:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a819 +0x35d:  mov    %eax,(%esp)
0822a81c +0x360:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0822a821 +0x365:  mov    %eax,%edi
0822a823 +0x367:  mov    0xc(%ebp),%eax
0822a826 +0x36a:  mov    %eax,(%esp)
0822a829 +0x36d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0822a82e +0x372:  mov    %eax,%esi
0822a830 +0x374:  mov    0xc(%ebp),%eax
0822a833 +0x377:  mov    %eax,(%esp)
0822a836 +0x37a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0822a83b +0x37f:  mov    %eax,%ebx
0822a83d +0x381:  mov    0xc(%ebp),%eax
0822a840 +0x384:  mov    %eax,(%esp)
0822a843 +0x387:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0822a848 +0x38c:  mov    %edi,0xc(%esp)
0822a84c +0x390:  mov    %esi,0x8(%esp)
0822a850 +0x394:  mov    %ebx,0x4(%esp)
0822a854 +0x398:  mov    %eax,(%esp)
0822a857 +0x39b:  call   08444d12 <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji>  ; DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int)
0822a85c +0x3a0:  lea    -0x2c(%ebp),%eax
0822a85f +0x3a3:  mov    %eax,(%esp)
0822a862 +0x3a6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0822a867 +0x3ab:  movl   $0x42,0x8(%esp)
0822a86f +0x3b3:  movl   $0x0,0x4(%esp)
0822a877 +0x3bb:  lea    -0x2c(%ebp),%eax
0822a87a +0x3be:  mov    %eax,(%esp)
0822a87d +0x3c1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822a882 +0x3c6:  movl   $0xb,0x4(%esp)
0822a88a +0x3ce:  lea    -0x2c(%ebp),%eax
0822a88d +0x3d1:  mov    %eax,(%esp)
0822a890 +0x3d4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0822a895 +0x3d9:  mov    0xc(%ebp),%eax
0822a898 +0x3dc:  mov    %eax,(%esp)
0822a89b +0x3df:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a8a0 +0x3e4:  mov    %eax,(%esp)
0822a8a3 +0x3e7:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0822a8a8 +0x3ec:  mov    %eax,0x4(%esp)
0822a8ac +0x3f0:  lea    -0x2c(%ebp),%eax
0822a8af +0x3f3:  mov    %eax,(%esp)
0822a8b2 +0x3f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0822a8b7 +0x3fb:  movl   $0x1,0x4(%esp)
0822a8bf +0x403:  lea    -0x2c(%ebp),%eax
0822a8c2 +0x406:  mov    %eax,(%esp)
0822a8c5 +0x409:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822a8ca +0x40e:  lea    -0x2c(%ebp),%eax
0822a8cd +0x411:  mov    %eax,0x4(%esp)
0822a8d1 +0x415:  mov    0xc(%ebp),%eax
0822a8d4 +0x418:  mov    %eax,(%esp)
0822a8d7 +0x41b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822a8dc +0x420:  mov    $0x0,%ebx
0822a8e1 +0x425:  lea    -0x2c(%ebp),%eax
0822a8e4 +0x428:  mov    %eax,(%esp)
0822a8e7 +0x42b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822a8ec +0x430:  jmp    0822a909 <+0x44d>
0822a8ee +0x432:  mov    %edx,%ebx
0822a8f0 +0x434:  mov    %eax,%esi
0822a8f2 +0x436:  lea    -0x2c(%ebp),%eax
0822a8f5 +0x439:  mov    %eax,(%esp)
0822a8f8 +0x43c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822a8fd +0x441:  mov    %esi,%eax
0822a8ff +0x443:  mov    %ebx,%edx
0822a901 +0x445:  mov    %eax,(%esp)
0822a904 +0x448:  call   08ae3750 <_Unwind_Resume>
0822a909 +0x44d:  mov    %ebx,%eax
0822a90b +0x44f:  lea    -0xc(%ebp),%esp
0822a90e +0x452:  add    $0x0,%esp
0822a911 +0x455:  pop    %ebx
0822a912 +0x456:  pop    %esi
0822a913 +0x457:  pop    %edi
0822a914 +0x458:  pop    %ebp
0822a915 +0x459:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeInventory::dispatch_sig @ 0x822a4bc

/* Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeInventory::dispatch_sig
          (Dispatcher_UpgradeInventory *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_6d [2];
  int local_6b;
  int local_66;
  PacketGuard local_30 [14];
  short local_22;
  uint local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0822a4f3;
    }
  }
  bVar1 = true;
LAB_0822a4f3:
  if (bVar1) {
    uVar4 = LineFunc(0xe828,
                     "virtual int Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1d);
    if (local_20 == 0) {
      local_22 = 0;
      cVar2 = PacketBuf::get_short(param_2,&local_22);
      if (cVar2 == '\x01') {
        iVar9 = (int)local_22;
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_6d,iVar3);
        if (local_66 < 1) {
          CUser::SendCmdErrorPacket(param_1,0x1af,0x11,iVar9);
          uVar4 = 0;
        }
        else if ((local_6b == 0x2897ca) || (local_6b == 0x203b)) {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          iVar3 = CInventory::get_inventory_capacity(pCVar5);
          if (iVar3 < 0x10) {
            iVar3 = (int)local_22;
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar5,1,iVar3,1,3,1);
            if (cVar2 == '\x01') {
              PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0822a71a to 0822a8db has its CatchHandler @ 0822a8ee */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
              iVar3 = (int)local_22;
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::MakeItemPacket(pCVar5,1,iVar3,local_30);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
              CUser::Send(param_1,local_30);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar3 = CInventory::get_inventory_capacity(pCVar5);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar9 = CInventory::get_inventory_capacity(pCVar5);
              cUserHistoryLog::ExpandInventory
                        ((cUserHistoryLog *)(param_1 + 0x79700),iVar9,iVar3 + 8,1);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar3 = CInventory::get_inventory_capacity(pCVar5);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::set_inventory_capacity(pCVar5,iVar3 + 8);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              uVar4 = CInventory::get_inventory_capacity(pCVar5);
              uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar7 = CUser::GetUID(param_1);
              uVar8 = CUser::GetServerGroup(param_1);
              DB_UpdateInventoryCapacity::makeRequest(uVar8,uVar7,uVar6,uVar4);
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x42);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,0xb);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar3 = CInventory::get_inventory_capacity(pCVar5);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,iVar3);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
              CUser::Send(param_1,local_30);
              uVar4 = 0;
              PacketGuard::~PacketGuard(local_30);
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x1af,0x11);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x1af,0x13,iVar9);
            uVar4 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x1af,0x11,iVar9);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0xe832,
                         "virtual int Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1af,local_20 & 0xff);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
