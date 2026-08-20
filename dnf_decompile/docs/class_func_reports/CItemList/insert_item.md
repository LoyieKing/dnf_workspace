# insert_item

`_ZN9CItemList11insert_itemEiiP5CItem`

`CItemList::insert_item(int, int, CItem*)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x0851129e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0851129e  _ZN9CItemList11insert_itemEiiP5CItem
#           CItemList::insert_item(int, int, CItem*)
# range [0x0851129e, 0x08511737]
0851129e +0x000:  push   %ebp
0851129f +0x001:  mov    %esp,%ebp
085112a1 +0x003:  push   %esi
085112a2 +0x004:  push   %ebx
085112a3 +0x005:  sub    $0x130,%esp
085112a9 +0x00b:  lea    -0xdc(%ebp),%eax
085112af +0x011:  mov    %eax,(%esp)
085112b2 +0x014:  call   0851873c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4d71>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4d71
085112b7 +0x019:  mov    0x8(%ebp),%eax
085112ba +0x01c:  mov    (%eax),%ecx
085112bc +0x01e:  mov    0xc(%ebp),%edx
085112bf +0x021:  mov    %edx,%eax
085112c1 +0x023:  shl    $0x2,%eax
085112c4 +0x026:  add    %edx,%eax
085112c6 +0x028:  shl    $0x2,%eax
085112c9 +0x02b:  add    %eax,%ecx
085112cb +0x02d:  lea    -0x110(%ebp),%eax
085112d1 +0x033:  lea    0x10(%ebp),%edx
085112d4 +0x036:  mov    %edx,0x8(%esp)
085112d8 +0x03a:  mov    %ecx,0x4(%esp)
085112dc +0x03e:  mov    %eax,(%esp)
085112df +0x041:  call   08518742 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4d77>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4d77
085112e4 +0x046:  sub    $0x4,%esp
085112e7 +0x049:  mov    -0x110(%ebp),%eax
085112ed +0x04f:  mov    -0x10c(%ebp),%edx
085112f3 +0x055:  mov    %eax,-0xdc(%ebp)
085112f9 +0x05b:  mov    %edx,-0xd8(%ebp)
085112ff +0x061:  mov    0x8(%ebp),%eax
08511302 +0x064:  mov    (%eax),%ecx
08511304 +0x066:  mov    0xc(%ebp),%edx
08511307 +0x069:  mov    %edx,%eax
08511309 +0x06b:  shl    $0x2,%eax
0851130c +0x06e:  add    %edx,%eax
0851130e +0x070:  shl    $0x2,%eax
08511311 +0x073:  lea    (%ecx,%eax,1),%edx
08511314 +0x076:  lea    -0xd4(%ebp),%eax
0851131a +0x07c:  mov    %edx,0x4(%esp)
0851131e +0x080:  mov    %eax,(%esp)
08511321 +0x083:  call   0839461c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240bc
08511326 +0x088:  sub    $0x4,%esp
08511329 +0x08b:  lea    -0xd4(%ebp),%eax
0851132f +0x091:  mov    %eax,0x4(%esp)
08511333 +0x095:  lea    -0xdc(%ebp),%eax
08511339 +0x09b:  mov    %eax,(%esp)
0851133c +0x09e:  call   0851876e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4da3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4da3
08511341 +0x0a3:  test   %al,%al
08511343 +0x0a5:  je     085113f2 <+0x154>
08511349 +0x0ab:  lea    0x14(%ebp),%eax
0851134c +0x0ae:  mov    %eax,0x8(%esp)
08511350 +0x0b2:  lea    0x10(%ebp),%eax
08511353 +0x0b5:  mov    %eax,0x4(%esp)
08511357 +0x0b9:  lea    -0xc0(%ebp),%eax
0851135d +0x0bf:  mov    %eax,(%esp)
08511360 +0x0c2:  call   08518782 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4db7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4db7
08511365 +0x0c7:  mov    0x8(%ebp),%eax
08511368 +0x0ca:  mov    (%eax),%ecx
0851136a +0x0cc:  mov    0xc(%ebp),%edx
0851136d +0x0cf:  mov    %edx,%eax
0851136f +0x0d1:  shl    $0x2,%eax
08511372 +0x0d4:  add    %edx,%eax
08511374 +0x0d6:  shl    $0x2,%eax
08511377 +0x0d9:  add    %eax,%ecx
08511379 +0x0db:  lea    -0xcc(%ebp),%eax
0851137f +0x0e1:  lea    -0xc0(%ebp),%edx
08511385 +0x0e7:  mov    %edx,0x8(%esp)
08511389 +0x0eb:  mov    %ecx,0x4(%esp)
0851138d +0x0ef:  mov    %eax,(%esp)
08511390 +0x0f2:  call   085187b0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4de5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4de5
08511395 +0x0f7:  sub    $0x4,%esp
08511398 +0x0fa:  lea    0x14(%ebp),%eax
0851139b +0x0fd:  mov    %eax,0x8(%esp)
0851139f +0x101:  lea    0x10(%ebp),%eax
085113a2 +0x104:  mov    %eax,0x4(%esp)
085113a6 +0x108:  lea    -0xac(%ebp),%eax
085113ac +0x10e:  mov    %eax,(%esp)
085113af +0x111:  call   08518782 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4db7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4db7
085113b4 +0x116:  mov    0x8(%ebp),%eax
085113b7 +0x119:  lea    0x4(%eax),%ecx
085113ba +0x11c:  lea    -0xb8(%ebp),%eax
085113c0 +0x122:  lea    -0xac(%ebp),%edx
085113c6 +0x128:  mov    %edx,0x8(%esp)
085113ca +0x12c:  mov    %ecx,0x4(%esp)
085113ce +0x130:  mov    %eax,(%esp)
085113d1 +0x133:  call   085187b0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4de5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4de5
085113d6 +0x138:  sub    $0x4,%esp
085113d9 +0x13b:  mov    0x14(%ebp),%eax
085113dc +0x13e:  mov    %eax,(%esp)
085113df +0x141:  call   08514404 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xa39>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xa39
085113e4 +0x146:  test   %eax,%eax
085113e6 +0x148:  setne  %al
085113e9 +0x14b:  test   %al,%al
085113eb +0x14d:  jne    08511436 <+0x198>
085113ed +0x14f:  jmp    085114b2 <+0x214>
085113f2 +0x154:  mov    0x10(%ebp),%eax
085113f5 +0x157:  mov    %eax,0x18(%esp)
085113f9 +0x15b:  mov    0xc(%ebp),%eax
085113fc +0x15e:  mov    %eax,0x14(%esp)
08511400 +0x162:  movl   $"Insert Fail Item Group[%d] Index: %d",0x10(%esp)
08511408 +0x16a:  movl   $0x81f,0xc(%esp)
08511410 +0x172:  movl   $&_ZZN9CItemList11insert_itemEiiP5CItemE19__PRETTY_FUNCTION__,0x8(%esp)
08511418 +0x17a:  movl   $"item.cpp",0x4(%esp)
08511420 +0x182:  movl   $0x1,(%esp)
08511427 +0x189:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0851142c +0x18e:  mov    $0x0,%eax
08511431 +0x193:  jmp    0851172e <+0x490>
08511436 +0x198:  mov    0x14(%ebp),%eax
08511439 +0x19b:  mov    %eax,(%esp)
0851143c +0x19e:  call   08514404 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xa39>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xa39
08511441 +0x1a3:  mov    %eax,-0x8c(%ebp)
08511447 +0x1a9:  mov    0x10(%ebp),%eax
0851144a +0x1ac:  mov    %eax,-0x88(%ebp)
08511450 +0x1b2:  lea    -0x94(%ebp),%eax
08511456 +0x1b8:  lea    -0x8c(%ebp),%edx
0851145c +0x1be:  mov    %edx,0x8(%esp)
08511460 +0x1c2:  lea    -0x88(%ebp),%edx
08511466 +0x1c8:  mov    %edx,0x4(%esp)
0851146a +0x1cc:  mov    %eax,(%esp)
0851146d +0x1cf:  call   085187dc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4e11>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4e11
08511472 +0x1d4:  sub    $0x4,%esp
08511475 +0x1d7:  lea    -0x94(%ebp),%eax
0851147b +0x1dd:  mov    %eax,0x4(%esp)
0851147f +0x1e1:  lea    -0x9c(%ebp),%eax
08511485 +0x1e7:  mov    %eax,(%esp)
08511488 +0x1ea:  call   08392dbc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2285c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2285c
0851148d +0x1ef:  mov    0x8(%ebp),%eax
08511490 +0x1f2:  lea    0x5c(%eax),%ecx
08511493 +0x1f5:  lea    -0xa4(%ebp),%eax
08511499 +0x1fb:  lea    -0x9c(%ebp),%edx
0851149f +0x201:  mov    %edx,0x8(%esp)
085114a3 +0x205:  mov    %ecx,0x4(%esp)
085114a7 +0x209:  mov    %eax,(%esp)
085114aa +0x20c:  call   08392dec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2288c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2288c
085114af +0x211:  sub    $0x4,%esp
085114b2 +0x214:  mov    0x14(%ebp),%eax
085114b5 +0x217:  mov    (%eax),%eax
085114b7 +0x219:  add    $0x4c,%eax
085114ba +0x21c:  mov    (%eax),%edx
085114bc +0x21e:  mov    0x14(%ebp),%eax
085114bf +0x221:  mov    %eax,(%esp)
085114c2 +0x224:  call   *%edx
085114c4 +0x226:  test   %al,%al
085114c6 +0x228:  je     08511729 <+0x48b>
085114cc +0x22e:  mov    0x14(%ebp),%eax
085114cf +0x231:  mov    %eax,(%esp)
085114d2 +0x234:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
085114d7 +0x239:  movzwl %ax,%esi
085114da +0x23c:  mov    0x14(%ebp),%eax
085114dd +0x23f:  mov    %eax,(%esp)
085114e0 +0x242:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
085114e5 +0x247:  movzbl %al,%ebx
085114e8 +0x24a:  mov    0x14(%ebp),%eax
085114eb +0x24d:  mov    %eax,(%esp)
085114ee +0x250:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085114f3 +0x255:  movzbl %al,%eax
085114f6 +0x258:  mov    %esi,0xc(%esp)
085114fa +0x25c:  mov    %ebx,0x8(%esp)
085114fe +0x260:  mov    %eax,0x4(%esp)
08511502 +0x264:  lea    -0xe0(%ebp),%eax
08511508 +0x26a:  mov    %eax,(%esp)
0851150b +0x26d:  call   08513f82 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5b7
08511510 +0x272:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08511515 +0x277:  lea    0x4e70(%eax),%ecx
0851151b +0x27d:  lea    -0xe4(%ebp),%eax
08511521 +0x283:  lea    -0xe0(%ebp),%edx
08511527 +0x289:  mov    %edx,0x8(%esp)
0851152b +0x28d:  mov    %ecx,0x4(%esp)
0851152f +0x291:  mov    %eax,(%esp)
08511532 +0x294:  call   08518826 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4e5b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4e5b
08511537 +0x299:  sub    $0x4,%esp
0851153a +0x29c:  mov    0x14(%ebp),%eax
0851153d +0x29f:  mov    %eax,(%esp)
08511540 +0x2a2:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08511545 +0x2a7:  mov    %eax,-0xe8(%ebp)
0851154b +0x2ad:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08511550 +0x2b2:  lea    0x4e70(%eax),%edx
08511556 +0x2b8:  lea    -0x84(%ebp),%eax
0851155c +0x2be:  mov    %edx,0x4(%esp)
08511560 +0x2c2:  mov    %eax,(%esp)
08511563 +0x2c5:  call   08392cca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2276a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2276a
08511568 +0x2ca:  sub    $0x4,%esp
0851156b +0x2cd:  lea    -0x84(%ebp),%eax
08511571 +0x2d3:  mov    %eax,0x4(%esp)
08511575 +0x2d7:  lea    -0xe4(%ebp),%eax
0851157b +0x2dd:  mov    %eax,(%esp)
0851157e +0x2e0:  call   08392cf0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22790>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22790
08511583 +0x2e5:  test   %al,%al
08511585 +0x2e7:  je     085115f5 <+0x357>
08511587 +0x2e9:  mov    0x14(%ebp),%eax
0851158a +0x2ec:  mov    %eax,(%esp)
0851158d +0x2ef:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08511592 +0x2f4:  mov    %eax,-0x68(%ebp)
08511595 +0x2f7:  lea    -0x70(%ebp),%eax
08511598 +0x2fa:  lea    -0xe8(%ebp),%edx
0851159e +0x300:  mov    %edx,0x8(%esp)
085115a2 +0x304:  lea    -0x68(%ebp),%edx
085115a5 +0x307:  mov    %edx,0x4(%esp)
085115a9 +0x30b:  mov    %eax,(%esp)
085115ac +0x30e:  call   08518852 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4e87>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4e87
085115b1 +0x313:  sub    $0x4,%esp
085115b4 +0x316:  lea    -0x70(%ebp),%eax
085115b7 +0x319:  mov    %eax,0x4(%esp)
085115bb +0x31d:  lea    -0x78(%ebp),%eax
085115be +0x320:  mov    %eax,(%esp)
085115c1 +0x323:  call   08518898 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4ecd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4ecd
085115c6 +0x328:  lea    -0xe4(%ebp),%eax
085115cc +0x32e:  mov    %eax,(%esp)
085115cf +0x331:  call   08392d22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x227c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x227c2
085115d4 +0x336:  lea    0x4(%eax),%ecx
085115d7 +0x339:  lea    -0x80(%ebp),%eax
085115da +0x33c:  lea    -0x78(%ebp),%edx
085115dd +0x33f:  mov    %edx,0x8(%esp)
085115e1 +0x343:  mov    %ecx,0x4(%esp)
085115e5 +0x347:  mov    %eax,(%esp)
085115e8 +0x34a:  call   085188c8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4efd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4efd
085115ed +0x34f:  sub    $0x4,%esp
085115f0 +0x352:  jmp    08511729 <+0x48b>
085115f5 +0x357:  lea    -0x100(%ebp),%eax
085115fb +0x35d:  mov    %eax,(%esp)
085115fe +0x360:  call   085188f4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4f29>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4f29
08511603 +0x365:  mov    0x14(%ebp),%eax
08511606 +0x368:  mov    %eax,(%esp)
08511609 +0x36b:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0851160e +0x370:  mov    %eax,-0x4c(%ebp)
08511611 +0x373:  lea    -0x54(%ebp),%eax
08511614 +0x376:  lea    -0xe8(%ebp),%edx
0851161a +0x37c:  mov    %edx,0x8(%esp)
0851161e +0x380:  lea    -0x4c(%ebp),%edx
08511621 +0x383:  mov    %edx,0x4(%esp)
08511625 +0x387:  mov    %eax,(%esp)
08511628 +0x38a:  call   08518852 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4e87>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4e87
0851162d +0x38f:  sub    $0x4,%esp
08511630 +0x392:  lea    -0x54(%ebp),%eax
08511633 +0x395:  mov    %eax,0x4(%esp)
08511637 +0x399:  lea    -0x5c(%ebp),%eax
0851163a +0x39c:  mov    %eax,(%esp)
0851163d +0x39f:  call   08518898 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4ecd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4ecd
08511642 +0x3a4:  lea    -0x64(%ebp),%eax
08511645 +0x3a7:  lea    -0x5c(%ebp),%edx
08511648 +0x3aa:  mov    %edx,0x8(%esp)
0851164c +0x3ae:  lea    -0x100(%ebp),%edx
08511652 +0x3b4:  mov    %edx,0x4(%esp)
08511656 +0x3b8:  mov    %eax,(%esp)
08511659 +0x3bb:  call   085188c8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4efd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4efd
0851165e +0x3c0:  sub    $0x4,%esp
08511661 +0x3c3:  lea    -0x24(%ebp),%eax
08511664 +0x3c6:  lea    -0x100(%ebp),%edx
0851166a +0x3cc:  mov    %edx,0x8(%esp)
0851166e +0x3d0:  lea    -0xe0(%ebp),%edx
08511674 +0x3d6:  mov    %edx,0x4(%esp)
08511678 +0x3da:  mov    %eax,(%esp)
0851167b +0x3dd:  call   08518907 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4f3c>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4f3c
08511680 +0x3e2:  sub    $0x4,%esp
08511683 +0x3e5:  lea    -0x24(%ebp),%eax
08511686 +0x3e8:  mov    %eax,0x4(%esp)
0851168a +0x3ec:  lea    -0x40(%ebp),%eax
0851168d +0x3ef:  mov    %eax,(%esp)
08511690 +0x3f2:  call   0851894c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4f81>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4f81
08511695 +0x3f7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0851169a +0x3fc:  lea    0x4e70(%eax),%ecx
085116a0 +0x402:  lea    -0x48(%ebp),%eax
085116a3 +0x405:  lea    -0x40(%ebp),%edx
085116a6 +0x408:  mov    %edx,0x8(%esp)
085116aa +0x40c:  mov    %ecx,0x4(%esp)
085116ae +0x410:  mov    %eax,(%esp)
085116b1 +0x413:  call   08518986 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4fbb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4fbb
085116b6 +0x418:  sub    $0x4,%esp
085116b9 +0x41b:  lea    -0x40(%ebp),%eax
085116bc +0x41e:  mov    %eax,(%esp)
085116bf +0x421:  call   083ceefa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68ec6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68ec6
085116c4 +0x426:  jmp    085116f0 <+0x452>
085116c6 +0x428:  mov    %edx,%ebx
085116c8 +0x42a:  mov    %eax,%esi
085116ca +0x42c:  lea    -0x40(%ebp),%eax
085116cd +0x42f:  mov    %eax,(%esp)
085116d0 +0x432:  call   083ceefa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68ec6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68ec6
085116d5 +0x437:  mov    %esi,%eax
085116d7 +0x439:  mov    %ebx,%edx
085116d9 +0x43b:  jmp    085116db <+0x43d>
085116db +0x43d:  mov    %edx,%ebx
085116dd +0x43f:  mov    %eax,%esi
085116df +0x441:  lea    -0x24(%ebp),%eax
085116e2 +0x444:  mov    %eax,(%esp)
085116e5 +0x447:  call   085152be <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18f3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18f3
085116ea +0x44c:  mov    %esi,%eax
085116ec +0x44e:  mov    %ebx,%edx
085116ee +0x450:  jmp    085116fd <+0x45f>
085116f0 +0x452:  lea    -0x24(%ebp),%eax
085116f3 +0x455:  mov    %eax,(%esp)
085116f6 +0x458:  call   085152be <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18f3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18f3
085116fb +0x45d:  jmp    0851171b <+0x47d>
085116fd +0x45f:  mov    %edx,%ebx
085116ff +0x461:  mov    %eax,%esi
08511701 +0x463:  lea    -0x100(%ebp),%eax
08511707 +0x469:  mov    %eax,(%esp)
0851170a +0x46c:  call   083ceee6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68eb2>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68eb2
0851170f +0x471:  mov    %esi,%eax
08511711 +0x473:  mov    %ebx,%edx
08511713 +0x475:  mov    %eax,(%esp)
08511716 +0x478:  call   08ae3750 <_Unwind_Resume>
0851171b +0x47d:  lea    -0x100(%ebp),%eax
08511721 +0x483:  mov    %eax,(%esp)
08511724 +0x486:  call   083ceee6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68eb2>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68eb2
08511729 +0x48b:  mov    $0x1,%eax
0851172e +0x490:  lea    -0x8(%ebp),%esp
08511731 +0x493:  add    $0x0,%esp
08511734 +0x496:  pop    %ebx
08511735 +0x497:  pop    %esi
08511736 +0x498:  pop    %ebp
08511737 +0x499:  ret
```

