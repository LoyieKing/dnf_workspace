# dispatch_sig

`_ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseBoosterItem` | `0x08208d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08208d40  _ZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08208d40, 0x082099bb]
08208d40 +0x000:  push   %ebp
08208d41 +0x001:  mov    %esp,%ebp
08208d43 +0x003:  push   %edi
08208d44 +0x004:  push   %esi
08208d45 +0x005:  push   %ebx
08208d46 +0x006:  sub    $0x19c,%esp
08208d4c +0x00c:  movw   $0xffff,-0x60(%ebp)
08208d52 +0x012:  lea    -0x60(%ebp),%eax
08208d55 +0x015:  mov    %eax,0x4(%esp)
08208d59 +0x019:  mov    0x10(%ebp),%eax
08208d5c +0x01c:  mov    %eax,(%esp)
08208d5f +0x01f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08208d64 +0x024:  xor    $0x1,%eax
08208d67 +0x027:  test   %al,%al
08208d69 +0x029:  je     08208d96 <+0x56>
08208d6b +0x02b:  movl   $0x0,0xc(%esp)
08208d73 +0x033:  movl   $0x0,0x8(%esp)
08208d7b +0x03b:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208d83 +0x043:  movl   $0xa436,(%esp)
08208d8a +0x04a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208d8f +0x04f:  mov    %eax,%ebx
08208d91 +0x051:  jmp    082099af <+0xc6f>
08208d96 +0x056:  mov    0xc(%ebp),%eax
08208d99 +0x059:  mov    %eax,(%esp)
08208d9c +0x05c:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08208da1 +0x061:  test   %al,%al
08208da3 +0x063:  jne    08208dbd <+0x7d>
08208da5 +0x065:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08208daa +0x06a:  mov    0xc(%ebp),%edx
08208dad +0x06d:  mov    %edx,0x4(%esp)
08208db1 +0x071:  mov    %eax,(%esp)
08208db4 +0x074:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
08208db9 +0x079:  test   %al,%al
08208dbb +0x07b:  je     08208dc4 <+0x84>
08208dbd +0x07d:  mov    $0x1,%eax
08208dc2 +0x082:  jmp    08208dc9 <+0x89>
08208dc4 +0x084:  mov    $0x0,%eax
08208dc9 +0x089:  test   %al,%al
08208dcb +0x08b:  je     08208df2 <+0xb2>
08208dcd +0x08d:  movl   $0x13,0x8(%esp)
08208dd5 +0x095:  movl   $0xa3,0x4(%esp)
08208ddd +0x09d:  mov    0xc(%ebp),%eax
08208de0 +0x0a0:  mov    %eax,(%esp)
08208de3 +0x0a3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208de8 +0x0a8:  mov    $0x0,%ebx
08208ded +0x0ad:  jmp    082099af <+0xc6f>
08208df2 +0x0b2:  mov    0xc(%ebp),%eax
08208df5 +0x0b5:  mov    %eax,(%esp)
08208df8 +0x0b8:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08208dfd +0x0bd:  test   %eax,%eax
08208dff +0x0bf:  sete   %al
08208e02 +0x0c2:  test   %al,%al
08208e04 +0x0c4:  je     08208e10 <+0xd0>
08208e06 +0x0c6:  mov    $0xa43e,%ebx
08208e0b +0x0cb:  jmp    082099af <+0xc6f>
08208e10 +0x0d0:  movzwl -0x60(%ebp),%eax
08208e14 +0x0d4:  movswl %ax,%ebx
08208e17 +0x0d7:  mov    0xc(%ebp),%eax
08208e1a +0x0da:  mov    %eax,(%esp)
08208e1d +0x0dd:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08208e22 +0x0e2:  lea    -0xe1(%ebp),%edx
08208e28 +0x0e8:  mov    %ebx,0xc(%esp)
08208e2c +0x0ec:  movl   $0x1,0x8(%esp)
08208e34 +0x0f4:  mov    %eax,0x4(%esp)
08208e38 +0x0f8:  mov    %edx,(%esp)
08208e3b +0x0fb:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08208e40 +0x100:  sub    $0x4,%esp
08208e43 +0x103:  mov    -0xdf(%ebp),%eax
08208e49 +0x109:  mov    %eax,%ebx
08208e4b +0x10b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08208e50 +0x110:  mov    %ebx,0x4(%esp)
08208e54 +0x114:  mov    %eax,(%esp)
08208e57 +0x117:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08208e5c +0x11c:  mov    %eax,-0x30(%ebp)
08208e5f +0x11f:  cmpl   $0x0,-0x30(%ebp)
08208e63 +0x123:  je     08208e93 <+0x153>
08208e65 +0x125:  mov    -0x30(%ebp),%eax
08208e68 +0x128:  mov    (%eax),%eax
08208e6a +0x12a:  add    $0xc,%eax
08208e6d +0x12d:  mov    (%eax),%edx
08208e6f +0x12f:  mov    -0x30(%ebp),%eax
08208e72 +0x132:  mov    %eax,(%esp)
08208e75 +0x135:  call   *%edx
08208e77 +0x137:  cmp    $0x10,%eax
08208e7a +0x13a:  je     08208e9a <+0x15a>
08208e7c +0x13c:  mov    -0x30(%ebp),%eax
08208e7f +0x13f:  mov    (%eax),%eax
08208e81 +0x141:  add    $0xc,%eax
08208e84 +0x144:  mov    (%eax),%edx
08208e86 +0x146:  mov    -0x30(%ebp),%eax
08208e89 +0x149:  mov    %eax,(%esp)
08208e8c +0x14c:  call   *%edx
08208e8e +0x14e:  cmp    $0x22,%eax
08208e91 +0x151:  je     08208e9a <+0x15a>
08208e93 +0x153:  mov    $0x1,%eax
08208e98 +0x158:  jmp    08208e9f <+0x15f>
08208e9a +0x15a:  mov    $0x0,%eax
08208e9f +0x15f:  test   %al,%al
08208ea1 +0x161:  je     08208ece <+0x18e>
08208ea3 +0x163:  movl   $0x0,0xc(%esp)
08208eab +0x16b:  movl   $0x0,0x8(%esp)
08208eb3 +0x173:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208ebb +0x17b:  movl   $0xa450,(%esp)
08208ec2 +0x182:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208ec7 +0x187:  mov    %eax,%ebx
08208ec9 +0x189:  jmp    082099af <+0xc6f>
08208ece +0x18e:  mov    -0xdf(%ebp),%eax
08208ed4 +0x194:  cmp    $0x28d3c1,%eax
08208ed9 +0x199:  je     08208ef2 <+0x1b2>
08208edb +0x19b:  mov    0xc(%ebp),%eax
08208ede +0x19e:  mov    %eax,(%esp)
08208ee1 +0x1a1:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08208ee6 +0x1a6:  cmp    $0x3,%eax
08208ee9 +0x1a9:  je     08208ef2 <+0x1b2>
08208eeb +0x1ab:  mov    $0x1,%eax
08208ef0 +0x1b0:  jmp    08208ef7 <+0x1b7>
08208ef2 +0x1b2:  mov    $0x0,%eax
08208ef7 +0x1b7:  test   %al,%al
08208ef9 +0x1b9:  je     08208f20 <+0x1e0>
08208efb +0x1bb:  movl   $0x13,0x8(%esp)
08208f03 +0x1c3:  movl   $0xa3,0x4(%esp)
08208f0b +0x1cb:  mov    0xc(%ebp),%eax
08208f0e +0x1ce:  mov    %eax,(%esp)
08208f11 +0x1d1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208f16 +0x1d6:  mov    $0x0,%ebx
08208f1b +0x1db:  jmp    082099af <+0xc6f>
08208f20 +0x1e0:  mov    0xc(%ebp),%eax
08208f23 +0x1e3:  mov    %eax,(%esp)
08208f26 +0x1e6:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08208f2b +0x1eb:  movsbl %al,%ebx
08208f2e +0x1ee:  mov    0xc(%ebp),%eax
08208f31 +0x1f1:  mov    %eax,(%esp)
08208f34 +0x1f4:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08208f39 +0x1f9:  movsbl %al,%eax
08208f3c +0x1fc:  mov    %ebx,0x8(%esp)
08208f40 +0x200:  mov    %eax,0x4(%esp)
08208f44 +0x204:  mov    -0x30(%ebp),%eax
08208f47 +0x207:  mov    %eax,(%esp)
08208f4a +0x20a:  call   0850eba2 <_ZNK14CStackableItem21check_change_job_typeEcc>  ; CStackableItem::check_change_job_type(char, char) const
08208f4f +0x20f:  xor    $0x1,%eax
08208f52 +0x212:  test   %al,%al
08208f54 +0x214:  je     08208f7b <+0x23b>
08208f56 +0x216:  movl   $0x17,0x8(%esp)
08208f5e +0x21e:  movl   $0xa3,0x4(%esp)
08208f66 +0x226:  mov    0xc(%ebp),%eax
08208f69 +0x229:  mov    %eax,(%esp)
08208f6c +0x22c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208f71 +0x231:  mov    $0x0,%ebx
08208f76 +0x236:  jmp    082099af <+0xc6f>
08208f7b +0x23b:  lea    -0x6c(%ebp),%eax
08208f7e +0x23e:  mov    %eax,(%esp)
08208f81 +0x241:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08208f86 +0x246:  movb   $0x0,-0x6d(%ebp)
08208f8a +0x24a:  movb   $0x0,-0x6e(%ebp)
08208f8e +0x24e:  mov    -0x30(%ebp),%eax
08208f91 +0x251:  mov    (%eax),%eax
08208f93 +0x253:  add    $0xc,%eax
08208f96 +0x256:  mov    (%eax),%edx
08208f98 +0x258:  mov    -0x30(%ebp),%eax
08208f9b +0x25b:  mov    %eax,(%esp)
08208f9e +0x25e:  call   *%edx
08208fa0 +0x260:  cmp    $0x22,%eax
08208fa3 +0x263:  sete   %al
08208fa6 +0x266:  test   %al,%al
08208fa8 +0x268:  je     08209276 <+0x536>
08208fae +0x26e:  lea    -0x6d(%ebp),%eax
08208fb1 +0x271:  mov    %eax,0x4(%esp)
08208fb5 +0x275:  mov    0x10(%ebp),%eax
08208fb8 +0x278:  mov    %eax,(%esp)
08208fbb +0x27b:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08208fc0 +0x280:  xor    $0x1,%eax
08208fc3 +0x283:  test   %al,%al
08208fc5 +0x285:  je     08208ff2 <+0x2b2>
08208fc7 +0x287:  movl   $0x0,0xc(%esp)
08208fcf +0x28f:  movl   $0x0,0x8(%esp)
08208fd7 +0x297:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208fdf +0x29f:  movl   $0xa473,(%esp)
08208fe6 +0x2a6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208feb +0x2ab:  mov    %eax,%ebx
08208fed +0x2ad:  jmp    082099a4 <+0xc64>
08208ff2 +0x2b2:  lea    -0x6e(%ebp),%eax
08208ff5 +0x2b5:  mov    %eax,0x4(%esp)
08208ff9 +0x2b9:  mov    0x10(%ebp),%eax
08208ffc +0x2bc:  mov    %eax,(%esp)
08208fff +0x2bf:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08209004 +0x2c4:  xor    $0x1,%eax
08209007 +0x2c7:  test   %al,%al
08209009 +0x2c9:  je     08209036 <+0x2f6>
0820900b +0x2cb:  movl   $0x0,0xc(%esp)
08209013 +0x2d3:  movl   $0x0,0x8(%esp)
0820901b +0x2db:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209023 +0x2e3:  movl   $0xa475,(%esp)
0820902a +0x2ea:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820902f +0x2ef:  mov    %eax,%ebx
08209031 +0x2f1:  jmp    082099a4 <+0xc64>
08209036 +0x2f6:  lea    -0x11e(%ebp),%eax
0820903c +0x2fc:  mov    %eax,(%esp)
0820903f +0x2ff:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08209044 +0x304:  mov    -0x30(%ebp),%eax
08209047 +0x307:  mov    0x26c(%eax),%eax
0820904d +0x30d:  mov    %eax,-0x20(%ebp)
08209050 +0x310:  cmpl   $0x0,-0x20(%ebp)
08209054 +0x314:  jne    08209198 <+0x458>
0820905a +0x31a:  lea    -0x5e(%ebp),%eax
0820905d +0x31d:  lea    -0x6e(%ebp),%edx
08209060 +0x320:  mov    %edx,0x8(%esp)
08209064 +0x324:  lea    -0x6d(%ebp),%edx
08209067 +0x327:  mov    %edx,0x4(%esp)
0820906b +0x32b:  mov    %eax,(%esp)
0820906e +0x32e:  call   08237973 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd01d>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd01d
08209073 +0x333:  sub    $0x4,%esp
08209076 +0x336:  mov    -0x30(%ebp),%eax
08209079 +0x339:  lea    0x24c(%eax),%ecx
0820907f +0x33f:  lea    -0x9c(%ebp),%eax
08209085 +0x345:  lea    -0x5e(%ebp),%edx
08209088 +0x348:  mov    %edx,0x8(%esp)
0820908c +0x34c:  mov    %ecx,0x4(%esp)
08209090 +0x350:  mov    %eax,(%esp)
08209093 +0x353:  call   082379b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd05c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd05c
08209098 +0x358:  sub    $0x4,%esp
0820909b +0x35b:  mov    -0x30(%ebp),%eax
0820909e +0x35e:  lea    0x24c(%eax),%edx
082090a4 +0x364:  lea    -0x5c(%ebp),%eax
082090a7 +0x367:  mov    %edx,0x4(%esp)
082090ab +0x36b:  mov    %eax,(%esp)
082090ae +0x36e:  call   082379de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd088>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd088
082090b3 +0x373:  sub    $0x4,%esp
082090b6 +0x376:  lea    -0x5c(%ebp),%eax
082090b9 +0x379:  mov    %eax,0x4(%esp)
082090bd +0x37d:  lea    -0x9c(%ebp),%eax
082090c3 +0x383:  mov    %eax,(%esp)
082090c6 +0x386:  call   08237a04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd0ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd0ae
082090cb +0x38b:  test   %al,%al
082090cd +0x38d:  je     08209198 <+0x458>
082090d3 +0x393:  lea    -0x9c(%ebp),%eax
082090d9 +0x399:  mov    %eax,(%esp)
082090dc +0x39c:  call   08237a18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd0c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd0c2
082090e1 +0x3a1:  add    $0x4,%eax
082090e4 +0x3a4:  mov    %eax,(%esp)
082090e7 +0x3a7:  call   08237a26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd0d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd0d0
082090ec +0x3ac:  test   %al,%al
082090ee +0x3ae:  je     0820917c <+0x43c>
082090f4 +0x3b4:  movzbl -0x6e(%ebp),%eax
082090f8 +0x3b8:  movsbl %al,%edi
082090fb +0x3bb:  movzbl -0x6d(%ebp),%eax
082090ff +0x3bf:  movsbl %al,%esi
08209102 +0x3c2:  mov    -0x30(%ebp),%eax
08209105 +0x3c5:  mov    %eax,(%esp)
08209108 +0x3c8:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0820910d +0x3cd:  mov    %eax,%ebx
0820910f +0x3cf:  movl   $0x5,0xc(%esp)
08209117 +0x3d7:  movl   $0xa480,0x8(%esp)
0820911f +0x3df:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209127 +0x3e7:  lea    -0x58(%ebp),%eax
0820912a +0x3ea:  mov    %eax,(%esp)
0820912d +0x3ed:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08209132 +0x3f2:  mov    %edi,0x10(%esp)
08209136 +0x3f6:  mov    %esi,0xc(%esp)
0820913a +0x3fa:  mov    %ebx,0x8(%esp)
0820913e +0x3fe:  movl   $"selectionBooster empty : %d, category:%d,%d\n",0x4(%esp)
08209146 +0x406:  lea    -0x58(%ebp),%eax
08209149 +0x409:  mov    %eax,(%esp)
0820914c +0x40c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08209151 +0x411:  movl   $0x0,0xc(%esp)
08209159 +0x419:  movl   $0x0,0x8(%esp)
08209161 +0x421:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209169 +0x429:  movl   $0xa481,(%esp)
08209170 +0x430:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209175 +0x435:  mov    %eax,%ebx
08209177 +0x437:  jmp    082099a4 <+0xc64>
0820917c +0x43c:  lea    -0x9c(%ebp),%eax
08209182 +0x442:  mov    %eax,(%esp)
08209185 +0x445:  call   08237a18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd0c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd0c2
0820918a +0x44a:  add    $0x4,%eax
0820918d +0x44d:  mov    %eax,(%esp)
08209190 +0x450:  call   08237a6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd114>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd114
08209195 +0x455:  mov    %eax,-0x20(%ebp)
08209198 +0x458:  movl   $0x0,-0x1c(%ebp)
0820919f +0x45f:  jmp    0820921c <+0x4dc>
082091a1 +0x461:  lea    -0x11e(%ebp),%eax
082091a7 +0x467:  mov    %eax,(%esp)
082091aa +0x46a:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
082091af +0x46f:  lea    -0x11e(%ebp),%eax
082091b5 +0x475:  add    $0x2,%eax
082091b8 +0x478:  mov    %eax,0x4(%esp)
082091bc +0x47c:  mov    0x10(%ebp),%eax
082091bf +0x47f:  mov    %eax,(%esp)
082091c2 +0x482:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
082091c7 +0x487:  xor    $0x1,%eax
082091ca +0x48a:  test   %al,%al
082091cc +0x48c:  je     082091f9 <+0x4b9>
082091ce +0x48e:  movl   $0x0,0xc(%esp)
082091d6 +0x496:  movl   $0x0,0x8(%esp)
082091de +0x49e:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082091e6 +0x4a6:  movl   $0xa48c,(%esp)
082091ed +0x4ad:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082091f2 +0x4b2:  mov    %eax,%ebx
082091f4 +0x4b4:  jmp    082099a4 <+0xc64>
082091f9 +0x4b9:  movl   $0x1,-0x117(%ebp)
08209203 +0x4c3:  lea    -0x11e(%ebp),%eax
08209209 +0x4c9:  mov    %eax,0x4(%esp)
0820920d +0x4cd:  lea    -0x6c(%ebp),%eax
08209210 +0x4d0:  mov    %eax,(%esp)
08209213 +0x4d3:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08209218 +0x4d8:  addl   $0x1,-0x1c(%ebp)
0820921c +0x4dc:  mov    -0x1c(%ebp),%eax
0820921f +0x4df:  cmp    -0x20(%ebp),%eax
08209222 +0x4e2:  jge    08209231 <+0x4f1>
08209224 +0x4e4:  cmpl   $0x13,-0x1c(%ebp)
08209228 +0x4e8:  jg     08209231 <+0x4f1>
0820922a +0x4ea:  mov    $0x1,%eax
0820922f +0x4ef:  jmp    08209236 <+0x4f6>
08209231 +0x4f1:  mov    $0x0,%eax
08209236 +0x4f6:  test   %al,%al
08209238 +0x4f8:  jne    082091a1 <+0x461>
0820923e +0x4fe:  movzbl -0x6e(%ebp),%eax
08209242 +0x502:  movsbl %al,%ecx
08209245 +0x505:  movzbl -0x6d(%ebp),%eax
08209249 +0x509:  movsbl %al,%edx
0820924c +0x50c:  mov    -0xdf(%ebp),%eax
08209252 +0x512:  mov    0xc(%ebp),%ebx
08209255 +0x515:  lea    0x79700(%ebx),%esi
0820925b +0x51b:  lea    -0x6c(%ebp),%ebx
0820925e +0x51e:  mov    %ebx,0x10(%esp)
08209262 +0x522:  mov    %ecx,0xc(%esp)
08209266 +0x526:  mov    %edx,0x8(%esp)
0820926a +0x52a:  mov    %eax,0x4(%esp)
0820926e +0x52e:  mov    %esi,(%esp)
08209271 +0x531:  call   08686b52 <_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE>  ; cUserHistoryLog::UseSelectBooster(unsigned int, int, int, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
08209276 +0x536:  call   081a1155 <_GLOBAL__I__ZN17CAradRyosikaEventC2Ev+0x1c>  ; global constructors keyed to CAradRyosikaEvent::CAradRyosikaEvent()+0x1c
0820927b +0x53b:  mov    -0x30(%ebp),%edx
0820927e +0x53e:  mov    %edx,0x8(%esp)
08209282 +0x542:  mov    0xc(%ebp),%edx
08209285 +0x545:  mov    %edx,0x4(%esp)
08209289 +0x549:  mov    %eax,(%esp)
0820928c +0x54c:  call   081a31c4 <_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem>  ; Arad_GiftItem_Set::level_check(CUser*, CStackableItem const*)
08209291 +0x551:  xor    $0x1,%eax
08209294 +0x554:  test   %al,%al
08209296 +0x556:  je     08209316 <+0x5d6>
08209298 +0x558:  mov    -0xdf(%ebp),%esi
0820929e +0x55e:  movl   $0xffffffff,0x4(%esp)
082092a6 +0x566:  mov    0xc(%ebp),%eax
082092a9 +0x569:  mov    %eax,(%esp)
082092ac +0x56c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
082092b1 +0x571:  mov    %eax,%ebx
082092b3 +0x573:  movl   $0x0,0xc(%esp)
082092bb +0x57b:  movl   $0xa49b,0x8(%esp)
082092c3 +0x583:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082092cb +0x58b:  lea    -0x48(%ebp),%eax
082092ce +0x58e:  mov    %eax,(%esp)
082092d1 +0x591:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082092d6 +0x596:  mov    %esi,0xc(%esp)
082092da +0x59a:  mov    %ebx,0x8(%esp)
082092de +0x59e:  movl   $"stackable item level check charac_no[%d], item_id(%d)",0x4(%esp)
082092e6 +0x5a6:  lea    -0x48(%ebp),%eax
082092e9 +0x5a9:  mov    %eax,(%esp)
082092ec +0x5ac:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082092f1 +0x5b1:  movl   $0x13,0x8(%esp)
082092f9 +0x5b9:  movl   $0xa3,0x4(%esp)
08209301 +0x5c1:  mov    0xc(%ebp),%eax
08209304 +0x5c4:  mov    %eax,(%esp)
08209307 +0x5c7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820930c +0x5cc:  mov    $0x0,%ebx
08209311 +0x5d1:  jmp    082099a4 <+0xc64>
08209316 +0x5d6:  mov    -0x30(%ebp),%edx
08209319 +0x5d9:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0820931e +0x5de:  mov    %edx,0xc(%esp)
08209322 +0x5e2:  movl   $0x2a,0x8(%esp)
0820932a +0x5ea:  mov    0xc(%ebp),%edx
0820932d +0x5ed:  mov    %edx,0x4(%esp)
08209331 +0x5f1:  mov    %eax,(%esp)
08209334 +0x5f4:  call   08288786 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem>  ; CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*)
08209339 +0x5f9:  mov    %eax,-0x2c(%ebp)
0820933c +0x5fc:  cmpl   $0x0,-0x2c(%ebp)
08209340 +0x600:  je     08209369 <+0x629>
08209342 +0x602:  mov    -0x2c(%ebp),%eax
08209345 +0x605:  movzbl %al,%eax
08209348 +0x608:  mov    %eax,0x8(%esp)
0820934c +0x60c:  movl   $0xa3,0x4(%esp)
08209354 +0x614:  mov    0xc(%ebp),%eax
08209357 +0x617:  mov    %eax,(%esp)
0820935a +0x61a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820935f +0x61f:  mov    $0x0,%ebx
08209364 +0x624:  jmp    082099a4 <+0xc64>
08209369 +0x629:  mov    -0x30(%ebp),%eax
0820936c +0x62c:  mov    %eax,(%esp)
0820936f +0x62f:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
08209374 +0x634:  mov    %eax,%ebx
08209376 +0x636:  mov    0xc(%ebp),%eax
08209379 +0x639:  mov    %eax,(%esp)
0820937c +0x63c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08209381 +0x641:  cmp    %eax,%ebx
08209383 +0x643:  setg   %al
08209386 +0x646:  test   %al,%al
08209388 +0x648:  je     082093af <+0x66f>
0820938a +0x64a:  movl   $0x13,0x8(%esp)
08209392 +0x652:  movl   $0xa3,0x4(%esp)
0820939a +0x65a:  mov    0xc(%ebp),%eax
0820939d +0x65d:  mov    %eax,(%esp)
082093a0 +0x660:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082093a5 +0x665:  mov    $0x0,%ebx
082093aa +0x66a:  jmp    082099a4 <+0xc64>
082093af +0x66f:  mov    0xc(%ebp),%eax
082093b2 +0x672:  mov    %eax,(%esp)
082093b5 +0x675:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082093ba +0x67a:  movl   $0x1,0x8(%esp)
082093c2 +0x682:  movl   $0x5,0x4(%esp)
082093ca +0x68a:  mov    %eax,(%esp)
082093cd +0x68d:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
082093d2 +0x692:  xor    $0x1,%eax
082093d5 +0x695:  test   %al,%al
082093d7 +0x697:  je     082093fe <+0x6be>
082093d9 +0x699:  movl   $0xcb,0x8(%esp)
082093e1 +0x6a1:  movl   $0xa3,0x4(%esp)
082093e9 +0x6a9:  mov    0xc(%ebp),%eax
082093ec +0x6ac:  mov    %eax,(%esp)
082093ef +0x6af:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082093f4 +0x6b4:  mov    $0x0,%ebx
082093f9 +0x6b9:  jmp    082099a4 <+0xc64>
082093fe +0x6be:  mov    -0xdf(%ebp),%eax
08209404 +0x6c4:  mov    %eax,0x4(%esp)
08209408 +0x6c8:  mov    0xc(%ebp),%eax
0820940b +0x6cb:  mov    %eax,(%esp)
0820940e +0x6ce:  call   0865e994 <_ZNK5CUser17CheckCoolTimeItemEm>  ; CUser::CheckCoolTimeItem(unsigned long) const
08209413 +0x6d3:  test   %al,%al
08209415 +0x6d5:  je     0820943c <+0x6fc>
08209417 +0x6d7:  movl   $0x13,0x8(%esp)
0820941f +0x6df:  movl   $0xa3,0x4(%esp)
08209427 +0x6e7:  mov    0xc(%ebp),%eax
0820942a +0x6ea:  mov    %eax,(%esp)
0820942d +0x6ed:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08209432 +0x6f2:  mov    $0x0,%ebx
08209437 +0x6f7:  jmp    082099a4 <+0xc64>
0820943c +0x6fc:  mov    -0x30(%ebp),%eax
0820943f +0x6ff:  mov    %eax,(%esp)
08209442 +0x702:  call   0822ca48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20f2
08209447 +0x707:  test   %al,%al
08209449 +0x709:  je     082094bb <+0x77b>
0820944b +0x70b:  movzwl -0x60(%ebp),%eax
0820944f +0x70f:  movswl %ax,%ebx
08209452 +0x712:  mov    0xc(%ebp),%eax
08209455 +0x715:  mov    %eax,(%esp)
08209458 +0x718:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0820945d +0x71d:  movl   $0x1,0x14(%esp)
08209465 +0x725:  movl   $0x3,0x10(%esp)
0820946d +0x72d:  movl   $0x1,0xc(%esp)
08209475 +0x735:  mov    %ebx,0x8(%esp)
08209479 +0x739:  movl   $0x1,0x4(%esp)
08209481 +0x741:  mov    %eax,(%esp)
08209484 +0x744:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08209489 +0x749:  xor    $0x1,%eax
0820948c +0x74c:  test   %al,%al
0820948e +0x74e:  je     082094bb <+0x77b>
08209490 +0x750:  movl   $0x0,0xc(%esp)
08209498 +0x758:  movl   $0x0,0x8(%esp)
082094a0 +0x760:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082094a8 +0x768:  movl   $0xa4d3,(%esp)
082094af +0x76f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082094b4 +0x774:  mov    %eax,%ebx
082094b6 +0x776:  jmp    082099a4 <+0xc64>
082094bb +0x77b:  mov    -0xdf(%ebp),%eax
082094c1 +0x781:  mov    -0x30(%ebp),%edx
082094c4 +0x784:  mov    %edx,0x8(%esp)
082094c8 +0x788:  mov    %eax,0x4(%esp)
082094cc +0x78c:  mov    0xc(%ebp),%eax
082094cf +0x78f:  mov    %eax,(%esp)
082094d2 +0x792:  call   0865ea62 <_ZN5CUser22_processContinuousItemEjP14CStackableItem>  ; CUser::_processContinuousItem(unsigned int, CStackableItem*)
082094d7 +0x797:  movzwl -0x60(%ebp),%eax
082094db +0x79b:  cwtl
082094dc +0x79c:  mov    %eax,0xc(%esp)
082094e0 +0x7a0:  movl   $0x0,0x8(%esp)
082094e8 +0x7a8:  movl   $0x1,0x4(%esp)
082094f0 +0x7b0:  mov    0xc(%ebp),%eax
082094f3 +0x7b3:  mov    %eax,(%esp)
082094f6 +0x7b6:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
082094fb +0x7bb:  movl   $0x0,-0x28(%ebp)
08209502 +0x7c2:  movl   $0x0,-0x74(%ebp)
08209509 +0x7c9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08209510 +0x7d0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08209515 +0x7d5:  mov    %eax,-0x24(%ebp)
08209518 +0x7d8:  lea    -0x8c(%ebp),%eax
0820951e +0x7de:  mov    %eax,(%esp)
08209521 +0x7e1:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
08209526 +0x7e6:  movzbl -0x6e(%ebp),%eax
0820952a +0x7ea:  movsbl %al,%ebx
0820952d +0x7ed:  movzbl -0x6d(%ebp),%eax
08209531 +0x7f1:  movsbl %al,%ecx
08209534 +0x7f4:  mov    -0xdf(%ebp),%eax
0820953a +0x7fa:  mov    %eax,%edx
0820953c +0x7fc:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08209541 +0x801:  movl   $0x1,0x30(%esp)
08209549 +0x809:  movl   $0x0,0x2c(%esp)
08209551 +0x811:  mov    %ebx,0x28(%esp)
08209555 +0x815:  mov    %ecx,0x24(%esp)
08209559 +0x819:  lea    -0x8c(%ebp),%ecx
0820955f +0x81f:  mov    %ecx,0x20(%esp)
08209563 +0x823:  lea    -0x6c(%ebp),%ecx
08209566 +0x826:  mov    %ecx,0x1c(%esp)
0820956a +0x82a:  movl   $0x1,0x18(%esp)
08209572 +0x832:  mov    -0x24(%ebp),%ecx
08209575 +0x835:  mov    %ecx,0x14(%esp)
08209579 +0x839:  lea    -0x74(%ebp),%ecx
0820957c +0x83c:  mov    %ecx,0x10(%esp)
08209580 +0x840:  mov    -0x28(%ebp),%ecx
08209583 +0x843:  mov    %ecx,0xc(%esp)
08209587 +0x847:  mov    %edx,0x8(%esp)
0820958b +0x84b:  mov    0xc(%ebp),%edx
0820958e +0x84e:  mov    %edx,0x4(%esp)
08209592 +0x852:  mov    %eax,(%esp)
08209595 +0x855:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
0820959a +0x85a:  test   %al,%al
0820959c +0x85c:  je     08209631 <+0x8f1>
082095a2 +0x862:  mov    -0x74(%ebp),%eax
082095a5 +0x865:  test   %eax,%eax
082095a7 +0x867:  je     082095b3 <+0x873>
082095a9 +0x869:  mov    $0x0,%ebx
082095ae +0x86e:  jmp    08209979 <+0xc39>
082095b3 +0x873:  cmpl   $0x0,-0x28(%ebp)
082095b7 +0x877:  je     082095d9 <+0x899>
082095b9 +0x879:  mov    -0x28(%ebp),%eax
082095bc +0x87c:  mov    %eax,0x4(%esp)
082095c0 +0x880:  mov    0xc(%ebp),%eax
082095c3 +0x883:  mov    %eax,(%esp)
082095c6 +0x886:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
082095cb +0x88b:  xor    $0x1,%eax
082095ce +0x88e:  test   %al,%al
082095d0 +0x890:  je     082095d9 <+0x899>
082095d2 +0x892:  mov    $0x1,%eax
082095d7 +0x897:  jmp    082095de <+0x89e>
082095d9 +0x899:  mov    $0x0,%eax
082095de +0x89e:  test   %al,%al
082095e0 +0x8a0:  je     0820965c <+0x91c>
082095e2 +0x8a2:  mov    -0x28(%ebp),%eax
082095e5 +0x8a5:  mov    %eax,0x4(%esp)
082095e9 +0x8a9:  mov    0xc(%ebp),%eax
082095ec +0x8ac:  mov    %eax,(%esp)
082095ef +0x8af:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
082095f4 +0x8b4:  movl   $0x0,0xc(%esp)
082095fc +0x8bc:  mov    -0x24(%ebp),%eax
082095ff +0x8bf:  mov    %eax,0x8(%esp)
08209603 +0x8c3:  mov    -0x28(%ebp),%eax
08209606 +0x8c6:  mov    %eax,0x4(%esp)
0820960a +0x8ca:  mov    0xc(%ebp),%eax
0820960d +0x8cd:  mov    %eax,(%esp)
08209610 +0x8d0:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08209615 +0x8d5:  mov    -0x28(%ebp),%eax
08209618 +0x8d8:  mov    %eax,0x8(%esp)
0820961c +0x8dc:  movl   $0x1,0x4(%esp)
08209624 +0x8e4:  mov    0xc(%ebp),%eax
08209627 +0x8e7:  mov    %eax,(%esp)
0820962a +0x8ea:  call   0864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>  ; CUser::SendRestrictedGoods(bool, int)
0820962f +0x8ef:  jmp    0820965c <+0x91c>
08209631 +0x8f1:  movl   $0x0,0xc(%esp)
08209639 +0x8f9:  movl   $0x0,0x8(%esp)
08209641 +0x901:  movl   $&_ZZN25Dispatcher_UseBoosterItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209649 +0x909:  movl   $0xa4f6,(%esp)
08209650 +0x910:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209655 +0x915:  mov    %eax,%ebx
08209657 +0x917:  jmp    08209979 <+0xc39>
0820965c +0x91c:  mov    -0xdf(%ebp),%eax
08209662 +0x922:  mov    %eax,0xc(%esp)
08209666 +0x926:  lea    -0x6c(%ebp),%eax
08209669 +0x929:  mov    %eax,0x8(%esp)
0820966d +0x92d:  mov    0xc(%ebp),%eax
08209670 +0x930:  mov    %eax,0x4(%esp)
08209674 +0x934:  mov    0x8(%ebp),%eax
08209677 +0x937:  mov    %eax,(%esp)
0820967a +0x93a:  call   082099bc <_ZN25Dispatcher_UseBoosterItem23_onBoosterItemUseResultEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi>  ; Dispatcher_UseBoosterItem::_onBoosterItemUseResult(CUser*, std::vector<Inven_Item, std::allocator<Inven_Item> >&, int)
0820967f +0x93f:  mov    -0xdf(%ebp),%eax
08209685 +0x945:  mov    %eax,0xc(%esp)
08209689 +0x949:  lea    -0x6c(%ebp),%eax
0820968c +0x94c:  mov    %eax,0x8(%esp)
08209690 +0x950:  mov    0xc(%ebp),%eax
08209693 +0x953:  mov    %eax,0x4(%esp)
08209697 +0x957:  mov    0x8(%ebp),%eax
0820969a +0x95a:  mov    %eax,(%esp)
0820969d +0x95d:  call   08209a5e <_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi>  ; Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne(CUser*, std::vector<Inven_Item, std::allocator<Inven_Item> >&, int)
082096a2 +0x962:  mov    -0xdf(%ebp),%eax
082096a8 +0x968:  cmp    $0x28d1b3,%eax
082096ad +0x96d:  jne    082096c1 <+0x981>
082096af +0x96f:  lea    -0x6c(%ebp),%eax
082096b2 +0x972:  mov    %eax,0x4(%esp)
082096b6 +0x976:  mov    0xc(%ebp),%eax
082096b9 +0x979:  mov    %eax,(%esp)
082096bc +0x97c:  call   0868a782 <_ZN5CUser32SendEventJarOutputItemStatisticsERKSt6vectorI10Inven_ItemSaIS1_EE>  ; CUser::SendEventJarOutputItemStatistics(std::vector<Inven_Item, std::allocator<Inven_Item> > const&)
082096c1 +0x981:  movzwl -0x60(%ebp),%eax
082096c5 +0x985:  movswl %ax,%ebx
082096c8 +0x988:  mov    0xc(%ebp),%eax
082096cb +0x98b:  mov    %eax,(%esp)
082096ce +0x98e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082096d3 +0x993:  lea    -0x168(%ebp),%edx
082096d9 +0x999:  mov    %ebx,0xc(%esp)
082096dd +0x99d:  movl   $0x1,0x8(%esp)
082096e5 +0x9a5:  mov    %eax,0x4(%esp)
082096e9 +0x9a9:  mov    %edx,(%esp)
082096ec +0x9ac:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082096f1 +0x9b1:  sub    $0x4,%esp
082096f4 +0x9b4:  mov    -0x168(%ebp),%eax
082096fa +0x9ba:  mov    %eax,-0xe1(%ebp)
08209700 +0x9c0:  mov    -0x164(%ebp),%eax
08209706 +0x9c6:  mov    %eax,-0xdd(%ebp)
0820970c +0x9cc:  mov    -0x160(%ebp),%eax
08209712 +0x9d2:  mov    %eax,-0xd9(%ebp)
08209718 +0x9d8:  mov    -0x15c(%ebp),%eax
0820971e +0x9de:  mov    %eax,-0xd5(%ebp)
08209724 +0x9e4:  mov    -0x158(%ebp),%eax
0820972a +0x9ea:  mov    %eax,-0xd1(%ebp)
08209730 +0x9f0:  mov    -0x154(%ebp),%eax
08209736 +0x9f6:  mov    %eax,-0xcd(%ebp)
0820973c +0x9fc:  mov    -0x150(%ebp),%eax
08209742 +0xa02:  mov    %eax,-0xc9(%ebp)
08209748 +0xa08:  mov    -0x14c(%ebp),%eax
0820974e +0xa0e:  mov    %eax,-0xc5(%ebp)
08209754 +0xa14:  mov    -0x148(%ebp),%eax
0820975a +0xa1a:  mov    %eax,-0xc1(%ebp)
08209760 +0xa20:  mov    -0x144(%ebp),%eax
08209766 +0xa26:  mov    %eax,-0xbd(%ebp)
0820976c +0xa2c:  mov    -0x140(%ebp),%eax
08209772 +0xa32:  mov    %eax,-0xb9(%ebp)
08209778 +0xa38:  mov    -0x13c(%ebp),%eax
0820977e +0xa3e:  mov    %eax,-0xb5(%ebp)
08209784 +0xa44:  mov    -0x138(%ebp),%eax
0820978a +0xa4a:  mov    %eax,-0xb1(%ebp)
08209790 +0xa50:  mov    -0x134(%ebp),%eax
08209796 +0xa56:  mov    %eax,-0xad(%ebp)
0820979c +0xa5c:  mov    -0x130(%ebp),%eax
082097a2 +0xa62:  mov    %eax,-0xa9(%ebp)
082097a8 +0xa68:  movzbl -0x12c(%ebp),%eax
082097af +0xa6f:  mov    %al,-0xa5(%ebp)
082097b5 +0xa75:  lea    -0x98(%ebp),%eax
082097bb +0xa7b:  mov    %eax,(%esp)
082097be +0xa7e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082097c3 +0xa83:  movl   $0xa3,0x8(%esp)
082097cb +0xa8b:  movl   $0x1,0x4(%esp)
082097d3 +0xa93:  lea    -0x98(%ebp),%eax
082097d9 +0xa99:  mov    %eax,(%esp)
082097dc +0xa9c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082097e1 +0xaa1:  movl   $0x1,0x4(%esp)
082097e9 +0xaa9:  lea    -0x98(%ebp),%eax
082097ef +0xaaf:  mov    %eax,(%esp)
082097f2 +0xab2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082097f7 +0xab7:  movzwl -0x60(%ebp),%eax
082097fb +0xabb:  cwtl
082097fc +0xabc:  mov    %eax,0x4(%esp)
08209800 +0xac0:  lea    -0x98(%ebp),%eax
08209806 +0xac6:  mov    %eax,(%esp)
08209809 +0xac9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0820980e +0xace:  mov    -0xda(%ebp),%eax
08209814 +0xad4:  mov    %eax,0x4(%esp)
08209818 +0xad8:  lea    -0x98(%ebp),%eax
0820981e +0xade:  mov    %eax,(%esp)
08209821 +0xae1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08209826 +0xae6:  lea    -0x6c(%ebp),%eax
08209829 +0xae9:  mov    %eax,(%esp)
0820982c +0xaec:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
08209831 +0xaf1:  mov    %eax,0x4(%esp)
08209835 +0xaf5:  lea    -0x98(%ebp),%eax
0820983b +0xafb:  mov    %eax,(%esp)
0820983e +0xafe:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08209843 +0xb03:  lea    -0x38(%ebp),%eax
08209846 +0xb06:  lea    -0x6c(%ebp),%edx
08209849 +0xb09:  mov    %edx,0x4(%esp)
0820984d +0xb0d:  mov    %eax,(%esp)
08209850 +0xb10:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08209855 +0xb15:  sub    $0x4,%esp
08209858 +0xb18:  lea    -0x38(%ebp),%eax
0820985b +0xb1b:  mov    %eax,0x4(%esp)
0820985f +0xb1f:  lea    -0xa0(%ebp),%eax
08209865 +0xb25:  mov    %eax,(%esp)
08209868 +0xb28:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
0820986d +0xb2d:  lea    -0x34(%ebp),%eax
08209870 +0xb30:  lea    -0x6c(%ebp),%edx
08209873 +0xb33:  mov    %edx,0x4(%esp)
08209877 +0xb37:  mov    %eax,(%esp)
0820987a +0xb3a:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0820987f +0xb3f:  sub    $0x4,%esp
08209882 +0xb42:  lea    -0x34(%ebp),%eax
08209885 +0xb45:  mov    %eax,0x4(%esp)
08209889 +0xb49:  lea    -0xa4(%ebp),%eax
0820988f +0xb4f:  mov    %eax,(%esp)
08209892 +0xb52:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
08209897 +0xb57:  jmp    082098ed <+0xbad>
08209899 +0xb59:  lea    -0xa0(%ebp),%eax
0820989f +0xb5f:  mov    %eax,(%esp)
082098a2 +0xb62:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
082098a7 +0xb67:  mov    0x2(%eax),%eax
082098aa +0xb6a:  mov    %eax,0x4(%esp)
082098ae +0xb6e:  lea    -0x98(%ebp),%eax
082098b4 +0xb74:  mov    %eax,(%esp)
082098b7 +0xb77:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082098bc +0xb7c:  lea    -0xa0(%ebp),%eax
082098c2 +0xb82:  mov    %eax,(%esp)
082098c5 +0xb85:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
082098ca +0xb8a:  mov    0x7(%eax),%eax
082098cd +0xb8d:  mov    %eax,0x4(%esp)
082098d1 +0xb91:  lea    -0x98(%ebp),%eax
082098d7 +0xb97:  mov    %eax,(%esp)
082098da +0xb9a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082098df +0xb9f:  lea    -0xa0(%ebp),%eax
082098e5 +0xba5:  mov    %eax,(%esp)
082098e8 +0xba8:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
082098ed +0xbad:  lea    -0xa4(%ebp),%eax
082098f3 +0xbb3:  mov    %eax,0x4(%esp)
082098f7 +0xbb7:  lea    -0xa0(%ebp),%eax
082098fd +0xbbd:  mov    %eax,(%esp)
08209900 +0xbc0:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
08209905 +0xbc5:  test   %al,%al
08209907 +0xbc7:  jne    08209899 <+0xb59>
08209909 +0xbc9:  movl   $0x1,0x4(%esp)
08209911 +0xbd1:  lea    -0x98(%ebp),%eax
08209917 +0xbd7:  mov    %eax,(%esp)
0820991a +0xbda:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820991f +0xbdf:  lea    -0x98(%ebp),%eax
08209925 +0xbe5:  mov    %eax,0x4(%esp)
08209929 +0xbe9:  mov    0xc(%ebp),%eax
0820992c +0xbec:  mov    %eax,(%esp)
0820992f +0xbef:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08209934 +0xbf4:  mov    $0x0,%ebx
08209939 +0xbf9:  lea    -0x98(%ebp),%eax
0820993f +0xbff:  mov    %eax,(%esp)
08209942 +0xc02:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08209947 +0xc07:  jmp    08209979 <+0xc39>
08209949 +0xc09:  mov    %edx,%ebx
0820994b +0xc0b:  mov    %eax,%esi
0820994d +0xc0d:  lea    -0x98(%ebp),%eax
08209953 +0xc13:  mov    %eax,(%esp)
08209956 +0xc16:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820995b +0xc1b:  mov    %esi,%eax
0820995d +0xc1d:  mov    %ebx,%edx
0820995f +0xc1f:  jmp    08209961 <+0xc21>
08209961 +0xc21:  mov    %edx,%ebx
08209963 +0xc23:  mov    %eax,%esi
08209965 +0xc25:  lea    -0x8c(%ebp),%eax
0820996b +0xc2b:  mov    %eax,(%esp)
0820996e +0xc2e:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08209973 +0xc33:  mov    %esi,%eax
08209975 +0xc35:  mov    %ebx,%edx
08209977 +0xc37:  jmp    08209989 <+0xc49>
08209979 +0xc39:  lea    -0x8c(%ebp),%eax
0820997f +0xc3f:  mov    %eax,(%esp)
08209982 +0xc42:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08209987 +0xc47:  jmp    082099a4 <+0xc64>
08209989 +0xc49:  mov    %edx,%ebx
0820998b +0xc4b:  mov    %eax,%esi
0820998d +0xc4d:  lea    -0x6c(%ebp),%eax
08209990 +0xc50:  mov    %eax,(%esp)
08209993 +0xc53:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08209998 +0xc58:  mov    %esi,%eax
0820999a +0xc5a:  mov    %ebx,%edx
0820999c +0xc5c:  mov    %eax,(%esp)
0820999f +0xc5f:  call   08ae3750 <_Unwind_Resume>
082099a4 +0xc64:  lea    -0x6c(%ebp),%eax
082099a7 +0xc67:  mov    %eax,(%esp)
082099aa +0xc6a:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
082099af +0xc6f:  mov    %ebx,%eax
082099b1 +0xc71:  lea    -0xc(%ebp),%esp
082099b4 +0xc74:  add    $0x0,%esp
082099b7 +0xc77:  pop    %ebx
082099b8 +0xc78:  pop    %esi
082099b9 +0xc79:  pop    %edi
082099ba +0xc7a:  pop    %ebp
082099bb +0xc7b:  ret
```

