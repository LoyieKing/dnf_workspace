# dispatch_sig

`_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardIssue` | `0x08209c8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08209c8c  _ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)
# range [0x08209c8c, 0x0820a0f5]
08209c8c +0x000:  push   %ebp
08209c8d +0x001:  mov    %esp,%ebp
08209c8f +0x003:  push   %edi
08209c90 +0x004:  push   %esi
08209c91 +0x005:  push   %ebx
08209c92 +0x006:  sub    $0x18c,%esp
08209c98 +0x00c:  mov    0xc(%ebp),%eax
08209c9b +0x00f:  mov    %eax,(%esp)
08209c9e +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08209ca3 +0x017:  cmp    $0x3,%eax
08209ca6 +0x01a:  setne  %al
08209ca9 +0x01d:  test   %al,%al
08209cab +0x01f:  je     08209cd8 <+0x4c>
08209cad +0x021:  movl   $0x0,0xc(%esp)
08209cb5 +0x029:  movl   $0x0,0x8(%esp)
08209cbd +0x031:  movl   $&_ZZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209cc5 +0x039:  movl   $0xa596,(%esp)
08209ccc +0x040:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209cd1 +0x045:  mov    %eax,%ebx
08209cd3 +0x047:  jmp    0820a0e9 <+0x45d>
08209cd8 +0x04c:  movl   $0x0,-0x1c(%ebp)
08209cdf +0x053:  movl   $0x0,-0x28(%ebp)
08209ce6 +0x05a:  movl   $0x0,-0x24(%ebp)
08209ced +0x061:  movl   $0x0,-0x20(%ebp)
08209cf4 +0x068:  lea    -0x1c(%ebp),%eax
08209cf7 +0x06b:  mov    %eax,0x4(%esp)
08209cfb +0x06f:  mov    0x10(%ebp),%eax
08209cfe +0x072:  mov    %eax,(%esp)
08209d01 +0x075:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08209d06 +0x07a:  xor    $0x1,%eax
08209d09 +0x07d:  test   %al,%al
08209d0b +0x07f:  je     08209d38 <+0xac>
08209d0d +0x081:  movl   $0x0,0xc(%esp)
08209d15 +0x089:  movl   $0x0,0x8(%esp)
08209d1d +0x091:  movl   $&_ZZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209d25 +0x099:  movl   $0xa59f,(%esp)
08209d2c +0x0a0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209d31 +0x0a5:  mov    %eax,%ebx
08209d33 +0x0a7:  jmp    0820a0e9 <+0x45d>
08209d38 +0x0ac:  mov    -0x1c(%ebp),%eax
08209d3b +0x0af:  mov    %eax,0xc(%esp)
08209d3f +0x0b3:  movl   $0xc,0x8(%esp)
08209d47 +0x0bb:  lea    -0x28(%ebp),%eax
08209d4a +0x0be:  mov    %eax,0x4(%esp)
08209d4e +0x0c2:  mov    0x10(%ebp),%eax
08209d51 +0x0c5:  mov    %eax,(%esp)
08209d54 +0x0c8:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08209d59 +0x0cd:  xor    $0x1,%eax
08209d5c +0x0d0:  test   %al,%al
08209d5e +0x0d2:  je     08209d8b <+0xff>
08209d60 +0x0d4:  movl   $0x0,0xc(%esp)
08209d68 +0x0dc:  movl   $0x0,0x8(%esp)
08209d70 +0x0e4:  movl   $&_ZZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209d78 +0x0ec:  movl   $0xa5a0,(%esp)
08209d7f +0x0f3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209d84 +0x0f8:  mov    %eax,%ebx
08209d86 +0x0fa:  jmp    0820a0e9 <+0x45d>
08209d8b +0x0ff:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
08209d90 +0x104:  lea    -0x28(%ebp),%edx
08209d93 +0x107:  mov    %edx,0x4(%esp)
08209d97 +0x10b:  mov    %eax,(%esp)
08209d9a +0x10e:  call   085fe444 <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc>  ; WongWork::CSecurityCardCenter::checkPhoneNumber(char const*) const
08209d9f +0x113:  xor    $0x1,%eax
08209da2 +0x116:  test   %al,%al
08209da4 +0x118:  je     08209dd1 <+0x145>
08209da6 +0x11a:  movl   $0x0,0xc(%esp)
08209dae +0x122:  movl   $0x0,0x8(%esp)
08209db6 +0x12a:  movl   $&_ZZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209dbe +0x132:  movl   $0xa5a3,(%esp)
08209dc5 +0x139:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209dca +0x13e:  mov    %eax,%ebx
08209dcc +0x140:  jmp    0820a0e9 <+0x45d>
08209dd1 +0x145:  movl   $0x29,0x8(%esp)
08209dd9 +0x14d:  movl   $0x0,0x4(%esp)
08209de1 +0x155:  lea    -0x9f(%ebp),%eax
08209de7 +0x15b:  mov    %eax,(%esp)
08209dea +0x15e:  call   0807dcc0 <_init+0x5b8>
08209def +0x163:  lea    -0x164(%ebp),%eax
08209df5 +0x169:  mov    %eax,(%esp)
08209df8 +0x16c:  call   08087d28 <_ZN5CSHA1C1Ev>  ; CSHA1::CSHA1()
08209dfd +0x171:  mov    -0x1c(%ebp),%edx
08209e00 +0x174:  lea    -0x28(%ebp),%eax
08209e03 +0x177:  mov    %edx,0x8(%esp)
08209e07 +0x17b:  mov    %eax,0x4(%esp)
08209e0b +0x17f:  lea    -0x164(%ebp),%eax
08209e11 +0x185:  mov    %eax,(%esp)
08209e14 +0x188:  call   0808a19e <_ZN5CSHA16UpdateEPKhj>  ; CSHA1::Update(unsigned char const*, unsigned int)
08209e19 +0x18d:  lea    -0x164(%ebp),%eax
08209e1f +0x193:  mov    %eax,(%esp)
08209e22 +0x196:  call   0808a2d2 <_ZN5CSHA15FinalEv>  ; CSHA1::Final()
08209e27 +0x19b:  lea    -0x9f(%ebp),%eax
08209e2d +0x1a1:  mov    %eax,0x4(%esp)
08209e31 +0x1a5:  lea    -0x164(%ebp),%eax
08209e37 +0x1ab:  mov    %eax,(%esp)
08209e3a +0x1ae:  call   0808a410 <_ZN5CSHA110GetHexHashEPc>  ; CSHA1::GetHexHash(char*)
08209e3f +0x1b3:  mov    0xc(%ebp),%eax
08209e42 +0x1b6:  mov    %eax,(%esp)
08209e45 +0x1b9:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08209e4a +0x1be:  mov    %eax,(%esp)
08209e4d +0x1c1:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
08209e52 +0x1c6:  test   %al,%al
08209e54 +0x1c8:  je     08209ee1 <+0x255>
08209e5a +0x1ce:  mov    0xc(%ebp),%eax
08209e5d +0x1d1:  mov    %eax,(%esp)
08209e60 +0x1d4:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08209e65 +0x1d9:  mov    %eax,(%esp)
08209e68 +0x1dc:  call   0822ef1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45c4
08209e6d +0x1e1:  xor    $0x1,%eax
08209e70 +0x1e4:  test   %al,%al
08209e72 +0x1e6:  je     08209e9f <+0x213>
08209e74 +0x1e8:  movl   $0x0,0xc(%esp)
08209e7c +0x1f0:  movl   $0x0,0x8(%esp)
08209e84 +0x1f8:  movl   $&_ZZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08209e8c +0x200:  movl   $0xa5b3,(%esp)
08209e93 +0x207:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08209e98 +0x20c:  mov    %eax,%ebx
08209e9a +0x20e:  jmp    0820a0db <+0x44f>
08209e9f +0x213:  mov    0xc(%ebp),%eax
08209ea2 +0x216:  mov    %eax,(%esp)
08209ea5 +0x219:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08209eaa +0x21e:  mov    %eax,(%esp)
08209ead +0x221:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
08209eb2 +0x226:  cmp    $0x2,%eax
08209eb5 +0x229:  seta   %al
08209eb8 +0x22c:  test   %al,%al
08209eba +0x22e:  je     08209ee1 <+0x255>
08209ebc +0x230:  movl   $0x7a,0x8(%esp)
08209ec4 +0x238:  movl   $0xa4,0x4(%esp)
08209ecc +0x240:  mov    0xc(%ebp),%eax
08209ecf +0x243:  mov    %eax,(%esp)
08209ed2 +0x246:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08209ed7 +0x24b:  mov    $0x0,%ebx
08209edc +0x250:  jmp    0820a0db <+0x44f>
08209ee1 +0x255:  mov    0xc(%ebp),%eax
08209ee4 +0x258:  mov    %eax,(%esp)
08209ee7 +0x25b:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08209eec +0x260:  mov    %eax,(%esp)
08209eef +0x263:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08209ef4 +0x268:  test   %al,%al
08209ef6 +0x26a:  je     08209f7d <+0x2f1>
08209efc +0x270:  mov    0xc(%ebp),%eax
08209eff +0x273:  mov    %eax,(%esp)
08209f02 +0x276:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08209f07 +0x27b:  mov    %eax,(%esp)
08209f0a +0x27e:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
08209f0f +0x283:  cmp    $0x2,%eax
08209f12 +0x286:  setg   %al
08209f15 +0x289:  test   %al,%al
08209f17 +0x28b:  je     08209f3e <+0x2b2>
08209f19 +0x28d:  movl   $0x88,0x8(%esp)
08209f21 +0x295:  movl   $0xa4,0x4(%esp)
08209f29 +0x29d:  mov    0xc(%ebp),%eax
08209f2c +0x2a0:  mov    %eax,(%esp)
08209f2f +0x2a3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08209f34 +0x2a8:  mov    $0x0,%ebx
08209f39 +0x2ad:  jmp    0820a0db <+0x44f>
08209f3e +0x2b2:  mov    0xc(%ebp),%eax
08209f41 +0x2b5:  mov    %eax,(%esp)
08209f44 +0x2b8:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08209f49 +0x2bd:  mov    %eax,(%esp)
08209f4c +0x2c0:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
08209f51 +0x2c5:  xor    $0x1,%eax
08209f54 +0x2c8:  test   %al,%al
08209f56 +0x2ca:  je     08209f7d <+0x2f1>
08209f58 +0x2cc:  movl   $0x86,0x8(%esp)
08209f60 +0x2d4:  movl   $0xa4,0x4(%esp)
08209f68 +0x2dc:  mov    0xc(%ebp),%eax
08209f6b +0x2df:  mov    %eax,(%esp)
08209f6e +0x2e2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08209f73 +0x2e7:  mov    $0x0,%ebx
08209f78 +0x2ec:  jmp    0820a0db <+0x44f>
08209f7d +0x2f1:  movl   $0x0,-0x2e(%ebp)
08209f84 +0x2f8:  movw   $0x0,-0x2a(%ebp)
08209f8a +0x2fe:  lea    -0x4f(%ebp),%edx
08209f8d +0x301:  mov    $0x21,%ebx
08209f92 +0x306:  mov    $0x0,%eax
08209f97 +0x30b:  mov    %edx,%ecx
08209f99 +0x30d:  and    $0x1,%ecx
08209f9c +0x310:  test   %ecx,%ecx
08209f9e +0x312:  je     08209fa8 <+0x31c>
08209fa0 +0x314:  mov    %al,(%edx)
08209fa2 +0x316:  add    $0x1,%edx
08209fa5 +0x319:  sub    $0x1,%ebx
08209fa8 +0x31c:  mov    %edx,%ecx
08209faa +0x31e:  and    $0x2,%ecx
08209fad +0x321:  test   %ecx,%ecx
08209faf +0x323:  je     08209fba <+0x32e>
08209fb1 +0x325:  mov    %ax,(%edx)
08209fb4 +0x328:  add    $0x2,%edx
08209fb7 +0x32b:  sub    $0x2,%ebx
08209fba +0x32e:  mov    %ebx,%ecx
08209fbc +0x330:  shr    $0x2,%ecx
08209fbf +0x333:  mov    %edx,%edi
08209fc1 +0x335:  rep stos %eax,%es:(%edi)
08209fc3 +0x337:  mov    %edi,%edx
08209fc5 +0x339:  mov    %ebx,%ecx
08209fc7 +0x33b:  and    $0x2,%ecx
08209fca +0x33e:  test   %ecx,%ecx
08209fcc +0x340:  je     08209fd4 <+0x348>
08209fce +0x342:  mov    %ax,(%edx)
08209fd1 +0x345:  add    $0x2,%edx
08209fd4 +0x348:  mov    %ebx,%ecx
08209fd6 +0x34a:  and    $0x1,%ecx
08209fd9 +0x34d:  test   %ecx,%ecx
08209fdb +0x34f:  je     08209fe2 <+0x356>
08209fdd +0x351:  mov    %al,(%edx)
08209fdf +0x353:  add    $0x1,%edx
08209fe2 +0x356:  lea    -0x76(%ebp),%edx
08209fe5 +0x359:  mov    $0x27,%ebx
08209fea +0x35e:  mov    $0x0,%eax
08209fef +0x363:  mov    %edx,%ecx
08209ff1 +0x365:  and    $0x2,%ecx
08209ff4 +0x368:  test   %ecx,%ecx
08209ff6 +0x36a:  je     0820a001 <+0x375>
08209ff8 +0x36c:  mov    %ax,(%edx)
08209ffb +0x36f:  add    $0x2,%edx
08209ffe +0x372:  sub    $0x2,%ebx
0820a001 +0x375:  mov    %ebx,%ecx
0820a003 +0x377:  shr    $0x2,%ecx
0820a006 +0x37a:  mov    %edx,%edi
0820a008 +0x37c:  rep stos %eax,%es:(%edi)
0820a00a +0x37e:  mov    %edi,%edx
0820a00c +0x380:  mov    %ebx,%ecx
0820a00e +0x382:  and    $0x2,%ecx
0820a011 +0x385:  test   %ecx,%ecx
0820a013 +0x387:  je     0820a01b <+0x38f>
0820a015 +0x389:  mov    %ax,(%edx)
0820a018 +0x38c:  add    $0x2,%edx
0820a01b +0x38f:  mov    %ebx,%ecx
0820a01d +0x391:  and    $0x1,%ecx
0820a020 +0x394:  test   %ecx,%ecx
0820a022 +0x396:  je     0820a029 <+0x39d>
0820a024 +0x398:  mov    %al,(%edx)
0820a026 +0x39a:  add    $0x1,%edx
0820a029 +0x39d:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820a02e +0x3a2:  lea    -0x76(%ebp),%edx
0820a031 +0x3a5:  mov    %edx,0x4(%esp)
0820a035 +0x3a9:  mov    %eax,(%esp)
0820a038 +0x3ac:  call   085fe1ba <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc>  ; WongWork::CSecurityCardCenter::generateCardData(char*) const
0820a03d +0x3b1:  mov    %eax,-0x16c(%ebp)
0820a043 +0x3b7:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820a048 +0x3bc:  lea    -0x4f(%ebp),%edx
0820a04b +0x3bf:  mov    %edx,0x4(%esp)
0820a04f +0x3c3:  mov    %eax,(%esp)
0820a052 +0x3c6:  call   085fe0ec <_ZN8WongWork19CSecurityCardCenter17generateServerKeyEPc>  ; WongWork::CSecurityCardCenter::generateServerKey(char*)
0820a057 +0x3cb:  mov    %eax,%edi
0820a059 +0x3cd:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0820a05e +0x3d2:  lea    -0x2e(%ebp),%edx
0820a061 +0x3d5:  mov    %edx,0x4(%esp)
0820a065 +0x3d9:  mov    %eax,(%esp)
0820a068 +0x3dc:  call   085fe17e <_ZN8WongWork19CSecurityCardCenter15generateCertKeyEPc>  ; WongWork::CSecurityCardCenter::generateCertKey(char*)
0820a06d +0x3e1:  mov    %eax,%esi
0820a06f +0x3e3:  mov    0xc(%ebp),%eax
0820a072 +0x3e6:  mov    %eax,(%esp)
0820a075 +0x3e9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820a07a +0x3ee:  mov    %eax,%ebx
0820a07c +0x3f0:  mov    0xc(%ebp),%eax
0820a07f +0x3f3:  mov    %eax,(%esp)
0820a082 +0x3f6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0820a087 +0x3fb:  mov    -0x16c(%ebp),%edx
0820a08d +0x401:  mov    %edx,0x18(%esp)
0820a091 +0x405:  lea    -0x9f(%ebp),%edx
0820a097 +0x40b:  mov    %edx,0x14(%esp)
0820a09b +0x40f:  lea    -0x28(%ebp),%edx
0820a09e +0x412:  mov    %edx,0x10(%esp)
0820a0a2 +0x416:  mov    %edi,0xc(%esp)
0820a0a6 +0x41a:  mov    %esi,0x8(%esp)
0820a0aa +0x41e:  mov    %ebx,0x4(%esp)
0820a0ae +0x422:  mov    %eax,(%esp)
0820a0b1 +0x425:  call   0842b57a <_ZN20DB_SecurityCardIssue11makeRequestEijPKcS1_S1_S1_S1_>  ; DB_SecurityCardIssue::makeRequest(int, unsigned int, char const*, char const*, char const*, char const*, char const*)
0820a0b6 +0x42a:  mov    $0x0,%ebx
0820a0bb +0x42f:  jmp    0820a0db <+0x44f>
0820a0bd +0x431:  mov    %edx,%ebx
0820a0bf +0x433:  mov    %eax,%esi
0820a0c1 +0x435:  lea    -0x164(%ebp),%eax
0820a0c7 +0x43b:  mov    %eax,(%esp)
0820a0ca +0x43e:  call   08087d4c <_ZN5CSHA1D1Ev>  ; CSHA1::~CSHA1()
0820a0cf +0x443:  mov    %esi,%eax
0820a0d1 +0x445:  mov    %ebx,%edx
0820a0d3 +0x447:  mov    %eax,(%esp)
0820a0d6 +0x44a:  call   08ae3750 <_Unwind_Resume>
0820a0db +0x44f:  lea    -0x164(%ebp),%eax
0820a0e1 +0x455:  mov    %eax,(%esp)
0820a0e4 +0x458:  call   08087d4c <_ZN5CSHA1D1Ev>  ; CSHA1::~CSHA1()
0820a0e9 +0x45d:  mov    %ebx,%eax
0820a0eb +0x45f:  add    $0x18c,%esp
0820a0f1 +0x465:  pop    %ebx
0820a0f2 +0x466:  pop    %esi
0820a0f3 +0x467:  pop    %edi
0820a0f4 +0x468:  pop    %ebp
0820a0f5 +0x469:  ret
```

