# dispatch_sig

`_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ResPeer` | `0x081f088e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f088e  _ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f088e, 0x081f2d0b]
081f088e +0x0000:  push   %ebp
081f088f +0x0001:  mov    %esp,%ebp
081f0891 +0x0003:  push   %edi
081f0892 +0x0004:  push   %esi
081f0893 +0x0005:  push   %ebx
081f0894 +0x0006:  sub    $0xec,%esp
081f089a +0x000c:  mov    0xc(%ebp),%eax
081f089d +0x000f:  mov    %eax,(%esp)
081f08a0 +0x0012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f08a5 +0x0017:  cmp    $0x3,%eax
081f08a8 +0x001a:  setne  %al
081f08ab +0x001d:  test   %al,%al
081f08ad +0x001f:  je     081f08b9 <+0x2b>
081f08af +0x0021:  mov    $0x0,%ebx
081f08b4 +0x0026:  jmp    081f2cfe <+0x2470>
081f08b9 +0x002b:  lea    -0xac(%ebp),%eax
081f08bf +0x0031:  mov    %eax,(%esp)
081f08c2 +0x0034:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f08c7 +0x0039:  lea    -0xa0(%ebp),%eax
081f08cd +0x003f:  add    $0xd,%eax
081f08d0 +0x0042:  mov    %eax,0x4(%esp)
081f08d4 +0x0046:  mov    0x10(%ebp),%eax
081f08d7 +0x0049:  mov    %eax,(%esp)
081f08da +0x004c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081f08df +0x0051:  xor    $0x1,%eax
081f08e2 +0x0054:  test   %al,%al
081f08e4 +0x0056:  je     081f0911 <+0x83>
081f08e6 +0x0058:  movl   $0x0,0xc(%esp)
081f08ee +0x0060:  movl   $0x0,0x8(%esp)
081f08f6 +0x0068:  movl   $&_ZZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f08fe +0x0070:  movl   $0x77d5,(%esp)
081f0905 +0x0077:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f090a +0x007c:  mov    %eax,%ebx
081f090c +0x007e:  jmp    081f2cf0 <+0x2462>
081f0911 +0x0083:  lea    -0xa0(%ebp),%eax
081f0917 +0x0089:  add    $0xf,%eax
081f091a +0x008c:  mov    %eax,0x4(%esp)
081f091e +0x0090:  mov    0x10(%ebp),%eax
081f0921 +0x0093:  mov    %eax,(%esp)
081f0924 +0x0096:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f0929 +0x009b:  xor    $0x1,%eax
081f092c +0x009e:  test   %al,%al
081f092e +0x00a0:  je     081f095b <+0xcd>
081f0930 +0x00a2:  movl   $0x0,0xc(%esp)
081f0938 +0x00aa:  movl   $0x0,0x8(%esp)
081f0940 +0x00b2:  movl   $&_ZZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f0948 +0x00ba:  movl   $0x77d6,(%esp)
081f094f +0x00c1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f0954 +0x00c6:  mov    %eax,%ebx
081f0956 +0x00c8:  jmp    081f2cf0 <+0x2462>
081f095b +0x00cd:  lea    -0xa0(%ebp),%eax
081f0961 +0x00d3:  add    $0x10,%eax
081f0964 +0x00d6:  mov    %eax,0x4(%esp)
081f0968 +0x00da:  mov    0x10(%ebp),%eax
081f096b +0x00dd:  mov    %eax,(%esp)
081f096e +0x00e0:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f0973 +0x00e5:  xor    $0x1,%eax
081f0976 +0x00e8:  test   %al,%al
081f0978 +0x00ea:  je     081f09a5 <+0x117>
081f097a +0x00ec:  movl   $0x0,0xc(%esp)
081f0982 +0x00f4:  movl   $0x0,0x8(%esp)
081f098a +0x00fc:  movl   $&_ZZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f0992 +0x0104:  movl   $0x77d7,(%esp)
081f0999 +0x010b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f099e +0x0110:  mov    %eax,%ebx
081f09a0 +0x0112:  jmp    081f2cf0 <+0x2462>
081f09a5 +0x0117:  mov    0xc(%ebp),%eax
081f09a8 +0x011a:  mov    %eax,(%esp)
081f09ab +0x011d:  call   082308e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f92
081f09b0 +0x0122:  movsbl %al,%eax
081f09b3 +0x0125:  cmp    $0x6,%eax
081f09b6 +0x0128:  je     081f09f0 <+0x162>
081f09b8 +0x012a:  cmp    $0x6,%eax
081f09bb +0x012d:  jg     081f09c4 <+0x136>
081f09bd +0x012f:  cmp    $0x5,%eax
081f09c0 +0x0132:  je     081f09d0 <+0x142>
081f09c2 +0x0134:  jmp    081f0a10 <+0x182>
081f09c4 +0x0136:  cmp    $0x7,%eax
081f09c7 +0x0139:  je     081f09d0 <+0x142>
081f09c9 +0x013b:  cmp    $0x8,%eax
081f09cc +0x013e:  je     081f09f0 <+0x162>
081f09ce +0x0140:  jmp    081f0a10 <+0x182>
081f09d0 +0x0142:  movzbl -0x91(%ebp),%eax
081f09d7 +0x0149:  cmp    $0x5,%al
081f09d9 +0x014b:  je     081f0a37 <+0x1a9>
081f09db +0x014d:  movzbl -0x91(%ebp),%eax
081f09e2 +0x0154:  cmp    $0x7,%al
081f09e4 +0x0156:  je     081f0a3a <+0x1ac>
081f09e6 +0x0158:  mov    $0x0,%ebx
081f09eb +0x015d:  jmp    081f2cf0 <+0x2462>
081f09f0 +0x0162:  movzbl -0x91(%ebp),%eax
081f09f7 +0x0169:  cmp    $0x6,%al
081f09f9 +0x016b:  je     081f0a3d <+0x1af>
081f09fb +0x016d:  movzbl -0x91(%ebp),%eax
081f0a02 +0x0174:  cmp    $0x8,%al
081f0a04 +0x0176:  je     081f0a40 <+0x1b2>
081f0a06 +0x0178:  mov    $0x0,%ebx
081f0a0b +0x017d:  jmp    081f2cf0 <+0x2462>
081f0a10 +0x0182:  movzbl -0x91(%ebp),%esi
081f0a17 +0x0189:  mov    0xc(%ebp),%eax
081f0a1a +0x018c:  mov    %eax,(%esp)
081f0a1d +0x018f:  call   082308e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f92
081f0a22 +0x0194:  mov    %esi,%edx
081f0a24 +0x0196:  cmp    %al,%dl
081f0a26 +0x0198:  setne  %al
081f0a29 +0x019b:  test   %al,%al
081f0a2b +0x019d:  je     081f0a41 <+0x1b3>
081f0a2d +0x019f:  mov    $0x0,%ebx
081f0a32 +0x01a4:  jmp    081f2cf0 <+0x2462>
081f0a37 +0x01a9:  nop
081f0a38 +0x01aa:  jmp    081f0a41 <+0x1b3>
081f0a3a +0x01ac:  nop
081f0a3b +0x01ad:  jmp    081f0a41 <+0x1b3>
081f0a3d +0x01af:  nop
081f0a3e +0x01b0:  jmp    081f0a41 <+0x1b3>
081f0a40 +0x01b2:  nop
081f0a41 +0x01b3:  mov    0xc(%ebp),%eax
081f0a44 +0x01b6:  mov    %eax,(%esp)
081f0a47 +0x01b9:  call   082308bc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f66>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f66
081f0a4c +0x01be:  movzbl -0x91(%ebp),%eax
081f0a53 +0x01c5:  movsbl %al,%eax
081f0a56 +0x01c8:  cmp    $0x8,%eax
081f0a59 +0x01cb:  ja     081f2ccb <+0x243d>
081f0a5f +0x01d1:  mov    &data#48b8b232(.rodata)(,%eax,4),%eax
081f0a66 +0x01d8:  jmp    *%eax
081f0a68 +0x01da:  lea    -0xb8(%ebp),%eax
081f0a6e +0x01e0:  mov    %eax,(%esp)
081f0a71 +0x01e3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f0a76 +0x01e8:  movzwl -0x93(%ebp),%eax
081f0a7d +0x01ef:  movzwl %ax,%esi
081f0a80 +0x01f2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f0a85 +0x01f7:  mov    %esi,0x4(%esp)
081f0a89 +0x01fb:  mov    %eax,(%esp)
081f0a8c +0x01fe:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081f0a91 +0x0203:  mov    %eax,-0x7c(%ebp)
081f0a94 +0x0206:  cmpl   $0x0,-0x7c(%ebp)
081f0a98 +0x020a:  jne    081f0b38 <+0x2aa>
081f0a9e +0x0210:  movl   $0xb,0x8(%esp)
081f0aa6 +0x0218:  movl   $0x1,0x4(%esp)
081f0aae +0x0220:  lea    -0xb8(%ebp),%eax
081f0ab4 +0x0226:  mov    %eax,(%esp)
081f0ab7 +0x0229:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f0abc +0x022e:  movl   $0x0,0x4(%esp)
081f0ac4 +0x0236:  lea    -0xb8(%ebp),%eax
081f0aca +0x023c:  mov    %eax,(%esp)
081f0acd +0x023f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0ad2 +0x0244:  movl   $0x3,0x4(%esp)
081f0ada +0x024c:  lea    -0xb8(%ebp),%eax
081f0ae0 +0x0252:  mov    %eax,(%esp)
081f0ae3 +0x0255:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0ae8 +0x025a:  movl   $0x0,0x4(%esp)
081f0af0 +0x0262:  lea    -0xb8(%ebp),%eax
081f0af6 +0x0268:  mov    %eax,(%esp)
081f0af9 +0x026b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0afe +0x0270:  movl   $0x1,0x4(%esp)
081f0b06 +0x0278:  lea    -0xb8(%ebp),%eax
081f0b0c +0x027e:  mov    %eax,(%esp)
081f0b0f +0x0281:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f0b14 +0x0286:  lea    -0xb8(%ebp),%eax
081f0b1a +0x028c:  mov    %eax,0x4(%esp)
081f0b1e +0x0290:  mov    0xc(%ebp),%eax
081f0b21 +0x0293:  mov    %eax,(%esp)
081f0b24 +0x0296:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f0b29 +0x029b:  mov    $0x0,%ebx
081f0b2e +0x02a0:  mov    $0x0,%esi
081f0b33 +0x02a5:  jmp    081f1cb4 <+0x1426>
081f0b38 +0x02aa:  mov    -0x7c(%ebp),%eax
081f0b3b +0x02ad:  cmp    0xc(%ebp),%eax
081f0b3e +0x02b0:  je     081f0b5c <+0x2ce>
081f0b40 +0x02b2:  mov    -0x7c(%ebp),%eax
081f0b43 +0x02b5:  mov    %eax,(%esp)
081f0b46 +0x02b8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081f0b4b +0x02bd:  mov    %eax,%esi
081f0b4d +0x02bf:  mov    0xc(%ebp),%eax
081f0b50 +0x02c2:  mov    %eax,(%esp)
081f0b53 +0x02c5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081f0b58 +0x02ca:  cmp    %eax,%esi
081f0b5a +0x02cc:  jne    081f0b63 <+0x2d5>
081f0b5c +0x02ce:  mov    $0x1,%eax
081f0b61 +0x02d3:  jmp    081f0b68 <+0x2da>
081f0b63 +0x02d5:  mov    $0x0,%eax
081f0b68 +0x02da:  test   %al,%al
081f0b6a +0x02dc:  je     081f0b7b <+0x2ed>
081f0b6c +0x02de:  mov    $0x7828,%ebx
081f0b71 +0x02e3:  mov    $0x0,%esi
081f0b76 +0x02e8:  jmp    081f1cb4 <+0x1426>
081f0b7b +0x02ed:  mov    0xc(%ebp),%eax
081f0b7e +0x02f0:  mov    %eax,(%esp)
081f0b81 +0x02f3:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f0b86 +0x02f8:  cmp    $0x5,%eax
081f0b89 +0x02fb:  je     081f0b9b <+0x30d>
081f0b8b +0x02fd:  mov    -0x7c(%ebp),%eax
081f0b8e +0x0300:  mov    %eax,(%esp)
081f0b91 +0x0303:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f0b96 +0x0308:  cmp    $0x5,%eax
081f0b99 +0x030b:  jne    081f0ba2 <+0x314>
081f0b9b +0x030d:  mov    $0x1,%eax
081f0ba0 +0x0312:  jmp    081f0ba7 <+0x319>
081f0ba2 +0x0314:  mov    $0x0,%eax
081f0ba7 +0x0319:  test   %al,%al
081f0ba9 +0x031b:  je     081f0bba <+0x32c>
081f0bab +0x031d:  mov    $0x0,%ebx
081f0bb0 +0x0322:  mov    $0x0,%esi
081f0bb5 +0x0327:  jmp    081f1cb4 <+0x1426>
081f0bba +0x032c:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081f0bbf +0x0331:  movl   $0x0,0x10(%esp)
081f0bc7 +0x0339:  mov    -0x7c(%ebp),%edx
081f0bca +0x033c:  mov    %edx,0xc(%esp)
081f0bce +0x0340:  mov    0xc(%ebp),%edx
081f0bd1 +0x0343:  mov    %edx,0x8(%esp)
081f0bd5 +0x0347:  movl   $0x0,0x4(%esp)
081f0bdd +0x034f:  mov    %eax,(%esp)
081f0be0 +0x0352:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081f0be5 +0x0357:  mov    %eax,-0x78(%ebp)
081f0be8 +0x035a:  cmpl   $0x0,-0x78(%ebp)
081f0bec +0x035e:  jle    081f0c8e <+0x400>
081f0bf2 +0x0364:  movl   $0xb,0x8(%esp)
081f0bfa +0x036c:  movl   $0x1,0x4(%esp)
081f0c02 +0x0374:  lea    -0xb8(%ebp),%eax
081f0c08 +0x037a:  mov    %eax,(%esp)
081f0c0b +0x037d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f0c10 +0x0382:  movl   $0x0,0x4(%esp)
081f0c18 +0x038a:  lea    -0xb8(%ebp),%eax
081f0c1e +0x0390:  mov    %eax,(%esp)
081f0c21 +0x0393:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0c26 +0x0398:  mov    -0x78(%ebp),%eax
081f0c29 +0x039b:  movsbl %al,%eax
081f0c2c +0x039e:  mov    %eax,0x4(%esp)
081f0c30 +0x03a2:  lea    -0xb8(%ebp),%eax
081f0c36 +0x03a8:  mov    %eax,(%esp)
081f0c39 +0x03ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0c3e +0x03b0:  movl   $0x0,0x4(%esp)
081f0c46 +0x03b8:  lea    -0xb8(%ebp),%eax
081f0c4c +0x03be:  mov    %eax,(%esp)
081f0c4f +0x03c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0c54 +0x03c6:  movl   $0x1,0x4(%esp)
081f0c5c +0x03ce:  lea    -0xb8(%ebp),%eax
081f0c62 +0x03d4:  mov    %eax,(%esp)
081f0c65 +0x03d7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f0c6a +0x03dc:  lea    -0xb8(%ebp),%eax
081f0c70 +0x03e2:  mov    %eax,0x4(%esp)
081f0c74 +0x03e6:  mov    0xc(%ebp),%eax
081f0c77 +0x03e9:  mov    %eax,(%esp)
081f0c7a +0x03ec:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f0c7f +0x03f1:  mov    $0x0,%ebx
081f0c84 +0x03f6:  mov    $0x0,%esi
081f0c89 +0x03fb:  jmp    081f1cb4 <+0x1426>
081f0c8e +0x0400:  mov    -0x7c(%ebp),%eax
081f0c91 +0x0403:  mov    %eax,(%esp)
081f0c94 +0x0406:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f0c99 +0x040b:  cmp    $0x3,%eax
081f0c9c +0x040e:  setne  %al
081f0c9f +0x0411:  test   %al,%al
081f0ca1 +0x0413:  je     081f0d41 <+0x4b3>
081f0ca7 +0x0419:  movl   $0xb,0x8(%esp)
081f0caf +0x0421:  movl   $0x1,0x4(%esp)
081f0cb7 +0x0429:  lea    -0xb8(%ebp),%eax
081f0cbd +0x042f:  mov    %eax,(%esp)
081f0cc0 +0x0432:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f0cc5 +0x0437:  movl   $0x0,0x4(%esp)
081f0ccd +0x043f:  lea    -0xb8(%ebp),%eax
081f0cd3 +0x0445:  mov    %eax,(%esp)
081f0cd6 +0x0448:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0cdb +0x044d:  movl   $0x13,0x4(%esp)
081f0ce3 +0x0455:  lea    -0xb8(%ebp),%eax
081f0ce9 +0x045b:  mov    %eax,(%esp)
081f0cec +0x045e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0cf1 +0x0463:  movl   $0x0,0x4(%esp)
081f0cf9 +0x046b:  lea    -0xb8(%ebp),%eax
081f0cff +0x0471:  mov    %eax,(%esp)
081f0d02 +0x0474:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0d07 +0x0479:  movl   $0x1,0x4(%esp)
081f0d0f +0x0481:  lea    -0xb8(%ebp),%eax
081f0d15 +0x0487:  mov    %eax,(%esp)
081f0d18 +0x048a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f0d1d +0x048f:  lea    -0xb8(%ebp),%eax
081f0d23 +0x0495:  mov    %eax,0x4(%esp)
081f0d27 +0x0499:  mov    0xc(%ebp),%eax
081f0d2a +0x049c:  mov    %eax,(%esp)
081f0d2d +0x049f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f0d32 +0x04a4:  mov    $0x0,%ebx
081f0d37 +0x04a9:  mov    $0x0,%esi
081f0d3c +0x04ae:  jmp    081f1cb4 <+0x1426>
081f0d41 +0x04b3:  mov    0xc(%ebp),%eax
081f0d44 +0x04b6:  mov    %eax,(%esp)
081f0d47 +0x04b9:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f0d4c +0x04be:  test   %al,%al
081f0d4e +0x04c0:  je     081f0d66 <+0x4d8>
081f0d50 +0x04c2:  mov    -0x7c(%ebp),%eax
081f0d53 +0x04c5:  mov    %eax,(%esp)
081f0d56 +0x04c8:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f0d5b +0x04cd:  test   %al,%al
081f0d5d +0x04cf:  je     081f0d66 <+0x4d8>
081f0d5f +0x04d1:  mov    $0x1,%eax
081f0d64 +0x04d6:  jmp    081f0d6b <+0x4dd>
081f0d66 +0x04d8:  mov    $0x0,%eax
081f0d6b +0x04dd:  test   %al,%al
081f0d6d +0x04df:  je     081f0e0d <+0x57f>
081f0d73 +0x04e5:  movl   $0xb,0x8(%esp)
081f0d7b +0x04ed:  movl   $0x1,0x4(%esp)
081f0d83 +0x04f5:  lea    -0xb8(%ebp),%eax
081f0d89 +0x04fb:  mov    %eax,(%esp)
081f0d8c +0x04fe:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f0d91 +0x0503:  movl   $0x0,0x4(%esp)
081f0d99 +0x050b:  lea    -0xb8(%ebp),%eax
081f0d9f +0x0511:  mov    %eax,(%esp)
081f0da2 +0x0514:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0da7 +0x0519:  movl   $0x12,0x4(%esp)
081f0daf +0x0521:  lea    -0xb8(%ebp),%eax
081f0db5 +0x0527:  mov    %eax,(%esp)
081f0db8 +0x052a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0dbd +0x052f:  movl   $0x0,0x4(%esp)
081f0dc5 +0x0537:  lea    -0xb8(%ebp),%eax
081f0dcb +0x053d:  mov    %eax,(%esp)
081f0dce +0x0540:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0dd3 +0x0545:  movl   $0x1,0x4(%esp)
081f0ddb +0x054d:  lea    -0xb8(%ebp),%eax
081f0de1 +0x0553:  mov    %eax,(%esp)
081f0de4 +0x0556:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f0de9 +0x055b:  lea    -0xb8(%ebp),%eax
081f0def +0x0561:  mov    %eax,0x4(%esp)
081f0df3 +0x0565:  mov    0xc(%ebp),%eax
081f0df6 +0x0568:  mov    %eax,(%esp)
081f0df9 +0x056b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f0dfe +0x0570:  mov    $0x0,%ebx
081f0e03 +0x0575:  mov    $0x0,%esi
081f0e08 +0x057a:  jmp    081f1cb4 <+0x1426>
081f0e0d +0x057f:  mov    0xc(%ebp),%eax
081f0e10 +0x0582:  mov    %eax,(%esp)
081f0e13 +0x0585:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
081f0e18 +0x058a:  test   %al,%al
081f0e1a +0x058c:  je     081f0e54 <+0x5c6>
081f0e1c +0x058e:  movzbl -0x91(%ebp),%eax
081f0e23 +0x0595:  movsbl %al,%eax
081f0e26 +0x0598:  movl   $0xea,0xc(%esp)
081f0e2e +0x05a0:  mov    %eax,0x8(%esp)
081f0e32 +0x05a4:  movl   $0xb,0x4(%esp)
081f0e3a +0x05ac:  mov    0xc(%ebp),%eax
081f0e3d +0x05af:  mov    %eax,(%esp)
081f0e40 +0x05b2:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081f0e45 +0x05b7:  mov    $0x0,%ebx
081f0e4a +0x05bc:  mov    $0x0,%esi
081f0e4f +0x05c1:  jmp    081f1cb4 <+0x1426>
081f0e54 +0x05c6:  mov    -0x7c(%ebp),%eax
081f0e57 +0x05c9:  mov    %eax,(%esp)
081f0e5a +0x05cc:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
081f0e5f +0x05d1:  test   %al,%al
081f0e61 +0x05d3:  je     081f0e9b <+0x60d>
081f0e63 +0x05d5:  movzbl -0x91(%ebp),%eax
081f0e6a +0x05dc:  movsbl %al,%eax
081f0e6d +0x05df:  movl   $0xea,0xc(%esp)
081f0e75 +0x05e7:  mov    %eax,0x8(%esp)
081f0e79 +0x05eb:  movl   $0xb,0x4(%esp)
081f0e81 +0x05f3:  mov    0xc(%ebp),%eax
081f0e84 +0x05f6:  mov    %eax,(%esp)
081f0e87 +0x05f9:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081f0e8c +0x05fe:  mov    $0x0,%ebx
081f0e91 +0x0603:  mov    $0x0,%esi
081f0e96 +0x0608:  jmp    081f1cb4 <+0x1426>
081f0e9b +0x060d:  mov    &_ZN10GlobalData15s_power_managerE,%eax
081f0ea0 +0x0612:  mov    %eax,(%esp)
081f0ea3 +0x0615:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
081f0ea8 +0x061a:  test   %al,%al
081f0eaa +0x061c:  je     081f10a9 <+0x81b>
081f0eb0 +0x0622:  mov    0xc(%ebp),%eax
081f0eb3 +0x0625:  mov    %eax,(%esp)
081f0eb6 +0x0628:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f0ebb +0x062d:  cmp    $0x7,%al
081f0ebd +0x062f:  jne    081f0ed5 <+0x647>
081f0ebf +0x0631:  mov    -0x7c(%ebp),%eax
081f0ec2 +0x0634:  mov    %eax,(%esp)
081f0ec5 +0x0637:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f0eca +0x063c:  cmp    $0x7,%al
081f0ecc +0x063e:  jne    081f0ed5 <+0x647>
081f0ece +0x0640:  mov    $0x1,%eax
081f0ed3 +0x0645:  jmp    081f0eda <+0x64c>
081f0ed5 +0x0647:  mov    $0x0,%eax
081f0eda +0x064c:  test   %al,%al
081f0edc +0x064e:  je     081f0fb1 <+0x723>
081f0ee2 +0x0654:  mov    0xc(%ebp),%eax
081f0ee5 +0x0657:  mov    %eax,(%esp)
081f0ee8 +0x065a:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
081f0eed +0x065f:  mov    %eax,%esi
081f0eef +0x0661:  mov    -0x7c(%ebp),%eax
081f0ef2 +0x0664:  mov    %eax,(%esp)
081f0ef5 +0x0667:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
081f0efa +0x066c:  mov    %esi,%edx
081f0efc +0x066e:  cmp    %al,%dl
081f0efe +0x0670:  setne  %al
081f0f01 +0x0673:  test   %al,%al
081f0f03 +0x0675:  je     081f12d8 <+0xa4a>
081f0f09 +0x067b:  lea    -0xb8(%ebp),%eax
081f0f0f +0x0681:  mov    %eax,(%esp)
081f0f12 +0x0684:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f0f17 +0x0689:  movl   $0xb,0x8(%esp)
081f0f1f +0x0691:  movl   $0x1,0x4(%esp)
081f0f27 +0x0699:  lea    -0xb8(%ebp),%eax
081f0f2d +0x069f:  mov    %eax,(%esp)
081f0f30 +0x06a2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f0f35 +0x06a7:  movl   $0x0,0x4(%esp)
081f0f3d +0x06af:  lea    -0xb8(%ebp),%eax
081f0f43 +0x06b5:  mov    %eax,(%esp)
081f0f46 +0x06b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0f4b +0x06bd:  movl   $0x13,0x4(%esp)
081f0f53 +0x06c5:  lea    -0xb8(%ebp),%eax
081f0f59 +0x06cb:  mov    %eax,(%esp)
081f0f5c +0x06ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0f61 +0x06d3:  movl   $0x0,0x4(%esp)
081f0f69 +0x06db:  lea    -0xb8(%ebp),%eax
081f0f6f +0x06e1:  mov    %eax,(%esp)
081f0f72 +0x06e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f0f77 +0x06e9:  movl   $0x1,0x4(%esp)
081f0f7f +0x06f1:  lea    -0xb8(%ebp),%eax
081f0f85 +0x06f7:  mov    %eax,(%esp)
081f0f88 +0x06fa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f0f8d +0x06ff:  lea    -0xb8(%ebp),%eax
081f0f93 +0x0705:  mov    %eax,0x4(%esp)
081f0f97 +0x0709:  mov    0xc(%ebp),%eax
081f0f9a +0x070c:  mov    %eax,(%esp)
081f0f9d +0x070f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f0fa2 +0x0714:  mov    $0x0,%ebx
081f0fa7 +0x0719:  mov    $0x0,%esi
081f0fac +0x071e:  jmp    081f1cb4 <+0x1426>
081f0fb1 +0x0723:  mov    0xc(%ebp),%eax
081f0fb4 +0x0726:  mov    %eax,(%esp)
081f0fb7 +0x0729:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f0fbc +0x072e:  cmp    $0x7,%al
081f0fbe +0x0730:  je     081f0fcf <+0x741>
081f0fc0 +0x0732:  mov    -0x7c(%ebp),%eax
081f0fc3 +0x0735:  mov    %eax,(%esp)
081f0fc6 +0x0738:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f0fcb +0x073d:  cmp    $0x7,%al
081f0fcd +0x073f:  je     081f0fed <+0x75f>
081f0fcf +0x0741:  mov    0xc(%ebp),%eax
081f0fd2 +0x0744:  mov    %eax,(%esp)
081f0fd5 +0x0747:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f0fda +0x074c:  cmp    $0x7,%al
081f0fdc +0x074e:  jne    081f0ff4 <+0x766>
081f0fde +0x0750:  mov    -0x7c(%ebp),%eax
081f0fe1 +0x0753:  mov    %eax,(%esp)
081f0fe4 +0x0756:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081f0fe9 +0x075b:  cmp    $0x7,%al
081f0feb +0x075d:  je     081f0ff4 <+0x766>
081f0fed +0x075f:  mov    $0x1,%eax
081f0ff2 +0x0764:  jmp    081f0ff9 <+0x76b>
081f0ff4 +0x0766:  mov    $0x0,%eax
081f0ff9 +0x076b:  test   %al,%al
081f0ffb +0x076d:  je     081f12d8 <+0xa4a>
081f1001 +0x0773:  lea    -0xb8(%ebp),%eax
081f1007 +0x0779:  mov    %eax,(%esp)
081f100a +0x077c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f100f +0x0781:  movl   $0xb,0x8(%esp)
081f1017 +0x0789:  movl   $0x1,0x4(%esp)
081f101f +0x0791:  lea    -0xb8(%ebp),%eax
081f1025 +0x0797:  mov    %eax,(%esp)
081f1028 +0x079a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f102d +0x079f:  movl   $0x0,0x4(%esp)
081f1035 +0x07a7:  lea    -0xb8(%ebp),%eax
081f103b +0x07ad:  mov    %eax,(%esp)
081f103e +0x07b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1043 +0x07b5:  movl   $0x13,0x4(%esp)
081f104b +0x07bd:  lea    -0xb8(%ebp),%eax
081f1051 +0x07c3:  mov    %eax,(%esp)
081f1054 +0x07c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1059 +0x07cb:  movl   $0x0,0x4(%esp)
081f1061 +0x07d3:  lea    -0xb8(%ebp),%eax
081f1067 +0x07d9:  mov    %eax,(%esp)
081f106a +0x07dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f106f +0x07e1:  movl   $0x1,0x4(%esp)
081f1077 +0x07e9:  lea    -0xb8(%ebp),%eax
081f107d +0x07ef:  mov    %eax,(%esp)
081f1080 +0x07f2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1085 +0x07f7:  lea    -0xb8(%ebp),%eax
081f108b +0x07fd:  mov    %eax,0x4(%esp)
081f108f +0x0801:  mov    0xc(%ebp),%eax
081f1092 +0x0804:  mov    %eax,(%esp)
081f1095 +0x0807:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f109a +0x080c:  mov    $0x0,%ebx
081f109f +0x0811:  mov    $0x0,%esi
081f10a4 +0x0816:  jmp    081f1cb4 <+0x1426>
081f10a9 +0x081b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081f10b0 +0x0822:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081f10b5 +0x0827:  mov    %eax,-0x70(%ebp)
081f10b8 +0x082a:  mov    -0x7c(%ebp),%eax
081f10bb +0x082d:  mov    %eax,(%esp)
081f10be +0x0830:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
081f10c3 +0x0835:  mov    %eax,-0x6c(%ebp)
081f10c6 +0x0838:  mov    -0x6c(%ebp),%eax
081f10c9 +0x083b:  add    $0x258,%eax
081f10ce +0x0840:  cmp    -0x70(%ebp),%eax
081f10d1 +0x0843:  jle    081f10f1 <+0x863>
081f10d3 +0x0845:  movl   $0x0,0x4(%esp)
081f10db +0x084d:  mov    0xc(%ebp),%eax
081f10de +0x0850:  mov    %eax,(%esp)
081f10e1 +0x0853:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081f10e6 +0x0858:  test   %al,%al
081f10e8 +0x085a:  je     081f10f1 <+0x863>
081f10ea +0x085c:  mov    $0x1,%eax
081f10ef +0x0861:  jmp    081f10f6 <+0x868>
081f10f1 +0x0863:  mov    $0x0,%eax
081f10f6 +0x0868:  test   %al,%al
081f10f8 +0x086a:  je     081f113c <+0x8ae>
081f10fa +0x086c:  movzbl -0x91(%ebp),%eax
081f1101 +0x0873:  movsbl %al,%eax
081f1104 +0x0876:  lea    -0xb8(%ebp),%edx
081f110a +0x087c:  mov    %edx,0x10(%esp)
081f110e +0x0880:  movl   $0xfa,0xc(%esp)
081f1116 +0x0888:  mov    %eax,0x8(%esp)
081f111a +0x088c:  movl   $0xb,0x4(%esp)
081f1122 +0x0894:  mov    0xc(%ebp),%eax
081f1125 +0x0897:  mov    %eax,(%esp)
081f1128 +0x089a:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f112d +0x089f:  mov    $0x0,%ebx
081f1132 +0x08a4:  mov    $0x0,%esi
081f1137 +0x08a9:  jmp    081f1cb4 <+0x1426>
081f113c +0x08ae:  mov    0xc(%ebp),%eax
081f113f +0x08b1:  mov    %eax,(%esp)
081f1142 +0x08b4:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
081f1147 +0x08b9:  mov    %eax,-0x6c(%ebp)
081f114a +0x08bc:  mov    -0x6c(%ebp),%eax
081f114d +0x08bf:  add    $0x258,%eax
081f1152 +0x08c4:  cmp    -0x70(%ebp),%eax
081f1155 +0x08c7:  jle    081f1175 <+0x8e7>
081f1157 +0x08c9:  movl   $0x0,0x4(%esp)
081f115f +0x08d1:  mov    -0x7c(%ebp),%eax
081f1162 +0x08d4:  mov    %eax,(%esp)
081f1165 +0x08d7:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081f116a +0x08dc:  test   %al,%al
081f116c +0x08de:  je     081f1175 <+0x8e7>
081f116e +0x08e0:  mov    $0x1,%eax
081f1173 +0x08e5:  jmp    081f117a <+0x8ec>
081f1175 +0x08e7:  mov    $0x0,%eax
081f117a +0x08ec:  test   %al,%al
081f117c +0x08ee:  je     081f11c0 <+0x932>
081f117e +0x08f0:  movzbl -0x91(%ebp),%eax
081f1185 +0x08f7:  movsbl %al,%eax
081f1188 +0x08fa:  lea    -0xb8(%ebp),%edx
081f118e +0x0900:  mov    %edx,0x10(%esp)
081f1192 +0x0904:  movl   $0xfa,0xc(%esp)
081f119a +0x090c:  mov    %eax,0x8(%esp)
081f119e +0x0910:  movl   $0xb,0x4(%esp)
081f11a6 +0x0918:  mov    0xc(%ebp),%eax
081f11a9 +0x091b:  mov    %eax,(%esp)
081f11ac +0x091e:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f11b1 +0x0923:  mov    $0x0,%ebx
081f11b6 +0x0928:  mov    $0x0,%esi
081f11bb +0x092d:  jmp    081f1cb4 <+0x1426>
081f11c0 +0x0932:  mov    0xc(%ebp),%eax
081f11c3 +0x0935:  mov    %eax,(%esp)
081f11c6 +0x0938:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081f11cb +0x093d:  mov    %eax,-0x68(%ebp)
081f11ce +0x0940:  cmpl   $0x0,-0x68(%ebp)
081f11d2 +0x0944:  je     081f1201 <+0x973>
081f11d4 +0x0946:  mov    -0x68(%ebp),%eax
081f11d7 +0x0949:  mov    %eax,(%esp)
081f11da +0x094c:  call   085bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>  ; CParty::CheckMemberLastTryAssaultTime()
081f11df +0x0951:  test   %al,%al
081f11e1 +0x0953:  je     081f1201 <+0x973>
081f11e3 +0x0955:  movl   $0x0,0x4(%esp)
081f11eb +0x095d:  mov    -0x7c(%ebp),%eax
081f11ee +0x0960:  mov    %eax,(%esp)
081f11f1 +0x0963:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081f11f6 +0x0968:  test   %al,%al
081f11f8 +0x096a:  je     081f1201 <+0x973>
081f11fa +0x096c:  mov    $0x1,%eax
081f11ff +0x0971:  jmp    081f1206 <+0x978>
081f1201 +0x0973:  mov    $0x0,%eax
081f1206 +0x0978:  test   %al,%al
081f1208 +0x097a:  je     081f124c <+0x9be>
081f120a +0x097c:  movzbl -0x91(%ebp),%eax
081f1211 +0x0983:  movsbl %al,%eax
081f1214 +0x0986:  lea    -0xb8(%ebp),%edx
081f121a +0x098c:  mov    %edx,0x10(%esp)
081f121e +0x0990:  movl   $0xfa,0xc(%esp)
081f1226 +0x0998:  mov    %eax,0x8(%esp)
081f122a +0x099c:  movl   $0xb,0x4(%esp)
081f1232 +0x09a4:  mov    0xc(%ebp),%eax
081f1235 +0x09a7:  mov    %eax,(%esp)
081f1238 +0x09aa:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f123d +0x09af:  mov    $0x0,%ebx
081f1242 +0x09b4:  mov    $0x0,%esi
081f1247 +0x09b9:  jmp    081f1cb4 <+0x1426>
081f124c +0x09be:  mov    -0x7c(%ebp),%eax
081f124f +0x09c1:  mov    %eax,(%esp)
081f1252 +0x09c4:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081f1257 +0x09c9:  mov    %eax,-0x64(%ebp)
081f125a +0x09cc:  cmpl   $0x0,-0x64(%ebp)
081f125e +0x09d0:  je     081f128d <+0x9ff>
081f1260 +0x09d2:  mov    -0x64(%ebp),%eax
081f1263 +0x09d5:  mov    %eax,(%esp)
081f1266 +0x09d8:  call   085bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>  ; CParty::CheckMemberLastTryAssaultTime()
081f126b +0x09dd:  test   %al,%al
081f126d +0x09df:  je     081f128d <+0x9ff>
081f126f +0x09e1:  movl   $0x0,0x4(%esp)
081f1277 +0x09e9:  mov    0xc(%ebp),%eax
081f127a +0x09ec:  mov    %eax,(%esp)
081f127d +0x09ef:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081f1282 +0x09f4:  test   %al,%al
081f1284 +0x09f6:  je     081f128d <+0x9ff>
081f1286 +0x09f8:  mov    $0x1,%eax
081f128b +0x09fd:  jmp    081f1292 <+0xa04>
081f128d +0x09ff:  mov    $0x0,%eax
081f1292 +0x0a04:  test   %al,%al
081f1294 +0x0a06:  je     081f12d8 <+0xa4a>
081f1296 +0x0a08:  movzbl -0x91(%ebp),%eax
081f129d +0x0a0f:  movsbl %al,%eax
081f12a0 +0x0a12:  lea    -0xb8(%ebp),%edx
081f12a6 +0x0a18:  mov    %edx,0x10(%esp)
081f12aa +0x0a1c:  movl   $0xfa,0xc(%esp)
081f12b2 +0x0a24:  mov    %eax,0x8(%esp)
081f12b6 +0x0a28:  movl   $0xb,0x4(%esp)
081f12be +0x0a30:  mov    0xc(%ebp),%eax
081f12c1 +0x0a33:  mov    %eax,(%esp)
081f12c4 +0x0a36:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f12c9 +0x0a3b:  mov    $0x0,%ebx
081f12ce +0x0a40:  mov    $0x0,%esi
081f12d3 +0x0a45:  jmp    081f1cb4 <+0x1426>
081f12d8 +0x0a4a:  movl   $0x0,-0x74(%ebp)
081f12df +0x0a51:  mov    0xc(%ebp),%eax
081f12e2 +0x0a54:  mov    %eax,(%esp)
081f12e5 +0x0a57:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f12ea +0x0a5c:  xor    $0x1,%eax
081f12ed +0x0a5f:  test   %al,%al
081f12ef +0x0a61:  je     081f130a <+0xa7c>
081f12f1 +0x0a63:  mov    -0x7c(%ebp),%eax
081f12f4 +0x0a66:  mov    %eax,(%esp)
081f12f7 +0x0a69:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f12fc +0x0a6e:  xor    $0x1,%eax
081f12ff +0x0a71:  test   %al,%al
081f1301 +0x0a73:  je     081f130a <+0xa7c>
081f1303 +0x0a75:  mov    $0x1,%eax
081f1308 +0x0a7a:  jmp    081f130f <+0xa81>
081f130a +0x0a7c:  mov    $0x0,%eax
081f130f +0x0a81:  test   %al,%al
081f1311 +0x0a83:  je     081f14fe <+0xc70>
081f1317 +0x0a89:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f131c +0x0a8e:  mov    %eax,(%esp)
081f131f +0x0a91:  call   08294e10 <_ZN12CGameManager8GetPartyEv>  ; CGameManager::GetParty()
081f1324 +0x0a96:  mov    %eax,-0x74(%ebp)
081f1327 +0x0a99:  cmpl   $0x0,-0x74(%ebp)
081f132b +0x0a9d:  jne    081f13d9 <+0xb4b>
081f1331 +0x0aa3:  lea    -0xb8(%ebp),%eax
081f1337 +0x0aa9:  mov    %eax,(%esp)
081f133a +0x0aac:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f133f +0x0ab1:  movl   $0xb,0x8(%esp)
081f1347 +0x0ab9:  movl   $0x1,0x4(%esp)
081f134f +0x0ac1:  lea    -0xb8(%ebp),%eax
081f1355 +0x0ac7:  mov    %eax,(%esp)
081f1358 +0x0aca:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f135d +0x0acf:  movl   $0x0,0x4(%esp)
081f1365 +0x0ad7:  lea    -0xb8(%ebp),%eax
081f136b +0x0add:  mov    %eax,(%esp)
081f136e +0x0ae0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1373 +0x0ae5:  movl   $0x4,0x4(%esp)
081f137b +0x0aed:  lea    -0xb8(%ebp),%eax
081f1381 +0x0af3:  mov    %eax,(%esp)
081f1384 +0x0af6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1389 +0x0afb:  movl   $0x0,0x4(%esp)
081f1391 +0x0b03:  lea    -0xb8(%ebp),%eax
081f1397 +0x0b09:  mov    %eax,(%esp)
081f139a +0x0b0c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f139f +0x0b11:  movl   $0x1,0x4(%esp)
081f13a7 +0x0b19:  lea    -0xb8(%ebp),%eax
081f13ad +0x0b1f:  mov    %eax,(%esp)
081f13b0 +0x0b22:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f13b5 +0x0b27:  lea    -0xb8(%ebp),%eax
081f13bb +0x0b2d:  mov    %eax,0x4(%esp)
081f13bf +0x0b31:  mov    0xc(%ebp),%eax
081f13c2 +0x0b34:  mov    %eax,(%esp)
081f13c5 +0x0b37:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f13ca +0x0b3c:  mov    $0x0,%ebx
081f13cf +0x0b41:  mov    $0x0,%esi
081f13d4 +0x0b46:  jmp    081f1cb4 <+0x1426>
081f13d9 +0x0b4b:  mov    -0x7c(%ebp),%eax
081f13dc +0x0b4e:  mov    %eax,0x4(%esp)
081f13e0 +0x0b52:  mov    -0x74(%ebp),%eax
081f13e3 +0x0b55:  mov    %eax,(%esp)
081f13e6 +0x0b58:  call   0859b1be <_ZN6CParty12create_partyEP5CUser>  ; CParty::create_party(CUser*)
081f13eb +0x0b5d:  movl   $0x0,0x4(%esp)
081f13f3 +0x0b65:  mov    -0x74(%ebp),%eax
081f13f6 +0x0b68:  mov    %eax,(%esp)
081f13f9 +0x0b6b:  call   0822d852 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2efc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2efc
081f13fe +0x0b70:  movl   $0x5,0x4(%esp)
081f1406 +0x0b78:  mov    -0x74(%ebp),%eax
081f1409 +0x0b7b:  mov    %eax,(%esp)
081f140c +0x0b7e:  call   0822d870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f1a
081f1411 +0x0b83:  mov    0xc(%ebp),%eax
081f1414 +0x0b86:  mov    %eax,0x4(%esp)
081f1418 +0x0b8a:  mov    -0x74(%ebp),%eax
081f141b +0x0b8d:  mov    %eax,(%esp)
081f141e +0x0b90:  call   0859b2b6 <_ZN6CParty9join_userEP5CUser>  ; CParty::join_user(CUser*)
081f1423 +0x0b95:  mov    -0x74(%ebp),%eax
081f1426 +0x0b98:  mov    %eax,(%esp)
081f1429 +0x0b9b:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
081f142e +0x0ba0:  lea    -0xb8(%ebp),%eax
081f1434 +0x0ba6:  mov    %eax,(%esp)
081f1437 +0x0ba9:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f143c +0x0bae:  movl   $0x8,0x8(%esp)
081f1444 +0x0bb6:  movl   $0x0,0x4(%esp)
081f144c +0x0bbe:  lea    -0xb8(%ebp),%eax
081f1452 +0x0bc4:  mov    %eax,(%esp)
081f1455 +0x0bc7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f145a +0x0bcc:  mov    0xc(%ebp),%eax
081f145d +0x0bcf:  mov    %eax,(%esp)
081f1460 +0x0bd2:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081f1465 +0x0bd7:  movzwl %ax,%eax
081f1468 +0x0bda:  mov    %eax,0x4(%esp)
081f146c +0x0bde:  lea    -0xb8(%ebp),%eax
081f1472 +0x0be4:  mov    %eax,(%esp)
081f1475 +0x0be7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f147a +0x0bec:  movl   $0x0,0x4(%esp)
081f1482 +0x0bf4:  lea    -0xb8(%ebp),%eax
081f1488 +0x0bfa:  mov    %eax,(%esp)
081f148b +0x0bfd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1490 +0x0c02:  movzwl -0x93(%ebp),%eax
081f1497 +0x0c09:  movzwl %ax,%eax
081f149a +0x0c0c:  mov    %eax,0x4(%esp)
081f149e +0x0c10:  lea    -0xb8(%ebp),%eax
081f14a4 +0x0c16:  mov    %eax,(%esp)
081f14a7 +0x0c19:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f14ac +0x0c1e:  movl   $0x1,0x4(%esp)
081f14b4 +0x0c26:  lea    -0xb8(%ebp),%eax
081f14ba +0x0c2c:  mov    %eax,(%esp)
081f14bd +0x0c2f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f14c2 +0x0c34:  lea    -0xb8(%ebp),%eax
081f14c8 +0x0c3a:  mov    %eax,0x4(%esp)
081f14cc +0x0c3e:  mov    -0x7c(%ebp),%eax
081f14cf +0x0c41:  mov    %eax,(%esp)
081f14d2 +0x0c44:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f14d7 +0x0c49:  mov    -0x74(%ebp),%eax
081f14da +0x0c4c:  mov    %eax,(%esp)
081f14dd +0x0c4f:  call   0859cea2 <_ZN6CParty17send_party_ipinfoEv>  ; CParty::send_party_ipinfo()
081f14e2 +0x0c54:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f14e7 +0x0c59:  movl   $0x0,0x8(%esp)
081f14ef +0x0c61:  mov    -0x74(%ebp),%edx
081f14f2 +0x0c64:  mov    %edx,0x4(%esp)
081f14f6 +0x0c68:  mov    %eax,(%esp)
081f14f9 +0x0c6b:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
081f14fe +0x0c70:  mov    0xc(%ebp),%eax
081f1501 +0x0c73:  mov    %eax,(%esp)
081f1504 +0x0c76:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f1509 +0x0c7b:  test   %al,%al
081f150b +0x0c7d:  je     081f1526 <+0xc98>
081f150d +0x0c7f:  mov    -0x7c(%ebp),%eax
081f1510 +0x0c82:  mov    %eax,(%esp)
081f1513 +0x0c85:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f1518 +0x0c8a:  xor    $0x1,%eax
081f151b +0x0c8d:  test   %al,%al
081f151d +0x0c8f:  je     081f1526 <+0xc98>
081f151f +0x0c91:  mov    $0x1,%eax
081f1524 +0x0c96:  jmp    081f152b <+0xc9d>
081f1526 +0x0c98:  mov    $0x0,%eax
081f152b +0x0c9d:  test   %al,%al
081f152d +0x0c9f:  je     081f18be <+0x1030>
081f1533 +0x0ca5:  mov    0xc(%ebp),%eax
081f1536 +0x0ca8:  mov    %eax,(%esp)
081f1539 +0x0cab:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081f153e +0x0cb0:  mov    %eax,-0x74(%ebp)
081f1541 +0x0cb3:  cmpl   $0x0,-0x74(%ebp)
081f1545 +0x0cb7:  jne    081f15f3 <+0xd65>
081f154b +0x0cbd:  lea    -0xb8(%ebp),%eax
081f1551 +0x0cc3:  mov    %eax,(%esp)
081f1554 +0x0cc6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f1559 +0x0ccb:  movl   $0xb,0x8(%esp)
081f1561 +0x0cd3:  movl   $0x1,0x4(%esp)
081f1569 +0x0cdb:  lea    -0xb8(%ebp),%eax
081f156f +0x0ce1:  mov    %eax,(%esp)
081f1572 +0x0ce4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1577 +0x0ce9:  movl   $0x0,0x4(%esp)
081f157f +0x0cf1:  lea    -0xb8(%ebp),%eax
081f1585 +0x0cf7:  mov    %eax,(%esp)
081f1588 +0x0cfa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f158d +0x0cff:  movl   $0x4,0x4(%esp)
081f1595 +0x0d07:  lea    -0xb8(%ebp),%eax
081f159b +0x0d0d:  mov    %eax,(%esp)
081f159e +0x0d10:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f15a3 +0x0d15:  movl   $0x0,0x4(%esp)
081f15ab +0x0d1d:  lea    -0xb8(%ebp),%eax
081f15b1 +0x0d23:  mov    %eax,(%esp)
081f15b4 +0x0d26:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f15b9 +0x0d2b:  movl   $0x1,0x4(%esp)
081f15c1 +0x0d33:  lea    -0xb8(%ebp),%eax
081f15c7 +0x0d39:  mov    %eax,(%esp)
081f15ca +0x0d3c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f15cf +0x0d41:  lea    -0xb8(%ebp),%eax
081f15d5 +0x0d47:  mov    %eax,0x4(%esp)
081f15d9 +0x0d4b:  mov    0xc(%ebp),%eax
081f15dc +0x0d4e:  mov    %eax,(%esp)
081f15df +0x0d51:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f15e4 +0x0d56:  mov    $0x0,%ebx
081f15e9 +0x0d5b:  mov    $0x0,%esi
081f15ee +0x0d60:  jmp    081f1cb4 <+0x1426>
081f15f3 +0x0d65:  mov    -0x74(%ebp),%eax
081f15f6 +0x0d68:  mov    %eax,(%esp)
081f15f9 +0x0d6b:  call   0859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>  ; CParty::CanDoPartyActionAssalutState()
081f15fe +0x0d70:  xor    $0x1,%eax
081f1601 +0x0d73:  test   %al,%al
081f1603 +0x0d75:  je     081f16b1 <+0xe23>
081f1609 +0x0d7b:  lea    -0xb8(%ebp),%eax
081f160f +0x0d81:  mov    %eax,(%esp)
081f1612 +0x0d84:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f1617 +0x0d89:  movl   $0xb,0x8(%esp)
081f161f +0x0d91:  movl   $0x1,0x4(%esp)
081f1627 +0x0d99:  lea    -0xb8(%ebp),%eax
081f162d +0x0d9f:  mov    %eax,(%esp)
081f1630 +0x0da2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1635 +0x0da7:  movl   $0x0,0x4(%esp)
081f163d +0x0daf:  lea    -0xb8(%ebp),%eax
081f1643 +0x0db5:  mov    %eax,(%esp)
081f1646 +0x0db8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f164b +0x0dbd:  movl   $0x13,0x4(%esp)
081f1653 +0x0dc5:  lea    -0xb8(%ebp),%eax
081f1659 +0x0dcb:  mov    %eax,(%esp)
081f165c +0x0dce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1661 +0x0dd3:  movl   $0x0,0x4(%esp)
081f1669 +0x0ddb:  lea    -0xb8(%ebp),%eax
081f166f +0x0de1:  mov    %eax,(%esp)
081f1672 +0x0de4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1677 +0x0de9:  movl   $0x1,0x4(%esp)
081f167f +0x0df1:  lea    -0xb8(%ebp),%eax
081f1685 +0x0df7:  mov    %eax,(%esp)
081f1688 +0x0dfa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f168d +0x0dff:  lea    -0xb8(%ebp),%eax
081f1693 +0x0e05:  mov    %eax,0x4(%esp)
081f1697 +0x0e09:  mov    0xc(%ebp),%eax
081f169a +0x0e0c:  mov    %eax,(%esp)
081f169d +0x0e0f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f16a2 +0x0e14:  mov    $0x0,%ebx
081f16a7 +0x0e19:  mov    $0x0,%esi
081f16ac +0x0e1e:  jmp    081f1cb4 <+0x1426>
081f16b1 +0x0e23:  mov    -0x7c(%ebp),%eax
081f16b4 +0x0e26:  mov    %eax,0x4(%esp)
081f16b8 +0x0e2a:  mov    -0x74(%ebp),%eax
081f16bb +0x0e2d:  mov    %eax,(%esp)
081f16be +0x0e30:  call   0859b2b6 <_ZN6CParty9join_userEP5CUser>  ; CParty::join_user(CUser*)
081f16c3 +0x0e35:  mov    %eax,-0x60(%ebp)
081f16c6 +0x0e38:  cmpl   $0x0,-0x60(%ebp)
081f16ca +0x0e3c:  jg     081f17b5 <+0xf27>
081f16d0 +0x0e42:  lea    -0xb8(%ebp),%eax
081f16d6 +0x0e48:  mov    %eax,(%esp)
081f16d9 +0x0e4b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f16de +0x0e50:  movl   $0xb,0x8(%esp)
081f16e6 +0x0e58:  movl   $0x1,0x4(%esp)
081f16ee +0x0e60:  lea    -0xb8(%ebp),%eax
081f16f4 +0x0e66:  mov    %eax,(%esp)
081f16f7 +0x0e69:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f16fc +0x0e6e:  movl   $0x0,0x4(%esp)
081f1704 +0x0e76:  lea    -0xb8(%ebp),%eax
081f170a +0x0e7c:  mov    %eax,(%esp)
081f170d +0x0e7f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1712 +0x0e84:  mov    -0x60(%ebp),%eax
081f1715 +0x0e87:  cmp    $0xfffffffe,%eax
081f1718 +0x0e8a:  je     081f1737 <+0xea9>
081f171a +0x0e8c:  cmp    $0xffffffff,%eax
081f171d +0x0e8f:  jne    081f174f <+0xec1>
081f171f +0x0e91:  movl   $0x4,0x4(%esp)
081f1727 +0x0e99:  lea    -0xb8(%ebp),%eax
081f172d +0x0e9f:  mov    %eax,(%esp)
081f1730 +0x0ea2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1735 +0x0ea7:  jmp    081f1765 <+0xed7>
081f1737 +0x0ea9:  movl   $0x13,0x4(%esp)
081f173f +0x0eb1:  lea    -0xb8(%ebp),%eax
081f1745 +0x0eb7:  mov    %eax,(%esp)
081f1748 +0x0eba:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f174d +0x0ebf:  jmp    081f1765 <+0xed7>
081f174f +0x0ec1:  movl   $0x1,0x4(%esp)
081f1757 +0x0ec9:  lea    -0xb8(%ebp),%eax
081f175d +0x0ecf:  mov    %eax,(%esp)
081f1760 +0x0ed2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1765 +0x0ed7:  movl   $0x0,0x4(%esp)
081f176d +0x0edf:  lea    -0xb8(%ebp),%eax
081f1773 +0x0ee5:  mov    %eax,(%esp)
081f1776 +0x0ee8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f177b +0x0eed:  movl   $0x1,0x4(%esp)
081f1783 +0x0ef5:  lea    -0xb8(%ebp),%eax
081f1789 +0x0efb:  mov    %eax,(%esp)
081f178c +0x0efe:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1791 +0x0f03:  lea    -0xb8(%ebp),%eax
081f1797 +0x0f09:  mov    %eax,0x4(%esp)
081f179b +0x0f0d:  mov    0xc(%ebp),%eax
081f179e +0x0f10:  mov    %eax,(%esp)
081f17a1 +0x0f13:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f17a6 +0x0f18:  mov    $0x0,%ebx
081f17ab +0x0f1d:  mov    $0x0,%esi
081f17b0 +0x0f22:  jmp    081f1cb4 <+0x1426>
081f17b5 +0x0f27:  movl   $0x0,0x8(%esp)
081f17bd +0x0f2f:  movl   $0x0,0x4(%esp)
081f17c5 +0x0f37:  mov    -0x74(%ebp),%eax
081f17c8 +0x0f3a:  mov    %eax,(%esp)
081f17cb +0x0f3d:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
081f17d0 +0x0f42:  movl   $0x0,0x4(%esp)
081f17d8 +0x0f4a:  mov    -0x74(%ebp),%eax
081f17db +0x0f4d:  mov    %eax,(%esp)
081f17de +0x0f50:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
081f17e3 +0x0f55:  mov    -0x74(%ebp),%eax
081f17e6 +0x0f58:  mov    %eax,(%esp)
081f17e9 +0x0f5b:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
081f17ee +0x0f60:  lea    -0xb8(%ebp),%eax
081f17f4 +0x0f66:  mov    %eax,(%esp)
081f17f7 +0x0f69:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f17fc +0x0f6e:  movl   $0x8,0x8(%esp)
081f1804 +0x0f76:  movl   $0x0,0x4(%esp)
081f180c +0x0f7e:  lea    -0xb8(%ebp),%eax
081f1812 +0x0f84:  mov    %eax,(%esp)
081f1815 +0x0f87:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f181a +0x0f8c:  mov    0xc(%ebp),%eax
081f181d +0x0f8f:  mov    %eax,(%esp)
081f1820 +0x0f92:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081f1825 +0x0f97:  movzwl %ax,%eax
081f1828 +0x0f9a:  mov    %eax,0x4(%esp)
081f182c +0x0f9e:  lea    -0xb8(%ebp),%eax
081f1832 +0x0fa4:  mov    %eax,(%esp)
081f1835 +0x0fa7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f183a +0x0fac:  movl   $0x0,0x4(%esp)
081f1842 +0x0fb4:  lea    -0xb8(%ebp),%eax
081f1848 +0x0fba:  mov    %eax,(%esp)
081f184b +0x0fbd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1850 +0x0fc2:  movzwl -0x93(%ebp),%eax
081f1857 +0x0fc9:  movzwl %ax,%eax
081f185a +0x0fcc:  mov    %eax,0x4(%esp)
081f185e +0x0fd0:  lea    -0xb8(%ebp),%eax
081f1864 +0x0fd6:  mov    %eax,(%esp)
081f1867 +0x0fd9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f186c +0x0fde:  movl   $0x1,0x4(%esp)
081f1874 +0x0fe6:  lea    -0xb8(%ebp),%eax
081f187a +0x0fec:  mov    %eax,(%esp)
081f187d +0x0fef:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1882 +0x0ff4:  lea    -0xb8(%ebp),%eax
081f1888 +0x0ffa:  mov    %eax,0x4(%esp)
081f188c +0x0ffe:  mov    -0x7c(%ebp),%eax
081f188f +0x1001:  mov    %eax,(%esp)
081f1892 +0x1004:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1897 +0x1009:  mov    -0x74(%ebp),%eax
081f189a +0x100c:  mov    %eax,(%esp)
081f189d +0x100f:  call   0859cea2 <_ZN6CParty17send_party_ipinfoEv>  ; CParty::send_party_ipinfo()
081f18a2 +0x1014:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f18a7 +0x1019:  movl   $0x2,0x8(%esp)
081f18af +0x1021:  mov    -0x74(%ebp),%edx
081f18b2 +0x1024:  mov    %edx,0x4(%esp)
081f18b6 +0x1028:  mov    %eax,(%esp)
081f18b9 +0x102b:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
081f18be +0x1030:  mov    0xc(%ebp),%eax
081f18c1 +0x1033:  mov    %eax,(%esp)
081f18c4 +0x1036:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f18c9 +0x103b:  xor    $0x1,%eax
081f18cc +0x103e:  test   %al,%al
081f18ce +0x1040:  je     081f18e6 <+0x1058>
081f18d0 +0x1042:  mov    -0x7c(%ebp),%eax
081f18d3 +0x1045:  mov    %eax,(%esp)
081f18d6 +0x1048:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081f18db +0x104d:  test   %al,%al
081f18dd +0x104f:  je     081f18e6 <+0x1058>
081f18df +0x1051:  mov    $0x1,%eax
081f18e4 +0x1056:  jmp    081f18eb <+0x105d>
081f18e6 +0x1058:  mov    $0x0,%eax
081f18eb +0x105d:  test   %al,%al
081f18ed +0x105f:  je     081f1c92 <+0x1404>
081f18f3 +0x1065:  mov    -0x7c(%ebp),%eax
081f18f6 +0x1068:  mov    %eax,(%esp)
081f18f9 +0x106b:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081f18fe +0x1070:  movswl %ax,%esi
081f1901 +0x1073:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f1906 +0x1078:  mov    %esi,0x4(%esp)
081f190a +0x107c:  mov    %eax,(%esp)
081f190d +0x107f:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081f1912 +0x1084:  mov    %eax,-0x74(%ebp)
081f1915 +0x1087:  cmpl   $0x0,-0x74(%ebp)
081f1919 +0x108b:  jne    081f19c7 <+0x1139>
081f191f +0x1091:  lea    -0xb8(%ebp),%eax
081f1925 +0x1097:  mov    %eax,(%esp)
081f1928 +0x109a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f192d +0x109f:  movl   $0xb,0x8(%esp)
081f1935 +0x10a7:  movl   $0x1,0x4(%esp)
081f193d +0x10af:  lea    -0xb8(%ebp),%eax
081f1943 +0x10b5:  mov    %eax,(%esp)
081f1946 +0x10b8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f194b +0x10bd:  movl   $0x0,0x4(%esp)
081f1953 +0x10c5:  lea    -0xb8(%ebp),%eax
081f1959 +0x10cb:  mov    %eax,(%esp)
081f195c +0x10ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1961 +0x10d3:  movl   $0x4,0x4(%esp)
081f1969 +0x10db:  lea    -0xb8(%ebp),%eax
081f196f +0x10e1:  mov    %eax,(%esp)
081f1972 +0x10e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1977 +0x10e9:  movl   $0x0,0x4(%esp)
081f197f +0x10f1:  lea    -0xb8(%ebp),%eax
081f1985 +0x10f7:  mov    %eax,(%esp)
081f1988 +0x10fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f198d +0x10ff:  movl   $0x1,0x4(%esp)
081f1995 +0x1107:  lea    -0xb8(%ebp),%eax
081f199b +0x110d:  mov    %eax,(%esp)
081f199e +0x1110:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f19a3 +0x1115:  lea    -0xb8(%ebp),%eax
081f19a9 +0x111b:  mov    %eax,0x4(%esp)
081f19ad +0x111f:  mov    0xc(%ebp),%eax
081f19b0 +0x1122:  mov    %eax,(%esp)
081f19b3 +0x1125:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f19b8 +0x112a:  mov    $0x0,%ebx
081f19bd +0x112f:  mov    $0x0,%esi
081f19c2 +0x1134:  jmp    081f1cb4 <+0x1426>
081f19c7 +0x1139:  mov    -0x74(%ebp),%eax
081f19ca +0x113c:  mov    %eax,(%esp)
081f19cd +0x113f:  call   0859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>  ; CParty::CanDoPartyActionAssalutState()
081f19d2 +0x1144:  xor    $0x1,%eax
081f19d5 +0x1147:  test   %al,%al
081f19d7 +0x1149:  je     081f1a85 <+0x11f7>
081f19dd +0x114f:  lea    -0xb8(%ebp),%eax
081f19e3 +0x1155:  mov    %eax,(%esp)
081f19e6 +0x1158:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f19eb +0x115d:  movl   $0xb,0x8(%esp)
081f19f3 +0x1165:  movl   $0x1,0x4(%esp)
081f19fb +0x116d:  lea    -0xb8(%ebp),%eax
081f1a01 +0x1173:  mov    %eax,(%esp)
081f1a04 +0x1176:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1a09 +0x117b:  movl   $0x0,0x4(%esp)
081f1a11 +0x1183:  lea    -0xb8(%ebp),%eax
081f1a17 +0x1189:  mov    %eax,(%esp)
081f1a1a +0x118c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1a1f +0x1191:  movl   $0x13,0x4(%esp)
081f1a27 +0x1199:  lea    -0xb8(%ebp),%eax
081f1a2d +0x119f:  mov    %eax,(%esp)
081f1a30 +0x11a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1a35 +0x11a7:  movl   $0x0,0x4(%esp)
081f1a3d +0x11af:  lea    -0xb8(%ebp),%eax
081f1a43 +0x11b5:  mov    %eax,(%esp)
081f1a46 +0x11b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1a4b +0x11bd:  movl   $0x1,0x4(%esp)
081f1a53 +0x11c5:  lea    -0xb8(%ebp),%eax
081f1a59 +0x11cb:  mov    %eax,(%esp)
081f1a5c +0x11ce:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1a61 +0x11d3:  lea    -0xb8(%ebp),%eax
081f1a67 +0x11d9:  mov    %eax,0x4(%esp)
081f1a6b +0x11dd:  mov    0xc(%ebp),%eax
081f1a6e +0x11e0:  mov    %eax,(%esp)
081f1a71 +0x11e3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1a76 +0x11e8:  mov    $0x0,%ebx
081f1a7b +0x11ed:  mov    $0x0,%esi
081f1a80 +0x11f2:  jmp    081f1cb4 <+0x1426>
081f1a85 +0x11f7:  mov    0xc(%ebp),%eax
081f1a88 +0x11fa:  mov    %eax,0x4(%esp)
081f1a8c +0x11fe:  mov    -0x74(%ebp),%eax
081f1a8f +0x1201:  mov    %eax,(%esp)
081f1a92 +0x1204:  call   0859b2b6 <_ZN6CParty9join_userEP5CUser>  ; CParty::join_user(CUser*)
081f1a97 +0x1209:  mov    %eax,-0x5c(%ebp)
081f1a9a +0x120c:  cmpl   $0x0,-0x5c(%ebp)
081f1a9e +0x1210:  jg     081f1b89 <+0x12fb>
081f1aa4 +0x1216:  lea    -0xb8(%ebp),%eax
081f1aaa +0x121c:  mov    %eax,(%esp)
081f1aad +0x121f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f1ab2 +0x1224:  movl   $0xb,0x8(%esp)
081f1aba +0x122c:  movl   $0x1,0x4(%esp)
081f1ac2 +0x1234:  lea    -0xb8(%ebp),%eax
081f1ac8 +0x123a:  mov    %eax,(%esp)
081f1acb +0x123d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1ad0 +0x1242:  movl   $0x0,0x4(%esp)
081f1ad8 +0x124a:  lea    -0xb8(%ebp),%eax
081f1ade +0x1250:  mov    %eax,(%esp)
081f1ae1 +0x1253:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1ae6 +0x1258:  mov    -0x5c(%ebp),%eax
081f1ae9 +0x125b:  cmp    $0xfffffffe,%eax
081f1aec +0x125e:  je     081f1b0b <+0x127d>
081f1aee +0x1260:  cmp    $0xffffffff,%eax
081f1af1 +0x1263:  jne    081f1b23 <+0x1295>
081f1af3 +0x1265:  movl   $0x4,0x4(%esp)
081f1afb +0x126d:  lea    -0xb8(%ebp),%eax
081f1b01 +0x1273:  mov    %eax,(%esp)
081f1b04 +0x1276:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1b09 +0x127b:  jmp    081f1b39 <+0x12ab>
081f1b0b +0x127d:  movl   $0x13,0x4(%esp)
081f1b13 +0x1285:  lea    -0xb8(%ebp),%eax
081f1b19 +0x128b:  mov    %eax,(%esp)
081f1b1c +0x128e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1b21 +0x1293:  jmp    081f1b39 <+0x12ab>
081f1b23 +0x1295:  movl   $0x1,0x4(%esp)
081f1b2b +0x129d:  lea    -0xb8(%ebp),%eax
081f1b31 +0x12a3:  mov    %eax,(%esp)
081f1b34 +0x12a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1b39 +0x12ab:  movl   $0x0,0x4(%esp)
081f1b41 +0x12b3:  lea    -0xb8(%ebp),%eax
081f1b47 +0x12b9:  mov    %eax,(%esp)
081f1b4a +0x12bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1b4f +0x12c1:  movl   $0x1,0x4(%esp)
081f1b57 +0x12c9:  lea    -0xb8(%ebp),%eax
081f1b5d +0x12cf:  mov    %eax,(%esp)
081f1b60 +0x12d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1b65 +0x12d7:  lea    -0xb8(%ebp),%eax
081f1b6b +0x12dd:  mov    %eax,0x4(%esp)
081f1b6f +0x12e1:  mov    0xc(%ebp),%eax
081f1b72 +0x12e4:  mov    %eax,(%esp)
081f1b75 +0x12e7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1b7a +0x12ec:  mov    $0x0,%ebx
081f1b7f +0x12f1:  mov    $0x0,%esi
081f1b84 +0x12f6:  jmp    081f1cb4 <+0x1426>
081f1b89 +0x12fb:  movl   $0x0,0x8(%esp)
081f1b91 +0x1303:  movl   $0x0,0x4(%esp)
081f1b99 +0x130b:  mov    -0x74(%ebp),%eax
081f1b9c +0x130e:  mov    %eax,(%esp)
081f1b9f +0x1311:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
081f1ba4 +0x1316:  movl   $0x0,0x4(%esp)
081f1bac +0x131e:  mov    -0x74(%ebp),%eax
081f1baf +0x1321:  mov    %eax,(%esp)
081f1bb2 +0x1324:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
081f1bb7 +0x1329:  mov    -0x74(%ebp),%eax
081f1bba +0x132c:  mov    %eax,(%esp)
081f1bbd +0x132f:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
081f1bc2 +0x1334:  lea    -0xb8(%ebp),%eax
081f1bc8 +0x133a:  mov    %eax,(%esp)
081f1bcb +0x133d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f1bd0 +0x1342:  movl   $0x8,0x8(%esp)
081f1bd8 +0x134a:  movl   $0x0,0x4(%esp)
081f1be0 +0x1352:  lea    -0xb8(%ebp),%eax
081f1be6 +0x1358:  mov    %eax,(%esp)
081f1be9 +0x135b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1bee +0x1360:  mov    0xc(%ebp),%eax
081f1bf1 +0x1363:  mov    %eax,(%esp)
081f1bf4 +0x1366:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081f1bf9 +0x136b:  movzwl %ax,%eax
081f1bfc +0x136e:  mov    %eax,0x4(%esp)
081f1c00 +0x1372:  lea    -0xb8(%ebp),%eax
081f1c06 +0x1378:  mov    %eax,(%esp)
081f1c09 +0x137b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f1c0e +0x1380:  movl   $0x0,0x4(%esp)
081f1c16 +0x1388:  lea    -0xb8(%ebp),%eax
081f1c1c +0x138e:  mov    %eax,(%esp)
081f1c1f +0x1391:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1c24 +0x1396:  movzwl -0x93(%ebp),%eax
081f1c2b +0x139d:  movzwl %ax,%eax
081f1c2e +0x13a0:  mov    %eax,0x4(%esp)
081f1c32 +0x13a4:  lea    -0xb8(%ebp),%eax
081f1c38 +0x13aa:  mov    %eax,(%esp)
081f1c3b +0x13ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f1c40 +0x13b2:  movl   $0x1,0x4(%esp)
081f1c48 +0x13ba:  lea    -0xb8(%ebp),%eax
081f1c4e +0x13c0:  mov    %eax,(%esp)
081f1c51 +0x13c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1c56 +0x13c8:  lea    -0xb8(%ebp),%eax
081f1c5c +0x13ce:  mov    %eax,0x4(%esp)
081f1c60 +0x13d2:  mov    -0x7c(%ebp),%eax
081f1c63 +0x13d5:  mov    %eax,(%esp)
081f1c66 +0x13d8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1c6b +0x13dd:  mov    -0x74(%ebp),%eax
081f1c6e +0x13e0:  mov    %eax,(%esp)
081f1c71 +0x13e3:  call   0859cea2 <_ZN6CParty17send_party_ipinfoEv>  ; CParty::send_party_ipinfo()
081f1c76 +0x13e8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f1c7b +0x13ed:  movl   $0x2,0x8(%esp)
081f1c83 +0x13f5:  mov    -0x74(%ebp),%edx
081f1c86 +0x13f8:  mov    %edx,0x4(%esp)
081f1c8a +0x13fc:  mov    %eax,(%esp)
081f1c8d +0x13ff:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
081f1c92 +0x1404:  mov    $0x1,%esi
081f1c97 +0x1409:  jmp    081f1cb4 <+0x1426>
081f1c99 +0x140b:  mov    %edx,%ebx
081f1c9b +0x140d:  mov    %eax,%esi
081f1c9d +0x140f:  lea    -0xb8(%ebp),%eax
081f1ca3 +0x1415:  mov    %eax,(%esp)
081f1ca6 +0x1418:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f1cab +0x141d:  mov    %esi,%eax
081f1cad +0x141f:  mov    %ebx,%edx
081f1caf +0x1421:  jmp    081f2cd2 <+0x2444>
081f1cb4 +0x1426:  lea    -0xb8(%ebp),%eax
081f1cba +0x142c:  mov    %eax,(%esp)
081f1cbd +0x142f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f1cc2 +0x1434:  test   %esi,%esi
081f1cc4 +0x1436:  je     081f2cf0 <+0x2462>
081f1cca +0x143c:  jmp    081f2ccb <+0x243d>
081f1ccf +0x1441:  mov    0xc(%ebp),%eax
081f1cd2 +0x1444:  mov    %eax,(%esp)
081f1cd5 +0x1447:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081f1cda +0x144c:  test   %al,%al
081f1cdc +0x144e:  je     081f1ce8 <+0x145a>
081f1cde +0x1450:  mov    $0x0,%ebx
081f1ce3 +0x1455:  jmp    081f2cf0 <+0x2462>
081f1ce8 +0x145a:  movzwl -0x93(%ebp),%eax
081f1cef +0x1461:  movzwl %ax,%ebx
081f1cf2 +0x1464:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f1cf7 +0x1469:  mov    %ebx,0x4(%esp)
081f1cfb +0x146d:  mov    %eax,(%esp)
081f1cfe +0x1470:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081f1d03 +0x1475:  mov    %eax,-0x58(%ebp)
081f1d06 +0x1478:  movl   $0xffffffff,-0x54(%ebp)
081f1d0d +0x147f:  cmpl   $0x0,-0x58(%ebp)
081f1d11 +0x1483:  jne    081f1d1c <+0x148e>
081f1d13 +0x1485:  movl   $0x3,-0x54(%ebp)
081f1d1a +0x148c:  jmp    081f1d5c <+0x14ce>
081f1d1c +0x148e:  mov    -0x58(%ebp),%eax
081f1d1f +0x1491:  mov    %eax,(%esp)
081f1d22 +0x1494:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081f1d27 +0x1499:  test   %al,%al
081f1d29 +0x149b:  je     081f1d34 <+0x14a6>
081f1d2b +0x149d:  movl   $0x12,-0x54(%ebp)
081f1d32 +0x14a4:  jmp    081f1d5c <+0x14ce>
081f1d34 +0x14a6:  mov    0xc(%ebp),%eax
081f1d37 +0x14a9:  mov    %eax,(%esp)
081f1d3a +0x14ac:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f1d3f +0x14b1:  mov    %eax,%ebx
081f1d41 +0x14b3:  mov    -0x58(%ebp),%eax
081f1d44 +0x14b6:  mov    %eax,(%esp)
081f1d47 +0x14b9:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f1d4c +0x14be:  cmp    %eax,%ebx
081f1d4e +0x14c0:  setne  %al
081f1d51 +0x14c3:  test   %al,%al
081f1d53 +0x14c5:  je     081f1d5c <+0x14ce>
081f1d55 +0x14c7:  movl   $0x13,-0x54(%ebp)
081f1d5c +0x14ce:  cmpl   $0xffffffff,-0x54(%ebp)
081f1d60 +0x14d2:  je     081f1dfd <+0x156f>
081f1d66 +0x14d8:  movl   $0xb,0x8(%esp)
081f1d6e +0x14e0:  movl   $0x1,0x4(%esp)
081f1d76 +0x14e8:  lea    -0xac(%ebp),%eax
081f1d7c +0x14ee:  mov    %eax,(%esp)
081f1d7f +0x14f1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1d84 +0x14f6:  movl   $0x0,0x4(%esp)
081f1d8c +0x14fe:  lea    -0xac(%ebp),%eax
081f1d92 +0x1504:  mov    %eax,(%esp)
081f1d95 +0x1507:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1d9a +0x150c:  mov    -0x54(%ebp),%eax
081f1d9d +0x150f:  movsbl %al,%eax
081f1da0 +0x1512:  mov    %eax,0x4(%esp)
081f1da4 +0x1516:  lea    -0xac(%ebp),%eax
081f1daa +0x151c:  mov    %eax,(%esp)
081f1dad +0x151f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1db2 +0x1524:  movl   $0x1,0x4(%esp)
081f1dba +0x152c:  lea    -0xac(%ebp),%eax
081f1dc0 +0x1532:  mov    %eax,(%esp)
081f1dc3 +0x1535:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1dc8 +0x153a:  movl   $0x1,0x4(%esp)
081f1dd0 +0x1542:  lea    -0xac(%ebp),%eax
081f1dd6 +0x1548:  mov    %eax,(%esp)
081f1dd9 +0x154b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1dde +0x1550:  lea    -0xac(%ebp),%eax
081f1de4 +0x1556:  mov    %eax,0x4(%esp)
081f1de8 +0x155a:  mov    0xc(%ebp),%eax
081f1deb +0x155d:  mov    %eax,(%esp)
081f1dee +0x1560:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1df3 +0x1565:  mov    $0x0,%ebx
081f1df8 +0x156a:  jmp    081f2cf0 <+0x2462>
081f1dfd +0x156f:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081f1e02 +0x1574:  movl   $0x0,0x10(%esp)
081f1e0a +0x157c:  mov    -0x58(%ebp),%edx
081f1e0d +0x157f:  mov    %edx,0xc(%esp)
081f1e11 +0x1583:  mov    0xc(%ebp),%edx
081f1e14 +0x1586:  mov    %edx,0x8(%esp)
081f1e18 +0x158a:  movl   $0x0,0x4(%esp)
081f1e20 +0x1592:  mov    %eax,(%esp)
081f1e23 +0x1595:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081f1e28 +0x159a:  mov    %eax,-0x50(%ebp)
081f1e2b +0x159d:  cmpl   $0x0,-0x50(%ebp)
081f1e2f +0x15a1:  jle    081f1ecc <+0x163e>
081f1e35 +0x15a7:  movl   $0xb,0x8(%esp)
081f1e3d +0x15af:  movl   $0x1,0x4(%esp)
081f1e45 +0x15b7:  lea    -0xac(%ebp),%eax
081f1e4b +0x15bd:  mov    %eax,(%esp)
081f1e4e +0x15c0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1e53 +0x15c5:  movl   $0x0,0x4(%esp)
081f1e5b +0x15cd:  lea    -0xac(%ebp),%eax
081f1e61 +0x15d3:  mov    %eax,(%esp)
081f1e64 +0x15d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1e69 +0x15db:  mov    -0x50(%ebp),%eax
081f1e6c +0x15de:  movsbl %al,%eax
081f1e6f +0x15e1:  mov    %eax,0x4(%esp)
081f1e73 +0x15e5:  lea    -0xac(%ebp),%eax
081f1e79 +0x15eb:  mov    %eax,(%esp)
081f1e7c +0x15ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1e81 +0x15f3:  movl   $0x1,0x4(%esp)
081f1e89 +0x15fb:  lea    -0xac(%ebp),%eax
081f1e8f +0x1601:  mov    %eax,(%esp)
081f1e92 +0x1604:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1e97 +0x1609:  movl   $0x1,0x4(%esp)
081f1e9f +0x1611:  lea    -0xac(%ebp),%eax
081f1ea5 +0x1617:  mov    %eax,(%esp)
081f1ea8 +0x161a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1ead +0x161f:  lea    -0xac(%ebp),%eax
081f1eb3 +0x1625:  mov    %eax,0x4(%esp)
081f1eb7 +0x1629:  mov    0xc(%ebp),%eax
081f1eba +0x162c:  mov    %eax,(%esp)
081f1ebd +0x162f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1ec2 +0x1634:  mov    $0x0,%ebx
081f1ec7 +0x1639:  jmp    081f2cf0 <+0x2462>
081f1ecc +0x163e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f1ed1 +0x1643:  mov    %eax,(%esp)
081f1ed4 +0x1646:  call   08294d3c <_ZN12CGameManager13GetTradeSpaceEv>  ; CGameManager::GetTradeSpace()
081f1ed9 +0x164b:  mov    %eax,-0x4c(%ebp)
081f1edc +0x164e:  cmpl   $0x0,-0x4c(%ebp)
081f1ee0 +0x1652:  jne    081f1f7b <+0x16ed>
081f1ee6 +0x1658:  movl   $0xb,0x8(%esp)
081f1eee +0x1660:  movl   $0x1,0x4(%esp)
081f1ef6 +0x1668:  lea    -0xac(%ebp),%eax
081f1efc +0x166e:  mov    %eax,(%esp)
081f1eff +0x1671:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1f04 +0x1676:  movl   $0x0,0x4(%esp)
081f1f0c +0x167e:  lea    -0xac(%ebp),%eax
081f1f12 +0x1684:  mov    %eax,(%esp)
081f1f15 +0x1687:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1f1a +0x168c:  movl   $0x1,0x4(%esp)
081f1f22 +0x1694:  lea    -0xac(%ebp),%eax
081f1f28 +0x169a:  mov    %eax,(%esp)
081f1f2b +0x169d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1f30 +0x16a2:  movl   $0x1,0x4(%esp)
081f1f38 +0x16aa:  lea    -0xac(%ebp),%eax
081f1f3e +0x16b0:  mov    %eax,(%esp)
081f1f41 +0x16b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1f46 +0x16b8:  movl   $0x1,0x4(%esp)
081f1f4e +0x16c0:  lea    -0xac(%ebp),%eax
081f1f54 +0x16c6:  mov    %eax,(%esp)
081f1f57 +0x16c9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f1f5c +0x16ce:  lea    -0xac(%ebp),%eax
081f1f62 +0x16d4:  mov    %eax,0x4(%esp)
081f1f66 +0x16d8:  mov    0xc(%ebp),%eax
081f1f69 +0x16db:  mov    %eax,(%esp)
081f1f6c +0x16de:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f1f71 +0x16e3:  mov    $0x0,%ebx
081f1f76 +0x16e8:  jmp    081f2cf0 <+0x2462>
081f1f7b +0x16ed:  mov    0xc(%ebp),%eax
081f1f7e +0x16f0:  mov    %eax,0x8(%esp)
081f1f82 +0x16f4:  mov    -0x58(%ebp),%eax
081f1f85 +0x16f7:  mov    %eax,0x4(%esp)
081f1f89 +0x16fb:  mov    -0x4c(%ebp),%eax
081f1f8c +0x16fe:  mov    %eax,(%esp)
081f1f8f +0x1701:  call   085295f0 <_ZN11CTradeSpace11set_tradersEP5CUserS1_>  ; CTradeSpace::set_traders(CUser*, CUser*)
081f1f94 +0x1706:  movl   $0x8,0x8(%esp)
081f1f9c +0x170e:  movl   $0x0,0x4(%esp)
081f1fa4 +0x1716:  lea    -0xac(%ebp),%eax
081f1faa +0x171c:  mov    %eax,(%esp)
081f1fad +0x171f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f1fb2 +0x1724:  mov    0xc(%ebp),%eax
081f1fb5 +0x1727:  mov    %eax,(%esp)
081f1fb8 +0x172a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081f1fbd +0x172f:  movzwl %ax,%eax
081f1fc0 +0x1732:  mov    %eax,0x4(%esp)
081f1fc4 +0x1736:  lea    -0xac(%ebp),%eax
081f1fca +0x173c:  mov    %eax,(%esp)
081f1fcd +0x173f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f1fd2 +0x1744:  movl   $0x1,0x4(%esp)
081f1fda +0x174c:  lea    -0xac(%ebp),%eax
081f1fe0 +0x1752:  mov    %eax,(%esp)
081f1fe3 +0x1755:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f1fe8 +0x175a:  mov    -0x90(%ebp),%eax
081f1fee +0x1760:  mov    %eax,0x4(%esp)
081f1ff2 +0x1764:  lea    -0xac(%ebp),%eax
081f1ff8 +0x176a:  mov    %eax,(%esp)
081f1ffb +0x176d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f2000 +0x1772:  mov    0xc(%ebp),%eax
081f2003 +0x1775:  mov    %eax,(%esp)
081f2006 +0x1778:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
081f200b +0x177d:  movzbl %al,%eax
081f200e +0x1780:  mov    %eax,0x4(%esp)
081f2012 +0x1784:  lea    -0xac(%ebp),%eax
081f2018 +0x178a:  mov    %eax,(%esp)
081f201b +0x178d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2020 +0x1792:  mov    0xc(%ebp),%eax
081f2023 +0x1795:  mov    %eax,(%esp)
081f2026 +0x1798:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
081f202b +0x179d:  mov    %eax,0x4(%esp)
081f202f +0x17a1:  lea    -0xac(%ebp),%eax
081f2035 +0x17a7:  mov    %eax,(%esp)
081f2038 +0x17aa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f203d +0x17af:  movl   $0x1,0x4(%esp)
081f2045 +0x17b7:  lea    -0xac(%ebp),%eax
081f204b +0x17bd:  mov    %eax,(%esp)
081f204e +0x17c0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f2053 +0x17c5:  lea    -0xac(%ebp),%eax
081f2059 +0x17cb:  mov    %eax,0x4(%esp)
081f205d +0x17cf:  mov    -0x58(%ebp),%eax
081f2060 +0x17d2:  mov    %eax,(%esp)
081f2063 +0x17d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f2068 +0x17da:  lea    -0xac(%ebp),%eax
081f206e +0x17e0:  mov    %eax,(%esp)
081f2071 +0x17e3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081f2076 +0x17e8:  movl   $0xb,0x8(%esp)
081f207e +0x17f0:  movl   $0x1,0x4(%esp)
081f2086 +0x17f8:  lea    -0xac(%ebp),%eax
081f208c +0x17fe:  mov    %eax,(%esp)
081f208f +0x1801:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f2094 +0x1806:  movl   $0x1,0x4(%esp)
081f209c +0x180e:  lea    -0xac(%ebp),%eax
081f20a2 +0x1814:  mov    %eax,(%esp)
081f20a5 +0x1817:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f20aa +0x181c:  movzwl -0x93(%ebp),%eax
081f20b1 +0x1823:  movzwl %ax,%eax
081f20b4 +0x1826:  mov    %eax,0x4(%esp)
081f20b8 +0x182a:  lea    -0xac(%ebp),%eax
081f20be +0x1830:  mov    %eax,(%esp)
081f20c1 +0x1833:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081f20c6 +0x1838:  movl   $0x1,0x4(%esp)
081f20ce +0x1840:  lea    -0xac(%ebp),%eax
081f20d4 +0x1846:  mov    %eax,(%esp)
081f20d7 +0x1849:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f20dc +0x184e:  mov    -0x58(%ebp),%eax
081f20df +0x1851:  mov    %eax,(%esp)
081f20e2 +0x1854:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
081f20e7 +0x1859:  movzbl %al,%eax
081f20ea +0x185c:  mov    %eax,0x4(%esp)
081f20ee +0x1860:  lea    -0xac(%ebp),%eax
081f20f4 +0x1866:  mov    %eax,(%esp)
081f20f7 +0x1869:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f20fc +0x186e:  movl   $0x1,0x4(%esp)
081f2104 +0x1876:  lea    -0xac(%ebp),%eax
081f210a +0x187c:  mov    %eax,(%esp)
081f210d +0x187f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f2112 +0x1884:  lea    -0xac(%ebp),%eax
081f2118 +0x188a:  mov    %eax,0x4(%esp)
081f211c +0x188e:  mov    0xc(%ebp),%eax
081f211f +0x1891:  mov    %eax,(%esp)
081f2122 +0x1894:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f2127 +0x1899:  jmp    081f2ccb <+0x243d>
081f212c +0x189e:  movzwl -0x93(%ebp),%eax
081f2133 +0x18a5:  movzwl %ax,%ebx
081f2136 +0x18a8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f213b +0x18ad:  mov    %ebx,0x4(%esp)
081f213f +0x18b1:  mov    %eax,(%esp)
081f2142 +0x18b4:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081f2147 +0x18b9:  mov    %eax,-0x48(%ebp)
081f214a +0x18bc:  cmpl   $0x0,-0x48(%ebp)
081f214e +0x18c0:  jne    081f21e9 <+0x195b>
081f2154 +0x18c6:  movl   $0xb,0x8(%esp)
081f215c +0x18ce:  movl   $0x1,0x4(%esp)
081f2164 +0x18d6:  lea    -0xac(%ebp),%eax
081f216a +0x18dc:  mov    %eax,(%esp)
081f216d +0x18df:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f2172 +0x18e4:  movl   $0x0,0x4(%esp)
081f217a +0x18ec:  lea    -0xac(%ebp),%eax
081f2180 +0x18f2:  mov    %eax,(%esp)
081f2183 +0x18f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2188 +0x18fa:  movl   $0x3,0x4(%esp)
081f2190 +0x1902:  lea    -0xac(%ebp),%eax
081f2196 +0x1908:  mov    %eax,(%esp)
081f2199 +0x190b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f219e +0x1910:  movl   $0x2,0x4(%esp)
081f21a6 +0x1918:  lea    -0xac(%ebp),%eax
081f21ac +0x191e:  mov    %eax,(%esp)
081f21af +0x1921:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f21b4 +0x1926:  movl   $0x1,0x4(%esp)
081f21bc +0x192e:  lea    -0xac(%ebp),%eax
081f21c2 +0x1934:  mov    %eax,(%esp)
081f21c5 +0x1937:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f21ca +0x193c:  lea    -0xac(%ebp),%eax
081f21d0 +0x1942:  mov    %eax,0x4(%esp)
081f21d4 +0x1946:  mov    0xc(%ebp),%eax
081f21d7 +0x1949:  mov    %eax,(%esp)
081f21da +0x194c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f21df +0x1951:  mov    $0x0,%ebx
081f21e4 +0x1956:  jmp    081f2cf0 <+0x2462>
081f21e9 +0x195b:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081f21ee +0x1960:  movl   $0x0,0x10(%esp)
081f21f6 +0x1968:  mov    -0x48(%ebp),%edx
081f21f9 +0x196b:  mov    %edx,0xc(%esp)
081f21fd +0x196f:  mov    0xc(%ebp),%edx
081f2200 +0x1972:  mov    %edx,0x8(%esp)
081f2204 +0x1976:  movl   $0x0,0x4(%esp)
081f220c +0x197e:  mov    %eax,(%esp)
081f220f +0x1981:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081f2214 +0x1986:  mov    %eax,-0x44(%ebp)
081f2217 +0x1989:  cmpl   $0x0,-0x44(%ebp)
081f221b +0x198d:  jle    081f22b8 <+0x1a2a>
081f2221 +0x1993:  movl   $0xb,0x8(%esp)
081f2229 +0x199b:  movl   $0x1,0x4(%esp)
081f2231 +0x19a3:  lea    -0xac(%ebp),%eax
081f2237 +0x19a9:  mov    %eax,(%esp)
081f223a +0x19ac:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f223f +0x19b1:  movl   $0x0,0x4(%esp)
081f2247 +0x19b9:  lea    -0xac(%ebp),%eax
081f224d +0x19bf:  mov    %eax,(%esp)
081f2250 +0x19c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2255 +0x19c7:  mov    -0x44(%ebp),%eax
081f2258 +0x19ca:  movsbl %al,%eax
081f225b +0x19cd:  mov    %eax,0x4(%esp)
081f225f +0x19d1:  lea    -0xac(%ebp),%eax
081f2265 +0x19d7:  mov    %eax,(%esp)
081f2268 +0x19da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f226d +0x19df:  movl   $0x2,0x4(%esp)
081f2275 +0x19e7:  lea    -0xac(%ebp),%eax
081f227b +0x19ed:  mov    %eax,(%esp)
081f227e +0x19f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2283 +0x19f5:  movl   $0x1,0x4(%esp)
081f228b +0x19fd:  lea    -0xac(%ebp),%eax
081f2291 +0x1a03:  mov    %eax,(%esp)
081f2294 +0x1a06:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f2299 +0x1a0b:  lea    -0xac(%ebp),%eax
081f229f +0x1a11:  mov    %eax,0x4(%esp)
081f22a3 +0x1a15:  mov    0xc(%ebp),%eax
081f22a6 +0x1a18:  mov    %eax,(%esp)
081f22a9 +0x1a1b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f22ae +0x1a20:  mov    $0x0,%ebx
081f22b3 +0x1a25:  jmp    081f2cf0 <+0x2462>
081f22b8 +0x1a2a:  mov    -0x48(%ebp),%eax
081f22bb +0x1a2d:  mov    %eax,(%esp)
081f22be +0x1a30:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
081f22c3 +0x1a35:  movswl %ax,%ebx
081f22c6 +0x1a38:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f22cb +0x1a3d:  movl   $0x0,0xc(%esp)
081f22d3 +0x1a45:  mov    0xc(%ebp),%edx
081f22d6 +0x1a48:  mov    %edx,0x8(%esp)
081f22da +0x1a4c:  mov    %ebx,0x4(%esp)
081f22de +0x1a50:  mov    %eax,(%esp)
081f22e1 +0x1a53:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
081f22e6 +0x1a58:  mov    %eax,-0x40(%ebp)
081f22e9 +0x1a5b:  cmpl   $0x0,-0x40(%ebp)
081f22ed +0x1a5f:  jne    081f2388 <+0x1afa>
081f22f3 +0x1a65:  movl   $0xb,0x8(%esp)
081f22fb +0x1a6d:  movl   $0x1,0x4(%esp)
081f2303 +0x1a75:  lea    -0xac(%ebp),%eax
081f2309 +0x1a7b:  mov    %eax,(%esp)
081f230c +0x1a7e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f2311 +0x1a83:  movl   $0x0,0x4(%esp)
081f2319 +0x1a8b:  lea    -0xac(%ebp),%eax
081f231f +0x1a91:  mov    %eax,(%esp)
081f2322 +0x1a94:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2327 +0x1a99:  movl   $0x13,0x4(%esp)
081f232f +0x1aa1:  lea    -0xac(%ebp),%eax
081f2335 +0x1aa7:  mov    %eax,(%esp)
081f2338 +0x1aaa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f233d +0x1aaf:  movl   $0x2,0x4(%esp)
081f2345 +0x1ab7:  lea    -0xac(%ebp),%eax
081f234b +0x1abd:  mov    %eax,(%esp)
081f234e +0x1ac0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2353 +0x1ac5:  movl   $0x1,0x4(%esp)
081f235b +0x1acd:  lea    -0xac(%ebp),%eax
081f2361 +0x1ad3:  mov    %eax,(%esp)
081f2364 +0x1ad6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f2369 +0x1adb:  lea    -0xac(%ebp),%eax
081f236f +0x1ae1:  mov    %eax,0x4(%esp)
081f2373 +0x1ae5:  mov    0xc(%ebp),%eax
081f2376 +0x1ae8:  mov    %eax,(%esp)
081f2379 +0x1aeb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f237e +0x1af0:  mov    $0x0,%ebx
081f2383 +0x1af5:  jmp    081f2cf0 <+0x2462>
081f2388 +0x1afa:  movl   $0x0,-0xbc(%ebp)
081f2392 +0x1b04:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f2397 +0x1b09:  mov    %eax,(%esp)
081f239a +0x1b0c:  call   082343c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a72
081f239f +0x1b11:  movzbl %al,%eax
081f23a2 +0x1b14:  mov    %eax,0xc(%esp)
081f23a6 +0x1b18:  lea    -0xbc(%ebp),%eax
081f23ac +0x1b1e:  mov    %eax,0x8(%esp)
081f23b0 +0x1b22:  mov    0xc(%ebp),%eax
081f23b3 +0x1b25:  mov    %eax,0x4(%esp)
081f23b7 +0x1b29:  mov    -0x40(%ebp),%eax
081f23ba +0x1b2c:  mov    %eax,(%esp)
081f23bd +0x1b2f:  call   085d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>  ; PvP_Room::join_room(CUser*, int&, bool)
081f23c2 +0x1b34:  mov    %eax,-0x3c(%ebp)
081f23c5 +0x1b37:  mov    -0x40(%ebp),%eax
081f23c8 +0x1b3a:  mov    %eax,(%esp)
081f23cb +0x1b3d:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
081f23d0 +0x1b42:  mov    %eax,-0xcc(%ebp)
081f23d6 +0x1b48:  mov    -0x40(%ebp),%eax
081f23d9 +0x1b4b:  mov    %eax,(%esp)
081f23dc +0x1b4e:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
081f23e1 +0x1b53:  mov    %eax,%edi
081f23e3 +0x1b55:  mov    0xc(%ebp),%eax
081f23e6 +0x1b58:  mov    %eax,(%esp)
081f23e9 +0x1b5b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081f23ee +0x1b60:  mov    %eax,%esi
081f23f0 +0x1b62:  mov    0xc(%ebp),%eax
081f23f3 +0x1b65:  mov    %eax,(%esp)
081f23f6 +0x1b68:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
081f23fb +0x1b6d:  mov    %eax,%ebx
081f23fd +0x1b6f:  movl   $0x0,0x10(%esp)
081f2405 +0x1b77:  movl   $0x0,0xc(%esp)
081f240d +0x1b7f:  movl   $0x7a82,0x8(%esp)
081f2415 +0x1b87:  movl   $&_ZZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f241d +0x1b8f:  lea    -0x8c(%ebp),%eax
081f2423 +0x1b95:  mov    %eax,(%esp)
081f2426 +0x1b98:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
081f242b +0x1b9d:  movl   $0xb,0x1c(%esp)
081f2433 +0x1ba5:  mov    -0x3c(%ebp),%eax
081f2436 +0x1ba8:  mov    %eax,0x18(%esp)
081f243a +0x1bac:  mov    -0xcc(%ebp),%eax
081f2440 +0x1bb2:  mov    %eax,0x14(%esp)
081f2444 +0x1bb6:  mov    %edi,0x10(%esp)
081f2448 +0x1bba:  mov    %esi,0xc(%esp)
081f244c +0x1bbe:  mov    %ebx,0x8(%esp)
081f2450 +0x1bc2:  movl   $"pvp@log %s,%s,room(%d),%d,%d,%d",0x4(%esp)
081f2458 +0x1bca:  lea    -0x8c(%ebp),%eax
081f245e +0x1bd0:  mov    %eax,(%esp)
081f2461 +0x1bd3:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
081f2466 +0x1bd8:  cmpl   $0x0,-0x3c(%ebp)
081f246a +0x1bdc:  jle    081f2504 <+0x1c76>
081f2470 +0x1be2:  movl   $0xb,0x8(%esp)
081f2478 +0x1bea:  movl   $0x1,0x4(%esp)
081f2480 +0x1bf2:  lea    -0xac(%ebp),%eax
081f2486 +0x1bf8:  mov    %eax,(%esp)
081f2489 +0x1bfb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f248e +0x1c00:  movl   $0x0,0x4(%esp)
081f2496 +0x1c08:  lea    -0xac(%ebp),%eax
081f249c +0x1c0e:  mov    %eax,(%esp)
081f249f +0x1c11:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f24a4 +0x1c16:  mov    -0x3c(%ebp),%eax
081f24a7 +0x1c19:  mov    %eax,0x4(%esp)
081f24ab +0x1c1d:  lea    -0xac(%ebp),%eax
081f24b1 +0x1c23:  mov    %eax,(%esp)
081f24b4 +0x1c26:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f24b9 +0x1c2b:  movl   $0x2,0x4(%esp)
081f24c1 +0x1c33:  lea    -0xac(%ebp),%eax
081f24c7 +0x1c39:  mov    %eax,(%esp)
081f24ca +0x1c3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f24cf +0x1c41:  movl   $0x1,0x4(%esp)
081f24d7 +0x1c49:  lea    -0xac(%ebp),%eax
081f24dd +0x1c4f:  mov    %eax,(%esp)
081f24e0 +0x1c52:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f24e5 +0x1c57:  lea    -0xac(%ebp),%eax
081f24eb +0x1c5d:  mov    %eax,0x4(%esp)
081f24ef +0x1c61:  mov    0xc(%ebp),%eax
081f24f2 +0x1c64:  mov    %eax,(%esp)
081f24f5 +0x1c67:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f24fa +0x1c6c:  mov    $0x0,%ebx
081f24ff +0x1c71:  jmp    081f2cf0 <+0x2462>
081f2504 +0x1c76:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f2509 +0x1c7b:  movl   $0x0,0x8(%esp)
081f2511 +0x1c83:  mov    0xc(%ebp),%edx
081f2514 +0x1c86:  mov    %edx,0x4(%esp)
081f2518 +0x1c8a:  mov    %eax,(%esp)
081f251b +0x1c8d:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
081f2520 +0x1c92:  mov    -0xbc(%ebp),%edx
081f2526 +0x1c98:  lea    -0xac(%ebp),%eax
081f252c +0x1c9e:  mov    %edx,0x8(%esp)
081f2530 +0x1ca2:  mov    %eax,0x4(%esp)
081f2534 +0x1ca6:  mov    -0x40(%ebp),%eax
081f2537 +0x1ca9:  mov    %eax,(%esp)
081f253a +0x1cac:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
081f253f +0x1cb1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f2544 +0x1cb6:  lea    -0xac(%ebp),%edx
081f254a +0x1cbc:  mov    %edx,0x4(%esp)
081f254e +0x1cc0:  mov    %eax,(%esp)
081f2551 +0x1cc3:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081f2556 +0x1cc8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f255b +0x1ccd:  mov    0xc(%ebp),%edx
081f255e +0x1cd0:  mov    %edx,0x4(%esp)
081f2562 +0x1cd4:  mov    %eax,(%esp)
081f2565 +0x1cd7:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
081f256a +0x1cdc:  jmp    081f2ccb <+0x243d>
081f256f +0x1ce1:  movzwl -0x93(%ebp),%eax
081f2576 +0x1ce8:  movzwl %ax,%ebx
081f2579 +0x1ceb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f257e +0x1cf0:  mov    %ebx,0x4(%esp)
081f2582 +0x1cf4:  mov    %eax,(%esp)
081f2585 +0x1cf7:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081f258a +0x1cfc:  mov    %eax,-0x38(%ebp)
081f258d +0x1cff:  cmpl   $0x0,-0x38(%ebp)
081f2591 +0x1d03:  jne    081f262c <+0x1d9e>
081f2597 +0x1d09:  movl   $0xb,0x8(%esp)
081f259f +0x1d11:  movl   $0x1,0x4(%esp)
081f25a7 +0x1d19:  lea    -0xac(%ebp),%eax
081f25ad +0x1d1f:  mov    %eax,(%esp)
081f25b0 +0x1d22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f25b5 +0x1d27:  movl   $0x0,0x4(%esp)
081f25bd +0x1d2f:  lea    -0xac(%ebp),%eax
081f25c3 +0x1d35:  mov    %eax,(%esp)
081f25c6 +0x1d38:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f25cb +0x1d3d:  movl   $0x3,0x4(%esp)
081f25d3 +0x1d45:  lea    -0xac(%ebp),%eax
081f25d9 +0x1d4b:  mov    %eax,(%esp)
081f25dc +0x1d4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f25e1 +0x1d53:  movl   $0x3,0x4(%esp)
081f25e9 +0x1d5b:  lea    -0xac(%ebp),%eax
081f25ef +0x1d61:  mov    %eax,(%esp)
081f25f2 +0x1d64:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f25f7 +0x1d69:  movl   $0x1,0x4(%esp)
081f25ff +0x1d71:  lea    -0xac(%ebp),%eax
081f2605 +0x1d77:  mov    %eax,(%esp)
081f2608 +0x1d7a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f260d +0x1d7f:  lea    -0xac(%ebp),%eax
081f2613 +0x1d85:  mov    %eax,0x4(%esp)
081f2617 +0x1d89:  mov    0xc(%ebp),%eax
081f261a +0x1d8c:  mov    %eax,(%esp)
081f261d +0x1d8f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f2622 +0x1d94:  mov    $0x0,%ebx
081f2627 +0x1d99:  jmp    081f2cf0 <+0x2462>
081f262c +0x1d9e:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081f2631 +0x1da3:  movl   $0x0,0x10(%esp)
081f2639 +0x1dab:  mov    -0x38(%ebp),%edx
081f263c +0x1dae:  mov    %edx,0xc(%esp)
081f2640 +0x1db2:  mov    0xc(%ebp),%edx
081f2643 +0x1db5:  mov    %edx,0x8(%esp)
081f2647 +0x1db9:  movl   $0x0,0x4(%esp)
081f264f +0x1dc1:  mov    %eax,(%esp)
081f2652 +0x1dc4:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081f2657 +0x1dc9:  mov    %eax,-0x34(%ebp)
081f265a +0x1dcc:  cmpl   $0x0,-0x34(%ebp)
081f265e +0x1dd0:  jle    081f26fb <+0x1e6d>
081f2664 +0x1dd6:  movl   $0xb,0x8(%esp)
081f266c +0x1dde:  movl   $0x1,0x4(%esp)
081f2674 +0x1de6:  lea    -0xac(%ebp),%eax
081f267a +0x1dec:  mov    %eax,(%esp)
081f267d +0x1def:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f2682 +0x1df4:  movl   $0x0,0x4(%esp)
081f268a +0x1dfc:  lea    -0xac(%ebp),%eax
081f2690 +0x1e02:  mov    %eax,(%esp)
081f2693 +0x1e05:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2698 +0x1e0a:  mov    -0x34(%ebp),%eax
081f269b +0x1e0d:  movsbl %al,%eax
081f269e +0x1e10:  mov    %eax,0x4(%esp)
081f26a2 +0x1e14:  lea    -0xac(%ebp),%eax
081f26a8 +0x1e1a:  mov    %eax,(%esp)
081f26ab +0x1e1d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f26b0 +0x1e22:  movl   $0x3,0x4(%esp)
081f26b8 +0x1e2a:  lea    -0xac(%ebp),%eax
081f26be +0x1e30:  mov    %eax,(%esp)
081f26c1 +0x1e33:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f26c6 +0x1e38:  movl   $0x1,0x4(%esp)
081f26ce +0x1e40:  lea    -0xac(%ebp),%eax
081f26d4 +0x1e46:  mov    %eax,(%esp)
081f26d7 +0x1e49:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f26dc +0x1e4e:  lea    -0xac(%ebp),%eax
081f26e2 +0x1e54:  mov    %eax,0x4(%esp)
081f26e6 +0x1e58:  mov    0xc(%ebp),%eax
081f26e9 +0x1e5b:  mov    %eax,(%esp)
081f26ec +0x1e5e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f26f1 +0x1e63:  mov    $0x0,%ebx
081f26f6 +0x1e68:  jmp    081f2cf0 <+0x2462>
081f26fb +0x1e6d:  mov    -0x38(%ebp),%eax
081f26fe +0x1e70:  mov    %eax,(%esp)
081f2701 +0x1e73:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
081f2706 +0x1e78:  movswl %ax,%ebx
081f2709 +0x1e7b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f270e +0x1e80:  mov    %ebx,0x4(%esp)
081f2712 +0x1e84:  mov    %eax,(%esp)
081f2715 +0x1e87:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
081f271a +0x1e8c:  mov    %eax,-0x30(%ebp)
081f271d +0x1e8f:  cmpl   $0x0,-0x30(%ebp)
081f2721 +0x1e93:  jne    081f27bc <+0x1f2e>
081f2727 +0x1e99:  movl   $0xb,0x8(%esp)
081f272f +0x1ea1:  movl   $0x1,0x4(%esp)
081f2737 +0x1ea9:  lea    -0xac(%ebp),%eax
081f273d +0x1eaf:  mov    %eax,(%esp)
081f2740 +0x1eb2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f2745 +0x1eb7:  movl   $0x0,0x4(%esp)
081f274d +0x1ebf:  lea    -0xac(%ebp),%eax
081f2753 +0x1ec5:  mov    %eax,(%esp)
081f2756 +0x1ec8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f275b +0x1ecd:  movl   $0x13,0x4(%esp)
081f2763 +0x1ed5:  lea    -0xac(%ebp),%eax
081f2769 +0x1edb:  mov    %eax,(%esp)
081f276c +0x1ede:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2771 +0x1ee3:  movl   $0x3,0x4(%esp)
081f2779 +0x1eeb:  lea    -0xac(%ebp),%eax
081f277f +0x1ef1:  mov    %eax,(%esp)
081f2782 +0x1ef4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2787 +0x1ef9:  movl   $0x1,0x4(%esp)
081f278f +0x1f01:  lea    -0xac(%ebp),%eax
081f2795 +0x1f07:  mov    %eax,(%esp)
081f2798 +0x1f0a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f279d +0x1f0f:  lea    -0xac(%ebp),%eax
081f27a3 +0x1f15:  mov    %eax,0x4(%esp)
081f27a7 +0x1f19:  mov    0xc(%ebp),%eax
081f27aa +0x1f1c:  mov    %eax,(%esp)
081f27ad +0x1f1f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f27b2 +0x1f24:  mov    $0x0,%ebx
081f27b7 +0x1f29:  jmp    081f2cf0 <+0x2462>
081f27bc +0x1f2e:  movl   $0x0,-0xc0(%ebp)
081f27c6 +0x1f38:  mov    0xc(%ebp),%eax
081f27c9 +0x1f3b:  mov    %eax,0x4(%esp)
081f27cd +0x1f3f:  mov    -0x30(%ebp),%eax
081f27d0 +0x1f42:  mov    %eax,(%esp)
081f27d3 +0x1f45:  call   086bacae <_ZN7WarRoom10IsJoinableEP5CUser>  ; WarRoom::IsJoinable(CUser*)
081f27d8 +0x1f4a:  mov    %eax,-0x2c(%ebp)
081f27db +0x1f4d:  cmpl   $0x0,-0x2c(%ebp)
081f27df +0x1f51:  jle    081f2879 <+0x1feb>
081f27e5 +0x1f57:  movl   $0xb,0x8(%esp)
081f27ed +0x1f5f:  movl   $0x1,0x4(%esp)
081f27f5 +0x1f67:  lea    -0xac(%ebp),%eax
081f27fb +0x1f6d:  mov    %eax,(%esp)
081f27fe +0x1f70:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f2803 +0x1f75:  movl   $0x0,0x4(%esp)
081f280b +0x1f7d:  lea    -0xac(%ebp),%eax
081f2811 +0x1f83:  mov    %eax,(%esp)
081f2814 +0x1f86:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2819 +0x1f8b:  mov    -0x2c(%ebp),%eax
081f281c +0x1f8e:  mov    %eax,0x4(%esp)
081f2820 +0x1f92:  lea    -0xac(%ebp),%eax
081f2826 +0x1f98:  mov    %eax,(%esp)
081f2829 +0x1f9b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f282e +0x1fa0:  movl   $0x3,0x4(%esp)
081f2836 +0x1fa8:  lea    -0xac(%ebp),%eax
081f283c +0x1fae:  mov    %eax,(%esp)
081f283f +0x1fb1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2844 +0x1fb6:  movl   $0x1,0x4(%esp)
081f284c +0x1fbe:  lea    -0xac(%ebp),%eax
081f2852 +0x1fc4:  mov    %eax,(%esp)
081f2855 +0x1fc7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f285a +0x1fcc:  lea    -0xac(%ebp),%eax
081f2860 +0x1fd2:  mov    %eax,0x4(%esp)
081f2864 +0x1fd6:  mov    0xc(%ebp),%eax
081f2867 +0x1fd9:  mov    %eax,(%esp)
081f286a +0x1fdc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f286f +0x1fe1:  mov    $0x0,%ebx
081f2874 +0x1fe6:  jmp    081f2cf0 <+0x2462>
081f2879 +0x1feb:  lea    -0xc0(%ebp),%eax
081f287f +0x1ff1:  mov    %eax,0x8(%esp)
081f2883 +0x1ff5:  mov    0xc(%ebp),%eax
081f2886 +0x1ff8:  mov    %eax,0x4(%esp)
081f288a +0x1ffc:  mov    -0x30(%ebp),%eax
081f288d +0x1fff:  mov    %eax,(%esp)
081f2890 +0x2002:  call   086bae9a <_ZN7WarRoom4JoinEP5CUserRi>  ; WarRoom::Join(CUser*, int&)
081f2895 +0x2007:  mov    %eax,-0x2c(%ebp)
081f2898 +0x200a:  cmpl   $0x0,-0x2c(%ebp)
081f289c +0x200e:  jle    081f2936 <+0x20a8>
081f28a2 +0x2014:  movl   $0xb,0x8(%esp)
081f28aa +0x201c:  movl   $0x1,0x4(%esp)
081f28b2 +0x2024:  lea    -0xac(%ebp),%eax
081f28b8 +0x202a:  mov    %eax,(%esp)
081f28bb +0x202d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f28c0 +0x2032:  movl   $0x0,0x4(%esp)
081f28c8 +0x203a:  lea    -0xac(%ebp),%eax
081f28ce +0x2040:  mov    %eax,(%esp)
081f28d1 +0x2043:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f28d6 +0x2048:  mov    -0x2c(%ebp),%eax
081f28d9 +0x204b:  mov    %eax,0x4(%esp)
081f28dd +0x204f:  lea    -0xac(%ebp),%eax
081f28e3 +0x2055:  mov    %eax,(%esp)
081f28e6 +0x2058:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f28eb +0x205d:  movl   $0x3,0x4(%esp)
081f28f3 +0x2065:  lea    -0xac(%ebp),%eax
081f28f9 +0x206b:  mov    %eax,(%esp)
081f28fc +0x206e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f2901 +0x2073:  movl   $0x1,0x4(%esp)
081f2909 +0x207b:  lea    -0xac(%ebp),%eax
081f290f +0x2081:  mov    %eax,(%esp)
081f2912 +0x2084:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f2917 +0x2089:  lea    -0xac(%ebp),%eax
081f291d +0x208f:  mov    %eax,0x4(%esp)
081f2921 +0x2093:  mov    0xc(%ebp),%eax
081f2924 +0x2096:  mov    %eax,(%esp)
081f2927 +0x2099:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f292c +0x209e:  mov    $0x0,%ebx
081f2931 +0x20a3:  jmp    081f2cf0 <+0x2462>
081f2936 +0x20a8:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f293b +0x20ad:  movl   $0x0,0x8(%esp)
081f2943 +0x20b5:  mov    0xc(%ebp),%edx
081f2946 +0x20b8:  mov    %edx,0x4(%esp)
081f294a +0x20bc:  mov    %eax,(%esp)
081f294d +0x20bf:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
081f2952 +0x20c4:  mov    -0xc0(%ebp),%edx
081f2958 +0x20ca:  lea    -0xac(%ebp),%eax
081f295e +0x20d0:  mov    %edx,0x8(%esp)
081f2962 +0x20d4:  mov    %eax,0x4(%esp)
081f2966 +0x20d8:  mov    -0x30(%ebp),%eax
081f2969 +0x20db:  mov    %eax,(%esp)
081f296c +0x20de:  call   086bdea0 <_ZN7WarRoom12MakeSlotInfoEPci>  ; WarRoom::MakeSlotInfo(char*, int)
081f2971 +0x20e3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f2976 +0x20e8:  lea    -0xac(%ebp),%edx
081f297c +0x20ee:  mov    %edx,0x4(%esp)
081f2980 +0x20f2:  mov    %eax,(%esp)
081f2983 +0x20f5:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081f2988 +0x20fa:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f298d +0x20ff:  mov    0xc(%ebp),%edx
081f2990 +0x2102:  mov    %edx,0x4(%esp)
081f2994 +0x2106:  mov    %eax,(%esp)
081f2997 +0x2109:  call   086c7192 <_ZN9GameWorld12goto_warroomEP5CUser>  ; GameWorld::goto_warroom(CUser*)
081f299c +0x210e:  mov    -0x30(%ebp),%eax
081f299f +0x2111:  mov    %eax,(%esp)
081f29a2 +0x2114:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
081f29a7 +0x2119:  cmp    $0x2,%eax
081f29aa +0x211c:  setg   %al
081f29ad +0x211f:  test   %al,%al
081f29af +0x2121:  je     081f2cc7 <+0x2439>
081f29b5 +0x2127:  mov    -0x30(%ebp),%eax
081f29b8 +0x212a:  mov    %eax,(%esp)
081f29bb +0x212d:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
081f29c0 +0x2132:  test   %eax,%eax
081f29c2 +0x2134:  sete   %al
081f29c5 +0x2137:  test   %al,%al
081f29c7 +0x2139:  je     081f2cca <+0x243c>
081f29cd +0x213f:  mov    -0x30(%ebp),%eax
081f29d0 +0x2142:  mov    %eax,(%esp)
081f29d3 +0x2145:  call   086bd6d4 <_ZN7WarRoom5StartEv>  ; WarRoom::Start()
081f29d8 +0x214a:  jmp    081f2ccb <+0x243d>
081f29dd +0x214f:  movzwl -0x93(%ebp),%eax
081f29e4 +0x2156:  movzwl %ax,%ebx
081f29e7 +0x2159:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f29ec +0x215e:  mov    %ebx,0x4(%esp)
081f29f0 +0x2162:  mov    %eax,(%esp)
081f29f3 +0x2165:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081f29f8 +0x216a:  mov    %eax,-0x28(%ebp)
081f29fb +0x216d:  cmpl   $0x0,-0x28(%ebp)
081f29ff +0x2171:  jne    081f2a3e <+0x21b0>
081f2a01 +0x2173:  movzbl -0x91(%ebp),%eax
081f2a08 +0x217a:  movsbl %al,%eax
081f2a0b +0x217d:  lea    -0xac(%ebp),%edx
081f2a11 +0x2183:  mov    %edx,0x10(%esp)
081f2a15 +0x2187:  movl   $0x3,0xc(%esp)
081f2a1d +0x218f:  mov    %eax,0x8(%esp)
081f2a21 +0x2193:  movl   $0xb,0x4(%esp)
081f2a29 +0x219b:  mov    0xc(%ebp),%eax
081f2a2c +0x219e:  mov    %eax,(%esp)
081f2a2f +0x21a1:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f2a34 +0x21a6:  mov    $0x0,%ebx
081f2a39 +0x21ab:  jmp    081f2cf0 <+0x2462>
081f2a3e +0x21b0:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081f2a43 +0x21b5:  movl   $0x0,0x10(%esp)
081f2a4b +0x21bd:  mov    -0x28(%ebp),%edx
081f2a4e +0x21c0:  mov    %edx,0xc(%esp)
081f2a52 +0x21c4:  mov    0xc(%ebp),%edx
081f2a55 +0x21c7:  mov    %edx,0x8(%esp)
081f2a59 +0x21cb:  movl   $0x0,0x4(%esp)
081f2a61 +0x21d3:  mov    %eax,(%esp)
081f2a64 +0x21d6:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081f2a69 +0x21db:  mov    %eax,-0x24(%ebp)
081f2a6c +0x21de:  cmpl   $0x0,-0x24(%ebp)
081f2a70 +0x21e2:  jle    081f2ab1 <+0x2223>
081f2a72 +0x21e4:  mov    -0x24(%ebp),%eax
081f2a75 +0x21e7:  movzbl %al,%edx
081f2a78 +0x21ea:  movzbl -0x91(%ebp),%eax
081f2a7f +0x21f1:  movsbl %al,%eax
081f2a82 +0x21f4:  lea    -0xac(%ebp),%ecx
081f2a88 +0x21fa:  mov    %ecx,0x10(%esp)
081f2a8c +0x21fe:  mov    %edx,0xc(%esp)
081f2a90 +0x2202:  mov    %eax,0x8(%esp)
081f2a94 +0x2206:  movl   $0xb,0x4(%esp)
081f2a9c +0x220e:  mov    0xc(%ebp),%eax
081f2a9f +0x2211:  mov    %eax,(%esp)
081f2aa2 +0x2214:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f2aa7 +0x2219:  mov    $0x0,%ebx
081f2aac +0x221e:  jmp    081f2cf0 <+0x2462>
081f2ab1 +0x2223:  mov    0xc(%ebp),%eax
081f2ab4 +0x2226:  mov    %eax,(%esp)
081f2ab7 +0x2229:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081f2abc +0x222e:  cmp    $0x1,%eax
081f2abf +0x2231:  setne  %al
081f2ac2 +0x2234:  test   %al,%al
081f2ac4 +0x2236:  je     081f2b03 <+0x2275>
081f2ac6 +0x2238:  movzbl -0x91(%ebp),%eax
081f2acd +0x223f:  movsbl %al,%eax
081f2ad0 +0x2242:  lea    -0xac(%ebp),%edx
081f2ad6 +0x2248:  mov    %edx,0x10(%esp)
081f2ada +0x224c:  movl   $0x17,0xc(%esp)
081f2ae2 +0x2254:  mov    %eax,0x8(%esp)
081f2ae6 +0x2258:  movl   $0xb,0x4(%esp)
081f2aee +0x2260:  mov    0xc(%ebp),%eax
081f2af1 +0x2263:  mov    %eax,(%esp)
081f2af4 +0x2266:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f2af9 +0x226b:  mov    $0x0,%ebx
081f2afe +0x2270:  jmp    081f2cf0 <+0x2462>
081f2b03 +0x2275:  movzbl -0x91(%ebp),%eax
081f2b0a +0x227c:  movsbl %al,%ecx
081f2b0d +0x227f:  mov    -0x90(%ebp),%eax
081f2b13 +0x2285:  mov    %eax,%edx
081f2b15 +0x2287:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081f2b1a +0x228c:  lea    -0xac(%ebp),%ebx
081f2b20 +0x2292:  mov    %ebx,0x1c(%esp)
081f2b24 +0x2296:  mov    %ecx,0x18(%esp)
081f2b28 +0x229a:  mov    %edx,0x14(%esp)
081f2b2c +0x229e:  mov    -0x28(%ebp),%edx
081f2b2f +0x22a1:  mov    %edx,0x10(%esp)
081f2b33 +0x22a5:  mov    0xc(%ebp),%edx
081f2b36 +0x22a8:  mov    %edx,0xc(%esp)
081f2b3a +0x22ac:  mov    -0x28(%ebp),%edx
081f2b3d +0x22af:  mov    %edx,0x8(%esp)
081f2b41 +0x22b3:  mov    0xc(%ebp),%edx
081f2b44 +0x22b6:  mov    %edx,0x4(%esp)
081f2b48 +0x22ba:  mov    %eax,(%esp)
081f2b4b +0x22bd:  call   0849e362 <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard>  ; expert_job::CExpertJobMgr::OnResponsePeer(CUser*, CUser*, CUser*, CUser*, int, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
081f2b50 +0x22c2:  jmp    081f2ccb <+0x243d>
081f2b55 +0x22c7:  movzwl -0x93(%ebp),%eax
081f2b5c +0x22ce:  movzwl %ax,%ebx
081f2b5f +0x22d1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f2b64 +0x22d6:  mov    %ebx,0x4(%esp)
081f2b68 +0x22da:  mov    %eax,(%esp)
081f2b6b +0x22dd:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081f2b70 +0x22e2:  mov    %eax,-0x20(%ebp)
081f2b73 +0x22e5:  cmpl   $0x0,-0x20(%ebp)
081f2b77 +0x22e9:  jne    081f2bb6 <+0x2328>
081f2b79 +0x22eb:  movzbl -0x91(%ebp),%eax
081f2b80 +0x22f2:  movsbl %al,%eax
081f2b83 +0x22f5:  lea    -0xac(%ebp),%edx
081f2b89 +0x22fb:  mov    %edx,0x10(%esp)
081f2b8d +0x22ff:  movl   $0x3,0xc(%esp)
081f2b95 +0x2307:  mov    %eax,0x8(%esp)
081f2b99 +0x230b:  movl   $0xb,0x4(%esp)
081f2ba1 +0x2313:  mov    0xc(%ebp),%eax
081f2ba4 +0x2316:  mov    %eax,(%esp)
081f2ba7 +0x2319:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f2bac +0x231e:  mov    $0x0,%ebx
081f2bb1 +0x2323:  jmp    081f2cf0 <+0x2462>
081f2bb6 +0x2328:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081f2bbb +0x232d:  movl   $0x0,0x10(%esp)
081f2bc3 +0x2335:  mov    -0x20(%ebp),%edx
081f2bc6 +0x2338:  mov    %edx,0xc(%esp)
081f2bca +0x233c:  mov    0xc(%ebp),%edx
081f2bcd +0x233f:  mov    %edx,0x8(%esp)
081f2bd1 +0x2343:  movl   $0x0,0x4(%esp)
081f2bd9 +0x234b:  mov    %eax,(%esp)
081f2bdc +0x234e:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081f2be1 +0x2353:  mov    %eax,-0x1c(%ebp)
081f2be4 +0x2356:  cmpl   $0x0,-0x1c(%ebp)
081f2be8 +0x235a:  jle    081f2c29 <+0x239b>
081f2bea +0x235c:  mov    -0x1c(%ebp),%eax
081f2bed +0x235f:  movzbl %al,%edx
081f2bf0 +0x2362:  movzbl -0x91(%ebp),%eax
081f2bf7 +0x2369:  movsbl %al,%eax
081f2bfa +0x236c:  lea    -0xac(%ebp),%ecx
081f2c00 +0x2372:  mov    %ecx,0x10(%esp)
081f2c04 +0x2376:  mov    %edx,0xc(%esp)
081f2c08 +0x237a:  mov    %eax,0x8(%esp)
081f2c0c +0x237e:  movl   $0xb,0x4(%esp)
081f2c14 +0x2386:  mov    0xc(%ebp),%eax
081f2c17 +0x2389:  mov    %eax,(%esp)
081f2c1a +0x238c:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f2c1f +0x2391:  mov    $0x0,%ebx
081f2c24 +0x2396:  jmp    081f2cf0 <+0x2462>
081f2c29 +0x239b:  mov    -0x20(%ebp),%eax
081f2c2c +0x239e:  mov    %eax,(%esp)
081f2c2f +0x23a1:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081f2c34 +0x23a6:  cmp    $0x1,%eax
081f2c37 +0x23a9:  setne  %al
081f2c3a +0x23ac:  test   %al,%al
081f2c3c +0x23ae:  je     081f2c78 <+0x23ea>
081f2c3e +0x23b0:  movzbl -0x91(%ebp),%eax
081f2c45 +0x23b7:  movsbl %al,%eax
081f2c48 +0x23ba:  lea    -0xac(%ebp),%edx
081f2c4e +0x23c0:  mov    %edx,0x10(%esp)
081f2c52 +0x23c4:  movl   $0x17,0xc(%esp)
081f2c5a +0x23cc:  mov    %eax,0x8(%esp)
081f2c5e +0x23d0:  movl   $0xb,0x4(%esp)
081f2c66 +0x23d8:  mov    0xc(%ebp),%eax
081f2c69 +0x23db:  mov    %eax,(%esp)
081f2c6c +0x23de:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f2c71 +0x23e3:  mov    $0x0,%ebx
081f2c76 +0x23e8:  jmp    081f2cf0 <+0x2462>
081f2c78 +0x23ea:  movzbl -0x91(%ebp),%eax
081f2c7f +0x23f1:  movsbl %al,%ecx
081f2c82 +0x23f4:  mov    -0x90(%ebp),%eax
081f2c88 +0x23fa:  mov    %eax,%edx
081f2c8a +0x23fc:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081f2c8f +0x2401:  lea    -0xac(%ebp),%ebx
081f2c95 +0x2407:  mov    %ebx,0x1c(%esp)
081f2c99 +0x240b:  mov    %ecx,0x18(%esp)
081f2c9d +0x240f:  mov    %edx,0x14(%esp)
081f2ca1 +0x2413:  mov    0xc(%ebp),%edx
081f2ca4 +0x2416:  mov    %edx,0x10(%esp)
081f2ca8 +0x241a:  mov    -0x20(%ebp),%edx
081f2cab +0x241d:  mov    %edx,0xc(%esp)
081f2caf +0x2421:  mov    -0x20(%ebp),%edx
081f2cb2 +0x2424:  mov    %edx,0x8(%esp)
081f2cb6 +0x2428:  mov    0xc(%ebp),%edx
081f2cb9 +0x242b:  mov    %edx,0x4(%esp)
081f2cbd +0x242f:  mov    %eax,(%esp)
081f2cc0 +0x2432:  call   0849e362 <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard>  ; expert_job::CExpertJobMgr::OnResponsePeer(CUser*, CUser*, CUser*, CUser*, int, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
081f2cc5 +0x2437:  jmp    081f2ccb <+0x243d>
081f2cc7 +0x2439:  nop
081f2cc8 +0x243a:  jmp    081f2ccb <+0x243d>
081f2cca +0x243c:  nop
081f2ccb +0x243d:  mov    $0x0,%ebx
081f2cd0 +0x2442:  jmp    081f2cf0 <+0x2462>
081f2cd2 +0x2444:  mov    %edx,%ebx
081f2cd4 +0x2446:  mov    %eax,%esi
081f2cd6 +0x2448:  lea    -0xac(%ebp),%eax
081f2cdc +0x244e:  mov    %eax,(%esp)
081f2cdf +0x2451:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f2ce4 +0x2456:  mov    %esi,%eax
081f2ce6 +0x2458:  mov    %ebx,%edx
081f2ce8 +0x245a:  mov    %eax,(%esp)
081f2ceb +0x245d:  call   08ae3750 <_Unwind_Resume>
081f2cf0 +0x2462:  lea    -0xac(%ebp),%eax
081f2cf6 +0x2468:  mov    %eax,(%esp)
081f2cf9 +0x246b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f2cfe +0x2470:  mov    %ebx,%eax
081f2d00 +0x2472:  add    $0xec,%esp
081f2d06 +0x2478:  pop    %ebx
081f2d07 +0x2479:  pop    %esi
081f2d08 +0x247a:  pop    %edi
081f2d09 +0x247b:  pop    %ebp
081f2d0a +0x247c:  ret
081f2d0b +0x247d:  nop
```