## 反编译 C

```c
// CItemList::insert_item @ 0x851129e

/* CItemList::insert_item(int, int, CItem*) */

undefined4 __thiscall CItemList::insert_item(CItemList *this,int param_1,int param_2,CItem *param_3)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  CItemList *pCVar7;
  pair<int_const,CItem*> *ppVar8;
  int local_114;
  undefined4 local_110;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_104 [24];
  undefined4 local_ec;
  _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
  local_e8 [4];
  BaseItemKey local_e4 [4];
  int local_e0;
  undefined4 local_dc;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_d8 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_d0 [12];
  pair<int_const,CItem*> local_c4 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_bc [12];
  pair<int_const,CItem*> local_b0 [8];
  pair local_a8 [8];
  pair<unsigned_long_const,int> local_a0 [8];
  ulong local_98 [2];
  undefined4 local_90;
  int local_8c;
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_88 [4];
  pair local_84 [8];
  pair<int_const,BaseItemValue> local_7c [8];
  int local_74 [2];
  undefined4 local_6c;
  pair local_68 [8];
  pair<int_const,BaseItemValue> local_60 [8];
  int local_58 [2];
  undefined4 local_50;
  pair local_4c [8];
  pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
  local_44 [28];
  pair<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
  local_28 [28];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
  ::_Hashtable_iterator();
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  find(&local_114);
  local_e0 = local_114;
  local_dc = local_110;
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  end(local_d8);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        *)&local_e0,(_Hashtable_iterator *)local_d8);
  if (cVar1 == '\0') {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::insert_item(int, int, CItem*)",0x81f,
               "Insert Fail Item Group[%d] Index: %d",param_1,param_2);
    uVar6 = 0;
  }
  else {
    std::pair<int_const,CItem*>::pair<int&,CItem*&>(local_c4,&param_2,&param_3);
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    insert(local_d0,(pair *)(*(int *)this + param_1 * 0x14));
    std::pair<int_const,CItem*>::pair<int&,CItem*&>(local_b0,&param_2,&param_3);
    pCVar7 = this + 4;
    ppVar8 = local_b0;
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    insert(local_bc,pCVar7);
    iVar5 = CItem::GetQuestItemDropBouns(param_3);
    if (iVar5 != 0) {
      local_90 = CItem::GetQuestItemDropBouns(param_3);
      local_8c = param_2;
      std::make_pair<unsigned_long,int>(local_98,&local_8c);
      std::pair<unsigned_long_const,int>::pair<unsigned_long,int>(local_a0,(pair *)local_98);
      pCVar7 = this + 0x5c;
      ppVar8 = (pair<int_const,CItem*> *)local_a0;
      std::
      map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
      ::insert(local_a8);
    }
    cVar1 = (**(code **)(*(int *)param_3 + 0x4c))(param_3,pCVar7,ppVar8);
    if (cVar1 != '\0') {
      uVar4 = CItem::getItemGroupName(param_3);
      uVar2 = CItem::getUsableLevel(param_3);
      uVar3 = CItem::get_rarity(param_3);
      BaseItemKey::BaseItemKey(local_e4,uVar3,uVar2,uVar4);
      G_CDataManager();
      std::
      map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
      ::find((int *)local_e8);
      local_ec = CItem::get_index(param_3);
      G_CDataManager();
      std::
      map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
      ::end(local_88);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
              ::operator!=(local_e8,(_Rb_tree_iterator *)local_88);
      if (cVar1 == '\0') {
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        map(local_104);
        local_50 = CItem::get_grade(param_3);
                    /* try { // try from 08511628 to 0851167f has its CatchHandler @ 085116fd */
        std::make_pair<int,BaseItemValue&>(local_58,(BaseItemValue *)&local_50);
        std::pair<int_const,BaseItemValue>::pair<int,BaseItemValue>(local_60,(pair *)local_58);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        insert(local_68);
        std::
        make_pair<int&,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>&>
                  ((int *)local_28,(map *)local_e4);
                    /* try { // try from 08511690 to 08511694 has its CatchHandler @ 085116db */
        std::
        pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
        ::
        pair<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
                  (local_44,local_28);
                    /* try { // try from 08511695 to 085116b5 has its CatchHandler @ 085116c6 */
        G_CDataManager();
        std::
        map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
        ::insert(local_4c);
                    /* try { // try from 085116bf to 085116c3 has its CatchHandler @ 085116db */
        std::
        pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
        ::~pair(local_44);
                    /* try { // try from 085116f6 to 085116fa has its CatchHandler @ 085116fd */
        std::
        pair<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
        ::~pair(local_28);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        ~map(local_104);
      }
      else {
        local_6c = CItem::get_grade(param_3);
        std::make_pair<int,BaseItemValue&>(local_74,(BaseItemValue *)&local_6c);
        std::pair<int_const,BaseItemValue>::pair<int,BaseItemValue>(local_7c,(pair *)local_74);
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
        ::operator->(local_e8);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        insert(local_84);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}
```
