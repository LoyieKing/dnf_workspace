# MySQL

`_GLOBAL__I__ZN5MySQLC2Ev`

`global constructors keyed to MySQL::MySQL()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to MySQL` | `0x083f52ff` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f52ff  _GLOBAL__I__ZN5MySQLC2Ev
#           global constructors keyed to MySQL::MySQL()
# range [0x083f52ff, 0x083f9abf]
083f52ff +0x0000:  push   %ebp
083f5300 +0x0001:  mov    %esp,%ebp
083f5302 +0x0003:  sub    $0x18,%esp
083f5305 +0x0006:  movl   $0xffff,0x4(%esp)
083f530d +0x000e:  movl   $0x1,(%esp)
083f5314 +0x0015:  call   083f52bf <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
083f5319 +0x001a:  leave
083f531a +0x001b:  ret
083f531b +0x001c:  nop
083f531c +0x001d:  push   %ebp
083f531d +0x001e:  mov    %esp,%ebp
083f531f +0x0020:  mov    0x8(%ebp),%eax
083f5322 +0x0023:  mov    0xc(%ebp),%edx
083f5325 +0x0026:  mov    %edx,(%eax)
083f5327 +0x0028:  mov    0x8(%ebp),%eax
083f532a +0x002b:  mov    (%eax),%eax
083f532c +0x002d:  test   %eax,%eax
083f532e +0x002f:  je     083f533a <+0x3b>
083f5330 +0x0031:  mov    0x8(%ebp),%eax
083f5333 +0x0034:  movb   $0x1,0x4208a(%eax)
083f533a +0x003b:  pop    %ebp
083f533b +0x003c:  ret
083f533c +0x003d:  push   %ebp
083f533d +0x003e:  mov    %esp,%ebp
083f533f +0x0040:  mov    0x8(%ebp),%eax
083f5342 +0x0043:  movzbl 0x8(%eax),%eax
083f5346 +0x0047:  pop    %ebp
083f5347 +0x0048:  ret
083f5348 +0x0049:  push   %ebp
083f5349 +0x004a:  mov    %esp,%ebp
083f534b +0x004c:  push   %edi
083f534c +0x004d:  push   %esi
083f534d +0x004e:  push   %ebx
083f534e +0x004f:  sub    $0x5c,%esp
083f5351 +0x0052:  mov    0x8(%ebp),%eax
083f5354 +0x0055:  mov    %eax,(%esp)
083f5357 +0x0058:  call   083f5630 <+0x331>
083f535c +0x005d:  mov    0x8(%ebp),%eax
083f535f +0x0060:  mov    0x42028(%eax),%eax
083f5365 +0x0066:  mov    %eax,%edx
083f5367 +0x0068:  mov    0x8(%ebp),%eax
083f536a +0x006b:  lea    0x1c(%eax),%ecx
083f536d +0x006e:  mov    0x8(%ebp),%eax
083f5370 +0x0071:  mov    0x4(%eax),%eax
083f5373 +0x0074:  mov    %edx,0x8(%esp)
083f5377 +0x0078:  mov    %ecx,0x4(%esp)
083f537b +0x007c:  mov    %eax,(%esp)
083f537e +0x007f:  call   08734470 <mysql_real_query>
083f5383 +0x0084:  mov    %eax,-0x20(%ebp)
083f5386 +0x0087:  cmpl   $0x0,-0x20(%ebp)
083f538a +0x008b:  je     083f5622 <+0x323>
083f5390 +0x0091:  mov    0x8(%ebp),%eax
083f5393 +0x0094:  mov    0x4(%eax),%eax
083f5396 +0x0097:  mov    %eax,(%esp)
083f5399 +0x009a:  call   08734530 <mysql_errno>
083f539e +0x009f:  mov    %eax,%edx
083f53a0 +0x00a1:  mov    0x8(%ebp),%eax
083f53a3 +0x00a4:  mov    %edx,0x4202c(%eax)
083f53a9 +0x00aa:  mov    0x8(%ebp),%eax
083f53ac +0x00ad:  mov    0x4202c(%eax),%eax
083f53b2 +0x00b3:  cmp    $0x7d5,%eax
083f53b7 +0x00b8:  je     083f53dd <+0xde>
083f53b9 +0x00ba:  mov    0x8(%ebp),%eax
083f53bc +0x00bd:  mov    0x4202c(%eax),%eax
083f53c2 +0x00c3:  cmp    $0x7dd,%eax
083f53c7 +0x00c8:  je     083f53dd <+0xde>
083f53c9 +0x00ca:  mov    0x8(%ebp),%eax
083f53cc +0x00cd:  mov    0x4202c(%eax),%eax
083f53d2 +0x00d3:  cmp    $0x7d6,%eax
083f53d7 +0x00d8:  jne    083f5579 <+0x27a>
083f53dd +0x00de:  lea    -0x31(%ebp),%eax
083f53e0 +0x00e1:  mov    %eax,(%esp)
083f53e3 +0x00e4:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
083f53e8 +0x00e9:  movl   $"DB connection lost, reconnecting...",0x4(%esp)
083f53f0 +0x00f1:  lea    -0x31(%ebp),%eax
083f53f3 +0x00f4:  mov    %eax,(%esp)
083f53f6 +0x00f7:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
083f53fb +0x00fc:  mov    0x8(%ebp),%eax
083f53fe +0x00ff:  mov    0x4(%eax),%eax
083f5401 +0x0102:  mov    %eax,(%esp)
083f5404 +0x0105:  call   08738ff0 <mysql_ping>
083f5409 +0x010a:  mov    %eax,-0x1c(%ebp)
083f540c +0x010d:  cmpl   $0x0,-0x1c(%ebp)
083f5410 +0x0111:  je     083f556f <+0x270>
083f5416 +0x0117:  mov    0x8(%ebp),%eax
083f5419 +0x011a:  mov    0x4(%eax),%eax
083f541c +0x011d:  mov    %eax,(%esp)
083f541f +0x0120:  call   08734530 <mysql_errno>
083f5424 +0x0125:  cmp    $0x7d6,%eax
083f5429 +0x012a:  sete   %al
083f542c +0x012d:  test   %al,%al
083f542e +0x012f:  je     083f556f <+0x270>
083f5434 +0x0135:  mov    0x8(%ebp),%eax
083f5437 +0x0138:  mov    0x42040(%eax),%edx
083f543d +0x013e:  mov    0x8(%ebp),%eax
083f5440 +0x0141:  lea    0x4206c(%eax),%edi
083f5446 +0x0147:  mov    0x8(%ebp),%eax
083f5449 +0x014a:  lea    0x42058(%eax),%esi
083f544f +0x0150:  mov    0x8(%ebp),%eax
083f5452 +0x0153:  lea    0x42044(%eax),%ebx
083f5458 +0x0159:  mov    0x8(%ebp),%eax
083f545b +0x015c:  lea    0x42030(%eax),%ecx
083f5461 +0x0162:  mov    0x8(%ebp),%eax
083f5464 +0x0165:  mov    0x4(%eax),%eax
083f5467 +0x0168:  movl   $0x0,0x1c(%esp)
083f546f +0x0170:  movl   $0x0,0x18(%esp)
083f5477 +0x0178:  mov    %edx,0x14(%esp)
083f547b +0x017c:  mov    %edi,0x10(%esp)
083f547f +0x0180:  mov    %esi,0xc(%esp)
083f5483 +0x0184:  mov    %ebx,0x8(%esp)
083f5487 +0x0188:  mov    %ecx,0x4(%esp)
083f548b +0x018c:  mov    %eax,(%esp)
083f548e +0x018f:  call   08736f10 <mysql_real_connect>
083f5493 +0x0194:  test   %eax,%eax
083f5495 +0x0196:  sete   %al
083f5498 +0x0199:  test   %al,%al
083f549a +0x019b:  je     083f54dc <+0x1dd>
083f549c +0x019d:  mov    0x8(%ebp),%eax
083f549f +0x01a0:  mov    0x4(%eax),%eax
083f54a2 +0x01a3:  mov    %eax,(%esp)
083f54a5 +0x01a6:  call   08734530 <mysql_errno>
083f54aa +0x01ab:  mov    %eax,0x14(%esp)
083f54ae +0x01af:  movl   $"DB reconnection fail. err_no(%d)",0x10(%esp)
083f54b6 +0x01b7:  movl   $0x19a,0xc(%esp)
083f54be +0x01bf:  movl   $&_ZZN5MySQL10exec_queryEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f54c6 +0x01c7:  movl   $"DBMgr.cpp",0x4(%esp)
083f54ce +0x01cf:  movl   $0x1,(%esp)
083f54d5 +0x01d6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083f54da +0x01db:  jmp    083f5508 <+0x209>
083f54dc +0x01dd:  movl   $"DB Reconnect By Server Gone Error",0x10(%esp)
083f54e4 +0x01e5:  movl   $0x19e,0xc(%esp)
083f54ec +0x01ed:  movl   $&_ZZN5MySQL10exec_queryEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f54f4 +0x01f5:  movl   $"DBMgr.cpp",0x4(%esp)
083f54fc +0x01fd:  movl   $0x1,(%esp)
083f5503 +0x0204:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083f5508 +0x0209:  mov    0x8(%ebp),%eax
083f550b +0x020c:  lea    0x42044(%eax),%ebx
083f5511 +0x0212:  mov    0x8(%ebp),%eax
083f5514 +0x0215:  mov    0x42040(%eax),%eax
083f551a +0x021b:  mov    0x8(%ebp),%edx
083f551d +0x021e:  lea    0x42030(%edx),%ecx
083f5523 +0x0224:  mov    0x8(%ebp),%edx
083f5526 +0x0227:  add    $0x4206c,%edx
083f552c +0x022d:  mov    %ebx,0x24(%esp)
083f5530 +0x0231:  mov    %eax,0x20(%esp)
083f5534 +0x0235:  mov    %ecx,0x1c(%esp)
083f5538 +0x0239:  mov    %edx,0x18(%esp)
083f553c +0x023d:  mov    -0x1c(%ebp),%eax
083f553f +0x0240:  mov    %eax,0x14(%esp)
083f5543 +0x0244:  movl   $"DB reconnection fail. %d (dbname : %s, ip : %s, port : %d, id : %s)",0x10(%esp)
083f554b +0x024c:  movl   $0x1a1,0xc(%esp)
083f5553 +0x0254:  movl   $&_ZZN5MySQL10exec_queryEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f555b +0x025c:  movl   $"DBMgr.cpp",0x4(%esp)
083f5563 +0x0264:  movl   $0x1,(%esp)
083f556a +0x026b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083f556f +0x0270:  mov    $0x2,%eax
083f5574 +0x0275:  jmp    083f5627 <+0x328>
083f5579 +0x027a:  mov    0x8(%ebp),%eax
083f557c +0x027d:  mov    0x4202c(%eax),%eax
083f5582 +0x0283:  cmp    $0x426,%eax
083f5587 +0x0288:  je     083f561b <+0x31c>
083f558d +0x028e:  mov    0x8(%ebp),%eax
083f5590 +0x0291:  lea    0x1c(%eax),%ebx
083f5593 +0x0294:  mov    0x8(%ebp),%eax
083f5596 +0x0297:  mov    0x4(%eax),%eax
083f5599 +0x029a:  mov    %eax,(%esp)
083f559c +0x029d:  call   08734530 <mysql_errno>
083f55a1 +0x02a2:  mov    %ebx,0x18(%esp)
083f55a5 +0x02a6:  mov    %eax,0x14(%esp)
083f55a9 +0x02aa:  movl   $"DB error occured (%d) Query('%s')",0x10(%esp)
083f55b1 +0x02b2:  movl   $0x1af,0xc(%esp)
083f55b9 +0x02ba:  movl   $&_ZZN5MySQL10exec_queryEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f55c1 +0x02c2:  movl   $"DBMgr.cpp",0x4(%esp)
083f55c9 +0x02ca:  movl   $0x1,(%esp)
083f55d0 +0x02d1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083f55d5 +0x02d6:  mov    0x8(%ebp),%eax
083f55d8 +0x02d9:  mov    0x4202c(%eax),%eax
083f55de +0x02df:  cmp    $0x7d6,%eax
083f55e3 +0x02e4:  jne    083f561b <+0x31c>
083f55e5 +0x02e6:  movl   $0x5,0xc(%esp)
083f55ed +0x02ee:  movl   $0x1b2,0x8(%esp)
083f55f5 +0x02f6:  movl   $&_ZZN5MySQL10exec_queryEvE19__PRETTY_FUNCTION__,0x4(%esp)
083f55fd +0x02fe:  lea    -0x30(%ebp),%eax
083f5600 +0x0301:  mov    %eax,(%esp)
083f5603 +0x0304:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f5608 +0x0309:  movl   $"DB error occured Check Connection First, Must Be Not Connected!",0x4(%esp)
083f5610 +0x0311:  lea    -0x30(%ebp),%eax
083f5613 +0x0314:  mov    %eax,(%esp)
083f5616 +0x0317:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f561b +0x031c:  mov    $0x1,%eax
083f5620 +0x0321:  jmp    083f5627 <+0x328>
083f5622 +0x0323:  mov    $0x0,%eax
083f5627 +0x0328:  add    $0x5c,%esp
083f562a +0x032b:  pop    %ebx
083f562b +0x032c:  pop    %esi
083f562c +0x032d:  pop    %edi
083f562d +0x032e:  pop    %ebp
083f562e +0x032f:  ret
083f562f +0x0330:  nop
083f5630 +0x0331:  push   %ebp
083f5631 +0x0332:  mov    %esp,%ebp
083f5633 +0x0334:  sub    $0x18,%esp
083f5636 +0x0337:  mov    0x8(%ebp),%eax
083f5639 +0x033a:  mov    0x8(%eax),%eax
083f563c +0x033d:  test   %eax,%eax
083f563e +0x033f:  je     083f564e <+0x34f>
083f5640 +0x0341:  mov    0x8(%ebp),%eax
083f5643 +0x0344:  mov    0x8(%eax),%eax
083f5646 +0x0347:  mov    %eax,(%esp)
083f5649 +0x034a:  call   087361d0 <mysql_free_result>
083f564e +0x034f:  mov    0x8(%ebp),%eax
083f5651 +0x0352:  movl   $0x0,0x8(%eax)
083f5658 +0x0359:  mov    0x8(%ebp),%eax
083f565b +0x035c:  movl   $0x0,0xc(%eax)
083f5662 +0x0363:  leave
083f5663 +0x0364:  ret
083f5664 +0x0365:  push   %ebp
083f5665 +0x0366:  mov    %esp,%ebp
083f5667 +0x0368:  sub    $0x18,%esp
083f566a +0x036b:  mov    0x8(%ebp),%eax
083f566d +0x036e:  mov    %eax,(%esp)
083f5670 +0x0371:  call   083f56f6 <+0x3f7>
083f5675 +0x0376:  leave
083f5676 +0x0377:  ret
083f5677 +0x0378:  nop
083f5678 +0x0379:  push   %ebp
083f5679 +0x037a:  mov    %esp,%ebp
083f567b +0x037c:  sub    $0x18,%esp
083f567e +0x037f:  mov    0x8(%ebp),%eax
083f5681 +0x0382:  mov    %eax,(%esp)
083f5684 +0x0385:  call   083f5788 <+0x489>
083f5689 +0x038a:  leave
083f568a +0x038b:  ret
083f568b +0x038c:  nop
083f568c +0x038d:  push   %ebp
083f568d +0x038e:  mov    %esp,%ebp
083f568f +0x0390:  push   %esi
083f5690 +0x0391:  push   %ebx
083f5691 +0x0392:  sub    $0x30,%esp
083f5694 +0x0395:  lea    -0xb(%ebp),%eax
083f5697 +0x0398:  mov    %eax,(%esp)
083f569a +0x039b:  call   083f5d4e <+0xa4f>
083f569f +0x03a0:  mov    0x8(%ebp),%eax
083f56a2 +0x03a3:  lea    -0xb(%ebp),%edx
083f56a5 +0x03a6:  mov    %edx,0x10(%esp)
083f56a9 +0x03aa:  lea    -0xa(%ebp),%edx
083f56ac +0x03ad:  mov    %edx,0xc(%esp)
083f56b0 +0x03b1:  lea    -0x9(%ebp),%edx
083f56b3 +0x03b4:  mov    %edx,0x8(%esp)
083f56b7 +0x03b8:  movl   $0x64,0x4(%esp)
083f56bf +0x03c0:  mov    %eax,(%esp)
083f56c2 +0x03c3:  call   083f5d76 <+0xa77>
083f56c7 +0x03c8:  jmp    083f56e4 <+0x3e5>
083f56c9 +0x03ca:  mov    %edx,%ebx
083f56cb +0x03cc:  mov    %eax,%esi
083f56cd +0x03ce:  lea    -0xb(%ebp),%eax
083f56d0 +0x03d1:  mov    %eax,(%esp)
083f56d3 +0x03d4:  call   083f5d62 <+0xa63>
083f56d8 +0x03d9:  mov    %esi,%eax
083f56da +0x03db:  mov    %ebx,%edx
083f56dc +0x03dd:  mov    %eax,(%esp)
083f56df +0x03e0:  call   08ae3750 <_Unwind_Resume>
083f56e4 +0x03e5:  lea    -0xb(%ebp),%eax
083f56e7 +0x03e8:  mov    %eax,(%esp)
083f56ea +0x03eb:  call   083f5d62 <+0xa63>
083f56ef +0x03f0:  add    $0x30,%esp
083f56f2 +0x03f3:  pop    %ebx
083f56f3 +0x03f4:  pop    %esi
083f56f4 +0x03f5:  pop    %ebp
083f56f5 +0x03f6:  ret
083f56f6 +0x03f7:  push   %ebp
083f56f7 +0x03f8:  mov    %esp,%ebp
083f56f9 +0x03fa:  push   %esi
083f56fa +0x03fb:  push   %ebx
083f56fb +0x03fc:  sub    $0x10,%esp
083f56fe +0x03ff:  mov    0x8(%ebp),%eax
083f5701 +0x0402:  mov    %eax,(%esp)
083f5704 +0x0405:  call   083f5ea2 <+0xba3>
083f5709 +0x040a:  jmp    083f5723 <+0x424>
083f570b +0x040c:  mov    %edx,%ebx
083f570d +0x040e:  mov    %eax,%esi
083f570f +0x0410:  mov    0x8(%ebp),%eax
083f5712 +0x0413:  add    $0x4,%eax
083f5715 +0x0416:  mov    %eax,(%esp)
083f5718 +0x0419:  call   083f5e44 <+0xb45>
083f571d +0x041e:  mov    %esi,%eax
083f571f +0x0420:  mov    %ebx,%edx
083f5721 +0x0422:  jmp    083f5733 <+0x434>
083f5723 +0x0424:  mov    0x8(%ebp),%eax
083f5726 +0x0427:  add    $0x4,%eax
083f5729 +0x042a:  mov    %eax,(%esp)
083f572c +0x042d:  call   083f5e44 <+0xb45>
083f5731 +0x0432:  jmp    083f574e <+0x44f>
083f5733 +0x0434:  mov    %edx,%ebx
083f5735 +0x0436:  mov    %eax,%esi
083f5737 +0x0438:  mov    0x8(%ebp),%eax
083f573a +0x043b:  mov    %eax,(%esp)
083f573d +0x043e:  call   083f5e30 <+0xb31>
083f5742 +0x0443:  mov    %esi,%eax
083f5744 +0x0445:  mov    %ebx,%edx
083f5746 +0x0447:  mov    %eax,(%esp)
083f5749 +0x044a:  call   08ae3750 <_Unwind_Resume>
083f574e +0x044f:  mov    0x8(%ebp),%eax
083f5751 +0x0452:  mov    %eax,(%esp)
083f5754 +0x0455:  call   083f5e30 <+0xb31>
083f5759 +0x045a:  add    $0x10,%esp
083f575c +0x045d:  pop    %ebx
083f575d +0x045e:  pop    %esi
083f575e +0x045f:  pop    %ebp
083f575f +0x0460:  ret
083f5760 +0x0461:  push   %ebp
083f5761 +0x0462:  mov    %esp,%ebp
083f5763 +0x0464:  sub    $0x18,%esp
083f5766 +0x0467:  mov    0x8(%ebp),%eax
083f5769 +0x046a:  mov    %eax,(%esp)
083f576c +0x046d:  call   083f5f3c <+0xc3d>
083f5771 +0x0472:  leave
083f5772 +0x0473:  ret
083f5773 +0x0474:  nop
083f5774 +0x0475:  push   %ebp
083f5775 +0x0476:  mov    %esp,%ebp
083f5777 +0x0478:  sub    $0x18,%esp
083f577a +0x047b:  mov    0x8(%ebp),%eax
083f577d +0x047e:  mov    %eax,(%esp)
083f5780 +0x0481:  call   083f5f50 <+0xc51>
083f5785 +0x0486:  leave
083f5786 +0x0487:  ret
083f5787 +0x0488:  nop
083f5788 +0x0489:  push   %ebp
083f5789 +0x048a:  mov    %esp,%ebp
083f578b +0x048c:  push   %esi
083f578c +0x048d:  push   %ebx
083f578d +0x048e:  sub    $0x10,%esp
083f5790 +0x0491:  mov    0x8(%ebp),%eax
083f5793 +0x0494:  mov    %eax,(%esp)
083f5796 +0x0497:  call   083f5fba <+0xcbb>
083f579b +0x049c:  mov    %eax,0x4(%esp)
083f579f +0x04a0:  mov    0x8(%ebp),%eax
083f57a2 +0x04a3:  mov    %eax,(%esp)
083f57a5 +0x04a6:  call   083f5f64 <+0xc65>
083f57aa +0x04ab:  jmp    083f57c7 <+0x4c8>
083f57ac +0x04ad:  mov    %edx,%ebx
083f57ae +0x04af:  mov    %eax,%esi
083f57b0 +0x04b1:  mov    0x8(%ebp),%eax
083f57b3 +0x04b4:  mov    %eax,(%esp)
083f57b6 +0x04b7:  call   083f5774 <+0x475>
083f57bb +0x04bc:  mov    %esi,%eax
083f57bd +0x04be:  mov    %ebx,%edx
083f57bf +0x04c0:  mov    %eax,(%esp)
083f57c2 +0x04c3:  call   08ae3750 <_Unwind_Resume>
083f57c7 +0x04c8:  mov    0x8(%ebp),%eax
083f57ca +0x04cb:  mov    %eax,(%esp)
083f57cd +0x04ce:  call   083f5774 <+0x475>
083f57d2 +0x04d3:  add    $0x10,%esp
083f57d5 +0x04d6:  pop    %ebx
083f57d6 +0x04d7:  pop    %esi
083f57d7 +0x04d8:  pop    %ebp
083f57d8 +0x04d9:  ret
083f57d9 +0x04da:  nop
083f57da +0x04db:  push   %ebp
083f57db +0x04dc:  mov    %esp,%ebp
083f57dd +0x04de:  push   %ebx
083f57de +0x04df:  sub    $0x14,%esp
083f57e1 +0x04e2:  mov    0x8(%ebp),%ebx
083f57e4 +0x04e5:  mov    0xc(%ebp),%eax
083f57e7 +0x04e8:  mov    %eax,0x4(%esp)
083f57eb +0x04ec:  mov    %ebx,(%esp)
083f57ee +0x04ef:  call   083f5fc6 <+0xcc7>
083f57f3 +0x04f4:  sub    $0x4,%esp
083f57f6 +0x04f7:  mov    %ebx,%eax
083f57f8 +0x04f9:  mov    -0x4(%ebp),%ebx
083f57fb +0x04fc:  leave
083f57fc +0x04fd:  ret    $0x4
083f57ff +0x0500:  nop
083f5800 +0x0501:  push   %ebp
083f5801 +0x0502:  mov    %esp,%ebp
083f5803 +0x0504:  push   %ebx
083f5804 +0x0505:  sub    $0x14,%esp
083f5807 +0x0508:  mov    0x8(%ebp),%ebx
083f580a +0x050b:  mov    0xc(%ebp),%eax
083f580d +0x050e:  mov    %eax,0x4(%esp)
083f5811 +0x0512:  mov    %ebx,(%esp)
083f5814 +0x0515:  call   083f5fec <+0xced>
083f5819 +0x051a:  sub    $0x4,%esp
083f581c +0x051d:  mov    %ebx,%eax
083f581e +0x051f:  mov    -0x4(%ebp),%ebx
083f5821 +0x0522:  leave
083f5822 +0x0523:  ret    $0x4
083f5825 +0x0526:  nop
083f5826 +0x0527:  push   %ebp
083f5827 +0x0528:  mov    %esp,%ebp
083f5829 +0x052a:  mov    0x8(%ebp),%eax
083f582c +0x052d:  mov    (%eax),%edx
083f582e +0x052f:  mov    0xc(%ebp),%eax
083f5831 +0x0532:  mov    (%eax),%eax
083f5833 +0x0534:  cmp    %eax,%edx
083f5835 +0x0536:  setne  %al
083f5838 +0x0539:  pop    %ebp
083f5839 +0x053a:  ret
083f583a +0x053b:  push   %ebp
083f583b +0x053c:  mov    %esp,%ebp
083f583d +0x053e:  sub    $0x18,%esp
083f5840 +0x0541:  mov    0x8(%ebp),%eax
083f5843 +0x0544:  mov    (%eax),%eax
083f5845 +0x0546:  mov    %eax,(%esp)
083f5848 +0x0549:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
083f584d +0x054e:  mov    0x8(%ebp),%edx
083f5850 +0x0551:  mov    %eax,(%edx)
083f5852 +0x0553:  mov    0x8(%ebp),%eax
083f5855 +0x0556:  leave
083f5856 +0x0557:  ret
083f5857 +0x0558:  nop
083f5858 +0x0559:  push   %ebp
083f5859 +0x055a:  mov    %esp,%ebp
083f585b +0x055c:  mov    0x8(%ebp),%eax
083f585e +0x055f:  mov    (%eax),%eax
083f5860 +0x0561:  add    $0x10,%eax
083f5863 +0x0564:  pop    %ebp
083f5864 +0x0565:  ret
083f5865 +0x0566:  nop
083f5866 +0x0567:  push   %ebp
083f5867 +0x0568:  mov    %esp,%ebp
083f5869 +0x056a:  push   %ebx
083f586a +0x056b:  sub    $0x14,%esp
083f586d +0x056e:  mov    0x8(%ebp),%ebx
083f5870 +0x0571:  mov    0xc(%ebp),%eax
083f5873 +0x0574:  mov    %eax,0x4(%esp)
083f5877 +0x0578:  mov    %ebx,(%esp)
083f587a +0x057b:  call   083f6012 <+0xd13>
083f587f +0x0580:  sub    $0x4,%esp
083f5882 +0x0583:  mov    %ebx,%eax
083f5884 +0x0585:  mov    -0x4(%ebp),%ebx
083f5887 +0x0588:  leave
083f5888 +0x0589:  ret    $0x4
083f588b +0x058c:  nop
083f588c +0x058d:  push   %ebp
083f588d +0x058e:  mov    %esp,%ebp
083f588f +0x0590:  push   %ebx
083f5890 +0x0591:  sub    $0x14,%esp
083f5893 +0x0594:  mov    0x8(%ebp),%ebx
083f5896 +0x0597:  mov    0xc(%ebp),%eax
083f5899 +0x059a:  mov    %eax,0x4(%esp)
083f589d +0x059e:  mov    %ebx,(%esp)
083f58a0 +0x05a1:  call   083f6038 <+0xd39>
083f58a5 +0x05a6:  sub    $0x4,%esp
083f58a8 +0x05a9:  mov    %ebx,%eax
083f58aa +0x05ab:  mov    -0x4(%ebp),%ebx
083f58ad +0x05ae:  leave
083f58ae +0x05af:  ret    $0x4
083f58b1 +0x05b2:  nop
083f58b2 +0x05b3:  push   %ebp
083f58b3 +0x05b4:  mov    %esp,%ebp
083f58b5 +0x05b6:  mov    0x8(%ebp),%eax
083f58b8 +0x05b9:  mov    (%eax),%edx
083f58ba +0x05bb:  mov    0xc(%ebp),%eax
083f58bd +0x05be:  mov    (%eax),%eax
083f58bf +0x05c0:  cmp    %eax,%edx
083f58c1 +0x05c2:  setne  %al
083f58c4 +0x05c5:  pop    %ebp
083f58c5 +0x05c6:  ret
083f58c6 +0x05c7:  push   %ebp
083f58c7 +0x05c8:  mov    %esp,%ebp
083f58c9 +0x05ca:  sub    $0x18,%esp
083f58cc +0x05cd:  mov    0x8(%ebp),%eax
083f58cf +0x05d0:  mov    (%eax),%eax
083f58d1 +0x05d2:  mov    %eax,(%esp)
083f58d4 +0x05d5:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
083f58d9 +0x05da:  mov    0x8(%ebp),%edx
083f58dc +0x05dd:  mov    %eax,(%edx)
083f58de +0x05df:  mov    0x8(%ebp),%eax
083f58e1 +0x05e2:  leave
083f58e2 +0x05e3:  ret
083f58e3 +0x05e4:  nop
083f58e4 +0x05e5:  push   %ebp
083f58e5 +0x05e6:  mov    %esp,%ebp
083f58e7 +0x05e8:  mov    0x8(%ebp),%eax
083f58ea +0x05eb:  mov    (%eax),%eax
083f58ec +0x05ed:  add    $0x10,%eax
083f58ef +0x05f0:  pop    %ebp
083f58f0 +0x05f1:  ret
083f58f1 +0x05f2:  nop
083f58f2 +0x05f3:  push   %ebp
083f58f3 +0x05f4:  mov    %esp,%ebp
083f58f5 +0x05f6:  sub    $0x18,%esp
083f58f8 +0x05f9:  mov    0x8(%ebp),%eax
083f58fb +0x05fc:  mov    %eax,(%esp)
083f58fe +0x05ff:  call   083f60fa <+0xdfb>
083f5903 +0x0604:  leave
083f5904 +0x0605:  ret
083f5905 +0x0606:  nop
083f5906 +0x0607:  push   %ebp
083f5907 +0x0608:  mov    %esp,%ebp
083f5909 +0x060a:  sub    $0x18,%esp
083f590c +0x060d:  mov    0x8(%ebp),%eax
083f590f +0x0610:  add    $0x4,%eax
083f5912 +0x0613:  mov    %eax,(%esp)
083f5915 +0x0616:  call   083f58f2 <+0x5f3>
083f591a +0x061b:  leave
083f591b +0x061c:  ret
083f591c +0x061d:  push   %ebp
083f591d +0x061e:  mov    %esp,%ebp
083f591f +0x0620:  push   %esi
083f5920 +0x0621:  push   %ebx
083f5921 +0x0622:  sub    $0x60,%esp
083f5924 +0x0625:  lea    -0x48(%ebp),%eax
083f5927 +0x0628:  mov    0xc(%ebp),%edx
083f592a +0x062b:  mov    %edx,0x8(%esp)
083f592e +0x062f:  mov    0x8(%ebp),%edx
083f5931 +0x0632:  mov    %edx,0x4(%esp)
083f5935 +0x0636:  mov    %eax,(%esp)
083f5938 +0x0639:  call   083f605e <+0xd5f>
083f593d +0x063e:  sub    $0x4,%esp
083f5940 +0x0641:  lea    -0x44(%ebp),%eax
083f5943 +0x0644:  mov    0x8(%ebp),%edx
083f5946 +0x0647:  mov    %edx,0x4(%esp)
083f594a +0x064b:  mov    %eax,(%esp)
083f594d +0x064e:  call   083f5800 <+0x501>
083f5952 +0x0653:  sub    $0x4,%esp
083f5955 +0x0656:  lea    -0x44(%ebp),%eax
083f5958 +0x0659:  mov    %eax,0x4(%esp)
083f595c +0x065d:  lea    -0x48(%ebp),%eax
083f595f +0x0660:  mov    %eax,(%esp)
083f5962 +0x0663:  call   083f60be <+0xdbf>
083f5967 +0x0668:  test   %al,%al
083f5969 +0x066a:  jne    083f59a7 <+0x6a8>
083f596b +0x066c:  lea    -0x48(%ebp),%eax
083f596e +0x066f:  mov    %eax,(%esp)
083f5971 +0x0672:  call   083f60b0 <+0xdb1>
083f5976 +0x0677:  mov    %eax,%ebx
083f5978 +0x0679:  lea    -0x3d(%ebp),%eax
083f597b +0x067c:  mov    0x8(%ebp),%edx
083f597e +0x067f:  mov    %edx,0x4(%esp)
083f5982 +0x0683:  mov    %eax,(%esp)
083f5985 +0x0686:  call   083f608a <+0xd8b>
083f598a +0x068b:  sub    $0x4,%esp
083f598d +0x068e:  mov    %ebx,0x8(%esp)
083f5991 +0x0692:  mov    0xc(%ebp),%eax
083f5994 +0x0695:  mov    %eax,0x4(%esp)
083f5998 +0x0699:  lea    -0x3d(%ebp),%eax
083f599b +0x069c:  mov    %eax,(%esp)
083f599e +0x069f:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f59a3 +0x06a4:  test   %al,%al
083f59a5 +0x06a6:  je     083f59ae <+0x6af>
083f59a7 +0x06a8:  mov    $0x1,%eax
083f59ac +0x06ad:  jmp    083f59b3 <+0x6b4>
083f59ae +0x06af:  mov    $0x0,%eax
083f59b3 +0x06b4:  test   %al,%al
083f59b5 +0x06b6:  je     083f5a50 <+0x751>
083f59bb +0x06bc:  lea    -0x20(%ebp),%eax
083f59be +0x06bf:  mov    %eax,(%esp)
083f59c1 +0x06c2:  call   083f60d2 <+0xdd3>
083f59c6 +0x06c7:  lea    -0x20(%ebp),%eax
083f59c9 +0x06ca:  mov    %eax,0x8(%esp)
083f59cd +0x06ce:  mov    0xc(%ebp),%eax
083f59d0 +0x06d1:  mov    %eax,0x4(%esp)
083f59d4 +0x06d5:  lea    -0x3c(%ebp),%eax
083f59d7 +0x06d8:  mov    %eax,(%esp)
083f59da +0x06db:  call   083f614c <+0xe4d>
083f59df +0x06e0:  lea    -0x4c(%ebp),%eax
083f59e2 +0x06e3:  lea    -0x3c(%ebp),%edx
083f59e5 +0x06e6:  mov    %edx,0xc(%esp)
083f59e9 +0x06ea:  mov    -0x48(%ebp),%edx
083f59ec +0x06ed:  mov    %edx,0x8(%esp)
083f59f0 +0x06f1:  mov    0x8(%ebp),%edx
083f59f3 +0x06f4:  mov    %edx,0x4(%esp)
083f59f7 +0x06f8:  mov    %eax,(%esp)
083f59fa +0x06fb:  call   083f6184 <+0xe85>
083f59ff +0x0700:  sub    $0x4,%esp
083f5a02 +0x0703:  mov    -0x4c(%ebp),%eax
083f5a05 +0x0706:  mov    %eax,-0x48(%ebp)
083f5a08 +0x0709:  lea    -0x3c(%ebp),%eax
083f5a0b +0x070c:  mov    %eax,(%esp)
083f5a0e +0x070f:  call   083f5906 <+0x607>
083f5a13 +0x0714:  jmp    083f5a45 <+0x746>
083f5a15 +0x0716:  mov    %edx,%ebx
083f5a17 +0x0718:  mov    %eax,%esi
083f5a19 +0x071a:  lea    -0x3c(%ebp),%eax
083f5a1c +0x071d:  mov    %eax,(%esp)
083f5a1f +0x0720:  call   083f5906 <+0x607>
083f5a24 +0x0725:  mov    %esi,%eax
083f5a26 +0x0727:  mov    %ebx,%edx
083f5a28 +0x0729:  jmp    083f5a2a <+0x72b>
083f5a2a +0x072b:  mov    %edx,%ebx
083f5a2c +0x072d:  mov    %eax,%esi
083f5a2e +0x072f:  lea    -0x20(%ebp),%eax
083f5a31 +0x0732:  mov    %eax,(%esp)
083f5a34 +0x0735:  call   083f58f2 <+0x5f3>
083f5a39 +0x073a:  mov    %esi,%eax
083f5a3b +0x073c:  mov    %ebx,%edx
083f5a3d +0x073e:  mov    %eax,(%esp)
083f5a40 +0x0741:  call   08ae3750 <_Unwind_Resume>
083f5a45 +0x0746:  lea    -0x20(%ebp),%eax
083f5a48 +0x0749:  mov    %eax,(%esp)
083f5a4b +0x074c:  call   083f58f2 <+0x5f3>
083f5a50 +0x0751:  lea    -0x48(%ebp),%eax
083f5a53 +0x0754:  mov    %eax,(%esp)
083f5a56 +0x0757:  call   083f60b0 <+0xdb1>
083f5a5b +0x075c:  add    $0x4,%eax
083f5a5e +0x075f:  lea    -0x8(%ebp),%esp
083f5a61 +0x0762:  add    $0x0,%esp
083f5a64 +0x0765:  pop    %ebx
083f5a65 +0x0766:  pop    %esi
083f5a66 +0x0767:  pop    %ebp
083f5a67 +0x0768:  ret
083f5a68 +0x0769:  push   %ebp
083f5a69 +0x076a:  mov    %esp,%ebp
083f5a6b +0x076c:  push   %ebx
083f5a6c +0x076d:  sub    $0x44,%esp
083f5a6f +0x0770:  lea    -0x20(%ebp),%eax
083f5a72 +0x0773:  mov    0xc(%ebp),%edx
083f5a75 +0x0776:  mov    %edx,0x8(%esp)
083f5a79 +0x077a:  mov    0x8(%ebp),%edx
083f5a7c +0x077d:  mov    %edx,0x4(%esp)
083f5a80 +0x0781:  mov    %eax,(%esp)
083f5a83 +0x0784:  call   083f61ca <+0xecb>
083f5a88 +0x0789:  sub    $0x4,%esp
083f5a8b +0x078c:  lea    -0x1c(%ebp),%eax
083f5a8e +0x078f:  mov    0x8(%ebp),%edx
083f5a91 +0x0792:  mov    %edx,0x4(%esp)
083f5a95 +0x0796:  mov    %eax,(%esp)
083f5a98 +0x0799:  call   083f588c <+0x58d>
083f5a9d +0x079e:  sub    $0x4,%esp
083f5aa0 +0x07a1:  lea    -0x1c(%ebp),%eax
083f5aa3 +0x07a4:  mov    %eax,0x4(%esp)
083f5aa7 +0x07a8:  lea    -0x20(%ebp),%eax
083f5aaa +0x07ab:  mov    %eax,(%esp)
083f5aad +0x07ae:  call   083f622a <+0xf2b>
083f5ab2 +0x07b3:  test   %al,%al
083f5ab4 +0x07b5:  jne    083f5af2 <+0x7f3>
083f5ab6 +0x07b7:  lea    -0x20(%ebp),%eax
083f5ab9 +0x07ba:  mov    %eax,(%esp)
083f5abc +0x07bd:  call   083f621c <+0xf1d>
083f5ac1 +0x07c2:  mov    %eax,%ebx
083f5ac3 +0x07c4:  lea    -0x15(%ebp),%eax
083f5ac6 +0x07c7:  mov    0x8(%ebp),%edx
083f5ac9 +0x07ca:  mov    %edx,0x4(%esp)
083f5acd +0x07ce:  mov    %eax,(%esp)
083f5ad0 +0x07d1:  call   083f61f6 <+0xef7>
083f5ad5 +0x07d6:  sub    $0x4,%esp
083f5ad8 +0x07d9:  mov    %ebx,0x8(%esp)
083f5adc +0x07dd:  mov    0xc(%ebp),%eax
083f5adf +0x07e0:  mov    %eax,0x4(%esp)
083f5ae3 +0x07e4:  lea    -0x15(%ebp),%eax
083f5ae6 +0x07e7:  mov    %eax,(%esp)
083f5ae9 +0x07ea:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f5aee +0x07ef:  test   %al,%al
083f5af0 +0x07f1:  je     083f5af9 <+0x7fa>
083f5af2 +0x07f3:  mov    $0x1,%eax
083f5af7 +0x07f8:  jmp    083f5afe <+0x7ff>
083f5af9 +0x07fa:  mov    $0x0,%eax
083f5afe +0x07ff:  test   %al,%al
083f5b00 +0x0801:  je     083f5b4b <+0x84c>
083f5b02 +0x0803:  movl   $0x0,-0xc(%ebp)
083f5b09 +0x080a:  lea    -0xc(%ebp),%eax
083f5b0c +0x080d:  mov    %eax,0x8(%esp)
083f5b10 +0x0811:  mov    0xc(%ebp),%eax
083f5b13 +0x0814:  mov    %eax,0x4(%esp)
083f5b17 +0x0818:  lea    -0x14(%ebp),%eax
083f5b1a +0x081b:  mov    %eax,(%esp)
083f5b1d +0x081e:  call   083f623e <+0xf3f>
083f5b22 +0x0823:  lea    -0x2c(%ebp),%eax
083f5b25 +0x0826:  lea    -0x14(%ebp),%edx
083f5b28 +0x0829:  mov    %edx,0xc(%esp)
083f5b2c +0x082d:  mov    -0x20(%ebp),%edx
083f5b2f +0x0830:  mov    %edx,0x8(%esp)
083f5b33 +0x0834:  mov    0x8(%ebp),%edx
083f5b36 +0x0837:  mov    %edx,0x4(%esp)
083f5b3a +0x083b:  mov    %eax,(%esp)
083f5b3d +0x083e:  call   083f626c <+0xf6d>
083f5b42 +0x0843:  sub    $0x4,%esp
083f5b45 +0x0846:  mov    -0x2c(%ebp),%eax
083f5b48 +0x0849:  mov    %eax,-0x20(%ebp)
083f5b4b +0x084c:  lea    -0x20(%ebp),%eax
083f5b4e +0x084f:  mov    %eax,(%esp)
083f5b51 +0x0852:  call   083f621c <+0xf1d>
083f5b56 +0x0857:  add    $0x4,%eax
083f5b59 +0x085a:  mov    -0x4(%ebp),%ebx
083f5b5c +0x085d:  leave
083f5b5d +0x085e:  ret
083f5b5e +0x085f:  push   %ebp
083f5b5f +0x0860:  mov    %esp,%ebp
083f5b61 +0x0862:  push   %ebx
083f5b62 +0x0863:  sub    $0x14,%esp
083f5b65 +0x0866:  mov    0x8(%ebp),%ebx
083f5b68 +0x0869:  mov    0xc(%ebp),%eax
083f5b6b +0x086c:  mov    0x10(%ebp),%edx
083f5b6e +0x086f:  mov    %edx,0x8(%esp)
083f5b72 +0x0873:  mov    %eax,0x4(%esp)
083f5b76 +0x0877:  mov    %ebx,(%esp)
083f5b79 +0x087a:  call   083f62b2 <+0xfb3>
083f5b7e +0x087f:  sub    $0x4,%esp
083f5b81 +0x0882:  mov    %ebx,%eax
083f5b83 +0x0884:  mov    -0x4(%ebp),%ebx
083f5b86 +0x0887:  leave
083f5b87 +0x0888:  ret    $0x4
083f5b8a +0x088b:  push   %ebp
083f5b8b +0x088c:  mov    %esp,%ebp
083f5b8d +0x088e:  mov    0xc(%ebp),%eax
083f5b90 +0x0891:  mov    (%eax),%edx
083f5b92 +0x0893:  mov    0x8(%ebp),%eax
083f5b95 +0x0896:  mov    %edx,(%eax)
083f5b97 +0x0898:  mov    0xc(%ebp),%eax
083f5b9a +0x089b:  mov    0x4(%eax),%edx
083f5b9d +0x089e:  mov    0x8(%ebp),%eax
083f5ba0 +0x08a1:  mov    %edx,0x4(%eax)
083f5ba3 +0x08a4:  pop    %ebp
083f5ba4 +0x08a5:  ret
083f5ba5 +0x08a6:  nop
083f5ba6 +0x08a7:  push   %ebp
083f5ba7 +0x08a8:  mov    %esp,%ebp
083f5ba9 +0x08aa:  push   %ebx
083f5baa +0x08ab:  sub    $0x14,%esp
083f5bad +0x08ae:  mov    0x8(%ebp),%ebx
083f5bb0 +0x08b1:  mov    0xc(%ebp),%eax
083f5bb3 +0x08b4:  mov    %eax,0x4(%esp)
083f5bb7 +0x08b8:  mov    %ebx,(%esp)
083f5bba +0x08bb:  call   083f6364 <+0x1065>
083f5bbf +0x08c0:  sub    $0x4,%esp
083f5bc2 +0x08c3:  mov    %ebx,%eax
083f5bc4 +0x08c5:  mov    -0x4(%ebp),%ebx
083f5bc7 +0x08c8:  leave
083f5bc8 +0x08c9:  ret    $0x4
083f5bcb +0x08cc:  nop
083f5bcc +0x08cd:  push   %ebp
083f5bcd +0x08ce:  mov    %esp,%ebp
083f5bcf +0x08d0:  mov    0x8(%ebp),%eax
083f5bd2 +0x08d3:  mov    (%eax),%edx
083f5bd4 +0x08d5:  mov    0xc(%ebp),%eax
083f5bd7 +0x08d8:  mov    (%eax),%eax
083f5bd9 +0x08da:  cmp    %eax,%edx
083f5bdb +0x08dc:  setne  %al
083f5bde +0x08df:  pop    %ebp
083f5bdf +0x08e0:  ret
083f5be0 +0x08e1:  push   %ebp
083f5be1 +0x08e2:  mov    %esp,%ebp
083f5be3 +0x08e4:  sub    $0x18,%esp
083f5be6 +0x08e7:  mov    0x8(%ebp),%eax
083f5be9 +0x08ea:  mov    %eax,(%esp)
083f5bec +0x08ed:  call   083f6390 <+0x1091>
083f5bf1 +0x08f2:  leave
083f5bf2 +0x08f3:  ret
083f5bf3 +0x08f4:  push   %ebp
083f5bf4 +0x08f5:  mov    %esp,%ebp
083f5bf6 +0x08f7:  push   %esi
083f5bf7 +0x08f8:  push   %ebx
083f5bf8 +0x08f9:  sub    $0x10,%esp
083f5bfb +0x08fc:  mov    0x8(%ebp),%esi
083f5bfe +0x08ff:  mov    0x10(%ebp),%eax
083f5c01 +0x0902:  mov    %eax,(%esp)
083f5c04 +0x0905:  call   083f639d <+0x109e>
083f5c09 +0x090a:  mov    %eax,%ebx
083f5c0b +0x090c:  mov    0xc(%ebp),%eax
083f5c0e +0x090f:  mov    %eax,(%esp)
083f5c11 +0x0912:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
083f5c16 +0x0917:  mov    %ebx,0x8(%esp)
083f5c1a +0x091b:  mov    %eax,0x4(%esp)
083f5c1e +0x091f:  mov    %esi,(%esp)
083f5c21 +0x0922:  call   083f63a6 <+0x10a7>
083f5c26 +0x0927:  mov    %esi,%eax
083f5c28 +0x0929:  add    $0x10,%esp
083f5c2b +0x092c:  pop    %ebx
083f5c2c +0x092d:  pop    %esi
083f5c2d +0x092e:  pop    %ebp
083f5c2e +0x092f:  ret    $0x4
083f5c31 +0x0932:  nop
083f5c32 +0x0933:  push   %ebp
083f5c33 +0x0934:  mov    %esp,%ebp
083f5c35 +0x0936:  sub    $0x18,%esp
083f5c38 +0x0939:  mov    0xc(%ebp),%eax
083f5c3b +0x093c:  mov    %eax,(%esp)
083f5c3e +0x093f:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
083f5c43 +0x0944:  mov    (%eax),%edx
083f5c45 +0x0946:  mov    0x8(%ebp),%eax
083f5c48 +0x0949:  mov    %edx,(%eax)
083f5c4a +0x094b:  mov    0xc(%ebp),%eax
083f5c4d +0x094e:  add    $0x4,%eax
083f5c50 +0x0951:  mov    %eax,(%esp)
083f5c53 +0x0954:  call   083f63df <+0x10e0>
083f5c58 +0x0959:  mov    0x8(%ebp),%edx
083f5c5b +0x095c:  mov    (%eax),%ecx
083f5c5d +0x095e:  mov    %ecx,0x4(%edx)
083f5c60 +0x0961:  mov    0x4(%eax),%ecx
083f5c63 +0x0964:  mov    %ecx,0x8(%edx)
083f5c66 +0x0967:  mov    0x8(%eax),%eax
083f5c69 +0x096a:  mov    %eax,0xc(%edx)
083f5c6c +0x096d:  leave
083f5c6d +0x096e:  ret
083f5c6e +0x096f:  push   %ebp
083f5c6f +0x0970:  mov    %esp,%ebp
083f5c71 +0x0972:  push   %ebx
083f5c72 +0x0973:  sub    $0x14,%esp
083f5c75 +0x0976:  mov    0x8(%ebp),%ebx
083f5c78 +0x0979:  mov    0xc(%ebp),%eax
083f5c7b +0x097c:  mov    0x10(%ebp),%edx
083f5c7e +0x097f:  mov    %edx,0x8(%esp)
083f5c82 +0x0983:  mov    %eax,0x4(%esp)
083f5c86 +0x0987:  mov    %ebx,(%esp)
083f5c89 +0x098a:  call   083f63e8 <+0x10e9>
083f5c8e +0x098f:  sub    $0x4,%esp
083f5c91 +0x0992:  mov    %ebx,%eax
083f5c93 +0x0994:  mov    -0x4(%ebp),%ebx
083f5c96 +0x0997:  leave
083f5c97 +0x0998:  ret    $0x4
083f5c9a +0x099b:  push   %ebp
083f5c9b +0x099c:  mov    %esp,%ebp
083f5c9d +0x099e:  sub    $0x18,%esp
083f5ca0 +0x09a1:  mov    0xc(%ebp),%eax
083f5ca3 +0x09a4:  mov    %eax,(%esp)
083f5ca6 +0x09a7:  call   083f642c <+0x112d>
083f5cab +0x09ac:  mov    0x8(%ebp),%edx
083f5cae +0x09af:  mov    %eax,0x4(%esp)
083f5cb2 +0x09b3:  mov    %edx,(%esp)
083f5cb5 +0x09b6:  call   083f5b8a <+0x88b>
083f5cba +0x09bb:  mov    0xc(%ebp),%eax
083f5cbd +0x09be:  add    $0x8,%eax
083f5cc0 +0x09c1:  mov    %eax,(%esp)
083f5cc3 +0x09c4:  call   08080fe4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x100a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x100a
083f5cc8 +0x09c9:  movzbl (%eax),%edx
083f5ccb +0x09cc:  mov    0x8(%ebp),%eax
083f5cce +0x09cf:  mov    %dl,0x8(%eax)
083f5cd1 +0x09d2:  leave
083f5cd2 +0x09d3:  ret
083f5cd3 +0x09d4:  nop
083f5cd4 +0x09d5:  push   %ebp
083f5cd5 +0x09d6:  mov    %esp,%ebp
083f5cd7 +0x09d8:  sub    $0x38,%esp
083f5cda +0x09db:  movl   $0x0,-0x14(%ebp)
083f5ce1 +0x09e2:  movl   $0x0,-0x10(%ebp)
083f5ce8 +0x09e9:  movl   $0x0,-0xc(%ebp)
083f5cef +0x09f0:  lea    -0x14(%ebp),%eax
083f5cf2 +0x09f3:  mov    %eax,0x8(%esp)
083f5cf6 +0x09f7:  mov    0xc(%ebp),%eax
083f5cf9 +0x09fa:  mov    %eax,0x4(%esp)
083f5cfd +0x09fe:  lea    -0x24(%ebp),%eax
083f5d00 +0x0a01:  mov    %eax,(%esp)
083f5d03 +0x0a04:  call   083f6434 <+0x1135>
083f5d08 +0x0a09:  mov    0x8(%ebp),%eax
083f5d0b +0x0a0c:  lea    -0x24(%ebp),%edx
083f5d0e +0x0a0f:  mov    %edx,0x4(%esp)
083f5d12 +0x0a13:  mov    %eax,(%esp)
083f5d15 +0x0a16:  call   083f646e <+0x116f>
083f5d1a +0x0a1b:  add    $0x4,%eax
083f5d1d +0x0a1e:  leave
083f5d1e +0x0a1f:  ret
083f5d1f +0x0a20:  nop
083f5d20 +0x0a21:  push   %ebp
083f5d21 +0x0a22:  mov    %esp,%ebp
083f5d23 +0x0a24:  sub    $0x18,%esp
083f5d26 +0x0a27:  mov    0x8(%ebp),%eax
083f5d29 +0x0a2a:  mov    0xc(%ebp),%edx
083f5d2c +0x0a2d:  mov    %edx,0x4(%esp)
083f5d30 +0x0a31:  mov    %eax,(%esp)
083f5d33 +0x0a34:  call   083f657a <+0x127b>
083f5d38 +0x0a39:  leave
083f5d39 +0x0a3a:  ret
083f5d3a +0x0a3b:  push   %ebp
083f5d3b +0x0a3c:  mov    %esp,%ebp
083f5d3d +0x0a3e:  mov    0x8(%ebp),%eax
083f5d40 +0x0a41:  mov    (%eax),%edx
083f5d42 +0x0a43:  mov    0xc(%ebp),%eax
083f5d45 +0x0a46:  mov    (%eax),%eax
083f5d47 +0x0a48:  cmp    %eax,%edx
083f5d49 +0x0a4a:  sete   %al
083f5d4c +0x0a4d:  pop    %ebp
083f5d4d +0x0a4e:  ret
083f5d4e +0x0a4f:  push   %ebp
083f5d4f +0x0a50:  mov    %esp,%ebp
083f5d51 +0x0a52:  sub    $0x18,%esp
083f5d54 +0x0a55:  mov    0x8(%ebp),%eax
083f5d57 +0x0a58:  mov    %eax,(%esp)
083f5d5a +0x0a5b:  call   083f66d6 <+0x13d7>
083f5d5f +0x0a60:  leave
083f5d60 +0x0a61:  ret
083f5d61 +0x0a62:  nop
083f5d62 +0x0a63:  push   %ebp
083f5d63 +0x0a64:  mov    %esp,%ebp
083f5d65 +0x0a66:  sub    $0x18,%esp
083f5d68 +0x0a69:  mov    0x8(%ebp),%eax
083f5d6b +0x0a6c:  mov    %eax,(%esp)
083f5d6e +0x0a6f:  call   083f66dc <+0x13dd>
083f5d73 +0x0a74:  leave
083f5d74 +0x0a75:  ret
083f5d75 +0x0a76:  nop
083f5d76 +0x0a77:  push   %ebp
083f5d77 +0x0a78:  mov    %esp,%ebp
083f5d79 +0x0a7a:  push   %esi
083f5d7a +0x0a7b:  push   %ebx
083f5d7b +0x0a7c:  sub    $0x20,%esp
083f5d7e +0x0a7f:  mov    0x8(%ebp),%eax
083f5d81 +0x0a82:  mov    0x18(%ebp),%edx
083f5d84 +0x0a85:  mov    %edx,0x4(%esp)
083f5d88 +0x0a89:  mov    %eax,(%esp)
083f5d8b +0x0a8c:  call   083f66e2 <+0x13e3>
083f5d90 +0x0a91:  mov    0x18(%ebp),%eax
083f5d93 +0x0a94:  mov    %eax,0x4(%esp)
083f5d97 +0x0a98:  lea    -0x9(%ebp),%eax
083f5d9a +0x0a9b:  mov    %eax,(%esp)
083f5d9d +0x0a9e:  call   083f66f6 <+0x13f7>
083f5da2 +0x0aa3:  mov    0x8(%ebp),%eax
083f5da5 +0x0aa6:  lea    0x4(%eax),%edx
083f5da8 +0x0aa9:  lea    -0x9(%ebp),%eax
083f5dab +0x0aac:  mov    %eax,0x4(%esp)
083f5daf +0x0ab0:  mov    %edx,(%esp)
083f5db2 +0x0ab3:  call   083f671e <+0x141f>
083f5db7 +0x0ab8:  jmp    083f5dce <+0xacf>
083f5db9 +0x0aba:  mov    %edx,%ebx
083f5dbb +0x0abc:  mov    %eax,%esi
083f5dbd +0x0abe:  lea    -0x9(%ebp),%eax
083f5dc0 +0x0ac1:  mov    %eax,(%esp)
083f5dc3 +0x0ac4:  call   083f670a <+0x140b>
083f5dc8 +0x0ac9:  mov    %esi,%eax
083f5dca +0x0acb:  mov    %ebx,%edx
083f5dcc +0x0acd:  jmp    083f5e0d <+0xb0e>
083f5dce +0x0acf:  lea    -0x9(%ebp),%eax
083f5dd1 +0x0ad2:  mov    %eax,(%esp)
083f5dd4 +0x0ad5:  call   083f670a <+0x140b>
083f5dd9 +0x0ada:  mov    0x8(%ebp),%eax
083f5ddc +0x0add:  movl   $0x0,0x10(%eax)
083f5de3 +0x0ae4:  mov    0xc(%ebp),%eax
083f5de6 +0x0ae7:  mov    %eax,0x4(%esp)
083f5dea +0x0aeb:  mov    0x8(%ebp),%eax
083f5ded +0x0aee:  mov    %eax,(%esp)
083f5df0 +0x0af1:  call   083f6738 <+0x1439>
083f5df5 +0x0af6:  jmp    083f5e28 <+0xb29>
083f5df7 +0x0af8:  mov    %edx,%ebx
083f5df9 +0x0afa:  mov    %eax,%esi
083f5dfb +0x0afc:  mov    0x8(%ebp),%eax
083f5dfe +0x0aff:  add    $0x4,%eax
083f5e01 +0x0b02:  mov    %eax,(%esp)
083f5e04 +0x0b05:  call   083f5e44 <+0xb45>
083f5e09 +0x0b0a:  mov    %esi,%eax
083f5e0b +0x0b0c:  mov    %ebx,%edx
083f5e0d +0x0b0e:  mov    %edx,%ebx
083f5e0f +0x0b10:  mov    %eax,%esi
083f5e11 +0x0b12:  mov    0x8(%ebp),%eax
083f5e14 +0x0b15:  mov    %eax,(%esp)
083f5e17 +0x0b18:  call   083f5e30 <+0xb31>
083f5e1c +0x0b1d:  mov    %esi,%eax
083f5e1e +0x0b1f:  mov    %ebx,%edx
083f5e20 +0x0b21:  mov    %eax,(%esp)
083f5e23 +0x0b24:  call   08ae3750 <_Unwind_Resume>
083f5e28 +0x0b29:  add    $0x20,%esp
083f5e2b +0x0b2c:  pop    %ebx
083f5e2c +0x0b2d:  pop    %esi
083f5e2d +0x0b2e:  pop    %ebp
083f5e2e +0x0b2f:  ret
083f5e2f +0x0b30:  nop
083f5e30 +0x0b31:  push   %ebp
083f5e31 +0x0b32:  mov    %esp,%ebp
083f5e33 +0x0b34:  sub    $0x18,%esp
083f5e36 +0x0b37:  mov    0x8(%ebp),%eax
083f5e39 +0x0b3a:  mov    %eax,(%esp)
083f5e3c +0x0b3d:  call   083f67b6 <+0x14b7>
083f5e41 +0x0b42:  leave
083f5e42 +0x0b43:  ret
083f5e43 +0x0b44:  nop
083f5e44 +0x0b45:  push   %ebp
083f5e45 +0x0b46:  mov    %esp,%ebp
083f5e47 +0x0b48:  push   %esi
083f5e48 +0x0b49:  push   %ebx
083f5e49 +0x0b4a:  sub    $0x10,%esp
083f5e4c +0x0b4d:  mov    0x8(%ebp),%eax
083f5e4f +0x0b50:  mov    %eax,(%esp)
083f5e52 +0x0b53:  call   083f6838 <+0x1539>
083f5e57 +0x0b58:  mov    0x8(%ebp),%edx
083f5e5a +0x0b5b:  mov    0x4(%edx),%ecx
083f5e5d +0x0b5e:  mov    0x8(%ebp),%edx
083f5e60 +0x0b61:  mov    (%edx),%edx
083f5e62 +0x0b63:  mov    %eax,0x8(%esp)
083f5e66 +0x0b67:  mov    %ecx,0x4(%esp)
083f5e6a +0x0b6b:  mov    %edx,(%esp)
083f5e6d +0x0b6e:  call   083f6840 <+0x1541>
083f5e72 +0x0b73:  jmp    083f5e8f <+0xb90>
083f5e74 +0x0b75:  mov    %edx,%ebx
083f5e76 +0x0b77:  mov    %eax,%esi
083f5e78 +0x0b79:  mov    0x8(%ebp),%eax
083f5e7b +0x0b7c:  mov    %eax,(%esp)
083f5e7e +0x0b7f:  call   083f67d0 <+0x14d1>
083f5e83 +0x0b84:  mov    %esi,%eax
083f5e85 +0x0b86:  mov    %ebx,%edx
083f5e87 +0x0b88:  mov    %eax,(%esp)
083f5e8a +0x0b8b:  call   08ae3750 <_Unwind_Resume>
083f5e8f +0x0b90:  mov    0x8(%ebp),%eax
083f5e92 +0x0b93:  mov    %eax,(%esp)
083f5e95 +0x0b96:  call   083f67d0 <+0x14d1>
083f5e9a +0x0b9b:  add    $0x10,%esp
083f5e9d +0x0b9e:  pop    %ebx
083f5e9e +0x0b9f:  pop    %esi
083f5e9f +0x0ba0:  pop    %ebp
083f5ea0 +0x0ba1:  ret
083f5ea1 +0x0ba2:  nop
083f5ea2 +0x0ba3:  push   %ebp
083f5ea3 +0x0ba4:  mov    %esp,%ebp
083f5ea5 +0x0ba6:  sub    $0x28,%esp
083f5ea8 +0x0ba9:  movl   $0x0,-0x14(%ebp)
083f5eaf +0x0bb0:  jmp    083f5f17 <+0xc18>
083f5eb1 +0x0bb2:  mov    0x8(%ebp),%eax
083f5eb4 +0x0bb5:  lea    0x4(%eax),%edx
083f5eb7 +0x0bb8:  mov    -0x14(%ebp),%eax
083f5eba +0x0bbb:  mov    %eax,0x4(%esp)
083f5ebe +0x0bbf:  mov    %edx,(%esp)
083f5ec1 +0x0bc2:  call   083f6876 <+0x1577>
083f5ec6 +0x0bc7:  mov    (%eax),%eax
083f5ec8 +0x0bc9:  mov    %eax,-0x10(%ebp)
083f5ecb +0x0bcc:  jmp    083f5eed <+0xbee>
083f5ecd +0x0bce:  mov    -0x10(%ebp),%eax
083f5ed0 +0x0bd1:  mov    (%eax),%eax
083f5ed2 +0x0bd3:  mov    %eax,-0xc(%ebp)
083f5ed5 +0x0bd6:  mov    -0x10(%ebp),%eax
083f5ed8 +0x0bd9:  mov    %eax,0x4(%esp)
083f5edc +0x0bdd:  mov    0x8(%ebp),%eax
083f5edf +0x0be0:  mov    %eax,(%esp)
083f5ee2 +0x0be3:  call   083f6888 <+0x1589>
083f5ee7 +0x0be8:  mov    -0xc(%ebp),%eax
083f5eea +0x0beb:  mov    %eax,-0x10(%ebp)
083f5eed +0x0bee:  cmpl   $0x0,-0x10(%ebp)
083f5ef1 +0x0bf2:  setne  %al
083f5ef4 +0x0bf5:  test   %al,%al
083f5ef6 +0x0bf7:  jne    083f5ecd <+0xbce>
083f5ef8 +0x0bf9:  mov    0x8(%ebp),%eax
083f5efb +0x0bfc:  lea    0x4(%eax),%edx
083f5efe +0x0bff:  mov    -0x14(%ebp),%eax
083f5f01 +0x0c02:  mov    %eax,0x4(%esp)
083f5f05 +0x0c06:  mov    %edx,(%esp)
083f5f08 +0x0c09:  call   083f6876 <+0x1577>
083f5f0d +0x0c0e:  movl   $0x0,(%eax)
083f5f13 +0x0c14:  addl   $0x1,-0x14(%ebp)
083f5f17 +0x0c18:  mov    0x8(%ebp),%eax
083f5f1a +0x0c1b:  add    $0x4,%eax
083f5f1d +0x0c1e:  mov    %eax,(%esp)
083f5f20 +0x0c21:  call   083f685a <+0x155b>
083f5f25 +0x0c26:  cmp    -0x14(%ebp),%eax
083f5f28 +0x0c29:  seta   %al
083f5f2b +0x0c2c:  test   %al,%al
083f5f2d +0x0c2e:  jne    083f5eb1 <+0xbb2>
083f5f2f +0x0c30:  mov    0x8(%ebp),%eax
083f5f32 +0x0c33:  movl   $0x0,0x10(%eax)
083f5f39 +0x0c3a:  leave
083f5f3a +0x0c3b:  ret
083f5f3b +0x0c3c:  nop
083f5f3c +0x0c3d:  push   %ebp
083f5f3d +0x0c3e:  mov    %esp,%ebp
083f5f3f +0x0c40:  sub    $0x18,%esp
083f5f42 +0x0c43:  mov    0x8(%ebp),%eax
083f5f45 +0x0c46:  mov    %eax,(%esp)
083f5f48 +0x0c49:  call   083f68dc <+0x15dd>
083f5f4d +0x0c4e:  leave
083f5f4e +0x0c4f:  ret
083f5f4f +0x0c50:  nop
083f5f50 +0x0c51:  push   %ebp
083f5f51 +0x0c52:  mov    %esp,%ebp
083f5f53 +0x0c54:  sub    $0x18,%esp
083f5f56 +0x0c57:  mov    0x8(%ebp),%eax
083f5f59 +0x0c5a:  mov    %eax,(%esp)
083f5f5c +0x0c5d:  call   083f692c <+0x162d>
083f5f61 +0x0c62:  leave
083f5f62 +0x0c63:  ret
083f5f63 +0x0c64:  nop
083f5f64 +0x0c65:  push   %ebp
083f5f65 +0x0c66:  mov    %esp,%ebp
083f5f67 +0x0c68:  sub    $0x28,%esp
083f5f6a +0x0c6b:  jmp    083f5fac <+0xcad>
083f5f6c +0x0c6d:  mov    0xc(%ebp),%eax
083f5f6f +0x0c70:  mov    %eax,(%esp)
083f5f72 +0x0c73:  call   083f6931 <+0x1632>
083f5f77 +0x0c78:  mov    %eax,0x4(%esp)
083f5f7b +0x0c7c:  mov    0x8(%ebp),%eax
083f5f7e +0x0c7f:  mov    %eax,(%esp)
083f5f81 +0x0c82:  call   083f5f64 <+0xc65>
083f5f86 +0x0c87:  mov    0xc(%ebp),%eax
083f5f89 +0x0c8a:  mov    %eax,(%esp)
083f5f8c +0x0c8d:  call   083f693c <+0x163d>
083f5f91 +0x0c92:  mov    %eax,-0xc(%ebp)
083f5f94 +0x0c95:  mov    0xc(%ebp),%eax
083f5f97 +0x0c98:  mov    %eax,0x4(%esp)
083f5f9b +0x0c9c:  mov    0x8(%ebp),%eax
083f5f9e +0x0c9f:  mov    %eax,(%esp)
083f5fa1 +0x0ca2:  call   083f6948 <+0x1649>
083f5fa6 +0x0ca7:  mov    -0xc(%ebp),%eax
083f5fa9 +0x0caa:  mov    %eax,0xc(%ebp)
083f5fac +0x0cad:  cmpl   $0x0,0xc(%ebp)
083f5fb0 +0x0cb1:  setne  %al
083f5fb3 +0x0cb4:  test   %al,%al
083f5fb5 +0x0cb6:  jne    083f5f6c <+0xc6d>
083f5fb7 +0x0cb8:  leave
083f5fb8 +0x0cb9:  ret
083f5fb9 +0x0cba:  nop
083f5fba +0x0cbb:  push   %ebp
083f5fbb +0x0cbc:  mov    %esp,%ebp
083f5fbd +0x0cbe:  mov    0x8(%ebp),%eax
083f5fc0 +0x0cc1:  mov    0x8(%eax),%eax
083f5fc3 +0x0cc4:  pop    %ebp
083f5fc4 +0x0cc5:  ret
083f5fc5 +0x0cc6:  nop
083f5fc6 +0x0cc7:  push   %ebp
083f5fc7 +0x0cc8:  mov    %esp,%ebp
083f5fc9 +0x0cca:  push   %ebx
083f5fca +0x0ccb:  sub    $0x14,%esp
083f5fcd +0x0cce:  mov    0x8(%ebp),%ebx
083f5fd0 +0x0cd1:  mov    0xc(%ebp),%eax
083f5fd3 +0x0cd4:  mov    0xc(%eax),%eax
083f5fd6 +0x0cd7:  mov    %eax,0x4(%esp)
083f5fda +0x0cdb:  mov    %ebx,(%esp)
083f5fdd +0x0cde:  call   083f697c <+0x167d>
083f5fe2 +0x0ce3:  mov    %ebx,%eax
083f5fe4 +0x0ce5:  add    $0x14,%esp
083f5fe7 +0x0ce8:  pop    %ebx
083f5fe8 +0x0ce9:  pop    %ebp
083f5fe9 +0x0cea:  ret    $0x4
083f5fec +0x0ced:  push   %ebp
083f5fed +0x0cee:  mov    %esp,%ebp
083f5fef +0x0cf0:  push   %ebx
083f5ff0 +0x0cf1:  sub    $0x14,%esp
083f5ff3 +0x0cf4:  mov    0x8(%ebp),%ebx
083f5ff6 +0x0cf7:  mov    0xc(%ebp),%eax
083f5ff9 +0x0cfa:  add    $0x4,%eax
083f5ffc +0x0cfd:  mov    %eax,0x4(%esp)
083f6000 +0x0d01:  mov    %ebx,(%esp)
083f6003 +0x0d04:  call   083f697c <+0x167d>
083f6008 +0x0d09:  mov    %ebx,%eax
083f600a +0x0d0b:  add    $0x14,%esp
083f600d +0x0d0e:  pop    %ebx
083f600e +0x0d0f:  pop    %ebp
083f600f +0x0d10:  ret    $0x4
083f6012 +0x0d13:  push   %ebp
083f6013 +0x0d14:  mov    %esp,%ebp
083f6015 +0x0d16:  push   %ebx
083f6016 +0x0d17:  sub    $0x14,%esp
083f6019 +0x0d1a:  mov    0x8(%ebp),%ebx
083f601c +0x0d1d:  mov    0xc(%ebp),%eax
083f601f +0x0d20:  mov    0xc(%eax),%eax
083f6022 +0x0d23:  mov    %eax,0x4(%esp)
083f6026 +0x0d27:  mov    %ebx,(%esp)
083f6029 +0x0d2a:  call   083f698a <+0x168b>
083f602e +0x0d2f:  mov    %ebx,%eax
083f6030 +0x0d31:  add    $0x14,%esp
083f6033 +0x0d34:  pop    %ebx
083f6034 +0x0d35:  pop    %ebp
083f6035 +0x0d36:  ret    $0x4
083f6038 +0x0d39:  push   %ebp
083f6039 +0x0d3a:  mov    %esp,%ebp
083f603b +0x0d3c:  push   %ebx
083f603c +0x0d3d:  sub    $0x14,%esp
083f603f +0x0d40:  mov    0x8(%ebp),%ebx
083f6042 +0x0d43:  mov    0xc(%ebp),%eax
083f6045 +0x0d46:  add    $0x4,%eax
083f6048 +0x0d49:  mov    %eax,0x4(%esp)
083f604c +0x0d4d:  mov    %ebx,(%esp)
083f604f +0x0d50:  call   083f698a <+0x168b>
083f6054 +0x0d55:  mov    %ebx,%eax
083f6056 +0x0d57:  add    $0x14,%esp
083f6059 +0x0d5a:  pop    %ebx
083f605a +0x0d5b:  pop    %ebp
083f605b +0x0d5c:  ret    $0x4
083f605e +0x0d5f:  push   %ebp
083f605f +0x0d60:  mov    %esp,%ebp
083f6061 +0x0d62:  push   %ebx
083f6062 +0x0d63:  sub    $0x14,%esp
083f6065 +0x0d66:  mov    0x8(%ebp),%ebx
083f6068 +0x0d69:  mov    0xc(%ebp),%eax
083f606b +0x0d6c:  mov    0x10(%ebp),%edx
083f606e +0x0d6f:  mov    %edx,0x8(%esp)
083f6072 +0x0d73:  mov    %eax,0x4(%esp)
083f6076 +0x0d77:  mov    %ebx,(%esp)
083f6079 +0x0d7a:  call   083f6998 <+0x1699>
083f607e +0x0d7f:  sub    $0x4,%esp
083f6081 +0x0d82:  mov    %ebx,%eax
083f6083 +0x0d84:  mov    -0x4(%ebp),%ebx
083f6086 +0x0d87:  leave
083f6087 +0x0d88:  ret    $0x4
083f608a +0x0d8b:  push   %ebp
083f608b +0x0d8c:  mov    %esp,%ebp
083f608d +0x0d8e:  push   %ebx
083f608e +0x0d8f:  sub    $0x14,%esp
083f6091 +0x0d92:  mov    0x8(%ebp),%ebx
083f6094 +0x0d95:  mov    0xc(%ebp),%eax
083f6097 +0x0d98:  mov    %eax,0x4(%esp)
083f609b +0x0d9c:  mov    %ebx,(%esp)
083f609e +0x0d9f:  call   083f69ea <+0x16eb>
083f60a3 +0x0da4:  sub    $0x4,%esp
083f60a6 +0x0da7:  mov    %ebx,%eax
083f60a8 +0x0da9:  mov    -0x4(%ebp),%ebx
083f60ab +0x0dac:  leave
083f60ac +0x0dad:  ret    $0x4
083f60af +0x0db0:  nop
083f60b0 +0x0db1:  push   %ebp
083f60b1 +0x0db2:  mov    %esp,%ebp
083f60b3 +0x0db4:  mov    0x8(%ebp),%eax
083f60b6 +0x0db7:  mov    (%eax),%eax
083f60b8 +0x0db9:  add    $0x10,%eax
083f60bb +0x0dbc:  pop    %ebp
083f60bc +0x0dbd:  ret
083f60bd +0x0dbe:  nop
083f60be +0x0dbf:  push   %ebp
083f60bf +0x0dc0:  mov    %esp,%ebp
083f60c1 +0x0dc2:  mov    0x8(%ebp),%eax
083f60c4 +0x0dc5:  mov    (%eax),%edx
083f60c6 +0x0dc7:  mov    0xc(%ebp),%eax
083f60c9 +0x0dca:  mov    (%eax),%eax
083f60cb +0x0dcc:  cmp    %eax,%edx
083f60cd +0x0dce:  sete   %al
083f60d0 +0x0dd1:  pop    %ebp
083f60d1 +0x0dd2:  ret
083f60d2 +0x0dd3:  push   %ebp
083f60d3 +0x0dd4:  mov    %esp,%ebp
083f60d5 +0x0dd6:  sub    $0x18,%esp
083f60d8 +0x0dd9:  mov    0x8(%ebp),%eax
083f60db +0x0ddc:  mov    %eax,(%esp)
083f60de +0x0ddf:  call   083f69f4 <+0x16f5>
083f60e3 +0x0de4:  leave
083f60e4 +0x0de5:  ret
083f60e5 +0x0de6:  nop
083f60e6 +0x0de7:  push   %ebp
083f60e7 +0x0de8:  mov    %esp,%ebp
083f60e9 +0x0dea:  sub    $0x18,%esp
083f60ec +0x0ded:  mov    0x8(%ebp),%eax
083f60ef +0x0df0:  mov    %eax,(%esp)
083f60f2 +0x0df3:  call   083f6a08 <+0x1709>
083f60f7 +0x0df8:  leave
083f60f8 +0x0df9:  ret
083f60f9 +0x0dfa:  nop
083f60fa +0x0dfb:  push   %ebp
083f60fb +0x0dfc:  mov    %esp,%ebp
083f60fd +0x0dfe:  push   %esi
083f60fe +0x0dff:  push   %ebx
083f60ff +0x0e00:  sub    $0x10,%esp
083f6102 +0x0e03:  mov    0x8(%ebp),%eax
083f6105 +0x0e06:  mov    %eax,(%esp)
083f6108 +0x0e09:  call   083f6a72 <+0x1773>
083f610d +0x0e0e:  mov    %eax,0x4(%esp)
083f6111 +0x0e12:  mov    0x8(%ebp),%eax
083f6114 +0x0e15:  mov    %eax,(%esp)
083f6117 +0x0e18:  call   083f6a1c <+0x171d>
083f611c +0x0e1d:  jmp    083f6139 <+0xe3a>
083f611e +0x0e1f:  mov    %edx,%ebx
083f6120 +0x0e21:  mov    %eax,%esi
083f6122 +0x0e23:  mov    0x8(%ebp),%eax
083f6125 +0x0e26:  mov    %eax,(%esp)
083f6128 +0x0e29:  call   083f60e6 <+0xde7>
083f612d +0x0e2e:  mov    %esi,%eax
083f612f +0x0e30:  mov    %ebx,%edx
083f6131 +0x0e32:  mov    %eax,(%esp)
083f6134 +0x0e35:  call   08ae3750 <_Unwind_Resume>
083f6139 +0x0e3a:  mov    0x8(%ebp),%eax
083f613c +0x0e3d:  mov    %eax,(%esp)
083f613f +0x0e40:  call   083f60e6 <+0xde7>
083f6144 +0x0e45:  add    $0x10,%esp
083f6147 +0x0e48:  pop    %ebx
083f6148 +0x0e49:  pop    %esi
083f6149 +0x0e4a:  pop    %ebp
083f614a +0x0e4b:  ret
083f614b +0x0e4c:  nop
083f614c +0x0e4d:  push   %ebp
083f614d +0x0e4e:  mov    %esp,%ebp
083f614f +0x0e50:  sub    $0x18,%esp
083f6152 +0x0e53:  mov    0xc(%ebp),%eax
083f6155 +0x0e56:  mov    %eax,(%esp)
083f6158 +0x0e59:  call   082c751e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x19419>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x19419
083f615d +0x0e5e:  mov    (%eax),%edx
083f615f +0x0e60:  mov    0x8(%ebp),%eax
083f6162 +0x0e63:  mov    %edx,(%eax)
083f6164 +0x0e65:  mov    0x10(%ebp),%eax
083f6167 +0x0e68:  mov    %eax,(%esp)
083f616a +0x0e6b:  call   083f6a7d <+0x177e>
083f616f +0x0e70:  mov    0x8(%ebp),%edx
083f6172 +0x0e73:  add    $0x4,%edx
083f6175 +0x0e76:  mov    %eax,0x4(%esp)
083f6179 +0x0e7a:  mov    %edx,(%esp)
083f617c +0x0e7d:  call   083f6a86 <+0x1787>
083f6181 +0x0e82:  leave
083f6182 +0x0e83:  ret
083f6183 +0x0e84:  nop
083f6184 +0x0e85:  push   %ebp
083f6185 +0x0e86:  mov    %esp,%ebp
083f6187 +0x0e88:  push   %ebx
083f6188 +0x0e89:  sub    $0x24,%esp
083f618b +0x0e8c:  mov    0x8(%ebp),%ebx
083f618e +0x0e8f:  lea    0x10(%ebp),%eax
083f6191 +0x0e92:  mov    %eax,0x4(%esp)
083f6195 +0x0e96:  lea    -0xc(%ebp),%eax
083f6198 +0x0e99:  mov    %eax,(%esp)
083f619b +0x0e9c:  call   083f6aa8 <+0x17a9>
083f61a0 +0x0ea1:  mov    0xc(%ebp),%eax
083f61a3 +0x0ea4:  mov    0x14(%ebp),%edx
083f61a6 +0x0ea7:  mov    %edx,0xc(%esp)
083f61aa +0x0eab:  mov    -0xc(%ebp),%edx
083f61ad +0x0eae:  mov    %edx,0x8(%esp)
083f61b1 +0x0eb2:  mov    %eax,0x4(%esp)
083f61b5 +0x0eb6:  mov    %ebx,(%esp)
083f61b8 +0x0eb9:  call   083f6ab8 <+0x17b9>
083f61bd +0x0ebe:  sub    $0x4,%esp
083f61c0 +0x0ec1:  mov    %ebx,%eax
083f61c2 +0x0ec3:  mov    -0x4(%ebp),%ebx
083f61c5 +0x0ec6:  leave
083f61c6 +0x0ec7:  ret    $0x4
083f61c9 +0x0eca:  nop
083f61ca +0x0ecb:  push   %ebp
083f61cb +0x0ecc:  mov    %esp,%ebp
083f61cd +0x0ece:  push   %ebx
083f61ce +0x0ecf:  sub    $0x14,%esp
083f61d1 +0x0ed2:  mov    0x8(%ebp),%ebx
083f61d4 +0x0ed5:  mov    0xc(%ebp),%eax
083f61d7 +0x0ed8:  mov    0x10(%ebp),%edx
083f61da +0x0edb:  mov    %edx,0x8(%esp)
083f61de +0x0edf:  mov    %eax,0x4(%esp)
083f61e2 +0x0ee3:  mov    %ebx,(%esp)
083f61e5 +0x0ee6:  call   083f6e7e <+0x1b7f>
083f61ea +0x0eeb:  sub    $0x4,%esp
083f61ed +0x0eee:  mov    %ebx,%eax
083f61ef +0x0ef0:  mov    -0x4(%ebp),%ebx
083f61f2 +0x0ef3:  leave
083f61f3 +0x0ef4:  ret    $0x4
083f61f6 +0x0ef7:  push   %ebp
083f61f7 +0x0ef8:  mov    %esp,%ebp
083f61f9 +0x0efa:  push   %ebx
083f61fa +0x0efb:  sub    $0x14,%esp
083f61fd +0x0efe:  mov    0x8(%ebp),%ebx
083f6200 +0x0f01:  mov    0xc(%ebp),%eax
083f6203 +0x0f04:  mov    %eax,0x4(%esp)
083f6207 +0x0f08:  mov    %ebx,(%esp)
083f620a +0x0f0b:  call   083f6ed0 <+0x1bd1>
083f620f +0x0f10:  sub    $0x4,%esp
083f6212 +0x0f13:  mov    %ebx,%eax
083f6214 +0x0f15:  mov    -0x4(%ebp),%ebx
083f6217 +0x0f18:  leave
083f6218 +0x0f19:  ret    $0x4
083f621b +0x0f1c:  nop
083f621c +0x0f1d:  push   %ebp
083f621d +0x0f1e:  mov    %esp,%ebp
083f621f +0x0f20:  mov    0x8(%ebp),%eax
083f6222 +0x0f23:  mov    (%eax),%eax
083f6224 +0x0f25:  add    $0x10,%eax
083f6227 +0x0f28:  pop    %ebp
083f6228 +0x0f29:  ret
083f6229 +0x0f2a:  nop
083f622a +0x0f2b:  push   %ebp
083f622b +0x0f2c:  mov    %esp,%ebp
083f622d +0x0f2e:  mov    0x8(%ebp),%eax
083f6230 +0x0f31:  mov    (%eax),%edx
083f6232 +0x0f33:  mov    0xc(%ebp),%eax
083f6235 +0x0f36:  mov    (%eax),%eax
083f6237 +0x0f38:  cmp    %eax,%edx
083f6239 +0x0f3a:  sete   %al
083f623c +0x0f3d:  pop    %ebp
083f623d +0x0f3e:  ret
083f623e +0x0f3f:  push   %ebp
083f623f +0x0f40:  mov    %esp,%ebp
083f6241 +0x0f42:  sub    $0x18,%esp
083f6244 +0x0f45:  mov    0xc(%ebp),%eax
083f6247 +0x0f48:  mov    %eax,(%esp)
083f624a +0x0f4b:  call   080ed2d4 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x5b9>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x5b9
083f624f +0x0f50:  mov    (%eax),%edx
083f6251 +0x0f52:  mov    0x8(%ebp),%eax
083f6254 +0x0f55:  mov    %edx,(%eax)
083f6256 +0x0f57:  mov    0x10(%ebp),%eax
083f6259 +0x0f5a:  mov    %eax,(%esp)
083f625c +0x0f5d:  call   083f6eda <+0x1bdb>
083f6261 +0x0f62:  mov    (%eax),%edx
083f6263 +0x0f64:  mov    0x8(%ebp),%eax
083f6266 +0x0f67:  mov    %edx,0x4(%eax)
083f6269 +0x0f6a:  leave
083f626a +0x0f6b:  ret
083f626b +0x0f6c:  nop
083f626c +0x0f6d:  push   %ebp
083f626d +0x0f6e:  mov    %esp,%ebp
083f626f +0x0f70:  push   %ebx
083f6270 +0x0f71:  sub    $0x24,%esp
083f6273 +0x0f74:  mov    0x8(%ebp),%ebx
083f6276 +0x0f77:  lea    0x10(%ebp),%eax
083f6279 +0x0f7a:  mov    %eax,0x4(%esp)
083f627d +0x0f7e:  lea    -0xc(%ebp),%eax
083f6280 +0x0f81:  mov    %eax,(%esp)
083f6283 +0x0f84:  call   083f6ee2 <+0x1be3>
083f6288 +0x0f89:  mov    0xc(%ebp),%eax
083f628b +0x0f8c:  mov    0x14(%ebp),%edx
083f628e +0x0f8f:  mov    %edx,0xc(%esp)
083f6292 +0x0f93:  mov    -0xc(%ebp),%edx
083f6295 +0x0f96:  mov    %edx,0x8(%esp)
083f6299 +0x0f9a:  mov    %eax,0x4(%esp)
083f629d +0x0f9e:  mov    %ebx,(%esp)
083f62a0 +0x0fa1:  call   083f6ef2 <+0x1bf3>
083f62a5 +0x0fa6:  sub    $0x4,%esp
083f62a8 +0x0fa9:  mov    %ebx,%eax
083f62aa +0x0fab:  mov    -0x4(%ebp),%ebx
083f62ad +0x0fae:  leave
083f62ae +0x0faf:  ret    $0x4
083f62b1 +0x0fb2:  nop
083f62b2 +0x0fb3:  push   %ebp
083f62b3 +0x0fb4:  mov    %esp,%ebp
083f62b5 +0x0fb6:  push   %ebx
083f62b6 +0x0fb7:  sub    $0x24,%esp
083f62b9 +0x0fba:  mov    0x8(%ebp),%ebx
083f62bc +0x0fbd:  mov    0x10(%ebp),%eax
083f62bf +0x0fc0:  mov    %eax,0x4(%esp)
083f62c3 +0x0fc4:  mov    0xc(%ebp),%eax
083f62c6 +0x0fc7:  mov    %eax,(%esp)
083f62c9 +0x0fca:  call   083f72b8 <+0x1fb9>
083f62ce +0x0fcf:  mov    %eax,-0x10(%ebp)
083f62d1 +0x0fd2:  mov    0xc(%ebp),%eax
083f62d4 +0x0fd5:  lea    0x4(%eax),%edx
083f62d7 +0x0fd8:  mov    -0x10(%ebp),%eax
083f62da +0x0fdb:  mov    %eax,0x4(%esp)
083f62de +0x0fdf:  mov    %edx,(%esp)
083f62e1 +0x0fe2:  call   083f6876 <+0x1577>
083f62e6 +0x0fe7:  mov    (%eax),%eax
083f62e8 +0x0fe9:  mov    %eax,-0xc(%ebp)
083f62eb +0x0fec:  jmp    083f62f5 <+0xff6>
083f62ed +0x0fee:  mov    -0xc(%ebp),%eax
083f62f0 +0x0ff1:  mov    (%eax),%eax
083f62f2 +0x0ff3:  mov    %eax,-0xc(%ebp)
083f62f5 +0x0ff6:  cmpl   $0x0,-0xc(%ebp)
083f62f9 +0x0ffa:  je     083f633a <+0x103b>
083f62fb +0x0ffc:  mov    -0xc(%ebp),%eax
083f62fe +0x0fff:  lea    0x4(%eax),%edx
083f6301 +0x1002:  mov    0xc(%ebp),%eax
083f6304 +0x1005:  add    $0x3,%eax
083f6307 +0x1008:  mov    %edx,0x4(%esp)
083f630b +0x100c:  mov    %eax,(%esp)
083f630e +0x100f:  call   083f72e4 <+0x1fe5>
083f6313 +0x1014:  mov    0xc(%ebp),%edx
083f6316 +0x1017:  lea    0x2(%edx),%ecx
083f6319 +0x101a:  mov    0x10(%ebp),%edx
083f631c +0x101d:  mov    %edx,0x8(%esp)
083f6320 +0x1021:  mov    %eax,0x4(%esp)
083f6324 +0x1025:  mov    %ecx,(%esp)
083f6327 +0x1028:  call   082c4b86 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x16a81>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x16a81
083f632c +0x102d:  xor    $0x1,%eax
083f632f +0x1030:  test   %al,%al
083f6331 +0x1032:  je     083f633a <+0x103b>
083f6333 +0x1034:  mov    $0x1,%eax
083f6338 +0x1039:  jmp    083f633f <+0x1040>
083f633a +0x103b:  mov    $0x0,%eax
083f633f +0x1040:  test   %al,%al
083f6341 +0x1042:  jne    083f62ed <+0xfee>
083f6343 +0x1044:  mov    0xc(%ebp),%eax
083f6346 +0x1047:  mov    %eax,0x8(%esp)
083f634a +0x104b:  mov    -0xc(%ebp),%eax
083f634d +0x104e:  mov    %eax,0x4(%esp)
083f6351 +0x1052:  mov    %ebx,(%esp)
083f6354 +0x1055:  call   083f72ec <+0x1fed>
083f6359 +0x105a:  mov    %ebx,%eax
083f635b +0x105c:  add    $0x24,%esp
083f635e +0x105f:  pop    %ebx
083f635f +0x1060:  pop    %ebp
083f6360 +0x1061:  ret    $0x4
083f6363 +0x1064:  nop
083f6364 +0x1065:  push   %ebp
083f6365 +0x1066:  mov    %esp,%ebp
083f6367 +0x1068:  push   %ebx
083f6368 +0x1069:  sub    $0x14,%esp
083f636b +0x106c:  mov    0x8(%ebp),%ebx
083f636e +0x106f:  mov    0xc(%ebp),%eax
083f6371 +0x1072:  mov    %eax,0x8(%esp)
083f6375 +0x1076:  movl   $0x0,0x4(%esp)
083f637d +0x107e:  mov    %ebx,(%esp)
083f6380 +0x1081:  call   083f72ec <+0x1fed>
083f6385 +0x1086:  mov    %ebx,%eax
083f6387 +0x1088:  add    $0x14,%esp
083f638a +0x108b:  pop    %ebx
083f638b +0x108c:  pop    %ebp
083f638c +0x108d:  ret    $0x4
083f638f +0x1090:  nop
083f6390 +0x1091:  push   %ebp
083f6391 +0x1092:  mov    %esp,%ebp
083f6393 +0x1094:  mov    0x8(%ebp),%eax
083f6396 +0x1097:  mov    (%eax),%eax
083f6398 +0x1099:  add    $0x4,%eax
083f639b +0x109c:  pop    %ebp
083f639c +0x109d:  ret
083f639d +0x109e:  push   %ebp
083f639e +0x109f:  mov    %esp,%ebp
083f63a0 +0x10a1:  mov    0x8(%ebp),%eax
083f63a3 +0x10a4:  pop    %ebp
083f63a4 +0x10a5:  ret
083f63a5 +0x10a6:  nop
083f63a6 +0x10a7:  push   %ebp
083f63a7 +0x10a8:  mov    %esp,%ebp
083f63a9 +0x10aa:  sub    $0x18,%esp
083f63ac +0x10ad:  mov    0xc(%ebp),%eax
083f63af +0x10b0:  mov    %eax,(%esp)
083f63b2 +0x10b3:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
083f63b7 +0x10b8:  mov    (%eax),%edx
083f63b9 +0x10ba:  mov    0x8(%ebp),%eax
083f63bc +0x10bd:  mov    %edx,(%eax)
083f63be +0x10bf:  mov    0x10(%ebp),%eax
083f63c1 +0x10c2:  mov    %eax,(%esp)
083f63c4 +0x10c5:  call   083f639d <+0x109e>
083f63c9 +0x10ca:  mov    0x8(%ebp),%edx
083f63cc +0x10cd:  mov    (%eax),%ecx
083f63ce +0x10cf:  mov    %ecx,0x4(%edx)
083f63d1 +0x10d2:  mov    0x4(%eax),%ecx
083f63d4 +0x10d5:  mov    %ecx,0x8(%edx)
083f63d7 +0x10d8:  mov    0x8(%eax),%eax
083f63da +0x10db:  mov    %eax,0xc(%edx)
083f63dd +0x10de:  leave
083f63de +0x10df:  ret
083f63df +0x10e0:  push   %ebp
083f63e0 +0x10e1:  mov    %esp,%ebp
083f63e2 +0x10e3:  mov    0x8(%ebp),%eax
083f63e5 +0x10e6:  pop    %ebp
083f63e6 +0x10e7:  ret
083f63e7 +0x10e8:  nop
083f63e8 +0x10e9:  push   %ebp
083f63e9 +0x10ea:  mov    %esp,%ebp
083f63eb +0x10ec:  push   %ebx
083f63ec +0x10ed:  sub    $0x14,%esp
083f63ef +0x10f0:  mov    0x8(%ebp),%ebx
083f63f2 +0x10f3:  mov    0xc(%ebp),%eax
083f63f5 +0x10f6:  mov    0x10(%eax),%eax
083f63f8 +0x10f9:  add    $0x1,%eax
083f63fb +0x10fc:  mov    %eax,0x4(%esp)
083f63ff +0x1100:  mov    0xc(%ebp),%eax
083f6402 +0x1103:  mov    %eax,(%esp)
083f6405 +0x1106:  call   083f7302 <+0x2003>
083f640a +0x110b:  mov    0x10(%ebp),%eax
083f640d +0x110e:  mov    %eax,0x8(%esp)
083f6411 +0x1112:  mov    0xc(%ebp),%eax
083f6414 +0x1115:  mov    %eax,0x4(%esp)
083f6418 +0x1119:  mov    %ebx,(%esp)
083f641b +0x111c:  call   083f757a <+0x227b>
083f6420 +0x1121:  sub    $0x4,%esp
083f6423 +0x1124:  mov    %ebx,%eax
083f6425 +0x1126:  mov    -0x4(%ebp),%ebx
083f6428 +0x1129:  leave
083f6429 +0x112a:  ret    $0x4
083f642c +0x112d:  push   %ebp
083f642d +0x112e:  mov    %esp,%ebp
083f642f +0x1130:  mov    0x8(%ebp),%eax
083f6432 +0x1133:  pop    %ebp
083f6433 +0x1134:  ret
083f6434 +0x1135:  push   %ebp
083f6435 +0x1136:  mov    %esp,%ebp
083f6437 +0x1138:  sub    $0x18,%esp
083f643a +0x113b:  mov    0xc(%ebp),%eax
083f643d +0x113e:  mov    %eax,(%esp)
083f6440 +0x1141:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
083f6445 +0x1146:  mov    (%eax),%edx
083f6447 +0x1148:  mov    0x8(%ebp),%eax
083f644a +0x114b:  mov    %edx,(%eax)
083f644c +0x114d:  mov    0x10(%ebp),%eax
083f644f +0x1150:  mov    %eax,(%esp)
083f6452 +0x1153:  call   083f76db <+0x23dc>
083f6457 +0x1158:  mov    0x8(%ebp),%edx
083f645a +0x115b:  mov    (%eax),%ecx
083f645c +0x115d:  mov    %ecx,0x4(%edx)
083f645f +0x1160:  mov    0x4(%eax),%ecx
083f6462 +0x1163:  mov    %ecx,0x8(%edx)
083f6465 +0x1166:  mov    0x8(%eax),%eax
083f6468 +0x1169:  mov    %eax,0xc(%edx)
083f646b +0x116c:  leave
083f646c +0x116d:  ret
083f646d +0x116e:  nop
083f646e +0x116f:  push   %ebp
083f646f +0x1170:  mov    %esp,%ebp
083f6471 +0x1172:  push   %ebx
083f6472 +0x1173:  sub    $0x24,%esp
083f6475 +0x1176:  mov    0x8(%ebp),%eax
083f6478 +0x1179:  mov    0x10(%eax),%eax
083f647b +0x117c:  add    $0x1,%eax
083f647e +0x117f:  mov    %eax,0x4(%esp)
083f6482 +0x1183:  mov    0x8(%ebp),%eax
083f6485 +0x1186:  mov    %eax,(%esp)
083f6488 +0x1189:  call   083f7302 <+0x2003>
083f648d +0x118e:  mov    0xc(%ebp),%eax
083f6490 +0x1191:  mov    %eax,0x4(%esp)
083f6494 +0x1195:  mov    0x8(%ebp),%eax
083f6497 +0x1198:  mov    %eax,(%esp)
083f649a +0x119b:  call   083f76e4 <+0x23e5>
083f649f +0x11a0:  mov    %eax,-0x18(%ebp)
083f64a2 +0x11a3:  mov    0x8(%ebp),%eax
083f64a5 +0x11a6:  lea    0x4(%eax),%edx
083f64a8 +0x11a9:  mov    -0x18(%ebp),%eax
083f64ab +0x11ac:  mov    %eax,0x4(%esp)
083f64af +0x11b0:  mov    %edx,(%esp)
083f64b2 +0x11b3:  call   083f6876 <+0x1577>
083f64b7 +0x11b8:  mov    (%eax),%eax
083f64b9 +0x11ba:  mov    %eax,-0x14(%ebp)
083f64bc +0x11bd:  mov    -0x14(%ebp),%eax
083f64bf +0x11c0:  mov    %eax,-0xc(%ebp)
083f64c2 +0x11c3:  jmp    083f651d <+0x121e>
083f64c4 +0x11c5:  mov    0x8(%ebp),%eax
083f64c7 +0x11c8:  lea    0x3(%eax),%edx
083f64ca +0x11cb:  mov    0xc(%ebp),%eax
083f64cd +0x11ce:  mov    %eax,0x4(%esp)
083f64d1 +0x11d2:  mov    %edx,(%esp)
083f64d4 +0x11d5:  call   083f7710 <+0x2411>
083f64d9 +0x11da:  mov    %eax,%ebx
083f64db +0x11dc:  mov    -0xc(%ebp),%eax
083f64de +0x11df:  lea    0x4(%eax),%edx
083f64e1 +0x11e2:  mov    0x8(%ebp),%eax
083f64e4 +0x11e5:  add    $0x3,%eax
083f64e7 +0x11e8:  mov    %edx,0x4(%esp)
083f64eb +0x11ec:  mov    %eax,(%esp)
083f64ee +0x11ef:  call   083f72e4 <+0x1fe5>
083f64f3 +0x11f4:  mov    0x8(%ebp),%edx
083f64f6 +0x11f7:  add    $0x2,%edx
083f64f9 +0x11fa:  mov    %ebx,0x8(%esp)
083f64fd +0x11fe:  mov    %eax,0x4(%esp)
083f6501 +0x1202:  mov    %edx,(%esp)
083f6504 +0x1205:  call   082c4b86 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x16a81>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x16a81
083f6509 +0x120a:  test   %al,%al
083f650b +0x120c:  je     083f6515 <+0x1216>
083f650d +0x120e:  mov    -0xc(%ebp),%eax
083f6510 +0x1211:  add    $0x4,%eax
083f6513 +0x1214:  jmp    083f6574 <+0x1275>
083f6515 +0x1216:  mov    -0xc(%ebp),%eax
083f6518 +0x1219:  mov    (%eax),%eax
083f651a +0x121b:  mov    %eax,-0xc(%ebp)
083f651d +0x121e:  cmpl   $0x0,-0xc(%ebp)
083f6521 +0x1222:  setne  %al
083f6524 +0x1225:  test   %al,%al
083f6526 +0x1227:  jne    083f64c4 <+0x11c5>
083f6528 +0x1229:  mov    0xc(%ebp),%eax
083f652b +0x122c:  mov    %eax,0x4(%esp)
083f652f +0x1230:  mov    0x8(%ebp),%eax
083f6532 +0x1233:  mov    %eax,(%esp)
083f6535 +0x1236:  call   083f7718 <+0x2419>
083f653a +0x123b:  mov    %eax,-0x10(%ebp)
083f653d +0x123e:  mov    -0x10(%ebp),%eax
083f6540 +0x1241:  mov    -0x14(%ebp),%edx
083f6543 +0x1244:  mov    %edx,(%eax)
083f6545 +0x1246:  mov    0x8(%ebp),%eax
083f6548 +0x1249:  lea    0x4(%eax),%edx
083f654b +0x124c:  mov    -0x18(%ebp),%eax
083f654e +0x124f:  mov    %eax,0x4(%esp)
083f6552 +0x1253:  mov    %edx,(%esp)
083f6555 +0x1256:  call   083f6876 <+0x1577>
083f655a +0x125b:  mov    -0x10(%ebp),%edx
083f655d +0x125e:  mov    %edx,(%eax)
083f655f +0x1260:  mov    0x8(%ebp),%eax
083f6562 +0x1263:  mov    0x10(%eax),%eax
083f6565 +0x1266:  lea    0x1(%eax),%edx
083f6568 +0x1269:  mov    0x8(%ebp),%eax
083f656b +0x126c:  mov    %edx,0x10(%eax)
083f656e +0x126f:  mov    -0x10(%ebp),%eax
083f6571 +0x1272:  add    $0x4,%eax
083f6574 +0x1275:  add    $0x24,%esp
083f6577 +0x1278:  pop    %ebx
083f6578 +0x1279:  pop    %ebp
083f6579 +0x127a:  ret
083f657a +0x127b:  push   %ebp
083f657b +0x127c:  mov    %esp,%ebp
083f657d +0x127e:  sub    $0x38,%esp
083f6580 +0x1281:  mov    0xc(%ebp),%eax
083f6583 +0x1284:  mov    %eax,0x4(%esp)
083f6587 +0x1288:  mov    0x8(%ebp),%eax
083f658a +0x128b:  mov    %eax,(%esp)
083f658d +0x128e:  call   083f72b8 <+0x1fb9>
083f6592 +0x1293:  mov    %eax,-0x1c(%ebp)
083f6595 +0x1296:  mov    0x8(%ebp),%eax
083f6598 +0x1299:  lea    0x4(%eax),%edx
083f659b +0x129c:  mov    -0x1c(%ebp),%eax
083f659e +0x129f:  mov    %eax,0x4(%esp)
083f65a2 +0x12a3:  mov    %edx,(%esp)
083f65a5 +0x12a6:  call   083f6876 <+0x1577>
083f65aa +0x12ab:  mov    (%eax),%eax
083f65ac +0x12ad:  mov    %eax,-0x18(%ebp)
083f65af +0x12b0:  movl   $0x0,-0x14(%ebp)
083f65b6 +0x12b7:  cmpl   $0x0,-0x18(%ebp)
083f65ba +0x12bb:  je     083f66d1 <+0x13d2>
083f65c0 +0x12c1:  mov    -0x18(%ebp),%eax
083f65c3 +0x12c4:  mov    %eax,-0x10(%ebp)
083f65c6 +0x12c7:  mov    -0x10(%ebp),%eax
083f65c9 +0x12ca:  mov    (%eax),%eax
083f65cb +0x12cc:  mov    %eax,-0xc(%ebp)
083f65ce +0x12cf:  jmp    083f664c <+0x134d>
083f65d0 +0x12d1:  mov    -0xc(%ebp),%eax
083f65d3 +0x12d4:  lea    0x4(%eax),%edx
083f65d6 +0x12d7:  mov    0x8(%ebp),%eax
083f65d9 +0x12da:  add    $0x3,%eax
083f65dc +0x12dd:  mov    %edx,0x4(%esp)
083f65e0 +0x12e1:  mov    %eax,(%esp)
083f65e3 +0x12e4:  call   083f72e4 <+0x1fe5>
083f65e8 +0x12e9:  mov    0x8(%ebp),%edx
083f65eb +0x12ec:  lea    0x2(%edx),%ecx
083f65ee +0x12ef:  mov    0xc(%ebp),%edx
083f65f1 +0x12f2:  mov    %edx,0x8(%esp)
083f65f5 +0x12f6:  mov    %eax,0x4(%esp)
083f65f9 +0x12fa:  mov    %ecx,(%esp)
083f65fc +0x12fd:  call   082c4b86 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x16a81>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x16a81
083f6601 +0x1302:  test   %al,%al
083f6603 +0x1304:  je     083f663e <+0x133f>
083f6605 +0x1306:  mov    -0xc(%ebp),%eax
083f6608 +0x1309:  mov    (%eax),%edx
083f660a +0x130b:  mov    -0x10(%ebp),%eax
083f660d +0x130e:  mov    %edx,(%eax)
083f660f +0x1310:  mov    -0xc(%ebp),%eax
083f6612 +0x1313:  mov    %eax,0x4(%esp)
083f6616 +0x1317:  mov    0x8(%ebp),%eax
083f6619 +0x131a:  mov    %eax,(%esp)
083f661c +0x131d:  call   083f6888 <+0x1589>
083f6621 +0x1322:  mov    -0x10(%ebp),%eax
083f6624 +0x1325:  mov    (%eax),%eax
083f6626 +0x1327:  mov    %eax,-0xc(%ebp)
083f6629 +0x132a:  addl   $0x1,-0x14(%ebp)
083f662d +0x132e:  mov    0x8(%ebp),%eax
083f6630 +0x1331:  mov    0x10(%eax),%eax
083f6633 +0x1334:  lea    -0x1(%eax),%edx
083f6636 +0x1337:  mov    0x8(%ebp),%eax
083f6639 +0x133a:  mov    %edx,0x10(%eax)
083f663c +0x133d:  jmp    083f664c <+0x134d>
083f663e +0x133f:  mov    -0xc(%ebp),%eax
083f6641 +0x1342:  mov    %eax,-0x10(%ebp)
083f6644 +0x1345:  mov    -0x10(%ebp),%eax
083f6647 +0x1348:  mov    (%eax),%eax
083f6649 +0x134a:  mov    %eax,-0xc(%ebp)
083f664c +0x134d:  cmpl   $0x0,-0xc(%ebp)
083f6650 +0x1351:  setne  %al
083f6653 +0x1354:  test   %al,%al
083f6655 +0x1356:  jne    083f65d0 <+0x12d1>
083f665b +0x135c:  mov    -0x18(%ebp),%eax
083f665e +0x135f:  lea    0x4(%eax),%edx
083f6661 +0x1362:  mov    0x8(%ebp),%eax
083f6664 +0x1365:  add    $0x3,%eax
083f6667 +0x1368:  mov    %edx,0x4(%esp)
083f666b +0x136c:  mov    %eax,(%esp)
083f666e +0x136f:  call   083f72e4 <+0x1fe5>
083f6673 +0x1374:  mov    0x8(%ebp),%edx
083f6676 +0x1377:  lea    0x2(%edx),%ecx
083f6679 +0x137a:  mov    0xc(%ebp),%edx
083f667c +0x137d:  mov    %edx,0x8(%esp)
083f6680 +0x1381:  mov    %eax,0x4(%esp)
083f6684 +0x1385:  mov    %ecx,(%esp)
083f6687 +0x1388:  call   082c4b86 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x16a81>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x16a81
083f668c +0x138d:  test   %al,%al
083f668e +0x138f:  je     083f66d1 <+0x13d2>
083f6690 +0x1391:  mov    0x8(%ebp),%eax
083f6693 +0x1394:  lea    0x4(%eax),%edx
083f6696 +0x1397:  mov    -0x1c(%ebp),%eax
083f6699 +0x139a:  mov    %eax,0x4(%esp)
083f669d +0x139e:  mov    %edx,(%esp)
083f66a0 +0x13a1:  call   083f6876 <+0x1577>
083f66a5 +0x13a6:  mov    -0x18(%ebp),%edx
083f66a8 +0x13a9:  mov    (%edx),%edx
083f66aa +0x13ab:  mov    %edx,(%eax)
083f66ac +0x13ad:  mov    -0x18(%ebp),%eax
083f66af +0x13b0:  mov    %eax,0x4(%esp)
083f66b3 +0x13b4:  mov    0x8(%ebp),%eax
083f66b6 +0x13b7:  mov    %eax,(%esp)
083f66b9 +0x13ba:  call   083f6888 <+0x1589>
083f66be +0x13bf:  addl   $0x1,-0x14(%ebp)
083f66c2 +0x13c3:  mov    0x8(%ebp),%eax
083f66c5 +0x13c6:  mov    0x10(%eax),%eax
083f66c8 +0x13c9:  lea    -0x1(%eax),%edx
083f66cb +0x13cc:  mov    0x8(%ebp),%eax
083f66ce +0x13cf:  mov    %edx,0x10(%eax)
083f66d1 +0x13d2:  mov    -0x14(%ebp),%eax
083f66d4 +0x13d5:  leave
083f66d5 +0x13d6:  ret
083f66d6 +0x13d7:  push   %ebp
083f66d7 +0x13d8:  mov    %esp,%ebp
083f66d9 +0x13da:  pop    %ebp
083f66da +0x13db:  ret
083f66db +0x13dc:  nop
083f66dc +0x13dd:  push   %ebp
083f66dd +0x13de:  mov    %esp,%ebp
083f66df +0x13e0:  pop    %ebp
083f66e0 +0x13e1:  ret
083f66e1 +0x13e2:  nop
083f66e2 +0x13e3:  push   %ebp
083f66e3 +0x13e4:  mov    %esp,%ebp
083f66e5 +0x13e6:  sub    $0x18,%esp
083f66e8 +0x13e9:  mov    0x8(%ebp),%eax
083f66eb +0x13ec:  mov    %eax,(%esp)
083f66ee +0x13ef:  call   083f777a <+0x247b>
083f66f3 +0x13f4:  leave
083f66f4 +0x13f5:  ret
083f66f5 +0x13f6:  nop
083f66f6 +0x13f7:  push   %ebp
083f66f7 +0x13f8:  mov    %esp,%ebp
083f66f9 +0x13fa:  sub    $0x18,%esp
083f66fc +0x13fd:  mov    0x8(%ebp),%eax
083f66ff +0x1400:  mov    %eax,(%esp)
083f6702 +0x1403:  call   083f7780 <+0x2481>
083f6707 +0x1408:  leave
083f6708 +0x1409:  ret
083f6709 +0x140a:  nop
083f670a +0x140b:  push   %ebp
083f670b +0x140c:  mov    %esp,%ebp
083f670d +0x140e:  sub    $0x18,%esp
083f6710 +0x1411:  mov    0x8(%ebp),%eax
083f6713 +0x1414:  mov    %eax,(%esp)
083f6716 +0x1417:  call   083f7786 <+0x2487>
083f671b +0x141c:  leave
083f671c +0x141d:  ret
083f671d +0x141e:  nop
083f671e +0x141f:  push   %ebp
083f671f +0x1420:  mov    %esp,%ebp
083f6721 +0x1422:  sub    $0x18,%esp
083f6724 +0x1425:  mov    0x8(%ebp),%eax
083f6727 +0x1428:  mov    0xc(%ebp),%edx
083f672a +0x142b:  mov    %edx,0x4(%esp)
083f672e +0x142f:  mov    %eax,(%esp)
083f6731 +0x1432:  call   083f778c <+0x248d>
083f6736 +0x1437:  leave
083f6737 +0x1438:  ret
083f6738 +0x1439:  push   %ebp
083f6739 +0x143a:  mov    %esp,%ebp
083f673b +0x143c:  sub    $0x28,%esp
083f673e +0x143f:  mov    0xc(%ebp),%eax
083f6741 +0x1442:  mov    %eax,0x4(%esp)
083f6745 +0x1446:  mov    0x8(%ebp),%eax
083f6748 +0x1449:  mov    %eax,(%esp)
083f674b +0x144c:  call   083f77a6 <+0x24a7>
083f6750 +0x1451:  mov    %eax,-0xc(%ebp)
083f6753 +0x1454:  mov    0x8(%ebp),%eax
083f6756 +0x1457:  lea    0x4(%eax),%edx
083f6759 +0x145a:  mov    -0xc(%ebp),%eax
083f675c +0x145d:  mov    %eax,0x4(%esp)
083f6760 +0x1461:  mov    %edx,(%esp)
083f6763 +0x1464:  call   083f77ba <+0x24bb>
083f6768 +0x1469:  movl   $0x0,-0x14(%ebp)
083f676f +0x1470:  mov    0x8(%ebp),%eax
083f6772 +0x1473:  lea    0x4(%eax),%edx
083f6775 +0x1476:  lea    -0x10(%ebp),%eax
083f6778 +0x1479:  mov    %edx,0x4(%esp)
083f677c +0x147d:  mov    %eax,(%esp)
083f677f +0x1480:  call   083f78de <+0x25df>
083f6784 +0x1485:  sub    $0x4,%esp
083f6787 +0x1488:  mov    0x8(%ebp),%eax
083f678a +0x148b:  lea    0x4(%eax),%edx
083f678d +0x148e:  lea    -0x14(%ebp),%eax
083f6790 +0x1491:  mov    %eax,0xc(%esp)
083f6794 +0x1495:  mov    -0xc(%ebp),%eax
083f6797 +0x1498:  mov    %eax,0x8(%esp)
083f679b +0x149c:  mov    -0x10(%ebp),%eax
083f679e +0x149f:  mov    %eax,0x4(%esp)
083f67a2 +0x14a3:  mov    %edx,(%esp)
083f67a5 +0x14a6:  call   083f7904 <+0x2605>
083f67aa +0x14ab:  mov    0x8(%ebp),%eax
083f67ad +0x14ae:  movl   $0x0,0x10(%eax)
083f67b4 +0x14b5:  leave
083f67b5 +0x14b6:  ret
083f67b6 +0x14b7:  push   %ebp
083f67b7 +0x14b8:  mov    %esp,%ebp
083f67b9 +0x14ba:  pop    %ebp
083f67ba +0x14bb:  ret
083f67bb +0x14bc:  nop
083f67bc +0x14bd:  push   %ebp
083f67bd +0x14be:  mov    %esp,%ebp
083f67bf +0x14c0:  sub    $0x18,%esp
083f67c2 +0x14c3:  mov    0x8(%ebp),%eax
083f67c5 +0x14c6:  mov    %eax,(%esp)
083f67c8 +0x14c9:  call   083f670a <+0x140b>
083f67cd +0x14ce:  leave
083f67ce +0x14cf:  ret
083f67cf +0x14d0:  nop
083f67d0 +0x14d1:  push   %ebp
083f67d1 +0x14d2:  mov    %esp,%ebp
083f67d3 +0x14d4:  push   %esi
083f67d4 +0x14d5:  push   %ebx
083f67d5 +0x14d6:  sub    $0x10,%esp
083f67d8 +0x14d9:  mov    0x8(%ebp),%eax
083f67db +0x14dc:  mov    0x8(%eax),%eax
083f67de +0x14df:  mov    %eax,%edx
083f67e0 +0x14e1:  mov    0x8(%ebp),%eax
083f67e3 +0x14e4:  mov    (%eax),%eax
083f67e5 +0x14e6:  mov    %edx,%ecx
083f67e7 +0x14e8:  sub    %eax,%ecx
083f67e9 +0x14ea:  mov    %ecx,%eax
083f67eb +0x14ec:  sar    $0x2,%eax
083f67ee +0x14ef:  mov    %eax,%edx
083f67f0 +0x14f1:  mov    0x8(%ebp),%eax
083f67f3 +0x14f4:  mov    (%eax),%eax
083f67f5 +0x14f6:  mov    %edx,0x8(%esp)
083f67f9 +0x14fa:  mov    %eax,0x4(%esp)
083f67fd +0x14fe:  mov    0x8(%ebp),%eax
083f6800 +0x1501:  mov    %eax,(%esp)
083f6803 +0x1504:  call   083f792c <+0x262d>
083f6808 +0x1509:  jmp    083f6825 <+0x1526>
083f680a +0x150b:  mov    %edx,%ebx
083f680c +0x150d:  mov    %eax,%esi
083f680e +0x150f:  mov    0x8(%ebp),%eax
083f6811 +0x1512:  mov    %eax,(%esp)
083f6814 +0x1515:  call   083f67bc <+0x14bd>
083f6819 +0x151a:  mov    %esi,%eax
083f681b +0x151c:  mov    %ebx,%edx
083f681d +0x151e:  mov    %eax,(%esp)
083f6820 +0x1521:  call   08ae3750 <_Unwind_Resume>
083f6825 +0x1526:  mov    0x8(%ebp),%eax
083f6828 +0x1529:  mov    %eax,(%esp)
083f682b +0x152c:  call   083f67bc <+0x14bd>
083f6830 +0x1531:  add    $0x10,%esp
083f6833 +0x1534:  pop    %ebx
083f6834 +0x1535:  pop    %esi
083f6835 +0x1536:  pop    %ebp
083f6836 +0x1537:  ret
083f6837 +0x1538:  nop
083f6838 +0x1539:  push   %ebp
083f6839 +0x153a:  mov    %esp,%ebp
083f683b +0x153c:  mov    0x8(%ebp),%eax
083f683e +0x153f:  pop    %ebp
083f683f +0x1540:  ret
083f6840 +0x1541:  push   %ebp
083f6841 +0x1542:  mov    %esp,%ebp
083f6843 +0x1544:  sub    $0x18,%esp
083f6846 +0x1547:  mov    0xc(%ebp),%eax
083f6849 +0x154a:  mov    %eax,0x4(%esp)
083f684d +0x154e:  mov    0x8(%ebp),%eax
083f6850 +0x1551:  mov    %eax,(%esp)
083f6853 +0x1554:  call   083f7953 <+0x2654>
083f6858 +0x1559:  leave
083f6859 +0x155a:  ret
083f685a +0x155b:  push   %ebp
083f685b +0x155c:  mov    %esp,%ebp
083f685d +0x155e:  mov    0x8(%ebp),%eax
083f6860 +0x1561:  mov    0x4(%eax),%eax
083f6863 +0x1564:  mov    %eax,%edx
083f6865 +0x1566:  mov    0x8(%ebp),%eax
083f6868 +0x1569:  mov    (%eax),%eax
083f686a +0x156b:  mov    %edx,%ecx
083f686c +0x156d:  sub    %eax,%ecx
083f686e +0x156f:  mov    %ecx,%eax
083f6870 +0x1571:  sar    $0x2,%eax
083f6873 +0x1574:  pop    %ebp
083f6874 +0x1575:  ret
083f6875 +0x1576:  nop
083f6876 +0x1577:  push   %ebp
083f6877 +0x1578:  mov    %esp,%ebp
083f6879 +0x157a:  mov    0x8(%ebp),%eax
083f687c +0x157d:  mov    (%eax),%eax
083f687e +0x157f:  mov    0xc(%ebp),%edx
083f6881 +0x1582:  shl    $0x2,%edx
083f6884 +0x1585:  add    %edx,%eax
083f6886 +0x1587:  pop    %ebp
083f6887 +0x1588:  ret
083f6888 +0x1589:  push   %ebp
083f6889 +0x158a:  mov    %esp,%ebp
083f688b +0x158c:  push   %ebx
083f688c +0x158d:  sub    $0x24,%esp
083f688f +0x1590:  mov    0xc(%ebp),%eax
083f6892 +0x1593:  lea    0x4(%eax),%ebx
083f6895 +0x1596:  lea    -0x9(%ebp),%eax
083f6898 +0x1599:  mov    0x8(%ebp),%edx
083f689b +0x159c:  mov    %edx,0x4(%esp)
083f689f +0x15a0:  mov    %eax,(%esp)
083f68a2 +0x15a3:  call   083f796e <+0x266f>
083f68a7 +0x15a8:  sub    $0x4,%esp
083f68aa +0x15ab:  lea    -0x9(%ebp),%eax
083f68ad +0x15ae:  mov    %ebx,0x4(%esp)
083f68b1 +0x15b2:  mov    %eax,(%esp)
083f68b4 +0x15b5:  call   083f799c <+0x269d>
083f68b9 +0x15ba:  lea    -0x9(%ebp),%eax
083f68bc +0x15bd:  mov    %eax,(%esp)
083f68bf +0x15c0:  call   083f5d62 <+0xa63>
083f68c4 +0x15c5:  mov    0xc(%ebp),%eax
083f68c7 +0x15c8:  mov    %eax,0x4(%esp)
083f68cb +0x15cc:  mov    0x8(%ebp),%eax
083f68ce +0x15cf:  mov    %eax,(%esp)
083f68d1 +0x15d2:  call   083f79b0 <+0x26b1>
083f68d6 +0x15d7:  mov    -0x4(%ebp),%ebx
083f68d9 +0x15da:  leave
083f68da +0x15db:  ret
083f68db +0x15dc:  nop
083f68dc +0x15dd:  push   %ebp
083f68dd +0x15de:  mov    %esp,%ebp
083f68df +0x15e0:  sub    $0x18,%esp
083f68e2 +0x15e3:  mov    0x8(%ebp),%eax
083f68e5 +0x15e6:  mov    %eax,(%esp)
083f68e8 +0x15e9:  call   083f79d2 <+0x26d3>
083f68ed +0x15ee:  mov    0x8(%ebp),%eax
083f68f0 +0x15f1:  movl   $0x0,0x4(%eax)
083f68f7 +0x15f8:  mov    0x8(%ebp),%eax
083f68fa +0x15fb:  movl   $0x0,0x8(%eax)
083f6901 +0x1602:  mov    0x8(%ebp),%eax
083f6904 +0x1605:  movl   $0x0,0xc(%eax)
083f690b +0x160c:  mov    0x8(%ebp),%eax
083f690e +0x160f:  movl   $0x0,0x10(%eax)
083f6915 +0x1616:  mov    0x8(%ebp),%eax
083f6918 +0x1619:  movl   $0x0,0x14(%eax)
083f691f +0x1620:  mov    0x8(%ebp),%eax
083f6922 +0x1623:  mov    %eax,(%esp)
083f6925 +0x1626:  call   083f79e6 <+0x26e7>
083f692a +0x162b:  leave
083f692b +0x162c:  ret
083f692c +0x162d:  push   %ebp
083f692d +0x162e:  mov    %esp,%ebp
083f692f +0x1630:  pop    %ebp
083f6930 +0x1631:  ret
083f6931 +0x1632:  push   %ebp
083f6932 +0x1633:  mov    %esp,%ebp
083f6934 +0x1635:  mov    0x8(%ebp),%eax
083f6937 +0x1638:  mov    0xc(%eax),%eax
083f693a +0x163b:  pop    %ebp
083f693b +0x163c:  ret
083f693c +0x163d:  push   %ebp
083f693d +0x163e:  mov    %esp,%ebp
083f693f +0x1640:  mov    0x8(%ebp),%eax
083f6942 +0x1643:  mov    0x8(%eax),%eax
083f6945 +0x1646:  pop    %ebp
083f6946 +0x1647:  ret
083f6947 +0x1648:  nop
083f6948 +0x1649:  push   %ebp
083f6949 +0x164a:  mov    %esp,%ebp
083f694b +0x164c:  sub    $0x18,%esp
083f694e +0x164f:  mov    0x8(%ebp),%eax
083f6951 +0x1652:  mov    %eax,(%esp)
083f6954 +0x1655:  call   083f7a18 <+0x2719>
083f6959 +0x165a:  mov    0xc(%ebp),%edx
083f695c +0x165d:  mov    %edx,0x4(%esp)
083f6960 +0x1661:  mov    %eax,(%esp)
083f6963 +0x1664:  call   083f7a36 <+0x2737>
083f6968 +0x1669:  mov    0xc(%ebp),%eax
083f696b +0x166c:  mov    %eax,0x4(%esp)
083f696f +0x1670:  mov    0x8(%ebp),%eax
083f6972 +0x1673:  mov    %eax,(%esp)
083f6975 +0x1676:  call   083f7a4a <+0x274b>
083f697a +0x167b:  leave
083f697b +0x167c:  ret
083f697c +0x167d:  push   %ebp
083f697d +0x167e:  mov    %esp,%ebp
083f697f +0x1680:  mov    0xc(%ebp),%edx
083f6982 +0x1683:  mov    0x8(%ebp),%eax
083f6985 +0x1686:  mov    %edx,(%eax)
083f6987 +0x1688:  pop    %ebp
083f6988 +0x1689:  ret
083f6989 +0x168a:  nop
083f698a +0x168b:  push   %ebp
083f698b +0x168c:  mov    %esp,%ebp
083f698d +0x168e:  mov    0xc(%ebp),%edx
083f6990 +0x1691:  mov    0x8(%ebp),%eax
083f6993 +0x1694:  mov    %edx,(%eax)
083f6995 +0x1696:  pop    %ebp
083f6996 +0x1697:  ret
083f6997 +0x1698:  nop
083f6998 +0x1699:  push   %ebp
083f6999 +0x169a:  mov    %esp,%ebp
083f699b +0x169c:  push   %esi
083f699c +0x169d:  push   %ebx
083f699d +0x169e:  sub    $0x20,%esp
083f69a0 +0x16a1:  mov    0x8(%ebp),%esi
083f69a3 +0x16a4:  mov    0xc(%ebp),%eax
083f69a6 +0x16a7:  mov    %eax,(%esp)
083f69a9 +0x16aa:  call   083f7a6c <+0x276d>
083f69ae +0x16af:  mov    %eax,%ebx
083f69b0 +0x16b1:  mov    0xc(%ebp),%eax
083f69b3 +0x16b4:  mov    %eax,(%esp)
083f69b6 +0x16b7:  call   083f5fba <+0xcbb>
083f69bb +0x16bc:  mov    0x10(%ebp),%edx
083f69be +0x16bf:  mov    %edx,0x10(%esp)
083f69c2 +0x16c3:  mov    %ebx,0xc(%esp)
083f69c6 +0x16c7:  mov    %eax,0x8(%esp)
083f69ca +0x16cb:  mov    0xc(%ebp),%eax
083f69cd +0x16ce:  mov    %eax,0x4(%esp)
083f69d1 +0x16d2:  mov    %esi,(%esp)
083f69d4 +0x16d5:  call   083f7a78 <+0x2779>
083f69d9 +0x16da:  sub    $0x4,%esp
083f69dc +0x16dd:  mov    %esi,%eax
083f69de +0x16df:  lea    -0x8(%ebp),%esp
083f69e1 +0x16e2:  add    $0x0,%esp
083f69e4 +0x16e5:  pop    %ebx
083f69e5 +0x16e6:  pop    %esi
083f69e6 +0x16e7:  pop    %ebp
083f69e7 +0x16e8:  ret    $0x4
083f69ea +0x16eb:  push   %ebp
083f69eb +0x16ec:  mov    %esp,%ebp
083f69ed +0x16ee:  mov    0x8(%ebp),%eax
083f69f0 +0x16f1:  pop    %ebp
083f69f1 +0x16f2:  ret    $0x4
083f69f4 +0x16f5:  push   %ebp
083f69f5 +0x16f6:  mov    %esp,%ebp
083f69f7 +0x16f8:  sub    $0x18,%esp
083f69fa +0x16fb:  mov    0x8(%ebp),%eax
083f69fd +0x16fe:  mov    %eax,(%esp)
083f6a00 +0x1701:  call   083f7af4 <+0x27f5>
083f6a05 +0x1706:  leave
083f6a06 +0x1707:  ret
083f6a07 +0x1708:  nop
083f6a08 +0x1709:  push   %ebp
083f6a09 +0x170a:  mov    %esp,%ebp
083f6a0b +0x170c:  sub    $0x18,%esp
083f6a0e +0x170f:  mov    0x8(%ebp),%eax
083f6a11 +0x1712:  mov    %eax,(%esp)
083f6a14 +0x1715:  call   083f7b44 <+0x2845>
083f6a19 +0x171a:  leave
083f6a1a +0x171b:  ret
083f6a1b +0x171c:  nop
083f6a1c +0x171d:  push   %ebp
083f6a1d +0x171e:  mov    %esp,%ebp
083f6a1f +0x1720:  sub    $0x28,%esp
083f6a22 +0x1723:  jmp    083f6a64 <+0x1765>
083f6a24 +0x1725:  mov    0xc(%ebp),%eax
083f6a27 +0x1728:  mov    %eax,(%esp)
083f6a2a +0x172b:  call   083f7b49 <+0x284a>
083f6a2f +0x1730:  mov    %eax,0x4(%esp)
083f6a33 +0x1734:  mov    0x8(%ebp),%eax
083f6a36 +0x1737:  mov    %eax,(%esp)
083f6a39 +0x173a:  call   083f6a1c <+0x171d>
083f6a3e +0x173f:  mov    0xc(%ebp),%eax
083f6a41 +0x1742:  mov    %eax,(%esp)
083f6a44 +0x1745:  call   083f7b54 <+0x2855>
083f6a49 +0x174a:  mov    %eax,-0xc(%ebp)
083f6a4c +0x174d:  mov    0xc(%ebp),%eax
083f6a4f +0x1750:  mov    %eax,0x4(%esp)
083f6a53 +0x1754:  mov    0x8(%ebp),%eax
083f6a56 +0x1757:  mov    %eax,(%esp)
083f6a59 +0x175a:  call   083f7b60 <+0x2861>
083f6a5e +0x175f:  mov    -0xc(%ebp),%eax
083f6a61 +0x1762:  mov    %eax,0xc(%ebp)
083f6a64 +0x1765:  cmpl   $0x0,0xc(%ebp)
083f6a68 +0x1769:  setne  %al
083f6a6b +0x176c:  test   %al,%al
083f6a6d +0x176e:  jne    083f6a24 <+0x1725>
083f6a6f +0x1770:  leave
083f6a70 +0x1771:  ret
083f6a71 +0x1772:  nop
083f6a72 +0x1773:  push   %ebp
083f6a73 +0x1774:  mov    %esp,%ebp
083f6a75 +0x1776:  mov    0x8(%ebp),%eax
083f6a78 +0x1779:  mov    0x8(%eax),%eax
083f6a7b +0x177c:  pop    %ebp
083f6a7c +0x177d:  ret
083f6a7d +0x177e:  push   %ebp
083f6a7e +0x177f:  mov    %esp,%ebp
083f6a80 +0x1781:  mov    0x8(%ebp),%eax
083f6a83 +0x1784:  pop    %ebp
083f6a84 +0x1785:  ret
083f6a85 +0x1786:  nop
083f6a86 +0x1787:  push   %ebp
083f6a87 +0x1788:  mov    %esp,%ebp
083f6a89 +0x178a:  sub    $0x18,%esp
083f6a8c +0x178d:  mov    0xc(%ebp),%eax
083f6a8f +0x1790:  mov    %eax,(%esp)
083f6a92 +0x1793:  call   083f7b94 <+0x2895>
083f6a97 +0x1798:  mov    0x8(%ebp),%edx
083f6a9a +0x179b:  mov    %eax,0x4(%esp)
083f6a9e +0x179f:  mov    %edx,(%esp)
083f6aa1 +0x17a2:  call   083f7b9c <+0x289d>
083f6aa6 +0x17a7:  leave
083f6aa7 +0x17a8:  ret
083f6aa8 +0x17a9:  push   %ebp
083f6aa9 +0x17aa:  mov    %esp,%ebp
083f6aab +0x17ac:  mov    0xc(%ebp),%eax
083f6aae +0x17af:  mov    (%eax),%edx
083f6ab0 +0x17b1:  mov    0x8(%ebp),%eax
083f6ab3 +0x17b4:  mov    %edx,(%eax)
083f6ab5 +0x17b6:  pop    %ebp
083f6ab6 +0x17b7:  ret
083f6ab7 +0x17b8:  nop
083f6ab8 +0x17b9:  push   %ebp
083f6ab9 +0x17ba:  mov    %esp,%ebp
083f6abb +0x17bc:  push   %esi
083f6abc +0x17bd:  push   %ebx
083f6abd +0x17be:  sub    $0x50,%esp
083f6ac0 +0x17c1:  mov    0x8(%ebp),%ebx
083f6ac3 +0x17c4:  mov    0x10(%ebp),%esi
083f6ac6 +0x17c7:  mov    0xc(%ebp),%eax
083f6ac9 +0x17ca:  mov    %eax,(%esp)
083f6acc +0x17cd:  call   083f7a6c <+0x276d>
083f6ad1 +0x17d2:  cmp    %eax,%esi
083f6ad3 +0x17d4:  sete   %al
083f6ad6 +0x17d7:  test   %al,%al
083f6ad8 +0x17d9:  je     083f6b9a <+0x189b>
083f6ade +0x17df:  mov    0xc(%ebp),%eax
083f6ae1 +0x17e2:  mov    %eax,(%esp)
083f6ae4 +0x17e5:  call   083f7ce4 <+0x29e5>
083f6ae9 +0x17ea:  test   %eax,%eax
083f6aeb +0x17ec:  je     083f6b34 <+0x1835>
083f6aed +0x17ee:  mov    0x14(%ebp),%eax
083f6af0 +0x17f1:  mov    %eax,0x4(%esp)
083f6af4 +0x17f5:  lea    -0x29(%ebp),%eax
083f6af7 +0x17f8:  mov    %eax,(%esp)
083f6afa +0x17fb:  call   083f7cdc <+0x29dd>
083f6aff +0x1800:  mov    %eax,%esi
083f6b01 +0x1802:  mov    0xc(%ebp),%eax
083f6b04 +0x1805:  mov    %eax,(%esp)
083f6b07 +0x1808:  call   083f7cae <+0x29af>
083f6b0c +0x180d:  mov    (%eax),%eax
083f6b0e +0x180f:  mov    %eax,(%esp)
083f6b11 +0x1812:  call   083f7cb9 <+0x29ba>
083f6b16 +0x1817:  mov    0xc(%ebp),%edx
083f6b19 +0x181a:  mov    %esi,0x8(%esp)
083f6b1d +0x181e:  mov    %eax,0x4(%esp)
083f6b21 +0x1822:  mov    %edx,(%esp)
083f6b24 +0x1825:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f6b29 +0x182a:  test   %al,%al
083f6b2b +0x182c:  je     083f6b34 <+0x1835>
083f6b2d +0x182e:  mov    $0x1,%eax
083f6b32 +0x1833:  jmp    083f6b39 <+0x183a>
083f6b34 +0x1835:  mov    $0x0,%eax
083f6b39 +0x183a:  test   %al,%al
083f6b3b +0x183c:  je     083f6b74 <+0x1875>
083f6b3d +0x183e:  mov    0xc(%ebp),%eax
083f6b40 +0x1841:  mov    %eax,(%esp)
083f6b43 +0x1844:  call   083f7cae <+0x29af>
083f6b48 +0x1849:  mov    (%eax),%eax
083f6b4a +0x184b:  mov    0x14(%ebp),%edx
083f6b4d +0x184e:  mov    %edx,0x10(%esp)
083f6b51 +0x1852:  mov    %eax,0xc(%esp)
083f6b55 +0x1856:  movl   $0x0,0x8(%esp)
083f6b5d +0x185e:  mov    0xc(%ebp),%eax
083f6b60 +0x1861:  mov    %eax,0x4(%esp)
083f6b64 +0x1865:  mov    %ebx,(%esp)
083f6b67 +0x1868:  call   083f7cf0 <+0x29f1>
083f6b6c +0x186d:  sub    $0x4,%esp
083f6b6f +0x1870:  jmp    083f6e6f <+0x1b70>
083f6b74 +0x1875:  lea    -0x28(%ebp),%eax
083f6b77 +0x1878:  mov    0x14(%ebp),%edx
083f6b7a +0x187b:  mov    %edx,0x8(%esp)
083f6b7e +0x187f:  mov    0xc(%ebp),%edx
083f6b81 +0x1882:  mov    %edx,0x4(%esp)
083f6b85 +0x1886:  mov    %eax,(%esp)
083f6b88 +0x1889:  call   083f7db8 <+0x2ab9>
083f6b8d +0x188e:  sub    $0x4,%esp
083f6b90 +0x1891:  mov    -0x28(%ebp),%eax
083f6b93 +0x1894:  mov    %eax,(%ebx)
083f6b95 +0x1896:  jmp    083f6e6f <+0x1b70>
083f6b9a +0x189b:  mov    0x10(%ebp),%eax
083f6b9d +0x189e:  mov    %eax,(%esp)
083f6ba0 +0x18a1:  call   083f7cb9 <+0x29ba>
083f6ba5 +0x18a6:  mov    %eax,%esi
083f6ba7 +0x18a8:  mov    0x14(%ebp),%eax
083f6baa +0x18ab:  mov    %eax,0x4(%esp)
083f6bae +0x18af:  lea    -0x1e(%ebp),%eax
083f6bb1 +0x18b2:  mov    %eax,(%esp)
083f6bb4 +0x18b5:  call   083f7cdc <+0x29dd>
083f6bb9 +0x18ba:  mov    0xc(%ebp),%edx
083f6bbc +0x18bd:  mov    %esi,0x8(%esp)
083f6bc0 +0x18c1:  mov    %eax,0x4(%esp)
083f6bc4 +0x18c5:  mov    %edx,(%esp)
083f6bc7 +0x18c8:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f6bcc +0x18cd:  test   %al,%al
083f6bce +0x18cf:  je     083f6d06 <+0x1a07>
083f6bd4 +0x18d5:  mov    0x10(%ebp),%eax
083f6bd7 +0x18d8:  mov    %eax,-0x30(%ebp)
083f6bda +0x18db:  mov    0x10(%ebp),%esi
083f6bdd +0x18de:  mov    0xc(%ebp),%eax
083f6be0 +0x18e1:  mov    %eax,(%esp)
083f6be3 +0x18e4:  call   083f7f88 <+0x2c89>
083f6be8 +0x18e9:  mov    (%eax),%eax
083f6bea +0x18eb:  cmp    %eax,%esi
083f6bec +0x18ed:  sete   %al
083f6bef +0x18f0:  test   %al,%al
083f6bf1 +0x18f2:  je     083f6c33 <+0x1934>
083f6bf3 +0x18f4:  mov    0xc(%ebp),%eax
083f6bf6 +0x18f7:  mov    %eax,(%esp)
083f6bf9 +0x18fa:  call   083f7f88 <+0x2c89>
083f6bfe +0x18ff:  mov    (%eax),%esi
083f6c00 +0x1901:  mov    0xc(%ebp),%eax
083f6c03 +0x1904:  mov    %eax,(%esp)
083f6c06 +0x1907:  call   083f7f88 <+0x2c89>
083f6c0b +0x190c:  mov    (%eax),%eax
083f6c0d +0x190e:  mov    0x14(%ebp),%edx
083f6c10 +0x1911:  mov    %edx,0x10(%esp)
083f6c14 +0x1915:  mov    %esi,0xc(%esp)
083f6c18 +0x1919:  mov    %eax,0x8(%esp)
083f6c1c +0x191d:  mov    0xc(%ebp),%eax
083f6c1f +0x1920:  mov    %eax,0x4(%esp)
083f6c23 +0x1924:  mov    %ebx,(%esp)
083f6c26 +0x1927:  call   083f7cf0 <+0x29f1>
083f6c2b +0x192c:  sub    $0x4,%esp
083f6c2e +0x192f:  jmp    083f6e6f <+0x1b70>
083f6c33 +0x1934:  mov    0x14(%ebp),%eax
083f6c36 +0x1937:  mov    %eax,0x4(%esp)
083f6c3a +0x193b:  lea    -0x1d(%ebp),%eax
083f6c3d +0x193e:  mov    %eax,(%esp)
083f6c40 +0x1941:  call   083f7cdc <+0x29dd>
083f6c45 +0x1946:  mov    %eax,%esi
083f6c47 +0x1948:  lea    -0x30(%ebp),%eax
083f6c4a +0x194b:  mov    %eax,(%esp)
083f6c4d +0x194e:  call   083f7f94 <+0x2c95>
083f6c52 +0x1953:  mov    (%eax),%eax
083f6c54 +0x1955:  mov    %eax,(%esp)
083f6c57 +0x1958:  call   083f7cb9 <+0x29ba>
083f6c5c +0x195d:  mov    0xc(%ebp),%edx
083f6c5f +0x1960:  mov    %esi,0x8(%esp)
083f6c63 +0x1964:  mov    %eax,0x4(%esp)
083f6c67 +0x1968:  mov    %edx,(%esp)
083f6c6a +0x196b:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f6c6f +0x1970:  test   %al,%al
083f6c71 +0x1972:  je     083f6ce0 <+0x19e1>
083f6c73 +0x1974:  mov    -0x30(%ebp),%eax
083f6c76 +0x1977:  mov    %eax,(%esp)
083f6c79 +0x197a:  call   083f7fb1 <+0x2cb2>
083f6c7e +0x197f:  test   %eax,%eax
083f6c80 +0x1981:  sete   %al
083f6c83 +0x1984:  test   %al,%al
083f6c85 +0x1986:  je     083f6cb4 <+0x19b5>
083f6c87 +0x1988:  mov    -0x30(%ebp),%eax
083f6c8a +0x198b:  mov    0x14(%ebp),%edx
083f6c8d +0x198e:  mov    %edx,0x10(%esp)
083f6c91 +0x1992:  mov    %eax,0xc(%esp)
083f6c95 +0x1996:  movl   $0x0,0x8(%esp)
083f6c9d +0x199e:  mov    0xc(%ebp),%eax
083f6ca0 +0x19a1:  mov    %eax,0x4(%esp)
083f6ca4 +0x19a5:  mov    %ebx,(%esp)
083f6ca7 +0x19a8:  call   083f7cf0 <+0x29f1>
083f6cac +0x19ad:  sub    $0x4,%esp
083f6caf +0x19b0:  jmp    083f6e6f <+0x1b70>
083f6cb4 +0x19b5:  mov    0x10(%ebp),%edx
083f6cb7 +0x19b8:  mov    0x10(%ebp),%eax
083f6cba +0x19bb:  mov    0x14(%ebp),%ecx
083f6cbd +0x19be:  mov    %ecx,0x10(%esp)
083f6cc1 +0x19c2:  mov    %edx,0xc(%esp)
083f6cc5 +0x19c6:  mov    %eax,0x8(%esp)
083f6cc9 +0x19ca:  mov    0xc(%ebp),%eax
083f6ccc +0x19cd:  mov    %eax,0x4(%esp)
083f6cd0 +0x19d1:  mov    %ebx,(%esp)
083f6cd3 +0x19d4:  call   083f7cf0 <+0x29f1>
083f6cd8 +0x19d9:  sub    $0x4,%esp
083f6cdb +0x19dc:  jmp    083f6e6f <+0x1b70>
083f6ce0 +0x19e1:  lea    -0x1c(%ebp),%eax
083f6ce3 +0x19e4:  mov    0x14(%ebp),%edx
083f6ce6 +0x19e7:  mov    %edx,0x8(%esp)
083f6cea +0x19eb:  mov    0xc(%ebp),%edx
083f6ced +0x19ee:  mov    %edx,0x4(%esp)
083f6cf1 +0x19f2:  mov    %eax,(%esp)
083f6cf4 +0x19f5:  call   083f7db8 <+0x2ab9>
083f6cf9 +0x19fa:  sub    $0x4,%esp
083f6cfc +0x19fd:  mov    -0x1c(%ebp),%eax
083f6cff +0x1a00:  mov    %eax,(%ebx)
083f6d01 +0x1a02:  jmp    083f6e6f <+0x1b70>
083f6d06 +0x1a07:  mov    0x14(%ebp),%eax
083f6d09 +0x1a0a:  mov    %eax,0x4(%esp)
083f6d0d +0x1a0e:  lea    -0x12(%ebp),%eax
083f6d10 +0x1a11:  mov    %eax,(%esp)
083f6d13 +0x1a14:  call   083f7cdc <+0x29dd>
083f6d18 +0x1a19:  mov    %eax,%esi
083f6d1a +0x1a1b:  mov    0x10(%ebp),%eax
083f6d1d +0x1a1e:  mov    %eax,(%esp)
083f6d20 +0x1a21:  call   083f7cb9 <+0x29ba>
083f6d25 +0x1a26:  mov    0xc(%ebp),%edx
083f6d28 +0x1a29:  mov    %esi,0x8(%esp)
083f6d2c +0x1a2d:  mov    %eax,0x4(%esp)
083f6d30 +0x1a31:  mov    %edx,(%esp)
083f6d33 +0x1a34:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f6d38 +0x1a39:  test   %al,%al
083f6d3a +0x1a3b:  je     083f6e60 <+0x1b61>
083f6d40 +0x1a41:  mov    0x10(%ebp),%eax
083f6d43 +0x1a44:  mov    %eax,-0x34(%ebp)
083f6d46 +0x1a47:  mov    0x10(%ebp),%esi
083f6d49 +0x1a4a:  mov    0xc(%ebp),%eax
083f6d4c +0x1a4d:  mov    %eax,(%esp)
083f6d4f +0x1a50:  call   083f7cae <+0x29af>
083f6d54 +0x1a55:  mov    (%eax),%eax
083f6d56 +0x1a57:  cmp    %eax,%esi
083f6d58 +0x1a59:  sete   %al
083f6d5b +0x1a5c:  test   %al,%al
083f6d5d +0x1a5e:  je     083f6d96 <+0x1a97>
083f6d5f +0x1a60:  mov    0xc(%ebp),%eax
083f6d62 +0x1a63:  mov    %eax,(%esp)
083f6d65 +0x1a66:  call   083f7cae <+0x29af>
083f6d6a +0x1a6b:  mov    (%eax),%eax
083f6d6c +0x1a6d:  mov    0x14(%ebp),%edx
083f6d6f +0x1a70:  mov    %edx,0x10(%esp)
083f6d73 +0x1a74:  mov    %eax,0xc(%esp)
083f6d77 +0x1a78:  movl   $0x0,0x8(%esp)
083f6d7f +0x1a80:  mov    0xc(%ebp),%eax
083f6d82 +0x1a83:  mov    %eax,0x4(%esp)
083f6d86 +0x1a87:  mov    %ebx,(%esp)
083f6d89 +0x1a8a:  call   083f7cf0 <+0x29f1>
083f6d8e +0x1a8f:  sub    $0x4,%esp
083f6d91 +0x1a92:  jmp    083f6e6f <+0x1b70>
083f6d96 +0x1a97:  lea    -0x34(%ebp),%eax
083f6d99 +0x1a9a:  mov    %eax,(%esp)
083f6d9c +0x1a9d:  call   083f7fbc <+0x2cbd>
083f6da1 +0x1aa2:  mov    (%eax),%eax
083f6da3 +0x1aa4:  mov    %eax,(%esp)
083f6da6 +0x1aa7:  call   083f7cb9 <+0x29ba>
083f6dab +0x1aac:  mov    %eax,%esi
083f6dad +0x1aae:  mov    0x14(%ebp),%eax
083f6db0 +0x1ab1:  mov    %eax,0x4(%esp)
083f6db4 +0x1ab5:  lea    -0x11(%ebp),%eax
083f6db7 +0x1ab8:  mov    %eax,(%esp)
083f6dba +0x1abb:  call   083f7cdc <+0x29dd>
083f6dbf +0x1ac0:  mov    0xc(%ebp),%edx
083f6dc2 +0x1ac3:  mov    %esi,0x8(%esp)
083f6dc6 +0x1ac7:  mov    %eax,0x4(%esp)
083f6dca +0x1acb:  mov    %edx,(%esp)
083f6dcd +0x1ace:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f6dd2 +0x1ad3:  test   %al,%al
083f6dd4 +0x1ad5:  je     083f6e3d <+0x1b3e>
083f6dd6 +0x1ad7:  mov    0x10(%ebp),%eax
083f6dd9 +0x1ada:  mov    %eax,(%esp)
083f6ddc +0x1add:  call   083f7fb1 <+0x2cb2>
083f6de1 +0x1ae2:  test   %eax,%eax
083f6de3 +0x1ae4:  sete   %al
083f6de6 +0x1ae7:  test   %al,%al
083f6de8 +0x1ae9:  je     083f6e14 <+0x1b15>
083f6dea +0x1aeb:  mov    0x10(%ebp),%eax
083f6ded +0x1aee:  mov    0x14(%ebp),%edx
083f6df0 +0x1af1:  mov    %edx,0x10(%esp)
083f6df4 +0x1af5:  mov    %eax,0xc(%esp)
083f6df8 +0x1af9:  movl   $0x0,0x8(%esp)
083f6e00 +0x1b01:  mov    0xc(%ebp),%eax
083f6e03 +0x1b04:  mov    %eax,0x4(%esp)
083f6e07 +0x1b08:  mov    %ebx,(%esp)
083f6e0a +0x1b0b:  call   083f7cf0 <+0x29f1>
083f6e0f +0x1b10:  sub    $0x4,%esp
083f6e12 +0x1b13:  jmp    083f6e6f <+0x1b70>
083f6e14 +0x1b15:  mov    -0x34(%ebp),%edx
083f6e17 +0x1b18:  mov    -0x34(%ebp),%eax
083f6e1a +0x1b1b:  mov    0x14(%ebp),%ecx
083f6e1d +0x1b1e:  mov    %ecx,0x10(%esp)
083f6e21 +0x1b22:  mov    %edx,0xc(%esp)
083f6e25 +0x1b26:  mov    %eax,0x8(%esp)
083f6e29 +0x1b2a:  mov    0xc(%ebp),%eax
083f6e2c +0x1b2d:  mov    %eax,0x4(%esp)
083f6e30 +0x1b31:  mov    %ebx,(%esp)
083f6e33 +0x1b34:  call   083f7cf0 <+0x29f1>
083f6e38 +0x1b39:  sub    $0x4,%esp
083f6e3b +0x1b3c:  jmp    083f6e6f <+0x1b70>
083f6e3d +0x1b3e:  lea    -0x10(%ebp),%eax
083f6e40 +0x1b41:  mov    0x14(%ebp),%edx
083f6e43 +0x1b44:  mov    %edx,0x8(%esp)
083f6e47 +0x1b48:  mov    0xc(%ebp),%edx
083f6e4a +0x1b4b:  mov    %edx,0x4(%esp)
083f6e4e +0x1b4f:  mov    %eax,(%esp)
083f6e51 +0x1b52:  call   083f7db8 <+0x2ab9>
083f6e56 +0x1b57:  sub    $0x4,%esp
083f6e59 +0x1b5a:  mov    -0x10(%ebp),%eax
083f6e5c +0x1b5d:  mov    %eax,(%ebx)
083f6e5e +0x1b5f:  jmp    083f6e6f <+0x1b70>
083f6e60 +0x1b61:  mov    0x10(%ebp),%eax
083f6e63 +0x1b64:  mov    %eax,0x4(%esp)
083f6e67 +0x1b68:  mov    %ebx,(%esp)
083f6e6a +0x1b6b:  call   083f697c <+0x167d>
083f6e6f +0x1b70:  mov    %ebx,%eax
083f6e71 +0x1b72:  lea    -0x8(%ebp),%esp
083f6e74 +0x1b75:  add    $0x0,%esp
083f6e77 +0x1b78:  pop    %ebx
083f6e78 +0x1b79:  pop    %esi
083f6e79 +0x1b7a:  pop    %ebp
083f6e7a +0x1b7b:  ret    $0x4
083f6e7d +0x1b7e:  nop
083f6e7e +0x1b7f:  push   %ebp
083f6e7f +0x1b80:  mov    %esp,%ebp
083f6e81 +0x1b82:  push   %esi
083f6e82 +0x1b83:  push   %ebx
083f6e83 +0x1b84:  sub    $0x20,%esp
083f6e86 +0x1b87:  mov    0x8(%ebp),%esi
083f6e89 +0x1b8a:  mov    0xc(%ebp),%eax
083f6e8c +0x1b8d:  mov    %eax,(%esp)
083f6e8f +0x1b90:  call   083f7fda <+0x2cdb>
083f6e94 +0x1b95:  mov    %eax,%ebx
083f6e96 +0x1b97:  mov    0xc(%ebp),%eax
083f6e99 +0x1b9a:  mov    %eax,(%esp)
083f6e9c +0x1b9d:  call   083f6a72 <+0x1773>
083f6ea1 +0x1ba2:  mov    0x10(%ebp),%edx
083f6ea4 +0x1ba5:  mov    %edx,0x10(%esp)
083f6ea8 +0x1ba9:  mov    %ebx,0xc(%esp)
083f6eac +0x1bad:  mov    %eax,0x8(%esp)
083f6eb0 +0x1bb1:  mov    0xc(%ebp),%eax
083f6eb3 +0x1bb4:  mov    %eax,0x4(%esp)
083f6eb7 +0x1bb8:  mov    %esi,(%esp)
083f6eba +0x1bbb:  call   083f7fe6 <+0x2ce7>
083f6ebf +0x1bc0:  sub    $0x4,%esp
083f6ec2 +0x1bc3:  mov    %esi,%eax
083f6ec4 +0x1bc5:  lea    -0x8(%ebp),%esp
083f6ec7 +0x1bc8:  add    $0x0,%esp
083f6eca +0x1bcb:  pop    %ebx
083f6ecb +0x1bcc:  pop    %esi
083f6ecc +0x1bcd:  pop    %ebp
083f6ecd +0x1bce:  ret    $0x4
083f6ed0 +0x1bd1:  push   %ebp
083f6ed1 +0x1bd2:  mov    %esp,%ebp
083f6ed3 +0x1bd4:  mov    0x8(%ebp),%eax
083f6ed6 +0x1bd7:  pop    %ebp
083f6ed7 +0x1bd8:  ret    $0x4
083f6eda +0x1bdb:  push   %ebp
083f6edb +0x1bdc:  mov    %esp,%ebp
083f6edd +0x1bde:  mov    0x8(%ebp),%eax
083f6ee0 +0x1be1:  pop    %ebp
083f6ee1 +0x1be2:  ret
083f6ee2 +0x1be3:  push   %ebp
083f6ee3 +0x1be4:  mov    %esp,%ebp
083f6ee5 +0x1be6:  mov    0xc(%ebp),%eax
083f6ee8 +0x1be9:  mov    (%eax),%edx
083f6eea +0x1beb:  mov    0x8(%ebp),%eax
083f6eed +0x1bee:  mov    %edx,(%eax)
083f6eef +0x1bf0:  pop    %ebp
083f6ef0 +0x1bf1:  ret
083f6ef1 +0x1bf2:  nop
083f6ef2 +0x1bf3:  push   %ebp
083f6ef3 +0x1bf4:  mov    %esp,%ebp
083f6ef5 +0x1bf6:  push   %esi
083f6ef6 +0x1bf7:  push   %ebx
083f6ef7 +0x1bf8:  sub    $0x50,%esp
083f6efa +0x1bfb:  mov    0x8(%ebp),%ebx
083f6efd +0x1bfe:  mov    0x10(%ebp),%esi
083f6f00 +0x1c01:  mov    0xc(%ebp),%eax
083f6f03 +0x1c04:  mov    %eax,(%esp)
083f6f06 +0x1c07:  call   083f7fda <+0x2cdb>
083f6f0b +0x1c0c:  cmp    %eax,%esi
083f6f0d +0x1c0e:  sete   %al
083f6f10 +0x1c11:  test   %al,%al
083f6f12 +0x1c13:  je     083f6fd4 <+0x1cd5>
083f6f18 +0x1c19:  mov    0xc(%ebp),%eax
083f6f1b +0x1c1c:  mov    %eax,(%esp)
083f6f1e +0x1c1f:  call   083f8098 <+0x2d99>
083f6f23 +0x1c24:  test   %eax,%eax
083f6f25 +0x1c26:  je     083f6f6e <+0x1c6f>
083f6f27 +0x1c28:  mov    0x14(%ebp),%eax
083f6f2a +0x1c2b:  mov    %eax,0x4(%esp)
083f6f2e +0x1c2f:  lea    -0x29(%ebp),%eax
083f6f31 +0x1c32:  mov    %eax,(%esp)
083f6f34 +0x1c35:  call   083f8090 <+0x2d91>
083f6f39 +0x1c3a:  mov    %eax,%esi
083f6f3b +0x1c3c:  mov    0xc(%ebp),%eax
083f6f3e +0x1c3f:  mov    %eax,(%esp)
083f6f41 +0x1c42:  call   083f8062 <+0x2d63>
083f6f46 +0x1c47:  mov    (%eax),%eax
083f6f48 +0x1c49:  mov    %eax,(%esp)
083f6f4b +0x1c4c:  call   083f806d <+0x2d6e>
083f6f50 +0x1c51:  mov    0xc(%ebp),%edx
083f6f53 +0x1c54:  mov    %esi,0x8(%esp)
083f6f57 +0x1c58:  mov    %eax,0x4(%esp)
083f6f5b +0x1c5c:  mov    %edx,(%esp)
083f6f5e +0x1c5f:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f6f63 +0x1c64:  test   %al,%al
083f6f65 +0x1c66:  je     083f6f6e <+0x1c6f>
083f6f67 +0x1c68:  mov    $0x1,%eax
083f6f6c +0x1c6d:  jmp    083f6f73 <+0x1c74>
083f6f6e +0x1c6f:  mov    $0x0,%eax
083f6f73 +0x1c74:  test   %al,%al
083f6f75 +0x1c76:  je     083f6fae <+0x1caf>
083f6f77 +0x1c78:  mov    0xc(%ebp),%eax
083f6f7a +0x1c7b:  mov    %eax,(%esp)
083f6f7d +0x1c7e:  call   083f8062 <+0x2d63>
083f6f82 +0x1c83:  mov    (%eax),%eax
083f6f84 +0x1c85:  mov    0x14(%ebp),%edx
083f6f87 +0x1c88:  mov    %edx,0x10(%esp)
083f6f8b +0x1c8c:  mov    %eax,0xc(%esp)
083f6f8f +0x1c90:  movl   $0x0,0x8(%esp)
083f6f97 +0x1c98:  mov    0xc(%ebp),%eax
083f6f9a +0x1c9b:  mov    %eax,0x4(%esp)
083f6f9e +0x1c9f:  mov    %ebx,(%esp)
083f6fa1 +0x1ca2:  call   083f80a4 <+0x2da5>
083f6fa6 +0x1ca7:  sub    $0x4,%esp
083f6fa9 +0x1caa:  jmp    083f72a9 <+0x1faa>
083f6fae +0x1caf:  lea    -0x28(%ebp),%eax
083f6fb1 +0x1cb2:  mov    0x14(%ebp),%edx
083f6fb4 +0x1cb5:  mov    %edx,0x8(%esp)
083f6fb8 +0x1cb9:  mov    0xc(%ebp),%edx
083f6fbb +0x1cbc:  mov    %edx,0x4(%esp)
083f6fbf +0x1cc0:  mov    %eax,(%esp)
083f6fc2 +0x1cc3:  call   083f816c <+0x2e6d>
083f6fc7 +0x1cc8:  sub    $0x4,%esp
083f6fca +0x1ccb:  mov    -0x28(%ebp),%eax
083f6fcd +0x1cce:  mov    %eax,(%ebx)
083f6fcf +0x1cd0:  jmp    083f72a9 <+0x1faa>
083f6fd4 +0x1cd5:  mov    0x10(%ebp),%eax
083f6fd7 +0x1cd8:  mov    %eax,(%esp)
083f6fda +0x1cdb:  call   083f806d <+0x2d6e>
083f6fdf +0x1ce0:  mov    %eax,%esi
083f6fe1 +0x1ce2:  mov    0x14(%ebp),%eax
083f6fe4 +0x1ce5:  mov    %eax,0x4(%esp)
083f6fe8 +0x1ce9:  lea    -0x1e(%ebp),%eax
083f6feb +0x1cec:  mov    %eax,(%esp)
083f6fee +0x1cef:  call   083f8090 <+0x2d91>
083f6ff3 +0x1cf4:  mov    0xc(%ebp),%edx
083f6ff6 +0x1cf7:  mov    %esi,0x8(%esp)
083f6ffa +0x1cfb:  mov    %eax,0x4(%esp)
083f6ffe +0x1cff:  mov    %edx,(%esp)
083f7001 +0x1d02:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f7006 +0x1d07:  test   %al,%al
083f7008 +0x1d09:  je     083f7140 <+0x1e41>
083f700e +0x1d0f:  mov    0x10(%ebp),%eax
083f7011 +0x1d12:  mov    %eax,-0x30(%ebp)
083f7014 +0x1d15:  mov    0x10(%ebp),%esi
083f7017 +0x1d18:  mov    0xc(%ebp),%eax
083f701a +0x1d1b:  mov    %eax,(%esp)
083f701d +0x1d1e:  call   083f833c <+0x303d>
083f7022 +0x1d23:  mov    (%eax),%eax
083f7024 +0x1d25:  cmp    %eax,%esi
083f7026 +0x1d27:  sete   %al
083f7029 +0x1d2a:  test   %al,%al
083f702b +0x1d2c:  je     083f706d <+0x1d6e>
083f702d +0x1d2e:  mov    0xc(%ebp),%eax
083f7030 +0x1d31:  mov    %eax,(%esp)
083f7033 +0x1d34:  call   083f833c <+0x303d>
083f7038 +0x1d39:  mov    (%eax),%esi
083f703a +0x1d3b:  mov    0xc(%ebp),%eax
083f703d +0x1d3e:  mov    %eax,(%esp)
083f7040 +0x1d41:  call   083f833c <+0x303d>
083f7045 +0x1d46:  mov    (%eax),%eax
083f7047 +0x1d48:  mov    0x14(%ebp),%edx
083f704a +0x1d4b:  mov    %edx,0x10(%esp)
083f704e +0x1d4f:  mov    %esi,0xc(%esp)
083f7052 +0x1d53:  mov    %eax,0x8(%esp)
083f7056 +0x1d57:  mov    0xc(%ebp),%eax
083f7059 +0x1d5a:  mov    %eax,0x4(%esp)
083f705d +0x1d5e:  mov    %ebx,(%esp)
083f7060 +0x1d61:  call   083f80a4 <+0x2da5>
083f7065 +0x1d66:  sub    $0x4,%esp
083f7068 +0x1d69:  jmp    083f72a9 <+0x1faa>
083f706d +0x1d6e:  mov    0x14(%ebp),%eax
083f7070 +0x1d71:  mov    %eax,0x4(%esp)
083f7074 +0x1d75:  lea    -0x1d(%ebp),%eax
083f7077 +0x1d78:  mov    %eax,(%esp)
083f707a +0x1d7b:  call   083f8090 <+0x2d91>
083f707f +0x1d80:  mov    %eax,%esi
083f7081 +0x1d82:  lea    -0x30(%ebp),%eax
083f7084 +0x1d85:  mov    %eax,(%esp)
083f7087 +0x1d88:  call   083f8348 <+0x3049>
083f708c +0x1d8d:  mov    (%eax),%eax
083f708e +0x1d8f:  mov    %eax,(%esp)
083f7091 +0x1d92:  call   083f806d <+0x2d6e>
083f7096 +0x1d97:  mov    0xc(%ebp),%edx
083f7099 +0x1d9a:  mov    %esi,0x8(%esp)
083f709d +0x1d9e:  mov    %eax,0x4(%esp)
083f70a1 +0x1da2:  mov    %edx,(%esp)
083f70a4 +0x1da5:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f70a9 +0x1daa:  test   %al,%al
083f70ab +0x1dac:  je     083f711a <+0x1e1b>
083f70ad +0x1dae:  mov    -0x30(%ebp),%eax
083f70b0 +0x1db1:  mov    %eax,(%esp)
083f70b3 +0x1db4:  call   083f8365 <+0x3066>
083f70b8 +0x1db9:  test   %eax,%eax
083f70ba +0x1dbb:  sete   %al
083f70bd +0x1dbe:  test   %al,%al
083f70bf +0x1dc0:  je     083f70ee <+0x1def>
083f70c1 +0x1dc2:  mov    -0x30(%ebp),%eax
083f70c4 +0x1dc5:  mov    0x14(%ebp),%edx
083f70c7 +0x1dc8:  mov    %edx,0x10(%esp)
083f70cb +0x1dcc:  mov    %eax,0xc(%esp)
083f70cf +0x1dd0:  movl   $0x0,0x8(%esp)
083f70d7 +0x1dd8:  mov    0xc(%ebp),%eax
083f70da +0x1ddb:  mov    %eax,0x4(%esp)
083f70de +0x1ddf:  mov    %ebx,(%esp)
083f70e1 +0x1de2:  call   083f80a4 <+0x2da5>
083f70e6 +0x1de7:  sub    $0x4,%esp
083f70e9 +0x1dea:  jmp    083f72a9 <+0x1faa>
083f70ee +0x1def:  mov    0x10(%ebp),%edx
083f70f1 +0x1df2:  mov    0x10(%ebp),%eax
083f70f4 +0x1df5:  mov    0x14(%ebp),%ecx
083f70f7 +0x1df8:  mov    %ecx,0x10(%esp)
083f70fb +0x1dfc:  mov    %edx,0xc(%esp)
083f70ff +0x1e00:  mov    %eax,0x8(%esp)
083f7103 +0x1e04:  mov    0xc(%ebp),%eax
083f7106 +0x1e07:  mov    %eax,0x4(%esp)
083f710a +0x1e0b:  mov    %ebx,(%esp)
083f710d +0x1e0e:  call   083f80a4 <+0x2da5>
083f7112 +0x1e13:  sub    $0x4,%esp
083f7115 +0x1e16:  jmp    083f72a9 <+0x1faa>
083f711a +0x1e1b:  lea    -0x1c(%ebp),%eax
083f711d +0x1e1e:  mov    0x14(%ebp),%edx
083f7120 +0x1e21:  mov    %edx,0x8(%esp)
083f7124 +0x1e25:  mov    0xc(%ebp),%edx
083f7127 +0x1e28:  mov    %edx,0x4(%esp)
083f712b +0x1e2c:  mov    %eax,(%esp)
083f712e +0x1e2f:  call   083f816c <+0x2e6d>
083f7133 +0x1e34:  sub    $0x4,%esp
083f7136 +0x1e37:  mov    -0x1c(%ebp),%eax
083f7139 +0x1e3a:  mov    %eax,(%ebx)
083f713b +0x1e3c:  jmp    083f72a9 <+0x1faa>
083f7140 +0x1e41:  mov    0x14(%ebp),%eax
083f7143 +0x1e44:  mov    %eax,0x4(%esp)
083f7147 +0x1e48:  lea    -0x12(%ebp),%eax
083f714a +0x1e4b:  mov    %eax,(%esp)
083f714d +0x1e4e:  call   083f8090 <+0x2d91>
083f7152 +0x1e53:  mov    %eax,%esi
083f7154 +0x1e55:  mov    0x10(%ebp),%eax
083f7157 +0x1e58:  mov    %eax,(%esp)
083f715a +0x1e5b:  call   083f806d <+0x2d6e>
083f715f +0x1e60:  mov    0xc(%ebp),%edx
083f7162 +0x1e63:  mov    %esi,0x8(%esp)
083f7166 +0x1e67:  mov    %eax,0x4(%esp)
083f716a +0x1e6b:  mov    %edx,(%esp)
083f716d +0x1e6e:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f7172 +0x1e73:  test   %al,%al
083f7174 +0x1e75:  je     083f729a <+0x1f9b>
083f717a +0x1e7b:  mov    0x10(%ebp),%eax
083f717d +0x1e7e:  mov    %eax,-0x34(%ebp)
083f7180 +0x1e81:  mov    0x10(%ebp),%esi
083f7183 +0x1e84:  mov    0xc(%ebp),%eax
083f7186 +0x1e87:  mov    %eax,(%esp)
083f7189 +0x1e8a:  call   083f8062 <+0x2d63>
083f718e +0x1e8f:  mov    (%eax),%eax
083f7190 +0x1e91:  cmp    %eax,%esi
083f7192 +0x1e93:  sete   %al
083f7195 +0x1e96:  test   %al,%al
083f7197 +0x1e98:  je     083f71d0 <+0x1ed1>
083f7199 +0x1e9a:  mov    0xc(%ebp),%eax
083f719c +0x1e9d:  mov    %eax,(%esp)
083f719f +0x1ea0:  call   083f8062 <+0x2d63>
083f71a4 +0x1ea5:  mov    (%eax),%eax
083f71a6 +0x1ea7:  mov    0x14(%ebp),%edx
083f71a9 +0x1eaa:  mov    %edx,0x10(%esp)
083f71ad +0x1eae:  mov    %eax,0xc(%esp)
083f71b1 +0x1eb2:  movl   $0x0,0x8(%esp)
083f71b9 +0x1eba:  mov    0xc(%ebp),%eax
083f71bc +0x1ebd:  mov    %eax,0x4(%esp)
083f71c0 +0x1ec1:  mov    %ebx,(%esp)
083f71c3 +0x1ec4:  call   083f80a4 <+0x2da5>
083f71c8 +0x1ec9:  sub    $0x4,%esp
083f71cb +0x1ecc:  jmp    083f72a9 <+0x1faa>
083f71d0 +0x1ed1:  lea    -0x34(%ebp),%eax
083f71d3 +0x1ed4:  mov    %eax,(%esp)
083f71d6 +0x1ed7:  call   083f8370 <+0x3071>
083f71db +0x1edc:  mov    (%eax),%eax
083f71dd +0x1ede:  mov    %eax,(%esp)
083f71e0 +0x1ee1:  call   083f806d <+0x2d6e>
083f71e5 +0x1ee6:  mov    %eax,%esi
083f71e7 +0x1ee8:  mov    0x14(%ebp),%eax
083f71ea +0x1eeb:  mov    %eax,0x4(%esp)
083f71ee +0x1eef:  lea    -0x11(%ebp),%eax
083f71f1 +0x1ef2:  mov    %eax,(%esp)
083f71f4 +0x1ef5:  call   083f8090 <+0x2d91>
083f71f9 +0x1efa:  mov    0xc(%ebp),%edx
083f71fc +0x1efd:  mov    %esi,0x8(%esp)
083f7200 +0x1f01:  mov    %eax,0x4(%esp)
083f7204 +0x1f05:  mov    %edx,(%esp)
083f7207 +0x1f08:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f720c +0x1f0d:  test   %al,%al
083f720e +0x1f0f:  je     083f7277 <+0x1f78>
083f7210 +0x1f11:  mov    0x10(%ebp),%eax
083f7213 +0x1f14:  mov    %eax,(%esp)
083f7216 +0x1f17:  call   083f8365 <+0x3066>
083f721b +0x1f1c:  test   %eax,%eax
083f721d +0x1f1e:  sete   %al
083f7220 +0x1f21:  test   %al,%al
083f7222 +0x1f23:  je     083f724e <+0x1f4f>
083f7224 +0x1f25:  mov    0x10(%ebp),%eax
083f7227 +0x1f28:  mov    0x14(%ebp),%edx
083f722a +0x1f2b:  mov    %edx,0x10(%esp)
083f722e +0x1f2f:  mov    %eax,0xc(%esp)
083f7232 +0x1f33:  movl   $0x0,0x8(%esp)
083f723a +0x1f3b:  mov    0xc(%ebp),%eax
083f723d +0x1f3e:  mov    %eax,0x4(%esp)
083f7241 +0x1f42:  mov    %ebx,(%esp)
083f7244 +0x1f45:  call   083f80a4 <+0x2da5>
083f7249 +0x1f4a:  sub    $0x4,%esp
083f724c +0x1f4d:  jmp    083f72a9 <+0x1faa>
083f724e +0x1f4f:  mov    -0x34(%ebp),%edx
083f7251 +0x1f52:  mov    -0x34(%ebp),%eax
083f7254 +0x1f55:  mov    0x14(%ebp),%ecx
083f7257 +0x1f58:  mov    %ecx,0x10(%esp)
083f725b +0x1f5c:  mov    %edx,0xc(%esp)
083f725f +0x1f60:  mov    %eax,0x8(%esp)
083f7263 +0x1f64:  mov    0xc(%ebp),%eax
083f7266 +0x1f67:  mov    %eax,0x4(%esp)
083f726a +0x1f6b:  mov    %ebx,(%esp)
083f726d +0x1f6e:  call   083f80a4 <+0x2da5>
083f7272 +0x1f73:  sub    $0x4,%esp
083f7275 +0x1f76:  jmp    083f72a9 <+0x1faa>
083f7277 +0x1f78:  lea    -0x10(%ebp),%eax
083f727a +0x1f7b:  mov    0x14(%ebp),%edx
083f727d +0x1f7e:  mov    %edx,0x8(%esp)
083f7281 +0x1f82:  mov    0xc(%ebp),%edx
083f7284 +0x1f85:  mov    %edx,0x4(%esp)
083f7288 +0x1f89:  mov    %eax,(%esp)
083f728b +0x1f8c:  call   083f816c <+0x2e6d>
083f7290 +0x1f91:  sub    $0x4,%esp
083f7293 +0x1f94:  mov    -0x10(%ebp),%eax
083f7296 +0x1f97:  mov    %eax,(%ebx)
083f7298 +0x1f99:  jmp    083f72a9 <+0x1faa>
083f729a +0x1f9b:  mov    0x10(%ebp),%eax
083f729d +0x1f9e:  mov    %eax,0x4(%esp)
083f72a1 +0x1fa2:  mov    %ebx,(%esp)
083f72a4 +0x1fa5:  call   083f698a <+0x168b>
083f72a9 +0x1faa:  mov    %ebx,%eax
083f72ab +0x1fac:  lea    -0x8(%ebp),%esp
083f72ae +0x1faf:  add    $0x0,%esp
083f72b1 +0x1fb2:  pop    %ebx
083f72b2 +0x1fb3:  pop    %esi
083f72b3 +0x1fb4:  pop    %ebp
083f72b4 +0x1fb5:  ret    $0x4
083f72b7 +0x1fb8:  nop
083f72b8 +0x1fb9:  push   %ebp
083f72b9 +0x1fba:  mov    %esp,%ebp
083f72bb +0x1fbc:  sub    $0x18,%esp
083f72be +0x1fbf:  mov    0x8(%ebp),%eax
083f72c1 +0x1fc2:  add    $0x4,%eax
083f72c4 +0x1fc5:  mov    %eax,(%esp)
083f72c7 +0x1fc8:  call   083f685a <+0x155b>
083f72cc +0x1fcd:  mov    %eax,0x8(%esp)
083f72d0 +0x1fd1:  mov    0xc(%ebp),%eax
083f72d3 +0x1fd4:  mov    %eax,0x4(%esp)
083f72d7 +0x1fd8:  mov    0x8(%ebp),%eax
083f72da +0x1fdb:  mov    %eax,(%esp)
083f72dd +0x1fde:  call   083f838e <+0x308f>
083f72e2 +0x1fe3:  leave
083f72e3 +0x1fe4:  ret
083f72e4 +0x1fe5:  push   %ebp
083f72e5 +0x1fe6:  mov    %esp,%ebp
083f72e7 +0x1fe8:  mov    0xc(%ebp),%eax
083f72ea +0x1feb:  pop    %ebp
083f72eb +0x1fec:  ret
083f72ec +0x1fed:  push   %ebp
083f72ed +0x1fee:  mov    %esp,%ebp
083f72ef +0x1ff0:  mov    0x8(%ebp),%eax
083f72f2 +0x1ff3:  mov    0xc(%ebp),%edx
083f72f5 +0x1ff6:  mov    %edx,(%eax)
083f72f7 +0x1ff8:  mov    0x8(%ebp),%eax
083f72fa +0x1ffb:  mov    0x10(%ebp),%edx
083f72fd +0x1ffe:  mov    %edx,0x4(%eax)
083f7300 +0x2001:  pop    %ebp
083f7301 +0x2002:  ret
083f7302 +0x2003:  push   %ebp
083f7303 +0x2004:  mov    %esp,%ebp
083f7305 +0x2006:  push   %esi
083f7306 +0x2007:  push   %ebx
083f7307 +0x2008:  sub    $0x40,%esp
083f730a +0x200b:  mov    0x8(%ebp),%eax
083f730d +0x200e:  add    $0x4,%eax
083f7310 +0x2011:  mov    %eax,(%esp)
083f7313 +0x2014:  call   083f685a <+0x155b>
083f7318 +0x2019:  mov    %eax,-0x24(%ebp)
083f731b +0x201c:  mov    0xc(%ebp),%eax
083f731e +0x201f:  cmp    -0x24(%ebp),%eax
083f7321 +0x2022:  jbe    083f756f <+0x2270>
083f7327 +0x2028:  mov    0xc(%ebp),%eax
083f732a +0x202b:  mov    %eax,0x4(%esp)
083f732e +0x202f:  mov    0x8(%ebp),%eax
083f7331 +0x2032:  mov    %eax,(%esp)
083f7334 +0x2035:  call   083f77a6 <+0x24a7>
083f7339 +0x203a:  mov    %eax,-0x20(%ebp)
083f733c +0x203d:  mov    -0x20(%ebp),%eax
083f733f +0x2040:  cmp    -0x24(%ebp),%eax
083f7342 +0x2043:  jbe    083f756f <+0x2270>
083f7348 +0x2049:  mov    0x8(%ebp),%eax
083f734b +0x204c:  lea    0x4(%eax),%edx
083f734e +0x204f:  lea    -0x29(%ebp),%eax
083f7351 +0x2052:  mov    %edx,0x4(%esp)
083f7355 +0x2056:  mov    %eax,(%esp)
083f7358 +0x2059:  call   083f83b8 <+0x30b9>
083f735d +0x205e:  sub    $0x4,%esp
083f7360 +0x2061:  movl   $0x0,-0x28(%ebp)
083f7367 +0x2068:  lea    -0x29(%ebp),%eax
083f736a +0x206b:  mov    %eax,0xc(%esp)
083f736e +0x206f:  lea    -0x28(%ebp),%eax
083f7371 +0x2072:  mov    %eax,0x8(%esp)
083f7375 +0x2076:  mov    -0x20(%ebp),%eax
083f7378 +0x2079:  mov    %eax,0x4(%esp)
083f737c +0x207d:  lea    -0x38(%ebp),%eax
083f737f +0x2080:  mov    %eax,(%esp)
083f7382 +0x2083:  call   083f83ea <+0x30eb>
083f7387 +0x2088:  jmp    083f73a4 <+0x20a5>
083f7389 +0x208a:  mov    %edx,%ebx
083f738b +0x208c:  mov    %eax,%esi
083f738d +0x208e:  lea    -0x29(%ebp),%eax
083f7390 +0x2091:  mov    %eax,(%esp)
083f7393 +0x2094:  call   083f670a <+0x140b>
083f7398 +0x2099:  mov    %esi,%eax
083f739a +0x209b:  mov    %ebx,%edx
083f739c +0x209d:  mov    %eax,(%esp)
083f739f +0x20a0:  call   08ae3750 <_Unwind_Resume>
083f73a4 +0x20a5:  lea    -0x29(%ebp),%eax
083f73a7 +0x20a8:  mov    %eax,(%esp)
083f73aa +0x20ab:  call   083f670a <+0x140b>
083f73af +0x20b0:  movl   $0x0,-0x1c(%ebp)
083f73b6 +0x20b7:  jmp    083f7472 <+0x2173>
083f73bb +0x20bc:  mov    0x8(%ebp),%eax
083f73be +0x20bf:  lea    0x4(%eax),%edx
083f73c1 +0x20c2:  mov    -0x1c(%ebp),%eax
083f73c4 +0x20c5:  mov    %eax,0x4(%esp)
083f73c8 +0x20c9:  mov    %edx,(%esp)
083f73cb +0x20cc:  call   083f6876 <+0x1577>
083f73d0 +0x20d1:  mov    (%eax),%eax
083f73d2 +0x20d3:  mov    %eax,-0x18(%ebp)
083f73d5 +0x20d6:  jmp    083f745f <+0x2160>
083f73da +0x20db:  mov    -0x18(%ebp),%eax
083f73dd +0x20de:  lea    0x4(%eax),%edx
083f73e0 +0x20e1:  mov    -0x20(%ebp),%eax
083f73e3 +0x20e4:  mov    %eax,0x8(%esp)
083f73e7 +0x20e8:  mov    %edx,0x4(%esp)
083f73eb +0x20ec:  mov    0x8(%ebp),%eax
083f73ee +0x20ef:  mov    %eax,(%esp)
083f73f1 +0x20f2:  call   083f8448 <+0x3149>
083f73f6 +0x20f7:  mov    %eax,-0x14(%ebp)
083f73f9 +0x20fa:  mov    0x8(%ebp),%eax
083f73fc +0x20fd:  lea    0x4(%eax),%edx
083f73ff +0x2100:  mov    -0x1c(%ebp),%eax
083f7402 +0x2103:  mov    %eax,0x4(%esp)
083f7406 +0x2107:  mov    %edx,(%esp)
083f7409 +0x210a:  call   083f6876 <+0x1577>
083f740e +0x210f:  mov    -0x18(%ebp),%edx
083f7411 +0x2112:  mov    (%edx),%edx
083f7413 +0x2114:  mov    %edx,(%eax)
083f7415 +0x2116:  mov    -0x14(%ebp),%eax
083f7418 +0x2119:  mov    %eax,0x4(%esp)
083f741c +0x211d:  lea    -0x38(%ebp),%eax
083f741f +0x2120:  mov    %eax,(%esp)
083f7422 +0x2123:  call   083f6876 <+0x1577>
083f7427 +0x2128:  mov    (%eax),%edx
083f7429 +0x212a:  mov    -0x18(%ebp),%eax
083f742c +0x212d:  mov    %edx,(%eax)
083f742e +0x212f:  mov    -0x14(%ebp),%eax
083f7431 +0x2132:  mov    %eax,0x4(%esp)
083f7435 +0x2136:  lea    -0x38(%ebp),%eax
083f7438 +0x2139:  mov    %eax,(%esp)
083f743b +0x213c:  call   083f6876 <+0x1577>
083f7440 +0x2141:  mov    -0x18(%ebp),%edx
083f7443 +0x2144:  mov    %edx,(%eax)
083f7445 +0x2146:  mov    0x8(%ebp),%eax
083f7448 +0x2149:  lea    0x4(%eax),%edx
083f744b +0x214c:  mov    -0x1c(%ebp),%eax
083f744e +0x214f:  mov    %eax,0x4(%esp)
083f7452 +0x2153:  mov    %edx,(%esp)
083f7455 +0x2156:  call   083f6876 <+0x1577>
083f745a +0x215b:  mov    (%eax),%eax
083f745c +0x215d:  mov    %eax,-0x18(%ebp)
083f745f +0x2160:  cmpl   $0x0,-0x18(%ebp)
083f7463 +0x2164:  setne  %al
083f7466 +0x2167:  test   %al,%al
083f7468 +0x2169:  jne    083f73da <+0x20db>
083f746e +0x216f:  addl   $0x1,-0x1c(%ebp)
083f7472 +0x2173:  mov    -0x1c(%ebp),%eax
083f7475 +0x2176:  cmp    -0x24(%ebp),%eax
083f7478 +0x2179:  setb   %al
083f747b +0x217c:  test   %al,%al
083f747d +0x217e:  jne    083f73bb <+0x20bc>
083f7483 +0x2184:  mov    0x8(%ebp),%eax
083f7486 +0x2187:  lea    0x4(%eax),%edx
083f7489 +0x218a:  lea    -0x38(%ebp),%eax
083f748c +0x218d:  mov    %eax,0x4(%esp)
083f7490 +0x2191:  mov    %edx,(%esp)
083f7493 +0x2194:  call   083f847c <+0x317d>
083f7498 +0x2199:  jmp    083f7564 <+0x2265>
083f749d +0x219e:  mov    %eax,(%esp)
083f74a0 +0x21a1:  call   08725ce0 <__cxa_begin_catch>
083f74a5 +0x21a6:  movl   $0x0,-0x10(%ebp)
083f74ac +0x21ad:  jmp    083f7522 <+0x2223>
083f74ae +0x21af:  mov    -0x10(%ebp),%eax
083f74b1 +0x21b2:  mov    %eax,0x4(%esp)
083f74b5 +0x21b6:  lea    -0x38(%ebp),%eax
083f74b8 +0x21b9:  mov    %eax,(%esp)
083f74bb +0x21bc:  call   083f6876 <+0x1577>
083f74c0 +0x21c1:  mov    (%eax),%eax
083f74c2 +0x21c3:  mov    (%eax),%eax
083f74c4 +0x21c5:  mov    %eax,-0xc(%ebp)
083f74c7 +0x21c8:  mov    -0x10(%ebp),%eax
083f74ca +0x21cb:  mov    %eax,0x4(%esp)
083f74ce +0x21cf:  lea    -0x38(%ebp),%eax
083f74d1 +0x21d2:  mov    %eax,(%esp)
083f74d4 +0x21d5:  call   083f6876 <+0x1577>
083f74d9 +0x21da:  mov    (%eax),%eax
083f74db +0x21dc:  mov    %eax,0x4(%esp)
083f74df +0x21e0:  mov    0x8(%ebp),%eax
083f74e2 +0x21e3:  mov    %eax,(%esp)
083f74e5 +0x21e6:  call   083f6888 <+0x1589>
083f74ea +0x21eb:  mov    -0x10(%ebp),%eax
083f74ed +0x21ee:  mov    %eax,0x4(%esp)
083f74f1 +0x21f2:  lea    -0x38(%ebp),%eax
083f74f4 +0x21f5:  mov    %eax,(%esp)
083f74f7 +0x21f8:  call   083f6876 <+0x1577>
083f74fc +0x21fd:  mov    -0xc(%ebp),%edx
083f74ff +0x2200:  mov    %edx,(%eax)
083f7501 +0x2202:  mov    -0x10(%ebp),%eax
083f7504 +0x2205:  mov    %eax,0x4(%esp)
083f7508 +0x2209:  lea    -0x38(%ebp),%eax
083f750b +0x220c:  mov    %eax,(%esp)
083f750e +0x220f:  call   083f6876 <+0x1577>
083f7513 +0x2214:  mov    (%eax),%eax
083f7515 +0x2216:  test   %eax,%eax
083f7517 +0x2218:  setne  %al
083f751a +0x221b:  test   %al,%al
083f751c +0x221d:  jne    083f74ae <+0x21af>
083f751e +0x221f:  addl   $0x1,-0x10(%ebp)
083f7522 +0x2223:  lea    -0x38(%ebp),%eax
083f7525 +0x2226:  mov    %eax,(%esp)
083f7528 +0x2229:  call   083f685a <+0x155b>
083f752d +0x222e:  cmp    -0x10(%ebp),%eax
083f7530 +0x2231:  seta   %al
083f7533 +0x2234:  test   %al,%al
083f7535 +0x2236:  jne    083f7501 <+0x2202>
083f7537 +0x2238:  call   08724be0 <__cxa_rethrow>
083f753c +0x223d:  mov    %edx,%ebx
083f753e +0x223f:  mov    %eax,%esi
083f7540 +0x2241:  call   08725c30 <__cxa_end_catch>
083f7545 +0x2246:  mov    %esi,%eax
083f7547 +0x2248:  mov    %ebx,%edx
083f7549 +0x224a:  mov    %edx,%ebx
083f754b +0x224c:  mov    %eax,%esi
083f754d +0x224e:  lea    -0x38(%ebp),%eax
083f7550 +0x2251:  mov    %eax,(%esp)
083f7553 +0x2254:  call   083f5e44 <+0xb45>
083f7558 +0x2259:  mov    %esi,%eax
083f755a +0x225b:  mov    %ebx,%edx
083f755c +0x225d:  mov    %eax,(%esp)
083f755f +0x2260:  call   08ae3750 <_Unwind_Resume>
083f7564 +0x2265:  lea    -0x38(%ebp),%eax
083f7567 +0x2268:  mov    %eax,(%esp)
083f756a +0x226b:  call   083f5e44 <+0xb45>
083f756f +0x2270:  lea    -0x8(%ebp),%esp
083f7572 +0x2273:  add    $0x0,%esp
083f7575 +0x2276:  pop    %ebx
083f7576 +0x2277:  pop    %esi
083f7577 +0x2278:  pop    %ebp
083f7578 +0x2279:  ret
083f7579 +0x227a:  nop
083f757a +0x227b:  push   %ebp
083f757b +0x227c:  mov    %esp,%ebp
083f757d +0x227e:  push   %esi
083f757e +0x227f:  push   %ebx
083f757f +0x2280:  sub    $0x40,%esp
083f7582 +0x2283:  mov    0x8(%ebp),%ebx
083f7585 +0x2286:  mov    0x10(%ebp),%eax
083f7588 +0x2289:  mov    %eax,0x4(%esp)
083f758c +0x228d:  mov    0xc(%ebp),%eax
083f758f +0x2290:  mov    %eax,(%esp)
083f7592 +0x2293:  call   083f76e4 <+0x23e5>
083f7597 +0x2298:  mov    %eax,-0x18(%ebp)
083f759a +0x229b:  mov    0xc(%ebp),%eax
083f759d +0x229e:  lea    0x4(%eax),%edx
083f75a0 +0x22a1:  mov    -0x18(%ebp),%eax
083f75a3 +0x22a4:  mov    %eax,0x4(%esp)
083f75a7 +0x22a8:  mov    %edx,(%esp)
083f75aa +0x22ab:  call   083f6876 <+0x1577>
083f75af +0x22b0:  mov    (%eax),%eax
083f75b1 +0x22b2:  mov    %eax,-0x14(%ebp)
083f75b4 +0x22b5:  mov    -0x14(%ebp),%eax
083f75b7 +0x22b8:  mov    %eax,-0xc(%ebp)
083f75ba +0x22bb:  jmp    083f7648 <+0x2349>
083f75bf +0x22c0:  mov    0xc(%ebp),%eax
083f75c2 +0x22c3:  lea    0x3(%eax),%edx
083f75c5 +0x22c6:  mov    0x10(%ebp),%eax
083f75c8 +0x22c9:  mov    %eax,0x4(%esp)
083f75cc +0x22cd:  mov    %edx,(%esp)
083f75cf +0x22d0:  call   083f7710 <+0x2411>
083f75d4 +0x22d5:  mov    %eax,%esi
083f75d6 +0x22d7:  mov    -0xc(%ebp),%eax
083f75d9 +0x22da:  lea    0x4(%eax),%edx
083f75dc +0x22dd:  mov    0xc(%ebp),%eax
083f75df +0x22e0:  add    $0x3,%eax
083f75e2 +0x22e3:  mov    %edx,0x4(%esp)
083f75e6 +0x22e7:  mov    %eax,(%esp)
083f75e9 +0x22ea:  call   083f72e4 <+0x1fe5>
083f75ee +0x22ef:  mov    0xc(%ebp),%edx
083f75f1 +0x22f2:  add    $0x2,%edx
083f75f4 +0x22f5:  mov    %esi,0x8(%esp)
083f75f8 +0x22f9:  mov    %eax,0x4(%esp)
083f75fc +0x22fd:  mov    %edx,(%esp)
083f75ff +0x2300:  call   082c4b86 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x16a81>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x16a81
083f7604 +0x2305:  test   %al,%al
083f7606 +0x2307:  je     083f7640 <+0x2341>
083f7608 +0x2309:  movb   $0x0,-0x2d(%ebp)
083f760c +0x230d:  mov    0xc(%ebp),%eax
083f760f +0x2310:  mov    %eax,0x8(%esp)
083f7613 +0x2314:  mov    -0xc(%ebp),%eax
083f7616 +0x2317:  mov    %eax,0x4(%esp)
083f761a +0x231b:  lea    -0x2c(%ebp),%eax
083f761d +0x231e:  mov    %eax,(%esp)
083f7620 +0x2321:  call   083f72ec <+0x1fed>
083f7625 +0x2326:  lea    -0x2d(%ebp),%eax
083f7628 +0x2329:  mov    %eax,0x8(%esp)
083f762c +0x232d:  lea    -0x2c(%ebp),%eax
083f762f +0x2330:  mov    %eax,0x4(%esp)
083f7633 +0x2334:  mov    %ebx,(%esp)
083f7636 +0x2337:  call   083f84f0 <+0x31f1>
083f763b +0x233c:  jmp    083f76d0 <+0x23d1>
083f7640 +0x2341:  mov    -0xc(%ebp),%eax
083f7643 +0x2344:  mov    (%eax),%eax
083f7645 +0x2346:  mov    %eax,-0xc(%ebp)
083f7648 +0x2349:  cmpl   $0x0,-0xc(%ebp)
083f764c +0x234d:  setne  %al
083f764f +0x2350:  test   %al,%al
083f7651 +0x2352:  jne    083f75bf <+0x22c0>
083f7657 +0x2358:  mov    0x10(%ebp),%eax
083f765a +0x235b:  mov    %eax,0x4(%esp)
083f765e +0x235f:  mov    0xc(%ebp),%eax
083f7661 +0x2362:  mov    %eax,(%esp)
083f7664 +0x2365:  call   083f7718 <+0x2419>
083f7669 +0x236a:  mov    %eax,-0x10(%ebp)
083f766c +0x236d:  mov    -0x10(%ebp),%eax
083f766f +0x2370:  mov    -0x14(%ebp),%edx
083f7672 +0x2373:  mov    %edx,(%eax)
083f7674 +0x2375:  mov    0xc(%ebp),%eax
083f7677 +0x2378:  lea    0x4(%eax),%edx
083f767a +0x237b:  mov    -0x18(%ebp),%eax
083f767d +0x237e:  mov    %eax,0x4(%esp)
083f7681 +0x2382:  mov    %edx,(%esp)
083f7684 +0x2385:  call   083f6876 <+0x1577>
083f7689 +0x238a:  mov    -0x10(%ebp),%edx
083f768c +0x238d:  mov    %edx,(%eax)
083f768e +0x238f:  mov    0xc(%ebp),%eax
083f7691 +0x2392:  mov    0x10(%eax),%eax
083f7694 +0x2395:  lea    0x1(%eax),%edx
083f7697 +0x2398:  mov    0xc(%ebp),%eax
083f769a +0x239b:  mov    %edx,0x10(%eax)
083f769d +0x239e:  movb   $0x1,-0x21(%ebp)
083f76a1 +0x23a2:  mov    0xc(%ebp),%eax
083f76a4 +0x23a5:  mov    %eax,0x8(%esp)
083f76a8 +0x23a9:  mov    -0x10(%ebp),%eax
083f76ab +0x23ac:  mov    %eax,0x4(%esp)
083f76af +0x23b0:  lea    -0x20(%ebp),%eax
083f76b2 +0x23b3:  mov    %eax,(%esp)
083f76b5 +0x23b6:  call   083f72ec <+0x1fed>
083f76ba +0x23bb:  lea    -0x21(%ebp),%eax
083f76bd +0x23be:  mov    %eax,0x8(%esp)
083f76c1 +0x23c2:  lea    -0x20(%ebp),%eax
083f76c4 +0x23c5:  mov    %eax,0x4(%esp)
083f76c8 +0x23c9:  mov    %ebx,(%esp)
083f76cb +0x23cc:  call   083f84f0 <+0x31f1>
083f76d0 +0x23d1:  mov    %ebx,%eax
083f76d2 +0x23d3:  add    $0x40,%esp
083f76d5 +0x23d6:  pop    %ebx
083f76d6 +0x23d7:  pop    %esi
083f76d7 +0x23d8:  pop    %ebp
083f76d8 +0x23d9:  ret    $0x4
083f76db +0x23dc:  push   %ebp
083f76dc +0x23dd:  mov    %esp,%ebp
083f76de +0x23df:  mov    0x8(%ebp),%eax
083f76e1 +0x23e2:  pop    %ebp
083f76e2 +0x23e3:  ret
083f76e3 +0x23e4:  nop
083f76e4 +0x23e5:  push   %ebp
083f76e5 +0x23e6:  mov    %esp,%ebp
083f76e7 +0x23e8:  sub    $0x18,%esp
083f76ea +0x23eb:  mov    0x8(%ebp),%eax
083f76ed +0x23ee:  lea    0x3(%eax),%edx
083f76f0 +0x23f1:  mov    0xc(%ebp),%eax
083f76f3 +0x23f4:  mov    %eax,0x4(%esp)
083f76f7 +0x23f8:  mov    %edx,(%esp)
083f76fa +0x23fb:  call   083f7710 <+0x2411>
083f76ff +0x2400:  mov    %eax,0x4(%esp)
083f7703 +0x2404:  mov    0x8(%ebp),%eax
083f7706 +0x2407:  mov    %eax,(%esp)
083f7709 +0x240a:  call   083f72b8 <+0x1fb9>
083f770e +0x240f:  leave
083f770f +0x2410:  ret
083f7710 +0x2411:  push   %ebp
083f7711 +0x2412:  mov    %esp,%ebp
083f7713 +0x2414:  mov    0xc(%ebp),%eax
083f7716 +0x2417:  pop    %ebp
083f7717 +0x2418:  ret
083f7718 +0x2419:  push   %ebp
083f7719 +0x241a:  mov    %esp,%ebp
083f771b +0x241c:  push   %ebx
083f771c +0x241d:  sub    $0x24,%esp
083f771f +0x2420:  mov    0x8(%ebp),%eax
083f7722 +0x2423:  mov    %eax,(%esp)
083f7725 +0x2426:  call   083f8524 <+0x3225>
083f772a +0x242b:  mov    %eax,-0xc(%ebp)
083f772d +0x242e:  mov    -0xc(%ebp),%eax
083f7730 +0x2431:  movl   $0x0,(%eax)
083f7736 +0x2437:  mov    -0xc(%ebp),%eax
083f7739 +0x243a:  lea    0x4(%eax),%ebx
083f773c +0x243d:  lea    -0xd(%ebp),%eax
083f773f +0x2440:  mov    0x8(%ebp),%edx
083f7742 +0x2443:  mov    %edx,0x4(%esp)
083f7746 +0x2447:  mov    %eax,(%esp)
083f7749 +0x244a:  call   083f796e <+0x266f>
083f774e +0x244f:  sub    $0x4,%esp
083f7751 +0x2452:  lea    -0xd(%ebp),%eax
083f7754 +0x2455:  mov    0xc(%ebp),%edx
083f7757 +0x2458:  mov    %edx,0x8(%esp)
083f775b +0x245c:  mov    %ebx,0x4(%esp)
083f775f +0x2460:  mov    %eax,(%esp)
083f7762 +0x2463:  call   083f8548 <+0x3249>
083f7767 +0x2468:  lea    -0xd(%ebp),%eax
083f776a +0x246b:  mov    %eax,(%esp)
083f776d +0x246e:  call   083f5d62 <+0xa63>
083f7772 +0x2473:  mov    -0xc(%ebp),%eax
083f7775 +0x2476:  mov    -0x4(%ebp),%ebx
083f7778 +0x2479:  leave
083f7779 +0x247a:  ret
083f777a +0x247b:  push   %ebp
083f777b +0x247c:  mov    %esp,%ebp
083f777d +0x247e:  pop    %ebp
083f777e +0x247f:  ret
083f777f +0x2480:  nop
083f7780 +0x2481:  push   %ebp
083f7781 +0x2482:  mov    %esp,%ebp
083f7783 +0x2484:  pop    %ebp
083f7784 +0x2485:  ret
083f7785 +0x2486:  nop
083f7786 +0x2487:  push   %ebp
083f7787 +0x2488:  mov    %esp,%ebp
083f7789 +0x248a:  pop    %ebp
083f778a +0x248b:  ret
083f778b +0x248c:  nop
083f778c +0x248d:  push   %ebp
083f778d +0x248e:  mov    %esp,%ebp
083f778f +0x2490:  sub    $0x18,%esp
083f7792 +0x2493:  mov    0x8(%ebp),%eax
083f7795 +0x2496:  mov    0xc(%ebp),%edx
083f7798 +0x2499:  mov    %edx,0x4(%esp)
083f779c +0x249d:  mov    %eax,(%esp)
083f779f +0x24a0:  call   083f8582 <+0x3283>
083f77a4 +0x24a5:  leave
083f77a5 +0x24a6:  ret
083f77a6 +0x24a7:  push   %ebp
083f77a7 +0x24a8:  mov    %esp,%ebp
083f77a9 +0x24aa:  sub    $0x18,%esp
083f77ac +0x24ad:  mov    0xc(%ebp),%eax
083f77af +0x24b0:  mov    %eax,(%esp)
083f77b2 +0x24b3:  call   082a3bfe <_GLOBAL__I__ZN4CLog5this_E+0x25>  ; global constructors keyed to CLog::this_+0x25
083f77b7 +0x24b8:  leave
083f77b8 +0x24b9:  ret
083f77b9 +0x24ba:  nop
083f77ba +0x24bb:  push   %ebp
083f77bb +0x24bc:  mov    %esp,%ebp
083f77bd +0x24be:  sub    $0x28,%esp
083f77c0 +0x24c1:  mov    0x8(%ebp),%eax
083f77c3 +0x24c4:  mov    %eax,(%esp)
083f77c6 +0x24c7:  call   083f85ba <+0x32bb>
083f77cb +0x24cc:  cmp    0xc(%ebp),%eax
083f77ce +0x24cf:  setb   %al
083f77d1 +0x24d2:  test   %al,%al
083f77d3 +0x24d4:  je     083f77e1 <+0x24e2>
083f77d5 +0x24d6:  movl   $"vector::reserve",(%esp)
083f77dc +0x24dd:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
083f77e1 +0x24e2:  mov    0x8(%ebp),%eax
083f77e4 +0x24e5:  mov    %eax,(%esp)
083f77e7 +0x24e8:  call   083f85d6 <+0x32d7>
083f77ec +0x24ed:  cmp    0xc(%ebp),%eax
083f77ef +0x24f0:  setb   %al
083f77f2 +0x24f3:  test   %al,%al
083f77f4 +0x24f5:  je     083f78db <+0x25dc>
083f77fa +0x24fb:  mov    0x8(%ebp),%eax
083f77fd +0x24fe:  mov    %eax,(%esp)
083f7800 +0x2501:  call   083f685a <+0x155b>
083f7805 +0x2506:  mov    %eax,-0x10(%ebp)
083f7808 +0x2509:  mov    0x8(%ebp),%eax
083f780b +0x250c:  lea    0x4(%eax),%edx
083f780e +0x250f:  lea    -0x18(%ebp),%eax
083f7811 +0x2512:  mov    %edx,0x4(%esp)
083f7815 +0x2516:  mov    %eax,(%esp)
083f7818 +0x2519:  call   083f85f1 <+0x32f2>
083f781d +0x251e:  sub    $0x4,%esp
083f7820 +0x2521:  mov    0x8(%ebp),%edx
083f7823 +0x2524:  lea    -0x14(%ebp),%eax
083f7826 +0x2527:  mov    %edx,0x4(%esp)
083f782a +0x252b:  mov    %eax,(%esp)
083f782d +0x252e:  call   083f85f1 <+0x32f2>
083f7832 +0x2533:  sub    $0x4,%esp
083f7835 +0x2536:  mov    -0x18(%ebp),%eax
083f7838 +0x2539:  mov    %eax,0xc(%esp)
083f783c +0x253d:  mov    -0x14(%ebp),%eax
083f783f +0x2540:  mov    %eax,0x8(%esp)
083f7843 +0x2544:  mov    0xc(%ebp),%eax
083f7846 +0x2547:  mov    %eax,0x4(%esp)
083f784a +0x254b:  mov    0x8(%ebp),%eax
083f784d +0x254e:  mov    %eax,(%esp)
083f7850 +0x2551:  call   083f8616 <+0x3317>
083f7855 +0x2556:  mov    %eax,-0xc(%ebp)
083f7858 +0x2559:  mov    0x8(%ebp),%eax
083f785b +0x255c:  mov    %eax,(%esp)
083f785e +0x255f:  call   083f6838 <+0x1539>
083f7863 +0x2564:  mov    0x8(%ebp),%edx
083f7866 +0x2567:  mov    0x4(%edx),%ecx
083f7869 +0x256a:  mov    0x8(%ebp),%edx
083f786c +0x256d:  mov    (%edx),%edx
083f786e +0x256f:  mov    %eax,0x8(%esp)
083f7872 +0x2573:  mov    %ecx,0x4(%esp)
083f7876 +0x2577:  mov    %edx,(%esp)
083f7879 +0x257a:  call   083f6840 <+0x1541>
083f787e +0x257f:  mov    0x8(%ebp),%eax
083f7881 +0x2582:  mov    0x8(%eax),%eax
083f7884 +0x2585:  mov    %eax,%edx
083f7886 +0x2587:  mov    0x8(%ebp),%eax
083f7889 +0x258a:  mov    (%eax),%eax
083f788b +0x258c:  mov    %edx,%ecx
083f788d +0x258e:  sub    %eax,%ecx
083f788f +0x2590:  mov    %ecx,%eax
083f7891 +0x2592:  sar    $0x2,%eax
083f7894 +0x2595:  mov    %eax,%ecx
083f7896 +0x2597:  mov    0x8(%ebp),%eax
083f7899 +0x259a:  mov    (%eax),%edx
083f789b +0x259c:  mov    0x8(%ebp),%eax
083f789e +0x259f:  mov    %ecx,0x8(%esp)
083f78a2 +0x25a3:  mov    %edx,0x4(%esp)
083f78a6 +0x25a7:  mov    %eax,(%esp)
083f78a9 +0x25aa:  call   083f792c <+0x262d>
083f78ae +0x25af:  mov    0x8(%ebp),%eax
083f78b1 +0x25b2:  mov    -0xc(%ebp),%edx
083f78b4 +0x25b5:  mov    %edx,(%eax)
083f78b6 +0x25b7:  mov    -0x10(%ebp),%eax
083f78b9 +0x25ba:  shl    $0x2,%eax
083f78bc +0x25bd:  mov    %eax,%edx
083f78be +0x25bf:  add    -0xc(%ebp),%edx
083f78c1 +0x25c2:  mov    0x8(%ebp),%eax
083f78c4 +0x25c5:  mov    %edx,0x4(%eax)
083f78c7 +0x25c8:  mov    0x8(%ebp),%eax
083f78ca +0x25cb:  mov    (%eax),%eax
083f78cc +0x25cd:  mov    0xc(%ebp),%edx
083f78cf +0x25d0:  shl    $0x2,%edx
083f78d2 +0x25d3:  lea    (%eax,%edx,1),%edx
083f78d5 +0x25d6:  mov    0x8(%ebp),%eax
083f78d8 +0x25d9:  mov    %edx,0x8(%eax)
083f78db +0x25dc:  leave
083f78dc +0x25dd:  ret
083f78dd +0x25de:  nop
083f78de +0x25df:  push   %ebp
083f78df +0x25e0:  mov    %esp,%ebp
083f78e1 +0x25e2:  push   %ebx
083f78e2 +0x25e3:  sub    $0x14,%esp
083f78e5 +0x25e6:  mov    0x8(%ebp),%ebx
083f78e8 +0x25e9:  mov    0xc(%ebp),%eax
083f78eb +0x25ec:  add    $0x4,%eax
083f78ee +0x25ef:  mov    %eax,0x4(%esp)
083f78f2 +0x25f3:  mov    %ebx,(%esp)
083f78f5 +0x25f6:  call   083f86a0 <+0x33a1>
083f78fa +0x25fb:  mov    %ebx,%eax
083f78fc +0x25fd:  add    $0x14,%esp
083f78ff +0x2600:  pop    %ebx
083f7900 +0x2601:  pop    %ebp
083f7901 +0x2602:  ret    $0x4
083f7904 +0x2605:  push   %ebp
083f7905 +0x2606:  mov    %esp,%ebp
083f7907 +0x2608:  sub    $0x18,%esp
083f790a +0x260b:  mov    0x14(%ebp),%eax
083f790d +0x260e:  mov    %eax,0xc(%esp)
083f7911 +0x2612:  mov    0x10(%ebp),%eax
083f7914 +0x2615:  mov    %eax,0x8(%esp)
083f7918 +0x2619:  mov    0xc(%ebp),%eax
083f791b +0x261c:  mov    %eax,0x4(%esp)
083f791f +0x2620:  mov    0x8(%ebp),%eax
083f7922 +0x2623:  mov    %eax,(%esp)
083f7925 +0x2626:  call   083f86b0 <+0x33b1>
083f792a +0x262b:  leave
083f792b +0x262c:  ret
083f792c +0x262d:  push   %ebp
083f792d +0x262e:  mov    %esp,%ebp
083f792f +0x2630:  sub    $0x18,%esp
083f7932 +0x2633:  cmpl   $0x0,0xc(%ebp)
083f7936 +0x2637:  je     083f7951 <+0x2652>
083f7938 +0x2639:  mov    0x8(%ebp),%eax
083f793b +0x263c:  mov    0x10(%ebp),%edx
083f793e +0x263f:  mov    %edx,0x8(%esp)
083f7942 +0x2643:  mov    0xc(%ebp),%edx
083f7945 +0x2646:  mov    %edx,0x4(%esp)
083f7949 +0x264a:  mov    %eax,(%esp)
083f794c +0x264d:  call   083f8ad6 <+0x37d7>
083f7951 +0x2652:  leave
083f7952 +0x2653:  ret
083f7953 +0x2654:  push   %ebp
083f7954 +0x2655:  mov    %esp,%ebp
083f7956 +0x2657:  sub    $0x18,%esp
083f7959 +0x265a:  mov    0xc(%ebp),%eax
083f795c +0x265d:  mov    %eax,0x4(%esp)
083f7960 +0x2661:  mov    0x8(%ebp),%eax
083f7963 +0x2664:  mov    %eax,(%esp)
083f7966 +0x2667:  call   083f8ae9 <+0x37ea>
083f796b +0x266c:  leave
083f796c +0x266d:  ret
083f796d +0x266e:  nop
083f796e +0x266f:  push   %ebp
083f796f +0x2670:  mov    %esp,%ebp
083f7971 +0x2672:  push   %ebx
083f7972 +0x2673:  sub    $0x14,%esp
083f7975 +0x2676:  mov    0x8(%ebp),%ebx
083f7978 +0x2679:  mov    %ebx,%eax
083f797a +0x267b:  mov    0xc(%ebp),%edx
083f797d +0x267e:  mov    %edx,0x4(%esp)
083f7981 +0x2682:  mov    %eax,(%esp)
083f7984 +0x2685:  call   083f8aee <+0x37ef>
083f7989 +0x268a:  mov    %ebx,%eax
083f798b +0x268c:  mov    %ebx,%eax
083f798d +0x268e:  add    $0x14,%esp
083f7990 +0x2691:  pop    %ebx
083f7991 +0x2692:  pop    %ebp
083f7992 +0x2693:  ret    $0x4
083f7995 +0x2696:  nop
083f7996 +0x2697:  push   %ebp
083f7997 +0x2698:  mov    %esp,%ebp
083f7999 +0x269a:  pop    %ebp
083f799a +0x269b:  ret
083f799b +0x269c:  nop
083f799c +0x269d:  push   %ebp
083f799d +0x269e:  mov    %esp,%ebp
083f799f +0x26a0:  sub    $0x18,%esp
083f79a2 +0x26a3:  mov    0xc(%ebp),%eax
083f79a5 +0x26a6:  mov    %eax,(%esp)
083f79a8 +0x26a9:  call   083f7996 <+0x2697>
083f79ad +0x26ae:  leave
083f79ae +0x26af:  ret
083f79af +0x26b0:  nop
083f79b0 +0x26b1:  push   %ebp
083f79b1 +0x26b2:  mov    %esp,%ebp
083f79b3 +0x26b4:  sub    $0x18,%esp
083f79b6 +0x26b7:  mov    0x8(%ebp),%eax
083f79b9 +0x26ba:  movl   $0x1,0x8(%esp)
083f79c1 +0x26c2:  mov    0xc(%ebp),%edx
083f79c4 +0x26c5:  mov    %edx,0x4(%esp)
083f79c8 +0x26c9:  mov    %eax,(%esp)
083f79cb +0x26cc:  call   083f8b02 <+0x3803>
083f79d0 +0x26d1:  leave
083f79d1 +0x26d2:  ret
083f79d2 +0x26d3:  push   %ebp
083f79d3 +0x26d4:  mov    %esp,%ebp
083f79d5 +0x26d6:  sub    $0x18,%esp
083f79d8 +0x26d9:  mov    0x8(%ebp),%eax
083f79db +0x26dc:  mov    %eax,(%esp)
083f79de +0x26df:  call   083f8b16 <+0x3817>
083f79e3 +0x26e4:  leave
083f79e4 +0x26e5:  ret
083f79e5 +0x26e6:  nop
083f79e6 +0x26e7:  push   %ebp
083f79e7 +0x26e8:  mov    %esp,%ebp
083f79e9 +0x26ea:  mov    0x8(%ebp),%eax
083f79ec +0x26ed:  movl   $0x0,0x4(%eax)
083f79f3 +0x26f4:  mov    0x8(%ebp),%eax
083f79f6 +0x26f7:  movl   $0x0,0x8(%eax)
083f79fd +0x26fe:  mov    0x8(%ebp),%eax
083f7a00 +0x2701:  lea    0x4(%eax),%edx
083f7a03 +0x2704:  mov    0x8(%ebp),%eax
083f7a06 +0x2707:  mov    %edx,0xc(%eax)
083f7a09 +0x270a:  mov    0x8(%ebp),%eax
083f7a0c +0x270d:  lea    0x4(%eax),%edx
083f7a0f +0x2710:  mov    0x8(%ebp),%eax
083f7a12 +0x2713:  mov    %edx,0x10(%eax)
083f7a15 +0x2716:  pop    %ebp
083f7a16 +0x2717:  ret
083f7a17 +0x2718:  nop
083f7a18 +0x2719:  push   %ebp
083f7a19 +0x271a:  mov    %esp,%ebp
083f7a1b +0x271c:  mov    0x8(%ebp),%eax
083f7a1e +0x271f:  pop    %ebp
083f7a1f +0x2720:  ret
083f7a20 +0x2721:  push   %ebp
083f7a21 +0x2722:  mov    %esp,%ebp
083f7a23 +0x2724:  sub    $0x18,%esp
083f7a26 +0x2727:  mov    0x8(%ebp),%eax
083f7a29 +0x272a:  add    $0x10,%eax
083f7a2c +0x272d:  mov    %eax,(%esp)
083f7a2f +0x2730:  call   083f5906 <+0x607>
083f7a34 +0x2735:  leave
083f7a35 +0x2736:  ret
083f7a36 +0x2737:  push   %ebp
083f7a37 +0x2738:  mov    %esp,%ebp
083f7a39 +0x273a:  sub    $0x18,%esp
083f7a3c +0x273d:  mov    0xc(%ebp),%eax
083f7a3f +0x2740:  mov    %eax,(%esp)
083f7a42 +0x2743:  call   083f7a20 <+0x2721>
083f7a47 +0x2748:  leave
083f7a48 +0x2749:  ret
083f7a49 +0x274a:  nop
083f7a4a +0x274b:  push   %ebp
083f7a4b +0x274c:  mov    %esp,%ebp
083f7a4d +0x274e:  sub    $0x18,%esp
083f7a50 +0x2751:  mov    0x8(%ebp),%eax
083f7a53 +0x2754:  movl   $0x1,0x8(%esp)
083f7a5b +0x275c:  mov    0xc(%ebp),%edx
083f7a5e +0x275f:  mov    %edx,0x4(%esp)
083f7a62 +0x2763:  mov    %eax,(%esp)
083f7a65 +0x2766:  call   083f8b1c <+0x381d>
083f7a6a +0x276b:  leave
083f7a6b +0x276c:  ret
083f7a6c +0x276d:  push   %ebp
083f7a6d +0x276e:  mov    %esp,%ebp
083f7a6f +0x2770:  mov    0x8(%ebp),%eax
083f7a72 +0x2773:  add    $0x4,%eax
083f7a75 +0x2776:  pop    %ebp
083f7a76 +0x2777:  ret
083f7a77 +0x2778:  nop
083f7a78 +0x2779:  push   %ebp
083f7a79 +0x277a:  mov    %esp,%ebp
083f7a7b +0x277c:  push   %ebx
083f7a7c +0x277d:  sub    $0x14,%esp
083f7a7f +0x2780:  mov    0x8(%ebp),%ebx
083f7a82 +0x2783:  jmp    083f7ad0 <+0x27d1>
083f7a84 +0x2785:  mov    0x10(%ebp),%eax
083f7a87 +0x2788:  mov    %eax,(%esp)
083f7a8a +0x278b:  call   083f8b2f <+0x3830>
083f7a8f +0x2790:  mov    0xc(%ebp),%edx
083f7a92 +0x2793:  mov    0x18(%ebp),%ecx
083f7a95 +0x2796:  mov    %ecx,0x8(%esp)
083f7a99 +0x279a:  mov    %eax,0x4(%esp)
083f7a9d +0x279e:  mov    %edx,(%esp)
083f7aa0 +0x27a1:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f7aa5 +0x27a6:  xor    $0x1,%eax
083f7aa8 +0x27a9:  test   %al,%al
083f7aaa +0x27ab:  je     083f7ac2 <+0x27c3>
083f7aac +0x27ad:  mov    0x10(%ebp),%eax
083f7aaf +0x27b0:  mov    %eax,0x14(%ebp)
083f7ab2 +0x27b3:  mov    0x10(%ebp),%eax
083f7ab5 +0x27b6:  mov    %eax,(%esp)
083f7ab8 +0x27b9:  call   083f693c <+0x163d>
083f7abd +0x27be:  mov    %eax,0x10(%ebp)
083f7ac0 +0x27c1:  jmp    083f7ad0 <+0x27d1>
083f7ac2 +0x27c3:  mov    0x10(%ebp),%eax
083f7ac5 +0x27c6:  mov    %eax,(%esp)
083f7ac8 +0x27c9:  call   083f6931 <+0x1632>
083f7acd +0x27ce:  mov    %eax,0x10(%ebp)
083f7ad0 +0x27d1:  cmpl   $0x0,0x10(%ebp)
083f7ad4 +0x27d5:  setne  %al
083f7ad7 +0x27d8:  test   %al,%al
083f7ad9 +0x27da:  jne    083f7a84 <+0x2785>
083f7adb +0x27dc:  mov    0x14(%ebp),%eax
083f7ade +0x27df:  mov    %eax,0x4(%esp)
083f7ae2 +0x27e3:  mov    %ebx,(%esp)
083f7ae5 +0x27e6:  call   083f697c <+0x167d>
083f7aea +0x27eb:  mov    %ebx,%eax
083f7aec +0x27ed:  add    $0x14,%esp
083f7aef +0x27f0:  pop    %ebx
083f7af0 +0x27f1:  pop    %ebp
083f7af1 +0x27f2:  ret    $0x4
083f7af4 +0x27f5:  push   %ebp
083f7af5 +0x27f6:  mov    %esp,%ebp
083f7af7 +0x27f8:  sub    $0x18,%esp
083f7afa +0x27fb:  mov    0x8(%ebp),%eax
083f7afd +0x27fe:  mov    %eax,(%esp)
083f7b00 +0x2801:  call   083f8b52 <+0x3853>
083f7b05 +0x2806:  mov    0x8(%ebp),%eax
083f7b08 +0x2809:  movl   $0x0,0x4(%eax)
083f7b0f +0x2810:  mov    0x8(%ebp),%eax
083f7b12 +0x2813:  movl   $0x0,0x8(%eax)
083f7b19 +0x281a:  mov    0x8(%ebp),%eax
083f7b1c +0x281d:  movl   $0x0,0xc(%eax)
083f7b23 +0x2824:  mov    0x8(%ebp),%eax
083f7b26 +0x2827:  movl   $0x0,0x10(%eax)
083f7b2d +0x282e:  mov    0x8(%ebp),%eax
083f7b30 +0x2831:  movl   $0x0,0x14(%eax)
083f7b37 +0x2838:  mov    0x8(%ebp),%eax
083f7b3a +0x283b:  mov    %eax,(%esp)
083f7b3d +0x283e:  call   083f8b66 <+0x3867>
083f7b42 +0x2843:  leave
083f7b43 +0x2844:  ret
083f7b44 +0x2845:  push   %ebp
083f7b45 +0x2846:  mov    %esp,%ebp
083f7b47 +0x2848:  pop    %ebp
083f7b48 +0x2849:  ret
083f7b49 +0x284a:  push   %ebp
083f7b4a +0x284b:  mov    %esp,%ebp
083f7b4c +0x284d:  mov    0x8(%ebp),%eax
083f7b4f +0x2850:  mov    0xc(%eax),%eax
083f7b52 +0x2853:  pop    %ebp
083f7b53 +0x2854:  ret
083f7b54 +0x2855:  push   %ebp
083f7b55 +0x2856:  mov    %esp,%ebp
083f7b57 +0x2858:  mov    0x8(%ebp),%eax
083f7b5a +0x285b:  mov    0x8(%eax),%eax
083f7b5d +0x285e:  pop    %ebp
083f7b5e +0x285f:  ret
083f7b5f +0x2860:  nop
083f7b60 +0x2861:  push   %ebp
083f7b61 +0x2862:  mov    %esp,%ebp
083f7b63 +0x2864:  sub    $0x18,%esp
083f7b66 +0x2867:  mov    0x8(%ebp),%eax
083f7b69 +0x286a:  mov    %eax,(%esp)
083f7b6c +0x286d:  call   083f8b98 <+0x3899>
083f7b71 +0x2872:  mov    0xc(%ebp),%edx
083f7b74 +0x2875:  mov    %edx,0x4(%esp)
083f7b78 +0x2879:  mov    %eax,(%esp)
083f7b7b +0x287c:  call   083f8ba6 <+0x38a7>
083f7b80 +0x2881:  mov    0xc(%ebp),%eax
083f7b83 +0x2884:  mov    %eax,0x4(%esp)
083f7b87 +0x2888:  mov    0x8(%ebp),%eax
083f7b8a +0x288b:  mov    %eax,(%esp)
083f7b8d +0x288e:  call   083f8bba <+0x38bb>
083f7b92 +0x2893:  leave
083f7b93 +0x2894:  ret
083f7b94 +0x2895:  push   %ebp
083f7b95 +0x2896:  mov    %esp,%ebp
083f7b97 +0x2898:  mov    0x8(%ebp),%eax
083f7b9a +0x289b:  pop    %ebp
083f7b9b +0x289c:  ret
083f7b9c +0x289d:  push   %ebp
083f7b9d +0x289e:  mov    %esp,%ebp
083f7b9f +0x28a0:  push   %ebx
083f7ba0 +0x28a1:  sub    $0x14,%esp
083f7ba3 +0x28a4:  mov    0xc(%ebp),%eax
083f7ba6 +0x28a7:  mov    %eax,(%esp)
083f7ba9 +0x28aa:  call   083f8b98 <+0x3899>
083f7bae +0x28af:  mov    0xc(%ebp),%ecx
083f7bb1 +0x28b2:  mov    0x8(%ebp),%edx
083f7bb4 +0x28b5:  mov    %eax,0x8(%esp)
083f7bb8 +0x28b9:  mov    %ecx,0x4(%esp)
083f7bbc +0x28bd:  mov    %edx,(%esp)
083f7bbf +0x28c0:  call   083f8bdc <+0x38dd>
083f7bc4 +0x28c5:  mov    0xc(%ebp),%eax
083f7bc7 +0x28c8:  mov    %eax,(%esp)
083f7bca +0x28cb:  call   083f8c34 <+0x3935>
083f7bcf +0x28d0:  mov    (%eax),%eax
083f7bd1 +0x28d2:  test   %eax,%eax
083f7bd3 +0x28d4:  setne  %al
083f7bd6 +0x28d7:  test   %al,%al
083f7bd8 +0x28d9:  je     083f7ca8 <+0x29a9>
083f7bde +0x28df:  mov    0x8(%ebp),%eax
083f7be1 +0x28e2:  mov    %eax,(%esp)
083f7be4 +0x28e5:  call   083f8c34 <+0x3935>
083f7be9 +0x28ea:  mov    %eax,%ebx
083f7beb +0x28ec:  mov    0xc(%ebp),%eax
083f7bee +0x28ef:  mov    %eax,(%esp)
083f7bf1 +0x28f2:  call   083f8c34 <+0x3935>
083f7bf6 +0x28f7:  mov    (%eax),%eax
083f7bf8 +0x28f9:  mov    %eax,(%ebx)
083f7bfa +0x28fb:  mov    0x8(%ebp),%eax
083f7bfd +0x28fe:  mov    %eax,(%esp)
083f7c00 +0x2901:  call   083f833c <+0x303d>
083f7c05 +0x2906:  mov    %eax,%ebx
083f7c07 +0x2908:  mov    0xc(%ebp),%eax
083f7c0a +0x290b:  mov    %eax,(%esp)
083f7c0d +0x290e:  call   083f833c <+0x303d>
083f7c12 +0x2913:  mov    (%eax),%eax
083f7c14 +0x2915:  mov    %eax,(%ebx)
083f7c16 +0x2917:  mov    0x8(%ebp),%eax
083f7c19 +0x291a:  mov    %eax,(%esp)
083f7c1c +0x291d:  call   083f8062 <+0x2d63>
083f7c21 +0x2922:  mov    %eax,%ebx
083f7c23 +0x2924:  mov    0xc(%ebp),%eax
083f7c26 +0x2927:  mov    %eax,(%esp)
083f7c29 +0x292a:  call   083f8062 <+0x2d63>
083f7c2e +0x292f:  mov    (%eax),%eax
083f7c30 +0x2931:  mov    %eax,(%ebx)
083f7c32 +0x2933:  mov    0x8(%ebp),%eax
083f7c35 +0x2936:  mov    %eax,(%esp)
083f7c38 +0x2939:  call   083f8c34 <+0x3935>
083f7c3d +0x293e:  mov    (%eax),%ebx
083f7c3f +0x2940:  mov    0x8(%ebp),%eax
083f7c42 +0x2943:  mov    %eax,(%esp)
083f7c45 +0x2946:  call   083f7fda <+0x2cdb>
083f7c4a +0x294b:  mov    %eax,0x4(%ebx)
083f7c4d +0x294e:  mov    0xc(%ebp),%eax
083f7c50 +0x2951:  mov    %eax,(%esp)
083f7c53 +0x2954:  call   083f8c34 <+0x3935>
083f7c58 +0x2959:  movl   $0x0,(%eax)
083f7c5e +0x295f:  mov    0xc(%ebp),%eax
083f7c61 +0x2962:  mov    %eax,(%esp)
083f7c64 +0x2965:  call   083f833c <+0x303d>
083f7c69 +0x296a:  mov    %eax,%ebx
083f7c6b +0x296c:  mov    0xc(%ebp),%eax
083f7c6e +0x296f:  mov    %eax,(%esp)
083f7c71 +0x2972:  call   083f7fda <+0x2cdb>
083f7c76 +0x2977:  mov    %eax,(%ebx)
083f7c78 +0x2979:  mov    0xc(%ebp),%eax
083f7c7b +0x297c:  mov    %eax,(%esp)
083f7c7e +0x297f:  call   083f8062 <+0x2d63>
083f7c83 +0x2984:  mov    %eax,%ebx
083f7c85 +0x2986:  mov    0xc(%ebp),%eax
083f7c88 +0x2989:  mov    %eax,(%esp)
083f7c8b +0x298c:  call   083f7fda <+0x2cdb>
083f7c90 +0x2991:  mov    %eax,(%ebx)
083f7c92 +0x2993:  mov    0xc(%ebp),%eax
083f7c95 +0x2996:  mov    0x14(%eax),%edx
083f7c98 +0x2999:  mov    0x8(%ebp),%eax
083f7c9b +0x299c:  mov    %edx,0x14(%eax)
083f7c9e +0x299f:  mov    0xc(%ebp),%eax
083f7ca1 +0x29a2:  movl   $0x0,0x14(%eax)
083f7ca8 +0x29a9:  add    $0x14,%esp
083f7cab +0x29ac:  pop    %ebx
083f7cac +0x29ad:  pop    %ebp
083f7cad +0x29ae:  ret
083f7cae +0x29af:  push   %ebp
083f7caf +0x29b0:  mov    %esp,%ebp
083f7cb1 +0x29b2:  mov    0x8(%ebp),%eax
083f7cb4 +0x29b5:  add    $0x10,%eax
083f7cb7 +0x29b8:  pop    %ebp
083f7cb8 +0x29b9:  ret
083f7cb9 +0x29ba:  push   %ebp
083f7cba +0x29bb:  mov    %esp,%ebp
083f7cbc +0x29bd:  sub    $0x28,%esp
083f7cbf +0x29c0:  mov    0x8(%ebp),%eax
083f7cc2 +0x29c3:  mov    %eax,(%esp)
083f7cc5 +0x29c6:  call   083f8c3f <+0x3940>
083f7cca +0x29cb:  mov    %eax,0x4(%esp)
083f7cce +0x29cf:  lea    -0x9(%ebp),%eax
083f7cd1 +0x29d2:  mov    %eax,(%esp)
083f7cd4 +0x29d5:  call   083f7cdc <+0x29dd>
083f7cd9 +0x29da:  leave
083f7cda +0x29db:  ret
083f7cdb +0x29dc:  nop
083f7cdc +0x29dd:  push   %ebp
083f7cdd +0x29de:  mov    %esp,%ebp
083f7cdf +0x29e0:  mov    0xc(%ebp),%eax
083f7ce2 +0x29e3:  pop    %ebp
083f7ce3 +0x29e4:  ret
083f7ce4 +0x29e5:  push   %ebp
083f7ce5 +0x29e6:  mov    %esp,%ebp
083f7ce7 +0x29e8:  mov    0x8(%ebp),%eax
083f7cea +0x29eb:  mov    0x14(%eax),%eax
083f7ced +0x29ee:  pop    %ebp
083f7cee +0x29ef:  ret
083f7cef +0x29f0:  nop
083f7cf0 +0x29f1:  push   %ebp
083f7cf1 +0x29f2:  mov    %esp,%ebp
083f7cf3 +0x29f4:  push   %esi
083f7cf4 +0x29f5:  push   %ebx
083f7cf5 +0x29f6:  sub    $0x20,%esp
083f7cf8 +0x29f9:  mov    0x8(%ebp),%esi
083f7cfb +0x29fc:  cmpl   $0x0,0x10(%ebp)
083f7cff +0x2a00:  jne    083f7d47 <+0x2a48>
083f7d01 +0x2a02:  mov    0xc(%ebp),%eax
083f7d04 +0x2a05:  mov    %eax,(%esp)
083f7d07 +0x2a08:  call   083f7a6c <+0x276d>
083f7d0c +0x2a0d:  cmp    0x14(%ebp),%eax
083f7d0f +0x2a10:  je     083f7d47 <+0x2a48>
083f7d11 +0x2a12:  mov    0x14(%ebp),%eax
083f7d14 +0x2a15:  mov    %eax,(%esp)
083f7d17 +0x2a18:  call   083f7cb9 <+0x29ba>
083f7d1c +0x2a1d:  mov    %eax,%ebx
083f7d1e +0x2a1f:  mov    0x18(%ebp),%eax
083f7d21 +0x2a22:  mov    %eax,0x4(%esp)
083f7d25 +0x2a26:  lea    -0xe(%ebp),%eax
083f7d28 +0x2a29:  mov    %eax,(%esp)
083f7d2b +0x2a2c:  call   083f7cdc <+0x29dd>
083f7d30 +0x2a31:  mov    0xc(%ebp),%edx
083f7d33 +0x2a34:  mov    %ebx,0x8(%esp)
083f7d37 +0x2a38:  mov    %eax,0x4(%esp)
083f7d3b +0x2a3c:  mov    %edx,(%esp)
083f7d3e +0x2a3f:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f7d43 +0x2a44:  test   %al,%al
083f7d45 +0x2a46:  je     083f7d4e <+0x2a4f>
083f7d47 +0x2a48:  mov    $0x1,%eax
083f7d4c +0x2a4d:  jmp    083f7d53 <+0x2a54>
083f7d4e +0x2a4f:  mov    $0x0,%eax
083f7d53 +0x2a54:  mov    %al,-0xd(%ebp)
083f7d56 +0x2a57:  mov    0x18(%ebp),%eax
083f7d59 +0x2a5a:  mov    %eax,0x4(%esp)
083f7d5d +0x2a5e:  mov    0xc(%ebp),%eax
083f7d60 +0x2a61:  mov    %eax,(%esp)
083f7d63 +0x2a64:  call   083f8c4a <+0x394b>
083f7d68 +0x2a69:  mov    %eax,-0xc(%ebp)
083f7d6b +0x2a6c:  mov    0xc(%ebp),%eax
083f7d6e +0x2a6f:  lea    0x4(%eax),%ecx
083f7d71 +0x2a72:  mov    -0xc(%ebp),%edx
083f7d74 +0x2a75:  movzbl -0xd(%ebp),%eax
083f7d78 +0x2a79:  mov    %ecx,0xc(%esp)
083f7d7c +0x2a7d:  mov    0x14(%ebp),%ecx
083f7d7f +0x2a80:  mov    %ecx,0x8(%esp)
083f7d83 +0x2a84:  mov    %edx,0x4(%esp)
083f7d87 +0x2a88:  mov    %eax,(%esp)
083f7d8a +0x2a8b:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
083f7d8f +0x2a90:  mov    0xc(%ebp),%eax
083f7d92 +0x2a93:  mov    0x14(%eax),%eax
083f7d95 +0x2a96:  lea    0x1(%eax),%edx
083f7d98 +0x2a99:  mov    0xc(%ebp),%eax
083f7d9b +0x2a9c:  mov    %edx,0x14(%eax)
083f7d9e +0x2a9f:  mov    -0xc(%ebp),%eax
083f7da1 +0x2aa2:  mov    %eax,0x4(%esp)
083f7da5 +0x2aa6:  mov    %esi,(%esp)
083f7da8 +0x2aa9:  call   083f697c <+0x167d>
083f7dad +0x2aae:  mov    %esi,%eax
083f7daf +0x2ab0:  add    $0x20,%esp
083f7db2 +0x2ab3:  pop    %ebx
083f7db3 +0x2ab4:  pop    %esi
083f7db4 +0x2ab5:  pop    %ebp
083f7db5 +0x2ab6:  ret    $0x4
083f7db8 +0x2ab9:  push   %ebp
083f7db9 +0x2aba:  mov    %esp,%ebp
083f7dbb +0x2abc:  push   %esi
083f7dbc +0x2abd:  push   %ebx
083f7dbd +0x2abe:  sub    $0x50,%esp
083f7dc0 +0x2ac1:  mov    0x8(%ebp),%ebx
083f7dc3 +0x2ac4:  mov    0xc(%ebp),%eax
083f7dc6 +0x2ac7:  mov    %eax,(%esp)
083f7dc9 +0x2aca:  call   083f5fba <+0xcbb>
083f7dce +0x2acf:  mov    %eax,-0x14(%ebp)
083f7dd1 +0x2ad2:  mov    0xc(%ebp),%eax
083f7dd4 +0x2ad5:  mov    %eax,(%esp)
083f7dd7 +0x2ad8:  call   083f7a6c <+0x276d>
083f7ddc +0x2add:  mov    %eax,-0x10(%ebp)
083f7ddf +0x2ae0:  movb   $0x1,-0x9(%ebp)
083f7de3 +0x2ae4:  jmp    083f7e41 <+0x2b42>
083f7de5 +0x2ae6:  mov    -0x14(%ebp),%eax
083f7de8 +0x2ae9:  mov    %eax,-0x10(%ebp)
083f7deb +0x2aec:  mov    -0x14(%ebp),%eax
083f7dee +0x2aef:  mov    %eax,(%esp)
083f7df1 +0x2af2:  call   083f8b2f <+0x3830>
083f7df6 +0x2af7:  mov    %eax,%esi
083f7df8 +0x2af9:  mov    0x10(%ebp),%eax
083f7dfb +0x2afc:  mov    %eax,0x4(%esp)
083f7dff +0x2b00:  lea    -0x2d(%ebp),%eax
083f7e02 +0x2b03:  mov    %eax,(%esp)
083f7e05 +0x2b06:  call   083f7cdc <+0x29dd>
083f7e0a +0x2b0b:  mov    0xc(%ebp),%edx
083f7e0d +0x2b0e:  mov    %esi,0x8(%esp)
083f7e11 +0x2b12:  mov    %eax,0x4(%esp)
083f7e15 +0x2b16:  mov    %edx,(%esp)
083f7e18 +0x2b19:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f7e1d +0x2b1e:  mov    %al,-0x9(%ebp)
083f7e20 +0x2b21:  cmpb   $0x0,-0x9(%ebp)
083f7e24 +0x2b25:  je     083f7e33 <+0x2b34>
083f7e26 +0x2b27:  mov    -0x14(%ebp),%eax
083f7e29 +0x2b2a:  mov    %eax,(%esp)
083f7e2c +0x2b2d:  call   083f693c <+0x163d>
083f7e31 +0x2b32:  jmp    083f7e3e <+0x2b3f>
083f7e33 +0x2b34:  mov    -0x14(%ebp),%eax
083f7e36 +0x2b37:  mov    %eax,(%esp)
083f7e39 +0x2b3a:  call   083f6931 <+0x1632>
083f7e3e +0x2b3f:  mov    %eax,-0x14(%ebp)
083f7e41 +0x2b42:  cmpl   $0x0,-0x14(%ebp)
083f7e45 +0x2b46:  setne  %al
083f7e48 +0x2b49:  test   %al,%al
083f7e4a +0x2b4b:  jne    083f7de5 <+0x2ae6>
083f7e4c +0x2b4d:  mov    -0x10(%ebp),%eax
083f7e4f +0x2b50:  mov    %eax,0x4(%esp)
083f7e53 +0x2b54:  lea    -0x34(%ebp),%eax
083f7e56 +0x2b57:  mov    %eax,(%esp)
083f7e59 +0x2b5a:  call   083f697c <+0x167d>
083f7e5e +0x2b5f:  cmpb   $0x0,-0x9(%ebp)
083f7e62 +0x2b63:  je     083f7ee3 <+0x2be4>
083f7e64 +0x2b65:  lea    -0x2c(%ebp),%eax
083f7e67 +0x2b68:  mov    0xc(%ebp),%edx
083f7e6a +0x2b6b:  mov    %edx,0x4(%esp)
083f7e6e +0x2b6f:  mov    %eax,(%esp)
083f7e71 +0x2b72:  call   083f5fc6 <+0xcc7>
083f7e76 +0x2b77:  sub    $0x4,%esp
083f7e79 +0x2b7a:  lea    -0x2c(%ebp),%eax
083f7e7c +0x2b7d:  mov    %eax,0x4(%esp)
083f7e80 +0x2b81:  lea    -0x34(%ebp),%eax
083f7e83 +0x2b84:  mov    %eax,(%esp)
083f7e86 +0x2b87:  call   083f60be <+0xdbf>
083f7e8b +0x2b8c:  test   %al,%al
083f7e8d +0x2b8e:  je     083f7ed8 <+0x2bd9>
083f7e8f +0x2b90:  movb   $0x1,-0x25(%ebp)
083f7e93 +0x2b94:  mov    -0x10(%ebp),%ecx
083f7e96 +0x2b97:  mov    -0x14(%ebp),%edx
083f7e99 +0x2b9a:  lea    -0x24(%ebp),%eax
083f7e9c +0x2b9d:  mov    0x10(%ebp),%esi
083f7e9f +0x2ba0:  mov    %esi,0x10(%esp)
083f7ea3 +0x2ba4:  mov    %ecx,0xc(%esp)
083f7ea7 +0x2ba8:  mov    %edx,0x8(%esp)
083f7eab +0x2bac:  mov    0xc(%ebp),%edx
083f7eae +0x2baf:  mov    %edx,0x4(%esp)
083f7eb2 +0x2bb3:  mov    %eax,(%esp)
083f7eb5 +0x2bb6:  call   083f7cf0 <+0x29f1>
083f7eba +0x2bbb:  sub    $0x4,%esp
083f7ebd +0x2bbe:  lea    -0x25(%ebp),%eax
083f7ec0 +0x2bc1:  mov    %eax,0x8(%esp)
083f7ec4 +0x2bc5:  lea    -0x24(%ebp),%eax
083f7ec7 +0x2bc8:  mov    %eax,0x4(%esp)
083f7ecb +0x2bcc:  mov    %ebx,(%esp)
083f7ece +0x2bcf:  call   083f8ccc <+0x39cd>
083f7ed3 +0x2bd4:  jmp    083f7f79 <+0x2c7a>
083f7ed8 +0x2bd9:  lea    -0x34(%ebp),%eax
083f7edb +0x2bdc:  mov    %eax,(%esp)
083f7ede +0x2bdf:  call   083f8cfa <+0x39fb>
083f7ee3 +0x2be4:  mov    0x10(%ebp),%eax
083f7ee6 +0x2be7:  mov    %eax,0x4(%esp)
083f7eea +0x2beb:  lea    -0x1e(%ebp),%eax
083f7eed +0x2bee:  mov    %eax,(%esp)
083f7ef0 +0x2bf1:  call   083f7cdc <+0x29dd>
083f7ef5 +0x2bf6:  mov    %eax,%esi
083f7ef7 +0x2bf8:  mov    -0x34(%ebp),%eax
083f7efa +0x2bfb:  mov    %eax,(%esp)
083f7efd +0x2bfe:  call   083f7cb9 <+0x29ba>
083f7f02 +0x2c03:  mov    0xc(%ebp),%edx
083f7f05 +0x2c06:  mov    %esi,0x8(%esp)
083f7f09 +0x2c0a:  mov    %eax,0x4(%esp)
083f7f0d +0x2c0e:  mov    %edx,(%esp)
083f7f10 +0x2c11:  call   082bd406 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xf301>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xf301
083f7f15 +0x2c16:  test   %al,%al
083f7f17 +0x2c18:  je     083f7f5f <+0x2c60>
083f7f19 +0x2c1a:  movb   $0x1,-0x1d(%ebp)
083f7f1d +0x2c1e:  mov    -0x10(%ebp),%ecx
083f7f20 +0x2c21:  mov    -0x14(%ebp),%edx
083f7f23 +0x2c24:  lea    -0x1c(%ebp),%eax
083f7f26 +0x2c27:  mov    0x10(%ebp),%esi
083f7f29 +0x2c2a:  mov    %esi,0x10(%esp)
083f7f2d +0x2c2e:  mov    %ecx,0xc(%esp)
083f7f31 +0x2c32:  mov    %edx,0x8(%esp)
083f7f35 +0x2c36:  mov    0xc(%ebp),%edx
083f7f38 +0x2c39:  mov    %edx,0x4(%esp)
083f7f3c +0x2c3d:  mov    %eax,(%esp)
083f7f3f +0x2c40:  call   083f7cf0 <+0x29f1>
083f7f44 +0x2c45:  sub    $0x4,%esp
083f7f47 +0x2c48:  lea    -0x1d(%ebp),%eax
083f7f4a +0x2c4b:  mov    %eax,0x8(%esp)
083f7f4e +0x2c4f:  lea    -0x1c(%ebp),%eax
083f7f51 +0x2c52:  mov    %eax,0x4(%esp)
083f7f55 +0x2c56:  mov    %ebx,(%esp)
083f7f58 +0x2c59:  call   083f8ccc <+0x39cd>
083f7f5d +0x2c5e:  jmp    083f7f79 <+0x2c7a>
083f7f5f +0x2c60:  movb   $0x0,-0x15(%ebp)
083f7f63 +0x2c64:  lea    -0x15(%ebp),%eax
083f7f66 +0x2c67:  mov    %eax,0x8(%esp)
083f7f6a +0x2c6b:  lea    -0x34(%ebp),%eax
083f7f6d +0x2c6e:  mov    %eax,0x4(%esp)
083f7f71 +0x2c72:  mov    %ebx,(%esp)
083f7f74 +0x2c75:  call   083f8d18 <+0x3a19>
083f7f79 +0x2c7a:  mov    %ebx,%eax
083f7f7b +0x2c7c:  lea    -0x8(%ebp),%esp
083f7f7e +0x2c7f:  add    $0x0,%esp
083f7f81 +0x2c82:  pop    %ebx
083f7f82 +0x2c83:  pop    %esi
083f7f83 +0x2c84:  pop    %ebp
083f7f84 +0x2c85:  ret    $0x4
083f7f87 +0x2c88:  nop
083f7f88 +0x2c89:  push   %ebp
083f7f89 +0x2c8a:  mov    %esp,%ebp
083f7f8b +0x2c8c:  mov    0x8(%ebp),%eax
083f7f8e +0x2c8f:  add    $0xc,%eax
083f7f91 +0x2c92:  pop    %ebp
083f7f92 +0x2c93:  ret
083f7f93 +0x2c94:  nop
083f7f94 +0x2c95:  push   %ebp
083f7f95 +0x2c96:  mov    %esp,%ebp
083f7f97 +0x2c98:  sub    $0x18,%esp
083f7f9a +0x2c9b:  mov    0x8(%ebp),%eax
083f7f9d +0x2c9e:  mov    (%eax),%eax
083f7f9f +0x2ca0:  mov    %eax,(%esp)
083f7fa2 +0x2ca3:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
083f7fa7 +0x2ca8:  mov    0x8(%ebp),%edx
083f7faa +0x2cab:  mov    %eax,(%edx)
083f7fac +0x2cad:  mov    0x8(%ebp),%eax
083f7faf +0x2cb0:  leave
083f7fb0 +0x2cb1:  ret
083f7fb1 +0x2cb2:  push   %ebp
083f7fb2 +0x2cb3:  mov    %esp,%ebp
083f7fb4 +0x2cb5:  mov    0x8(%ebp),%eax
083f7fb7 +0x2cb8:  mov    0xc(%eax),%eax
083f7fba +0x2cbb:  pop    %ebp
083f7fbb +0x2cbc:  ret
083f7fbc +0x2cbd:  push   %ebp
083f7fbd +0x2cbe:  mov    %esp,%ebp
083f7fbf +0x2cc0:  sub    $0x18,%esp
083f7fc2 +0x2cc3:  mov    0x8(%ebp),%eax
083f7fc5 +0x2cc6:  mov    (%eax),%eax
083f7fc7 +0x2cc8:  mov    %eax,(%esp)
083f7fca +0x2ccb:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
083f7fcf +0x2cd0:  mov    0x8(%ebp),%edx
083f7fd2 +0x2cd3:  mov    %eax,(%edx)
083f7fd4 +0x2cd5:  mov    0x8(%ebp),%eax
083f7fd7 +0x2cd8:  leave
083f7fd8 +0x2cd9:  ret
083f7fd9 +0x2cda:  nop
083f7fda +0x2cdb:  push   %ebp
083f7fdb +0x2cdc:  mov    %esp,%ebp
083f7fdd +0x2cde:  mov    0x8(%ebp),%eax
083f7fe0 +0x2ce1:  add    $0x4,%eax
083f7fe3 +0x2ce4:  pop    %ebp
083f7fe4 +0x2ce5:  ret
083f7fe5 +0x2ce6:  nop
083f7fe6 +0x2ce7:  push   %ebp
083f7fe7 +0x2ce8:  mov    %esp,%ebp
083f7fe9 +0x2cea:  push   %ebx
083f7fea +0x2ceb:  sub    $0x14,%esp
083f7fed +0x2cee:  mov    0x8(%ebp),%ebx
083f7ff0 +0x2cf1:  jmp    083f803e <+0x2d3f>
083f7ff2 +0x2cf3:  mov    0x10(%ebp),%eax
083f7ff5 +0x2cf6:  mov    %eax,(%esp)
083f7ff8 +0x2cf9:  call   083f8d46 <+0x3a47>
083f7ffd +0x2cfe:  mov    0xc(%ebp),%edx
083f8000 +0x2d01:  mov    0x18(%ebp),%ecx
083f8003 +0x2d04:  mov    %ecx,0x8(%esp)
083f8007 +0x2d08:  mov    %eax,0x4(%esp)
083f800b +0x2d0c:  mov    %edx,(%esp)
083f800e +0x2d0f:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f8013 +0x2d14:  xor    $0x1,%eax
083f8016 +0x2d17:  test   %al,%al
083f8018 +0x2d19:  je     083f8030 <+0x2d31>
083f801a +0x2d1b:  mov    0x10(%ebp),%eax
083f801d +0x2d1e:  mov    %eax,0x14(%ebp)
083f8020 +0x2d21:  mov    0x10(%ebp),%eax
083f8023 +0x2d24:  mov    %eax,(%esp)
083f8026 +0x2d27:  call   083f7b54 <+0x2855>
083f802b +0x2d2c:  mov    %eax,0x10(%ebp)
083f802e +0x2d2f:  jmp    083f803e <+0x2d3f>
083f8030 +0x2d31:  mov    0x10(%ebp),%eax
083f8033 +0x2d34:  mov    %eax,(%esp)
083f8036 +0x2d37:  call   083f7b49 <+0x284a>
083f803b +0x2d3c:  mov    %eax,0x10(%ebp)
083f803e +0x2d3f:  cmpl   $0x0,0x10(%ebp)
083f8042 +0x2d43:  setne  %al
083f8045 +0x2d46:  test   %al,%al
083f8047 +0x2d48:  jne    083f7ff2 <+0x2cf3>
083f8049 +0x2d4a:  mov    0x14(%ebp),%eax
083f804c +0x2d4d:  mov    %eax,0x4(%esp)
083f8050 +0x2d51:  mov    %ebx,(%esp)
083f8053 +0x2d54:  call   083f698a <+0x168b>
083f8058 +0x2d59:  mov    %ebx,%eax
083f805a +0x2d5b:  add    $0x14,%esp
083f805d +0x2d5e:  pop    %ebx
083f805e +0x2d5f:  pop    %ebp
083f805f +0x2d60:  ret    $0x4
083f8062 +0x2d63:  push   %ebp
083f8063 +0x2d64:  mov    %esp,%ebp
083f8065 +0x2d66:  mov    0x8(%ebp),%eax
083f8068 +0x2d69:  add    $0x10,%eax
083f806b +0x2d6c:  pop    %ebp
083f806c +0x2d6d:  ret
083f806d +0x2d6e:  push   %ebp
083f806e +0x2d6f:  mov    %esp,%ebp
083f8070 +0x2d71:  sub    $0x28,%esp
083f8073 +0x2d74:  mov    0x8(%ebp),%eax
083f8076 +0x2d77:  mov    %eax,(%esp)
083f8079 +0x2d7a:  call   083f8d68 <+0x3a69>
083f807e +0x2d7f:  mov    %eax,0x4(%esp)
083f8082 +0x2d83:  lea    -0x9(%ebp),%eax
083f8085 +0x2d86:  mov    %eax,(%esp)
083f8088 +0x2d89:  call   083f8090 <+0x2d91>
083f808d +0x2d8e:  leave
083f808e +0x2d8f:  ret
083f808f +0x2d90:  nop
083f8090 +0x2d91:  push   %ebp
083f8091 +0x2d92:  mov    %esp,%ebp
083f8093 +0x2d94:  mov    0xc(%ebp),%eax
083f8096 +0x2d97:  pop    %ebp
083f8097 +0x2d98:  ret
083f8098 +0x2d99:  push   %ebp
083f8099 +0x2d9a:  mov    %esp,%ebp
083f809b +0x2d9c:  mov    0x8(%ebp),%eax
083f809e +0x2d9f:  mov    0x14(%eax),%eax
083f80a1 +0x2da2:  pop    %ebp
083f80a2 +0x2da3:  ret
083f80a3 +0x2da4:  nop
083f80a4 +0x2da5:  push   %ebp
083f80a5 +0x2da6:  mov    %esp,%ebp
083f80a7 +0x2da8:  push   %esi
083f80a8 +0x2da9:  push   %ebx
083f80a9 +0x2daa:  sub    $0x20,%esp
083f80ac +0x2dad:  mov    0x8(%ebp),%esi
083f80af +0x2db0:  cmpl   $0x0,0x10(%ebp)
083f80b3 +0x2db4:  jne    083f80fb <+0x2dfc>
083f80b5 +0x2db6:  mov    0xc(%ebp),%eax
083f80b8 +0x2db9:  mov    %eax,(%esp)
083f80bb +0x2dbc:  call   083f7fda <+0x2cdb>
083f80c0 +0x2dc1:  cmp    0x14(%ebp),%eax
083f80c3 +0x2dc4:  je     083f80fb <+0x2dfc>
083f80c5 +0x2dc6:  mov    0x14(%ebp),%eax
083f80c8 +0x2dc9:  mov    %eax,(%esp)
083f80cb +0x2dcc:  call   083f806d <+0x2d6e>
083f80d0 +0x2dd1:  mov    %eax,%ebx
083f80d2 +0x2dd3:  mov    0x18(%ebp),%eax
083f80d5 +0x2dd6:  mov    %eax,0x4(%esp)
083f80d9 +0x2dda:  lea    -0xe(%ebp),%eax
083f80dc +0x2ddd:  mov    %eax,(%esp)
083f80df +0x2de0:  call   083f8090 <+0x2d91>
083f80e4 +0x2de5:  mov    0xc(%ebp),%edx
083f80e7 +0x2de8:  mov    %ebx,0x8(%esp)
083f80eb +0x2dec:  mov    %eax,0x4(%esp)
083f80ef +0x2df0:  mov    %edx,(%esp)
083f80f2 +0x2df3:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f80f7 +0x2df8:  test   %al,%al
083f80f9 +0x2dfa:  je     083f8102 <+0x2e03>
083f80fb +0x2dfc:  mov    $0x1,%eax
083f8100 +0x2e01:  jmp    083f8107 <+0x2e08>
083f8102 +0x2e03:  mov    $0x0,%eax
083f8107 +0x2e08:  mov    %al,-0xd(%ebp)
083f810a +0x2e0b:  mov    0x18(%ebp),%eax
083f810d +0x2e0e:  mov    %eax,0x4(%esp)
083f8111 +0x2e12:  mov    0xc(%ebp),%eax
083f8114 +0x2e15:  mov    %eax,(%esp)
083f8117 +0x2e18:  call   083f8d74 <+0x3a75>
083f811c +0x2e1d:  mov    %eax,-0xc(%ebp)
083f811f +0x2e20:  mov    0xc(%ebp),%eax
083f8122 +0x2e23:  lea    0x4(%eax),%ecx
083f8125 +0x2e26:  mov    -0xc(%ebp),%edx
083f8128 +0x2e29:  movzbl -0xd(%ebp),%eax
083f812c +0x2e2d:  mov    %ecx,0xc(%esp)
083f8130 +0x2e31:  mov    0x14(%ebp),%ecx
083f8133 +0x2e34:  mov    %ecx,0x8(%esp)
083f8137 +0x2e38:  mov    %edx,0x4(%esp)
083f813b +0x2e3c:  mov    %eax,(%esp)
083f813e +0x2e3f:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
083f8143 +0x2e44:  mov    0xc(%ebp),%eax
083f8146 +0x2e47:  mov    0x14(%eax),%eax
083f8149 +0x2e4a:  lea    0x1(%eax),%edx
083f814c +0x2e4d:  mov    0xc(%ebp),%eax
083f814f +0x2e50:  mov    %edx,0x14(%eax)
083f8152 +0x2e53:  mov    -0xc(%ebp),%eax
083f8155 +0x2e56:  mov    %eax,0x4(%esp)
083f8159 +0x2e5a:  mov    %esi,(%esp)
083f815c +0x2e5d:  call   083f698a <+0x168b>
083f8161 +0x2e62:  mov    %esi,%eax
083f8163 +0x2e64:  add    $0x20,%esp
083f8166 +0x2e67:  pop    %ebx
083f8167 +0x2e68:  pop    %esi
083f8168 +0x2e69:  pop    %ebp
083f8169 +0x2e6a:  ret    $0x4
083f816c +0x2e6d:  push   %ebp
083f816d +0x2e6e:  mov    %esp,%ebp
083f816f +0x2e70:  push   %esi
083f8170 +0x2e71:  push   %ebx
083f8171 +0x2e72:  sub    $0x50,%esp
083f8174 +0x2e75:  mov    0x8(%ebp),%ebx
083f8177 +0x2e78:  mov    0xc(%ebp),%eax
083f817a +0x2e7b:  mov    %eax,(%esp)
083f817d +0x2e7e:  call   083f6a72 <+0x1773>
083f8182 +0x2e83:  mov    %eax,-0x14(%ebp)
083f8185 +0x2e86:  mov    0xc(%ebp),%eax
083f8188 +0x2e89:  mov    %eax,(%esp)
083f818b +0x2e8c:  call   083f7fda <+0x2cdb>
083f8190 +0x2e91:  mov    %eax,-0x10(%ebp)
083f8193 +0x2e94:  movb   $0x1,-0x9(%ebp)
083f8197 +0x2e98:  jmp    083f81f5 <+0x2ef6>
083f8199 +0x2e9a:  mov    -0x14(%ebp),%eax
083f819c +0x2e9d:  mov    %eax,-0x10(%ebp)
083f819f +0x2ea0:  mov    -0x14(%ebp),%eax
083f81a2 +0x2ea3:  mov    %eax,(%esp)
083f81a5 +0x2ea6:  call   083f8d46 <+0x3a47>
083f81aa +0x2eab:  mov    %eax,%esi
083f81ac +0x2ead:  mov    0x10(%ebp),%eax
083f81af +0x2eb0:  mov    %eax,0x4(%esp)
083f81b3 +0x2eb4:  lea    -0x2d(%ebp),%eax
083f81b6 +0x2eb7:  mov    %eax,(%esp)
083f81b9 +0x2eba:  call   083f8090 <+0x2d91>
083f81be +0x2ebf:  mov    0xc(%ebp),%edx
083f81c1 +0x2ec2:  mov    %esi,0x8(%esp)
083f81c5 +0x2ec6:  mov    %eax,0x4(%esp)
083f81c9 +0x2eca:  mov    %edx,(%esp)
083f81cc +0x2ecd:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f81d1 +0x2ed2:  mov    %al,-0x9(%ebp)
083f81d4 +0x2ed5:  cmpb   $0x0,-0x9(%ebp)
083f81d8 +0x2ed9:  je     083f81e7 <+0x2ee8>
083f81da +0x2edb:  mov    -0x14(%ebp),%eax
083f81dd +0x2ede:  mov    %eax,(%esp)
083f81e0 +0x2ee1:  call   083f7b54 <+0x2855>
083f81e5 +0x2ee6:  jmp    083f81f2 <+0x2ef3>
083f81e7 +0x2ee8:  mov    -0x14(%ebp),%eax
083f81ea +0x2eeb:  mov    %eax,(%esp)
083f81ed +0x2eee:  call   083f7b49 <+0x284a>
083f81f2 +0x2ef3:  mov    %eax,-0x14(%ebp)
083f81f5 +0x2ef6:  cmpl   $0x0,-0x14(%ebp)
083f81f9 +0x2efa:  setne  %al
083f81fc +0x2efd:  test   %al,%al
083f81fe +0x2eff:  jne    083f8199 <+0x2e9a>
083f8200 +0x2f01:  mov    -0x10(%ebp),%eax
083f8203 +0x2f04:  mov    %eax,0x4(%esp)
083f8207 +0x2f08:  lea    -0x34(%ebp),%eax
083f820a +0x2f0b:  mov    %eax,(%esp)
083f820d +0x2f0e:  call   083f698a <+0x168b>
083f8212 +0x2f13:  cmpb   $0x0,-0x9(%ebp)
083f8216 +0x2f17:  je     083f8297 <+0x2f98>
083f8218 +0x2f19:  lea    -0x2c(%ebp),%eax
083f821b +0x2f1c:  mov    0xc(%ebp),%edx
083f821e +0x2f1f:  mov    %edx,0x4(%esp)
083f8222 +0x2f23:  mov    %eax,(%esp)
083f8225 +0x2f26:  call   083f6012 <+0xd13>
083f822a +0x2f2b:  sub    $0x4,%esp
083f822d +0x2f2e:  lea    -0x2c(%ebp),%eax
083f8230 +0x2f31:  mov    %eax,0x4(%esp)
083f8234 +0x2f35:  lea    -0x34(%ebp),%eax
083f8237 +0x2f38:  mov    %eax,(%esp)
083f823a +0x2f3b:  call   083f622a <+0xf2b>
083f823f +0x2f40:  test   %al,%al
083f8241 +0x2f42:  je     083f828c <+0x2f8d>
083f8243 +0x2f44:  movb   $0x1,-0x25(%ebp)
083f8247 +0x2f48:  mov    -0x10(%ebp),%ecx
083f824a +0x2f4b:  mov    -0x14(%ebp),%edx
083f824d +0x2f4e:  lea    -0x24(%ebp),%eax
083f8250 +0x2f51:  mov    0x10(%ebp),%esi
083f8253 +0x2f54:  mov    %esi,0x10(%esp)
083f8257 +0x2f58:  mov    %ecx,0xc(%esp)
083f825b +0x2f5c:  mov    %edx,0x8(%esp)
083f825f +0x2f60:  mov    0xc(%ebp),%edx
083f8262 +0x2f63:  mov    %edx,0x4(%esp)
083f8266 +0x2f67:  mov    %eax,(%esp)
083f8269 +0x2f6a:  call   083f80a4 <+0x2da5>
083f826e +0x2f6f:  sub    $0x4,%esp
083f8271 +0x2f72:  lea    -0x25(%ebp),%eax
083f8274 +0x2f75:  mov    %eax,0x8(%esp)
083f8278 +0x2f79:  lea    -0x24(%ebp),%eax
083f827b +0x2f7c:  mov    %eax,0x4(%esp)
083f827f +0x2f80:  mov    %ebx,(%esp)
083f8282 +0x2f83:  call   083f8df6 <+0x3af7>
083f8287 +0x2f88:  jmp    083f832d <+0x302e>
083f828c +0x2f8d:  lea    -0x34(%ebp),%eax
083f828f +0x2f90:  mov    %eax,(%esp)
083f8292 +0x2f93:  call   083f8e24 <+0x3b25>
083f8297 +0x2f98:  mov    0x10(%ebp),%eax
083f829a +0x2f9b:  mov    %eax,0x4(%esp)
083f829e +0x2f9f:  lea    -0x1e(%ebp),%eax
083f82a1 +0x2fa2:  mov    %eax,(%esp)
083f82a4 +0x2fa5:  call   083f8090 <+0x2d91>
083f82a9 +0x2faa:  mov    %eax,%esi
083f82ab +0x2fac:  mov    -0x34(%ebp),%eax
083f82ae +0x2faf:  mov    %eax,(%esp)
083f82b1 +0x2fb2:  call   083f806d <+0x2d6e>
083f82b6 +0x2fb7:  mov    0xc(%ebp),%edx
083f82b9 +0x2fba:  mov    %esi,0x8(%esp)
083f82bd +0x2fbe:  mov    %eax,0x4(%esp)
083f82c1 +0x2fc2:  mov    %edx,(%esp)
083f82c4 +0x2fc5:  call   080ed1a8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x48d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x48d
083f82c9 +0x2fca:  test   %al,%al
083f82cb +0x2fcc:  je     083f8313 <+0x3014>
083f82cd +0x2fce:  movb   $0x1,-0x1d(%ebp)
083f82d1 +0x2fd2:  mov    -0x10(%ebp),%ecx
083f82d4 +0x2fd5:  mov    -0x14(%ebp),%edx
083f82d7 +0x2fd8:  lea    -0x1c(%ebp),%eax
083f82da +0x2fdb:  mov    0x10(%ebp),%esi
083f82dd +0x2fde:  mov    %esi,0x10(%esp)
083f82e1 +0x2fe2:  mov    %ecx,0xc(%esp)
083f82e5 +0x2fe6:  mov    %edx,0x8(%esp)
083f82e9 +0x2fea:  mov    0xc(%ebp),%edx
083f82ec +0x2fed:  mov    %edx,0x4(%esp)
083f82f0 +0x2ff1:  mov    %eax,(%esp)
083f82f3 +0x2ff4:  call   083f80a4 <+0x2da5>
083f82f8 +0x2ff9:  sub    $0x4,%esp
083f82fb +0x2ffc:  lea    -0x1d(%ebp),%eax
083f82fe +0x2fff:  mov    %eax,0x8(%esp)
083f8302 +0x3003:  lea    -0x1c(%ebp),%eax
083f8305 +0x3006:  mov    %eax,0x4(%esp)
083f8309 +0x300a:  mov    %ebx,(%esp)
083f830c +0x300d:  call   083f8df6 <+0x3af7>
083f8311 +0x3012:  jmp    083f832d <+0x302e>
083f8313 +0x3014:  movb   $0x0,-0x15(%ebp)
083f8317 +0x3018:  lea    -0x15(%ebp),%eax
083f831a +0x301b:  mov    %eax,0x8(%esp)
083f831e +0x301f:  lea    -0x34(%ebp),%eax
083f8321 +0x3022:  mov    %eax,0x4(%esp)
083f8325 +0x3026:  mov    %ebx,(%esp)
083f8328 +0x3029:  call   083f8e42 <+0x3b43>
083f832d +0x302e:  mov    %ebx,%eax
083f832f +0x3030:  lea    -0x8(%ebp),%esp
083f8332 +0x3033:  add    $0x0,%esp
083f8335 +0x3036:  pop    %ebx
083f8336 +0x3037:  pop    %esi
083f8337 +0x3038:  pop    %ebp
083f8338 +0x3039:  ret    $0x4
083f833b +0x303c:  nop
083f833c +0x303d:  push   %ebp
083f833d +0x303e:  mov    %esp,%ebp
083f833f +0x3040:  mov    0x8(%ebp),%eax
083f8342 +0x3043:  add    $0xc,%eax
083f8345 +0x3046:  pop    %ebp
083f8346 +0x3047:  ret
083f8347 +0x3048:  nop
083f8348 +0x3049:  push   %ebp
083f8349 +0x304a:  mov    %esp,%ebp
083f834b +0x304c:  sub    $0x18,%esp
083f834e +0x304f:  mov    0x8(%ebp),%eax
083f8351 +0x3052:  mov    (%eax),%eax
083f8353 +0x3054:  mov    %eax,(%esp)
083f8356 +0x3057:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
083f835b +0x305c:  mov    0x8(%ebp),%edx
083f835e +0x305f:  mov    %eax,(%edx)
083f8360 +0x3061:  mov    0x8(%ebp),%eax
083f8363 +0x3064:  leave
083f8364 +0x3065:  ret
083f8365 +0x3066:  push   %ebp
083f8366 +0x3067:  mov    %esp,%ebp
083f8368 +0x3069:  mov    0x8(%ebp),%eax
083f836b +0x306c:  mov    0xc(%eax),%eax
083f836e +0x306f:  pop    %ebp
083f836f +0x3070:  ret
083f8370 +0x3071:  push   %ebp
083f8371 +0x3072:  mov    %esp,%ebp
083f8373 +0x3074:  sub    $0x18,%esp
083f8376 +0x3077:  mov    0x8(%ebp),%eax
083f8379 +0x307a:  mov    (%eax),%eax
083f837b +0x307c:  mov    %eax,(%esp)
083f837e +0x307f:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
083f8383 +0x3084:  mov    0x8(%ebp),%edx
083f8386 +0x3087:  mov    %eax,(%edx)
083f8388 +0x3089:  mov    0x8(%ebp),%eax
083f838b +0x308c:  leave
083f838c +0x308d:  ret
083f838d +0x308e:  nop
083f838e +0x308f:  push   %ebp
083f838f +0x3090:  mov    %esp,%ebp
083f8391 +0x3092:  sub    $0x18,%esp
083f8394 +0x3095:  mov    0xc(%ebp),%eax
083f8397 +0x3098:  mov    (%eax),%eax
083f8399 +0x309a:  mov    0x8(%ebp),%edx
083f839c +0x309d:  add    $0x1,%edx
083f839f +0x30a0:  mov    %eax,0x4(%esp)
083f83a3 +0x30a4:  mov    %edx,(%esp)
083f83a6 +0x30a7:  call   082a3bf6 <_GLOBAL__I__ZN4CLog5this_E+0x1d>  ; global constructors keyed to CLog::this_+0x1d
083f83ab +0x30ac:  mov    $0x0,%edx
083f83b0 +0x30b1:  divl   0x10(%ebp)
083f83b3 +0x30b4:  mov    %edx,%eax
083f83b5 +0x30b6:  leave
083f83b6 +0x30b7:  ret
083f83b7 +0x30b8:  nop
083f83b8 +0x30b9:  push   %ebp
083f83b9 +0x30ba:  mov    %esp,%ebp
083f83bb +0x30bc:  push   %esi
083f83bc +0x30bd:  push   %ebx
083f83bd +0x30be:  sub    $0x10,%esp
083f83c0 +0x30c1:  mov    0x8(%ebp),%ebx
083f83c3 +0x30c4:  mov    %ebx,%esi
083f83c5 +0x30c6:  mov    0xc(%ebp),%eax
083f83c8 +0x30c9:  mov    %eax,(%esp)
083f83cb +0x30cc:  call   083f8e70 <+0x3b71>
083f83d0 +0x30d1:  mov    %eax,0x4(%esp)
083f83d4 +0x30d5:  mov    %esi,(%esp)
083f83d7 +0x30d8:  call   083f8e78 <+0x3b79>
083f83dc +0x30dd:  mov    %ebx,%eax
083f83de +0x30df:  mov    %ebx,%eax
083f83e0 +0x30e1:  add    $0x10,%esp
083f83e3 +0x30e4:  pop    %ebx
083f83e4 +0x30e5:  pop    %esi
083f83e5 +0x30e6:  pop    %ebp
083f83e6 +0x30e7:  ret    $0x4
083f83e9 +0x30ea:  nop
083f83ea +0x30eb:  push   %ebp
083f83eb +0x30ec:  mov    %esp,%ebp
083f83ed +0x30ee:  push   %esi
083f83ee +0x30ef:  push   %ebx
083f83ef +0x30f0:  sub    $0x10,%esp
083f83f2 +0x30f3:  mov    0x8(%ebp),%eax
083f83f5 +0x30f6:  mov    0x14(%ebp),%edx
083f83f8 +0x30f9:  mov    %edx,0x8(%esp)
083f83fc +0x30fd:  mov    0xc(%ebp),%edx
083f83ff +0x3100:  mov    %edx,0x4(%esp)
083f8403 +0x3104:  mov    %eax,(%esp)
083f8406 +0x3107:  call   083f8e92 <+0x3b93>
083f840b +0x310c:  mov    0x10(%ebp),%eax
083f840e +0x310f:  mov    %eax,0x8(%esp)
083f8412 +0x3113:  mov    0xc(%ebp),%eax
083f8415 +0x3116:  mov    %eax,0x4(%esp)
083f8419 +0x311a:  mov    0x8(%ebp),%eax
083f841c +0x311d:  mov    %eax,(%esp)
083f841f +0x3120:  call   083f8f04 <+0x3c05>
083f8424 +0x3125:  jmp    083f8441 <+0x3142>
083f8426 +0x3127:  mov    %edx,%ebx
083f8428 +0x3129:  mov    %eax,%esi
083f842a +0x312b:  mov    0x8(%ebp),%eax
083f842d +0x312e:  mov    %eax,(%esp)
083f8430 +0x3131:  call   083f67d0 <+0x14d1>
083f8435 +0x3136:  mov    %esi,%eax
083f8437 +0x3138:  mov    %ebx,%edx
083f8439 +0x313a:  mov    %eax,(%esp)
083f843c +0x313d:  call   08ae3750 <_Unwind_Resume>
083f8441 +0x3142:  add    $0x10,%esp
083f8444 +0x3145:  pop    %ebx
083f8445 +0x3146:  pop    %esi
083f8446 +0x3147:  pop    %ebp
083f8447 +0x3148:  ret
083f8448 +0x3149:  push   %ebp
083f8449 +0x314a:  mov    %esp,%ebp
083f844b +0x314c:  sub    $0x18,%esp
083f844e +0x314f:  mov    0x8(%ebp),%eax
083f8451 +0x3152:  lea    0x3(%eax),%edx
083f8454 +0x3155:  mov    0xc(%ebp),%eax
083f8457 +0x3158:  mov    %eax,0x4(%esp)
083f845b +0x315c:  mov    %edx,(%esp)
083f845e +0x315f:  call   083f7710 <+0x2411>
083f8463 +0x3164:  mov    0x10(%ebp),%edx
083f8466 +0x3167:  mov    %edx,0x8(%esp)
083f846a +0x316b:  mov    %eax,0x4(%esp)
083f846e +0x316f:  mov    0x8(%ebp),%eax
083f8471 +0x3172:  mov    %eax,(%esp)
083f8474 +0x3175:  call   083f838e <+0x308f>
083f8479 +0x317a:  leave
083f847a +0x317b:  ret
083f847b +0x317c:  nop
083f847c +0x317d:  push   %ebp
083f847d +0x317e:  mov    %esp,%ebp
083f847f +0x3180:  push   %ebx
083f8480 +0x3181:  sub    $0x14,%esp
083f8483 +0x3184:  mov    0xc(%ebp),%edx
083f8486 +0x3187:  mov    0x8(%ebp),%eax
083f8489 +0x318a:  mov    %edx,0x4(%esp)
083f848d +0x318e:  mov    %eax,(%esp)
083f8490 +0x3191:  call   083f8f42 <+0x3c43>
083f8495 +0x3196:  mov    0xc(%ebp),%eax
083f8498 +0x3199:  lea    0x4(%eax),%edx
083f849b +0x319c:  mov    0x8(%ebp),%eax
083f849e +0x319f:  add    $0x4,%eax
083f84a1 +0x31a2:  mov    %edx,0x4(%esp)
083f84a5 +0x31a6:  mov    %eax,(%esp)
083f84a8 +0x31a9:  call   083f8f42 <+0x3c43>
083f84ad +0x31ae:  mov    0xc(%ebp),%eax
083f84b0 +0x31b1:  lea    0x8(%eax),%edx
083f84b3 +0x31b4:  mov    0x8(%ebp),%eax
083f84b6 +0x31b7:  add    $0x8,%eax
083f84b9 +0x31ba:  mov    %edx,0x4(%esp)
083f84bd +0x31be:  mov    %eax,(%esp)
083f84c0 +0x31c1:  call   083f8f42 <+0x3c43>
083f84c5 +0x31c6:  mov    0xc(%ebp),%eax
083f84c8 +0x31c9:  mov    %eax,(%esp)
083f84cb +0x31cc:  call   083f6838 <+0x1539>
083f84d0 +0x31d1:  mov    %eax,%ebx
083f84d2 +0x31d3:  mov    0x8(%ebp),%eax
083f84d5 +0x31d6:  mov    %eax,(%esp)
083f84d8 +0x31d9:  call   083f6838 <+0x1539>
083f84dd +0x31de:  mov    %ebx,0x4(%esp)
083f84e1 +0x31e2:  mov    %eax,(%esp)
083f84e4 +0x31e5:  call   083f8f7e <+0x3c7f>
083f84e9 +0x31ea:  add    $0x14,%esp
083f84ec +0x31ed:  pop    %ebx
083f84ed +0x31ee:  pop    %ebp
083f84ee +0x31ef:  ret
083f84ef +0x31f0:  nop
083f84f0 +0x31f1:  push   %ebp
083f84f1 +0x31f2:  mov    %esp,%ebp
083f84f3 +0x31f4:  sub    $0x18,%esp
083f84f6 +0x31f7:  mov    0xc(%ebp),%eax
083f84f9 +0x31fa:  mov    %eax,(%esp)
083f84fc +0x31fd:  call   083f8f83 <+0x3c84>
083f8501 +0x3202:  mov    0x8(%ebp),%ecx
083f8504 +0x3205:  mov    0x4(%eax),%edx
083f8507 +0x3208:  mov    (%eax),%eax
083f8509 +0x320a:  mov    %eax,(%ecx)
083f850b +0x320c:  mov    %edx,0x4(%ecx)
083f850e +0x320f:  mov    0x10(%ebp),%eax
083f8511 +0x3212:  mov    %eax,(%esp)
083f8514 +0x3215:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
083f8519 +0x321a:  movzbl (%eax),%edx
083f851c +0x321d:  mov    0x8(%ebp),%eax
083f851f +0x3220:  mov    %dl,0x8(%eax)
083f8522 +0x3223:  leave
083f8523 +0x3224:  ret
083f8524 +0x3225:  push   %ebp
083f8525 +0x3226:  mov    %esp,%ebp
083f8527 +0x3228:  sub    $0x18,%esp
083f852a +0x322b:  mov    0x8(%ebp),%eax
083f852d +0x322e:  movl   $0x0,0x8(%esp)
083f8535 +0x3236:  movl   $0x1,0x4(%esp)
083f853d +0x323e:  mov    %eax,(%esp)
083f8540 +0x3241:  call   083f8f8c <+0x3c8d>
083f8545 +0x3246:  leave
083f8546 +0x3247:  ret
083f8547 +0x3248:  nop
083f8548 +0x3249:  push   %ebp
083f8549 +0x324a:  mov    %esp,%ebp
083f854b +0x324c:  sub    $0x18,%esp
083f854e +0x324f:  mov    0xc(%ebp),%eax
083f8551 +0x3252:  mov    %eax,0x4(%esp)
083f8555 +0x3256:  movl   $0x10,(%esp)
083f855c +0x325d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
083f8561 +0x3262:  mov    %eax,%edx
083f8563 +0x3264:  test   %edx,%edx
083f8565 +0x3266:  je     083f8580 <+0x3281>
083f8567 +0x3268:  mov    0x10(%ebp),%edx
083f856a +0x326b:  mov    (%edx),%ecx
083f856c +0x326d:  mov    %ecx,(%eax)
083f856e +0x326f:  mov    0x4(%edx),%ecx
083f8571 +0x3272:  mov    %ecx,0x4(%eax)
083f8574 +0x3275:  mov    0x8(%edx),%ecx
083f8577 +0x3278:  mov    %ecx,0x8(%eax)
083f857a +0x327b:  mov    0xc(%edx),%edx
083f857d +0x327e:  mov    %edx,0xc(%eax)
083f8580 +0x3281:  leave
083f8581 +0x3282:  ret
083f8582 +0x3283:  push   %ebp
083f8583 +0x3284:  mov    %esp,%ebp
083f8585 +0x3286:  sub    $0x18,%esp
083f8588 +0x3289:  mov    0x8(%ebp),%eax
083f858b +0x328c:  mov    0xc(%ebp),%edx
083f858e +0x328f:  mov    %edx,0x4(%esp)
083f8592 +0x3293:  mov    %eax,(%esp)
083f8595 +0x3296:  call   083f8e78 <+0x3b79>
083f859a +0x329b:  mov    0x8(%ebp),%eax
083f859d +0x329e:  movl   $0x0,(%eax)
083f85a3 +0x32a4:  mov    0x8(%ebp),%eax
083f85a6 +0x32a7:  movl   $0x0,0x4(%eax)
083f85ad +0x32ae:  mov    0x8(%ebp),%eax
083f85b0 +0x32b1:  movl   $0x0,0x8(%eax)
083f85b7 +0x32b8:  leave
083f85b8 +0x32b9:  ret
083f85b9 +0x32ba:  nop
083f85ba +0x32bb:  push   %ebp
083f85bb +0x32bc:  mov    %esp,%ebp
083f85bd +0x32be:  sub    $0x18,%esp
083f85c0 +0x32c1:  mov    0x8(%ebp),%eax
083f85c3 +0x32c4:  mov    %eax,(%esp)
083f85c6 +0x32c7:  call   083f8e70 <+0x3b71>
083f85cb +0x32cc:  mov    %eax,(%esp)
083f85ce +0x32cf:  call   083f8fcc <+0x3ccd>
083f85d3 +0x32d4:  leave
083f85d4 +0x32d5:  ret
083f85d5 +0x32d6:  nop
083f85d6 +0x32d7:  push   %ebp
083f85d7 +0x32d8:  mov    %esp,%ebp
083f85d9 +0x32da:  mov    0x8(%ebp),%eax
083f85dc +0x32dd:  mov    0x8(%eax),%eax
083f85df +0x32e0:  mov    %eax,%edx
083f85e1 +0x32e2:  mov    0x8(%ebp),%eax
083f85e4 +0x32e5:  mov    (%eax),%eax
083f85e6 +0x32e7:  mov    %edx,%ecx
083f85e8 +0x32e9:  sub    %eax,%ecx
083f85ea +0x32eb:  mov    %ecx,%eax
083f85ec +0x32ed:  sar    $0x2,%eax
083f85ef +0x32f0:  pop    %ebp
083f85f0 +0x32f1:  ret
083f85f1 +0x32f2:  push   %ebp
083f85f2 +0x32f3:  mov    %esp,%ebp
083f85f4 +0x32f5:  push   %ebx
083f85f5 +0x32f6:  sub    $0x14,%esp
083f85f8 +0x32f9:  mov    0x8(%ebp),%ebx
083f85fb +0x32fc:  mov    0xc(%ebp),%eax
083f85fe +0x32ff:  mov    (%eax),%eax
083f8600 +0x3301:  mov    %eax,0x4(%esp)
083f8604 +0x3305:  mov    %ebx,(%esp)
083f8607 +0x3308:  call   083f8fd6 <+0x3cd7>
083f860c +0x330d:  mov    %ebx,%eax
083f860e +0x330f:  add    $0x14,%esp
083f8611 +0x3312:  pop    %ebx
083f8612 +0x3313:  pop    %ebp
083f8613 +0x3314:  ret    $0x4
083f8616 +0x3317:  push   %ebp
083f8617 +0x3318:  mov    %esp,%ebp
083f8619 +0x331a:  push   %esi
083f861a +0x331b:  push   %ebx
083f861b +0x331c:  sub    $0x20,%esp
083f861e +0x331f:  mov    0x8(%ebp),%eax
083f8621 +0x3322:  mov    0xc(%ebp),%edx
083f8624 +0x3325:  mov    %edx,0x4(%esp)
083f8628 +0x3329:  mov    %eax,(%esp)
083f862b +0x332c:  call   083f8fe4 <+0x3ce5>
083f8630 +0x3331:  mov    %eax,-0xc(%ebp)
083f8633 +0x3334:  mov    0x8(%ebp),%eax
083f8636 +0x3337:  mov    %eax,(%esp)
083f8639 +0x333a:  call   083f6838 <+0x1539>
083f863e +0x333f:  mov    %eax,0xc(%esp)
083f8642 +0x3343:  mov    -0xc(%ebp),%eax
083f8645 +0x3346:  mov    %eax,0x8(%esp)
083f8649 +0x334a:  mov    0x14(%ebp),%eax
083f864c +0x334d:  mov    %eax,0x4(%esp)
083f8650 +0x3351:  mov    0x10(%ebp),%eax
083f8653 +0x3354:  mov    %eax,(%esp)
083f8656 +0x3357:  call   083f9013 <+0x3d14>
083f865b +0x335c:  mov    -0xc(%ebp),%eax
083f865e +0x335f:  add    $0x20,%esp
083f8661 +0x3362:  pop    %ebx
083f8662 +0x3363:  pop    %esi
083f8663 +0x3364:  pop    %ebp
083f8664 +0x3365:  ret
083f8665 +0x3366:  mov    %eax,(%esp)
083f8668 +0x3369:  call   08725ce0 <__cxa_begin_catch>
083f866d +0x336e:  mov    0x8(%ebp),%eax
083f8670 +0x3371:  mov    0xc(%ebp),%edx
083f8673 +0x3374:  mov    %edx,0x8(%esp)
083f8677 +0x3378:  mov    -0xc(%ebp),%edx
083f867a +0x337b:  mov    %edx,0x4(%esp)
083f867e +0x337f:  mov    %eax,(%esp)
083f8681 +0x3382:  call   083f792c <+0x262d>
083f8686 +0x3387:  call   08724be0 <__cxa_rethrow>
083f868b +0x338c:  mov    %edx,%ebx
083f868d +0x338e:  mov    %eax,%esi
083f868f +0x3390:  call   08725c30 <__cxa_end_catch>
083f8694 +0x3395:  mov    %esi,%eax
083f8696 +0x3397:  mov    %ebx,%edx
083f8698 +0x3399:  mov    %eax,(%esp)
083f869b +0x339c:  call   08ae3750 <_Unwind_Resume>
083f86a0 +0x33a1:  push   %ebp
083f86a1 +0x33a2:  mov    %esp,%ebp
083f86a3 +0x33a4:  mov    0xc(%ebp),%eax
083f86a6 +0x33a7:  mov    (%eax),%edx
083f86a8 +0x33a9:  mov    0x8(%ebp),%eax
083f86ab +0x33ac:  mov    %edx,(%eax)
083f86ad +0x33ae:  pop    %ebp
083f86ae +0x33af:  ret
083f86af +0x33b0:  nop
083f86b0 +0x33b1:  push   %ebp
083f86b1 +0x33b2:  mov    %esp,%ebp
083f86b3 +0x33b4:  push   %esi
083f86b4 +0x33b5:  push   %ebx
083f86b5 +0x33b6:  sub    $0x40,%esp
083f86b8 +0x33b9:  cmpl   $0x0,0x10(%ebp)
083f86bc +0x33bd:  je     083f8acc <+0x37cd>
083f86c2 +0x33c3:  mov    0x8(%ebp),%eax
083f86c5 +0x33c6:  mov    0x8(%eax),%eax
083f86c8 +0x33c9:  mov    %eax,%edx
083f86ca +0x33cb:  mov    0x8(%ebp),%eax
083f86cd +0x33ce:  mov    0x4(%eax),%eax
083f86d0 +0x33d1:  mov    %edx,%ecx
083f86d2 +0x33d3:  sub    %eax,%ecx
083f86d4 +0x33d5:  mov    %ecx,%eax
083f86d6 +0x33d7:  sar    $0x2,%eax
083f86d9 +0x33da:  cmp    0x10(%ebp),%eax
083f86dc +0x33dd:  jb     083f88a3 <+0x35a4>
083f86e2 +0x33e3:  mov    0x14(%ebp),%eax
083f86e5 +0x33e6:  mov    (%eax),%eax
083f86e7 +0x33e8:  mov    %eax,-0x2c(%ebp)
083f86ea +0x33eb:  lea    -0x28(%ebp),%eax
083f86ed +0x33ee:  mov    0x8(%ebp),%edx
083f86f0 +0x33f1:  mov    %edx,0x4(%esp)
083f86f4 +0x33f5:  mov    %eax,(%esp)
083f86f7 +0x33f8:  call   083f78de <+0x25df>
083f86fc +0x33fd:  sub    $0x4,%esp
083f86ff +0x3400:  lea    0xc(%ebp),%eax
083f8702 +0x3403:  mov    %eax,0x4(%esp)
083f8706 +0x3407:  lea    -0x28(%ebp),%eax
083f8709 +0x340a:  mov    %eax,(%esp)
083f870c +0x340d:  call   083f9034 <+0x3d35>
083f8711 +0x3412:  mov    %eax,-0x20(%ebp)
083f8714 +0x3415:  mov    0x8(%ebp),%eax
083f8717 +0x3418:  mov    0x4(%eax),%eax
083f871a +0x341b:  mov    %eax,-0x1c(%ebp)
083f871d +0x341e:  mov    -0x20(%ebp),%eax
083f8720 +0x3421:  cmp    0x10(%ebp),%eax
083f8723 +0x3424:  jbe    083f87e1 <+0x34e2>
083f8729 +0x342a:  mov    0x8(%ebp),%eax
083f872c +0x342d:  mov    %eax,(%esp)
083f872f +0x3430:  call   083f6838 <+0x1539>
083f8734 +0x3435:  mov    0x8(%ebp),%edx
083f8737 +0x3438:  mov    0x4(%edx),%ecx
083f873a +0x343b:  mov    0x8(%ebp),%edx
083f873d +0x343e:  mov    0x4(%edx),%edx
083f8740 +0x3441:  mov    0x8(%ebp),%ebx
083f8743 +0x3444:  mov    0x4(%ebx),%ebx
083f8746 +0x3447:  mov    0x10(%ebp),%esi
083f8749 +0x344a:  shl    $0x2,%esi
083f874c +0x344d:  neg    %esi
083f874e +0x344f:  add    %esi,%ebx
083f8750 +0x3451:  mov    %eax,0xc(%esp)
083f8754 +0x3455:  mov    %ecx,0x8(%esp)
083f8758 +0x3459:  mov    %edx,0x4(%esp)
083f875c +0x345d:  mov    %ebx,(%esp)
083f875f +0x3460:  call   083f9066 <+0x3d67>
083f8764 +0x3465:  mov    0x8(%ebp),%eax
083f8767 +0x3468:  mov    0x4(%eax),%eax
083f876a +0x346b:  mov    0x10(%ebp),%edx
083f876d +0x346e:  shl    $0x2,%edx
083f8770 +0x3471:  lea    (%eax,%edx,1),%edx
083f8773 +0x3474:  mov    0x8(%ebp),%eax
083f8776 +0x3477:  mov    %edx,0x4(%eax)
083f8779 +0x347a:  mov    0x10(%ebp),%eax
083f877c +0x347d:  shl    $0x2,%eax
083f877f +0x3480:  neg    %eax
083f8781 +0x3482:  mov    %eax,%ebx
083f8783 +0x3484:  add    -0x1c(%ebp),%ebx
083f8786 +0x3487:  lea    0xc(%ebp),%eax
083f8789 +0x348a:  mov    %eax,(%esp)
083f878c +0x348d:  call   083f90b8 <+0x3db9>
083f8791 +0x3492:  mov    (%eax),%eax
083f8793 +0x3494:  mov    -0x1c(%ebp),%edx
083f8796 +0x3497:  mov    %edx,0x8(%esp)
083f879a +0x349b:  mov    %ebx,0x4(%esp)
083f879e +0x349f:  mov    %eax,(%esp)
083f87a1 +0x34a2:  call   083f90c0 <+0x3dc1>
083f87a6 +0x34a7:  lea    0xc(%ebp),%eax
083f87a9 +0x34aa:  mov    %eax,(%esp)
083f87ac +0x34ad:  call   083f90b8 <+0x3db9>
083f87b1 +0x34b2:  mov    (%eax),%eax
083f87b3 +0x34b4:  mov    0x10(%ebp),%edx
083f87b6 +0x34b7:  shl    $0x2,%edx
083f87b9 +0x34ba:  lea    (%eax,%edx,1),%ebx
083f87bc +0x34bd:  lea    0xc(%ebp),%eax
083f87bf +0x34c0:  mov    %eax,(%esp)
083f87c2 +0x34c3:  call   083f90b8 <+0x3db9>
083f87c7 +0x34c8:  mov    (%eax),%eax
083f87c9 +0x34ca:  lea    -0x2c(%ebp),%edx
083f87cc +0x34cd:  mov    %edx,0x8(%esp)
083f87d0 +0x34d1:  mov    %ebx,0x4(%esp)
083f87d4 +0x34d5:  mov    %eax,(%esp)
083f87d7 +0x34d8:  call   083f90f8 <+0x3df9>
083f87dc +0x34dd:  jmp    083f8acc <+0x37cd>
083f87e1 +0x34e2:  mov    0x8(%ebp),%eax
083f87e4 +0x34e5:  mov    %eax,(%esp)
083f87e7 +0x34e8:  call   083f6838 <+0x1539>
083f87ec +0x34ed:  mov    -0x20(%ebp),%edx
083f87ef +0x34f0:  mov    0x10(%ebp),%ecx
083f87f2 +0x34f3:  sub    %edx,%ecx
083f87f4 +0x34f5:  mov    0x8(%ebp),%edx
083f87f7 +0x34f8:  mov    0x4(%edx),%edx
083f87fa +0x34fb:  mov    %eax,0xc(%esp)
083f87fe +0x34ff:  lea    -0x2c(%ebp),%eax
083f8801 +0x3502:  mov    %eax,0x8(%esp)
083f8805 +0x3506:  mov    %ecx,0x4(%esp)
083f8809 +0x350a:  mov    %edx,(%esp)
083f880c +0x350d:  call   083f9130 <+0x3e31>
083f8811 +0x3512:  mov    0x8(%ebp),%eax
083f8814 +0x3515:  mov    0x4(%eax),%eax
083f8817 +0x3518:  mov    -0x20(%ebp),%edx
083f881a +0x351b:  mov    0x10(%ebp),%ecx
083f881d +0x351e:  mov    %ecx,%ebx
083f881f +0x3520:  sub    %edx,%ebx
083f8821 +0x3522:  mov    %ebx,%edx
083f8823 +0x3524:  shl    $0x2,%edx
083f8826 +0x3527:  lea    (%eax,%edx,1),%edx
083f8829 +0x352a:  mov    0x8(%ebp),%eax
083f882c +0x352d:  mov    %edx,0x4(%eax)
083f882f +0x3530:  mov    0x8(%ebp),%eax
083f8832 +0x3533:  mov    %eax,(%esp)
083f8835 +0x3536:  call   083f6838 <+0x1539>
083f883a +0x353b:  mov    %eax,%ebx
083f883c +0x353d:  mov    0x8(%ebp),%eax
083f883f +0x3540:  mov    0x4(%eax),%esi
083f8842 +0x3543:  lea    0xc(%ebp),%eax
083f8845 +0x3546:  mov    %eax,(%esp)
083f8848 +0x3549:  call   083f90b8 <+0x3db9>
083f884d +0x354e:  mov    (%eax),%eax
083f884f +0x3550:  mov    %ebx,0xc(%esp)
083f8853 +0x3554:  mov    %esi,0x8(%esp)
083f8857 +0x3558:  mov    -0x1c(%ebp),%edx
083f885a +0x355b:  mov    %edx,0x4(%esp)
083f885e +0x355f:  mov    %eax,(%esp)
083f8861 +0x3562:  call   083f9066 <+0x3d67>
083f8866 +0x3567:  mov    0x8(%ebp),%eax
083f8869 +0x356a:  mov    0x4(%eax),%eax
083f886c +0x356d:  mov    -0x20(%ebp),%edx
083f886f +0x3570:  shl    $0x2,%edx
083f8872 +0x3573:  lea    (%eax,%edx,1),%edx
083f8875 +0x3576:  mov    0x8(%ebp),%eax
083f8878 +0x3579:  mov    %edx,0x4(%eax)
083f887b +0x357c:  lea    0xc(%ebp),%eax
083f887e +0x357f:  mov    %eax,(%esp)
083f8881 +0x3582:  call   083f90b8 <+0x3db9>
083f8886 +0x3587:  mov    (%eax),%eax
083f8888 +0x3589:  lea    -0x2c(%ebp),%edx
083f888b +0x358c:  mov    %edx,0x8(%esp)
083f888f +0x3590:  mov    -0x1c(%ebp),%edx
083f8892 +0x3593:  mov    %edx,0x4(%esp)
083f8896 +0x3597:  mov    %eax,(%esp)
083f8899 +0x359a:  call   083f90f8 <+0x3df9>
083f889e +0x359f:  jmp    083f8acc <+0x37cd>
083f88a3 +0x35a4:  movl   $"vector::_M_fill_insert",0x8(%esp)
083f88ab +0x35ac:  mov    0x10(%ebp),%eax
083f88ae +0x35af:  mov    %eax,0x4(%esp)
083f88b2 +0x35b3:  mov    0x8(%ebp),%eax
083f88b5 +0x35b6:  mov    %eax,(%esp)
083f88b8 +0x35b9:  call   083f9152 <+0x3e53>
083f88bd +0x35be:  mov    %eax,-0x18(%ebp)
083f88c0 +0x35c1:  lea    -0x24(%ebp),%eax
083f88c3 +0x35c4:  mov    0x8(%ebp),%edx
083f88c6 +0x35c7:  mov    %edx,0x4(%esp)
083f88ca +0x35cb:  mov    %eax,(%esp)
083f88cd +0x35ce:  call   083f91f8 <+0x3ef9>
083f88d2 +0x35d3:  sub    $0x4,%esp
083f88d5 +0x35d6:  lea    -0x24(%ebp),%eax
083f88d8 +0x35d9:  mov    %eax,0x4(%esp)
083f88dc +0x35dd:  lea    0xc(%ebp),%eax
083f88df +0x35e0:  mov    %eax,(%esp)
083f88e2 +0x35e3:  call   083f9034 <+0x3d35>
083f88e7 +0x35e8:  mov    %eax,-0x14(%ebp)
083f88ea +0x35eb:  mov    0x8(%ebp),%eax
083f88ed +0x35ee:  mov    -0x18(%ebp),%edx
083f88f0 +0x35f1:  mov    %edx,0x4(%esp)
083f88f4 +0x35f5:  mov    %eax,(%esp)
083f88f7 +0x35f8:  call   083f8fe4 <+0x3ce5>
083f88fc +0x35fd:  mov    %eax,-0x10(%ebp)
083f88ff +0x3600:  mov    -0x10(%ebp),%eax
083f8902 +0x3603:  mov    %eax,-0xc(%ebp)
083f8905 +0x3606:  mov    0x8(%ebp),%eax
083f8908 +0x3609:  mov    %eax,(%esp)
083f890b +0x360c:  call   083f6838 <+0x1539>
083f8910 +0x3611:  mov    -0x14(%ebp),%edx
083f8913 +0x3614:  shl    $0x2,%edx
083f8916 +0x3617:  add    -0x10(%ebp),%edx
083f8919 +0x361a:  mov    %eax,0xc(%esp)
083f891d +0x361e:  mov    0x14(%ebp),%eax
083f8920 +0x3621:  mov    %eax,0x8(%esp)
083f8924 +0x3625:  mov    0x10(%ebp),%eax
083f8927 +0x3628:  mov    %eax,0x4(%esp)
083f892b +0x362c:  mov    %edx,(%esp)
083f892e +0x362f:  call   083f9130 <+0x3e31>
083f8933 +0x3634:  movl   $0x0,-0xc(%ebp)
083f893a +0x363b:  mov    0x8(%ebp),%eax
083f893d +0x363e:  mov    %eax,(%esp)
083f8940 +0x3641:  call   083f6838 <+0x1539>
083f8945 +0x3646:  mov    %eax,%ebx
083f8947 +0x3648:  lea    0xc(%ebp),%eax
083f894a +0x364b:  mov    %eax,(%esp)
083f894d +0x364e:  call   083f90b8 <+0x3db9>
083f8952 +0x3653:  mov    (%eax),%edx
083f8954 +0x3655:  mov    0x8(%ebp),%eax
083f8957 +0x3658:  mov    (%eax),%eax
083f8959 +0x365a:  mov    %ebx,0xc(%esp)
083f895d +0x365e:  mov    -0x10(%ebp),%ecx
083f8960 +0x3661:  mov    %ecx,0x8(%esp)
083f8964 +0x3665:  mov    %edx,0x4(%esp)
083f8968 +0x3669:  mov    %eax,(%esp)
083f896b +0x366c:  call   083f9066 <+0x3d67>
083f8970 +0x3671:  mov    %eax,-0xc(%ebp)
083f8973 +0x3674:  mov    0x10(%ebp),%eax
083f8976 +0x3677:  shl    $0x2,%eax
083f8979 +0x367a:  add    %eax,-0xc(%ebp)
083f897c +0x367d:  mov    0x8(%ebp),%eax
083f897f +0x3680:  mov    %eax,(%esp)
083f8982 +0x3683:  call   083f6838 <+0x1539>
083f8987 +0x3688:  mov    %eax,%ebx
083f8989 +0x368a:  mov    0x8(%ebp),%eax
083f898c +0x368d:  mov    0x4(%eax),%esi
083f898f +0x3690:  lea    0xc(%ebp),%eax
083f8992 +0x3693:  mov    %eax,(%esp)
083f8995 +0x3696:  call   083f90b8 <+0x3db9>
083f899a +0x369b:  mov    (%eax),%eax
083f899c +0x369d:  mov    %ebx,0xc(%esp)
083f89a0 +0x36a1:  mov    -0xc(%ebp),%edx
083f89a3 +0x36a4:  mov    %edx,0x8(%esp)
083f89a7 +0x36a8:  mov    %esi,0x4(%esp)
083f89ab +0x36ac:  mov    %eax,(%esp)
083f89ae +0x36af:  call   083f9066 <+0x3d67>
083f89b3 +0x36b4:  mov    %eax,-0xc(%ebp)
083f89b6 +0x36b7:  mov    0x8(%ebp),%eax
083f89b9 +0x36ba:  mov    %eax,(%esp)
083f89bc +0x36bd:  call   083f6838 <+0x1539>
083f89c1 +0x36c2:  mov    0x8(%ebp),%edx
083f89c4 +0x36c5:  mov    0x4(%edx),%ecx
083f89c7 +0x36c8:  mov    0x8(%ebp),%edx
083f89ca +0x36cb:  mov    (%edx),%edx
083f89cc +0x36cd:  mov    %eax,0x8(%esp)
083f89d0 +0x36d1:  mov    %ecx,0x4(%esp)
083f89d4 +0x36d5:  mov    %edx,(%esp)
083f89d7 +0x36d8:  call   083f6840 <+0x1541>
083f89dc +0x36dd:  mov    0x8(%ebp),%eax
083f89df +0x36e0:  mov    0x8(%eax),%eax
083f89e2 +0x36e3:  mov    %eax,%edx
083f89e4 +0x36e5:  mov    0x8(%ebp),%eax
083f89e7 +0x36e8:  mov    (%eax),%eax
083f89e9 +0x36ea:  mov    %edx,%ecx
083f89eb +0x36ec:  sub    %eax,%ecx
083f89ed +0x36ee:  mov    %ecx,%eax
083f89ef +0x36f0:  sar    $0x2,%eax
083f89f2 +0x36f3:  mov    %eax,%ecx
083f89f4 +0x36f5:  mov    0x8(%ebp),%eax
083f89f7 +0x36f8:  mov    (%eax),%edx
083f89f9 +0x36fa:  mov    0x8(%ebp),%eax
083f89fc +0x36fd:  mov    %ecx,0x8(%esp)
083f8a00 +0x3701:  mov    %edx,0x4(%esp)
083f8a04 +0x3705:  mov    %eax,(%esp)
083f8a07 +0x3708:  call   083f792c <+0x262d>
083f8a0c +0x370d:  mov    0x8(%ebp),%eax
083f8a0f +0x3710:  mov    -0x10(%ebp),%edx
083f8a12 +0x3713:  mov    %edx,(%eax)
083f8a14 +0x3715:  mov    0x8(%ebp),%eax
083f8a17 +0x3718:  mov    -0xc(%ebp),%edx
083f8a1a +0x371b:  mov    %edx,0x4(%eax)
083f8a1d +0x371e:  mov    -0x18(%ebp),%eax
083f8a20 +0x3721:  shl    $0x2,%eax
083f8a23 +0x3724:  mov    %eax,%edx
083f8a25 +0x3726:  add    -0x10(%ebp),%edx
083f8a28 +0x3729:  mov    0x8(%ebp),%eax
083f8a2b +0x372c:  mov    %edx,0x8(%eax)
083f8a2e +0x372f:  jmp    083f8acc <+0x37cd>
083f8a33 +0x3734:  mov    %eax,(%esp)
083f8a36 +0x3737:  call   08725ce0 <__cxa_begin_catch>
083f8a3b +0x373c:  cmpl   $0x0,-0xc(%ebp)
083f8a3f +0x3740:  jne    083f8a78 <+0x3779>
083f8a41 +0x3742:  mov    0x8(%ebp),%eax
083f8a44 +0x3745:  mov    %eax,(%esp)
083f8a47 +0x3748:  call   083f6838 <+0x1539>
083f8a4c +0x374d:  mov    0x10(%ebp),%edx
083f8a4f +0x3750:  mov    -0x14(%ebp),%ecx
083f8a52 +0x3753:  lea    (%ecx,%edx,1),%edx
083f8a55 +0x3756:  shl    $0x2,%edx
083f8a58 +0x3759:  mov    %edx,%ecx
083f8a5a +0x375b:  add    -0x10(%ebp),%ecx
083f8a5d +0x375e:  mov    -0x14(%ebp),%edx
083f8a60 +0x3761:  shl    $0x2,%edx
083f8a63 +0x3764:  add    -0x10(%ebp),%edx
083f8a66 +0x3767:  mov    %eax,0x8(%esp)
083f8a6a +0x376b:  mov    %ecx,0x4(%esp)
083f8a6e +0x376f:  mov    %edx,(%esp)
083f8a71 +0x3772:  call   083f6840 <+0x1541>
083f8a76 +0x3777:  jmp    083f8a99 <+0x379a>
083f8a78 +0x3779:  mov    0x8(%ebp),%eax
083f8a7b +0x377c:  mov    %eax,(%esp)
083f8a7e +0x377f:  call   083f6838 <+0x1539>
083f8a83 +0x3784:  mov    %eax,0x8(%esp)
083f8a87 +0x3788:  mov    -0xc(%ebp),%eax
083f8a8a +0x378b:  mov    %eax,0x4(%esp)
083f8a8e +0x378f:  mov    -0x10(%ebp),%eax
083f8a91 +0x3792:  mov    %eax,(%esp)
083f8a94 +0x3795:  call   083f6840 <+0x1541>
083f8a99 +0x379a:  mov    0x8(%ebp),%eax
083f8a9c +0x379d:  mov    -0x18(%ebp),%edx
083f8a9f +0x37a0:  mov    %edx,0x8(%esp)
083f8aa3 +0x37a4:  mov    -0x10(%ebp),%edx
083f8aa6 +0x37a7:  mov    %edx,0x4(%esp)
083f8aaa +0x37ab:  mov    %eax,(%esp)
083f8aad +0x37ae:  call   083f792c <+0x262d>
083f8ab2 +0x37b3:  call   08724be0 <__cxa_rethrow>
083f8ab7 +0x37b8:  mov    %edx,%ebx
083f8ab9 +0x37ba:  mov    %eax,%esi
083f8abb +0x37bc:  call   08725c30 <__cxa_end_catch>
083f8ac0 +0x37c1:  mov    %esi,%eax
083f8ac2 +0x37c3:  mov    %ebx,%edx
083f8ac4 +0x37c5:  mov    %eax,(%esp)
083f8ac7 +0x37c8:  call   08ae3750 <_Unwind_Resume>
083f8acc +0x37cd:  lea    -0x8(%ebp),%esp
083f8acf +0x37d0:  add    $0x0,%esp
083f8ad2 +0x37d3:  pop    %ebx
083f8ad3 +0x37d4:  pop    %esi
083f8ad4 +0x37d5:  pop    %ebp
083f8ad5 +0x37d6:  ret
083f8ad6 +0x37d7:  push   %ebp
083f8ad7 +0x37d8:  mov    %esp,%ebp
083f8ad9 +0x37da:  sub    $0x18,%esp
083f8adc +0x37dd:  mov    0xc(%ebp),%eax
083f8adf +0x37e0:  mov    %eax,(%esp)
083f8ae2 +0x37e3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083f8ae7 +0x37e8:  leave
083f8ae8 +0x37e9:  ret
083f8ae9 +0x37ea:  push   %ebp
083f8aea +0x37eb:  mov    %esp,%ebp
083f8aec +0x37ed:  pop    %ebp
083f8aed +0x37ee:  ret
083f8aee +0x37ef:  push   %ebp
083f8aef +0x37f0:  mov    %esp,%ebp
083f8af1 +0x37f2:  sub    $0x18,%esp
083f8af4 +0x37f5:  mov    0x8(%ebp),%eax
083f8af7 +0x37f8:  mov    %eax,(%esp)
083f8afa +0x37fb:  call   083f66d6 <+0x13d7>
083f8aff +0x3800:  leave
083f8b00 +0x3801:  ret
083f8b01 +0x3802:  nop
083f8b02 +0x3803:  push   %ebp
083f8b03 +0x3804:  mov    %esp,%ebp
083f8b05 +0x3806:  sub    $0x18,%esp
083f8b08 +0x3809:  mov    0xc(%ebp),%eax
083f8b0b +0x380c:  mov    %eax,(%esp)
083f8b0e +0x380f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083f8b13 +0x3814:  leave
083f8b14 +0x3815:  ret
083f8b15 +0x3816:  nop
083f8b16 +0x3817:  push   %ebp
083f8b17 +0x3818:  mov    %esp,%ebp
083f8b19 +0x381a:  pop    %ebp
083f8b1a +0x381b:  ret
083f8b1b +0x381c:  nop
083f8b1c +0x381d:  push   %ebp
083f8b1d +0x381e:  mov    %esp,%ebp
083f8b1f +0x3820:  sub    $0x18,%esp
083f8b22 +0x3823:  mov    0xc(%ebp),%eax
083f8b25 +0x3826:  mov    %eax,(%esp)
083f8b28 +0x3829:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083f8b2d +0x382e:  leave
083f8b2e +0x382f:  ret
083f8b2f +0x3830:  push   %ebp
083f8b30 +0x3831:  mov    %esp,%ebp
083f8b32 +0x3833:  sub    $0x28,%esp
083f8b35 +0x3836:  mov    0x8(%ebp),%eax
083f8b38 +0x3839:  mov    %eax,(%esp)
083f8b3b +0x383c:  call   083f921b <+0x3f1c>
083f8b40 +0x3841:  mov    %eax,0x4(%esp)
083f8b44 +0x3845:  lea    -0x9(%ebp),%eax
083f8b47 +0x3848:  mov    %eax,(%esp)
083f8b4a +0x384b:  call   083f7cdc <+0x29dd>
083f8b4f +0x3850:  leave
083f8b50 +0x3851:  ret
083f8b51 +0x3852:  nop
083f8b52 +0x3853:  push   %ebp
083f8b53 +0x3854:  mov    %esp,%ebp
083f8b55 +0x3856:  sub    $0x18,%esp
083f8b58 +0x3859:  mov    0x8(%ebp),%eax
083f8b5b +0x385c:  mov    %eax,(%esp)
083f8b5e +0x385f:  call   083f9226 <+0x3f27>
083f8b63 +0x3864:  leave
083f8b64 +0x3865:  ret
083f8b65 +0x3866:  nop
083f8b66 +0x3867:  push   %ebp
083f8b67 +0x3868:  mov    %esp,%ebp
083f8b69 +0x386a:  mov    0x8(%ebp),%eax
083f8b6c +0x386d:  movl   $0x0,0x4(%eax)
083f8b73 +0x3874:  mov    0x8(%ebp),%eax
083f8b76 +0x3877:  movl   $0x0,0x8(%eax)
083f8b7d +0x387e:  mov    0x8(%ebp),%eax
083f8b80 +0x3881:  lea    0x4(%eax),%edx
083f8b83 +0x3884:  mov    0x8(%ebp),%eax
083f8b86 +0x3887:  mov    %edx,0xc(%eax)
083f8b89 +0x388a:  mov    0x8(%ebp),%eax
083f8b8c +0x388d:  lea    0x4(%eax),%edx
083f8b8f +0x3890:  mov    0x8(%ebp),%eax
083f8b92 +0x3893:  mov    %edx,0x10(%eax)
083f8b95 +0x3896:  pop    %ebp
083f8b96 +0x3897:  ret
083f8b97 +0x3898:  nop
083f8b98 +0x3899:  push   %ebp
083f8b99 +0x389a:  mov    %esp,%ebp
083f8b9b +0x389c:  mov    0x8(%ebp),%eax
083f8b9e +0x389f:  pop    %ebp
083f8b9f +0x38a0:  ret
083f8ba0 +0x38a1:  push   %ebp
083f8ba1 +0x38a2:  mov    %esp,%ebp
083f8ba3 +0x38a4:  pop    %ebp
083f8ba4 +0x38a5:  ret
083f8ba5 +0x38a6:  nop
083f8ba6 +0x38a7:  push   %ebp
083f8ba7 +0x38a8:  mov    %esp,%ebp
083f8ba9 +0x38aa:  sub    $0x18,%esp
083f8bac +0x38ad:  mov    0xc(%ebp),%eax
083f8baf +0x38b0:  mov    %eax,(%esp)
083f8bb2 +0x38b3:  call   083f8ba0 <+0x38a1>
083f8bb7 +0x38b8:  leave
083f8bb8 +0x38b9:  ret
083f8bb9 +0x38ba:  nop
083f8bba +0x38bb:  push   %ebp
083f8bbb +0x38bc:  mov    %esp,%ebp
083f8bbd +0x38be:  sub    $0x18,%esp
083f8bc0 +0x38c1:  mov    0x8(%ebp),%eax
083f8bc3 +0x38c4:  movl   $0x1,0x8(%esp)
083f8bcb +0x38cc:  mov    0xc(%ebp),%edx
083f8bce +0x38cf:  mov    %edx,0x4(%esp)
083f8bd2 +0x38d3:  mov    %eax,(%esp)
083f8bd5 +0x38d6:  call   083f922c <+0x3f2d>
083f8bda +0x38db:  leave
083f8bdb +0x38dc:  ret
083f8bdc +0x38dd:  push   %ebp
083f8bdd +0x38de:  mov    %esp,%ebp
083f8bdf +0x38e0:  sub    $0x18,%esp
083f8be2 +0x38e3:  mov    0x8(%ebp),%eax
083f8be5 +0x38e6:  mov    0x10(%ebp),%edx
083f8be8 +0x38e9:  mov    %edx,0x4(%esp)
083f8bec +0x38ed:  mov    %eax,(%esp)
083f8bef +0x38f0:  call   083f9240 <+0x3f41>
083f8bf4 +0x38f5:  mov    0x8(%ebp),%eax
083f8bf7 +0x38f8:  movl   $0x0,0x4(%eax)
083f8bfe +0x38ff:  mov    0x8(%ebp),%eax
083f8c01 +0x3902:  movl   $0x0,0x8(%eax)
083f8c08 +0x3909:  mov    0x8(%ebp),%eax
083f8c0b +0x390c:  movl   $0x0,0xc(%eax)
083f8c12 +0x3913:  mov    0x8(%ebp),%eax
083f8c15 +0x3916:  movl   $0x0,0x10(%eax)
083f8c1c +0x391d:  mov    0x8(%ebp),%eax
083f8c1f +0x3920:  movl   $0x0,0x14(%eax)
083f8c26 +0x3927:  mov    0x8(%ebp),%eax
083f8c29 +0x392a:  mov    %eax,(%esp)
083f8c2c +0x392d:  call   083f8b66 <+0x3867>
083f8c31 +0x3932:  leave
083f8c32 +0x3933:  ret
083f8c33 +0x3934:  nop
083f8c34 +0x3935:  push   %ebp
083f8c35 +0x3936:  mov    %esp,%ebp
083f8c37 +0x3938:  mov    0x8(%ebp),%eax
083f8c3a +0x393b:  add    $0x8,%eax
083f8c3d +0x393e:  pop    %ebp
083f8c3e +0x393f:  ret
083f8c3f +0x3940:  push   %ebp
083f8c40 +0x3941:  mov    %esp,%ebp
083f8c42 +0x3943:  mov    0x8(%ebp),%eax
083f8c45 +0x3946:  add    $0x10,%eax
083f8c48 +0x3949:  pop    %ebp
083f8c49 +0x394a:  ret
083f8c4a +0x394b:  push   %ebp
083f8c4b +0x394c:  mov    %esp,%ebp
083f8c4d +0x394e:  push   %esi
083f8c4e +0x394f:  push   %ebx
083f8c4f +0x3950:  sub    $0x20,%esp
083f8c52 +0x3953:  mov    0x8(%ebp),%eax
083f8c55 +0x3956:  mov    %eax,(%esp)
083f8c58 +0x3959:  call   083f925a <+0x3f5b>
083f8c5d +0x395e:  mov    %eax,-0xc(%ebp)
083f8c60 +0x3961:  mov    0xc(%ebp),%eax
083f8c63 +0x3964:  mov    %eax,(%esp)
083f8c66 +0x3967:  call   083f927d <+0x3f7e>
083f8c6b +0x396c:  mov    %eax,%ebx
083f8c6d +0x396e:  mov    0x8(%ebp),%eax
083f8c70 +0x3971:  mov    %eax,(%esp)
083f8c73 +0x3974:  call   083f7a18 <+0x2719>
083f8c78 +0x3979:  mov    %ebx,0x8(%esp)
083f8c7c +0x397d:  mov    -0xc(%ebp),%edx
083f8c7f +0x3980:  mov    %edx,0x4(%esp)
083f8c83 +0x3984:  mov    %eax,(%esp)
083f8c86 +0x3987:  call   083f9286 <+0x3f87>
083f8c8b +0x398c:  jmp    083f8cc1 <+0x39c2>
083f8c8d +0x398e:  mov    %eax,(%esp)
083f8c90 +0x3991:  call   08725ce0 <__cxa_begin_catch>
083f8c95 +0x3996:  mov    -0xc(%ebp),%eax
083f8c98 +0x3999:  mov    %eax,0x4(%esp)
083f8c9c +0x399d:  mov    0x8(%ebp),%eax
083f8c9f +0x39a0:  mov    %eax,(%esp)
083f8ca2 +0x39a3:  call   083f7a4a <+0x274b>
083f8ca7 +0x39a8:  call   08724be0 <__cxa_rethrow>
083f8cac +0x39ad:  mov    %edx,%ebx
083f8cae +0x39af:  mov    %eax,%esi
083f8cb0 +0x39b1:  call   08725c30 <__cxa_end_catch>
083f8cb5 +0x39b6:  mov    %esi,%eax
083f8cb7 +0x39b8:  mov    %ebx,%edx
083f8cb9 +0x39ba:  mov    %eax,(%esp)
083f8cbc +0x39bd:  call   08ae3750 <_Unwind_Resume>
083f8cc1 +0x39c2:  mov    -0xc(%ebp),%eax
083f8cc4 +0x39c5:  add    $0x20,%esp
083f8cc7 +0x39c8:  pop    %ebx
083f8cc8 +0x39c9:  pop    %esi
083f8cc9 +0x39ca:  pop    %ebp
083f8cca +0x39cb:  ret
083f8ccb +0x39cc:  nop
083f8ccc +0x39cd:  push   %ebp
083f8ccd +0x39ce:  mov    %esp,%ebp
083f8ccf +0x39d0:  sub    $0x18,%esp
083f8cd2 +0x39d3:  mov    0xc(%ebp),%eax
083f8cd5 +0x39d6:  mov    %eax,(%esp)
083f8cd8 +0x39d9:  call   083f92ed <+0x3fee>
083f8cdd +0x39de:  mov    0x8(%ebp),%edx
083f8ce0 +0x39e1:  mov    (%eax),%eax
083f8ce2 +0x39e3:  mov    %eax,(%edx)
083f8ce4 +0x39e5:  mov    0x10(%ebp),%eax
083f8ce7 +0x39e8:  mov    %eax,(%esp)
083f8cea +0x39eb:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
083f8cef +0x39f0:  movzbl (%eax),%edx
083f8cf2 +0x39f3:  mov    0x8(%ebp),%eax
083f8cf5 +0x39f6:  mov    %dl,0x4(%eax)
083f8cf8 +0x39f9:  leave
083f8cf9 +0x39fa:  ret
083f8cfa +0x39fb:  push   %ebp
083f8cfb +0x39fc:  mov    %esp,%ebp
083f8cfd +0x39fe:  sub    $0x18,%esp
083f8d00 +0x3a01:  mov    0x8(%ebp),%eax
083f8d03 +0x3a04:  mov    (%eax),%eax
083f8d05 +0x3a06:  mov    %eax,(%esp)
083f8d08 +0x3a09:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
083f8d0d +0x3a0e:  mov    0x8(%ebp),%edx
083f8d10 +0x3a11:  mov    %eax,(%edx)
083f8d12 +0x3a13:  mov    0x8(%ebp),%eax
083f8d15 +0x3a16:  leave
083f8d16 +0x3a17:  ret
083f8d17 +0x3a18:  nop
083f8d18 +0x3a19:  push   %ebp
083f8d19 +0x3a1a:  mov    %esp,%ebp
083f8d1b +0x3a1c:  sub    $0x18,%esp
083f8d1e +0x3a1f:  mov    0xc(%ebp),%eax
083f8d21 +0x3a22:  mov    %eax,(%esp)
083f8d24 +0x3a25:  call   083f92f5 <+0x3ff6>
083f8d29 +0x3a2a:  mov    0x8(%ebp),%edx
083f8d2c +0x3a2d:  mov    (%eax),%eax
083f8d2e +0x3a2f:  mov    %eax,(%edx)
083f8d30 +0x3a31:  mov    0x10(%ebp),%eax
083f8d33 +0x3a34:  mov    %eax,(%esp)
083f8d36 +0x3a37:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
083f8d3b +0x3a3c:  movzbl (%eax),%edx
083f8d3e +0x3a3f:  mov    0x8(%ebp),%eax
083f8d41 +0x3a42:  mov    %dl,0x4(%eax)
083f8d44 +0x3a45:  leave
083f8d45 +0x3a46:  ret
083f8d46 +0x3a47:  push   %ebp
083f8d47 +0x3a48:  mov    %esp,%ebp
083f8d49 +0x3a4a:  sub    $0x28,%esp
083f8d4c +0x3a4d:  mov    0x8(%ebp),%eax
083f8d4f +0x3a50:  mov    %eax,(%esp)
083f8d52 +0x3a53:  call   083f92fd <+0x3ffe>
083f8d57 +0x3a58:  mov    %eax,0x4(%esp)
083f8d5b +0x3a5c:  lea    -0x9(%ebp),%eax
083f8d5e +0x3a5f:  mov    %eax,(%esp)
083f8d61 +0x3a62:  call   083f8090 <+0x2d91>
083f8d66 +0x3a67:  leave
083f8d67 +0x3a68:  ret
083f8d68 +0x3a69:  push   %ebp
083f8d69 +0x3a6a:  mov    %esp,%ebp
083f8d6b +0x3a6c:  mov    0x8(%ebp),%eax
083f8d6e +0x3a6f:  add    $0x10,%eax
083f8d71 +0x3a72:  pop    %ebp
083f8d72 +0x3a73:  ret
083f8d73 +0x3a74:  nop
083f8d74 +0x3a75:  push   %ebp
083f8d75 +0x3a76:  mov    %esp,%ebp
083f8d77 +0x3a78:  push   %esi
083f8d78 +0x3a79:  push   %ebx
083f8d79 +0x3a7a:  sub    $0x20,%esp
083f8d7c +0x3a7d:  mov    0x8(%ebp),%eax
083f8d7f +0x3a80:  mov    %eax,(%esp)
083f8d82 +0x3a83:  call   083f9308 <+0x4009>
083f8d87 +0x3a88:  mov    %eax,-0xc(%ebp)
083f8d8a +0x3a8b:  mov    0xc(%ebp),%eax
083f8d8d +0x3a8e:  mov    %eax,(%esp)
083f8d90 +0x3a91:  call   083f932b <+0x402c>
083f8d95 +0x3a96:  mov    %eax,%ebx
083f8d97 +0x3a98:  mov    0x8(%ebp),%eax
083f8d9a +0x3a9b:  mov    %eax,(%esp)
083f8d9d +0x3a9e:  call   083f8b98 <+0x3899>
083f8da2 +0x3aa3:  mov    %ebx,0x8(%esp)
083f8da6 +0x3aa7:  mov    -0xc(%ebp),%edx
083f8da9 +0x3aaa:  mov    %edx,0x4(%esp)
083f8dad +0x3aae:  mov    %eax,(%esp)
083f8db0 +0x3ab1:  call   083f9334 <+0x4035>
083f8db5 +0x3ab6:  jmp    083f8deb <+0x3aec>
083f8db7 +0x3ab8:  mov    %eax,(%esp)
083f8dba +0x3abb:  call   08725ce0 <__cxa_begin_catch>
083f8dbf +0x3ac0:  mov    -0xc(%ebp),%eax
083f8dc2 +0x3ac3:  mov    %eax,0x4(%esp)
083f8dc6 +0x3ac7:  mov    0x8(%ebp),%eax
083f8dc9 +0x3aca:  mov    %eax,(%esp)
083f8dcc +0x3acd:  call   083f8bba <+0x38bb>
083f8dd1 +0x3ad2:  call   08724be0 <__cxa_rethrow>
083f8dd6 +0x3ad7:  mov    %edx,%ebx
083f8dd8 +0x3ad9:  mov    %eax,%esi
083f8dda +0x3adb:  call   08725c30 <__cxa_end_catch>
083f8ddf +0x3ae0:  mov    %esi,%eax
083f8de1 +0x3ae2:  mov    %ebx,%edx
083f8de3 +0x3ae4:  mov    %eax,(%esp)
083f8de6 +0x3ae7:  call   08ae3750 <_Unwind_Resume>
083f8deb +0x3aec:  mov    -0xc(%ebp),%eax
083f8dee +0x3aef:  add    $0x20,%esp
083f8df1 +0x3af2:  pop    %ebx
083f8df2 +0x3af3:  pop    %esi
083f8df3 +0x3af4:  pop    %ebp
083f8df4 +0x3af5:  ret
083f8df5 +0x3af6:  nop
083f8df6 +0x3af7:  push   %ebp
083f8df7 +0x3af8:  mov    %esp,%ebp
083f8df9 +0x3afa:  sub    $0x18,%esp
083f8dfc +0x3afd:  mov    0xc(%ebp),%eax
083f8dff +0x3b00:  mov    %eax,(%esp)
083f8e02 +0x3b03:  call   083f9373 <+0x4074>
083f8e07 +0x3b08:  mov    0x8(%ebp),%edx
083f8e0a +0x3b0b:  mov    (%eax),%eax
083f8e0c +0x3b0d:  mov    %eax,(%edx)
083f8e0e +0x3b0f:  mov    0x10(%ebp),%eax
083f8e11 +0x3b12:  mov    %eax,(%esp)
083f8e14 +0x3b15:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
083f8e19 +0x3b1a:  movzbl (%eax),%edx
083f8e1c +0x3b1d:  mov    0x8(%ebp),%eax
083f8e1f +0x3b20:  mov    %dl,0x4(%eax)
083f8e22 +0x3b23:  leave
083f8e23 +0x3b24:  ret
083f8e24 +0x3b25:  push   %ebp
083f8e25 +0x3b26:  mov    %esp,%ebp
083f8e27 +0x3b28:  sub    $0x18,%esp
083f8e2a +0x3b2b:  mov    0x8(%ebp),%eax
083f8e2d +0x3b2e:  mov    (%eax),%eax
083f8e2f +0x3b30:  mov    %eax,(%esp)
083f8e32 +0x3b33:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
083f8e37 +0x3b38:  mov    0x8(%ebp),%edx
083f8e3a +0x3b3b:  mov    %eax,(%edx)
083f8e3c +0x3b3d:  mov    0x8(%ebp),%eax
083f8e3f +0x3b40:  leave
083f8e40 +0x3b41:  ret
083f8e41 +0x3b42:  nop
083f8e42 +0x3b43:  push   %ebp
083f8e43 +0x3b44:  mov    %esp,%ebp
083f8e45 +0x3b46:  sub    $0x18,%esp
083f8e48 +0x3b49:  mov    0xc(%ebp),%eax
083f8e4b +0x3b4c:  mov    %eax,(%esp)
083f8e4e +0x3b4f:  call   083f937b <+0x407c>
083f8e53 +0x3b54:  mov    0x8(%ebp),%edx
083f8e56 +0x3b57:  mov    (%eax),%eax
083f8e58 +0x3b59:  mov    %eax,(%edx)
083f8e5a +0x3b5b:  mov    0x10(%ebp),%eax
083f8e5d +0x3b5e:  mov    %eax,(%esp)
083f8e60 +0x3b61:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
083f8e65 +0x3b66:  movzbl (%eax),%edx
083f8e68 +0x3b69:  mov    0x8(%ebp),%eax
083f8e6b +0x3b6c:  mov    %dl,0x4(%eax)
083f8e6e +0x3b6f:  leave
083f8e6f +0x3b70:  ret
083f8e70 +0x3b71:  push   %ebp
083f8e71 +0x3b72:  mov    %esp,%ebp
083f8e73 +0x3b74:  mov    0x8(%ebp),%eax
083f8e76 +0x3b77:  pop    %ebp
083f8e77 +0x3b78:  ret
083f8e78 +0x3b79:  push   %ebp
083f8e79 +0x3b7a:  mov    %esp,%ebp
083f8e7b +0x3b7c:  sub    $0x18,%esp
083f8e7e +0x3b7f:  mov    0xc(%ebp),%edx
083f8e81 +0x3b82:  mov    0x8(%ebp),%eax
083f8e84 +0x3b85:  mov    %edx,0x4(%esp)
083f8e88 +0x3b89:  mov    %eax,(%esp)
083f8e8b +0x3b8c:  call   083f9384 <+0x4085>
083f8e90 +0x3b91:  leave
083f8e91 +0x3b92:  ret
083f8e92 +0x3b93:  push   %ebp
083f8e93 +0x3b94:  mov    %esp,%ebp
083f8e95 +0x3b96:  push   %esi
083f8e96 +0x3b97:  push   %ebx
083f8e97 +0x3b98:  sub    $0x10,%esp
083f8e9a +0x3b9b:  mov    0x8(%ebp),%eax
083f8e9d +0x3b9e:  mov    0x10(%ebp),%edx
083f8ea0 +0x3ba1:  mov    %edx,0x4(%esp)
083f8ea4 +0x3ba5:  mov    %eax,(%esp)
083f8ea7 +0x3ba8:  call   083f8582 <+0x3283>
083f8eac +0x3bad:  mov    0xc(%ebp),%eax
083f8eaf +0x3bb0:  mov    %eax,0x4(%esp)
083f8eb3 +0x3bb4:  mov    0x8(%ebp),%eax
083f8eb6 +0x3bb7:  mov    %eax,(%esp)
083f8eb9 +0x3bba:  call   083f8fe4 <+0x3ce5>
083f8ebe +0x3bbf:  mov    0x8(%ebp),%edx
083f8ec1 +0x3bc2:  mov    %eax,(%edx)
083f8ec3 +0x3bc4:  mov    0x8(%ebp),%eax
083f8ec6 +0x3bc7:  mov    (%eax),%edx
083f8ec8 +0x3bc9:  mov    0x8(%ebp),%eax
083f8ecb +0x3bcc:  mov    %edx,0x4(%eax)
083f8ece +0x3bcf:  mov    0x8(%ebp),%eax
083f8ed1 +0x3bd2:  mov    (%eax),%eax
083f8ed3 +0x3bd4:  mov    0xc(%ebp),%edx
083f8ed6 +0x3bd7:  shl    $0x2,%edx
083f8ed9 +0x3bda:  lea    (%eax,%edx,1),%edx
083f8edc +0x3bdd:  mov    0x8(%ebp),%eax
083f8edf +0x3be0:  mov    %edx,0x8(%eax)
083f8ee2 +0x3be3:  add    $0x10,%esp
083f8ee5 +0x3be6:  pop    %ebx
083f8ee6 +0x3be7:  pop    %esi
083f8ee7 +0x3be8:  pop    %ebp
083f8ee8 +0x3be9:  ret
083f8ee9 +0x3bea:  mov    %edx,%ebx
083f8eeb +0x3bec:  mov    %eax,%esi
083f8eed +0x3bee:  mov    0x8(%ebp),%eax
083f8ef0 +0x3bf1:  mov    %eax,(%esp)
083f8ef3 +0x3bf4:  call   083f67bc <+0x14bd>
083f8ef8 +0x3bf9:  mov    %esi,%eax
083f8efa +0x3bfb:  mov    %ebx,%edx
083f8efc +0x3bfd:  mov    %eax,(%esp)
083f8eff +0x3c00:  call   08ae3750 <_Unwind_Resume>
083f8f04 +0x3c05:  push   %ebp
083f8f05 +0x3c06:  mov    %esp,%ebp
083f8f07 +0x3c08:  sub    $0x18,%esp
083f8f0a +0x3c0b:  mov    0x8(%ebp),%eax
083f8f0d +0x3c0e:  mov    %eax,(%esp)
083f8f10 +0x3c11:  call   083f6838 <+0x1539>
083f8f15 +0x3c16:  mov    0x8(%ebp),%edx
083f8f18 +0x3c19:  mov    (%edx),%edx
083f8f1a +0x3c1b:  mov    %eax,0xc(%esp)
083f8f1e +0x3c1f:  mov    0x10(%ebp),%eax
083f8f21 +0x3c22:  mov    %eax,0x8(%esp)
083f8f25 +0x3c26:  mov    0xc(%ebp),%eax
083f8f28 +0x3c29:  mov    %eax,0x4(%esp)
083f8f2c +0x3c2d:  mov    %edx,(%esp)
083f8f2f +0x3c30:  call   083f9130 <+0x3e31>
083f8f34 +0x3c35:  mov    0x8(%ebp),%eax
083f8f37 +0x3c38:  mov    0x8(%eax),%edx
083f8f3a +0x3c3b:  mov    0x8(%ebp),%eax
083f8f3d +0x3c3e:  mov    %edx,0x4(%eax)
083f8f40 +0x3c41:  leave
083f8f41 +0x3c42:  ret
083f8f42 +0x3c43:  push   %ebp
083f8f43 +0x3c44:  mov    %esp,%ebp
083f8f45 +0x3c46:  sub    $0x28,%esp
083f8f48 +0x3c49:  mov    0x8(%ebp),%eax
083f8f4b +0x3c4c:  mov    %eax,(%esp)
083f8f4e +0x3c4f:  call   083f9389 <+0x408a>
083f8f53 +0x3c54:  mov    (%eax),%eax
083f8f55 +0x3c56:  mov    %eax,-0xc(%ebp)
083f8f58 +0x3c59:  mov    0xc(%ebp),%eax
083f8f5b +0x3c5c:  mov    %eax,(%esp)
083f8f5e +0x3c5f:  call   083f9389 <+0x408a>
083f8f63 +0x3c64:  mov    (%eax),%edx
083f8f65 +0x3c66:  mov    0x8(%ebp),%eax
083f8f68 +0x3c69:  mov    %edx,(%eax)
083f8f6a +0x3c6b:  lea    -0xc(%ebp),%eax
083f8f6d +0x3c6e:  mov    %eax,(%esp)
083f8f70 +0x3c71:  call   083f9389 <+0x408a>
083f8f75 +0x3c76:  mov    (%eax),%edx
083f8f77 +0x3c78:  mov    0xc(%ebp),%eax
083f8f7a +0x3c7b:  mov    %edx,(%eax)
083f8f7c +0x3c7d:  leave
083f8f7d +0x3c7e:  ret
083f8f7e +0x3c7f:  push   %ebp
083f8f7f +0x3c80:  mov    %esp,%ebp
083f8f81 +0x3c82:  pop    %ebp
083f8f82 +0x3c83:  ret
083f8f83 +0x3c84:  push   %ebp
083f8f84 +0x3c85:  mov    %esp,%ebp
083f8f86 +0x3c87:  mov    0x8(%ebp),%eax
083f8f89 +0x3c8a:  pop    %ebp
083f8f8a +0x3c8b:  ret
083f8f8b +0x3c8c:  nop
083f8f8c +0x3c8d:  push   %ebp
083f8f8d +0x3c8e:  mov    %esp,%ebp
083f8f8f +0x3c90:  sub    $0x18,%esp
083f8f92 +0x3c93:  mov    0x8(%ebp),%eax
083f8f95 +0x3c96:  mov    %eax,(%esp)
083f8f98 +0x3c99:  call   083f9392 <+0x4093>
083f8f9d +0x3c9e:  cmp    0xc(%ebp),%eax
083f8fa0 +0x3ca1:  setb   %al
083f8fa3 +0x3ca4:  movzbl %al,%eax
083f8fa6 +0x3ca7:  test   %eax,%eax
083f8fa8 +0x3ca9:  setne  %al
083f8fab +0x3cac:  test   %al,%al
083f8fad +0x3cae:  je     083f8fb4 <+0x3cb5>
083f8faf +0x3cb0:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
083f8fb4 +0x3cb5:  mov    0xc(%ebp),%edx
083f8fb7 +0x3cb8:  mov    %edx,%eax
083f8fb9 +0x3cba:  shl    $0x2,%eax
083f8fbc +0x3cbd:  add    %edx,%eax
083f8fbe +0x3cbf:  shl    $0x2,%eax
083f8fc1 +0x3cc2:  mov    %eax,(%esp)
083f8fc4 +0x3cc5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083f8fc9 +0x3cca:  leave
083f8fca +0x3ccb:  ret
083f8fcb +0x3ccc:  nop
083f8fcc +0x3ccd:  push   %ebp
083f8fcd +0x3cce:  mov    %esp,%ebp
083f8fcf +0x3cd0:  mov    $0x3fffffff,%eax
083f8fd4 +0x3cd5:  pop    %ebp
083f8fd5 +0x3cd6:  ret
083f8fd6 +0x3cd7:  push   %ebp
083f8fd7 +0x3cd8:  mov    %esp,%ebp
083f8fd9 +0x3cda:  mov    0x8(%ebp),%eax
083f8fdc +0x3cdd:  mov    0xc(%ebp),%edx
083f8fdf +0x3ce0:  mov    %edx,(%eax)
083f8fe1 +0x3ce2:  pop    %ebp
083f8fe2 +0x3ce3:  ret
083f8fe3 +0x3ce4:  nop
083f8fe4 +0x3ce5:  push   %ebp
083f8fe5 +0x3ce6:  mov    %esp,%ebp
083f8fe7 +0x3ce8:  sub    $0x18,%esp
083f8fea +0x3ceb:  cmpl   $0x0,0xc(%ebp)
083f8fee +0x3cef:  je     083f900c <+0x3d0d>
083f8ff0 +0x3cf1:  mov    0x8(%ebp),%eax
083f8ff3 +0x3cf4:  movl   $0x0,0x8(%esp)
083f8ffb +0x3cfc:  mov    0xc(%ebp),%edx
083f8ffe +0x3cff:  mov    %edx,0x4(%esp)
083f9002 +0x3d03:  mov    %eax,(%esp)
083f9005 +0x3d06:  call   083f939c <+0x409d>
083f900a +0x3d0b:  jmp    083f9011 <+0x3d12>
083f900c +0x3d0d:  mov    $0x0,%eax
083f9011 +0x3d12:  leave
083f9012 +0x3d13:  ret
083f9013 +0x3d14:  push   %ebp
083f9014 +0x3d15:  mov    %esp,%ebp
083f9016 +0x3d17:  sub    $0x18,%esp
083f9019 +0x3d1a:  mov    0x10(%ebp),%eax
083f901c +0x3d1d:  mov    %eax,0x8(%esp)
083f9020 +0x3d21:  mov    0xc(%ebp),%eax
083f9023 +0x3d24:  mov    %eax,0x4(%esp)
083f9027 +0x3d28:  mov    0x8(%ebp),%eax
083f902a +0x3d2b:  mov    %eax,(%esp)
083f902d +0x3d2e:  call   083f93d4 <+0x40d5>
083f9032 +0x3d33:  leave
083f9033 +0x3d34:  ret
083f9034 +0x3d35:  push   %ebp
083f9035 +0x3d36:  mov    %esp,%ebp
083f9037 +0x3d38:  push   %ebx
083f9038 +0x3d39:  sub    $0x14,%esp
083f903b +0x3d3c:  mov    0x8(%ebp),%eax
083f903e +0x3d3f:  mov    %eax,(%esp)
083f9041 +0x3d42:  call   083f90b8 <+0x3db9>
083f9046 +0x3d47:  mov    (%eax),%eax
083f9048 +0x3d49:  mov    %eax,%ebx
083f904a +0x3d4b:  mov    0xc(%ebp),%eax
083f904d +0x3d4e:  mov    %eax,(%esp)
083f9050 +0x3d51:  call   083f90b8 <+0x3db9>
083f9055 +0x3d56:  mov    (%eax),%eax
083f9057 +0x3d58:  mov    %ebx,%edx
083f9059 +0x3d5a:  sub    %eax,%edx
083f905b +0x3d5c:  mov    %edx,%eax
083f905d +0x3d5e:  sar    $0x2,%eax
083f9060 +0x3d61:  add    $0x14,%esp
083f9063 +0x3d64:  pop    %ebx
083f9064 +0x3d65:  pop    %ebp
083f9065 +0x3d66:  ret
083f9066 +0x3d67:  push   %ebp
083f9067 +0x3d68:  mov    %esp,%ebp
083f9069 +0x3d6a:  sub    $0x28,%esp
083f906c +0x3d6d:  lea    -0x10(%ebp),%eax
083f906f +0x3d70:  lea    0xc(%ebp),%edx
083f9072 +0x3d73:  mov    %edx,0x4(%esp)
083f9076 +0x3d77:  mov    %eax,(%esp)
083f9079 +0x3d7a:  call   083f85f1 <+0x32f2>
083f907e +0x3d7f:  sub    $0x4,%esp
083f9081 +0x3d82:  lea    -0xc(%ebp),%eax
083f9084 +0x3d85:  lea    0x8(%ebp),%edx
083f9087 +0x3d88:  mov    %edx,0x4(%esp)
083f908b +0x3d8c:  mov    %eax,(%esp)
083f908e +0x3d8f:  call   083f85f1 <+0x32f2>
083f9093 +0x3d94:  sub    $0x4,%esp
083f9096 +0x3d97:  mov    0x14(%ebp),%eax
083f9099 +0x3d9a:  mov    %eax,0xc(%esp)
083f909d +0x3d9e:  mov    0x10(%ebp),%eax
083f90a0 +0x3da1:  mov    %eax,0x8(%esp)
083f90a4 +0x3da5:  mov    -0x10(%ebp),%eax
083f90a7 +0x3da8:  mov    %eax,0x4(%esp)
083f90ab +0x3dac:  mov    -0xc(%ebp),%eax
083f90ae +0x3daf:  mov    %eax,(%esp)
083f90b1 +0x3db2:  call   083f9013 <+0x3d14>
083f90b6 +0x3db7:  leave
083f90b7 +0x3db8:  ret
083f90b8 +0x3db9:  push   %ebp
083f90b9 +0x3dba:  mov    %esp,%ebp
083f90bb +0x3dbc:  mov    0x8(%ebp),%eax
083f90be +0x3dbf:  pop    %ebp
083f90bf +0x3dc0:  ret
083f90c0 +0x3dc1:  push   %ebp
083f90c1 +0x3dc2:  mov    %esp,%ebp
083f90c3 +0x3dc4:  push   %ebx
083f90c4 +0x3dc5:  sub    $0x14,%esp
083f90c7 +0x3dc8:  mov    0xc(%ebp),%eax
083f90ca +0x3dcb:  mov    %eax,(%esp)
083f90cd +0x3dce:  call   083f93f5 <+0x40f6>
083f90d2 +0x3dd3:  mov    %eax,%ebx
083f90d4 +0x3dd5:  mov    0x8(%ebp),%eax
083f90d7 +0x3dd8:  mov    %eax,(%esp)
083f90da +0x3ddb:  call   083f93f5 <+0x40f6>
083f90df +0x3de0:  mov    0x10(%ebp),%edx
083f90e2 +0x3de3:  mov    %edx,0x8(%esp)
083f90e6 +0x3de7:  mov    %ebx,0x4(%esp)
083f90ea +0x3deb:  mov    %eax,(%esp)
083f90ed +0x3dee:  call   083f93fd <+0x40fe>
083f90f2 +0x3df3:  add    $0x14,%esp
083f90f5 +0x3df6:  pop    %ebx
083f90f6 +0x3df7:  pop    %ebp
083f90f7 +0x3df8:  ret
083f90f8 +0x3df9:  push   %ebp
083f90f9 +0x3dfa:  mov    %esp,%ebp
083f90fb +0x3dfc:  push   %ebx
083f90fc +0x3dfd:  sub    $0x14,%esp
083f90ff +0x3e00:  mov    0xc(%ebp),%eax
083f9102 +0x3e03:  mov    %eax,(%esp)
083f9105 +0x3e06:  call   083f9441 <+0x4142>
083f910a +0x3e0b:  mov    %eax,%ebx
083f910c +0x3e0d:  mov    0x8(%ebp),%eax
083f910f +0x3e10:  mov    %eax,(%esp)
083f9112 +0x3e13:  call   083f9441 <+0x4142>
083f9117 +0x3e18:  mov    0x10(%ebp),%edx
083f911a +0x3e1b:  mov    %edx,0x8(%esp)
083f911e +0x3e1f:  mov    %ebx,0x4(%esp)
083f9122 +0x3e23:  mov    %eax,(%esp)
083f9125 +0x3e26:  call   083f9449 <+0x414a>
083f912a +0x3e2b:  add    $0x14,%esp
083f912d +0x3e2e:  pop    %ebx
083f912e +0x3e2f:  pop    %ebp
083f912f +0x3e30:  ret
083f9130 +0x3e31:  push   %ebp
083f9131 +0x3e32:  mov    %esp,%ebp
083f9133 +0x3e34:  sub    $0x18,%esp
083f9136 +0x3e37:  mov    0x10(%ebp),%eax
083f9139 +0x3e3a:  mov    %eax,0x8(%esp)
083f913d +0x3e3e:  mov    0xc(%ebp),%eax
083f9140 +0x3e41:  mov    %eax,0x4(%esp)
083f9144 +0x3e45:  mov    0x8(%ebp),%eax
083f9147 +0x3e48:  mov    %eax,(%esp)
083f914a +0x3e4b:  call   083f9474 <+0x4175>
083f914f +0x3e50:  leave
083f9150 +0x3e51:  ret
083f9151 +0x3e52:  nop
083f9152 +0x3e53:  push   %ebp
083f9153 +0x3e54:  mov    %esp,%ebp
083f9155 +0x3e56:  push   %ebx
083f9156 +0x3e57:  sub    $0x24,%esp
083f9159 +0x3e5a:  mov    0x8(%ebp),%eax
083f915c +0x3e5d:  mov    %eax,(%esp)
083f915f +0x3e60:  call   083f85ba <+0x32bb>
083f9164 +0x3e65:  mov    %eax,%ebx
083f9166 +0x3e67:  mov    0x8(%ebp),%eax
083f9169 +0x3e6a:  mov    %eax,(%esp)
083f916c +0x3e6d:  call   083f685a <+0x155b>
083f9171 +0x3e72:  mov    %ebx,%edx
083f9173 +0x3e74:  sub    %eax,%edx
083f9175 +0x3e76:  mov    0xc(%ebp),%eax
083f9178 +0x3e79:  cmp    %eax,%edx
083f917a +0x3e7b:  setb   %al
083f917d +0x3e7e:  test   %al,%al
083f917f +0x3e80:  je     083f918c <+0x3e8d>
083f9181 +0x3e82:  mov    0x10(%ebp),%eax
083f9184 +0x3e85:  mov    %eax,(%esp)
083f9187 +0x3e88:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
083f918c +0x3e8d:  mov    0x8(%ebp),%eax
083f918f +0x3e90:  mov    %eax,(%esp)
083f9192 +0x3e93:  call   083f685a <+0x155b>
083f9197 +0x3e98:  mov    %eax,%ebx
083f9199 +0x3e9a:  mov    0x8(%ebp),%eax
083f919c +0x3e9d:  mov    %eax,(%esp)
083f919f +0x3ea0:  call   083f685a <+0x155b>
083f91a4 +0x3ea5:  mov    %eax,-0x10(%ebp)
083f91a7 +0x3ea8:  lea    0xc(%ebp),%eax
083f91aa +0x3eab:  mov    %eax,0x4(%esp)
083f91ae +0x3eaf:  lea    -0x10(%ebp),%eax
083f91b1 +0x3eb2:  mov    %eax,(%esp)
083f91b4 +0x3eb5:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
083f91b9 +0x3eba:  mov    (%eax),%eax
083f91bb +0x3ebc:  lea    (%ebx,%eax,1),%eax
083f91be +0x3ebf:  mov    %eax,-0xc(%ebp)
083f91c1 +0x3ec2:  mov    0x8(%ebp),%eax
083f91c4 +0x3ec5:  mov    %eax,(%esp)
083f91c7 +0x3ec8:  call   083f685a <+0x155b>
083f91cc +0x3ecd:  cmp    -0xc(%ebp),%eax
083f91cf +0x3ed0:  ja     083f91e1 <+0x3ee2>
083f91d1 +0x3ed2:  mov    0x8(%ebp),%eax
083f91d4 +0x3ed5:  mov    %eax,(%esp)
083f91d7 +0x3ed8:  call   083f85ba <+0x32bb>
083f91dc +0x3edd:  cmp    -0xc(%ebp),%eax
083f91df +0x3ee0:  jae    083f91ee <+0x3eef>
083f91e1 +0x3ee2:  mov    0x8(%ebp),%eax
083f91e4 +0x3ee5:  mov    %eax,(%esp)
083f91e7 +0x3ee8:  call   083f85ba <+0x32bb>
083f91ec +0x3eed:  jmp    083f91f1 <+0x3ef2>
083f91ee +0x3eef:  mov    -0xc(%ebp),%eax
083f91f1 +0x3ef2:  add    $0x24,%esp
083f91f4 +0x3ef5:  pop    %ebx
083f91f5 +0x3ef6:  pop    %ebp
083f91f6 +0x3ef7:  ret
083f91f7 +0x3ef8:  nop
083f91f8 +0x3ef9:  push   %ebp
083f91f9 +0x3efa:  mov    %esp,%ebp
083f91fb +0x3efc:  push   %ebx
083f91fc +0x3efd:  sub    $0x14,%esp
083f91ff +0x3f00:  mov    0x8(%ebp),%ebx
083f9202 +0x3f03:  mov    0xc(%ebp),%eax
083f9205 +0x3f06:  mov    %eax,0x4(%esp)
083f9209 +0x3f0a:  mov    %ebx,(%esp)
083f920c +0x3f0d:  call   083f86a0 <+0x33a1>
083f9211 +0x3f12:  mov    %ebx,%eax
083f9213 +0x3f14:  add    $0x14,%esp
083f9216 +0x3f17:  pop    %ebx
083f9217 +0x3f18:  pop    %ebp
083f9218 +0x3f19:  ret    $0x4
083f921b +0x3f1c:  push   %ebp
083f921c +0x3f1d:  mov    %esp,%ebp
083f921e +0x3f1f:  mov    0x8(%ebp),%eax
083f9221 +0x3f22:  add    $0x10,%eax
083f9224 +0x3f25:  pop    %ebp
083f9225 +0x3f26:  ret
083f9226 +0x3f27:  push   %ebp
083f9227 +0x3f28:  mov    %esp,%ebp
083f9229 +0x3f2a:  pop    %ebp
083f922a +0x3f2b:  ret
083f922b +0x3f2c:  nop
083f922c +0x3f2d:  push   %ebp
083f922d +0x3f2e:  mov    %esp,%ebp
083f922f +0x3f30:  sub    $0x18,%esp
083f9232 +0x3f33:  mov    0xc(%ebp),%eax
083f9235 +0x3f36:  mov    %eax,(%esp)
083f9238 +0x3f39:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083f923d +0x3f3e:  leave
083f923e +0x3f3f:  ret
083f923f +0x3f40:  nop
083f9240 +0x3f41:  push   %ebp
083f9241 +0x3f42:  mov    %esp,%ebp
083f9243 +0x3f44:  sub    $0x18,%esp
083f9246 +0x3f47:  mov    0xc(%ebp),%edx
083f9249 +0x3f4a:  mov    0x8(%ebp),%eax
083f924c +0x3f4d:  mov    %edx,0x4(%esp)
083f9250 +0x3f51:  mov    %eax,(%esp)
083f9253 +0x3f54:  call   083f9496 <+0x4197>
083f9258 +0x3f59:  leave
083f9259 +0x3f5a:  ret
083f925a +0x3f5b:  push   %ebp
083f925b +0x3f5c:  mov    %esp,%ebp
083f925d +0x3f5e:  sub    $0x18,%esp
083f9260 +0x3f61:  mov    0x8(%ebp),%eax
083f9263 +0x3f64:  movl   $0x0,0x8(%esp)
083f926b +0x3f6c:  movl   $0x1,0x4(%esp)
083f9273 +0x3f74:  mov    %eax,(%esp)
083f9276 +0x3f77:  call   083f949c <+0x419d>
083f927b +0x3f7c:  leave
083f927c +0x3f7d:  ret
083f927d +0x3f7e:  push   %ebp
083f927e +0x3f7f:  mov    %esp,%ebp
083f9280 +0x3f81:  mov    0x8(%ebp),%eax
083f9283 +0x3f84:  pop    %ebp
083f9284 +0x3f85:  ret
083f9285 +0x3f86:  nop
083f9286 +0x3f87:  push   %ebp
083f9287 +0x3f88:  mov    %esp,%ebp
083f9289 +0x3f8a:  push   %edi
083f928a +0x3f8b:  push   %esi
083f928b +0x3f8c:  push   %ebx
083f928c +0x3f8d:  sub    $0x2c,%esp
083f928f +0x3f90:  mov    0x10(%ebp),%eax
083f9292 +0x3f93:  mov    %eax,(%esp)
083f9295 +0x3f96:  call   083f927d <+0x3f7e>
083f929a +0x3f9b:  mov    %eax,%edi
083f929c +0x3f9d:  mov    0xc(%ebp),%esi
083f929f +0x3fa0:  mov    %esi,0x4(%esp)
083f92a3 +0x3fa4:  movl   $0x2c,(%esp)
083f92aa +0x3fab:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
083f92af +0x3fb0:  mov    %eax,%ebx
083f92b1 +0x3fb2:  mov    %ebx,%eax
083f92b3 +0x3fb4:  test   %eax,%eax
083f92b5 +0x3fb6:  je     083f92e5 <+0x3fe6>
083f92b7 +0x3fb8:  mov    %ebx,%eax
083f92b9 +0x3fba:  mov    %edi,0x4(%esp)
083f92bd +0x3fbe:  mov    %eax,(%esp)
083f92c0 +0x3fc1:  call   083f94fe <+0x41ff>
083f92c5 +0x3fc6:  jmp    083f92e5 <+0x3fe6>
083f92c7 +0x3fc8:  mov    %edx,%edi
083f92c9 +0x3fca:  mov    %eax,-0x1c(%ebp)
083f92cc +0x3fcd:  mov    %esi,0x4(%esp)
083f92d0 +0x3fd1:  mov    %ebx,(%esp)
083f92d3 +0x3fd4:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
083f92d8 +0x3fd9:  mov    -0x1c(%ebp),%eax
083f92db +0x3fdc:  mov    %edi,%edx
083f92dd +0x3fde:  mov    %eax,(%esp)
083f92e0 +0x3fe1:  call   08ae3750 <_Unwind_Resume>
083f92e5 +0x3fe6:  add    $0x2c,%esp
083f92e8 +0x3fe9:  pop    %ebx
083f92e9 +0x3fea:  pop    %esi
083f92ea +0x3feb:  pop    %edi
083f92eb +0x3fec:  pop    %ebp
083f92ec +0x3fed:  ret
083f92ed +0x3fee:  push   %ebp
083f92ee +0x3fef:  mov    %esp,%ebp
083f92f0 +0x3ff1:  mov    0x8(%ebp),%eax
083f92f3 +0x3ff4:  pop    %ebp
083f92f4 +0x3ff5:  ret
083f92f5 +0x3ff6:  push   %ebp
083f92f6 +0x3ff7:  mov    %esp,%ebp
083f92f8 +0x3ff9:  mov    0x8(%ebp),%eax
083f92fb +0x3ffc:  pop    %ebp
083f92fc +0x3ffd:  ret
083f92fd +0x3ffe:  push   %ebp
083f92fe +0x3fff:  mov    %esp,%ebp
083f9300 +0x4001:  mov    0x8(%ebp),%eax
083f9303 +0x4004:  add    $0x10,%eax
083f9306 +0x4007:  pop    %ebp
083f9307 +0x4008:  ret
083f9308 +0x4009:  push   %ebp
083f9309 +0x400a:  mov    %esp,%ebp
083f930b +0x400c:  sub    $0x18,%esp
083f930e +0x400f:  mov    0x8(%ebp),%eax
083f9311 +0x4012:  movl   $0x0,0x8(%esp)
083f9319 +0x401a:  movl   $0x1,0x4(%esp)
083f9321 +0x4022:  mov    %eax,(%esp)
083f9324 +0x4025:  call   083f954a <+0x424b>
083f9329 +0x402a:  leave
083f932a +0x402b:  ret
083f932b +0x402c:  push   %ebp
083f932c +0x402d:  mov    %esp,%ebp
083f932e +0x402f:  mov    0x8(%ebp),%eax
083f9331 +0x4032:  pop    %ebp
083f9332 +0x4033:  ret
083f9333 +0x4034:  nop
083f9334 +0x4035:  push   %ebp
083f9335 +0x4036:  mov    %esp,%ebp
083f9337 +0x4038:  push   %ebx
083f9338 +0x4039:  sub    $0x14,%esp
083f933b +0x403c:  mov    0x10(%ebp),%eax
083f933e +0x403f:  mov    %eax,(%esp)
083f9341 +0x4042:  call   083f932b <+0x402c>
083f9346 +0x4047:  mov    %eax,%ebx
083f9348 +0x4049:  mov    0xc(%ebp),%eax
083f934b +0x404c:  mov    %eax,0x4(%esp)
083f934f +0x4050:  movl   $0x18,(%esp)
083f9356 +0x4057:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
083f935b +0x405c:  mov    %eax,%edx
083f935d +0x405e:  test   %edx,%edx
083f935f +0x4060:  je     083f936d <+0x406e>
083f9361 +0x4062:  mov    %ebx,0x4(%esp)
083f9365 +0x4066:  mov    %eax,(%esp)
083f9368 +0x4069:  call   083f9588 <+0x4289>
083f936d +0x406e:  add    $0x14,%esp
083f9370 +0x4071:  pop    %ebx
083f9371 +0x4072:  pop    %ebp
083f9372 +0x4073:  ret
083f9373 +0x4074:  push   %ebp
083f9374 +0x4075:  mov    %esp,%ebp
083f9376 +0x4077:  mov    0x8(%ebp),%eax
083f9379 +0x407a:  pop    %ebp
083f937a +0x407b:  ret
083f937b +0x407c:  push   %ebp
083f937c +0x407d:  mov    %esp,%ebp
083f937e +0x407f:  mov    0x8(%ebp),%eax
083f9381 +0x4082:  pop    %ebp
083f9382 +0x4083:  ret
083f9383 +0x4084:  nop
083f9384 +0x4085:  push   %ebp
083f9385 +0x4086:  mov    %esp,%ebp
083f9387 +0x4088:  pop    %ebp
083f9388 +0x4089:  ret
083f9389 +0x408a:  push   %ebp
083f938a +0x408b:  mov    %esp,%ebp
083f938c +0x408d:  mov    0x8(%ebp),%eax
083f938f +0x4090:  pop    %ebp
083f9390 +0x4091:  ret
083f9391 +0x4092:  nop
083f9392 +0x4093:  push   %ebp
083f9393 +0x4094:  mov    %esp,%ebp
083f9395 +0x4096:  mov    $0xccccccc,%eax
083f939a +0x409b:  pop    %ebp
083f939b +0x409c:  ret
083f939c +0x409d:  push   %ebp
083f939d +0x409e:  mov    %esp,%ebp
083f939f +0x40a0:  sub    $0x18,%esp
083f93a2 +0x40a3:  mov    0x8(%ebp),%eax
083f93a5 +0x40a6:  mov    %eax,(%esp)
083f93a8 +0x40a9:  call   083f8fcc <+0x3ccd>
083f93ad +0x40ae:  cmp    0xc(%ebp),%eax
083f93b0 +0x40b1:  setb   %al
083f93b3 +0x40b4:  movzbl %al,%eax
083f93b6 +0x40b7:  test   %eax,%eax
083f93b8 +0x40b9:  setne  %al
083f93bb +0x40bc:  test   %al,%al
083f93bd +0x40be:  je     083f93c4 <+0x40c5>
083f93bf +0x40c0:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
083f93c4 +0x40c5:  mov    0xc(%ebp),%eax
083f93c7 +0x40c8:  shl    $0x2,%eax
083f93ca +0x40cb:  mov    %eax,(%esp)
083f93cd +0x40ce:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083f93d2 +0x40d3:  leave
083f93d3 +0x40d4:  ret
083f93d4 +0x40d5:  push   %ebp
083f93d5 +0x40d6:  mov    %esp,%ebp
083f93d7 +0x40d8:  sub    $0x18,%esp
083f93da +0x40db:  mov    0x10(%ebp),%eax
083f93dd +0x40de:  mov    %eax,0x8(%esp)
083f93e1 +0x40e2:  mov    0xc(%ebp),%eax
083f93e4 +0x40e5:  mov    %eax,0x4(%esp)
083f93e8 +0x40e9:  mov    0x8(%ebp),%eax
083f93eb +0x40ec:  mov    %eax,(%esp)
083f93ee +0x40ef:  call   083f95d0 <+0x42d1>
083f93f3 +0x40f4:  leave
083f93f4 +0x40f5:  ret
083f93f5 +0x40f6:  push   %ebp
083f93f6 +0x40f7:  mov    %esp,%ebp
083f93f8 +0x40f9:  mov    0x8(%ebp),%eax
083f93fb +0x40fc:  pop    %ebp
083f93fc +0x40fd:  ret
083f93fd +0x40fe:  push   %ebp
083f93fe +0x40ff:  mov    %esp,%ebp
083f9400 +0x4101:  push   %esi
083f9401 +0x4102:  push   %ebx
083f9402 +0x4103:  sub    $0x10,%esp
083f9405 +0x4106:  mov    0x10(%ebp),%eax
083f9408 +0x4109:  mov    %eax,(%esp)
083f940b +0x410c:  call   083f9441 <+0x4142>
083f9410 +0x4111:  mov    %eax,%esi
083f9412 +0x4113:  mov    0xc(%ebp),%eax
083f9415 +0x4116:  mov    %eax,(%esp)
083f9418 +0x4119:  call   083f9441 <+0x4142>
083f941d +0x411e:  mov    %eax,%ebx
083f941f +0x4120:  mov    0x8(%ebp),%eax
083f9422 +0x4123:  mov    %eax,(%esp)
083f9425 +0x4126:  call   083f9441 <+0x4142>
083f942a +0x412b:  mov    %esi,0x8(%esp)
083f942e +0x412f:  mov    %ebx,0x4(%esp)
083f9432 +0x4133:  mov    %eax,(%esp)
083f9435 +0x4136:  call   083f95f1 <+0x42f2>
083f943a +0x413b:  add    $0x10,%esp
083f943d +0x413e:  pop    %ebx
083f943e +0x413f:  pop    %esi
083f943f +0x4140:  pop    %ebp
083f9440 +0x4141:  ret
083f9441 +0x4142:  push   %ebp
083f9442 +0x4143:  mov    %esp,%ebp
083f9444 +0x4145:  mov    0x8(%ebp),%eax
083f9447 +0x4148:  pop    %ebp
083f9448 +0x4149:  ret
083f9449 +0x414a:  push   %ebp
083f944a +0x414b:  mov    %esp,%ebp
083f944c +0x414d:  sub    $0x10,%esp
083f944f +0x4150:  mov    0x10(%ebp),%eax
083f9452 +0x4153:  mov    (%eax),%eax
083f9454 +0x4155:  mov    %eax,-0x4(%ebp)
083f9457 +0x4158:  jmp    083f9465 <+0x4166>
083f9459 +0x415a:  mov    0x8(%ebp),%eax
083f945c +0x415d:  mov    -0x4(%ebp),%edx
083f945f +0x4160:  mov    %edx,(%eax)
083f9461 +0x4162:  addl   $0x4,0x8(%ebp)
083f9465 +0x4166:  mov    0x8(%ebp),%eax
083f9468 +0x4169:  cmp    0xc(%ebp),%eax
083f946b +0x416c:  setne  %al
083f946e +0x416f:  test   %al,%al
083f9470 +0x4171:  jne    083f9459 <+0x415a>
083f9472 +0x4173:  leave
083f9473 +0x4174:  ret
083f9474 +0x4175:  push   %ebp
083f9475 +0x4176:  mov    %esp,%ebp
083f9477 +0x4178:  sub    $0x18,%esp
083f947a +0x417b:  mov    0x10(%ebp),%eax
083f947d +0x417e:  mov    %eax,0x8(%esp)
083f9481 +0x4182:  mov    0xc(%ebp),%eax
083f9484 +0x4185:  mov    %eax,0x4(%esp)
083f9488 +0x4189:  mov    0x8(%ebp),%eax
083f948b +0x418c:  mov    %eax,(%esp)
083f948e +0x418f:  call   083f9616 <+0x4317>
083f9493 +0x4194:  leave
083f9494 +0x4195:  ret
083f9495 +0x4196:  nop
083f9496 +0x4197:  push   %ebp
083f9497 +0x4198:  mov    %esp,%ebp
083f9499 +0x419a:  pop    %ebp
083f949a +0x419b:  ret
083f949b +0x419c:  nop
083f949c +0x419d:  push   %ebp
083f949d +0x419e:  mov    %esp,%ebp
083f949f +0x41a0:  sub    $0x18,%esp
083f94a2 +0x41a3:  mov    0x8(%ebp),%eax
083f94a5 +0x41a6:  mov    %eax,(%esp)
083f94a8 +0x41a9:  call   083f9638 <+0x4339>
083f94ad +0x41ae:  cmp    0xc(%ebp),%eax
083f94b0 +0x41b1:  setb   %al
083f94b3 +0x41b4:  movzbl %al,%eax
083f94b6 +0x41b7:  test   %eax,%eax
083f94b8 +0x41b9:  setne  %al
083f94bb +0x41bc:  test   %al,%al
083f94bd +0x41be:  je     083f94c4 <+0x41c5>
083f94bf +0x41c0:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
083f94c4 +0x41c5:  mov    0xc(%ebp),%eax
083f94c7 +0x41c8:  imul   $0x2c,%eax,%eax
083f94ca +0x41cb:  mov    %eax,(%esp)
083f94cd +0x41ce:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083f94d2 +0x41d3:  leave
083f94d3 +0x41d4:  ret
083f94d4 +0x41d5:  push   %ebp
083f94d5 +0x41d6:  mov    %esp,%ebp
083f94d7 +0x41d8:  sub    $0x18,%esp
083f94da +0x41db:  mov    0xc(%ebp),%eax
083f94dd +0x41de:  mov    (%eax),%edx
083f94df +0x41e0:  mov    0x8(%ebp),%eax
083f94e2 +0x41e3:  mov    %edx,(%eax)
083f94e4 +0x41e5:  mov    0xc(%ebp),%eax
083f94e7 +0x41e8:  lea    0x4(%eax),%edx
083f94ea +0x41eb:  mov    0x8(%ebp),%eax
083f94ed +0x41ee:  add    $0x4,%eax
083f94f0 +0x41f1:  mov    %edx,0x4(%esp)
083f94f4 +0x41f5:  mov    %eax,(%esp)
083f94f7 +0x41f8:  call   083f9642 <+0x4343>
083f94fc +0x41fd:  leave
083f94fd +0x41fe:  ret
083f94fe +0x41ff:  push   %ebp
083f94ff +0x4200:  mov    %esp,%ebp
083f9501 +0x4202:  sub    $0x18,%esp
083f9504 +0x4205:  mov    0x8(%ebp),%eax
083f9507 +0x4208:  movl   $0x0,(%eax)
083f950d +0x420e:  mov    0x8(%ebp),%eax
083f9510 +0x4211:  movl   $0x0,0x4(%eax)
083f9517 +0x4218:  mov    0x8(%ebp),%eax
083f951a +0x421b:  movl   $0x0,0x8(%eax)
083f9521 +0x4222:  mov    0x8(%ebp),%eax
083f9524 +0x4225:  movl   $0x0,0xc(%eax)
083f952b +0x422c:  mov    0xc(%ebp),%eax
083f952e +0x422f:  mov    %eax,(%esp)
083f9531 +0x4232:  call   083f927d <+0x3f7e>
083f9536 +0x4237:  mov    0x8(%ebp),%edx
083f9539 +0x423a:  add    $0x10,%edx
083f953c +0x423d:  mov    %eax,0x4(%esp)
083f9540 +0x4241:  mov    %edx,(%esp)
083f9543 +0x4244:  call   083f94d4 <+0x41d5>
083f9548 +0x4249:  leave
083f9549 +0x424a:  ret
083f954a +0x424b:  push   %ebp
083f954b +0x424c:  mov    %esp,%ebp
083f954d +0x424e:  sub    $0x18,%esp
083f9550 +0x4251:  mov    0x8(%ebp),%eax
083f9553 +0x4254:  mov    %eax,(%esp)
083f9556 +0x4257:  call   083f965c <+0x435d>
083f955b +0x425c:  cmp    0xc(%ebp),%eax
083f955e +0x425f:  setb   %al
083f9561 +0x4262:  movzbl %al,%eax
083f9564 +0x4265:  test   %eax,%eax
083f9566 +0x4267:  setne  %al
083f9569 +0x426a:  test   %al,%al
083f956b +0x426c:  je     083f9572 <+0x4273>
083f956d +0x426e:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
083f9572 +0x4273:  mov    0xc(%ebp),%edx
083f9575 +0x4276:  mov    %edx,%eax
083f9577 +0x4278:  add    %eax,%eax
083f9579 +0x427a:  add    %edx,%eax
083f957b +0x427c:  shl    $0x3,%eax
083f957e +0x427f:  mov    %eax,(%esp)
083f9581 +0x4282:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083f9586 +0x4287:  leave
083f9587 +0x4288:  ret
083f9588 +0x4289:  push   %ebp
083f9589 +0x428a:  mov    %esp,%ebp
083f958b +0x428c:  sub    $0x18,%esp
083f958e +0x428f:  mov    0x8(%ebp),%eax
083f9591 +0x4292:  movl   $0x0,(%eax)
083f9597 +0x4298:  mov    0x8(%ebp),%eax
083f959a +0x429b:  movl   $0x0,0x4(%eax)
083f95a1 +0x42a2:  mov    0x8(%ebp),%eax
083f95a4 +0x42a5:  movl   $0x0,0x8(%eax)
083f95ab +0x42ac:  mov    0x8(%ebp),%eax
083f95ae +0x42af:  movl   $0x0,0xc(%eax)
083f95b5 +0x42b6:  mov    0xc(%ebp),%eax
083f95b8 +0x42b9:  mov    %eax,(%esp)
083f95bb +0x42bc:  call   083f932b <+0x402c>
083f95c0 +0x42c1:  mov    0x8(%ebp),%ecx
083f95c3 +0x42c4:  mov    0x4(%eax),%edx
083f95c6 +0x42c7:  mov    (%eax),%eax
083f95c8 +0x42c9:  mov    %eax,0x10(%ecx)
083f95cb +0x42cc:  mov    %edx,0x14(%ecx)
083f95ce +0x42cf:  leave
083f95cf +0x42d0:  ret
083f95d0 +0x42d1:  push   %ebp
083f95d1 +0x42d2:  mov    %esp,%ebp
083f95d3 +0x42d4:  sub    $0x18,%esp
083f95d6 +0x42d7:  mov    0x10(%ebp),%eax
083f95d9 +0x42da:  mov    %eax,0x8(%esp)
083f95dd +0x42de:  mov    0xc(%ebp),%eax
083f95e0 +0x42e1:  mov    %eax,0x4(%esp)
083f95e4 +0x42e5:  mov    0x8(%ebp),%eax
083f95e7 +0x42e8:  mov    %eax,(%esp)
083f95ea +0x42eb:  call   083f9666 <+0x4367>
083f95ef +0x42f0:  leave
083f95f0 +0x42f1:  ret
083f95f1 +0x42f2:  push   %ebp
083f95f2 +0x42f3:  mov    %esp,%ebp
083f95f4 +0x42f5:  sub    $0x28,%esp
083f95f7 +0x42f8:  movb   $0x1,-0x9(%ebp)
083f95fb +0x42fc:  mov    0x10(%ebp),%eax
083f95fe +0x42ff:  mov    %eax,0x8(%esp)
083f9602 +0x4303:  mov    0xc(%ebp),%eax
083f9605 +0x4306:  mov    %eax,0x4(%esp)
083f9609 +0x430a:  mov    0x8(%ebp),%eax
083f960c +0x430d:  mov    %eax,(%esp)
083f960f +0x4310:  call   083f969e <+0x439f>
083f9614 +0x4315:  leave
083f9615 +0x4316:  ret
083f9616 +0x4317:  push   %ebp
083f9617 +0x4318:  mov    %esp,%ebp
083f9619 +0x431a:  sub    $0x18,%esp
083f961c +0x431d:  mov    0x10(%ebp),%eax
083f961f +0x4320:  mov    %eax,0x8(%esp)
083f9623 +0x4324:  mov    0xc(%ebp),%eax
083f9626 +0x4327:  mov    %eax,0x4(%esp)
083f962a +0x432b:  mov    0x8(%ebp),%eax
083f962d +0x432e:  mov    %eax,(%esp)
083f9630 +0x4331:  call   083f96eb <+0x43ec>
083f9635 +0x4336:  leave
083f9636 +0x4337:  ret
083f9637 +0x4338:  nop
083f9638 +0x4339:  push   %ebp
083f9639 +0x433a:  mov    %esp,%ebp
083f963b +0x433c:  mov    $0x5d1745d,%eax
083f9640 +0x4341:  pop    %ebp
083f9641 +0x4342:  ret
083f9642 +0x4343:  push   %ebp
083f9643 +0x4344:  mov    %esp,%ebp
083f9645 +0x4346:  sub    $0x18,%esp
083f9648 +0x4349:  mov    0xc(%ebp),%edx
083f964b +0x434c:  mov    0x8(%ebp),%eax
083f964e +0x434f:  mov    %edx,0x4(%esp)
083f9652 +0x4353:  mov    %eax,(%esp)
083f9655 +0x4356:  call   083f9714 <+0x4415>
083f965a +0x435b:  leave
083f965b +0x435c:  ret
083f965c +0x435d:  push   %ebp
083f965d +0x435e:  mov    %esp,%ebp
083f965f +0x4360:  mov    $0xaaaaaaa,%eax
083f9664 +0x4365:  pop    %ebp
083f9665 +0x4366:  ret
083f9666 +0x4367:  push   %ebp
083f9667 +0x4368:  mov    %esp,%ebp
083f9669 +0x436a:  push   %ebx
083f966a +0x436b:  sub    $0x14,%esp
083f966d +0x436e:  mov    0xc(%ebp),%eax
083f9670 +0x4371:  mov    %eax,(%esp)
083f9673 +0x4374:  call   083f9807 <+0x4508>
083f9678 +0x4379:  mov    %eax,%ebx
083f967a +0x437b:  mov    0x8(%ebp),%eax
083f967d +0x437e:  mov    %eax,(%esp)
083f9680 +0x4381:  call   083f9807 <+0x4508>
083f9685 +0x4386:  mov    0x10(%ebp),%edx
083f9688 +0x4389:  mov    %edx,0x8(%esp)
083f968c +0x438d:  mov    %ebx,0x4(%esp)
083f9690 +0x4391:  mov    %eax,(%esp)
083f9693 +0x4394:  call   083f981a <+0x451b>
083f9698 +0x4399:  add    $0x14,%esp
083f969b +0x439c:  pop    %ebx
083f969c +0x439d:  pop    %ebp
083f969d +0x439e:  ret
083f969e +0x439f:  push   %ebp
083f969f +0x43a0:  mov    %esp,%ebp
083f96a1 +0x43a2:  sub    $0x28,%esp
083f96a4 +0x43a5:  mov    0xc(%ebp),%edx
083f96a7 +0x43a8:  mov    0x8(%ebp),%eax
083f96aa +0x43ab:  mov    %edx,%ecx
083f96ac +0x43ad:  sub    %eax,%ecx
083f96ae +0x43af:  mov    %ecx,%eax
083f96b0 +0x43b1:  sar    $0x2,%eax
083f96b3 +0x43b4:  mov    %eax,-0xc(%ebp)
083f96b6 +0x43b7:  mov    -0xc(%ebp),%eax
083f96b9 +0x43ba:  lea    0x0(,%eax,4),%edx
083f96c0 +0x43c1:  mov    -0xc(%ebp),%eax
083f96c3 +0x43c4:  shl    $0x2,%eax
083f96c6 +0x43c7:  neg    %eax
083f96c8 +0x43c9:  add    0x10(%ebp),%eax
083f96cb +0x43cc:  mov    %edx,0x8(%esp)
083f96cf +0x43d0:  mov    0x8(%ebp),%edx
083f96d2 +0x43d3:  mov    %edx,0x4(%esp)
083f96d6 +0x43d7:  mov    %eax,(%esp)
083f96d9 +0x43da:  call   0807d880 <_init+0x178>
083f96de +0x43df:  mov    -0xc(%ebp),%eax
083f96e1 +0x43e2:  shl    $0x2,%eax
083f96e4 +0x43e5:  neg    %eax
083f96e6 +0x43e7:  add    0x10(%ebp),%eax
083f96e9 +0x43ea:  leave
083f96ea +0x43eb:  ret
083f96eb +0x43ec:  push   %ebp
083f96ec +0x43ed:  mov    %esp,%ebp
083f96ee +0x43ef:  sub    $0x18,%esp
083f96f1 +0x43f2:  mov    0x8(%ebp),%eax
083f96f4 +0x43f5:  mov    %eax,(%esp)
083f96f7 +0x43f8:  call   083f9441 <+0x4142>
083f96fc +0x43fd:  mov    0x10(%ebp),%edx
083f96ff +0x4400:  mov    %edx,0x8(%esp)
083f9703 +0x4404:  mov    0xc(%ebp),%edx
083f9706 +0x4407:  mov    %edx,0x4(%esp)
083f970a +0x440b:  mov    %eax,(%esp)
083f970d +0x440e:  call   083f985e <+0x455f>
083f9712 +0x4413:  leave
083f9713 +0x4414:  ret
083f9714 +0x4415:  push   %ebp
083f9715 +0x4416:  mov    %esp,%ebp
083f9717 +0x4418:  push   %esi
083f9718 +0x4419:  push   %ebx
083f9719 +0x441a:  sub    $0x10,%esp
083f971c +0x441d:  mov    0xc(%ebp),%eax
083f971f +0x4420:  mov    %eax,(%esp)
083f9722 +0x4423:  call   083f988e <+0x458f>
083f9727 +0x4428:  mov    0xc(%ebp),%ecx
083f972a +0x442b:  mov    0x8(%ebp),%edx
083f972d +0x442e:  mov    %eax,0x8(%esp)
083f9731 +0x4432:  mov    %ecx,0x4(%esp)
083f9735 +0x4436:  mov    %edx,(%esp)
083f9738 +0x4439:  call   083f8bdc <+0x38dd>
083f973d +0x443e:  mov    0xc(%ebp),%eax
083f9740 +0x4441:  mov    %eax,(%esp)
083f9743 +0x4444:  call   083f9896 <+0x4597>
083f9748 +0x4449:  test   %eax,%eax
083f974a +0x444b:  setne  %al
083f974d +0x444e:  test   %al,%al
083f974f +0x4450:  je     083f9800 <+0x4501>
083f9755 +0x4456:  mov    0x8(%ebp),%eax
083f9758 +0x4459:  mov    %eax,(%esp)
083f975b +0x445c:  call   083f8c34 <+0x3935>
083f9760 +0x4461:  mov    %eax,%ebx
083f9762 +0x4463:  mov    0x8(%ebp),%eax
083f9765 +0x4466:  mov    %eax,(%esp)
083f9768 +0x4469:  call   083f7fda <+0x2cdb>
083f976d +0x446e:  mov    %eax,%esi
083f976f +0x4470:  mov    0xc(%ebp),%eax
083f9772 +0x4473:  mov    %eax,(%esp)
083f9775 +0x4476:  call   083f99ca <+0x46cb>
083f977a +0x447b:  mov    %esi,0x8(%esp)
083f977e +0x447f:  mov    %eax,0x4(%esp)
083f9782 +0x4483:  mov    0x8(%ebp),%eax
083f9785 +0x4486:  mov    %eax,(%esp)
083f9788 +0x4489:  call   083f98a2 <+0x45a3>
083f978d +0x448e:  mov    %eax,(%ebx)
083f978f +0x4490:  mov    0x8(%ebp),%eax
083f9792 +0x4493:  mov    %eax,(%esp)
083f9795 +0x4496:  call   083f833c <+0x303d>
083f979a +0x449b:  mov    %eax,%ebx
083f979c +0x449d:  mov    0x8(%ebp),%eax
083f979f +0x44a0:  mov    %eax,(%esp)
083f97a2 +0x44a3:  call   083f8c34 <+0x3935>
083f97a7 +0x44a8:  mov    (%eax),%eax
083f97a9 +0x44aa:  mov    %eax,(%esp)
083f97ac +0x44ad:  call   083f99d5 <+0x46d6>
083f97b1 +0x44b2:  mov    %eax,(%ebx)
083f97b3 +0x44b4:  mov    0x8(%ebp),%eax
083f97b6 +0x44b7:  mov    %eax,(%esp)
083f97b9 +0x44ba:  call   083f8062 <+0x2d63>
083f97be +0x44bf:  mov    %eax,%ebx
083f97c0 +0x44c1:  mov    0x8(%ebp),%eax
083f97c3 +0x44c4:  mov    %eax,(%esp)
083f97c6 +0x44c7:  call   083f8c34 <+0x3935>
083f97cb +0x44cc:  mov    (%eax),%eax
083f97cd +0x44ce:  mov    %eax,(%esp)
083f97d0 +0x44d1:  call   083f99e8 <+0x46e9>
083f97d5 +0x44d6:  mov    %eax,(%ebx)
083f97d7 +0x44d8:  mov    0xc(%ebp),%eax
083f97da +0x44db:  mov    0x14(%eax),%edx
083f97dd +0x44de:  mov    0x8(%ebp),%eax
083f97e0 +0x44e1:  mov    %edx,0x14(%eax)
083f97e3 +0x44e4:  jmp    083f9800 <+0x4501>
083f97e5 +0x44e6:  mov    %edx,%ebx
083f97e7 +0x44e8:  mov    %eax,%esi
083f97e9 +0x44ea:  mov    0x8(%ebp),%eax
083f97ec +0x44ed:  mov    %eax,(%esp)
083f97ef +0x44f0:  call   083f60e6 <+0xde7>
083f97f4 +0x44f5:  mov    %esi,%eax
083f97f6 +0x44f7:  mov    %ebx,%edx
083f97f8 +0x44f9:  mov    %eax,(%esp)
083f97fb +0x44fc:  call   08ae3750 <_Unwind_Resume>
083f9800 +0x4501:  add    $0x10,%esp
083f9803 +0x4504:  pop    %ebx
083f9804 +0x4505:  pop    %esi
083f9805 +0x4506:  pop    %ebp
083f9806 +0x4507:  ret
083f9807 +0x4508:  push   %ebp
083f9808 +0x4509:  mov    %esp,%ebp
083f980a +0x450b:  sub    $0x18,%esp
083f980d +0x450e:  lea    0x8(%ebp),%eax
083f9810 +0x4511:  mov    %eax,(%esp)
083f9813 +0x4514:  call   083f99fc <+0x46fd>
083f9818 +0x4519:  leave
083f9819 +0x451a:  ret
083f981a +0x451b:  push   %ebp
083f981b +0x451c:  mov    %esp,%ebp
083f981d +0x451e:  push   %esi
083f981e +0x451f:  push   %ebx
083f981f +0x4520:  sub    $0x10,%esp
083f9822 +0x4523:  mov    0x10(%ebp),%eax
083f9825 +0x4526:  mov    %eax,(%esp)
083f9828 +0x4529:  call   083f9441 <+0x4142>
083f982d +0x452e:  mov    %eax,%esi
083f982f +0x4530:  mov    0xc(%ebp),%eax
083f9832 +0x4533:  mov    %eax,(%esp)
083f9835 +0x4536:  call   083f9441 <+0x4142>
083f983a +0x453b:  mov    %eax,%ebx
083f983c +0x453d:  mov    0x8(%ebp),%eax
083f983f +0x4540:  mov    %eax,(%esp)
083f9842 +0x4543:  call   083f9441 <+0x4142>
083f9847 +0x4548:  mov    %esi,0x8(%esp)
083f984b +0x454c:  mov    %ebx,0x4(%esp)
083f984f +0x4550:  mov    %eax,(%esp)
083f9852 +0x4553:  call   083f9a06 <+0x4707>
083f9857 +0x4558:  add    $0x10,%esp
083f985a +0x455b:  pop    %ebx
083f985b +0x455c:  pop    %esi
083f985c +0x455d:  pop    %ebp
083f985d +0x455e:  ret
083f985e +0x455f:  push   %ebp
083f985f +0x4560:  mov    %esp,%ebp
083f9861 +0x4562:  sub    $0x10,%esp
083f9864 +0x4565:  mov    0x10(%ebp),%eax
083f9867 +0x4568:  mov    (%eax),%eax
083f9869 +0x456a:  mov    %eax,-0x4(%ebp)
083f986c +0x456d:  jmp    083f987e <+0x457f>
083f986e +0x456f:  mov    0x8(%ebp),%eax
083f9871 +0x4572:  mov    -0x4(%ebp),%edx
083f9874 +0x4575:  mov    %edx,(%eax)
083f9876 +0x4577:  subl   $0x1,0xc(%ebp)
083f987a +0x457b:  addl   $0x4,0x8(%ebp)
083f987e +0x457f:  cmpl   $0x0,0xc(%ebp)
083f9882 +0x4583:  setne  %al
083f9885 +0x4586:  test   %al,%al
083f9887 +0x4588:  jne    083f986e <+0x456f>
083f9889 +0x458a:  mov    0x8(%ebp),%eax
083f988c +0x458d:  leave
083f988d +0x458e:  ret
083f988e +0x458f:  push   %ebp
083f988f +0x4590:  mov    %esp,%ebp
083f9891 +0x4592:  mov    0x8(%ebp),%eax
083f9894 +0x4595:  pop    %ebp
083f9895 +0x4596:  ret
083f9896 +0x4597:  push   %ebp
083f9897 +0x4598:  mov    %esp,%ebp
083f9899 +0x459a:  mov    0x8(%ebp),%eax
083f989c +0x459d:  mov    0x8(%eax),%eax
083f989f +0x45a0:  pop    %ebp
083f98a0 +0x45a1:  ret
083f98a1 +0x45a2:  nop
083f98a2 +0x45a3:  push   %ebp
083f98a3 +0x45a4:  mov    %esp,%ebp
083f98a5 +0x45a6:  push   %esi
083f98a6 +0x45a7:  push   %ebx
083f98a7 +0x45a8:  sub    $0x20,%esp
083f98aa +0x45ab:  mov    0xc(%ebp),%eax
083f98ad +0x45ae:  mov    %eax,0x4(%esp)
083f98b1 +0x45b2:  mov    0x8(%ebp),%eax
083f98b4 +0x45b5:  mov    %eax,(%esp)
083f98b7 +0x45b8:  call   083f9a2c <+0x472d>
083f98bc +0x45bd:  mov    %eax,-0x10(%ebp)
083f98bf +0x45c0:  mov    0x10(%ebp),%edx
083f98c2 +0x45c3:  mov    -0x10(%ebp),%eax
083f98c5 +0x45c6:  mov    %edx,0x4(%eax)
083f98c8 +0x45c9:  mov    0xc(%ebp),%eax
083f98cb +0x45cc:  mov    0xc(%eax),%eax
083f98ce +0x45cf:  test   %eax,%eax
083f98d0 +0x45d1:  je     083f98fb <+0x45fc>
083f98d2 +0x45d3:  mov    0xc(%ebp),%eax
083f98d5 +0x45d6:  mov    %eax,(%esp)
083f98d8 +0x45d9:  call   083f8365 <+0x3066>
083f98dd +0x45de:  mov    -0x10(%ebp),%edx
083f98e0 +0x45e1:  mov    %edx,0x8(%esp)
083f98e4 +0x45e5:  mov    %eax,0x4(%esp)
083f98e8 +0x45e9:  mov    0x8(%ebp),%eax
083f98eb +0x45ec:  mov    %eax,(%esp)
083f98ee +0x45ef:  call   083f98a2 <+0x45a3>
083f98f3 +0x45f4:  mov    %eax,%edx
083f98f5 +0x45f6:  mov    -0x10(%ebp),%eax
083f98f8 +0x45f9:  mov    %edx,0xc(%eax)
083f98fb +0x45fc:  mov    -0x10(%ebp),%eax
083f98fe +0x45ff:  mov    %eax,0x10(%ebp)
083f9901 +0x4602:  mov    0xc(%ebp),%eax
083f9904 +0x4605:  mov    %eax,(%esp)
083f9907 +0x4608:  call   083f9a6d <+0x476e>
083f990c +0x460d:  mov    %eax,0xc(%ebp)
083f990f +0x4610:  jmp    083f997f <+0x4680>
083f9911 +0x4612:  mov    0xc(%ebp),%eax
083f9914 +0x4615:  mov    %eax,0x4(%esp)
083f9918 +0x4619:  mov    0x8(%ebp),%eax
083f991b +0x461c:  mov    %eax,(%esp)
083f991e +0x461f:  call   083f9a2c <+0x472d>
083f9923 +0x4624:  mov    %eax,-0xc(%ebp)
083f9926 +0x4627:  mov    -0xc(%ebp),%edx
083f9929 +0x462a:  mov    0x10(%ebp),%eax
083f992c +0x462d:  mov    %edx,0x8(%eax)
083f992f +0x4630:  mov    0x10(%ebp),%edx
083f9932 +0x4633:  mov    -0xc(%ebp),%eax
083f9935 +0x4636:  mov    %edx,0x4(%eax)
083f9938 +0x4639:  mov    0xc(%ebp),%eax
083f993b +0x463c:  mov    0xc(%eax),%eax
083f993e +0x463f:  test   %eax,%eax
083f9940 +0x4641:  je     083f996b <+0x466c>
083f9942 +0x4643:  mov    0xc(%ebp),%eax
083f9945 +0x4646:  mov    %eax,(%esp)
083f9948 +0x4649:  call   083f8365 <+0x3066>
083f994d +0x464e:  mov    -0xc(%ebp),%edx
083f9950 +0x4651:  mov    %edx,0x8(%esp)
083f9954 +0x4655:  mov    %eax,0x4(%esp)
083f9958 +0x4659:  mov    0x8(%ebp),%eax
083f995b +0x465c:  mov    %eax,(%esp)
083f995e +0x465f:  call   083f98a2 <+0x45a3>
083f9963 +0x4664:  mov    %eax,%edx
083f9965 +0x4666:  mov    -0xc(%ebp),%eax
083f9968 +0x4669:  mov    %edx,0xc(%eax)
083f996b +0x466c:  mov    -0xc(%ebp),%eax
083f996e +0x466f:  mov    %eax,0x10(%ebp)
083f9971 +0x4672:  mov    0xc(%ebp),%eax
083f9974 +0x4675:  mov    %eax,(%esp)
083f9977 +0x4678:  call   083f9a6d <+0x476e>
083f997c +0x467d:  mov    %eax,0xc(%ebp)
083f997f +0x4680:  cmpl   $0x0,0xc(%ebp)
083f9983 +0x4684:  setne  %al
083f9986 +0x4687:  test   %al,%al
083f9988 +0x4689:  jne    083f9911 <+0x4612>
083f998a +0x468b:  jmp    083f99c0 <+0x46c1>
083f998c +0x468d:  mov    %eax,(%esp)
083f998f +0x4690:  call   08725ce0 <__cxa_begin_catch>
083f9994 +0x4695:  mov    -0x10(%ebp),%eax
083f9997 +0x4698:  mov    %eax,0x4(%esp)
083f999b +0x469c:  mov    0x8(%ebp),%eax
083f999e +0x469f:  mov    %eax,(%esp)
083f99a1 +0x46a2:  call   083f6a1c <+0x171d>
083f99a6 +0x46a7:  call   08724be0 <__cxa_rethrow>
083f99ab +0x46ac:  mov    %edx,%ebx
083f99ad +0x46ae:  mov    %eax,%esi
083f99af +0x46b0:  call   08725c30 <__cxa_end_catch>
083f99b4 +0x46b5:  mov    %esi,%eax
083f99b6 +0x46b7:  mov    %ebx,%edx
083f99b8 +0x46b9:  mov    %eax,(%esp)
083f99bb +0x46bc:  call   08ae3750 <_Unwind_Resume>
083f99c0 +0x46c1:  mov    -0x10(%ebp),%eax
083f99c3 +0x46c4:  add    $0x20,%esp
083f99c6 +0x46c7:  pop    %ebx
083f99c7 +0x46c8:  pop    %esi
083f99c8 +0x46c9:  pop    %ebp
083f99c9 +0x46ca:  ret
083f99ca +0x46cb:  push   %ebp
083f99cb +0x46cc:  mov    %esp,%ebp
083f99cd +0x46ce:  mov    0x8(%ebp),%eax
083f99d0 +0x46d1:  mov    0x8(%eax),%eax
083f99d3 +0x46d4:  pop    %ebp
083f99d4 +0x46d5:  ret
083f99d5 +0x46d6:  push   %ebp
083f99d6 +0x46d7:  mov    %esp,%ebp
083f99d8 +0x46d9:  sub    $0x18,%esp
083f99db +0x46dc:  mov    0x8(%ebp),%eax
083f99de +0x46df:  mov    %eax,(%esp)
083f99e1 +0x46e2:  call   080f0f9a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x1c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
083f99e6 +0x46e7:  leave
083f99e7 +0x46e8:  ret
083f99e8 +0x46e9:  push   %ebp
083f99e9 +0x46ea:  mov    %esp,%ebp
083f99eb +0x46ec:  sub    $0x18,%esp
083f99ee +0x46ef:  mov    0x8(%ebp),%eax
083f99f1 +0x46f2:  mov    %eax,(%esp)
083f99f4 +0x46f5:  call   080f0fbc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e
083f99f9 +0x46fa:  leave
083f99fa +0x46fb:  ret
083f99fb +0x46fc:  nop
083f99fc +0x46fd:  push   %ebp
083f99fd +0x46fe:  mov    %esp,%ebp
083f99ff +0x4700:  mov    0x8(%ebp),%eax
083f9a02 +0x4703:  mov    (%eax),%eax
083f9a04 +0x4705:  pop    %ebp
083f9a05 +0x4706:  ret
083f9a06 +0x4707:  push   %ebp
083f9a07 +0x4708:  mov    %esp,%ebp
083f9a09 +0x470a:  sub    $0x28,%esp
083f9a0c +0x470d:  movb   $0x1,-0x9(%ebp)
083f9a10 +0x4711:  mov    0x10(%ebp),%eax
083f9a13 +0x4714:  mov    %eax,0x8(%esp)
083f9a17 +0x4718:  mov    0xc(%ebp),%eax
083f9a1a +0x471b:  mov    %eax,0x4(%esp)
083f9a1e +0x471f:  mov    0x8(%ebp),%eax
083f9a21 +0x4722:  mov    %eax,(%esp)
083f9a24 +0x4725:  call   083f9a78 <+0x4779>
083f9a29 +0x472a:  leave
083f9a2a +0x472b:  ret
083f9a2b +0x472c:  nop
083f9a2c +0x472d:  push   %ebp
083f9a2d +0x472e:  mov    %esp,%ebp
083f9a2f +0x4730:  sub    $0x28,%esp
083f9a32 +0x4733:  mov    0xc(%ebp),%eax
083f9a35 +0x4736:  add    $0x10,%eax
083f9a38 +0x4739:  mov    %eax,0x4(%esp)
083f9a3c +0x473d:  mov    0x8(%ebp),%eax
083f9a3f +0x4740:  mov    %eax,(%esp)
083f9a42 +0x4743:  call   083f8d74 <+0x3a75>
083f9a47 +0x4748:  mov    %eax,-0xc(%ebp)
083f9a4a +0x474b:  mov    0xc(%ebp),%eax
083f9a4d +0x474e:  mov    (%eax),%edx
083f9a4f +0x4750:  mov    -0xc(%ebp),%eax
083f9a52 +0x4753:  mov    %edx,(%eax)
083f9a54 +0x4755:  mov    -0xc(%ebp),%eax
083f9a57 +0x4758:  movl   $0x0,0x8(%eax)
083f9a5e +0x475f:  mov    -0xc(%ebp),%eax
083f9a61 +0x4762:  movl   $0x0,0xc(%eax)
083f9a68 +0x4769:  mov    -0xc(%ebp),%eax
083f9a6b +0x476c:  leave
083f9a6c +0x476d:  ret
083f9a6d +0x476e:  push   %ebp
083f9a6e +0x476f:  mov    %esp,%ebp
083f9a70 +0x4771:  mov    0x8(%ebp),%eax
083f9a73 +0x4774:  mov    0x8(%eax),%eax
083f9a76 +0x4777:  pop    %ebp
083f9a77 +0x4778:  ret
083f9a78 +0x4779:  push   %ebp
083f9a79 +0x477a:  mov    %esp,%ebp
083f9a7b +0x477c:  sub    $0x18,%esp
083f9a7e +0x477f:  mov    0xc(%ebp),%edx
083f9a81 +0x4782:  mov    0x8(%ebp),%eax
083f9a84 +0x4785:  mov    %edx,%ecx
083f9a86 +0x4787:  sub    %eax,%ecx
083f9a88 +0x4789:  mov    %ecx,%eax
083f9a8a +0x478b:  sar    $0x2,%eax
083f9a8d +0x478e:  shl    $0x2,%eax
083f9a90 +0x4791:  mov    %eax,0x8(%esp)
083f9a94 +0x4795:  mov    0x8(%ebp),%eax
083f9a97 +0x4798:  mov    %eax,0x4(%esp)
083f9a9b +0x479c:  mov    0x10(%ebp),%eax
083f9a9e +0x479f:  mov    %eax,(%esp)
083f9aa1 +0x47a2:  call   0807d880 <_init+0x178>
083f9aa6 +0x47a7:  mov    0xc(%ebp),%edx
083f9aa9 +0x47aa:  mov    0x8(%ebp),%eax
083f9aac +0x47ad:  mov    %edx,%ecx
083f9aae +0x47af:  sub    %eax,%ecx
083f9ab0 +0x47b1:  mov    %ecx,%eax
083f9ab2 +0x47b3:  sar    $0x2,%eax
083f9ab5 +0x47b6:  shl    $0x2,%eax
083f9ab8 +0x47b9:  add    0x10(%ebp),%eax
083f9abb +0x47bc:  leave
083f9abc +0x47bd:  ret
083f9abd +0x47be:  nop
083f9abe +0x47bf:  nop
083f9abf +0x47c0:  nop
```

## 反编译 C

```c
// <global>::global @ 0x83f52ff

/* MySQL::MySQL() */

void MySQL::_GLOBAL__I_MySQL(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