## 反编译 C

```c
// DisPatcher_ResPeer::dispatch_sig @ 0x81f088e

/* DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ResPeer::dispatch_sig(DisPatcher_ResPeer *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CGameManager *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  CUser *pCVar14;
  GameWorld *pGVar15;
  CAssaultMgr *pCVar16;
  undefined4 unaff_EBX;
  int local_c4;
  int local_c0;
  PacketGuard local_bc [12];
  PacketGuard local_b0 [25];
  ushort local_97;
  char local_95;
  uint local_94;
  CSwitchLog local_90 [16];
  CUserCharacInfo *local_80;
  int local_7c;
  CParty *local_78;
  int local_74;
  int local_70;
  CParty *local_6c;
  CParty *local_68;
  int local_64;
  int local_60;
  CUser *local_5c;
  int local_58;
  int local_54;
  CTradeSpace *local_50;
  CUser *local_4c;
  int local_48;
  PvP_Room *local_44;
  int local_40;
  CUser *local_3c;
  int local_38;
  WarRoom *local_34;
  int local_30;
  CUser *local_2c;
  uint local_28;
  CUser *local_24;
  uint local_20;
  
  iVar6 = CUser::get_state(param_1);
  if (iVar6 != 3) {
    return 0;
  }
  PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 081f08da to 081f0a75 has its CatchHandler @ 081f2cd2 */
  cVar2 = PacketBuf::get_short(param_2,&local_97);
  if (cVar2 != '\x01') {
    unaff_EBX = LineFunc(0x77d5,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
    goto LAB_081f2cf0;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_95);
  if (cVar2 != '\x01') {
    unaff_EBX = LineFunc(0x77d6,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
    goto LAB_081f2cf0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_94);
  if (cVar2 != '\x01') {
    unaff_EBX = LineFunc(0x77d7,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
    goto LAB_081f2cf0;
  }
  cVar3 = CUser::GetReceivedRequestType(param_1);
  cVar2 = local_95;
  if (cVar3 == '\x06') {
LAB_081f09f0:
    if ((local_95 != '\x06') && (local_95 != '\b')) {
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
  }
  else {
    if (cVar3 < '\a') {
      if (cVar3 == '\x05') {
LAB_081f09d0:
        if ((local_95 != '\x05') && (local_95 != '\a')) {
          unaff_EBX = 0;
          goto LAB_081f2cf0;
        }
        goto LAB_081f0a41;
      }
    }
    else {
      if (cVar3 == '\a') goto LAB_081f09d0;
      if (cVar3 == '\b') goto LAB_081f09f0;
    }
    cVar3 = CUser::GetReceivedRequestType(param_1);
    if (cVar2 != cVar3) {
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
  }
LAB_081f0a41:
  CUser::InitReceivedRequestType(param_1);
  switch(local_95) {
  case '\0':
    PacketGuard::PacketGuard(local_bc);
    uVar1 = local_97;
                    /* try { // try from 081f0a80 to 081f1c91 has its CatchHandler @ 081f1c99 */
    pGVar15 = (GameWorld *)G_GameWorld();
    local_80 = (CUserCharacInfo *)GameWorld::find_from_world(pGVar15,uVar1);
    if (local_80 == (CUserCharacInfo *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
      CUser::Send(param_1,local_bc);
      unaff_EBX = 0;
      bVar4 = false;
    }
    else {
      if (local_80 == (CUserCharacInfo *)param_1) {
LAB_081f0b5c:
        bVar4 = true;
      }
      else {
        iVar6 = CUserCharacInfo::getCurCharacNo(local_80);
        iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        if (iVar6 == iVar7) goto LAB_081f0b5c;
        bVar4 = false;
      }
      if (bVar4) {
        unaff_EBX = 0x7828;
        bVar4 = false;
      }
      else {
        iVar6 = CUser::get_state(param_1);
        if ((iVar6 == 5) || (iVar6 = CUser::get_state((CUser *)local_80), iVar6 == 5)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          unaff_EBX = 0;
          bVar4 = false;
        }
        else {
          pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
          local_7c = pvp_assault::CAssaultMgr::check_party_teleport_user
                               (pCVar16,'\0',param_1,(CUser *)local_80,false);
          if (local_7c < 1) {
            iVar6 = CUser::get_state((CUser *)local_80);
            if (iVar6 == 3) {
              cVar2 = CUser::CheckInParty(param_1);
              if ((cVar2 == '\0') || (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\0')
                 ) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x12);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                CUser::Send(param_1,local_bc);
                unaff_EBX = 0;
                bVar4 = false;
              }
              else {
                cVar2 = CUser::isCompetitionMercenary(param_1);
                if (cVar2 == '\0') {
                  cVar2 = CUser::isCompetitionMercenary((CUser *)local_80);
                  if (cVar2 == '\0') {
                    cVar2 = CPowerManager::IsPowerWarEventOn();
                    if (cVar2 == '\0') {
                      local_74 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                      local_70 = CUserCharacInfo::GetCurCharacChaosKillTime(local_80);
                      if ((local_74 < local_70 + 600) &&
                         (cVar2 = expert_job::CAlchemist::GetAssaultPrevent(param_1,(bool *)0x0),
                         cVar2 != '\0')) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (bVar4) {
                        CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                        unaff_EBX = 0;
                        bVar4 = false;
                      }
                      else {
                        local_70 = CUserCharacInfo::GetCurCharacChaosKillTime
                                             ((CUserCharacInfo *)param_1);
                        if ((local_74 < local_70 + 600) &&
                           (cVar2 = expert_job::CAlchemist::GetAssaultPrevent
                                              ((CUser *)local_80,(bool *)0x0), cVar2 != '\0')) {
                          bVar4 = true;
                        }
                        else {
                          bVar4 = false;
                        }
                        if (bVar4) {
                          CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                          unaff_EBX = 0;
                          bVar4 = false;
                        }
                        else {
                          local_6c = (CParty *)CUser::GetParty(param_1);
                          if (((local_6c == (CParty *)0x0) ||
                              (cVar2 = CParty::CheckMemberLastTryAssaultTime(local_6c),
                              cVar2 == '\0')) ||
                             (cVar2 = expert_job::CAlchemist::GetAssaultPrevent
                                                ((CUser *)local_80,(bool *)0x0), cVar2 == '\0')) {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                          if (bVar4) {
                            CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                            unaff_EBX = 0;
                            bVar4 = false;
                          }
                          else {
                            local_68 = (CParty *)CUser::GetParty((CUser *)local_80);
                            if (((local_68 == (CParty *)0x0) ||
                                (cVar2 = CParty::CheckMemberLastTryAssaultTime(local_68),
                                cVar2 == '\0')) ||
                               (cVar2 = expert_job::CAlchemist::GetAssaultPrevent
                                                  (param_1,(bool *)0x0), cVar2 == '\0')) {
                              bVar4 = false;
                            }
                            else {
                              bVar4 = true;
                            }
                            if (!bVar4) goto LAB_081f12d8;
                            CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                            unaff_EBX = 0;
                            bVar4 = false;
                          }
                        }
                      }
                    }
                    else {
                      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                      if ((cVar2 == '\a') &&
                         (cVar2 = CUserCharacInfo::getCurCharacVill(local_80), cVar2 == '\a')) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (bVar4) {
                        cVar2 = CUser::getPowerSide(param_1);
                        cVar3 = CUser::getPowerSide((CUser *)local_80);
                        if (cVar2 == cVar3) {
LAB_081f12d8:
                          local_78 = (CParty *)0x0;
                          cVar2 = CUser::CheckInParty(param_1);
                          if ((cVar2 == '\x01') ||
                             (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\x01')) {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                          if (bVar4) {
                            pCVar9 = (CGameManager *)G_CGameManager();
                            local_78 = (CParty *)CGameManager::GetParty(pCVar9);
                            if (local_78 == (CParty *)0x0) {
                              InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                              CUser::Send(param_1,local_bc);
                              unaff_EBX = 0;
                              bVar4 = false;
                              goto LAB_081f1cb4;
                            }
                            CParty::create_party(local_78,(CUser *)local_80);
                            CParty::setDungIndex(local_78,0);
                            CParty::setDungDiffi(local_78,'\x05');
                            CParty::join_user(local_78,param_1);
                            CParty::send_party_realtime_info(local_78);
                            InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,8);
                            uVar8 = CUser::get_unique_id(param_1);
                            InterfacePacketBuf::put_short
                                      ((InterfacePacketBuf *)local_bc,uVar8 & 0xffff);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                            InterfacePacketBuf::put_int
                                      ((InterfacePacketBuf *)local_bc,(uint)local_97);
                            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                            CUser::Send((CUser *)local_80,local_bc);
                            CParty::send_party_ipinfo(local_78);
                            pGVar15 = (GameWorld *)G_GameWorld();
                            GameWorld::send_party_info_to_all(pGVar15,local_78,0);
                          }
                          cVar2 = CUser::CheckInParty(param_1);
                          if ((cVar2 == '\0') ||
                             (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\x01')) {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                          if (bVar4) {
                            local_78 = (CParty *)CUser::GetParty(param_1);
                            if (local_78 == (CParty *)0x0) {
                              InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                              CUser::Send(param_1,local_bc);
                              unaff_EBX = 0;
                              bVar4 = false;
                            }
                            else {
                              cVar2 = CParty::CanDoPartyActionAssalutState(local_78);
                              if (cVar2 == '\x01') {
                                local_64 = CParty::join_user(local_78,(CUser *)local_80);
                                if (0 < local_64) {
                                  CParty::send_quick_party_matching_result
                                            (local_78,false,(CUser *)0x0);
                                  CParty::set_quick_party(local_78,false);
                                  CParty::send_party_realtime_info(local_78);
                                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,8)
                                  ;
                                  uVar8 = CUser::get_unique_id(param_1);
                                  InterfacePacketBuf::put_short
                                            ((InterfacePacketBuf *)local_bc,uVar8 & 0xffff);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::put_int
                                            ((InterfacePacketBuf *)local_bc,(uint)local_97);
                                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                  CUser::Send((CUser *)local_80,local_bc);
                                  CParty::send_party_ipinfo(local_78);
                                  pGVar15 = (GameWorld *)G_GameWorld();
                                  GameWorld::send_party_info_to_all(pGVar15,local_78,2);
                                  goto LAB_081f18be;
                                }
                                InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb)
                                ;
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                if (local_64 == -2) {
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                                }
                                else if (local_64 == -1) {
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                                }
                                else {
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
                                }
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                CUser::Send(param_1,local_bc);
                                unaff_EBX = 0;
                                bVar4 = false;
                              }
                              else {
                                InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb)
                                ;
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                CUser::Send(param_1,local_bc);
                                unaff_EBX = 0;
                                bVar4 = false;
                              }
                            }
                          }
                          else {
LAB_081f18be:
                            cVar2 = CUser::CheckInParty(param_1);
                            if ((cVar2 == '\x01') ||
                               (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\0')) {
                              bVar4 = false;
                            }
                            else {
                              bVar4 = true;
                            }
                            if (bVar4) {
                              CUser::GetPartyIndex((CUser *)local_80);
                              iVar6 = G_CGameManager();
                              local_78 = (CParty *)CGameManager::GetParty(iVar6);
                              if (local_78 == (CParty *)0x0) {
                                InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb)
                                ;
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                CUser::Send(param_1,local_bc);
                                unaff_EBX = 0;
                                bVar4 = false;
                              }
                              else {
                                cVar2 = CParty::CanDoPartyActionAssalutState(local_78);
                                if (cVar2 == '\x01') {
                                  local_60 = CParty::join_user(local_78,param_1);
                                  if (0 < local_60) {
                                    CParty::send_quick_party_matching_result
                                              (local_78,false,(CUser *)0x0);
                                    CParty::set_quick_party(local_78,false);
                                    CParty::send_party_realtime_info(local_78);
                                    InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                    InterfacePacketBuf::put_header
                                              ((InterfacePacketBuf *)local_bc,0,8);
                                    uVar8 = CUser::get_unique_id(param_1);
                                    InterfacePacketBuf::put_short
                                              ((InterfacePacketBuf *)local_bc,uVar8 & 0xffff);
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                    InterfacePacketBuf::put_int
                                              ((InterfacePacketBuf *)local_bc,(uint)local_97);
                                    InterfacePacketBuf::finalize
                                              ((InterfacePacketBuf *)local_bc,true);
                                    CUser::Send((CUser *)local_80,local_bc);
                                    CParty::send_party_ipinfo(local_78);
                                    pGVar15 = (GameWorld *)G_GameWorld();
                                    GameWorld::send_party_info_to_all(pGVar15,local_78,2);
                                    goto LAB_081f1c92;
                                  }
                                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                  InterfacePacketBuf::put_header
                                            ((InterfacePacketBuf *)local_bc,1,0xb);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  if (local_60 == -2) {
                                    InterfacePacketBuf::put_byte
                                              ((InterfacePacketBuf *)local_bc,0x13);
                                  }
                                  else if (local_60 == -1) {
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                                  }
                                  else {
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
                                  }
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                  CUser::Send(param_1,local_bc);
                                  unaff_EBX = 0;
                                  bVar4 = false;
                                }
                                else {
                                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                  InterfacePacketBuf::put_header
                                            ((InterfacePacketBuf *)local_bc,1,0xb);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                  CUser::Send(param_1,local_bc);
                                  unaff_EBX = 0;
                                  bVar4 = false;
                                }
                              }
                            }
                            else {
LAB_081f1c92:
                              bVar4 = true;
                            }
                          }
                        }
                        else {
                          InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                          CUser::Send(param_1,local_bc);
                          unaff_EBX = 0;
                          bVar4 = false;
                        }
                      }
                      else {
                        cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                        if (((cVar2 == '\a') ||
                            (cVar2 = CUserCharacInfo::getCurCharacVill(local_80), cVar2 != '\a')) &&
                           ((cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1),
                            cVar2 != '\a' ||
                            (cVar2 = CUserCharacInfo::getCurCharacVill(local_80), cVar2 == '\a'))))
                        {
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                        if (!bVar4) goto LAB_081f12d8;
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                        CUser::Send(param_1,local_bc);
                        unaff_EBX = 0;
                        bVar4 = false;
                      }
                    }
                  }
                  else {
                    CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xea);
                    unaff_EBX = 0;
                    bVar4 = false;
                  }
                }
                else {
                  CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xea);
                  unaff_EBX = 0;
                  bVar4 = false;
                }
              }
            }
            else {
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
              CUser::Send(param_1,local_bc);
              unaff_EBX = 0;
              bVar4 = false;
            }
          }
          else {
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,(int)(char)local_7c);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
            CUser::Send(param_1,local_bc);
            unaff_EBX = 0;
            bVar4 = false;
          }
        }
      }
    }
LAB_081f1cb4:
                    /* try { // try from 081f1cbd to 081f2cc4 has its CatchHandler @ 081f2cd2 */
    PacketGuard::~PacketGuard(local_bc);
    if (!bVar4) goto LAB_081f2cf0;
    break;
  case '\x01':
    cVar2 = CUser::CheckInTrade(param_1);
    uVar1 = local_97;
    if (cVar2 != '\0') {
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pGVar15 = (GameWorld *)G_GameWorld();
    local_5c = (CUser *)GameWorld::find_from_world(pGVar15,uVar1);
    local_58 = -1;
    if (local_5c == (CUser *)0x0) {
      local_58 = 3;
    }
    else {
      cVar2 = CUser::CheckInTrade(local_5c);
      if (cVar2 == '\0') {
        iVar6 = CUser::get_state(param_1);
        iVar7 = CUser::get_state(local_5c);
        if (iVar6 != iVar7) {
          local_58 = 0x13;
        }
      }
      else {
        local_58 = 0x12;
      }
    }
    if (local_58 != -1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_58);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_54 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_5c,false);
    if (0 < local_54) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_54);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar9 = (CGameManager *)G_CGameManager();
    local_50 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar9);
    if (local_50 == (CTradeSpace *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    CTradeSpace::set_traders(local_50,local_5c,param_1);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,0,8);
    uVar8 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,uVar8 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,local_94);
    uVar8 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar8 & 0xff);
    iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,iVar6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
    CUser::Send(local_5c,local_b0);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_b0);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,(uint)local_97);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
    uVar8 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)local_5c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar8 & 0xff);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
    CUser::Send(param_1,local_b0);
    break;
  case '\x02':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_4c = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_4c == (CUser *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_48 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_4c,false);
    if (0 < local_48) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_48);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    sVar5 = CUser::GetPvpIndex(local_4c);
    pCVar9 = (CGameManager *)G_CGameManager();
    local_44 = (PvP_Room *)CGameManager::GetPvp(pCVar9,(int)sVar5,param_1,0);
    if (local_44 == (PvP_Room *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x13);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    local_c0 = 0;
    pGVar15 = (GameWorld *)G_GameWorld();
    bVar4 = (bool)GameWorld::IsSameTeamChannelJoin(pGVar15);
    local_40 = PvP_Room::join_room(local_44,param_1,&local_c0,bVar4);
    uVar10 = PvP_Room::get_pvp_battle_mode(local_44);
    uVar11 = PvP_Room::get_index(local_44);
    uVar12 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar13 = CUser::get_acc_name(param_1);
    CSwitchLog::CSwitchLog
              (local_90,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0x7a82,0,
               0);
    CSwitchLog::operator()
              (local_90,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar13,uVar12,uVar11,uVar10,local_40,0xb);
    if (0 < local_40) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,local_40);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar14 = (CUser *)G_CGameManager();
    CGameManager::CheckOutParty(pCVar14,SUB41(param_1,0));
    PvP_Room::make_seat_info(local_44,(char *)local_b0,local_c0);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar15,local_b0);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::goto_pvp(pGVar15,param_1);
    break;
  case '\x03':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_3c = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_3c == (CUser *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_38 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_3c,false);
    if (0 < local_38) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_38);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    CUser::GetWarRoomIndex(local_3c);
    iVar6 = G_CGameManager();
    local_34 = (WarRoom *)CGameManager::GetWarRoom(iVar6);
    if (local_34 == (WarRoom *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x13);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    local_c4 = 0;
    local_30 = WarRoom::IsJoinable(local_34,param_1);
    if (0 < local_30) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,local_30);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    local_30 = WarRoom::Join(local_34,param_1,&local_c4);
    if (0 < local_30) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,local_30);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar14 = (CUser *)G_CGameManager();
    CGameManager::CheckOutParty(pCVar14,SUB41(param_1,0));
    WarRoom::MakeSlotInfo(local_34,(char *)local_b0,local_c4);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar15,local_b0);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::goto_warroom(pGVar15,param_1);
    iVar6 = WarRoom::GetWaiterCount(local_34);
    if ((2 < iVar6) && (iVar6 = WarRoom::GetState(local_34), iVar6 == 0)) {
      WarRoom::Start(local_34);
    }
    break;
  case '\x05':
  case '\a':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_2c = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_2c == (CUser *)0x0) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,3,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_28 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_2c,false);
    if (0 < (int)local_28) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,local_28 & 0xff,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0x17,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    expert_job::CExpertJobMgr::OnResponsePeer
              (GlobalData::s_ExpertJobMgr,param_1,local_2c,param_1,local_2c,local_94,(int)local_95,
               local_b0);
    break;
  case '\x06':
  case '\b':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_24 = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_24 == (CUser *)0x0) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,3,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_20 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_24,false);
    if (0 < (int)local_20) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,local_20 & 0xff,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)local_24);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0x17,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    expert_job::CExpertJobMgr::OnResponsePeer
              (GlobalData::s_ExpertJobMgr,param_1,local_24,local_24,param_1,local_94,(int)local_95,
               local_b0);
  }
  unaff_EBX = 0;
LAB_081f2cf0:
  PacketGuard::~PacketGuard(local_b0);
  return unaff_EBX;
}
```
