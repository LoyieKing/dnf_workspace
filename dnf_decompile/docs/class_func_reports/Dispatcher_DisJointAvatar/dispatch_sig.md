# dispatch_sig

`_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisJointAvatar` | `0x08217c06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08217c06  _ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&)
# range [0x08217c06, 0x0821857b]
08217c06 +0x000:  push   %ebp
08217c07 +0x001:  mov    %esp,%ebp
08217c09 +0x003:  push   %esi
08217c0a +0x004:  push   %ebx
08217c0b +0x005:  sub    $0x100,%esp
08217c11 +0x00b:  mov    0xc(%ebp),%eax
08217c14 +0x00e:  mov    %eax,(%esp)
08217c17 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08217c1c +0x016:  cmp    $0x3,%eax
08217c1f +0x019:  setne  %al
08217c22 +0x01c:  test   %al,%al
08217c24 +0x01e:  je     08217c30 <+0x2a>
08217c26 +0x020:  mov    $0x0,%ebx
08217c2b +0x025:  jmp    08218570 <+0x96a>
08217c30 +0x02a:  mov    0xc(%ebp),%eax
08217c33 +0x02d:  mov    %eax,(%esp)
08217c36 +0x030:  call   086810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>  ; CUser::isEnableAvatarSocketAction()
08217c3b +0x035:  mov    %eax,-0x24(%ebp)
08217c3e +0x038:  cmpl   $0x0,-0x24(%ebp)
08217c42 +0x03c:  je     08217c6b <+0x65>
08217c44 +0x03e:  mov    -0x24(%ebp),%eax
08217c47 +0x041:  movzbl %al,%eax
08217c4a +0x044:  mov    %eax,0x8(%esp)
08217c4e +0x048:  movl   $0xcd,0x4(%esp)
08217c56 +0x050:  mov    0xc(%ebp),%eax
08217c59 +0x053:  mov    %eax,(%esp)
08217c5c +0x056:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08217c61 +0x05b:  mov    $0x0,%ebx
08217c66 +0x060:  jmp    08218570 <+0x96a>
08217c6b +0x065:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08217c70 +0x06a:  movl   $0x14,0xc(%esp)
08217c78 +0x072:  movl   $0x1,0x8(%esp)
08217c80 +0x07a:  mov    0xc(%ebp),%edx
08217c83 +0x07d:  mov    %edx,0x4(%esp)
08217c87 +0x081:  mov    %eax,(%esp)
08217c8a +0x084:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08217c8f +0x089:  test   %al,%al
08217c91 +0x08b:  je     08217cb8 <+0xb2>
08217c93 +0x08d:  movl   $0xd1,0x8(%esp)
08217c9b +0x095:  movl   $0xcd,0x4(%esp)
08217ca3 +0x09d:  mov    0xc(%ebp),%eax
08217ca6 +0x0a0:  mov    %eax,(%esp)
08217ca9 +0x0a3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08217cae +0x0a8:  mov    $0x0,%ebx
08217cb3 +0x0ad:  jmp    08218570 <+0x96a>
08217cb8 +0x0b2:  movw   $0x0,-0x3a(%ebp)
08217cbe +0x0b8:  movl   $0x0,-0x40(%ebp)
08217cc5 +0x0bf:  lea    -0x3a(%ebp),%eax
08217cc8 +0x0c2:  mov    %eax,0x4(%esp)
08217ccc +0x0c6:  mov    0x10(%ebp),%eax
08217ccf +0x0c9:  mov    %eax,(%esp)
08217cd2 +0x0cc:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08217cd7 +0x0d1:  xor    $0x1,%eax
08217cda +0x0d4:  test   %al,%al
08217cdc +0x0d6:  je     08217d09 <+0x103>
08217cde +0x0d8:  movl   $0x0,0xc(%esp)
08217ce6 +0x0e0:  movl   $0x0,0x8(%esp)
08217cee +0x0e8:  movl   $&_ZZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217cf6 +0x0f0:  movl   $0xcaa7,(%esp)
08217cfd +0x0f7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217d02 +0x0fc:  mov    %eax,%ebx
08217d04 +0x0fe:  jmp    08218570 <+0x96a>
08217d09 +0x103:  lea    -0x40(%ebp),%eax
08217d0c +0x106:  mov    %eax,0x4(%esp)
08217d10 +0x10a:  mov    0x10(%ebp),%eax
08217d13 +0x10d:  mov    %eax,(%esp)
08217d16 +0x110:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
08217d1b +0x115:  xor    $0x1,%eax
08217d1e +0x118:  test   %al,%al
08217d20 +0x11a:  je     08217d4d <+0x147>
08217d22 +0x11c:  movl   $0x0,0xc(%esp)
08217d2a +0x124:  movl   $0x0,0x8(%esp)
08217d32 +0x12c:  movl   $&_ZZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217d3a +0x134:  movl   $0xcaa8,(%esp)
08217d41 +0x13b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217d46 +0x140:  mov    %eax,%ebx
08217d48 +0x142:  jmp    08218570 <+0x96a>
08217d4d +0x147:  movzwl -0x3a(%ebp),%eax
08217d51 +0x14b:  movzwl %ax,%eax
08217d54 +0x14e:  mov    %eax,0x8(%esp)
08217d58 +0x152:  movl   $0x2,0x4(%esp)
08217d60 +0x15a:  mov    0xc(%ebp),%eax
08217d63 +0x15d:  mov    %eax,(%esp)
08217d66 +0x160:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08217d6b +0x165:  test   %al,%al
08217d6d +0x167:  je     08217d94 <+0x18e>
08217d6f +0x169:  movl   $0xd5,0x8(%esp)
08217d77 +0x171:  movl   $0xcd,0x4(%esp)
08217d7f +0x179:  mov    0xc(%ebp),%eax
08217d82 +0x17c:  mov    %eax,(%esp)
08217d85 +0x17f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08217d8a +0x184:  mov    $0x0,%ebx
08217d8f +0x189:  jmp    08218570 <+0x96a>
08217d94 +0x18e:  lea    -0xa5(%ebp),%eax
08217d9a +0x194:  mov    %eax,(%esp)
08217d9d +0x197:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08217da2 +0x19c:  movl   $0x0,-0x20(%ebp)
08217da9 +0x1a3:  lea    -0x4c(%ebp),%eax
08217dac +0x1a6:  mov    %eax,(%esp)
08217daf +0x1a9:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08217db4 +0x1ae:  movzwl -0x3a(%ebp),%eax
08217db8 +0x1b2:  movzwl %ax,%ebx
08217dbb +0x1b5:  mov    0xc(%ebp),%eax
08217dbe +0x1b8:  mov    %eax,(%esp)
08217dc1 +0x1bb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08217dc6 +0x1c0:  lea    -0xe8(%ebp),%edx
08217dcc +0x1c6:  mov    %ebx,0xc(%esp)
08217dd0 +0x1ca:  movl   $0x2,0x8(%esp)
08217dd8 +0x1d2:  mov    %eax,0x4(%esp)
08217ddc +0x1d6:  mov    %edx,(%esp)
08217ddf +0x1d9:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08217de4 +0x1de:  sub    $0x4,%esp
08217de7 +0x1e1:  mov    -0xe8(%ebp),%eax
08217ded +0x1e7:  mov    %eax,-0xa5(%ebp)
08217df3 +0x1ed:  mov    -0xe4(%ebp),%eax
08217df9 +0x1f3:  mov    %eax,-0xa1(%ebp)
08217dff +0x1f9:  mov    -0xe0(%ebp),%eax
08217e05 +0x1ff:  mov    %eax,-0x9d(%ebp)
08217e0b +0x205:  mov    -0xdc(%ebp),%eax
08217e11 +0x20b:  mov    %eax,-0x99(%ebp)
08217e17 +0x211:  mov    -0xd8(%ebp),%eax
08217e1d +0x217:  mov    %eax,-0x95(%ebp)
08217e23 +0x21d:  mov    -0xd4(%ebp),%eax
08217e29 +0x223:  mov    %eax,-0x91(%ebp)
08217e2f +0x229:  mov    -0xd0(%ebp),%eax
08217e35 +0x22f:  mov    %eax,-0x8d(%ebp)
08217e3b +0x235:  mov    -0xcc(%ebp),%eax
08217e41 +0x23b:  mov    %eax,-0x89(%ebp)
08217e47 +0x241:  mov    -0xc8(%ebp),%eax
08217e4d +0x247:  mov    %eax,-0x85(%ebp)
08217e53 +0x24d:  mov    -0xc4(%ebp),%eax
08217e59 +0x253:  mov    %eax,-0x81(%ebp)
08217e5f +0x259:  mov    -0xc0(%ebp),%eax
08217e65 +0x25f:  mov    %eax,-0x7d(%ebp)
08217e68 +0x262:  mov    -0xbc(%ebp),%eax
08217e6e +0x268:  mov    %eax,-0x79(%ebp)
08217e71 +0x26b:  mov    -0xb8(%ebp),%eax
08217e77 +0x271:  mov    %eax,-0x75(%ebp)
08217e7a +0x274:  mov    -0xb4(%ebp),%eax
08217e80 +0x27a:  mov    %eax,-0x71(%ebp)
08217e83 +0x27d:  mov    -0xb0(%ebp),%eax
08217e89 +0x283:  mov    %eax,-0x6d(%ebp)
08217e8c +0x286:  movzbl -0xac(%ebp),%eax
08217e93 +0x28d:  mov    %al,-0x69(%ebp)
08217e96 +0x290:  mov    -0xa3(%ebp),%edx
08217e9c +0x296:  mov    -0x40(%ebp),%eax
08217e9f +0x299:  cmp    %eax,%edx
08217ea1 +0x29b:  je     08217ecf <+0x2c9>
08217ea3 +0x29d:  movl   $0x4,(%esp)
08217eaa +0x2a4:  call   08725800 <__cxa_allocate_exception>
08217eaf +0x2a9:  mov    %eax,%edx
08217eb1 +0x2ab:  movl   $0x11,(%edx)
08217eb7 +0x2b1:  movl   $0x0,0x8(%esp)
08217ebf +0x2b9:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08217ec7 +0x2c1:  mov    %eax,(%esp)
08217eca +0x2c4:  call   08724c50 <__cxa_throw>
08217ecf +0x2c9:  mov    -0xa3(%ebp),%eax
08217ed5 +0x2cf:  mov    %eax,%ebx
08217ed7 +0x2d1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08217edc +0x2d6:  mov    %ebx,0x4(%esp)
08217ee0 +0x2da:  mov    %eax,(%esp)
08217ee3 +0x2dd:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08217ee8 +0x2e2:  mov    %eax,-0x20(%ebp)
08217eeb +0x2e5:  cmpl   $0x0,-0x20(%ebp)
08217eef +0x2e9:  jne    08217f1d <+0x317>
08217ef1 +0x2eb:  movl   $0x4,(%esp)
08217ef8 +0x2f2:  call   08725800 <__cxa_allocate_exception>
08217efd +0x2f7:  mov    %eax,%edx
08217eff +0x2f9:  movl   $0x11,(%edx)
08217f05 +0x2ff:  movl   $0x0,0x8(%esp)
08217f0d +0x307:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08217f15 +0x30f:  mov    %eax,(%esp)
08217f18 +0x312:  call   08724c50 <__cxa_throw>
08217f1d +0x317:  mov    -0x20(%ebp),%eax
08217f20 +0x31a:  mov    %eax,(%esp)
08217f23 +0x31d:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08217f28 +0x322:  test   %eax,%eax
08217f2a +0x324:  je     08217f3c <+0x336>
08217f2c +0x326:  mov    -0x20(%ebp),%eax
08217f2f +0x329:  mov    %eax,(%esp)
08217f32 +0x32c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08217f37 +0x331:  cmp    $0x3,%eax
08217f3a +0x334:  jle    08217f43 <+0x33d>
08217f3c +0x336:  mov    $0x1,%eax
08217f41 +0x33b:  jmp    08217f48 <+0x342>
08217f43 +0x33d:  mov    $0x0,%eax
08217f48 +0x342:  test   %al,%al
08217f4a +0x344:  je     08217f78 <+0x372>
08217f4c +0x346:  movl   $0x4,(%esp)
08217f53 +0x34d:  call   08725800 <__cxa_allocate_exception>
08217f58 +0x352:  mov    %eax,%edx
08217f5a +0x354:  movl   $0x13,(%edx)
08217f60 +0x35a:  movl   $0x0,0x8(%esp)
08217f68 +0x362:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08217f70 +0x36a:  mov    %eax,(%esp)
08217f73 +0x36d:  call   08724c50 <__cxa_throw>
08217f78 +0x372:  mov    -0x20(%ebp),%eax
08217f7b +0x375:  mov    (%eax),%eax
08217f7d +0x377:  add    $0x24,%eax
08217f80 +0x37a:  mov    (%eax),%edx
08217f82 +0x37c:  movl   $0x2,0x4(%esp)
08217f8a +0x384:  mov    -0x20(%ebp),%eax
08217f8d +0x387:  mov    %eax,(%esp)
08217f90 +0x38a:  call   *%edx
08217f92 +0x38c:  xor    $0x1,%eax
08217f95 +0x38f:  test   %al,%al
08217f97 +0x391:  je     08217fc5 <+0x3bf>
08217f99 +0x393:  movl   $0x4,(%esp)
08217fa0 +0x39a:  call   08725800 <__cxa_allocate_exception>
08217fa5 +0x39f:  mov    %eax,%edx
08217fa7 +0x3a1:  movl   $0x17,(%edx)
08217fad +0x3a7:  movl   $0x0,0x8(%esp)
08217fb5 +0x3af:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08217fbd +0x3b7:  mov    %eax,(%esp)
08217fc0 +0x3ba:  call   08724c50 <__cxa_throw>
08217fc5 +0x3bf:  mov    -0x9e(%ebp),%ebx
08217fcb +0x3c5:  mov    0xc(%ebp),%eax
08217fce +0x3c8:  mov    %eax,(%esp)
08217fd1 +0x3cb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08217fd6 +0x3d0:  mov    %eax,(%esp)
08217fd9 +0x3d3:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08217fde +0x3d8:  mov    %ebx,0x4(%esp)
08217fe2 +0x3dc:  mov    %eax,(%esp)
08217fe5 +0x3df:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
08217fea +0x3e4:  test   %eax,%eax
08217fec +0x3e6:  setne  %al
08217fef +0x3e9:  test   %al,%al
08217ff1 +0x3eb:  je     0821801f <+0x419>
08217ff3 +0x3ed:  movl   $0x4,(%esp)
08217ffa +0x3f4:  call   08725800 <__cxa_allocate_exception>
08217fff +0x3f9:  mov    %eax,%edx
08218001 +0x3fb:  movl   $0x17,(%edx)
08218007 +0x401:  movl   $0x0,0x8(%esp)
0821800f +0x409:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218017 +0x411:  mov    %eax,(%esp)
0821801a +0x414:  call   08724c50 <__cxa_throw>
0821801f +0x419:  lea    -0xa5(%ebp),%eax
08218025 +0x41f:  add    $0x33,%eax
08218028 +0x422:  mov    %eax,(%esp)
0821802b +0x425:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
08218030 +0x42a:  test   %al,%al
08218032 +0x42c:  setne  %al
08218035 +0x42f:  test   %al,%al
08218037 +0x431:  je     08218065 <+0x45f>
08218039 +0x433:  movl   $0x4,(%esp)
08218040 +0x43a:  call   08725800 <__cxa_allocate_exception>
08218045 +0x43f:  mov    %eax,%edx
08218047 +0x441:  movl   $0x17,(%edx)
0821804d +0x447:  movl   $0x0,0x8(%esp)
08218055 +0x44f:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821805d +0x457:  mov    %eax,(%esp)
08218060 +0x45a:  call   08724c50 <__cxa_throw>
08218065 +0x45f:  mov    -0x9e(%ebp),%ebx
0821806b +0x465:  mov    0xc(%ebp),%eax
0821806e +0x468:  mov    %eax,(%esp)
08218071 +0x46b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08218076 +0x470:  mov    %eax,(%esp)
08218079 +0x473:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0821807e +0x478:  mov    %ebx,0x4(%esp)
08218082 +0x47c:  mov    %eax,(%esp)
08218085 +0x47f:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
0821808a +0x484:  mov    %eax,-0x18(%ebp)
0821808d +0x487:  mov    -0x18(%ebp),%eax
08218090 +0x48a:  mov    %eax,0x4(%esp)
08218094 +0x48e:  mov    0x8(%ebp),%eax
08218097 +0x491:  mov    %eax,(%esp)
0821809a +0x494:  call   08218598 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t>  ; Dispatcher_DisJointAvatar::_selectJewelTypeIndex(stAvatarEmblemInfo_t const*) const
0821809f +0x499:  mov    %eax,-0x14(%ebp)
082180a2 +0x49c:  mov    -0x20(%ebp),%eax
082180a5 +0x49f:  mov    0x234(%eax),%eax
082180ab +0x4a5:  cmp    $0x9,%eax
082180ae +0x4a8:  jne    082180b7 <+0x4b1>
082180b0 +0x4aa:  movl   $0xffffffff,-0x14(%ebp)
082180b7 +0x4b1:  lea    -0x4c(%ebp),%eax
082180ba +0x4b4:  mov    %eax,0x10(%esp)
082180be +0x4b8:  mov    -0x14(%ebp),%eax
082180c1 +0x4bb:  mov    %eax,0xc(%esp)
082180c5 +0x4bf:  mov    -0x20(%ebp),%eax
082180c8 +0x4c2:  mov    %eax,0x8(%esp)
082180cc +0x4c6:  mov    0xc(%ebp),%eax
082180cf +0x4c9:  mov    %eax,0x4(%esp)
082180d3 +0x4cd:  mov    0x8(%ebp),%eax
082180d6 +0x4d0:  mov    %eax,(%esp)
082180d9 +0x4d3:  call   0821873c <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE>  ; Dispatcher_DisJointAvatar::_getResultItems(CUser*, CItem const*, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
082180de +0x4d8:  mov    %eax,-0x10(%ebp)
082180e1 +0x4db:  cmpl   $0x0,-0x10(%ebp)
082180e5 +0x4df:  je     08218112 <+0x50c>
082180e7 +0x4e1:  movl   $0x4,(%esp)
082180ee +0x4e8:  call   08725800 <__cxa_allocate_exception>
082180f3 +0x4ed:  mov    %eax,%edx
082180f5 +0x4ef:  mov    -0x10(%ebp),%ecx
082180f8 +0x4f2:  mov    %ecx,(%edx)
082180fa +0x4f4:  movl   $0x0,0x8(%esp)
08218102 +0x4fc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821810a +0x504:  mov    %eax,(%esp)
0821810d +0x507:  call   08724c50 <__cxa_throw>
08218112 +0x50c:  lea    -0x4c(%ebp),%eax
08218115 +0x50f:  mov    %eax,(%esp)
08218118 +0x512:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0821811d +0x517:  mov    %eax,%ebx
0821811f +0x519:  mov    0xc(%ebp),%eax
08218122 +0x51c:  mov    %eax,(%esp)
08218125 +0x51f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821812a +0x524:  mov    %ebx,0x8(%esp)
0821812e +0x528:  movl   $0x9,0x4(%esp)
08218136 +0x530:  mov    %eax,(%esp)
08218139 +0x533:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821813e +0x538:  xor    $0x1,%eax
08218141 +0x53b:  test   %al,%al
08218143 +0x53d:  je     08218171 <+0x56b>
08218145 +0x53f:  movl   $0x4,(%esp)
0821814c +0x546:  call   08725800 <__cxa_allocate_exception>
08218151 +0x54b:  mov    %eax,%edx
08218153 +0x54d:  movl   $0x4,(%edx)
08218159 +0x553:  movl   $0x0,0x8(%esp)
08218161 +0x55b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218169 +0x563:  mov    %eax,(%esp)
0821816c +0x566:  call   08724c50 <__cxa_throw>
08218171 +0x56b:  movzwl -0x3a(%ebp),%eax
08218175 +0x56f:  movzwl %ax,%ebx
08218178 +0x572:  mov    0xc(%ebp),%eax
0821817b +0x575:  mov    %eax,(%esp)
0821817e +0x578:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08218183 +0x57d:  movl   $0x1,0x14(%esp)
0821818b +0x585:  movl   $0x6,0x10(%esp)
08218193 +0x58d:  movl   $0x1,0xc(%esp)
0821819b +0x595:  mov    %ebx,0x8(%esp)
0821819f +0x599:  movl   $0x2,0x4(%esp)
082181a7 +0x5a1:  mov    %eax,(%esp)
082181aa +0x5a4:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
082181af +0x5a9:  xor    $0x1,%eax
082181b2 +0x5ac:  test   %al,%al
082181b4 +0x5ae:  je     082181e2 <+0x5dc>
082181b6 +0x5b0:  movl   $0x4,(%esp)
082181bd +0x5b7:  call   08725800 <__cxa_allocate_exception>
082181c2 +0x5bc:  mov    %eax,%edx
082181c4 +0x5be:  movl   $0x16,(%edx)
082181ca +0x5c4:  movl   $0x0,0x8(%esp)
082181d2 +0x5cc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082181da +0x5d4:  mov    %eax,(%esp)
082181dd +0x5d7:  call   08724c50 <__cxa_throw>
082181e2 +0x5dc:  mov    -0x9e(%ebp),%ebx
082181e8 +0x5e2:  mov    0xc(%ebp),%eax
082181eb +0x5e5:  mov    %eax,(%esp)
082181ee +0x5e8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082181f3 +0x5ed:  mov    %eax,(%esp)
082181f6 +0x5f0:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
082181fb +0x5f5:  mov    %ebx,0x4(%esp)
082181ff +0x5f9:  mov    %eax,(%esp)
08218202 +0x5fc:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
08218207 +0x601:  xor    $0x1,%eax
0821820a +0x604:  test   %al,%al
0821820c +0x606:  je     08218292 <+0x68c>
08218212 +0x60c:  movl   $0x4,(%esp)
08218219 +0x613:  call   08725800 <__cxa_allocate_exception>
0821821e +0x618:  mov    %eax,%edx
08218220 +0x61a:  movl   $0x16,(%edx)
08218226 +0x620:  movl   $0x0,0x8(%esp)
0821822e +0x628:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218236 +0x630:  mov    %eax,(%esp)
08218239 +0x633:  call   08724c50 <__cxa_throw>
0821823e +0x638:  cmp    $0x1,%edx
08218241 +0x63b:  jne    0821854a <+0x944>
08218247 +0x641:  mov    %eax,(%esp)
0821824a +0x644:  call   08725ce0 <__cxa_begin_catch>
0821824f +0x649:  mov    (%eax),%eax
08218251 +0x64b:  mov    %eax,-0xc(%ebp)
08218254 +0x64e:  mov    -0xc(%ebp),%eax
08218257 +0x651:  movzbl %al,%eax
0821825a +0x654:  mov    %eax,0x8(%esp)
0821825e +0x658:  movl   $0xcd,0x4(%esp)
08218266 +0x660:  mov    0xc(%ebp),%eax
08218269 +0x663:  mov    %eax,(%esp)
0821826c +0x666:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08218271 +0x66b:  mov    $0x0,%ebx
08218276 +0x670:  call   08725c30 <__cxa_end_catch>
0821827b +0x675:  jmp    08218565 <+0x95f>
08218280 +0x67a:  mov    %edx,%ebx
08218282 +0x67c:  mov    %eax,%esi
08218284 +0x67e:  call   08725c30 <__cxa_end_catch>
08218289 +0x683:  mov    %esi,%eax
0821828b +0x685:  mov    %ebx,%edx
0821828d +0x687:  jmp    0821854a <+0x944>
08218292 +0x68c:  movzwl -0x3a(%ebp),%eax
08218296 +0x690:  movzwl %ax,%eax
08218299 +0x693:  lea    0xa(%eax),%esi
0821829c +0x696:  mov    -0x9e(%ebp),%ebx
082182a2 +0x69c:  mov    0xc(%ebp),%eax
082182a5 +0x69f:  mov    %eax,(%esp)
082182a8 +0x6a2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082182ad +0x6a7:  movl   $0x0,0x14(%esp)
082182b5 +0x6af:  mov    %esi,0x10(%esp)
082182b9 +0x6b3:  movl   $0x5,0xc(%esp)
082182c1 +0x6bb:  mov    %ebx,0x8(%esp)
082182c5 +0x6bf:  movl   $0x36,0x4(%esp)
082182cd +0x6c7:  mov    %eax,(%esp)
082182d0 +0x6ca:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
082182d5 +0x6cf:  mov    -0x9e(%ebp),%ebx
082182db +0x6d5:  mov    0xc(%ebp),%eax
082182de +0x6d8:  mov    %eax,(%esp)
082182e1 +0x6db:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082182e6 +0x6e0:  movl   $"",0x8(%esp)
082182ee +0x6e8:  mov    %ebx,0x4(%esp)
082182f2 +0x6ec:  mov    %eax,(%esp)
082182f5 +0x6ef:  call   0844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>  ; DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)
082182fa +0x6f4:  lea    -0x58(%ebp),%eax
082182fd +0x6f7:  mov    %eax,(%esp)
08218300 +0x6fa:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08218305 +0x6ff:  mov    0xc(%ebp),%eax
08218308 +0x702:  mov    %eax,(%esp)
0821830b +0x705:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08218310 +0x70a:  movl   $"",0x1c(%esp)
08218318 +0x712:  movl   $"",0x18(%esp)
08218320 +0x71a:  movl   $0x0,0x14(%esp)
08218328 +0x722:  movl   $0xa,0x10(%esp)
08218330 +0x72a:  movl   $0x0,0xc(%esp)
08218338 +0x732:  lea    -0x58(%ebp),%edx
0821833b +0x735:  mov    %edx,0x8(%esp)
0821833f +0x739:  lea    -0x4c(%ebp),%edx
08218342 +0x73c:  mov    %edx,0x4(%esp)
08218346 +0x740:  mov    %eax,(%esp)
08218349 +0x743:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
0821834e +0x748:  mov    %eax,-0x1c(%ebp)
08218351 +0x74b:  lea    -0x64(%ebp),%eax
08218354 +0x74e:  mov    %eax,(%esp)
08218357 +0x751:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821835c +0x756:  movl   $0xcd,0x8(%esp)
08218364 +0x75e:  movl   $0x1,0x4(%esp)
0821836c +0x766:  lea    -0x64(%ebp),%eax
0821836f +0x769:  mov    %eax,(%esp)
08218372 +0x76c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08218377 +0x771:  movl   $0x1,0x4(%esp)
0821837f +0x779:  lea    -0x64(%ebp),%eax
08218382 +0x77c:  mov    %eax,(%esp)
08218385 +0x77f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821838a +0x784:  movzwl -0x3a(%ebp),%eax
0821838e +0x788:  movzwl %ax,%eax
08218391 +0x78b:  mov    %eax,0x4(%esp)
08218395 +0x78f:  lea    -0x64(%ebp),%eax
08218398 +0x792:  mov    %eax,(%esp)
0821839b +0x795:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082183a0 +0x79a:  mov    -0x1c(%ebp),%eax
082183a3 +0x79d:  mov    %eax,0x4(%esp)
082183a7 +0x7a1:  lea    -0x64(%ebp),%eax
082183aa +0x7a4:  mov    %eax,(%esp)
082183ad +0x7a7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082183b2 +0x7ac:  lea    -0x38(%ebp),%eax
082183b5 +0x7af:  lea    -0x58(%ebp),%edx
082183b8 +0x7b2:  mov    %edx,0x4(%esp)
082183bc +0x7b6:  mov    %eax,(%esp)
082183bf +0x7b9:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
082183c4 +0x7be:  sub    $0x4,%esp
082183c7 +0x7c1:  lea    -0x38(%ebp),%eax
082183ca +0x7c4:  mov    %eax,0x4(%esp)
082183ce +0x7c8:  lea    -0x68(%ebp),%eax
082183d1 +0x7cb:  mov    %eax,(%esp)
082183d4 +0x7ce:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
082183d9 +0x7d3:  jmp    08218489 <+0x883>
082183de +0x7d8:  lea    -0x68(%ebp),%eax
082183e1 +0x7db:  mov    %eax,(%esp)
082183e4 +0x7de:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
082183e9 +0x7e3:  mov    (%eax),%eax
082183eb +0x7e5:  mov    %eax,0x4(%esp)
082183ef +0x7e9:  lea    -0x64(%ebp),%eax
082183f2 +0x7ec:  mov    %eax,(%esp)
082183f5 +0x7ef:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082183fa +0x7f4:  lea    -0x30(%ebp),%eax
082183fd +0x7f7:  movl   $0x0,0x8(%esp)
08218405 +0x7ff:  lea    -0x68(%ebp),%edx
08218408 +0x802:  mov    %edx,0x4(%esp)
0821840c +0x806:  mov    %eax,(%esp)
0821840f +0x809:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08218414 +0x80e:  sub    $0x4,%esp
08218417 +0x811:  lea    -0x68(%ebp),%eax
0821841a +0x814:  mov    %eax,(%esp)
0821841d +0x817:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08218422 +0x81c:  mov    (%eax),%eax
08218424 +0x81e:  mov    %eax,0x4(%esp)
08218428 +0x822:  lea    -0x64(%ebp),%eax
0821842b +0x825:  mov    %eax,(%esp)
0821842e +0x828:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
08218433 +0x82d:  lea    -0x2c(%ebp),%eax
08218436 +0x830:  movl   $0x0,0x8(%esp)
0821843e +0x838:  lea    -0x68(%ebp),%edx
08218441 +0x83b:  mov    %edx,0x4(%esp)
08218445 +0x83f:  mov    %eax,(%esp)
08218448 +0x842:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0821844d +0x847:  sub    $0x4,%esp
08218450 +0x84a:  lea    -0x68(%ebp),%eax
08218453 +0x84d:  mov    %eax,(%esp)
08218456 +0x850:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0821845b +0x855:  mov    (%eax),%eax
0821845d +0x857:  mov    %eax,0x4(%esp)
08218461 +0x85b:  lea    -0x64(%ebp),%eax
08218464 +0x85e:  mov    %eax,(%esp)
08218467 +0x861:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821846c +0x866:  lea    -0x28(%ebp),%eax
0821846f +0x869:  movl   $0x0,0x8(%esp)
08218477 +0x871:  lea    -0x68(%ebp),%edx
0821847a +0x874:  mov    %edx,0x4(%esp)
0821847e +0x878:  mov    %eax,(%esp)
08218481 +0x87b:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08218486 +0x880:  sub    $0x4,%esp
08218489 +0x883:  lea    -0x34(%ebp),%eax
0821848c +0x886:  lea    -0x58(%ebp),%edx
0821848f +0x889:  mov    %edx,0x4(%esp)
08218493 +0x88d:  mov    %eax,(%esp)
08218496 +0x890:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0821849b +0x895:  sub    $0x4,%esp
0821849e +0x898:  lea    -0x34(%ebp),%eax
082184a1 +0x89b:  mov    %eax,0x4(%esp)
082184a5 +0x89f:  lea    -0x68(%ebp),%eax
082184a8 +0x8a2:  mov    %eax,(%esp)
082184ab +0x8a5:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
082184b0 +0x8aa:  test   %al,%al
082184b2 +0x8ac:  jne    082183de <+0x7d8>
082184b8 +0x8b2:  movl   $0x1,0x4(%esp)
082184c0 +0x8ba:  lea    -0x64(%ebp),%eax
082184c3 +0x8bd:  mov    %eax,(%esp)
082184c6 +0x8c0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082184cb +0x8c5:  lea    -0x64(%ebp),%eax
082184ce +0x8c8:  mov    %eax,0x4(%esp)
082184d2 +0x8cc:  mov    0xc(%ebp),%eax
082184d5 +0x8cf:  mov    %eax,(%esp)
082184d8 +0x8d2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082184dd +0x8d7:  mov    -0x20(%ebp),%eax
082184e0 +0x8da:  mov    %eax,0x4(%esp)
082184e4 +0x8de:  mov    0x8(%ebp),%eax
082184e7 +0x8e1:  mov    %eax,(%esp)
082184ea +0x8e4:  call   08218996 <_ZN25Dispatcher_DisJointAvatar22SendDisjointAvatarInfoEPK5CItem>  ; Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(CItem const*)
082184ef +0x8e9:  lea    -0x4c(%ebp),%eax
082184f2 +0x8ec:  mov    %eax,0x4(%esp)
082184f6 +0x8f0:  mov    0x8(%ebp),%eax
082184f9 +0x8f3:  mov    %eax,(%esp)
082184fc +0x8f6:  call   08218a36 <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE>  ; Dispatcher_DisJointAvatar::SendCreateEmblemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08218501 +0x8fb:  mov    $0x0,%ebx
08218506 +0x900:  lea    -0x64(%ebp),%eax
08218509 +0x903:  mov    %eax,(%esp)
0821850c +0x906:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08218511 +0x90b:  jmp    0821853d <+0x937>
08218513 +0x90d:  mov    %edx,%ebx
08218515 +0x90f:  mov    %eax,%esi
08218517 +0x911:  lea    -0x64(%ebp),%eax
0821851a +0x914:  mov    %eax,(%esp)
0821851d +0x917:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08218522 +0x91c:  mov    %esi,%eax
08218524 +0x91e:  mov    %ebx,%edx
08218526 +0x920:  jmp    08218528 <+0x922>
08218528 +0x922:  mov    %edx,%ebx
0821852a +0x924:  mov    %eax,%esi
0821852c +0x926:  lea    -0x58(%ebp),%eax
0821852f +0x929:  mov    %eax,(%esp)
08218532 +0x92c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08218537 +0x931:  mov    %esi,%eax
08218539 +0x933:  mov    %ebx,%edx
0821853b +0x935:  jmp    0821854a <+0x944>
0821853d +0x937:  lea    -0x58(%ebp),%eax
08218540 +0x93a:  mov    %eax,(%esp)
08218543 +0x93d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08218548 +0x942:  jmp    08218565 <+0x95f>
0821854a +0x944:  mov    %edx,%ebx
0821854c +0x946:  mov    %eax,%esi
0821854e +0x948:  lea    -0x4c(%ebp),%eax
08218551 +0x94b:  mov    %eax,(%esp)
08218554 +0x94e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08218559 +0x953:  mov    %esi,%eax
0821855b +0x955:  mov    %ebx,%edx
0821855d +0x957:  mov    %eax,(%esp)
08218560 +0x95a:  call   08ae3750 <_Unwind_Resume>
08218565 +0x95f:  lea    -0x4c(%ebp),%eax
08218568 +0x962:  mov    %eax,(%esp)
0821856b +0x965:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08218570 +0x96a:  mov    %ebx,%eax
08218572 +0x96c:  lea    -0x8(%ebp),%esp
08218575 +0x96f:  add    $0x0,%esp
08218578 +0x972:  pop    %ebx
08218579 +0x973:  pop    %esi
0821857a +0x974:  pop    %ebp
0821857b +0x975:  ret
```

