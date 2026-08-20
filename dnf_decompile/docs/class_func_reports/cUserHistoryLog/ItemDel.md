# ItemDel

`_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason`

`cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868340a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868340a  _ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason
#           cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
# range [0x0868340a, 0x08683a1f]
0868340a +0x000:  push   %ebp
0868340b +0x001:  mov    %esp,%ebp
0868340d +0x003:  push   %edi
0868340e +0x004:  push   %esi
0868340f +0x005:  push   %ebx
08683410 +0x006:  sub    $0x17c,%esp
08683416 +0x00c:  cmpl   $0x1,0x1c(%ebp)
0868341a +0x010:  je     08683426 <+0x1c>
0868341c +0x012:  cmpl   $0x2,0x1c(%ebp)
08683420 +0x016:  jne    086836ca <+0x2c0>
08683426 +0x01c:  mov    0x8(%ebp),%eax
08683429 +0x01f:  add    $0x22,%eax
0868342c +0x022:  movzbl (%eax),%eax
0868342f +0x025:  test   %al,%al
08683431 +0x027:  je     0868394c <+0x542>
08683437 +0x02d:  mov    0x18(%ebp),%eax
0868343a +0x030:  lea    0x15(%eax),%ebx
0868343d +0x033:  lea    -0x42(%ebp),%eax
08683440 +0x036:  mov    %eax,(%esp)
08683443 +0x039:  call   084ebe58 <_GLOBAL__I__Z7getUserj+0x2e0a>  ; global constructors keyed to getUser(unsigned int)+0x2e0a
08683448 +0x03e:  mov    %ebx,0x4(%esp)
0868344c +0x042:  lea    -0x42(%ebp),%eax
0868344f +0x045:  mov    %eax,(%esp)
08683452 +0x048:  call   084ebe82 <_GLOBAL__I__Z7getUserj+0x2e34>  ; global constructors keyed to getUser(unsigned int)+0x2e34
08683457 +0x04d:  mov    %eax,-0xfc(%ebp)
0868345d +0x053:  mov    0x18(%ebp),%eax
08683460 +0x056:  mov    %eax,(%esp)
08683463 +0x059:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08683468 +0x05e:  movzbl %al,%eax
0868346b +0x061:  mov    %eax,-0xf8(%ebp)
08683471 +0x067:  mov    0x18(%ebp),%eax
08683474 +0x06a:  movzbl (%eax),%eax
08683477 +0x06d:  movzbl %al,%eax
0868347a +0x070:  mov    %eax,-0xf4(%ebp)
08683480 +0x076:  mov    0x18(%ebp),%eax
08683483 +0x079:  movzbl 0x32(%eax),%eax
08683487 +0x07d:  movzbl %al,%eax
0868348a +0x080:  mov    %eax,-0xf0(%ebp)
08683490 +0x086:  mov    0x18(%ebp),%eax
08683493 +0x089:  movzbl 0x31(%eax),%eax
08683497 +0x08d:  movzbl %al,%eax
0868349a +0x090:  mov    %eax,-0xec(%ebp)
086834a0 +0x096:  mov    0x18(%ebp),%eax
086834a3 +0x099:  movzbl 0x30(%eax),%eax
086834a7 +0x09d:  movzbl %al,%eax
086834aa +0x0a0:  mov    %eax,-0xe8(%ebp)
086834b0 +0x0a6:  mov    0x18(%ebp),%eax
086834b3 +0x0a9:  movzbl 0x2f(%eax),%eax
086834b7 +0x0ad:  movzbl %al,%eax
086834ba +0x0b0:  mov    %eax,-0xe4(%ebp)
086834c0 +0x0b6:  mov    0x18(%ebp),%eax
086834c3 +0x0b9:  movzbl 0x2e(%eax),%eax
086834c7 +0x0bd:  movzbl %al,%eax
086834ca +0x0c0:  mov    %eax,-0xe0(%ebp)
086834d0 +0x0c6:  mov    0x18(%ebp),%eax
086834d3 +0x0c9:  movzbl 0x2d(%eax),%eax
086834d7 +0x0cd:  movzbl %al,%eax
086834da +0x0d0:  mov    %eax,-0xdc(%ebp)
086834e0 +0x0d6:  mov    0x18(%ebp),%eax
086834e3 +0x0d9:  movzbl 0x2c(%eax),%eax
086834e7 +0x0dd:  movzbl %al,%eax
086834ea +0x0e0:  mov    %eax,-0xd8(%ebp)
086834f0 +0x0e6:  mov    0x18(%ebp),%eax
086834f3 +0x0e9:  movzbl 0x2b(%eax),%eax
086834f7 +0x0ed:  movzbl %al,%eax
086834fa +0x0f0:  mov    %eax,-0xd4(%ebp)
08683500 +0x0f6:  mov    0x18(%ebp),%eax
08683503 +0x0f9:  movzbl 0x2a(%eax),%eax
08683507 +0x0fd:  movzbl %al,%eax
0868350a +0x100:  mov    %eax,-0xd0(%ebp)
08683510 +0x106:  mov    0x18(%ebp),%eax
08683513 +0x109:  movzbl 0x29(%eax),%eax
08683517 +0x10d:  movzbl %al,%eax
0868351a +0x110:  mov    %eax,-0xcc(%ebp)
08683520 +0x116:  mov    0x18(%ebp),%eax
08683523 +0x119:  movzbl 0x28(%eax),%eax
08683527 +0x11d:  movzbl %al,%eax
0868352a +0x120:  mov    %eax,-0xc8(%ebp)
08683530 +0x126:  mov    0x18(%ebp),%eax
08683533 +0x129:  movzbl 0x27(%eax),%eax
08683537 +0x12d:  movzbl %al,%eax
0868353a +0x130:  mov    %eax,-0xc4(%ebp)
08683540 +0x136:  mov    0x18(%ebp),%eax
08683543 +0x139:  movzbl 0x26(%eax),%eax
08683547 +0x13d:  movzbl %al,%eax
0868354a +0x140:  mov    %eax,-0xc0(%ebp)
08683550 +0x146:  mov    0x18(%ebp),%eax
08683553 +0x149:  movzbl 0x25(%eax),%eax
08683557 +0x14d:  movzbl %al,%eax
0868355a +0x150:  mov    %eax,-0xbc(%ebp)
08683560 +0x156:  mov    0x18(%ebp),%eax
08683563 +0x159:  movzwl 0xb(%eax),%eax
08683567 +0x15d:  movzwl %ax,%eax
0868356a +0x160:  mov    %eax,-0xb8(%ebp)
08683570 +0x166:  mov    0x18(%ebp),%eax
08683573 +0x169:  mov    %eax,(%esp)
08683576 +0x16c:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0868357b +0x171:  movzbl %al,%eax
0868357e +0x174:  mov    %eax,-0xb4(%ebp)
08683584 +0x17a:  mov    0x8(%ebp),%eax
08683587 +0x17d:  add    $0x4,%eax
0868358a +0x180:  mov    %eax,-0xb0(%ebp)
08683590 +0x186:  mov    0x8(%ebp),%eax
08683593 +0x189:  lea    0x22(%eax),%edi
08683596 +0x18c:  mov    0x1c(%ebp),%esi
08683599 +0x18f:  mov    0x18(%ebp),%eax
0868359c +0x192:  mov    0x2(%eax),%ebx
0868359f +0x195:  mov    0xc(%ebp),%ecx
086835a2 +0x198:  mov    0x8(%ebp),%eax
086835a5 +0x19b:  mov    (%eax),%edx
086835a7 +0x19d:  mov    -0xfc(%ebp),%eax
086835ad +0x1a3:  mov    %eax,0x6c(%esp)
086835b1 +0x1a7:  mov    -0xf8(%ebp),%eax
086835b7 +0x1ad:  mov    %eax,0x68(%esp)
086835bb +0x1b1:  mov    -0xf4(%ebp),%eax
086835c1 +0x1b7:  mov    %eax,0x64(%esp)
086835c5 +0x1bb:  mov    -0xf0(%ebp),%eax
086835cb +0x1c1:  mov    %eax,0x60(%esp)
086835cf +0x1c5:  mov    -0xec(%ebp),%eax
086835d5 +0x1cb:  mov    %eax,0x5c(%esp)
086835d9 +0x1cf:  mov    -0xe8(%ebp),%eax
086835df +0x1d5:  mov    %eax,0x58(%esp)
086835e3 +0x1d9:  mov    -0xe4(%ebp),%eax
086835e9 +0x1df:  mov    %eax,0x54(%esp)
086835ed +0x1e3:  mov    -0xe0(%ebp),%eax
086835f3 +0x1e9:  mov    %eax,0x50(%esp)
086835f7 +0x1ed:  mov    -0xdc(%ebp),%eax
086835fd +0x1f3:  mov    %eax,0x4c(%esp)
08683601 +0x1f7:  mov    -0xd8(%ebp),%eax
08683607 +0x1fd:  mov    %eax,0x48(%esp)
0868360b +0x201:  mov    -0xd4(%ebp),%eax
08683611 +0x207:  mov    %eax,0x44(%esp)
08683615 +0x20b:  mov    -0xd0(%ebp),%eax
0868361b +0x211:  mov    %eax,0x40(%esp)
0868361f +0x215:  mov    -0xcc(%ebp),%eax
08683625 +0x21b:  mov    %eax,0x3c(%esp)
08683629 +0x21f:  mov    -0xc8(%ebp),%eax
0868362f +0x225:  mov    %eax,0x38(%esp)
08683633 +0x229:  mov    -0xc4(%ebp),%eax
08683639 +0x22f:  mov    %eax,0x34(%esp)
0868363d +0x233:  mov    -0xc0(%ebp),%eax
08683643 +0x239:  mov    %eax,0x30(%esp)
08683647 +0x23d:  mov    -0xbc(%ebp),%eax
0868364d +0x243:  mov    %eax,0x2c(%esp)
08683651 +0x247:  mov    -0xb8(%ebp),%eax
08683657 +0x24d:  mov    %eax,0x28(%esp)
0868365b +0x251:  mov    -0xb4(%ebp),%eax
08683661 +0x257:  mov    %eax,0x24(%esp)
08683665 +0x25b:  mov    -0xb0(%ebp),%eax
0868366b +0x261:  mov    %eax,0x20(%esp)
0868366f +0x265:  mov    %edi,0x1c(%esp)
08683673 +0x269:  mov    %esi,0x18(%esp)
08683677 +0x26d:  mov    0x14(%ebp),%eax
0868367a +0x270:  mov    %eax,0x14(%esp)
0868367e +0x274:  mov    0x10(%ebp),%eax
08683681 +0x277:  mov    %eax,0x10(%esp)
08683685 +0x27b:  mov    %ebx,0xc(%esp)
08683689 +0x27f:  mov    %ecx,0x8(%esp)
0868368d +0x283:  movl   $"Item-,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s",0x4(%esp)
08683695 +0x28b:  mov    %edx,(%esp)
08683698 +0x28e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868369d +0x293:  jmp    086836ba <+0x2b0>
0868369f +0x295:  mov    %edx,%ebx
086836a1 +0x297:  mov    %eax,%esi
086836a3 +0x299:  lea    -0x42(%ebp),%eax
086836a6 +0x29c:  mov    %eax,(%esp)
086836a9 +0x29f:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
086836ae +0x2a4:  mov    %esi,%eax
086836b0 +0x2a6:  mov    %ebx,%edx
086836b2 +0x2a8:  mov    %eax,(%esp)
086836b5 +0x2ab:  call   08ae3750 <_Unwind_Resume>
086836ba +0x2b0:  lea    -0x42(%ebp),%eax
086836bd +0x2b3:  mov    %eax,(%esp)
086836c0 +0x2b6:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
086836c5 +0x2bb:  jmp    0868394d <+0x543>
086836ca +0x2c0:  mov    0x18(%ebp),%eax
086836cd +0x2c3:  lea    0x15(%eax),%ebx
086836d0 +0x2c6:  lea    -0x2d(%ebp),%eax
086836d3 +0x2c9:  mov    %eax,(%esp)
086836d6 +0x2cc:  call   084ebe58 <_GLOBAL__I__Z7getUserj+0x2e0a>  ; global constructors keyed to getUser(unsigned int)+0x2e0a
086836db +0x2d1:  mov    %ebx,0x4(%esp)
086836df +0x2d5:  lea    -0x2d(%ebp),%eax
086836e2 +0x2d8:  mov    %eax,(%esp)
086836e5 +0x2db:  call   084ebe82 <_GLOBAL__I__Z7getUserj+0x2e34>  ; global constructors keyed to getUser(unsigned int)+0x2e34
086836ea +0x2e0:  mov    %eax,-0xac(%ebp)
086836f0 +0x2e6:  mov    0x18(%ebp),%eax
086836f3 +0x2e9:  mov    %eax,(%esp)
086836f6 +0x2ec:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
086836fb +0x2f1:  movzbl %al,%eax
086836fe +0x2f4:  mov    %eax,-0xa8(%ebp)
08683704 +0x2fa:  mov    0x18(%ebp),%eax
08683707 +0x2fd:  movzbl (%eax),%eax
0868370a +0x300:  movzbl %al,%eax
0868370d +0x303:  mov    %eax,-0xa4(%ebp)
08683713 +0x309:  mov    0x18(%ebp),%eax
08683716 +0x30c:  movzbl 0x32(%eax),%eax
0868371a +0x310:  movzbl %al,%eax
0868371d +0x313:  mov    %eax,-0xa0(%ebp)
08683723 +0x319:  mov    0x18(%ebp),%eax
08683726 +0x31c:  movzbl 0x31(%eax),%eax
0868372a +0x320:  movzbl %al,%eax
0868372d +0x323:  mov    %eax,-0x9c(%ebp)
08683733 +0x329:  mov    0x18(%ebp),%eax
08683736 +0x32c:  movzbl 0x30(%eax),%eax
0868373a +0x330:  movzbl %al,%eax
0868373d +0x333:  mov    %eax,-0x98(%ebp)
08683743 +0x339:  mov    0x18(%ebp),%eax
08683746 +0x33c:  movzbl 0x2f(%eax),%eax
0868374a +0x340:  movzbl %al,%eax
0868374d +0x343:  mov    %eax,-0x94(%ebp)
08683753 +0x349:  mov    0x18(%ebp),%eax
08683756 +0x34c:  movzbl 0x2e(%eax),%eax
0868375a +0x350:  movzbl %al,%eax
0868375d +0x353:  mov    %eax,-0x90(%ebp)
08683763 +0x359:  mov    0x18(%ebp),%eax
08683766 +0x35c:  movzbl 0x2d(%eax),%eax
0868376a +0x360:  movzbl %al,%eax
0868376d +0x363:  mov    %eax,-0x8c(%ebp)
08683773 +0x369:  mov    0x18(%ebp),%eax
08683776 +0x36c:  movzbl 0x2c(%eax),%eax
0868377a +0x370:  movzbl %al,%eax
0868377d +0x373:  mov    %eax,-0x88(%ebp)
08683783 +0x379:  mov    0x18(%ebp),%eax
08683786 +0x37c:  movzbl 0x2b(%eax),%eax
0868378a +0x380:  movzbl %al,%eax
0868378d +0x383:  mov    %eax,-0x84(%ebp)
08683793 +0x389:  mov    0x18(%ebp),%eax
08683796 +0x38c:  movzbl 0x2a(%eax),%eax
0868379a +0x390:  movzbl %al,%eax
0868379d +0x393:  mov    %eax,-0x80(%ebp)
086837a0 +0x396:  mov    0x18(%ebp),%eax
086837a3 +0x399:  movzbl 0x29(%eax),%eax
086837a7 +0x39d:  movzbl %al,%eax
086837aa +0x3a0:  mov    %eax,-0x7c(%ebp)
086837ad +0x3a3:  mov    0x18(%ebp),%eax
086837b0 +0x3a6:  movzbl 0x28(%eax),%eax
086837b4 +0x3aa:  movzbl %al,%eax
086837b7 +0x3ad:  mov    %eax,-0x78(%ebp)
086837ba +0x3b0:  mov    0x18(%ebp),%eax
086837bd +0x3b3:  movzbl 0x27(%eax),%eax
086837c1 +0x3b7:  movzbl %al,%eax
086837c4 +0x3ba:  mov    %eax,-0x74(%ebp)
086837c7 +0x3bd:  mov    0x18(%ebp),%eax
086837ca +0x3c0:  movzbl 0x26(%eax),%eax
086837ce +0x3c4:  movzbl %al,%eax
086837d1 +0x3c7:  mov    %eax,-0x70(%ebp)
086837d4 +0x3ca:  mov    0x18(%ebp),%eax
086837d7 +0x3cd:  movzbl 0x25(%eax),%eax
086837db +0x3d1:  movzbl %al,%eax
086837de +0x3d4:  mov    %eax,-0x6c(%ebp)
086837e1 +0x3d7:  mov    0x18(%ebp),%eax
086837e4 +0x3da:  movzwl 0xb(%eax),%eax
086837e8 +0x3de:  movzwl %ax,%eax
086837eb +0x3e1:  mov    %eax,-0x68(%ebp)
086837ee +0x3e4:  mov    0x18(%ebp),%eax
086837f1 +0x3e7:  mov    %eax,(%esp)
086837f4 +0x3ea:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086837f9 +0x3ef:  movzbl %al,%eax
086837fc +0x3f2:  mov    %eax,-0x64(%ebp)
086837ff +0x3f5:  mov    0x18(%ebp),%eax
08683802 +0x3f8:  movzwl 0x12(%eax),%eax
08683806 +0x3fc:  movzwl %ax,%eax
08683809 +0x3ff:  mov    %eax,-0x60(%ebp)
0868380c +0x402:  mov    0x18(%ebp),%eax
0868380f +0x405:  movzbl 0x11(%eax),%eax
08683813 +0x409:  movzbl %al,%eax
08683816 +0x40c:  mov    %eax,-0x5c(%ebp)
08683819 +0x40f:  mov    0x18(%ebp),%eax
0868381c +0x412:  mov    0xd(%eax),%eax
0868381f +0x415:  mov    %eax,-0x58(%ebp)
08683822 +0x418:  mov    0x18(%ebp),%eax
08683825 +0x41b:  mov    0x7(%eax),%edi
08683828 +0x41e:  mov    0x1c(%ebp),%esi
0868382b +0x421:  mov    0x18(%ebp),%eax
0868382e +0x424:  mov    0x2(%eax),%ebx
08683831 +0x427:  mov    0xc(%ebp),%ecx
08683834 +0x42a:  mov    0x8(%ebp),%eax
08683837 +0x42d:  mov    (%eax),%edx
08683839 +0x42f:  mov    -0xac(%ebp),%eax
0868383f +0x435:  mov    %eax,0x74(%esp)
08683843 +0x439:  mov    -0xa8(%ebp),%eax
08683849 +0x43f:  mov    %eax,0x70(%esp)
0868384d +0x443:  mov    -0xa4(%ebp),%eax
08683853 +0x449:  mov    %eax,0x6c(%esp)
08683857 +0x44d:  mov    -0xa0(%ebp),%eax
0868385d +0x453:  mov    %eax,0x68(%esp)
08683861 +0x457:  mov    -0x9c(%ebp),%eax
08683867 +0x45d:  mov    %eax,0x64(%esp)
0868386b +0x461:  mov    -0x98(%ebp),%eax
08683871 +0x467:  mov    %eax,0x60(%esp)
08683875 +0x46b:  mov    -0x94(%ebp),%eax
0868387b +0x471:  mov    %eax,0x5c(%esp)
0868387f +0x475:  mov    -0x90(%ebp),%eax
08683885 +0x47b:  mov    %eax,0x58(%esp)
08683889 +0x47f:  mov    -0x8c(%ebp),%eax
0868388f +0x485:  mov    %eax,0x54(%esp)
08683893 +0x489:  mov    -0x88(%ebp),%eax
08683899 +0x48f:  mov    %eax,0x50(%esp)
0868389d +0x493:  mov    -0x84(%ebp),%eax
086838a3 +0x499:  mov    %eax,0x4c(%esp)
086838a7 +0x49d:  mov    -0x80(%ebp),%eax
086838aa +0x4a0:  mov    %eax,0x48(%esp)
086838ae +0x4a4:  mov    -0x7c(%ebp),%eax
086838b1 +0x4a7:  mov    %eax,0x44(%esp)
086838b5 +0x4ab:  mov    -0x78(%ebp),%eax
086838b8 +0x4ae:  mov    %eax,0x40(%esp)
086838bc +0x4b2:  mov    -0x74(%ebp),%eax
086838bf +0x4b5:  mov    %eax,0x3c(%esp)
086838c3 +0x4b9:  mov    -0x70(%ebp),%eax
086838c6 +0x4bc:  mov    %eax,0x38(%esp)
086838ca +0x4c0:  mov    -0x6c(%ebp),%eax
086838cd +0x4c3:  mov    %eax,0x34(%esp)
086838d1 +0x4c7:  mov    -0x68(%ebp),%eax
086838d4 +0x4ca:  mov    %eax,0x30(%esp)
086838d8 +0x4ce:  mov    -0x64(%ebp),%eax
086838db +0x4d1:  mov    %eax,0x2c(%esp)
086838df +0x4d5:  mov    -0x60(%ebp),%eax
086838e2 +0x4d8:  mov    %eax,0x28(%esp)
086838e6 +0x4dc:  mov    -0x5c(%ebp),%eax
086838e9 +0x4df:  mov    %eax,0x24(%esp)
086838ed +0x4e3:  mov    -0x58(%ebp),%eax
086838f0 +0x4e6:  mov    %eax,0x20(%esp)
086838f4 +0x4ea:  mov    %edi,0x1c(%esp)
086838f8 +0x4ee:  mov    %esi,0x18(%esp)
086838fc +0x4f2:  mov    0x14(%ebp),%eax
086838ff +0x4f5:  mov    %eax,0x14(%esp)
08683903 +0x4f9:  mov    0x10(%ebp),%eax
08683906 +0x4fc:  mov    %eax,0x10(%esp)
0868390a +0x500:  mov    %ebx,0xc(%esp)
0868390e +0x504:  mov    %ecx,0x8(%esp)
08683912 +0x508:  movl   $"Item-,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s",0x4(%esp)
0868391a +0x510:  mov    %edx,(%esp)
0868391d +0x513:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683922 +0x518:  jmp    0868393f <+0x535>
08683924 +0x51a:  mov    %edx,%ebx
08683926 +0x51c:  mov    %eax,%esi
08683928 +0x51e:  lea    -0x2d(%ebp),%eax
0868392b +0x521:  mov    %eax,(%esp)
0868392e +0x524:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
08683933 +0x529:  mov    %esi,%eax
08683935 +0x52b:  mov    %ebx,%edx
08683937 +0x52d:  mov    %eax,(%esp)
0868393a +0x530:  call   08ae3750 <_Unwind_Resume>
0868393f +0x535:  lea    -0x2d(%ebp),%eax
08683942 +0x538:  mov    %eax,(%esp)
08683945 +0x53b:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
0868394a +0x540:  jmp    0868394d <+0x543>
0868394c +0x542:  nop
0868394d +0x543:  cmpl   $0x8,0x1c(%ebp)
08683951 +0x547:  jne    08683a14 <+0x60a>
08683957 +0x54d:  mov    0x18(%ebp),%eax
0868395a +0x550:  movzbl 0x1(%eax),%eax
0868395e +0x554:  cmp    $0x1,%al
08683960 +0x556:  jne    08683a14 <+0x60a>
08683966 +0x55c:  mov    0x18(%ebp),%eax
08683969 +0x55f:  add    $0x11,%eax
0868396c +0x562:  mov    %eax,(%esp)
0868396f +0x565:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08683974 +0x56a:  movzbl %al,%ebx
08683977 +0x56d:  mov    0x18(%ebp),%eax
0868397a +0x570:  add    $0x11,%eax
0868397d +0x573:  mov    %eax,(%esp)
08683980 +0x576:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08683985 +0x57b:  movzwl %ax,%edi
08683988 +0x57e:  mov    0x18(%ebp),%eax
0868398b +0x581:  add    $0x11,%eax
0868398e +0x584:  mov    %eax,(%esp)
08683991 +0x587:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08683996 +0x58c:  movzbl %al,%eax
08683999 +0x58f:  mov    %eax,-0x54(%ebp)
0868399c +0x592:  mov    0x18(%ebp),%eax
0868399f +0x595:  mov    0xd(%eax),%eax
086839a2 +0x598:  mov    %eax,-0x50(%ebp)
086839a5 +0x59b:  mov    0x18(%ebp),%eax
086839a8 +0x59e:  movzbl 0x33(%eax),%eax
086839ac +0x5a2:  and    $0x1f,%eax
086839af +0x5a5:  movzbl %al,%eax
086839b2 +0x5a8:  mov    %eax,-0x4c(%ebp)
086839b5 +0x5ab:  mov    0x18(%ebp),%eax
086839b8 +0x5ae:  mov    %eax,(%esp)
086839bb +0x5b1:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086839c0 +0x5b6:  mov    %eax,%esi
086839c2 +0x5b8:  mov    0x18(%ebp),%eax
086839c5 +0x5bb:  mov    %eax,(%esp)
086839c8 +0x5be:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086839cd +0x5c3:  movzbl %al,%ecx
086839d0 +0x5c6:  mov    0x18(%ebp),%eax
086839d3 +0x5c9:  mov    0x2(%eax),%edx
086839d6 +0x5cc:  mov    0x8(%ebp),%eax
086839d9 +0x5cf:  mov    (%eax),%eax
086839db +0x5d1:  mov    %ebx,0x24(%esp)
086839df +0x5d5:  mov    %edi,0x20(%esp)
086839e3 +0x5d9:  mov    -0x54(%ebp),%ebx
086839e6 +0x5dc:  mov    %ebx,0x1c(%esp)
086839ea +0x5e0:  mov    -0x50(%ebp),%ebx
086839ed +0x5e3:  mov    %ebx,0x18(%esp)
086839f1 +0x5e7:  mov    -0x4c(%ebp),%ebx
086839f4 +0x5ea:  mov    %ebx,0x14(%esp)
086839f8 +0x5ee:  mov    %esi,0x10(%esp)
086839fc +0x5f2:  mov    %ecx,0xc(%esp)
08683a00 +0x5f6:  mov    %edx,0x8(%esp)
08683a04 +0x5fa:  movl   $"Compound-,%u,%d,%d,%d,%d,%d,%d,%d,",0x4(%esp)
08683a0c +0x602:  mov    %eax,(%esp)
08683a0f +0x605:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683a14 +0x60a:  add    $0x17c,%esp
08683a1a +0x610:  pop    %ebx
08683a1b +0x611:  pop    %esi
08683a1c +0x612:  pop    %edi
08683a1d +0x613:  pop    %ebp
08683a1e +0x614:  ret
08683a1f +0x615:  nop
```

