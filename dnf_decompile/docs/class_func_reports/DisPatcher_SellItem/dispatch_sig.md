# dispatch_sig

`_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SellItem` | `0x081f2d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f2d0c  _ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f2d0c, 0x081f353f]
081f2d0c +0x000:  push   %ebp
081f2d0d +0x001:  mov    %esp,%ebp
081f2d0f +0x003:  push   %edi
081f2d10 +0x004:  push   %esi
081f2d11 +0x005:  push   %ebx
081f2d12 +0x006:  sub    $0x7c,%esp
081f2d15 +0x009:  mov    0xc(%ebp),%eax
081f2d18 +0x00c:  mov    %eax,(%esp)
081f2d1b +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f2d20 +0x014:  cmp    $0x3,%eax
081f2d23 +0x017:  je     081f2d6c <+0x60>
081f2d25 +0x019:  mov    0xc(%ebp),%eax
081f2d28 +0x01c:  mov    %eax,(%esp)
081f2d2b +0x01f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f2d30 +0x024:  cmp    $0x8,%eax
081f2d33 +0x027:  je     081f2d6c <+0x60>
081f2d35 +0x029:  mov    0xc(%ebp),%eax
081f2d38 +0x02c:  mov    %eax,(%esp)
081f2d3b +0x02f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f2d40 +0x034:  cmp    $0x5,%eax
081f2d43 +0x037:  je     081f2d6c <+0x60>
081f2d45 +0x039:  mov    0xc(%ebp),%eax
081f2d48 +0x03c:  mov    %eax,(%esp)
081f2d4b +0x03f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f2d50 +0x044:  cmp    $0xa,%eax
081f2d53 +0x047:  je     081f2d6c <+0x60>
081f2d55 +0x049:  mov    0xc(%ebp),%eax
081f2d58 +0x04c:  mov    %eax,(%esp)
081f2d5b +0x04f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f2d60 +0x054:  cmp    $0xc,%eax
081f2d63 +0x057:  je     081f2d6c <+0x60>
081f2d65 +0x059:  mov    $0x1,%eax
081f2d6a +0x05e:  jmp    081f2d71 <+0x65>
081f2d6c +0x060:  mov    $0x0,%eax
081f2d71 +0x065:  test   %al,%al
081f2d73 +0x067:  je     081f2d7f <+0x73>
081f2d75 +0x069:  mov    $0x0,%ebx
081f2d7a +0x06e:  jmp    081f3536 <+0x82a>
081f2d7f +0x073:  lea    -0x52(%ebp),%eax
081f2d82 +0x076:  add    $0xd,%eax
081f2d85 +0x079:  mov    %eax,0x4(%esp)
081f2d89 +0x07d:  mov    0x10(%ebp),%eax
081f2d8c +0x080:  mov    %eax,(%esp)
081f2d8f +0x083:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f2d94 +0x088:  xor    $0x1,%eax
081f2d97 +0x08b:  test   %al,%al
081f2d99 +0x08d:  je     081f2dc6 <+0xba>
081f2d9b +0x08f:  movl   $0x0,0xc(%esp)
081f2da3 +0x097:  movl   $0x0,0x8(%esp)
081f2dab +0x09f:  movl   $&_ZZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f2db3 +0x0a7:  movl   $0x7e15,(%esp)
081f2dba +0x0ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f2dbf +0x0b3:  mov    %eax,%ebx
081f2dc1 +0x0b5:  jmp    081f3536 <+0x82a>
081f2dc6 +0x0ba:  lea    -0x52(%ebp),%eax
081f2dc9 +0x0bd:  add    $0xe,%eax
081f2dcc +0x0c0:  mov    %eax,0x4(%esp)
081f2dd0 +0x0c4:  mov    0x10(%ebp),%eax
081f2dd3 +0x0c7:  mov    %eax,(%esp)
081f2dd6 +0x0ca:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f2ddb +0x0cf:  xor    $0x1,%eax
081f2dde +0x0d2:  test   %al,%al
081f2de0 +0x0d4:  je     081f2e0d <+0x101>
081f2de2 +0x0d6:  movl   $0x0,0xc(%esp)
081f2dea +0x0de:  movl   $0x0,0x8(%esp)
081f2df2 +0x0e6:  movl   $&_ZZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f2dfa +0x0ee:  movl   $0x7e16,(%esp)
081f2e01 +0x0f5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f2e06 +0x0fa:  mov    %eax,%ebx
081f2e08 +0x0fc:  jmp    081f3536 <+0x82a>
081f2e0d +0x101:  lea    -0x52(%ebp),%eax
081f2e10 +0x104:  add    $0x10,%eax
081f2e13 +0x107:  mov    %eax,0x4(%esp)
081f2e17 +0x10b:  mov    0x10(%ebp),%eax
081f2e1a +0x10e:  mov    %eax,(%esp)
081f2e1d +0x111:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081f2e22 +0x116:  xor    $0x1,%eax
081f2e25 +0x119:  test   %al,%al
081f2e27 +0x11b:  je     081f2e54 <+0x148>
081f2e29 +0x11d:  movl   $0x0,0xc(%esp)
081f2e31 +0x125:  movl   $0x0,0x8(%esp)
081f2e39 +0x12d:  movl   $&_ZZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f2e41 +0x135:  movl   $0x7e17,(%esp)
081f2e48 +0x13c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f2e4d +0x141:  mov    %eax,%ebx
081f2e4f +0x143:  jmp    081f3536 <+0x82a>
081f2e54 +0x148:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081f2e59 +0x14d:  movl   $0x3,0xc(%esp)
081f2e61 +0x155:  movl   $0x1,0x8(%esp)
081f2e69 +0x15d:  mov    0xc(%ebp),%edx
081f2e6c +0x160:  mov    %edx,0x4(%esp)
081f2e70 +0x164:  mov    %eax,(%esp)
081f2e73 +0x167:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081f2e78 +0x16c:  test   %al,%al
081f2e7a +0x16e:  je     081f2ea1 <+0x195>
081f2e7c +0x170:  movl   $0xd1,0x8(%esp)
081f2e84 +0x178:  movl   $0x18,0x4(%esp)
081f2e8c +0x180:  mov    0xc(%ebp),%eax
081f2e8f +0x183:  mov    %eax,(%esp)
081f2e92 +0x186:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f2e97 +0x18b:  mov    $0x0,%ebx
081f2e9c +0x190:  jmp    081f3536 <+0x82a>
081f2ea1 +0x195:  movzwl -0x44(%ebp),%eax
081f2ea5 +0x199:  movswl %ax,%ecx
081f2ea8 +0x19c:  movzbl -0x45(%ebp),%eax
081f2eac +0x1a0:  movsbl %al,%edx
081f2eaf +0x1a3:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f2eb4 +0x1a8:  mov    %ecx,0xc(%esp)
081f2eb8 +0x1ac:  mov    %edx,0x8(%esp)
081f2ebc +0x1b0:  mov    0xc(%ebp),%edx
081f2ebf +0x1b3:  mov    %edx,0x4(%esp)
081f2ec3 +0x1b7:  mov    %eax,(%esp)
081f2ec6 +0x1ba:  call   082886ae <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs>  ; CSecu_ProtectionField::GetInvenItemPtr(CUser*, char, short)
081f2ecb +0x1bf:  mov    %eax,%ebx
081f2ecd +0x1c1:  movzwl -0x44(%ebp),%eax
081f2ed1 +0x1c5:  movswl %ax,%ecx
081f2ed4 +0x1c8:  movzbl -0x45(%ebp),%eax
081f2ed8 +0x1cc:  movsbl %al,%edx
081f2edb +0x1cf:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f2ee0 +0x1d4:  mov    %ecx,0xc(%esp)
081f2ee4 +0x1d8:  mov    %edx,0x8(%esp)
081f2ee8 +0x1dc:  mov    0xc(%ebp),%edx
081f2eeb +0x1df:  mov    %edx,0x4(%esp)
081f2eef +0x1e3:  mov    %eax,(%esp)
081f2ef2 +0x1e6:  call   082884d6 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs>  ; CSecu_ProtectionField::GetItemPtr(CUser*, char, short)
081f2ef7 +0x1eb:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%edx
081f2efd +0x1f1:  mov    %ebx,0x10(%esp)
081f2f01 +0x1f5:  mov    %eax,0xc(%esp)
081f2f05 +0x1f9:  movl   $0x23,0x8(%esp)
081f2f0d +0x201:  mov    0xc(%ebp),%eax
081f2f10 +0x204:  mov    %eax,0x4(%esp)
081f2f14 +0x208:  mov    %edx,(%esp)
081f2f17 +0x20b:  call   082887d0 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item>  ; CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item const*)
081f2f1c +0x210:  mov    %eax,-0x40(%ebp)
081f2f1f +0x213:  cmpl   $0x0,-0x40(%ebp)
081f2f23 +0x217:  je     081f2f4c <+0x240>
081f2f25 +0x219:  mov    -0x40(%ebp),%eax
081f2f28 +0x21c:  movzbl %al,%eax
081f2f2b +0x21f:  mov    %eax,0x8(%esp)
081f2f2f +0x223:  movl   $0x18,0x4(%esp)
081f2f37 +0x22b:  mov    0xc(%ebp),%eax
081f2f3a +0x22e:  mov    %eax,(%esp)
081f2f3d +0x231:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f2f42 +0x236:  mov    $0x0,%ebx
081f2f47 +0x23b:  jmp    081f3536 <+0x82a>
081f2f4c +0x240:  movzwl -0x44(%ebp),%eax
081f2f50 +0x244:  movswl %ax,%edx
081f2f53 +0x247:  movzbl -0x45(%ebp),%eax
081f2f57 +0x24b:  movsbl %al,%eax
081f2f5a +0x24e:  mov    %edx,0x8(%esp)
081f2f5e +0x252:  mov    %eax,0x4(%esp)
081f2f62 +0x256:  mov    0xc(%ebp),%eax
081f2f65 +0x259:  mov    %eax,(%esp)
081f2f68 +0x25c:  call   086469f0 <_ZNK5CUser22CheckItemLockSlotSpaceEii>  ; CUser::CheckItemLockSlotSpace(int, int) const
081f2f6d +0x261:  test   %al,%al
081f2f6f +0x263:  je     081f2f96 <+0x28a>
081f2f71 +0x265:  movl   $0xd5,0x8(%esp)
081f2f79 +0x26d:  movl   $0x18,0x4(%esp)
081f2f81 +0x275:  mov    0xc(%ebp),%eax
081f2f84 +0x278:  mov    %eax,(%esp)
081f2f87 +0x27b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f2f8c +0x280:  mov    $0x0,%ebx
081f2f91 +0x285:  jmp    081f3536 <+0x82a>
081f2f96 +0x28a:  mov    0xc(%ebp),%eax
081f2f99 +0x28d:  mov    %eax,(%esp)
081f2f9c +0x290:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f2fa1 +0x295:  cmp    $0x5,%eax
081f2fa4 +0x298:  sete   %al
081f2fa7 +0x29b:  test   %al,%al
081f2fa9 +0x29d:  je     081f3010 <+0x304>
081f2fab +0x29f:  movzwl -0x44(%ebp),%eax
081f2faf +0x2a3:  movswl %ax,%edx
081f2fb2 +0x2a6:  movzbl -0x45(%ebp),%eax
081f2fb6 +0x2aa:  movsbl %al,%eax
081f2fb9 +0x2ad:  mov    %edx,0x8(%esp)
081f2fbd +0x2b1:  mov    %eax,0x4(%esp)
081f2fc1 +0x2b5:  mov    0xc(%ebp),%eax
081f2fc4 +0x2b8:  mov    %eax,(%esp)
081f2fc7 +0x2bb:  call   0868b106 <_ZN5CUser25getInDungeonItemSellCountEii>  ; CUser::getInDungeonItemSellCount(int, int)
081f2fcc +0x2c0:  cmp    $0x7,%eax
081f2fcf +0x2c3:  sete   %al
081f2fd2 +0x2c6:  test   %al,%al
081f2fd4 +0x2c8:  je     081f3010 <+0x304>
081f2fd6 +0x2ca:  mov    0xc(%ebp),%eax
081f2fd9 +0x2cd:  mov    %eax,(%esp)
081f2fdc +0x2d0:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f2fe1 +0x2d5:  movl   $0x0,0x14(%esp)
081f2fe9 +0x2dd:  movl   $0x0,0x10(%esp)
081f2ff1 +0x2e5:  movl   $0x1,0xc(%esp)
081f2ff9 +0x2ed:  movl   $0x139,0x8(%esp)
081f3001 +0x2f5:  mov    0xc(%ebp),%edx
081f3004 +0x2f8:  mov    %edx,0x4(%esp)
081f3008 +0x2fc:  mov    %eax,(%esp)
081f300b +0x2ff:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f3010 +0x304:  lea    -0x60(%ebp),%eax
081f3013 +0x307:  mov    %eax,(%esp)
081f3016 +0x30a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f301b +0x30f:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081f3020 +0x314:  mov    0xc(%ebp),%edx
081f3023 +0x317:  mov    %edx,0x4(%esp)
081f3027 +0x31b:  mov    %eax,(%esp)
081f302a +0x31e:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081f302f +0x323:  test   %al,%al
081f3031 +0x325:  je     081f30ae <+0x3a2>
081f3033 +0x327:  lea    -0x60(%ebp),%eax
081f3036 +0x32a:  mov    %eax,(%esp)
081f3039 +0x32d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f303e +0x332:  movl   $0x18,0x8(%esp)
081f3046 +0x33a:  movl   $0x1,0x4(%esp)
081f304e +0x342:  lea    -0x60(%ebp),%eax
081f3051 +0x345:  mov    %eax,(%esp)
081f3054 +0x348:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f3059 +0x34d:  movl   $0x0,0x4(%esp)
081f3061 +0x355:  lea    -0x60(%ebp),%eax
081f3064 +0x358:  mov    %eax,(%esp)
081f3067 +0x35b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f306c +0x360:  movl   $0x3c,0x4(%esp)
081f3074 +0x368:  lea    -0x60(%ebp),%eax
081f3077 +0x36b:  mov    %eax,(%esp)
081f307a +0x36e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f307f +0x373:  movl   $0x1,0x4(%esp)
081f3087 +0x37b:  lea    -0x60(%ebp),%eax
081f308a +0x37e:  mov    %eax,(%esp)
081f308d +0x381:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f3092 +0x386:  lea    -0x60(%ebp),%eax
081f3095 +0x389:  mov    %eax,0x4(%esp)
081f3099 +0x38d:  mov    0xc(%ebp),%eax
081f309c +0x390:  mov    %eax,(%esp)
081f309f +0x393:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f30a4 +0x398:  mov    $0x0,%ebx
081f30a9 +0x39d:  jmp    081f352b <+0x81f>
081f30ae +0x3a2:  movl   $0x0,-0x64(%ebp)
081f30b5 +0x3a9:  lea    -0x64(%ebp),%eax
081f30b8 +0x3ac:  mov    %eax,0x4(%esp)
081f30bc +0x3b0:  mov    0x10(%ebp),%eax
081f30bf +0x3b3:  mov    %eax,(%esp)
081f30c2 +0x3b6:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081f30c7 +0x3bb:  xor    $0x1,%eax
081f30ca +0x3be:  test   %al,%al
081f30cc +0x3c0:  je     081f30f9 <+0x3ed>
081f30ce +0x3c2:  movl   $0x0,0xc(%esp)
081f30d6 +0x3ca:  movl   $0x0,0x8(%esp)
081f30de +0x3d2:  movl   $&_ZZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f30e6 +0x3da:  movl   $0x7e71,(%esp)
081f30ed +0x3e1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f30f2 +0x3e6:  mov    %eax,%ebx
081f30f4 +0x3e8:  jmp    081f352b <+0x81f>
081f30f9 +0x3ed:  movl   $0x0,-0x3c(%ebp)
081f3100 +0x3f4:  movzbl -0x45(%ebp),%eax
081f3104 +0x3f8:  movsbl %al,%edx
081f3107 +0x3fb:  movzwl -0x44(%ebp),%eax
081f310b +0x3ff:  cwtl
081f310c +0x400:  add    %eax,%edx
081f310e +0x402:  movzwl -0x42(%ebp),%eax
081f3112 +0x406:  movzwl %ax,%eax
081f3115 +0x409:  lea    (%edx,%eax,1),%eax
081f3118 +0x40c:  mov    %eax,%edx
081f311a +0x40e:  add    -0x3c(%ebp),%edx
081f311d +0x411:  mov    -0x64(%ebp),%eax
081f3120 +0x414:  cmp    %eax,%edx
081f3122 +0x416:  je     081f315e <+0x452>
081f3124 +0x418:  mov    0xc(%ebp),%eax
081f3127 +0x41b:  mov    %eax,(%esp)
081f312a +0x41e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f312f +0x423:  movl   $0x0,0x14(%esp)
081f3137 +0x42b:  movl   $0x0,0x10(%esp)
081f313f +0x433:  movl   $0x1,0xc(%esp)
081f3147 +0x43b:  movl   $0x335,0x8(%esp)
081f314f +0x443:  mov    0xc(%ebp),%edx
081f3152 +0x446:  mov    %edx,0x4(%esp)
081f3156 +0x44a:  mov    %eax,(%esp)
081f3159 +0x44d:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f315e +0x452:  movl   $0x6,-0x38(%ebp)
081f3165 +0x459:  movzbl -0x45(%ebp),%eax
081f3169 +0x45d:  movsbl %al,%eax
081f316c +0x460:  cmp    $0x1,%eax
081f316f +0x463:  je     081f3178 <+0x46c>
081f3171 +0x465:  cmp    $0x3,%eax
081f3174 +0x468:  je     081f319d <+0x491>
081f3176 +0x46a:  jmp    081f31cc <+0x4c0>
081f3178 +0x46c:  movl   $0x17,0x8(%esp)
081f3180 +0x474:  movl   $0x18,0x4(%esp)
081f3188 +0x47c:  mov    0xc(%ebp),%eax
081f318b +0x47f:  mov    %eax,(%esp)
081f318e +0x482:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3193 +0x487:  mov    $0x0,%ebx
081f3198 +0x48c:  jmp    081f352b <+0x81f>
081f319d +0x491:  movzwl -0x44(%ebp),%eax
081f31a1 +0x495:  cmp    $0x9,%ax
081f31a5 +0x499:  jg     081f31cc <+0x4c0>
081f31a7 +0x49b:  movl   $0x17,0x8(%esp)
081f31af +0x4a3:  movl   $0x18,0x4(%esp)
081f31b7 +0x4ab:  mov    0xc(%ebp),%eax
081f31ba +0x4ae:  mov    %eax,(%esp)
081f31bd +0x4b1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f31c2 +0x4b6:  mov    $0x0,%ebx
081f31c7 +0x4bb:  jmp    081f352b <+0x81f>
081f31cc +0x4c0:  mov    0xc(%ebp),%eax
081f31cf +0x4c3:  mov    %eax,(%esp)
081f31d2 +0x4c6:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f31d7 +0x4cb:  cmp    $0x5,%eax
081f31da +0x4ce:  sete   %al
081f31dd +0x4d1:  test   %al,%al
081f31df +0x4d3:  je     081f329d <+0x591>
081f31e5 +0x4d9:  mov    0xc(%ebp),%eax
081f31e8 +0x4dc:  mov    %eax,(%esp)
081f31eb +0x4df:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081f31f0 +0x4e4:  mov    %eax,-0x2c(%ebp)
081f31f3 +0x4e7:  cmpl   $0x0,-0x2c(%ebp)
081f31f7 +0x4eb:  je     081f329d <+0x591>
081f31fd +0x4f1:  mov    -0x2c(%ebp),%eax
081f3200 +0x4f4:  add    $0xb24,%eax
081f3205 +0x4f9:  mov    %eax,(%esp)
081f3208 +0x4fc:  call   0822cffc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26a6
081f320d +0x501:  mov    %eax,-0x28(%ebp)
081f3210 +0x504:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f3215 +0x509:  mov    -0x28(%ebp),%edx
081f3218 +0x50c:  mov    %edx,0x4(%esp)
081f321c +0x510:  mov    %eax,(%esp)
081f321f +0x513:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
081f3224 +0x518:  mov    %eax,-0x24(%ebp)
081f3227 +0x51b:  cmpl   $0x0,-0x24(%ebp)
081f322b +0x51f:  je     081f325a <+0x54e>
081f322d +0x521:  mov    -0x24(%ebp),%eax
081f3230 +0x524:  mov    %eax,(%esp)
081f3233 +0x527:  call   0822b492 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb3c
081f3238 +0x52c:  test   %eax,%eax
081f323a +0x52e:  jne    081f325a <+0x54e>
081f323c +0x530:  mov    -0x2c(%ebp),%eax
081f323f +0x533:  add    $0xb24,%eax
081f3244 +0x538:  mov    %eax,(%esp)
081f3247 +0x53b:  call   0822cee2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x258c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x258c
081f324c +0x540:  xor    $0x1,%eax
081f324f +0x543:  test   %al,%al
081f3251 +0x545:  je     081f325a <+0x54e>
081f3253 +0x547:  mov    $0x1,%eax
081f3258 +0x54c:  jmp    081f325f <+0x553>
081f325a +0x54e:  mov    $0x0,%eax
081f325f +0x553:  test   %al,%al
081f3261 +0x555:  je     081f329d <+0x591>
081f3263 +0x557:  mov    0xc(%ebp),%eax
081f3266 +0x55a:  mov    %eax,(%esp)
081f3269 +0x55d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f326e +0x562:  movl   $0x0,0x14(%esp)
081f3276 +0x56a:  movl   $0x0,0x10(%esp)
081f327e +0x572:  movl   $0x1,0xc(%esp)
081f3286 +0x57a:  movl   $0x323,0x8(%esp)
081f328e +0x582:  mov    0xc(%ebp),%edx
081f3291 +0x585:  mov    %edx,0x4(%esp)
081f3295 +0x589:  mov    %eax,(%esp)
081f3298 +0x58c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f329d +0x591:  mov    0xc(%ebp),%eax
081f32a0 +0x594:  mov    %eax,(%esp)
081f32a3 +0x597:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f32a8 +0x59c:  cmp    $0x3,%eax
081f32ab +0x59f:  sete   %al
081f32ae +0x5a2:  test   %al,%al
081f32b0 +0x5a4:  je     081f338a <+0x67e>
081f32b6 +0x5aa:  movl   $0x0,0x4(%esp)
081f32be +0x5b2:  mov    0xc(%ebp),%eax
081f32c1 +0x5b5:  mov    %eax,(%esp)
081f32c4 +0x5b8:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
081f32c9 +0x5bd:  mov    %eax,%ebx
081f32cb +0x5bf:  mov    0xc(%ebp),%eax
081f32ce +0x5c2:  mov    %eax,(%esp)
081f32d1 +0x5c5:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f32d6 +0x5ca:  movsbl %al,%esi
081f32d9 +0x5cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f32de +0x5d2:  mov    %ebx,0x8(%esp)
081f32e2 +0x5d6:  mov    %esi,0x4(%esp)
081f32e6 +0x5da:  mov    %eax,(%esp)
081f32e9 +0x5dd:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
081f32ee +0x5e2:  test   %al,%al
081f32f0 +0x5e4:  je     081f338a <+0x67e>
081f32f6 +0x5ea:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f32fb +0x5ef:  mov    0xc(%ebp),%edx
081f32fe +0x5f2:  mov    %edx,0x4(%esp)
081f3302 +0x5f6:  mov    %eax,(%esp)
081f3305 +0x5f9:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
081f330a +0x5fe:  mov    %eax,-0x20(%ebp)
081f330d +0x601:  cmpl   $0x0,-0x20(%ebp)
081f3311 +0x605:  je     081f338a <+0x67e>
081f3313 +0x607:  movl   $0x0,0x4(%esp)
081f331b +0x60f:  mov    0xc(%ebp),%eax
081f331e +0x612:  mov    %eax,(%esp)
081f3321 +0x615:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
081f3326 +0x61a:  mov    %eax,0x4(%esp)
081f332a +0x61e:  mov    -0x20(%ebp),%eax
081f332d +0x621:  mov    %eax,(%esp)
081f3330 +0x624:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
081f3335 +0x629:  mov    %eax,-0x1c(%ebp)
081f3338 +0x62c:  cmpl   $0x0,-0x1c(%ebp)
081f333c +0x630:  je     081f338a <+0x67e>
081f333e +0x632:  mov    -0x1c(%ebp),%eax
081f3341 +0x635:  mov    %eax,(%esp)
081f3344 +0x638:  call   082343aa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a54>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a54
081f3349 +0x63d:  xor    $0x1,%eax
081f334c +0x640:  test   %al,%al
081f334e +0x642:  je     081f338a <+0x67e>
081f3350 +0x644:  mov    0xc(%ebp),%eax
081f3353 +0x647:  mov    %eax,(%esp)
081f3356 +0x64a:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f335b +0x64f:  movl   $0x0,0x14(%esp)
081f3363 +0x657:  movl   $0x0,0x10(%esp)
081f336b +0x65f:  movl   $0x1,0xc(%esp)
081f3373 +0x667:  movl   $0x324,0x8(%esp)
081f337b +0x66f:  mov    0xc(%ebp),%edx
081f337e +0x672:  mov    %edx,0x4(%esp)
081f3382 +0x676:  mov    %eax,(%esp)
081f3385 +0x679:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f338a +0x67e:  movzwl -0x42(%ebp),%eax
081f338e +0x682:  movswl %ax,%edi
081f3391 +0x685:  movzwl -0x44(%ebp),%eax
081f3395 +0x689:  movswl %ax,%esi
081f3398 +0x68c:  movzbl -0x45(%ebp),%eax
081f339c +0x690:  movsbl %al,%ebx
081f339f +0x693:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
081f33a4 +0x698:  mov    %edi,0x10(%esp)
081f33a8 +0x69c:  mov    %esi,0xc(%esp)
081f33ac +0x6a0:  mov    %ebx,0x8(%esp)
081f33b0 +0x6a4:  mov    0xc(%ebp),%edx
081f33b3 +0x6a7:  mov    %edx,0x4(%esp)
081f33b7 +0x6ab:  mov    %eax,(%esp)
081f33ba +0x6ae:  call   086193f8 <_ZN5Store14user_sell_itemEP5CUsercss>  ; Store::user_sell_item(CUser*, char, short, short)
081f33bf +0x6b3:  mov    %eax,-0x34(%ebp)
081f33c2 +0x6b6:  cmpl   $0x0,-0x34(%ebp)
081f33c6 +0x6ba:  je     081f345a <+0x74e>
081f33cc +0x6c0:  movl   $0x18,0x8(%esp)
081f33d4 +0x6c8:  movl   $0x1,0x4(%esp)
081f33dc +0x6d0:  lea    -0x60(%ebp),%eax
081f33df +0x6d3:  mov    %eax,(%esp)
081f33e2 +0x6d6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f33e7 +0x6db:  movl   $0x0,0x4(%esp)
081f33ef +0x6e3:  lea    -0x60(%ebp),%eax
081f33f2 +0x6e6:  mov    %eax,(%esp)
081f33f5 +0x6e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f33fa +0x6ee:  mov    -0x34(%ebp),%eax
081f33fd +0x6f1:  mov    %eax,0x4(%esp)
081f3401 +0x6f5:  lea    -0x60(%ebp),%eax
081f3404 +0x6f8:  mov    %eax,(%esp)
081f3407 +0x6fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f340c +0x700:  movl   $0x1,0x4(%esp)
081f3414 +0x708:  lea    -0x60(%ebp),%eax
081f3417 +0x70b:  mov    %eax,(%esp)
081f341a +0x70e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f341f +0x713:  lea    -0x60(%ebp),%eax
081f3422 +0x716:  mov    %eax,0x4(%esp)
081f3426 +0x71a:  mov    0xc(%ebp),%eax
081f3429 +0x71d:  mov    %eax,(%esp)
081f342c +0x720:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f3431 +0x725:  cmpl   $0x16,-0x34(%ebp)
081f3435 +0x729:  jne    081f345a <+0x74e>
081f3437 +0x72b:  movl   $0x0,0xc(%esp)
081f343f +0x733:  movl   $0x0,0x8(%esp)
081f3447 +0x73b:  movl   $0x3,0x4(%esp)
081f344f +0x743:  mov    0xc(%ebp),%eax
081f3452 +0x746:  mov    %eax,(%esp)
081f3455 +0x749:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
081f345a +0x74e:  movl   $0x0,-0x30(%ebp)
081f3461 +0x755:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081f3468 +0x75c:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
081f346d +0x761:  movl   $0x3e8,0x8(%esp)
081f3475 +0x769:  mov    %eax,0x4(%esp)
081f3479 +0x76d:  mov    0xc(%ebp),%eax
081f347c +0x770:  mov    %eax,(%esp)
081f347f +0x773:  call   08230256 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5900>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5900
081f3484 +0x778:  mov    %eax,-0x30(%ebp)
081f3487 +0x77b:  cmpl   $0x2,-0x30(%ebp)
081f348b +0x77f:  jne    081f34c9 <+0x7bd>
081f348d +0x781:  mov    0xc(%ebp),%eax
081f3490 +0x784:  mov    %eax,(%esp)
081f3493 +0x787:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f3498 +0x78c:  movl   $0x0,0x14(%esp)
081f34a0 +0x794:  movl   $0x0,0x10(%esp)
081f34a8 +0x79c:  movl   $0x1,0xc(%esp)
081f34b0 +0x7a4:  movl   $0x138,0x8(%esp)
081f34b8 +0x7ac:  mov    0xc(%ebp),%edx
081f34bb +0x7af:  mov    %edx,0x4(%esp)
081f34bf +0x7b3:  mov    %eax,(%esp)
081f34c2 +0x7b6:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f34c7 +0x7bb:  jmp    081f3509 <+0x7fd>
081f34c9 +0x7bd:  cmpl   $0x4,-0x30(%ebp)
081f34cd +0x7c1:  jne    081f3509 <+0x7fd>
081f34cf +0x7c3:  mov    0xc(%ebp),%eax
081f34d2 +0x7c6:  mov    %eax,(%esp)
081f34d5 +0x7c9:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f34da +0x7ce:  movl   $0x0,0x14(%esp)
081f34e2 +0x7d6:  movl   $0x0,0x10(%esp)
081f34ea +0x7de:  movl   $0x1,0xc(%esp)
081f34f2 +0x7e6:  movl   $0x321,0x8(%esp)
081f34fa +0x7ee:  mov    0xc(%ebp),%edx
081f34fd +0x7f1:  mov    %edx,0x4(%esp)
081f3501 +0x7f5:  mov    %eax,(%esp)
081f3504 +0x7f8:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f3509 +0x7fd:  mov    $0x0,%ebx
081f350e +0x802:  jmp    081f352b <+0x81f>
081f3510 +0x804:  mov    %edx,%ebx
081f3512 +0x806:  mov    %eax,%esi
081f3514 +0x808:  lea    -0x60(%ebp),%eax
081f3517 +0x80b:  mov    %eax,(%esp)
081f351a +0x80e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f351f +0x813:  mov    %esi,%eax
081f3521 +0x815:  mov    %ebx,%edx
081f3523 +0x817:  mov    %eax,(%esp)
081f3526 +0x81a:  call   08ae3750 <_Unwind_Resume>
081f352b +0x81f:  lea    -0x60(%ebp),%eax
081f352e +0x822:  mov    %eax,(%esp)
081f3531 +0x825:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f3536 +0x82a:  mov    %ebx,%eax
081f3538 +0x82c:  add    $0x7c,%esp
081f353b +0x82f:  pop    %ebx
081f353c +0x830:  pop    %esi
081f353d +0x831:  pop    %edi
081f353e +0x832:  pop    %ebp
081f353f +0x833:  ret
```