## 反编译 C

```c
// Dispatcher_UseBoosterItem::dispatch_sig @ 0x8208d40

/* Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseBoosterItem::dispatch_sig
          (Dispatcher_UseBoosterItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this_00;
  int iVar5;
  CDataManager *this_01;
  Arad_GiftItem_Set *this_02;
  undefined4 uVar6;
  CInventory *pCVar7;
  int iVar8;
  undefined1 local_16c [12];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  Inven_Item local_122 [2];
  ulong uStack_120;
  undefined4 local_11b;
  undefined2 local_e5;
  undefined2 uStack_e3;
  undefined2 uStack_e1;
  undefined1 uStack_df;
  int iStack_de;
  undefined1 uStack_da;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined1 local_a9;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_a8 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_a4 [4];
  _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
  local_a0 [4];
  PacketGuard local_9c [12];
  stCeraShopItemParam_t local_90 [24];
  int local_78;
  char local_72;
  char local_71;
  vector<Inven_Item,std::allocator<Inven_Item>> local_70 [12];
  short local_64;
  char local_62 [2];
  map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
  local_60 [4];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  CStackableItem *local_34;
  uint local_30;
  int local_2c;
  long local_28;
  int local_24;
  int local_20;
  
  local_64 = -1;
  cVar1 = PacketBuf::get_short(param_2,&local_64);
  if (cVar1 != '\x01') {
    uVar4 = LineFunc(0xa436,
                     "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar4;
  }
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\0') {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar1 != '\0') goto LAB_08208dbd;
    bVar3 = false;
  }
  else {
LAB_08208dbd:
    bVar3 = true;
  }
  if (bVar3) {
    CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
    return 0;
  }
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    return 0xa43e;
  }
  iVar8 = (int)local_64;
  iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar4 = 1;
  CInventory::GetInvenSlot((int)&local_e5,iVar5);
  iVar5 = CONCAT22(uStack_e1,uStack_e3);
  this_01 = (CDataManager *)G_CDataManager();
  local_34 = (CStackableItem *)CDataManager::find_item(this_01,iVar5);
  if ((local_34 == (CStackableItem *)0x0) ||
     ((iVar5 = (**(code **)(*(int *)local_34 + 0xc))(local_34,iVar5,uVar4,iVar8), iVar5 != 0x10 &&
      (iVar5 = (**(code **)(*(int *)local_34 + 0xc))(local_34), iVar5 != 0x22)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar4 = LineFunc(0xa450,
                     "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar4;
  }
  if ((CONCAT22(uStack_e1,uStack_e3) == 0x28d3c1) || (iVar5 = CUser::get_state(param_1), iVar5 == 3)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
    return 0;
  }
  cVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  cVar1 = CStackableItem::check_change_job_type(local_34,cVar2,cVar1);
  if (cVar1 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0xa3,0x17);
    return 0;
  }
  std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_70);
  local_71 = '\0';
  local_72 = '\0';
                    /* try { // try from 08208f9e to 08209525 has its CatchHandler @ 08209989 */
  iVar5 = (**(code **)(*(int *)local_34 + 0xc))(local_34);
  if (iVar5 == 0x22) {
    cVar1 = PacketBuf::get_byte(param_2,&local_71);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_2,&local_72);
      if (cVar1 == '\x01') {
        Inven_Item::Inven_Item(local_122);
        local_24 = *(int *)(local_34 + 0x26c);
        if (local_24 == 0) {
          std::make_pair<char&,char&>(local_62,&local_71);
          std::
          map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
          ::find(local_a0);
          std::
          map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
          ::end(local_60);
          cVar1 = std::
                  _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
                  ::operator!=(local_a0,(_Rb_tree_const_iterator *)local_60);
          if (cVar1 != '\0') {
            std::
            _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
            ::operator->(local_a0);
            cVar1 = std::
                    vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                    ::empty();
            if (cVar1 != '\0') {
              iVar8 = (int)local_72;
              iVar5 = (int)local_71;
              uVar4 = CItem::get_index((CItem *)local_34);
              cMyTrace::cMyTrace(local_5c,
                                 "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0xa480,5);
              cMyTrace::operator()
                        (local_5c,"selectionBooster empty : %d, category:%d,%d\n",uVar4,iVar5,iVar8)
              ;
              uVar4 = LineFunc(0xa481,
                               "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_082099a4;
            }
            iVar5 = std::
                    _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
                    ::operator->(local_a0);
            local_24 = std::
                       vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                       ::size((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                               *)(iVar5 + 4));
          }
        }
        local_20 = 0;
        while( true ) {
          if ((local_20 < local_24) && (local_20 < 0x14)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) {
            cUserHistoryLog::UseSelectBooster
                      ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(uStack_e1,uStack_e3),
                       (int)local_71,(int)local_72,(vector *)local_70);
            goto LAB_08209276;
          }
          Inven_Item::reset(local_122);
          cVar1 = PacketBuf::get_int(param_2,&uStack_120);
          if (cVar1 != '\x01') break;
          local_11b = 1;
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_70,local_122);
          local_20 = local_20 + 1;
        }
        uVar4 = LineFunc(0xa48c,
                         "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
      else {
        uVar4 = LineFunc(0xa475,
                         "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
    }
    else {
      uVar4 = LineFunc(0xa473,
                       "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
  }
  else {
LAB_08209276:
    this_02 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
    cVar1 = Arad_GiftItem_Set::level_check(this_02,param_1,local_34);
    if (cVar1 == '\x01') {
      local_30 = CSecu_ProtectionField::CheckItem
                           (GlobalData::s_pSecuProtectionField,param_1,0x2a,local_34);
      if (local_30 == 0) {
        iVar5 = CItem::getUsableLevel((CItem *)local_34);
        iVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        if (iVar8 < iVar5) {
          CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
          uVar4 = 0;
        }
        else {
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar1 = CInventory::check_empty_count(pCVar7,5,1);
          if (cVar1 == '\x01') {
            cVar1 = CUser::CheckCoolTimeItem(param_1,CONCAT22(uStack_e1,uStack_e3));
            if (cVar1 == '\0') {
              cVar1 = CStackableItem::IsDeletableItem(local_34);
              if (cVar1 != '\0') {
                iVar5 = (int)local_64;
                pCVar7 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                cVar1 = CInventory::delete_item(pCVar7,1,iVar5,1,3,1);
                if (cVar1 != '\x01') {
                  uVar4 = LineFunc(0xa4d3,
                                   "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  goto LAB_082099a4;
                }
              }
              CUser::_processContinuousItem(param_1,CONCAT22(uStack_e1,uStack_e3),local_34);
              CUser::SendUpdateItem(param_1,1,0,(int)local_64);
              local_2c = 0;
              local_78 = 0;
              local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_90);
                    /* try { // try from 08209595 to 082097c2 has its CatchHandler @ 08209961 */
              cVar1 = WongWork::CCeraShop::ProcessSpecialItem
                                (GlobalData::s_pCeraShop,param_1,CONCAT22(uStack_e1,uStack_e3),
                                 local_2c,&local_78,local_28,true,(vector *)local_70,local_90,
                                 local_71,local_72,false,1);
              if (cVar1 == '\0') {
                uVar4 = LineFunc(0xa4f6,
                                 "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
              else if (local_78 == 0) {
                if ((local_2c == 0) ||
                   (cVar1 = CUser::IsRestrictedGoods(param_1,local_2c), cVar1 == '\x01')) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  CUser::SetRestrictedGoods(param_1,local_2c);
                  WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_2c,local_28,0);
                  CUser::SendRestrictedGoods(param_1,true,local_2c);
                }
                _onBoosterItemUseResult
                          (this,param_1,(vector *)local_70,CONCAT22(uStack_e1,uStack_e3));
                _onBoosterItemUseResult_OnlyOne
                          (this,param_1,(vector *)local_70,CONCAT22(uStack_e1,uStack_e3));
                if (CONCAT22(uStack_e1,uStack_e3) == 0x28d1b3) {
                  CUser::SendEventJarOutputItemStatistics(param_1,(vector *)local_70);
                }
                iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::GetInvenSlot((int)local_16c,iVar5);
                local_e5 = (undefined2)local_16c._0_4_;
                uStack_e3 = SUB42(local_16c._0_4_,2);
                uStack_e1 = (undefined2)local_16c._4_4_;
                uStack_df = SUB41(local_16c._4_4_,2);
                iStack_de._1_3_ = (undefined3)local_16c._8_4_;
                iStack_de = CONCAT31(iStack_de._1_3_,SUB41(local_16c._4_4_,3));
                uStack_da = SUB41(local_16c._8_4_,3);
                local_d9 = local_160;
                local_d5 = local_15c;
                local_d1 = local_158;
                local_cd = local_154;
                local_c9 = local_150;
                local_c5 = local_14c;
                local_c1 = local_148;
                local_bd = local_144;
                local_b9 = local_140;
                local_b5 = local_13c;
                local_b1 = local_138;
                local_ad = local_134;
                local_a9 = local_130;
                PacketGuard::PacketGuard(local_9c);
                    /* try { // try from 082097dc to 08209933 has its CatchHandler @ 08209949 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,1,0xa3);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,1);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,(int)local_64);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,iStack_de);
                iVar5 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_70);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,iVar5);
                std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
                __gnu_cxx::
                __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                ::__normal_iterator<Inven_Item*>(local_a4,local_3c);
                std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
                __gnu_cxx::
                __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                ::__normal_iterator<Inven_Item*>(local_a8,local_38);
                while (bVar3 = __gnu_cxx::operator!=(local_a4,local_a8), bVar3) {
                  iVar5 = __gnu_cxx::
                          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                          ::operator->(local_a4);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,*(int *)(iVar5 + 2));
                  iVar5 = __gnu_cxx::
                          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                          ::operator->(local_a4);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,*(int *)(iVar5 + 7));
                  __gnu_cxx::
                  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator++(local_a4);
                }
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
                CUser::Send(param_1,local_9c);
                uVar4 = 0;
                    /* try { // try from 08209942 to 08209946 has its CatchHandler @ 08209961 */
                PacketGuard::~PacketGuard(local_9c);
              }
              else {
                uVar4 = 0;
              }
                    /* try { // try from 08209982 to 08209986 has its CatchHandler @ 08209989 */
              WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_90);
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xa3,0xcb);
            uVar4 = 0;
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0xa3,local_30 & 0xff);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = CONCAT22(uStack_e1,uStack_e3);
      uVar6 = CUser::get_charac_no(param_1,-1);
      cMyTrace::cMyTrace(local_4c,
                         "virtual int Dispatcher_UseBoosterItem::dispatch_sig(CUser*, PacketBuf&)",
                         0xa49b,0);
      cMyTrace::operator()
                (local_4c,"stackable item level check charac_no[%d], item_id(%d)",uVar6,uVar4);
      CUser::SendCmdErrorPacket(param_1,0xa3,0x13);
      uVar4 = 0;
    }
  }
LAB_082099a4:
  std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_70);
  return uVar4;
}
```
