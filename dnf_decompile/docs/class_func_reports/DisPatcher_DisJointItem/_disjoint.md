# _disjoint

`_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t`

`DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DisJointItem` | `0x081f92ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f92ca  _ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t
#           DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short)
# range [0x081f92ca, 0x081f9fb7]
081f92ca +0x000:  push   %ebp
081f92cb +0x001:  mov    %esp,%ebp
081f92cd +0x003:  push   %edi
081f92ce +0x004:  push   %esi
081f92cf +0x005:  push   %ebx
081f92d0 +0x006:  sub    $0x2bc,%esp
081f92d6 +0x00c:  mov    0x1c(%ebp),%eax
081f92d9 +0x00f:  mov    %ax,-0x26c(%ebp)
081f92e0 +0x016:  mov    0xc(%ebp),%eax
081f92e3 +0x019:  movswl %ax,%edx
081f92e6 +0x01c:  mov    0x10(%ebp),%eax
081f92e9 +0x01f:  movsbl %al,%eax
081f92ec +0x022:  mov    %edx,0xc(%esp)
081f92f0 +0x026:  mov    %eax,0x8(%esp)
081f92f4 +0x02a:  mov    0x14(%ebp),%eax
081f92f7 +0x02d:  mov    %eax,0x4(%esp)
081f92fb +0x031:  mov    0x8(%ebp),%eax
081f92fe +0x034:  mov    %eax,(%esp)
081f9301 +0x037:  call   081f8a7c <_Z30_check_disjointable_user_stateP5CUser14ENUM_CMDPACKETcs>  ; _check_disjointable_user_state(CUser*, ENUM_CMDPACKET, char, short)
081f9306 +0x03c:  xor    $0x1,%eax
081f9309 +0x03f:  test   %al,%al
081f930b +0x041:  je     081f9317 <+0x4d>
081f930d +0x043:  mov    $0x0,%ebx
081f9312 +0x048:  jmp    081f9fab <+0xce1>
081f9317 +0x04d:  lea    -0x70(%ebp),%eax
081f931a +0x050:  mov    %eax,(%esp)
081f931d +0x053:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f9322 +0x058:  mov    0x14(%ebp),%eax
081f9325 +0x05b:  mov    %eax,0x8(%esp)
081f9329 +0x05f:  movl   $0x1,0x4(%esp)
081f9331 +0x067:  lea    -0x70(%ebp),%eax
081f9334 +0x06a:  mov    %eax,(%esp)
081f9337 +0x06d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f933c +0x072:  mov    0x10(%ebp),%eax
081f933f +0x075:  mov    %eax,(%esp)
081f9342 +0x078:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f9347 +0x07d:  mov    %eax,-0x44(%ebp)
081f934a +0x080:  movl   $0x0,-0x40(%ebp)
081f9351 +0x087:  cmpl   $0x0,0x18(%ebp)
081f9355 +0x08b:  je     081f9451 <+0x187>
081f935b +0x091:  mov    0x18(%ebp),%eax
081f935e +0x094:  mov    %eax,(%esp)
081f9361 +0x097:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081f9366 +0x09c:  mov    %eax,-0x40(%ebp)
081f9369 +0x09f:  cmpl   $0x0,-0x40(%ebp)
081f936d +0x0a3:  jne    081f93c7 <+0xfd>
081f936f +0x0a5:  movl   $"expert job null point",0x10(%esp)
081f9377 +0x0ad:  movl   $0x87b7,0xc(%esp)
081f937f +0x0b5:  movl   $&_ZZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_tE19__PRETTY_FUNCTION__,0x8(%esp)
081f9387 +0x0bd:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081f938f +0x0c5:  movl   $0x1,(%esp)
081f9396 +0x0cc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081f939b +0x0d1:  movl   $0x4,(%esp)
081f93a2 +0x0d8:  call   08725800 <__cxa_allocate_exception>
081f93a7 +0x0dd:  mov    %eax,%edx
081f93a9 +0x0df:  movl   $0x13,(%edx)
081f93af +0x0e5:  movl   $0x0,0x8(%esp)
081f93b7 +0x0ed:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f93bf +0x0f5:  mov    %eax,(%esp)
081f93c2 +0x0f8:  call   08724c50 <__cxa_throw>
081f93c7 +0x0fd:  mov    -0x40(%ebp),%eax
081f93ca +0x100:  mov    %eax,(%esp)
081f93cd +0x103:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
081f93d2 +0x108:  cmp    $0x3,%eax
081f93d5 +0x10b:  setne  %al
081f93d8 +0x10e:  test   %al,%al
081f93da +0x110:  je     081f9434 <+0x16a>
081f93dc +0x112:  movl   $"expert job permission error",0x10(%esp)
081f93e4 +0x11a:  movl   $0x87bd,0xc(%esp)
081f93ec +0x122:  movl   $&_ZZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_tE19__PRETTY_FUNCTION__,0x8(%esp)
081f93f4 +0x12a:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081f93fc +0x132:  movl   $0x1,(%esp)
081f9403 +0x139:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081f9408 +0x13e:  movl   $0x4,(%esp)
081f940f +0x145:  call   08725800 <__cxa_allocate_exception>
081f9414 +0x14a:  mov    %eax,%edx
081f9416 +0x14c:  movl   $0x13,(%edx)
081f941c +0x152:  movl   $0x0,0x8(%esp)
081f9424 +0x15a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f942c +0x162:  mov    %eax,(%esp)
081f942f +0x165:  call   08724c50 <__cxa_throw>
081f9434 +0x16a:  mov    -0x40(%ebp),%eax
081f9437 +0x16d:  mov    (%eax),%eax
081f9439 +0x16f:  mov    (%eax),%edx
081f943b +0x171:  mov    0x8(%ebp),%eax
081f943e +0x174:  mov    %eax,0x8(%esp)
081f9442 +0x178:  mov    0x18(%ebp),%eax
081f9445 +0x17b:  mov    %eax,0x4(%esp)
081f9449 +0x17f:  mov    -0x40(%ebp),%eax
081f944c +0x182:  mov    %eax,(%esp)
081f944f +0x185:  call   *%edx
081f9451 +0x187:  mov    0xc(%ebp),%eax
081f9454 +0x18a:  mov    %eax,0x8(%esp)
081f9458 +0x18e:  mov    -0x44(%ebp),%eax
081f945b +0x191:  mov    %eax,0x4(%esp)
081f945f +0x195:  mov    0x8(%ebp),%eax
081f9462 +0x198:  mov    %eax,(%esp)
081f9465 +0x19b:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081f946a +0x1a0:  test   %al,%al
081f946c +0x1a2:  je     081f949a <+0x1d0>
081f946e +0x1a4:  movl   $0x4,(%esp)
081f9475 +0x1ab:  call   08725800 <__cxa_allocate_exception>
081f947a +0x1b0:  mov    %eax,%edx
081f947c +0x1b2:  movl   $0xd5,(%edx)
081f9482 +0x1b8:  movl   $0x0,0x8(%esp)
081f948a +0x1c0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f9492 +0x1c8:  mov    %eax,(%esp)
081f9495 +0x1cb:  call   08724c50 <__cxa_throw>
081f949a +0x1d0:  lea    -0xf9(%ebp),%eax
081f94a0 +0x1d6:  mov    %eax,(%esp)
081f94a3 +0x1d9:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081f94a8 +0x1de:  movl   $0x0,-0x74(%ebp)
081f94af +0x1e5:  cmpw   $0xffff,-0x26c(%ebp)
081f94b7 +0x1ed:  je     081f94f6 <+0x22c>
081f94b9 +0x1ef:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f94be +0x1f4:  mov    %eax,(%esp)
081f94c1 +0x1f7:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081f94c6 +0x1fc:  test   %al,%al
081f94c8 +0x1fe:  je     081f94f6 <+0x22c>
081f94ca +0x200:  movl   $0x4,(%esp)
081f94d1 +0x207:  call   08725800 <__cxa_allocate_exception>
081f94d6 +0x20c:  mov    %eax,%edx
081f94d8 +0x20e:  movl   $0x60,(%edx)
081f94de +0x214:  movl   $0x0,0x8(%esp)
081f94e6 +0x21c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f94ee +0x224:  mov    %eax,(%esp)
081f94f1 +0x227:  call   08724c50 <__cxa_throw>
081f94f6 +0x22c:  movzwl -0x26c(%ebp),%eax
081f94fd +0x233:  mov    %eax,0x18(%esp)
081f9501 +0x237:  mov    0x18(%ebp),%eax
081f9504 +0x23a:  mov    %eax,0x14(%esp)
081f9508 +0x23e:  lea    -0x74(%ebp),%eax
081f950b +0x241:  mov    %eax,0x10(%esp)
081f950f +0x245:  lea    -0xf9(%ebp),%eax
081f9515 +0x24b:  mov    %eax,0xc(%esp)
081f9519 +0x24f:  mov    -0x44(%ebp),%eax
081f951c +0x252:  mov    %eax,0x8(%esp)
081f9520 +0x256:  mov    0xc(%ebp),%eax
081f9523 +0x259:  mov    %eax,0x4(%esp)
081f9527 +0x25d:  mov    0x8(%ebp),%eax
081f952a +0x260:  mov    %eax,(%esp)
081f952d +0x263:  call   081f8ba1 <_Z30_check_disjointable_item_stateP5CUseriiR10Inven_ItemPP5CItemS0_t>  ; _check_disjointable_item_state(CUser*, int, int, Inven_Item&, CItem**, CUser*, unsigned short)
081f9532 +0x268:  mov    -0x74(%ebp),%eax
081f9535 +0x26b:  mov    -0x40(%ebp),%edx
081f9538 +0x26e:  mov    %edx,0xc(%esp)
081f953c +0x272:  lea    -0xf9(%ebp),%edx
081f9542 +0x278:  mov    %edx,0x8(%esp)
081f9546 +0x27c:  mov    %eax,0x4(%esp)
081f954a +0x280:  mov    0x8(%ebp),%eax
081f954d +0x283:  mov    %eax,(%esp)
081f9550 +0x286:  call   081f8fe3 <_Z25_check_disjoint_need_slotP5CUserP5CItemR10Inven_ItemPN10expert_job11CDisjointerE>  ; _check_disjoint_need_slot(CUser*, CItem*, Inven_Item&, expert_job::CDisjointer*)
081f9555 +0x28b:  lea    -0xbc(%ebp),%eax
081f955b +0x291:  mov    %eax,(%esp)
081f955e +0x294:  call   082347a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e4c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e4c
081f9563 +0x299:  movl   $0x0,-0x3c(%ebp)
081f956a +0x2a0:  cmpl   $0x0,0x18(%ebp)
081f956e +0x2a4:  je     081f95a2 <+0x2d8>
081f9570 +0x2a6:  mov    -0x74(%ebp),%eax
081f9573 +0x2a9:  mov    0x8(%ebp),%edx
081f9576 +0x2ac:  mov    %edx,0x10(%esp)
081f957a +0x2b0:  lea    -0xbc(%ebp),%edx
081f9580 +0x2b6:  mov    %edx,0xc(%esp)
081f9584 +0x2ba:  lea    -0xf9(%ebp),%edx
081f958a +0x2c0:  mov    %edx,0x8(%esp)
081f958e +0x2c4:  mov    %eax,0x4(%esp)
081f9592 +0x2c8:  mov    -0x40(%ebp),%eax
081f9595 +0x2cb:  mov    %eax,(%esp)
081f9598 +0x2ce:  call   082347ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e96>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e96
081f959d +0x2d3:  mov    %eax,-0x3c(%ebp)
081f95a0 +0x2d6:  jmp    081f95cb <+0x301>
081f95a2 +0x2d8:  mov    -0xf7(%ebp),%eax
081f95a8 +0x2de:  mov    %eax,%ebx
081f95aa +0x2e0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f95af +0x2e5:  mov    0x1c(%eax),%eax
081f95b2 +0x2e8:  lea    -0xbc(%ebp),%edx
081f95b8 +0x2ee:  mov    %edx,0x8(%esp)
081f95bc +0x2f2:  mov    %ebx,0x4(%esp)
081f95c0 +0x2f6:  mov    %eax,(%esp)
081f95c3 +0x2f9:  call   084733f6 <_ZN8DisJoint9GetResultEiR14DisJointResult>  ; DisJoint::GetResult(int, DisJointResult&)
081f95c8 +0x2fe:  mov    %eax,-0x3c(%ebp)
081f95cb +0x301:  mov    -0x3c(%ebp),%eax
081f95ce +0x304:  test   %eax,%eax
081f95d0 +0x306:  jle    081f95fd <+0x333>
081f95d2 +0x308:  movl   $0x4,(%esp)
081f95d9 +0x30f:  call   08725800 <__cxa_allocate_exception>
081f95de +0x314:  mov    %eax,%edx
081f95e0 +0x316:  mov    -0x3c(%ebp),%ecx
081f95e3 +0x319:  mov    %ecx,(%edx)
081f95e5 +0x31b:  movl   $0x0,0x8(%esp)
081f95ed +0x323:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f95f5 +0x32b:  mov    %eax,(%esp)
081f95f8 +0x32e:  call   08724c50 <__cxa_throw>
081f95fd +0x333:  cmpw   $0xffff,-0x26c(%ebp)
081f9605 +0x33b:  je     081f9694 <+0x3ca>
081f960b +0x341:  movzwl -0x26c(%ebp),%ebx
081f9612 +0x348:  mov    0x8(%ebp),%eax
081f9615 +0x34b:  mov    %eax,(%esp)
081f9618 +0x34e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081f961d +0x353:  movl   $0x1,0xc(%esp)
081f9625 +0x35b:  movl   $0x1,0x8(%esp)
081f962d +0x363:  mov    %ebx,0x4(%esp)
081f9631 +0x367:  mov    %eax,(%esp)
081f9634 +0x36a:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
081f9639 +0x36f:  test   %eax,%eax
081f963b +0x371:  setne  %al
081f963e +0x374:  test   %al,%al
081f9640 +0x376:  je     081f966e <+0x3a4>
081f9642 +0x378:  movl   $0x4,(%esp)
081f9649 +0x37f:  call   08725800 <__cxa_allocate_exception>
081f964e +0x384:  mov    %eax,%edx
081f9650 +0x386:  movl   $0x16,(%edx)
081f9656 +0x38c:  movl   $0x0,0x8(%esp)
081f965e +0x394:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f9666 +0x39c:  mov    %eax,(%esp)
081f9669 +0x39f:  call   08724c50 <__cxa_throw>
081f966e +0x3a4:  movzwl -0x26c(%ebp),%eax
081f9675 +0x3ab:  mov    %eax,0xc(%esp)
081f9679 +0x3af:  movl   $0x0,0x8(%esp)
081f9681 +0x3b7:  movl   $0x1,0x4(%esp)
081f9689 +0x3bf:  mov    0x8(%ebp),%eax
081f968c +0x3c2:  mov    %eax,(%esp)
081f968f +0x3c5:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081f9694 +0x3ca:  movl   $0x0,-0x88(%ebp)
081f969e +0x3d4:  movl   $0x0,-0x84(%ebp)
081f96a8 +0x3de:  movl   $0x0,-0x80(%ebp)
081f96af +0x3e5:  movl   $0x0,-0x7c(%ebp)
081f96b6 +0x3ec:  movl   $0x0,-0x78(%ebp)
081f96bd +0x3f3:  lea    -0x267(%ebp),%eax
081f96c3 +0x3f9:  mov    %eax,%ebx
081f96c5 +0x3fb:  mov    $0x4,%esi
081f96ca +0x400:  jmp    081f96da <+0x410>
081f96cc +0x402:  mov    %ebx,(%esp)
081f96cf +0x405:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081f96d4 +0x40a:  add    $0x3d,%ebx
081f96d7 +0x40d:  sub    $0x1,%esi
081f96da +0x410:  cmp    $0xffffffff,%esi
081f96dd +0x413:  setne  %al
081f96e0 +0x416:  test   %al,%al
081f96e2 +0x418:  jne    081f96cc <+0x402>
081f96e4 +0x41a:  movl   $0x0,-0x2c(%ebp)
081f96eb +0x421:  jmp    081f988c <+0x5c2>
081f96f0 +0x426:  mov    -0x2c(%ebp),%eax
081f96f3 +0x429:  add    $0x4,%eax
081f96f6 +0x42c:  mov    -0xb8(%ebp,%eax,4),%eax
081f96fd +0x433:  test   %eax,%eax
081f96ff +0x435:  je     081f9884 <+0x5ba>
081f9705 +0x43b:  mov    -0x2c(%ebp),%ebx
081f9708 +0x43e:  mov    -0x2c(%ebp),%eax
081f970b +0x441:  add    $0x4,%eax
081f970e +0x444:  mov    -0xb8(%ebp,%eax,4),%esi
081f9715 +0x44b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f971a +0x450:  mov    %esi,0x4(%esp)
081f971e +0x454:  mov    %eax,(%esp)
081f9721 +0x457:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081f9726 +0x45c:  mov    %eax,-0x88(%ebp,%ebx,4)
081f972d +0x463:  mov    -0x2c(%ebp),%eax
081f9730 +0x466:  mov    -0x88(%ebp,%eax,4),%eax
081f9737 +0x46d:  test   %eax,%eax
081f9739 +0x46f:  je     081f9887 <+0x5bd>
081f973f +0x475:  mov    -0x2c(%ebp),%edx
081f9742 +0x478:  mov    -0x2c(%ebp),%eax
081f9745 +0x47b:  add    $0x4,%eax
081f9748 +0x47e:  mov    -0xb8(%ebp,%eax,4),%eax
081f974f +0x485:  imul   $0x3d,%edx,%edx
081f9752 +0x488:  lea    -0x18(%ebp),%ecx
081f9755 +0x48b:  lea    (%ecx,%edx,1),%edx
081f9758 +0x48e:  sub    $0x24f,%edx
081f975e +0x494:  mov    %eax,0x2(%edx)
081f9761 +0x497:  mov    -0x2c(%ebp),%eax
081f9764 +0x49a:  mov    -0xbc(%ebp,%eax,4),%eax
081f976b +0x4a1:  mov    -0x2c(%ebp),%edx
081f976e +0x4a4:  lea    -0x267(%ebp),%ecx
081f9774 +0x4aa:  imul   $0x3d,%edx,%edx
081f9777 +0x4ad:  lea    (%ecx,%edx,1),%edx
081f977a +0x4b0:  mov    %eax,0x4(%esp)
081f977e +0x4b4:  mov    %edx,(%esp)
081f9781 +0x4b7:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
081f9786 +0x4bc:  mov    -0x2c(%ebp),%eax
081f9789 +0x4bf:  mov    -0x88(%ebp,%eax,4),%eax
081f9790 +0x4c6:  mov    (%eax),%eax
081f9792 +0x4c8:  add    $0x8,%eax
081f9795 +0x4cb:  mov    (%eax),%edx
081f9797 +0x4cd:  mov    -0x2c(%ebp),%eax
081f979a +0x4d0:  lea    -0x267(%ebp),%ecx
081f97a0 +0x4d6:  imul   $0x3d,%eax,%eax
081f97a3 +0x4d9:  add    %eax,%ecx
081f97a5 +0x4db:  mov    -0x2c(%ebp),%eax
081f97a8 +0x4de:  mov    -0x88(%ebp,%eax,4),%eax
081f97af +0x4e5:  mov    %ecx,0x4(%esp)
081f97b3 +0x4e9:  mov    %eax,(%esp)
081f97b6 +0x4ec:  call   *%edx
081f97b8 +0x4ee:  mov    -0x2c(%ebp),%ebx
081f97bb +0x4f1:  mov    0x8(%ebp),%eax
081f97be +0x4f4:  mov    %eax,(%esp)
081f97c1 +0x4f7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f97c6 +0x4fc:  mov    %eax,%edx
081f97c8 +0x4fe:  imul   $0x3d,%ebx,%eax
081f97cb +0x501:  lea    -0x18(%ebp),%ecx
081f97ce +0x504:  lea    (%ecx,%eax,1),%eax
081f97d1 +0x507:  sub    $0x24f,%eax
081f97d6 +0x50c:  mov    (%eax),%ecx
081f97d8 +0x50e:  mov    %ecx,0x4(%esp)
081f97dc +0x512:  mov    0x4(%eax),%ecx
081f97df +0x515:  mov    %ecx,0x8(%esp)
081f97e3 +0x519:  mov    0x8(%eax),%ecx
081f97e6 +0x51c:  mov    %ecx,0xc(%esp)
081f97ea +0x520:  mov    0xc(%eax),%ecx
081f97ed +0x523:  mov    %ecx,0x10(%esp)
081f97f1 +0x527:  mov    0x10(%eax),%ecx
081f97f4 +0x52a:  mov    %ecx,0x14(%esp)
081f97f8 +0x52e:  mov    0x14(%eax),%ecx
081f97fb +0x531:  mov    %ecx,0x18(%esp)
081f97ff +0x535:  mov    0x18(%eax),%ecx
081f9802 +0x538:  mov    %ecx,0x1c(%esp)
081f9806 +0x53c:  mov    0x1c(%eax),%ecx
081f9809 +0x53f:  mov    %ecx,0x20(%esp)
081f980d +0x543:  mov    0x20(%eax),%ecx
081f9810 +0x546:  mov    %ecx,0x24(%esp)
081f9814 +0x54a:  mov    0x24(%eax),%ecx
081f9817 +0x54d:  mov    %ecx,0x28(%esp)
081f981b +0x551:  mov    0x28(%eax),%ecx
081f981e +0x554:  mov    %ecx,0x2c(%esp)
081f9822 +0x558:  mov    0x2c(%eax),%ecx
081f9825 +0x55b:  mov    %ecx,0x30(%esp)
081f9829 +0x55f:  mov    0x30(%eax),%ecx
081f982c +0x562:  mov    %ecx,0x34(%esp)
081f9830 +0x566:  mov    0x34(%eax),%ecx
081f9833 +0x569:  mov    %ecx,0x38(%esp)
081f9837 +0x56d:  mov    0x38(%eax),%ecx
081f983a +0x570:  mov    %ecx,0x3c(%esp)
081f983e +0x574:  movzbl 0x3c(%eax),%eax
081f9842 +0x578:  mov    %al,0x40(%esp)
081f9846 +0x57c:  mov    %edx,(%esp)
081f9849 +0x57f:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
081f984e +0x584:  cmp    $0xffffffff,%eax
081f9851 +0x587:  sete   %al
081f9854 +0x58a:  test   %al,%al
081f9856 +0x58c:  je     081f9888 <+0x5be>
081f9858 +0x58e:  movl   $0x4,(%esp)
081f985f +0x595:  call   08725800 <__cxa_allocate_exception>
081f9864 +0x59a:  mov    %eax,%edx
081f9866 +0x59c:  movl   $0x4,(%edx)
081f986c +0x5a2:  movl   $0x0,0x8(%esp)
081f9874 +0x5aa:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f987c +0x5b2:  mov    %eax,(%esp)
081f987f +0x5b5:  call   08724c50 <__cxa_throw>
081f9884 +0x5ba:  nop
081f9885 +0x5bb:  jmp    081f9888 <+0x5be>
081f9887 +0x5bd:  nop
081f9888 +0x5be:  addl   $0x1,-0x2c(%ebp)
081f988c +0x5c2:  cmpl   $0x4,-0x2c(%ebp)
081f9890 +0x5c6:  setle  %al
081f9893 +0x5c9:  test   %al,%al
081f9895 +0x5cb:  jne    081f96f0 <+0x426>
081f989b +0x5d1:  mov    -0x44(%ebp),%ebx
081f989e +0x5d4:  mov    0x8(%ebp),%eax
081f98a1 +0x5d7:  mov    %eax,(%esp)
081f98a4 +0x5da:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081f98a9 +0x5df:  movl   $0x1,0x14(%esp)
081f98b1 +0x5e7:  movl   $0x9,0x10(%esp)
081f98b9 +0x5ef:  movl   $0x1,0xc(%esp)
081f98c1 +0x5f7:  mov    0xc(%ebp),%edx
081f98c4 +0x5fa:  mov    %edx,0x8(%esp)
081f98c8 +0x5fe:  mov    %ebx,0x4(%esp)
081f98cc +0x602:  mov    %eax,(%esp)
081f98cf +0x605:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081f98d4 +0x60a:  mov    %al,-0x35(%ebp)
081f98d7 +0x60d:  movzbl -0x35(%ebp),%eax
081f98db +0x611:  xor    $0x1,%eax
081f98de +0x614:  test   %al,%al
081f98e0 +0x616:  je     081f990d <+0x643>
081f98e2 +0x618:  movl   $0x4,(%esp)
081f98e9 +0x61f:  call   08725800 <__cxa_allocate_exception>
081f98ee +0x624:  mov    %eax,%edx
081f98f0 +0x626:  mov    -0x3c(%ebp),%ecx
081f98f3 +0x629:  mov    %ecx,(%edx)
081f98f5 +0x62b:  movl   $0x0,0x8(%esp)
081f98fd +0x633:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081f9905 +0x63b:  mov    %eax,(%esp)
081f9908 +0x63e:  call   08724c50 <__cxa_throw>
081f990d +0x643:  movl   $0x0,-0x8c(%ebp)
081f9917 +0x64d:  mov    -0xf2(%ebp),%eax
081f991d +0x653:  movswl %ax,%esi
081f9920 +0x656:  mov    -0x74(%ebp),%ebx
081f9923 +0x659:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
081f9928 +0x65e:  lea    -0x8c(%ebp),%edx
081f992e +0x664:  mov    %edx,0x14(%esp)
081f9932 +0x668:  movl   $0x0,0x10(%esp)
081f993a +0x670:  mov    %esi,0xc(%esp)
081f993e +0x674:  mov    %ebx,0x8(%esp)
081f9942 +0x678:  lea    -0xf9(%ebp),%edx
081f9948 +0x67e:  mov    %edx,0x4(%esp)
081f994c +0x682:  mov    %eax,(%esp)
081f994f +0x685:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
081f9954 +0x68a:  mov    -0x8c(%ebp),%eax
081f995a +0x690:  mov    %eax,%ebx
081f995c +0x692:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
081f9961 +0x697:  mov    %ebx,0xc(%esp)
081f9965 +0x69b:  mov    0x8(%ebp),%edx
081f9968 +0x69e:  mov    %edx,0x8(%esp)
081f996c +0x6a2:  movl   $0x13,0x4(%esp)
081f9974 +0x6aa:  mov    %eax,(%esp)
081f9977 +0x6ad:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
081f997c +0x6b2:  cmpl   $0x0,0x18(%ebp)
081f9980 +0x6b6:  jne    081f99aa <+0x6e0>
081f9982 +0x6b8:  movl   $0x0,0xc(%esp)
081f998a +0x6c0:  movl   $0x0,0x8(%esp)
081f9992 +0x6c8:  movl   $0x7,0x4(%esp)
081f999a +0x6d0:  mov    0x8(%ebp),%eax
081f999d +0x6d3:  mov    %eax,(%esp)
081f99a0 +0x6d6:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081f99a5 +0x6db:  jmp    081f9a2f <+0x765>
081f99aa +0x6e0:  cmpl   $0x0,0x18(%ebp)
081f99ae +0x6e4:  je     081f9a2f <+0x765>
081f99b0 +0x6e6:  cmpl   $0x0,0x8(%ebp)
081f99b4 +0x6ea:  je     081f9a2f <+0x765>
081f99b6 +0x6ec:  movl   $0xffffffff,0x4(%esp)
081f99be +0x6f4:  mov    0x8(%ebp),%eax
081f99c1 +0x6f7:  mov    %eax,(%esp)
081f99c4 +0x6fa:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081f99c9 +0x6ff:  mov    %eax,%ebx
081f99cb +0x701:  movl   $0xffffffff,0x4(%esp)
081f99d3 +0x709:  mov    0x18(%ebp),%eax
081f99d6 +0x70c:  mov    %eax,(%esp)
081f99d9 +0x70f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081f99de +0x714:  cmp    %eax,%ebx
081f99e0 +0x716:  sete   %al
081f99e3 +0x719:  test   %al,%al
081f99e5 +0x71b:  je     081f9a0c <+0x742>
081f99e7 +0x71d:  movl   $0x0,0xc(%esp)
081f99ef +0x725:  movl   $0x0,0x8(%esp)
081f99f7 +0x72d:  movl   $0x20,0x4(%esp)
081f99ff +0x735:  mov    0x8(%ebp),%eax
081f9a02 +0x738:  mov    %eax,(%esp)
081f9a05 +0x73b:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081f9a0a +0x740:  jmp    081f9a2f <+0x765>
081f9a0c +0x742:  movl   $0x0,0xc(%esp)
081f9a14 +0x74a:  movl   $0x0,0x8(%esp)
081f9a1c +0x752:  movl   $0x2d,0x4(%esp)
081f9a24 +0x75a:  mov    0x18(%ebp),%eax
081f9a27 +0x75d:  mov    %eax,(%esp)
081f9a2a +0x760:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081f9a2f +0x765:  lea    -0x136(%ebp),%eax
081f9a35 +0x76b:  mov    %eax,(%esp)
081f9a38 +0x76e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081f9a3d +0x773:  movl   $0x1,0x4(%esp)
081f9a45 +0x77b:  lea    -0x70(%ebp),%eax
081f9a48 +0x77e:  mov    %eax,(%esp)
081f9a4b +0x781:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f9a50 +0x786:  mov    0xc(%ebp),%eax
081f9a53 +0x789:  mov    %eax,0x4(%esp)
081f9a57 +0x78d:  lea    -0x70(%ebp),%eax
081f9a5a +0x790:  mov    %eax,(%esp)
081f9a5d +0x793:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f9a62 +0x798:  mov    0x10(%ebp),%eax
081f9a65 +0x79b:  mov    %eax,0x4(%esp)
081f9a69 +0x79f:  lea    -0x70(%ebp),%eax
081f9a6c +0x7a2:  mov    %eax,(%esp)
081f9a6f +0x7a5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f9a74 +0x7aa:  lea    -0x70(%ebp),%eax
081f9a77 +0x7ad:  mov    %eax,(%esp)
081f9a7a +0x7b0:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
081f9a7f +0x7b5:  mov    %eax,-0x90(%ebp)
081f9a85 +0x7bb:  movl   $0x0,0x4(%esp)
081f9a8d +0x7c3:  lea    -0x70(%ebp),%eax
081f9a90 +0x7c6:  mov    %eax,(%esp)
081f9a93 +0x7c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f9a98 +0x7ce:  movl   $0x0,-0x30(%ebp)
081f9a9f +0x7d5:  movl   $0x0,-0x28(%ebp)
081f9aa6 +0x7dc:  jmp    081f9e77 <+0xbad>
081f9aab +0x7e1:  mov    -0x28(%ebp),%eax
081f9aae +0x7e4:  mov    -0x88(%ebp,%eax,4),%eax
081f9ab5 +0x7eb:  test   %eax,%eax
081f9ab7 +0x7ed:  je     081f9e6f <+0xba5>
081f9abd +0x7f3:  mov    -0x28(%ebp),%eax
081f9ac0 +0x7f6:  mov    -0x88(%ebp,%eax,4),%eax
081f9ac7 +0x7fd:  mov    %eax,(%esp)
081f9aca +0x800:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081f9acf +0x805:  test   %al,%al
081f9ad1 +0x807:  je     081f9b65 <+0x89b>
081f9ad7 +0x80d:  mov    -0x28(%ebp),%eax
081f9ada +0x810:  lea    -0x267(%ebp),%edx
081f9ae0 +0x816:  imul   $0x3d,%eax,%eax
081f9ae3 +0x819:  lea    (%edx,%eax,1),%eax
081f9ae6 +0x81c:  mov    %eax,(%esp)
081f9ae9 +0x81f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081f9aee +0x824:  cmp    $0x3e7,%eax
081f9af3 +0x829:  setg   %al
081f9af6 +0x82c:  test   %al,%al
081f9af8 +0x82e:  je     081f9b65 <+0x89b>
081f9afa +0x830:  mov    -0x28(%ebp),%eax
081f9afd +0x833:  lea    -0x267(%ebp),%edx
081f9b03 +0x839:  imul   $0x3d,%eax,%eax
081f9b06 +0x83c:  lea    (%edx,%eax,1),%eax
081f9b09 +0x83f:  mov    %eax,(%esp)
081f9b0c +0x842:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081f9b11 +0x847:  mov    %eax,%ebx
081f9b13 +0x849:  mov    -0x28(%ebp),%eax
081f9b16 +0x84c:  imul   $0x3d,%eax,%eax
081f9b19 +0x84f:  lea    -0x18(%ebp),%edx
081f9b1c +0x852:  lea    (%edx,%eax,1),%eax
081f9b1f +0x855:  sub    $0x24f,%eax
081f9b24 +0x85a:  mov    0x2(%eax),%esi
081f9b27 +0x85d:  movl   $0x5,0xc(%esp)
081f9b2f +0x865:  movl   $0x8867,0x8(%esp)
081f9b37 +0x86d:  movl   $&_ZZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_tE19__PRETTY_FUNCTION__,0x4(%esp)
081f9b3f +0x875:  lea    -0x64(%ebp),%eax
081f9b42 +0x878:  mov    %eax,(%esp)
081f9b45 +0x87b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081f9b4a +0x880:  mov    %ebx,0xc(%esp)
081f9b4e +0x884:  mov    %esi,0x8(%esp)
081f9b52 +0x888:  movl   $"DisPatcher_DisJointItem::dispatch_sig, out_item , ITEM #%d, %d",0x4(%esp)
081f9b5a +0x890:  lea    -0x64(%ebp),%eax
081f9b5d +0x893:  mov    %eax,(%esp)
081f9b60 +0x896:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081f9b65 +0x89b:  mov    -0x28(%ebp),%ebx
081f9b68 +0x89e:  mov    0x8(%ebp),%eax
081f9b6b +0x8a1:  mov    %eax,(%esp)
081f9b6e +0x8a4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081f9b73 +0x8a9:  mov    %eax,%edx
081f9b75 +0x8ab:  movl   $0x0,0x4c(%esp)
081f9b7d +0x8b3:  movl   $0x1,0x48(%esp)
081f9b85 +0x8bb:  movl   $0xa,0x44(%esp)
081f9b8d +0x8c3:  imul   $0x3d,%ebx,%eax
081f9b90 +0x8c6:  lea    -0x18(%ebp),%ecx
081f9b93 +0x8c9:  lea    (%ecx,%eax,1),%eax
081f9b96 +0x8cc:  sub    $0x24f,%eax
081f9b9b +0x8d1:  mov    (%eax),%ecx
081f9b9d +0x8d3:  mov    %ecx,0x4(%esp)
081f9ba1 +0x8d7:  mov    0x4(%eax),%ecx
081f9ba4 +0x8da:  mov    %ecx,0x8(%esp)
081f9ba8 +0x8de:  mov    0x8(%eax),%ecx
081f9bab +0x8e1:  mov    %ecx,0xc(%esp)
081f9baf +0x8e5:  mov    0xc(%eax),%ecx
081f9bb2 +0x8e8:  mov    %ecx,0x10(%esp)
081f9bb6 +0x8ec:  mov    0x10(%eax),%ecx
081f9bb9 +0x8ef:  mov    %ecx,0x14(%esp)
081f9bbd +0x8f3:  mov    0x14(%eax),%ecx
081f9bc0 +0x8f6:  mov    %ecx,0x18(%esp)
081f9bc4 +0x8fa:  mov    0x18(%eax),%ecx
081f9bc7 +0x8fd:  mov    %ecx,0x1c(%esp)
081f9bcb +0x901:  mov    0x1c(%eax),%ecx
081f9bce +0x904:  mov    %ecx,0x20(%esp)
081f9bd2 +0x908:  mov    0x20(%eax),%ecx
081f9bd5 +0x90b:  mov    %ecx,0x24(%esp)
081f9bd9 +0x90f:  mov    0x24(%eax),%ecx
081f9bdc +0x912:  mov    %ecx,0x28(%esp)
081f9be0 +0x916:  mov    0x28(%eax),%ecx
081f9be3 +0x919:  mov    %ecx,0x2c(%esp)
081f9be7 +0x91d:  mov    0x2c(%eax),%ecx
081f9bea +0x920:  mov    %ecx,0x30(%esp)
081f9bee +0x924:  mov    0x30(%eax),%ecx
081f9bf1 +0x927:  mov    %ecx,0x34(%esp)
081f9bf5 +0x92b:  mov    0x34(%eax),%ecx
081f9bf8 +0x92e:  mov    %ecx,0x38(%esp)
081f9bfc +0x932:  mov    0x38(%eax),%ecx
081f9bff +0x935:  mov    %ecx,0x3c(%esp)
081f9c03 +0x939:  movzbl 0x3c(%eax),%eax
081f9c07 +0x93d:  mov    %al,0x40(%esp)
081f9c0b +0x941:  mov    %edx,(%esp)
081f9c0e +0x944:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081f9c13 +0x949:  mov    %eax,-0x34(%ebp)
081f9c16 +0x94c:  cmpl   $0x0,-0x34(%ebp)
081f9c1a +0x950:  js     081f9e72 <+0xba8>
081f9c20 +0x956:  mov    0x8(%ebp),%eax
081f9c23 +0x959:  mov    %eax,(%esp)
081f9c26 +0x95c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f9c2b +0x961:  mov    -0x34(%ebp),%edx
081f9c2e +0x964:  mov    %edx,0x8(%esp)
081f9c32 +0x968:  movl   $0x1,0x4(%esp)
081f9c3a +0x970:  mov    %eax,(%esp)
081f9c3d +0x973:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f9c42 +0x978:  mov    %eax,-0x24(%ebp)
081f9c45 +0x97b:  cmpl   $0x0,-0x24(%ebp)
081f9c49 +0x97f:  je     081f9cc1 <+0x9f7>
081f9c4b +0x981:  mov    -0x24(%ebp),%eax
081f9c4e +0x984:  mov    0x2(%eax),%edx
081f9c51 +0x987:  mov    -0x28(%ebp),%eax
081f9c54 +0x98a:  imul   $0x3d,%eax,%eax
081f9c57 +0x98d:  lea    -0x18(%ebp),%ecx
081f9c5a +0x990:  lea    (%ecx,%eax,1),%eax
081f9c5d +0x993:  sub    $0x24f,%eax
081f9c62 +0x998:  mov    0x2(%eax),%eax
081f9c65 +0x99b:  cmp    %eax,%edx
081f9c67 +0x99d:  je     081f9cc1 <+0x9f7>
081f9c69 +0x99f:  mov    -0x28(%ebp),%eax
081f9c6c +0x9a2:  imul   $0x3d,%eax,%eax
081f9c6f +0x9a5:  lea    -0x18(%ebp),%edx
081f9c72 +0x9a8:  lea    (%edx,%eax,1),%eax
081f9c75 +0x9ab:  sub    $0x24f,%eax
081f9c7a +0x9b0:  mov    0x2(%eax),%esi
081f9c7d +0x9b3:  mov    -0x24(%ebp),%eax
081f9c80 +0x9b6:  mov    0x2(%eax),%ebx
081f9c83 +0x9b9:  movl   $0x0,0xc(%esp)
081f9c8b +0x9c1:  movl   $0x888a,0x8(%esp)
081f9c93 +0x9c9:  movl   $&_ZZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_tE19__PRETTY_FUNCTION__,0x4(%esp)
081f9c9b +0x9d1:  lea    -0x54(%ebp),%eax
081f9c9e +0x9d4:  mov    %eax,(%esp)
081f9ca1 +0x9d7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081f9ca6 +0x9dc:  mov    %esi,0xc(%esp)
081f9caa +0x9e0:  mov    %ebx,0x8(%esp)
081f9cae +0x9e4:  movl   $"ENUM_CMDPACKET_DISJOINT_ITEM error item_id mismatch %d, %d",0x4(%esp)
081f9cb6 +0x9ec:  lea    -0x54(%ebp),%eax
081f9cb9 +0x9ef:  mov    %eax,(%esp)
081f9cbc +0x9f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081f9cc1 +0x9f7:  mov    -0x34(%ebp),%eax
081f9cc4 +0x9fa:  mov    %eax,0x4(%esp)
081f9cc8 +0x9fe:  lea    -0x70(%ebp),%eax
081f9ccb +0xa01:  mov    %eax,(%esp)
081f9cce +0xa04:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f9cd3 +0xa09:  mov    -0x28(%ebp),%eax
081f9cd6 +0xa0c:  imul   $0x3d,%eax,%eax
081f9cd9 +0xa0f:  lea    -0x18(%ebp),%ecx
081f9cdc +0xa12:  lea    (%ecx,%eax,1),%eax
081f9cdf +0xa15:  sub    $0x24f,%eax
081f9ce4 +0xa1a:  mov    0x2(%eax),%eax
081f9ce7 +0xa1d:  mov    %eax,0x4(%esp)
081f9ceb +0xa21:  lea    -0x70(%ebp),%eax
081f9cee +0xa24:  mov    %eax,(%esp)
081f9cf1 +0xa27:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f9cf6 +0xa2c:  mov    -0x28(%ebp),%eax
081f9cf9 +0xa2f:  imul   $0x3d,%eax,%eax
081f9cfc +0xa32:  lea    -0x18(%ebp),%edx
081f9cff +0xa35:  lea    (%edx,%eax,1),%eax
081f9d02 +0xa38:  sub    $0x24f,%eax
081f9d07 +0xa3d:  mov    0x7(%eax),%eax
081f9d0a +0xa40:  mov    %eax,0x4(%esp)
081f9d0e +0xa44:  lea    -0x70(%ebp),%eax
081f9d11 +0xa47:  mov    %eax,(%esp)
081f9d14 +0xa4a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f9d19 +0xa4f:  movl   $0x0,-0x20(%ebp)
081f9d20 +0xa56:  cmpl   $0x0,0x18(%ebp)
081f9d24 +0xa5a:  je     081f9d8e <+0xac4>
081f9d26 +0xa5c:  mov    0x18(%ebp),%eax
081f9d29 +0xa5f:  mov    %eax,(%esp)
081f9d2c +0xa62:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081f9d31 +0xa67:  mov    %eax,-0x20(%ebp)
081f9d34 +0xa6a:  cmpl   $0x0,-0x20(%ebp)
081f9d38 +0xa6e:  je     081f9ddc <+0xb12>
081f9d3e +0xa74:  mov    -0x28(%ebp),%eax
081f9d41 +0xa77:  imul   $0x3d,%eax,%eax
081f9d44 +0xa7a:  lea    -0x18(%ebp),%ecx
081f9d47 +0xa7d:  lea    (%ecx,%eax,1),%eax
081f9d4a +0xa80:  sub    $0x24f,%eax
081f9d4f +0xa85:  mov    0x7(%eax),%esi
081f9d52 +0xa88:  mov    -0x28(%ebp),%eax
081f9d55 +0xa8b:  imul   $0x3d,%eax,%eax
081f9d58 +0xa8e:  lea    -0x18(%ebp),%edx
081f9d5b +0xa91:  lea    (%edx,%eax,1),%eax
081f9d5e +0xa94:  sub    $0x24f,%eax
081f9d63 +0xa99:  mov    0x2(%eax),%eax
081f9d66 +0xa9c:  mov    %eax,%ebx
081f9d68 +0xa9e:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
081f9d6d +0xaa3:  movl   $0x2,0x10(%esp)
081f9d75 +0xaab:  mov    0x8(%ebp),%edx
081f9d78 +0xaae:  mov    %edx,0xc(%esp)
081f9d7c +0xab2:  mov    %esi,0x8(%esp)
081f9d80 +0xab6:  mov    %ebx,0x4(%esp)
081f9d84 +0xaba:  mov    %eax,(%esp)
081f9d87 +0xabd:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
081f9d8c +0xac2:  jmp    081f9ddc <+0xb12>
081f9d8e +0xac4:  mov    -0x28(%ebp),%eax
081f9d91 +0xac7:  imul   $0x3d,%eax,%eax
081f9d94 +0xaca:  lea    -0x18(%ebp),%ecx
081f9d97 +0xacd:  lea    (%ecx,%eax,1),%eax
081f9d9a +0xad0:  sub    $0x24f,%eax
081f9d9f +0xad5:  mov    0x7(%eax),%esi
081f9da2 +0xad8:  mov    -0x28(%ebp),%eax
081f9da5 +0xadb:  imul   $0x3d,%eax,%eax
081f9da8 +0xade:  lea    -0x18(%ebp),%edx
081f9dab +0xae1:  lea    (%edx,%eax,1),%eax
081f9dae +0xae4:  sub    $0x24f,%eax
081f9db3 +0xae9:  mov    0x2(%eax),%eax
081f9db6 +0xaec:  mov    %eax,%ebx
081f9db8 +0xaee:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
081f9dbd +0xaf3:  movl   $0x0,0x10(%esp)
081f9dc5 +0xafb:  mov    0x8(%ebp),%edx
081f9dc8 +0xafe:  mov    %edx,0xc(%esp)
081f9dcc +0xb02:  mov    %esi,0x8(%esp)
081f9dd0 +0xb06:  mov    %ebx,0x4(%esp)
081f9dd4 +0xb0a:  mov    %eax,(%esp)
081f9dd7 +0xb0d:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
081f9ddc +0xb12:  movl   $0x0,-0x94(%ebp)
081f9de6 +0xb1c:  mov    -0x28(%ebp),%eax
081f9de9 +0xb1f:  imul   $0x3d,%eax,%eax
081f9dec +0xb22:  lea    -0x18(%ebp),%ecx
081f9def +0xb25:  lea    (%ecx,%eax,1),%eax
081f9df2 +0xb28:  sub    $0x24f,%eax
081f9df7 +0xb2d:  mov    0x7(%eax),%eax
081f9dfa +0xb30:  movswl %ax,%esi
081f9dfd +0xb33:  mov    -0x28(%ebp),%eax
081f9e00 +0xb36:  mov    -0x88(%ebp,%eax,4),%ebx
081f9e07 +0xb3d:  mov    -0x28(%ebp),%eax
081f9e0a +0xb40:  lea    -0x267(%ebp),%edx
081f9e10 +0xb46:  imul   $0x3d,%eax,%eax
081f9e13 +0xb49:  lea    (%edx,%eax,1),%edi
081f9e16 +0xb4c:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
081f9e1b +0xb51:  lea    -0x94(%ebp),%edx
081f9e21 +0xb57:  mov    %edx,0x14(%esp)
081f9e25 +0xb5b:  movl   $0x0,0x10(%esp)
081f9e2d +0xb63:  mov    %esi,0xc(%esp)
081f9e31 +0xb67:  mov    %ebx,0x8(%esp)
081f9e35 +0xb6b:  mov    %edi,0x4(%esp)
081f9e39 +0xb6f:  mov    %eax,(%esp)
081f9e3c +0xb72:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
081f9e41 +0xb77:  mov    -0x94(%ebp),%eax
081f9e47 +0xb7d:  mov    %eax,%ebx
081f9e49 +0xb7f:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
081f9e4e +0xb84:  mov    %ebx,0xc(%esp)
081f9e52 +0xb88:  mov    0x8(%ebp),%edx
081f9e55 +0xb8b:  mov    %edx,0x8(%esp)
081f9e59 +0xb8f:  movl   $0x8,0x4(%esp)
081f9e61 +0xb97:  mov    %eax,(%esp)
081f9e64 +0xb9a:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
081f9e69 +0xb9f:  addl   $0x1,-0x30(%ebp)
081f9e6d +0xba3:  jmp    081f9e73 <+0xba9>
081f9e6f +0xba5:  nop
081f9e70 +0xba6:  jmp    081f9e73 <+0xba9>
081f9e72 +0xba8:  nop
081f9e73 +0xba9:  addl   $0x1,-0x28(%ebp)
081f9e77 +0xbad:  cmpl   $0x4,-0x28(%ebp)
081f9e7b +0xbb1:  setle  %al
081f9e7e +0xbb4:  test   %al,%al
081f9e80 +0xbb6:  jne    081f9aab <+0x7e1>
081f9e86 +0xbbc:  mov    -0x30(%ebp),%eax
081f9e89 +0xbbf:  mov    %eax,0x8(%esp)
081f9e8d +0xbc3:  lea    -0x90(%ebp),%eax
081f9e93 +0xbc9:  mov    %eax,0x4(%esp)
081f9e97 +0xbcd:  lea    -0x70(%ebp),%eax
081f9e9a +0xbd0:  mov    %eax,(%esp)
081f9e9d +0xbd3:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
081f9ea2 +0xbd8:  cmpl   $0x0,0x18(%ebp)
081f9ea6 +0xbdc:  je     081f9ec1 <+0xbf7>
081f9ea8 +0xbde:  lea    -0x70(%ebp),%eax
081f9eab +0xbe1:  mov    %eax,0x8(%esp)
081f9eaf +0xbe5:  mov    0x8(%ebp),%eax
081f9eb2 +0xbe8:  mov    %eax,0x4(%esp)
081f9eb6 +0xbec:  mov    -0x40(%ebp),%eax
081f9eb9 +0xbef:  mov    %eax,(%esp)
081f9ebc +0xbf2:  call   085d31a0 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard>  ; expert_job::CDisjointer::complete_disjoint(CUser*, PacketGuard&)
081f9ec1 +0xbf7:  movl   $0x1,0x4(%esp)
081f9ec9 +0xbff:  lea    -0x70(%ebp),%eax
081f9ecc +0xc02:  mov    %eax,(%esp)
081f9ecf +0xc05:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f9ed4 +0xc0a:  lea    -0x70(%ebp),%eax
081f9ed7 +0xc0d:  mov    %eax,0x4(%esp)
081f9edb +0xc11:  mov    0x8(%ebp),%eax
081f9ede +0xc14:  mov    %eax,(%esp)
081f9ee1 +0xc17:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f9ee6 +0xc1c:  mov    -0xf7(%ebp),%eax
081f9eec +0xc22:  mov    %eax,%edx
081f9eee +0xc24:  mov    0x8(%ebp),%eax
081f9ef1 +0xc27:  mov    0x796f8(%eax),%eax
081f9ef7 +0xc2d:  mov    %edx,0x4(%esp)
081f9efb +0xc31:  mov    %eax,(%esp)
081f9efe +0xc34:  call   084ba1b4 <_ZN10HistoryLog13WriteDisJointEP8_IO_FILEi>  ; HistoryLog::WriteDisJoint(_IO_FILE*, int)
081f9f03 +0xc39:  jmp    081f9f7e <+0xcb4>
081f9f05 +0xc3b:  cmp    $0x1,%edx
081f9f08 +0xc3e:  jne    081f9f90 <+0xcc6>
081f9f0e +0xc44:  mov    %eax,(%esp)
081f9f11 +0xc47:  call   08725ce0 <__cxa_begin_catch>
081f9f16 +0xc4c:  mov    (%eax),%eax
081f9f18 +0xc4e:  mov    %eax,-0x1c(%ebp)
081f9f1b +0xc51:  movl   $0x0,0x4(%esp)
081f9f23 +0xc59:  lea    -0x70(%ebp),%eax
081f9f26 +0xc5c:  mov    %eax,(%esp)
081f9f29 +0xc5f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f9f2e +0xc64:  mov    -0x1c(%ebp),%eax
081f9f31 +0xc67:  movzbl %al,%eax
081f9f34 +0xc6a:  mov    %eax,0x4(%esp)
081f9f38 +0xc6e:  lea    -0x70(%ebp),%eax
081f9f3b +0xc71:  mov    %eax,(%esp)
081f9f3e +0xc74:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f9f43 +0xc79:  movl   $0x1,0x4(%esp)
081f9f4b +0xc81:  lea    -0x70(%ebp),%eax
081f9f4e +0xc84:  mov    %eax,(%esp)
081f9f51 +0xc87:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f9f56 +0xc8c:  lea    -0x70(%ebp),%eax
081f9f59 +0xc8f:  mov    %eax,0x4(%esp)
081f9f5d +0xc93:  mov    0x8(%ebp),%eax
081f9f60 +0xc96:  mov    %eax,(%esp)
081f9f63 +0xc99:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f9f68 +0xc9e:  jmp    081f9f79 <+0xcaf>
081f9f6a +0xca0:  mov    %edx,%ebx
081f9f6c +0xca2:  mov    %eax,%esi
081f9f6e +0xca4:  call   08725c30 <__cxa_end_catch>
081f9f73 +0xca9:  mov    %esi,%eax
081f9f75 +0xcab:  mov    %ebx,%edx
081f9f77 +0xcad:  jmp    081f9f90 <+0xcc6>
081f9f79 +0xcaf:  call   08725c30 <__cxa_end_catch>
081f9f7e +0xcb4:  mov    $0x0,%ebx
081f9f83 +0xcb9:  lea    -0x70(%ebp),%eax
081f9f86 +0xcbc:  mov    %eax,(%esp)
081f9f89 +0xcbf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f9f8e +0xcc4:  jmp    081f9fab <+0xce1>
081f9f90 +0xcc6:  mov    %edx,%ebx
081f9f92 +0xcc8:  mov    %eax,%esi
081f9f94 +0xcca:  lea    -0x70(%ebp),%eax
081f9f97 +0xccd:  mov    %eax,(%esp)
081f9f9a +0xcd0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f9f9f +0xcd5:  mov    %esi,%eax
081f9fa1 +0xcd7:  mov    %ebx,%edx
081f9fa3 +0xcd9:  mov    %eax,(%esp)
081f9fa6 +0xcdc:  call   08ae3750 <_Unwind_Resume>
081f9fab +0xce1:  mov    %ebx,%eax
081f9fad +0xce3:  add    $0x2bc,%esp
081f9fb3 +0xce9:  pop    %ebx
081f9fb4 +0xcea:  pop    %esi
081f9fb5 +0xceb:  pop    %edi
081f9fb6 +0xcec:  pop    %ebp
081f9fb7 +0xced:  ret
```

