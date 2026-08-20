# process

`_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseDye` | `0x081e69ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e69ea  _ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e69ea, 0x081e70e5]
081e69ea +0x000:  push   %ebp
081e69eb +0x001:  mov    %esp,%ebp
081e69ed +0x003:  push   %edi
081e69ee +0x004:  push   %esi
081e69ef +0x005:  push   %ebx
081e69f0 +0x006:  sub    $0xfc,%esp
081e69f6 +0x00c:  mov    0x10(%ebp),%eax
081e69f9 +0x00f:  mov    %eax,-0x48(%ebp)
081e69fc +0x012:  mov    0x14(%ebp),%eax
081e69ff +0x015:  mov    %eax,-0x44(%ebp)
081e6a02 +0x018:  mov    0x10(%ebp),%eax
081e6a05 +0x01b:  mov    %eax,0x8(%esp)
081e6a09 +0x01f:  mov    0xc(%ebp),%eax
081e6a0c +0x022:  mov    %eax,0x4(%esp)
081e6a10 +0x026:  mov    0x8(%ebp),%eax
081e6a13 +0x029:  mov    %eax,(%esp)
081e6a16 +0x02c:  call   081e727e <_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_UseDye::check_error(CUser*, MSG_BASE&)
081e6a1b +0x031:  mov    -0x44(%ebp),%edx
081e6a1e +0x034:  mov    %eax,0x4(%edx)
081e6a21 +0x037:  mov    -0x44(%ebp),%eax
081e6a24 +0x03a:  mov    0x4(%eax),%eax
081e6a27 +0x03d:  test   %eax,%eax
081e6a29 +0x03f:  jle    081e6a35 <+0x4b>
081e6a2b +0x041:  mov    $0x0,%ebx
081e6a30 +0x046:  jmp    081e70d8 <+0x6ee>
081e6a35 +0x04b:  mov    -0x44(%ebp),%eax
081e6a38 +0x04e:  mov    0x4(%eax),%eax
081e6a3b +0x051:  test   %eax,%eax
081e6a3d +0x053:  jns    081e6a8c <+0xa2>
081e6a3f +0x055:  mov    -0x44(%ebp),%eax
081e6a42 +0x058:  mov    0x4(%eax),%eax
081e6a45 +0x05b:  movzbl %al,%eax
081e6a48 +0x05e:  mov    %eax,0x8(%esp)
081e6a4c +0x062:  movl   $0x1f3,0x4(%esp)
081e6a54 +0x06a:  mov    0xc(%ebp),%eax
081e6a57 +0x06d:  mov    %eax,(%esp)
081e6a5a +0x070:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e6a5f +0x075:  mov    -0x44(%ebp),%eax
081e6a62 +0x078:  mov    0x4(%eax),%eax
081e6a65 +0x07b:  movl   $0x0,0xc(%esp)
081e6a6d +0x083:  mov    %eax,0x8(%esp)
081e6a71 +0x087:  movl   $&_ZZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6a79 +0x08f:  movl   $0x625a,(%esp)
081e6a80 +0x096:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e6a85 +0x09b:  mov    %eax,%ebx
081e6a87 +0x09d:  jmp    081e70d8 <+0x6ee>
081e6a8c +0x0a2:  lea    -0xa5(%ebp),%eax
081e6a92 +0x0a8:  mov    %eax,(%esp)
081e6a95 +0x0ab:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081e6a9a +0x0b0:  mov    -0x48(%ebp),%eax
081e6a9d +0x0b3:  movzwl 0xe(%eax),%eax
081e6aa1 +0x0b7:  cwtl
081e6aa2 +0x0b8:  lea    -0xa5(%ebp),%edx
081e6aa8 +0x0be:  mov    %edx,0x10(%esp)
081e6aac +0x0c2:  mov    %eax,0xc(%esp)
081e6ab0 +0x0c6:  movl   $0x1,0x8(%esp)
081e6ab8 +0x0ce:  mov    0xc(%ebp),%eax
081e6abb +0x0d1:  mov    %eax,0x4(%esp)
081e6abf +0x0d5:  mov    0x8(%ebp),%eax
081e6ac2 +0x0d8:  mov    %eax,(%esp)
081e6ac5 +0x0db:  call   081e71c0 <_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item>  ; Dispatcher_UseDye::getItem(CUser const&, int, short, Inven_Item&) const
081e6aca +0x0e0:  mov    %eax,-0x40(%ebp)
081e6acd +0x0e3:  cmpl   $0x0,-0x40(%ebp)
081e6ad1 +0x0e7:  je     081e6afa <+0x110>
081e6ad3 +0x0e9:  mov    -0x40(%ebp),%eax
081e6ad6 +0x0ec:  movzbl %al,%eax
081e6ad9 +0x0ef:  mov    %eax,0x8(%esp)
081e6add +0x0f3:  movl   $0x1f3,0x4(%esp)
081e6ae5 +0x0fb:  mov    0xc(%ebp),%eax
081e6ae8 +0x0fe:  mov    %eax,(%esp)
081e6aeb +0x101:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e6af0 +0x106:  mov    $0x1,%ebx
081e6af5 +0x10b:  jmp    081e70d8 <+0x6ee>
081e6afa +0x110:  lea    -0xe2(%ebp),%eax
081e6b00 +0x116:  mov    %eax,(%esp)
081e6b03 +0x119:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081e6b08 +0x11e:  mov    -0x48(%ebp),%eax
081e6b0b +0x121:  movzwl 0x10(%eax),%eax
081e6b0f +0x125:  cwtl
081e6b10 +0x126:  lea    -0xe2(%ebp),%edx
081e6b16 +0x12c:  mov    %edx,0x10(%esp)
081e6b1a +0x130:  mov    %eax,0xc(%esp)
081e6b1e +0x134:  movl   $0x2,0x8(%esp)
081e6b26 +0x13c:  mov    0xc(%ebp),%eax
081e6b29 +0x13f:  mov    %eax,0x4(%esp)
081e6b2d +0x143:  mov    0x8(%ebp),%eax
081e6b30 +0x146:  mov    %eax,(%esp)
081e6b33 +0x149:  call   081e71c0 <_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item>  ; Dispatcher_UseDye::getItem(CUser const&, int, short, Inven_Item&) const
081e6b38 +0x14e:  mov    %eax,-0x40(%ebp)
081e6b3b +0x151:  cmpl   $0x0,-0x40(%ebp)
081e6b3f +0x155:  je     081e6b68 <+0x17e>
081e6b41 +0x157:  mov    -0x40(%ebp),%eax
081e6b44 +0x15a:  movzbl %al,%eax
081e6b47 +0x15d:  mov    %eax,0x8(%esp)
081e6b4b +0x161:  movl   $0x1f3,0x4(%esp)
081e6b53 +0x169:  mov    0xc(%ebp),%eax
081e6b56 +0x16c:  mov    %eax,(%esp)
081e6b59 +0x16f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e6b5e +0x174:  mov    $0x1,%ebx
081e6b63 +0x179:  jmp    081e70d8 <+0x6ee>
081e6b68 +0x17e:  mov    -0xa3(%ebp),%eax
081e6b6e +0x184:  mov    %eax,%ebx
081e6b70 +0x186:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e6b75 +0x18b:  mov    %ebx,0x4(%esp)
081e6b79 +0x18f:  mov    %eax,(%esp)
081e6b7c +0x192:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e6b81 +0x197:  mov    %eax,-0x3c(%ebp)
081e6b84 +0x19a:  cmpl   $0x0,-0x3c(%ebp)
081e6b88 +0x19e:  jne    081e6b94 <+0x1aa>
081e6b8a +0x1a0:  mov    $0x1,%ebx
081e6b8f +0x1a5:  jmp    081e70d8 <+0x6ee>
081e6b94 +0x1aa:  mov    -0x3c(%ebp),%eax
081e6b97 +0x1ad:  mov    %eax,(%esp)
081e6b9a +0x1b0:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081e6b9f +0x1b5:  xor    $0x1,%eax
081e6ba2 +0x1b8:  test   %al,%al
081e6ba4 +0x1ba:  je     081e6bb0 <+0x1c6>
081e6ba6 +0x1bc:  mov    $0x1,%ebx
081e6bab +0x1c1:  jmp    081e70d8 <+0x6ee>
081e6bb0 +0x1c6:  mov    -0x3c(%ebp),%eax
081e6bb3 +0x1c9:  mov    %eax,-0x38(%ebp)
081e6bb6 +0x1cc:  mov    -0x38(%ebp),%eax
081e6bb9 +0x1cf:  mov    %eax,(%esp)
081e6bbc +0x1d2:  call   0822c86e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f18>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f18
081e6bc1 +0x1d7:  mov    %eax,-0x34(%ebp)
081e6bc4 +0x1da:  mov    -0x34(%ebp),%eax
081e6bc7 +0x1dd:  mov    (%eax),%eax
081e6bc9 +0x1df:  test   %eax,%eax
081e6bcb +0x1e1:  je     081e6bdf <+0x1f5>
081e6bcd +0x1e3:  mov    -0x34(%ebp),%eax
081e6bd0 +0x1e6:  add    $0x4,%eax
081e6bd3 +0x1e9:  mov    %eax,(%esp)
081e6bd6 +0x1ec:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
081e6bdb +0x1f1:  test   %al,%al
081e6bdd +0x1f3:  je     081e6be6 <+0x1fc>
081e6bdf +0x1f5:  mov    $0x1,%eax
081e6be4 +0x1fa:  jmp    081e6beb <+0x201>
081e6be6 +0x1fc:  mov    $0x0,%eax
081e6beb +0x201:  test   %al,%al
081e6bed +0x203:  je     081e6bf9 <+0x20f>
081e6bef +0x205:  mov    $0x1,%ebx
081e6bf4 +0x20a:  jmp    081e70d8 <+0x6ee>
081e6bf9 +0x20f:  mov    -0x34(%ebp),%eax
081e6bfc +0x212:  add    $0x4,%eax
081e6bff +0x215:  movl   $0x0,0x4(%esp)
081e6c07 +0x21d:  mov    %eax,(%esp)
081e6c0a +0x220:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081e6c0f +0x225:  mov    %eax,%ebx
081e6c11 +0x227:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e6c16 +0x22c:  lea    0x8740(%eax),%edx
081e6c1c +0x232:  lea    -0x58(%ebp),%eax
081e6c1f +0x235:  mov    %ebx,0x8(%esp)
081e6c23 +0x239:  mov    %edx,0x4(%esp)
081e6c27 +0x23d:  mov    %eax,(%esp)
081e6c2a +0x240:  call   0823769e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd48
081e6c2f +0x245:  sub    $0x4,%esp
081e6c32 +0x248:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e6c37 +0x24d:  lea    0x8740(%eax),%edx
081e6c3d +0x253:  lea    -0x54(%ebp),%eax
081e6c40 +0x256:  mov    %edx,0x4(%esp)
081e6c44 +0x25a:  mov    %eax,(%esp)
081e6c47 +0x25d:  call   08237678 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd22>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd22
081e6c4c +0x262:  sub    $0x4,%esp
081e6c4f +0x265:  lea    -0x58(%ebp),%eax
081e6c52 +0x268:  mov    %eax,0x4(%esp)
081e6c56 +0x26c:  lea    -0x54(%ebp),%eax
081e6c59 +0x26f:  mov    %eax,(%esp)
081e6c5c +0x272:  call   082376ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd74
081e6c61 +0x277:  test   %al,%al
081e6c63 +0x279:  je     081e6c6f <+0x285>
081e6c65 +0x27b:  mov    $0x1,%ebx
081e6c6a +0x280:  jmp    081e70d8 <+0x6ee>
081e6c6f +0x285:  mov    -0xe0(%ebp),%eax
081e6c75 +0x28b:  mov    %eax,%ebx
081e6c77 +0x28d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e6c7c +0x292:  mov    %ebx,0x4(%esp)
081e6c80 +0x296:  mov    %eax,(%esp)
081e6c83 +0x299:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e6c88 +0x29e:  mov    %eax,-0x30(%ebp)
081e6c8b +0x2a1:  mov    -0x30(%ebp),%eax
081e6c8e +0x2a4:  mov    (%eax),%eax
081e6c90 +0x2a6:  add    $0x10,%eax
081e6c93 +0x2a9:  mov    (%eax),%edx
081e6c95 +0x2ab:  mov    -0x30(%ebp),%eax
081e6c98 +0x2ae:  mov    %eax,(%esp)
081e6c9b +0x2b1:  call   *%edx
081e6c9d +0x2b3:  xor    $0x1,%eax
081e6ca0 +0x2b6:  test   %al,%al
081e6ca2 +0x2b8:  je     081e6cae <+0x2c4>
081e6ca4 +0x2ba:  mov    $0x1,%ebx
081e6ca9 +0x2bf:  jmp    081e70d8 <+0x6ee>
081e6cae +0x2c4:  mov    -0x30(%ebp),%eax
081e6cb1 +0x2c7:  mov    %eax,-0x2c(%ebp)
081e6cb4 +0x2ca:  movl   $0x0,0x4(%esp)
081e6cbc +0x2d2:  mov    -0x2c(%ebp),%eax
081e6cbf +0x2d5:  mov    %eax,(%esp)
081e6cc2 +0x2d8:  call   085136c6 <_ZNK10CEquipItem22IsAvatarColorVariationEi>  ; CEquipItem::IsAvatarColorVariation(int) const
081e6cc7 +0x2dd:  xor    $0x1,%eax
081e6cca +0x2e0:  test   %al,%al
081e6ccc +0x2e2:  je     081e6cd8 <+0x2ee>
081e6cce +0x2e4:  mov    $0x1,%ebx
081e6cd3 +0x2e9:  jmp    081e70d8 <+0x6ee>
081e6cd8 +0x2ee:  mov    -0xdb(%ebp),%ebx
081e6cde +0x2f4:  mov    0xc(%ebp),%eax
081e6ce1 +0x2f7:  mov    %eax,(%esp)
081e6ce4 +0x2fa:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e6ce9 +0x2ff:  mov    %eax,(%esp)
081e6cec +0x302:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
081e6cf1 +0x307:  mov    %ebx,0x4(%esp)
081e6cf5 +0x30b:  mov    %eax,(%esp)
081e6cf8 +0x30e:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
081e6cfd +0x313:  mov    %eax,-0x28(%ebp)
081e6d00 +0x316:  cmpl   $0x0,-0x28(%ebp)
081e6d04 +0x31a:  jne    081e6d10 <+0x326>
081e6d06 +0x31c:  mov    $0x1,%ebx
081e6d0b +0x321:  jmp    081e70d8 <+0x6ee>
081e6d10 +0x326:  mov    -0x28(%ebp),%eax
081e6d13 +0x329:  movzwl (%eax),%eax
081e6d16 +0x32c:  mov    %ax,-0x22(%ebp)
081e6d1a +0x330:  mov    -0x28(%ebp),%eax
081e6d1d +0x333:  movzwl 0x2(%eax),%eax
081e6d21 +0x337:  mov    %ax,-0x20(%ebp)
081e6d25 +0x33b:  mov    -0x34(%ebp),%eax
081e6d28 +0x33e:  add    $0x4,%eax
081e6d2b +0x341:  movl   $0x0,0x4(%esp)
081e6d33 +0x349:  mov    %eax,(%esp)
081e6d36 +0x34c:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081e6d3b +0x351:  mov    (%eax),%eax
081e6d3d +0x353:  movswl %ax,%esi
081e6d40 +0x356:  mov    -0xdb(%ebp),%ebx
081e6d46 +0x35c:  mov    0xc(%ebp),%eax
081e6d49 +0x35f:  mov    %eax,(%esp)
081e6d4c +0x362:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e6d51 +0x367:  mov    %eax,(%esp)
081e6d54 +0x36a:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
081e6d59 +0x36f:  movl   $0x0,0xc(%esp)
081e6d61 +0x377:  mov    %esi,0x8(%esp)
081e6d65 +0x37b:  mov    %ebx,0x4(%esp)
081e6d69 +0x37f:  mov    %eax,(%esp)
081e6d6c +0x382:  call   082f9964 <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss>  ; WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short)
081e6d71 +0x387:  mov    %al,-0x1d(%ebp)
081e6d74 +0x38a:  movzbl -0x1d(%ebp),%eax
081e6d78 +0x38e:  xor    $0x1,%eax
081e6d7b +0x391:  test   %al,%al
081e6d7d +0x393:  je     081e6dcc <+0x3e2>
081e6d7f +0x395:  movl   $0x1,0x8(%esp)
081e6d87 +0x39d:  movl   $0x1f3,0x4(%esp)
081e6d8f +0x3a5:  mov    0xc(%ebp),%eax
081e6d92 +0x3a8:  mov    %eax,(%esp)
081e6d95 +0x3ab:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e6d9a +0x3b0:  mov    0xc(%ebp),%eax
081e6d9d +0x3b3:  mov    %eax,(%esp)
081e6da0 +0x3b6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e6da5 +0x3bb:  mov    %eax,0xc(%esp)
081e6da9 +0x3bf:  movl   $0x1,0x8(%esp)
081e6db1 +0x3c7:  movl   $&_ZZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6db9 +0x3cf:  movl   $0x6292,(%esp)
081e6dc0 +0x3d6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e6dc5 +0x3db:  mov    %eax,%ebx
081e6dc7 +0x3dd:  jmp    081e70d8 <+0x6ee>
081e6dcc +0x3e2:  mov    -0x48(%ebp),%eax
081e6dcf +0x3e5:  movzwl 0xe(%eax),%eax
081e6dd3 +0x3e9:  movswl %ax,%ebx
081e6dd6 +0x3ec:  mov    0xc(%ebp),%eax
081e6dd9 +0x3ef:  mov    %eax,(%esp)
081e6ddc +0x3f2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e6de1 +0x3f7:  movl   $0x1,0x14(%esp)
081e6de9 +0x3ff:  movl   $0x3,0x10(%esp)
081e6df1 +0x407:  movl   $0x1,0xc(%esp)
081e6df9 +0x40f:  mov    %ebx,0x8(%esp)
081e6dfd +0x413:  movl   $0x1,0x4(%esp)
081e6e05 +0x41b:  mov    %eax,(%esp)
081e6e08 +0x41e:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e6e0d +0x423:  xor    $0x1,%eax
081e6e10 +0x426:  test   %al,%al
081e6e12 +0x428:  je     081e6e9a <+0x4b0>
081e6e18 +0x42e:  movswl -0x20(%ebp),%edi
081e6e1c +0x432:  movswl -0x22(%ebp),%esi
081e6e20 +0x436:  mov    -0xdb(%ebp),%ebx
081e6e26 +0x43c:  mov    0xc(%ebp),%eax
081e6e29 +0x43f:  mov    %eax,(%esp)
081e6e2c +0x442:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e6e31 +0x447:  mov    %eax,(%esp)
081e6e34 +0x44a:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
081e6e39 +0x44f:  mov    %edi,0xc(%esp)
081e6e3d +0x453:  mov    %esi,0x8(%esp)
081e6e41 +0x457:  mov    %ebx,0x4(%esp)
081e6e45 +0x45b:  mov    %eax,(%esp)
081e6e48 +0x45e:  call   082f9964 <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss>  ; WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short)
081e6e4d +0x463:  movl   $0x11,0x8(%esp)
081e6e55 +0x46b:  movl   $0x1f3,0x4(%esp)
081e6e5d +0x473:  mov    0xc(%ebp),%eax
081e6e60 +0x476:  mov    %eax,(%esp)
081e6e63 +0x479:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e6e68 +0x47e:  mov    0xc(%ebp),%eax
081e6e6b +0x481:  mov    %eax,(%esp)
081e6e6e +0x484:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e6e73 +0x489:  mov    %eax,0xc(%esp)
081e6e77 +0x48d:  movl   $0x1,0x8(%esp)
081e6e7f +0x495:  movl   $&_ZZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6e87 +0x49d:  movl   $0x629b,(%esp)
081e6e8e +0x4a4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e6e93 +0x4a9:  mov    %eax,%ebx
081e6e95 +0x4ab:  jmp    081e70d8 <+0x6ee>
081e6e9a +0x4b0:  mov    -0x48(%ebp),%eax
081e6e9d +0x4b3:  movzwl 0xe(%eax),%eax
081e6ea1 +0x4b7:  cwtl
081e6ea2 +0x4b8:  mov    %eax,0x8(%esp)
081e6ea6 +0x4bc:  mov    0xc(%ebp),%eax
081e6ea9 +0x4bf:  mov    %eax,0x4(%esp)
081e6ead +0x4c3:  mov    0x8(%ebp),%eax
081e6eb0 +0x4c6:  mov    %eax,(%esp)
081e6eb3 +0x4c9:  call   081e70e6 <_ZNK17Dispatcher_UseDye30notifyUpdatedInventoryItemInfoER5CUsers>  ; Dispatcher_UseDye::notifyUpdatedInventoryItemInfo(CUser&, short) const
081e6eb8 +0x4ce:  lea    -0x64(%ebp),%eax
081e6ebb +0x4d1:  mov    %eax,(%esp)
081e6ebe +0x4d4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e6ec3 +0x4d9:  movl   $0x1f3,0x8(%esp)
081e6ecb +0x4e1:  movl   $0x1,0x4(%esp)
081e6ed3 +0x4e9:  lea    -0x64(%ebp),%eax
081e6ed6 +0x4ec:  mov    %eax,(%esp)
081e6ed9 +0x4ef:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e6ede +0x4f4:  movl   $0x1,0x4(%esp)
081e6ee6 +0x4fc:  lea    -0x64(%ebp),%eax
081e6ee9 +0x4ff:  mov    %eax,(%esp)
081e6eec +0x502:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e6ef1 +0x507:  mov    -0x48(%ebp),%eax
081e6ef4 +0x50a:  movzwl 0x10(%eax),%eax
081e6ef8 +0x50e:  cwtl
081e6ef9 +0x50f:  mov    %eax,0x4(%esp)
081e6efd +0x513:  lea    -0x64(%ebp),%eax
081e6f00 +0x516:  mov    %eax,(%esp)
081e6f03 +0x519:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e6f08 +0x51e:  mov    -0x34(%ebp),%eax
081e6f0b +0x521:  add    $0x4,%eax
081e6f0e +0x524:  movl   $0x0,0x4(%esp)
081e6f16 +0x52c:  mov    %eax,(%esp)
081e6f19 +0x52f:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081e6f1e +0x534:  mov    (%eax),%eax
081e6f20 +0x536:  mov    %ax,-0x68(%ebp)
081e6f24 +0x53a:  movw   $0x0,-0x66(%ebp)
081e6f2a +0x540:  movl   $0x4,0x4(%esp)
081e6f32 +0x548:  lea    -0x64(%ebp),%eax
081e6f35 +0x54b:  mov    %eax,(%esp)
081e6f38 +0x54e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e6f3d +0x553:  lea    -0x68(%ebp),%eax
081e6f40 +0x556:  movl   $0x4,0x8(%esp)
081e6f48 +0x55e:  mov    %eax,0x4(%esp)
081e6f4c +0x562:  lea    -0x64(%ebp),%eax
081e6f4f +0x565:  mov    %eax,(%esp)
081e6f52 +0x568:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
081e6f57 +0x56d:  movl   $0x1,0x4(%esp)
081e6f5f +0x575:  lea    -0x64(%ebp),%eax
081e6f62 +0x578:  mov    %eax,(%esp)
081e6f65 +0x57b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e6f6a +0x580:  lea    -0x64(%ebp),%eax
081e6f6d +0x583:  mov    %eax,0x4(%esp)
081e6f71 +0x587:  mov    0xc(%ebp),%eax
081e6f74 +0x58a:  mov    %eax,(%esp)
081e6f77 +0x58d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e6f7c +0x592:  mov    -0x34(%ebp),%eax
081e6f7f +0x595:  add    $0x4,%eax
081e6f82 +0x598:  movl   $0x0,0x4(%esp)
081e6f8a +0x5a0:  mov    %eax,(%esp)
081e6f8d +0x5a3:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081e6f92 +0x5a8:  mov    (%eax),%esi
081e6f94 +0x5aa:  mov    -0xdb(%ebp),%ebx
081e6f9a +0x5b0:  mov    0xc(%ebp),%eax
081e6f9d +0x5b3:  mov    %eax,(%esp)
081e6fa0 +0x5b6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e6fa5 +0x5bb:  movl   $0x0,0x14(%esp)
081e6fad +0x5c3:  movl   $0x0,0x10(%esp)
081e6fb5 +0x5cb:  mov    %esi,0xc(%esp)
081e6fb9 +0x5cf:  mov    %ebx,0x8(%esp)
081e6fbd +0x5d3:  movl   $0x31a,0x4(%esp)
081e6fc5 +0x5db:  mov    %eax,(%esp)
081e6fc8 +0x5de:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
081e6fcd +0x5e3:  mov    -0xdb(%ebp),%ebx
081e6fd3 +0x5e9:  mov    0xc(%ebp),%eax
081e6fd6 +0x5ec:  mov    %eax,(%esp)
081e6fd9 +0x5ef:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e6fde +0x5f4:  mov    %eax,(%esp)
081e6fe1 +0x5f7:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
081e6fe6 +0x5fc:  mov    %ebx,0x4(%esp)
081e6fea +0x600:  mov    %eax,(%esp)
081e6fed +0x603:  call   082f99bc <_ZNK8WongWork14CAvatarItemMgr13GetAvatarInfoEi>  ; WongWork::CAvatarItemMgr::GetAvatarInfo(int) const
081e6ff2 +0x608:  mov    %eax,-0x1c(%ebp)
081e6ff5 +0x60b:  mov    -0x48(%ebp),%eax
081e6ff8 +0x60e:  movzwl 0x10(%eax),%eax
081e6ffc +0x612:  movswl %ax,%ebx
081e6fff +0x615:  lea    -0x49(%ebp),%eax
081e7002 +0x618:  mov    %eax,(%esp)
081e7005 +0x61b:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081e700a +0x620:  mov    -0x1c(%ebp),%eax
081e700d +0x623:  mov    %eax,(%esp)
081e7010 +0x626:  call   0822d202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28ac
081e7015 +0x62b:  lea    -0x49(%ebp),%edx
081e7018 +0x62e:  mov    %edx,0x8(%esp)
081e701c +0x632:  mov    %eax,0x4(%esp)
081e7020 +0x636:  lea    -0x50(%ebp),%eax
081e7023 +0x639:  mov    %eax,(%esp)
081e7026 +0x63c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081e702b +0x641:  mov    -0xdb(%ebp),%ecx
081e7031 +0x647:  mov    -0xe0(%ebp),%eax
081e7037 +0x64d:  mov    %eax,%edx
081e7039 +0x64f:  mov    -0xa3(%ebp),%eax
081e703f +0x655:  mov    0xc(%ebp),%esi
081e7042 +0x658:  add    $0x79700,%esi
081e7048 +0x65e:  mov    %ebx,0x14(%esp)
081e704c +0x662:  lea    -0x50(%ebp),%ebx
081e704f +0x665:  mov    %ebx,0x10(%esp)
081e7053 +0x669:  mov    %ecx,0xc(%esp)
081e7057 +0x66d:  mov    %edx,0x8(%esp)
081e705b +0x671:  mov    %eax,0x4(%esp)
081e705f +0x675:  mov    %esi,(%esp)
081e7062 +0x678:  call   08686cba <_ZN15cUserHistoryLog6UseDyeEiiiRKSsi>  ; cUserHistoryLog::UseDye(int, int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
081e7067 +0x67d:  jmp    081e707e <+0x694>
081e7069 +0x67f:  mov    %edx,%ebx
081e706b +0x681:  mov    %eax,%esi
081e706d +0x683:  lea    -0x50(%ebp),%eax
081e7070 +0x686:  mov    %eax,(%esp)
081e7073 +0x689:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081e7078 +0x68e:  mov    %esi,%eax
081e707a +0x690:  mov    %ebx,%edx
081e707c +0x692:  jmp    081e708b <+0x6a1>
081e707e +0x694:  lea    -0x50(%ebp),%eax
081e7081 +0x697:  mov    %eax,(%esp)
081e7084 +0x69a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081e7089 +0x69f:  jmp    081e70a0 <+0x6b6>
081e708b +0x6a1:  mov    %edx,%ebx
081e708d +0x6a3:  mov    %eax,%esi
081e708f +0x6a5:  lea    -0x49(%ebp),%eax
081e7092 +0x6a8:  mov    %eax,(%esp)
081e7095 +0x6ab:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081e709a +0x6b0:  mov    %esi,%eax
081e709c +0x6b2:  mov    %ebx,%edx
081e709e +0x6b4:  jmp    081e70bd <+0x6d3>
081e70a0 +0x6b6:  lea    -0x49(%ebp),%eax
081e70a3 +0x6b9:  mov    %eax,(%esp)
081e70a6 +0x6bc:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081e70ab +0x6c1:  mov    $0x0,%ebx
081e70b0 +0x6c6:  lea    -0x64(%ebp),%eax
081e70b3 +0x6c9:  mov    %eax,(%esp)
081e70b6 +0x6cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e70bb +0x6d1:  jmp    081e70d8 <+0x6ee>
081e70bd +0x6d3:  mov    %edx,%ebx
081e70bf +0x6d5:  mov    %eax,%esi
081e70c1 +0x6d7:  lea    -0x64(%ebp),%eax
081e70c4 +0x6da:  mov    %eax,(%esp)
081e70c7 +0x6dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e70cc +0x6e2:  mov    %esi,%eax
081e70ce +0x6e4:  mov    %ebx,%edx
081e70d0 +0x6e6:  mov    %eax,(%esp)
081e70d3 +0x6e9:  call   08ae3750 <_Unwind_Resume>
081e70d8 +0x6ee:  mov    %ebx,%eax
081e70da +0x6f0:  lea    -0xc(%ebp),%esp
081e70dd +0x6f3:  add    $0x0,%esp
081e70e0 +0x6f6:  pop    %ebx
081e70e1 +0x6f7:  pop    %esi
081e70e2 +0x6f8:  pop    %edi
081e70e3 +0x6f9:  pop    %ebp
081e70e4 +0x6fa:  ret
081e70e5 +0x6fb:  nop
```

