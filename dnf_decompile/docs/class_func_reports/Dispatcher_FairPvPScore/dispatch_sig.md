# dispatch_sig

`_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FairPvPScore` | `0x0822793c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822793c  _ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822793c, 0x08227dff]
0822793c +0x000:  push   %ebp
0822793d +0x001:  mov    %esp,%ebp
0822793f +0x003:  push   %esi
08227940 +0x004:  push   %ebx
08227941 +0x005:  sub    $0x90,%esp
08227947 +0x00b:  mov    0xc(%ebp),%eax
0822794a +0x00e:  mov    %eax,(%esp)
0822794d +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08227952 +0x016:  cmp    $0x2,%eax
08227955 +0x019:  jle    08227966 <+0x2a>
08227957 +0x01b:  mov    0xc(%ebp),%eax
0822795a +0x01e:  mov    %eax,(%esp)
0822795d +0x021:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08227962 +0x026:  test   %eax,%eax
08227964 +0x028:  jne    0822796d <+0x31>
08227966 +0x02a:  mov    $0x1,%eax
0822796b +0x02f:  jmp    08227972 <+0x36>
0822796d +0x031:  mov    $0x0,%eax
08227972 +0x036:  test   %al,%al
08227974 +0x038:  je     08227980 <+0x44>
08227976 +0x03a:  mov    $0x0,%ebx
0822797b +0x03f:  jmp    08227df3 <+0x4b7>
08227980 +0x044:  movw   $0x0,-0x16(%ebp)
08227986 +0x04a:  lea    -0x16(%ebp),%eax
08227989 +0x04d:  mov    %eax,0x4(%esp)
0822798d +0x051:  mov    0x10(%ebp),%eax
08227990 +0x054:  mov    %eax,(%esp)
08227993 +0x057:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08227998 +0x05c:  xor    $0x1,%eax
0822799b +0x05f:  test   %al,%al
0822799d +0x061:  je     082279ca <+0x8e>
0822799f +0x063:  movl   $0x0,0xc(%esp)
082279a7 +0x06b:  movl   $0x0,0x8(%esp)
082279af +0x073:  movl   $&_ZZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082279b7 +0x07b:  movl   $0xe439,(%esp)
082279be +0x082:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082279c3 +0x087:  mov    %eax,%ebx
082279c5 +0x089:  jmp    08227df3 <+0x4b7>
082279ca +0x08e:  movb   $0x0,-0x17(%ebp)
082279ce +0x092:  lea    -0x17(%ebp),%eax
082279d1 +0x095:  mov    %eax,0x4(%esp)
082279d5 +0x099:  mov    0x10(%ebp),%eax
082279d8 +0x09c:  mov    %eax,(%esp)
082279db +0x09f:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082279e0 +0x0a4:  xor    $0x1,%eax
082279e3 +0x0a7:  test   %al,%al
082279e5 +0x0a9:  je     08227a12 <+0xd6>
082279e7 +0x0ab:  movl   $0x0,0xc(%esp)
082279ef +0x0b3:  movl   $0x0,0x8(%esp)
082279f7 +0x0bb:  movl   $&_ZZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082279ff +0x0c3:  movl   $0xe43c,(%esp)
08227a06 +0x0ca:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08227a0b +0x0cf:  mov    %eax,%ebx
08227a0d +0x0d1:  jmp    08227df3 <+0x4b7>
08227a12 +0x0d6:  mov    0xc(%ebp),%eax
08227a15 +0x0d9:  mov    %eax,(%esp)
08227a18 +0x0dc:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08227a1d +0x0e1:  movzwl -0x16(%ebp),%edx
08227a21 +0x0e5:  cmp    %dx,%ax
08227a24 +0x0e8:  sete   %al
08227a27 +0x0eb:  test   %al,%al
08227a29 +0x0ed:  je     08227afd <+0x1c1>
08227a2f +0x0f3:  lea    -0x24(%ebp),%eax
08227a32 +0x0f6:  mov    %eax,(%esp)
08227a35 +0x0f9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08227a3a +0x0fe:  movl   $0x177,0x8(%esp)
08227a42 +0x106:  movl   $0x1,0x4(%esp)
08227a4a +0x10e:  lea    -0x24(%ebp),%eax
08227a4d +0x111:  mov    %eax,(%esp)
08227a50 +0x114:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08227a55 +0x119:  movl   $0x1,0x4(%esp)
08227a5d +0x121:  lea    -0x24(%ebp),%eax
08227a60 +0x124:  mov    %eax,(%esp)
08227a63 +0x127:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227a68 +0x12c:  movzwl -0x16(%ebp),%eax
08227a6c +0x130:  movzwl %ax,%eax
08227a6f +0x133:  mov    %eax,0x4(%esp)
08227a73 +0x137:  lea    -0x24(%ebp),%eax
08227a76 +0x13a:  mov    %eax,(%esp)
08227a79 +0x13d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08227a7e +0x142:  movzbl -0x17(%ebp),%eax
08227a82 +0x146:  movzbl %al,%ebx
08227a85 +0x149:  movl   $0x7,0x4(%esp)
08227a8d +0x151:  mov    0xc(%ebp),%eax
08227a90 +0x154:  mov    %eax,(%esp)
08227a93 +0x157:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08227a98 +0x15c:  mov    %ebx,0x8(%esp)
08227a9c +0x160:  lea    -0x24(%ebp),%edx
08227a9f +0x163:  mov    %edx,0x4(%esp)
08227aa3 +0x167:  mov    %eax,(%esp)
08227aa6 +0x16a:  call   084a5cc2 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi>  ; fair_pvp::CFairPvPScore::MakePacketSocre(PacketGuard&, int) const
08227aab +0x16f:  movl   $0x1,0x4(%esp)
08227ab3 +0x177:  lea    -0x24(%ebp),%eax
08227ab6 +0x17a:  mov    %eax,(%esp)
08227ab9 +0x17d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08227abe +0x182:  lea    -0x24(%ebp),%eax
08227ac1 +0x185:  mov    %eax,0x4(%esp)
08227ac5 +0x189:  mov    0xc(%ebp),%eax
08227ac8 +0x18c:  mov    %eax,(%esp)
08227acb +0x18f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08227ad0 +0x194:  jmp    08227aed <+0x1b1>
08227ad2 +0x196:  mov    %edx,%ebx
08227ad4 +0x198:  mov    %eax,%esi
08227ad6 +0x19a:  lea    -0x24(%ebp),%eax
08227ad9 +0x19d:  mov    %eax,(%esp)
08227adc +0x1a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08227ae1 +0x1a5:  mov    %esi,%eax
08227ae3 +0x1a7:  mov    %ebx,%edx
08227ae5 +0x1a9:  mov    %eax,(%esp)
08227ae8 +0x1ac:  call   08ae3750 <_Unwind_Resume>
08227aed +0x1b1:  lea    -0x24(%ebp),%eax
08227af0 +0x1b4:  mov    %eax,(%esp)
08227af3 +0x1b7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08227af8 +0x1bc:  jmp    08227dee <+0x4b2>
08227afd +0x1c1:  movzwl -0x16(%ebp),%eax
08227b01 +0x1c5:  movzwl %ax,%esi
08227b04 +0x1c8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08227b09 +0x1cd:  mov    %esi,0x4(%esp)
08227b0d +0x1d1:  mov    %eax,(%esp)
08227b10 +0x1d4:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
08227b15 +0x1d9:  mov    %eax,-0x14(%ebp)
08227b18 +0x1dc:  cmpl   $0x0,-0x14(%ebp)
08227b1c +0x1e0:  jne    08227b43 <+0x207>
08227b1e +0x1e2:  movl   $0x3,0x8(%esp)
08227b26 +0x1ea:  movl   $0x177,0x4(%esp)
08227b2e +0x1f2:  mov    0xc(%ebp),%eax
08227b31 +0x1f5:  mov    %eax,(%esp)
08227b34 +0x1f8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08227b39 +0x1fd:  mov    $0x0,%ebx
08227b3e +0x202:  jmp    08227df3 <+0x4b7>
08227b43 +0x207:  lea    -0x30(%ebp),%eax
08227b46 +0x20a:  mov    %eax,(%esp)
08227b49 +0x20d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08227b4e +0x212:  movzbl -0x17(%ebp),%eax
08227b52 +0x216:  cmp    $0x1,%al
08227b54 +0x218:  jne    08227d1c <+0x3e0>
08227b5a +0x21e:  movl   $0xffffffff,-0x10(%ebp)
08227b61 +0x225:  movl   $0xcf0,-0xc(%ebp)
08227b68 +0x22c:  mov    -0xc(%ebp),%esi
08227b6b +0x22f:  mov    0xc(%ebp),%eax
08227b6e +0x232:  mov    %eax,(%esp)
08227b71 +0x235:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08227b76 +0x23a:  mov    %esi,0x4(%esp)
08227b7a +0x23e:  mov    %eax,(%esp)
08227b7d +0x241:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08227b82 +0x246:  mov    %eax,-0x10(%ebp)
08227b85 +0x249:  cmpl   $0xffffffff,-0x10(%ebp)
08227b89 +0x24d:  sete   %al
08227b8c +0x250:  test   %al,%al
08227b8e +0x252:  je     08227bba <+0x27e>
08227b90 +0x254:  movl   $0x11,0x8(%esp)
08227b98 +0x25c:  movl   $0x177,0x4(%esp)
08227ba0 +0x264:  mov    0xc(%ebp),%eax
08227ba3 +0x267:  mov    %eax,(%esp)
08227ba6 +0x26a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08227bab +0x26f:  mov    $0x0,%ebx
08227bb0 +0x274:  mov    $0x0,%esi
08227bb5 +0x279:  jmp    08227ddf <+0x4a3>
08227bba +0x27e:  mov    0xc(%ebp),%eax
08227bbd +0x281:  mov    %eax,(%esp)
08227bc0 +0x284:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08227bc5 +0x289:  lea    -0x6d(%ebp),%edx
08227bc8 +0x28c:  mov    -0x10(%ebp),%ecx
08227bcb +0x28f:  mov    %ecx,0xc(%esp)
08227bcf +0x293:  movl   $0x1,0x8(%esp)
08227bd7 +0x29b:  mov    %eax,0x4(%esp)
08227bdb +0x29f:  mov    %edx,(%esp)
08227bde +0x2a2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08227be3 +0x2a7:  sub    $0x4,%esp
08227be6 +0x2aa:  mov    -0x66(%ebp),%eax
08227be9 +0x2ad:  test   %eax,%eax
08227beb +0x2af:  jg     08227c17 <+0x2db>
08227bed +0x2b1:  movl   $0x11,0x8(%esp)
08227bf5 +0x2b9:  movl   $0x177,0x4(%esp)
08227bfd +0x2c1:  mov    0xc(%ebp),%eax
08227c00 +0x2c4:  mov    %eax,(%esp)
08227c03 +0x2c7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08227c08 +0x2cc:  mov    $0x0,%ebx
08227c0d +0x2d1:  mov    $0x0,%esi
08227c12 +0x2d6:  jmp    08227ddf <+0x4a3>
08227c17 +0x2db:  mov    0xc(%ebp),%eax
08227c1a +0x2de:  mov    %eax,(%esp)
08227c1d +0x2e1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08227c22 +0x2e6:  movl   $0x1,0x14(%esp)
08227c2a +0x2ee:  movl   $0x3,0x10(%esp)
08227c32 +0x2f6:  movl   $0x1,0xc(%esp)
08227c3a +0x2fe:  mov    -0x10(%ebp),%edx
08227c3d +0x301:  mov    %edx,0x8(%esp)
08227c41 +0x305:  movl   $0x1,0x4(%esp)
08227c49 +0x30d:  mov    %eax,(%esp)
08227c4c +0x310:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08227c51 +0x315:  xor    $0x1,%eax
08227c54 +0x318:  test   %al,%al
08227c56 +0x31a:  je     08227c82 <+0x346>
08227c58 +0x31c:  movl   $0x11,0x8(%esp)
08227c60 +0x324:  movl   $0x177,0x4(%esp)
08227c68 +0x32c:  mov    0xc(%ebp),%eax
08227c6b +0x32f:  mov    %eax,(%esp)
08227c6e +0x332:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08227c73 +0x337:  mov    $0x0,%ebx
08227c78 +0x33c:  mov    $0x0,%esi
08227c7d +0x341:  jmp    08227ddf <+0x4a3>
08227c82 +0x346:  lea    -0x30(%ebp),%eax
08227c85 +0x349:  mov    %eax,(%esp)
08227c88 +0x34c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08227c8d +0x351:  movl   $0xe,0x8(%esp)
08227c95 +0x359:  movl   $0x0,0x4(%esp)
08227c9d +0x361:  lea    -0x30(%ebp),%eax
08227ca0 +0x364:  mov    %eax,(%esp)
08227ca3 +0x367:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08227ca8 +0x36c:  movl   $0x0,0x4(%esp)
08227cb0 +0x374:  lea    -0x30(%ebp),%eax
08227cb3 +0x377:  mov    %eax,(%esp)
08227cb6 +0x37a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227cbb +0x37f:  movl   $0x1,0x4(%esp)
08227cc3 +0x387:  lea    -0x30(%ebp),%eax
08227cc6 +0x38a:  mov    %eax,(%esp)
08227cc9 +0x38d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08227cce +0x392:  mov    0xc(%ebp),%eax
08227cd1 +0x395:  mov    %eax,(%esp)
08227cd4 +0x398:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08227cd9 +0x39d:  lea    -0x30(%ebp),%edx
08227cdc +0x3a0:  mov    %edx,0xc(%esp)
08227ce0 +0x3a4:  mov    -0x10(%ebp),%edx
08227ce3 +0x3a7:  mov    %edx,0x8(%esp)
08227ce7 +0x3ab:  movl   $0x1,0x4(%esp)
08227cef +0x3b3:  mov    %eax,(%esp)
08227cf2 +0x3b6:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08227cf7 +0x3bb:  movl   $0x1,0x4(%esp)
08227cff +0x3c3:  lea    -0x30(%ebp),%eax
08227d02 +0x3c6:  mov    %eax,(%esp)
08227d05 +0x3c9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08227d0a +0x3ce:  lea    -0x30(%ebp),%eax
08227d0d +0x3d1:  mov    %eax,0x4(%esp)
08227d11 +0x3d5:  mov    0xc(%ebp),%eax
08227d14 +0x3d8:  mov    %eax,(%esp)
08227d17 +0x3db:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08227d1c +0x3e0:  lea    -0x30(%ebp),%eax
08227d1f +0x3e3:  mov    %eax,(%esp)
08227d22 +0x3e6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08227d27 +0x3eb:  movl   $0x177,0x8(%esp)
08227d2f +0x3f3:  movl   $0x1,0x4(%esp)
08227d37 +0x3fb:  lea    -0x30(%ebp),%eax
08227d3a +0x3fe:  mov    %eax,(%esp)
08227d3d +0x401:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08227d42 +0x406:  movl   $0x1,0x4(%esp)
08227d4a +0x40e:  lea    -0x30(%ebp),%eax
08227d4d +0x411:  mov    %eax,(%esp)
08227d50 +0x414:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227d55 +0x419:  movzwl -0x16(%ebp),%eax
08227d59 +0x41d:  movzwl %ax,%eax
08227d5c +0x420:  mov    %eax,0x4(%esp)
08227d60 +0x424:  lea    -0x30(%ebp),%eax
08227d63 +0x427:  mov    %eax,(%esp)
08227d66 +0x42a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08227d6b +0x42f:  movzbl -0x17(%ebp),%eax
08227d6f +0x433:  movzbl %al,%esi
08227d72 +0x436:  movl   $0x7,0x4(%esp)
08227d7a +0x43e:  mov    -0x14(%ebp),%eax
08227d7d +0x441:  mov    %eax,(%esp)
08227d80 +0x444:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08227d85 +0x449:  mov    %esi,0x8(%esp)
08227d89 +0x44d:  lea    -0x30(%ebp),%edx
08227d8c +0x450:  mov    %edx,0x4(%esp)
08227d90 +0x454:  mov    %eax,(%esp)
08227d93 +0x457:  call   084a5cc2 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi>  ; fair_pvp::CFairPvPScore::MakePacketSocre(PacketGuard&, int) const
08227d98 +0x45c:  movl   $0x1,0x4(%esp)
08227da0 +0x464:  lea    -0x30(%ebp),%eax
08227da3 +0x467:  mov    %eax,(%esp)
08227da6 +0x46a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08227dab +0x46f:  lea    -0x30(%ebp),%eax
08227dae +0x472:  mov    %eax,0x4(%esp)
08227db2 +0x476:  mov    0xc(%ebp),%eax
08227db5 +0x479:  mov    %eax,(%esp)
08227db8 +0x47c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08227dbd +0x481:  mov    $0x1,%esi
08227dc2 +0x486:  jmp    08227ddf <+0x4a3>
08227dc4 +0x488:  mov    %edx,%ebx
08227dc6 +0x48a:  mov    %eax,%esi
08227dc8 +0x48c:  lea    -0x30(%ebp),%eax
08227dcb +0x48f:  mov    %eax,(%esp)
08227dce +0x492:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08227dd3 +0x497:  mov    %esi,%eax
08227dd5 +0x499:  mov    %ebx,%edx
08227dd7 +0x49b:  mov    %eax,(%esp)
08227dda +0x49e:  call   08ae3750 <_Unwind_Resume>
08227ddf +0x4a3:  lea    -0x30(%ebp),%eax
08227de2 +0x4a6:  mov    %eax,(%esp)
08227de5 +0x4a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08227dea +0x4ae:  test   %esi,%esi
08227dec +0x4b0:  je     08227df3 <+0x4b7>
08227dee +0x4b2:  mov    $0x0,%ebx
08227df3 +0x4b7:  mov    %ebx,%eax
08227df5 +0x4b9:  lea    -0x8(%ebp),%esp
08227df8 +0x4bc:  add    $0x0,%esp
08227dfb +0x4bf:  pop    %ebx
08227dfc +0x4c0:  pop    %esi
08227dfd +0x4c1:  pop    %ebp
08227dfe +0x4c2:  ret
08227dff +0x4c3:  nop
```