## 反编译 C

```c
// DisPatcher_DisJointItem::_disjoint @ 0x81f92ca

/* DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short) */

undefined4
DisPatcher_DisJointItem::_disjoint
          (CUser *param_1,int param_2,int param_3,int param_4,CUserCharacInfo *param_5,
          ushort param_6)

{
  CItem *pCVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  GameWorld *this;
  int *piVar5;
  CInventory *pCVar6;
  CDataManager *this_00;
  Store *pSVar7;
  CValueStatistic *pCVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CCubeStatistic *pCVar12;
  Inven_Item *this_01;
  Inven_Item local_26b [7];
  undefined1 auStack_264 [5];
  undefined4 auStack_25f [12];
  undefined1 auStack_22f [245];
  Inven_Item local_13a [61];
  Inven_Item local_fd [2];
  int local_fb;
  short local_f6;
  DisJointResult local_c0 [4];
  int aiStack_bc [9];
  int local_98;
  int local_94;
  int local_90 [6];
  CItem *local_78;
  PacketGuard local_74 [12];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  int local_48;
  CExpertJob *local_44;
  int local_40;
  char local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  cVar2 = _check_disjointable_user_state(param_1,param_4,(int)(char)param_3,(int)(short)param_2);
  if (cVar2 == '\x01') {
    PacketGuard::PacketGuard(local_74);
                    /* try { // try from 081f9337 to 081f933b has its CatchHandler @ 081f9f90 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_74,1,param_4);
    local_48 = GetInvenTypeFromItemSpace(param_3);
    local_44 = (CExpertJob *)0x0;
    if (param_5 != (CUserCharacInfo *)0x0) {
      local_44 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob(param_5);
      if (local_44 == (CExpertJob *)0x0) {
                    /* try { // try from 081f9396 to 081f9f02 has its CatchHandler @ 081f9f05 */
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_1.cpp",
                   "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                   ,0x87b7,"expert job null point");
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      iVar4 = expert_job::CExpertJob::GetType(local_44);
      if (iVar4 != 3) {
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_1.cpp",
                   "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                   ,0x87bd,"expert job permission error");
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      (*(code *)**(undefined4 **)local_44)(local_44,param_5,param_1);
    }
    cVar2 = CUser::CheckItemLock(param_1,local_48,param_2);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xd5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    Inven_Item::Inven_Item(local_fd);
    local_78 = (CItem *)0x0;
    if (param_6 != 0xffff) {
      this = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsPVPChannel(this);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x60;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
    }
    _check_disjointable_item_state
              (param_1,param_2,local_48,local_fd,&local_78,(CUser *)param_5,param_6);
    _check_disjoint_need_slot(param_1,local_78,local_fd,(CDisjointer *)local_44);
    DisJointResult::DisJointResult(local_c0);
    iVar4 = local_fb;
    local_40 = 0;
    if (param_5 == (CUserCharacInfo *)0x0) {
      iVar9 = G_CDataManager();
      local_40 = DisJoint::GetResult(*(DisJoint **)(iVar9 + 0x1c),iVar4,local_c0);
    }
    else {
      local_40 = expert_job::CDisjointer::get_disjoint_result
                           ((CDisjointer *)local_44,local_78,local_fd,local_c0,param_1);
    }
    if (0 < local_40) {
      piVar5 = (int *)__cxa_allocate_exception(4);
      *piVar5 = local_40;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar5,&ENUM_ERROR::typeinfo,0);
    }
    if (param_6 != 0xffff) {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar4 = CInventory::use_item(pCVar6,(uint)param_6,1,1);
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      CUser::SendUpdateItem(param_1,1,0,param_6);
    }
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[5] = 0;
    this_01 = local_26b;
    for (iVar4 = 4; iVar4 != -1; iVar4 = iVar4 + -1) {
      Inven_Item::Inven_Item(this_01);
      this_01 = this_01 + 0x3d;
    }
    for (local_30 = 0; iVar9 = local_30, iVar4 = local_48, local_30 < 5; local_30 = local_30 + 1) {
      if (aiStack_bc[local_30 + 4] != 0) {
        iVar4 = aiStack_bc[local_30 + 4];
        this_00 = (CDataManager *)G_CDataManager();
        iVar4 = CDataManager::find_item(this_00,iVar4);
        local_90[iVar9 + 1] = iVar4;
        if (local_90[local_30 + 1] != 0) {
          *(int *)(local_26b + local_30 * 0x3d + 2) = aiStack_bc[local_30 + 4];
          Inven_Item::set_add_info(local_26b + local_30 * 0x3d,*(int *)(local_c0 + local_30 * 4));
          (**(code **)(*(int *)local_90[local_30 + 1] + 8))
                    (local_90[local_30 + 1],local_26b + local_30 * 0x3d);
          iVar4 = local_30;
          uVar11 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          iVar4 = iVar4 * 0x3d;
          iVar4 = CInventory::tryInsertItemIntoInventory
                            (uVar11,*(undefined4 *)(local_26b + iVar4),
                             *(undefined4 *)(local_26b + iVar4 + 4),
                             *(undefined4 *)((int)auStack_25f + iVar4 + -4),
                             *(undefined4 *)((int)auStack_25f + iVar4),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 4),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 8),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0xc),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0x10),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0x14),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0x18),
                             *(undefined4 *)(auStack_22f + iVar4 + -0x14),
                             *(undefined4 *)(auStack_22f + iVar4 + -0x10),
                             *(undefined4 *)(auStack_22f + iVar4 + -0xc),
                             *(undefined4 *)(auStack_22f + iVar4 + -8),
                             *(undefined4 *)(auStack_22f + iVar4 + -4),auStack_22f[iVar4]);
          if (iVar4 == -1) {
            puVar3 = (undefined4 *)__cxa_allocate_exception(4);
            *puVar3 = 4;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
          }
        }
      }
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_39 = CInventory::delete_item(pCVar6,iVar4,param_2,1,9,1);
    pCVar1 = local_78;
    if (local_39 != '\x01') {
      piVar5 = (int *)__cxa_allocate_exception(4);
      *piVar5 = local_40;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar5,&ENUM_ERROR::typeinfo,0);
    }
    local_90[0] = 0;
    pSVar7 = (Store *)G_Store();
    Store::GetSellItemPrice(pSVar7,local_fd,pCVar1,local_f6,false,local_90);
    iVar4 = local_90[0];
    pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar8,0x13,param_1,iVar4);
    if (param_5 == (CUserCharacInfo *)0x0) {
      APSystem::CUserProc::ClearActionAndSendtoUser(param_1,7,0,0);
    }
    else if ((param_5 != (CUserCharacInfo *)0x0) && (param_1 != (CUser *)0x0)) {
      iVar4 = CUser::get_charac_no(param_1,-1);
      iVar9 = CUser::get_charac_no((CUser *)param_5,-1);
      if (iVar4 == iVar9) {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x20,0,0);
      }
      else {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_5,0x2d,0,0);
      }
    }
    Inven_Item::Inven_Item(local_13a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,param_3);
    local_94 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_74);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
    local_34 = 0;
    for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
      if (local_90[local_2c + 1] != 0) {
        cVar2 = CItem::is_stackable((CItem *)local_90[local_2c + 1]);
        if ((cVar2 != '\0') &&
           (iVar4 = Inven_Item::get_add_info(local_26b + local_2c * 0x3d), 999 < iVar4)) {
          uVar10 = Inven_Item::get_add_info(local_26b + local_2c * 0x3d);
          uVar11 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
          cMyTrace::cMyTrace(local_68,
                             "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                             ,0x8867,5);
          cMyTrace::operator()
                    (local_68,"DisPatcher_DisJointItem::dispatch_sig, out_item , ITEM #%d, %d",
                     uVar11,uVar10);
        }
        iVar4 = local_2c;
        uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        iVar4 = iVar4 * 0x3d;
        local_38 = CInventory::insertItemIntoInventory
                             (uVar11,*(undefined4 *)(local_26b + iVar4),
                              *(undefined4 *)(local_26b + iVar4 + 4),
                              *(undefined4 *)((int)auStack_25f + iVar4 + -4),
                              *(undefined4 *)((int)auStack_25f + iVar4),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 4),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 8),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0xc),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0x10),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0x14),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0x18),
                              *(undefined4 *)(auStack_22f + iVar4 + -0x14),
                              *(undefined4 *)(auStack_22f + iVar4 + -0x10),
                              *(undefined4 *)(auStack_22f + iVar4 + -0xc),
                              *(undefined4 *)(auStack_22f + iVar4 + -8),
                              *(undefined4 *)(auStack_22f + iVar4 + -4),auStack_22f[iVar4],10,1,0);
        if (-1 < local_38) {
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          local_28 = CInventory::GetInvenRef(pCVar6,1,local_38);
          if ((local_28 != 0) &&
             (*(int *)(local_28 + 2) != *(int *)(local_26b + local_2c * 0x3d + 2))) {
            uVar11 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
            uVar10 = *(undefined4 *)(local_28 + 2);
            cMyTrace::cMyTrace(local_58,
                               "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                               ,0x888a,0);
            cMyTrace::operator()
                      (local_58,"ENUM_CMDPACKET_DISJOINT_ITEM error item_id mismatch %d, %d",uVar10,
                       uVar11);
          }
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,local_38);
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_74,*(int *)(local_26b + local_2c * 0x3d + 2));
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_74,
                     *(int *)((int)auStack_25f + local_2c * 0x3d + -5));
          local_24 = 0;
          if (param_5 == (CUserCharacInfo *)0x0) {
            uVar11 = *(undefined4 *)((int)auStack_25f + local_2c * 0x3d + -5);
            uVar10 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
            pCVar12 = (CCubeStatistic *)GetInstanceCubeStatistic();
            CCubeStatistic::collectCubeStatistics(pCVar12,uVar10,uVar11,param_1,0);
          }
          else {
            local_24 = CUserCharacInfo::GetCurCharacExpertJob(param_5);
            if (local_24 != 0) {
              uVar11 = *(undefined4 *)((int)auStack_25f + local_2c * 0x3d + -5);
              uVar10 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
              pCVar12 = (CCubeStatistic *)GetInstanceCubeStatistic();
              CCubeStatistic::collectCubeStatistics(pCVar12,uVar10,uVar11,param_1,2);
            }
          }
          local_98 = 0;
          uVar11 = *(undefined4 *)((int)auStack_25f + local_2c * 0x3d + -5);
          pCVar1 = (CItem *)local_90[local_2c + 1];
          iVar4 = local_2c * 0x3d;
          pSVar7 = (Store *)G_Store();
          Store::GetSellItemPrice(pSVar7,local_26b + iVar4,pCVar1,(short)uVar11,false,&local_98);
          iVar4 = local_98;
          pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar8,8,param_1,iVar4);
          local_34 = local_34 + 1;
        }
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,&local_94,local_34);
    if (param_5 != (CUserCharacInfo *)0x0) {
      expert_job::CDisjointer::complete_disjoint((CDisjointer *)local_44,param_1,local_74);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_74,true);
    CUser::Send(param_1,local_74);
    HistoryLog::WriteDisJoint(*(_IO_FILE **)(param_1 + 0x796f8),local_fb);
    PacketGuard::~PacketGuard(local_74);
  }
  return 0;
}
```