## 反编译 C

```c
// Dispatcher_DisJointAvatar::dispatch_sig @ 0x8217c06

/* Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DisJointAvatar::dispatch_sig
          (Dispatcher_DisJointAvatar *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  CDataManager *this_00;
  CInventory *pCVar8;
  CAvatarItemMgr *pCVar9;
  int *piVar10;
  int iVar11;
  ulong *puVar12;
  uint uVar13;
  undefined1 local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined2 local_a5;
  undefined1 uStack_a3;
  int iStack_a2;
  undefined1 uStack_9e;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined1 local_6d;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_6c [4];
  PacketGuard local_68 [12];
  vector<int,std::allocator<int>> local_5c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  ulong local_44;
  ushort local_3e;
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_34 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_2c [4];
  uint local_28;
  CItem *local_24;
  int local_20;
  stAvatarEmblemInfo_t *local_1c;
  int local_18;
  int local_14;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    return 0;
  }
  local_28 = CUser::isEnableAvatarSocketAction(param_1);
  if (local_28 != 0) {
    CUser::SendCmdErrorPacket(param_1,0xcd,local_28 & 0xff);
    return 0;
  }
  pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,0x14);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xcd,0xd1);
    return 0;
  }
  local_3e = 0;
  local_44 = 0;
  cVar2 = PacketBuf::get_short(param_2,&local_3e);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0xcaa7,
                     "virtual int Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_item_idx(param_2,&local_44);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0xcaa8,
                     "virtual int Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = CUser::CheckItemLock(param_1,2,(uint)local_3e);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xcd,0xd5);
    return 0;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_a9);
  local_24 = (CItem *)0x0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
  uVar13 = (uint)local_3e;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar6 = 2;
                    /* try { // try from 08217ddf to 0821823d has its CatchHandler @ 0821823e */
  CInventory::GetInvenSlot((int)local_ec,iVar4);
  local_a9 = (undefined2)local_ec._0_4_;
  uStack_a7 = SUB42(local_ec._0_4_,2);
  local_a5 = (undefined2)local_ec._4_4_;
  uStack_a3 = SUB41(local_ec._4_4_,2);
  iStack_a2._1_3_ = (undefined3)local_ec._8_4_;
  iStack_a2 = CONCAT31(iStack_a2._1_3_,SUB41(local_ec._4_4_,3));
  uStack_9e = SUB41(local_ec._8_4_,3);
  local_9d = local_e0;
  local_99 = local_dc;
  local_95 = local_d8;
  local_91 = local_d4;
  local_8d = local_d0;
  local_89 = local_cc;
  local_85 = local_c8;
  local_81 = local_c4;
  local_7d = local_c0;
  local_79 = local_bc;
  local_75 = local_b8;
  local_71 = local_b4;
  local_6d = local_b0;
  if (CONCAT22(local_a5,uStack_a7) != local_44) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar6,uVar13);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CONCAT22(local_a5,uStack_a7);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(this_00,iVar4);
  if (local_24 != (CItem *)0x0) {
    iVar4 = CItem::get_grade(local_24);
    if ((iVar4 == 0) || (iVar4 = CItem::get_grade(local_24), 3 < iVar4)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = (**(code **)(*(int *)local_24 + 0x24))(local_24,2);
    iVar4 = iStack_a2;
    if (cVar2 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    iVar4 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar9,iVar4);
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)((int)&local_79 + 3));
    iVar4 = iStack_a2;
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    local_1c = (stAvatarEmblemInfo_t *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar9,iVar4);
    local_18 = _selectJewelTypeIndex(this,local_1c);
    if (*(int *)(local_24 + 0x234) == 9) {
      local_18 = -1;
    }
    local_14 = _getResultItems(this,param_1,local_24,local_18,(vector *)local_50);
    if (local_14 != 0) {
      piVar10 = (int *)__cxa_allocate_exception(4);
      *piVar10 = local_14;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar10,&ENUM_ERROR::typeinfo,0);
    }
    uVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_50);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar2 = CInventory::check_empty_count(pCVar8,9,uVar6);
    uVar1 = local_3e;
    if (cVar2 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar8,2,uVar1,1,6,1);
    iVar4 = iStack_a2;
    if (cVar2 == '\x01') {
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar11 = CInventory::GetAvatarItemMgrW(pCVar8);
      cVar2 = WongWork::CAvatarItemMgr::UnRegistItem(iVar11);
      iVar11 = iStack_a2;
      if (cVar2 == '\x01') {
        uVar13 = (uint)local_3e;
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 082182d0 to 08218304 has its CatchHandler @ 0821854a */
        CInventory::SendAvatarEvent(pCVar8,0x36,iVar11,5,uVar13 + 10,0);
        iVar4 = iStack_a2;
        uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        DB_UpdateAvatarHistory::makeRequest(uVar13,iVar4,"");
        std::vector<int,std::allocator<int>>::vector(local_5c);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 08218349 to 0821835b has its CatchHandler @ 08218528 */
        local_20 = CInventory::insert_event_items
                             (pCVar8,local_50,local_5c,0,10,0,&DAT_08bc13f9,&DAT_08bc13f9);
        PacketGuard::PacketGuard(local_68);
                    /* try { // try from 08218372 to 08218500 has its CatchHandler @ 08218513 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,1,0xcd);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,(uint)local_3e);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,local_20);
        std::vector<int,std::allocator<int>>::begin();
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
        __normal_iterator<int*>(local_6c,local_3c);
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar3 = __gnu_cxx::operator!=(local_6c,local_38);
          if (!bVar3) break;
          piVar10 = (int *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_6c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,*piVar10);
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_34,(int)local_6c);
          puVar12 = (ulong *)__gnu_cxx::
                             __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                             operator*(local_6c);
          InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)local_68,*puVar12);
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_30,(int)local_6c);
          piVar10 = (int *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_6c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,*piVar10);
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_2c,(int)local_6c);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
        CUser::Send(param_1,local_68);
        SendDisjointAvatarInfo(this,local_24);
        SendCreateEmblemInfo(this,(vector *)local_50);
                    /* try { // try from 0821850c to 08218510 has its CatchHandler @ 08218528 */
        PacketGuard::~PacketGuard(local_68);
                    /* try { // try from 08218543 to 08218547 has its CatchHandler @ 0821854a */
        std::vector<int,std::allocator<int>>::~vector(local_5c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
        return 0;
      }
      puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar6,uVar13);
  *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
}
```
