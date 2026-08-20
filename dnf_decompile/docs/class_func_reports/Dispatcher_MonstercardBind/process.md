# process

`_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MonstercardBind::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d88b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d88b0  _ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MonstercardBind::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d88b0, 0x081d8de1]
081d88b0 +0x000:  push   %ebp
081d88b1 +0x001:  mov    %esp,%ebp
081d88b3 +0x003:  push   %esi
081d88b4 +0x004:  push   %ebx
081d88b5 +0x005:  sub    $0xca00,%esp
081d88bb +0x00b:  mov    0x14(%ebp),%eax
081d88be +0x00e:  mov    %eax,-0x20(%ebp)
081d88c1 +0x011:  mov    0x10(%ebp),%eax
081d88c4 +0x014:  mov    %eax,0x8(%esp)
081d88c8 +0x018:  mov    0xc(%ebp),%eax
081d88cb +0x01b:  mov    %eax,0x4(%esp)
081d88cf +0x01f:  mov    0x8(%ebp),%eax
081d88d2 +0x022:  mov    %eax,(%esp)
081d88d5 +0x025:  call   081d8de2 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MonstercardBind::check_error(CUser*, MSG_BASE&)
081d88da +0x02a:  mov    -0x20(%ebp),%edx
081d88dd +0x02d:  mov    %eax,0x4(%edx)
081d88e0 +0x030:  mov    -0x20(%ebp),%eax
081d88e3 +0x033:  mov    0x4(%eax),%eax
081d88e6 +0x036:  test   %eax,%eax
081d88e8 +0x038:  jle    081d88f4 <+0x44>
081d88ea +0x03a:  mov    $0x0,%ebx
081d88ef +0x03f:  jmp    081d8dd5 <+0x525>
081d88f4 +0x044:  mov    -0x20(%ebp),%eax
081d88f7 +0x047:  mov    0x4(%eax),%eax
081d88fa +0x04a:  test   %eax,%eax
081d88fc +0x04c:  jns    081d892b <+0x7b>
081d88fe +0x04e:  mov    -0x20(%ebp),%eax
081d8901 +0x051:  mov    0x4(%eax),%eax
081d8904 +0x054:  movl   $0x0,0xc(%esp)
081d890c +0x05c:  mov    %eax,0x8(%esp)
081d8910 +0x060:  movl   $&_ZZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d8918 +0x068:  movl   $0x44db,(%esp)
081d891f +0x06f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d8924 +0x074:  mov    %eax,%ebx
081d8926 +0x076:  jmp    081d8dd5 <+0x525>
081d892b +0x07b:  mov    0x10(%ebp),%eax
081d892e +0x07e:  mov    %eax,-0x1c(%ebp)
081d8931 +0x081:  mov    -0x1c(%ebp),%eax
081d8934 +0x084:  movzwl 0xd(%eax),%eax
081d8938 +0x088:  movswl %ax,%ebx
081d893b +0x08b:  mov    0xc(%ebp),%eax
081d893e +0x08e:  mov    %eax,(%esp)
081d8941 +0x091:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d8946 +0x096:  lea    -0x75(%ebp),%edx
081d8949 +0x099:  mov    %ebx,0xc(%esp)
081d894d +0x09d:  movl   $0x1,0x8(%esp)
081d8955 +0x0a5:  mov    %eax,0x4(%esp)
081d8959 +0x0a9:  mov    %edx,(%esp)
081d895c +0x0ac:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d8961 +0x0b1:  sub    $0x4,%esp
081d8964 +0x0b4:  mov    -0x73(%ebp),%eax
081d8967 +0x0b7:  mov    %eax,%ebx
081d8969 +0x0b9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d896e +0x0be:  mov    %ebx,0x4(%esp)
081d8972 +0x0c2:  mov    %eax,(%esp)
081d8975 +0x0c5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d897a +0x0ca:  mov    %eax,-0x18(%ebp)
081d897d +0x0cd:  mov    -0x1c(%ebp),%eax
081d8980 +0x0d0:  movzwl 0xf(%eax),%eax
081d8984 +0x0d4:  movswl %ax,%ebx
081d8987 +0x0d7:  mov    0xc(%ebp),%eax
081d898a +0x0da:  mov    %eax,(%esp)
081d898d +0x0dd:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d8992 +0x0e2:  lea    -0xb2(%ebp),%edx
081d8998 +0x0e8:  mov    %ebx,0xc(%esp)
081d899c +0x0ec:  movl   $0x1,0x8(%esp)
081d89a4 +0x0f4:  mov    %eax,0x4(%esp)
081d89a8 +0x0f8:  mov    %edx,(%esp)
081d89ab +0x0fb:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d89b0 +0x100:  sub    $0x4,%esp
081d89b3 +0x103:  mov    -0xb0(%ebp),%eax
081d89b9 +0x109:  mov    %eax,%ebx
081d89bb +0x10b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d89c0 +0x110:  mov    %ebx,0x4(%esp)
081d89c4 +0x114:  mov    %eax,(%esp)
081d89c7 +0x117:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d89cc +0x11c:  mov    %eax,-0x14(%ebp)
081d89cf +0x11f:  mov    -0x1c(%ebp),%eax
081d89d2 +0x122:  movzwl 0x11(%eax),%eax
081d89d6 +0x126:  movswl %ax,%ebx
081d89d9 +0x129:  mov    0xc(%ebp),%eax
081d89dc +0x12c:  mov    %eax,(%esp)
081d89df +0x12f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d89e4 +0x134:  lea    -0xef(%ebp),%edx
081d89ea +0x13a:  mov    %ebx,0xc(%esp)
081d89ee +0x13e:  movl   $0x1,0x8(%esp)
081d89f6 +0x146:  mov    %eax,0x4(%esp)
081d89fa +0x14a:  mov    %edx,(%esp)
081d89fd +0x14d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d8a02 +0x152:  sub    $0x4,%esp
081d8a05 +0x155:  mov    -0xed(%ebp),%eax
081d8a0b +0x15b:  mov    %eax,%ebx
081d8a0d +0x15d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d8a12 +0x162:  mov    %ebx,0x4(%esp)
081d8a16 +0x166:  mov    %eax,(%esp)
081d8a19 +0x169:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d8a1e +0x16e:  mov    %eax,-0x10(%ebp)
081d8a21 +0x171:  lea    -0x2c(%ebp),%eax
081d8a24 +0x174:  mov    %eax,(%esp)
081d8a27 +0x177:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
081d8a2c +0x17c:  lea    -0x2c(%ebp),%eax
081d8a2f +0x17f:  mov    %eax,(%esp)
081d8a32 +0x182:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
081d8a37 +0x187:  mov    -0x14(%ebp),%eax
081d8a3a +0x18a:  mov    %eax,(%esp)
081d8a3d +0x18d:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081d8a42 +0x192:  mov    -0x1c(%ebp),%edx
081d8a45 +0x195:  movzwl 0xd(%edx),%edx
081d8a49 +0x199:  movswl %dx,%edx
081d8a4c +0x19c:  lea    -0x2c(%ebp),%ecx
081d8a4f +0x19f:  mov    %ecx,0x10(%esp)
081d8a53 +0x1a3:  mov    %eax,0xc(%esp)
081d8a57 +0x1a7:  mov    %edx,0x8(%esp)
081d8a5b +0x1ab:  mov    0xc(%ebp),%eax
081d8a5e +0x1ae:  mov    %eax,0x4(%esp)
081d8a62 +0x1b2:  mov    0x8(%ebp),%eax
081d8a65 +0x1b5:  mov    %eax,(%esp)
081d8a68 +0x1b8:  call   081d84a0 <_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE>  ; Dispatcher_MonstercardBind::get_bind_result(CUser*, short, ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081d8a6d +0x1bd:  xor    $0x1,%eax
081d8a70 +0x1c0:  test   %al,%al
081d8a72 +0x1c2:  je     081d8a88 <+0x1d8>
081d8a74 +0x1c4:  mov    -0x20(%ebp),%eax
081d8a77 +0x1c7:  movl   $0x13,0x4(%eax)
081d8a7e +0x1ce:  mov    $0x0,%ebx
081d8a83 +0x1d3:  jmp    081d8dca <+0x51a>
081d8a88 +0x1d8:  lea    -0x8a8(%ebp),%eax
081d8a8e +0x1de:  mov    %eax,(%esp)
081d8a91 +0x1e1:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
081d8a96 +0x1e6:  lea    -0xc9e7(%ebp),%eax
081d8a9c +0x1ec:  mov    %eax,(%esp)
081d8a9f +0x1ef:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
081d8aa4 +0x1f4:  lea    -0xc9e7(%ebp),%eax
081d8aaa +0x1fa:  mov    %eax,0x4(%esp)
081d8aae +0x1fe:  lea    -0x8a8(%ebp),%eax
081d8ab4 +0x204:  mov    %eax,(%esp)
081d8ab7 +0x207:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
081d8abc +0x20c:  mov    0xc(%ebp),%eax
081d8abf +0x20f:  mov    %eax,(%esp)
081d8ac2 +0x212:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081d8ac7 +0x217:  mov    %eax,0x4(%esp)
081d8acb +0x21b:  lea    -0x8a8(%ebp),%eax
081d8ad1 +0x221:  mov    %eax,(%esp)
081d8ad4 +0x224:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
081d8ad9 +0x229:  mov    -0x1c(%ebp),%eax
081d8adc +0x22c:  movzwl 0xd(%eax),%eax
081d8ae0 +0x230:  cwtl
081d8ae1 +0x231:  movl   $0x0,0x14(%esp)
081d8ae9 +0x239:  movl   $0x2c,0x10(%esp)
081d8af1 +0x241:  movl   $0x1,0xc(%esp)
081d8af9 +0x249:  mov    %eax,0x8(%esp)
081d8afd +0x24d:  movl   $0x1,0x4(%esp)
081d8b05 +0x255:  lea    -0x8a8(%ebp),%eax
081d8b0b +0x25b:  mov    %eax,(%esp)
081d8b0e +0x25e:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d8b13 +0x263:  xor    $0x1,%eax
081d8b16 +0x266:  test   %al,%al
081d8b18 +0x268:  je     081d8b2e <+0x27e>
081d8b1a +0x26a:  mov    -0x20(%ebp),%eax
081d8b1d +0x26d:  movl   $0x11,0x4(%eax)
081d8b24 +0x274:  mov    $0x0,%ebx
081d8b29 +0x279:  jmp    081d8d9f <+0x4ef>
081d8b2e +0x27e:  mov    -0x1c(%ebp),%eax
081d8b31 +0x281:  movzwl 0xf(%eax),%eax
081d8b35 +0x285:  cwtl
081d8b36 +0x286:  movl   $0x0,0x14(%esp)
081d8b3e +0x28e:  movl   $0x2c,0x10(%esp)
081d8b46 +0x296:  movl   $0x1,0xc(%esp)
081d8b4e +0x29e:  mov    %eax,0x8(%esp)
081d8b52 +0x2a2:  movl   $0x1,0x4(%esp)
081d8b5a +0x2aa:  lea    -0x8a8(%ebp),%eax
081d8b60 +0x2b0:  mov    %eax,(%esp)
081d8b63 +0x2b3:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d8b68 +0x2b8:  xor    $0x1,%eax
081d8b6b +0x2bb:  test   %al,%al
081d8b6d +0x2bd:  je     081d8b83 <+0x2d3>
081d8b6f +0x2bf:  mov    -0x20(%ebp),%eax
081d8b72 +0x2c2:  movl   $0x11,0x4(%eax)
081d8b79 +0x2c9:  mov    $0x0,%ebx
081d8b7e +0x2ce:  jmp    081d8d9f <+0x4ef>
081d8b83 +0x2d3:  mov    -0x1c(%ebp),%eax
081d8b86 +0x2d6:  movzwl 0x11(%eax),%eax
081d8b8a +0x2da:  cwtl
081d8b8b +0x2db:  movl   $0x0,0x14(%esp)
081d8b93 +0x2e3:  movl   $0x2c,0x10(%esp)
081d8b9b +0x2eb:  movl   $0x1,0xc(%esp)
081d8ba3 +0x2f3:  mov    %eax,0x8(%esp)
081d8ba7 +0x2f7:  movl   $0x1,0x4(%esp)
081d8baf +0x2ff:  lea    -0x8a8(%ebp),%eax
081d8bb5 +0x305:  mov    %eax,(%esp)
081d8bb8 +0x308:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d8bbd +0x30d:  xor    $0x1,%eax
081d8bc0 +0x310:  test   %al,%al
081d8bc2 +0x312:  je     081d8bd8 <+0x328>
081d8bc4 +0x314:  mov    -0x20(%ebp),%eax
081d8bc7 +0x317:  movl   $0x11,0x4(%eax)
081d8bce +0x31e:  mov    $0x0,%ebx
081d8bd3 +0x323:  jmp    081d8d9f <+0x4ef>
081d8bd8 +0x328:  lea    -0x2c(%ebp),%eax
081d8bdb +0x32b:  mov    %eax,(%esp)
081d8bde +0x32e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081d8be3 +0x333:  mov    %eax,%ebx
081d8be5 +0x335:  lea    -0x2c(%ebp),%eax
081d8be8 +0x338:  mov    %eax,0x4(%esp)
081d8bec +0x33c:  lea    -0x8a8(%ebp),%eax
081d8bf2 +0x342:  mov    %eax,(%esp)
081d8bf5 +0x345:  call   0850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
081d8bfa +0x34a:  cmp    %eax,%ebx
081d8bfc +0x34c:  setne  %al
081d8bff +0x34f:  test   %al,%al
081d8c01 +0x351:  je     081d8c17 <+0x367>
081d8c03 +0x353:  mov    -0x20(%ebp),%eax
081d8c06 +0x356:  movl   $0x11,0x4(%eax)
081d8c0d +0x35d:  mov    $0x0,%ebx
081d8c12 +0x362:  jmp    081d8d9f <+0x4ef>
081d8c17 +0x367:  mov    0xc(%ebp),%eax
081d8c1a +0x36a:  mov    %eax,(%esp)
081d8c1d +0x36d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d8c22 +0x372:  mov    %eax,-0xc(%ebp)
081d8c25 +0x375:  mov    -0x1c(%ebp),%eax
081d8c28 +0x378:  movzwl 0xd(%eax),%eax
081d8c2c +0x37c:  cwtl
081d8c2d +0x37d:  movl   $0x1,0x14(%esp)
081d8c35 +0x385:  movl   $0x2c,0x10(%esp)
081d8c3d +0x38d:  movl   $0x1,0xc(%esp)
081d8c45 +0x395:  mov    %eax,0x8(%esp)
081d8c49 +0x399:  movl   $0x1,0x4(%esp)
081d8c51 +0x3a1:  mov    -0xc(%ebp),%eax
081d8c54 +0x3a4:  mov    %eax,(%esp)
081d8c57 +0x3a7:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d8c5c +0x3ac:  mov    -0x1c(%ebp),%eax
081d8c5f +0x3af:  movzwl 0xf(%eax),%eax
081d8c63 +0x3b3:  cwtl
081d8c64 +0x3b4:  movl   $0x1,0x14(%esp)
081d8c6c +0x3bc:  movl   $0x2c,0x10(%esp)
081d8c74 +0x3c4:  movl   $0x1,0xc(%esp)
081d8c7c +0x3cc:  mov    %eax,0x8(%esp)
081d8c80 +0x3d0:  movl   $0x1,0x4(%esp)
081d8c88 +0x3d8:  mov    -0xc(%ebp),%eax
081d8c8b +0x3db:  mov    %eax,(%esp)
081d8c8e +0x3de:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d8c93 +0x3e3:  mov    -0x1c(%ebp),%eax
081d8c96 +0x3e6:  movzwl 0x11(%eax),%eax
081d8c9a +0x3ea:  cwtl
081d8c9b +0x3eb:  movl   $0x1,0x14(%esp)
081d8ca3 +0x3f3:  movl   $0x2c,0x10(%esp)
081d8cab +0x3fb:  movl   $0x1,0xc(%esp)
081d8cb3 +0x403:  mov    %eax,0x8(%esp)
081d8cb7 +0x407:  movl   $0x1,0x4(%esp)
081d8cbf +0x40f:  mov    -0xc(%ebp),%eax
081d8cc2 +0x412:  mov    %eax,(%esp)
081d8cc5 +0x415:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d8cca +0x41a:  lea    -0x38(%ebp),%eax
081d8ccd +0x41d:  mov    %eax,(%esp)
081d8cd0 +0x420:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081d8cd5 +0x425:  lea    -0x38(%ebp),%eax
081d8cd8 +0x428:  mov    %eax,(%esp)
081d8cdb +0x42b:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
081d8ce0 +0x430:  movl   $"",0x1c(%esp)
081d8ce8 +0x438:  movl   $"",0x18(%esp)
081d8cf0 +0x440:  movl   $0x0,0x14(%esp)
081d8cf8 +0x448:  movl   $0x34,0x10(%esp)
081d8d00 +0x450:  movl   $0x0,0xc(%esp)
081d8d08 +0x458:  lea    -0x38(%ebp),%eax
081d8d0b +0x45b:  mov    %eax,0x8(%esp)
081d8d0f +0x45f:  lea    -0x2c(%ebp),%eax
081d8d12 +0x462:  mov    %eax,0x4(%esp)
081d8d16 +0x466:  mov    -0xc(%ebp),%eax
081d8d19 +0x469:  mov    %eax,(%esp)
081d8d1c +0x46c:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
081d8d21 +0x471:  mov    -0x1c(%ebp),%eax
081d8d24 +0x474:  movzwl 0xd(%eax),%edx
081d8d28 +0x478:  mov    -0x20(%ebp),%eax
081d8d2b +0x47b:  mov    %dx,0x8(%eax)
081d8d2f +0x47f:  mov    -0x1c(%ebp),%eax
081d8d32 +0x482:  movzwl 0xf(%eax),%edx
081d8d36 +0x486:  mov    -0x20(%ebp),%eax
081d8d39 +0x489:  mov    %dx,0xa(%eax)
081d8d3d +0x48d:  mov    -0x1c(%ebp),%eax
081d8d40 +0x490:  movzwl 0x11(%eax),%edx
081d8d44 +0x494:  mov    -0x20(%ebp),%eax
081d8d47 +0x497:  mov    %dx,0xc(%eax)
081d8d4b +0x49b:  mov    -0x20(%ebp),%eax
081d8d4e +0x49e:  lea    0x10(%eax),%edx
081d8d51 +0x4a1:  lea    -0x38(%ebp),%eax
081d8d54 +0x4a4:  mov    %eax,0x4(%esp)
081d8d58 +0x4a8:  mov    %edx,(%esp)
081d8d5b +0x4ab:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
081d8d60 +0x4b0:  mov    $0x0,%ebx
081d8d65 +0x4b5:  lea    -0x38(%ebp),%eax
081d8d68 +0x4b8:  mov    %eax,(%esp)
081d8d6b +0x4bb:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081d8d70 +0x4c0:  jmp    081d8d9f <+0x4ef>
081d8d72 +0x4c2:  mov    %edx,%ebx
081d8d74 +0x4c4:  mov    %eax,%esi
081d8d76 +0x4c6:  lea    -0x38(%ebp),%eax
081d8d79 +0x4c9:  mov    %eax,(%esp)
081d8d7c +0x4cc:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081d8d81 +0x4d1:  mov    %esi,%eax
081d8d83 +0x4d3:  mov    %ebx,%edx
081d8d85 +0x4d5:  jmp    081d8d87 <+0x4d7>
081d8d87 +0x4d7:  mov    %edx,%ebx
081d8d89 +0x4d9:  mov    %eax,%esi
081d8d8b +0x4db:  lea    -0x8a8(%ebp),%eax
081d8d91 +0x4e1:  mov    %eax,(%esp)
081d8d94 +0x4e4:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081d8d99 +0x4e9:  mov    %esi,%eax
081d8d9b +0x4eb:  mov    %ebx,%edx
081d8d9d +0x4ed:  jmp    081d8daf <+0x4ff>
081d8d9f +0x4ef:  lea    -0x8a8(%ebp),%eax
081d8da5 +0x4f5:  mov    %eax,(%esp)
081d8da8 +0x4f8:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081d8dad +0x4fd:  jmp    081d8dca <+0x51a>
081d8daf +0x4ff:  mov    %edx,%ebx
081d8db1 +0x501:  mov    %eax,%esi
081d8db3 +0x503:  lea    -0x2c(%ebp),%eax
081d8db6 +0x506:  mov    %eax,(%esp)
081d8db9 +0x509:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081d8dbe +0x50e:  mov    %esi,%eax
081d8dc0 +0x510:  mov    %ebx,%edx
081d8dc2 +0x512:  mov    %eax,(%esp)
081d8dc5 +0x515:  call   08ae3750 <_Unwind_Resume>
081d8dca +0x51a:  lea    -0x2c(%ebp),%eax
081d8dcd +0x51d:  mov    %eax,(%esp)
081d8dd0 +0x520:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081d8dd5 +0x525:  mov    %ebx,%eax
081d8dd7 +0x527:  lea    -0x8(%ebp),%esp
081d8dda +0x52a:  add    $0x0,%esp
081d8ddd +0x52d:  pop    %ebx
081d8dde +0x52e:  pop    %esi
081d8ddf +0x52f:  pop    %ebp
081d8de0 +0x530:  ret
081d8de1 +0x531:  nop
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::process @ 0x81d88b0

/* Dispatcher_MonstercardBind::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::process
          (Dispatcher_MonstercardBind *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *pCVar4;
  CInventory *pCVar5;
  int iVar6;
  InventoryMemory local_c9eb [49471];
  CInventory local_8ac [1977];
  undefined1 local_f3 [2];
  int local_f1;
  undefined1 local_b6 [2];
  int local_b4;
  undefined1 local_79 [2];
  int local_77;
  vector<int,std::allocator<int>> local_3c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  ParamBase *local_24;
  MSG_BASE *local_20;
  undefined4 local_1c;
  CItem *local_18;
  undefined4 local_14;
  CInventory *local_10;
  
  local_24 = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_24 + 4) = uVar2;
  if (*(int *)(local_24 + 4) < 1) {
    if (*(int *)(local_24 + 4) < 0) {
      uVar2 = LineFunc(0x44db,
                       "virtual int Dispatcher_MonstercardBind::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_24 + 4),0);
    }
    else {
      local_20 = param_2;
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_79,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_1c = CDataManager::find_item(pCVar4,local_77);
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_b6,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(pCVar4,local_b4);
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_f3,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_14 = CDataManager::find_item(pCVar4,local_f1);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 081d8a32 to 081d8a95 has its CatchHandler @ 081d8daf */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_30);
      uVar2 = CItem::get_rarity(local_18);
      cVar1 = get_bind_result(this,param_1,(int)*(short *)(local_20 + 0xd),uVar2,local_30);
      if (cVar1 == '\x01') {
        CInventory::CInventory(local_8ac);
        InventoryMemory::InventoryMemory(local_c9eb);
        CInventory::SetInventoryMemory(local_8ac,local_c9eb);
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081d8ad4 to 081d8cd4 has its CatchHandler @ 081d8d87 */
        CInventory::setCopy(local_8ac,pCVar5);
        cVar1 = CInventory::delete_item(local_8ac,1,(int)*(short *)(local_20 + 0xd),1,0x2c,0);
        if (cVar1 == '\x01') {
          cVar1 = CInventory::delete_item(local_8ac,1,(int)*(short *)(local_20 + 0xf),1,0x2c,0);
          if (cVar1 == '\x01') {
            cVar1 = CInventory::delete_item(local_8ac,1,(int)*(short *)(local_20 + 0x11),1,0x2c,0);
            if (cVar1 == '\x01') {
              iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                (local_30);
              iVar6 = CInventory::tryInsertEventItems(local_8ac,(vector *)local_30);
              if (iVar3 == iVar6) {
                local_10 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::delete_item(local_10,1,(int)*(short *)(local_20 + 0xd),1,0x2c,1);
                CInventory::delete_item(local_10,1,(int)*(short *)(local_20 + 0xf),1,0x2c,1);
                CInventory::delete_item(local_10,1,(int)*(short *)(local_20 + 0x11),1,0x2c,1);
                std::vector<int,std::allocator<int>>::vector(local_3c);
                    /* try { // try from 081d8cdb to 081d8d5f has its CatchHandler @ 081d8d72 */
                std::vector<int,std::allocator<int>>::clear(local_3c);
                CInventory::insert_event_items
                          (local_10,local_30,local_3c,0,0x34,0,&DAT_08bc13f9,&DAT_08bc13f9);
                *(undefined2 *)(local_24 + 8) = *(undefined2 *)(local_20 + 0xd);
                *(undefined2 *)(local_24 + 10) = *(undefined2 *)(local_20 + 0xf);
                *(undefined2 *)(local_24 + 0xc) = *(undefined2 *)(local_20 + 0x11);
                std::vector<int,std::allocator<int>>::operator=
                          ((vector<int,std::allocator<int>> *)(local_24 + 0x10),(vector *)local_3c);
                    /* try { // try from 081d8d6b to 081d8d6f has its CatchHandler @ 081d8d87 */
                std::vector<int,std::allocator<int>>::~vector(local_3c);
              }
              else {
                *(undefined4 *)(local_24 + 4) = 0x11;
              }
            }
            else {
              *(undefined4 *)(local_24 + 4) = 0x11;
            }
          }
          else {
            *(undefined4 *)(local_24 + 4) = 0x11;
          }
        }
        else {
          *(undefined4 *)(local_24 + 4) = 0x11;
        }
                    /* try { // try from 081d8da8 to 081d8dac has its CatchHandler @ 081d8daf */
        CInventory::~CInventory(local_8ac);
      }
      else {
        *(undefined4 *)(local_24 + 4) = 0x13;
      }
      uVar2 = 0;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
