# ItemAdd

`_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason`

`cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682e84  _ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason
#           cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
# range [0x08682e84, 0x08683409]
08682e84 +0x000:  push   %ebp
08682e85 +0x001:  mov    %esp,%ebp
08682e87 +0x003:  push   %edi
08682e88 +0x004:  push   %esi
08682e89 +0x005:  push   %ebx
08682e8a +0x006:  sub    $0x16c,%esp
08682e90 +0x00c:  cmpl   $0x1,0x1c(%ebp)
08682e94 +0x010:  je     08682ea0 <+0x1c>
08682e96 +0x012:  cmpl   $0x2,0x1c(%ebp)
08682e9a +0x016:  jne    08683144 <+0x2c0>
08682ea0 +0x01c:  mov    0x8(%ebp),%eax
08682ea3 +0x01f:  add    $0x22,%eax
08682ea6 +0x022:  movzbl (%eax),%eax
08682ea9 +0x025:  test   %al,%al
08682eab +0x027:  je     086833fe <+0x57a>
08682eb1 +0x02d:  mov    0x18(%ebp),%eax
08682eb4 +0x030:  lea    0x15(%eax),%ebx
08682eb7 +0x033:  lea    -0x42(%ebp),%eax
08682eba +0x036:  mov    %eax,(%esp)
08682ebd +0x039:  call   084ebe58 <_GLOBAL__I__Z7getUserj+0x2e0a>  ; global constructors keyed to getUser(unsigned int)+0x2e0a
08682ec2 +0x03e:  mov    %ebx,0x4(%esp)
08682ec6 +0x042:  lea    -0x42(%ebp),%eax
08682ec9 +0x045:  mov    %eax,(%esp)
08682ecc +0x048:  call   084ebe82 <_GLOBAL__I__Z7getUserj+0x2e34>  ; global constructors keyed to getUser(unsigned int)+0x2e34
08682ed1 +0x04d:  mov    %eax,-0xf8(%ebp)
08682ed7 +0x053:  mov    0x18(%ebp),%eax
08682eda +0x056:  mov    %eax,(%esp)
08682edd +0x059:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08682ee2 +0x05e:  movzbl %al,%eax
08682ee5 +0x061:  mov    %eax,-0xf4(%ebp)
08682eeb +0x067:  mov    0x18(%ebp),%eax
08682eee +0x06a:  movzbl (%eax),%eax
08682ef1 +0x06d:  movzbl %al,%eax
08682ef4 +0x070:  mov    %eax,-0xf0(%ebp)
08682efa +0x076:  mov    0x18(%ebp),%eax
08682efd +0x079:  movzbl 0x32(%eax),%eax
08682f01 +0x07d:  movzbl %al,%eax
08682f04 +0x080:  mov    %eax,-0xec(%ebp)
08682f0a +0x086:  mov    0x18(%ebp),%eax
08682f0d +0x089:  movzbl 0x31(%eax),%eax
08682f11 +0x08d:  movzbl %al,%eax
08682f14 +0x090:  mov    %eax,-0xe8(%ebp)
08682f1a +0x096:  mov    0x18(%ebp),%eax
08682f1d +0x099:  movzbl 0x30(%eax),%eax
08682f21 +0x09d:  movzbl %al,%eax
08682f24 +0x0a0:  mov    %eax,-0xe4(%ebp)
08682f2a +0x0a6:  mov    0x18(%ebp),%eax
08682f2d +0x0a9:  movzbl 0x2f(%eax),%eax
08682f31 +0x0ad:  movzbl %al,%eax
08682f34 +0x0b0:  mov    %eax,-0xe0(%ebp)
08682f3a +0x0b6:  mov    0x18(%ebp),%eax
08682f3d +0x0b9:  movzbl 0x2e(%eax),%eax
08682f41 +0x0bd:  movzbl %al,%eax
08682f44 +0x0c0:  mov    %eax,-0xdc(%ebp)
08682f4a +0x0c6:  mov    0x18(%ebp),%eax
08682f4d +0x0c9:  movzbl 0x2d(%eax),%eax
08682f51 +0x0cd:  movzbl %al,%eax
08682f54 +0x0d0:  mov    %eax,-0xd8(%ebp)
08682f5a +0x0d6:  mov    0x18(%ebp),%eax
08682f5d +0x0d9:  movzbl 0x2c(%eax),%eax
08682f61 +0x0dd:  movzbl %al,%eax
08682f64 +0x0e0:  mov    %eax,-0xd4(%ebp)
08682f6a +0x0e6:  mov    0x18(%ebp),%eax
08682f6d +0x0e9:  movzbl 0x2b(%eax),%eax
08682f71 +0x0ed:  movzbl %al,%eax
08682f74 +0x0f0:  mov    %eax,-0xd0(%ebp)
08682f7a +0x0f6:  mov    0x18(%ebp),%eax
08682f7d +0x0f9:  movzbl 0x2a(%eax),%eax
08682f81 +0x0fd:  movzbl %al,%eax
08682f84 +0x100:  mov    %eax,-0xcc(%ebp)
08682f8a +0x106:  mov    0x18(%ebp),%eax
08682f8d +0x109:  movzbl 0x29(%eax),%eax
08682f91 +0x10d:  movzbl %al,%eax
08682f94 +0x110:  mov    %eax,-0xc8(%ebp)
08682f9a +0x116:  mov    0x18(%ebp),%eax
08682f9d +0x119:  movzbl 0x28(%eax),%eax
08682fa1 +0x11d:  movzbl %al,%eax
08682fa4 +0x120:  mov    %eax,-0xc4(%ebp)
08682faa +0x126:  mov    0x18(%ebp),%eax
08682fad +0x129:  movzbl 0x27(%eax),%eax
08682fb1 +0x12d:  movzbl %al,%eax
08682fb4 +0x130:  mov    %eax,-0xc0(%ebp)
08682fba +0x136:  mov    0x18(%ebp),%eax
08682fbd +0x139:  movzbl 0x26(%eax),%eax
08682fc1 +0x13d:  movzbl %al,%eax
08682fc4 +0x140:  mov    %eax,-0xbc(%ebp)
08682fca +0x146:  mov    0x18(%ebp),%eax
08682fcd +0x149:  movzbl 0x25(%eax),%eax
08682fd1 +0x14d:  movzbl %al,%eax
08682fd4 +0x150:  mov    %eax,-0xb8(%ebp)
08682fda +0x156:  mov    0x18(%ebp),%eax
08682fdd +0x159:  movzwl 0xb(%eax),%eax
08682fe1 +0x15d:  movzwl %ax,%eax
08682fe4 +0x160:  mov    %eax,-0xb4(%ebp)
08682fea +0x166:  mov    0x18(%ebp),%eax
08682fed +0x169:  mov    %eax,(%esp)
08682ff0 +0x16c:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08682ff5 +0x171:  movzbl %al,%eax
08682ff8 +0x174:  mov    %eax,-0xb0(%ebp)
08682ffe +0x17a:  mov    0x8(%ebp),%eax
08683001 +0x17d:  add    $0x4,%eax
08683004 +0x180:  mov    %eax,-0xac(%ebp)
0868300a +0x186:  mov    0x8(%ebp),%eax
0868300d +0x189:  lea    0x22(%eax),%edi
08683010 +0x18c:  mov    0x1c(%ebp),%esi
08683013 +0x18f:  mov    0x18(%ebp),%eax
08683016 +0x192:  mov    0x2(%eax),%ebx
08683019 +0x195:  mov    0xc(%ebp),%ecx
0868301c +0x198:  mov    0x8(%ebp),%eax
0868301f +0x19b:  mov    (%eax),%edx
08683021 +0x19d:  mov    -0xf8(%ebp),%eax
08683027 +0x1a3:  mov    %eax,0x6c(%esp)
0868302b +0x1a7:  mov    -0xf4(%ebp),%eax
08683031 +0x1ad:  mov    %eax,0x68(%esp)
08683035 +0x1b1:  mov    -0xf0(%ebp),%eax
0868303b +0x1b7:  mov    %eax,0x64(%esp)
0868303f +0x1bb:  mov    -0xec(%ebp),%eax
08683045 +0x1c1:  mov    %eax,0x60(%esp)
08683049 +0x1c5:  mov    -0xe8(%ebp),%eax
0868304f +0x1cb:  mov    %eax,0x5c(%esp)
08683053 +0x1cf:  mov    -0xe4(%ebp),%eax
08683059 +0x1d5:  mov    %eax,0x58(%esp)
0868305d +0x1d9:  mov    -0xe0(%ebp),%eax
08683063 +0x1df:  mov    %eax,0x54(%esp)
08683067 +0x1e3:  mov    -0xdc(%ebp),%eax
0868306d +0x1e9:  mov    %eax,0x50(%esp)
08683071 +0x1ed:  mov    -0xd8(%ebp),%eax
08683077 +0x1f3:  mov    %eax,0x4c(%esp)
0868307b +0x1f7:  mov    -0xd4(%ebp),%eax
08683081 +0x1fd:  mov    %eax,0x48(%esp)
08683085 +0x201:  mov    -0xd0(%ebp),%eax
0868308b +0x207:  mov    %eax,0x44(%esp)
0868308f +0x20b:  mov    -0xcc(%ebp),%eax
08683095 +0x211:  mov    %eax,0x40(%esp)
08683099 +0x215:  mov    -0xc8(%ebp),%eax
0868309f +0x21b:  mov    %eax,0x3c(%esp)
086830a3 +0x21f:  mov    -0xc4(%ebp),%eax
086830a9 +0x225:  mov    %eax,0x38(%esp)
086830ad +0x229:  mov    -0xc0(%ebp),%eax
086830b3 +0x22f:  mov    %eax,0x34(%esp)
086830b7 +0x233:  mov    -0xbc(%ebp),%eax
086830bd +0x239:  mov    %eax,0x30(%esp)
086830c1 +0x23d:  mov    -0xb8(%ebp),%eax
086830c7 +0x243:  mov    %eax,0x2c(%esp)
086830cb +0x247:  mov    -0xb4(%ebp),%eax
086830d1 +0x24d:  mov    %eax,0x28(%esp)
086830d5 +0x251:  mov    -0xb0(%ebp),%eax
086830db +0x257:  mov    %eax,0x24(%esp)
086830df +0x25b:  mov    -0xac(%ebp),%eax
086830e5 +0x261:  mov    %eax,0x20(%esp)
086830e9 +0x265:  mov    %edi,0x1c(%esp)
086830ed +0x269:  mov    %esi,0x18(%esp)
086830f1 +0x26d:  mov    0x14(%ebp),%eax
086830f4 +0x270:  mov    %eax,0x14(%esp)
086830f8 +0x274:  mov    0x10(%ebp),%eax
086830fb +0x277:  mov    %eax,0x10(%esp)
086830ff +0x27b:  mov    %ebx,0xc(%esp)
08683103 +0x27f:  mov    %ecx,0x8(%esp)
08683107 +0x283:  movl   $"Item+,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s",0x4(%esp)
0868310f +0x28b:  mov    %edx,(%esp)
08683112 +0x28e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683117 +0x293:  jmp    08683134 <+0x2b0>
08683119 +0x295:  mov    %edx,%ebx
0868311b +0x297:  mov    %eax,%esi
0868311d +0x299:  lea    -0x42(%ebp),%eax
08683120 +0x29c:  mov    %eax,(%esp)
08683123 +0x29f:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
08683128 +0x2a4:  mov    %esi,%eax
0868312a +0x2a6:  mov    %ebx,%edx
0868312c +0x2a8:  mov    %eax,(%esp)
0868312f +0x2ab:  call   08ae3750 <_Unwind_Resume>
08683134 +0x2b0:  lea    -0x42(%ebp),%eax
08683137 +0x2b3:  mov    %eax,(%esp)
0868313a +0x2b6:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
0868313f +0x2bb:  jmp    086833ff <+0x57b>
08683144 +0x2c0:  mov    0x18(%ebp),%eax
08683147 +0x2c3:  lea    0x15(%eax),%ebx
0868314a +0x2c6:  lea    -0x2d(%ebp),%eax
0868314d +0x2c9:  mov    %eax,(%esp)
08683150 +0x2cc:  call   084ebe58 <_GLOBAL__I__Z7getUserj+0x2e0a>  ; global constructors keyed to getUser(unsigned int)+0x2e0a
08683155 +0x2d1:  mov    %ebx,0x4(%esp)
08683159 +0x2d5:  lea    -0x2d(%ebp),%eax
0868315c +0x2d8:  mov    %eax,(%esp)
0868315f +0x2db:  call   084ebe82 <_GLOBAL__I__Z7getUserj+0x2e34>  ; global constructors keyed to getUser(unsigned int)+0x2e34
08683164 +0x2e0:  mov    %eax,-0xa8(%ebp)
0868316a +0x2e6:  mov    0x18(%ebp),%eax
0868316d +0x2e9:  mov    %eax,(%esp)
08683170 +0x2ec:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08683175 +0x2f1:  movzbl %al,%eax
08683178 +0x2f4:  mov    %eax,-0xa4(%ebp)
0868317e +0x2fa:  mov    0x18(%ebp),%eax
08683181 +0x2fd:  movzbl (%eax),%eax
08683184 +0x300:  movzbl %al,%eax
08683187 +0x303:  mov    %eax,-0xa0(%ebp)
0868318d +0x309:  mov    0x18(%ebp),%eax
08683190 +0x30c:  movzbl 0x32(%eax),%eax
08683194 +0x310:  movzbl %al,%eax
08683197 +0x313:  mov    %eax,-0x9c(%ebp)
0868319d +0x319:  mov    0x18(%ebp),%eax
086831a0 +0x31c:  movzbl 0x31(%eax),%eax
086831a4 +0x320:  movzbl %al,%eax
086831a7 +0x323:  mov    %eax,-0x98(%ebp)
086831ad +0x329:  mov    0x18(%ebp),%eax
086831b0 +0x32c:  movzbl 0x30(%eax),%eax
086831b4 +0x330:  movzbl %al,%eax
086831b7 +0x333:  mov    %eax,-0x94(%ebp)
086831bd +0x339:  mov    0x18(%ebp),%eax
086831c0 +0x33c:  movzbl 0x2f(%eax),%eax
086831c4 +0x340:  movzbl %al,%eax
086831c7 +0x343:  mov    %eax,-0x90(%ebp)
086831cd +0x349:  mov    0x18(%ebp),%eax
086831d0 +0x34c:  movzbl 0x2e(%eax),%eax
086831d4 +0x350:  movzbl %al,%eax
086831d7 +0x353:  mov    %eax,-0x8c(%ebp)
086831dd +0x359:  mov    0x18(%ebp),%eax
086831e0 +0x35c:  movzbl 0x2d(%eax),%eax
086831e4 +0x360:  movzbl %al,%eax
086831e7 +0x363:  mov    %eax,-0x88(%ebp)
086831ed +0x369:  mov    0x18(%ebp),%eax
086831f0 +0x36c:  movzbl 0x2c(%eax),%eax
086831f4 +0x370:  movzbl %al,%eax
086831f7 +0x373:  mov    %eax,-0x84(%ebp)
086831fd +0x379:  mov    0x18(%ebp),%eax
08683200 +0x37c:  movzbl 0x2b(%eax),%eax
08683204 +0x380:  movzbl %al,%eax
08683207 +0x383:  mov    %eax,-0x80(%ebp)
0868320a +0x386:  mov    0x18(%ebp),%eax
0868320d +0x389:  movzbl 0x2a(%eax),%eax
08683211 +0x38d:  movzbl %al,%eax
08683214 +0x390:  mov    %eax,-0x7c(%ebp)
08683217 +0x393:  mov    0x18(%ebp),%eax
0868321a +0x396:  movzbl 0x29(%eax),%eax
0868321e +0x39a:  movzbl %al,%eax
08683221 +0x39d:  mov    %eax,-0x78(%ebp)
08683224 +0x3a0:  mov    0x18(%ebp),%eax
08683227 +0x3a3:  movzbl 0x28(%eax),%eax
0868322b +0x3a7:  movzbl %al,%eax
0868322e +0x3aa:  mov    %eax,-0x74(%ebp)
08683231 +0x3ad:  mov    0x18(%ebp),%eax
08683234 +0x3b0:  movzbl 0x27(%eax),%eax
08683238 +0x3b4:  movzbl %al,%eax
0868323b +0x3b7:  mov    %eax,-0x70(%ebp)
0868323e +0x3ba:  mov    0x18(%ebp),%eax
08683241 +0x3bd:  movzbl 0x26(%eax),%eax
08683245 +0x3c1:  movzbl %al,%eax
08683248 +0x3c4:  mov    %eax,-0x6c(%ebp)
0868324b +0x3c7:  mov    0x18(%ebp),%eax
0868324e +0x3ca:  movzbl 0x25(%eax),%eax
08683252 +0x3ce:  movzbl %al,%eax
08683255 +0x3d1:  mov    %eax,-0x68(%ebp)
08683258 +0x3d4:  mov    0x18(%ebp),%eax
0868325b +0x3d7:  movzwl 0xb(%eax),%eax
0868325f +0x3db:  movzwl %ax,%eax
08683262 +0x3de:  mov    %eax,-0x64(%ebp)
08683265 +0x3e1:  mov    0x18(%ebp),%eax
08683268 +0x3e4:  mov    %eax,(%esp)
0868326b +0x3e7:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08683270 +0x3ec:  movzbl %al,%eax
08683273 +0x3ef:  mov    %eax,-0x60(%ebp)
08683276 +0x3f2:  mov    0x18(%ebp),%eax
08683279 +0x3f5:  movzwl 0x12(%eax),%eax
0868327d +0x3f9:  movzwl %ax,%eax
08683280 +0x3fc:  mov    %eax,-0x5c(%ebp)
08683283 +0x3ff:  mov    0x18(%ebp),%eax
08683286 +0x402:  movzbl 0x11(%eax),%eax
0868328a +0x406:  movzbl %al,%eax
0868328d +0x409:  mov    %eax,-0x58(%ebp)
08683290 +0x40c:  mov    0x18(%ebp),%eax
08683293 +0x40f:  mov    0xd(%eax),%eax
08683296 +0x412:  mov    %eax,-0x54(%ebp)
08683299 +0x415:  mov    0x18(%ebp),%eax
0868329c +0x418:  mov    0x7(%eax),%eax
0868329f +0x41b:  mov    %eax,-0x50(%ebp)
086832a2 +0x41e:  mov    0x8(%ebp),%eax
086832a5 +0x421:  mov    (%eax),%eax
086832a7 +0x423:  add    $0x79700,%eax
086832ac +0x428:  mov    %eax,(%esp)
086832af +0x42b:  call   0869600c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2861>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2861
086832b4 +0x430:  movzwl %ax,%eax
086832b7 +0x433:  mov    %eax,-0x4c(%ebp)
086832ba +0x436:  mov    0x8(%ebp),%eax
086832bd +0x439:  mov    (%eax),%eax
086832bf +0x43b:  add    $0x79700,%eax
086832c4 +0x440:  mov    %eax,(%esp)
086832c7 +0x443:  call   08696000 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2855>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2855
086832cc +0x448:  movzwl %ax,%edi
086832cf +0x44b:  mov    0x1c(%ebp),%esi
086832d2 +0x44e:  mov    0x18(%ebp),%eax
086832d5 +0x451:  mov    0x2(%eax),%ebx
086832d8 +0x454:  mov    0xc(%ebp),%ecx
086832db +0x457:  mov    0x8(%ebp),%eax
086832de +0x45a:  mov    (%eax),%edx
086832e0 +0x45c:  mov    -0xa8(%ebp),%eax
086832e6 +0x462:  mov    %eax,0x7c(%esp)
086832ea +0x466:  mov    -0xa4(%ebp),%eax
086832f0 +0x46c:  mov    %eax,0x78(%esp)
086832f4 +0x470:  mov    -0xa0(%ebp),%eax
086832fa +0x476:  mov    %eax,0x74(%esp)
086832fe +0x47a:  mov    -0x9c(%ebp),%eax
08683304 +0x480:  mov    %eax,0x70(%esp)
08683308 +0x484:  mov    -0x98(%ebp),%eax
0868330e +0x48a:  mov    %eax,0x6c(%esp)
08683312 +0x48e:  mov    -0x94(%ebp),%eax
08683318 +0x494:  mov    %eax,0x68(%esp)
0868331c +0x498:  mov    -0x90(%ebp),%eax
08683322 +0x49e:  mov    %eax,0x64(%esp)
08683326 +0x4a2:  mov    -0x8c(%ebp),%eax
0868332c +0x4a8:  mov    %eax,0x60(%esp)
08683330 +0x4ac:  mov    -0x88(%ebp),%eax
08683336 +0x4b2:  mov    %eax,0x5c(%esp)
0868333a +0x4b6:  mov    -0x84(%ebp),%eax
08683340 +0x4bc:  mov    %eax,0x58(%esp)
08683344 +0x4c0:  mov    -0x80(%ebp),%eax
08683347 +0x4c3:  mov    %eax,0x54(%esp)
0868334b +0x4c7:  mov    -0x7c(%ebp),%eax
0868334e +0x4ca:  mov    %eax,0x50(%esp)
08683352 +0x4ce:  mov    -0x78(%ebp),%eax
08683355 +0x4d1:  mov    %eax,0x4c(%esp)
08683359 +0x4d5:  mov    -0x74(%ebp),%eax
0868335c +0x4d8:  mov    %eax,0x48(%esp)
08683360 +0x4dc:  mov    -0x70(%ebp),%eax
08683363 +0x4df:  mov    %eax,0x44(%esp)
08683367 +0x4e3:  mov    -0x6c(%ebp),%eax
0868336a +0x4e6:  mov    %eax,0x40(%esp)
0868336e +0x4ea:  mov    -0x68(%ebp),%eax
08683371 +0x4ed:  mov    %eax,0x3c(%esp)
08683375 +0x4f1:  mov    -0x64(%ebp),%eax
08683378 +0x4f4:  mov    %eax,0x38(%esp)
0868337c +0x4f8:  mov    -0x60(%ebp),%eax
0868337f +0x4fb:  mov    %eax,0x34(%esp)
08683383 +0x4ff:  mov    -0x5c(%ebp),%eax
08683386 +0x502:  mov    %eax,0x30(%esp)
0868338a +0x506:  mov    -0x58(%ebp),%eax
0868338d +0x509:  mov    %eax,0x2c(%esp)
08683391 +0x50d:  mov    -0x54(%ebp),%eax
08683394 +0x510:  mov    %eax,0x28(%esp)
08683398 +0x514:  mov    -0x50(%ebp),%eax
0868339b +0x517:  mov    %eax,0x24(%esp)
0868339f +0x51b:  mov    -0x4c(%ebp),%eax
086833a2 +0x51e:  mov    %eax,0x20(%esp)
086833a6 +0x522:  mov    %edi,0x1c(%esp)
086833aa +0x526:  mov    %esi,0x18(%esp)
086833ae +0x52a:  mov    0x14(%ebp),%eax
086833b1 +0x52d:  mov    %eax,0x14(%esp)
086833b5 +0x531:  mov    0x10(%ebp),%eax
086833b8 +0x534:  mov    %eax,0x10(%esp)
086833bc +0x538:  mov    %ebx,0xc(%esp)
086833c0 +0x53c:  mov    %ecx,0x8(%esp)
086833c4 +0x540:  movl   $"Item+,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s",0x4(%esp)
086833cc +0x548:  mov    %edx,(%esp)
086833cf +0x54b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086833d4 +0x550:  jmp    086833f1 <+0x56d>
086833d6 +0x552:  mov    %edx,%ebx
086833d8 +0x554:  mov    %eax,%esi
086833da +0x556:  lea    -0x2d(%ebp),%eax
086833dd +0x559:  mov    %eax,(%esp)
086833e0 +0x55c:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
086833e5 +0x561:  mov    %esi,%eax
086833e7 +0x563:  mov    %ebx,%edx
086833e9 +0x565:  mov    %eax,(%esp)
086833ec +0x568:  call   08ae3750 <_Unwind_Resume>
086833f1 +0x56d:  lea    -0x2d(%ebp),%eax
086833f4 +0x570:  mov    %eax,(%esp)
086833f7 +0x573:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
086833fc +0x578:  jmp    086833ff <+0x57b>
086833fe +0x57a:  nop
086833ff +0x57b:  add    $0x16c,%esp
08683405 +0x581:  pop    %ebx
08683406 +0x582:  pop    %esi
08683407 +0x583:  pop    %edi
08683408 +0x584:  pop    %ebp
08683409 +0x585:  ret
```

