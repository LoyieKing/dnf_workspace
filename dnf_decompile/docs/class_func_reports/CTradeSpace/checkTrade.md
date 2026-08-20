# checkTrade

`_ZN11CTradeSpace10checkTradeEv`

`CTradeSpace::checkTrade()`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08530210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08530210  _ZN11CTradeSpace10checkTradeEv
#           CTradeSpace::checkTrade()
# range [0x08530210, 0x08530849]
08530210 +0x000:  push   %ebp
08530211 +0x001:  mov    %esp,%ebp
08530213 +0x003:  push   %edi
08530214 +0x004:  push   %esi
08530215 +0x005:  push   %ebx
08530216 +0x006:  sub    $&_ZL14gUnicodeBuffer+0xed70,%esp
0853021c +0x00c:  lea    -0xfc0(%ebp),%ebx
08530222 +0x012:  mov    %ebx,%edi
08530224 +0x014:  mov    $0x1,%esi
08530229 +0x019:  jmp    0853023c <+0x2c>
0853022b +0x01b:  mov    %edi,(%esp)
0853022e +0x01e:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
08530233 +0x023:  add    $0x7b8,%edi
08530239 +0x029:  sub    $0x1,%esi
0853023c +0x02c:  cmp    $0xffffffff,%esi
0853023f +0x02f:  setne  %al
08530242 +0x032:  test   %al,%al
08530244 +0x034:  jne    0853022b <+0x1b>
08530246 +0x036:  jmp    08530288 <+0x78>
08530248 +0x038:  mov    %edx,%edi
0853024a +0x03a:  mov    %eax,-&_ZL14gUnicodeBuffer+0xed20(%ebp)
08530250 +0x040:  test   %ebx,%ebx
08530252 +0x042:  je     08530278 <+0x68>
08530254 +0x044:  mov    $0x1,%eax
08530259 +0x049:  sub    %esi,%eax
0853025b +0x04b:  imul   $0x7b8,%eax,%eax
08530261 +0x051:  lea    (%ebx,%eax,1),%esi
08530264 +0x054:  cmp    %ebx,%esi
08530266 +0x056:  je     08530278 <+0x68>
08530268 +0x058:  sub    $0x7b8,%esi
0853026e +0x05e:  mov    %esi,(%esp)
08530271 +0x061:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
08530276 +0x066:  jmp    08530264 <+0x54>
08530278 +0x068:  mov    -&_ZL14gUnicodeBuffer+0xed20(%ebp),%eax
0853027e +0x06e:  mov    %edi,%edx
08530280 +0x070:  mov    %eax,(%esp)
08530283 +0x073:  call   08ae3750 <_Unwind_Resume>
08530288 +0x078:  lea    -0xd0ff(%ebp),%eax
0853028e +0x07e:  mov    %eax,(%esp)
08530291 +0x081:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
08530296 +0x086:  lea    -0xd0ff(%ebp),%eax
0853029c +0x08c:  mov    %eax,0x4(%esp)
085302a0 +0x090:  lea    -0xfc0(%ebp),%eax
085302a6 +0x096:  mov    %eax,(%esp)
085302a9 +0x099:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
085302ae +0x09e:  lea    -&_ZL14gUnicodeBuffer+0xed12(%ebp),%eax
085302b4 +0x0a4:  mov    %eax,(%esp)
085302b7 +0x0a7:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
085302bc +0x0ac:  lea    -&_ZL14gUnicodeBuffer+0xed12(%ebp),%eax
085302c2 +0x0b2:  mov    %eax,0x4(%esp)
085302c6 +0x0b6:  lea    -0xfc0(%ebp),%eax
085302cc +0x0bc:  add    $0x7b8,%eax
085302d1 +0x0c1:  mov    %eax,(%esp)
085302d4 +0x0c4:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
085302d9 +0x0c9:  mov    0x8(%ebp),%eax
085302dc +0x0cc:  mov    0x20(%eax),%eax
085302df +0x0cf:  mov    %eax,(%esp)
085302e2 +0x0d2:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085302e7 +0x0d7:  add    $0xda,%eax
085302ec +0x0dc:  mov    %eax,0x4(%esp)
085302f0 +0x0e0:  lea    -0xfc0(%ebp),%eax
085302f6 +0x0e6:  mov    %eax,(%esp)
085302f9 +0x0e9:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
085302fe +0x0ee:  mov    0x8(%ebp),%eax
08530301 +0x0f1:  mov    0x24(%eax),%eax
08530304 +0x0f4:  mov    %eax,(%esp)
08530307 +0x0f7:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0853030c +0x0fc:  add    $0xda,%eax
08530311 +0x101:  mov    %eax,0x4(%esp)
08530315 +0x105:  lea    -0xfc0(%ebp),%eax
0853031b +0x10b:  add    $0x7b8,%eax
08530320 +0x110:  mov    %eax,(%esp)
08530323 +0x113:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
08530328 +0x118:  movl   $0x0,-0x30(%ebp)
0853032f +0x11f:  movl   $0x0,-0x2c(%ebp)
08530336 +0x126:  movl   $0x0,-0x28(%ebp)
0853033d +0x12d:  jmp    085307cb <+0x5bb>
08530342 +0x132:  movl   $0x0,-0x30(%ebp)
08530349 +0x139:  movl   $0x3,-0x24(%ebp)
08530350 +0x140:  jmp    08530382 <+0x172>
08530352 +0x142:  mov    -0x28(%ebp),%ebx
08530355 +0x145:  mov    -0x24(%ebp),%edx
08530358 +0x148:  mov    0x8(%ebp),%ecx
0853035b +0x14b:  mov    %edx,%eax
0853035d +0x14d:  shl    $0x3,%eax
08530360 +0x150:  add    %edx,%eax
08530362 +0x152:  shl    $0x3,%eax
08530365 +0x155:  imul   $0x798,%ebx,%edx
0853036b +0x15b:  add    %edx,%eax
0853036d +0x15d:  lea    (%ecx,%eax,1),%eax
08530370 +0x160:  add    $0x30,%eax
08530373 +0x163:  mov    0xb(%eax),%eax
08530376 +0x166:  test   %eax,%eax
08530378 +0x168:  je     0853037e <+0x16e>
0853037a +0x16a:  addl   $0x1,-0x30(%ebp)
0853037e +0x16e:  addl   $0x1,-0x24(%ebp)
08530382 +0x172:  cmpl   $0x1a,-0x24(%ebp)
08530386 +0x176:  setle  %al
08530389 +0x179:  test   %al,%al
0853038b +0x17b:  jne    08530352 <+0x142>
0853038d +0x17d:  mov    -0x28(%ebp),%edx
08530390 +0x180:  mov    0x8(%ebp),%eax
08530393 +0x183:  add    $0x3d8,%edx
08530399 +0x189:  mov    (%eax,%edx,4),%eax
0853039c +0x18c:  test   %eax,%eax
0853039e +0x18e:  jle    0853042a <+0x21a>
085303a4 +0x194:  addl   $0x1,-0x30(%ebp)
085303a8 +0x198:  mov    $0x1,%eax
085303ad +0x19d:  mov    %eax,%edx
085303af +0x19f:  sub    -0x28(%ebp),%edx
085303b2 +0x1a2:  mov    0x8(%ebp),%eax
085303b5 +0x1a5:  add    $0x8,%edx
085303b8 +0x1a8:  mov    (%eax,%edx,4),%eax
085303bb +0x1ab:  test   %eax,%eax
085303bd +0x1ad:  je     0853042a <+0x21a>
085303bf +0x1af:  mov    -0x28(%ebp),%edx
085303c2 +0x1b2:  mov    0x8(%ebp),%eax
085303c5 +0x1b5:  add    $0x3d8,%edx
085303cb +0x1bb:  mov    (%eax,%edx,4),%eax
085303ce +0x1be:  mov    $0x1,%edx
085303d3 +0x1c3:  sub    -0x28(%ebp),%edx
085303d6 +0x1c6:  lea    -0xfc0(%ebp),%ecx
085303dc +0x1cc:  imul   $0x7b8,%edx,%edx
085303e2 +0x1d2:  lea    (%ecx,%edx,1),%edx
085303e5 +0x1d5:  movl   $0x0,0x10(%esp)
085303ed +0x1dd:  movl   $0x0,0xc(%esp)
085303f5 +0x1e5:  movl   $0x1,0x8(%esp)
085303fd +0x1ed:  mov    %eax,0x4(%esp)
08530401 +0x1f1:  mov    %edx,(%esp)
08530404 +0x1f4:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08530409 +0x1f9:  mov    %eax,-0x20(%ebp)
0853040c +0x1fc:  mov    -0x28(%ebp),%edx
0853040f +0x1ff:  mov    0x8(%ebp),%eax
08530412 +0x202:  add    $0x3d8,%edx
08530418 +0x208:  mov    (%eax,%edx,4),%eax
0853041b +0x20b:  cmp    -0x20(%ebp),%eax
0853041e +0x20e:  je     0853042a <+0x21a>
08530420 +0x210:  mov    $0x0,%esi
08530425 +0x215:  jmp    08530817 <+0x607>
0853042a +0x21a:  movl   $0x3,-0x1c(%ebp)
08530431 +0x221:  jmp    085307b8 <+0x5a8>
08530436 +0x226:  mov    $0x1,%eax
0853043b +0x22b:  mov    %eax,%edx
0853043d +0x22d:  sub    -0x28(%ebp),%edx
08530440 +0x230:  mov    0x8(%ebp),%eax
08530443 +0x233:  add    $0x8,%edx
08530446 +0x236:  mov    (%eax,%edx,4),%eax
08530449 +0x239:  test   %eax,%eax
0853044b +0x23b:  je     085307b4 <+0x5a4>
08530451 +0x241:  mov    -0x28(%ebp),%ebx
08530454 +0x244:  mov    -0x1c(%ebp),%edx
08530457 +0x247:  mov    0x8(%ebp),%ecx
0853045a +0x24a:  mov    %edx,%eax
0853045c +0x24c:  shl    $0x3,%eax
0853045f +0x24f:  add    %edx,%eax
08530461 +0x251:  shl    $0x3,%eax
08530464 +0x254:  imul   $0x798,%ebx,%edx
0853046a +0x25a:  add    %edx,%eax
0853046c +0x25c:  lea    (%ecx,%eax,1),%eax
0853046f +0x25f:  add    $0x30,%eax
08530472 +0x262:  mov    0xb(%eax),%eax
08530475 +0x265:  test   %eax,%eax
08530477 +0x267:  je     085307b4 <+0x5a4>
0853047d +0x26d:  mov    -0x28(%ebp),%ebx
08530480 +0x270:  mov    -0x1c(%ebp),%edx
08530483 +0x273:  mov    0x8(%ebp),%ecx
08530486 +0x276:  mov    %edx,%eax
08530488 +0x278:  shl    $0x3,%eax
0853048b +0x27b:  add    %edx,%eax
0853048d +0x27d:  shl    $0x3,%eax
08530490 +0x280:  imul   $0x798,%ebx,%edx
08530496 +0x286:  add    %edx,%eax
08530498 +0x288:  lea    (%ecx,%eax,1),%eax
0853049b +0x28b:  add    $0x30,%eax
0853049e +0x28e:  movzbl 0xa(%eax),%eax
085304a2 +0x292:  cmp    $0x8,%al
085304a4 +0x294:  jne    08530572 <+0x362>
085304aa +0x29a:  mov    -0x28(%ebp),%esi
085304ad +0x29d:  mov    -0x1c(%ebp),%edx
085304b0 +0x2a0:  mov    $0x1,%eax
085304b5 +0x2a5:  sub    -0x28(%ebp),%eax
085304b8 +0x2a8:  lea    -0xfc0(%ebp),%ecx
085304be +0x2ae:  imul   $0x7b8,%eax,%eax
085304c4 +0x2b4:  add    %eax,%ecx
085304c6 +0x2b6:  movl   $0x0,0x48(%esp)
085304ce +0x2be:  movl   $0x1,0x44(%esp)
085304d6 +0x2c6:  mov    0x8(%ebp),%ebx
085304d9 +0x2c9:  mov    %edx,%eax
085304db +0x2cb:  shl    $0x3,%eax
085304de +0x2ce:  add    %edx,%eax
085304e0 +0x2d0:  shl    $0x3,%eax
085304e3 +0x2d3:  imul   $0x798,%esi,%edx
085304e9 +0x2d9:  add    %edx,%eax
085304eb +0x2db:  lea    (%ebx,%eax,1),%eax
085304ee +0x2de:  add    $0x30,%eax
085304f1 +0x2e1:  mov    0x9(%eax),%edx
085304f4 +0x2e4:  mov    %edx,0x4(%esp)
085304f8 +0x2e8:  mov    0xd(%eax),%edx
085304fb +0x2eb:  mov    %edx,0x8(%esp)
085304ff +0x2ef:  mov    0x11(%eax),%edx
08530502 +0x2f2:  mov    %edx,0xc(%esp)
08530506 +0x2f6:  mov    0x15(%eax),%edx
08530509 +0x2f9:  mov    %edx,0x10(%esp)
0853050d +0x2fd:  mov    0x19(%eax),%edx
08530510 +0x300:  mov    %edx,0x14(%esp)
08530514 +0x304:  mov    0x1d(%eax),%edx
08530517 +0x307:  mov    %edx,0x18(%esp)
0853051b +0x30b:  mov    0x21(%eax),%edx
0853051e +0x30e:  mov    %edx,0x1c(%esp)
08530522 +0x312:  mov    0x25(%eax),%edx
08530525 +0x315:  mov    %edx,0x20(%esp)
08530529 +0x319:  mov    0x29(%eax),%edx
0853052c +0x31c:  mov    %edx,0x24(%esp)
08530530 +0x320:  mov    0x2d(%eax),%edx
08530533 +0x323:  mov    %edx,0x28(%esp)
08530537 +0x327:  mov    0x31(%eax),%edx
0853053a +0x32a:  mov    %edx,0x2c(%esp)
0853053e +0x32e:  mov    0x35(%eax),%edx
08530541 +0x331:  mov    %edx,0x30(%esp)
08530545 +0x335:  mov    0x39(%eax),%edx
08530548 +0x338:  mov    %edx,0x34(%esp)
0853054c +0x33c:  mov    0x3d(%eax),%edx
0853054f +0x33f:  mov    %edx,0x38(%esp)
08530553 +0x343:  mov    0x41(%eax),%edx
08530556 +0x346:  mov    %edx,0x3c(%esp)
0853055a +0x34a:  movzbl 0x45(%eax),%eax
0853055e +0x34e:  mov    %al,0x40(%esp)
08530562 +0x352:  mov    %ecx,(%esp)
08530565 +0x355:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
0853056a +0x35a:  mov    %eax,-0x2c(%ebp)
0853056d +0x35d:  jmp    085306ca <+0x4ba>
08530572 +0x362:  mov    -0x28(%ebp),%ebx
08530575 +0x365:  mov    -0x1c(%ebp),%edx
08530578 +0x368:  mov    0x8(%ebp),%ecx
0853057b +0x36b:  mov    %edx,%eax
0853057d +0x36d:  shl    $0x3,%eax
08530580 +0x370:  add    %edx,%eax
08530582 +0x372:  shl    $0x3,%eax
08530585 +0x375:  imul   $0x798,%ebx,%edx
0853058b +0x37b:  add    %edx,%eax
0853058d +0x37d:  lea    (%ecx,%eax,1),%eax
08530590 +0x380:  add    $0x30,%eax
08530593 +0x383:  movzbl 0x8(%eax),%eax
08530597 +0x387:  cmp    $0x7,%al
08530599 +0x389:  jne    085305ff <+0x3ef>
0853059b +0x38b:  mov    -0x28(%ebp),%ecx
0853059e +0x38e:  mov    -0x1c(%ebp),%edx
085305a1 +0x391:  mov    %edx,%eax
085305a3 +0x393:  shl    $0x3,%eax
085305a6 +0x396:  add    %edx,%eax
085305a8 +0x398:  shl    $0x3,%eax
085305ab +0x39b:  imul   $0x798,%ecx,%edx
085305b1 +0x3a1:  add    %edx,%eax
085305b3 +0x3a3:  add    $0x30,%eax
085305b6 +0x3a6:  add    0x8(%ebp),%eax
085305b9 +0x3a9:  lea    0x9(%eax),%edx
085305bc +0x3ac:  mov    $0x1,%eax
085305c1 +0x3b1:  sub    -0x28(%ebp),%eax
085305c4 +0x3b4:  lea    -0xfc0(%ebp),%ecx
085305ca +0x3ba:  imul   $0x7b8,%eax,%eax
085305d0 +0x3c0:  lea    (%ecx,%eax,1),%eax
085305d3 +0x3c3:  movl   $0x1,0x10(%esp)
085305db +0x3cb:  movl   $0x0,0xc(%esp)
085305e3 +0x3d3:  movl   $0x1a,0x8(%esp)
085305eb +0x3db:  mov    %edx,0x4(%esp)
085305ef +0x3df:  mov    %eax,(%esp)
085305f2 +0x3e2:  call   0850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)
085305f7 +0x3e7:  mov    %eax,-0x2c(%ebp)
085305fa +0x3ea:  jmp    085306ca <+0x4ba>
085305ff +0x3ef:  mov    -0x28(%ebp),%esi
08530602 +0x3f2:  mov    -0x1c(%ebp),%edx
08530605 +0x3f5:  mov    $0x1,%eax
0853060a +0x3fa:  sub    -0x28(%ebp),%eax
0853060d +0x3fd:  lea    -0xfc0(%ebp),%ecx
08530613 +0x403:  imul   $0x7b8,%eax,%eax
08530619 +0x409:  add    %eax,%ecx
0853061b +0x40b:  movl   $0x1,0x4c(%esp)
08530623 +0x413:  movl   $0x0,0x48(%esp)
0853062b +0x41b:  movl   $0x1,0x44(%esp)
08530633 +0x423:  mov    0x8(%ebp),%ebx
08530636 +0x426:  mov    %edx,%eax
08530638 +0x428:  shl    $0x3,%eax
0853063b +0x42b:  add    %edx,%eax
0853063d +0x42d:  shl    $0x3,%eax
08530640 +0x430:  imul   $0x798,%esi,%edx
08530646 +0x436:  add    %edx,%eax
08530648 +0x438:  lea    (%ebx,%eax,1),%eax
0853064b +0x43b:  add    $0x30,%eax
0853064e +0x43e:  mov    0x9(%eax),%edx
08530651 +0x441:  mov    %edx,0x4(%esp)
08530655 +0x445:  mov    0xd(%eax),%edx
08530658 +0x448:  mov    %edx,0x8(%esp)
0853065c +0x44c:  mov    0x11(%eax),%edx
0853065f +0x44f:  mov    %edx,0xc(%esp)
08530663 +0x453:  mov    0x15(%eax),%edx
08530666 +0x456:  mov    %edx,0x10(%esp)
0853066a +0x45a:  mov    0x19(%eax),%edx
0853066d +0x45d:  mov    %edx,0x14(%esp)
08530671 +0x461:  mov    0x1d(%eax),%edx
08530674 +0x464:  mov    %edx,0x18(%esp)
08530678 +0x468:  mov    0x21(%eax),%edx
0853067b +0x46b:  mov    %edx,0x1c(%esp)
0853067f +0x46f:  mov    0x25(%eax),%edx
08530682 +0x472:  mov    %edx,0x20(%esp)
08530686 +0x476:  mov    0x29(%eax),%edx
08530689 +0x479:  mov    %edx,0x24(%esp)
0853068d +0x47d:  mov    0x2d(%eax),%edx
08530690 +0x480:  mov    %edx,0x28(%esp)
08530694 +0x484:  mov    0x31(%eax),%edx
08530697 +0x487:  mov    %edx,0x2c(%esp)
0853069b +0x48b:  mov    0x35(%eax),%edx
0853069e +0x48e:  mov    %edx,0x30(%esp)
085306a2 +0x492:  mov    0x39(%eax),%edx
085306a5 +0x495:  mov    %edx,0x34(%esp)
085306a9 +0x499:  mov    0x3d(%eax),%edx
085306ac +0x49c:  mov    %edx,0x38(%esp)
085306b0 +0x4a0:  mov    0x41(%eax),%edx
085306b3 +0x4a3:  mov    %edx,0x3c(%esp)
085306b7 +0x4a7:  movzbl 0x45(%eax),%eax
085306bb +0x4ab:  mov    %al,0x40(%esp)
085306bf +0x4af:  mov    %ecx,(%esp)
085306c2 +0x4b2:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085306c7 +0x4b7:  mov    %eax,-0x2c(%ebp)
085306ca +0x4ba:  cmpl   $0x0,-0x2c(%ebp)
085306ce +0x4be:  jns    085307b4 <+0x5a4>
085306d4 +0x4c4:  mov    -0x28(%ebp),%ebx
085306d7 +0x4c7:  mov    -0x1c(%ebp),%edx
085306da +0x4ca:  mov    0x8(%ebp),%ecx
085306dd +0x4cd:  mov    %edx,%eax
085306df +0x4cf:  shl    $0x3,%eax
085306e2 +0x4d2:  add    %edx,%eax
085306e4 +0x4d4:  shl    $0x3,%eax
085306e7 +0x4d7:  imul   $0x798,%ebx,%edx
085306ed +0x4dd:  add    %edx,%eax
085306ef +0x4df:  lea    (%ecx,%eax,1),%eax
085306f2 +0x4e2:  add    $0x30,%eax
085306f5 +0x4e5:  movzbl 0xa(%eax),%eax
085306f9 +0x4e9:  cmp    $0x8,%al
085306fb +0x4eb:  jne    08530756 <+0x546>
085306fd +0x4ed:  mov    $0x1,%eax
08530702 +0x4f2:  mov    %eax,%edx
08530704 +0x4f4:  sub    -0x28(%ebp),%edx
08530707 +0x4f7:  mov    0x8(%ebp),%eax
0853070a +0x4fa:  add    $0x8,%edx
0853070d +0x4fd:  mov    (%eax,%edx,4),%eax
08530710 +0x500:  mov    %eax,(%esp)
08530713 +0x503:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08530718 +0x508:  mov    %eax,%ebx
0853071a +0x50a:  movl   $0x5,0xc(%esp)
08530722 +0x512:  movl   $0xba7,0x8(%esp)
0853072a +0x51a:  movl   $&_ZZN11CTradeSpace10checkTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
08530732 +0x522:  lea    -0x50(%ebp),%eax
08530735 +0x525:  mov    %eax,(%esp)
08530738 +0x528:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0853073d +0x52d:  mov    %ebx,0x8(%esp)
08530741 +0x531:  movl   $"try insert_item(INVEN_TYPE_AVATAR) fail - fatal! ch=%d",0x4(%esp)
08530749 +0x539:  lea    -0x50(%ebp),%eax
0853074c +0x53c:  mov    %eax,(%esp)
0853074f +0x53f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08530754 +0x544:  jmp    085307ad <+0x59d>
08530756 +0x546:  mov    $0x1,%eax
0853075b +0x54b:  mov    %eax,%edx
0853075d +0x54d:  sub    -0x28(%ebp),%edx
08530760 +0x550:  mov    0x8(%ebp),%eax
08530763 +0x553:  add    $0x8,%edx
08530766 +0x556:  mov    (%eax,%edx,4),%eax
08530769 +0x559:  mov    %eax,(%esp)
0853076c +0x55c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08530771 +0x561:  mov    %eax,%ebx
08530773 +0x563:  movl   $0x5,0xc(%esp)
0853077b +0x56b:  movl   $0xbab,0x8(%esp)
08530783 +0x573:  movl   $&_ZZN11CTradeSpace10checkTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0853078b +0x57b:  lea    -0x40(%ebp),%eax
0853078e +0x57e:  mov    %eax,(%esp)
08530791 +0x581:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08530796 +0x586:  mov    %ebx,0x8(%esp)
0853079a +0x58a:  movl   $"try insert_item(INVEN_TYPE_INVENTORY) fail - fatal! ch=%d",0x4(%esp)
085307a2 +0x592:  lea    -0x40(%ebp),%eax
085307a5 +0x595:  mov    %eax,(%esp)
085307a8 +0x598:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085307ad +0x59d:  mov    $0x0,%esi
085307b2 +0x5a2:  jmp    08530817 <+0x607>
085307b4 +0x5a4:  addl   $0x1,-0x1c(%ebp)
085307b8 +0x5a8:  cmpl   $0x1a,-0x1c(%ebp)
085307bc +0x5ac:  setle  %al
085307bf +0x5af:  test   %al,%al
085307c1 +0x5b1:  jne    08530436 <+0x226>
085307c7 +0x5b7:  addl   $0x1,-0x28(%ebp)
085307cb +0x5bb:  cmpl   $0x1,-0x28(%ebp)
085307cf +0x5bf:  setle  %al
085307d2 +0x5c2:  test   %al,%al
085307d4 +0x5c4:  jne    08530342 <+0x132>
085307da +0x5ca:  mov    $0x1,%esi
085307df +0x5cf:  jmp    08530817 <+0x607>
085307e1 +0x5d1:  mov    %edx,%esi
085307e3 +0x5d3:  mov    %eax,%edi
085307e5 +0x5d5:  lea    -0xfc0(%ebp),%eax
085307eb +0x5db:  lea    0xf70(%eax),%ebx
085307f1 +0x5e1:  lea    -0xfc0(%ebp),%eax
085307f7 +0x5e7:  cmp    %eax,%ebx
085307f9 +0x5e9:  je     0853080b <+0x5fb>
085307fb +0x5eb:  sub    $0x7b8,%ebx
08530801 +0x5f1:  mov    %ebx,(%esp)
08530804 +0x5f4:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
08530809 +0x5f9:  jmp    085307f1 <+0x5e1>
0853080b +0x5fb:  mov    %edi,%eax
0853080d +0x5fd:  mov    %esi,%edx
0853080f +0x5ff:  mov    %eax,(%esp)
08530812 +0x602:  call   08ae3750 <_Unwind_Resume>
08530817 +0x607:  lea    -0xfc0(%ebp),%eax
0853081d +0x60d:  lea    0xf70(%eax),%ebx
08530823 +0x613:  lea    -0xfc0(%ebp),%eax
08530829 +0x619:  cmp    %eax,%ebx
0853082b +0x61b:  je     0853083d <+0x62d>
0853082d +0x61d:  sub    $0x7b8,%ebx
08530833 +0x623:  mov    %ebx,(%esp)
08530836 +0x626:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0853083b +0x62b:  jmp    08530823 <+0x613>
0853083d +0x62d:  mov    %esi,%eax
0853083f +0x62f:  add    $&_ZL14gUnicodeBuffer+0xed70,%esp
08530845 +0x635:  pop    %ebx
08530846 +0x636:  pop    %esi
08530847 +0x637:  pop    %edi
08530848 +0x638:  pop    %ebp
08530849 +0x639:  ret
```

## 反编译 C

```c
// CTradeSpace::checkTrade @ 0x8530210

