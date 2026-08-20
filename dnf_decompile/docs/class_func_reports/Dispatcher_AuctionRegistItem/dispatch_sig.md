# dispatch_sig

`_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionRegistItem` | `0x08213e8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08213e8a  _ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08213e8a, 0x08214b95]
08213e8a +0x000:  push   %ebp
08213e8b +0x001:  mov    %esp,%ebp
08213e8d +0x003:  push   %esi
08213e8e +0x004:  push   %ebx
08213e8f +0x005:  sub    $0xe0,%esp
08213e95 +0x00b:  lea    -0x45(%ebp),%eax
08213e98 +0x00e:  mov    %eax,0x4(%esp)
08213e9c +0x012:  mov    0x10(%ebp),%eax
08213e9f +0x015:  mov    %eax,(%esp)
08213ea2 +0x018:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08213ea7 +0x01d:  xor    $0x1,%eax
08213eaa +0x020:  test   %al,%al
08213eac +0x022:  je     08213ed9 <+0x4f>
08213eae +0x024:  movl   $0x0,0xc(%esp)
08213eb6 +0x02c:  movl   $0x0,0x8(%esp)
08213ebe +0x034:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213ec6 +0x03c:  movl   $0xc294,(%esp)
08213ecd +0x043:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213ed2 +0x048:  mov    %eax,%ebx
08213ed4 +0x04a:  jmp    08214b89 <+0xcff>
08213ed9 +0x04f:  movzbl -0x45(%ebp),%eax
08213edd +0x053:  cmp    $0x1,%al
08213edf +0x055:  jbe    08213f0c <+0x82>
08213ee1 +0x057:  movl   $0x0,0xc(%esp)
08213ee9 +0x05f:  movl   $0x0,0x8(%esp)
08213ef1 +0x067:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213ef9 +0x06f:  movl   $0xc297,(%esp)
08213f00 +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213f05 +0x07b:  mov    %eax,%ebx
08213f07 +0x07d:  jmp    08214b89 <+0xcff>
08213f0c +0x082:  movzbl -0x45(%ebp),%eax
08213f10 +0x086:  movzbl %al,%eax
08213f13 +0x089:  mov    %eax,-0x30(%ebp)
08213f16 +0x08c:  cmpl   $0x1,-0x30(%ebp)
08213f1a +0x090:  jne    08213f5d <+0xd3>
08213f1c +0x092:  mov    0xc(%ebp),%eax
08213f1f +0x095:  mov    %eax,(%esp)
08213f22 +0x098:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08213f27 +0x09d:  cmp    $0x1e,%eax
08213f2a +0x0a0:  setle  %al
08213f2d +0x0a3:  test   %al,%al
08213f2f +0x0a5:  je     08213f5d <+0xd3>
08213f31 +0x0a7:  mov    -0x30(%ebp),%eax
08213f34 +0x0aa:  mov    %eax,0xc(%esp)
08213f38 +0x0ae:  movl   $0x75,0x8(%esp)
08213f40 +0x0b6:  movl   $0xba,0x4(%esp)
08213f48 +0x0be:  mov    0xc(%ebp),%eax
08213f4b +0x0c1:  mov    %eax,(%esp)
08213f4e +0x0c4:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08213f53 +0x0c9:  mov    $0x0,%ebx
08213f58 +0x0ce:  jmp    08214b89 <+0xcff>
08213f5d +0x0d3:  mov    -0x30(%ebp),%eax
08213f60 +0x0d6:  mov    %eax,0x8(%esp)
08213f64 +0x0da:  movl   $0xba,0x4(%esp)
08213f6c +0x0e2:  mov    0xc(%ebp),%eax
08213f6f +0x0e5:  mov    %eax,(%esp)
08213f72 +0x0e8:  call   08680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>  ; CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE)
08213f77 +0x0ed:  mov    %eax,-0x2c(%ebp)
08213f7a +0x0f0:  cmpl   $0x0,-0x2c(%ebp)
08213f7e +0x0f4:  js     08213f88 <+0xfe>
08213f80 +0x0f6:  mov    -0x2c(%ebp),%ebx
08213f83 +0x0f9:  jmp    08214b89 <+0xcff>
08213f88 +0x0fe:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08213f8d +0x103:  movl   $0x5,0xc(%esp)
08213f95 +0x10b:  movl   $0x1,0x8(%esp)
08213f9d +0x113:  mov    0xc(%ebp),%edx
08213fa0 +0x116:  mov    %edx,0x4(%esp)
08213fa4 +0x11a:  mov    %eax,(%esp)
08213fa7 +0x11d:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08213fac +0x122:  test   %al,%al
08213fae +0x124:  je     08213fdc <+0x152>
08213fb0 +0x126:  mov    -0x30(%ebp),%eax
08213fb3 +0x129:  mov    %eax,0xc(%esp)
08213fb7 +0x12d:  movl   $0xd1,0x8(%esp)
08213fbf +0x135:  movl   $0xba,0x4(%esp)
08213fc7 +0x13d:  mov    0xc(%ebp),%eax
08213fca +0x140:  mov    %eax,(%esp)
08213fcd +0x143:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08213fd2 +0x148:  mov    $0x0,%ebx
08213fd7 +0x14d:  jmp    08214b89 <+0xcff>
08213fdc +0x152:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08213fe1 +0x157:  movl   $0x32,0x8(%esp)
08213fe9 +0x15f:  mov    0xc(%ebp),%edx
08213fec +0x162:  mov    %edx,0x4(%esp)
08213ff0 +0x166:  mov    %eax,(%esp)
08213ff3 +0x169:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08213ff8 +0x16e:  mov    %eax,-0x28(%ebp)
08213ffb +0x171:  cmpl   $0x0,-0x28(%ebp)
08213fff +0x175:  je     0821402f <+0x1a5>
08214001 +0x177:  mov    -0x28(%ebp),%eax
08214004 +0x17a:  movzbl %al,%eax
08214007 +0x17d:  mov    -0x30(%ebp),%edx
0821400a +0x180:  mov    %edx,0xc(%esp)
0821400e +0x184:  mov    %eax,0x8(%esp)
08214012 +0x188:  movl   $0xba,0x4(%esp)
0821401a +0x190:  mov    0xc(%ebp),%eax
0821401d +0x193:  mov    %eax,(%esp)
08214020 +0x196:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214025 +0x19b:  mov    $0x0,%ebx
0821402a +0x1a0:  jmp    08214b89 <+0xcff>
0821402f +0x1a5:  cmpl   $0x1,-0x30(%ebp)
08214033 +0x1a9:  jne    0821439e <+0x514>
08214039 +0x1af:  lea    -0x8d(%ebp),%eax
0821403f +0x1b5:  mov    %eax,(%esp)
08214042 +0x1b8:  call   0822e9b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x405e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x405e
08214047 +0x1bd:  mov    0xc(%ebp),%eax
0821404a +0x1c0:  mov    %eax,(%esp)
0821404d +0x1c3:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08214052 +0x1c8:  mov    %eax,-0x7b(%ebp)
08214055 +0x1cb:  mov    0xc(%ebp),%eax
08214058 +0x1ce:  mov    %eax,(%esp)
0821405b +0x1d1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214060 +0x1d6:  mov    %eax,-0x77(%ebp)
08214063 +0x1d9:  lea    -0x8d(%ebp),%eax
08214069 +0x1df:  add    $0x1a,%eax
0821406c +0x1e2:  mov    %eax,0x4(%esp)
08214070 +0x1e6:  mov    0x10(%ebp),%eax
08214073 +0x1e9:  mov    %eax,(%esp)
08214076 +0x1ec:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821407b +0x1f1:  xor    $0x1,%eax
0821407e +0x1f4:  test   %al,%al
08214080 +0x1f6:  je     082140ad <+0x223>
08214082 +0x1f8:  movl   $0x0,0xc(%esp)
0821408a +0x200:  movl   $0x0,0x8(%esp)
08214092 +0x208:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821409a +0x210:  movl   $0xc2fa,(%esp)
082140a1 +0x217:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082140a6 +0x21c:  mov    %eax,%ebx
082140a8 +0x21e:  jmp    08214b89 <+0xcff>
082140ad +0x223:  lea    -0x8d(%ebp),%eax
082140b3 +0x229:  add    $0x1b,%eax
082140b6 +0x22c:  mov    %eax,0x4(%esp)
082140ba +0x230:  mov    0x10(%ebp),%eax
082140bd +0x233:  mov    %eax,(%esp)
082140c0 +0x236:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082140c5 +0x23b:  xor    $0x1,%eax
082140c8 +0x23e:  test   %al,%al
082140ca +0x240:  je     082140f7 <+0x26d>
082140cc +0x242:  movl   $0x0,0xc(%esp)
082140d4 +0x24a:  movl   $0x0,0x8(%esp)
082140dc +0x252:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082140e4 +0x25a:  movl   $0xc2fc,(%esp)
082140eb +0x261:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082140f0 +0x266:  mov    %eax,%ebx
082140f2 +0x268:  jmp    08214b89 <+0xcff>
082140f7 +0x26d:  lea    -0x4c(%ebp),%eax
082140fa +0x270:  mov    %eax,0x4(%esp)
082140fe +0x274:  mov    0x10(%ebp),%eax
08214101 +0x277:  mov    %eax,(%esp)
08214104 +0x27a:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08214109 +0x27f:  xor    $0x1,%eax
0821410c +0x282:  test   %al,%al
0821410e +0x284:  je     0821413b <+0x2b1>
08214110 +0x286:  movl   $0x0,0xc(%esp)
08214118 +0x28e:  movl   $0x0,0x8(%esp)
08214120 +0x296:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214128 +0x29e:  movl   $0xc302,(%esp)
0821412f +0x2a5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214134 +0x2aa:  mov    %eax,%ebx
08214136 +0x2ac:  jmp    08214b89 <+0xcff>
0821413b +0x2b1:  mov    -0x4c(%ebp),%eax
0821413e +0x2b4:  mov    %eax,-0x70(%ebp)
08214141 +0x2b7:  lea    -0x8d(%ebp),%eax
08214147 +0x2bd:  add    $0x21,%eax
0821414a +0x2c0:  mov    %eax,0x4(%esp)
0821414e +0x2c4:  mov    0x10(%ebp),%eax
08214151 +0x2c7:  mov    %eax,(%esp)
08214154 +0x2ca:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08214159 +0x2cf:  xor    $0x1,%eax
0821415c +0x2d2:  test   %al,%al
0821415e +0x2d4:  je     0821418b <+0x301>
08214160 +0x2d6:  movl   $0x0,0xc(%esp)
08214168 +0x2de:  movl   $0x0,0x8(%esp)
08214170 +0x2e6:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214178 +0x2ee:  movl   $0xc305,(%esp)
0821417f +0x2f5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214184 +0x2fa:  mov    %eax,%ebx
08214186 +0x2fc:  jmp    08214b89 <+0xcff>
0821418b +0x301:  lea    -0x8d(%ebp),%eax
08214191 +0x307:  add    $0x25,%eax
08214194 +0x30a:  mov    %eax,0x4(%esp)
08214198 +0x30e:  mov    0x10(%ebp),%eax
0821419b +0x311:  mov    %eax,(%esp)
0821419e +0x314:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082141a3 +0x319:  xor    $0x1,%eax
082141a6 +0x31c:  test   %al,%al
082141a8 +0x31e:  je     082141d5 <+0x34b>
082141aa +0x320:  movl   $0x0,0xc(%esp)
082141b2 +0x328:  movl   $0x0,0x8(%esp)
082141ba +0x330:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082141c2 +0x338:  movl   $0xc306,(%esp)
082141c9 +0x33f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082141ce +0x344:  mov    %eax,%ebx
082141d0 +0x346:  jmp    08214b89 <+0xcff>
082141d5 +0x34b:  lea    -0x8d(%ebp),%eax
082141db +0x351:  add    $0x29,%eax
082141de +0x354:  mov    %eax,0x4(%esp)
082141e2 +0x358:  mov    0x10(%ebp),%eax
082141e5 +0x35b:  mov    %eax,(%esp)
082141e8 +0x35e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082141ed +0x363:  xor    $0x1,%eax
082141f0 +0x366:  test   %al,%al
082141f2 +0x368:  je     0821421f <+0x395>
082141f4 +0x36a:  movl   $0x0,0xc(%esp)
082141fc +0x372:  movl   $0x0,0x8(%esp)
08214204 +0x37a:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821420c +0x382:  movl   $0xc307,(%esp)
08214213 +0x389:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214218 +0x38e:  mov    %eax,%ebx
0821421a +0x390:  jmp    08214b89 <+0xcff>
0821421f +0x395:  mov    -0x64(%ebp),%edx
08214222 +0x398:  mov    -0x68(%ebp),%eax
08214225 +0x39b:  mov    %edx,0x4(%esp)
08214229 +0x39f:  mov    %eax,(%esp)
0821422c +0x3a2:  call   08213e15 <_Z12IsPriceErrorii>  ; IsPriceError(int, int)
08214231 +0x3a7:  test   %al,%al
08214233 +0x3a9:  jne    0821423f <+0x3b5>
08214235 +0x3ab:  mov    -0x64(%ebp),%eax
08214238 +0x3ae:  cmp    $0x895440,%eax
0821423d +0x3b3:  jle    08214246 <+0x3bc>
0821423f +0x3b5:  mov    $0x1,%eax
08214244 +0x3ba:  jmp    0821424b <+0x3c1>
08214246 +0x3bc:  mov    $0x0,%eax
0821424b +0x3c1:  test   %al,%al
0821424d +0x3c3:  je     0821427b <+0x3f1>
0821424f +0x3c5:  mov    -0x30(%ebp),%eax
08214252 +0x3c8:  mov    %eax,0xc(%esp)
08214256 +0x3cc:  movl   $0x98,0x8(%esp)
0821425e +0x3d4:  movl   $0xba,0x4(%esp)
08214266 +0x3dc:  mov    0xc(%ebp),%eax
08214269 +0x3df:  mov    %eax,(%esp)
0821426c +0x3e2:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214271 +0x3e7:  mov    $0x0,%ebx
08214276 +0x3ec:  jmp    08214b89 <+0xcff>
0821427b +0x3f1:  mov    -0x4c(%ebp),%eax
0821427e +0x3f4:  cmp    $0x28d287,%eax
08214283 +0x3f9:  jbe    0821428f <+0x405>
08214285 +0x3fb:  mov    -0x4c(%ebp),%eax
08214288 +0x3fe:  cmp    $0x28d299,%eax
0821428d +0x403:  jbe    082142bb <+0x431>
0821428f +0x405:  mov    -0x30(%ebp),%eax
08214292 +0x408:  mov    %eax,0xc(%esp)
08214296 +0x40c:  movl   $0x91,0x8(%esp)
0821429e +0x414:  movl   $0xba,0x4(%esp)
082142a6 +0x41c:  mov    0xc(%ebp),%eax
082142a9 +0x41f:  mov    %eax,(%esp)
082142ac +0x422:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082142b1 +0x427:  mov    $0x0,%ebx
082142b6 +0x42c:  jmp    08214b89 <+0xcff>
082142bb +0x431:  mov    -0x6c(%ebp),%eax
082142be +0x434:  cmp    $0x1,%eax
082142c1 +0x437:  jle    082142ef <+0x465>
082142c3 +0x439:  mov    -0x30(%ebp),%eax
082142c6 +0x43c:  mov    %eax,0xc(%esp)
082142ca +0x440:  movl   $0x91,0x8(%esp)
082142d2 +0x448:  movl   $0xba,0x4(%esp)
082142da +0x450:  mov    0xc(%ebp),%eax
082142dd +0x453:  mov    %eax,(%esp)
082142e0 +0x456:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082142e5 +0x45b:  mov    $0x0,%ebx
082142ea +0x460:  jmp    08214b89 <+0xcff>
082142ef +0x465:  mov    -0x68(%ebp),%eax
082142f2 +0x468:  cmp    $0xffffffff,%eax
082142f5 +0x46b:  je     08214344 <+0x4ba>
082142f7 +0x46d:  mov    -0x30(%ebp),%eax
082142fa +0x470:  mov    %eax,0xc(%esp)
082142fe +0x474:  movl   $0x91,0x8(%esp)
08214306 +0x47c:  movl   $0xba,0x4(%esp)
0821430e +0x484:  mov    0xc(%ebp),%eax
08214311 +0x487:  mov    %eax,(%esp)
08214314 +0x48a:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214319 +0x48f:  movl   $0x0,0xc(%esp)
08214321 +0x497:  movl   $0x0,0x8(%esp)
08214329 +0x49f:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214331 +0x4a7:  movl   $0xc322,(%esp)
08214338 +0x4ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821433d +0x4b3:  mov    %eax,%ebx
0821433f +0x4b5:  jmp    08214b89 <+0xcff>
08214344 +0x4ba:  mov    -0x64(%ebp),%eax
08214347 +0x4bd:  cmp    $0x31,%eax
0821434a +0x4c0:  jle    08214356 <+0x4cc>
0821434c +0x4c2:  mov    -0x64(%ebp),%eax
0821434f +0x4c5:  cmp    $0x895440,%eax
08214354 +0x4ca:  jle    08214382 <+0x4f8>
08214356 +0x4cc:  mov    -0x30(%ebp),%eax
08214359 +0x4cf:  mov    %eax,0xc(%esp)
0821435d +0x4d3:  movl   $0x98,0x8(%esp)
08214365 +0x4db:  movl   $0xba,0x4(%esp)
0821436d +0x4e3:  mov    0xc(%ebp),%eax
08214370 +0x4e6:  mov    %eax,(%esp)
08214373 +0x4e9:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214378 +0x4ee:  mov    $0x0,%ebx
0821437d +0x4f3:  jmp    08214b89 <+0xcff>
08214382 +0x4f8:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
08214387 +0x4fd:  lea    -0x8d(%ebp),%edx
0821438d +0x503:  mov    %edx,0x4(%esp)
08214391 +0x507:  mov    %eax,(%esp)
08214394 +0x50a:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08214399 +0x50f:  jmp    08214afb <+0xc71>
0821439e +0x514:  lea    -0xca(%ebp),%eax
082143a4 +0x51a:  mov    %eax,(%esp)
082143a7 +0x51d:  call   0822e54e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3bf8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3bf8
082143ac +0x522:  mov    0xc(%ebp),%eax
082143af +0x525:  mov    %eax,(%esp)
082143b2 +0x528:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082143b7 +0x52d:  mov    %eax,-0xb8(%ebp)
082143bd +0x533:  mov    0xc(%ebp),%eax
082143c0 +0x536:  mov    %eax,(%esp)
082143c3 +0x539:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082143c8 +0x53e:  mov    %eax,-0xb4(%ebp)
082143ce +0x544:  lea    -0xca(%ebp),%eax
082143d4 +0x54a:  add    $0x1a,%eax
082143d7 +0x54d:  mov    %eax,0x4(%esp)
082143db +0x551:  mov    0x10(%ebp),%eax
082143de +0x554:  mov    %eax,(%esp)
082143e1 +0x557:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082143e6 +0x55c:  xor    $0x1,%eax
082143e9 +0x55f:  test   %al,%al
082143eb +0x561:  je     08214418 <+0x58e>
082143ed +0x563:  movl   $0x0,0xc(%esp)
082143f5 +0x56b:  movl   $0x0,0x8(%esp)
082143fd +0x573:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214405 +0x57b:  movl   $0xc38a,(%esp)
0821440c +0x582:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214411 +0x587:  mov    %eax,%ebx
08214413 +0x589:  jmp    08214b89 <+0xcff>
08214418 +0x58e:  lea    -0xca(%ebp),%eax
0821441e +0x594:  add    $0x1b,%eax
08214421 +0x597:  mov    %eax,0x4(%esp)
08214425 +0x59b:  mov    0x10(%ebp),%eax
08214428 +0x59e:  mov    %eax,(%esp)
0821442b +0x5a1:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08214430 +0x5a6:  xor    $0x1,%eax
08214433 +0x5a9:  test   %al,%al
08214435 +0x5ab:  je     08214462 <+0x5d8>
08214437 +0x5ad:  movl   $0x0,0xc(%esp)
0821443f +0x5b5:  movl   $0x0,0x8(%esp)
08214447 +0x5bd:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821444f +0x5c5:  movl   $0xc38c,(%esp)
08214456 +0x5cc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821445b +0x5d1:  mov    %eax,%ebx
0821445d +0x5d3:  jmp    08214b89 <+0xcff>
08214462 +0x5d8:  lea    -0x50(%ebp),%eax
08214465 +0x5db:  mov    %eax,0x4(%esp)
08214469 +0x5df:  mov    0x10(%ebp),%eax
0821446c +0x5e2:  mov    %eax,(%esp)
0821446f +0x5e5:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08214474 +0x5ea:  xor    $0x1,%eax
08214477 +0x5ed:  test   %al,%al
08214479 +0x5ef:  je     082144a6 <+0x61c>
0821447b +0x5f1:  movl   $0x0,0xc(%esp)
08214483 +0x5f9:  movl   $0x0,0x8(%esp)
0821448b +0x601:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214493 +0x609:  movl   $0xc392,(%esp)
0821449a +0x610:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821449f +0x615:  mov    %eax,%ebx
082144a1 +0x617:  jmp    08214b89 <+0xcff>
082144a6 +0x61c:  mov    -0x50(%ebp),%eax
082144a9 +0x61f:  mov    %eax,-0xad(%ebp)
082144af +0x625:  lea    -0xca(%ebp),%eax
082144b5 +0x62b:  add    $0x21,%eax
082144b8 +0x62e:  mov    %eax,0x4(%esp)
082144bc +0x632:  mov    0x10(%ebp),%eax
082144bf +0x635:  mov    %eax,(%esp)
082144c2 +0x638:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082144c7 +0x63d:  xor    $0x1,%eax
082144ca +0x640:  test   %al,%al
082144cc +0x642:  je     082144f9 <+0x66f>
082144ce +0x644:  movl   $0x0,0xc(%esp)
082144d6 +0x64c:  movl   $0x0,0x8(%esp)
082144de +0x654:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082144e6 +0x65c:  movl   $0xc395,(%esp)
082144ed +0x663:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082144f2 +0x668:  mov    %eax,%ebx
082144f4 +0x66a:  jmp    08214b89 <+0xcff>
082144f9 +0x66f:  lea    -0xca(%ebp),%eax
082144ff +0x675:  add    $0x25,%eax
08214502 +0x678:  mov    %eax,0x4(%esp)
08214506 +0x67c:  mov    0x10(%ebp),%eax
08214509 +0x67f:  mov    %eax,(%esp)
0821450c +0x682:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08214511 +0x687:  xor    $0x1,%eax
08214514 +0x68a:  test   %al,%al
08214516 +0x68c:  je     08214543 <+0x6b9>
08214518 +0x68e:  movl   $0x0,0xc(%esp)
08214520 +0x696:  movl   $0x0,0x8(%esp)
08214528 +0x69e:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214530 +0x6a6:  movl   $0xc396,(%esp)
08214537 +0x6ad:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821453c +0x6b2:  mov    %eax,%ebx
0821453e +0x6b4:  jmp    08214b89 <+0xcff>
08214543 +0x6b9:  lea    -0xca(%ebp),%eax
08214549 +0x6bf:  add    $0x29,%eax
0821454c +0x6c2:  mov    %eax,0x4(%esp)
08214550 +0x6c6:  mov    0x10(%ebp),%eax
08214553 +0x6c9:  mov    %eax,(%esp)
08214556 +0x6cc:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821455b +0x6d1:  xor    $0x1,%eax
0821455e +0x6d4:  test   %al,%al
08214560 +0x6d6:  je     0821458d <+0x703>
08214562 +0x6d8:  movl   $0x0,0xc(%esp)
0821456a +0x6e0:  movl   $0x0,0x8(%esp)
08214572 +0x6e8:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821457a +0x6f0:  movl   $0xc397,(%esp)
08214581 +0x6f7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214586 +0x6fc:  mov    %eax,%ebx
08214588 +0x6fe:  jmp    08214b89 <+0xcff>
0821458d +0x703:  lea    -0xca(%ebp),%eax
08214593 +0x709:  add    $0x2d,%eax
08214596 +0x70c:  mov    %eax,0x4(%esp)
0821459a +0x710:  mov    0x10(%ebp),%eax
0821459d +0x713:  mov    %eax,(%esp)
082145a0 +0x716:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082145a5 +0x71b:  xor    $0x1,%eax
082145a8 +0x71e:  test   %al,%al
082145aa +0x720:  je     082145d7 <+0x74d>
082145ac +0x722:  movl   $0x0,0xc(%esp)
082145b4 +0x72a:  movl   $0x0,0x8(%esp)
082145bc +0x732:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082145c4 +0x73a:  movl   $0xc398,(%esp)
082145cb +0x741:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082145d0 +0x746:  mov    %eax,%ebx
082145d2 +0x748:  jmp    08214b89 <+0xcff>
082145d7 +0x74d:  movl   $0x0,-0x14(%ebp)
082145de +0x754:  jmp    0821468d <+0x803>
082145e3 +0x759:  mov    -0x14(%ebp),%edx
082145e6 +0x75c:  lea    -0xca(%ebp),%eax
082145ec +0x762:  add    $0x18,%edx
082145ef +0x765:  add    %edx,%edx
082145f1 +0x767:  add    %edx,%eax
082145f3 +0x769:  add    $0x1,%eax
082145f6 +0x76c:  mov    %eax,0x4(%esp)
082145fa +0x770:  mov    0x10(%ebp),%eax
082145fd +0x773:  mov    %eax,(%esp)
08214600 +0x776:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08214605 +0x77b:  xor    $0x1,%eax
08214608 +0x77e:  test   %al,%al
0821460a +0x780:  je     08214637 <+0x7ad>
0821460c +0x782:  movl   $0x0,0xc(%esp)
08214614 +0x78a:  movl   $0x0,0x8(%esp)
0821461c +0x792:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214624 +0x79a:  movl   $0xc3a2,(%esp)
0821462b +0x7a1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214630 +0x7a6:  mov    %eax,%ebx
08214632 +0x7a8:  jmp    08214b89 <+0xcff>
08214637 +0x7ad:  mov    -0x14(%ebp),%edx
0821463a +0x7b0:  lea    -0xca(%ebp),%eax
08214640 +0x7b6:  add    $0x30,%edx
08214643 +0x7b9:  add    %edx,%eax
08214645 +0x7bb:  add    $0x9,%eax
08214648 +0x7be:  mov    %eax,0x4(%esp)
0821464c +0x7c2:  mov    0x10(%ebp),%eax
0821464f +0x7c5:  mov    %eax,(%esp)
08214652 +0x7c8:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08214657 +0x7cd:  xor    $0x1,%eax
0821465a +0x7d0:  test   %al,%al
0821465c +0x7d2:  je     08214689 <+0x7ff>
0821465e +0x7d4:  movl   $0x0,0xc(%esp)
08214666 +0x7dc:  movl   $0x0,0x8(%esp)
0821466e +0x7e4:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214676 +0x7ec:  movl   $0xc3a5,(%esp)
0821467d +0x7f3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214682 +0x7f8:  mov    %eax,%ebx
08214684 +0x7fa:  jmp    08214b89 <+0xcff>
08214689 +0x7ff:  addl   $0x1,-0x14(%ebp)
0821468d +0x803:  cmpl   $0x2,-0x14(%ebp)
08214691 +0x807:  setle  %al
08214694 +0x80a:  test   %al,%al
08214696 +0x80c:  jne    082145e3 <+0x759>
0821469c +0x812:  mov    -0x50(%ebp),%eax
0821469f +0x815:  mov    %eax,%ebx
082146a1 +0x817:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082146a6 +0x81c:  mov    %ebx,0x4(%esp)
082146aa +0x820:  mov    %eax,(%esp)
082146ad +0x823:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082146b2 +0x828:  mov    %eax,-0x24(%ebp)
082146b5 +0x82b:  cmpl   $0x0,-0x24(%ebp)
082146b9 +0x82f:  jne    082146e6 <+0x85c>
082146bb +0x831:  movl   $0x0,0xc(%esp)
082146c3 +0x839:  movl   $0x0,0x8(%esp)
082146cb +0x841:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082146d3 +0x849:  movl   $0xc3aa,(%esp)
082146da +0x850:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082146df +0x855:  mov    %eax,%ebx
082146e1 +0x857:  jmp    08214b89 <+0xcff>
082146e6 +0x85c:  mov    -0x24(%ebp),%eax
082146e9 +0x85f:  mov    (%eax),%eax
082146eb +0x861:  add    $0x4c,%eax
082146ee +0x864:  mov    (%eax),%edx
082146f0 +0x866:  mov    -0x24(%ebp),%eax
082146f3 +0x869:  mov    %eax,(%esp)
082146f6 +0x86c:  call   *%edx
082146f8 +0x86e:  test   %al,%al
082146fa +0x870:  je     08214737 <+0x8ad>
082146fc +0x872:  movl   $0x0,-0x10(%ebp)
08214703 +0x879:  jmp    0821472c <+0x8a2>
08214705 +0x87b:  mov    -0x10(%ebp),%eax
08214708 +0x87e:  add    $0x18,%eax
0821470b +0x881:  movzwl -0xc9(%ebp,%eax,2),%eax
08214713 +0x889:  test   %ax,%ax
08214716 +0x88c:  jne    08214728 <+0x89e>
08214718 +0x88e:  mov    -0x10(%ebp),%eax
0821471b +0x891:  add    $0x18,%eax
0821471e +0x894:  movw   $0x7530,-0xc9(%ebp,%eax,2)
08214728 +0x89e:  addl   $0x1,-0x10(%ebp)
0821472c +0x8a2:  cmpl   $0x2,-0x10(%ebp)
08214730 +0x8a6:  setle  %al
08214733 +0x8a9:  test   %al,%al
08214735 +0x8ab:  jne    08214705 <+0x87b>
08214737 +0x8ad:  lea    -0xca(%ebp),%eax
0821473d +0x8b3:  add    $0x31,%eax
08214740 +0x8b6:  mov    %eax,(%esp)
08214743 +0x8b9:  call   0822ac30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da
08214748 +0x8be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821474d +0x8c3:  add    $0x4e8,%eax
08214752 +0x8c8:  mov    %eax,-0x20(%ebp)
08214755 +0x8cb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0821475c +0x8d2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08214761 +0x8d7:  mov    %eax,-0x1c(%ebp)
08214764 +0x8da:  lea    -0x54(%ebp),%eax
08214767 +0x8dd:  mov    -0x20(%ebp),%edx
0821476a +0x8e0:  mov    %edx,0x4(%esp)
0821476e +0x8e4:  mov    %eax,(%esp)
08214771 +0x8e7:  call   08237b00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd1aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd1aa
08214776 +0x8ec:  sub    $0x4,%esp
08214779 +0x8ef:  jmp    082148f6 <+0xa6c>
0821477e +0x8f4:  lea    -0x54(%ebp),%eax
08214781 +0x8f7:  mov    %eax,(%esp)
08214784 +0x8fa:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
08214789 +0x8ff:  mov    (%eax),%eax
0821478b +0x901:  cmp    $0xffffffff,%eax
0821478e +0x904:  je     082147a6 <+0x91c>
08214790 +0x906:  lea    -0x54(%ebp),%eax
08214793 +0x909:  mov    %eax,(%esp)
08214796 +0x90c:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
0821479b +0x911:  mov    (%eax),%eax
0821479d +0x913:  mov    %eax,%edx
0821479f +0x915:  mov    -0x50(%ebp),%eax
082147a2 +0x918:  cmp    %eax,%edx
082147a4 +0x91a:  jne    082147ad <+0x923>
082147a6 +0x91c:  mov    $0x1,%eax
082147ab +0x921:  jmp    082147b2 <+0x928>
082147ad +0x923:  mov    $0x0,%eax
082147b2 +0x928:  test   %al,%al
082147b4 +0x92a:  je     082148eb <+0xa61>
082147ba +0x930:  lea    -0x54(%ebp),%eax
082147bd +0x933:  mov    %eax,(%esp)
082147c0 +0x936:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
082147c5 +0x93b:  mov    0x4(%eax),%eax
082147c8 +0x93e:  cmp    -0x1c(%ebp),%eax
082147cb +0x941:  jae    082147e7 <+0x95d>
082147cd +0x943:  lea    -0x54(%ebp),%eax
082147d0 +0x946:  mov    %eax,(%esp)
082147d3 +0x949:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
082147d8 +0x94e:  mov    0x8(%eax),%eax
082147db +0x951:  cmp    -0x1c(%ebp),%eax
082147de +0x954:  jbe    082147e7 <+0x95d>
082147e0 +0x956:  mov    $0x1,%eax
082147e5 +0x95b:  jmp    082147ec <+0x962>
082147e7 +0x95d:  mov    $0x0,%eax
082147ec +0x962:  test   %al,%al
082147ee +0x964:  je     082148eb <+0xa61>
082147f4 +0x96a:  lea    -0x60(%ebp),%eax
082147f7 +0x96d:  mov    %eax,(%esp)
082147fa +0x970:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082147ff +0x975:  movl   $0xba,0x8(%esp)
08214807 +0x97d:  movl   $0x1,0x4(%esp)
0821480f +0x985:  lea    -0x60(%ebp),%eax
08214812 +0x988:  mov    %eax,(%esp)
08214815 +0x98b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821481a +0x990:  movl   $0x0,0x4(%esp)
08214822 +0x998:  lea    -0x60(%ebp),%eax
08214825 +0x99b:  mov    %eax,(%esp)
08214828 +0x99e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821482d +0x9a3:  movl   $0x7,0x4(%esp)
08214835 +0x9ab:  lea    -0x60(%ebp),%eax
08214838 +0x9ae:  mov    %eax,(%esp)
0821483b +0x9b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08214840 +0x9b6:  lea    -0x54(%ebp),%eax
08214843 +0x9b9:  mov    %eax,(%esp)
08214846 +0x9bc:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
0821484b +0x9c1:  mov    (%eax),%eax
0821484d +0x9c3:  mov    %eax,0x4(%esp)
08214851 +0x9c7:  lea    -0x60(%ebp),%eax
08214854 +0x9ca:  mov    %eax,(%esp)
08214857 +0x9cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821485c +0x9d2:  lea    -0x54(%ebp),%eax
0821485f +0x9d5:  mov    %eax,(%esp)
08214862 +0x9d8:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
08214867 +0x9dd:  mov    0x4(%eax),%eax
0821486a +0x9e0:  mov    %eax,0x4(%esp)
0821486e +0x9e4:  lea    -0x60(%ebp),%eax
08214871 +0x9e7:  mov    %eax,(%esp)
08214874 +0x9ea:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08214879 +0x9ef:  lea    -0x54(%ebp),%eax
0821487c +0x9f2:  mov    %eax,(%esp)
0821487f +0x9f5:  call   08237b8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd236>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd236
08214884 +0x9fa:  mov    0x8(%eax),%eax
08214887 +0x9fd:  mov    %eax,0x4(%esp)
0821488b +0xa01:  lea    -0x60(%ebp),%eax
0821488e +0xa04:  mov    %eax,(%esp)
08214891 +0xa07:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08214896 +0xa0c:  movl   $0x1,0x4(%esp)
0821489e +0xa14:  lea    -0x60(%ebp),%eax
082148a1 +0xa17:  mov    %eax,(%esp)
082148a4 +0xa1a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082148a9 +0xa1f:  lea    -0x60(%ebp),%eax
082148ac +0xa22:  mov    %eax,0x4(%esp)
082148b0 +0xa26:  mov    0xc(%ebp),%eax
082148b3 +0xa29:  mov    %eax,(%esp)
082148b6 +0xa2c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082148bb +0xa31:  mov    $0x0,%ebx
082148c0 +0xa36:  lea    -0x60(%ebp),%eax
082148c3 +0xa39:  mov    %eax,(%esp)
082148c6 +0xa3c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082148cb +0xa41:  jmp    08214b89 <+0xcff>
082148d0 +0xa46:  mov    %edx,%ebx
082148d2 +0xa48:  mov    %eax,%esi
082148d4 +0xa4a:  lea    -0x60(%ebp),%eax
082148d7 +0xa4d:  mov    %eax,(%esp)
082148da +0xa50:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082148df +0xa55:  mov    %esi,%eax
082148e1 +0xa57:  mov    %ebx,%edx
082148e3 +0xa59:  mov    %eax,(%esp)
082148e6 +0xa5c:  call   08ae3750 <_Unwind_Resume>
082148eb +0xa61:  lea    -0x54(%ebp),%eax
082148ee +0xa64:  mov    %eax,(%esp)
082148f1 +0xa67:  call   08237b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd220
082148f6 +0xa6c:  lea    -0x44(%ebp),%eax
082148f9 +0xa6f:  mov    -0x20(%ebp),%edx
082148fc +0xa72:  mov    %edx,0x4(%esp)
08214900 +0xa76:  mov    %eax,(%esp)
08214903 +0xa79:  call   08237b24 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd1ce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd1ce
08214908 +0xa7e:  sub    $0x4,%esp
0821490b +0xa81:  lea    -0x44(%ebp),%eax
0821490e +0xa84:  mov    %eax,0x4(%esp)
08214912 +0xa88:  lea    -0x54(%ebp),%eax
08214915 +0xa8b:  mov    %eax,(%esp)
08214918 +0xa8e:  call   08237b4a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd1f4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd1f4
0821491d +0xa93:  test   %al,%al
0821491f +0xa95:  jne    0821477e <+0x8f4>
08214925 +0xa9b:  movzwl -0xaf(%ebp),%eax
0821492c +0xaa2:  movzwl %ax,%ebx
0821492f +0xaa5:  movzbl -0xb0(%ebp),%eax
08214936 +0xaac:  movzbl %al,%eax
08214939 +0xaaf:  mov    %eax,(%esp)
0821493c +0xab2:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08214941 +0xab7:  mov    %ebx,0x8(%esp)
08214945 +0xabb:  mov    %eax,0x4(%esp)
08214949 +0xabf:  mov    0xc(%ebp),%eax
0821494c +0xac2:  mov    %eax,(%esp)
0821494f +0xac5:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08214954 +0xaca:  test   %al,%al
08214956 +0xacc:  je     08214985 <+0xafb>
08214958 +0xace:  movl   $0x0,0xc(%esp)
08214960 +0xad6:  movl   $0xd5,0x8(%esp)
08214968 +0xade:  movl   $0xba,0x4(%esp)
08214970 +0xae6:  mov    0xc(%ebp),%eax
08214973 +0xae9:  mov    %eax,(%esp)
08214976 +0xaec:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
0821497b +0xaf1:  mov    $0x0,%ebx
08214980 +0xaf6:  jmp    08214b89 <+0xcff>
08214985 +0xafb:  mov    -0xa5(%ebp),%eax
0821498b +0xb01:  cmp    $0xffffffff,%eax
0821498e +0xb04:  jl     0821499b <+0xb11>
08214990 +0xb06:  mov    -0xa1(%ebp),%eax
08214996 +0xb0c:  cmp    $0xffffffff,%eax
08214999 +0xb0f:  jge    082149c8 <+0xb3e>
0821499b +0xb11:  movl   $0x0,0xc(%esp)
082149a3 +0xb19:  movl   $0x98,0x8(%esp)
082149ab +0xb21:  movl   $0xba,0x4(%esp)
082149b3 +0xb29:  mov    0xc(%ebp),%eax
082149b6 +0xb2c:  mov    %eax,(%esp)
082149b9 +0xb2f:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
082149be +0xb34:  mov    $0x0,%ebx
082149c3 +0xb39:  jmp    08214b89 <+0xcff>
082149c8 +0xb3e:  mov    -0xa1(%ebp),%eax
082149ce +0xb44:  cmp    $0xffffffff,%eax
082149d1 +0xb47:  je     08214a10 <+0xb86>
082149d3 +0xb49:  mov    -0xa5(%ebp),%edx
082149d9 +0xb4f:  mov    -0xa1(%ebp),%eax
082149df +0xb55:  cmp    %eax,%edx
082149e1 +0xb57:  jl     08214a10 <+0xb86>
082149e3 +0xb59:  movl   $0x0,0xc(%esp)
082149eb +0xb61:  movl   $0x98,0x8(%esp)
082149f3 +0xb69:  movl   $0xba,0x4(%esp)
082149fb +0xb71:  mov    0xc(%ebp),%eax
082149fe +0xb74:  mov    %eax,(%esp)
08214a01 +0xb77:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214a06 +0xb7c:  mov    $0x0,%ebx
08214a0b +0xb81:  jmp    08214b89 <+0xcff>
08214a10 +0xb86:  mov    -0x50(%ebp),%eax
08214a13 +0xb89:  mov    %eax,%ebx
08214a15 +0xb8b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08214a1a +0xb90:  mov    %ebx,0x4(%esp)
08214a1e +0xb94:  mov    %eax,(%esp)
08214a21 +0xb97:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08214a26 +0xb9c:  mov    %eax,-0x18(%ebp)
08214a29 +0xb9f:  cmpl   $0x0,-0x18(%ebp)
08214a2d +0xba3:  jne    08214a5b <+0xbd1>
08214a2f +0xba5:  mov    -0x30(%ebp),%eax
08214a32 +0xba8:  mov    %eax,0xc(%esp)
08214a36 +0xbac:  movl   $0x91,0x8(%esp)
08214a3e +0xbb4:  movl   $0xba,0x4(%esp)
08214a46 +0xbbc:  mov    0xc(%ebp),%eax
08214a49 +0xbbf:  mov    %eax,(%esp)
08214a4c +0xbc2:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214a51 +0xbc7:  mov    $0x0,%ebx
08214a56 +0xbcc:  jmp    08214b89 <+0xcff>
08214a5b +0xbd1:  mov    -0x18(%ebp),%eax
08214a5e +0xbd4:  mov    %eax,(%esp)
08214a61 +0xbd7:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08214a66 +0xbdc:  test   %al,%al
08214a68 +0xbde:  je     08214ae4 <+0xc5a>
08214a6a +0xbe0:  mov    -0xa9(%ebp),%edx
08214a70 +0xbe6:  mov    -0xa5(%ebp),%eax
08214a76 +0xbec:  mov    %edx,0x4(%esp)
08214a7a +0xbf0:  mov    %eax,(%esp)
08214a7d +0xbf3:  call   08213e40 <_Z21IsValidMultiplyResultii>  ; IsValidMultiplyResult(int, int)
08214a82 +0xbf8:  xor    $0x1,%eax
08214a85 +0xbfb:  test   %al,%al
08214a87 +0xbfd:  jne    08214aa8 <+0xc1e>
08214a89 +0xbff:  mov    -0xa9(%ebp),%edx
08214a8f +0xc05:  mov    -0xa1(%ebp),%eax
08214a95 +0xc0b:  mov    %edx,0x4(%esp)
08214a99 +0xc0f:  mov    %eax,(%esp)
08214a9c +0xc12:  call   08213e40 <_Z21IsValidMultiplyResultii>  ; IsValidMultiplyResult(int, int)
08214aa1 +0xc17:  xor    $0x1,%eax
08214aa4 +0xc1a:  test   %al,%al
08214aa6 +0xc1c:  je     08214aaf <+0xc25>
08214aa8 +0xc1e:  mov    $0x1,%eax
08214aad +0xc23:  jmp    08214ab4 <+0xc2a>
08214aaf +0xc25:  mov    $0x0,%eax
08214ab4 +0xc2a:  test   %al,%al
08214ab6 +0xc2c:  je     08214ae4 <+0xc5a>
08214ab8 +0xc2e:  mov    -0x30(%ebp),%eax
08214abb +0xc31:  mov    %eax,0xc(%esp)
08214abf +0xc35:  movl   $0x98,0x8(%esp)
08214ac7 +0xc3d:  movl   $0xba,0x4(%esp)
08214acf +0xc45:  mov    0xc(%ebp),%eax
08214ad2 +0xc48:  mov    %eax,(%esp)
08214ad5 +0xc4b:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08214ada +0xc50:  mov    $0x0,%ebx
08214adf +0xc55:  jmp    08214b89 <+0xcff>
08214ae4 +0xc5a:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08214ae9 +0xc5f:  lea    -0xca(%ebp),%edx
08214aef +0xc65:  mov    %edx,0x4(%esp)
08214af3 +0xc69:  mov    %eax,(%esp)
08214af6 +0xc6c:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08214afb +0xc71:  movl   $0x0,-0xc(%ebp)
08214b02 +0xc78:  jmp    08214b79 <+0xcef>
08214b04 +0xc7a:  mov    -0xc(%ebp),%eax
08214b07 +0xc7d:  mov    &_ZL6gmList(,%eax,4),%eax
08214b0e +0xc84:  mov    %eax,%ebx
08214b10 +0xc86:  mov    0xc(%ebp),%eax
08214b13 +0xc89:  mov    %eax,(%esp)
08214b16 +0xc8c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214b1b +0xc91:  cmp    %eax,%ebx
08214b1d +0xc93:  sete   %al
08214b20 +0xc96:  test   %al,%al
08214b22 +0xc98:  je     08214b75 <+0xceb>
08214b24 +0xc9a:  mov    0xc(%ebp),%eax
08214b27 +0xc9d:  mov    %eax,(%esp)
08214b2a +0xca0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214b2f +0xca5:  mov    %eax,%ebx
08214b31 +0xca7:  movl   $0x0,0xc(%esp)
08214b39 +0xcaf:  movl   $0xc472,0x8(%esp)
08214b41 +0xcb7:  movl   $&_ZZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214b49 +0xcbf:  lea    -0x40(%ebp),%eax
08214b4c +0xcc2:  mov    %eax,(%esp)
08214b4f +0xcc5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08214b54 +0xcca:  mov    %ebx,0xc(%esp)
08214b58 +0xcce:  movl   $"REQ AuctionRegistItem",0x8(%esp)
08214b60 +0xcd6:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
08214b68 +0xcde:  lea    -0x40(%ebp),%eax
08214b6b +0xce1:  mov    %eax,(%esp)
08214b6e +0xce4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08214b73 +0xce9:  jmp    08214b84 <+0xcfa>
08214b75 +0xceb:  addl   $0x1,-0xc(%ebp)
08214b79 +0xcef:  cmpl   $0x4,-0xc(%ebp)
08214b7d +0xcf3:  setle  %al
08214b80 +0xcf6:  test   %al,%al
08214b82 +0xcf8:  jne    08214b04 <+0xc7a>
08214b84 +0xcfa:  mov    $0x0,%ebx
08214b89 +0xcff:  mov    %ebx,%eax
08214b8b +0xd01:  lea    -0x8(%ebp),%esp
08214b8e +0xd04:  add    $0x0,%esp
08214b91 +0xd07:  pop    %ebx
08214b92 +0xd08:  pop    %esi
08214b93 +0xd09:  pop    %ebp
08214b94 +0xd0a:  ret
08214b95 +0xd0b:  nop
```

