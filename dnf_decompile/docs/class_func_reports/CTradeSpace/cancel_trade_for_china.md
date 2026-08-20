# cancel_trade_for_china

`_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser`

`CTradeSpace::cancel_trade_for_china(CUser*)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852e544` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852e544  _ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser
#           CTradeSpace::cancel_trade_for_china(CUser*)
# range [0x0852e544, 0x0852eff9]
0852e544 +0x000:  push   %ebp
0852e545 +0x001:  mov    %esp,%ebp
0852e547 +0x003:  push   %edi
0852e548 +0x004:  push   %esi
0852e549 +0x005:  push   %ebx
0852e54a +0x006:  sub    $0xbc,%esp
0852e550 +0x00c:  movl   $0x0,-0x30(%ebp)
0852e557 +0x013:  movl   $0x0,-0x2c(%ebp)
0852e55e +0x01a:  lea    -0x58(%ebp),%ebx
0852e561 +0x01d:  mov    %ebx,%edi
0852e563 +0x01f:  mov    $0x1,%esi
0852e568 +0x024:  jmp    0852e578 <+0x34>
0852e56a +0x026:  mov    %edi,(%esp)
0852e56d +0x029:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0852e572 +0x02e:  add    $0xc,%edi
0852e575 +0x031:  sub    $0x1,%esi
0852e578 +0x034:  cmp    $0xffffffff,%esi
0852e57b +0x037:  setne  %al
0852e57e +0x03a:  test   %al,%al
0852e580 +0x03c:  jne    0852e56a <+0x26>
0852e582 +0x03e:  jmp    0852e5c0 <+0x7c>
0852e584 +0x040:  mov    %edx,%edi
0852e586 +0x042:  mov    %eax,-0x6c(%ebp)
0852e589 +0x045:  test   %ebx,%ebx
0852e58b +0x047:  je     0852e5b3 <+0x6f>
0852e58d +0x049:  mov    $0x1,%eax
0852e592 +0x04e:  sub    %esi,%eax
0852e594 +0x050:  mov    %eax,%edx
0852e596 +0x052:  mov    %edx,%eax
0852e598 +0x054:  add    %eax,%eax
0852e59a +0x056:  add    %edx,%eax
0852e59c +0x058:  shl    $0x2,%eax
0852e59f +0x05b:  lea    (%ebx,%eax,1),%esi
0852e5a2 +0x05e:  cmp    %ebx,%esi
0852e5a4 +0x060:  je     0852e5b3 <+0x6f>
0852e5a6 +0x062:  sub    $0xc,%esi
0852e5a9 +0x065:  mov    %esi,(%esp)
0852e5ac +0x068:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852e5b1 +0x06d:  jmp    0852e5a2 <+0x5e>
0852e5b3 +0x06f:  mov    -0x6c(%ebp),%eax
0852e5b6 +0x072:  mov    %edi,%edx
0852e5b8 +0x074:  mov    %eax,(%esp)
0852e5bb +0x077:  call   08ae3750 <_Unwind_Resume>
0852e5c0 +0x07c:  movl   $0x0,-0x2c(%ebp)
0852e5c7 +0x083:  jmp    0852eea5 <+0x961>
0852e5cc +0x088:  movl   $0x0,-0x30(%ebp)
0852e5d3 +0x08f:  movl   $0x3,-0x20(%ebp)
0852e5da +0x096:  jmp    0852e60c <+0xc8>
0852e5dc +0x098:  mov    -0x2c(%ebp),%ebx
0852e5df +0x09b:  mov    -0x20(%ebp),%edx
0852e5e2 +0x09e:  mov    0x8(%ebp),%ecx
0852e5e5 +0x0a1:  mov    %edx,%eax
0852e5e7 +0x0a3:  shl    $0x3,%eax
0852e5ea +0x0a6:  add    %edx,%eax
0852e5ec +0x0a8:  shl    $0x3,%eax
0852e5ef +0x0ab:  imul   $0x798,%ebx,%edx
0852e5f5 +0x0b1:  add    %edx,%eax
0852e5f7 +0x0b3:  lea    (%ecx,%eax,1),%eax
0852e5fa +0x0b6:  add    $0x30,%eax
0852e5fd +0x0b9:  mov    0xb(%eax),%eax
0852e600 +0x0bc:  test   %eax,%eax
0852e602 +0x0be:  je     0852e608 <+0xc4>
0852e604 +0x0c0:  addl   $0x1,-0x30(%ebp)
0852e608 +0x0c4:  addl   $0x1,-0x20(%ebp)
0852e60c +0x0c8:  cmpl   $0x1a,-0x20(%ebp)
0852e610 +0x0cc:  setle  %al
0852e613 +0x0cf:  test   %al,%al
0852e615 +0x0d1:  jne    0852e5dc <+0x98>
0852e617 +0x0d3:  mov    -0x2c(%ebp),%edx
0852e61a +0x0d6:  lea    -0x58(%ebp),%ecx
0852e61d +0x0d9:  mov    %edx,%eax
0852e61f +0x0db:  add    %eax,%eax
0852e621 +0x0dd:  add    %edx,%eax
0852e623 +0x0df:  shl    $0x2,%eax
0852e626 +0x0e2:  lea    (%ecx,%eax,1),%eax
0852e629 +0x0e5:  mov    %eax,(%esp)
0852e62c +0x0e8:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852e631 +0x0ed:  mov    -0x2c(%ebp),%edx
0852e634 +0x0f0:  lea    -0x58(%ebp),%ecx
0852e637 +0x0f3:  mov    %edx,%eax
0852e639 +0x0f5:  add    %eax,%eax
0852e63b +0x0f7:  add    %edx,%eax
0852e63d +0x0f9:  shl    $0x2,%eax
0852e640 +0x0fc:  lea    (%ecx,%eax,1),%eax
0852e643 +0x0ff:  movl   $0x10,0x8(%esp)
0852e64b +0x107:  movl   $0x0,0x4(%esp)
0852e653 +0x10f:  mov    %eax,(%esp)
0852e656 +0x112:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852e65b +0x117:  movl   $0x0,-0x28(%ebp)
0852e662 +0x11e:  movl   $0x0,-0x5c(%ebp)
0852e669 +0x125:  mov    -0x2c(%ebp),%edx
0852e66c +0x128:  mov    0x8(%ebp),%eax
0852e66f +0x12b:  add    $0x3d8,%edx
0852e675 +0x131:  mov    (%eax,%edx,4),%eax
0852e678 +0x134:  test   %eax,%eax
0852e67a +0x136:  jle    0852e7fc <+0x2b8>
0852e680 +0x13c:  addl   $0x1,-0x30(%ebp)
0852e684 +0x140:  mov    -0x2c(%ebp),%edx
0852e687 +0x143:  mov    0x8(%ebp),%eax
0852e68a +0x146:  add    $0x8,%edx
0852e68d +0x149:  mov    (%eax,%edx,4),%eax
0852e690 +0x14c:  test   %eax,%eax
0852e692 +0x14e:  je     0852e753 <+0x20f>
0852e698 +0x154:  mov    -0x2c(%ebp),%edx
0852e69b +0x157:  mov    0x8(%ebp),%eax
0852e69e +0x15a:  add    $0x8,%edx
0852e6a1 +0x15d:  mov    (%eax,%edx,4),%eax
0852e6a4 +0x160:  mov    %eax,(%esp)
0852e6a7 +0x163:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852e6ac +0x168:  test   %eax,%eax
0852e6ae +0x16a:  sete   %al
0852e6b1 +0x16d:  test   %al,%al
0852e6b3 +0x16f:  je     0852e6f5 <+0x1b1>
0852e6b5 +0x171:  movl   $0x5,0xc(%esp)
0852e6bd +0x179:  movl   $0x71c,0x8(%esp)
0852e6c5 +0x181:  movl   $&_ZZN11CTradeSpace22cancel_trade_for_chinaEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0852e6cd +0x189:  lea    -0x40(%ebp),%eax
0852e6d0 +0x18c:  mov    %eax,(%esp)
0852e6d3 +0x18f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852e6d8 +0x194:  movl   $"CTradeSpace::cancel_trade()\tm_pTraders[user_index]->getCurCharacR()",0x4(%esp)
0852e6e0 +0x19c:  lea    -0x40(%ebp),%eax
0852e6e3 +0x19f:  mov    %eax,(%esp)
0852e6e6 +0x1a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852e6eb +0x1a7:  mov    $0x0,%esi
0852e6f0 +0x1ac:  jmp    0852efd3 <+0xa8f>
0852e6f5 +0x1b1:  mov    -0x2c(%ebp),%edx
0852e6f8 +0x1b4:  mov    0x8(%ebp),%eax
0852e6fb +0x1b7:  add    $0x3d8,%edx
0852e701 +0x1bd:  mov    (%eax,%edx,4),%ebx
0852e704 +0x1c0:  mov    -0x2c(%ebp),%edx
0852e707 +0x1c3:  mov    0x8(%ebp),%eax
0852e70a +0x1c6:  add    $0x8,%edx
0852e70d +0x1c9:  mov    (%eax,%edx,4),%eax
0852e710 +0x1cc:  mov    %eax,(%esp)
0852e713 +0x1cf:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852e718 +0x1d4:  movl   $0x0,0x10(%esp)
0852e720 +0x1dc:  movl   $0x1,0xc(%esp)
0852e728 +0x1e4:  movl   $0x2,0x8(%esp)
0852e730 +0x1ec:  mov    %ebx,0x4(%esp)
0852e734 +0x1f0:  mov    %eax,(%esp)
0852e737 +0x1f3:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0852e73c +0x1f8:  mov    -0x2c(%ebp),%edx
0852e73f +0x1fb:  mov    0x8(%ebp),%eax
0852e742 +0x1fe:  add    $0x3d8,%edx
0852e748 +0x204:  movl   $0x0,(%eax,%edx,4)
0852e74f +0x20b:  addl   $0x1,-0x28(%ebp)
0852e753 +0x20f:  mov    -0x2c(%ebp),%edx
0852e756 +0x212:  lea    -0x58(%ebp),%ecx
0852e759 +0x215:  mov    %edx,%eax
0852e75b +0x217:  add    %eax,%eax
0852e75d +0x219:  add    %edx,%eax
0852e75f +0x21b:  shl    $0x2,%eax
0852e762 +0x21e:  lea    (%ecx,%eax,1),%eax
0852e765 +0x221:  mov    %eax,(%esp)
0852e768 +0x224:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0852e76d +0x229:  mov    %eax,-0x5c(%ebp)
0852e770 +0x22c:  mov    -0x30(%ebp),%eax
0852e773 +0x22f:  movswl %ax,%ecx
0852e776 +0x232:  mov    -0x2c(%ebp),%edx
0852e779 +0x235:  lea    -0x58(%ebp),%ebx
0852e77c +0x238:  mov    %edx,%eax
0852e77e +0x23a:  add    %eax,%eax
0852e780 +0x23c:  add    %edx,%eax
0852e782 +0x23e:  shl    $0x2,%eax
0852e785 +0x241:  lea    (%ebx,%eax,1),%eax
0852e788 +0x244:  mov    %ecx,0x4(%esp)
0852e78c +0x248:  mov    %eax,(%esp)
0852e78f +0x24b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852e794 +0x250:  mov    -0x2c(%ebp),%edx
0852e797 +0x253:  lea    -0x58(%ebp),%ecx
0852e79a +0x256:  mov    %edx,%eax
0852e79c +0x258:  add    %eax,%eax
0852e79e +0x25a:  add    %edx,%eax
0852e7a0 +0x25c:  shl    $0x2,%eax
0852e7a3 +0x25f:  lea    (%ecx,%eax,1),%eax
0852e7a6 +0x262:  movl   $0x0,0x4(%esp)
0852e7ae +0x26a:  mov    %eax,(%esp)
0852e7b1 +0x26d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852e7b6 +0x272:  mov    -0x2c(%ebp),%edx
0852e7b9 +0x275:  lea    -0x58(%ebp),%ecx
0852e7bc +0x278:  mov    %edx,%eax
0852e7be +0x27a:  add    %eax,%eax
0852e7c0 +0x27c:  add    %edx,%eax
0852e7c2 +0x27e:  shl    $0x2,%eax
0852e7c5 +0x281:  lea    (%ecx,%eax,1),%eax
0852e7c8 +0x284:  movl   $0x0,0x4(%esp)
0852e7d0 +0x28c:  mov    %eax,(%esp)
0852e7d3 +0x28f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852e7d8 +0x294:  mov    -0x2c(%ebp),%edx
0852e7db +0x297:  lea    -0x58(%ebp),%ecx
0852e7de +0x29a:  mov    %edx,%eax
0852e7e0 +0x29c:  add    %eax,%eax
0852e7e2 +0x29e:  add    %edx,%eax
0852e7e4 +0x2a0:  shl    $0x2,%eax
0852e7e7 +0x2a3:  lea    (%ecx,%eax,1),%eax
0852e7ea +0x2a6:  movl   $0x0,0x4(%esp)
0852e7f2 +0x2ae:  mov    %eax,(%esp)
0852e7f5 +0x2b1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852e7fa +0x2b6:  jmp    0852e83d <+0x2f9>
0852e7fc +0x2b8:  mov    -0x2c(%ebp),%edx
0852e7ff +0x2bb:  lea    -0x58(%ebp),%ecx
0852e802 +0x2be:  mov    %edx,%eax
0852e804 +0x2c0:  add    %eax,%eax
0852e806 +0x2c2:  add    %edx,%eax
0852e808 +0x2c4:  shl    $0x2,%eax
0852e80b +0x2c7:  lea    (%ecx,%eax,1),%eax
0852e80e +0x2ca:  mov    %eax,(%esp)
0852e811 +0x2cd:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0852e816 +0x2d2:  mov    %eax,-0x5c(%ebp)
0852e819 +0x2d5:  mov    -0x30(%ebp),%eax
0852e81c +0x2d8:  movswl %ax,%ecx
0852e81f +0x2db:  mov    -0x2c(%ebp),%edx
0852e822 +0x2de:  lea    -0x58(%ebp),%ebx
0852e825 +0x2e1:  mov    %edx,%eax
0852e827 +0x2e3:  add    %eax,%eax
0852e829 +0x2e5:  add    %edx,%eax
0852e82b +0x2e7:  shl    $0x2,%eax
0852e82e +0x2ea:  lea    (%ebx,%eax,1),%eax
0852e831 +0x2ed:  mov    %ecx,0x4(%esp)
0852e835 +0x2f1:  mov    %eax,(%esp)
0852e838 +0x2f4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852e83d +0x2f9:  movl   $0x0,-0x24(%ebp)
0852e844 +0x300:  movl   $0x3,-0x1c(%ebp)
0852e84b +0x307:  jmp    0852ee48 <+0x904>
0852e850 +0x30c:  mov    -0x2c(%ebp),%edx
0852e853 +0x30f:  mov    0x8(%ebp),%eax
0852e856 +0x312:  add    $0x8,%edx
0852e859 +0x315:  mov    (%eax,%edx,4),%eax
0852e85c +0x318:  test   %eax,%eax
0852e85e +0x31a:  je     0852ee3d <+0x8f9>
0852e864 +0x320:  mov    -0x2c(%ebp),%edx
0852e867 +0x323:  mov    0x8(%ebp),%eax
0852e86a +0x326:  add    $0x8,%edx
0852e86d +0x329:  mov    (%eax,%edx,4),%eax
0852e870 +0x32c:  mov    %eax,(%esp)
0852e873 +0x32f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852e878 +0x334:  test   %eax,%eax
0852e87a +0x336:  sete   %al
0852e87d +0x339:  test   %al,%al
0852e87f +0x33b:  jne    0852ee40 <+0x8fc>
0852e885 +0x341:  mov    -0x2c(%ebp),%ebx
0852e888 +0x344:  mov    -0x1c(%ebp),%edx
0852e88b +0x347:  mov    0x8(%ebp),%ecx
0852e88e +0x34a:  mov    %edx,%eax
0852e890 +0x34c:  shl    $0x3,%eax
0852e893 +0x34f:  add    %edx,%eax
0852e895 +0x351:  shl    $0x3,%eax
0852e898 +0x354:  imul   $0x798,%ebx,%edx
0852e89e +0x35a:  add    %edx,%eax
0852e8a0 +0x35c:  lea    (%ecx,%eax,1),%eax
0852e8a3 +0x35f:  add    $0x30,%eax
0852e8a6 +0x362:  mov    0xb(%eax),%eax
0852e8a9 +0x365:  test   %eax,%eax
0852e8ab +0x367:  je     0852ee43 <+0x8ff>
0852e8b1 +0x36d:  mov    -0x2c(%ebp),%edx
0852e8b4 +0x370:  lea    -0x58(%ebp),%ecx
0852e8b7 +0x373:  mov    %edx,%eax
0852e8b9 +0x375:  add    %eax,%eax
0852e8bb +0x377:  add    %edx,%eax
0852e8bd +0x379:  shl    $0x2,%eax
0852e8c0 +0x37c:  lea    (%ecx,%eax,1),%edx
0852e8c3 +0x37f:  mov    -0x1c(%ebp),%eax
0852e8c6 +0x382:  mov    %eax,0x4(%esp)
0852e8ca +0x386:  mov    %edx,(%esp)
0852e8cd +0x389:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852e8d2 +0x38e:  mov    -0x2c(%ebp),%ebx
0852e8d5 +0x391:  mov    -0x1c(%ebp),%edx
0852e8d8 +0x394:  mov    0x8(%ebp),%ecx
0852e8db +0x397:  mov    %edx,%eax
0852e8dd +0x399:  shl    $0x3,%eax
0852e8e0 +0x39c:  add    %edx,%eax
0852e8e2 +0x39e:  shl    $0x3,%eax
0852e8e5 +0x3a1:  imul   $0x798,%ebx,%edx
0852e8eb +0x3a7:  add    %edx,%eax
0852e8ed +0x3a9:  lea    (%ecx,%eax,1),%eax
0852e8f0 +0x3ac:  add    $0x30,%eax
0852e8f3 +0x3af:  movzbl 0x8(%eax),%eax
0852e8f7 +0x3b3:  movsbl %al,%eax
0852e8fa +0x3b6:  cmp    $0x1,%eax
0852e8fd +0x3b9:  je     0852ea06 <+0x4c2>
0852e903 +0x3bf:  cmp    $0x7,%eax
0852e906 +0x3c2:  je     0852ebad <+0x669>
0852e90c +0x3c8:  test   %eax,%eax
0852e90e +0x3ca:  jne    0852ecba <+0x776>
0852e914 +0x3d0:  mov    -0x2c(%ebp),%esi
0852e917 +0x3d3:  mov    -0x1c(%ebp),%ebx
0852e91a +0x3d6:  mov    -0x2c(%ebp),%edx
0852e91d +0x3d9:  mov    0x8(%ebp),%eax
0852e920 +0x3dc:  add    $0x8,%edx
0852e923 +0x3df:  mov    (%eax,%edx,4),%eax
0852e926 +0x3e2:  mov    %eax,(%esp)
0852e929 +0x3e5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852e92e +0x3ea:  mov    %eax,%edx
0852e930 +0x3ec:  movl   $0x1,0x4c(%esp)
0852e938 +0x3f4:  movl   $0x1,0x48(%esp)
0852e940 +0x3fc:  movl   $0x2,0x44(%esp)
0852e948 +0x404:  mov    0x8(%ebp),%ecx
0852e94b +0x407:  mov    %ebx,%eax
0852e94d +0x409:  shl    $0x3,%eax
0852e950 +0x40c:  add    %ebx,%eax
0852e952 +0x40e:  shl    $0x3,%eax
0852e955 +0x411:  imul   $0x798,%esi,%ebx
0852e95b +0x417:  add    %ebx,%eax
0852e95d +0x419:  lea    (%ecx,%eax,1),%eax
0852e960 +0x41c:  add    $0x30,%eax
0852e963 +0x41f:  mov    0x9(%eax),%ecx
0852e966 +0x422:  mov    %ecx,0x4(%esp)
0852e96a +0x426:  mov    0xd(%eax),%ecx
0852e96d +0x429:  mov    %ecx,0x8(%esp)
0852e971 +0x42d:  mov    0x11(%eax),%ecx
0852e974 +0x430:  mov    %ecx,0xc(%esp)
0852e978 +0x434:  mov    0x15(%eax),%ecx
0852e97b +0x437:  mov    %ecx,0x10(%esp)
0852e97f +0x43b:  mov    0x19(%eax),%ecx
0852e982 +0x43e:  mov    %ecx,0x14(%esp)
0852e986 +0x442:  mov    0x1d(%eax),%ecx
0852e989 +0x445:  mov    %ecx,0x18(%esp)
0852e98d +0x449:  mov    0x21(%eax),%ecx
0852e990 +0x44c:  mov    %ecx,0x1c(%esp)
0852e994 +0x450:  mov    0x25(%eax),%ecx
0852e997 +0x453:  mov    %ecx,0x20(%esp)
0852e99b +0x457:  mov    0x29(%eax),%ecx
0852e99e +0x45a:  mov    %ecx,0x24(%esp)
0852e9a2 +0x45e:  mov    0x2d(%eax),%ecx
0852e9a5 +0x461:  mov    %ecx,0x28(%esp)
0852e9a9 +0x465:  mov    0x31(%eax),%ecx
0852e9ac +0x468:  mov    %ecx,0x2c(%esp)
0852e9b0 +0x46c:  mov    0x35(%eax),%ecx
0852e9b3 +0x46f:  mov    %ecx,0x30(%esp)
0852e9b7 +0x473:  mov    0x39(%eax),%ecx
0852e9ba +0x476:  mov    %ecx,0x34(%esp)
0852e9be +0x47a:  mov    0x3d(%eax),%ecx
0852e9c1 +0x47d:  mov    %ecx,0x38(%esp)
0852e9c5 +0x481:  mov    0x41(%eax),%ecx
0852e9c8 +0x484:  mov    %ecx,0x3c(%esp)
0852e9cc +0x488:  movzbl 0x45(%eax),%eax
0852e9d0 +0x48c:  mov    %al,0x40(%esp)
0852e9d4 +0x490:  mov    %edx,(%esp)
0852e9d7 +0x493:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0852e9dc +0x498:  mov    %eax,-0x24(%ebp)
0852e9df +0x49b:  mov    -0x2c(%ebp),%edx
0852e9e2 +0x49e:  lea    -0x58(%ebp),%ecx
0852e9e5 +0x4a1:  mov    %edx,%eax
0852e9e7 +0x4a3:  add    %eax,%eax
0852e9e9 +0x4a5:  add    %edx,%eax
0852e9eb +0x4a7:  shl    $0x2,%eax
0852e9ee +0x4aa:  lea    (%ecx,%eax,1),%eax
0852e9f1 +0x4ad:  movl   $0x0,0x4(%esp)
0852e9f9 +0x4b5:  mov    %eax,(%esp)
0852e9fc +0x4b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852ea01 +0x4bd:  jmp    0852eda7 <+0x863>
0852ea06 +0x4c2:  mov    -0x2c(%ebp),%esi
0852ea09 +0x4c5:  mov    -0x1c(%ebp),%ebx
0852ea0c +0x4c8:  mov    -0x2c(%ebp),%edx
0852ea0f +0x4cb:  mov    0x8(%ebp),%eax
0852ea12 +0x4ce:  add    $0x8,%edx
0852ea15 +0x4d1:  mov    (%eax,%edx,4),%eax
0852ea18 +0x4d4:  mov    %eax,(%esp)
0852ea1b +0x4d7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852ea20 +0x4dc:  mov    %eax,%edx
0852ea22 +0x4de:  movl   $0x1,0x48(%esp)
0852ea2a +0x4e6:  movl   $0x3,0x44(%esp)
0852ea32 +0x4ee:  mov    0x8(%ebp),%ecx
0852ea35 +0x4f1:  mov    %ebx,%eax
0852ea37 +0x4f3:  shl    $0x3,%eax
0852ea3a +0x4f6:  add    %ebx,%eax
0852ea3c +0x4f8:  shl    $0x3,%eax
0852ea3f +0x4fb:  imul   $0x798,%esi,%ebx
0852ea45 +0x501:  add    %ebx,%eax
0852ea47 +0x503:  lea    (%ecx,%eax,1),%eax
0852ea4a +0x506:  add    $0x30,%eax
0852ea4d +0x509:  mov    0x9(%eax),%ecx
0852ea50 +0x50c:  mov    %ecx,0x4(%esp)
0852ea54 +0x510:  mov    0xd(%eax),%ecx
0852ea57 +0x513:  mov    %ecx,0x8(%esp)
0852ea5b +0x517:  mov    0x11(%eax),%ecx
0852ea5e +0x51a:  mov    %ecx,0xc(%esp)
0852ea62 +0x51e:  mov    0x15(%eax),%ecx
0852ea65 +0x521:  mov    %ecx,0x10(%esp)
0852ea69 +0x525:  mov    0x19(%eax),%ecx
0852ea6c +0x528:  mov    %ecx,0x14(%esp)
0852ea70 +0x52c:  mov    0x1d(%eax),%ecx
0852ea73 +0x52f:  mov    %ecx,0x18(%esp)
0852ea77 +0x533:  mov    0x21(%eax),%ecx
0852ea7a +0x536:  mov    %ecx,0x1c(%esp)
0852ea7e +0x53a:  mov    0x25(%eax),%ecx
0852ea81 +0x53d:  mov    %ecx,0x20(%esp)
0852ea85 +0x541:  mov    0x29(%eax),%ecx
0852ea88 +0x544:  mov    %ecx,0x24(%esp)
0852ea8c +0x548:  mov    0x2d(%eax),%ecx
0852ea8f +0x54b:  mov    %ecx,0x28(%esp)
0852ea93 +0x54f:  mov    0x31(%eax),%ecx
0852ea96 +0x552:  mov    %ecx,0x2c(%esp)
0852ea9a +0x556:  mov    0x35(%eax),%ecx
0852ea9d +0x559:  mov    %ecx,0x30(%esp)
0852eaa1 +0x55d:  mov    0x39(%eax),%ecx
0852eaa4 +0x560:  mov    %ecx,0x34(%esp)
0852eaa8 +0x564:  mov    0x3d(%eax),%ecx
0852eaab +0x567:  mov    %ecx,0x38(%esp)
0852eaaf +0x56b:  mov    0x41(%eax),%ecx
0852eab2 +0x56e:  mov    %ecx,0x3c(%esp)
0852eab6 +0x572:  movzbl 0x45(%eax),%eax
0852eaba +0x576:  mov    %al,0x40(%esp)
0852eabe +0x57a:  mov    %edx,(%esp)
0852eac1 +0x57d:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
0852eac6 +0x582:  mov    %eax,-0x24(%ebp)
0852eac9 +0x585:  cmpl   $0x0,-0x24(%ebp)
0852eacd +0x589:  js     0852eb86 <+0x642>
0852ead3 +0x58f:  mov    -0x2c(%ebp),%ebx
0852ead6 +0x592:  mov    -0x1c(%ebp),%edx
0852ead9 +0x595:  mov    0x8(%ebp),%ecx
0852eadc +0x598:  mov    %edx,%eax
0852eade +0x59a:  shl    $0x3,%eax
0852eae1 +0x59d:  add    %edx,%eax
0852eae3 +0x59f:  shl    $0x3,%eax
0852eae6 +0x5a2:  imul   $0x798,%ebx,%edx
0852eaec +0x5a8:  add    %edx,%eax
0852eaee +0x5aa:  lea    (%ecx,%eax,1),%eax
0852eaf1 +0x5ad:  add    $0x30,%eax
0852eaf4 +0x5b0:  mov    (%eax),%eax
0852eaf6 +0x5b2:  cmp    -0x24(%ebp),%eax
0852eaf9 +0x5b5:  je     0852eb86 <+0x642>
0852eaff +0x5bb:  mov    -0x2c(%ebp),%ebx
0852eb02 +0x5be:  mov    -0x1c(%ebp),%edx
0852eb05 +0x5c1:  mov    0x8(%ebp),%ecx
0852eb08 +0x5c4:  mov    %edx,%eax
0852eb0a +0x5c6:  shl    $0x3,%eax
0852eb0d +0x5c9:  add    %edx,%eax
0852eb0f +0x5cb:  shl    $0x3,%eax
0852eb12 +0x5ce:  imul   $0x798,%ebx,%edx
0852eb18 +0x5d4:  add    %edx,%eax
0852eb1a +0x5d6:  lea    (%ecx,%eax,1),%eax
0852eb1d +0x5d9:  add    $0x40,%eax
0852eb20 +0x5dc:  mov    (%eax),%ebx
0852eb22 +0x5de:  mov    -0x24(%ebp),%eax
0852eb25 +0x5e1:  lea    0xa(%eax),%edi
0852eb28 +0x5e4:  mov    -0x2c(%ebp),%esi
0852eb2b +0x5e7:  mov    -0x1c(%ebp),%edx
0852eb2e +0x5ea:  mov    0x8(%ebp),%ecx
0852eb31 +0x5ed:  mov    %edx,%eax
0852eb33 +0x5ef:  shl    $0x3,%eax
0852eb36 +0x5f2:  add    %edx,%eax
0852eb38 +0x5f4:  shl    $0x3,%eax
0852eb3b +0x5f7:  imul   $0x798,%esi,%edx
0852eb41 +0x5fd:  add    %edx,%eax
0852eb43 +0x5ff:  lea    (%ecx,%eax,1),%eax
0852eb46 +0x602:  add    $0x30,%eax
0852eb49 +0x605:  mov    (%eax),%eax
0852eb4b +0x607:  lea    0xa(%eax),%esi
0852eb4e +0x60a:  mov    -0x2c(%ebp),%edx
0852eb51 +0x60d:  mov    0x8(%ebp),%eax
0852eb54 +0x610:  add    $0x8,%edx
0852eb57 +0x613:  mov    (%eax,%edx,4),%eax
0852eb5a +0x616:  mov    %eax,(%esp)
0852eb5d +0x619:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852eb62 +0x61e:  movl   $0x0,0x14(%esp)
0852eb6a +0x626:  mov    %ebx,0x10(%esp)
0852eb6e +0x62a:  mov    %edi,0xc(%esp)
0852eb72 +0x62e:  mov    %esi,0x8(%esp)
0852eb76 +0x632:  movl   $0x32,0x4(%esp)
0852eb7e +0x63a:  mov    %eax,(%esp)
0852eb81 +0x63d:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
0852eb86 +0x642:  mov    -0x2c(%ebp),%edx
0852eb89 +0x645:  lea    -0x58(%ebp),%ecx
0852eb8c +0x648:  mov    %edx,%eax
0852eb8e +0x64a:  add    %eax,%eax
0852eb90 +0x64c:  add    %edx,%eax
0852eb92 +0x64e:  shl    $0x2,%eax
0852eb95 +0x651:  lea    (%ecx,%eax,1),%eax
0852eb98 +0x654:  movl   $0x1,0x4(%esp)
0852eba0 +0x65c:  mov    %eax,(%esp)
0852eba3 +0x65f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852eba8 +0x664:  jmp    0852eda7 <+0x863>
0852ebad +0x669:  mov    -0x2c(%ebp),%ecx
0852ebb0 +0x66c:  mov    -0x1c(%ebp),%edx
0852ebb3 +0x66f:  mov    %edx,%eax
0852ebb5 +0x671:  shl    $0x3,%eax
0852ebb8 +0x674:  add    %edx,%eax
0852ebba +0x676:  shl    $0x3,%eax
0852ebbd +0x679:  imul   $0x798,%ecx,%edx
0852ebc3 +0x67f:  add    %edx,%eax
0852ebc5 +0x681:  add    $0x30,%eax
0852ebc8 +0x684:  add    0x8(%ebp),%eax
0852ebcb +0x687:  lea    0x9(%eax),%ebx
0852ebce +0x68a:  mov    -0x2c(%ebp),%edx
0852ebd1 +0x68d:  mov    0x8(%ebp),%eax
0852ebd4 +0x690:  add    $0x8,%edx
0852ebd7 +0x693:  mov    (%eax,%edx,4),%eax
0852ebda +0x696:  mov    %eax,(%esp)
0852ebdd +0x699:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852ebe2 +0x69e:  movl   $0x1,0x10(%esp)
0852ebea +0x6a6:  movl   $0x1,0xc(%esp)
0852ebf2 +0x6ae:  movl   $0x1c,0x8(%esp)
0852ebfa +0x6b6:  mov    %ebx,0x4(%esp)
0852ebfe +0x6ba:  mov    %eax,(%esp)
0852ec01 +0x6bd:  call   0850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)
0852ec06 +0x6c2:  mov    %eax,-0x24(%ebp)
0852ec09 +0x6c5:  cmpl   $0x0,-0x24(%ebp)
0852ec0d +0x6c9:  js     0852ec93 <+0x74f>
0852ec13 +0x6cf:  mov    -0x2c(%ebp),%ebx
0852ec16 +0x6d2:  mov    -0x1c(%ebp),%edx
0852ec19 +0x6d5:  mov    0x8(%ebp),%ecx
0852ec1c +0x6d8:  mov    %edx,%eax
0852ec1e +0x6da:  shl    $0x3,%eax
0852ec21 +0x6dd:  add    %edx,%eax
0852ec23 +0x6df:  shl    $0x3,%eax
0852ec26 +0x6e2:  imul   $0x798,%ebx,%edx
0852ec2c +0x6e8:  add    %edx,%eax
0852ec2e +0x6ea:  lea    (%ecx,%eax,1),%eax
0852ec31 +0x6ed:  add    $0x30,%eax
0852ec34 +0x6f0:  mov    (%eax),%eax
0852ec36 +0x6f2:  cmp    -0x24(%ebp),%eax
0852ec39 +0x6f5:  je     0852ec93 <+0x74f>
0852ec3b +0x6f7:  mov    -0x2c(%ebp),%ecx
0852ec3e +0x6fa:  mov    -0x1c(%ebp),%edx
0852ec41 +0x6fd:  mov    %edx,%eax
0852ec43 +0x6ff:  shl    $0x3,%eax
0852ec46 +0x702:  add    %edx,%eax
0852ec48 +0x704:  shl    $0x3,%eax
0852ec4b +0x707:  imul   $0x798,%ecx,%edx
0852ec51 +0x70d:  add    %edx,%eax
0852ec53 +0x70f:  add    $0x30,%eax
0852ec56 +0x712:  add    0x8(%ebp),%eax
0852ec59 +0x715:  lea    0x9(%eax),%ebx
0852ec5c +0x718:  mov    -0x2c(%ebp),%edx
0852ec5f +0x71b:  mov    0x8(%ebp),%eax
0852ec62 +0x71e:  add    $0x8,%edx
0852ec65 +0x721:  mov    (%eax,%edx,4),%eax
0852ec68 +0x724:  mov    %eax,(%esp)
0852ec6b +0x727:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852ec70 +0x72c:  mov    %eax,(%esp)
0852ec73 +0x72f:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0852ec78 +0x734:  movl   $0x1c,0xc(%esp)
0852ec80 +0x73c:  mov    -0x24(%ebp),%edx
0852ec83 +0x73f:  mov    %edx,0x8(%esp)
0852ec87 +0x743:  mov    %ebx,0x4(%esp)
0852ec8b +0x747:  mov    %eax,(%esp)
0852ec8e +0x74a:  call   0833aedc <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii>  ; user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int)
0852ec93 +0x74f:  mov    -0x2c(%ebp),%edx
0852ec96 +0x752:  lea    -0x58(%ebp),%ecx
0852ec99 +0x755:  mov    %edx,%eax
0852ec9b +0x757:  add    %eax,%eax
0852ec9d +0x759:  add    %edx,%eax
0852ec9f +0x75b:  shl    $0x2,%eax
0852eca2 +0x75e:  lea    (%ecx,%eax,1),%eax
0852eca5 +0x761:  movl   $0x7,0x4(%esp)
0852ecad +0x769:  mov    %eax,(%esp)
0852ecb0 +0x76c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852ecb5 +0x771:  jmp    0852eda7 <+0x863>
0852ecba +0x776:  mov    -0x2c(%ebp),%esi
0852ecbd +0x779:  mov    -0x1c(%ebp),%ebx
0852ecc0 +0x77c:  mov    -0x2c(%ebp),%edx
0852ecc3 +0x77f:  mov    0x8(%ebp),%eax
0852ecc6 +0x782:  add    $0x8,%edx
0852ecc9 +0x785:  mov    (%eax,%edx,4),%eax
0852eccc +0x788:  mov    %eax,(%esp)
0852eccf +0x78b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852ecd4 +0x790:  mov    %eax,%edx
0852ecd6 +0x792:  movl   $0x1,0x4c(%esp)
0852ecde +0x79a:  movl   $0x1,0x48(%esp)
0852ece6 +0x7a2:  movl   $0x2,0x44(%esp)
0852ecee +0x7aa:  mov    0x8(%ebp),%ecx
0852ecf1 +0x7ad:  mov    %ebx,%eax
0852ecf3 +0x7af:  shl    $0x3,%eax
0852ecf6 +0x7b2:  add    %ebx,%eax
0852ecf8 +0x7b4:  shl    $0x3,%eax
0852ecfb +0x7b7:  imul   $0x798,%esi,%ebx
0852ed01 +0x7bd:  add    %ebx,%eax
0852ed03 +0x7bf:  lea    (%ecx,%eax,1),%eax
0852ed06 +0x7c2:  add    $0x30,%eax
0852ed09 +0x7c5:  mov    0x9(%eax),%ecx
0852ed0c +0x7c8:  mov    %ecx,0x4(%esp)
0852ed10 +0x7cc:  mov    0xd(%eax),%ecx
0852ed13 +0x7cf:  mov    %ecx,0x8(%esp)
0852ed17 +0x7d3:  mov    0x11(%eax),%ecx
0852ed1a +0x7d6:  mov    %ecx,0xc(%esp)
0852ed1e +0x7da:  mov    0x15(%eax),%ecx
0852ed21 +0x7dd:  mov    %ecx,0x10(%esp)
0852ed25 +0x7e1:  mov    0x19(%eax),%ecx
0852ed28 +0x7e4:  mov    %ecx,0x14(%esp)
0852ed2c +0x7e8:  mov    0x1d(%eax),%ecx
0852ed2f +0x7eb:  mov    %ecx,0x18(%esp)
0852ed33 +0x7ef:  mov    0x21(%eax),%ecx
0852ed36 +0x7f2:  mov    %ecx,0x1c(%esp)
0852ed3a +0x7f6:  mov    0x25(%eax),%ecx
0852ed3d +0x7f9:  mov    %ecx,0x20(%esp)
0852ed41 +0x7fd:  mov    0x29(%eax),%ecx
0852ed44 +0x800:  mov    %ecx,0x24(%esp)
0852ed48 +0x804:  mov    0x2d(%eax),%ecx
0852ed4b +0x807:  mov    %ecx,0x28(%esp)
0852ed4f +0x80b:  mov    0x31(%eax),%ecx
0852ed52 +0x80e:  mov    %ecx,0x2c(%esp)
0852ed56 +0x812:  mov    0x35(%eax),%ecx
0852ed59 +0x815:  mov    %ecx,0x30(%esp)
0852ed5d +0x819:  mov    0x39(%eax),%ecx
0852ed60 +0x81c:  mov    %ecx,0x34(%esp)
0852ed64 +0x820:  mov    0x3d(%eax),%ecx
0852ed67 +0x823:  mov    %ecx,0x38(%esp)
0852ed6b +0x827:  mov    0x41(%eax),%ecx
0852ed6e +0x82a:  mov    %ecx,0x3c(%esp)
0852ed72 +0x82e:  movzbl 0x45(%eax),%eax
0852ed76 +0x832:  mov    %al,0x40(%esp)
0852ed7a +0x836:  mov    %edx,(%esp)
0852ed7d +0x839:  call   08502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)
0852ed82 +0x83e:  mov    %eax,-0x24(%ebp)
0852ed85 +0x841:  mov    -0x2c(%ebp),%edx
0852ed88 +0x844:  lea    -0x58(%ebp),%ecx
0852ed8b +0x847:  mov    %edx,%eax
0852ed8d +0x849:  add    %eax,%eax
0852ed8f +0x84b:  add    %edx,%eax
0852ed91 +0x84d:  shl    $0x2,%eax
0852ed94 +0x850:  lea    (%ecx,%eax,1),%eax
0852ed97 +0x853:  movl   $0x3,0x4(%esp)
0852ed9f +0x85b:  mov    %eax,(%esp)
0852eda2 +0x85e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852eda7 +0x863:  cmpl   $0x0,-0x24(%ebp)
0852edab +0x867:  jns    0852eded <+0x8a9>
0852edad +0x869:  mov    -0x2c(%ebp),%ecx
0852edb0 +0x86c:  mov    -0x1c(%ebp),%edx
0852edb3 +0x86f:  mov    %edx,%eax
0852edb5 +0x871:  shl    $0x3,%eax
0852edb8 +0x874:  add    %edx,%eax
0852edba +0x876:  shl    $0x3,%eax
0852edbd +0x879:  imul   $0x798,%ecx,%edx
0852edc3 +0x87f:  add    %edx,%eax
0852edc5 +0x881:  add    $0x30,%eax
0852edc8 +0x884:  add    0x8(%ebp),%eax
0852edcb +0x887:  lea    0x9(%eax),%edx
0852edce +0x88a:  mov    -0x2c(%ebp),%ecx
0852edd1 +0x88d:  mov    0x8(%ebp),%eax
0852edd4 +0x890:  add    $0x8,%ecx
0852edd7 +0x893:  mov    (%eax,%ecx,4),%eax
0852edda +0x896:  mov    %edx,0x8(%esp)
0852edde +0x89a:  mov    %eax,0x4(%esp)
0852ede2 +0x89e:  mov    0x8(%ebp),%eax
0852ede5 +0x8a1:  mov    %eax,(%esp)
0852ede8 +0x8a4:  call   0852e3a8 <_ZN11CTradeSpace24send_lose_item_for_chinaEP5CUserR10Inven_Item>  ; CTradeSpace::send_lose_item_for_china(CUser*, Inven_Item&)
0852eded +0x8a9:  mov    -0x2c(%ebp),%ecx
0852edf0 +0x8ac:  mov    -0x1c(%ebp),%edx
0852edf3 +0x8af:  mov    %edx,%eax
0852edf5 +0x8b1:  shl    $0x3,%eax
0852edf8 +0x8b4:  add    %edx,%eax
0852edfa +0x8b6:  shl    $0x3,%eax
0852edfd +0x8b9:  imul   $0x798,%ecx,%edx
0852ee03 +0x8bf:  add    %edx,%eax
0852ee05 +0x8c1:  add    $0x30,%eax
0852ee08 +0x8c4:  add    0x8(%ebp),%eax
0852ee0b +0x8c7:  add    $0x9,%eax
0852ee0e +0x8ca:  mov    %eax,(%esp)
0852ee11 +0x8cd:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852ee16 +0x8d2:  mov    -0x2c(%ebp),%edx
0852ee19 +0x8d5:  lea    -0x58(%ebp),%ecx
0852ee1c +0x8d8:  mov    %edx,%eax
0852ee1e +0x8da:  add    %eax,%eax
0852ee20 +0x8dc:  add    %edx,%eax
0852ee22 +0x8de:  shl    $0x2,%eax
0852ee25 +0x8e1:  lea    (%ecx,%eax,1),%edx
0852ee28 +0x8e4:  mov    -0x24(%ebp),%eax
0852ee2b +0x8e7:  mov    %eax,0x4(%esp)
0852ee2f +0x8eb:  mov    %edx,(%esp)
0852ee32 +0x8ee:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852ee37 +0x8f3:  addl   $0x1,-0x28(%ebp)
0852ee3b +0x8f7:  jmp    0852ee44 <+0x900>
0852ee3d +0x8f9:  nop
0852ee3e +0x8fa:  jmp    0852ee44 <+0x900>
0852ee40 +0x8fc:  nop
0852ee41 +0x8fd:  jmp    0852ee44 <+0x900>
0852ee43 +0x8ff:  nop
0852ee44 +0x900:  addl   $0x1,-0x1c(%ebp)
0852ee48 +0x904:  cmpl   $0x1a,-0x1c(%ebp)
0852ee4c +0x908:  setle  %al
0852ee4f +0x90b:  test   %al,%al
0852ee51 +0x90d:  jne    0852e850 <+0x30c>
0852ee57 +0x913:  mov    -0x2c(%ebp),%edx
0852ee5a +0x916:  lea    -0x58(%ebp),%ecx
0852ee5d +0x919:  mov    %edx,%eax
0852ee5f +0x91b:  add    %eax,%eax
0852ee61 +0x91d:  add    %edx,%eax
0852ee63 +0x91f:  shl    $0x2,%eax
0852ee66 +0x922:  lea    (%ecx,%eax,1),%edx
0852ee69 +0x925:  mov    -0x28(%ebp),%eax
0852ee6c +0x928:  mov    %eax,0x8(%esp)
0852ee70 +0x92c:  lea    -0x5c(%ebp),%eax
0852ee73 +0x92f:  mov    %eax,0x4(%esp)
0852ee77 +0x933:  mov    %edx,(%esp)
0852ee7a +0x936:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
0852ee7f +0x93b:  mov    -0x2c(%ebp),%edx
0852ee82 +0x93e:  lea    -0x58(%ebp),%ecx
0852ee85 +0x941:  mov    %edx,%eax
0852ee87 +0x943:  add    %eax,%eax
0852ee89 +0x945:  add    %edx,%eax
0852ee8b +0x947:  shl    $0x2,%eax
0852ee8e +0x94a:  lea    (%ecx,%eax,1),%eax
0852ee91 +0x94d:  movl   $0x1,0x4(%esp)
0852ee99 +0x955:  mov    %eax,(%esp)
0852ee9c +0x958:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852eea1 +0x95d:  addl   $0x1,-0x2c(%ebp)
0852eea5 +0x961:  cmpl   $0x1,-0x2c(%ebp)
0852eea9 +0x965:  setle  %al
0852eeac +0x968:  test   %al,%al
0852eeae +0x96a:  jne    0852e5cc <+0x88>
0852eeb4 +0x970:  movl   $0x0,-0x2c(%ebp)
0852eebb +0x977:  jmp    0852ef2b <+0x9e7>
0852eebd +0x979:  mov    -0x2c(%ebp),%edx
0852eec0 +0x97c:  mov    0x8(%ebp),%eax
0852eec3 +0x97f:  add    $0x8,%edx
0852eec6 +0x982:  mov    (%eax,%edx,4),%eax
0852eec9 +0x985:  test   %eax,%eax
0852eecb +0x987:  je     0852ef26 <+0x9e2>
0852eecd +0x989:  mov    -0x2c(%ebp),%edx
0852eed0 +0x98c:  mov    0x8(%ebp),%eax
0852eed3 +0x98f:  add    $0x8,%edx
0852eed6 +0x992:  mov    (%eax,%edx,4),%eax
0852eed9 +0x995:  cmp    0xc(%ebp),%eax
0852eedc +0x998:  je     0852ef27 <+0x9e3>
0852eede +0x99a:  mov    -0x2c(%ebp),%edx
0852eee1 +0x99d:  lea    -0x58(%ebp),%ecx
0852eee4 +0x9a0:  mov    %edx,%eax
0852eee6 +0x9a2:  add    %eax,%eax
0852eee8 +0x9a4:  add    %edx,%eax
0852eeea +0x9a6:  shl    $0x2,%eax
0852eeed +0x9a9:  lea    (%ecx,%eax,1),%edx
0852eef0 +0x9ac:  mov    -0x2c(%ebp),%ecx
0852eef3 +0x9af:  mov    0x8(%ebp),%eax
0852eef6 +0x9b2:  add    $0x8,%ecx
0852eef9 +0x9b5:  mov    (%eax,%ecx,4),%eax
0852eefc +0x9b8:  mov    %edx,0x4(%esp)
0852ef00 +0x9bc:  mov    %eax,(%esp)
0852ef03 +0x9bf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852ef08 +0x9c4:  mov    -0x2c(%ebp),%edx
0852ef0b +0x9c7:  mov    0x8(%ebp),%eax
0852ef0e +0x9ca:  add    $0x8,%edx
0852ef11 +0x9cd:  mov    (%eax,%edx,4),%eax
0852ef14 +0x9d0:  movl   $0x0,0x4(%esp)
0852ef1c +0x9d8:  mov    %eax,(%esp)
0852ef1f +0x9db:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
0852ef24 +0x9e0:  jmp    0852ef27 <+0x9e3>
0852ef26 +0x9e2:  nop
0852ef27 +0x9e3:  addl   $0x1,-0x2c(%ebp)
0852ef2b +0x9e7:  cmpl   $0x1,-0x2c(%ebp)
0852ef2f +0x9eb:  setle  %al
0852ef32 +0x9ee:  test   %al,%al
0852ef34 +0x9f0:  jne    0852eebd <+0x979>
0852ef36 +0x9f2:  movl   $0x0,-0x2c(%ebp)
0852ef3d +0x9f9:  jmp    0852ef97 <+0xa53>
0852ef3f +0x9fb:  mov    -0x2c(%ebp),%edx
0852ef42 +0x9fe:  mov    0x8(%ebp),%eax
0852ef45 +0xa01:  add    $0x8,%edx
0852ef48 +0xa04:  mov    (%eax,%edx,4),%eax
0852ef4b +0xa07:  test   %eax,%eax
0852ef4d +0xa09:  je     0852ef92 <+0xa4e>
0852ef4f +0xa0b:  mov    -0x2c(%ebp),%edx
0852ef52 +0xa0e:  mov    0x8(%ebp),%eax
0852ef55 +0xa11:  add    $0x8,%edx
0852ef58 +0xa14:  mov    (%eax,%edx,4),%eax
0852ef5b +0xa17:  add    $0x79700,%eax
0852ef60 +0xa1c:  movl   $0x0,0x14(%esp)
0852ef68 +0xa24:  movl   $0x0,0x10(%esp)
0852ef70 +0xa2c:  movl   $0x0,0xc(%esp)
0852ef78 +0xa34:  movl   $0x0,0x8(%esp)
0852ef80 +0xa3c:  movl   $0x0,0x4(%esp)
0852ef88 +0xa44:  mov    %eax,(%esp)
0852ef8b +0xa47:  call   0868507c <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii>  ; cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int)
0852ef90 +0xa4c:  jmp    0852ef93 <+0xa4f>
0852ef92 +0xa4e:  nop
0852ef93 +0xa4f:  addl   $0x1,-0x2c(%ebp)
0852ef97 +0xa53:  cmpl   $0x1,-0x2c(%ebp)
0852ef9b +0xa57:  setle  %al
0852ef9e +0xa5a:  test   %al,%al
0852efa0 +0xa5c:  jne    0852ef3f <+0x9fb>
0852efa2 +0xa5e:  mov    $0x1,%esi
0852efa7 +0xa63:  jmp    0852efd3 <+0xa8f>
0852efa9 +0xa65:  mov    %edx,%esi
0852efab +0xa67:  mov    %eax,%edi
0852efad +0xa69:  lea    -0x58(%ebp),%eax
0852efb0 +0xa6c:  lea    0x18(%eax),%ebx
0852efb3 +0xa6f:  lea    -0x58(%ebp),%eax
0852efb6 +0xa72:  cmp    %eax,%ebx
0852efb8 +0xa74:  je     0852efc7 <+0xa83>
0852efba +0xa76:  sub    $0xc,%ebx
0852efbd +0xa79:  mov    %ebx,(%esp)
0852efc0 +0xa7c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852efc5 +0xa81:  jmp    0852efb3 <+0xa6f>
0852efc7 +0xa83:  mov    %edi,%eax
0852efc9 +0xa85:  mov    %esi,%edx
0852efcb +0xa87:  mov    %eax,(%esp)
0852efce +0xa8a:  call   08ae3750 <_Unwind_Resume>
0852efd3 +0xa8f:  lea    -0x58(%ebp),%eax
0852efd6 +0xa92:  lea    0x18(%eax),%ebx
0852efd9 +0xa95:  lea    -0x58(%ebp),%eax
0852efdc +0xa98:  cmp    %eax,%ebx
0852efde +0xa9a:  je     0852efed <+0xaa9>
0852efe0 +0xa9c:  sub    $0xc,%ebx
0852efe3 +0xa9f:  mov    %ebx,(%esp)
0852efe6 +0xaa2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852efeb +0xaa7:  jmp    0852efd9 <+0xa95>
0852efed +0xaa9:  mov    %esi,%eax
0852efef +0xaab:  add    $0xbc,%esp
0852eff5 +0xab1:  pop    %ebx
0852eff6 +0xab2:  pop    %esi
0852eff7 +0xab3:  pop    %edi
0852eff8 +0xab4:  pop    %ebp
0852eff9 +0xab5:  ret
```

## 反编译 C

```c
// CTradeSpace::cancel_trade_for_china @ 0x852e544