## 反编译 C

```c
// Dispatcher_SecurityCardIssue::dispatch_sig @ 0x8209c8c

/* Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecurityCardIssue::dispatch_sig
          (Dispatcher_SecurityCardIssue *this,CUser *param_1,PacketBuf *param_2)

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
    uVar3 = LineFunc(0xa596,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
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
    uVar3 = LineFunc(0xa59f,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  cVar1 = PacketBuf::get_str(param_2,local_32 + 6,0xc,local_20[0]);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa5a0,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  cVar1 = WongWork::CSecurityCardCenter::checkPhoneNumber
                    (GlobalData::s_securityCardCenter,local_32 + 6);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa5a3,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  memset(local_a3,0,0x29);
  CSHA1::CSHA1(local_168);
                    /* try { // try from 08209e14 to 0820a0b5 has its CatchHandler @ 0820a0bd */
  CSHA1::Update(local_168,(uchar *)(local_32 + 6),local_20[0]);
  CSHA1::Final(local_168);
  CSHA1::GetHexHash(local_168,local_a3);
  pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
  if (cVar1 != '\0') {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    cVar1 = WongWork::CSecurityCard::isCertified(pCVar4);
    if (cVar1 != '\x01') {
      uVar3 = LineFunc(0xa5b3,
                       "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      goto LAB_0820a0db;
    }
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar5 = WongWork::CSecurityCard::getFailCnt(pCVar4);
    if (2 < uVar5) {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x7a);
      uVar3 = 0;
      goto LAB_0820a0db;
    }
  }
  pCVar6 = (CPad *)CUser::getPad(param_1);
  cVar1 = Sanicova::CPad::isActivate(pCVar6);
  if (cVar1 != '\0') {
    pCVar6 = (CPad *)CUser::getPad(param_1);
    iVar2 = Sanicova::CPad::getFailCnt(pCVar6);
    if (2 < iVar2) {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x88);
      uVar3 = 0;
      goto LAB_0820a0db;
    }
    pCVar6 = (CPad *)CUser::getPad(param_1);
    cVar1 = Sanicova::CPad::isCertified(pCVar6);
    if (cVar1 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x86);
      uVar3 = 0;
      goto LAB_0820a0db;
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
  DB_SecurityCardIssue::makeRequest(iVar2,uVar5,pcVar8,pcVar7,local_32 + 6,local_a3,pcVar10);
  uVar3 = 0;
LAB_0820a0db:
  CSHA1::~CSHA1(local_168);
  return uVar3;
}
```