## 反编译 C

```c
// cUserHistoryLog::ItemAdd @ 0x8682e84

/* cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason) */

void __thiscall
cUserHistoryLog::ItemAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          Inven_Item *param_5,int param_6)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  Inven_Item IVar16;
  ushort uVar17;
  ushort uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  CItemGloballyUniqueIdentifierPrint local_46 [21];
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  if ((param_6 == 1) || (param_6 == 2)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_46);
                    /* try { // try from 08682ecc to 08683116 has its CatchHandler @ 08683119 */
      uVar20 = CItemGloballyUniqueIdentifierPrint::operator()
                         (local_46,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
      uVar21 = Inven_Item::GetReSealCount(param_5);
      IVar1 = *param_5;
      IVar2 = param_5[0x32];
      IVar3 = param_5[0x31];
      IVar4 = param_5[0x30];
      IVar5 = param_5[0x2f];
      IVar6 = param_5[0x2e];
      IVar7 = param_5[0x2d];
      IVar8 = param_5[0x2c];
      IVar9 = param_5[0x2b];
      IVar10 = param_5[0x2a];
      IVar11 = param_5[0x29];
      IVar12 = param_5[0x28];
      IVar13 = param_5[0x27];
      IVar14 = param_5[0x26];
      IVar15 = param_5[0x25];
      uVar17 = *(ushort *)(param_5 + 0xb);
      uVar22 = Inven_Item::GetUpgrade(param_5);
      CUser::LogHistory(*(CUser **)this,
                        "Item+,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                        ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,this + 0x22,
                        this + 4,uVar22 & 0xff,(uint)uVar17,(uint)(byte)IVar15,(uint)(byte)IVar14,
                        (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                        (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                        (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                        (uint)(byte)IVar1,uVar21 & 0xff,uVar20);
      CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_46);
    }
  }
  else {
    CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 0868315f to 086833d3 has its CatchHandler @ 086833d6 */
    uVar23 = CItemGloballyUniqueIdentifierPrint::operator()
                       (local_31,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
    uVar21 = Inven_Item::GetReSealCount(param_5);
    IVar1 = *param_5;
    IVar2 = param_5[0x32];
    IVar3 = param_5[0x31];
    IVar4 = param_5[0x30];
    IVar5 = param_5[0x2f];
    IVar6 = param_5[0x2e];
    IVar7 = param_5[0x2d];
    IVar8 = param_5[0x2c];
    IVar9 = param_5[0x2b];
    IVar10 = param_5[0x2a];
    IVar11 = param_5[0x29];
    IVar12 = param_5[0x28];
    IVar13 = param_5[0x27];
    IVar14 = param_5[0x26];
    IVar15 = param_5[0x25];
    uVar17 = *(ushort *)(param_5 + 0xb);
    uVar22 = Inven_Item::GetUpgrade(param_5);
    uVar18 = *(ushort *)(param_5 + 0x12);
    IVar16 = param_5[0x11];
    uVar20 = *(undefined4 *)(param_5 + 0xd);
    uVar19 = *(undefined4 *)(param_5 + 7);
    uVar24 = getItemYPos((cUserHistoryLog *)(*(int *)this + 0x79700));
    uVar25 = getItemXPos((cUserHistoryLog *)(*(int *)this + 0x79700));
    CUser::LogHistory(*(CUser **)this,
                      "Item+,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                      ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,uVar25 & 0xffff,
                      uVar24 & 0xffff,uVar19,uVar20,(uint)(byte)IVar16,(uint)uVar18,uVar22 & 0xff,
                      (uint)uVar17,(uint)(byte)IVar15,(uint)(byte)IVar14,(uint)(byte)IVar13,
                      (uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,(uint)(byte)IVar9,
                      (uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,(uint)(byte)IVar5,
                      (uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,(uint)(byte)IVar1,
                      uVar21 & 0xff,uVar23);
    CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  }
  return;
}
```
