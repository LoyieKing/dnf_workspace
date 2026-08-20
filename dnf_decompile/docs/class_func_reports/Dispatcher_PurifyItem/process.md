# process

`_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PurifyItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PurifyItem` | `0x08218cb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08218cb6  _ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PurifyItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x08218cb6, 0x082194b5]
08218cb6 +0x000:  push   %ebp
08218cb7 +0x001:  mov    %esp,%ebp
08218cb9 +0x003:  push   %esi
08218cba +0x004:  push   %ebx
08218cbb +0x005:  sub    $0x130,%esp
08218cc1 +0x00b:  mov    0xc(%ebp),%eax
08218cc4 +0x00e:  mov    %eax,(%esp)
08218cc7 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08218ccc +0x016:  cmp    $0x3,%eax
08218ccf +0x019:  setne  %al
08218cd2 +0x01c:  test   %al,%al
08218cd4 +0x01e:  je     08218d01 <+0x4b>
08218cd6 +0x020:  movl   $0x0,0xc(%esp)
08218cde +0x028:  movl   $0x0,0x8(%esp)
08218ce6 +0x030:  movl   $&_ZZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
08218cee +0x038:  movl   $0xcbcb,(%esp)
08218cf5 +0x03f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08218cfa +0x044:  mov    %eax,%ebx
08218cfc +0x046:  jmp    082194aa <+0x7f4>
08218d01 +0x04b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08218d06 +0x050:  mov    %eax,(%esp)
08218d09 +0x053:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08218d0e +0x058:  cmp    $0x7,%eax
08218d11 +0x05b:  sete   %al
08218d14 +0x05e:  test   %al,%al
08218d16 +0x060:  je     08218d3d <+0x87>
08218d18 +0x062:  movl   $0x11,0x8(%esp)
08218d20 +0x06a:  movl   $0xcf,0x4(%esp)
08218d28 +0x072:  mov    0xc(%ebp),%eax
08218d2b +0x075:  mov    %eax,(%esp)
08218d2e +0x078:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08218d33 +0x07d:  mov    $0x0,%ebx
08218d38 +0x082:  jmp    082194aa <+0x7f4>
08218d3d +0x087:  mov    0x10(%ebp),%eax
08218d40 +0x08a:  mov    %eax,-0x14(%ebp)
08218d43 +0x08d:  mov    -0x14(%ebp),%eax
08218d46 +0x090:  movzwl 0xd(%eax),%eax
08218d4a +0x094:  movzwl %ax,%eax
08218d4d +0x097:  mov    %eax,0x8(%esp)
08218d51 +0x09b:  movl   $0x1,0x4(%esp)
08218d59 +0x0a3:  mov    0xc(%ebp),%eax
08218d5c +0x0a6:  mov    %eax,(%esp)
08218d5f +0x0a9:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08218d64 +0x0ae:  test   %al,%al
08218d66 +0x0b0:  je     08218d8d <+0xd7>
08218d68 +0x0b2:  movl   $0xd5,0x8(%esp)
08218d70 +0x0ba:  movl   $0xcf,0x4(%esp)
08218d78 +0x0c2:  mov    0xc(%ebp),%eax
08218d7b +0x0c5:  mov    %eax,(%esp)
08218d7e +0x0c8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08218d83 +0x0cd:  mov    $0x0,%ebx
08218d88 +0x0d2:  jmp    082194aa <+0x7f4>
08218d8d +0x0d7:  lea    -0x5d(%ebp),%eax
08218d90 +0x0da:  mov    %eax,(%esp)
08218d93 +0x0dd:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08218d98 +0x0e2:  lea    -0x9a(%ebp),%eax
08218d9e +0x0e8:  mov    %eax,(%esp)
08218da1 +0x0eb:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08218da6 +0x0f0:  mov    -0x14(%ebp),%eax
08218da9 +0x0f3:  mov    0x15(%eax),%eax
08218dac +0x0f6:  mov    %eax,%edx
08218dae +0x0f8:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08218db3 +0x0fd:  mov    %edx,0x4(%esp)
08218db7 +0x101:  mov    %eax,(%esp)
08218dba +0x104:  call   08234d20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa3ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa3ca
08218dbf +0x109:  mov    %eax,-0x10(%ebp)
08218dc2 +0x10c:  cmpl   $0xffffffff,-0x10(%ebp)
08218dc6 +0x110:  jne    08218df4 <+0x13e>
08218dc8 +0x112:  movl   $0x4,(%esp)
08218dcf +0x119:  call   08725800 <__cxa_allocate_exception>
08218dd4 +0x11e:  mov    %eax,%edx
08218dd6 +0x120:  movl   $0x11,(%edx)
08218ddc +0x126:  movl   $0x0,0x8(%esp)
08218de4 +0x12e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218dec +0x136:  mov    %eax,(%esp)
08218def +0x139:  call   08724c50 <__cxa_throw>
08218df4 +0x13e:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08218df9 +0x143:  mov    -0x10(%ebp),%edx
08218dfc +0x146:  mov    %edx,0x4(%esp)
08218e00 +0x14a:  mov    %eax,(%esp)
08218e03 +0x14d:  call   08234cd4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa37e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa37e
08218e08 +0x152:  mov    -0x14(%ebp),%edx
08218e0b +0x155:  mov    0x15(%edx),%edx
08218e0e +0x158:  cmp    %edx,%eax
08218e10 +0x15a:  setne  %al
08218e13 +0x15d:  test   %al,%al
08218e15 +0x15f:  je     08218e43 <+0x18d>
08218e17 +0x161:  movl   $0x4,(%esp)
08218e1e +0x168:  call   08725800 <__cxa_allocate_exception>
08218e23 +0x16d:  mov    %eax,%edx
08218e25 +0x16f:  movl   $0x11,(%edx)
08218e2b +0x175:  movl   $0x0,0x8(%esp)
08218e33 +0x17d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218e3b +0x185:  mov    %eax,(%esp)
08218e3e +0x188:  call   08724c50 <__cxa_throw>
08218e43 +0x18d:  mov    -0x14(%ebp),%eax
08218e46 +0x190:  movzwl 0xd(%eax),%eax
08218e4a +0x194:  movzwl %ax,%ebx
08218e4d +0x197:  mov    0xc(%ebp),%eax
08218e50 +0x19a:  mov    %eax,(%esp)
08218e53 +0x19d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08218e58 +0x1a2:  lea    -0xe8(%ebp),%edx
08218e5e +0x1a8:  mov    %ebx,0xc(%esp)
08218e62 +0x1ac:  movl   $0x1,0x8(%esp)
08218e6a +0x1b4:  mov    %eax,0x4(%esp)
08218e6e +0x1b8:  mov    %edx,(%esp)
08218e71 +0x1bb:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08218e76 +0x1c0:  sub    $0x4,%esp
08218e79 +0x1c3:  mov    -0xe8(%ebp),%eax
08218e7f +0x1c9:  mov    %eax,-0x5d(%ebp)
08218e82 +0x1cc:  mov    -0xe4(%ebp),%eax
08218e88 +0x1d2:  mov    %eax,-0x59(%ebp)
08218e8b +0x1d5:  mov    -0xe0(%ebp),%eax
08218e91 +0x1db:  mov    %eax,-0x55(%ebp)
08218e94 +0x1de:  mov    -0xdc(%ebp),%eax
08218e9a +0x1e4:  mov    %eax,-0x51(%ebp)
08218e9d +0x1e7:  mov    -0xd8(%ebp),%eax
08218ea3 +0x1ed:  mov    %eax,-0x4d(%ebp)
08218ea6 +0x1f0:  mov    -0xd4(%ebp),%eax
08218eac +0x1f6:  mov    %eax,-0x49(%ebp)
08218eaf +0x1f9:  mov    -0xd0(%ebp),%eax
08218eb5 +0x1ff:  mov    %eax,-0x45(%ebp)
08218eb8 +0x202:  mov    -0xcc(%ebp),%eax
08218ebe +0x208:  mov    %eax,-0x41(%ebp)
08218ec1 +0x20b:  mov    -0xc8(%ebp),%eax
08218ec7 +0x211:  mov    %eax,-0x3d(%ebp)
08218eca +0x214:  mov    -0xc4(%ebp),%eax
08218ed0 +0x21a:  mov    %eax,-0x39(%ebp)
08218ed3 +0x21d:  mov    -0xc0(%ebp),%eax
08218ed9 +0x223:  mov    %eax,-0x35(%ebp)
08218edc +0x226:  mov    -0xbc(%ebp),%eax
08218ee2 +0x22c:  mov    %eax,-0x31(%ebp)
08218ee5 +0x22f:  mov    -0xb8(%ebp),%eax
08218eeb +0x235:  mov    %eax,-0x2d(%ebp)
08218eee +0x238:  mov    -0xb4(%ebp),%eax
08218ef4 +0x23e:  mov    %eax,-0x29(%ebp)
08218ef7 +0x241:  mov    -0xb0(%ebp),%eax
08218efd +0x247:  mov    %eax,-0x25(%ebp)
08218f00 +0x24a:  movzbl -0xac(%ebp),%eax
08218f07 +0x251:  mov    %al,-0x21(%ebp)
08218f0a +0x254:  mov    -0x5b(%ebp),%edx
08218f0d +0x257:  mov    -0x14(%ebp),%eax
08218f10 +0x25a:  mov    0xf(%eax),%eax
08218f13 +0x25d:  cmp    %eax,%edx
08218f15 +0x25f:  je     08218f43 <+0x28d>
08218f17 +0x261:  movl   $0x4,(%esp)
08218f1e +0x268:  call   08725800 <__cxa_allocate_exception>
08218f23 +0x26d:  mov    %eax,%edx
08218f25 +0x26f:  movl   $0x11,(%edx)
08218f2b +0x275:  movl   $0x0,0x8(%esp)
08218f33 +0x27d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218f3b +0x285:  mov    %eax,(%esp)
08218f3e +0x288:  call   08724c50 <__cxa_throw>
08218f43 +0x28d:  lea    -0x5d(%ebp),%eax
08218f46 +0x290:  add    $0x11,%eax
08218f49 +0x293:  mov    %eax,(%esp)
08218f4c +0x296:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
08218f51 +0x29b:  test   %al,%al
08218f53 +0x29d:  je     08218f81 <+0x2cb>
08218f55 +0x29f:  movl   $0x4,(%esp)
08218f5c +0x2a6:  call   08725800 <__cxa_allocate_exception>
08218f61 +0x2ab:  mov    %eax,%edx
08218f63 +0x2ad:  movl   $0x17,(%edx)
08218f69 +0x2b3:  movl   $0x0,0x8(%esp)
08218f71 +0x2bb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08218f79 +0x2c3:  mov    %eax,(%esp)
08218f7c +0x2c6:  call   08724c50 <__cxa_throw>
08218f81 +0x2cb:  mov    -0x14(%ebp),%eax
08218f84 +0x2ce:  movzwl 0x13(%eax),%eax
08218f88 +0x2d2:  movzwl %ax,%ebx
08218f8b +0x2d5:  mov    0xc(%ebp),%eax
08218f8e +0x2d8:  mov    %eax,(%esp)
08218f91 +0x2db:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08218f96 +0x2e0:  lea    -0xe8(%ebp),%edx
08218f9c +0x2e6:  mov    %ebx,0xc(%esp)
08218fa0 +0x2ea:  movl   $0x1,0x8(%esp)
08218fa8 +0x2f2:  mov    %eax,0x4(%esp)
08218fac +0x2f6:  mov    %edx,(%esp)
08218faf +0x2f9:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08218fb4 +0x2fe:  sub    $0x4,%esp
08218fb7 +0x301:  mov    -0xe8(%ebp),%eax
08218fbd +0x307:  mov    %eax,-0x9a(%ebp)
08218fc3 +0x30d:  mov    -0xe4(%ebp),%eax
08218fc9 +0x313:  mov    %eax,-0x96(%ebp)
08218fcf +0x319:  mov    -0xe0(%ebp),%eax
08218fd5 +0x31f:  mov    %eax,-0x92(%ebp)
08218fdb +0x325:  mov    -0xdc(%ebp),%eax
08218fe1 +0x32b:  mov    %eax,-0x8e(%ebp)
08218fe7 +0x331:  mov    -0xd8(%ebp),%eax
08218fed +0x337:  mov    %eax,-0x8a(%ebp)
08218ff3 +0x33d:  mov    -0xd4(%ebp),%eax
08218ff9 +0x343:  mov    %eax,-0x86(%ebp)
08218fff +0x349:  mov    -0xd0(%ebp),%eax
08219005 +0x34f:  mov    %eax,-0x82(%ebp)
0821900b +0x355:  mov    -0xcc(%ebp),%eax
08219011 +0x35b:  mov    %eax,-0x7e(%ebp)
08219014 +0x35e:  mov    -0xc8(%ebp),%eax
0821901a +0x364:  mov    %eax,-0x7a(%ebp)
0821901d +0x367:  mov    -0xc4(%ebp),%eax
08219023 +0x36d:  mov    %eax,-0x76(%ebp)
08219026 +0x370:  mov    -0xc0(%ebp),%eax
0821902c +0x376:  mov    %eax,-0x72(%ebp)
0821902f +0x379:  mov    -0xbc(%ebp),%eax
08219035 +0x37f:  mov    %eax,-0x6e(%ebp)
08219038 +0x382:  mov    -0xb8(%ebp),%eax
0821903e +0x388:  mov    %eax,-0x6a(%ebp)
08219041 +0x38b:  mov    -0xb4(%ebp),%eax
08219047 +0x391:  mov    %eax,-0x66(%ebp)
0821904a +0x394:  mov    -0xb0(%ebp),%eax
08219050 +0x39a:  mov    %eax,-0x62(%ebp)
08219053 +0x39d:  movzbl -0xac(%ebp),%eax
0821905a +0x3a4:  mov    %al,-0x5e(%ebp)
0821905d +0x3a7:  mov    -0x98(%ebp),%edx
08219063 +0x3ad:  mov    -0x14(%ebp),%eax
08219066 +0x3b0:  mov    0x15(%eax),%eax
08219069 +0x3b3:  cmp    %eax,%edx
0821906b +0x3b5:  jne    0821908b <+0x3d5>
0821906d +0x3b7:  mov    -0x93(%ebp),%ebx
08219073 +0x3bd:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08219078 +0x3c2:  mov    -0x10(%ebp),%edx
0821907b +0x3c5:  mov    %edx,0x4(%esp)
0821907f +0x3c9:  mov    %eax,(%esp)
08219082 +0x3cc:  call   08234cfa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa3a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa3a4
08219087 +0x3d1:  cmp    %eax,%ebx
08219089 +0x3d3:  jge    08219092 <+0x3dc>
0821908b +0x3d5:  mov    $0x1,%eax
08219090 +0x3da:  jmp    08219097 <+0x3e1>
08219092 +0x3dc:  mov    $0x0,%eax
08219097 +0x3e1:  test   %al,%al
08219099 +0x3e3:  je     082190c7 <+0x411>
0821909b +0x3e5:  movl   $0x4,(%esp)
082190a2 +0x3ec:  call   08725800 <__cxa_allocate_exception>
082190a7 +0x3f1:  mov    %eax,%edx
082190a9 +0x3f3:  movl   $0x11,(%edx)
082190af +0x3f9:  movl   $0x0,0x8(%esp)
082190b7 +0x401:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082190bf +0x409:  mov    %eax,(%esp)
082190c2 +0x40c:  call   08724c50 <__cxa_throw>
082190c7 +0x411:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
082190cc +0x416:  mov    -0x10(%ebp),%edx
082190cf +0x419:  mov    %edx,0x4(%esp)
082190d3 +0x41d:  mov    %eax,(%esp)
082190d6 +0x420:  call   08234cfa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa3a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa3a4
082190db +0x425:  mov    %eax,%esi
082190dd +0x427:  mov    -0x14(%ebp),%eax
082190e0 +0x42a:  movzwl 0x13(%eax),%eax
082190e4 +0x42e:  movzwl %ax,%ebx
082190e7 +0x431:  mov    0xc(%ebp),%eax
082190ea +0x434:  mov    %eax,(%esp)
082190ed +0x437:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082190f2 +0x43c:  movl   $0x1,0x14(%esp)
082190fa +0x444:  movl   $0x3,0x10(%esp)
08219102 +0x44c:  mov    %esi,0xc(%esp)
08219106 +0x450:  mov    %ebx,0x8(%esp)
0821910a +0x454:  movl   $0x1,0x4(%esp)
08219112 +0x45c:  mov    %eax,(%esp)
08219115 +0x45f:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0821911a +0x464:  xor    $0x1,%eax
0821911d +0x467:  test   %al,%al
0821911f +0x469:  je     0821914d <+0x497>
08219121 +0x46b:  movl   $0x4,(%esp)
08219128 +0x472:  call   08725800 <__cxa_allocate_exception>
0821912d +0x477:  mov    %eax,%edx
0821912f +0x479:  movl   $0x16,(%edx)
08219135 +0x47f:  movl   $0x0,0x8(%esp)
0821913d +0x487:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219145 +0x48f:  mov    %eax,(%esp)
08219148 +0x492:  call   08724c50 <__cxa_throw>
0821914d +0x497:  lea    -0x5d(%ebp),%eax
08219150 +0x49a:  mov    %eax,0x8(%esp)
08219154 +0x49e:  mov    -0x10(%ebp),%eax
08219157 +0x4a1:  mov    %eax,0x4(%esp)
0821915b +0x4a5:  mov    0x8(%ebp),%eax
0821915e +0x4a8:  mov    %eax,(%esp)
08219161 +0x4ab:  call   082194b6 <_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item>  ; Dispatcher_PurifyItem::processPurifyType(int, Inven_Item&)
08219166 +0x4b0:  xor    $0x1,%eax
08219169 +0x4b3:  test   %al,%al
0821916b +0x4b5:  je     08219199 <+0x4e3>
0821916d +0x4b7:  movl   $0x4,(%esp)
08219174 +0x4be:  call   08725800 <__cxa_allocate_exception>
08219179 +0x4c3:  mov    %eax,%edx
0821917b +0x4c5:  movl   $0x16,(%edx)
08219181 +0x4cb:  movl   $0x0,0x8(%esp)
08219189 +0x4d3:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219191 +0x4db:  mov    %eax,(%esp)
08219194 +0x4de:  call   08724c50 <__cxa_throw>
08219199 +0x4e3:  mov    -0x5b(%ebp),%eax
0821919c +0x4e6:  mov    %eax,%edx
0821919e +0x4e8:  mov    -0x98(%ebp),%eax
082191a4 +0x4ee:  mov    0xc(%ebp),%ecx
082191a7 +0x4f1:  add    $0x79700,%ecx
082191ad +0x4f7:  movl   $0x2,0xc(%esp)
082191b5 +0x4ff:  mov    %edx,0x8(%esp)
082191b9 +0x503:  mov    %eax,0x4(%esp)
082191bd +0x507:  mov    %ecx,(%esp)
082191c0 +0x50a:  call   08686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>  ; cUserHistoryLog::apply_Item(int, int, eApplyItemReason)
082191c5 +0x50f:  jmp    08219222 <+0x56c>
082191c7 +0x511:  cmp    $0x1,%edx
082191ca +0x514:  je     082191d4 <+0x51e>
082191cc +0x516:  mov    %eax,(%esp)
082191cf +0x519:  call   08ae3750 <_Unwind_Resume>
082191d4 +0x51e:  mov    %eax,(%esp)
082191d7 +0x521:  call   08725ce0 <__cxa_begin_catch>
082191dc +0x526:  mov    (%eax),%eax
082191de +0x528:  mov    %eax,-0xc(%ebp)
082191e1 +0x52b:  mov    -0xc(%ebp),%eax
082191e4 +0x52e:  movzbl %al,%eax
082191e7 +0x531:  mov    %eax,0x8(%esp)
082191eb +0x535:  movl   $0xcf,0x4(%esp)
082191f3 +0x53d:  mov    0xc(%ebp),%eax
082191f6 +0x540:  mov    %eax,(%esp)
082191f9 +0x543:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082191fe +0x548:  mov    $0x0,%ebx
08219203 +0x54d:  call   08725c30 <__cxa_end_catch>
08219208 +0x552:  jmp    082194aa <+0x7f4>
0821920d +0x557:  mov    %edx,%ebx
0821920f +0x559:  mov    %eax,%esi
08219211 +0x55b:  call   08725c30 <__cxa_end_catch>
08219216 +0x560:  mov    %esi,%eax
08219218 +0x562:  mov    %ebx,%edx
0821921a +0x564:  mov    %eax,(%esp)
0821921d +0x567:  call   08ae3750 <_Unwind_Resume>
08219222 +0x56c:  mov    -0x14(%ebp),%eax
08219225 +0x56f:  movzwl 0xd(%eax),%eax
08219229 +0x573:  movzwl %ax,%ebx
0821922c +0x576:  mov    0xc(%ebp),%eax
0821922f +0x579:  mov    %eax,(%esp)
08219232 +0x57c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08219237 +0x581:  mov    -0x5d(%ebp),%edx
0821923a +0x584:  mov    %edx,0xc(%esp)
0821923e +0x588:  mov    -0x59(%ebp),%edx
08219241 +0x58b:  mov    %edx,0x10(%esp)
08219245 +0x58f:  mov    -0x55(%ebp),%edx
08219248 +0x592:  mov    %edx,0x14(%esp)
0821924c +0x596:  mov    -0x51(%ebp),%edx
0821924f +0x599:  mov    %edx,0x18(%esp)
08219253 +0x59d:  mov    -0x4d(%ebp),%edx
08219256 +0x5a0:  mov    %edx,0x1c(%esp)
0821925a +0x5a4:  mov    -0x49(%ebp),%edx
0821925d +0x5a7:  mov    %edx,0x20(%esp)
08219261 +0x5ab:  mov    -0x45(%ebp),%edx
08219264 +0x5ae:  mov    %edx,0x24(%esp)
08219268 +0x5b2:  mov    -0x41(%ebp),%edx
0821926b +0x5b5:  mov    %edx,0x28(%esp)
0821926f +0x5b9:  mov    -0x3d(%ebp),%edx
08219272 +0x5bc:  mov    %edx,0x2c(%esp)
08219276 +0x5c0:  mov    -0x39(%ebp),%edx
08219279 +0x5c3:  mov    %edx,0x30(%esp)
0821927d +0x5c7:  mov    -0x35(%ebp),%edx
08219280 +0x5ca:  mov    %edx,0x34(%esp)
08219284 +0x5ce:  mov    -0x31(%ebp),%edx
08219287 +0x5d1:  mov    %edx,0x38(%esp)
0821928b +0x5d5:  mov    -0x2d(%ebp),%edx
0821928e +0x5d8:  mov    %edx,0x3c(%esp)
08219292 +0x5dc:  mov    -0x29(%ebp),%edx
08219295 +0x5df:  mov    %edx,0x40(%esp)
08219299 +0x5e3:  mov    -0x25(%ebp),%edx
0821929c +0x5e6:  mov    %edx,0x44(%esp)
082192a0 +0x5ea:  movzbl -0x21(%ebp),%edx
082192a4 +0x5ee:  mov    %dl,0x48(%esp)
082192a8 +0x5f2:  mov    %ebx,0x8(%esp)
082192ac +0x5f6:  movl   $0x1,0x4(%esp)
082192b4 +0x5fe:  mov    %eax,(%esp)
082192b7 +0x601:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
082192bc +0x606:  mov    -0x14(%ebp),%eax
082192bf +0x609:  movzwl 0x13(%eax),%eax
082192c3 +0x60d:  movzwl %ax,%ebx
082192c6 +0x610:  mov    0xc(%ebp),%eax
082192c9 +0x613:  mov    %eax,(%esp)
082192cc +0x616:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082192d1 +0x61b:  lea    -0xe8(%ebp),%edx
082192d7 +0x621:  mov    %ebx,0xc(%esp)
082192db +0x625:  movl   $0x1,0x8(%esp)
082192e3 +0x62d:  mov    %eax,0x4(%esp)
082192e7 +0x631:  mov    %edx,(%esp)
082192ea +0x634:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082192ef +0x639:  sub    $0x4,%esp
082192f2 +0x63c:  mov    -0xe8(%ebp),%eax
082192f8 +0x642:  mov    %eax,-0x9a(%ebp)
082192fe +0x648:  mov    -0xe4(%ebp),%eax
08219304 +0x64e:  mov    %eax,-0x96(%ebp)
0821930a +0x654:  mov    -0xe0(%ebp),%eax
08219310 +0x65a:  mov    %eax,-0x92(%ebp)
08219316 +0x660:  mov    -0xdc(%ebp),%eax
0821931c +0x666:  mov    %eax,-0x8e(%ebp)
08219322 +0x66c:  mov    -0xd8(%ebp),%eax
08219328 +0x672:  mov    %eax,-0x8a(%ebp)
0821932e +0x678:  mov    -0xd4(%ebp),%eax
08219334 +0x67e:  mov    %eax,-0x86(%ebp)
0821933a +0x684:  mov    -0xd0(%ebp),%eax
08219340 +0x68a:  mov    %eax,-0x82(%ebp)
08219346 +0x690:  mov    -0xcc(%ebp),%eax
0821934c +0x696:  mov    %eax,-0x7e(%ebp)
0821934f +0x699:  mov    -0xc8(%ebp),%eax
08219355 +0x69f:  mov    %eax,-0x7a(%ebp)
08219358 +0x6a2:  mov    -0xc4(%ebp),%eax
0821935e +0x6a8:  mov    %eax,-0x76(%ebp)
08219361 +0x6ab:  mov    -0xc0(%ebp),%eax
08219367 +0x6b1:  mov    %eax,-0x72(%ebp)
0821936a +0x6b4:  mov    -0xbc(%ebp),%eax
08219370 +0x6ba:  mov    %eax,-0x6e(%ebp)
08219373 +0x6bd:  mov    -0xb8(%ebp),%eax
08219379 +0x6c3:  mov    %eax,-0x6a(%ebp)
0821937c +0x6c6:  mov    -0xb4(%ebp),%eax
08219382 +0x6cc:  mov    %eax,-0x66(%ebp)
08219385 +0x6cf:  mov    -0xb0(%ebp),%eax
0821938b +0x6d5:  mov    %eax,-0x62(%ebp)
0821938e +0x6d8:  movzbl -0xac(%ebp),%eax
08219395 +0x6df:  mov    %al,-0x5e(%ebp)
08219398 +0x6e2:  lea    -0x20(%ebp),%eax
0821939b +0x6e5:  mov    %eax,(%esp)
0821939e +0x6e8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082193a3 +0x6ed:  movl   $0xcf,0x8(%esp)
082193ab +0x6f5:  movl   $0x1,0x4(%esp)
082193b3 +0x6fd:  lea    -0x20(%ebp),%eax
082193b6 +0x700:  mov    %eax,(%esp)
082193b9 +0x703:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082193be +0x708:  movl   $0x1,0x4(%esp)
082193c6 +0x710:  lea    -0x20(%ebp),%eax
082193c9 +0x713:  mov    %eax,(%esp)
082193cc +0x716:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082193d1 +0x71b:  mov    -0x14(%ebp),%eax
082193d4 +0x71e:  movzwl 0x13(%eax),%eax
082193d8 +0x722:  movzwl %ax,%eax
082193db +0x725:  mov    %eax,0x4(%esp)
082193df +0x729:  lea    -0x20(%ebp),%eax
082193e2 +0x72c:  mov    %eax,(%esp)
082193e5 +0x72f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082193ea +0x734:  mov    -0x93(%ebp),%eax
082193f0 +0x73a:  mov    %eax,0x4(%esp)
082193f4 +0x73e:  lea    -0x20(%ebp),%eax
082193f7 +0x741:  mov    %eax,(%esp)
082193fa +0x744:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082193ff +0x749:  mov    -0x14(%ebp),%eax
08219402 +0x74c:  movzwl 0xd(%eax),%eax
08219406 +0x750:  movzwl %ax,%eax
08219409 +0x753:  mov    %eax,0x4(%esp)
0821940d +0x757:  lea    -0x20(%ebp),%eax
08219410 +0x75a:  mov    %eax,(%esp)
08219413 +0x75d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08219418 +0x762:  lea    -0x5d(%ebp),%eax
0821941b +0x765:  add    $0x11,%eax
0821941e +0x768:  mov    %eax,(%esp)
08219421 +0x76b:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08219426 +0x770:  movzbl %al,%eax
08219429 +0x773:  mov    %eax,0x4(%esp)
0821942d +0x777:  lea    -0x20(%ebp),%eax
08219430 +0x77a:  mov    %eax,(%esp)
08219433 +0x77d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08219438 +0x782:  lea    -0x5d(%ebp),%eax
0821943b +0x785:  add    $0x11,%eax
0821943e +0x788:  mov    %eax,(%esp)
08219441 +0x78b:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08219446 +0x790:  movzwl %ax,%eax
08219449 +0x793:  mov    %eax,0x4(%esp)
0821944d +0x797:  lea    -0x20(%ebp),%eax
08219450 +0x79a:  mov    %eax,(%esp)
08219453 +0x79d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08219458 +0x7a2:  movl   $0x1,0x4(%esp)
08219460 +0x7aa:  lea    -0x20(%ebp),%eax
08219463 +0x7ad:  mov    %eax,(%esp)
08219466 +0x7b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821946b +0x7b5:  lea    -0x20(%ebp),%eax
0821946e +0x7b8:  mov    %eax,0x4(%esp)
08219472 +0x7bc:  mov    0xc(%ebp),%eax
08219475 +0x7bf:  mov    %eax,(%esp)
08219478 +0x7c2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821947d +0x7c7:  mov    $0x0,%ebx
08219482 +0x7cc:  lea    -0x20(%ebp),%eax
08219485 +0x7cf:  mov    %eax,(%esp)
08219488 +0x7d2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821948d +0x7d7:  jmp    082194aa <+0x7f4>
0821948f +0x7d9:  mov    %edx,%ebx
08219491 +0x7db:  mov    %eax,%esi
08219493 +0x7dd:  lea    -0x20(%ebp),%eax
08219496 +0x7e0:  mov    %eax,(%esp)
08219499 +0x7e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821949e +0x7e8:  mov    %esi,%eax
082194a0 +0x7ea:  mov    %ebx,%edx
082194a2 +0x7ec:  mov    %eax,(%esp)
082194a5 +0x7ef:  call   08ae3750 <_Unwind_Resume>
082194aa +0x7f4:  mov    %ebx,%eax
082194ac +0x7f6:  lea    -0x8(%ebp),%esp
082194af +0x7f9:  add    $0x0,%esp
082194b2 +0x7fc:  pop    %ebx
082194b3 +0x7fd:  pop    %esi
082194b4 +0x7fe:  pop    %ebp
082194b5 +0x7ff:  ret
```

