# onUpdateHackCount

`_ZN5CUser17onUpdateHackCountEN8WongWork13ENUM_HACKTYPEEijj`

`CUser::onUpdateHackCount(WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867fd0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867fd0a  _ZN5CUser17onUpdateHackCountEN8WongWork13ENUM_HACKTYPEEijj
#           CUser::onUpdateHackCount(WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int)
# range [0x0867fd0a, 0x086800c5]
0867fd0a +0x000:  push   %ebp
0867fd0b +0x001:  mov    %esp,%ebp
0867fd0d +0x003:  push   %edi
0867fd0e +0x004:  push   %esi
0867fd0f +0x005:  push   %ebx
0867fd10 +0x006:  sub    $0x9c,%esp
0867fd16 +0x00c:  mov    0xc(%ebp),%eax
0867fd19 +0x00f:  mov    %eax,(%esp)
0867fd1c +0x012:  call   08695025 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x187a>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x187a
0867fd21 +0x017:  imul   0x10(%ebp),%eax
0867fd25 +0x01b:  mov    0x8(%ebp),%edx
0867fd28 +0x01e:  add    $0x8e3f0,%edx
0867fd2e +0x024:  mov    %eax,0x4(%esp)
0867fd32 +0x028:  mov    %edx,(%esp)
0867fd35 +0x02b:  call   084eb53e <_GLOBAL__I__Z7getUserj+0x24f0>  ; global constructors keyed to getUser(unsigned int)+0x24f0
0867fd3a +0x030:  mov    0x8(%ebp),%eax
0867fd3d +0x033:  add    $0x8e3f0,%eax
0867fd42 +0x038:  mov    %eax,(%esp)
0867fd45 +0x03b:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0867fd4a +0x040:  cmp    $0x3e8,%eax
0867fd4f +0x045:  seta   %al
0867fd52 +0x048:  test   %al,%al
0867fd54 +0x04a:  je     0867fd8c <+0x82>
0867fd56 +0x04c:  mov    0x8(%ebp),%eax
0867fd59 +0x04f:  add    $0x8e3f0,%eax
0867fd5e +0x054:  mov    %eax,(%esp)
0867fd61 +0x057:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0867fd66 +0x05c:  mov    %eax,-0x6c(%ebp)
0867fd69 +0x05f:  mov    $0x51eb851f,%edx
0867fd6e +0x064:  mov    -0x6c(%ebp),%eax
0867fd71 +0x067:  mul    %edx
0867fd73 +0x069:  shr    $0x5,%edx
0867fd76 +0x06c:  mov    $0x64,%eax
0867fd7b +0x071:  sub    %edx,%eax
0867fd7d +0x073:  mov    %eax,0x4(%esp)
0867fd81 +0x077:  mov    0x8(%ebp),%eax
0867fd84 +0x07a:  mov    %eax,(%esp)
0867fd87 +0x07d:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
0867fd8c +0x082:  mov    0x8(%ebp),%eax
0867fd8f +0x085:  mov    %eax,(%esp)
0867fd92 +0x088:  call   0822fd4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53f6
0867fd97 +0x08d:  xor    $0x1,%eax
0867fd9a +0x090:  test   %al,%al
0867fd9c +0x092:  je     0868004d <+0x343>
0867fda2 +0x098:  mov    0x10(%ebp),%esi
0867fda5 +0x09b:  mov    0xc(%ebp),%ebx
0867fda8 +0x09e:  mov    0x8(%ebp),%eax
0867fdab +0x0a1:  mov    %eax,(%esp)
0867fdae +0x0a4:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0867fdb3 +0x0a9:  mov    0x18(%ebp),%edx
0867fdb6 +0x0ac:  mov    %edx,0x10(%esp)
0867fdba +0x0b0:  mov    0x14(%ebp),%edx
0867fdbd +0x0b3:  mov    %edx,0xc(%esp)
0867fdc1 +0x0b7:  mov    %esi,0x8(%esp)
0867fdc5 +0x0bb:  mov    %ebx,0x4(%esp)
0867fdc9 +0x0bf:  mov    %eax,(%esp)
0867fdcc +0x0c2:  call   084b9328 <_ZN8XNuclear6CHades14AddHackTypeCntEmmmm>  ; XNuclear::CHades::AddHackTypeCnt(unsigned long, unsigned long, unsigned long, unsigned long)
0867fdd1 +0x0c7:  mov    0x8(%ebp),%eax
0867fdd4 +0x0ca:  mov    %eax,(%esp)
0867fdd7 +0x0cd:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867fddc +0x0d2:  mov    0x8(%ebp),%edx
0867fddf +0x0d5:  mov    %edx,0x4(%esp)
0867fde3 +0x0d9:  mov    %eax,(%esp)
0867fde6 +0x0dc:  call   080f79c0 <_ZN8WongWork13CHackAnalyzer8setUserPEP5CUser>  ; WongWork::CHackAnalyzer::setUserP(CUser*)
0867fdeb +0x0e1:  lea    -0x28(%ebp),%eax
0867fdee +0x0e4:  mov    %eax,(%esp)
0867fdf1 +0x0e7:  call   086952b8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1b0d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1b0d
0867fdf6 +0x0ec:  mov    0x8(%ebp),%eax
0867fdf9 +0x0ef:  lea    0xe0(%eax),%edx
0867fdff +0x0f5:  movl   $0x10,0x8(%esp)
0867fe07 +0x0fd:  lea    -0x38(%ebp),%eax
0867fe0a +0x100:  mov    %eax,0x4(%esp)
0867fe0e +0x104:  mov    %edx,(%esp)
0867fe11 +0x107:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
0867fe16 +0x10c:  mov    0x8(%ebp),%eax
0867fe19 +0x10f:  add    $0x8d1c4,%eax
0867fe1e +0x114:  mov    %eax,-0x60(%ebp)
0867fe21 +0x117:  mov    0x8(%ebp),%eax
0867fe24 +0x11a:  lea    0x8d1d0(%eax),%edi
0867fe2a +0x120:  mov    0x8(%ebp),%eax
0867fe2d +0x123:  lea    0x8d1b8(%eax),%esi
0867fe33 +0x129:  mov    0x8(%ebp),%eax
0867fe36 +0x12c:  mov    %eax,(%esp)
0867fe39 +0x12f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867fe3e +0x134:  mov    %eax,%ebx
0867fe40 +0x136:  mov    0x8(%ebp),%eax
0867fe43 +0x139:  mov    %eax,(%esp)
0867fe46 +0x13c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867fe4b +0x141:  mov    0xc(%ebp),%edx
0867fe4e +0x144:  mov    %edx,0x4(%esp)
0867fe52 +0x148:  mov    %eax,(%esp)
0867fe55 +0x14b:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
0867fe5a +0x150:  mov    %eax,%ecx
0867fe5c +0x152:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%edx
0867fe62 +0x158:  lea    -0x38(%ebp),%eax
0867fe65 +0x15b:  mov    %eax,0x20(%esp)
0867fe69 +0x15f:  mov    -0x60(%ebp),%eax
0867fe6c +0x162:  mov    %eax,0x1c(%esp)
0867fe70 +0x166:  mov    %edi,0x18(%esp)
0867fe74 +0x16a:  mov    %esi,0x14(%esp)
0867fe78 +0x16e:  lea    -0x28(%ebp),%eax
0867fe7b +0x171:  mov    %eax,0x10(%esp)
0867fe7f +0x175:  mov    %ebx,0xc(%esp)
0867fe83 +0x179:  mov    %ecx,0x8(%esp)
0867fe87 +0x17d:  mov    0xc(%ebp),%eax
0867fe8a +0x180:  mov    %eax,0x4(%esp)
0867fe8e +0x184:  mov    %edx,(%esp)
0867fe91 +0x187:  call   08695360 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1bb5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1bb5
0867fe96 +0x18c:  test   %al,%al
0867fe98 +0x18e:  je     0867ff25 <+0x21b>
0867fe9e +0x194:  mov    -0x1c(%ebp),%edx
0867fea1 +0x197:  mov    %edx,-0x5c(%ebp)
0867fea4 +0x19a:  movzwl -0x20(%ebp),%eax
0867fea8 +0x19e:  movzwl %ax,%edi
0867feab +0x1a1:  movzwl -0x24(%ebp),%eax
0867feaf +0x1a5:  movzwl %ax,%ebx
0867feb2 +0x1a8:  mov    0x8(%ebp),%eax
0867feb5 +0x1ab:  mov    %eax,(%esp)
0867feb8 +0x1ae:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867febd +0x1b3:  mov    %ebx,0x4(%esp)
0867fec1 +0x1b7:  mov    %eax,(%esp)
0867fec4 +0x1ba:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
0867fec9 +0x1bf:  mov    %eax,%esi
0867fecb +0x1c1:  movzwl -0x24(%ebp),%eax
0867fecf +0x1c5:  movzwl %ax,%ebx
0867fed2 +0x1c8:  movzwl -0x28(%ebp),%eax
0867fed6 +0x1cc:  movzwl %ax,%eax
0867fed9 +0x1cf:  mov    %eax,-0x58(%ebp)
0867fedc +0x1d2:  mov    0x8(%ebp),%eax
0867fedf +0x1d5:  mov    %eax,(%esp)
0867fee2 +0x1d8:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867fee7 +0x1dd:  mov    -0x58(%ebp),%ecx
0867feea +0x1e0:  mov    %ecx,0x4(%esp)
0867feee +0x1e4:  mov    %eax,(%esp)
0867fef1 +0x1e7:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
0867fef6 +0x1ec:  mov    %eax,%edx
0867fef8 +0x1ee:  movzwl -0x28(%ebp),%eax
0867fefc +0x1f2:  movzwl %ax,%eax
0867feff +0x1f5:  mov    -0x5c(%ebp),%ecx
0867ff02 +0x1f8:  mov    %ecx,0x18(%esp)
0867ff06 +0x1fc:  mov    %edi,0x14(%esp)
0867ff0a +0x200:  mov    %esi,0x10(%esp)
0867ff0e +0x204:  mov    %ebx,0xc(%esp)
0867ff12 +0x208:  mov    %edx,0x8(%esp)
0867ff16 +0x20c:  mov    %eax,0x4(%esp)
0867ff1a +0x210:  mov    0x8(%ebp),%eax
0867ff1d +0x213:  mov    %eax,(%esp)
0867ff20 +0x216:  call   0867f748 <_ZN5CUser11setHackUserEjjjjtj>  ; CUser::setHackUser(unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)
0867ff25 +0x21b:  lea    -0x48(%ebp),%eax
0867ff28 +0x21e:  mov    %eax,(%esp)
0867ff2b +0x221:  call   086952b8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1b0d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1b0d
0867ff30 +0x226:  movzwl -0x20(%ebp),%eax
0867ff34 +0x22a:  cmp    $0x3,%ax
0867ff38 +0x22e:  jne    0868004d <+0x343>
0867ff3e +0x234:  mov    0x8(%ebp),%eax
0867ff41 +0x237:  add    $0x8d1c4,%eax
0867ff46 +0x23c:  mov    %eax,-0x54(%ebp)
0867ff49 +0x23f:  mov    0x8(%ebp),%eax
0867ff4c +0x242:  lea    0x8d1d0(%eax),%edi
0867ff52 +0x248:  mov    0x8(%ebp),%eax
0867ff55 +0x24b:  lea    0x8d1b8(%eax),%esi
0867ff5b +0x251:  mov    0x8(%ebp),%eax
0867ff5e +0x254:  mov    %eax,(%esp)
0867ff61 +0x257:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867ff66 +0x25c:  mov    %eax,%ebx
0867ff68 +0x25e:  mov    0x8(%ebp),%eax
0867ff6b +0x261:  mov    %eax,(%esp)
0867ff6e +0x264:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867ff73 +0x269:  mov    0xc(%ebp),%edx
0867ff76 +0x26c:  mov    %edx,0x4(%esp)
0867ff7a +0x270:  mov    %eax,(%esp)
0867ff7d +0x273:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
0867ff82 +0x278:  mov    %eax,%ecx
0867ff84 +0x27a:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%edx
0867ff8a +0x280:  lea    -0x38(%ebp),%eax
0867ff8d +0x283:  mov    %eax,0x20(%esp)
0867ff91 +0x287:  mov    -0x54(%ebp),%eax
0867ff94 +0x28a:  mov    %eax,0x1c(%esp)
0867ff98 +0x28e:  mov    %edi,0x18(%esp)
0867ff9c +0x292:  mov    %esi,0x14(%esp)
0867ffa0 +0x296:  lea    -0x48(%ebp),%eax
0867ffa3 +0x299:  mov    %eax,0x10(%esp)
0867ffa7 +0x29d:  mov    %ebx,0xc(%esp)
0867ffab +0x2a1:  mov    %ecx,0x8(%esp)
0867ffaf +0x2a5:  mov    0xc(%ebp),%eax
0867ffb2 +0x2a8:  mov    %eax,0x4(%esp)
0867ffb6 +0x2ac:  mov    %edx,(%esp)
0867ffb9 +0x2af:  call   08695360 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1bb5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1bb5
0867ffbe +0x2b4:  test   %al,%al
0867ffc0 +0x2b6:  je     0868004d <+0x343>
0867ffc6 +0x2bc:  mov    -0x1c(%ebp),%edx
0867ffc9 +0x2bf:  mov    %edx,-0x50(%ebp)
0867ffcc +0x2c2:  movzwl -0x40(%ebp),%eax
0867ffd0 +0x2c6:  movzwl %ax,%edi
0867ffd3 +0x2c9:  movzwl -0x44(%ebp),%eax
0867ffd7 +0x2cd:  movzwl %ax,%ebx
0867ffda +0x2d0:  mov    0x8(%ebp),%eax
0867ffdd +0x2d3:  mov    %eax,(%esp)
0867ffe0 +0x2d6:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0867ffe5 +0x2db:  mov    %ebx,0x4(%esp)
0867ffe9 +0x2df:  mov    %eax,(%esp)
0867ffec +0x2e2:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
0867fff1 +0x2e7:  mov    %eax,%esi
0867fff3 +0x2e9:  movzwl -0x44(%ebp),%eax
0867fff7 +0x2ed:  movzwl %ax,%ebx
0867fffa +0x2f0:  movzwl -0x48(%ebp),%eax
0867fffe +0x2f4:  movzwl %ax,%eax
08680001 +0x2f7:  mov    %eax,-0x4c(%ebp)
08680004 +0x2fa:  mov    0x8(%ebp),%eax
08680007 +0x2fd:  mov    %eax,(%esp)
0868000a +0x300:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0868000f +0x305:  mov    -0x4c(%ebp),%ecx
08680012 +0x308:  mov    %ecx,0x4(%esp)
08680016 +0x30c:  mov    %eax,(%esp)
08680019 +0x30f:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
0868001e +0x314:  mov    %eax,%edx
08680020 +0x316:  movzwl -0x48(%ebp),%eax
08680024 +0x31a:  movzwl %ax,%eax
08680027 +0x31d:  mov    -0x50(%ebp),%ecx
0868002a +0x320:  mov    %ecx,0x18(%esp)
0868002e +0x324:  mov    %edi,0x14(%esp)
08680032 +0x328:  mov    %esi,0x10(%esp)
08680036 +0x32c:  mov    %ebx,0xc(%esp)
0868003a +0x330:  mov    %edx,0x8(%esp)
0868003e +0x334:  mov    %eax,0x4(%esp)
08680042 +0x338:  mov    0x8(%ebp),%eax
08680045 +0x33b:  mov    %eax,(%esp)
08680048 +0x33e:  call   0867f748 <_ZN5CUser11setHackUserEjjjjtj>  ; CUser::setHackUser(unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)
0868004d +0x343:  mov    0x8(%ebp),%eax
08680050 +0x346:  mov    %eax,(%esp)
08680053 +0x349:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08680058 +0x34e:  mov    0xc(%ebp),%edx
0868005b +0x351:  mov    %edx,0x4(%esp)
0868005f +0x355:  mov    %eax,(%esp)
08680062 +0x358:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
08680067 +0x35d:  mov    %eax,%ebx
08680069 +0x35f:  mov    0x8(%ebp),%eax
0868006c +0x362:  mov    %eax,(%esp)
0868006f +0x365:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08680074 +0x36a:  mov    0xc(%ebp),%edx
08680077 +0x36d:  mov    %edx,0x4(%esp)
0868007b +0x371:  mov    %eax,(%esp)
0868007e +0x374:  call   08695086 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18db
08680083 +0x379:  mov    %eax,%ecx
08680085 +0x37b:  mov    0x10(%ebp),%edx
08680088 +0x37e:  mov    0xc(%ebp),%eax
0868008b +0x381:  mov    0x8(%ebp),%esi
0868008e +0x384:  lea    0x79700(%esi),%edi
08680094 +0x38a:  mov    0x18(%ebp),%esi
08680097 +0x38d:  mov    %esi,0x18(%esp)
0868009b +0x391:  mov    0x14(%ebp),%esi
0868009e +0x394:  mov    %esi,0x14(%esp)
086800a2 +0x398:  mov    %ebx,0x10(%esp)
086800a6 +0x39c:  mov    %ecx,0xc(%esp)
086800aa +0x3a0:  mov    %edx,0x8(%esp)
086800ae +0x3a4:  mov    %eax,0x4(%esp)
086800b2 +0x3a8:  mov    %edi,(%esp)
086800b5 +0x3ab:  call   08685320 <_ZN15cUserHistoryLog12HackDetectedEjjjjjj>  ; cUserHistoryLog::HackDetected(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
086800ba +0x3b0:  add    $0x9c,%esp
086800c0 +0x3b6:  pop    %ebx
086800c1 +0x3b7:  pop    %esi
086800c2 +0x3b8:  pop    %edi
086800c3 +0x3b9:  pop    %ebp
086800c4 +0x3ba:  ret
086800c5 +0x3bb:  nop
```