## 反编译 C

```c
// cUserHistoryLog::ItemDel @ 0x868340a

/* cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason) */

void __thiscall
cUserHistoryLog::ItemDel
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
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  CItemGloballyUniqueIdentifierPrint local_46 [21];
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  if ((param_6 == 1) || (param_6 == 2)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_46);
                    /* try { // try from 08683452 to 0868369c has its CatchHandler @ 0868369f */
      uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                         (local_46,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
      uVar18 = Inven_Item::GetReSealCount(param_5);
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
      uVar16 = *(ushort *)(param_5 + 0xb);
      uVar19 = Inven_Item::GetUpgrade(param_5);
      CUser::LogHistory(*(CUser **)this,
                        "Item-,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                        ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,this + 0x22,
                        this + 4,uVar19 & 0xff,(uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,
                        (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                        (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                        (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                        (uint)(byte)IVar1,uVar18 & 0xff,uVar17);
      CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_46);
    }
  }
  else {
    CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 086836e5 to 08683921 has its CatchHandler @ 08683924 */
    uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                       (local_31,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
    uVar18 = Inven_Item::GetReSealCount(param_5);
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
    uVar16 = *(ushort *)(param_5 + 0xb);
    uVar19 = Inven_Item::GetUpgrade(param_5);
    CUser::LogHistory(*(CUser **)this,
                      "Item-,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                      ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,
                      *(undefined4 *)(param_5 + 7),*(undefined4 *)(param_5 + 0xd),
                      (uint)(byte)param_5[0x11],(uint)*(ushort *)(param_5 + 0x12),uVar19 & 0xff,
                      (uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,(uint)(byte)IVar13,
                      (uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,(uint)(byte)IVar9,
                      (uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,(uint)(byte)IVar5,
                      (uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,(uint)(byte)IVar1,
                      uVar18 & 0xff,uVar17);
    CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  }
  if ((param_6 == 8) && (param_5[1] == (Inven_Item)0x1)) {
    uVar18 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_5 + 0x11));
    uVar19 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_5 + 0x11));
    uVar20 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_5 + 0x11));
    uVar17 = *(undefined4 *)(param_5 + 0xd);
    IVar1 = param_5[0x33];
    uVar21 = Inven_Item::get_add_info(param_5);
    uVar22 = Inven_Item::GetUpgrade(param_5);
    CUser::LogHistory(*(CUser **)this,"Compound-,%u,%d,%d,%d,%d,%d,%d,%d,",
                      *(undefined4 *)(param_5 + 2),uVar22 & 0xff,uVar21,(uint)((byte)IVar1 & 0x1f),
                      uVar17,uVar20 & 0xff,uVar19 & 0xffff,uVar18 & 0xff);
  }
  return;
}
```
