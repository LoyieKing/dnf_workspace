# dispatch_sig

`_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardRetransfer` | `0x0820a9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820a9a0  _ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820a9a0, 0x0820adc5]
0820a9a0 +0x000:  push   %ebp
0820a9a1 +0x001:  mov    %esp,%ebp
0820a9a3 +0x003:  push   %edi
0820a9a4 +0x004:  push   %esi
0820a9a5 +0x005:  push   %ebx
0820a9a6 +0x006:  sub    $0x18c,%esp
0820a9ac +0x00c:  mov    0xc(%ebp),%eax
0820a9af +0x00f:  mov    %eax,(%esp)
0820a9b2 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820a9b7 +0x017:  cmp    $0x3,%eax
0820a9ba +0x01a:  setne  %al
0820a9bd +0x01d:  test   %al,%al
0820a9bf +0x01f:  je     0820a9ec <+0x4c>
0820a9c1 +0x021:  movl   $0x0,0xc(%esp)
0820a9c9 +0x029:  movl   $0x0,0x8(%esp)
0820a9d1 +0x031:  movl   $&_ZZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a9d9 +0x039:  movl   $0xa6ac,(%esp)
0820a9e0 +0x040:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a9e5 +0x045:  mov    %eax,%ebx
0820a9e7 +0x047:  jmp    0820adb8 <+0x418>
0820a9ec +0x04c:  movl   $0x0,-0x1c(%ebp)
0820a9f3 +0x053:  movl   $0x0,-0x28(%ebp)
0820a9fa +0x05a:  movl   $0x0,-0x24(%ebp)
0820aa01 +0x061:  movl   $0x0,-0x20(%ebp)
0820aa08 +0x068:  lea    -0x1c(%ebp),%eax
0820aa0b +0x06b:  mov    %eax,0x4(%esp)
0820aa0f +0x06f:  mov    0x10(%ebp),%eax
0820aa12 +0x072:  mov    %eax,(%esp)
0820aa15 +0x075:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0820aa1a +0x07a:  xor    $0x1,%eax
0820aa1d +0x07d:  test   %al,%al
0820aa1f +0x07f:  je     0820aa4c <+0xac>
0820aa21 +0x081:  movl   $0x0,0xc(%esp)
0820aa29 +0x089:  movl   $0x0,0x8(%esp)
0820aa31 +0x091:  movl   $&_ZZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820aa39 +0x099:  movl   $0xa6b1,(%esp)
0820aa40 +0x0a0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820aa45 +0x0a5:  mov    %eax,%ebx
0820aa47 +0x0a7:  jmp    0820adb8 <+0x418>
0820aa4c +0x0ac:  mov    -0x1c(%ebp),%eax
0820aa4f +0x0af:  mov    %eax,0xc(%esp)
0820aa53 +0x0b3:  movl   $0xc,0x8(%esp)
0820aa5b +0x0bb:  lea    -0x28(%ebp),%eax
0820aa5e +0x0be:  mov    %eax,0x4(%esp)
0820aa62 +0x0c2:  mov    0x10(%ebp),%eax
0820aa65 +0x0c5:  mov    %eax,(%esp)
0820aa68 +0x0c8:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0820aa6d +0x0cd:  xor    $0x1,%eax
0820aa70 +0x0d0:  test   %al,%al
0820aa72 +0x0d2:  je     0820aa9f <+0xff>
0820aa74 +0x0d4:  movl   $0x0,0xc(%esp)
0820aa7c +0x0dc:  movl   $0x0,0x8(%esp)
0820aa84 +0x0e4:  movl   $&_ZZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820aa8c +0x0ec:  movl   $0xa6b2,(%esp)
0820aa93 +0x0f3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820aa98 +0x0f8:  mov    %eax,%ebx
0820aa9a +0x0fa:  jmp    0820adb8 <+0x418>
0820aa9f +0x0ff:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820aaa4 +0x104:  lea    -0x28(%ebp),%edx
0820aaa7 +0x107:  mov    %edx,0x4(%esp)
0820aaab +0x10b:  mov    %eax,(%esp)
0820aaae +0x10e:  call   085fe444 <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc>  ; WongWork::CSecurityCardCenter::checkPhoneNumber(char const*) const
0820aab3 +0x113:  xor    $0x1,%eax
0820aab6 +0x116:  test   %al,%al
0820aab8 +0x118:  je     0820aae5 <+0x145>
0820aaba +0x11a:  movl   $0x0,0xc(%esp)
0820aac2 +0x122:  movl   $0x0,0x8(%esp)
0820aaca +0x12a:  movl   $&_ZZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820aad2 +0x132:  movl   $0xa6b5,(%esp)
0820aad9 +0x139:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820aade +0x13e:  mov    %eax,%ebx
0820aae0 +0x140:  jmp    0820adb8 <+0x418>
0820aae5 +0x145:  movl   $0x29,0x8(%esp)
0820aaed +0x14d:  movl   $0x0,0x4(%esp)
0820aaf5 +0x155:  lea    -0x9f(%ebp),%eax
0820aafb +0x15b:  mov    %eax,(%esp)
0820aafe +0x15e:  call   0807dcc0 <_init+0x5b8>
0820ab03 +0x163:  lea    -0x164(%ebp),%eax
0820ab09 +0x169:  mov    %eax,(%esp)
0820ab0c +0x16c:  call   08087d28 <_ZN5CSHA1C1Ev>  ; CSHA1::CSHA1()
0820ab11 +0x171:  mov    -0x1c(%ebp),%edx
0820ab14 +0x174:  lea    -0x28(%ebp),%eax
0820ab17 +0x177:  mov    %edx,0x8(%esp)
0820ab1b +0x17b:  mov    %eax,0x4(%esp)
0820ab1f +0x17f:  lea    -0x164(%ebp),%eax
0820ab25 +0x185:  mov    %eax,(%esp)
0820ab28 +0x188:  call   0808a19e <_ZN5CSHA16UpdateEPKhj>  ; CSHA1::Update(unsigned char const*, unsigned int)
0820ab2d +0x18d:  lea    -0x164(%ebp),%eax
0820ab33 +0x193:  mov    %eax,(%esp)
0820ab36 +0x196:  call   0808a2d2 <_ZN5CSHA15FinalEv>  ; CSHA1::Final()
0820ab3b +0x19b:  lea    -0x9f(%ebp),%eax
0820ab41 +0x1a1:  mov    %eax,0x4(%esp)
0820ab45 +0x1a5:  lea    -0x164(%ebp),%eax
0820ab4b +0x1ab:  mov    %eax,(%esp)
0820ab4e +0x1ae:  call   0808a410 <_ZN5CSHA110GetHexHashEPc>  ; CSHA1::GetHexHash(char*)
0820ab53 +0x1b3:  mov    0xc(%ebp),%eax
0820ab56 +0x1b6:  mov    %eax,(%esp)
0820ab59 +0x1b9:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820ab5e +0x1be:  mov    %eax,(%esp)
0820ab61 +0x1c1:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820ab66 +0x1c6:  test   %al,%al
0820ab68 +0x1c8:  je     0820ad85 <+0x3e5>
0820ab6e +0x1ce:  mov    0xc(%ebp),%eax
0820ab71 +0x1d1:  mov    %eax,(%esp)
0820ab74 +0x1d4:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820ab79 +0x1d9:  mov    %eax,(%esp)
0820ab7c +0x1dc:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
0820ab81 +0x1e1:  cmp    $0x2,%eax
0820ab84 +0x1e4:  seta   %al
0820ab87 +0x1e7:  test   %al,%al
0820ab89 +0x1e9:  je     0820abb0 <+0x210>
0820ab8b +0x1eb:  movl   $0x7a,0x8(%esp)
0820ab93 +0x1f3:  movl   $0xa4,0x4(%esp)
0820ab9b +0x1fb:  mov    0xc(%ebp),%eax
0820ab9e +0x1fe:  mov    %eax,(%esp)
0820aba1 +0x201:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820aba6 +0x206:  mov    $0x0,%ebx
0820abab +0x20b:  jmp    0820adaa <+0x40a>
0820abb0 +0x210:  mov    0xc(%ebp),%eax
0820abb3 +0x213:  mov    %eax,(%esp)
0820abb6 +0x216:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820abbb +0x21b:  mov    %eax,(%esp)
0820abbe +0x21e:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
0820abc3 +0x223:  test   %al,%al
0820abc5 +0x225:  je     0820ac4c <+0x2ac>
0820abcb +0x22b:  mov    0xc(%ebp),%eax
0820abce +0x22e:  mov    %eax,(%esp)
0820abd1 +0x231:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820abd6 +0x236:  mov    %eax,(%esp)
0820abd9 +0x239:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
0820abde +0x23e:  cmp    $0x2,%eax
0820abe1 +0x241:  setg   %al
0820abe4 +0x244:  test   %al,%al
0820abe6 +0x246:  je     0820ac0d <+0x26d>
0820abe8 +0x248:  movl   $0x88,0x8(%esp)
0820abf0 +0x250:  movl   $0xa4,0x4(%esp)
0820abf8 +0x258:  mov    0xc(%ebp),%eax
0820abfb +0x25b:  mov    %eax,(%esp)
0820abfe +0x25e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820ac03 +0x263:  mov    $0x0,%ebx
0820ac08 +0x268:  jmp    0820adaa <+0x40a>
0820ac0d +0x26d:  mov    0xc(%ebp),%eax
0820ac10 +0x270:  mov    %eax,(%esp)
0820ac13 +0x273:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820ac18 +0x278:  mov    %eax,(%esp)
0820ac1b +0x27b:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
0820ac20 +0x280:  xor    $0x1,%eax
0820ac23 +0x283:  test   %al,%al
0820ac25 +0x285:  je     0820ac4c <+0x2ac>
0820ac27 +0x287:  movl   $0x86,0x8(%esp)
0820ac2f +0x28f:  movl   $0xa4,0x4(%esp)
0820ac37 +0x297:  mov    0xc(%ebp),%eax
0820ac3a +0x29a:  mov    %eax,(%esp)
0820ac3d +0x29d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820ac42 +0x2a2:  mov    $0x0,%ebx
0820ac47 +0x2a7:  jmp    0820adaa <+0x40a>
0820ac4c +0x2ac:  movl   $0x0,-0x2e(%ebp)
0820ac53 +0x2b3:  movw   $0x0,-0x2a(%ebp)
0820ac59 +0x2b9:  lea    -0x4f(%ebp),%edx
0820ac5c +0x2bc:  mov    $0x21,%ebx
0820ac61 +0x2c1:  mov    $0x0,%eax
0820ac66 +0x2c6:  mov    %edx,%ecx
0820ac68 +0x2c8:  and    $0x1,%ecx
0820ac6b +0x2cb:  test   %ecx,%ecx
0820ac6d +0x2cd:  je     0820ac77 <+0x2d7>
0820ac6f +0x2cf:  mov    %al,(%edx)
0820ac71 +0x2d1:  add    $0x1,%edx
0820ac74 +0x2d4:  sub    $0x1,%ebx
0820ac77 +0x2d7:  mov    %edx,%ecx
0820ac79 +0x2d9:  and    $0x2,%ecx
0820ac7c +0x2dc:  test   %ecx,%ecx
0820ac7e +0x2de:  je     0820ac89 <+0x2e9>
0820ac80 +0x2e0:  mov    %ax,(%edx)
0820ac83 +0x2e3:  add    $0x2,%edx
0820ac86 +0x2e6:  sub    $0x2,%ebx
0820ac89 +0x2e9:  mov    %ebx,%ecx
0820ac8b +0x2eb:  shr    $0x2,%ecx
0820ac8e +0x2ee:  mov    %edx,%edi
0820ac90 +0x2f0:  rep stos %eax,%es:(%edi)
0820ac92 +0x2f2:  mov    %edi,%edx
0820ac94 +0x2f4:  mov    %ebx,%ecx
0820ac96 +0x2f6:  and    $0x2,%ecx
0820ac99 +0x2f9:  test   %ecx,%ecx
0820ac9b +0x2fb:  je     0820aca3 <+0x303>
0820ac9d +0x2fd:  mov    %ax,(%edx)
0820aca0 +0x300:  add    $0x2,%edx
0820aca3 +0x303:  mov    %ebx,%ecx
0820aca5 +0x305:  and    $0x1,%ecx
0820aca8 +0x308:  test   %ecx,%ecx
0820acaa +0x30a:  je     0820acb1 <+0x311>
0820acac +0x30c:  mov    %al,(%edx)
0820acae +0x30e:  add    $0x1,%edx
0820acb1 +0x311:  lea    -0x76(%ebp),%edx
0820acb4 +0x314:  mov    $0x27,%ebx
0820acb9 +0x319:  mov    $0x0,%eax
0820acbe +0x31e:  mov    %edx,%ecx
0820acc0 +0x320:  and    $0x2,%ecx
0820acc3 +0x323:  test   %ecx,%ecx
0820acc5 +0x325:  je     0820acd0 <+0x330>
0820acc7 +0x327:  mov    %ax,(%edx)
0820acca +0x32a:  add    $0x2,%edx
0820accd +0x32d:  sub    $0x2,%ebx
0820acd0 +0x330:  mov    %ebx,%ecx
0820acd2 +0x332:  shr    $0x2,%ecx
0820acd5 +0x335:  mov    %edx,%edi
0820acd7 +0x337:  rep stos %eax,%es:(%edi)
0820acd9 +0x339:  mov    %edi,%edx
0820acdb +0x33b:  mov    %ebx,%ecx
0820acdd +0x33d:  and    $0x2,%ecx
0820ace0 +0x340:  test   %ecx,%ecx
0820ace2 +0x342:  je     0820acea <+0x34a>
0820ace4 +0x344:  mov    %ax,(%edx)
0820ace7 +0x347:  add    $0x2,%edx
0820acea +0x34a:  mov    %ebx,%ecx
0820acec +0x34c:  and    $0x1,%ecx
0820acef +0x34f:  test   %ecx,%ecx
0820acf1 +0x351:  je     0820acf8 <+0x358>
0820acf3 +0x353:  mov    %al,(%edx)
0820acf5 +0x355:  add    $0x1,%edx
0820acf8 +0x358:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820acfd +0x35d:  lea    -0x76(%ebp),%edx
0820ad00 +0x360:  mov    %edx,0x4(%esp)
0820ad04 +0x364:  mov    %eax,(%esp)
0820ad07 +0x367:  call   085fe1ba <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc>  ; WongWork::CSecurityCardCenter::generateCardData(char*) const
0820ad0c +0x36c:  mov    %eax,-0x16c(%ebp)
0820ad12 +0x372:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820ad17 +0x377:  lea    -0x4f(%ebp),%edx
0820ad1a +0x37a:  mov    %edx,0x4(%esp)
0820ad1e +0x37e:  mov    %eax,(%esp)
0820ad21 +0x381:  call   085fe0ec <_ZN8WongWork19CSecurityCardCenter17generateServerKeyEPc>  ; WongWork::CSecurityCardCenter::generateServerKey(char*)
0820ad26 +0x386:  mov    %eax,%edi
0820ad28 +0x388:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820ad2d +0x38d:  lea    -0x2e(%ebp),%edx
0820ad30 +0x390:  mov    %edx,0x4(%esp)
0820ad34 +0x394:  mov    %eax,(%esp)
0820ad37 +0x397:  call   085fe17e <_ZN8WongWork19CSecurityCardCenter15generateCertKeyEPc>  ; WongWork::CSecurityCardCenter::generateCertKey(char*)
0820ad3c +0x39c:  mov    %eax,%esi
0820ad3e +0x39e:  mov    0xc(%ebp),%eax
0820ad41 +0x3a1:  mov    %eax,(%esp)
0820ad44 +0x3a4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820ad49 +0x3a9:  mov    %eax,%ebx
0820ad4b +0x3ab:  mov    0xc(%ebp),%eax
0820ad4e +0x3ae:  mov    %eax,(%esp)
0820ad51 +0x3b1:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0820ad56 +0x3b6:  mov    -0x16c(%ebp),%edx
0820ad5c +0x3bc:  mov    %edx,0x18(%esp)
0820ad60 +0x3c0:  mov    %edi,0x14(%esp)
0820ad64 +0x3c4:  mov    %esi,0x10(%esp)
0820ad68 +0x3c8:  mov    %ebx,0xc(%esp)
0820ad6c +0x3cc:  lea    -0x9f(%ebp),%edx
0820ad72 +0x3d2:  mov    %edx,0x8(%esp)
0820ad76 +0x3d6:  lea    -0x28(%ebp),%edx
0820ad79 +0x3d9:  mov    %edx,0x4(%esp)
0820ad7d +0x3dd:  mov    %eax,(%esp)
0820ad80 +0x3e0:  call   0842c1f6 <_ZN25DB_SecurityCardRetransfer11makeRequestEiPcS0_jPKcS2_S2_>  ; DB_SecurityCardRetransfer::makeRequest(int, char*, char*, unsigned int, char const*, char const*, char const*)
0820ad85 +0x3e5:  mov    $0x0,%ebx
0820ad8a +0x3ea:  jmp    0820adaa <+0x40a>
0820ad8c +0x3ec:  mov    %edx,%ebx
0820ad8e +0x3ee:  mov    %eax,%esi
0820ad90 +0x3f0:  lea    -0x164(%ebp),%eax
0820ad96 +0x3f6:  mov    %eax,(%esp)
0820ad99 +0x3f9:  call   08087d4c <_ZN5CSHA1D1Ev>  ; CSHA1::~CSHA1()
0820ad9e +0x3fe:  mov    %esi,%eax
0820ada0 +0x400:  mov    %ebx,%edx
0820ada2 +0x402:  mov    %eax,(%esp)
0820ada5 +0x405:  call   08ae3750 <_Unwind_Resume>
0820adaa +0x40a:  lea    -0x164(%ebp),%eax
0820adb0 +0x410:  mov    %eax,(%esp)
0820adb3 +0x413:  call   08087d4c <_ZN5CSHA1D1Ev>  ; CSHA1::~CSHA1()
0820adb8 +0x418:  mov    %ebx,%eax
0820adba +0x41a:  add    $0x18c,%esp
0820adc0 +0x420:  pop    %ebx
0820adc1 +0x421:  pop    %esi
0820adc2 +0x422:  pop    %edi
0820adc3 +0x423:  pop    %ebp
0820adc4 +0x424:  ret
0820adc5 +0x425:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardRetransfer::dispatch_sig @ 0x820a9a0

/* Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecurityCardRetransfer::dispatch_sig
          (Dispatcher_SecurityCardRetransfer *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  uint uVar5;
  CPad *pCVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  char acStackY_1062 [3782];
  CSHA1 local_168 [197];
  char local_a3 [41];
  char local_7a [39];
  char local_53;
  char local_52 [32];
  char local_32 [18];
  uint local_20 [4];
  
  bVar12 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 3) {
    uVar3 = LineFunc(0xa6ac,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_20[0] = 0;
  local_32[6] = '\0';
  local_32[7] = '\0';
  local_32[8] = '\0';
  local_32[9] = '\0';
  local_32[10] = '\0';
  local_32[0xb] = '\0';
  local_32[0xc] = '\0';
  local_32[0xd] = '\0';
  local_32[0xe] = '\0';
  local_32[0xf] = '\0';
  local_32[0x10] = '\0';
  local_32[0x11] = '\0';
  cVar1 = PacketBuf::get_int(param_2,local_20);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa6b1,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  cVar1 = PacketBuf::get_str(param_2,local_32 + 6,0xc,local_20[0]);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa6b2,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  cVar1 = WongWork::CSecurityCardCenter::checkPhoneNumber
                    (GlobalData::s_securityCardCenter,local_32 + 6);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa6b5,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  memset(local_a3,0,0x29);
  CSHA1::CSHA1(local_168);
                    /* try { // try from 0820ab28 to 0820ad84 has its CatchHandler @ 0820ad8c */
  CSHA1::Update(local_168,(uchar *)(local_32 + 6),local_20[0]);
  CSHA1::Final(local_168);
  CSHA1::GetHexHash(local_168,local_a3);
  pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
  if (cVar1 != '\0') {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar5 = WongWork::CSecurityCard::getFailCnt(pCVar4);
    if (uVar5 < 3) {
      pCVar6 = (CPad *)CUser::getPad(param_1);
      cVar1 = Sanicova::CPad::isActivate(pCVar6);
      if (cVar1 != '\0') {
        pCVar6 = (CPad *)CUser::getPad(param_1);
        iVar2 = Sanicova::CPad::getFailCnt(pCVar6);
        if (2 < iVar2) {
          CUser::SendCmdErrorPacket(param_1,0xa4,0x88);
          goto LAB_0820adaa;
        }
        pCVar6 = (CPad *)CUser::getPad(param_1);
        cVar1 = Sanicova::CPad::isCertified(pCVar6);
        if (cVar1 != '\x01') {
          CUser::SendCmdErrorPacket(param_1,0xa4,0x86);
          goto LAB_0820adaa;
        }
      }
      local_32[0] = '\0';
      local_32[1] = '\0';
      local_32[2] = '\0';
      local_32[3] = '\0';
      local_32[4] = '\0';
      local_32[5] = '\0';
      pcVar10 = &local_53;
      uVar5 = 0x21;
      bVar11 = ((uint)pcVar10 & 1) != 0;
      if (bVar11) {
        local_53 = '\0';
        pcVar10 = local_52;
        uVar5 = 0x20;
      }
      if (((uint)pcVar10 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
        uVar5 = uVar5 - 2;
      }
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if ((uVar5 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
      }
      if (!bVar11) {
        *pcVar10 = '\0';
      }
      pcVar10 = local_7a;
      uVar5 = 0x27;
      bVar11 = ((uint)pcVar10 & 2) != 0;
      if (bVar11) {
        local_7a[0] = '\0';
        local_7a[1] = '\0';
        pcVar10 = local_7a + 2;
        uVar5 = 0x25;
      }
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if (!bVar11) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
      }
      *pcVar10 = '\0';
      pcVar10 = (char *)WongWork::CSecurityCardCenter::generateCardData
                                  (GlobalData::s_securityCardCenter,local_7a);
      pcVar7 = (char *)WongWork::CSecurityCardCenter::generateServerKey
                                 (GlobalData::s_securityCardCenter,&local_53);
      pcVar8 = (char *)WongWork::CSecurityCardCenter::generateCertKey
                                 (GlobalData::s_securityCardCenter,local_32);
      uVar5 = CUser::get_acc_id(param_1);
      iVar2 = CUser::GetUID(param_1);
      DB_SecurityCardRetransfer::makeRequest
                (iVar2,local_32 + 6,local_a3,uVar5,pcVar8,pcVar7,pcVar10);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x7a);
    }
  }
LAB_0820adaa:
  CSHA1::~CSHA1(local_168);
  return 0;
}
```
