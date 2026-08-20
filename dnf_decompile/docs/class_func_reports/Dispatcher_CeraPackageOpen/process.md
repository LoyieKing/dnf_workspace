# process

`_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CeraPackageOpen::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CeraPackageOpen` | `0x081e788a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e788a  _ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CeraPackageOpen::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e788a, 0x081e7cc1]
081e788a +0x000:  push   %ebp
081e788b +0x001:  mov    %esp,%ebp
081e788d +0x003:  push   %esi
081e788e +0x004:  push   %ebx
081e788f +0x005:  sub    $0xf0,%esp
081e7895 +0x00b:  mov    0x10(%ebp),%eax
081e7898 +0x00e:  mov    %eax,-0x2c(%ebp)
081e789b +0x011:  mov    0x14(%ebp),%eax
081e789e +0x014:  mov    %eax,-0x28(%ebp)
081e78a1 +0x017:  mov    0x10(%ebp),%eax
081e78a4 +0x01a:  mov    %eax,0x8(%esp)
081e78a8 +0x01e:  mov    0xc(%ebp),%eax
081e78ab +0x021:  mov    %eax,0x4(%esp)
081e78af +0x025:  mov    0x8(%ebp),%eax
081e78b2 +0x028:  mov    %eax,(%esp)
081e78b5 +0x02b:  call   081e7cc2 <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_CeraPackageOpen::check_error(CUser*, MSG_BASE&)
081e78ba +0x030:  mov    -0x28(%ebp),%edx
081e78bd +0x033:  mov    %eax,0x4(%edx)
081e78c0 +0x036:  mov    -0x28(%ebp),%eax
081e78c3 +0x039:  mov    0x4(%eax),%eax
081e78c6 +0x03c:  test   %eax,%eax
081e78c8 +0x03e:  je     081e78f4 <+0x6a>
081e78ca +0x040:  mov    -0x28(%ebp),%eax
081e78cd +0x043:  mov    0x4(%eax),%eax
081e78d0 +0x046:  movzbl %al,%eax
081e78d3 +0x049:  mov    %eax,0x8(%esp)
081e78d7 +0x04d:  movl   $0x207,0x4(%esp)
081e78df +0x055:  mov    0xc(%ebp),%eax
081e78e2 +0x058:  mov    %eax,(%esp)
081e78e5 +0x05b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e78ea +0x060:  mov    $0x0,%ebx
081e78ef +0x065:  jmp    081e7cb5 <+0x42b>
081e78f4 +0x06a:  mov    0xc(%ebp),%eax
081e78f7 +0x06d:  mov    %eax,-0x24(%ebp)
081e78fa +0x070:  mov    -0x2c(%ebp),%eax
081e78fd +0x073:  movzwl 0xe(%eax),%eax
081e7901 +0x077:  cwtl
081e7902 +0x078:  mov    %eax,0x8(%esp)
081e7906 +0x07c:  movl   $0x1,0x4(%esp)
081e790e +0x084:  mov    -0x24(%ebp),%eax
081e7911 +0x087:  mov    %eax,(%esp)
081e7914 +0x08a:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081e7919 +0x08f:  test   %al,%al
081e791b +0x091:  je     081e7942 <+0xb8>
081e791d +0x093:  movl   $0x4,0x8(%esp)
081e7925 +0x09b:  movl   $0x207,0x4(%esp)
081e792d +0x0a3:  mov    0xc(%ebp),%eax
081e7930 +0x0a6:  mov    %eax,(%esp)
081e7933 +0x0a9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e7938 +0x0ae:  mov    $0x0,%ebx
081e793d +0x0b3:  jmp    081e7cb5 <+0x42b>
081e7942 +0x0b8:  mov    -0x2c(%ebp),%eax
081e7945 +0x0bb:  movzwl 0xe(%eax),%eax
081e7949 +0x0bf:  movswl %ax,%ebx
081e794c +0x0c2:  mov    -0x24(%ebp),%eax
081e794f +0x0c5:  mov    %eax,(%esp)
081e7952 +0x0c8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e7957 +0x0cd:  lea    -0xc9(%ebp),%edx
081e795d +0x0d3:  mov    %ebx,0xc(%esp)
081e7961 +0x0d7:  movl   $0x1,0x8(%esp)
081e7969 +0x0df:  mov    %eax,0x4(%esp)
081e796d +0x0e3:  mov    %edx,(%esp)
081e7970 +0x0e6:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e7975 +0x0eb:  sub    $0x4,%esp
081e7978 +0x0ee:  mov    -0xc7(%ebp),%eax
081e797e +0x0f4:  test   %eax,%eax
081e7980 +0x0f6:  jne    081e79a7 <+0x11d>
081e7982 +0x0f8:  movl   $0x1,0x8(%esp)
081e798a +0x100:  movl   $0x207,0x4(%esp)
081e7992 +0x108:  mov    0xc(%ebp),%eax
081e7995 +0x10b:  mov    %eax,(%esp)
081e7998 +0x10e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e799d +0x113:  mov    $0x0,%ebx
081e79a2 +0x118:  jmp    081e7cb5 <+0x42b>
081e79a7 +0x11d:  mov    -0xc7(%ebp),%eax
081e79ad +0x123:  mov    %eax,%ebx
081e79af +0x125:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e79b4 +0x12a:  mov    %ebx,0x4(%esp)
081e79b8 +0x12e:  mov    %eax,(%esp)
081e79bb +0x131:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e79c0 +0x136:  mov    %eax,-0x20(%ebp)
081e79c3 +0x139:  cmpl   $0x0,-0x20(%ebp)
081e79c7 +0x13d:  jne    081e79d3 <+0x149>
081e79c9 +0x13f:  mov    $0x1,%ebx
081e79ce +0x144:  jmp    081e7cb5 <+0x42b>
081e79d3 +0x149:  cmpl   $0x0,-0x20(%ebp)
081e79d7 +0x14d:  je     081e7a02 <+0x178>
081e79d9 +0x14f:  mov    -0x20(%ebp),%eax
081e79dc +0x152:  mov    %eax,(%esp)
081e79df +0x155:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081e79e4 +0x15a:  xor    $0x1,%eax
081e79e7 +0x15d:  test   %al,%al
081e79e9 +0x15f:  jne    081e7a02 <+0x178>
081e79eb +0x161:  mov    -0x20(%ebp),%eax
081e79ee +0x164:  mov    (%eax),%eax
081e79f0 +0x166:  add    $0xc,%eax
081e79f3 +0x169:  mov    (%eax),%edx
081e79f5 +0x16b:  mov    -0x20(%ebp),%eax
081e79f8 +0x16e:  mov    %eax,(%esp)
081e79fb +0x171:  call   *%edx
081e79fd +0x173:  cmp    $0x26,%eax
081e7a00 +0x176:  je     081e7a09 <+0x17f>
081e7a02 +0x178:  mov    $0x1,%eax
081e7a07 +0x17d:  jmp    081e7a0e <+0x184>
081e7a09 +0x17f:  mov    $0x0,%eax
081e7a0e +0x184:  test   %al,%al
081e7a10 +0x186:  je     081e7a1c <+0x192>
081e7a12 +0x188:  mov    $0x1,%ebx
081e7a17 +0x18d:  jmp    081e7cb5 <+0x42b>
081e7a1c +0x192:  movl   $0x0,-0x1c(%ebp)
081e7a23 +0x199:  movl   $0x0,-0x18(%ebp)
081e7a2a +0x1a0:  movl   $0x0,-0x14(%ebp)
081e7a31 +0x1a7:  lea    -0x4c(%ebp),%eax
081e7a34 +0x1aa:  mov    %eax,(%esp)
081e7a37 +0x1ad:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
081e7a3c +0x1b2:  movl   $0x0,-0xc(%ebp)
081e7a43 +0x1b9:  jmp    081e7a8c <+0x202>
081e7a45 +0x1bb:  mov    -0xc(%ebp),%eax
081e7a48 +0x1be:  add    $0x2,%eax
081e7a4b +0x1c1:  shl    $0x3,%eax
081e7a4e +0x1c4:  add    -0x2c(%ebp),%eax
081e7a51 +0x1c7:  lea    0x8(%eax),%edx
081e7a54 +0x1ca:  mov    -0xc(%ebp),%eax
081e7a57 +0x1cd:  add    $0x2,%eax
081e7a5a +0x1d0:  shl    $0x3,%eax
081e7a5d +0x1d3:  add    -0x2c(%ebp),%eax
081e7a60 +0x1d6:  add    $0x4,%eax
081e7a63 +0x1d9:  mov    %edx,0x8(%esp)
081e7a67 +0x1dd:  mov    %eax,0x4(%esp)
081e7a6b +0x1e1:  lea    -0x34(%ebp),%eax
081e7a6e +0x1e4:  mov    %eax,(%esp)
081e7a71 +0x1e7:  call   082376de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd88
081e7a76 +0x1ec:  lea    -0x34(%ebp),%eax
081e7a79 +0x1ef:  mov    %eax,0x4(%esp)
081e7a7d +0x1f3:  lea    -0x4c(%ebp),%eax
081e7a80 +0x1f6:  mov    %eax,(%esp)
081e7a83 +0x1f9:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
081e7a88 +0x1fe:  addl   $0x1,-0xc(%ebp)
081e7a8c +0x202:  mov    -0x2c(%ebp),%eax
081e7a8f +0x205:  movzbl 0x10(%eax),%eax
081e7a93 +0x209:  movzbl %al,%eax
081e7a96 +0x20c:  cmp    -0xc(%ebp),%eax
081e7a99 +0x20f:  setg   %al
081e7a9c +0x212:  test   %al,%al
081e7a9e +0x214:  jne    081e7a45 <+0x1bb>
081e7aa0 +0x216:  movl   $0x0,-0x10(%ebp)
081e7aa7 +0x21d:  lea    -0x58(%ebp),%eax
081e7aaa +0x220:  mov    %eax,(%esp)
081e7aad +0x223:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
081e7ab2 +0x228:  lea    -0x4c(%ebp),%eax
081e7ab5 +0x22b:  mov    %eax,0x8(%esp)
081e7ab9 +0x22f:  lea    -0x58(%ebp),%eax
081e7abc +0x232:  mov    %eax,0x4(%esp)
081e7ac0 +0x236:  lea    -0x8c(%ebp),%eax
081e7ac6 +0x23c:  mov    %eax,(%esp)
081e7ac9 +0x23f:  call   08234ec2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa56c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa56c
081e7ace +0x244:  movl   $0x0,-0x84(%ebp)
081e7ad8 +0x24e:  mov    0xc(%ebp),%eax
081e7adb +0x251:  mov    %eax,-0x8c(%ebp)
081e7ae1 +0x257:  mov    -0xc7(%ebp),%eax
081e7ae7 +0x25d:  mov    %eax,-0x88(%ebp)
081e7aed +0x263:  mov    -0x18(%ebp),%eax
081e7af0 +0x266:  mov    %eax,-0x78(%ebp)
081e7af3 +0x269:  mov    -0x14(%ebp),%eax
081e7af6 +0x26c:  mov    %eax,-0x74(%ebp)
081e7af9 +0x26f:  movb   $0x0,-0x70(%ebp)
081e7afd +0x273:  movb   $0x0,-0x6f(%ebp)
081e7b01 +0x277:  movb   $0x0,-0x6e(%ebp)
081e7b05 +0x27b:  lea    -0x5c(%ebp),%eax
081e7b08 +0x27e:  mov    %eax,(%esp)
081e7b0b +0x281:  call   08234f36 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5e0
081e7b10 +0x286:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081e7b15 +0x28b:  lea    -0x5c(%ebp),%edx
081e7b18 +0x28e:  mov    %edx,0xc(%esp)
081e7b1c +0x292:  lea    -0x8c(%ebp),%edx
081e7b22 +0x298:  mov    %edx,0x8(%esp)
081e7b26 +0x29c:  movl   $0x5,0x4(%esp)
081e7b2e +0x2a4:  mov    %eax,(%esp)
081e7b31 +0x2a7:  call   08325854 <_ZN8WongWork9CCeraShop22CallSpecialItemHandlerEiRK19STSpecailItem_ParamR20STSpecailItem_Result>  ; WongWork::CCeraShop::CallSpecialItemHandler(int, STSpecailItem_Param const&, STSpecailItem_Result&)
081e7b36 +0x2ac:  xor    $0x1,%eax
081e7b39 +0x2af:  test   %al,%al
081e7b3b +0x2b1:  je     081e7b64 <+0x2da>
081e7b3d +0x2b3:  mov    -0x5c(%ebp),%eax
081e7b40 +0x2b6:  movzbl %al,%eax
081e7b43 +0x2b9:  mov    %eax,0x8(%esp)
081e7b47 +0x2bd:  movl   $0x207,0x4(%esp)
081e7b4f +0x2c5:  mov    0xc(%ebp),%eax
081e7b52 +0x2c8:  mov    %eax,(%esp)
081e7b55 +0x2cb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e7b5a +0x2d0:  mov    $0x0,%ebx
081e7b5f +0x2d5:  jmp    081e7c82 <+0x3f8>
081e7b64 +0x2da:  mov    -0x5c(%ebp),%eax
081e7b67 +0x2dd:  test   %eax,%eax
081e7b69 +0x2df:  jne    081e7c49 <+0x3bf>
081e7b6f +0x2e5:  mov    -0x2c(%ebp),%eax
081e7b72 +0x2e8:  movzwl 0xe(%eax),%eax
081e7b76 +0x2ec:  movswl %ax,%ebx
081e7b79 +0x2ef:  mov    0xc(%ebp),%eax
081e7b7c +0x2f2:  mov    %eax,(%esp)
081e7b7f +0x2f5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e7b84 +0x2fa:  movl   $0x1,0x14(%esp)
081e7b8c +0x302:  movl   $0x3,0x10(%esp)
081e7b94 +0x30a:  movl   $0x1,0xc(%esp)
081e7b9c +0x312:  mov    %ebx,0x8(%esp)
081e7ba0 +0x316:  movl   $0x1,0x4(%esp)
081e7ba8 +0x31e:  mov    %eax,(%esp)
081e7bab +0x321:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e7bb0 +0x326:  lea    -0x68(%ebp),%eax
081e7bb3 +0x329:  mov    %eax,(%esp)
081e7bb6 +0x32c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e7bbb +0x331:  movl   $0x207,0x8(%esp)
081e7bc3 +0x339:  movl   $0x1,0x4(%esp)
081e7bcb +0x341:  lea    -0x68(%ebp),%eax
081e7bce +0x344:  mov    %eax,(%esp)
081e7bd1 +0x347:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e7bd6 +0x34c:  movl   $0x1,0x4(%esp)
081e7bde +0x354:  lea    -0x68(%ebp),%eax
081e7be1 +0x357:  mov    %eax,(%esp)
081e7be4 +0x35a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e7be9 +0x35f:  mov    -0x2c(%ebp),%eax
081e7bec +0x362:  movzwl 0xe(%eax),%eax
081e7bf0 +0x366:  cwtl
081e7bf1 +0x367:  mov    %eax,0x4(%esp)
081e7bf5 +0x36b:  lea    -0x68(%ebp),%eax
081e7bf8 +0x36e:  mov    %eax,(%esp)
081e7bfb +0x371:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e7c00 +0x376:  movl   $0x1,0x4(%esp)
081e7c08 +0x37e:  lea    -0x68(%ebp),%eax
081e7c0b +0x381:  mov    %eax,(%esp)
081e7c0e +0x384:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e7c13 +0x389:  lea    -0x68(%ebp),%eax
081e7c16 +0x38c:  mov    %eax,0x4(%esp)
081e7c1a +0x390:  mov    0xc(%ebp),%eax
081e7c1d +0x393:  mov    %eax,(%esp)
081e7c20 +0x396:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e7c25 +0x39b:  jmp    081e7c3c <+0x3b2>
081e7c27 +0x39d:  mov    %edx,%ebx
081e7c29 +0x39f:  mov    %eax,%esi
081e7c2b +0x3a1:  lea    -0x68(%ebp),%eax
081e7c2e +0x3a4:  mov    %eax,(%esp)
081e7c31 +0x3a7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e7c36 +0x3ac:  mov    %esi,%eax
081e7c38 +0x3ae:  mov    %ebx,%edx
081e7c3a +0x3b0:  jmp    081e7c6d <+0x3e3>
081e7c3c +0x3b2:  lea    -0x68(%ebp),%eax
081e7c3f +0x3b5:  mov    %eax,(%esp)
081e7c42 +0x3b8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e7c47 +0x3bd:  jmp    081e7c66 <+0x3dc>
081e7c49 +0x3bf:  mov    -0x5c(%ebp),%eax
081e7c4c +0x3c2:  movzbl %al,%eax
081e7c4f +0x3c5:  mov    %eax,0x8(%esp)
081e7c53 +0x3c9:  movl   $0x207,0x4(%esp)
081e7c5b +0x3d1:  mov    0xc(%ebp),%eax
081e7c5e +0x3d4:  mov    %eax,(%esp)
081e7c61 +0x3d7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e7c66 +0x3dc:  mov    $0x0,%ebx
081e7c6b +0x3e1:  jmp    081e7c82 <+0x3f8>
081e7c6d +0x3e3:  mov    %edx,%ebx
081e7c6f +0x3e5:  mov    %eax,%esi
081e7c71 +0x3e7:  lea    -0x58(%ebp),%eax
081e7c74 +0x3ea:  mov    %eax,(%esp)
081e7c77 +0x3ed:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
081e7c7c +0x3f2:  mov    %esi,%eax
081e7c7e +0x3f4:  mov    %ebx,%edx
081e7c80 +0x3f6:  jmp    081e7c8f <+0x405>
081e7c82 +0x3f8:  lea    -0x58(%ebp),%eax
081e7c85 +0x3fb:  mov    %eax,(%esp)
081e7c88 +0x3fe:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
081e7c8d +0x403:  jmp    081e7caa <+0x420>
081e7c8f +0x405:  mov    %edx,%ebx
081e7c91 +0x407:  mov    %eax,%esi
081e7c93 +0x409:  lea    -0x4c(%ebp),%eax
081e7c96 +0x40c:  mov    %eax,(%esp)
081e7c99 +0x40f:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
081e7c9e +0x414:  mov    %esi,%eax
081e7ca0 +0x416:  mov    %ebx,%edx
081e7ca2 +0x418:  mov    %eax,(%esp)
081e7ca5 +0x41b:  call   08ae3750 <_Unwind_Resume>
081e7caa +0x420:  lea    -0x4c(%ebp),%eax
081e7cad +0x423:  mov    %eax,(%esp)
081e7cb0 +0x426:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
081e7cb5 +0x42b:  mov    %ebx,%eax
081e7cb7 +0x42d:  lea    -0x8(%ebp),%esp
081e7cba +0x430:  add    $0x0,%esp
081e7cbd +0x433:  pop    %ebx
081e7cbe +0x434:  pop    %esi
081e7cbf +0x435:  pop    %ebp
081e7cc0 +0x436:  ret
081e7cc1 +0x437:  nop
```