/* CTradeSpace::checkTrade() */

undefined4 __thiscall CTradeSpace::checkTrade(CTradeSpace *this)

{
  CInventory *pCVar1;
  int iVar2;
  undefined4 uVar3;
  InventoryMemory aIStack_19242 [49471];
  InventoryMemory local_d103 [49471];
  CInventory local_fc4 [1976];
  CInventory aCStack_80c [1976];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  pCVar1 = local_fc4;
  for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 0853022e to 08530232 has its CatchHandler @ 08530248 */
    CInventory::CInventory(pCVar1);
    pCVar1 = pCVar1 + 0x7b8;
  }
  InventoryMemory::InventoryMemory(local_d103);
  CInventory::SetInventoryMemory(local_fc4,local_d103);
  InventoryMemory::InventoryMemory(aIStack_19242);
  CInventory::SetInventoryMemory(aCStack_80c,aIStack_19242);
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
                    /* try { // try from 085302f9 to 085307ac has its CatchHandler @ 085307e1 */
  CInventory::setCopy(local_fc4,(CInventory *)(iVar2 + 0xda));
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24));
  CInventory::setCopy(aCStack_80c,(CInventory *)(iVar2 + 0xda));
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  do {
    if (1 < local_2c) {
      uVar3 = 1;
LAB_08530817:
      pCVar1 = (CInventory *)local_54;
      while (pCVar1 != local_fc4) {
        pCVar1 = pCVar1 + -0x7b8;
        CInventory::~CInventory(pCVar1);
      }
      return uVar3;
    }
    local_34 = 0;
    for (local_28 = 3; local_28 < 0x1b; local_28 = local_28 + 1) {
      if (*(int *)(this + local_28 * 0x48 + local_2c * 0x798 + 0x3b) != 0) {
        local_34 = local_34 + 1;
      }
    }
    if ((0 < *(int *)(this + (local_2c + 0x3d8) * 4)) &&
       (local_34 = local_34 + 1, *(int *)(this + (9 - local_2c) * 4) != 0)) {
      local_24 = CInventory::gain_money
                           (local_fc4 + (1 - local_2c) * 0x7b8,
                            *(undefined4 *)(this + (local_2c + 0x3d8) * 4),1,0,0);
      if (*(int *)(this + (local_2c + 0x3d8) * 4) != local_24) {
        uVar3 = 0;
        goto LAB_08530817;
      }
    }
    for (local_20 = 3; local_20 < 0x1b; local_20 = local_20 + 1) {
      if ((*(int *)(this + (9 - local_2c) * 4) != 0) &&
         (*(int *)(this + local_20 * 0x48 + local_2c * 0x798 + 0x3b) != 0)) {
        if (this[local_20 * 0x48 + local_2c * 0x798 + 0x3a] == (CTradeSpace)0x8) {
          iVar2 = local_20 * 0x48 + local_2c * 0x798;
          local_30 = CInventory::insertAvatarIntoInventory
                               (local_fc4 + (1 - local_2c) * 0x7b8,
                                *(undefined4 *)(this + iVar2 + 0x39),
                                *(undefined4 *)(this + iVar2 + 0x3d),
                                *(undefined4 *)(this + iVar2 + 0x41),
                                *(undefined4 *)(this + iVar2 + 0x45),
                                *(undefined4 *)(this + iVar2 + 0x49),
                                *(undefined4 *)(this + iVar2 + 0x4d),
                                *(undefined4 *)(this + iVar2 + 0x51),
                                *(undefined4 *)(this + iVar2 + 0x55),
                                *(undefined4 *)(this + iVar2 + 0x59),
                                *(undefined4 *)(this + iVar2 + 0x5d),
                                *(undefined4 *)(this + iVar2 + 0x61),
                                *(undefined4 *)(this + iVar2 + 0x65),
                                *(undefined4 *)(this + iVar2 + 0x69),
                                *(undefined4 *)(this + iVar2 + 0x6d),
                                *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],1,0);
        }
        else if (this[local_20 * 0x48 + local_2c * 0x798 + 0x38] == (CTradeSpace)0x7) {
          local_30 = CInventory::insertItemIntoCreature
                               (local_fc4 + (1 - local_2c) * 0x7b8,
                                this + local_20 * 0x48 + local_2c * 0x798 + 0x39,0x1a,0,1);
        }
        else {
          iVar2 = local_20 * 0x48 + local_2c * 0x798;
          local_30 = CInventory::insertItemIntoInventory
                               (local_fc4 + (1 - local_2c) * 0x7b8,
                                *(undefined4 *)(this + iVar2 + 0x39),
                                *(undefined4 *)(this + iVar2 + 0x3d),
                                *(undefined4 *)(this + iVar2 + 0x41),
                                *(undefined4 *)(this + iVar2 + 0x45),
                                *(undefined4 *)(this + iVar2 + 0x49),
                                *(undefined4 *)(this + iVar2 + 0x4d),
                                *(undefined4 *)(this + iVar2 + 0x51),
                                *(undefined4 *)(this + iVar2 + 0x55),
                                *(undefined4 *)(this + iVar2 + 0x59),
                                *(undefined4 *)(this + iVar2 + 0x5d),
                                *(undefined4 *)(this + iVar2 + 0x61),
                                *(undefined4 *)(this + iVar2 + 0x65),
                                *(undefined4 *)(this + iVar2 + 0x69),
                                *(undefined4 *)(this + iVar2 + 0x6d),
                                *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],1,0,1);
        }
        if (local_30 < 0) {
          if (this[local_20 * 0x48 + local_2c * 0x798 + 0x3a] == (CTradeSpace)0x8) {
            uVar3 = CUserCharacInfo::getCurCharacNo
                              (*(CUserCharacInfo **)(this + (9 - local_2c) * 4));
            cMyTrace::cMyTrace(local_54,"bool CTradeSpace::checkTrade()",0xba7,5);
            cMyTrace::operator()
                      (local_54,"try insert_item(INVEN_TYPE_AVATAR) fail - fatal! ch=%d",uVar3);
          }
          else {
            uVar3 = CUserCharacInfo::getCurCharacNo
                              (*(CUserCharacInfo **)(this + (9 - local_2c) * 4));
            cMyTrace::cMyTrace(local_44,"bool CTradeSpace::checkTrade()",0xbab,5);
            cMyTrace::operator()
                      (local_44,"try insert_item(INVEN_TYPE_INVENTORY) fail - fatal! ch=%d",uVar3);
          }
          uVar3 = 0;
          goto LAB_08530817;
        }
      }
    }
    local_2c = local_2c + 1;
  } while( true );
}
```