/* CTradeSpace::cancel_trade_for_china(CUser*) */

undefined4 __thiscall CTradeSpace::cancel_trade_for_china(CTradeSpace *this,CUser *param_1)

{
  CTradeSpace CVar1;
  int iVar2;
  CInventory *pCVar3;
  CCreatureMgr *this_00;
  int iVar4;
  PacketGuard *pPVar5;
  int iVar6;
  undefined4 uVar7;
  int local_60;
  PacketGuard local_5c [24];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_34 = 0;
  local_30 = 0;
  pPVar5 = local_5c;
  for (iVar6 = 1; iVar6 != -1; iVar6 = iVar6 + -1) {
                    /* try { // try from 0852e56d to 0852e571 has its CatchHandler @ 0852e584 */
    PacketGuard::PacketGuard(pPVar5);
    pPVar5 = pPVar5 + 0xc;
  }
  local_30 = 0;
  do {
    if (1 < local_30) {
      for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
        if ((*(int *)(this + (local_30 + 8) * 4) != 0) &&
           (*(CUser **)(this + (local_30 + 8) * 4) != param_1)) {
          CUser::Send(*(CUser **)(this + (local_30 + 8) * 4),local_5c + local_30 * 0xc);
          CUser::send_equip(*(CUser **)(this + (local_30 + 8) * 4),0);
        }
      }
      for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
        if (*(int *)(this + (local_30 + 8) * 4) != 0) {
          cUserHistoryLog::TradeEnd
                    ((cUserHistoryLog *)(*(int *)(this + (local_30 + 8) * 4) + 0x79700),0,0,0,0,0);
        }
      }
      uVar7 = 1;
LAB_0852efd3:
      pPVar5 = (PacketGuard *)local_44;
      while (pPVar5 != local_5c) {
        pPVar5 = pPVar5 + -0xc;
        PacketGuard::~PacketGuard(pPVar5);
      }
      return uVar7;
    }
    local_34 = 0;
    for (local_24 = 3; local_24 < 0x1b; local_24 = local_24 + 1) {
      if (*(int *)(this + local_24 * 0x48 + local_30 * 0x798 + 0x3b) != 0) {
        local_34 = local_34 + 1;
      }
    }
                    /* try { // try from 0852e62c to 0852ef8f has its CatchHandler @ 0852efa9 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)(local_5c + local_30 * 0xc));
    InterfacePacketBuf::put_header((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0,0x10);
    local_2c = 0;
    local_60 = 0;
    if (*(int *)(this + (local_30 + 0x3d8) * 4) < 1) {
      local_60 = InterfacePacketBuf::get_index((InterfacePacketBuf *)(local_5c + local_30 * 0xc));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)(local_5c + local_30 * 0xc),(int)(short)local_34);
    }
    else {
      local_34 = local_34 + 1;
      if (*(int *)(this + (local_30 + 8) * 4) != 0) {
        iVar6 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
        if (iVar6 == 0) {
          cMyTrace::cMyTrace(local_44,"bool CTradeSpace::cancel_trade_for_china(CUser*)",0x71c,5);
          cMyTrace::operator()
                    (local_44,"CTradeSpace::cancel_trade()\tm_pTraders[user_index]->getCurCharacR()"
                    );
          uVar7 = 0;
          goto LAB_0852efd3;
        }
        uVar7 = *(undefined4 *)(this + (local_30 + 0x3d8) * 4);
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenW
                           (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
        CInventory::gain_money(pCVar3,uVar7,2,1,0);
        *(undefined4 *)(this + (local_30 + 0x3d8) * 4) = 0;
        local_2c = local_2c + 1;
      }
      local_60 = InterfacePacketBuf::get_index((InterfacePacketBuf *)(local_5c + local_30 * 0xc));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)(local_5c + local_30 * 0xc),(int)(short)local_34);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
    }
    local_28 = 0;
    for (local_20 = 3; local_20 < 0x1b; local_20 = local_20 + 1) {
      if (((*(int *)(this + (local_30 + 8) * 4) != 0) &&
          (iVar6 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_30 + 8) * 4)),
          iVar6 != 0)) && (*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x3b) != 0)) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),local_20);
        iVar4 = local_20;
        iVar6 = local_30;
        CVar1 = this[local_20 * 0x48 + local_30 * 0x798 + 0x38];
        if (CVar1 == (CTradeSpace)0x1) {
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          iVar6 = iVar4 * 0x48 + iVar6 * 0x798;
          local_28 = CInventory::insertAvatarIntoInventory
                               (uVar7,*(undefined4 *)(this + iVar6 + 0x39),
                                *(undefined4 *)(this + iVar6 + 0x3d),
                                *(undefined4 *)(this + iVar6 + 0x41),
                                *(undefined4 *)(this + iVar6 + 0x45),
                                *(undefined4 *)(this + iVar6 + 0x49),
                                *(undefined4 *)(this + iVar6 + 0x4d),
                                *(undefined4 *)(this + iVar6 + 0x51),
                                *(undefined4 *)(this + iVar6 + 0x55),
                                *(undefined4 *)(this + iVar6 + 0x59),
                                *(undefined4 *)(this + iVar6 + 0x5d),
                                *(undefined4 *)(this + iVar6 + 0x61),
                                *(undefined4 *)(this + iVar6 + 0x65),
                                *(undefined4 *)(this + iVar6 + 0x69),
                                *(undefined4 *)(this + iVar6 + 0x6d),
                                *(undefined4 *)(this + iVar6 + 0x71),this[iVar6 + 0x75],3,1);
          if ((-1 < local_28) &&
             (*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x30) != local_28)) {
            iVar4 = *(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x40);
            iVar6 = local_28 + 10;
            iVar2 = *(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x30);
            pCVar3 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR
                               (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
            CInventory::SendAvatarEvent(pCVar3,0x32,iVar2 + 10,iVar6,iVar4,0);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),1);
        }
        else if (CVar1 == (CTradeSpace)0x7) {
          iVar6 = local_20 * 0x48;
          iVar4 = local_30 * 0x798;
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          local_28 = CInventory::insertItemIntoCreature(uVar7,this + iVar6 + iVar4 + 0x39,0x1c,1,1);
          if ((-1 < local_28) &&
             (*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x30) != local_28)) {
            iVar6 = local_20 * 0x48;
            iVar4 = local_30 * 0x798;
            pCVar3 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW
                               (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
            this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
            user_creature::CCreatureMgr::ChangeSlotNo
                      (this_00,(Inven_Item *)(this + iVar6 + iVar4 + 0x39),local_28,0x1c);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),7);
        }
        else if (CVar1 == (CTradeSpace)0x0) {
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          iVar6 = iVar4 * 0x48 + iVar6 * 0x798;
          local_28 = CInventory::insertItemIntoInventory
                               (uVar7,*(undefined4 *)(this + iVar6 + 0x39),
                                *(undefined4 *)(this + iVar6 + 0x3d),
                                *(undefined4 *)(this + iVar6 + 0x41),
                                *(undefined4 *)(this + iVar6 + 0x45),
                                *(undefined4 *)(this + iVar6 + 0x49),
                                *(undefined4 *)(this + iVar6 + 0x4d),
                                *(undefined4 *)(this + iVar6 + 0x51),
                                *(undefined4 *)(this + iVar6 + 0x55),
                                *(undefined4 *)(this + iVar6 + 0x59),
                                *(undefined4 *)(this + iVar6 + 0x5d),
                                *(undefined4 *)(this + iVar6 + 0x61),
                                *(undefined4 *)(this + iVar6 + 0x65),
                                *(undefined4 *)(this + iVar6 + 0x69),
                                *(undefined4 *)(this + iVar6 + 0x6d),
                                *(undefined4 *)(this + iVar6 + 0x71),this[iVar6 + 0x75],2,1,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),0);
        }
        else {
          uVar7 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
          iVar6 = iVar4 * 0x48 + iVar6 * 0x798;
          local_28 = CInventory::insertItemIntoEquipment
                               (uVar7,*(undefined4 *)(this + iVar6 + 0x39),
                                *(undefined4 *)(this + iVar6 + 0x3d),
                                *(undefined4 *)(this + iVar6 + 0x41),
                                *(undefined4 *)(this + iVar6 + 0x45),
                                *(undefined4 *)(this + iVar6 + 0x49),
                                *(undefined4 *)(this + iVar6 + 0x4d),
                                *(undefined4 *)(this + iVar6 + 0x51),
                                *(undefined4 *)(this + iVar6 + 0x55),
                                *(undefined4 *)(this + iVar6 + 0x59),
                                *(undefined4 *)(this + iVar6 + 0x5d),
                                *(undefined4 *)(this + iVar6 + 0x61),
                                *(undefined4 *)(this + iVar6 + 0x65),
                                *(undefined4 *)(this + iVar6 + 0x69),
                                *(undefined4 *)(this + iVar6 + 0x6d),
                                *(undefined4 *)(this + iVar6 + 0x71),this[iVar6 + 0x75],2,1,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_5c + local_30 * 0xc),3);
        }
        if (local_28 < 0) {
          send_lose_item_for_china
                    (this,*(CUser **)(this + (local_30 + 8) * 4),
                     (Inven_Item *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x39));
        }
        Inven_Item::reset((Inven_Item *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x39));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_5c + local_30 * 0xc),local_28);
        local_2c = local_2c + 1;
      }
    }
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)(local_5c + local_30 * 0xc),&local_60,local_2c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)(local_5c + local_30 * 0xc),true);
    local_30 = local_30 + 1;
  } while( true );
}
```
