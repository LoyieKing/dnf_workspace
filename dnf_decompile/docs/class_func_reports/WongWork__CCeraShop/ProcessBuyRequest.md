# ProcessBuyRequest

`_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM`

`WongWork::CCeraShop::ProcessBuyRequest(CUser*, MSG_BUY_CERASHOP_ITEM const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x0832047a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832047a  _ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM
#           WongWork::CCeraShop::ProcessBuyRequest(CUser*, MSG_BUY_CERASHOP_ITEM const&)
# range [0x0832047a, 0x08321d2d]
0832047a +0x0000:  push   %ebp
0832047b +0x0001:  mov    %esp,%ebp
0832047d +0x0003:  push   %edi
0832047e +0x0004:  push   %esi
0832047f +0x0005:  push   %ebx
08320480 +0x0006:  sub    $0x40c,%esp
08320486 +0x000c:  mov    0x10(%ebp),%eax
08320489 +0x000f:  movzbl 0x36(%eax),%eax
0832048d +0x0013:  movzbl %al,%esi
08320490 +0x0016:  mov    0xc(%ebp),%eax
08320493 +0x0019:  mov    %eax,(%esp)
08320496 +0x001c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0832049b +0x0021:  movl   $0x0,0x4(%esp)
083204a3 +0x0029:  mov    %eax,(%esp)
083204a6 +0x002c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083204ab +0x0031:  mov    %eax,%ebx
083204ad +0x0033:  movl   $0x0,0xc(%esp)
083204b5 +0x003b:  movl   $0x92,0x8(%esp)
083204bd +0x0043:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083204c5 +0x004b:  lea    -0x168(%ebp),%eax
083204cb +0x0051:  mov    %eax,(%esp)
083204ce +0x0054:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083204d3 +0x0059:  mov    %esi,0xc(%esp)
083204d7 +0x005d:  mov    %ebx,0x8(%esp)
083204db +0x0061:  movl   $"NEXON BILLING : ProcessBuyRequest(m_id(%s),count(%d))",0x4(%esp)
083204e3 +0x0069:  lea    -0x168(%ebp),%eax
083204e9 +0x006f:  mov    %eax,(%esp)
083204ec +0x0072:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083204f1 +0x0077:  lea    -0x2a8(%ebp),%ebx
083204f7 +0x007d:  mov    $0x0,%eax
083204fc +0x0082:  mov    $0x24,%edx
08320501 +0x0087:  mov    %ebx,%edi
08320503 +0x0089:  mov    %edx,%ecx
08320505 +0x008b:  rep stos %eax,%es:(%edi)
08320507 +0x008d:  movl   $0x0,-0x84(%ebp)
08320511 +0x0097:  movl   $0x0,-0x80(%ebp)
08320518 +0x009e:  mov    0x10(%ebp),%eax
0832051b +0x00a1:  mov    0x39(%eax),%eax
0832051e +0x00a4:  mov    %eax,%ebx
08320520 +0x00a6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08320525 +0x00ab:  mov    %ebx,0x4(%esp)
08320529 +0x00af:  mov    %eax,(%esp)
0832052c +0x00b2:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
08320531 +0x00b7:  mov    %eax,-0x7c(%ebp)
08320534 +0x00ba:  cmpl   $0x0,-0x7c(%ebp)
08320538 +0x00be:  jne    0832058e <+0x114>
0832053a +0x00c0:  mov    0x10(%ebp),%eax
0832053d +0x00c3:  movzbl 0xf(%eax),%eax
08320541 +0x00c7:  movsbl %al,%edx
08320544 +0x00ca:  mov    0x10(%ebp),%eax
08320547 +0x00cd:  mov    0x39(%eax),%eax
0832054a +0x00d0:  mov    %edx,0x1c(%esp)
0832054e +0x00d4:  movl   $0x1,0x18(%esp)
08320556 +0x00dc:  movl   $0x1,0x14(%esp)
0832055e +0x00e4:  mov    %eax,0x10(%esp)
08320562 +0x00e8:  movl   $0x0,0xc(%esp)
0832056a +0x00f0:  movl   $0x15,0x8(%esp)
08320572 +0x00f8:  mov    0xc(%ebp),%eax
08320575 +0x00fb:  mov    %eax,0x4(%esp)
08320579 +0x00ff:  mov    0x8(%ebp),%eax
0832057c +0x0102:  mov    %eax,(%esp)
0832057f +0x0105:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320584 +0x010a:  mov    $0x1,%eax
08320589 +0x010f:  jmp    08321d22 <+0x18a8>
0832058e +0x0114:  call   0848f140 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv>  ; WongWork::CEventMgr::IsChildrensDayEventing()
08320593 +0x0119:  test   %al,%al
08320595 +0x011b:  je     083205a2 <+0x128>
08320597 +0x011d:  mov    0xc(%ebp),%eax
0832059a +0x0120:  mov    %eax,(%esp)
0832059d +0x0123:  call   0832815a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0xb3>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0xb3
083205a2 +0x0128:  movl   $0x0,-0x78(%ebp)
083205a9 +0x012f:  lea    -0x338(%ebp),%ebx
083205af +0x0135:  mov    $0x0,%eax
083205b4 +0x013a:  mov    $0x24,%edx
083205b9 +0x013f:  mov    %ebx,%edi
083205bb +0x0141:  mov    %edx,%ecx
083205bd +0x0143:  rep stos %eax,%es:(%edi)
083205bf +0x0145:  lea    -0x3c8(%ebp),%ebx
083205c5 +0x014b:  mov    $0x0,%eax
083205ca +0x0150:  mov    $0x24,%edx
083205cf +0x0155:  mov    %ebx,%edi
083205d1 +0x0157:  mov    %edx,%ecx
083205d3 +0x0159:  rep stos %eax,%es:(%edi)
083205d5 +0x015b:  movl   $0x0,-0x78(%ebp)
083205dc +0x0162:  jmp    08320d54 <+0x8da>
083205e1 +0x0167:  mov    -0x78(%ebp),%ebx
083205e4 +0x016a:  mov    -0x78(%ebp),%eax
083205e7 +0x016d:  mov    0x10(%ebp),%edx
083205ea +0x0170:  imul   $0x1cf,%eax,%eax
083205f0 +0x0176:  lea    (%edx,%eax,1),%eax
083205f3 +0x0179:  add    $0x30,%eax
083205f6 +0x017c:  mov    0x9(%eax),%eax
083205f9 +0x017f:  mov    %eax,%esi
083205fb +0x0181:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08320600 +0x0186:  mov    %esi,0x4(%esp)
08320604 +0x018a:  mov    %eax,(%esp)
08320607 +0x018d:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
0832060c +0x0192:  mov    %eax,-0x338(%ebp,%ebx,4)
08320613 +0x0199:  mov    -0x78(%ebp),%eax
08320616 +0x019c:  mov    -0x338(%ebp,%eax,4),%eax
0832061d +0x01a3:  test   %eax,%eax
0832061f +0x01a5:  jne    083206eb <+0x271>
08320625 +0x01ab:  movl   $0xffffffff,-0x4c(%ebp)
0832062c +0x01b2:  mov    0x10(%ebp),%eax
0832062f +0x01b5:  movzbl 0xf(%eax),%eax
08320633 +0x01b9:  movsbl %al,%ecx
08320636 +0x01bc:  mov    0x10(%ebp),%eax
08320639 +0x01bf:  movzbl 0x36(%eax),%eax
0832063d +0x01c3:  movzbl %al,%edx
08320640 +0x01c6:  mov    -0x78(%ebp),%eax
08320643 +0x01c9:  lea    0x1(%eax),%ebx
08320646 +0x01cc:  mov    -0x78(%ebp),%eax
08320649 +0x01cf:  mov    0x10(%ebp),%esi
0832064c +0x01d2:  imul   $0x1cf,%eax,%eax
08320652 +0x01d8:  lea    (%esi,%eax,1),%eax
08320655 +0x01db:  add    $0x30,%eax
08320658 +0x01de:  mov    0x9(%eax),%eax
0832065b +0x01e1:  mov    %ecx,0x1c(%esp)
0832065f +0x01e5:  mov    %edx,0x18(%esp)
08320663 +0x01e9:  mov    %ebx,0x14(%esp)
08320667 +0x01ed:  mov    %eax,0x10(%esp)
0832066b +0x01f1:  mov    -0x4c(%ebp),%eax
0832066e +0x01f4:  mov    %eax,0xc(%esp)
08320672 +0x01f8:  movl   $0x15,0x8(%esp)
0832067a +0x0200:  mov    0xc(%ebp),%eax
0832067d +0x0203:  mov    %eax,0x4(%esp)
08320681 +0x0207:  mov    0x8(%ebp),%eax
08320684 +0x020a:  mov    %eax,(%esp)
08320687 +0x020d:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0832068c +0x0212:  mov    -0x78(%ebp),%eax
0832068f +0x0215:  movl   $0x0,-0x338(%ebp,%eax,4)
0832069a +0x0220:  movl   $0x0,0xc(%esp)
083206a2 +0x0228:  movl   $0xc3,0x8(%esp)
083206aa +0x0230:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083206b2 +0x0238:  lea    -0x158(%ebp),%eax
083206b8 +0x023e:  mov    %eax,(%esp)
083206bb +0x0241:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083206c0 +0x0246:  movl   $0xc3,0xc(%esp)
083206c8 +0x024e:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083206d0 +0x0256:  movl   $"[%s][%d]",0x4(%esp)
083206d8 +0x025e:  lea    -0x158(%ebp),%eax
083206de +0x0264:  mov    %eax,(%esp)
083206e1 +0x0267:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083206e6 +0x026c:  jmp    08320d50 <+0x8d6>
083206eb +0x0271:  mov    -0x78(%ebp),%eax
083206ee +0x0274:  mov    -0x338(%ebp,%eax,4),%eax
083206f5 +0x027b:  mov    %eax,(%esp)
083206f8 +0x027e:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
083206fd +0x0283:  mov    %eax,-0x50(%ebp)
08320700 +0x0286:  mov    0xc(%ebp),%eax
08320703 +0x0289:  mov    %eax,(%esp)
08320706 +0x028c:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
0832070b +0x0291:  xor    $0x1,%eax
0832070e +0x0294:  test   %al,%al
08320710 +0x0296:  je     083208e9 <+0x46f>
08320716 +0x029c:  mov    -0x78(%ebp),%eax
08320719 +0x029f:  mov    -0x338(%ebp,%eax,4),%eax
08320720 +0x02a6:  mov    %eax,(%esp)
08320723 +0x02a9:  call   0817a060 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xde>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xde
08320728 +0x02ae:  cmp    $0x63,%eax
0832072b +0x02b1:  sete   %al
0832072e +0x02b4:  test   %al,%al
08320730 +0x02b6:  je     083207f5 <+0x37b>
08320736 +0x02bc:  mov    0x10(%ebp),%eax
08320739 +0x02bf:  movzbl 0xf(%eax),%eax
0832073d +0x02c3:  movsbl %al,%ecx
08320740 +0x02c6:  mov    0x10(%ebp),%eax
08320743 +0x02c9:  movzbl 0x36(%eax),%eax
08320747 +0x02cd:  movzbl %al,%edx
0832074a +0x02d0:  mov    -0x78(%ebp),%eax
0832074d +0x02d3:  lea    0x1(%eax),%ebx
08320750 +0x02d6:  mov    -0x78(%ebp),%eax
08320753 +0x02d9:  mov    0x10(%ebp),%esi
08320756 +0x02dc:  imul   $0x1cf,%eax,%eax
0832075c +0x02e2:  lea    (%esi,%eax,1),%eax
0832075f +0x02e5:  add    $0x30,%eax
08320762 +0x02e8:  mov    0x9(%eax),%eax
08320765 +0x02eb:  mov    %ecx,0x1c(%esp)
08320769 +0x02ef:  mov    %edx,0x18(%esp)
0832076d +0x02f3:  mov    %ebx,0x14(%esp)
08320771 +0x02f7:  mov    %eax,0x10(%esp)
08320775 +0x02fb:  mov    -0x50(%ebp),%eax
08320778 +0x02fe:  mov    %eax,0xc(%esp)
0832077c +0x0302:  movl   $0x8,0x8(%esp)
08320784 +0x030a:  mov    0xc(%ebp),%eax
08320787 +0x030d:  mov    %eax,0x4(%esp)
0832078b +0x0311:  mov    0x8(%ebp),%eax
0832078e +0x0314:  mov    %eax,(%esp)
08320791 +0x0317:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320796 +0x031c:  mov    -0x78(%ebp),%eax
08320799 +0x031f:  movl   $0x0,-0x338(%ebp,%eax,4)
083207a4 +0x032a:  movl   $0x0,0xc(%esp)
083207ac +0x0332:  movl   $0xde,0x8(%esp)
083207b4 +0x033a:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083207bc +0x0342:  lea    -0x148(%ebp),%eax
083207c2 +0x0348:  mov    %eax,(%esp)
083207c5 +0x034b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083207ca +0x0350:  movl   $0xde,0xc(%esp)
083207d2 +0x0358:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083207da +0x0360:  movl   $"[%s][%d]",0x4(%esp)
083207e2 +0x0368:  lea    -0x148(%ebp),%eax
083207e8 +0x036e:  mov    %eax,(%esp)
083207eb +0x0371:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083207f0 +0x0376:  jmp    08320d50 <+0x8d6>
083207f5 +0x037b:  mov    0x10(%ebp),%eax
083207f8 +0x037e:  movzbl 0xf(%eax),%eax
083207fc +0x0382:  cmp    $0x1,%al
083207fe +0x0384:  jne    0832081d <+0x3a3>
08320800 +0x0386:  mov    -0x78(%ebp),%eax
08320803 +0x0389:  mov    -0x338(%ebp,%eax,4),%eax
0832080a +0x0390:  mov    %eax,(%esp)
0832080d +0x0393:  call   0817a078 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf6
08320812 +0x0398:  test   %al,%al
08320814 +0x039a:  je     0832081d <+0x3a3>
08320816 +0x039c:  mov    $0x1,%eax
0832081b +0x03a1:  jmp    08320822 <+0x3a8>
0832081d +0x03a3:  mov    $0x0,%eax
08320822 +0x03a8:  test   %al,%al
08320824 +0x03aa:  je     083208e9 <+0x46f>
0832082a +0x03b0:  mov    0x10(%ebp),%eax
0832082d +0x03b3:  movzbl 0xf(%eax),%eax
08320831 +0x03b7:  movsbl %al,%ecx
08320834 +0x03ba:  mov    0x10(%ebp),%eax
08320837 +0x03bd:  movzbl 0x36(%eax),%eax
0832083b +0x03c1:  movzbl %al,%edx
0832083e +0x03c4:  mov    -0x78(%ebp),%eax
08320841 +0x03c7:  lea    0x1(%eax),%ebx
08320844 +0x03ca:  mov    -0x78(%ebp),%eax
08320847 +0x03cd:  mov    0x10(%ebp),%esi
0832084a +0x03d0:  imul   $0x1cf,%eax,%eax
08320850 +0x03d6:  lea    (%esi,%eax,1),%eax
08320853 +0x03d9:  add    $0x30,%eax
08320856 +0x03dc:  mov    0x9(%eax),%eax
08320859 +0x03df:  mov    %ecx,0x1c(%esp)
0832085d +0x03e3:  mov    %edx,0x18(%esp)
08320861 +0x03e7:  mov    %ebx,0x14(%esp)
08320865 +0x03eb:  mov    %eax,0x10(%esp)
08320869 +0x03ef:  mov    -0x50(%ebp),%eax
0832086c +0x03f2:  mov    %eax,0xc(%esp)
08320870 +0x03f6:  movl   $0x8,0x8(%esp)
08320878 +0x03fe:  mov    0xc(%ebp),%eax
0832087b +0x0401:  mov    %eax,0x4(%esp)
0832087f +0x0405:  mov    0x8(%ebp),%eax
08320882 +0x0408:  mov    %eax,(%esp)
08320885 +0x040b:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0832088a +0x0410:  mov    -0x78(%ebp),%eax
0832088d +0x0413:  movl   $0x0,-0x338(%ebp,%eax,4)
08320898 +0x041e:  movl   $0x0,0xc(%esp)
083208a0 +0x0426:  movl   $0xe8,0x8(%esp)
083208a8 +0x042e:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083208b0 +0x0436:  lea    -0x138(%ebp),%eax
083208b6 +0x043c:  mov    %eax,(%esp)
083208b9 +0x043f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083208be +0x0444:  movl   $0xe8,0xc(%esp)
083208c6 +0x044c:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083208ce +0x0454:  movl   $"[%s][%d]",0x4(%esp)
083208d6 +0x045c:  lea    -0x138(%ebp),%eax
083208dc +0x0462:  mov    %eax,(%esp)
083208df +0x0465:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083208e4 +0x046a:  jmp    08320d50 <+0x8d6>
083208e9 +0x046f:  mov    -0x78(%ebp),%eax
083208ec +0x0472:  mov    -0x338(%ebp,%eax,4),%eax
083208f3 +0x0479:  mov    %eax,(%esp)
083208f6 +0x047c:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
083208fb +0x0481:  cmp    $0x1,%eax
083208fe +0x0484:  setne  %al
08320901 +0x0487:  test   %al,%al
08320903 +0x0489:  je     083209f8 <+0x57e>
08320909 +0x048f:  mov    -0x78(%ebp),%ebx
0832090c +0x0492:  mov    -0x78(%ebp),%eax
0832090f +0x0495:  mov    -0x338(%ebp,%eax,4),%eax
08320916 +0x049c:  mov    %eax,(%esp)
08320919 +0x049f:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
0832091e +0x04a4:  mov    %eax,-0x3c8(%ebp,%ebx,4)
08320925 +0x04ab:  mov    -0x3c8(%ebp,%ebx,4),%eax
0832092c +0x04b2:  test   %eax,%eax
0832092e +0x04b4:  sete   %al
08320931 +0x04b7:  test   %al,%al
08320933 +0x04b9:  je     083209f8 <+0x57e>
08320939 +0x04bf:  mov    0x10(%ebp),%eax
0832093c +0x04c2:  movzbl 0xf(%eax),%eax
08320940 +0x04c6:  movsbl %al,%ecx
08320943 +0x04c9:  mov    0x10(%ebp),%eax
08320946 +0x04cc:  movzbl 0x36(%eax),%eax
0832094a +0x04d0:  movzbl %al,%edx
0832094d +0x04d3:  mov    -0x78(%ebp),%eax
08320950 +0x04d6:  lea    0x1(%eax),%ebx
08320953 +0x04d9:  mov    -0x78(%ebp),%eax
08320956 +0x04dc:  mov    0x10(%ebp),%esi
08320959 +0x04df:  imul   $0x1cf,%eax,%eax
0832095f +0x04e5:  lea    (%esi,%eax,1),%eax
08320962 +0x04e8:  add    $0x30,%eax
08320965 +0x04eb:  mov    0x9(%eax),%eax
08320968 +0x04ee:  mov    %ecx,0x1c(%esp)
0832096c +0x04f2:  mov    %edx,0x18(%esp)
08320970 +0x04f6:  mov    %ebx,0x14(%esp)
08320974 +0x04fa:  mov    %eax,0x10(%esp)
08320978 +0x04fe:  mov    -0x50(%ebp),%eax
0832097b +0x0501:  mov    %eax,0xc(%esp)
0832097f +0x0505:  movl   $0x11,0x8(%esp)
08320987 +0x050d:  mov    0xc(%ebp),%eax
0832098a +0x0510:  mov    %eax,0x4(%esp)
0832098e +0x0514:  mov    0x8(%ebp),%eax
08320991 +0x0517:  mov    %eax,(%esp)
08320994 +0x051a:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320999 +0x051f:  mov    -0x78(%ebp),%eax
0832099c +0x0522:  movl   $0x0,-0x338(%ebp,%eax,4)
083209a7 +0x052d:  movl   $0x0,0xc(%esp)
083209af +0x0535:  movl   $0x116,0x8(%esp)
083209b7 +0x053d:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083209bf +0x0545:  lea    -0x128(%ebp),%eax
083209c5 +0x054b:  mov    %eax,(%esp)
083209c8 +0x054e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083209cd +0x0553:  movl   $0x116,0xc(%esp)
083209d5 +0x055b:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083209dd +0x0563:  movl   $"[%s][%d]",0x4(%esp)
083209e5 +0x056b:  lea    -0x128(%ebp),%eax
083209eb +0x0571:  mov    %eax,(%esp)
083209ee +0x0574:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083209f3 +0x0579:  jmp    08320d50 <+0x8d6>
083209f8 +0x057e:  mov    -0x78(%ebp),%eax
083209fb +0x0581:  mov    -0x338(%ebp,%eax,4),%eax
08320a02 +0x0588:  mov    %eax,(%esp)
08320a05 +0x058b:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08320a0a +0x0590:  cmp    $0x334,%eax
08320a0f +0x0595:  je     08320aba <+0x640>
08320a15 +0x059b:  cmp    $0x334,%eax
08320a1a +0x05a0:  jg     08320a67 <+0x5ed>
08320a1c +0x05a2:  cmp    $0xc5,%eax
08320a21 +0x05a7:  jg     08320a45 <+0x5cb>
08320a23 +0x05a9:  cmp    $0xc4,%eax
08320a28 +0x05ae:  jge    08320aba <+0x640>
08320a2e +0x05b4:  cmp    $0xc2,%eax
08320a33 +0x05b9:  je     08320aba <+0x640>
08320a39 +0x05bf:  cmp    $0xc3,%eax
08320a3e +0x05c4:  je     08320aa2 <+0x628>
08320a40 +0x05c6:  jmp    08320bd1 <+0x757>
08320a45 +0x05cb:  cmp    $0x2d0,%eax
08320a4a +0x05d0:  je     08320aba <+0x640>
08320a4c +0x05d2:  cmp    $0x2d0,%eax
08320a51 +0x05d7:  jl     08320bd1 <+0x757>
08320a57 +0x05dd:  sub    $0x2e7,%eax
08320a5c +0x05e2:  cmp    $0x1,%eax
08320a5f +0x05e5:  ja     08320bd1 <+0x757>
08320a65 +0x05eb:  jmp    08320aba <+0x640>
08320a67 +0x05ed:  cmp    $0x289832,%eax
08320a6c +0x05f2:  jg     08320a8f <+0x615>
08320a6e +0x05f4:  cmp    $0x289831,%eax
08320a73 +0x05f9:  jge    08320aba <+0x640>
08320a75 +0x05fb:  cmp    $0x2897c2,%eax
08320a7a +0x0600:  je     08320aba <+0x640>
08320a7c +0x0602:  cmp    $0x289806,%eax
08320a81 +0x0607:  je     08320aba <+0x640>
08320a83 +0x0609:  cmp    $0x398,%eax
08320a88 +0x060e:  je     08320aba <+0x640>
08320a8a +0x0610:  jmp    08320bd1 <+0x757>
08320a8f +0x0615:  cmp    $0x28beba,%eax
08320a94 +0x061a:  je     08320aba <+0x640>
08320a96 +0x061c:  cmp    $0x28d154,%eax
08320a9b +0x0621:  je     08320aba <+0x640>
08320a9d +0x0623:  jmp    08320bd1 <+0x757>
08320aa2 +0x0628:  movl   $0x21,0x4(%esp)
08320aaa +0x0630:  mov    0xc(%ebp),%eax
08320aad +0x0633:  mov    %eax,(%esp)
08320ab0 +0x0636:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08320ab5 +0x063b:  jmp    08320bd1 <+0x757>
08320aba +0x0640:  movb   $0x0,-0x45(%ebp)
08320abe +0x0644:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08320ac3 +0x0649:  mov    %eax,(%esp)
08320ac6 +0x064c:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08320acb +0x0651:  test   %al,%al
08320acd +0x0653:  je     08320b08 <+0x68e>
08320acf +0x0655:  movb   $0x1,-0x45(%ebp)
08320ad3 +0x0659:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08320ad8 +0x065e:  mov    %eax,(%esp)
08320adb +0x0661:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08320ae0 +0x0666:  test   %al,%al
08320ae2 +0x0668:  je     08320afb <+0x681>
08320ae4 +0x066a:  mov    0xc(%ebp),%eax
08320ae7 +0x066d:  mov    %eax,(%esp)
08320aea +0x0670:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08320aef +0x0675:  cmp    $0x9,%eax
08320af2 +0x0678:  jle    08320afb <+0x681>
08320af4 +0x067a:  mov    $0x1,%eax
08320af9 +0x067f:  jmp    08320b00 <+0x686>
08320afb +0x0681:  mov    $0x0,%eax
08320b00 +0x0686:  test   %al,%al
08320b02 +0x0688:  je     08320b08 <+0x68e>
08320b04 +0x068a:  movb   $0x0,-0x45(%ebp)
08320b08 +0x068e:  cmpb   $0x0,-0x45(%ebp)
08320b0c +0x0692:  je     08320bd1 <+0x757>
08320b12 +0x0698:  mov    0x10(%ebp),%eax
08320b15 +0x069b:  movzbl 0xf(%eax),%eax
08320b19 +0x069f:  movsbl %al,%ecx
08320b1c +0x06a2:  mov    0x10(%ebp),%eax
08320b1f +0x06a5:  movzbl 0x36(%eax),%eax
08320b23 +0x06a9:  movzbl %al,%edx
08320b26 +0x06ac:  mov    -0x78(%ebp),%eax
08320b29 +0x06af:  lea    0x1(%eax),%ebx
08320b2c +0x06b2:  mov    -0x78(%ebp),%eax
08320b2f +0x06b5:  mov    0x10(%ebp),%esi
08320b32 +0x06b8:  imul   $0x1cf,%eax,%eax
08320b38 +0x06be:  lea    (%esi,%eax,1),%eax
08320b3b +0x06c1:  add    $0x30,%eax
08320b3e +0x06c4:  mov    0x9(%eax),%eax
08320b41 +0x06c7:  mov    %ecx,0x1c(%esp)
08320b45 +0x06cb:  mov    %edx,0x18(%esp)
08320b49 +0x06cf:  mov    %ebx,0x14(%esp)
08320b4d +0x06d3:  mov    %eax,0x10(%esp)
08320b51 +0x06d7:  mov    -0x50(%ebp),%eax
08320b54 +0x06da:  mov    %eax,0xc(%esp)
08320b58 +0x06de:  movl   $0x7,0x8(%esp)
08320b60 +0x06e6:  mov    0xc(%ebp),%eax
08320b63 +0x06e9:  mov    %eax,0x4(%esp)
08320b67 +0x06ed:  mov    0x8(%ebp),%eax
08320b6a +0x06f0:  mov    %eax,(%esp)
08320b6d +0x06f3:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320b72 +0x06f8:  mov    -0x78(%ebp),%eax
08320b75 +0x06fb:  movl   $0x0,-0x338(%ebp,%eax,4)
08320b80 +0x0706:  movl   $0x0,0xc(%esp)
08320b88 +0x070e:  movl   $0x16c,0x8(%esp)
08320b90 +0x0716:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08320b98 +0x071e:  lea    -0x118(%ebp),%eax
08320b9e +0x0724:  mov    %eax,(%esp)
08320ba1 +0x0727:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08320ba6 +0x072c:  movl   $0x16c,0xc(%esp)
08320bae +0x0734:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08320bb6 +0x073c:  movl   $"[%s][%d]",0x4(%esp)
08320bbe +0x0744:  lea    -0x118(%ebp),%eax
08320bc4 +0x074a:  mov    %eax,(%esp)
08320bc7 +0x074d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08320bcc +0x0752:  jmp    08320d50 <+0x8d6>
08320bd1 +0x0757:  mov    -0x78(%ebp),%eax
08320bd4 +0x075a:  mov    0x10(%ebp),%edx
08320bd7 +0x075d:  imul   $0x1cf,%eax,%eax
08320bdd +0x0763:  lea    (%edx,%eax,1),%eax
08320be0 +0x0766:  add    $0x38,%eax
08320be3 +0x0769:  movzbl (%eax),%eax
08320be6 +0x076c:  cbtw
08320be8 +0x076e:  movzwl %ax,%eax
08320beb +0x0771:  mov    %eax,-0x3cc(%ebp)
08320bf1 +0x0777:  mov    -0x78(%ebp),%eax
08320bf4 +0x077a:  mov    0x10(%ebp),%edx
08320bf7 +0x077d:  imul   $0x1cf,%eax,%eax
08320bfd +0x0783:  lea    (%edx,%eax,1),%eax
08320c00 +0x0786:  add    $0x37,%eax
08320c03 +0x0789:  movzbl (%eax),%eax
08320c06 +0x078c:  movzbl %al,%edi
08320c09 +0x078f:  mov    -0x78(%ebp),%eax
08320c0c +0x0792:  mov    -0x338(%ebp,%eax,4),%eax
08320c13 +0x0799:  mov    %eax,(%esp)
08320c16 +0x079c:  call   083280c4 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1d>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1d
08320c1b +0x07a1:  movzwl %ax,%esi
08320c1e +0x07a4:  mov    -0x78(%ebp),%eax
08320c21 +0x07a7:  mov    -0x338(%ebp,%eax,4),%eax
08320c28 +0x07ae:  mov    %eax,(%esp)
08320c2b +0x07b1:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08320c30 +0x07b6:  mov    %eax,%ebx
08320c32 +0x07b8:  mov    -0x78(%ebp),%eax
08320c35 +0x07bb:  mov    -0x338(%ebp,%eax,4),%eax
08320c3c +0x07c2:  mov    %eax,(%esp)
08320c3f +0x07c5:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08320c44 +0x07ca:  mov    %eax,%edx
08320c46 +0x07cc:  mov    -0x78(%ebp),%eax
08320c49 +0x07cf:  mov    0x10(%ebp),%ecx
08320c4c +0x07d2:  imul   $0x1cf,%eax,%eax
08320c52 +0x07d8:  lea    (%ecx,%eax,1),%eax
08320c55 +0x07db:  add    $0x30,%eax
08320c58 +0x07de:  mov    0x9(%eax),%eax
08320c5b +0x07e1:  mov    -0x3cc(%ebp),%ecx
08320c61 +0x07e7:  mov    %ecx,0x1c(%esp)
08320c65 +0x07eb:  mov    %edi,0x18(%esp)
08320c69 +0x07ef:  mov    %esi,0x14(%esp)
08320c6d +0x07f3:  mov    %ebx,0x10(%esp)
08320c71 +0x07f7:  mov    %edx,0xc(%esp)
08320c75 +0x07fb:  mov    %eax,0x8(%esp)
08320c79 +0x07ff:  mov    0xc(%ebp),%eax
08320c7c +0x0802:  mov    %eax,0x4(%esp)
08320c80 +0x0806:  mov    0x8(%ebp),%eax
08320c83 +0x0809:  mov    %eax,(%esp)
08320c86 +0x080c:  call   08323f86 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht>  ; WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)
08320c8b +0x0811:  xor    $0x1,%eax
08320c8e +0x0814:  test   %al,%al
08320c90 +0x0816:  je     08320d50 <+0x8d6>
08320c96 +0x081c:  mov    0x10(%ebp),%eax
08320c99 +0x081f:  movzbl 0xf(%eax),%eax
08320c9d +0x0823:  movsbl %al,%ecx
08320ca0 +0x0826:  mov    0x10(%ebp),%eax
08320ca3 +0x0829:  movzbl 0x36(%eax),%eax
08320ca7 +0x082d:  movzbl %al,%edx
08320caa +0x0830:  mov    -0x78(%ebp),%eax
08320cad +0x0833:  lea    0x1(%eax),%ebx
08320cb0 +0x0836:  mov    -0x78(%ebp),%eax
08320cb3 +0x0839:  mov    0x10(%ebp),%esi
08320cb6 +0x083c:  imul   $0x1cf,%eax,%eax
08320cbc +0x0842:  lea    (%esi,%eax,1),%eax
08320cbf +0x0845:  add    $0x30,%eax
08320cc2 +0x0848:  mov    0x9(%eax),%eax
08320cc5 +0x084b:  mov    %ecx,0x1c(%esp)
08320cc9 +0x084f:  mov    %edx,0x18(%esp)
08320ccd +0x0853:  mov    %ebx,0x14(%esp)
08320cd1 +0x0857:  mov    %eax,0x10(%esp)
08320cd5 +0x085b:  mov    -0x50(%ebp),%eax
08320cd8 +0x085e:  mov    %eax,0xc(%esp)
08320cdc +0x0862:  movl   $0x4f,0x8(%esp)
08320ce4 +0x086a:  mov    0xc(%ebp),%eax
08320ce7 +0x086d:  mov    %eax,0x4(%esp)
08320ceb +0x0871:  mov    0x8(%ebp),%eax
08320cee +0x0874:  mov    %eax,(%esp)
08320cf1 +0x0877:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320cf6 +0x087c:  mov    -0x78(%ebp),%eax
08320cf9 +0x087f:  movl   $0x0,-0x338(%ebp,%eax,4)
08320d04 +0x088a:  movl   $0x0,0xc(%esp)
08320d0c +0x0892:  movl   $0x185,0x8(%esp)
08320d14 +0x089a:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08320d1c +0x08a2:  lea    -0x108(%ebp),%eax
08320d22 +0x08a8:  mov    %eax,(%esp)
08320d25 +0x08ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08320d2a +0x08b0:  movl   $0x185,0xc(%esp)
08320d32 +0x08b8:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08320d3a +0x08c0:  movl   $"[%s][%d]",0x4(%esp)
08320d42 +0x08c8:  lea    -0x108(%ebp),%eax
08320d48 +0x08ce:  mov    %eax,(%esp)
08320d4b +0x08d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08320d50 +0x08d6:  addl   $0x1,-0x78(%ebp)
08320d54 +0x08da:  mov    0x10(%ebp),%eax
08320d57 +0x08dd:  movzbl 0x36(%eax),%eax
08320d5b +0x08e1:  movzbl %al,%eax
08320d5e +0x08e4:  cmp    -0x78(%ebp),%eax
08320d61 +0x08e7:  setg   %al
08320d64 +0x08ea:  test   %al,%al
08320d66 +0x08ec:  jne    083205e1 <+0x167>
08320d6c +0x08f2:  lea    -0x338(%ebp),%eax
08320d72 +0x08f8:  mov    %eax,0x4(%esp)
08320d76 +0x08fc:  mov    0x8(%ebp),%eax
08320d79 +0x08ff:  mov    %eax,(%esp)
08320d7c +0x0902:  call   08323af4 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods>  ; WongWork::CCeraShop::_CheckValidCount(CCeraShopGoods const**)
08320d81 +0x0907:  xor    $0x1,%eax
08320d84 +0x090a:  test   %al,%al
08320d86 +0x090c:  je     08320de2 <+0x968>
08320d88 +0x090e:  movl   $0xffffffff,-0x44(%ebp)
08320d8f +0x0915:  mov    0x10(%ebp),%eax
08320d92 +0x0918:  movzbl 0xf(%eax),%eax
08320d96 +0x091c:  movsbl %al,%edx
08320d99 +0x091f:  mov    0x10(%ebp),%eax
08320d9c +0x0922:  mov    0x39(%eax),%eax
08320d9f +0x0925:  mov    %edx,0x1c(%esp)
08320da3 +0x0929:  movl   $0x1,0x18(%esp)
08320dab +0x0931:  movl   $0x1,0x14(%esp)
08320db3 +0x0939:  mov    %eax,0x10(%esp)
08320db7 +0x093d:  mov    -0x44(%ebp),%eax
08320dba +0x0940:  mov    %eax,0xc(%esp)
08320dbe +0x0944:  movl   $0x1,0x8(%esp)
08320dc6 +0x094c:  mov    0xc(%ebp),%eax
08320dc9 +0x094f:  mov    %eax,0x4(%esp)
08320dcd +0x0953:  mov    0x8(%ebp),%eax
08320dd0 +0x0956:  mov    %eax,(%esp)
08320dd3 +0x0959:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320dd8 +0x095e:  mov    $0x1,%eax
08320ddd +0x0963:  jmp    08321d22 <+0x18a8>
08320de2 +0x0968:  mov    0xc(%ebp),%eax
08320de5 +0x096b:  mov    %eax,(%esp)
08320de8 +0x096e:  call   0817a208 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x286>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x286
08320ded +0x0973:  lea    -0x1b4(%ebp),%ebx
08320df3 +0x0979:  mov    $0x0,%eax
08320df8 +0x097e:  mov    $0x9,%edx
08320dfd +0x0983:  mov    %ebx,%edi
08320dff +0x0985:  mov    %edx,%ecx
08320e01 +0x0987:  rep stos %eax,%es:(%edi)
08320e03 +0x0989:  lea    -0x17d(%ebp),%eax
08320e09 +0x098f:  mov    $0x15,%edx
08320e0e +0x0994:  mov    $0x0,%ecx
08320e13 +0x0999:  mov    %eax,%ebx
08320e15 +0x099b:  and    $0x1,%ebx
08320e18 +0x099e:  test   %ebx,%ebx
08320e1a +0x09a0:  je     08320e24 <+0x9aa>
08320e1c +0x09a2:  mov    %cl,(%eax)
08320e1e +0x09a4:  add    $0x1,%eax
08320e21 +0x09a7:  sub    $0x1,%edx
08320e24 +0x09aa:  mov    %eax,%ebx
08320e26 +0x09ac:  and    $0x2,%ebx
08320e29 +0x09af:  test   %ebx,%ebx
08320e2b +0x09b1:  je     08320e36 <+0x9bc>
08320e2d +0x09b3:  mov    %cx,(%eax)
08320e30 +0x09b6:  add    $0x2,%eax
08320e33 +0x09b9:  sub    $0x2,%edx
08320e36 +0x09bc:  mov    %edx,%esi
08320e38 +0x09be:  and    $0xfffffffc,%esi
08320e3b +0x09c1:  mov    $0x0,%ebx
08320e40 +0x09c6:  mov    %ecx,(%eax,%ebx,1)
08320e43 +0x09c9:  add    $0x4,%ebx
08320e46 +0x09cc:  cmp    %esi,%ebx
08320e48 +0x09ce:  jb     08320e40 <+0x9c6>
08320e4a +0x09d0:  add    %ebx,%eax
08320e4c +0x09d2:  mov    %edx,%ebx
08320e4e +0x09d4:  and    $0x2,%ebx
08320e51 +0x09d7:  test   %ebx,%ebx
08320e53 +0x09d9:  je     08320e5b <+0x9e1>
08320e55 +0x09db:  mov    %cx,(%eax)
08320e58 +0x09de:  add    $0x2,%eax
08320e5b +0x09e1:  and    $0x1,%edx
08320e5e +0x09e4:  test   %edx,%edx
08320e60 +0x09e6:  je     08320e67 <+0x9ed>
08320e62 +0x09e8:  mov    %cl,(%eax)
08320e64 +0x09ea:  add    $0x1,%eax
08320e67 +0x09ed:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08320e6e +0x09f4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08320e73 +0x09f9:  mov    %eax,-0x74(%ebp)
08320e76 +0x09fc:  mov    0xc(%ebp),%eax
08320e79 +0x09ff:  mov    %eax,(%esp)
08320e7c +0x0a02:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08320e81 +0x0a07:  mov    %eax,%edx
08320e83 +0x0a09:  sar    $0x1f,%edx
08320e86 +0x0a0c:  mov    %eax,-0x70(%ebp)
08320e89 +0x0a0f:  mov    %edx,-0x6c(%ebp)
08320e8c +0x0a12:  mov    0xc(%ebp),%eax
08320e8f +0x0a15:  mov    %eax,(%esp)
08320e92 +0x0a18:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
08320e97 +0x0a1d:  mov    $0x0,%edx
08320e9c +0x0a22:  mov    %eax,-0x68(%ebp)
08320e9f +0x0a25:  mov    %edx,-0x64(%ebp)
08320ea2 +0x0a28:  movl   $0x0,-0x5c(%ebp)
08320ea9 +0x0a2f:  movl   $0x0,-0x58(%ebp)
08320eb0 +0x0a36:  movl   $0x0,-0x54(%ebp)
08320eb7 +0x0a3d:  movl   $0x0,-0x78(%ebp)
08320ebe +0x0a44:  jmp    08321d05 <+0x188b>
08320ec3 +0x0a49:  mov    -0x78(%ebp),%eax
08320ec6 +0x0a4c:  mov    -0x338(%ebp,%eax,4),%eax
08320ecd +0x0a53:  test   %eax,%eax
08320ecf +0x0a55:  je     08321d00 <+0x1886>
08320ed5 +0x0a5b:  mov    -0x78(%ebp),%eax
08320ed8 +0x0a5e:  mov    -0x338(%ebp,%eax,4),%eax
08320edf +0x0a65:  mov    %eax,(%esp)
08320ee2 +0x0a68:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
08320ee7 +0x0a6d:  test   %eax,%eax
08320ee9 +0x0a6f:  sete   %al
08320eec +0x0a72:  test   %al,%al
08320eee +0x0a74:  je     0832129d <+0xe23>
08320ef4 +0x0a7a:  movl   $0x0,-0x34(%ebp)
08320efb +0x0a81:  mov    -0x78(%ebp),%eax
08320efe +0x0a84:  mov    -0x338(%ebp,%eax,4),%eax
08320f05 +0x0a8b:  mov    %eax,(%esp)
08320f08 +0x0a8e:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
08320f0d +0x0a93:  mov    (%eax),%edx
08320f0f +0x0a95:  add    $0x10,%edx
08320f12 +0x0a98:  mov    (%edx),%edx
08320f14 +0x0a9a:  mov    %eax,(%esp)
08320f17 +0x0a9d:  call   *%edx
08320f19 +0x0a9f:  xor    $0x1,%eax
08320f1c +0x0aa2:  test   %al,%al
08320f1e +0x0aa4:  je     08320fe3 <+0xb69>
08320f24 +0x0aaa:  mov    0x10(%ebp),%eax
08320f27 +0x0aad:  movzbl 0xf(%eax),%eax
08320f2b +0x0ab1:  movsbl %al,%ecx
08320f2e +0x0ab4:  mov    0x10(%ebp),%eax
08320f31 +0x0ab7:  movzbl 0x36(%eax),%eax
08320f35 +0x0abb:  movzbl %al,%edx
08320f38 +0x0abe:  mov    -0x78(%ebp),%eax
08320f3b +0x0ac1:  lea    0x1(%eax),%ebx
08320f3e +0x0ac4:  mov    -0x78(%ebp),%eax
08320f41 +0x0ac7:  mov    0x10(%ebp),%esi
08320f44 +0x0aca:  imul   $0x1cf,%eax,%eax
08320f4a +0x0ad0:  lea    (%esi,%eax,1),%eax
08320f4d +0x0ad3:  add    $0x30,%eax
08320f50 +0x0ad6:  mov    0x9(%eax),%eax
08320f53 +0x0ad9:  mov    %ecx,0x1c(%esp)
08320f57 +0x0add:  mov    %edx,0x18(%esp)
08320f5b +0x0ae1:  mov    %ebx,0x14(%esp)
08320f5f +0x0ae5:  mov    %eax,0x10(%esp)
08320f63 +0x0ae9:  mov    -0x34(%ebp),%eax
08320f66 +0x0aec:  mov    %eax,0xc(%esp)
08320f6a +0x0af0:  movl   $0x17,0x8(%esp)
08320f72 +0x0af8:  mov    0xc(%ebp),%eax
08320f75 +0x0afb:  mov    %eax,0x4(%esp)
08320f79 +0x0aff:  mov    0x8(%ebp),%eax
08320f7c +0x0b02:  mov    %eax,(%esp)
08320f7f +0x0b05:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08320f84 +0x0b0a:  mov    -0x78(%ebp),%eax
08320f87 +0x0b0d:  movl   $0x0,-0x338(%ebp,%eax,4)
08320f92 +0x0b18:  movl   $0x0,0xc(%esp)
08320f9a +0x0b20:  movl   $0x247,0x8(%esp)
08320fa2 +0x0b28:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08320faa +0x0b30:  lea    -0xf8(%ebp),%eax
08320fb0 +0x0b36:  mov    %eax,(%esp)
08320fb3 +0x0b39:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08320fb8 +0x0b3e:  movl   $0x247,0xc(%esp)
08320fc0 +0x0b46:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08320fc8 +0x0b4e:  movl   $"[%s][%d]",0x4(%esp)
08320fd0 +0x0b56:  lea    -0xf8(%ebp),%eax
08320fd6 +0x0b5c:  mov    %eax,(%esp)
08320fd9 +0x0b5f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08320fde +0x0b64:  jmp    08321d01 <+0x1887>
08320fe3 +0x0b69:  mov    -0x78(%ebp),%eax
08320fe6 +0x0b6c:  mov    -0x338(%ebp,%eax,4),%eax
08320fed +0x0b73:  mov    %eax,(%esp)
08320ff0 +0x0b76:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
08320ff5 +0x0b7b:  mov    %eax,-0x30(%ebp)
08320ff8 +0x0b7e:  mov    -0x30(%ebp),%eax
08320ffb +0x0b81:  mov    %eax,(%esp)
08320ffe +0x0b84:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
08321003 +0x0b89:  mov    %eax,-0x2c(%ebp)
08321006 +0x0b8c:  mov    -0x2c(%ebp),%eax
08321009 +0x0b8f:  mov    %eax,(%esp)
0832100c +0x0b92:  call   081521b6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1aeb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1aeb
08321011 +0x0b97:  test   %al,%al
08321013 +0x0b99:  jne    08321039 <+0xbbf>
08321015 +0x0b9b:  mov    -0x78(%ebp),%eax
08321018 +0x0b9e:  mov    0x10(%ebp),%edx
0832101b +0x0ba1:  imul   $0x1cf,%eax,%eax
08321021 +0x0ba7:  lea    (%edx,%eax,1),%eax
08321024 +0x0baa:  add    $0x38,%eax
08321027 +0x0bad:  movzbl (%eax),%ebx
0832102a +0x0bb0:  mov    -0x2c(%ebp),%eax
0832102d +0x0bb3:  mov    %eax,(%esp)
08321030 +0x0bb6:  call   0815219a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1acf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1acf
08321035 +0x0bbb:  cmp    %al,%bl
08321037 +0x0bbd:  jl     08321040 <+0xbc6>
08321039 +0x0bbf:  mov    $0x1,%eax
0832103e +0x0bc4:  jmp    08321045 <+0xbcb>
08321040 +0x0bc6:  mov    $0x0,%eax
08321045 +0x0bcb:  test   %al,%al
08321047 +0x0bcd:  je     0832110c <+0xc92>
0832104d +0x0bd3:  mov    0x10(%ebp),%eax
08321050 +0x0bd6:  movzbl 0xf(%eax),%eax
08321054 +0x0bda:  movsbl %al,%ecx
08321057 +0x0bdd:  mov    0x10(%ebp),%eax
0832105a +0x0be0:  movzbl 0x36(%eax),%eax
0832105e +0x0be4:  movzbl %al,%edx
08321061 +0x0be7:  mov    -0x78(%ebp),%eax
08321064 +0x0bea:  lea    0x1(%eax),%ebx
08321067 +0x0bed:  mov    -0x78(%ebp),%eax
0832106a +0x0bf0:  mov    0x10(%ebp),%esi
0832106d +0x0bf3:  imul   $0x1cf,%eax,%eax
08321073 +0x0bf9:  lea    (%esi,%eax,1),%eax
08321076 +0x0bfc:  add    $0x30,%eax
08321079 +0x0bff:  mov    0x9(%eax),%eax
0832107c +0x0c02:  mov    %ecx,0x1c(%esp)
08321080 +0x0c06:  mov    %edx,0x18(%esp)
08321084 +0x0c0a:  mov    %ebx,0x14(%esp)
08321088 +0x0c0e:  mov    %eax,0x10(%esp)
0832108c +0x0c12:  mov    -0x34(%ebp),%eax
0832108f +0x0c15:  mov    %eax,0xc(%esp)
08321093 +0x0c19:  movl   $0x17,0x8(%esp)
0832109b +0x0c21:  mov    0xc(%ebp),%eax
0832109e +0x0c24:  mov    %eax,0x4(%esp)
083210a2 +0x0c28:  mov    0x8(%ebp),%eax
083210a5 +0x0c2b:  mov    %eax,(%esp)
083210a8 +0x0c2e:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
083210ad +0x0c33:  mov    -0x78(%ebp),%eax
083210b0 +0x0c36:  movl   $0x0,-0x338(%ebp,%eax,4)
083210bb +0x0c41:  movl   $0x0,0xc(%esp)
083210c3 +0x0c49:  movl   $0x253,0x8(%esp)
083210cb +0x0c51:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083210d3 +0x0c59:  lea    -0xe8(%ebp),%eax
083210d9 +0x0c5f:  mov    %eax,(%esp)
083210dc +0x0c62:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083210e1 +0x0c67:  movl   $0x253,0xc(%esp)
083210e9 +0x0c6f:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083210f1 +0x0c77:  movl   $"[%s][%d]",0x4(%esp)
083210f9 +0x0c7f:  lea    -0xe8(%ebp),%eax
083210ff +0x0c85:  mov    %eax,(%esp)
08321102 +0x0c88:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08321107 +0x0c8d:  jmp    08321d01 <+0x1887>
0832110c +0x0c92:  mov    -0x78(%ebp),%eax
0832110f +0x0c95:  mov    0x10(%ebp),%edx
08321112 +0x0c98:  imul   $0x1cf,%eax,%eax
08321118 +0x0c9e:  lea    (%edx,%eax,1),%eax
0832111b +0x0ca1:  add    $0x37,%eax
0832111e +0x0ca4:  movzbl (%eax),%eax
08321121 +0x0ca7:  cmp    $0x63,%al
08321123 +0x0ca9:  jbe    083211e8 <+0xd6e>
08321129 +0x0caf:  mov    0x10(%ebp),%eax
0832112c +0x0cb2:  movzbl 0xf(%eax),%eax
08321130 +0x0cb6:  movsbl %al,%ecx
08321133 +0x0cb9:  mov    0x10(%ebp),%eax
08321136 +0x0cbc:  movzbl 0x36(%eax),%eax
0832113a +0x0cc0:  movzbl %al,%edx
0832113d +0x0cc3:  mov    -0x78(%ebp),%eax
08321140 +0x0cc6:  lea    0x1(%eax),%ebx
08321143 +0x0cc9:  mov    -0x78(%ebp),%eax
08321146 +0x0ccc:  mov    0x10(%ebp),%esi
08321149 +0x0ccf:  imul   $0x1cf,%eax,%eax
0832114f +0x0cd5:  lea    (%esi,%eax,1),%eax
08321152 +0x0cd8:  add    $0x30,%eax
08321155 +0x0cdb:  mov    0x9(%eax),%eax
08321158 +0x0cde:  mov    %ecx,0x1c(%esp)
0832115c +0x0ce2:  mov    %edx,0x18(%esp)
08321160 +0x0ce6:  mov    %ebx,0x14(%esp)
08321164 +0x0cea:  mov    %eax,0x10(%esp)
08321168 +0x0cee:  mov    -0x34(%ebp),%eax
0832116b +0x0cf1:  mov    %eax,0xc(%esp)
0832116f +0x0cf5:  movl   $0x17,0x8(%esp)
08321177 +0x0cfd:  mov    0xc(%ebp),%eax
0832117a +0x0d00:  mov    %eax,0x4(%esp)
0832117e +0x0d04:  mov    0x8(%ebp),%eax
08321181 +0x0d07:  mov    %eax,(%esp)
08321184 +0x0d0a:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08321189 +0x0d0f:  mov    -0x78(%ebp),%eax
0832118c +0x0d12:  movl   $0x0,-0x338(%ebp,%eax,4)
08321197 +0x0d1d:  movl   $0x0,0xc(%esp)
0832119f +0x0d25:  movl   $0x25e,0x8(%esp)
083211a7 +0x0d2d:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
083211af +0x0d35:  lea    -0xd8(%ebp),%eax
083211b5 +0x0d3b:  mov    %eax,(%esp)
083211b8 +0x0d3e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083211bd +0x0d43:  movl   $0x25e,0xc(%esp)
083211c5 +0x0d4b:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083211cd +0x0d53:  movl   $"[%s][%d]",0x4(%esp)
083211d5 +0x0d5b:  lea    -0xd8(%ebp),%eax
083211db +0x0d61:  mov    %eax,(%esp)
083211de +0x0d64:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083211e3 +0x0d69:  jmp    08321d01 <+0x1887>
083211e8 +0x0d6e:  mov    -0x78(%ebp),%eax
083211eb +0x0d71:  mov    0x10(%ebp),%edx
083211ee +0x0d74:  imul   $0x1cf,%eax,%eax
083211f4 +0x0d7a:  lea    (%edx,%eax,1),%eax
083211f7 +0x0d7d:  add    $0x38,%eax
083211fa +0x0d80:  movzbl (%eax),%eax
083211fd +0x0d83:  movsbl %al,%eax
08321200 +0x0d86:  mov    %eax,0x4(%esp)
08321204 +0x0d8a:  mov    -0x2c(%ebp),%eax
08321207 +0x0d8d:  mov    %eax,(%esp)
0832120a +0x0d90:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
0832120f +0x0d95:  mov    0xc(%eax),%eax
08321212 +0x0d98:  mov    %eax,-0x5c(%ebp)
08321215 +0x0d9b:  mov    -0x78(%ebp),%eax
08321218 +0x0d9e:  mov    0x10(%ebp),%edx
0832121b +0x0da1:  imul   $0x1cf,%eax,%eax
08321221 +0x0da7:  lea    (%edx,%eax,1),%eax
08321224 +0x0daa:  add    $0x38,%eax
08321227 +0x0dad:  movzbl (%eax),%eax
0832122a +0x0db0:  movsbl %al,%eax
0832122d +0x0db3:  mov    %eax,0x4(%esp)
08321231 +0x0db7:  mov    -0x2c(%ebp),%eax
08321234 +0x0dba:  mov    %eax,(%esp)
08321237 +0x0dbd:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
0832123c +0x0dc2:  mov    0x4(%eax),%eax
0832123f +0x0dc5:  mov    %eax,-0x54(%ebp)
08321242 +0x0dc8:  mov    -0x78(%ebp),%eax
08321245 +0x0dcb:  mov    0x10(%ebp),%edx
08321248 +0x0dce:  imul   $0x1cf,%eax,%eax
0832124e +0x0dd4:  lea    (%edx,%eax,1),%eax
08321251 +0x0dd7:  add    $0x38,%eax
08321254 +0x0dda:  movzbl (%eax),%eax
08321257 +0x0ddd:  movsbl %al,%eax
0832125a +0x0de0:  mov    %eax,0x4(%esp)
0832125e +0x0de4:  mov    -0x2c(%ebp),%eax
08321261 +0x0de7:  mov    %eax,(%esp)
08321264 +0x0dea:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
08321269 +0x0def:  mov    0x8(%eax),%eax
0832126c +0x0df2:  mov    %eax,-0x58(%ebp)
0832126f +0x0df5:  mov    -0x78(%ebp),%eax
08321272 +0x0df8:  mov    0x10(%ebp),%edx
08321275 +0x0dfb:  imul   $0x1cf,%eax,%eax
0832127b +0x0e01:  lea    (%edx,%eax,1),%eax
0832127e +0x0e04:  add    $0x38,%eax
08321281 +0x0e07:  movzbl (%eax),%eax
08321284 +0x0e0a:  movsbl %al,%eax
08321287 +0x0e0d:  mov    %eax,0x4(%esp)
0832128b +0x0e11:  mov    -0x2c(%ebp),%eax
0832128e +0x0e14:  mov    %eax,(%esp)
08321291 +0x0e17:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
08321296 +0x0e1c:  mov    (%eax),%eax
08321298 +0x0e1e:  mov    %eax,-0x80(%ebp)
0832129b +0x0e21:  jmp    083212dc <+0xe62>
0832129d +0x0e23:  mov    -0x78(%ebp),%eax
083212a0 +0x0e26:  mov    -0x338(%ebp,%eax,4),%eax
083212a7 +0x0e2d:  mov    %eax,(%esp)
083212aa +0x0e30:  call   0817a024 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xa2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xa2
083212af +0x0e35:  mov    %eax,-0x5c(%ebp)
083212b2 +0x0e38:  mov    -0x78(%ebp),%eax
083212b5 +0x0e3b:  mov    -0x338(%ebp,%eax,4),%eax
083212bc +0x0e42:  mov    %eax,(%esp)
083212bf +0x0e45:  call   0817a00c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x8a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x8a
083212c4 +0x0e4a:  mov    %eax,-0x54(%ebp)
083212c7 +0x0e4d:  mov    -0x78(%ebp),%eax
083212ca +0x0e50:  mov    -0x338(%ebp,%eax,4),%eax
083212d1 +0x0e57:  mov    %eax,(%esp)
083212d4 +0x0e5a:  call   0817a018 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x96>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x96
083212d9 +0x0e5f:  mov    %eax,-0x58(%ebp)
083212dc +0x0e62:  mov    0xc(%ebp),%eax
083212df +0x0e65:  mov    %eax,(%esp)
083212e2 +0x0e68:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
083212e7 +0x0e6d:  mov    %eax,(%esp)
083212ea +0x0e70:  call   08328100 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x59>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x59
083212ef +0x0e75:  mov    %ax,-0x3e(%ebp)
083212f3 +0x0e79:  cmpw   $0x0,-0x3e(%ebp)
083212f8 +0x0e7e:  je     08321368 <+0xeee>
083212fa +0x0e80:  movzwl -0x3e(%ebp),%eax
083212fe +0x0e84:  mov    %eax,%edx
08321300 +0x0e86:  imul   -0x5c(%ebp),%edx
08321304 +0x0e8a:  mov    %edx,-0x3dc(%ebp)
0832130a +0x0e90:  mov    $0x51eb851f,%edx
0832130f +0x0e95:  mov    -0x3dc(%ebp),%eax
08321315 +0x0e9b:  mul    %edx
08321317 +0x0e9d:  mov    %edx,%eax
08321319 +0x0e9f:  shr    $0x5,%eax
0832131c +0x0ea2:  sub    %eax,-0x5c(%ebp)
0832131f +0x0ea5:  movzwl -0x3e(%ebp),%eax
08321323 +0x0ea9:  mov    %eax,%ecx
08321325 +0x0eab:  imul   -0x54(%ebp),%ecx
08321329 +0x0eaf:  mov    $0x51eb851f,%edx
0832132e +0x0eb4:  mov    %ecx,%eax
08321330 +0x0eb6:  imul   %edx
08321332 +0x0eb8:  sar    $0x5,%edx
08321335 +0x0ebb:  mov    %ecx,%eax
08321337 +0x0ebd:  sar    $0x1f,%eax
0832133a +0x0ec0:  mov    %edx,%ecx
0832133c +0x0ec2:  sub    %eax,%ecx
0832133e +0x0ec4:  mov    %ecx,%eax
08321340 +0x0ec6:  sub    %eax,-0x54(%ebp)
08321343 +0x0ec9:  movzwl -0x3e(%ebp),%eax
08321347 +0x0ecd:  mov    %eax,%edi
08321349 +0x0ecf:  imul   -0x58(%ebp),%edi
0832134d +0x0ed3:  mov    %edi,-0x3dc(%ebp)
08321353 +0x0ed9:  mov    $0x51eb851f,%edx
08321358 +0x0ede:  mov    -0x3dc(%ebp),%eax
0832135e +0x0ee4:  mul    %edx
08321360 +0x0ee6:  mov    %edx,%eax
08321362 +0x0ee8:  shr    $0x5,%eax
08321365 +0x0eeb:  sub    %eax,-0x58(%ebp)
08321368 +0x0eee:  movl   $0x0,-0x3c(%ebp)
0832136f +0x0ef5:  mov    0xc(%ebp),%eax
08321372 +0x0ef8:  mov    %eax,(%esp)
08321375 +0x0efb:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
0832137a +0x0f00:  cmp    -0x5c(%ebp),%eax
0832137d +0x0f03:  setb   %al
08321380 +0x0f06:  test   %al,%al
08321382 +0x0f08:  je     0832138d <+0xf13>
08321384 +0x0f0a:  movl   $0xb,-0x3c(%ebp)
0832138b +0x0f11:  jmp    083213cf <+0xf55>
0832138d +0x0f13:  mov    0xc(%ebp),%eax
08321390 +0x0f16:  mov    %eax,(%esp)
08321393 +0x0f19:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08321398 +0x0f1e:  mov    %eax,(%esp)
0832139b +0x0f21:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
083213a0 +0x0f26:  cmp    -0x54(%ebp),%eax
083213a3 +0x0f29:  setl   %al
083213a6 +0x0f2c:  test   %al,%al
083213a8 +0x0f2e:  je     083213b3 <+0xf39>
083213aa +0x0f30:  movl   $0xa,-0x3c(%ebp)
083213b1 +0x0f37:  jmp    083213cf <+0xf55>
083213b3 +0x0f39:  mov    0xc(%ebp),%eax
083213b6 +0x0f3c:  mov    %eax,(%esp)
083213b9 +0x0f3f:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
083213be +0x0f44:  cmp    -0x58(%ebp),%eax
083213c1 +0x0f47:  setb   %al
083213c4 +0x0f4a:  test   %al,%al
083213c6 +0x0f4c:  je     083213cf <+0xf55>
083213c8 +0x0f4e:  movl   $0xc,-0x3c(%ebp)
083213cf +0x0f55:  mov    -0x54(%ebp),%eax
083213d2 +0x0f58:  mov    %eax,%edx
083213d4 +0x0f5a:  sar    $0x1f,%edx
083213d7 +0x0f5d:  cmp    -0x6c(%ebp),%edx
083213da +0x0f60:  jl     083213ed <+0xf73>
083213dc +0x0f62:  cmp    -0x6c(%ebp),%edx
083213df +0x0f65:  jg     083213e6 <+0xf6c>
083213e1 +0x0f67:  cmp    -0x70(%ebp),%eax
083213e4 +0x0f6a:  jbe    083213ed <+0xf73>
083213e6 +0x0f6c:  movl   $0xa,-0x3c(%ebp)
083213ed +0x0f73:  mov    -0x58(%ebp),%eax
083213f0 +0x0f76:  mov    $0x0,%edx
083213f5 +0x0f7b:  cmp    -0x64(%ebp),%edx
083213f8 +0x0f7e:  jl     0832140b <+0xf91>
083213fa +0x0f80:  cmp    -0x64(%ebp),%edx
083213fd +0x0f83:  jg     08321404 <+0xf8a>
083213ff +0x0f85:  cmp    -0x68(%ebp),%eax
08321402 +0x0f88:  jbe    0832140b <+0xf91>
08321404 +0x0f8a:  movl   $0xc,-0x3c(%ebp)
0832140b +0x0f91:  mov    -0x54(%ebp),%eax
0832140e +0x0f94:  mov    %eax,%ecx
08321410 +0x0f96:  mov    %eax,%ebx
08321412 +0x0f98:  sar    $0x1f,%ebx
08321415 +0x0f9b:  mov    -0x70(%ebp),%eax
08321418 +0x0f9e:  mov    -0x6c(%ebp),%edx
0832141b +0x0fa1:  sub    %ecx,%eax
0832141d +0x0fa3:  sbb    %ebx,%edx
0832141f +0x0fa5:  mov    %eax,-0xc8(%ebp)
08321425 +0x0fab:  mov    %edx,-0xc4(%ebp)
0832142b +0x0fb1:  movl   $0x0,-0xc0(%ebp)
08321435 +0x0fbb:  movl   $0x0,-0xbc(%ebp)
0832143f +0x0fc5:  lea    -0xc8(%ebp),%eax
08321445 +0x0fcb:  mov    %eax,0x4(%esp)
08321449 +0x0fcf:  lea    -0xc0(%ebp),%eax
0832144f +0x0fd5:  mov    %eax,(%esp)
08321452 +0x0fd8:  call   0817a4e0 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x55e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x55e
08321457 +0x0fdd:  mov    0x4(%eax),%edx
0832145a +0x0fe0:  mov    (%eax),%eax
0832145c +0x0fe2:  mov    %eax,-0x70(%ebp)
0832145f +0x0fe5:  mov    %edx,-0x6c(%ebp)
08321462 +0x0fe8:  mov    -0x58(%ebp),%ecx
08321465 +0x0feb:  mov    $0x0,%ebx
0832146a +0x0ff0:  mov    -0x68(%ebp),%eax
0832146d +0x0ff3:  mov    -0x64(%ebp),%edx
08321470 +0x0ff6:  sub    %ecx,%eax
08321472 +0x0ff8:  sbb    %ebx,%edx
08321474 +0x0ffa:  mov    %eax,-0xb8(%ebp)
0832147a +0x1000:  mov    %edx,-0xb4(%ebp)
08321480 +0x1006:  movl   $0x0,-0xb0(%ebp)
0832148a +0x1010:  movl   $0x0,-0xac(%ebp)
08321494 +0x101a:  lea    -0xb8(%ebp),%eax
0832149a +0x1020:  mov    %eax,0x4(%esp)
0832149e +0x1024:  lea    -0xb0(%ebp),%eax
083214a4 +0x102a:  mov    %eax,(%esp)
083214a7 +0x102d:  call   0817a4e0 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x55e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x55e
083214ac +0x1032:  mov    0x4(%eax),%edx
083214af +0x1035:  mov    (%eax),%eax
083214b1 +0x1037:  mov    %eax,-0x68(%ebp)
083214b4 +0x103a:  mov    %edx,-0x64(%ebp)
083214b7 +0x103d:  cmpl   $0x0,-0x3c(%ebp)
083214bb +0x1041:  je     08321691 <+0x1217>
083214c1 +0x1047:  mov    0xc(%ebp),%eax
083214c4 +0x104a:  mov    %eax,(%esp)
083214c7 +0x104d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
083214cc +0x1052:  mov    -0x58(%ebp),%edx
083214cf +0x1055:  mov    %edx,0x20(%esp)
083214d3 +0x1059:  mov    -0x54(%ebp),%edx
083214d6 +0x105c:  mov    %edx,0x1c(%esp)
083214da +0x1060:  mov    -0x5c(%ebp),%edx
083214dd +0x1063:  mov    %edx,0x18(%esp)
083214e1 +0x1067:  mov    %eax,0x14(%esp)
083214e5 +0x106b:  movl   $"IPG ERROR [Dispatcher_BuyCeraShopItem::dispatch_sig] UserID[%s] ACera[%d] AGold[%d] AWP[%d]",0x10(%esp)
083214ed +0x1073:  movl   $0x2d6,0xc(%esp)
083214f5 +0x107b:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083214fd +0x1083:  movl   $"CeraShop.cpp",0x4(%esp)
08321505 +0x108b:  movl   $0x1,(%esp)
0832150c +0x1092:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08321511 +0x1097:  mov    0xc(%ebp),%eax
08321514 +0x109a:  mov    %eax,(%esp)
08321517 +0x109d:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
0832151c +0x10a2:  mov    %eax,%esi
0832151e +0x10a4:  mov    0xc(%ebp),%eax
08321521 +0x10a7:  mov    %eax,(%esp)
08321524 +0x10aa:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08321529 +0x10af:  mov    %eax,(%esp)
0832152c +0x10b2:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08321531 +0x10b7:  mov    %eax,%ebx
08321533 +0x10b9:  mov    0xc(%ebp),%eax
08321536 +0x10bc:  mov    %eax,(%esp)
08321539 +0x10bf:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
0832153e +0x10c4:  mov    %esi,0x1c(%esp)
08321542 +0x10c8:  mov    %ebx,0x18(%esp)
08321546 +0x10cc:  mov    %eax,0x14(%esp)
0832154a +0x10d0:  movl   $" / UCera[%d] UGold[%d] UWP[%d]\n",0x10(%esp)
08321552 +0x10d8:  movl   $0x2d7,0xc(%esp)
0832155a +0x10e0:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08321562 +0x10e8:  movl   $"CeraShop.cpp",0x4(%esp)
0832156a +0x10f0:  movl   $0x1,(%esp)
08321571 +0x10f7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08321576 +0x10fc:  mov    -0x78(%ebp),%eax
08321579 +0x10ff:  mov    0x10(%ebp),%edx
0832157c +0x1102:  imul   $0x1cf,%eax,%eax
08321582 +0x1108:  lea    (%edx,%eax,1),%eax
08321585 +0x110b:  add    $0x30,%eax
08321588 +0x110e:  mov    0x9(%eax),%eax
0832158b +0x1111:  mov    %eax,0x14(%esp)
0832158f +0x1115:  movl   $"Error Goods No : %d",0x10(%esp)
08321597 +0x111d:  movl   $0x2d9,0xc(%esp)
0832159f +0x1125:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
083215a7 +0x112d:  movl   $"CeraShop.cpp",0x4(%esp)
083215af +0x1135:  movl   $0x1,(%esp)
083215b6 +0x113c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083215bb +0x1141:  mov    -0x78(%ebp),%eax
083215be +0x1144:  mov    -0x338(%ebp,%eax,4),%eax
083215c5 +0x114b:  mov    %eax,(%esp)
083215c8 +0x114e:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
083215cd +0x1153:  mov    %eax,-0x28(%ebp)
083215d0 +0x1156:  mov    0x10(%ebp),%eax
083215d3 +0x1159:  movzbl 0xf(%eax),%eax
083215d7 +0x115d:  movsbl %al,%ebx
083215da +0x1160:  mov    0x10(%ebp),%eax
083215dd +0x1163:  movzbl 0x36(%eax),%eax
083215e1 +0x1167:  movzbl %al,%ecx
083215e4 +0x116a:  mov    -0x78(%ebp),%eax
083215e7 +0x116d:  lea    0x1(%eax),%esi
083215ea +0x1170:  mov    -0x78(%ebp),%eax
083215ed +0x1173:  mov    0x10(%ebp),%edx
083215f0 +0x1176:  imul   $0x1cf,%eax,%eax
083215f6 +0x117c:  lea    (%edx,%eax,1),%eax
083215f9 +0x117f:  add    $0x30,%eax
083215fc +0x1182:  mov    0x9(%eax),%edx
083215ff +0x1185:  mov    -0x3c(%ebp),%eax
08321602 +0x1188:  movzwl %ax,%eax
08321605 +0x118b:  mov    %ebx,0x1c(%esp)
08321609 +0x118f:  mov    %ecx,0x18(%esp)
0832160d +0x1193:  mov    %esi,0x14(%esp)
08321611 +0x1197:  mov    %edx,0x10(%esp)
08321615 +0x119b:  mov    -0x28(%ebp),%edx
08321618 +0x119e:  mov    %edx,0xc(%esp)
0832161c +0x11a2:  mov    %eax,0x8(%esp)
08321620 +0x11a6:  mov    0xc(%ebp),%eax
08321623 +0x11a9:  mov    %eax,0x4(%esp)
08321627 +0x11ad:  mov    0x8(%ebp),%eax
0832162a +0x11b0:  mov    %eax,(%esp)
0832162d +0x11b3:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08321632 +0x11b8:  mov    -0x78(%ebp),%eax
08321635 +0x11bb:  movl   $0x0,-0x338(%ebp,%eax,4)
08321640 +0x11c6:  movl   $0x0,0xc(%esp)
08321648 +0x11ce:  movl   $0x2e1,0x8(%esp)
08321650 +0x11d6:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08321658 +0x11de:  lea    -0xa4(%ebp),%eax
0832165e +0x11e4:  mov    %eax,(%esp)
08321661 +0x11e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08321666 +0x11ec:  movl   $0x2e1,0xc(%esp)
0832166e +0x11f4:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08321676 +0x11fc:  movl   $"[%s][%d]",0x4(%esp)
0832167e +0x1204:  lea    -0xa4(%ebp),%eax
08321684 +0x120a:  mov    %eax,(%esp)
08321687 +0x120d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0832168c +0x1212:  jmp    08321d01 <+0x1887>
08321691 +0x1217:  mov    -0x78(%ebp),%eax
08321694 +0x121a:  mov    -0x338(%ebp,%eax,4),%eax
0832169b +0x1221:  mov    %eax,(%esp)
0832169e +0x1224:  call   0817a054 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xd2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xd2
083216a3 +0x1229:  mov    %eax,0x4(%esp)
083216a7 +0x122d:  mov    0xc(%ebp),%eax
083216aa +0x1230:  mov    %eax,(%esp)
083216ad +0x1233:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
083216b2 +0x1238:  test   %al,%al
083216b4 +0x123a:  je     0832178e <+0x1314>
083216ba +0x1240:  mov    -0x78(%ebp),%eax
083216bd +0x1243:  mov    -0x338(%ebp,%eax,4),%eax
083216c4 +0x124a:  mov    %eax,(%esp)
083216c7 +0x124d:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
083216cc +0x1252:  mov    %eax,-0x24(%ebp)
083216cf +0x1255:  mov    0x10(%ebp),%eax
083216d2 +0x1258:  movzbl 0xf(%eax),%eax
083216d6 +0x125c:  movsbl %al,%ecx
083216d9 +0x125f:  mov    0x10(%ebp),%eax
083216dc +0x1262:  movzbl 0x36(%eax),%eax
083216e0 +0x1266:  movzbl %al,%edx
083216e3 +0x1269:  mov    -0x78(%ebp),%eax
083216e6 +0x126c:  lea    0x1(%eax),%ebx
083216e9 +0x126f:  mov    -0x78(%ebp),%eax
083216ec +0x1272:  mov    0x10(%ebp),%esi
083216ef +0x1275:  imul   $0x1cf,%eax,%eax
083216f5 +0x127b:  lea    (%esi,%eax,1),%eax
083216f8 +0x127e:  add    $0x30,%eax
083216fb +0x1281:  mov    0x9(%eax),%eax
083216fe +0x1284:  mov    %ecx,0x1c(%esp)
08321702 +0x1288:  mov    %edx,0x18(%esp)
08321706 +0x128c:  mov    %ebx,0x14(%esp)
0832170a +0x1290:  mov    %eax,0x10(%esp)
0832170e +0x1294:  mov    -0x24(%ebp),%eax
08321711 +0x1297:  mov    %eax,0xc(%esp)
08321715 +0x129b:  movl   $0x14,0x8(%esp)
0832171d +0x12a3:  mov    0xc(%ebp),%eax
08321720 +0x12a6:  mov    %eax,0x4(%esp)
08321724 +0x12aa:  mov    0x8(%ebp),%eax
08321727 +0x12ad:  mov    %eax,(%esp)
0832172a +0x12b0:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0832172f +0x12b5:  mov    -0x78(%ebp),%eax
08321732 +0x12b8:  movl   $0x0,-0x338(%ebp,%eax,4)
0832173d +0x12c3:  movl   $0x0,0xc(%esp)
08321745 +0x12cb:  movl   $0x2ed,0x8(%esp)
0832174d +0x12d3:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08321755 +0x12db:  lea    -0x94(%ebp),%eax
0832175b +0x12e1:  mov    %eax,(%esp)
0832175e +0x12e4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08321763 +0x12e9:  movl   $0x2ed,0xc(%esp)
0832176b +0x12f1:  movl   $&_ZZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08321773 +0x12f9:  movl   $"[%s][%d]",0x4(%esp)
0832177b +0x1301:  lea    -0x94(%ebp),%eax
08321781 +0x1307:  mov    %eax,(%esp)
08321784 +0x130a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08321789 +0x130f:  jmp    08321d01 <+0x1887>
0832178e +0x1314:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08321793 +0x1319:  movl   $0x37b,0x8(%esp)
0832179b +0x1321:  movl   $"CeraShop.cpp",0x4(%esp)
083217a3 +0x1329:  mov    %eax,(%esp)
083217a6 +0x132c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
083217ab +0x1331:  movl   $0x0,0x8(%esp)
083217b3 +0x1339:  mov    %eax,0x4(%esp)
083217b7 +0x133d:  lea    -0x188(%ebp),%eax
083217bd +0x1343:  mov    %eax,(%esp)
083217c0 +0x1346:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
083217c5 +0x134b:  lea    -0x188(%ebp),%eax
083217cb +0x1351:  mov    %eax,(%esp)
083217ce +0x1354:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
083217d3 +0x1359:  mov    %eax,(%esp)
083217d6 +0x135c:  call   0817a50c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x58a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x58a
083217db +0x1361:  mov    %eax,-0x38(%ebp)
083217de +0x1364:  mov    -0x78(%ebp),%eax
083217e1 +0x1367:  mov    0x10(%ebp),%edx
083217e4 +0x136a:  imul   $0x1cf,%eax,%eax
083217ea +0x1370:  lea    (%edx,%eax,1),%eax
083217ed +0x1373:  add    $0x30,%eax
083217f0 +0x1376:  mov    0x9(%eax),%edx
083217f3 +0x1379:  mov    -0x38(%ebp),%eax
083217f6 +0x137c:  mov    %edx,(%eax)
083217f8 +0x137e:  mov    -0x78(%ebp),%eax
083217fb +0x1381:  mov    -0x338(%ebp,%eax,4),%eax
08321802 +0x1388:  mov    %eax,(%esp)
08321805 +0x138b:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
0832180a +0x1390:  mov    -0x38(%ebp),%edx
0832180d +0x1393:  mov    %eax,0x4(%edx)
08321810 +0x1396:  mov    -0x78(%ebp),%eax
08321813 +0x1399:  mov    -0x338(%ebp,%eax,4),%eax
0832181a +0x13a0:  mov    %eax,(%esp)
0832181d +0x13a3:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08321822 +0x13a8:  mov    %eax,%edx
08321824 +0x13aa:  mov    -0x38(%ebp),%eax
08321827 +0x13ad:  mov    %dx,0xc(%eax)
0832182b +0x13b1:  mov    -0x5c(%ebp),%edx
0832182e +0x13b4:  mov    -0x38(%ebp),%eax
08321831 +0x13b7:  mov    %edx,0x10(%eax)
08321834 +0x13ba:  mov    -0x38(%ebp),%eax
08321837 +0x13bd:  mov    -0x54(%ebp),%edx
0832183a +0x13c0:  mov    %edx,0x18(%eax)
0832183d +0x13c3:  mov    -0x58(%ebp),%edx
08321840 +0x13c6:  mov    -0x38(%ebp),%eax
08321843 +0x13c9:  mov    %edx,0x14(%eax)
08321846 +0x13cc:  mov    -0x78(%ebp),%eax
08321849 +0x13cf:  mov    -0x338(%ebp,%eax,4),%eax
08321850 +0x13d6:  mov    %eax,(%esp)
08321853 +0x13d9:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08321858 +0x13de:  mov    %eax,%edx
0832185a +0x13e0:  mov    -0x38(%ebp),%eax
0832185d +0x13e3:  mov    %edx,0x8(%eax)
08321860 +0x13e6:  mov    -0x78(%ebp),%eax
08321863 +0x13e9:  mov    0x10(%ebp),%edx
08321866 +0x13ec:  imul   $0x1cf,%eax,%eax
0832186c +0x13f2:  lea    (%edx,%eax,1),%eax
0832186f +0x13f5:  add    $0x37,%eax
08321872 +0x13f8:  movzbl (%eax),%eax
08321875 +0x13fb:  mov    %eax,%edx
08321877 +0x13fd:  mov    -0x38(%ebp),%eax
0832187a +0x1400:  mov    %dl,0x2c(%eax)
0832187d +0x1403:  mov    -0x78(%ebp),%eax
08321880 +0x1406:  mov    0x10(%ebp),%edx
08321883 +0x1409:  imul   $0x1cf,%eax,%eax
08321889 +0x140f:  lea    (%edx,%eax,1),%eax
0832188c +0x1412:  add    $0x38,%eax
0832188f +0x1415:  movzbl (%eax),%edx
08321892 +0x1418:  mov    -0x38(%ebp),%eax
08321895 +0x141b:  mov    %dl,0x2d(%eax)
08321898 +0x141e:  mov    -0x38(%ebp),%eax
0832189b +0x1421:  mov    -0x80(%ebp),%edx
0832189e +0x1424:  mov    %edx,0x1c(%eax)
083218a1 +0x1427:  mov    -0x78(%ebp),%eax
083218a4 +0x142a:  mov    -0x338(%ebp,%eax,4),%eax
083218ab +0x1431:  mov    %eax,(%esp)
083218ae +0x1434:  call   0817a054 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xd2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xd2
083218b3 +0x1439:  mov    -0x38(%ebp),%edx
083218b6 +0x143c:  mov    %eax,0x28(%edx)
083218b9 +0x143f:  mov    0x10(%ebp),%eax
083218bc +0x1442:  movzbl 0x36(%eax),%eax
083218c0 +0x1446:  movzbl %al,%edx
083218c3 +0x1449:  mov    -0x38(%ebp),%eax
083218c6 +0x144c:  mov    %edx,0x20(%eax)
083218c9 +0x144f:  mov    -0x78(%ebp),%eax
083218cc +0x1452:  lea    0x1(%eax),%edx
083218cf +0x1455:  mov    -0x38(%ebp),%eax
083218d2 +0x1458:  mov    %edx,0x24(%eax)
083218d5 +0x145b:  mov    -0x38(%ebp),%eax
083218d8 +0x145e:  mov    -0x74(%ebp),%edx
083218db +0x1461:  mov    %edx,0x30(%eax)
083218de +0x1464:  mov    0x10(%ebp),%eax
083218e1 +0x1467:  movzbl 0xf(%eax),%eax
083218e5 +0x146b:  mov    %eax,%edx
083218e7 +0x146d:  mov    -0x38(%ebp),%eax
083218ea +0x1470:  mov    %dl,0x34(%eax)
083218ed +0x1473:  mov    0x10(%ebp),%eax
083218f0 +0x1476:  mov    0x2e(%eax),%edx
083218f3 +0x1479:  mov    -0x38(%ebp),%eax
083218f6 +0x147c:  mov    %edx,0x40(%eax)
083218f9 +0x147f:  mov    0x10(%ebp),%eax
083218fc +0x1482:  mov    0x32(%eax),%edx
083218ff +0x1485:  mov    -0x38(%ebp),%eax
08321902 +0x1488:  mov    %edx,0x38(%eax)
08321905 +0x148b:  mov    -0x78(%ebp),%eax
08321908 +0x148e:  mov    0x10(%ebp),%edx
0832190b +0x1491:  imul   $0x1cf,%eax,%eax
08321911 +0x1497:  lea    (%edx,%eax,1),%eax
08321914 +0x149a:  add    $0x3d,%eax
08321917 +0x149d:  movzbl (%eax),%edx
0832191a +0x14a0:  mov    -0x38(%ebp),%eax
0832191d +0x14a3:  mov    %dl,0x44(%eax)
08321920 +0x14a6:  movl   $0x0,-0x20(%ebp)
08321927 +0x14ad:  jmp    08321989 <+0x150f>
08321929 +0x14af:  mov    -0x20(%ebp),%ecx
0832192c +0x14b2:  mov    -0x78(%ebp),%esi
0832192f +0x14b5:  mov    -0x20(%ebp),%edx
08321932 +0x14b8:  mov    0x10(%ebp),%ebx
08321935 +0x14bb:  mov    %edx,%eax
08321937 +0x14bd:  shl    $0x2,%eax
0832193a +0x14c0:  add    %edx,%eax
0832193c +0x14c2:  imul   $0x1cf,%esi,%edx
08321942 +0x14c8:  add    %edx,%eax
08321944 +0x14ca:  lea    (%ebx,%eax,1),%eax
08321947 +0x14cd:  add    $0x30,%eax
0832194a +0x14d0:  mov    0xe(%eax),%edx
0832194d +0x14d3:  mov    -0x38(%ebp),%eax
08321950 +0x14d6:  add    $0x8,%ecx
08321953 +0x14d9:  mov    %edx,0x8(%eax,%ecx,8)
08321957 +0x14dd:  mov    -0x20(%ebp),%ecx
0832195a +0x14e0:  mov    -0x78(%ebp),%esi
0832195d +0x14e3:  mov    -0x20(%ebp),%edx
08321960 +0x14e6:  mov    0x10(%ebp),%ebx
08321963 +0x14e9:  mov    %edx,%eax
08321965 +0x14eb:  shl    $0x2,%eax
08321968 +0x14ee:  add    %edx,%eax
0832196a +0x14f0:  imul   $0x1cf,%esi,%edx
08321970 +0x14f6:  add    %edx,%eax
08321972 +0x14f8:  lea    (%ebx,%eax,1),%eax
08321975 +0x14fb:  add    $0x42,%eax
08321978 +0x14fe:  movzbl (%eax),%edx
0832197b +0x1501:  mov    -0x38(%ebp),%eax
0832197e +0x1504:  add    $0x8,%ecx
08321981 +0x1507:  mov    %dl,0xc(%eax,%ecx,8)
08321985 +0x150b:  addl   $0x1,-0x20(%ebp)
08321989 +0x150f:  mov    -0x78(%ebp),%eax
0832198c +0x1512:  mov    0x10(%ebp),%edx
0832198f +0x1515:  imul   $0x1cf,%eax,%eax
08321995 +0x151b:  lea    (%edx,%eax,1),%eax
08321998 +0x151e:  add    $0x3d,%eax
0832199b +0x1521:  movzbl (%eax),%eax
0832199e +0x1524:  movzbl %al,%eax
083219a1 +0x1527:  cmp    -0x20(%ebp),%eax
083219a4 +0x152a:  setg   %al
083219a7 +0x152d:  test   %al,%al
083219a9 +0x152f:  jne    08321929 <+0x14af>
083219af +0x1535:  mov    -0x78(%ebp),%eax
083219b2 +0x1538:  mov    0x10(%ebp),%edx
083219b5 +0x153b:  imul   $0x1cf,%eax,%eax
083219bb +0x1541:  lea    (%edx,%eax,1),%eax
083219be +0x1544:  add    $0xed,%eax
083219c3 +0x1549:  movzbl (%eax),%edx
083219c6 +0x154c:  mov    -0x38(%ebp),%eax
083219c9 +0x154f:  mov    %dl,0x160(%eax)
083219cf +0x1555:  movl   $0x0,-0x1c(%ebp)
083219d6 +0x155c:  jmp    08321a6a <+0x15f0>
083219db +0x1561:  mov    -0x1c(%ebp),%ecx
083219de +0x1564:  mov    -0x78(%ebp),%edx
083219e1 +0x1567:  mov    -0x1c(%ebp),%ebx
083219e4 +0x156a:  mov    0x10(%ebp),%eax
083219e7 +0x156d:  add    $0x16,%ebx
083219ea +0x1570:  shl    $0x3,%ebx
083219ed +0x1573:  imul   $0x1cf,%edx,%edx
083219f3 +0x1579:  lea    (%ebx,%edx,1),%edx
083219f6 +0x157c:  add    %edx,%eax
083219f8 +0x157e:  add    $0x30,%eax
083219fb +0x1581:  mov    0xe(%eax),%edx
083219fe +0x1584:  mov    -0x38(%ebp),%eax
08321a01 +0x1587:  add    $0x2c,%ecx
08321a04 +0x158a:  mov    %edx,0x4(%eax,%ecx,8)
08321a08 +0x158e:  mov    -0x1c(%ebp),%ecx
08321a0b +0x1591:  mov    -0x78(%ebp),%edx
08321a0e +0x1594:  mov    -0x1c(%ebp),%ebx
08321a11 +0x1597:  mov    0x10(%ebp),%eax
08321a14 +0x159a:  add    $0x16,%ebx
08321a17 +0x159d:  shl    $0x3,%ebx
08321a1a +0x15a0:  imul   $0x1cf,%edx,%edx
08321a20 +0x15a6:  lea    (%ebx,%edx,1),%edx
08321a23 +0x15a9:  add    %edx,%eax
08321a25 +0x15ab:  add    $0x30,%eax
08321a28 +0x15ae:  movzwl 0x12(%eax),%edx
08321a2c +0x15b2:  mov    -0x38(%ebp),%eax
08321a2f +0x15b5:  add    $0x2c,%ecx
08321a32 +0x15b8:  mov    %dx,0x8(%eax,%ecx,8)
08321a37 +0x15bd:  mov    -0x1c(%ebp),%ecx
08321a3a +0x15c0:  mov    -0x78(%ebp),%edx
08321a3d +0x15c3:  mov    -0x1c(%ebp),%ebx
08321a40 +0x15c6:  mov    0x10(%ebp),%eax
08321a43 +0x15c9:  add    $0x16,%ebx
08321a46 +0x15cc:  shl    $0x3,%ebx
08321a49 +0x15cf:  imul   $0x1cf,%edx,%edx
08321a4f +0x15d5:  lea    (%ebx,%edx,1),%edx
08321a52 +0x15d8:  add    %edx,%eax
08321a54 +0x15da:  add    $0x30,%eax
08321a57 +0x15dd:  movzwl 0x14(%eax),%edx
08321a5b +0x15e1:  mov    -0x38(%ebp),%eax
08321a5e +0x15e4:  add    $0x2c,%ecx
08321a61 +0x15e7:  mov    %dx,0xa(%eax,%ecx,8)
08321a66 +0x15ec:  addl   $0x1,-0x1c(%ebp)
08321a6a +0x15f0:  mov    -0x78(%ebp),%eax
08321a6d +0x15f3:  mov    0x10(%ebp),%edx
08321a70 +0x15f6:  imul   $0x1cf,%eax,%eax
08321a76 +0x15fc:  lea    (%edx,%eax,1),%eax
08321a79 +0x15ff:  add    $0xed,%eax
08321a7e +0x1604:  movzbl (%eax),%eax
08321a81 +0x1607:  movzbl %al,%eax
08321a84 +0x160a:  cmp    -0x1c(%ebp),%eax
08321a87 +0x160d:  setg   %al
08321a8a +0x1610:  test   %al,%al
08321a8c +0x1612:  jne    083219db <+0x1561>
08321a92 +0x1618:  mov    -0x5c(%ebp),%eax
08321a95 +0x161b:  mov    %eax,0xc(%esp)
08321a99 +0x161f:  movl   $"%d",0x8(%esp)
08321aa1 +0x1627:  movl   $0x24,0x4(%esp)
08321aa9 +0x162f:  lea    -0x1b4(%ebp),%eax
08321aaf +0x1635:  mov    %eax,(%esp)
08321ab2 +0x1638:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08321ab7 +0x163d:  mov    -0x78(%ebp),%eax
08321aba +0x1640:  mov    0x10(%ebp),%edx
08321abd +0x1643:  imul   $0x1cf,%eax,%eax
08321ac3 +0x1649:  lea    (%edx,%eax,1),%eax
08321ac6 +0x164c:  add    $0x30,%eax
08321ac9 +0x164f:  mov    0x9(%eax),%eax
08321acc +0x1652:  mov    %eax,0xc(%esp)
08321ad0 +0x1656:  movl   $"%d",0x8(%esp)
08321ad8 +0x165e:  movl   $0x8,0x4(%esp)
08321ae0 +0x1666:  lea    -0x190(%ebp),%eax
08321ae6 +0x166c:  mov    %eax,(%esp)
08321ae9 +0x166f:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08321aee +0x1674:  mov    -0x78(%ebp),%eax
08321af1 +0x1677:  mov    -0x338(%ebp,%eax,4),%eax
08321af8 +0x167e:  mov    %eax,(%esp)
08321afb +0x1681:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08321b00 +0x1686:  cmp    $0x1,%eax
08321b03 +0x1689:  setne  %al
08321b06 +0x168c:  test   %al,%al
08321b08 +0x168e:  je     08321bbf <+0x1745>
08321b0e +0x1694:  mov    -0x78(%ebp),%eax
08321b11 +0x1697:  mov    -0x3c8(%ebp,%eax,4),%eax
08321b18 +0x169e:  mov    %eax,(%esp)
08321b1b +0x16a1:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08321b20 +0x16a6:  test   %al,%al
08321b22 +0x16a8:  je     08321b42 <+0x16c8>
08321b24 +0x16aa:  mov    -0x78(%ebp),%eax
08321b27 +0x16ad:  mov    -0x338(%ebp,%eax,4),%eax
08321b2e +0x16b4:  mov    %eax,(%esp)
08321b31 +0x16b7:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08321b36 +0x16bc:  cmp    $0x1,%eax
08321b39 +0x16bf:  jle    08321b42 <+0x16c8>
08321b3b +0x16c1:  mov    $0x1,%eax
08321b40 +0x16c6:  jmp    08321b47 <+0x16cd>
08321b42 +0x16c8:  mov    $0x0,%eax
08321b47 +0x16cd:  test   %al,%al
08321b49 +0x16cf:  je     08321b99 <+0x171f>
08321b4b +0x16d1:  mov    -0x78(%ebp),%eax
08321b4e +0x16d4:  mov    -0x338(%ebp,%eax,4),%eax
08321b55 +0x16db:  mov    %eax,(%esp)
08321b58 +0x16de:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08321b5d +0x16e3:  mov    %eax,%ebx
08321b5f +0x16e5:  mov    -0x78(%ebp),%eax
08321b62 +0x16e8:  mov    -0x3c8(%ebp,%eax,4),%eax
08321b69 +0x16ef:  mov    %eax,(%esp)
08321b6c +0x16f2:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
08321b71 +0x16f7:  mov    %ebx,0x10(%esp)
08321b75 +0x16fb:  mov    %eax,0xc(%esp)
08321b79 +0x16ff:  movl   $"%s %d개",0x8(%esp)
08321b81 +0x1707:  movl   $0x62,0x4(%esp)
08321b89 +0x170f:  lea    -0x218(%ebp),%eax
08321b8f +0x1715:  mov    %eax,(%esp)
08321b92 +0x1718:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08321b97 +0x171d:  jmp    08321bf3 <+0x1779>
08321b99 +0x171f:  mov    -0x78(%ebp),%eax
08321b9c +0x1722:  mov    -0x3c8(%ebp,%eax,4),%eax
08321ba3 +0x1729:  mov    %eax,(%esp)
08321ba6 +0x172c:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
08321bab +0x1731:  mov    %eax,0x4(%esp)
08321baf +0x1735:  lea    -0x218(%ebp),%eax
08321bb5 +0x173b:  mov    %eax,(%esp)
08321bb8 +0x173e:  call   0807def0 <_init+0x7e8>
08321bbd +0x1743:  jmp    08321bf3 <+0x1779>
08321bbf +0x1745:  mov    -0x78(%ebp),%eax
08321bc2 +0x1748:  mov    -0x338(%ebp,%eax,4),%eax
08321bc9 +0x174f:  mov    %eax,(%esp)
08321bcc +0x1752:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08321bd1 +0x1757:  mov    %eax,0xc(%esp)
08321bd5 +0x175b:  movl   $"코인 %d개",0x8(%esp)
08321bdd +0x1763:  movl   $0x62,0x4(%esp)
08321be5 +0x176b:  lea    -0x218(%ebp),%eax
08321beb +0x1771:  mov    %eax,(%esp)
08321bee +0x1774:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08321bf3 +0x1779:  cmpl   $0x0,-0x5c(%ebp)
08321bf7 +0x177d:  jne    08321c67 <+0x17ed>
08321bf9 +0x177f:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08321bfe +0x1784:  mov    (%eax),%eax
08321c00 +0x1786:  add    $0x18,%eax
08321c03 +0x1789:  mov    (%eax),%esi
08321c05 +0x178b:  mov    0xc(%ebp),%eax
08321c08 +0x178e:  mov    %eax,(%esp)
08321c0b +0x1791:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08321c10 +0x1796:  mov    %eax,%ebx
08321c12 +0x1798:  lea    -0x17d(%ebp),%eax
08321c18 +0x179e:  mov    %eax,(%esp)
08321c1b +0x17a1:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
08321c20 +0x17a6:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
08321c26 +0x17ac:  lea    -0x188(%ebp),%ecx
08321c2c +0x17b2:  mov    %ecx,0x1c(%esp)
08321c30 +0x17b6:  mov    %ebx,0x18(%esp)
08321c34 +0x17ba:  lea    -0x218(%ebp),%ecx
08321c3a +0x17c0:  mov    %ecx,0x14(%esp)
08321c3e +0x17c4:  mov    %eax,0x10(%esp)
08321c42 +0x17c8:  lea    -0x1b4(%ebp),%eax
08321c48 +0x17ce:  mov    %eax,0xc(%esp)
08321c4c +0x17d2:  lea    -0x190(%ebp),%eax
08321c52 +0x17d8:  mov    %eax,0x8(%esp)
08321c56 +0x17dc:  mov    0xc(%ebp),%eax
08321c59 +0x17df:  mov    %eax,0x4(%esp)
08321c5d +0x17e3:  mov    %edx,(%esp)
08321c60 +0x17e6:  call   *%esi
08321c62 +0x17e8:  jmp    08321cf0 <+0x1876>
08321c67 +0x17ed:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08321c6c +0x17f2:  mov    (%eax),%eax
08321c6e +0x17f4:  add    $0x14,%eax
08321c71 +0x17f7:  mov    (%eax),%esi
08321c73 +0x17f9:  mov    0xc(%ebp),%eax
08321c76 +0x17fc:  mov    %eax,(%esp)
08321c79 +0x17ff:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08321c7e +0x1804:  mov    %eax,%ebx
08321c80 +0x1806:  lea    -0x17d(%ebp),%eax
08321c86 +0x180c:  mov    %eax,(%esp)
08321c89 +0x180f:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
08321c8e +0x1814:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
08321c94 +0x181a:  lea    -0x188(%ebp),%ecx
08321c9a +0x1820:  mov    %ecx,0x1c(%esp)
08321c9e +0x1824:  mov    %ebx,0x18(%esp)
08321ca2 +0x1828:  lea    -0x218(%ebp),%ecx
08321ca8 +0x182e:  mov    %ecx,0x14(%esp)
08321cac +0x1832:  mov    %eax,0x10(%esp)
08321cb0 +0x1836:  lea    -0x1b4(%ebp),%eax
08321cb6 +0x183c:  mov    %eax,0xc(%esp)
08321cba +0x1840:  lea    -0x190(%ebp),%eax
08321cc0 +0x1846:  mov    %eax,0x8(%esp)
08321cc4 +0x184a:  mov    0xc(%ebp),%eax
08321cc7 +0x184d:  mov    %eax,0x4(%esp)
08321ccb +0x1851:  mov    %edx,(%esp)
08321cce +0x1854:  call   *%esi
08321cd0 +0x1856:  jmp    08321cf0 <+0x1876>
08321cd2 +0x1858:  mov    %edx,%ebx
08321cd4 +0x185a:  mov    %eax,%esi
08321cd6 +0x185c:  lea    -0x188(%ebp),%eax
08321cdc +0x1862:  mov    %eax,(%esp)
08321cdf +0x1865:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08321ce4 +0x186a:  mov    %esi,%eax
08321ce6 +0x186c:  mov    %ebx,%edx
08321ce8 +0x186e:  mov    %eax,(%esp)
08321ceb +0x1871:  call   08ae3750 <_Unwind_Resume>
08321cf0 +0x1876:  lea    -0x188(%ebp),%eax
08321cf6 +0x187c:  mov    %eax,(%esp)
08321cf9 +0x187f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08321cfe +0x1884:  jmp    08321d01 <+0x1887>
08321d00 +0x1886:  nop
08321d01 +0x1887:  addl   $0x1,-0x78(%ebp)
08321d05 +0x188b:  mov    0x10(%ebp),%eax
08321d08 +0x188e:  movzbl 0x36(%eax),%eax
08321d0c +0x1892:  movzbl %al,%eax
08321d0f +0x1895:  cmp    -0x78(%ebp),%eax
08321d12 +0x1898:  setg   %al
08321d15 +0x189b:  test   %al,%al
08321d17 +0x189d:  jne    08320ec3 <+0xa49>
08321d1d +0x18a3:  mov    $0x1,%eax
08321d22 +0x18a8:  add    $0x40c,%esp
08321d28 +0x18ae:  pop    %ebx
08321d29 +0x18af:  pop    %esi
08321d2a +0x18b0:  pop    %edi
08321d2b +0x18b1:  pop    %ebp
08321d2c +0x18b2:  ret
08321d2d +0x18b3:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::ProcessBuyRequest @ 0x832047a

/* WongWork::CCeraShop::ProcessBuyRequest(CUser*, MSG_BUY_CERASHOP_ITEM const&) */

undefined4 __thiscall
WongWork::CCeraShop::ProcessBuyRequest
          (CCeraShop *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  char *pcVar1;
  MSG_BUY_CERASHOP_ITEM MVar2;
  MSG_BUY_CERASHOP_ITEM MVar3;
  code *pcVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  CCeraShopGoods *pCVar11;
  GameWorld *pGVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  undefined4 *puVar16;
  CUserPremium *this_00;
  uint *puVar17;
  CInventory *pCVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  Stream *pSVar21;
  CStreamGuard *this_01;
  int iVar22;
  uint uVar23;
  CCeraShopGoods **ppCVar24;
  bool bVar25;
  byte bVar26;
  int local_3cc [36];
  CCeraShopGoods *local_33c [36];
  undefined4 local_2ac [36];
  char local_21c [100];
  char local_1b8 [36];
  char local_194 [8];
  CStreamGuard local_18c [11];
  char local_181;
  char local_180 [20];
  cMyTrace local_16c [16];
  cMyTrace local_15c [16];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  char local_49;
  undefined4 local_48;
  ushort local_42;
  int local_40;
  stCeraShopIPGRequest_t *local_3c;
  int local_38;
  CEquipItem *local_34;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar26 = 0;
  MVar2 = param_2[0x36];
  uVar8 = CUser::get_acc_id(param_1);
  uVar9 = NumberToString(uVar8,0);
  cMyTrace::cMyTrace(local_16c,
                     "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                     ,0x92,0);
  cMyTrace::operator()
            (local_16c,"NEXON BILLING : ProcessBuyRequest(m_id(%s),count(%d))",uVar9,
             (uint)(byte)MVar2);
  puVar16 = local_2ac;
  for (iVar22 = 0x24; iVar22 != 0; iVar22 = iVar22 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + (uint)bVar26 * -2 + 1;
  }
  local_88 = 0;
  local_84 = 0;
  iVar22 = G_CDataManager();
  local_80 = CDataManager::FindGoods(iVar22);
  if (local_80 == 0) {
    ProcessError(this,param_1,0x15,0,*(uint *)(param_2 + 0x39),1,1,(char)param_2[0xf]);
  }
  else {
    cVar5 = CEventMgr::IsChildrensDayEventing();
    if (cVar5 != '\0') {
      CUser::ClearChildrensDayEvent(param_1);
    }
    ppCVar24 = local_33c;
    for (iVar22 = 0x24; iVar22 != 0; iVar22 = iVar22 + -1) {
      *ppCVar24 = (CCeraShopGoods *)0x0;
      ppCVar24 = ppCVar24 + (uint)bVar26 * -2 + 1;
    }
    piVar15 = local_3cc;
    for (iVar22 = 0x24; iVar22 != 0; iVar22 = iVar22 + -1) {
      *piVar15 = 0;
      piVar15 = piVar15 + (uint)bVar26 * -2 + 1;
    }
    for (local_7c = 0; iVar22 = local_7c, local_7c < (int)(uint)(byte)param_2[0x36];
        local_7c = local_7c + 1) {
      iVar10 = G_CDataManager();
      pCVar11 = (CCeraShopGoods *)CDataManager::FindGoods(iVar10);
      local_33c[iVar22] = pCVar11;
      if (local_33c[local_7c] == (CCeraShopGoods *)0x0) {
        local_50 = 0xffffffff;
        ProcessError(this,param_1,0x15,-1,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),local_7c + 1,
                     (uint)(byte)param_2[0x36],(char)param_2[0xf]);
        local_33c[local_7c] = (CCeraShopGoods *)0x0;
        cMyTrace::cMyTrace(local_15c,
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0xc3,0);
        cMyTrace::operator()
                  (local_15c,"[%s][%d]",
                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0xc3);
      }
      else {
        local_54 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
        cVar5 = CUser::IsGameMasterMode(param_1);
        if (cVar5 == '\x01') {
LAB_083208e9:
          iVar10 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
          iVar22 = local_7c;
          if (iVar10 != 1) {
            iVar10 = CCeraShopGoods::GetRelatedItem(local_33c[local_7c]);
            local_3cc[iVar22] = iVar10;
            if (local_3cc[iVar22] == 0) {
              ProcessError(this,param_1,0x11,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                           local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_33c[local_7c] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_12c,
                                 "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x116,0);
              cMyTrace::operator()
                        (local_12c,"[%s][%d]",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x116);
              goto LAB_08320d50;
            }
          }
          iVar22 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
          if (iVar22 == 0x334) goto LAB_08320aba;
          if (iVar22 < 0x335) {
            if (iVar22 < 0xc6) {
              if ((0xc3 < iVar22) || (iVar22 == 0xc2)) goto LAB_08320aba;
              if (iVar22 == 0xc3) {
                CUser::isAffectedPremium(param_1,0x21);
              }
            }
            else if ((iVar22 == 0x2d0) || ((0x2cf < iVar22 && (iVar22 - 0x2e7U < 2))))
            goto LAB_08320aba;
          }
          else if (iVar22 < 0x289833) {
            if ((0x289830 < iVar22) ||
               (((iVar22 == 0x2897c2 || (iVar22 == 0x289806)) || (iVar22 == 0x398)))) {
LAB_08320aba:
              local_49 = '\0';
              pGVar12 = (GameWorld *)G_GameWorld();
              cVar5 = GameWorld::IsPVPChannel(pGVar12);
              if (cVar5 != '\0') {
                local_49 = '\x01';
                pGVar12 = (GameWorld *)G_GameWorld();
                cVar5 = GameWorld::IsPvPSkilTreeChannel(pGVar12);
                if ((cVar5 == '\0') ||
                   (iVar22 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), iVar22 < 10
                   )) {
                  bVar25 = false;
                }
                else {
                  bVar25 = true;
                }
                if (bVar25) {
                  local_49 = '\0';
                }
              }
              if (local_49 != '\0') {
                ProcessError(this,param_1,7,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                             local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_11c,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x16c,0);
                cMyTrace::operator()
                          (local_11c,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x16c);
                goto LAB_08320d50;
              }
            }
          }
          else if ((iVar22 == 0x28beba) || (iVar22 == 0x28d154)) goto LAB_08320aba;
          MVar2 = param_2[local_7c * 0x1cf + 0x38];
          MVar3 = param_2[local_7c * 0x1cf + 0x37];
          uVar6 = CCeraShopGoods::GetExpiryDate(local_33c[local_7c]);
          uVar8 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
          uVar13 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
          cVar5 = _CheckBuyingCondition
                            (this,param_1,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),uVar13,uVar8,
                             uVar6,(uchar)MVar3,(short)(char)MVar2);
          if (cVar5 != '\x01') {
            ProcessError(this,param_1,0x4f,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                         local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_33c[local_7c] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_10c,
                               "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0x185,0);
            cMyTrace::operator()
                      (local_10c,"[%s][%d]",
                       "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0x185);
          }
        }
        else {
          iVar22 = CCeraShopGoods::GetSticker(local_33c[local_7c]);
          if (iVar22 == 99) {
            ProcessError(this,param_1,8,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                         local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_33c[local_7c] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_14c,
                               "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0xde,0);
            cMyTrace::operator()
                      (local_14c,"[%s][%d]",
                       "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0xde);
          }
          else {
            if ((param_2[0xf] == (MSG_BUY_CERASHOP_ITEM)0x1) &&
               (cVar5 = CCeraShopGoods::isGiftDisallowance_(local_33c[local_7c]), cVar5 != '\0')) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if (!bVar25) goto LAB_083208e9;
            ProcessError(this,param_1,8,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                         local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_33c[local_7c] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_13c,
                               "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0xe8,0);
            cMyTrace::operator()
                      (local_13c,"[%s][%d]",
                       "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0xe8);
          }
        }
      }
LAB_08320d50:
    }
    cVar5 = _CheckValidCount(this,local_33c);
    if (cVar5 == '\x01') {
      CUser::resetUsedCera(param_1);
      pcVar14 = local_1b8;
      for (iVar22 = 9; iVar22 != 0; iVar22 = iVar22 + -1) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14 = pcVar14 + ((uint)bVar26 * -2 + 1) * 4;
      }
      pcVar14 = &local_181;
      uVar8 = 0x15;
      bVar25 = ((uint)pcVar14 & 1) != 0;
      if (bVar25) {
        local_181 = '\0';
        pcVar14 = local_180;
        uVar8 = 0x14;
      }
      if (((uint)pcVar14 & 2) != 0) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14 = pcVar14 + 2;
        uVar8 = uVar8 - 2;
      }
      uVar23 = 0;
      do {
        pcVar1 = pcVar14 + uVar23;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar23 = uVar23 + 4;
      } while (uVar23 < (uVar8 & 0xfffffffc));
      pcVar14 = pcVar14 + uVar23;
      if ((uVar8 & 2) != 0) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14 = pcVar14 + 2;
      }
      if (!bVar25) {
        *pcVar14 = '\0';
      }
      local_78 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_74 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      local_70 = (int)local_74 >> 0x1f;
      local_6c = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
      local_68 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      for (local_7c = 0; local_7c < (int)(uint)(byte)param_2[0x36]; local_7c = local_7c + 1) {
        if (local_33c[local_7c] != (CCeraShopGoods *)0x0) {
          iVar22 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
          if (iVar22 == 0) {
            local_38 = 0;
            piVar15 = (int *)CCeraShopGoods::GetRelatedItem(local_33c[local_7c]);
            cVar5 = (**(code **)(*piVar15 + 0x10))(piVar15);
            if (cVar5 == '\x01') {
              local_34 = (CEquipItem *)CCeraShopGoods::GetRelatedItem(local_33c[local_7c]);
              local_30 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                         CEquipItem::getAvatarTypeSelect(local_34);
              cVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::empty
                                ();
              if ((cVar5 == '\0') &&
                 (MVar2 = param_2[local_7c * 0x1cf + 0x38],
                 cVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                         size(local_30), (char)MVar2 < cVar5)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              if (bVar25) {
                ProcessError(this,param_1,0x17,local_38,*(uint *)(param_2 + local_7c * 0x1cf + 0x39)
                             ,local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_ec,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x253,0);
                cMyTrace::operator()
                          (local_ec,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x253);
              }
              else {
                if ((byte)param_2[local_7c * 0x1cf + 0x37] < 100) {
                  iVar22 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                           operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_60 = *(uint *)(iVar22 + 0xc);
                  iVar22 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                           operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_58 = *(uint *)(iVar22 + 4);
                  iVar22 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                           operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_5c = *(uint *)(iVar22 + 8);
                  puVar16 = (undefined4 *)
                            std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                            operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_84 = *puVar16;
                  goto LAB_083212dc;
                }
                ProcessError(this,param_1,0x17,local_38,*(uint *)(param_2 + local_7c * 0x1cf + 0x39)
                             ,local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_dc,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x25e,0);
                cMyTrace::operator()
                          (local_dc,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x25e);
              }
            }
            else {
              ProcessError(this,param_1,0x17,local_38,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                           local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_33c[local_7c] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_fc,
                                 "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x247,0);
              cMyTrace::operator()
                        (local_fc,"[%s][%d]",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x247);
            }
          }
          else {
            local_60 = CCeraShopGoods::GetCeraPrice(local_33c[local_7c]);
            local_58 = CCeraShopGoods::GetGoldPrice(local_33c[local_7c]);
            local_5c = CCeraShopGoods::GetWinPoint(local_33c[local_7c]);
LAB_083212dc:
            this_00 = (CUserPremium *)CUser::GetPremiumInfo(param_1);
            local_42 = CUserPremium::getCeraShopDiscountRate(this_00);
            if (local_42 != 0) {
              local_60 = local_60 - (local_42 * local_60) / 100;
              local_58 = local_58 - (int)(local_42 * local_58) / 100;
              local_5c = local_5c - (local_42 * local_5c) / 100;
            }
            local_40 = 0;
            uVar8 = CUser::GetCera(param_1);
            if (uVar8 < local_60) {
              local_40 = 0xb;
            }
            else {
              pCVar18 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
              iVar22 = CInventory::get_money(pCVar18);
              if (iVar22 < (int)local_58) {
                local_40 = 10;
              }
              else {
                uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
                if (uVar8 < local_5c) {
                  local_40 = 0xc;
                }
              }
            }
            iVar22 = (int)local_58 >> 0x1f;
            if (((int)local_70 <= iVar22) && (((int)local_70 < iVar22 || (local_74 < local_58)))) {
              local_40 = 10;
            }
            if (((int)local_68 < 1) && ((0x7fffffff < local_68 || (local_6c < local_5c)))) {
              local_40 = 0xc;
            }
            local_cc = local_74 - local_58;
            local_c8 = (local_70 - iVar22) - (uint)(local_74 < local_58);
            local_c4 = 0;
            local_c0 = 0;
            puVar17 = (uint *)std::max<long_long>((longlong *)&local_c4,(longlong *)&local_cc);
            local_70 = puVar17[1];
            local_74 = *puVar17;
            local_bc = local_6c - local_5c;
            local_b8 = local_68 - (local_6c < local_5c);
            local_b4 = 0;
            local_b0 = 0;
            puVar17 = (uint *)std::max<long_long>((longlong *)&local_b4,(longlong *)&local_bc);
            local_6c = *puVar17;
            local_68 = puVar17[1];
            if (local_40 == 0) {
              iVar22 = CCeraShopGoods::GetFeaturedIdx(local_33c[local_7c]);
              cVar5 = CUser::IsRestrictedGoods(param_1,iVar22);
              if (cVar5 == '\0') {
                pSVar21 = (Stream *)
                          StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x37b);
                CStreamGuard::CStreamGuard(local_18c,pSVar21,false);
                this_01 = (CStreamGuard *)CStreamGuard::operator->(local_18c);
                    /* try { // try from 083217d6 to 08321ccf has its CatchHandler @ 08321cd2 */
                local_3c = CStreamGuard::GetInBuffer<stCeraShopIPGRequest_t>(this_01);
                *(undefined4 *)local_3c = *(undefined4 *)(param_2 + local_7c * 0x1cf + 0x39);
                uVar9 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
                *(undefined4 *)(local_3c + 4) = uVar9;
                uVar7 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
                *(undefined2 *)(local_3c + 0xc) = uVar7;
                *(uint *)(local_3c + 0x10) = local_60;
                *(uint *)(local_3c + 0x18) = local_58;
                *(uint *)(local_3c + 0x14) = local_5c;
                uVar9 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
                *(undefined4 *)(local_3c + 8) = uVar9;
                local_3c[0x2c] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0x37);
                local_3c[0x2d] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0x38);
                *(undefined4 *)(local_3c + 0x1c) = local_84;
                uVar9 = CCeraShopGoods::GetFeaturedIdx(local_33c[local_7c]);
                *(undefined4 *)(local_3c + 0x28) = uVar9;
                *(uint *)(local_3c + 0x20) = (uint)(byte)param_2[0x36];
                *(int *)(local_3c + 0x24) = local_7c + 1;
                *(undefined4 *)(local_3c + 0x30) = local_78;
                local_3c[0x34] = *(stCeraShopIPGRequest_t *)(param_2 + 0xf);
                *(undefined4 *)(local_3c + 0x40) = *(undefined4 *)(param_2 + 0x2e);
                *(undefined4 *)(local_3c + 0x38) = *(undefined4 *)(param_2 + 0x32);
                local_3c[0x44] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0x3d);
                for (local_24 = 0; local_24 < (int)(uint)(byte)param_2[local_7c * 0x1cf + 0x3d];
                    local_24 = local_24 + 1) {
                  *(undefined4 *)(local_3c + (local_24 + 8) * 8 + 8) =
                       *(undefined4 *)(param_2 + local_24 * 5 + local_7c * 0x1cf + 0x3e);
                  local_3c[(local_24 + 8) * 8 + 0xc] =
                       *(stCeraShopIPGRequest_t *)(param_2 + local_24 * 5 + local_7c * 0x1cf + 0x42)
                  ;
                }
                local_3c[0x160] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0xed);
                for (local_20 = 0; local_20 < (int)(uint)(byte)param_2[local_7c * 0x1cf + 0xed];
                    local_20 = local_20 + 1) {
                  *(undefined4 *)(local_3c + (local_20 + 0x2c) * 8 + 4) =
                       *(undefined4 *)(param_2 + (local_20 + 0x16) * 8 + local_7c * 0x1cf + 0x3e);
                  *(undefined2 *)(local_3c + (local_20 + 0x2c) * 8 + 8) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_7c * 0x1cf + 0x42);
                  *(undefined2 *)(local_3c + (local_20 + 0x2c) * 8 + 10) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_7c * 0x1cf + 0x44);
                }
                OS_API::snprintf(local_1b8,0x24,"%d",local_60);
                OS_API::snprintf(local_194,8,"%d",*(undefined4 *)(param_2 + local_7c * 0x1cf + 0x39)
                                );
                iVar22 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
                if (iVar22 == 1) {
                  uVar9 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
                  OS_API::snprintf(local_21c,0x62,&DAT_08c25d6b,uVar9);
                }
                else {
                  cVar5 = CItem::is_stackable((CItem *)local_3cc[local_7c]);
                  if ((cVar5 == '\0') ||
                     (iVar22 = CCeraShopGoods::GetStackCount(local_33c[local_7c]), iVar22 < 2)) {
                    bVar25 = false;
                  }
                  else {
                    bVar25 = true;
                  }
                  if (bVar25) {
                    uVar9 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
                    uVar19 = CItem::GetItemName((CItem *)local_3cc[local_7c]);
                    OS_API::snprintf(local_21c,0x62,&DAT_08c25d63,uVar19,uVar9);
                  }
                  else {
                    pcVar14 = (char *)CItem::GetItemName((CItem *)local_3cc[local_7c]);
                    strcpy(local_21c,pcVar14);
                  }
                }
                if (local_60 == 0) {
                  pcVar4 = *(code **)(*GlobalData::s_pIPGHelper + 0x18);
                  uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar19 = CGenUniqueNo::GenUniqueNo(&local_181);
                  (*pcVar4)(GlobalData::s_pIPGHelper,param_1,local_194,local_1b8,uVar19,local_21c,
                            uVar9,local_18c);
                }
                else {
                  pcVar4 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
                  uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar19 = CGenUniqueNo::GenUniqueNo(&local_181);
                  (*pcVar4)(GlobalData::s_pIPGHelper,param_1,local_194,local_1b8,uVar19,local_21c,
                            uVar9,local_18c);
                }
                CStreamGuard::~CStreamGuard(local_18c);
              }
              else {
                local_28 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
                ProcessError(this,param_1,0x14,local_28,*(uint *)(param_2 + local_7c * 0x1cf + 0x39)
                             ,local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_98,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x2ed,0);
                cMyTrace::operator()
                          (local_98,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x2ed);
              }
            }
            else {
              uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              LogManager::logFormat
                        (1,"CeraShop.cpp",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2d6,
                         "IPG ERROR [Dispatcher_BuyCeraShopItem::dispatch_sig] UserID[%s] ACera[%d] AGold[%d] AWP[%d]"
                         ,uVar9,local_60,local_58,local_5c);
              uVar9 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
              pCVar18 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
              uVar19 = CInventory::get_money(pCVar18);
              uVar20 = CUser::GetCera(param_1);
              LogManager::logFormat
                        (1,"CeraShop.cpp",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2d7," / UCera[%d] UGold[%d] UWP[%d]\n",uVar20,uVar19,uVar9);
              LogManager::logFormat
                        (1,"CeraShop.cpp",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2d9,"Error Goods No : %d",
                         *(undefined4 *)(param_2 + local_7c * 0x1cf + 0x39));
              local_2c = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
              ProcessError(this,param_1,(ushort)local_40,local_2c,
                           *(uint *)(param_2 + local_7c * 0x1cf + 0x39),local_7c + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_33c[local_7c] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_a8,
                                 "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x2e1,0);
              cMyTrace::operator()
                        (local_a8,"[%s][%d]",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2e1);
            }
          }
        }
      }
    }
    else {
      local_48 = 0xffffffff;
      ProcessError(this,param_1,1,-1,*(uint *)(param_2 + 0x39),1,1,(char)param_2[0xf]);
    }
  }
  return 1;
}
```
