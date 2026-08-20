# ProcessIPG_ResultOutput

`_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream`

`ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08178676` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08178676  _ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream
#           ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
# range [0x08178676, 0x08179919]
08178676 +0x0000:  push   %ebp
08178677 +0x0001:  mov    %esp,%ebp
08178679 +0x0003:  push   %edi
0817867a +0x0004:  push   %esi
0817867b +0x0005:  push   %ebx
0817867c +0x0006:  sub    $0x19c,%esp
08178682 +0x000c:  mov    $&_ZGVZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,%eax
08178687 +0x0011:  movzbl (%eax),%eax
0817868a +0x0014:  test   %al,%al
0817868c +0x0016:  jne    081786df <+0x69>
0817868e +0x0018:  movl   $&_ZGVZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
08178695 +0x001f:  call   08725330 <__cxa_guard_acquire>
0817869a +0x0024:  test   %eax,%eax
0817869c +0x0026:  setne  %al
0817869f +0x0029:  test   %al,%al
081786a1 +0x002b:  je     081786df <+0x69>
081786a3 +0x002d:  mov    0x8(%ebp),%eax
081786a6 +0x0030:  mov    %eax,0x4(%esp)
081786aa +0x0034:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
081786b1 +0x003b:  call   0817a2ba <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x338>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x338
081786b6 +0x0040:  movl   $&_ZGVZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
081786bd +0x0047:  call   08725250 <__cxa_guard_release>
081786c2 +0x004c:  mov    $&_ZN15Arad_IPGProcessD1Ev,%eax
081786c7 +0x0051:  movl   $&__dso_handle,0x8(%esp)
081786cf +0x0059:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,0x4(%esp)
081786d7 +0x0061:  mov    %eax,(%esp)
081786da +0x0064:  call   0807ddd0 <_init+0x6c8>
081786df +0x0069:  mov    $&_ZGVZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,%eax
081786e4 +0x006e:  movzbl (%eax),%eax
081786e7 +0x0071:  test   %al,%al
081786e9 +0x0073:  jne    0817873c <+0xc6>
081786eb +0x0075:  movl   $&_ZGVZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,(%esp)
081786f2 +0x007c:  call   08725330 <__cxa_guard_acquire>
081786f7 +0x0081:  test   %eax,%eax
081786f9 +0x0083:  setne  %al
081786fc +0x0086:  test   %al,%al
081786fe +0x0088:  je     0817873c <+0xc6>
08178700 +0x008a:  mov    0x8(%ebp),%eax
08178703 +0x008d:  mov    %eax,0x4(%esp)
08178707 +0x0091:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,(%esp)
0817870e +0x0098:  call   0817a2ce <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x34c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x34c
08178713 +0x009d:  movl   $&_ZGVZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,(%esp)
0817871a +0x00a4:  call   08725250 <__cxa_guard_release>
0817871f +0x00a9:  mov    $&_ZN19Arad_MileageProcessD1Ev,%eax
08178724 +0x00ae:  movl   $&__dso_handle,0x8(%esp)
0817872c +0x00b6:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,0x4(%esp)
08178734 +0x00be:  mov    %eax,(%esp)
08178737 +0x00c1:  call   0807ddd0 <_init+0x6c8>
0817873c +0x00c6:  mov    0x18(%ebp),%eax
0817873f +0x00c9:  mov    %eax,(%esp)
08178742 +0x00cc:  call   0817a522 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x5a0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x5a0
08178747 +0x00d1:  mov    %eax,-0x78(%ebp)
0817874a +0x00d4:  mov    -0x78(%ebp),%eax
0817874d +0x00d7:  mov    0x4(%eax),%eax
08178750 +0x00da:  mov    %eax,-0x74(%ebp)
08178753 +0x00dd:  mov    -0x78(%ebp),%eax
08178756 +0x00e0:  mov    0x24(%eax),%eax
08178759 +0x00e3:  mov    %eax,-0x70(%ebp)
0817875c +0x00e6:  mov    -0x78(%ebp),%eax
0817875f +0x00e9:  mov    0x20(%eax),%eax
08178762 +0x00ec:  mov    %eax,-0x6c(%ebp)
08178765 +0x00ef:  mov    -0x78(%ebp),%eax
08178768 +0x00f2:  mov    0x28(%eax),%eax
0817876b +0x00f5:  mov    %eax,-0x68(%ebp)
0817876e +0x00f8:  mov    -0x78(%ebp),%eax
08178771 +0x00fb:  mov    0x1c(%eax),%eax
08178774 +0x00fe:  mov    %eax,-0x64(%ebp)
08178777 +0x0101:  mov    -0x78(%ebp),%eax
0817877a +0x0104:  mov    (%eax),%eax
0817877c +0x0106:  mov    %eax,-0x60(%ebp)
0817877f +0x0109:  mov    -0x78(%ebp),%eax
08178782 +0x010c:  mov    0x8(%eax),%eax
08178785 +0x010f:  mov    %eax,-0x5c(%ebp)
08178788 +0x0112:  mov    -0x78(%ebp),%eax
0817878b +0x0115:  movzwl 0xc(%eax),%eax
0817878f +0x0119:  mov    %ax,-0x58(%ebp)
08178793 +0x011d:  mov    -0x78(%ebp),%eax
08178796 +0x0120:  movzbl 0x2c(%eax),%eax
0817879a +0x0124:  mov    %al,-0x56(%ebp)
0817879d +0x0127:  mov    -0x78(%ebp),%eax
081787a0 +0x012a:  movzbl 0x2d(%eax),%eax
081787a4 +0x012e:  mov    %al,-0x55(%ebp)
081787a7 +0x0131:  mov    -0x78(%ebp),%eax
081787aa +0x0134:  mov    0x10(%eax),%eax
081787ad +0x0137:  mov    %eax,-0x54(%ebp)
081787b0 +0x013a:  mov    -0x78(%ebp),%eax
081787b3 +0x013d:  mov    0x14(%eax),%eax
081787b6 +0x0140:  mov    %eax,-0x50(%ebp)
081787b9 +0x0143:  mov    -0x78(%ebp),%eax
081787bc +0x0146:  mov    0x18(%eax),%eax
081787bf +0x0149:  mov    %eax,-0x4c(%ebp)
081787c2 +0x014c:  mov    -0x78(%ebp),%eax
081787c5 +0x014f:  mov    0x30(%eax),%eax
081787c8 +0x0152:  mov    %eax,-0x48(%ebp)
081787cb +0x0155:  lea    -0xbc(%ebp),%eax
081787d1 +0x015b:  mov    %eax,(%esp)
081787d4 +0x015e:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
081787d9 +0x0163:  mov    -0x78(%ebp),%eax
081787dc +0x0166:  movzbl 0x34(%eax),%eax
081787e0 +0x016a:  mov    %al,-0x41(%ebp)
081787e3 +0x016d:  mov    -0x78(%ebp),%eax
081787e6 +0x0170:  mov    0x38(%eax),%eax
081787e9 +0x0173:  mov    %eax,-0x40(%ebp)
081787ec +0x0176:  mov    -0x78(%ebp),%eax
081787ef +0x0179:  movzwl 0x3c(%eax),%eax
081787f3 +0x017d:  mov    %ax,-0x3a(%ebp)
081787f7 +0x0181:  mov    -0x78(%ebp),%eax
081787fa +0x0184:  mov    0x40(%eax),%eax
081787fd +0x0187:  mov    %eax,-0x38(%ebp)
08178800 +0x018a:  lea    -0xd4(%ebp),%eax
08178806 +0x0190:  mov    %eax,(%esp)
08178809 +0x0193:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
0817880e +0x0198:  movl   $0x0,-0x30(%ebp)
08178815 +0x019f:  jmp    08178882 <+0x20c>
08178817 +0x01a1:  mov    -0x30(%ebp),%eax
0817881a +0x01a4:  add    $0x8,%eax
0817881d +0x01a7:  shl    $0x3,%eax
08178820 +0x01aa:  add    -0x78(%ebp),%eax
08178823 +0x01ad:  lea    0xc(%eax),%ecx
08178826 +0x01b0:  mov    -0x30(%ebp),%eax
08178829 +0x01b3:  add    $0x8,%eax
0817882c +0x01b6:  shl    $0x3,%eax
0817882f +0x01b9:  add    -0x78(%ebp),%eax
08178832 +0x01bc:  lea    0x8(%eax),%edx
08178835 +0x01bf:  lea    -0xa8(%ebp),%eax
0817883b +0x01c5:  mov    %ecx,0x8(%esp)
0817883f +0x01c9:  mov    %edx,0x4(%esp)
08178843 +0x01cd:  mov    %eax,(%esp)
08178846 +0x01d0:  call   0817a575 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x5f3>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x5f3
0817884b +0x01d5:  sub    $0x4,%esp
0817884e +0x01d8:  lea    -0xa8(%ebp),%eax
08178854 +0x01de:  mov    %eax,0x4(%esp)
08178858 +0x01e2:  lea    -0xb0(%ebp),%eax
0817885e +0x01e8:  mov    %eax,(%esp)
08178861 +0x01eb:  call   0817a5b4 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x632>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x632
08178866 +0x01f0:  lea    -0xb0(%ebp),%eax
0817886c +0x01f6:  mov    %eax,0x4(%esp)
08178870 +0x01fa:  lea    -0xd4(%ebp),%eax
08178876 +0x0200:  mov    %eax,(%esp)
08178879 +0x0203:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0817887e +0x0208:  addl   $0x1,-0x30(%ebp)
08178882 +0x020c:  mov    -0x78(%ebp),%eax
08178885 +0x020f:  movzbl 0x44(%eax),%eax
08178889 +0x0213:  movzbl %al,%eax
0817888c +0x0216:  cmp    -0x30(%ebp),%eax
0817888f +0x0219:  setg   %al
08178892 +0x021c:  test   %al,%al
08178894 +0x021e:  jne    08178817 <+0x1a1>
08178896 +0x0220:  movl   $0x0,-0x2c(%ebp)
0817889d +0x0227:  jmp    081788c7 <+0x251>
0817889f +0x0229:  mov    -0x2c(%ebp),%eax
081788a2 +0x022c:  add    $0x2c,%eax
081788a5 +0x022f:  shl    $0x3,%eax
081788a8 +0x0232:  add    -0x78(%ebp),%eax
081788ab +0x0235:  add    $0x4,%eax
081788ae +0x0238:  mov    %eax,0x4(%esp)
081788b2 +0x023c:  lea    -0xd4(%ebp),%eax
081788b8 +0x0242:  add    $0xc,%eax
081788bb +0x0245:  mov    %eax,(%esp)
081788be +0x0248:  call   0817a5ea <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x668>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x668
081788c3 +0x024d:  addl   $0x1,-0x2c(%ebp)
081788c7 +0x0251:  mov    -0x78(%ebp),%eax
081788ca +0x0254:  movzbl 0x160(%eax),%eax
081788d1 +0x025b:  movzbl %al,%eax
081788d4 +0x025e:  cmp    -0x2c(%ebp),%eax
081788d7 +0x0261:  setg   %al
081788da +0x0264:  test   %al,%al
081788dc +0x0266:  jne    0817889f <+0x229>
081788de +0x0268:  movl   $0x0,-0xd8(%ebp)
081788e8 +0x0272:  lea    -0xd8(%ebp),%eax
081788ee +0x0278:  mov    %eax,0x4(%esp)
081788f2 +0x027c:  mov    0x18(%ebp),%eax
081788f5 +0x027f:  mov    %eax,(%esp)
081788f8 +0x0282:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
081788fd +0x0287:  mov    0x14(%ebp),%eax
08178900 +0x028a:  add    $0x173,%eax
08178905 +0x028f:  mov    %eax,(%esp)
08178908 +0x0292:  call   0807e6f0 <_init+0xfe8>
0817890d +0x0297:  mov    %eax,-0xdc(%ebp)
08178913 +0x029d:  mov    -0xdc(%ebp),%eax
08178919 +0x02a3:  test   %eax,%eax
0817891b +0x02a5:  jne    08178932 <+0x2bc>
0817891d +0x02a7:  cmpl   $0x0,0xc(%ebp)
08178921 +0x02ab:  je     08178932 <+0x2bc>
08178923 +0x02ad:  mov    0xc(%ebp),%eax
08178926 +0x02b0:  mov    %eax,(%esp)
08178929 +0x02b3:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0817892e +0x02b8:  test   %eax,%eax
08178930 +0x02ba:  jne    08178939 <+0x2c3>
08178932 +0x02bc:  mov    $0x1,%eax
08178937 +0x02c1:  jmp    0817893e <+0x2c8>
08178939 +0x02c3:  mov    $0x0,%eax
0817893e +0x02c8:  test   %al,%al
08178940 +0x02ca:  je     08178a63 <+0x3ed>
08178946 +0x02d0:  cmpl   $0x0,0xc(%ebp)
0817894a +0x02d4:  je     0817895b <+0x2e5>
0817894c +0x02d6:  mov    0xc(%ebp),%eax
0817894f +0x02d9:  mov    %eax,(%esp)
08178952 +0x02dc:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08178957 +0x02e1:  test   %eax,%eax
08178959 +0x02e3:  jne    08178962 <+0x2ec>
0817895b +0x02e5:  mov    $0x1,%eax
08178960 +0x02ea:  jmp    08178967 <+0x2f1>
08178962 +0x02ec:  mov    $0x0,%eax
08178967 +0x02f1:  test   %al,%al
08178969 +0x02f3:  je     08178a0d <+0x397>
0817896f +0x02f9:  mov    0x14(%ebp),%eax
08178972 +0x02fc:  add    $0x177,%eax
08178977 +0x0301:  mov    %eax,-0x150(%ebp)
0817897d +0x0307:  mov    -0xdc(%ebp),%eax
08178983 +0x030d:  mov    %eax,-0x14c(%ebp)
08178989 +0x0313:  mov    0x14(%ebp),%eax
0817898c +0x0316:  add    $0x69,%eax
0817898f +0x0319:  mov    %eax,(%esp)
08178992 +0x031c:  call   0807e6f0 <_init+0xfe8>
08178997 +0x0321:  mov    %eax,%esi
08178999 +0x0323:  mov    0x14(%ebp),%eax
0817899c +0x0326:  add    $0x28,%eax
0817899f +0x0329:  mov    %eax,(%esp)
081789a2 +0x032c:  call   0807e6f0 <_init+0xfe8>
081789a7 +0x0331:  mov    %eax,%ebx
081789a9 +0x0333:  mov    0x14(%ebp),%eax
081789ac +0x0336:  add    $0x3c,%eax
081789af +0x0339:  mov    %eax,%edi
081789b1 +0x033b:  movl   $0x5,0xc(%esp)
081789b9 +0x0343:  movl   $0x59d,0x8(%esp)
081789c1 +0x034b:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
081789c9 +0x0353:  lea    -0xa0(%ebp),%eax
081789cf +0x0359:  mov    %eax,(%esp)
081789d2 +0x035c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081789d7 +0x0361:  mov    -0x150(%ebp),%edx
081789dd +0x0367:  mov    %edx,0x18(%esp)
081789e1 +0x036b:  mov    -0x14c(%ebp),%eax
081789e7 +0x0371:  mov    %eax,0x14(%esp)
081789eb +0x0375:  mov    %esi,0x10(%esp)
081789ef +0x0379:  mov    %ebx,0xc(%esp)
081789f3 +0x037d:  mov    %edi,0x8(%esp)
081789f7 +0x0381:  movl   $"There's abnormal transaction that the client doesn't exist, client would be %s(m_id: %d) and the Goodis is %d, ret_code = %d ret_msg = %s",0x4(%esp)
081789ff +0x0389:  lea    -0xa0(%ebp),%eax
08178a05 +0x038f:  mov    %eax,(%esp)
08178a08 +0x0392:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08178a0d +0x0397:  movsbl -0x41(%ebp),%edx
08178a11 +0x039b:  mov    0x8(%ebp),%eax
08178a14 +0x039e:  mov    %edx,0x24(%esp)
08178a18 +0x03a2:  mov    -0x6c(%ebp),%edx
08178a1b +0x03a5:  mov    %edx,0x20(%esp)
08178a1f +0x03a9:  mov    -0x70(%ebp),%edx
08178a22 +0x03ac:  mov    %edx,0x1c(%esp)
08178a26 +0x03b0:  mov    -0x60(%ebp),%edx
08178a29 +0x03b3:  mov    %edx,0x18(%esp)
08178a2d +0x03b7:  mov    -0x74(%ebp),%edx
08178a30 +0x03ba:  mov    %edx,0x14(%esp)
08178a34 +0x03be:  movl   $0x19,0x10(%esp)
08178a3c +0x03c6:  mov    0x14(%ebp),%edx
08178a3f +0x03c9:  mov    %edx,0xc(%esp)
08178a43 +0x03cd:  mov    0x10(%ebp),%edx
08178a46 +0x03d0:  mov    %edx,0x8(%esp)
08178a4a +0x03d4:  mov    0xc(%ebp),%edx
08178a4d +0x03d7:  mov    %edx,0x4(%esp)
08178a51 +0x03db:  mov    %eax,(%esp)
08178a54 +0x03de:  call   083237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>  ; WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)
08178a59 +0x03e3:  mov    $0x0,%ebx
08178a5e +0x03e8:  jmp    081798d7 <+0x1261>
08178a63 +0x03ed:  movl   $0x0,-0xdc(%ebp)
08178a6d +0x03f7:  movl   $0xffffffff,-0x34(%ebp)
08178a74 +0x03fe:  movl   $0xffffffff,-0xe0(%ebp)
08178a7e +0x0408:  cmpl   $0xb,-0x74(%ebp)
08178a82 +0x040c:  ja     08178eb4 <+0x83e>
08178a88 +0x0412:  mov    -0x74(%ebp),%eax
08178a8b +0x0415:  shl    $0x2,%eax
08178a8e +0x0418:  mov    &data#fbff0470(.rodata)(%eax),%eax
08178a94 +0x041e:  jmp    *%eax
08178a96 +0x0420:  movsbl -0x41(%ebp),%esi
08178a9a +0x0424:  mov    0x10(%ebp),%eax
08178a9d +0x0427:  add    $0x7d,%eax
08178aa0 +0x042a:  mov    %eax,%ebx
08178aa2 +0x042c:  movsbl -0x55(%ebp),%ecx
08178aa6 +0x0430:  movsbl -0x56(%ebp),%edx
08178aaa +0x0434:  mov    -0x60(%ebp),%eax
08178aad +0x0437:  mov    %esi,0x2c(%esp)
08178ab1 +0x043b:  mov    -0x40(%ebp),%esi
08178ab4 +0x043e:  mov    %esi,0x28(%esp)
08178ab8 +0x0442:  mov    -0x38(%ebp),%esi
08178abb +0x0445:  mov    %esi,0x24(%esp)
08178abf +0x0449:  lea    -0xdc(%ebp),%esi
08178ac5 +0x044f:  mov    %esi,0x20(%esp)
08178ac9 +0x0453:  mov    %ebx,0x1c(%esp)
08178acd +0x0457:  mov    %ecx,0x18(%esp)
08178ad1 +0x045b:  mov    %edx,0x14(%esp)
08178ad5 +0x045f:  mov    -0x64(%ebp),%edx
08178ad8 +0x0462:  mov    %edx,0x10(%esp)
08178adc +0x0466:  mov    %eax,0xc(%esp)
08178ae0 +0x046a:  mov    -0x5c(%ebp),%eax
08178ae3 +0x046d:  mov    %eax,0x8(%esp)
08178ae7 +0x0471:  mov    0xc(%ebp),%eax
08178aea +0x0474:  mov    %eax,0x4(%esp)
08178aee +0x0478:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
08178af5 +0x047f:  call   0819c2b4 <_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic>  ; Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*, int&, unsigned int, int, char)
08178afa +0x0484:  jmp    08178ee7 <+0x871>
08178aff +0x0489:  movsbl -0x41(%ebp),%edx
08178b03 +0x048d:  movzwl -0x58(%ebp),%eax
08178b07 +0x0491:  mov    %edx,0x14(%esp)
08178b0b +0x0495:  mov    -0x40(%ebp),%edx
08178b0e +0x0498:  mov    %edx,0x10(%esp)
08178b12 +0x049c:  mov    -0x38(%ebp),%edx
08178b15 +0x049f:  mov    %edx,0xc(%esp)
08178b19 +0x04a3:  mov    %eax,0x8(%esp)
08178b1d +0x04a7:  mov    0xc(%ebp),%eax
08178b20 +0x04aa:  mov    %eax,0x4(%esp)
08178b24 +0x04ae:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
08178b2b +0x04b5:  call   0819c434 <_ZN15Arad_IPGProcess16CashShopModeCoinEP5CUsertjic>  ; Arad_IPGProcess::CashShopModeCoin(CUser*, unsigned short, unsigned int, int, char)
08178b30 +0x04ba:  jmp    08178ee7 <+0x871>
08178b35 +0x04bf:  movsbl -0x41(%ebp),%edx
08178b39 +0x04c3:  movzwl -0x58(%ebp),%eax
08178b3d +0x04c7:  mov    %edx,0x2c(%esp)
08178b41 +0x04cb:  mov    -0x40(%ebp),%edx
08178b44 +0x04ce:  mov    %edx,0x28(%esp)
08178b48 +0x04d2:  mov    -0x38(%ebp),%edx
08178b4b +0x04d5:  mov    %edx,0x24(%esp)
08178b4f +0x04d9:  lea    -0xdc(%ebp),%edx
08178b55 +0x04df:  mov    %edx,0x20(%esp)
08178b59 +0x04e3:  lea    -0xd4(%ebp),%edx
08178b5f +0x04e9:  mov    %edx,0x1c(%esp)
08178b63 +0x04ed:  lea    -0xbc(%ebp),%edx
08178b69 +0x04f3:  mov    %edx,0x18(%esp)
08178b6d +0x04f7:  mov    -0x48(%ebp),%edx
08178b70 +0x04fa:  mov    %edx,0x14(%esp)
08178b74 +0x04fe:  mov    -0x68(%ebp),%edx
08178b77 +0x0501:  mov    %edx,0x10(%esp)
08178b7b +0x0505:  mov    %eax,0xc(%esp)
08178b7f +0x0509:  mov    -0x5c(%ebp),%eax
08178b82 +0x050c:  mov    %eax,0x8(%esp)
08178b86 +0x0510:  mov    0xc(%ebp),%eax
08178b89 +0x0513:  mov    %eax,0x4(%esp)
08178b8d +0x0517:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
08178b94 +0x051e:  call   0819c4a0 <_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic>  ; Arad_IPGProcess::CashShopModeItem(CUser*, unsigned long, unsigned short, int, long, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, unsigned int, int, char)
08178b99 +0x0523:  jmp    08178ee7 <+0x871>
08178b9e +0x0528:  movsbl -0x41(%ebp),%edx
08178ba2 +0x052c:  movzwl -0x58(%ebp),%eax
08178ba6 +0x0530:  mov    %edx,0x20(%esp)
08178baa +0x0534:  mov    -0x40(%ebp),%edx
08178bad +0x0537:  mov    %edx,0x1c(%esp)
08178bb1 +0x053b:  mov    -0x38(%ebp),%edx
08178bb4 +0x053e:  mov    %edx,0x18(%esp)
08178bb8 +0x0542:  lea    -0xdc(%ebp),%edx
08178bbe +0x0548:  mov    %edx,0x14(%esp)
08178bc2 +0x054c:  lea    -0xe0(%ebp),%edx
08178bc8 +0x0552:  mov    %edx,0x10(%esp)
08178bcc +0x0556:  mov    %eax,0xc(%esp)
08178bd0 +0x055a:  mov    -0x5c(%ebp),%eax
08178bd3 +0x055d:  mov    %eax,0x8(%esp)
08178bd7 +0x0561:  mov    0xc(%ebp),%eax
08178bda +0x0564:  mov    %eax,0x4(%esp)
08178bde +0x0568:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE10IPGProcess,(%esp)
08178be5 +0x056f:  call   0819c670 <_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic>  ; Arad_IPGProcess::CashShopModeCreature(CUser*, unsigned long, unsigned short, int&, int&, unsigned int, int, char)
08178bea +0x0574:  jmp    08178ee7 <+0x871>
08178bef +0x0579:  movl   $0x0,-0x28(%ebp)
08178bf6 +0x0580:  mov    0x10(%ebp),%eax
08178bf9 +0x0583:  add    $0x7d,%eax
08178bfc +0x0586:  mov    %eax,-0x15c(%ebp)
08178c02 +0x058c:  mov    -0xd8(%ebp),%edi
08178c08 +0x0592:  movsbl -0x55(%ebp),%esi
08178c0c +0x0596:  movsbl -0x56(%ebp),%ebx
08178c10 +0x059a:  movzwl -0x58(%ebp),%ecx
08178c14 +0x059e:  mov    -0x60(%ebp),%edx
08178c17 +0x05a1:  lea    -0xd4(%ebp),%eax
08178c1d +0x05a7:  mov    %eax,-0x154(%ebp)
08178c23 +0x05ad:  mov    -0x154(%ebp),%eax
08178c29 +0x05b3:  mov    %eax,0x38(%esp)
08178c2d +0x05b7:  mov    -0x15c(%ebp),%eax
08178c33 +0x05bd:  mov    %eax,0x34(%esp)
08178c37 +0x05c1:  mov    -0x70(%ebp),%eax
08178c3a +0x05c4:  mov    %eax,0x30(%esp)
08178c3e +0x05c8:  mov    -0x6c(%ebp),%eax
08178c41 +0x05cb:  mov    %eax,0x2c(%esp)
08178c45 +0x05cf:  mov    %edi,0x28(%esp)
08178c49 +0x05d3:  mov    %esi,0x24(%esp)
08178c4d +0x05d7:  mov    %ebx,0x20(%esp)
08178c51 +0x05db:  mov    -0x64(%ebp),%eax
08178c54 +0x05de:  mov    %eax,0x1c(%esp)
08178c58 +0x05e2:  mov    -0x48(%ebp),%eax
08178c5b +0x05e5:  mov    %eax,0x18(%esp)
08178c5f +0x05e9:  mov    -0x68(%ebp),%eax
08178c62 +0x05ec:  mov    %eax,0x14(%esp)
08178c66 +0x05f0:  mov    %ecx,0x10(%esp)
08178c6a +0x05f4:  mov    -0x5c(%ebp),%eax
08178c6d +0x05f7:  mov    %eax,0xc(%esp)
08178c71 +0x05fb:  mov    %edx,0x8(%esp)
08178c75 +0x05ff:  mov    0xc(%ebp),%eax
08178c78 +0x0602:  mov    %eax,0x4(%esp)
08178c7c +0x0606:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,(%esp)
08178c83 +0x060d:  call   0819dd4e <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE>  ; Arad_MileageProcess::BuyMileageItem(CUser*, int, unsigned long, unsigned short, int, long, int, char, char, int, int, int, char const*, WongWork::CCeraShop::stCeraShopItemParam_t&)
08178c88 +0x0612:  mov    %eax,-0x28(%ebp)
08178c8b +0x0615:  cmpl   $0x0,-0x28(%ebp)
08178c8f +0x0619:  je     08178cc1 <+0x64b>
08178c91 +0x061b:  mov    -0x60(%ebp),%edx
08178c94 +0x061e:  mov    -0x28(%ebp),%eax
08178c97 +0x0621:  cwtl
08178c98 +0x0622:  mov    -0x6c(%ebp),%ecx
08178c9b +0x0625:  mov    %ecx,0x14(%esp)
08178c9f +0x0629:  mov    -0x70(%ebp),%ecx
08178ca2 +0x062c:  mov    %ecx,0x10(%esp)
08178ca6 +0x0630:  mov    %edx,0xc(%esp)
08178caa +0x0634:  mov    %eax,0x8(%esp)
08178cae +0x0638:  mov    0xc(%ebp),%eax
08178cb1 +0x063b:  mov    %eax,0x4(%esp)
08178cb5 +0x063f:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,(%esp)
08178cbc +0x0646:  call   0819e50e <_ZN19Arad_MileageProcess7BuyFailEP5CUsersiii>  ; Arad_MileageProcess::BuyFail(CUser*, short, int, int, int)
08178cc1 +0x064b:  mov    $0x0,%ebx
08178cc6 +0x0650:  jmp    081798d7 <+0x1261>
08178ccb +0x0655:  movzbl -0x55(%ebp),%eax
08178ccf +0x0659:  movzbl %al,%ebx
08178cd2 +0x065c:  movzbl -0x56(%ebp),%eax
08178cd6 +0x0660:  movzbl %al,%ecx
08178cd9 +0x0663:  movzwl -0x58(%ebp),%edx
08178cdd +0x0667:  mov    0x8(%ebp),%eax
08178ce0 +0x066a:  movl   $0x0,0x20(%esp)
08178ce8 +0x0672:  lea    -0xd4(%ebp),%esi
08178cee +0x0678:  mov    %esi,0x1c(%esp)
08178cf2 +0x067c:  lea    -0xbc(%ebp),%esi
08178cf8 +0x0682:  mov    %esi,0x18(%esp)
08178cfc +0x0686:  mov    %ebx,0x14(%esp)
08178d00 +0x068a:  mov    %ecx,0x10(%esp)
08178d04 +0x068e:  mov    %edx,0xc(%esp)
08178d08 +0x0692:  mov    -0x5c(%ebp),%edx
08178d0b +0x0695:  mov    %edx,0x8(%esp)
08178d0f +0x0699:  mov    0xc(%ebp),%edx
08178d12 +0x069c:  mov    %edx,0x4(%esp)
08178d16 +0x06a0:  mov    %eax,(%esp)
08178d19 +0x06a3:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
08178d1e +0x06a8:  movl   $0xffffffff,-0x74(%ebp)
08178d25 +0x06af:  mov    -0x5c(%ebp),%ebx
08178d28 +0x06b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08178d2d +0x06b7:  mov    %ebx,0x4(%esp)
08178d31 +0x06bb:  mov    %eax,(%esp)
08178d34 +0x06be:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08178d39 +0x06c3:  mov    %eax,-0x24(%ebp)
08178d3c +0x06c6:  cmpl   $0x0,-0x24(%ebp)
08178d40 +0x06ca:  je     08178d58 <+0x6e2>
08178d42 +0x06cc:  mov    -0x24(%ebp),%eax
08178d45 +0x06cf:  mov    %eax,(%esp)
08178d48 +0x06d2:  call   08179fb4 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x32>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x32
08178d4d +0x06d7:  test   %al,%al
08178d4f +0x06d9:  je     08178d58 <+0x6e2>
08178d51 +0x06db:  mov    $0x1,%eax
08178d56 +0x06e0:  jmp    08178d5d <+0x6e7>
08178d58 +0x06e2:  mov    $0x0,%eax
08178d5d +0x06e7:  test   %al,%al
08178d5f +0x06e9:  je     08178d68 <+0x6f2>
08178d61 +0x06eb:  movl   $0x7,-0x74(%ebp)
08178d68 +0x06f2:  cmpl   $0x7,-0x74(%ebp)
08178d6c +0x06f6:  je     08178d7c <+0x706>
08178d6e +0x06f8:  lea    -0xbc(%ebp),%eax
08178d74 +0x06fe:  mov    %eax,(%esp)
08178d77 +0x0701:  call   08152ad0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2405>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2405
08178d7c +0x0706:  movl   $0x0,-0x20(%ebp)
08178d83 +0x070d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08178d88 +0x0712:  mov    %eax,(%esp)
08178d8b +0x0715:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
08178d90 +0x071a:  mov    -0x60(%ebp),%edx
08178d93 +0x071d:  mov    %edx,0x4(%esp)
08178d97 +0x0721:  mov    %eax,(%esp)
08178d9a +0x0724:  call   0817a0a8 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x126>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x126
08178d9f +0x0729:  mov    %eax,-0x20(%ebp)
08178da2 +0x072c:  cmpl   $0x0,-0x20(%ebp)
08178da6 +0x0730:  sete   %al
08178da9 +0x0733:  test   %al,%al
08178dab +0x0735:  je     08178dd9 <+0x763>
08178dad +0x0737:  movl   $0x4,(%esp)
08178db4 +0x073e:  call   08725800 <__cxa_allocate_exception>
08178db9 +0x0743:  mov    %eax,%edx
08178dbb +0x0745:  movl   $0x11,(%edx)
08178dc1 +0x074b:  movl   $0x0,0x8(%esp)
08178dc9 +0x0753:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08178dd1 +0x075b:  mov    %eax,(%esp)
08178dd4 +0x075e:  call   08724c50 <__cxa_throw>
08178dd9 +0x0763:  movb   $0x0,-0xed(%ebp)
08178de0 +0x076a:  movl   $0x0,-0xf4(%ebp)
08178dea +0x0774:  movl   $0x0,-0xf8(%ebp)
08178df4 +0x077e:  mov    -0x20(%ebp),%eax
08178df7 +0x0781:  mov    %eax,(%esp)
08178dfa +0x0784:  call   0817a09c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x11a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x11a
08178dff +0x0789:  mov    %eax,-0x1c(%ebp)
08178e02 +0x078c:  cmpl   $0x0,-0x1c(%ebp)
08178e06 +0x0790:  jne    08178e4d <+0x7d7>
08178e08 +0x0792:  mov    -0x20(%ebp),%eax
08178e0b +0x0795:  mov    %eax,(%esp)
08178e0e +0x0798:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
08178e13 +0x079d:  mov    %eax,%edx
08178e15 +0x079f:  mov    0x8(%ebp),%eax
08178e18 +0x07a2:  lea    -0xed(%ebp),%ecx
08178e1e +0x07a8:  mov    %ecx,0x10(%esp)
08178e22 +0x07ac:  lea    -0xf8(%ebp),%ecx
08178e28 +0x07b2:  mov    %ecx,0xc(%esp)
08178e2c +0x07b6:  lea    -0xf4(%ebp),%ecx
08178e32 +0x07bc:  mov    %ecx,0x8(%esp)
08178e36 +0x07c0:  mov    %edx,0x4(%esp)
08178e3a +0x07c4:  mov    %eax,(%esp)
08178e3d +0x07c7:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08178e42 +0x07cc:  test   %al,%al
08178e44 +0x07ce:  je     08178e4d <+0x7d7>
08178e46 +0x07d0:  mov    $0x1,%eax
08178e4b +0x07d5:  jmp    08178e52 <+0x7dc>
08178e4d +0x07d7:  mov    $0x0,%eax
08178e52 +0x07dc:  test   %al,%al
08178e54 +0x07de:  je     08178e7a <+0x804>
08178e56 +0x07e0:  mov    -0x20(%ebp),%eax
08178e59 +0x07e3:  mov    %eax,(%esp)
08178e5c +0x07e6:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
08178e61 +0x07eb:  mov    %eax,%ebx
08178e63 +0x07ed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08178e68 +0x07f2:  mov    0xc(%eax),%eax
08178e6b +0x07f5:  mov    %ebx,0x4(%esp)
08178e6f +0x07f9:  mov    %eax,(%esp)
08178e72 +0x07fc:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08178e77 +0x0801:  mov    %eax,-0x1c(%ebp)
08178e7a +0x0804:  cmpl   $0x0,-0x1c(%ebp)
08178e7e +0x0808:  je     08178eb4 <+0x83e>
08178e80 +0x080a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08178e87 +0x0811:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08178e8c +0x0816:  mov    %eax,%ebx
08178e8e +0x0818:  mov    -0x20(%ebp),%eax
08178e91 +0x081b:  mov    %eax,(%esp)
08178e94 +0x081e:  call   0817a09c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x11a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x11a
08178e99 +0x0823:  movl   $0x0,0xc(%esp)
08178ea1 +0x082b:  mov    %ebx,0x8(%esp)
08178ea5 +0x082f:  mov    %eax,0x4(%esp)
08178ea9 +0x0833:  mov    0xc(%ebp),%eax
08178eac +0x0836:  mov    %eax,(%esp)
08178eaf +0x0839:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08178eb4 +0x083e:  mov    -0x74(%ebp),%eax
08178eb7 +0x0841:  mov    %eax,0x14(%esp)
08178ebb +0x0845:  movl   $"Invalid Group Index [%d]",0x10(%esp)
08178ec3 +0x084d:  movl   $0x653,0xc(%esp)
08178ecb +0x0855:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08178ed3 +0x085d:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08178edb +0x0865:  movl   $0x1,(%esp)
08178ee2 +0x086c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08178ee7 +0x0871:  mov    -0xdc(%ebp),%eax
08178eed +0x0877:  test   %eax,%eax
08178eef +0x0879:  je     08178f9c <+0x926>
08178ef5 +0x087f:  movsbl -0x41(%ebp),%ecx
08178ef9 +0x0883:  mov    -0xdc(%ebp),%eax
08178eff +0x0889:  movzbl %al,%edx
08178f02 +0x088c:  mov    0x8(%ebp),%eax
08178f05 +0x088f:  mov    %ecx,0x24(%esp)
08178f09 +0x0893:  mov    -0x6c(%ebp),%ecx
08178f0c +0x0896:  mov    %ecx,0x20(%esp)
08178f10 +0x089a:  mov    -0x70(%ebp),%ecx
08178f13 +0x089d:  mov    %ecx,0x1c(%esp)
08178f17 +0x08a1:  mov    -0x60(%ebp),%ecx
08178f1a +0x08a4:  mov    %ecx,0x18(%esp)
08178f1e +0x08a8:  mov    -0x74(%ebp),%ecx
08178f21 +0x08ab:  mov    %ecx,0x14(%esp)
08178f25 +0x08af:  mov    %edx,0x10(%esp)
08178f29 +0x08b3:  mov    0x14(%ebp),%edx
08178f2c +0x08b6:  mov    %edx,0xc(%esp)
08178f30 +0x08ba:  mov    0x10(%ebp),%edx
08178f33 +0x08bd:  mov    %edx,0x8(%esp)
08178f37 +0x08c1:  mov    0xc(%ebp),%edx
08178f3a +0x08c4:  mov    %edx,0x4(%esp)
08178f3e +0x08c8:  mov    %eax,(%esp)
08178f41 +0x08cb:  call   083237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>  ; WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)
08178f46 +0x08d0:  movl   $0x0,0xc(%esp)
08178f4e +0x08d8:  movl   $0x65b,0x8(%esp)
08178f56 +0x08e0:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08178f5e +0x08e8:  lea    -0x90(%ebp),%eax
08178f64 +0x08ee:  mov    %eax,(%esp)
08178f67 +0x08f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08178f6c +0x08f6:  movl   $0x65b,0xc(%esp)
08178f74 +0x08fe:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08178f7c +0x0906:  movl   $"[%s][%d]",0x4(%esp)
08178f84 +0x090e:  lea    -0x90(%ebp),%eax
08178f8a +0x0914:  mov    %eax,(%esp)
08178f8d +0x0917:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08178f92 +0x091c:  mov    $0x0,%ebx
08178f97 +0x0921:  jmp    081798d7 <+0x1261>
08178f9c +0x0926:  cmpl   $0x7,-0x74(%ebp)
08178fa0 +0x092a:  jne    08178fc5 <+0x94f>
08178fa2 +0x092c:  mov    -0x74(%ebp),%ebx
08178fa5 +0x092f:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
08178faa +0x0934:  mov    %ebx,0xc(%esp)
08178fae +0x0938:  movl   $0x1,0x8(%esp)
08178fb6 +0x0940:  mov    0xc(%ebp),%edx
08178fb9 +0x0943:  mov    %edx,0x4(%esp)
08178fbd +0x0947:  mov    %eax,(%esp)
08178fc0 +0x094a:  call   08167216 <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
08178fc5 +0x094f:  cmpw   $0x1,-0x3a(%ebp)
08178fca +0x0954:  jne    08179047 <+0x9d1>
08178fcc +0x0956:  mov    0xc(%ebp),%eax
08178fcf +0x0959:  mov    %eax,(%esp)
08178fd2 +0x095c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08178fd7 +0x0961:  movl   $0x1,0xc(%esp)
08178fdf +0x0969:  movl   $0x0,0x8(%esp)
08178fe7 +0x0971:  mov    -0x4c(%ebp),%edx
08178fea +0x0974:  mov    %edx,0x4(%esp)
08178fee +0x0978:  mov    %eax,(%esp)
08178ff1 +0x097b:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08178ff6 +0x0980:  movl   $0x2,0x8(%esp)
08178ffe +0x0988:  mov    -0x50(%ebp),%eax
08179001 +0x098b:  mov    %eax,0x4(%esp)
08179005 +0x098f:  mov    0xc(%ebp),%eax
08179008 +0x0992:  mov    %eax,(%esp)
0817900b +0x0995:  call   0864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>  ; CUser::UseWinPoint(int, eWPSubReason)
08179010 +0x099a:  mov    -0x54(%ebp),%eax
08179013 +0x099d:  mov    %eax,0x4(%esp)
08179017 +0x09a1:  mov    0xc(%ebp),%eax
0817901a +0x09a4:  mov    %eax,(%esp)
0817901d +0x09a7:  call   08692b16 <_ZN5CUser12UseCeraPointEj>  ; CUser::UseCeraPoint(unsigned int)
08179022 +0x09ac:  mov    0xc(%ebp),%eax
08179025 +0x09af:  lea    0x79700(%eax),%edx
0817902b +0x09b5:  mov    -0x54(%ebp),%eax
0817902e +0x09b8:  mov    %eax,0x8(%esp)
08179032 +0x09bc:  movl   $0x3,0x4(%esp)
0817903a +0x09c4:  mov    %edx,(%esp)
0817903d +0x09c7:  call   0868593c <_ZN15cUserHistoryLog9CeraPointE23ENUM_CERAPOINT_LOG_TYPEj>  ; cUserHistoryLog::CeraPoint(ENUM_CERAPOINT_LOG_TYPE, unsigned int)
08179042 +0x09cc:  jmp    081790de <+0xa68>
08179047 +0x09d1:  cmpw   $0x0,-0x3a(%ebp)
0817904c +0x09d6:  jne    081790de <+0xa68>
08179052 +0x09dc:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08179057 +0x09e1:  mov    (%eax),%eax
08179059 +0x09e3:  add    $0x28,%eax
0817905c +0x09e6:  mov    (%eax),%ecx
0817905e +0x09e8:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08179063 +0x09ed:  mov    0x14(%ebp),%edx
08179066 +0x09f0:  mov    %edx,0x8(%esp)
0817906a +0x09f4:  mov    0x10(%ebp),%edx
0817906d +0x09f7:  mov    %edx,0x4(%esp)
08179071 +0x09fb:  mov    %eax,(%esp)
08179074 +0x09fe:  call   *%ecx
08179076 +0x0a00:  mov    0xc(%ebp),%eax
08179079 +0x0a03:  mov    %eax,(%esp)
0817907c +0x0a06:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08179081 +0x0a0b:  movl   $0x1,0xc(%esp)
08179089 +0x0a13:  movl   $0x0,0x8(%esp)
08179091 +0x0a1b:  mov    -0x4c(%ebp),%edx
08179094 +0x0a1e:  mov    %edx,0x4(%esp)
08179098 +0x0a22:  mov    %eax,(%esp)
0817909b +0x0a25:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081790a0 +0x0a2a:  movl   $0x2,0x8(%esp)
081790a8 +0x0a32:  mov    -0x50(%ebp),%eax
081790ab +0x0a35:  mov    %eax,0x4(%esp)
081790af +0x0a39:  mov    0xc(%ebp),%eax
081790b2 +0x0a3c:  mov    %eax,(%esp)
081790b5 +0x0a3f:  call   0864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>  ; CUser::UseWinPoint(int, eWPSubReason)
081790ba +0x0a44:  mov    -0x54(%ebp),%eax
081790bd +0x0a47:  mov    %eax,0x4(%esp)
081790c1 +0x0a4b:  mov    0xc(%ebp),%eax
081790c4 +0x0a4e:  mov    %eax,(%esp)
081790c7 +0x0a51:  call   0817a1c6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x244>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x244
081790cc +0x0a56:  mov    -0x54(%ebp),%eax
081790cf +0x0a59:  mov    %eax,0x4(%esp)
081790d3 +0x0a5d:  mov    0xc(%ebp),%eax
081790d6 +0x0a60:  mov    %eax,(%esp)
081790d9 +0x0a63:  call   0817a21a <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x298>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x298
081790de +0x0a68:  mov    -0x54(%ebp),%edx
081790e1 +0x0a6b:  mov    -0x60(%ebp),%eax
081790e4 +0x0a6e:  mov    %edx,0xc(%esp)
081790e8 +0x0a72:  mov    %eax,0x8(%esp)
081790ec +0x0a76:  mov    0xc(%ebp),%eax
081790ef +0x0a79:  mov    %eax,0x4(%esp)
081790f3 +0x0a7d:  movl   $&_ZZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE15mMileageProcess,(%esp)
081790fa +0x0a84:  call   0819dc9c <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii>  ; Arad_MileageProcess::GiveMileage(CUser*, int, int)
081790ff +0x0a89:  mov    -0x60(%ebp),%eax
08179102 +0x0a8c:  mov    %eax,0x4(%esp)
08179106 +0x0a90:  mov    0x8(%ebp),%eax
08179109 +0x0a93:  mov    %eax,(%esp)
0817910c +0x0a96:  call   08179ed8 <_ZN18ItemVendingMachine22CheckPurcahseBonusItemEm>  ; ItemVendingMachine::CheckPurcahseBonusItem(unsigned long)
08179111 +0x0a9b:  test   %al,%al
08179113 +0x0a9d:  je     08179147 <+0xad1>
08179115 +0x0a9f:  mov    0xc(%ebp),%eax
08179118 +0x0aa2:  mov    %eax,(%esp)
0817911b +0x0aa5:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08179120 +0x0aaa:  mov    %eax,%ebx
08179122 +0x0aac:  mov    -0x60(%ebp),%esi
08179125 +0x0aaf:  mov    0xc(%ebp),%eax
08179128 +0x0ab2:  mov    %eax,(%esp)
0817912b +0x0ab5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08179130 +0x0aba:  mov    %ebx,0xc(%esp)
08179134 +0x0abe:  mov    %esi,0x8(%esp)
08179138 +0x0ac2:  mov    -0x5c(%ebp),%edx
0817913b +0x0ac5:  mov    %edx,0x4(%esp)
0817913f +0x0ac9:  mov    %eax,(%esp)
08179142 +0x0acc:  call   0844b31c <_ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii>  ; DB_UpdateCeraShopPurchaseCount::makeRequest(unsigned int, unsigned long, int, int)
08179147 +0x0ad1:  movl   $0x1,0x8(%esp)
0817914f +0x0ad9:  mov    -0x60(%ebp),%eax
08179152 +0x0adc:  mov    %eax,0x4(%esp)
08179156 +0x0ae0:  mov    0xc(%ebp),%eax
08179159 +0x0ae3:  mov    %eax,(%esp)
0817915c +0x0ae6:  call   080e0d14 <_ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj>  ; CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(CUser*, unsigned int, unsigned int)
08179161 +0x0aeb:  cmpl   $0x0,-0x68(%ebp)
08179165 +0x0aef:  je     081791b3 <+0xb3d>
08179167 +0x0af1:  mov    -0x68(%ebp),%eax
0817916a +0x0af4:  mov    %eax,0x4(%esp)
0817916e +0x0af8:  mov    0xc(%ebp),%eax
08179171 +0x0afb:  mov    %eax,(%esp)
08179174 +0x0afe:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
08179179 +0x0b03:  xor    $0x1,%eax
0817917c +0x0b06:  test   %al,%al
0817917e +0x0b08:  je     081791b3 <+0xb3d>
08179180 +0x0b0a:  mov    -0x68(%ebp),%eax
08179183 +0x0b0d:  mov    %eax,0x4(%esp)
08179187 +0x0b11:  mov    0xc(%ebp),%eax
0817918a +0x0b14:  mov    %eax,(%esp)
0817918d +0x0b17:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
08179192 +0x0b1c:  movl   $0x0,0xc(%esp)
0817919a +0x0b24:  mov    -0x48(%ebp),%eax
0817919d +0x0b27:  mov    %eax,0x8(%esp)
081791a1 +0x0b2b:  mov    -0x68(%ebp),%eax
081791a4 +0x0b2e:  mov    %eax,0x4(%esp)
081791a8 +0x0b32:  mov    0xc(%ebp),%eax
081791ab +0x0b35:  mov    %eax,(%esp)
081791ae +0x0b38:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
081791b3 +0x0b3d:  lea    -0xec(%ebp),%eax
081791b9 +0x0b43:  mov    %eax,(%esp)
081791bc +0x0b46:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081791c1 +0x0b4b:  movl   $0x43,0x8(%esp)
081791c9 +0x0b53:  movl   $0x1,0x4(%esp)
081791d1 +0x0b5b:  lea    -0xec(%ebp),%eax
081791d7 +0x0b61:  mov    %eax,(%esp)
081791da +0x0b64:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081791df +0x0b69:  movl   $0x1,0x4(%esp)
081791e7 +0x0b71:  lea    -0xec(%ebp),%eax
081791ed +0x0b77:  mov    %eax,(%esp)
081791f0 +0x0b7a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081791f5 +0x0b7f:  movsbl -0x41(%ebp),%eax
081791f9 +0x0b83:  mov    %eax,0x4(%esp)
081791fd +0x0b87:  lea    -0xec(%ebp),%eax
08179203 +0x0b8d:  mov    %eax,(%esp)
08179206 +0x0b90:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0817920b +0x0b95:  mov    -0x74(%ebp),%eax
0817920e +0x0b98:  mov    %eax,0x4(%esp)
08179212 +0x0b9c:  lea    -0xec(%ebp),%eax
08179218 +0x0ba2:  mov    %eax,(%esp)
0817921b +0x0ba5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08179220 +0x0baa:  mov    -0x60(%ebp),%eax
08179223 +0x0bad:  mov    %eax,0x4(%esp)
08179227 +0x0bb1:  lea    -0xec(%ebp),%eax
0817922d +0x0bb7:  mov    %eax,(%esp)
08179230 +0x0bba:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08179235 +0x0bbf:  mov    -0x70(%ebp),%eax
08179238 +0x0bc2:  mov    %eax,0x4(%esp)
0817923c +0x0bc6:  lea    -0xec(%ebp),%eax
08179242 +0x0bcc:  mov    %eax,(%esp)
08179245 +0x0bcf:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0817924a +0x0bd4:  mov    -0x6c(%ebp),%eax
0817924d +0x0bd7:  mov    %eax,0x4(%esp)
08179251 +0x0bdb:  lea    -0xec(%ebp),%eax
08179257 +0x0be1:  mov    %eax,(%esp)
0817925a +0x0be4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0817925f +0x0be9:  mov    -0xe0(%ebp),%eax
08179265 +0x0bef:  mov    %eax,0x4(%esp)
08179269 +0x0bf3:  lea    -0xec(%ebp),%eax
0817926f +0x0bf9:  mov    %eax,(%esp)
08179272 +0x0bfc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08179277 +0x0c01:  lea    -0xbc(%ebp),%eax
0817927d +0x0c07:  mov    %eax,(%esp)
08179280 +0x0c0a:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
08179285 +0x0c0f:  mov    %eax,0x4(%esp)
08179289 +0x0c13:  lea    -0xec(%ebp),%eax
0817928f +0x0c19:  mov    %eax,(%esp)
08179292 +0x0c1c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08179297 +0x0c21:  lea    -0x80(%ebp),%eax
0817929a +0x0c24:  lea    -0xbc(%ebp),%edx
081792a0 +0x0c2a:  mov    %edx,0x4(%esp)
081792a4 +0x0c2e:  mov    %eax,(%esp)
081792a7 +0x0c31:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
081792ac +0x0c36:  sub    $0x4,%esp
081792af +0x0c39:  lea    -0x80(%ebp),%eax
081792b2 +0x0c3c:  mov    %eax,0x4(%esp)
081792b6 +0x0c40:  lea    -0x104(%ebp),%eax
081792bc +0x0c46:  mov    %eax,(%esp)
081792bf +0x0c49:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
081792c4 +0x0c4e:  lea    -0x7c(%ebp),%eax
081792c7 +0x0c51:  lea    -0xbc(%ebp),%edx
081792cd +0x0c57:  mov    %edx,0x4(%esp)
081792d1 +0x0c5b:  mov    %eax,(%esp)
081792d4 +0x0c5e:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
081792d9 +0x0c63:  sub    $0x4,%esp
081792dc +0x0c66:  lea    -0x7c(%ebp),%eax
081792df +0x0c69:  mov    %eax,0x4(%esp)
081792e3 +0x0c6d:  lea    -0x108(%ebp),%eax
081792e9 +0x0c73:  mov    %eax,(%esp)
081792ec +0x0c76:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
081792f1 +0x0c7b:  jmp    08179347 <+0xcd1>
081792f3 +0x0c7d:  lea    -0x104(%ebp),%eax
081792f9 +0x0c83:  mov    %eax,(%esp)
081792fc +0x0c86:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
08179301 +0x0c8b:  mov    0x2(%eax),%eax
08179304 +0x0c8e:  mov    %eax,0x4(%esp)
08179308 +0x0c92:  lea    -0xec(%ebp),%eax
0817930e +0x0c98:  mov    %eax,(%esp)
08179311 +0x0c9b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08179316 +0x0ca0:  lea    -0x104(%ebp),%eax
0817931c +0x0ca6:  mov    %eax,(%esp)
0817931f +0x0ca9:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
08179324 +0x0cae:  mov    0x7(%eax),%eax
08179327 +0x0cb1:  mov    %eax,0x4(%esp)
0817932b +0x0cb5:  lea    -0xec(%ebp),%eax
08179331 +0x0cbb:  mov    %eax,(%esp)
08179334 +0x0cbe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08179339 +0x0cc3:  lea    -0x104(%ebp),%eax
0817933f +0x0cc9:  mov    %eax,(%esp)
08179342 +0x0ccc:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
08179347 +0x0cd1:  lea    -0x108(%ebp),%eax
0817934d +0x0cd7:  mov    %eax,0x4(%esp)
08179351 +0x0cdb:  lea    -0x104(%ebp),%eax
08179357 +0x0ce1:  mov    %eax,(%esp)
0817935a +0x0ce4:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
0817935f +0x0ce9:  test   %al,%al
08179361 +0x0ceb:  jne    081792f3 <+0xc7d>
08179363 +0x0ced:  movl   $0x0,0x4(%esp)
0817936b +0x0cf5:  lea    -0xec(%ebp),%eax
08179371 +0x0cfb:  mov    %eax,(%esp)
08179374 +0x0cfe:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08179379 +0x0d03:  cmpb   $0x1,-0x41(%ebp)
0817937d +0x0d07:  jne    08179398 <+0xd22>
0817937f +0x0d09:  cmpl   $0x0,-0x38(%ebp)
08179383 +0x0d0d:  je     08179398 <+0xd22>
08179385 +0x0d0f:  movl   $0x1,0x4(%esp)
0817938d +0x0d17:  mov    -0x38(%ebp),%eax
08179390 +0x0d1a:  mov    %eax,(%esp)
08179393 +0x0d1d:  call   084271ec <_ZN18DB_UpdateGiftCount11makeRequestEji>  ; DB_UpdateGiftCount::makeRequest(unsigned int, int)
08179398 +0x0d22:  movl   $0xffffffff,-0xfc(%ebp)
081793a2 +0x0d2c:  movl   $0x0,-0x100(%ebp)
081793ac +0x0d36:  mov    -0x6c(%ebp),%eax
081793af +0x0d39:  cmp    -0x70(%ebp),%eax
081793b2 +0x0d3c:  jne    0817964f <+0xfd9>
081793b8 +0x0d42:  lea    -0x114(%ebp),%eax
081793be +0x0d48:  mov    %eax,(%esp)
081793c1 +0x0d4b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081793c6 +0x0d50:  movl   $0x0,0x4(%esp)
081793ce +0x0d58:  mov    0xc(%ebp),%eax
081793d1 +0x0d5b:  mov    %eax,(%esp)
081793d4 +0x0d5e:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
081793d9 +0x0d63:  lea    -0x114(%ebp),%eax
081793df +0x0d69:  mov    %eax,(%esp)
081793e2 +0x0d6c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081793e7 +0x0d71:  movl   $0xe,0x8(%esp)
081793ef +0x0d79:  movl   $0x0,0x4(%esp)
081793f7 +0x0d81:  lea    -0x114(%ebp),%eax
081793fd +0x0d87:  mov    %eax,(%esp)
08179400 +0x0d8a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08179405 +0x0d8f:  movl   $0x0,0x4(%esp)
0817940d +0x0d97:  lea    -0x114(%ebp),%eax
08179413 +0x0d9d:  mov    %eax,(%esp)
08179416 +0x0da0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0817941b +0x0da5:  movl   $0x2,0x4(%esp)
08179423 +0x0dad:  lea    -0x114(%ebp),%eax
08179429 +0x0db3:  mov    %eax,(%esp)
0817942c +0x0db6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08179431 +0x0dbb:  mov    0xc(%ebp),%eax
08179434 +0x0dbe:  mov    %eax,(%esp)
08179437 +0x0dc1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0817943c +0x0dc6:  lea    -0x114(%ebp),%edx
08179442 +0x0dcc:  mov    %edx,0xc(%esp)
08179446 +0x0dd0:  movl   $0x0,0x8(%esp)
0817944e +0x0dd8:  movl   $0x1,0x4(%esp)
08179456 +0x0de0:  mov    %eax,(%esp)
08179459 +0x0de3:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0817945e +0x0de8:  mov    0xc(%ebp),%eax
08179461 +0x0deb:  mov    %eax,(%esp)
08179464 +0x0dee:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08179469 +0x0df3:  lea    -0x114(%ebp),%edx
0817946f +0x0df9:  mov    %edx,0xc(%esp)
08179473 +0x0dfd:  movl   $0x2,0x8(%esp)
0817947b +0x0e05:  movl   $0x1,0x4(%esp)
08179483 +0x0e0d:  mov    %eax,(%esp)
08179486 +0x0e10:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0817948b +0x0e15:  movl   $0x1,0x4(%esp)
08179493 +0x0e1d:  lea    -0x114(%ebp),%eax
08179499 +0x0e23:  mov    %eax,(%esp)
0817949c +0x0e26:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081794a1 +0x0e2b:  lea    -0x114(%ebp),%eax
081794a7 +0x0e31:  mov    %eax,0x4(%esp)
081794ab +0x0e35:  mov    0xc(%ebp),%eax
081794ae +0x0e38:  mov    %eax,(%esp)
081794b1 +0x0e3b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081794b6 +0x0e40:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081794bb +0x0e45:  movl   $0x11,0x4(%esp)
081794c3 +0x0e4d:  mov    %eax,(%esp)
081794c6 +0x0e50:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081794cb +0x0e55:  mov    (%eax),%edx
081794cd +0x0e57:  add    $0x34,%edx
081794d0 +0x0e5a:  mov    (%edx),%edx
081794d2 +0x0e5c:  movl   $0x0,0x4(%esp)
081794da +0x0e64:  mov    %eax,(%esp)
081794dd +0x0e67:  call   *%edx
081794df +0x0e69:  test   %al,%al
081794e1 +0x0e6b:  je     08179641 <+0xfcb>
081794e7 +0x0e71:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081794ec +0x0e76:  movl   $0x11,0x4(%esp)
081794f4 +0x0e7e:  mov    %eax,(%esp)
081794f7 +0x0e81:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081794fc +0x0e86:  mov    %eax,(%esp)
081794ff +0x0e89:  call   0817a2e2 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x360>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x360
08179504 +0x0e8e:  mov    %eax,%ebx
08179506 +0x0e90:  movl   $0x3e8,(%esp)
0817950d +0x0e97:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08179512 +0x0e9c:  cmp    %eax,%ebx
08179514 +0x0e9e:  setge  %al
08179517 +0x0ea1:  test   %al,%al
08179519 +0x0ea3:  je     08179641 <+0xfcb>
0817951f +0x0ea9:  mov    0xc(%ebp),%eax
08179522 +0x0eac:  mov    %eax,(%esp)
08179525 +0x0eaf:  call   0817a236 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2b4>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2b4
0817952a +0x0eb4:  mov    %eax,%ebx
0817952c +0x0eb6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08179531 +0x0ebb:  mov    0xc(%eax),%eax
08179534 +0x0ebe:  lea    -0x100(%ebp),%edx
0817953a +0x0ec4:  mov    %edx,0xc(%esp)
0817953e +0x0ec8:  lea    -0xfc(%ebp),%edx
08179544 +0x0ece:  mov    %edx,0x8(%esp)
08179548 +0x0ed2:  mov    %ebx,0x4(%esp)
0817954c +0x0ed6:  mov    %eax,(%esp)
0817954f +0x0ed9:  call   08512930 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj>  ; CItemList::getCeraShopBonusItem(int, unsigned long&, unsigned int&) const
08179554 +0x0ede:  mov    -0xfc(%ebp),%eax
0817955a +0x0ee4:  cmp    $0xffffffff,%eax
0817955d +0x0ee7:  je     08179641 <+0xfcb>
08179563 +0x0eed:  lea    -0x120(%ebp),%eax
08179569 +0x0ef3:  mov    %eax,(%esp)
0817956c +0x0ef6:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08179571 +0x0efb:  lea    -0x12c(%ebp),%eax
08179577 +0x0f01:  mov    %eax,(%esp)
0817957a +0x0f04:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0817957f +0x0f09:  mov    -0x100(%ebp),%eax
08179585 +0x0f0f:  movzwl %ax,%ecx
08179588 +0x0f12:  mov    -0xfc(%ebp),%edx
0817958e +0x0f18:  mov    0x8(%ebp),%eax
08179591 +0x0f1b:  movl   $0x0,0x20(%esp)
08179599 +0x0f23:  lea    -0xd4(%ebp),%ebx
0817959f +0x0f29:  mov    %ebx,0x1c(%esp)
081795a3 +0x0f2d:  lea    -0x120(%ebp),%ebx
081795a9 +0x0f33:  mov    %ebx,0x18(%esp)
081795ad +0x0f37:  movl   $0xff,0x14(%esp)
081795b5 +0x0f3f:  movl   $0x0,0x10(%esp)
081795bd +0x0f47:  mov    %ecx,0xc(%esp)
081795c1 +0x0f4b:  mov    %edx,0x8(%esp)
081795c5 +0x0f4f:  mov    0xc(%ebp),%edx
081795c8 +0x0f52:  mov    %edx,0x4(%esp)
081795cc +0x0f56:  mov    %eax,(%esp)
081795cf +0x0f59:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
081795d4 +0x0f5e:  jmp    081795ee <+0xf78>
081795d6 +0x0f60:  mov    %edx,%ebx
081795d8 +0x0f62:  mov    %eax,%esi
081795da +0x0f64:  lea    -0x12c(%ebp),%eax
081795e0 +0x0f6a:  mov    %eax,(%esp)
081795e3 +0x0f6d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081795e8 +0x0f72:  mov    %esi,%eax
081795ea +0x0f74:  mov    %ebx,%edx
081795ec +0x0f76:  jmp    081795fe <+0xf88>
081795ee +0x0f78:  lea    -0x12c(%ebp),%eax
081795f4 +0x0f7e:  mov    %eax,(%esp)
081795f7 +0x0f81:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081795fc +0x0f86:  jmp    08179616 <+0xfa0>
081795fe +0x0f88:  mov    %edx,%ebx
08179600 +0x0f8a:  mov    %eax,%esi
08179602 +0x0f8c:  lea    -0x120(%ebp),%eax
08179608 +0x0f92:  mov    %eax,(%esp)
0817960b +0x0f95:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08179610 +0x0f9a:  mov    %esi,%eax
08179612 +0x0f9c:  mov    %ebx,%edx
08179614 +0x0f9e:  jmp    08179626 <+0xfb0>
08179616 +0x0fa0:  lea    -0x120(%ebp),%eax
0817961c +0x0fa6:  mov    %eax,(%esp)
0817961f +0x0fa9:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08179624 +0x0fae:  jmp    08179641 <+0xfcb>
08179626 +0x0fb0:  mov    %edx,%ebx
08179628 +0x0fb2:  mov    %eax,%esi
0817962a +0x0fb4:  lea    -0x114(%ebp),%eax
08179630 +0x0fba:  mov    %eax,(%esp)
08179633 +0x0fbd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08179638 +0x0fc2:  mov    %esi,%eax
0817963a +0x0fc4:  mov    %ebx,%edx
0817963c +0x0fc6:  jmp    08179892 <+0x121c>
08179641 +0x0fcb:  lea    -0x114(%ebp),%eax
08179647 +0x0fd1:  mov    %eax,(%esp)
0817964a +0x0fd4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0817964f +0x0fd9:  mov    -0xfc(%ebp),%eax
08179655 +0x0fdf:  mov    %eax,0x4(%esp)
08179659 +0x0fe3:  lea    -0xec(%ebp),%eax
0817965f +0x0fe9:  mov    %eax,(%esp)
08179662 +0x0fec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08179667 +0x0ff1:  mov    -0x100(%ebp),%eax
0817966d +0x0ff7:  mov    %eax,0x4(%esp)
08179671 +0x0ffb:  lea    -0xec(%ebp),%eax
08179677 +0x1001:  mov    %eax,(%esp)
0817967a +0x1004:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0817967f +0x1009:  movl   $0x1,0x4(%esp)
08179687 +0x1011:  lea    -0xec(%ebp),%eax
0817968d +0x1017:  mov    %eax,(%esp)
08179690 +0x101a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08179695 +0x101f:  lea    -0xec(%ebp),%eax
0817969b +0x1025:  mov    %eax,0x4(%esp)
0817969f +0x1029:  mov    0xc(%ebp),%eax
081796a2 +0x102c:  mov    %eax,(%esp)
081796a5 +0x102f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081796aa +0x1034:  mov    0xc(%ebp),%eax
081796ad +0x1037:  mov    %eax,(%esp)
081796b0 +0x103a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081796b5 +0x103f:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%edx
081796bb +0x1045:  mov    -0x54(%ebp),%ecx
081796be +0x1048:  mov    %ecx,0x8(%esp)
081796c2 +0x104c:  mov    %eax,0x4(%esp)
081796c6 +0x1050:  mov    %edx,(%esp)
081796c9 +0x1053:  call   0831ce5e <_ZN18break_away_prevent23CBreakAwayPreventSystem14updateUsedCeraEjj>  ; break_away_prevent::CBreakAwayPreventSystem::updateUsedCera(unsigned int, unsigned int)
081796ce +0x1058:  cmpw   $0x1,-0x3a(%ebp)
081796d3 +0x105d:  jne    081797b7 <+0x1141>
081796d9 +0x1063:  movsbl -0x41(%ebp),%ebx
081796dd +0x1067:  mov    0x14(%ebp),%eax
081796e0 +0x106a:  mov    0x1e0(%eax),%edx
081796e6 +0x1070:  mov    0x1e4(%eax),%ecx
081796ec +0x1076:  movzwl -0x58(%ebp),%eax
081796f0 +0x107a:  mov    %eax,-0x148(%ebp)
081796f6 +0x1080:  mov    0x14(%ebp),%eax
081796f9 +0x1083:  add    $0x177,%eax
081796fe +0x1088:  mov    %eax,-0x144(%ebp)
08179704 +0x108e:  mov    0x14(%ebp),%eax
08179707 +0x1091:  add    $0x7d,%eax
0817970a +0x1094:  mov    %eax,%edi
0817970c +0x1096:  mov    -0x54(%ebp),%esi
0817970f +0x1099:  mov    -0x60(%ebp),%eax
08179712 +0x109c:  mov    %ebx,0x28(%esp)
08179716 +0x10a0:  mov    %edx,0x20(%esp)
0817971a +0x10a4:  mov    %ecx,0x24(%esp)
0817971e +0x10a8:  mov    -0x148(%ebp),%edx
08179724 +0x10ae:  mov    %edx,0x1c(%esp)
08179728 +0x10b2:  mov    -0x144(%ebp),%edx
0817972e +0x10b8:  mov    %edx,0x18(%esp)
08179732 +0x10bc:  mov    %edi,0x14(%esp)
08179736 +0x10c0:  mov    %esi,0x10(%esp)
0817973a +0x10c4:  movl   $0xffffffff,0xc(%esp)
08179742 +0x10cc:  mov    %eax,0x8(%esp)
08179746 +0x10d0:  mov    0xc(%ebp),%eax
08179749 +0x10d3:  mov    %eax,0x4(%esp)
0817974d +0x10d7:  mov    0x8(%ebp),%eax
08179750 +0x10da:  mov    %eax,(%esp)
08179753 +0x10dd:  call   0817991e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc>  ; ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned long long, char)
08179758 +0x10e2:  mov    0x14(%ebp),%eax
0817975b +0x10e5:  mov    0x1e4(%eax),%edx
08179761 +0x10eb:  mov    0x1e0(%eax),%eax
08179767 +0x10f1:  movsbl -0x41(%ebp),%esi
0817976b +0x10f5:  mov    0x14(%ebp),%ecx
0817976e +0x10f8:  add    $0x7d,%ecx
08179771 +0x10fb:  mov    %ecx,%ebx
08179773 +0x10fd:  movzwl -0x58(%ebp),%ecx
08179777 +0x1101:  mov    0xc(%ebp),%edi
0817977a +0x1104:  add    $0x79700,%edi
08179780 +0x110a:  mov    %eax,0x1c(%esp)
08179784 +0x110e:  mov    %edx,0x20(%esp)
08179788 +0x1112:  movl   $0x1,0x18(%esp)
08179790 +0x111a:  mov    %esi,0x14(%esp)
08179794 +0x111e:  mov    %ebx,0x10(%esp)
08179798 +0x1122:  mov    %ecx,0xc(%esp)
0817979c +0x1126:  mov    -0x5c(%ebp),%eax
0817979f +0x1129:  mov    %eax,0x8(%esp)
081797a3 +0x112d:  mov    -0x60(%ebp),%eax
081797a6 +0x1130:  mov    %eax,0x4(%esp)
081797aa +0x1134:  mov    %edi,(%esp)
081797ad +0x1137:  call   08686ea0 <_ZN15cUserHistoryLog15BuyCashShopItemEjmjPKccN19CeraShopPaymentType1TEy>  ; cUserHistoryLog::BuyCashShopItem(unsigned int, unsigned long, unsigned int, char const*, char, CeraShopPaymentType::T, unsigned long long)
081797b2 +0x113c:  jmp    081798aa <+0x1234>
081797b7 +0x1141:  movsbl -0x41(%ebp),%ebx
081797bb +0x1145:  mov    0x14(%ebp),%eax
081797be +0x1148:  mov    0x1e0(%eax),%edx
081797c4 +0x114e:  mov    0x1e4(%eax),%ecx
081797ca +0x1154:  movzwl -0x58(%ebp),%eax
081797ce +0x1158:  mov    %eax,-0x140(%ebp)
081797d4 +0x115e:  mov    0x10(%ebp),%eax
081797d7 +0x1161:  add    $0x177,%eax
081797dc +0x1166:  mov    %eax,-0x13c(%ebp)
081797e2 +0x116c:  mov    0x10(%ebp),%eax
081797e5 +0x116f:  add    $0x7d,%eax
081797e8 +0x1172:  mov    %eax,%edi
081797ea +0x1174:  mov    -0x54(%ebp),%esi
081797ed +0x1177:  mov    -0x60(%ebp),%eax
081797f0 +0x117a:  mov    %ebx,0x28(%esp)
081797f4 +0x117e:  mov    %edx,0x20(%esp)
081797f8 +0x1182:  mov    %ecx,0x24(%esp)
081797fc +0x1186:  mov    -0x140(%ebp),%edx
08179802 +0x118c:  mov    %edx,0x1c(%esp)
08179806 +0x1190:  mov    -0x13c(%ebp),%edx
0817980c +0x1196:  mov    %edx,0x18(%esp)
08179810 +0x119a:  mov    %edi,0x14(%esp)
08179814 +0x119e:  mov    %esi,0x10(%esp)
08179818 +0x11a2:  movl   $0xffffffff,0xc(%esp)
08179820 +0x11aa:  mov    %eax,0x8(%esp)
08179824 +0x11ae:  mov    0xc(%ebp),%eax
08179827 +0x11b1:  mov    %eax,0x4(%esp)
0817982b +0x11b5:  mov    0x8(%ebp),%eax
0817982e +0x11b8:  mov    %eax,(%esp)
08179831 +0x11bb:  call   0817991e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc>  ; ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned long long, char)
08179836 +0x11c0:  mov    0x14(%ebp),%eax
08179839 +0x11c3:  mov    0x1e4(%eax),%edx
0817983f +0x11c9:  mov    0x1e0(%eax),%eax
08179845 +0x11cf:  movsbl -0x41(%ebp),%esi
08179849 +0x11d3:  mov    0x10(%ebp),%ecx
0817984c +0x11d6:  add    $0x7d,%ecx
0817984f +0x11d9:  mov    %ecx,%ebx
08179851 +0x11db:  movzwl -0x58(%ebp),%ecx
08179855 +0x11df:  mov    0xc(%ebp),%edi
08179858 +0x11e2:  add    $0x79700,%edi
0817985e +0x11e8:  mov    %eax,0x1c(%esp)
08179862 +0x11ec:  mov    %edx,0x20(%esp)
08179866 +0x11f0:  movl   $0x0,0x18(%esp)
0817986e +0x11f8:  mov    %esi,0x14(%esp)
08179872 +0x11fc:  mov    %ebx,0x10(%esp)
08179876 +0x1200:  mov    %ecx,0xc(%esp)
0817987a +0x1204:  mov    -0x5c(%ebp),%eax
0817987d +0x1207:  mov    %eax,0x8(%esp)
08179881 +0x120b:  mov    -0x60(%ebp),%eax
08179884 +0x120e:  mov    %eax,0x4(%esp)
08179888 +0x1212:  mov    %edi,(%esp)
0817988b +0x1215:  call   08686ea0 <_ZN15cUserHistoryLog15BuyCashShopItemEjmjPKccN19CeraShopPaymentType1TEy>  ; cUserHistoryLog::BuyCashShopItem(unsigned int, unsigned long, unsigned int, char const*, char, CeraShopPaymentType::T, unsigned long long)
08179890 +0x121a:  jmp    081798aa <+0x1234>
08179892 +0x121c:  mov    %edx,%ebx
08179894 +0x121e:  mov    %eax,%esi
08179896 +0x1220:  lea    -0xec(%ebp),%eax
0817989c +0x1226:  mov    %eax,(%esp)
0817989f +0x1229:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081798a4 +0x122e:  mov    %esi,%eax
081798a6 +0x1230:  mov    %ebx,%edx
081798a8 +0x1232:  jmp    081798bf <+0x1249>
081798aa +0x1234:  lea    -0xec(%ebp),%eax
081798b0 +0x123a:  mov    %eax,(%esp)
081798b3 +0x123d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081798b8 +0x1242:  mov    $0x1,%ebx
081798bd +0x1247:  jmp    081798d7 <+0x1261>
081798bf +0x1249:  mov    %edx,%ebx
081798c1 +0x124b:  mov    %eax,%esi
081798c3 +0x124d:  lea    -0xd4(%ebp),%eax
081798c9 +0x1253:  mov    %eax,(%esp)
081798cc +0x1256:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
081798d1 +0x125b:  mov    %esi,%eax
081798d3 +0x125d:  mov    %ebx,%edx
081798d5 +0x125f:  jmp    08179900 <+0x128a>
081798d7 +0x1261:  lea    -0xd4(%ebp),%eax
081798dd +0x1267:  mov    %eax,(%esp)
081798e0 +0x126a:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
081798e5 +0x126f:  test   %ebx,%ebx
081798e7 +0x1271:  lea    -0xbc(%ebp),%eax
081798ed +0x1277:  mov    %eax,(%esp)
081798f0 +0x127a:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
081798f5 +0x127f:  lea    -0xc(%ebp),%esp
081798f8 +0x1282:  add    $0x0,%esp
081798fb +0x1285:  pop    %ebx
081798fc +0x1286:  pop    %esi
081798fd +0x1287:  pop    %edi
081798fe +0x1288:  pop    %ebp
081798ff +0x1289:  ret
08179900 +0x128a:  mov    %edx,%ebx
08179902 +0x128c:  mov    %eax,%esi
08179904 +0x128e:  lea    -0xbc(%ebp),%eax
0817990a +0x1294:  mov    %eax,(%esp)
0817990d +0x1297:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08179912 +0x129c:  mov    %esi,%eax
08179914 +0x129e:  mov    %ebx,%edx
08179916 +0x12a0:  mov    %eax,(%esp)
08179919 +0x12a3:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ItemVendingMachine::ProcessIPG_ResultOutput @ 0x8178676

/* ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
ItemVendingMachine::ProcessIPG_ResultOutput
          (ItemVendingMachine *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,
          Stream *param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CDataManager *pCVar7;
  undefined4 *puVar8;
  HeroMissionEvent *pHVar9;
  CInventory *pCVar10;
  uint uVar11;
  int *piVar12;
  CCeraShopBonusItemEvent *this_00;
  uint uVar13;
  undefined4 uVar14;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_130 [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_124 [12];
  PacketGuard local_118 [12];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_10c [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_108 [4];
  uint local_104;
  ulong local_100 [3];
  bool local_f1;
  PacketGuard local_f0 [12];
  int local_e4;
  int local_e0;
  int local_dc;
  stCeraShopItemParam_t local_d8 [12];
  vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>> avStack_cc [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_c0 [12];
  pair<int,int> local_b4 [8];
  ulong local_ac [2];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  __normal_iterator local_84 [4];
  __normal_iterator local_80 [4];
  stCeraShopIPGRequest_t *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  ulong local_60;
  ushort local_5c;
  stCeraShopIPGRequest_t local_5a;
  stCeraShopIPGRequest_t local_59;
  char *local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_4c;
  stCeraShopIPGRequest_t local_45;
  int local_44;
  short local_3e;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  CItemLimitEdition *local_24;
  int local_20;
  
  if ((ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)::
       IPGProcess == '\0') &&
     (iVar4 = __cxa_guard_acquire(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                                   ::IPGProcess), iVar4 != 0)) {
    Arad_IPGProcess::Arad_IPGProcess
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,this);
    __cxa_guard_release(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                         ::IPGProcess);
    __cxa_atexit(Arad_IPGProcess::~Arad_IPGProcess,
                 &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                  ::IPGProcess,&__dso_handle);
  }
  if ((ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)::
       mMileageProcess == '\0') &&
     (iVar4 = __cxa_guard_acquire(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                                   ::mMileageProcess), iVar4 != 0)) {
    Arad_MileageProcess::Arad_MileageProcess
              ((Arad_MileageProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::mMileageProcess,this);
    __cxa_guard_release(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                         ::mMileageProcess);
    __cxa_atexit(Arad_MileageProcess::~Arad_MileageProcess,
                 &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                  ::mMileageProcess,&__dso_handle);
  }
  local_7c = Stream::GetOutBuffer<stCeraShopIPGRequest_t>(param_4);
  local_78 = *(int *)(local_7c + 4);
  local_74 = *(int *)(local_7c + 0x24);
  local_70 = *(int *)(local_7c + 0x20);
  local_6c = *(int *)(local_7c + 0x28);
  local_68 = *(int *)(local_7c + 0x1c);
  local_64 = *(uint *)local_7c;
  local_60 = *(ulong *)(local_7c + 8);
  local_5c = *(ushort *)(local_7c + 0xc);
  local_5a = local_7c[0x2c];
  local_59 = local_7c[0x2d];
  local_58 = *(char **)(local_7c + 0x10);
  local_54 = *(undefined4 *)(local_7c + 0x14);
  local_50 = *(undefined4 *)(local_7c + 0x18);
  local_4c = *(long *)(local_7c + 0x30);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_c0);
  local_45 = local_7c[0x34];
  local_44 = *(int *)(local_7c + 0x38);
  local_3e = *(short *)(local_7c + 0x3c);
  local_3c = *(uint *)(local_7c + 0x40);
                    /* try { // try from 08178809 to 0817880d has its CatchHandler @ 08179900 */
  WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_d8);
  for (local_34 = 0; local_34 < (int)(uint)(byte)local_7c[0x44]; local_34 = local_34 + 1) {
                    /* try { // try from 08178846 to 081791c0 has its CatchHandler @ 081798bf */
    std::make_pair<unsigned_long&,unsigned_char&>
              (local_ac,(uchar *)(local_7c + (local_34 + 8) * 8 + 8));
    std::pair<int,int>::pair<unsigned_long,unsigned_char>(local_b4,(pair *)local_ac);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_d8,local_b4);
  }
  for (local_30 = 0; local_30 < (int)(uint)(byte)local_7c[0x160]; local_30 = local_30 + 1) {
    std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::push_back
              (avStack_cc,(tagPackageItemSelection *)(local_7c + (local_30 + 0x2c) * 8 + 4));
  }
  local_dc = 0;
  Stream::operator>>(param_4,&local_dc);
  local_e0 = atoi((char *)(param_3 + 0x173));
  if (((local_e0 == 0) && (param_1 != (CUser *)0x0)) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if ((param_1 == (CUser *)0x0) ||
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    iVar4 = local_e0;
    if (bVar3) {
      iVar5 = atoi((char *)(param_3 + 0x69));
      iVar6 = atoi((char *)(param_3 + 0x28));
      cMyTrace::cMyTrace(local_a4,
                         "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                         ,0x59d,5);
      cMyTrace::operator()
                (local_a4,
                 "There\'s abnormal transaction that the client doesn\'t exist, client would be %s(m_id: %d) and the Goodis is %d, ret_code = %d ret_msg = %s"
                 ,param_3 + 0x3c,iVar6,iVar5,iVar4,param_3 + 0x177);
    }
    WongWork::CCeraShop::_ProcessIPGError
              ((CCeraShop *)this,param_1,param_2,param_3,'\x19',local_78,local_64,local_74,local_70,
               (char)local_45);
    goto LAB_081798d7;
  }
  local_e0 = 0;
  local_38 = 0xffffffff;
  local_e4 = -1;
  switch(local_78) {
  case 0:
    Arad_IPGProcess::CashShopModeAvatar
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_60,local_64,local_68,(char)local_5a,(char)local_59,
               (char *)(param_2 + 0x7d),&local_e0,local_3c,local_44,(char)local_45);
    break;
  case 1:
    Arad_IPGProcess::CashShopModeCoin
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_5c,local_3c,local_44,(char)local_45);
    break;
  case 2:
  case 7:
  case 9:
    Arad_IPGProcess::CashShopModeItem
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_60,local_5c,local_6c,local_4c,(vector *)local_c0,local_d8
               ,&local_e0,local_3c,local_44,(char)local_45);
    break;
  case 3:
    Arad_IPGProcess::CashShopModeCreature
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_60,local_5c,&local_e4,&local_e0,local_3c,local_44,
               (char)local_45);
    break;
  case 10:
    WongWork::CCeraShop::_processAdditionalItem
              ((CCeraShop *)this,param_1,local_60,local_5c,(uchar)local_5a,(uchar)local_59,
               (vector *)local_c0,local_d8,'\0');
    uVar1 = local_60;
    local_78 = -1;
    pCVar7 = (CDataManager *)G_CDataManager();
    local_28 = (CItem *)CDataManager::find_item(pCVar7,uVar1);
    if ((local_28 == (CItem *)0x0) ||
       (cVar2 = CItem::isCerashopPackageItem(local_28), cVar2 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_78 = 7;
    }
    if (local_78 != 7) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::clear(local_c0);
    }
    local_24 = (CItemLimitEdition *)0x0;
    pCVar7 = (CDataManager *)G_CDataManager();
    uVar11 = CDataManager::getItemLimitEditionMgr(pCVar7);
    uVar13 = local_64;
    local_24 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar11);
    if (local_24 == (CItemLimitEdition *)0x0) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4,uVar13);
      *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    local_f1 = false;
    local_100[2] = 0;
    local_100[1] = 0;
    local_20 = CItemLimitEdition::getFeaturedIdx(local_24);
    if (local_20 == 0) {
      iVar4 = CItemLimitEdition::getRelateditem(local_24);
      cVar2 = WongWork::CCeraShop::IsSpecialItem
                        ((CCeraShop *)this,iVar4,(int *)(local_100 + 2),(int *)(local_100 + 1),
                         &local_f1);
      if (cVar2 == '\0') goto LAB_08178e4d;
      bVar3 = true;
    }
    else {
LAB_08178e4d:
      bVar3 = false;
    }
    if (bVar3) {
      iVar4 = CItemLimitEdition::getRelateditem(local_24);
      iVar5 = G_CDataManager();
      local_20 = CItemList::GetRestrictCode(*(CItemList **)(iVar5 + 0xc),iVar4);
    }
    if (local_20 != 0) {
      iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar5 = CItemLimitEdition::getFeaturedIdx(local_24);
      WongWork::CCeraShop::SaveFeaturedIdx(param_1,iVar5,iVar4,0);
    }
  default:
    LogManager::logFormat
              (1,"localjapan/AppendVendingMachine.cpp",
               "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
               ,0x653,"Invalid Group Index [%d]",local_78);
    break;
  case 0xb:
    local_2c = 0;
    local_2c = Arad_MileageProcess::BuyMileageItem
                         ((Arad_MileageProcess *)
                          &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                           ::mMileageProcess,param_1,local_64,local_60,local_5c,local_6c,local_4c,
                          local_68,(char)local_5a,(char)local_59,local_dc,local_70,local_74,
                          (char *)(param_2 + 0x7d),local_d8);
    if (local_2c != 0) {
      Arad_MileageProcess::BuyFail
                ((Arad_MileageProcess *)
                 &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                  ::mMileageProcess,param_1,(short)local_2c,local_64,local_74,local_70);
    }
    goto LAB_081798d7;
  }
  if (local_e0 == 0) {
    if (local_78 == 7) {
      pHVar9 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::setMissionValue(pHVar9,param_1,1,7);
    }
    if (local_3e == 1) {
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::use_money(pCVar10,local_50,0,1);
      CUser::UseWinPoint(param_1,local_54,2);
      CUser::UseCeraPoint(param_1,(uint)local_58);
      cUserHistoryLog::CeraPoint((cUserHistoryLog *)(param_1 + 0x79700),3,local_58);
    }
    else if (local_3e == 0) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0x28))(GlobalData::s_pIPGHelper,param_2,param_3);
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::use_money(pCVar10,local_50,0,1);
      CUser::UseWinPoint(param_1,local_54,2);
      CUser::UseCera(param_1,(uint)local_58);
      CUser::addUsedCera(param_1,(uint)local_58);
    }
    Arad_MileageProcess::GiveMileage
              ((Arad_MileageProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::mMileageProcess,param_1,local_64,(int)local_58);
    cVar2 = CheckPurcahseBonusItem((ulong)this);
    if (cVar2 != '\0') {
      iVar4 = CUser::GetUID(param_1);
      uVar13 = local_64;
      uVar11 = CUser::get_acc_id(param_1);
      DB_UpdateCeraShopPurchaseCount::makeRequest(uVar11,local_60,uVar13,iVar4);
    }
    CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(param_1,local_64,1);
    if ((local_6c != 0) && (cVar2 = CUser::IsRestrictedGoods(param_1,local_6c), cVar2 != '\x01')) {
      CUser::SetRestrictedGoods(param_1,local_6c);
      WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_6c,local_4c,0);
    }
    PacketGuard::PacketGuard(local_f0);
                    /* try { // try from 081791da to 081793c5 has its CatchHandler @ 08179892 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_f0,1,0x43);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f0,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f0,(int)(char)local_45);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_78);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_64);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_74);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_70);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_e4);
    iVar4 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_c0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f0,iVar4);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    __normal_iterator<Inven_Item*>(local_108,local_84);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    __normal_iterator<Inven_Item*>(local_10c,local_80);
    while (bVar3 = __gnu_cxx::operator!=(local_108,local_10c), bVar3) {
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
              ::operator->(local_108);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,*(int *)(iVar4 + 2));
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
              ::operator->(local_108);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,*(int *)(iVar4 + 7));
      __gnu_cxx::
      __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_108);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f0,0);
    if ((local_45 == (stCeraShopIPGRequest_t)0x1) && (local_3c != 0)) {
      DB_UpdateGiftCount::makeRequest(local_3c,1);
    }
    local_100[0] = 0xffffffff;
    local_104 = 0;
    if (local_70 == local_74) {
      PacketGuard::PacketGuard(local_118);
                    /* try { // try from 081793d4 to 08179570 has its CatchHandler @ 08179626 */
      CUser::SendCashData(param_1,false);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_118);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_118,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_118,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_118,2);
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar10,1,0,local_118);
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar10,1,2,local_118);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_118,true);
      CUser::Send(param_1,local_118);
      piVar12 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
      cVar2 = (**(code **)(*piVar12 + 0x34))(piVar12,0);
      if (cVar2 != '\0') {
        this_00 = (CCeraShopBonusItemEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
        iVar4 = CCeraShopBonusItemEvent::getBonusRate(this_00);
        iVar5 = get_rand_int(1000);
        if (iVar5 <= iVar4) {
          iVar4 = CUser::getUsedCera(param_1);
          iVar5 = G_CDataManager();
          CItemList::getCeraShopBonusItem(*(CItemList **)(iVar5 + 0xc),iVar4,local_100,&local_104);
          if (local_100[0] != 0xffffffff) {
            std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_124);
                    /* try { // try from 0817957a to 0817957e has its CatchHandler @ 081795fe */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_130);
                    /* try { // try from 081795cf to 081795d3 has its CatchHandler @ 081795d6 */
            WongWork::CCeraShop::_processAdditionalItem
                      ((CCeraShop *)this,param_1,local_100[0],(ushort)local_104,'\0',0xff,
                       (vector *)local_124,local_d8,'\0');
                    /* try { // try from 081795f7 to 081795fb has its CatchHandler @ 081795fe */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_130);
                    /* try { // try from 0817961f to 08179623 has its CatchHandler @ 08179626 */
            std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_124);
          }
        }
      }
                    /* try { // try from 0817964a to 0817988f has its CatchHandler @ 08179892 */
      PacketGuard::~PacketGuard(local_118);
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_100[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_104);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_f0,true);
    CUser::Send(param_1,local_f0);
    uVar13 = CUser::get_acc_id(param_1);
    break_away_prevent::CBreakAwayPreventSystem::updateUsedCera
              (GlobalData::s_BreakAwaySys,uVar13,(uint)local_58);
    if (local_3e == 1) {
      iVar4 = (int)(char)local_45;
      uVar14 = *(undefined4 *)(param_3 + 0x1e4);
      BillingRecord((CUser *)this,(int)param_1,local_64,-1,local_58,(char *)(param_3 + 0x7d),
                    (int)(param_3 + 0x177),CONCAT44(*(undefined4 *)(param_3 + 0x1e0),(uint)local_5c)
                    ,(char)uVar14);
      cUserHistoryLog::BuyCashShopItem
                (param_1 + 0x79700,local_64,local_60,local_5c,param_3 + 0x7d,(int)(char)local_45,1,
                 *(undefined4 *)(param_3 + 0x1e0),*(undefined4 *)(param_3 + 0x1e4),uVar14,iVar4);
    }
    else {
      iVar4 = (int)(char)local_45;
      uVar14 = *(undefined4 *)(param_3 + 0x1e4);
      BillingRecord((CUser *)this,(int)param_1,local_64,-1,local_58,(char *)(param_2 + 0x7d),
                    (int)(param_2 + 0x177),CONCAT44(*(undefined4 *)(param_3 + 0x1e0),(uint)local_5c)
                    ,(char)uVar14);
      cUserHistoryLog::BuyCashShopItem
                (param_1 + 0x79700,local_64,local_60,local_5c,param_2 + 0x7d,(int)(char)local_45,0,
                 *(undefined4 *)(param_3 + 0x1e0),*(undefined4 *)(param_3 + 0x1e4),uVar14,iVar4);
    }
                    /* try { // try from 081798b3 to 081798b7 has its CatchHandler @ 081798bf */
    PacketGuard::~PacketGuard(local_f0);
  }
  else {
    WongWork::CCeraShop::_ProcessIPGError
              ((CCeraShop *)this,param_1,param_2,param_3,(uchar)local_e0,local_78,local_64,local_74,
               local_70,(char)local_45);
    cMyTrace::cMyTrace(local_94,
                       "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                       ,0x65b,0);
    cMyTrace::operator()
              (local_94,"[%s][%d]",
               "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
               ,0x65b);
  }
LAB_081798d7:
                    /* try { // try from 081798e0 to 081798e4 has its CatchHandler @ 08179900 */
  WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_d8);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_c0);
  return;
}
```