## 反编译 C

```c
// Dispatcher_CeraPackageOpen::process @ 0x81e788a

/* Dispatcher_CeraPackageOpen::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CeraPackageOpen::process
          (Dispatcher_CeraPackageOpen *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  CDataManager *this_00;
  CInventory *pCVar6;
  int iVar7;
  undefined1 local_cd [2];
  int local_cb;
  CUser *local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  PacketGuard local_6c [12];
  uint local_60;
  vector<Inven_Item,std::allocator<Inven_Item>> local_5c [12];
  stCeraShopItemParam_t local_50 [24];
  pair<int,int> local_38 [8];
  MSG_BASE *local_30;
  ParamBase *local_2c;
  CUser *local_28;
  CItem *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_30 = param_2;
  local_2c = param_3;
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_2c + 4) = uVar4;
  if (*(int *)(local_2c + 4) == 0) {
    local_28 = param_1;
    cVar3 = CUser::CheckItemLock(param_1,1,(int)*(short *)(local_30 + 0xe));
    if (cVar3 == '\0') {
      iVar7 = (int)*(short *)(local_30 + 0xe);
      iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_28);
      uVar4 = 1;
      CInventory::GetInvenSlot((int)local_cd,iVar5);
      iVar5 = local_cb;
      if (local_cb == 0) {
        CUser::SendCmdErrorPacket(param_1,0x207,1);
        uVar4 = 0;
      }
      else {
        this_00 = (CDataManager *)G_CDataManager();
        local_24 = (CItem *)CDataManager::find_item(this_00,iVar5);
        if (local_24 == (CItem *)0x0) {
          uVar4 = 1;
        }
        else {
          if (((local_24 == (CItem *)0x0) ||
              (cVar3 = CItem::is_stackable(local_24), cVar3 != '\x01')) ||
             (iVar5 = (**(code **)(*(int *)local_24 + 0xc))(local_24,iVar5,uVar4,iVar7),
             iVar5 != 0x26)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            uVar4 = 1;
          }
          else {
            local_20 = 0;
            local_1c = 0;
            local_18 = 0;
            WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_50);
            for (local_10 = 0; local_10 < (int)(uint)(byte)local_30[0x10]; local_10 = local_10 + 1)
            {
                    /* try { // try from 081e7a71 to 081e7ab1 has its CatchHandler @ 081e7c8f */
              std::pair<int,int>::pair<unsigned_long&,unsigned_char&>
                        (local_38,(ulong *)(local_30 + (local_10 + 2) * 8 + 4),
                         (uchar *)(local_30 + (local_10 + 2) * 8 + 8));
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,
                         local_38);
            }
            local_14 = 0;
            std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_5c);
            STSpecailItem_Param::STSpecailItem_Param
                      ((STSpecailItem_Param *)&local_90,(vector *)local_5c,local_50);
            local_88 = 0;
            local_90 = param_1;
            local_8c = local_cb;
            local_7c = local_1c;
            local_78 = local_18;
            local_74 = 0;
            local_73 = 0;
            local_72 = 0;
            STSpecailItem_Result::STSpecailItem_Result((STSpecailItem_Result *)&local_60);
                    /* try { // try from 081e7b31 to 081e7bba has its CatchHandler @ 081e7c6d */
            cVar3 = WongWork::CCeraShop::CallSpecialItemHandler
                              (GlobalData::s_pCeraShop,5,(STSpecailItem_Param *)&local_90,
                               (STSpecailItem_Result *)&local_60);
            if (cVar3 == '\x01') {
              if (local_60 == 0) {
                sVar1 = *(short *)(local_30 + 0xe);
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::delete_item(pCVar6,1,(int)sVar1,1,3,1);
                PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 081e7bd1 to 081e7c24 has its CatchHandler @ 081e7c27 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x207);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,1);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)local_6c,(int)*(short *)(local_30 + 0xe));
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
                CUser::Send(param_1,local_6c);
                    /* try { // try from 081e7c42 to 081e7c65 has its CatchHandler @ 081e7c6d */
                PacketGuard::~PacketGuard(local_6c);
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x207,local_60 & 0xff);
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x207,local_60 & 0xff);
            }
            uVar4 = 0;
                    /* try { // try from 081e7c88 to 081e7c8c has its CatchHandler @ 081e7c8f */
            std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_5c);
            WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_50);
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x207,4);
      uVar4 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x207,*(uint *)(local_2c + 4) & 0xff);
    uVar4 = 0;
  }
  return uVar4;
}
```