## 反编译 C

```c
// Dispatcher_UseDye::process @ 0x81e69ea

/* Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseDye::process
          (Dispatcher_UseDye *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  undefined4 uVar7;
  CDataManager *pCVar8;
  CInventory *pCVar9;
  CAvatarItemMgr *pCVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  Inven_Item local_e6 [2];
  int local_e4;
  int local_df;
  Inven_Item local_a9 [2];
  int local_a7;
  undefined2 local_6c;
  undefined2 local_6a;
  PacketGuard local_68 [12];
  _Rb_tree_iterator local_5c [4];
  map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
  local_58 [4];
  string local_54;
  allocator<char> local_4d;
  MSG_BASE *local_4c;
  ParamBase *local_48;
  uint local_44;
  CItem *local_40;
  CItem *local_3c;
  int *local_38;
  CEquipItem *local_34;
  CEquipItem *local_30;
  short *local_2c;
  short local_26;
  short local_24;
  char local_21;
  Avatar_Item *local_20;
  
  local_4c = param_2;
  local_48 = param_3;
  uVar7 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_48 + 4) = uVar7;
  if (0 < *(int *)(local_48 + 4)) {
    return 0;
  }
  if (*(int *)(local_48 + 4) < 0) {
    CUser::SendCmdErrorPacket(param_1,499,*(uint *)(local_48 + 4) & 0xff);
    uVar7 = LineFunc(0x625a,"virtual int Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)",
                     *(int *)(local_48 + 4),0);
    return uVar7;
  }
  Inven_Item::Inven_Item(local_a9);
  local_44 = getItem(this,param_1,1,*(short *)(local_4c + 0xe),local_a9);
  if (local_44 != 0) {
    CUser::SendCmdErrorPacket(param_1,499,local_44 & 0xff);
    return 1;
  }
  Inven_Item::Inven_Item(local_e6);
  local_44 = getItem(this,param_1,2,*(short *)(local_4c + 0x10),local_e6);
  iVar2 = local_a7;
  if (local_44 == 0) {
    pCVar8 = (CDataManager *)G_CDataManager();
    local_40 = (CItem *)CDataManager::find_item(pCVar8,iVar2);
    if (local_40 == (CItem *)0x0) {
      return 1;
    }
    cVar6 = CItem::is_stackable(local_40);
    if (cVar6 == '\x01') {
      local_3c = local_40;
      local_38 = (int *)CItem::GetDyeInfo(local_40);
      if ((*local_38 == 0) ||
         (cVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty(),
         cVar6 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        uVar7 = 1;
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(local_38 + 1),0
                  );
        G_CDataManager();
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::find((int *)local_5c);
        G_CDataManager();
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::end(local_58);
        cVar6 = std::_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::operator==
                          ((_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>> *)
                           local_58,local_5c);
        iVar2 = local_e4;
        if (cVar6 == '\0') {
          pCVar8 = (CDataManager *)G_CDataManager();
          local_34 = (CEquipItem *)CDataManager::find_item(pCVar8,iVar2);
          cVar6 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
          if (cVar6 == '\x01') {
            local_30 = local_34;
            cVar6 = CEquipItem::IsAvatarColorVariation(local_34,0);
            iVar2 = local_df;
            if (cVar6 == '\x01') {
              pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
              local_2c = (short *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar10,iVar2);
              if (local_2c == (short *)0x0) {
                uVar7 = 1;
              }
              else {
                local_26 = *local_2c;
                local_24 = local_2c[1];
                puVar11 = (undefined4 *)
                          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(local_38 + 1),0);
                iVar2 = local_df;
                uVar7 = *puVar11;
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar9);
                local_21 = WongWork::CAvatarItemMgr::SetAvatarColor(pCVar10,iVar2,(short)uVar7,0);
                if (local_21 == '\x01') {
                  sVar1 = *(short *)(local_4c + 0xe);
                  pCVar9 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  cVar6 = CInventory::delete_item(pCVar9,1,(int)sVar1,1,3,1);
                  sVar5 = local_24;
                  sVar1 = local_26;
                  if (cVar6 == '\x01') {
                    notifyUpdatedInventoryItemInfo(this,param_1,*(short *)(local_4c + 0xe));
                    PacketGuard::PacketGuard(local_68);
                    /* try { // try from 081e6ed9 to 081e6ff1 has its CatchHandler @ 081e70bd */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,1,499);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
                    InterfacePacketBuf::put_short
                              ((InterfacePacketBuf *)local_68,(int)*(short *)(local_4c + 0x10));
                    puVar11 = (undefined4 *)
                              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                              operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                          *)(local_38 + 1),0);
                    local_6c = (undefined2)*puVar11;
                    local_6a = 0;
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,4);
                    InterfacePacketBuf::put_binary
                              ((InterfacePacketBuf *)local_68,(char *)&local_6c,4);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
                    CUser::Send(param_1,local_68);
                    piVar13 = (int *)std::
                                     vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                     operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                 *)(local_38 + 1),0);
                    iVar4 = local_df;
                    iVar2 = *piVar13;
                    pCVar9 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    CInventory::SendAvatarEvent(pCVar9,0x31a,iVar4,iVar2,0,0);
                    iVar2 = local_df;
                    pCVar9 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
                    local_20 = (Avatar_Item *)WongWork::CAvatarItemMgr::GetAvatarInfo(pCVar10,iVar2)
                    ;
                    sVar1 = *(short *)(local_4c + 0x10);
                    std::allocator<char>::allocator();
                    pcVar14 = (char *)WongWork::Avatar_Item::GetIPGAgencyNo(local_20);
                    /* try { // try from 081e7026 to 081e702a has its CatchHandler @ 081e708b */
                    std::string::string((string *)&local_54,pcVar14,(allocator *)&local_4d);
                    /* try { // try from 081e7062 to 081e7066 has its CatchHandler @ 081e7069 */
                    cUserHistoryLog::UseDye
                              ((cUserHistoryLog *)(param_1 + 0x79700),local_a7,local_e4,local_df,
                               &local_54,(int)sVar1);
                    /* try { // try from 081e7084 to 081e7088 has its CatchHandler @ 081e708b */
                    std::string::~string((string *)&local_54);
                    std::allocator<char>::~allocator(&local_4d);
                    uVar7 = 0;
                    PacketGuard::~PacketGuard(local_68);
                  }
                  else {
                    pCVar9 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar9);
                    WongWork::CAvatarItemMgr::SetAvatarColor(pCVar10,local_df,sVar1,sVar5);
                    CUser::SendCmdErrorPacket(param_1,499,0x11);
                    uVar12 = CUser::get_acc_id(param_1);
                    uVar7 = LineFunc(0x629b,
                                     "virtual int Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)"
                                     ,1,uVar12);
                  }
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,499,1);
                  uVar12 = CUser::get_acc_id(param_1);
                  uVar7 = LineFunc(0x6292,
                                   "virtual int Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)"
                                   ,1,uVar12);
                }
              }
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 1;
        }
      }
      return uVar7;
    }
    return 1;
  }
  CUser::SendCmdErrorPacket(param_1,499,local_44 & 0xff);
  return 1;
}
```