## 反编译 C

```c
// Dispatcher_AuctionRegistItem::dispatch_sig @ 0x8213e8a

/* Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionRegistItem::dispatch_sig
          (Dispatcher_AuctionRegistItem *this,CUser *param_1,PacketBuf *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  CDataManager *pCVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA local_ce;
  short asStack_cd [8];
  undefined4 local_bc;
  undefined4 local_b8;
  uchar local_b4;
  ushort local_b3;
  uint local_b1;
  int local_ad;
  int local_a9;
  int local_a5;
  int iStack_a1;
  ROI_Category aRStack_9d [8];
  char acStack_95 [4];
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP local_91 [18];
  undefined4 local_7f;
  undefined4 local_7b;
  uchar uStack_77;
  ushort uStack_76;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  PacketGuard local_64 [12];
  __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
  local_58 [4];
  uint local_54;
  uint local_50;
  byte local_49;
  __normal_iterator local_48 [4];
  cMyTrace local_44 [16];
  uint local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_49);
  if (cVar2 == '\x01') {
    if (local_49 < 2) {
      local_34 = (uint)local_49;
      if ((local_34 == 1) &&
         (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar4 < 0x1f)) {
        CUser::SendCmdErrorPacket(param_1,0xba,0x75,local_34);
        local_30 = 0;
      }
      else {
        local_30 = CUser::AuctionPreCheck(param_1,0xba,local_34);
        if (local_30 < 0) {
          pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,5);
          if (cVar2 == '\0') {
            local_2c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x32)
            ;
            if (local_2c == 0) {
              if (local_34 == 1) {
                PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP::PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP(local_91)
                ;
                local_7f = CUser::GetUID(param_1);
                local_7b = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                cVar2 = PacketBuf::get_byte(param_2,&uStack_77);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc2fa,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_short(param_2,&uStack_76);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc2fc,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_50);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc302,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                local_74 = local_50;
                cVar2 = PacketBuf::get_int(param_2,&local_70);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc305,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_6c);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc306,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_68);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc307,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = IsPriceError(local_6c,local_68);
                if ((cVar2 == '\0') && (local_68 < 0x895441)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,local_34);
                  return 0;
                }
                if ((local_50 < 0x28d288) || (0x28d299 < local_50)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  return 0;
                }
                if (1 < local_70) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  return 0;
                }
                if (local_6c != -1) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  iVar4 = LineFunc(0xc322,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                if ((local_68 < 0x32) || (9000000 < local_68)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,local_34);
                  return 0;
                }
                CCeraAuctionServerProxy::SendPacket
                          (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_91);
              }
              else {
                PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA::PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA
                          (&local_ce);
                local_bc = CUser::GetUID(param_1);
                local_b8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                cVar2 = PacketBuf::get_byte(param_2,&local_b4);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc38a,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_short(param_2,&local_b3);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc38c,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_54);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc392,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                local_b1 = local_54;
                cVar2 = PacketBuf::get_int(param_2,&local_ad);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc395,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_a9);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc396,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_a5);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc397,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&iStack_a1);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc398,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                for (local_18 = 0; uVar1 = local_54, local_18 < 3; local_18 = local_18 + 1) {
                  cVar2 = PacketBuf::get_short(param_2,asStack_cd + local_18 + 0x18);
                  if (cVar2 != '\x01') {
                    iVar4 = LineFunc(0xc3a2,
                                     "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    return iVar4;
                  }
                  cVar2 = PacketBuf::get_byte(param_2,acStack_95 + local_18);
                  if (cVar2 != '\x01') {
                    iVar4 = LineFunc(0xc3a5,
                                     "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    return iVar4;
                  }
                }
                pCVar6 = (CDataManager *)G_CDataManager();
                local_28 = (int *)CDataManager::find_item(pCVar6,uVar1);
                if (local_28 == (int *)0x0) {
                  iVar4 = LineFunc(0xc3aa,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = (**(code **)(*local_28 + 0x4c))(local_28);
                if (cVar2 != '\0') {
                  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
                    if (asStack_cd[local_14 + 0x18] == 0) {
                      asStack_cd[local_14 + 0x18] = 30000;
                    }
                  }
                }
                ROI_Category::_sort(aRStack_9d);
                local_24 = G_CDataManager();
                local_24 = local_24 + 0x4e8;
                local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>::
                begin();
                while( true ) {
                  std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>::
                  end();
                  bVar3 = __gnu_cxx::operator!=(local_58,local_48);
                  if (!bVar3) break;
                  piVar7 = (int *)__gnu_cxx::
                                  __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                  ::operator->(local_58);
                  if ((*piVar7 == -1) ||
                     (puVar8 = (uint *)__gnu_cxx::
                                       __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                       ::operator->(local_58), *puVar8 == local_54)) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = __gnu_cxx::
                            __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                            ::operator->(local_58);
                    if ((*(uint *)(iVar4 + 4) < local_20) &&
                       (iVar4 = __gnu_cxx::
                                __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                ::operator->(local_58), local_20 < *(uint *)(iVar4 + 8))) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if (bVar3) {
                      PacketGuard::PacketGuard(local_64);
                    /* try { // try from 08214815 to 082148ba has its CatchHandler @ 082148d0 */
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0xba);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,7);
                      piVar7 = (int *)__gnu_cxx::
                                      __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                      ::operator->(local_58);
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,*piVar7);
                      iVar4 = __gnu_cxx::
                              __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                              ::operator->(local_58);
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_64,*(int *)(iVar4 + 4));
                      iVar4 = __gnu_cxx::
                              __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                              ::operator->(local_58);
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_64,*(int *)(iVar4 + 8));
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                      CUser::Send(param_1,local_64);
                      PacketGuard::~PacketGuard(local_64);
                      return 0;
                    }
                  }
                  __gnu_cxx::
                  __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                  ::operator++(local_58);
                }
                iVar4 = GetInvenTypeFromItemSpace(local_b4);
                cVar2 = CUser::CheckItemLock(param_1,iVar4,(uint)local_b3);
                if (cVar2 != '\0') {
                  CUser::SendCmdErrorPacket(param_1,0xba,0xd5,0);
                  return 0;
                }
                if ((local_a9 < -1) || (local_a5 < -1)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,0);
                  return 0;
                }
                if ((local_a5 != -1) && (local_a5 <= local_a9)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,0);
                  return 0;
                }
                pCVar6 = (CDataManager *)G_CDataManager();
                local_1c = (CItem *)CDataManager::find_item(pCVar6,local_54);
                if (local_1c == (CItem *)0x0) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  return 0;
                }
                cVar2 = CItem::is_stackable(local_1c);
                if (cVar2 != '\0') {
                  cVar2 = IsValidMultiplyResult(local_a9,local_ad);
                  if ((cVar2 == '\x01') &&
                     (cVar2 = IsValidMultiplyResult(local_a5,local_ad), cVar2 == '\x01')) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    CUser::SendCmdErrorPacket(param_1,0xba,0x98,local_34);
                    return 0;
                  }
                }
                CAuctionServerProxy::SendPacket
                          (GlobalData::s_auction_proxy,(PACKET_HEADER *)&local_ce);
              }
              for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
                iVar4 = *(int *)(gmList + local_10 * 4);
                iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                if (iVar4 == iVar9) {
                  uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_44,
                                     "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0xc472,0);
                  cMyTrace::operator()
                            (local_44,"Trace Auction Delay, %s(%d)","REQ AuctionRegistItem",uVar10);
                  break;
                }
              }
              local_30 = 0;
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xba,local_2c & 0xff,local_34);
              local_30 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xba,0xd1,local_34);
            local_30 = 0;
          }
        }
      }
    }
    else {
      local_30 = LineFunc(0xc297,
                          "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
    }
  }
  else {
    local_30 = LineFunc(0xc294,
                        "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                        ,0,0);
  }
  return local_30;
}
```