## 反编译 C

```c
// Dispatcher_FairPvPScore::dispatch_sig @ 0x822793c

/* Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_FairPvPScore::dispatch_sig
          (Dispatcher_FairPvPScore *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  CFairPvPScore *pCVar7;
  GameWorld *this_00;
  CInventory *pCVar8;
  int iVar9;
  undefined4 unaff_EBX;
  uint uVar10;
  undefined1 local_71 [7];
  int local_6a;
  PacketGuard local_34 [12];
  PacketGuard local_28 [13];
  byte local_1b;
  ushort local_1a;
  CUser *local_18;
  int local_14;
  undefined4 local_10;
  
  iVar5 = CUser::get_state(param_1);
  if ((iVar5 < 3) ||
     (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar5 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  local_1a = 0;
  cVar3 = PacketBuf::get_short(param_2,&local_1a);
  if (cVar3 != '\x01') {
    uVar6 = LineFunc(0xe439,"virtual int Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar6;
  }
  local_1b = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_1b);
  if (cVar3 != '\x01') {
    uVar6 = LineFunc(0xe43c,"virtual int Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar6;
  }
  uVar4 = CUser::get_unique_id(param_1);
  uVar2 = local_1a;
  if (uVar4 == local_1a) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08227a50 to 08227acf has its CatchHandler @ 08227ad2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x177);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)local_1a);
    uVar10 = (uint)local_1b;
    pCVar7 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    fair_pvp::CFairPvPScore::MakePacketSocre(pCVar7,local_28,uVar10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  local_18 = (CUser *)GameWorld::find_from_world(this_00,uVar2);
  if (local_18 == (CUser *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x177,3);
    return 0;
  }
  PacketGuard::PacketGuard(local_34);
  if (local_1b == 1) {
    local_14 = 0xffffffff;
    local_10 = 0xcf0;
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    /* try { // try from 08227b7d to 08227dbc has its CatchHandler @ 08227dc4 */
    local_14 = CInventory::check_item_exist(pCVar8,0xcf0);
    if (local_14 == -1) {
      CUser::SendCmdErrorPacket(param_1,0x177,0x11);
      unaff_EBX = 0;
      bVar1 = false;
      goto LAB_08227ddf;
    }
    iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = local_14;
    CInventory::GetInvenSlot((int)local_71,iVar9);
    if (local_6a < 1) {
      CUser::SendCmdErrorPacket(param_1,0x177,0x11,iVar5);
      unaff_EBX = 0;
      bVar1 = false;
      goto LAB_08227ddf;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar8,1,local_14,1,3,1);
    if (cVar3 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x177,0x11);
      unaff_EBX = 0;
      bVar1 = false;
      goto LAB_08227ddf;
    }
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar8,1,local_14,local_34);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    CUser::Send(param_1,local_34);
  }
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x177);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,(uint)local_1a);
  uVar10 = (uint)local_1b;
  pCVar7 = (CFairPvPScore *)CUser::GetCharacExpandData(local_18,7);
  fair_pvp::CFairPvPScore::MakePacketSocre(pCVar7,local_34,uVar10);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  CUser::Send(param_1,local_34);
  bVar1 = true;
LAB_08227ddf:
  PacketGuard::~PacketGuard(local_34);
  if (bVar1) {
    return 0;
  }
  return unaff_EBX;
}
```
