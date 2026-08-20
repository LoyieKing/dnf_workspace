# dispatch_sig

`_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeGuildCargo` | `0x08222958` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08222958  _ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08222958, 0x08222dff]
08222958 +0x000:  push   %ebp
08222959 +0x001:  mov    %esp,%ebp
0822295b +0x003:  push   %edi
0822295c +0x004:  push   %esi
0822295d +0x005:  push   %ebx
0822295e +0x006:  sub    $0xac,%esp
08222964 +0x00c:  mov    0xc(%ebp),%eax
08222967 +0x00f:  mov    %eax,(%esp)
0822296a +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0822296f +0x017:  cmp    $0x3,%eax
08222972 +0x01a:  jne    08222983 <+0x2b>
08222974 +0x01c:  mov    0xc(%ebp),%eax
08222977 +0x01f:  mov    %eax,(%esp)
0822297a +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0822297f +0x027:  test   %eax,%eax
08222981 +0x029:  jne    0822298a <+0x32>
08222983 +0x02b:  mov    $0x1,%eax
08222988 +0x030:  jmp    0822298f <+0x37>
0822298a +0x032:  mov    $0x0,%eax
0822298f +0x037:  test   %al,%al
08222991 +0x039:  je     082229bc <+0x64>
08222993 +0x03b:  movl   $0x0,0xc(%esp)
0822299b +0x043:  movl   $0x0,0x8(%esp)
082229a3 +0x04b:  movl   $&_ZZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082229ab +0x053:  movl   $0xdc7c,(%esp)
082229b2 +0x05a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082229b7 +0x05f:  jmp    08222df5 <+0x49d>
082229bc +0x064:  mov    0xc(%ebp),%eax
082229bf +0x067:  mov    %eax,(%esp)
082229c2 +0x06a:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
082229c7 +0x06f:  test   %eax,%eax
082229c9 +0x071:  sete   %al
082229cc +0x074:  test   %al,%al
082229ce +0x076:  je     082229f5 <+0x9d>
082229d0 +0x078:  movl   $0x64,0x8(%esp)
082229d8 +0x080:  movl   $0x10d,0x4(%esp)
082229e0 +0x088:  mov    0xc(%ebp),%eax
082229e3 +0x08b:  mov    %eax,(%esp)
082229e6 +0x08e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082229eb +0x093:  mov    $0x0,%eax
082229f0 +0x098:  jmp    08222df5 <+0x49d>
082229f5 +0x09d:  mov    0xc(%ebp),%eax
082229f8 +0x0a0:  mov    %eax,(%esp)
082229fb +0x0a3:  call   082301d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5882>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5882
08222a00 +0x0a8:  xor    $0x1,%eax
08222a03 +0x0ab:  test   %al,%al
08222a05 +0x0ad:  je     08222a2c <+0xd4>
08222a07 +0x0af:  movl   $0xb5,0x8(%esp)
08222a0f +0x0b7:  movl   $0x10d,0x4(%esp)
08222a17 +0x0bf:  mov    0xc(%ebp),%eax
08222a1a +0x0c2:  mov    %eax,(%esp)
08222a1d +0x0c5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222a22 +0x0ca:  mov    $0x0,%eax
08222a27 +0x0cf:  jmp    08222df5 <+0x49d>
08222a2c +0x0d4:  mov    0xc(%ebp),%eax
08222a2f +0x0d7:  mov    %eax,(%esp)
08222a32 +0x0da:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
08222a37 +0x0df:  xor    $0x1,%eax
08222a3a +0x0e2:  test   %al,%al
08222a3c +0x0e4:  je     08222a63 <+0x10b>
08222a3e +0x0e6:  movl   $0x24,0x8(%esp)
08222a46 +0x0ee:  movl   $0x10d,0x4(%esp)
08222a4e +0x0f6:  mov    0xc(%ebp),%eax
08222a51 +0x0f9:  mov    %eax,(%esp)
08222a54 +0x0fc:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222a59 +0x101:  mov    $0x0,%eax
08222a5e +0x106:  jmp    08222df5 <+0x49d>
08222a63 +0x10b:  mov    0xc(%ebp),%eax
08222a66 +0x10e:  mov    %eax,(%esp)
08222a69 +0x111:  call   082301ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5896>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5896
08222a6e +0x116:  mov    %eax,%ebx
08222a70 +0x118:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08222a75 +0x11d:  add    $0xa50c,%eax
08222a7a +0x122:  mov    %ebx,0x4(%esp)
08222a7e +0x126:  mov    %eax,(%esp)
08222a81 +0x129:  call   08979726 <_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi>  ; GuildParameterScript::getGuildCargoUpradeInfo(int)
08222a86 +0x12e:  mov    %eax,-0x2c(%ebp)
08222a89 +0x131:  cmpl   $0x0,-0x2c(%ebp)
08222a8d +0x135:  jne    08222ab4 <+0x15c>
08222a8f +0x137:  movl   $0x1,0x8(%esp)
08222a97 +0x13f:  movl   $0x10d,0x4(%esp)
08222a9f +0x147:  mov    0xc(%ebp),%eax
08222aa2 +0x14a:  mov    %eax,(%esp)
08222aa5 +0x14d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222aaa +0x152:  mov    $0x0,%eax
08222aaf +0x157:  jmp    08222df5 <+0x49d>
08222ab4 +0x15c:  mov    -0x2c(%ebp),%eax
08222ab7 +0x15f:  mov    0x8(%eax),%eax
08222aba +0x162:  mov    %eax,-0x28(%ebp)
08222abd +0x165:  mov    -0x2c(%ebp),%eax
08222ac0 +0x168:  mov    0xc(%eax),%eax
08222ac3 +0x16b:  mov    %eax,-0x24(%ebp)
08222ac6 +0x16e:  mov    -0x2c(%ebp),%eax
08222ac9 +0x171:  mov    0x4(%eax),%eax
08222acc +0x174:  mov    %eax,-0x20(%ebp)
08222acf +0x177:  mov    -0x28(%ebp),%ebx
08222ad2 +0x17a:  mov    0xc(%ebp),%eax
08222ad5 +0x17d:  mov    %eax,(%esp)
08222ad8 +0x180:  call   082301ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5858>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5858
08222add +0x185:  cmp    %eax,%ebx
08222adf +0x187:  seta   %al
08222ae2 +0x18a:  test   %al,%al
08222ae4 +0x18c:  je     08222b0b <+0x1b3>
08222ae6 +0x18e:  movl   $0xb3,0x8(%esp)
08222aee +0x196:  movl   $0x10d,0x4(%esp)
08222af6 +0x19e:  mov    0xc(%ebp),%eax
08222af9 +0x1a1:  mov    %eax,(%esp)
08222afc +0x1a4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222b01 +0x1a9:  mov    $0x0,%eax
08222b06 +0x1ae:  jmp    08222df5 <+0x49d>
08222b0b +0x1b3:  lea    -0x95(%ebp),%eax
08222b11 +0x1b9:  mov    %eax,(%esp)
08222b14 +0x1bc:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08222b19 +0x1c1:  mov    0xc(%ebp),%eax
08222b1c +0x1c4:  mov    %eax,(%esp)
08222b1f +0x1c7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08222b24 +0x1cc:  lea    -0x95(%ebp),%edx
08222b2a +0x1d2:  mov    %edx,0x8(%esp)
08222b2e +0x1d6:  movl   $0xcbd,0x4(%esp)
08222b36 +0x1de:  mov    %eax,(%esp)
08222b39 +0x1e1:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08222b3e +0x1e6:  mov    %eax,-0x1c(%ebp)
08222b41 +0x1e9:  cmpl   $0x0,-0x24(%ebp)
08222b45 +0x1ed:  je     08222b7d <+0x225>
08222b47 +0x1ef:  cmpl   $0xffffffff,-0x1c(%ebp)
08222b4b +0x1f3:  je     08222b58 <+0x200>
08222b4d +0x1f5:  mov    -0x8e(%ebp),%eax
08222b53 +0x1fb:  cmp    -0x24(%ebp),%eax
08222b56 +0x1fe:  jge    08222b7d <+0x225>
08222b58 +0x200:  movl   $0xb9,0x8(%esp)
08222b60 +0x208:  movl   $0x10d,0x4(%esp)
08222b68 +0x210:  mov    0xc(%ebp),%eax
08222b6b +0x213:  mov    %eax,(%esp)
08222b6e +0x216:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222b73 +0x21b:  mov    $0x0,%eax
08222b78 +0x220:  jmp    08222df5 <+0x49d>
08222b7d +0x225:  mov    -0x20(%ebp),%ebx
08222b80 +0x228:  mov    0xc(%ebp),%eax
08222b83 +0x22b:  mov    %eax,(%esp)
08222b86 +0x22e:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
08222b8b +0x233:  mov    0xa0(%eax),%eax
08222b91 +0x239:  cmp    %eax,%ebx
08222b93 +0x23b:  seta   %al
08222b96 +0x23e:  test   %al,%al
08222b98 +0x240:  je     08222bbf <+0x267>
08222b9a +0x242:  movl   $0xba,0x8(%esp)
08222ba2 +0x24a:  movl   $0x10d,0x4(%esp)
08222baa +0x252:  mov    0xc(%ebp),%eax
08222bad +0x255:  mov    %eax,(%esp)
08222bb0 +0x258:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222bb5 +0x25d:  mov    $0x0,%eax
08222bba +0x262:  jmp    08222df5 <+0x49d>
08222bbf +0x267:  cmpl   $0x0,-0x24(%ebp)
08222bc3 +0x26b:  je     08222c0c <+0x2b4>
08222bc5 +0x26d:  mov    0xc(%ebp),%eax
08222bc8 +0x270:  mov    %eax,(%esp)
08222bcb +0x273:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08222bd0 +0x278:  movl   $0x1,0x14(%esp)
08222bd8 +0x280:  movl   $0x20,0x10(%esp)
08222be0 +0x288:  mov    -0x24(%ebp),%edx
08222be3 +0x28b:  mov    %edx,0xc(%esp)
08222be7 +0x28f:  mov    -0x1c(%ebp),%edx
08222bea +0x292:  mov    %edx,0x8(%esp)
08222bee +0x296:  movl   $0x1,0x4(%esp)
08222bf6 +0x29e:  mov    %eax,(%esp)
08222bf9 +0x2a1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08222bfe +0x2a6:  xor    $0x1,%eax
08222c01 +0x2a9:  test   %al,%al
08222c03 +0x2ab:  je     08222c0c <+0x2b4>
08222c05 +0x2ad:  mov    $0x1,%eax
08222c0a +0x2b2:  jmp    08222c11 <+0x2b9>
08222c0c +0x2b4:  mov    $0x0,%eax
08222c11 +0x2b9:  test   %al,%al
08222c13 +0x2bb:  je     08222c3a <+0x2e2>
08222c15 +0x2bd:  movl   $0xb9,0x8(%esp)
08222c1d +0x2c5:  movl   $0x10d,0x4(%esp)
08222c25 +0x2cd:  mov    0xc(%ebp),%eax
08222c28 +0x2d0:  mov    %eax,(%esp)
08222c2b +0x2d3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222c30 +0x2d8:  mov    $0x0,%eax
08222c35 +0x2dd:  jmp    08222df5 <+0x49d>
08222c3a +0x2e2:  lea    -0x58(%ebp),%eax
08222c3d +0x2e5:  mov    %eax,(%esp)
08222c40 +0x2e8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08222c45 +0x2ed:  movl   $0xe,0x8(%esp)
08222c4d +0x2f5:  movl   $0x0,0x4(%esp)
08222c55 +0x2fd:  lea    -0x58(%ebp),%eax
08222c58 +0x300:  mov    %eax,(%esp)
08222c5b +0x303:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08222c60 +0x308:  movl   $0x0,0x4(%esp)
08222c68 +0x310:  lea    -0x58(%ebp),%eax
08222c6b +0x313:  mov    %eax,(%esp)
08222c6e +0x316:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08222c73 +0x31b:  movl   $0x1,0x4(%esp)
08222c7b +0x323:  lea    -0x58(%ebp),%eax
08222c7e +0x326:  mov    %eax,(%esp)
08222c81 +0x329:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08222c86 +0x32e:  mov    0xc(%ebp),%eax
08222c89 +0x331:  mov    %eax,(%esp)
08222c8c +0x334:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08222c91 +0x339:  lea    -0x58(%ebp),%edx
08222c94 +0x33c:  mov    %edx,0xc(%esp)
08222c98 +0x340:  mov    -0x1c(%ebp),%edx
08222c9b +0x343:  mov    %edx,0x8(%esp)
08222c9f +0x347:  movl   $0x1,0x4(%esp)
08222ca7 +0x34f:  mov    %eax,(%esp)
08222caa +0x352:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08222caf +0x357:  movl   $0x1,0x4(%esp)
08222cb7 +0x35f:  lea    -0x58(%ebp),%eax
08222cba +0x362:  mov    %eax,(%esp)
08222cbd +0x365:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08222cc2 +0x36a:  lea    -0x58(%ebp),%eax
08222cc5 +0x36d:  mov    %eax,0x4(%esp)
08222cc9 +0x371:  mov    0xc(%ebp),%eax
08222ccc +0x374:  mov    %eax,(%esp)
08222ccf +0x377:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08222cd4 +0x37c:  jmp    08222cf1 <+0x399>
08222cd6 +0x37e:  mov    %edx,%ebx
08222cd8 +0x380:  mov    %eax,%esi
08222cda +0x382:  lea    -0x58(%ebp),%eax
08222cdd +0x385:  mov    %eax,(%esp)
08222ce0 +0x388:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08222ce5 +0x38d:  mov    %esi,%eax
08222ce7 +0x38f:  mov    %ebx,%edx
08222ce9 +0x391:  mov    %eax,(%esp)
08222cec +0x394:  call   08ae3750 <_Unwind_Resume>
08222cf1 +0x399:  lea    -0x58(%ebp),%eax
08222cf4 +0x39c:  mov    %eax,(%esp)
08222cf7 +0x39f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08222cfc +0x3a4:  mov    -0x28(%ebp),%eax
08222cff +0x3a7:  mov    %eax,0x4(%esp)
08222d03 +0x3ab:  mov    0xc(%ebp),%eax
08222d06 +0x3ae:  mov    %eax,(%esp)
08222d09 +0x3b1:  call   082301bc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5866>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5866
08222d0e +0x3b6:  mov    -0x28(%ebp),%eax
08222d11 +0x3b9:  mov    %eax,%edi
08222d13 +0x3bb:  neg    %edi
08222d15 +0x3bd:  movl   $0xffffffff,0x4(%esp)
08222d1d +0x3c5:  mov    0xc(%ebp),%eax
08222d20 +0x3c8:  mov    %eax,(%esp)
08222d23 +0x3cb:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08222d28 +0x3d0:  mov    %eax,%esi
08222d2a +0x3d2:  mov    0xc(%ebp),%eax
08222d2d +0x3d5:  mov    %eax,(%esp)
08222d30 +0x3d8:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08222d35 +0x3dd:  mov    %eax,%ebx
08222d37 +0x3df:  mov    0xc(%ebp),%eax
08222d3a +0x3e2:  mov    %eax,(%esp)
08222d3d +0x3e5:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08222d42 +0x3ea:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08222d48 +0x3f0:  mov    %eax,0x4(%esp)
08222d4c +0x3f4:  mov    %edx,(%esp)
08222d4f +0x3f7:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08222d54 +0x3fc:  mov    %edi,0xc(%esp)
08222d58 +0x400:  mov    %esi,0x8(%esp)
08222d5c +0x404:  mov    %ebx,0x4(%esp)
08222d60 +0x408:  mov    %eax,(%esp)
08222d63 +0x40b:  call   0846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>  ; CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int)
08222d68 +0x410:  lea    -0x4a(%ebp),%eax
08222d6b +0x413:  mov    %eax,(%esp)
08222d6e +0x416:  call   0822bfea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1694>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1694
08222d73 +0x41b:  mov    0xc(%ebp),%eax
08222d76 +0x41e:  mov    %eax,(%esp)
08222d79 +0x421:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08222d7e +0x426:  mov    %eax,-0x40(%ebp)
08222d81 +0x429:  mov    0xc(%ebp),%eax
08222d84 +0x42c:  mov    %eax,(%esp)
08222d87 +0x42f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08222d8c +0x434:  mov    %eax,-0x3c(%ebp)
08222d8f +0x437:  mov    0xc(%ebp),%eax
08222d92 +0x43a:  mov    %eax,(%esp)
08222d95 +0x43d:  call   082301ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5896>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5896
08222d9a +0x442:  mov    %eax,-0x38(%ebp)
08222d9d +0x445:  mov    0xc(%ebp),%eax
08222da0 +0x448:  mov    %eax,(%esp)
08222da3 +0x44b:  call   082301ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5896>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5896
08222da8 +0x450:  mov    -0x2c(%ebp),%edx
08222dab +0x453:  mov    0x10(%edx),%edx
08222dae +0x456:  add    %edx,%eax
08222db0 +0x458:  mov    %eax,-0x34(%ebp)
08222db3 +0x45b:  mov    -0x20(%ebp),%eax
08222db6 +0x45e:  mov    %eax,-0x30(%ebp)
08222db9 +0x461:  movzwl -0x48(%ebp),%eax
08222dbd +0x465:  movzwl %ax,%esi
08222dc0 +0x468:  lea    -0x4a(%ebp),%ebx
08222dc3 +0x46b:  mov    0xc(%ebp),%eax
08222dc6 +0x46e:  mov    %eax,(%esp)
08222dc9 +0x471:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08222dce +0x476:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08222dd4 +0x47c:  mov    %eax,0x4(%esp)
08222dd8 +0x480:  mov    %edx,(%esp)
08222ddb +0x483:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08222de0 +0x488:  mov    %esi,0x8(%esp)
08222de4 +0x48c:  mov    %ebx,0x4(%esp)
08222de8 +0x490:  mov    %eax,(%esp)
08222deb +0x493:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
08222df0 +0x498:  mov    $0x0,%eax
08222df5 +0x49d:  add    $0xac,%esp
08222dfb +0x4a3:  pop    %ebx
08222dfc +0x4a4:  pop    %esi
08222dfd +0x4a5:  pop    %edi
08222dfe +0x4a6:  pop    %ebp
08222dff +0x4a7:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeGuildCargo::dispatch_sig @ 0x8222958

/* Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  CInventory *pCVar7;
  uint uVar8;
  CGuildServerProxy *pCVar9;
  Inven_Item local_99 [7];
  int local_92;
  PacketGuard local_5c [14];
  Packet_Guild_Guild_Cargo_Upgrade local_4e [2];
  ushort local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xdc7c,
                     "virtual int Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  if (iVar3 == 0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,100);
    return 0;
  }
  cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb5);
    return 0;
  }
  cVar2 = CUser::IsGuildMaster((CUser *)param_2);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0x24);
    return 0;
  }
  iVar3 = CUser::GetGuildCargoCapacity((CUser *)param_2);
  iVar5 = G_CDataManager();
  local_30 = GuildParameterScript::getGuildCargoUpradeInfo
                       ((GuildParameterScript *)(iVar5 + 0xa50c),iVar3);
  if (local_30 == 0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,1);
    return 0;
  }
  uVar8 = *(uint *)(local_30 + 8);
  local_28 = *(int *)(local_30 + 0xc);
  local_24 = *(uint *)(local_30 + 4);
  local_2c = uVar8;
  uVar6 = CUser::GetGuildPowerWarPoint((CUser *)param_2);
  if (uVar6 < uVar8) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb3);
    return 0;
  }
  Inven_Item::Inven_Item(local_99);
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  local_20 = CInventory::GetInvenData(pCVar7,0xcbd,local_99);
  uVar8 = local_24;
  if ((local_28 != 0) && ((local_20 == -1 || (local_92 < local_28)))) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb9);
    return 0;
  }
  iVar3 = CUser::GetGuildDBInfo((CUser *)param_2);
  if (*(uint *)(iVar3 + 0xa0) < uVar8) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xba);
    return 0;
  }
  if (local_28 != 0) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    cVar2 = CInventory::delete_item(pCVar7,1,local_20,local_28,0x20,1);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_08222c11;
    }
  }
  bVar1 = false;
LAB_08222c11:
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb9);
  }
  else {
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 08222c5b to 08222cd3 has its CatchHandler @ 08222cd6 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_5c,1);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::MakeItemPacket(pCVar7,1,local_20,local_5c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    CUser::Send((CUser *)param_2,local_5c);
    PacketGuard::~PacketGuard(local_5c);
    CUser::DecreaseGuildPowerWarPoint((CUser *)param_2,local_2c);
    iVar3 = -local_2c;
    uVar8 = CUser::get_charac_no((CUser *)param_2,-1);
    uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    pCVar9 = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
    ;
    CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(pCVar9,uVar6,uVar8,iVar3);
    Packet_Guild_Guild_Cargo_Upgrade::Packet_Guild_Guild_Cargo_Upgrade(local_4e);
    local_44 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    local_40 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    local_3c = CUser::GetGuildCargoCapacity((CUser *)param_2);
    local_38 = CUser::GetGuildCargoCapacity((CUser *)param_2);
    local_38 = local_38 + *(int *)(local_30 + 0x10);
    local_34 = local_24;
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    pCVar9 = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
    ;
    CGuildServerProxy::SendTcpPacket(pCVar9,(char *)local_4e,(uint)local_4c);
  }
  return 0;
}
```