## 反编译 C

```c
// CUser::onUpdateHackCount @ 0x867fd0a

/* CUser::onUpdateHackCount(WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int) */

void __thiscall
CUser::onUpdateHackCount(CUser *this,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  CHades *this_00;
  CHackAnalyzer *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ushort local_4c [2];
  ushort local_48;
  ushort local_44;
  char local_3c [16];
  ushort local_2c [2];
  ushort local_28;
  ushort local_24;
  uint local_20;
  
  iVar4 = WongWork::CMCAPManager::getPointPerHackType(param_2);
  WongWork::CMCAPManager::incPoint((CMCAPManager *)(this + 0x8e3f0),iVar4 * param_3);
  uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
  if (1000 < uVar5) {
    uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
    setStdDropRate(this,100 - uVar5 / 100);
  }
  cVar3 = isHackUserTimer(this);
  if (cVar3 != '\x01') {
    this_00 = (CHades *)getHades(this);
    XNuclear::CHades::AddHackTypeCnt(this_00,param_2,param_3,param_4,param_5);
    pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
    WongWork::CHackAnalyzer::setUserP(pCVar6,this);
    WongWork::HackTypeInfo_t::HackTypeInfo_t((HackTypeInfo_t *)local_2c);
    CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(this + 0xe0),local_3c,0x10);
    uVar7 = getHackAnalyzer(this);
    pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
    uVar8 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,param_2);
    cVar3 = WongWork::CAutoPunishRuleHackTypeMgr::checkMaxHackCntOver
                      (GlobalData::g_autoPunishRuleHackTypeMgr,param_2,uVar8,uVar7,local_2c,
                       this + 0x8d1b8,this + 0x8d1d0,this + 0x8d1c4,local_3c);
    uVar5 = local_20;
    uVar2 = local_24;
    uVar1 = local_28;
    if (cVar3 != '\0') {
      pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
      uVar9 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,uVar1);
      uVar1 = local_2c[0];
      pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
      uVar10 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,uVar1);
      setHackUser(this,(uint)local_2c[0],uVar10,(uint)local_28,uVar9,uVar2,uVar5);
    }
    WongWork::HackTypeInfo_t::HackTypeInfo_t((HackTypeInfo_t *)local_4c);
    if (local_24 == 3) {
      uVar7 = getHackAnalyzer(this);
      pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
      uVar8 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,param_2);
      cVar3 = WongWork::CAutoPunishRuleHackTypeMgr::checkMaxHackCntOver
                        (GlobalData::g_autoPunishRuleHackTypeMgr,param_2,uVar8,uVar7,local_4c,
                         this + 0x8d1b8,this + 0x8d1d0,this + 0x8d1c4,local_3c);
      uVar1 = local_48;
      if (cVar3 != '\0') {
        pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
        uVar5 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,uVar1);
        uVar1 = local_4c[0];
        pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
        uVar9 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,uVar1);
        setHackUser(this,(uint)local_4c[0],uVar9,(uint)local_48,uVar5,local_44,local_20);
      }
    }
  }
  pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
  uVar5 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar6,param_2);
  pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
  uVar9 = WongWork::CHackAnalyzer::getServerHackCnt(pCVar6,param_2);
  cUserHistoryLog::HackDetected
            ((cUserHistoryLog *)(this + 0x79700),param_2,param_3,uVar9,uVar5,param_4,param_5);
  return;
}
```