## 反编译 C

```c
// Dispatcher_PurifyItem::process @ 0x8218cb6

/* Dispatcher_PurifyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_PurifyItem::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  GameWorld *this;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  CInventory *pCVar9;
  uint uVar10;
  undefined1 local_ec [8];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined2 local_9e;
  undefined2 uStack_9c;
  undefined2 local_9a;
  undefined1 uStack_98;
  int iStack_97;
  undefined1 uStack_93;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined1 local_62;
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  PacketGuard local_24 [12];
  ParamBase *local_18;
  int local_14;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 != 3) {
    uVar5 = LineFunc(0xcbcb,
                     "virtual int Dispatcher_PurifyItem::process(CUser*, MSG_BASE&, ParamBase&)",0,0
                    );
    return uVar5;
  }
  this = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(this);
  if (iVar4 == 7) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xcf,0x11);
    return 0;
  }
  local_18 = param_3;
  cVar3 = CUser::CheckItemLock((CUser *)param_2,1,(uint)*(ushort *)(param_3 + 0xd));
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xcf,0xd5);
    return 0;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_61);
  Inven_Item::Inven_Item((Inven_Item *)&local_9e);
  local_14 = CItemAmplifier::getPurifyMaterialType
                       (GlobalData::s_itemAmplifier_,*(int *)(local_18 + 0x15));
  if (local_14 == -1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08218def to 082191c4 has its CatchHandler @ 082191c7 */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItemAmplifier::getPurifyMaterialItemIdx(GlobalData::s_itemAmplifier_,local_14);
  if (iVar4 != *(int *)(local_18 + 0x15)) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = (uint)*(ushort *)(local_18 + 0xd);
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_ec,iVar4);
  local_61 = (undefined2)local_ec._0_4_;
  uStack_5f = SUB42(local_ec._0_4_,2);
  local_5d = (undefined2)local_ec._4_4_;
  uStack_5b = SUB42(local_ec._4_4_,2);
  local_59 = local_e4;
  local_55 = local_e0;
  local_51 = local_dc;
  local_4d = local_d8;
  local_49 = local_d4;
  local_45 = local_d0;
  local_41 = local_cc;
  local_3d = local_c8;
  local_39 = local_c4;
  local_35 = local_c0;
  local_31 = local_bc;
  local_2d = local_b8;
  local_29 = local_b4;
  local_25 = local_b0;
  if (CONCAT22(local_5d,uStack_5f) != *(int *)(local_18 + 0xf)) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar10);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)((int)&local_51 + 1));
  if (cVar3 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar10);
    *puVar6 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = (uint)*(ushort *)(local_18 + 0x13);
  iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_ec,iVar7);
  local_9e = (undefined2)local_ec._0_4_;
  uStack_9c = SUB42(local_ec._0_4_,2);
  local_9a = (undefined2)local_ec._4_4_;
  uStack_98 = SUB41(local_ec._4_4_,2);
  iStack_97._1_3_ = (undefined3)local_e4;
  iVar4 = CONCAT31(iStack_97._1_3_,SUB41(local_ec._4_4_,3));
  uStack_93 = (undefined1)((uint)local_e4 >> 0x18);
  local_92 = local_e0;
  local_8e = local_dc;
  local_8a = local_d8;
  local_86 = local_d4;
  local_82 = local_d0;
  local_7e = local_cc;
  local_7a = local_c8;
  local_76 = local_c4;
  local_72 = local_c0;
  local_6e = local_bc;
  local_6a = local_b8;
  local_66 = local_b4;
  local_62 = local_b0;
  iStack_97 = iVar4;
  if ((CONCAT22(local_9a,uStack_9c) == *(int *)(local_18 + 0x15)) &&
     (iVar7 = local_14,
     iVar8 = CItemAmplifier::getPurifyMaterialItemCount(GlobalData::s_itemAmplifier_,local_14),
     iVar8 <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    uVar5 = CItemAmplifier::getPurifyMaterialItemCount(GlobalData::s_itemAmplifier_,local_14);
    uVar1 = *(undefined2 *)(local_18 + 0x13);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    cVar3 = CInventory::delete_item(pCVar9,1,uVar1,uVar5,3,1);
    if (cVar3 != '\x01') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar3 = processPurifyType((Dispatcher_PurifyItem *)param_1,local_14,(Inven_Item *)&local_61);
    if (cVar3 == '\x01') {
      cUserHistoryLog::apply_Item
                ((cUserHistoryLog *)(param_2 + 0x79700),CONCAT22(local_9a,uStack_9c),
                 CONCAT22(local_5d,uStack_5f),2);
      uVar1 = *(undefined2 *)(local_18 + 0xd);
      uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::update_item
                (uVar5,1,uVar1,CONCAT22(uStack_5f,local_61),CONCAT22(uStack_5b,local_5d),local_59,
                 local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,local_39,local_35,
                 local_31,local_2d,local_29,local_25);
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::GetInvenSlot((int)local_ec,iVar4);
      local_9e = (undefined2)local_ec._0_4_;
      uStack_9c = SUB42(local_ec._0_4_,2);
      local_9a = (undefined2)local_ec._4_4_;
      uStack_98 = SUB41(local_ec._4_4_,2);
      iStack_97._1_3_ = (undefined3)local_e4;
      iStack_97 = CONCAT31(iStack_97._1_3_,SUB41(local_ec._4_4_,3));
      uStack_93 = (undefined1)((uint)local_e4 >> 0x18);
      local_92 = local_e0;
      local_8e = local_dc;
      local_8a = local_d8;
      local_86 = local_d4;
      local_82 = local_d0;
      local_7e = local_cc;
      local_7a = local_c8;
      local_76 = local_c4;
      local_72 = local_c0;
      local_6e = local_bc;
      local_6a = local_b8;
      local_66 = local_b4;
      local_62 = local_b0;
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 082193b9 to 0821947c has its CatchHandler @ 0821948f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xcf);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_18 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,iStack_97);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_18 + 0xd));
      uVar10 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_51 + 1));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar10 & 0xff);
      uVar10 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_51 + 1));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar10 & 0xffff);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
      return 0;
    }
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  puVar6 = (undefined4 *)__cxa_allocate_exception(4,iVar7,uVar5,uVar10);
  *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
}
```