## 反编译 C

```c
// DisPatcher_SellItem::dispatch_sig @ 0x81f2d0c

/* DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SellItem::dispatch_sig(DisPatcher_SellItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ServiceRestrictManager *pSVar4;
  undefined4 uVar5;
  CHackAnalyzer *pCVar6;
  CPrivateStoreMgr *this_00;
  GameWorld *pGVar7;
  Store *this_01;
  uint uVar8;
  undefined4 uVar9;
  ulong local_68;
  PacketGuard local_64 [27];
  char local_49;
  short local_48;
  ushort local_46;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  CMap *local_28;
  Village *local_24;
  Area *local_20;
  
  iVar3 = CUser::get_state(param_1);
  if ((((iVar3 == 3) || (iVar3 = CUser::get_state(param_1), iVar3 == 8)) ||
      (iVar3 = CUser::get_state(param_1), iVar3 == 5)) ||
     ((iVar3 = CUser::get_state(param_1), iVar3 == 10 ||
      (iVar3 = CUser::get_state(param_1), iVar3 == 0xc)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar9 = 0;
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,&local_49);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_short(param_2,&local_48);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_short(param_2,&local_46);
        if (cVar2 == '\x01') {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,3);
          if (cVar2 == '\0') {
            uVar9 = CSecu_ProtectionField::GetInvenItemPtr
                              (GlobalData::s_pSecuProtectionField,param_1,local_49,local_48);
            uVar5 = CSecu_ProtectionField::GetItemPtr
                              (GlobalData::s_pSecuProtectionField,param_1,local_49,local_48);
            local_44 = CSecu_ProtectionField::CheckItemRarity
                                 (GlobalData::s_pSecuProtectionField,param_1,0x23,uVar5,uVar9);
            if (local_44 == 0) {
              cVar2 = CUser::CheckItemLockSlotSpace(param_1,(int)local_49,(int)local_48);
              if (cVar2 == '\0') {
                iVar3 = CUser::get_state(param_1);
                if ((iVar3 == 5) &&
                   (iVar3 = CUser::getInDungeonItemSellCount(param_1,(int)local_49,(int)local_48),
                   iVar3 == 7)) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x139,1,0,0);
                }
                PacketGuard::PacketGuard(local_64);
                    /* try { // try from 081f301b to 081f3508 has its CatchHandler @ 081f3510 */
                this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
                cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
                if (cVar2 == '\0') {
                  local_68 = 0;
                  cVar2 = PacketBuf::get_int(param_2,&local_68);
                  if (cVar2 == '\x01') {
                    local_40 = 0;
                    if ((int)local_49 + (int)local_48 + (uint)local_46 != local_68) {
                      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                      WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x335,1,0,0);
                    }
                    local_3c = 6;
                    if (local_49 == '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x18,0x17);
                      uVar9 = 0;
                    }
                    else if ((local_49 == '\x03') && (local_48 < 10)) {
                      CUser::SendCmdErrorPacket(param_1,0x18,0x17);
                      uVar9 = 0;
                    }
                    else {
                      iVar3 = CUser::get_state(param_1);
                      if ((iVar3 == 5) && (local_30 = CUser::GetParty(param_1), local_30 != 0)) {
                        local_2c = CBattle_Field::get_cur_map((CBattle_Field *)(local_30 + 0xb24));
                        iVar3 = G_CDataManager();
                        local_28 = (CMap *)CDataManager::find_map(iVar3);
                        if ((local_28 == (CMap *)0x0) ||
                           ((iVar3 = CMap::getAssignedNPCCount(local_28), iVar3 != 0 ||
                            (cVar2 = CBattle_Field::IsAssignNPCByPotion
                                               ((CBattle_Field *)(local_30 + 0xb24)),
                            cVar2 == '\x01')))) {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                        }
                        if (bVar1) {
                          pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                          WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x323,1,0,0);
                        }
                      }
                      iVar3 = CUser::get_state(param_1);
                      if (iVar3 == 3) {
                        iVar3 = CUser::get_area(param_1,false);
                        cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                        pGVar7 = (GameWorld *)G_GameWorld();
                        cVar2 = GameWorld::check_valid_area(pGVar7,(int)cVar2,iVar3);
                        if (cVar2 != '\0') {
                          pGVar7 = (GameWorld *)G_GameWorld();
                          local_24 = (Village *)GameWorld::getUserVillage(pGVar7,param_1);
                          if (local_24 != (Village *)0x0) {
                            iVar3 = CUser::get_area(param_1,false);
                            local_20 = (Area *)Village::getArea(local_24,iVar3);
                            if ((local_20 != (Area *)0x0) &&
                               (cVar2 = Area::IsExistItemShopNPC(local_20), cVar2 != '\x01')) {
                              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x324,1,0,0);
                            }
                          }
                        }
                      }
                      this_01 = (Store *)G_Store();
                      local_38 = Store::user_sell_item(this_01,param_1,local_49,local_48,local_46);
                      if (local_38 != 0) {
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x18);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,local_38);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                        CUser::Send(param_1,local_64);
                        if (local_38 == 0x16) {
                          CUser::SendMoneyFullReason(param_1,3,0,0);
                        }
                      }
                      local_34 = 0;
                      uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_)
                      ;
                      local_34 = CUser::SellItemTimeChecker(param_1,uVar8,1000);
                      if (local_34 == 2) {
                        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x138,1,0,0);
                      }
                      else if (local_34 == 4) {
                        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x321,1,0,0);
                      }
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar9 = LineFunc(0x7e71,
                                     "virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x18);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0x3c);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                  CUser::Send(param_1,local_64);
                  uVar9 = 0;
                }
                PacketGuard::~PacketGuard(local_64);
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x18,0xd5);
                uVar9 = 0;
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x18,local_44 & 0xff);
              uVar9 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x18,0xd1);
            uVar9 = 0;
          }
        }
        else {
          uVar9 = LineFunc(0x7e17,
                           "virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
        }
      }
      else {
        uVar9 = LineFunc(0x7e16,"virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar9 = LineFunc(0x7e15,"virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar9;
}
```
