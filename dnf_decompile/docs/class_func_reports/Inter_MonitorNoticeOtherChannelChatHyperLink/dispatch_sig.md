# dispatch_sig

`_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeOtherChannelChatHyperLink` | `0x084e5528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e5528  _ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser*, char*, int)
# range [0x084e5528, 0x084e5c25]
084e5528 +0x000:  push   %ebp
084e5529 +0x001:  mov    %esp,%ebp
084e552b +0x003:  push   %esi
084e552c +0x004:  push   %ebx
084e552d +0x005:  add    $0xffffff80,%esp
084e5530 +0x008:  mov    0xc(%ebp),%eax
084e5533 +0x00b:  mov    %eax,(%esp)
084e5536 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e553b +0x013:  test   %eax,%eax
084e553d +0x015:  sete   %al
084e5540 +0x018:  test   %al,%al
084e5542 +0x01a:  je     084e554e <+0x26>
084e5544 +0x01c:  mov    $0x0,%ebx
084e5549 +0x021:  jmp    084e5c1c <+0x6f4>
084e554e +0x026:  mov    0x10(%ebp),%eax
084e5551 +0x029:  mov    %eax,-0x2c(%ebp)
084e5554 +0x02c:  mov    -0x2c(%ebp),%eax
084e5557 +0x02f:  movzbl 0x35(%eax),%eax
084e555b +0x033:  cmp    $0x1,%al
084e555d +0x035:  jne    084e56e6 <+0x1be>
084e5563 +0x03b:  lea    -0x44(%ebp),%eax
084e5566 +0x03e:  mov    %eax,(%esp)
084e5569 +0x041:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e556e +0x046:  movl   $0x173,0x8(%esp)
084e5576 +0x04e:  movl   $0x0,0x4(%esp)
084e557e +0x056:  lea    -0x44(%ebp),%eax
084e5581 +0x059:  mov    %eax,(%esp)
084e5584 +0x05c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e5589 +0x061:  mov    -0x2c(%ebp),%eax
084e558c +0x064:  mov    0xa(%eax),%eax
084e558f +0x067:  mov    %eax,0x4(%esp)
084e5593 +0x06b:  lea    -0x44(%ebp),%eax
084e5596 +0x06e:  mov    %eax,(%esp)
084e5599 +0x071:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e559e +0x076:  movl   $0x15,0x4(%esp)
084e55a6 +0x07e:  lea    -0x44(%ebp),%eax
084e55a9 +0x081:  mov    %eax,(%esp)
084e55ac +0x084:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e55b1 +0x089:  mov    -0x2c(%ebp),%eax
084e55b4 +0x08c:  add    $0x17,%eax
084e55b7 +0x08f:  mov    %eax,(%esp)
084e55ba +0x092:  call   0807e3b0 <_init+0xca8>
084e55bf +0x097:  mov    %eax,-0x24(%ebp)
084e55c2 +0x09a:  mov    -0x24(%ebp),%eax
084e55c5 +0x09d:  mov    %eax,0x4(%esp)
084e55c9 +0x0a1:  lea    -0x44(%ebp),%eax
084e55cc +0x0a4:  mov    %eax,(%esp)
084e55cf +0x0a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e55d4 +0x0ac:  mov    -0x2c(%ebp),%eax
084e55d7 +0x0af:  lea    0x17(%eax),%edx
084e55da +0x0b2:  mov    -0x24(%ebp),%eax
084e55dd +0x0b5:  mov    %eax,0x8(%esp)
084e55e1 +0x0b9:  mov    %edx,0x4(%esp)
084e55e5 +0x0bd:  lea    -0x44(%ebp),%eax
084e55e8 +0x0c0:  mov    %eax,(%esp)
084e55eb +0x0c3:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e55f0 +0x0c8:  movl   $0x0,0x4(%esp)
084e55f8 +0x0d0:  lea    -0x44(%ebp),%eax
084e55fb +0x0d3:  mov    %eax,(%esp)
084e55fe +0x0d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5603 +0x0db:  movl   $0x0,0x4(%esp)
084e560b +0x0e3:  lea    -0x44(%ebp),%eax
084e560e +0x0e6:  mov    %eax,(%esp)
084e5611 +0x0e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5616 +0x0ee:  movl   $0x0,0x8(%esp)
084e561e +0x0f6:  movl   $"",0x4(%esp)
084e5626 +0x0fe:  lea    -0x44(%ebp),%eax
084e5629 +0x101:  mov    %eax,(%esp)
084e562c +0x104:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084e5631 +0x109:  mov    -0x2c(%ebp),%eax
084e5634 +0x10c:  movzbl 0x36(%eax),%eax
084e5638 +0x110:  movzbl %al,%eax
084e563b +0x113:  mov    %eax,0x4(%esp)
084e563f +0x117:  lea    -0x44(%ebp),%eax
084e5642 +0x11a:  mov    %eax,(%esp)
084e5645 +0x11d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e564a +0x122:  movl   $0x0,-0x20(%ebp)
084e5651 +0x129:  jmp    084e567d <+0x155>
084e5653 +0x12b:  mov    -0x20(%ebp),%eax
084e5656 +0x12e:  imul   $0x68,%eax,%eax
084e5659 +0x131:  add    $0x30,%eax
084e565c +0x134:  add    -0x2c(%ebp),%eax
084e565f +0x137:  add    $0x7,%eax
084e5662 +0x13a:  movl   $0x68,0x8(%esp)
084e566a +0x142:  mov    %eax,0x4(%esp)
084e566e +0x146:  lea    -0x44(%ebp),%eax
084e5671 +0x149:  mov    %eax,(%esp)
084e5674 +0x14c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e5679 +0x151:  addl   $0x1,-0x20(%ebp)
084e567d +0x155:  mov    -0x2c(%ebp),%eax
084e5680 +0x158:  movzbl 0x36(%eax),%eax
084e5684 +0x15c:  movzbl %al,%eax
084e5687 +0x15f:  cmp    -0x20(%ebp),%eax
084e568a +0x162:  setg   %al
084e568d +0x165:  test   %al,%al
084e568f +0x167:  jne    084e5653 <+0x12b>
084e5691 +0x169:  movl   $0x1,0x4(%esp)
084e5699 +0x171:  lea    -0x44(%ebp),%eax
084e569c +0x174:  mov    %eax,(%esp)
084e569f +0x177:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e56a4 +0x17c:  lea    -0x44(%ebp),%eax
084e56a7 +0x17f:  mov    %eax,0x4(%esp)
084e56ab +0x183:  mov    0xc(%ebp),%eax
084e56ae +0x186:  mov    %eax,(%esp)
084e56b1 +0x189:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e56b6 +0x18e:  mov    $0x0,%ebx
084e56bb +0x193:  lea    -0x44(%ebp),%eax
084e56be +0x196:  mov    %eax,(%esp)
084e56c1 +0x199:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e56c6 +0x19e:  jmp    084e5c1c <+0x6f4>
084e56cb +0x1a3:  mov    %edx,%ebx
084e56cd +0x1a5:  mov    %eax,%esi
084e56cf +0x1a7:  lea    -0x44(%ebp),%eax
084e56d2 +0x1aa:  mov    %eax,(%esp)
084e56d5 +0x1ad:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e56da +0x1b2:  mov    %esi,%eax
084e56dc +0x1b4:  mov    %ebx,%edx
084e56de +0x1b6:  mov    %eax,(%esp)
084e56e1 +0x1b9:  call   08ae3750 <_Unwind_Resume>
084e56e6 +0x1be:  mov    -0x2c(%ebp),%eax
084e56e9 +0x1c1:  movzbl 0x35(%eax),%eax
084e56ed +0x1c5:  cmp    $0x2,%al
084e56ef +0x1c7:  jne    084e5878 <+0x350>
084e56f5 +0x1cd:  lea    -0x50(%ebp),%eax
084e56f8 +0x1d0:  mov    %eax,(%esp)
084e56fb +0x1d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e5700 +0x1d8:  movl   $0x173,0x8(%esp)
084e5708 +0x1e0:  movl   $0x0,0x4(%esp)
084e5710 +0x1e8:  lea    -0x50(%ebp),%eax
084e5713 +0x1eb:  mov    %eax,(%esp)
084e5716 +0x1ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e571b +0x1f3:  mov    -0x2c(%ebp),%eax
084e571e +0x1f6:  mov    0xa(%eax),%eax
084e5721 +0x1f9:  mov    %eax,0x4(%esp)
084e5725 +0x1fd:  lea    -0x50(%ebp),%eax
084e5728 +0x200:  mov    %eax,(%esp)
084e572b +0x203:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5730 +0x208:  movl   $0x4d,0x4(%esp)
084e5738 +0x210:  lea    -0x50(%ebp),%eax
084e573b +0x213:  mov    %eax,(%esp)
084e573e +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5743 +0x21b:  mov    -0x2c(%ebp),%eax
084e5746 +0x21e:  add    $0x17,%eax
084e5749 +0x221:  mov    %eax,(%esp)
084e574c +0x224:  call   0807e3b0 <_init+0xca8>
084e5751 +0x229:  mov    %eax,-0x1c(%ebp)
084e5754 +0x22c:  mov    -0x1c(%ebp),%eax
084e5757 +0x22f:  mov    %eax,0x4(%esp)
084e575b +0x233:  lea    -0x50(%ebp),%eax
084e575e +0x236:  mov    %eax,(%esp)
084e5761 +0x239:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5766 +0x23e:  mov    -0x2c(%ebp),%eax
084e5769 +0x241:  lea    0x17(%eax),%edx
084e576c +0x244:  mov    -0x1c(%ebp),%eax
084e576f +0x247:  mov    %eax,0x8(%esp)
084e5773 +0x24b:  mov    %edx,0x4(%esp)
084e5777 +0x24f:  lea    -0x50(%ebp),%eax
084e577a +0x252:  mov    %eax,(%esp)
084e577d +0x255:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5782 +0x25a:  movl   $0x0,0x4(%esp)
084e578a +0x262:  lea    -0x50(%ebp),%eax
084e578d +0x265:  mov    %eax,(%esp)
084e5790 +0x268:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5795 +0x26d:  movl   $0x0,0x4(%esp)
084e579d +0x275:  lea    -0x50(%ebp),%eax
084e57a0 +0x278:  mov    %eax,(%esp)
084e57a3 +0x27b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e57a8 +0x280:  movl   $0x0,0x8(%esp)
084e57b0 +0x288:  movl   $"",0x4(%esp)
084e57b8 +0x290:  lea    -0x50(%ebp),%eax
084e57bb +0x293:  mov    %eax,(%esp)
084e57be +0x296:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084e57c3 +0x29b:  mov    -0x2c(%ebp),%eax
084e57c6 +0x29e:  movzbl 0x36(%eax),%eax
084e57ca +0x2a2:  movzbl %al,%eax
084e57cd +0x2a5:  mov    %eax,0x4(%esp)
084e57d1 +0x2a9:  lea    -0x50(%ebp),%eax
084e57d4 +0x2ac:  mov    %eax,(%esp)
084e57d7 +0x2af:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e57dc +0x2b4:  movl   $0x0,-0x18(%ebp)
084e57e3 +0x2bb:  jmp    084e580f <+0x2e7>
084e57e5 +0x2bd:  mov    -0x18(%ebp),%eax
084e57e8 +0x2c0:  imul   $0x68,%eax,%eax
084e57eb +0x2c3:  add    $0x30,%eax
084e57ee +0x2c6:  add    -0x2c(%ebp),%eax
084e57f1 +0x2c9:  add    $0x7,%eax
084e57f4 +0x2cc:  movl   $0x68,0x8(%esp)
084e57fc +0x2d4:  mov    %eax,0x4(%esp)
084e5800 +0x2d8:  lea    -0x50(%ebp),%eax
084e5803 +0x2db:  mov    %eax,(%esp)
084e5806 +0x2de:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e580b +0x2e3:  addl   $0x1,-0x18(%ebp)
084e580f +0x2e7:  mov    -0x2c(%ebp),%eax
084e5812 +0x2ea:  movzbl 0x36(%eax),%eax
084e5816 +0x2ee:  movzbl %al,%eax
084e5819 +0x2f1:  cmp    -0x18(%ebp),%eax
084e581c +0x2f4:  setg   %al
084e581f +0x2f7:  test   %al,%al
084e5821 +0x2f9:  jne    084e57e5 <+0x2bd>
084e5823 +0x2fb:  movl   $0x1,0x4(%esp)
084e582b +0x303:  lea    -0x50(%ebp),%eax
084e582e +0x306:  mov    %eax,(%esp)
084e5831 +0x309:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e5836 +0x30e:  lea    -0x50(%ebp),%eax
084e5839 +0x311:  mov    %eax,0x4(%esp)
084e583d +0x315:  mov    0xc(%ebp),%eax
084e5840 +0x318:  mov    %eax,(%esp)
084e5843 +0x31b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e5848 +0x320:  mov    $0x0,%ebx
084e584d +0x325:  lea    -0x50(%ebp),%eax
084e5850 +0x328:  mov    %eax,(%esp)
084e5853 +0x32b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5858 +0x330:  jmp    084e5c1c <+0x6f4>
084e585d +0x335:  mov    %edx,%ebx
084e585f +0x337:  mov    %eax,%esi
084e5861 +0x339:  lea    -0x50(%ebp),%eax
084e5864 +0x33c:  mov    %eax,(%esp)
084e5867 +0x33f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e586c +0x344:  mov    %esi,%eax
084e586e +0x346:  mov    %ebx,%edx
084e5870 +0x348:  mov    %eax,(%esp)
084e5873 +0x34b:  call   08ae3750 <_Unwind_Resume>
084e5878 +0x350:  mov    -0x2c(%ebp),%eax
084e587b +0x353:  movzbl 0x35(%eax),%eax
084e587f +0x357:  cmp    $0x3,%al
084e5881 +0x359:  jne    084e5a0a <+0x4e2>
084e5887 +0x35f:  lea    -0x5c(%ebp),%eax
084e588a +0x362:  mov    %eax,(%esp)
084e588d +0x365:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e5892 +0x36a:  movl   $0x173,0x8(%esp)
084e589a +0x372:  movl   $0x0,0x4(%esp)
084e58a2 +0x37a:  lea    -0x5c(%ebp),%eax
084e58a5 +0x37d:  mov    %eax,(%esp)
084e58a8 +0x380:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e58ad +0x385:  mov    -0x2c(%ebp),%eax
084e58b0 +0x388:  mov    0xa(%eax),%eax
084e58b3 +0x38b:  mov    %eax,0x4(%esp)
084e58b7 +0x38f:  lea    -0x5c(%ebp),%eax
084e58ba +0x392:  mov    %eax,(%esp)
084e58bd +0x395:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e58c2 +0x39a:  movl   $0x5a,0x4(%esp)
084e58ca +0x3a2:  lea    -0x5c(%ebp),%eax
084e58cd +0x3a5:  mov    %eax,(%esp)
084e58d0 +0x3a8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e58d5 +0x3ad:  mov    -0x2c(%ebp),%eax
084e58d8 +0x3b0:  add    $0x17,%eax
084e58db +0x3b3:  mov    %eax,(%esp)
084e58de +0x3b6:  call   0807e3b0 <_init+0xca8>
084e58e3 +0x3bb:  mov    %eax,-0x14(%ebp)
084e58e6 +0x3be:  mov    -0x14(%ebp),%eax
084e58e9 +0x3c1:  mov    %eax,0x4(%esp)
084e58ed +0x3c5:  lea    -0x5c(%ebp),%eax
084e58f0 +0x3c8:  mov    %eax,(%esp)
084e58f3 +0x3cb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e58f8 +0x3d0:  mov    -0x2c(%ebp),%eax
084e58fb +0x3d3:  lea    0x17(%eax),%edx
084e58fe +0x3d6:  mov    -0x14(%ebp),%eax
084e5901 +0x3d9:  mov    %eax,0x8(%esp)
084e5905 +0x3dd:  mov    %edx,0x4(%esp)
084e5909 +0x3e1:  lea    -0x5c(%ebp),%eax
084e590c +0x3e4:  mov    %eax,(%esp)
084e590f +0x3e7:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5914 +0x3ec:  movl   $0x0,0x4(%esp)
084e591c +0x3f4:  lea    -0x5c(%ebp),%eax
084e591f +0x3f7:  mov    %eax,(%esp)
084e5922 +0x3fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5927 +0x3ff:  movl   $0x0,0x4(%esp)
084e592f +0x407:  lea    -0x5c(%ebp),%eax
084e5932 +0x40a:  mov    %eax,(%esp)
084e5935 +0x40d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e593a +0x412:  movl   $0x0,0x8(%esp)
084e5942 +0x41a:  movl   $"",0x4(%esp)
084e594a +0x422:  lea    -0x5c(%ebp),%eax
084e594d +0x425:  mov    %eax,(%esp)
084e5950 +0x428:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084e5955 +0x42d:  mov    -0x2c(%ebp),%eax
084e5958 +0x430:  movzbl 0x36(%eax),%eax
084e595c +0x434:  movzbl %al,%eax
084e595f +0x437:  mov    %eax,0x4(%esp)
084e5963 +0x43b:  lea    -0x5c(%ebp),%eax
084e5966 +0x43e:  mov    %eax,(%esp)
084e5969 +0x441:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e596e +0x446:  movl   $0x0,-0x10(%ebp)
084e5975 +0x44d:  jmp    084e59a1 <+0x479>
084e5977 +0x44f:  mov    -0x10(%ebp),%eax
084e597a +0x452:  imul   $0x68,%eax,%eax
084e597d +0x455:  add    $0x30,%eax
084e5980 +0x458:  add    -0x2c(%ebp),%eax
084e5983 +0x45b:  add    $0x7,%eax
084e5986 +0x45e:  movl   $0x68,0x8(%esp)
084e598e +0x466:  mov    %eax,0x4(%esp)
084e5992 +0x46a:  lea    -0x5c(%ebp),%eax
084e5995 +0x46d:  mov    %eax,(%esp)
084e5998 +0x470:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e599d +0x475:  addl   $0x1,-0x10(%ebp)
084e59a1 +0x479:  mov    -0x2c(%ebp),%eax
084e59a4 +0x47c:  movzbl 0x36(%eax),%eax
084e59a8 +0x480:  movzbl %al,%eax
084e59ab +0x483:  cmp    -0x10(%ebp),%eax
084e59ae +0x486:  setg   %al
084e59b1 +0x489:  test   %al,%al
084e59b3 +0x48b:  jne    084e5977 <+0x44f>
084e59b5 +0x48d:  movl   $0x1,0x4(%esp)
084e59bd +0x495:  lea    -0x5c(%ebp),%eax
084e59c0 +0x498:  mov    %eax,(%esp)
084e59c3 +0x49b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e59c8 +0x4a0:  lea    -0x5c(%ebp),%eax
084e59cb +0x4a3:  mov    %eax,0x4(%esp)
084e59cf +0x4a7:  mov    0xc(%ebp),%eax
084e59d2 +0x4aa:  mov    %eax,(%esp)
084e59d5 +0x4ad:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e59da +0x4b2:  mov    $0x0,%ebx
084e59df +0x4b7:  lea    -0x5c(%ebp),%eax
084e59e2 +0x4ba:  mov    %eax,(%esp)
084e59e5 +0x4bd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e59ea +0x4c2:  jmp    084e5c1c <+0x6f4>
084e59ef +0x4c7:  mov    %edx,%ebx
084e59f1 +0x4c9:  mov    %eax,%esi
084e59f3 +0x4cb:  lea    -0x5c(%ebp),%eax
084e59f6 +0x4ce:  mov    %eax,(%esp)
084e59f9 +0x4d1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e59fe +0x4d6:  mov    %esi,%eax
084e5a00 +0x4d8:  mov    %ebx,%edx
084e5a02 +0x4da:  mov    %eax,(%esp)
084e5a05 +0x4dd:  call   08ae3750 <_Unwind_Resume>
084e5a0a +0x4e2:  movl   $0xffffffff,0x4(%esp)
084e5a12 +0x4ea:  mov    0xc(%ebp),%eax
084e5a15 +0x4ed:  mov    %eax,(%esp)
084e5a18 +0x4f0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e5a1d +0x4f5:  mov    %eax,%edx
084e5a1f +0x4f7:  mov    -0x2c(%ebp),%eax
084e5a22 +0x4fa:  mov    0x13(%eax),%eax
084e5a25 +0x4fd:  cmp    %eax,%edx
084e5a27 +0x4ff:  setne  %al
084e5a2a +0x502:  test   %al,%al
084e5a2c +0x504:  je     084e5a85 <+0x55d>
084e5a2e +0x506:  mov    -0x2c(%ebp),%eax
084e5a31 +0x509:  mov    0x13(%eax),%ebx
084e5a34 +0x50c:  movl   $0xffffffff,0x4(%esp)
084e5a3c +0x514:  mov    0xc(%ebp),%eax
084e5a3f +0x517:  mov    %eax,(%esp)
084e5a42 +0x51a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e5a47 +0x51f:  mov    %ebx,0x18(%esp)
084e5a4b +0x523:  mov    %eax,0x14(%esp)
084e5a4f +0x527:  movl   $"Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084e5a57 +0x52f:  movl   $0x6497,0xc(%esp)
084e5a5f +0x537:  movl   $&_ZZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e5a67 +0x53f:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e5a6f +0x547:  movl   $0x1,(%esp)
084e5a76 +0x54e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e5a7b +0x553:  mov    $0x0,%ebx
084e5a80 +0x558:  jmp    084e5c1c <+0x6f4>
084e5a85 +0x55d:  lea    -0x38(%ebp),%eax
084e5a88 +0x560:  mov    %eax,(%esp)
084e5a8b +0x563:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e5a90 +0x568:  movl   $0x173,0x8(%esp)
084e5a98 +0x570:  movl   $0x0,0x4(%esp)
084e5aa0 +0x578:  lea    -0x38(%ebp),%eax
084e5aa3 +0x57b:  mov    %eax,(%esp)
084e5aa6 +0x57e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e5aab +0x583:  mov    -0x2c(%ebp),%eax
084e5aae +0x586:  mov    0xa(%eax),%eax
084e5ab1 +0x589:  mov    %eax,0x4(%esp)
084e5ab5 +0x58d:  lea    -0x38(%ebp),%eax
084e5ab8 +0x590:  mov    %eax,(%esp)
084e5abb +0x593:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5ac0 +0x598:  movl   $0x0,0x4(%esp)
084e5ac8 +0x5a0:  lea    -0x38(%ebp),%eax
084e5acb +0x5a3:  mov    %eax,(%esp)
084e5ace +0x5a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5ad3 +0x5ab:  mov    -0x2c(%ebp),%eax
084e5ad6 +0x5ae:  add    $0x17,%eax
084e5ad9 +0x5b1:  mov    %eax,(%esp)
084e5adc +0x5b4:  call   0807e3b0 <_init+0xca8>
084e5ae1 +0x5b9:  mov    %eax,-0x28(%ebp)
084e5ae4 +0x5bc:  mov    -0x28(%ebp),%eax
084e5ae7 +0x5bf:  mov    %eax,0x4(%esp)
084e5aeb +0x5c3:  lea    -0x38(%ebp),%eax
084e5aee +0x5c6:  mov    %eax,(%esp)
084e5af1 +0x5c9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5af6 +0x5ce:  mov    -0x2c(%ebp),%eax
084e5af9 +0x5d1:  lea    0x17(%eax),%edx
084e5afc +0x5d4:  mov    -0x28(%ebp),%eax
084e5aff +0x5d7:  mov    %eax,0x8(%esp)
084e5b03 +0x5db:  mov    %edx,0x4(%esp)
084e5b07 +0x5df:  lea    -0x38(%ebp),%eax
084e5b0a +0x5e2:  mov    %eax,(%esp)
084e5b0d +0x5e5:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5b12 +0x5ea:  movl   $0x0,0x4(%esp)
084e5b1a +0x5f2:  lea    -0x38(%ebp),%eax
084e5b1d +0x5f5:  mov    %eax,(%esp)
084e5b20 +0x5f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5b25 +0x5fd:  mov    -0x2c(%ebp),%eax
084e5b28 +0x600:  movzbl 0x16f(%eax),%eax
084e5b2f +0x607:  movzbl %al,%eax
084e5b32 +0x60a:  mov    %eax,0x4(%esp)
084e5b36 +0x60e:  lea    -0x38(%ebp),%eax
084e5b39 +0x611:  mov    %eax,(%esp)
084e5b3c +0x614:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5b41 +0x619:  mov    -0x2c(%ebp),%eax
084e5b44 +0x61c:  movzbl 0x16f(%eax),%eax
084e5b4b +0x623:  movzbl %al,%eax
084e5b4e +0x626:  mov    -0x2c(%ebp),%edx
084e5b51 +0x629:  add    $0x170,%edx
084e5b57 +0x62f:  mov    %eax,0x8(%esp)
084e5b5b +0x633:  mov    %edx,0x4(%esp)
084e5b5f +0x637:  lea    -0x38(%ebp),%eax
084e5b62 +0x63a:  mov    %eax,(%esp)
084e5b65 +0x63d:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5b6a +0x642:  mov    -0x2c(%ebp),%eax
084e5b6d +0x645:  movzbl 0x36(%eax),%eax
084e5b71 +0x649:  movzbl %al,%eax
084e5b74 +0x64c:  mov    %eax,0x4(%esp)
084e5b78 +0x650:  lea    -0x38(%ebp),%eax
084e5b7b +0x653:  mov    %eax,(%esp)
084e5b7e +0x656:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5b83 +0x65b:  movl   $0x0,-0xc(%ebp)
084e5b8a +0x662:  jmp    084e5bb6 <+0x68e>
084e5b8c +0x664:  mov    -0xc(%ebp),%eax
084e5b8f +0x667:  imul   $0x68,%eax,%eax
084e5b92 +0x66a:  add    $0x30,%eax
084e5b95 +0x66d:  add    -0x2c(%ebp),%eax
084e5b98 +0x670:  add    $0x7,%eax
084e5b9b +0x673:  movl   $0x68,0x8(%esp)
084e5ba3 +0x67b:  mov    %eax,0x4(%esp)
084e5ba7 +0x67f:  lea    -0x38(%ebp),%eax
084e5baa +0x682:  mov    %eax,(%esp)
084e5bad +0x685:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e5bb2 +0x68a:  addl   $0x1,-0xc(%ebp)
084e5bb6 +0x68e:  mov    -0x2c(%ebp),%eax
084e5bb9 +0x691:  movzbl 0x36(%eax),%eax
084e5bbd +0x695:  movzbl %al,%eax
084e5bc0 +0x698:  cmp    -0xc(%ebp),%eax
084e5bc3 +0x69b:  setg   %al
084e5bc6 +0x69e:  test   %al,%al
084e5bc8 +0x6a0:  jne    084e5b8c <+0x664>
084e5bca +0x6a2:  movl   $0x1,0x4(%esp)
084e5bd2 +0x6aa:  lea    -0x38(%ebp),%eax
084e5bd5 +0x6ad:  mov    %eax,(%esp)
084e5bd8 +0x6b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e5bdd +0x6b5:  lea    -0x38(%ebp),%eax
084e5be0 +0x6b8:  mov    %eax,0x4(%esp)
084e5be4 +0x6bc:  mov    0xc(%ebp),%eax
084e5be7 +0x6bf:  mov    %eax,(%esp)
084e5bea +0x6c2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e5bef +0x6c7:  mov    $0x0,%ebx
084e5bf4 +0x6cc:  lea    -0x38(%ebp),%eax
084e5bf7 +0x6cf:  mov    %eax,(%esp)
084e5bfa +0x6d2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5bff +0x6d7:  jmp    084e5c1c <+0x6f4>
084e5c01 +0x6d9:  mov    %edx,%ebx
084e5c03 +0x6db:  mov    %eax,%esi
084e5c05 +0x6dd:  lea    -0x38(%ebp),%eax
084e5c08 +0x6e0:  mov    %eax,(%esp)
084e5c0b +0x6e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5c10 +0x6e8:  mov    %esi,%eax
084e5c12 +0x6ea:  mov    %ebx,%edx
084e5c14 +0x6ec:  mov    %eax,(%esp)
084e5c17 +0x6ef:  call   08ae3750 <_Unwind_Resume>
084e5c1c +0x6f4:  mov    %ebx,%eax
084e5c1e +0x6f6:  sub    $0xffffff80,%esp
084e5c21 +0x6f9:  pop    %ebx
084e5c22 +0x6fa:  pop    %esi
084e5c23 +0x6fb:  pop    %ebp
084e5c24 +0x6fc:  ret
084e5c25 +0x6fd:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig @ 0x84e5528

/* Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_60 [12];
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  int local_30;
  size_t local_2c;
  size_t local_28;
  int local_24;
  size_t local_20;
  int local_1c;
  size_t local_18;
  int local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_30 = param_3;
    if (*(char *)(param_3 + 0x35) == '\x01') {
      PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084e5584 to 084e56b5 has its CatchHandler @ 084e56cb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,*(int *)(local_30 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0x15);
      local_28 = strlen((char *)(local_30 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_28);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_48,(char *)(local_30 + 0x17),local_28)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_48,"",0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)*(byte *)(local_30 + 0x36));
      for (local_24 = 0; local_24 < (int)(uint)*(byte *)(local_30 + 0x36); local_24 = local_24 + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_48,(char *)(local_24 * 0x68 + local_30 + 0x37),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
      CUser::Send((CUser *)param_2,local_48);
      PacketGuard::~PacketGuard(local_48);
    }
    else if (*(char *)(param_3 + 0x35) == '\x02') {
      PacketGuard::PacketGuard(local_54);
                    /* try { // try from 084e5716 to 084e5847 has its CatchHandler @ 084e585d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,*(int *)(local_30 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0x4d);
      local_20 = strlen((char *)(local_30 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,local_20);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_54,(char *)(local_30 + 0x17),local_20)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_54,"",0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,(uint)*(byte *)(local_30 + 0x36));
      for (local_1c = 0; local_1c < (int)(uint)*(byte *)(local_30 + 0x36); local_1c = local_1c + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_54,(char *)(local_1c * 0x68 + local_30 + 0x37),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
      CUser::Send((CUser *)param_2,local_54);
      PacketGuard::~PacketGuard(local_54);
    }
    else if (*(char *)(param_3 + 0x35) == '\x03') {
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 084e58a8 to 084e59d9 has its CatchHandler @ 084e59ef */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,*(int *)(local_30 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0x5a);
      local_18 = strlen((char *)(local_30 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_18);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_60,(char *)(local_30 + 0x17),local_18)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_60,"",0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(uint)*(byte *)(local_30 + 0x36));
      for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_30 + 0x36); local_14 = local_14 + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_60,(char *)(local_14 * 0x68 + local_30 + 0x37),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      CUser::Send((CUser *)param_2,local_60);
      PacketGuard::~PacketGuard(local_60);
    }
    else {
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_30 + 0x13)) {
        PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084e5aa6 to 084e5bee has its CatchHandler @ 084e5c01 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x173);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,*(int *)(local_30 + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
        local_2c = strlen((char *)(local_30 + 0x17));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_2c);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_3c,(char *)(local_30 + 0x17),local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_3c,(uint)*(byte *)(local_30 + 0x16f));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_3c,(char *)(local_30 + 0x170),
                   (uint)*(byte *)(local_30 + 0x16f));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_3c,(uint)*(byte *)(local_30 + 0x36));
        for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_30 + 0x36); local_10 = local_10 + 1
            ) {
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_3c,(char *)(local_10 * 0x68 + local_30 + 0x37),0x68
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        CUser::Send((CUser *)param_2,local_3c);
        PacketGuard::~PacketGuard(local_3c);
      }
      else {
        uVar1 = *(undefined4 *)(local_30 + 0x13);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser*, char*, int)"
                   ,0x6497,
                   "Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
  }
  return 0;
}
```
