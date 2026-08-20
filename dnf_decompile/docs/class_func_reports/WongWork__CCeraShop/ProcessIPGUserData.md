# ProcessIPGUserData

`_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream`

`WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08321d2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08321d2e  _ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream
#           WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
# range [0x08321d2e, 0x083237f5]
08321d2e +0x0000:  push   %ebp
08321d2f +0x0001:  mov    %esp,%ebp
08321d31 +0x0003:  push   %edi
08321d32 +0x0004:  push   %esi
08321d33 +0x0005:  push   %ebx
08321d34 +0x0006:  sub    $0x2cc,%esp
08321d3a +0x000c:  lea    -0xd4(%ebp),%eax
08321d40 +0x0012:  mov    %eax,(%esp)
08321d43 +0x0015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08321d48 +0x001a:  mov    0x14(%ebp),%eax
08321d4b +0x001d:  mov    0x1c(%eax),%eax
08321d4e +0x0020:  cmp    $0x4,%eax
08321d51 +0x0023:  jne    08321e36 <+0x108>
08321d57 +0x0029:  cmpl   $0x0,0xc(%ebp)
08321d5b +0x002d:  je     083237dc <+0x1aae>
08321d61 +0x0033:  mov    0x14(%ebp),%eax
08321d64 +0x0036:  add    $0x99,%eax
08321d69 +0x003b:  mov    %eax,(%esp)
08321d6c +0x003e:  call   0807e6f0 <_init+0xfe8>
08321d71 +0x0043:  mov    %eax,%ebx
08321d73 +0x0045:  mov    0x14(%ebp),%eax
08321d76 +0x0048:  add    $0xa5,%eax
08321d7b +0x004d:  mov    %eax,(%esp)
08321d7e +0x0050:  call   0807e6f0 <_init+0xfe8>
08321d83 +0x0055:  add    %eax,%ebx
08321d85 +0x0057:  mov    0x14(%ebp),%eax
08321d88 +0x005a:  add    $0x81,%eax
08321d8d +0x005f:  mov    %eax,(%esp)
08321d90 +0x0062:  call   0807e6f0 <_init+0xfe8>
08321d95 +0x0067:  add    %eax,%ebx
08321d97 +0x0069:  mov    0x14(%ebp),%eax
08321d9a +0x006c:  add    $0x75,%eax
08321d9d +0x006f:  mov    %eax,(%esp)
08321da0 +0x0072:  call   0807e6f0 <_init+0xfe8>
08321da5 +0x0077:  add    %eax,%ebx
08321da7 +0x0079:  mov    0x14(%ebp),%eax
08321daa +0x007c:  add    $0x8d,%eax
08321daf +0x0081:  mov    %eax,(%esp)
08321db2 +0x0084:  call   0807e6f0 <_init+0xfe8>
08321db7 +0x0089:  add    %eax,%ebx
08321db9 +0x008b:  mov    0x14(%ebp),%eax
08321dbc +0x008e:  add    $0x69,%eax
08321dbf +0x0091:  mov    %eax,(%esp)
08321dc2 +0x0094:  call   0807e6f0 <_init+0xfe8>
08321dc7 +0x0099:  lea    (%ebx,%eax,1),%eax
08321dca +0x009c:  mov    %eax,-0xa0(%ebp)
08321dd0 +0x00a2:  mov    -0xa0(%ebp),%eax
08321dd6 +0x00a8:  mov    %eax,0x4(%esp)
08321dda +0x00ac:  mov    0xc(%ebp),%eax
08321ddd +0x00af:  mov    %eax,(%esp)
08321de0 +0x00b2:  call   0817a1b4 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x232>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x232
08321de5 +0x00b7:  movl   $0x35,0x8(%esp)
08321ded +0x00bf:  movl   $0x0,0x4(%esp)
08321df5 +0x00c7:  lea    -0xd4(%ebp),%eax
08321dfb +0x00cd:  mov    %eax,(%esp)
08321dfe +0x00d0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08321e03 +0x00d5:  movl   $0x1,0x4(%esp)
08321e0b +0x00dd:  lea    -0xd4(%ebp),%eax
08321e11 +0x00e3:  mov    %eax,(%esp)
08321e14 +0x00e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08321e19 +0x00eb:  mov    0xc(%ebp),%eax
08321e1c +0x00ee:  mov    %eax,(%esp)
08321e1f +0x00f1:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
08321e24 +0x00f6:  mov    %eax,0x4(%esp)
08321e28 +0x00fa:  lea    -0xd4(%ebp),%eax
08321e2e +0x0100:  mov    %eax,(%esp)
08321e31 +0x0103:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08321e36 +0x0108:  mov    0x14(%ebp),%eax
08321e39 +0x010b:  mov    0x1c(%eax),%eax
08321e3c +0x010e:  test   %eax,%eax
08321e3e +0x0110:  jne    08321f12 <+0x1e4>
08321e44 +0x0116:  mov    0x14(%ebp),%eax
08321e47 +0x0119:  add    $0x26e,%eax
08321e4c +0x011e:  mov    %eax,(%esp)
08321e4f +0x0121:  call   0807e6f0 <_init+0xfe8>
08321e54 +0x0126:  cmp    $0x1,%eax
08321e57 +0x0129:  je     08321ea8 <+0x17a>
08321e59 +0x012b:  movl   $0x35,0x8(%esp)
08321e61 +0x0133:  movl   $0x0,0x4(%esp)
08321e69 +0x013b:  lea    -0xd4(%ebp),%eax
08321e6f +0x0141:  mov    %eax,(%esp)
08321e72 +0x0144:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08321e77 +0x0149:  movl   $0x0,0x4(%esp)
08321e7f +0x0151:  lea    -0xd4(%ebp),%eax
08321e85 +0x0157:  mov    %eax,(%esp)
08321e88 +0x015a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08321e8d +0x015f:  movl   $0x0,0x4(%esp)
08321e95 +0x0167:  lea    -0xd4(%ebp),%eax
08321e9b +0x016d:  mov    %eax,(%esp)
08321e9e +0x0170:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08321ea3 +0x0175:  jmp    08323791 <+0x1a63>
08321ea8 +0x017a:  movl   $0x0,-0xd8(%ebp)
08321eb2 +0x0184:  movl   $0x0,-0xdc(%ebp)
08321ebc +0x018e:  lea    -0xdc(%ebp),%eax
08321ec2 +0x0194:  mov    %eax,0x4(%esp)
08321ec6 +0x0198:  mov    0x18(%ebp),%eax
08321ec9 +0x019b:  mov    %eax,(%esp)
08321ecc +0x019e:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08321ed1 +0x01a3:  lea    -0xd8(%ebp),%eax
08321ed7 +0x01a9:  mov    %eax,0x4(%esp)
08321edb +0x01ad:  mov    0x18(%ebp),%eax
08321ede +0x01b0:  mov    %eax,(%esp)
08321ee1 +0x01b3:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08321ee6 +0x01b8:  cmpl   $0x0,0xc(%ebp)
08321eea +0x01bc:  je     083237dc <+0x1aae>
08321ef0 +0x01c2:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08321ef5 +0x01c7:  mov    (%eax),%eax
08321ef7 +0x01c9:  add    $0x2c,%eax
08321efa +0x01cc:  mov    (%eax),%ecx
08321efc +0x01ce:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08321f01 +0x01d3:  mov    0xc(%ebp),%edx
08321f04 +0x01d6:  mov    %edx,0x4(%esp)
08321f08 +0x01da:  mov    %eax,(%esp)
08321f0b +0x01dd:  call   *%ecx
08321f0d +0x01df:  jmp    083237dc <+0x1aae>
08321f12 +0x01e4:  mov    0x14(%ebp),%eax
08321f15 +0x01e7:  mov    0x1c(%eax),%eax
08321f18 +0x01ea:  cmp    $0x2,%eax
08321f1b +0x01ed:  jne    08323791 <+0x1a63>
08321f21 +0x01f3:  mov    0xc(%ebp),%eax
08321f24 +0x01f6:  mov    %eax,(%esp)
08321f27 +0x01f9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08321f2c +0x01fe:  test   %eax,%eax
08321f2e +0x0200:  sete   %al
08321f31 +0x0203:  test   %al,%al
08321f33 +0x0205:  jne    083237dc <+0x1aae>
08321f39 +0x020b:  mov    0x18(%ebp),%eax
08321f3c +0x020e:  mov    %eax,(%esp)
08321f3f +0x0211:  call   0817a522 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x5a0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x5a0
08321f44 +0x0216:  mov    %eax,-0x9c(%ebp)
08321f4a +0x021c:  mov    -0x9c(%ebp),%eax
08321f50 +0x0222:  mov    0x4(%eax),%eax
08321f53 +0x0225:  mov    %eax,-0x98(%ebp)
08321f59 +0x022b:  mov    -0x9c(%ebp),%eax
08321f5f +0x0231:  mov    0x24(%eax),%eax
08321f62 +0x0234:  mov    %eax,-0x94(%ebp)
08321f68 +0x023a:  mov    -0x9c(%ebp),%eax
08321f6e +0x0240:  mov    0x20(%eax),%eax
08321f71 +0x0243:  mov    %eax,-0x90(%ebp)
08321f77 +0x0249:  mov    -0x9c(%ebp),%eax
08321f7d +0x024f:  mov    0x28(%eax),%eax
08321f80 +0x0252:  mov    %eax,-0x8c(%ebp)
08321f86 +0x0258:  mov    -0x9c(%ebp),%eax
08321f8c +0x025e:  mov    0x1c(%eax),%eax
08321f8f +0x0261:  mov    %eax,-0x88(%ebp)
08321f95 +0x0267:  mov    -0x9c(%ebp),%eax
08321f9b +0x026d:  mov    (%eax),%eax
08321f9d +0x026f:  mov    %eax,-0x84(%ebp)
08321fa3 +0x0275:  mov    -0x9c(%ebp),%eax
08321fa9 +0x027b:  mov    0x8(%eax),%eax
08321fac +0x027e:  mov    %eax,-0x80(%ebp)
08321faf +0x0281:  mov    -0x9c(%ebp),%eax
08321fb5 +0x0287:  movzwl 0xc(%eax),%eax
08321fb9 +0x028b:  mov    %ax,-0x7c(%ebp)
08321fbd +0x028f:  mov    -0x9c(%ebp),%eax
08321fc3 +0x0295:  movzbl 0x2c(%eax),%eax
08321fc7 +0x0299:  mov    %al,-0x7a(%ebp)
08321fca +0x029c:  mov    -0x9c(%ebp),%eax
08321fd0 +0x02a2:  movzbl 0x2d(%eax),%eax
08321fd4 +0x02a6:  mov    %al,-0x79(%ebp)
08321fd7 +0x02a9:  mov    -0x9c(%ebp),%eax
08321fdd +0x02af:  mov    0x10(%eax),%eax
08321fe0 +0x02b2:  mov    %eax,-0x78(%ebp)
08321fe3 +0x02b5:  mov    -0x9c(%ebp),%eax
08321fe9 +0x02bb:  mov    0x14(%eax),%eax
08321fec +0x02be:  mov    %eax,-0x74(%ebp)
08321fef +0x02c1:  mov    -0x9c(%ebp),%eax
08321ff5 +0x02c7:  mov    0x18(%eax),%eax
08321ff8 +0x02ca:  mov    %eax,-0x70(%ebp)
08321ffb +0x02cd:  mov    -0x9c(%ebp),%eax
08322001 +0x02d3:  mov    0x30(%eax),%eax
08322004 +0x02d6:  mov    %eax,-0x6c(%ebp)
08322007 +0x02d9:  lea    -0xe8(%ebp),%eax
0832200d +0x02df:  mov    %eax,(%esp)
08322010 +0x02e2:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08322015 +0x02e7:  mov    -0x9c(%ebp),%eax
0832201b +0x02ed:  movzbl 0x34(%eax),%eax
0832201f +0x02f1:  mov    %al,-0x65(%ebp)
08322022 +0x02f4:  mov    -0x9c(%ebp),%eax
08322028 +0x02fa:  mov    0x38(%eax),%eax
0832202b +0x02fd:  mov    %eax,-0x64(%ebp)
0832202e +0x0300:  mov    -0x9c(%ebp),%eax
08322034 +0x0306:  mov    0x40(%eax),%eax
08322037 +0x0309:  mov    %eax,-0x60(%ebp)
0832203a +0x030c:  lea    -0x100(%ebp),%eax
08322040 +0x0312:  mov    %eax,(%esp)
08322043 +0x0315:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
08322048 +0x031a:  movl   $0x0,-0x54(%ebp)
0832204f +0x0321:  jmp    083220c2 <+0x394>
08322051 +0x0323:  mov    -0x54(%ebp),%eax
08322054 +0x0326:  add    $0x8,%eax
08322057 +0x0329:  shl    $0x3,%eax
0832205a +0x032c:  add    -0x9c(%ebp),%eax
08322060 +0x0332:  lea    0xc(%eax),%ecx
08322063 +0x0335:  mov    -0x54(%ebp),%eax
08322066 +0x0338:  add    $0x8,%eax
08322069 +0x033b:  shl    $0x3,%eax
0832206c +0x033e:  add    -0x9c(%ebp),%eax
08322072 +0x0344:  lea    0x8(%eax),%edx
08322075 +0x0347:  lea    -0xc0(%ebp),%eax
0832207b +0x034d:  mov    %ecx,0x8(%esp)
0832207f +0x0351:  mov    %edx,0x4(%esp)
08322083 +0x0355:  mov    %eax,(%esp)
08322086 +0x0358:  call   0817a575 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x5f3>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x5f3
0832208b +0x035d:  sub    $0x4,%esp
0832208e +0x0360:  lea    -0xc0(%ebp),%eax
08322094 +0x0366:  mov    %eax,0x4(%esp)
08322098 +0x036a:  lea    -0xc8(%ebp),%eax
0832209e +0x0370:  mov    %eax,(%esp)
083220a1 +0x0373:  call   0817a5b4 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x632>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x632
083220a6 +0x0378:  lea    -0xc8(%ebp),%eax
083220ac +0x037e:  mov    %eax,0x4(%esp)
083220b0 +0x0382:  lea    -0x100(%ebp),%eax
083220b6 +0x0388:  mov    %eax,(%esp)
083220b9 +0x038b:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
083220be +0x0390:  addl   $0x1,-0x54(%ebp)
083220c2 +0x0394:  mov    -0x9c(%ebp),%eax
083220c8 +0x039a:  movzbl 0x44(%eax),%eax
083220cc +0x039e:  movzbl %al,%eax
083220cf +0x03a1:  cmp    -0x54(%ebp),%eax
083220d2 +0x03a4:  setg   %al
083220d5 +0x03a7:  test   %al,%al
083220d7 +0x03a9:  jne    08322051 <+0x323>
083220dd +0x03af:  movl   $0x0,-0x50(%ebp)
083220e4 +0x03b6:  jmp    08322111 <+0x3e3>
083220e6 +0x03b8:  mov    -0x50(%ebp),%eax
083220e9 +0x03bb:  add    $0x2c,%eax
083220ec +0x03be:  shl    $0x3,%eax
083220ef +0x03c1:  add    -0x9c(%ebp),%eax
083220f5 +0x03c7:  add    $0x4,%eax
083220f8 +0x03ca:  mov    %eax,0x4(%esp)
083220fc +0x03ce:  lea    -0x100(%ebp),%eax
08322102 +0x03d4:  add    $0xc,%eax
08322105 +0x03d7:  mov    %eax,(%esp)
08322108 +0x03da:  call   0817a5ea <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x668>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x668
0832210d +0x03df:  addl   $0x1,-0x50(%ebp)
08322111 +0x03e3:  mov    -0x9c(%ebp),%eax
08322117 +0x03e9:  movzbl 0x160(%eax),%eax
0832211e +0x03f0:  movzbl %al,%eax
08322121 +0x03f3:  cmp    -0x50(%ebp),%eax
08322124 +0x03f6:  setg   %al
08322127 +0x03f9:  test   %al,%al
08322129 +0x03fb:  jne    083220e6 <+0x3b8>
0832212b +0x03fd:  mov    0x14(%ebp),%eax
0832212e +0x0400:  add    $0x173,%eax
08322133 +0x0405:  mov    %eax,(%esp)
08322136 +0x0408:  call   0807e6f0 <_init+0xfe8>
0832213b +0x040d:  mov    %eax,-0x104(%ebp)
08322141 +0x0413:  mov    -0x104(%ebp),%eax
08322147 +0x0419:  cmp    $0x1,%eax
0832214a +0x041c:  jne    08322161 <+0x433>
0832214c +0x041e:  cmpl   $0x0,0xc(%ebp)
08322150 +0x0422:  je     08322161 <+0x433>
08322152 +0x0424:  mov    0xc(%ebp),%eax
08322155 +0x0427:  mov    %eax,(%esp)
08322158 +0x042a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0832215d +0x042f:  test   %eax,%eax
0832215f +0x0431:  jne    08322168 <+0x43a>
08322161 +0x0433:  mov    $0x1,%eax
08322166 +0x0438:  jmp    0832216d <+0x43f>
08322168 +0x043a:  mov    $0x0,%eax
0832216d +0x043f:  test   %al,%al
0832216f +0x0441:  je     0832223c <+0x50e>
08322175 +0x0447:  mov    -0x104(%ebp),%eax
0832217b +0x044d:  cmp    $0xfffffff4,%eax
0832217e +0x0450:  jne    083221da <+0x4ac>
08322180 +0x0452:  movsbl -0x65(%ebp),%eax
08322184 +0x0456:  mov    %eax,0x24(%esp)
08322188 +0x045a:  mov    -0x90(%ebp),%eax
0832218e +0x0460:  mov    %eax,0x20(%esp)
08322192 +0x0464:  mov    -0x94(%ebp),%eax
08322198 +0x046a:  mov    %eax,0x1c(%esp)
0832219c +0x046e:  mov    -0x84(%ebp),%eax
083221a2 +0x0474:  mov    %eax,0x18(%esp)
083221a6 +0x0478:  mov    -0x98(%ebp),%eax
083221ac +0x047e:  mov    %eax,0x14(%esp)
083221b0 +0x0482:  movl   $0x1a,0x10(%esp)
083221b8 +0x048a:  mov    0x14(%ebp),%eax
083221bb +0x048d:  mov    %eax,0xc(%esp)
083221bf +0x0491:  mov    0x10(%ebp),%eax
083221c2 +0x0494:  mov    %eax,0x8(%esp)
083221c6 +0x0498:  mov    0xc(%ebp),%eax
083221c9 +0x049b:  mov    %eax,0x4(%esp)
083221cd +0x049f:  mov    0x8(%ebp),%eax
083221d0 +0x04a2:  mov    %eax,(%esp)
083221d3 +0x04a5:  call   083237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>  ; WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)
083221d8 +0x04aa:  jmp    08322232 <+0x504>
083221da +0x04ac:  movsbl -0x65(%ebp),%eax
083221de +0x04b0:  mov    %eax,0x24(%esp)
083221e2 +0x04b4:  mov    -0x90(%ebp),%eax
083221e8 +0x04ba:  mov    %eax,0x20(%esp)
083221ec +0x04be:  mov    -0x94(%ebp),%eax
083221f2 +0x04c4:  mov    %eax,0x1c(%esp)
083221f6 +0x04c8:  mov    -0x84(%ebp),%eax
083221fc +0x04ce:  mov    %eax,0x18(%esp)
08322200 +0x04d2:  mov    -0x98(%ebp),%eax
08322206 +0x04d8:  mov    %eax,0x14(%esp)
0832220a +0x04dc:  movl   $0x19,0x10(%esp)
08322212 +0x04e4:  mov    0x14(%ebp),%eax
08322215 +0x04e7:  mov    %eax,0xc(%esp)
08322219 +0x04eb:  mov    0x10(%ebp),%eax
0832221c +0x04ee:  mov    %eax,0x8(%esp)
08322220 +0x04f2:  mov    0xc(%ebp),%eax
08322223 +0x04f5:  mov    %eax,0x4(%esp)
08322227 +0x04f9:  mov    0x8(%ebp),%eax
0832222a +0x04fc:  mov    %eax,(%esp)
0832222d +0x04ff:  call   083237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>  ; WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)
08322232 +0x0504:  mov    $0x0,%ebx
08322237 +0x0509:  jmp    08323747 <+0x1a19>
0832223c +0x050e:  movl   $0xffffffff,-0x5c(%ebp)
08322243 +0x0515:  movl   $0x0,-0x104(%ebp)
0832224d +0x051f:  movl   $0xffffffff,-0x108(%ebp)
08322257 +0x0529:  movl   $0x2,-0x58(%ebp)
0832225e +0x0530:  cmpl   $0x0,-0x98(%ebp)
08322265 +0x0537:  jne    08322489 <+0x75b>
0832226b +0x053d:  cmpb   $0x1,-0x65(%ebp)
0832226f +0x0541:  jne    083222c3 <+0x595>
08322271 +0x0543:  mov    0x10(%ebp),%eax
08322274 +0x0546:  add    $0x7d,%eax
08322277 +0x0549:  mov    %eax,%ebx
08322279 +0x054b:  movsbl -0x79(%ebp),%ecx
0832227d +0x054f:  movsbl -0x7a(%ebp),%edx
08322281 +0x0553:  mov    -0x80(%ebp),%eax
08322284 +0x0556:  mov    -0x64(%ebp),%esi
08322287 +0x0559:  mov    %esi,0x20(%esp)
0832228b +0x055d:  mov    -0x60(%ebp),%esi
0832228e +0x0560:  mov    %esi,0x1c(%esp)
08322292 +0x0564:  mov    %ebx,0x18(%esp)
08322296 +0x0568:  mov    %ecx,0x14(%esp)
0832229a +0x056c:  mov    %edx,0x10(%esp)
0832229e +0x0570:  mov    -0x88(%ebp),%edx
083222a4 +0x0576:  mov    %edx,0xc(%esp)
083222a8 +0x057a:  mov    %eax,0x8(%esp)
083222ac +0x057e:  mov    0xc(%ebp),%eax
083222af +0x0581:  mov    %eax,0x4(%esp)
083222b3 +0x0585:  mov    0x8(%ebp),%eax
083222b6 +0x0588:  mov    %eax,(%esp)
083222b9 +0x058b:  call   08326036 <_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji>  ; WongWork::CCeraShop::_processAvatarGift(CUser*, int, int, char, char, char const*, unsigned int, int)
083222be +0x0590:  jmp    08322d83 <+0x1055>
083222c3 +0x0595:  mov    0x10(%ebp),%eax
083222c6 +0x0598:  add    $0x7d,%eax
083222c9 +0x059b:  mov    %eax,-0x264(%ebp)
083222cf +0x05a1:  movsbl -0x79(%ebp),%edi
083222d3 +0x05a5:  movsbl -0x7a(%ebp),%esi
083222d7 +0x05a9:  mov    -0x80(%ebp),%ebx
083222da +0x05ac:  mov    0xc(%ebp),%eax
083222dd +0x05af:  mov    %eax,(%esp)
083222e0 +0x05b2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
083222e5 +0x05b7:  movl   $0x0,0x24(%esp)
083222ed +0x05bf:  movl   $0x0,0x20(%esp)
083222f5 +0x05c7:  movl   $0x0,0x1c(%esp)
083222fd +0x05cf:  mov    -0x264(%ebp),%edx
08322303 +0x05d5:  mov    %edx,0x18(%esp)
08322307 +0x05d9:  mov    %edi,0x14(%esp)
0832230b +0x05dd:  mov    %esi,0x10(%esp)
0832230f +0x05e1:  movl   $0x0,0xc(%esp)
08322317 +0x05e9:  mov    -0x88(%ebp),%edx
0832231d +0x05ef:  mov    %edx,0x8(%esp)
08322321 +0x05f3:  mov    %ebx,0x4(%esp)
08322325 +0x05f7:  mov    %eax,(%esp)
08322328 +0x05fa:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0832232d +0x05ff:  mov    %eax,-0x5c(%ebp)
08322330 +0x0602:  cmpl   $0x0,-0x5c(%ebp)
08322334 +0x0606:  jns    083223d9 <+0x6ab>
0832233a +0x060c:  movl   $0x0,0xc(%esp)
08322342 +0x0614:  movl   $"game_server_msg_104",0x8(%esp)
0832234a +0x061c:  movl   $0x4,0x4(%esp)
08322352 +0x0624:  movl   $&g_scriptStringManager_,(%esp)
08322359 +0x062b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0832235e +0x0630:  mov    %eax,-0x4c(%ebp)
08322361 +0x0633:  mov    -0x4c(%ebp),%eax
08322364 +0x0636:  mov    %eax,(%esp)
08322367 +0x0639:  call   0807e3b0 <_init+0xca8>
0832236c +0x063e:  mov    %eax,-0x260(%ebp)
08322372 +0x0644:  mov    0x10(%ebp),%eax
08322375 +0x0647:  add    $0x7d,%eax
08322378 +0x064a:  mov    %eax,-0x25c(%ebp)
0832237e +0x0650:  movsbl -0x79(%ebp),%edi
08322382 +0x0654:  movsbl -0x7a(%ebp),%esi
08322386 +0x0658:  mov    -0x80(%ebp),%ebx
08322389 +0x065b:  mov    0xc(%ebp),%eax
0832238c +0x065e:  mov    %eax,(%esp)
0832238f +0x0661:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08322394 +0x0666:  mov    -0x260(%ebp),%edx
0832239a +0x066c:  mov    %edx,0x20(%esp)
0832239e +0x0670:  mov    -0x4c(%ebp),%edx
083223a1 +0x0673:  mov    %edx,0x1c(%esp)
083223a5 +0x0677:  mov    -0x25c(%ebp),%edx
083223ab +0x067d:  mov    %edx,0x18(%esp)
083223af +0x0681:  mov    %edi,0x14(%esp)
083223b3 +0x0685:  mov    %esi,0x10(%esp)
083223b7 +0x0689:  mov    -0x88(%ebp),%edx
083223bd +0x068f:  mov    %edx,0xc(%esp)
083223c1 +0x0693:  mov    %ebx,0x8(%esp)
083223c5 +0x0697:  mov    %eax,0x4(%esp)
083223c9 +0x069b:  mov    0xc(%ebp),%eax
083223cc +0x069e:  mov    %eax,(%esp)
083223cf +0x06a1:  call   085561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)
083223d4 +0x06a6:  jmp    08322d83 <+0x1055>
083223d9 +0x06ab:  mov    -0x5c(%ebp),%eax
083223dc +0x06ae:  mov    %eax,0xc(%esp)
083223e0 +0x06b2:  movl   $0x1,0x8(%esp)
083223e8 +0x06ba:  movl   $0x1,0x4(%esp)
083223f0 +0x06c2:  mov    0xc(%ebp),%eax
083223f3 +0x06c5:  mov    %eax,(%esp)
083223f6 +0x06c8:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
083223fb +0x06cd:  call   0848f140 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv>  ; WongWork::CEventMgr::IsChildrensDayEventing()
08322400 +0x06d2:  test   %al,%al
08322402 +0x06d4:  je     08322d83 <+0x1055>
08322408 +0x06da:  mov    -0x84(%ebp),%ebx
0832240e +0x06e0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08322413 +0x06e5:  mov    %ebx,0x4(%esp)
08322417 +0x06e9:  mov    %eax,(%esp)
0832241a +0x06ec:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
0832241f +0x06f1:  mov    %eax,-0x48(%ebp)
08322422 +0x06f4:  mov    -0x80(%ebp),%ebx
08322425 +0x06f7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0832242a +0x06fc:  mov    %ebx,0x4(%esp)
0832242e +0x0700:  mov    %eax,(%esp)
08322431 +0x0703:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08322436 +0x0708:  mov    %eax,-0x44(%ebp)
08322439 +0x070b:  mov    -0x48(%ebp),%eax
0832243c +0x070e:  mov    %eax,(%esp)
0832243f +0x0711:  call   0817a060 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xde>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xde
08322444 +0x0716:  cmp    $0x16,%eax
08322447 +0x0719:  sete   %al
0832244a +0x071c:  test   %al,%al
0832244c +0x071e:  je     08322d83 <+0x1055>
08322452 +0x0724:  mov    -0x44(%ebp),%eax
08322455 +0x0727:  mov    (%eax),%eax
08322457 +0x0729:  add    $0xc,%eax
0832245a +0x072c:  mov    (%eax),%edx
0832245c +0x072e:  mov    -0x44(%ebp),%eax
0832245f +0x0731:  mov    %eax,(%esp)
08322462 +0x0734:  call   *%edx
08322464 +0x0736:  mov    -0x88(%ebp),%edx
0832246a +0x073c:  mov    %edx,0xc(%esp)
0832246e +0x0740:  mov    -0x5c(%ebp),%edx
08322471 +0x0743:  mov    %edx,0x8(%esp)
08322475 +0x0747:  mov    %eax,0x4(%esp)
08322479 +0x074b:  mov    0xc(%ebp),%eax
0832247c +0x074e:  mov    %eax,(%esp)
0832247f +0x0751:  call   083281be <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x117>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x117
08322484 +0x0756:  jmp    08322d83 <+0x1055>
08322489 +0x075b:  cmpl   $0x1,-0x98(%ebp)
08322490 +0x0762:  jne    083224ec <+0x7be>
08322492 +0x0764:  cmpb   $0x1,-0x65(%ebp)
08322496 +0x0768:  jne    083224c5 <+0x797>
08322498 +0x076a:  movzwl -0x7c(%ebp),%eax
0832249c +0x076e:  mov    -0x64(%ebp),%edx
0832249f +0x0771:  mov    %edx,0x10(%esp)
083224a3 +0x0775:  mov    -0x60(%ebp),%edx
083224a6 +0x0778:  mov    %edx,0xc(%esp)
083224aa +0x077c:  mov    %eax,0x8(%esp)
083224ae +0x0780:  mov    0xc(%ebp),%eax
083224b1 +0x0783:  mov    %eax,0x4(%esp)
083224b5 +0x0787:  mov    0x8(%ebp),%eax
083224b8 +0x078a:  mov    %eax,(%esp)
083224bb +0x078d:  call   0832619c <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji>  ; WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int)
083224c0 +0x0792:  jmp    08322d83 <+0x1055>
083224c5 +0x0797:  movzwl -0x7c(%ebp),%eax
083224c9 +0x079b:  movl   $0x1,0xc(%esp)
083224d1 +0x07a3:  mov    %eax,0x8(%esp)
083224d5 +0x07a7:  mov    0xc(%ebp),%eax
083224d8 +0x07aa:  mov    %eax,0x4(%esp)
083224dc +0x07ae:  mov    0x8(%ebp),%eax
083224df +0x07b1:  mov    %eax,(%esp)
083224e2 +0x07b4:  call   08325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>  ; WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool)
083224e7 +0x07b9:  jmp    08322d83 <+0x1055>
083224ec +0x07be:  cmpl   $0x2,-0x98(%ebp)
083224f3 +0x07c5:  je     0832250b <+0x7dd>
083224f5 +0x07c7:  cmpl   $0x7,-0x98(%ebp)
083224fc +0x07ce:  je     0832250b <+0x7dd>
083224fe +0x07d0:  cmpl   $0x9,-0x98(%ebp)
08322505 +0x07d7:  jne    0832272d <+0x9ff>
0832250b +0x07dd:  movl   $0x1,-0x58(%ebp)
08322512 +0x07e4:  mov    -0x80(%ebp),%ebx
08322515 +0x07e7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0832251a +0x07ec:  mov    %ebx,0x4(%esp)
0832251e +0x07f0:  mov    %eax,(%esp)
08322521 +0x07f3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08322526 +0x07f8:  mov    %eax,-0x40(%ebp)
08322529 +0x07fb:  lea    -0x195(%ebp),%eax
0832252f +0x0801:  mov    %eax,(%esp)
08322532 +0x0804:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08322537 +0x0809:  mov    -0x40(%ebp),%eax
0832253a +0x080c:  mov    (%eax),%eax
0832253c +0x080e:  add    $0x8,%eax
0832253f +0x0811:  mov    (%eax),%edx
08322541 +0x0813:  lea    -0x195(%ebp),%eax
08322547 +0x0819:  mov    %eax,0x4(%esp)
0832254b +0x081d:  mov    -0x40(%ebp),%eax
0832254e +0x0820:  mov    %eax,(%esp)
08322551 +0x0823:  call   *%edx
08322553 +0x0825:  mov    -0x80(%ebp),%eax
08322556 +0x0828:  mov    %eax,-0x193(%ebp)
0832255c +0x082e:  movzwl -0x7c(%ebp),%eax
08322560 +0x0832:  mov    %eax,-0x18e(%ebp)
08322566 +0x0838:  cmpb   $0x1,-0x65(%ebp)
0832256a +0x083c:  jne    08322636 <+0x908>
08322570 +0x0842:  mov    -0x64(%ebp),%eax
08322573 +0x0845:  mov    %eax,0x4c(%esp)
08322577 +0x0849:  mov    -0x60(%ebp),%eax
0832257a +0x084c:  mov    %eax,0x48(%esp)
0832257e +0x0850:  mov    -0x195(%ebp),%eax
08322584 +0x0856:  mov    %eax,0x8(%esp)
08322588 +0x085a:  mov    -0x191(%ebp),%eax
0832258e +0x0860:  mov    %eax,0xc(%esp)
08322592 +0x0864:  mov    -0x18d(%ebp),%eax
08322598 +0x086a:  mov    %eax,0x10(%esp)
0832259c +0x086e:  mov    -0x189(%ebp),%eax
083225a2 +0x0874:  mov    %eax,0x14(%esp)
083225a6 +0x0878:  mov    -0x185(%ebp),%eax
083225ac +0x087e:  mov    %eax,0x18(%esp)
083225b0 +0x0882:  mov    -0x181(%ebp),%eax
083225b6 +0x0888:  mov    %eax,0x1c(%esp)
083225ba +0x088c:  mov    -0x17d(%ebp),%eax
083225c0 +0x0892:  mov    %eax,0x20(%esp)
083225c4 +0x0896:  mov    -0x179(%ebp),%eax
083225ca +0x089c:  mov    %eax,0x24(%esp)
083225ce +0x08a0:  mov    -0x175(%ebp),%eax
083225d4 +0x08a6:  mov    %eax,0x28(%esp)
083225d8 +0x08aa:  mov    -0x171(%ebp),%eax
083225de +0x08b0:  mov    %eax,0x2c(%esp)
083225e2 +0x08b4:  mov    -0x16d(%ebp),%eax
083225e8 +0x08ba:  mov    %eax,0x30(%esp)
083225ec +0x08be:  mov    -0x169(%ebp),%eax
083225f2 +0x08c4:  mov    %eax,0x34(%esp)
083225f6 +0x08c8:  mov    -0x165(%ebp),%eax
083225fc +0x08ce:  mov    %eax,0x38(%esp)
08322600 +0x08d2:  mov    -0x161(%ebp),%eax
08322606 +0x08d8:  mov    %eax,0x3c(%esp)
0832260a +0x08dc:  mov    -0x15d(%ebp),%eax
08322610 +0x08e2:  mov    %eax,0x40(%esp)
08322614 +0x08e6:  movzbl -0x159(%ebp),%eax
0832261b +0x08ed:  mov    %al,0x44(%esp)
0832261f +0x08f1:  mov    0xc(%ebp),%eax
08322622 +0x08f4:  mov    %eax,0x4(%esp)
08322626 +0x08f8:  mov    0x8(%ebp),%eax
08322629 +0x08fb:  mov    %eax,(%esp)
0832262c +0x08fe:  call   083264d6 <_ZN8WongWork9CCeraShop16_processItemGiftEP5CUser10Inven_Itemji>  ; WongWork::CCeraShop::_processItemGift(CUser*, Inven_Item, unsigned int, int)
08322631 +0x0903:  jmp    08322d83 <+0x1055>
08322636 +0x0908:  lea    -0x100(%ebp),%eax
0832263c +0x090e:  mov    %eax,0x60(%esp)
08322640 +0x0912:  lea    -0xe8(%ebp),%eax
08322646 +0x0918:  mov    %eax,0x5c(%esp)
0832264a +0x091c:  movl   $0x1,0x58(%esp)
08322652 +0x0924:  movl   $0x0,0x54(%esp)
0832265a +0x092c:  mov    -0x6c(%ebp),%eax
0832265d +0x092f:  mov    %eax,0x50(%esp)
08322661 +0x0933:  lea    -0x104(%ebp),%eax
08322667 +0x0939:  mov    %eax,0x4c(%esp)
0832266b +0x093d:  mov    -0x8c(%ebp),%eax
08322671 +0x0943:  mov    %eax,0x48(%esp)
08322675 +0x0947:  mov    -0x195(%ebp),%eax
0832267b +0x094d:  mov    %eax,0x8(%esp)
0832267f +0x0951:  mov    -0x191(%ebp),%eax
08322685 +0x0957:  mov    %eax,0xc(%esp)
08322689 +0x095b:  mov    -0x18d(%ebp),%eax
0832268f +0x0961:  mov    %eax,0x10(%esp)
08322693 +0x0965:  mov    -0x189(%ebp),%eax
08322699 +0x096b:  mov    %eax,0x14(%esp)
0832269d +0x096f:  mov    -0x185(%ebp),%eax
083226a3 +0x0975:  mov    %eax,0x18(%esp)
083226a7 +0x0979:  mov    -0x181(%ebp),%eax
083226ad +0x097f:  mov    %eax,0x1c(%esp)
083226b1 +0x0983:  mov    -0x17d(%ebp),%eax
083226b7 +0x0989:  mov    %eax,0x20(%esp)
083226bb +0x098d:  mov    -0x179(%ebp),%eax
083226c1 +0x0993:  mov    %eax,0x24(%esp)
083226c5 +0x0997:  mov    -0x175(%ebp),%eax
083226cb +0x099d:  mov    %eax,0x28(%esp)
083226cf +0x09a1:  mov    -0x171(%ebp),%eax
083226d5 +0x09a7:  mov    %eax,0x2c(%esp)
083226d9 +0x09ab:  mov    -0x16d(%ebp),%eax
083226df +0x09b1:  mov    %eax,0x30(%esp)
083226e3 +0x09b5:  mov    -0x169(%ebp),%eax
083226e9 +0x09bb:  mov    %eax,0x34(%esp)
083226ed +0x09bf:  mov    -0x165(%ebp),%eax
083226f3 +0x09c5:  mov    %eax,0x38(%esp)
083226f7 +0x09c9:  mov    -0x161(%ebp),%eax
083226fd +0x09cf:  mov    %eax,0x3c(%esp)
08322701 +0x09d3:  mov    -0x15d(%ebp),%eax
08322707 +0x09d9:  mov    %eax,0x40(%esp)
0832270b +0x09dd:  movzbl -0x159(%ebp),%eax
08322712 +0x09e4:  mov    %al,0x44(%esp)
08322716 +0x09e8:  mov    0xc(%ebp),%eax
08322719 +0x09eb:  mov    %eax,0x4(%esp)
0832271d +0x09ef:  mov    0x8(%ebp),%eax
08322720 +0x09f2:  mov    %eax,(%esp)
08322723 +0x09f5:  call   08325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>  ; WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)
08322728 +0x09fa:  jmp    08322d83 <+0x1055>
0832272d +0x09ff:  cmpl   $0x4,-0x98(%ebp)
08322734 +0x0a06:  jne    0832293e <+0xc10>
0832273a +0x0a0c:  movl   $0x1,-0x58(%ebp)
08322741 +0x0a13:  mov    -0x80(%ebp),%ebx
08322744 +0x0a16:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08322749 +0x0a1b:  mov    %ebx,0x4(%esp)
0832274d +0x0a1f:  mov    %eax,(%esp)
08322750 +0x0a22:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08322755 +0x0a27:  mov    %eax,-0x3c(%ebp)
08322758 +0x0a2a:  cmpl   $0x0,-0x3c(%ebp)
0832275c +0x0a2e:  jne    08322768 <+0xa3a>
0832275e +0x0a30:  mov    $0x0,%ebx
08322763 +0x0a35:  jmp    08323747 <+0x1a19>
08322768 +0x0a3a:  lea    -0x1d2(%ebp),%eax
0832276e +0x0a40:  mov    %eax,(%esp)
08322771 +0x0a43:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08322776 +0x0a48:  mov    -0x3c(%ebp),%eax
08322779 +0x0a4b:  mov    (%eax),%eax
0832277b +0x0a4d:  add    $0x8,%eax
0832277e +0x0a50:  mov    (%eax),%edx
08322780 +0x0a52:  lea    -0x1d2(%ebp),%eax
08322786 +0x0a58:  mov    %eax,0x4(%esp)
0832278a +0x0a5c:  mov    -0x3c(%ebp),%eax
0832278d +0x0a5f:  mov    %eax,(%esp)
08322790 +0x0a62:  call   *%edx
08322792 +0x0a64:  mov    -0x80(%ebp),%eax
08322795 +0x0a67:  mov    %eax,-0x1d0(%ebp)
0832279b +0x0a6d:  movzwl -0x7c(%ebp),%eax
0832279f +0x0a71:  mov    %eax,-0x1cb(%ebp)
083227a5 +0x0a77:  mov    -0x1d0(%ebp),%eax
083227ab +0x0a7d:  movl   $0x1,0x30(%esp)
083227b3 +0x0a85:  movl   $0x0,0x2c(%esp)
083227bb +0x0a8d:  movl   $0x0,0x28(%esp)
083227c3 +0x0a95:  movl   $0x0,0x24(%esp)
083227cb +0x0a9d:  lea    -0x100(%ebp),%edx
083227d1 +0x0aa3:  mov    %edx,0x20(%esp)
083227d5 +0x0aa7:  lea    -0xe8(%ebp),%edx
083227db +0x0aad:  mov    %edx,0x1c(%esp)
083227df +0x0ab1:  movl   $0x0,0x18(%esp)
083227e7 +0x0ab9:  mov    -0x6c(%ebp),%edx
083227ea +0x0abc:  mov    %edx,0x14(%esp)
083227ee +0x0ac0:  lea    -0x104(%ebp),%edx
083227f4 +0x0ac6:  mov    %edx,0x10(%esp)
083227f8 +0x0aca:  mov    -0x8c(%ebp),%edx
083227fe +0x0ad0:  mov    %edx,0xc(%esp)
08322802 +0x0ad4:  mov    %eax,0x8(%esp)
08322806 +0x0ad8:  mov    0xc(%ebp),%eax
08322809 +0x0adb:  mov    %eax,0x4(%esp)
0832280d +0x0adf:  mov    0x8(%ebp),%eax
08322810 +0x0ae2:  mov    %eax,(%esp)
08322813 +0x0ae5:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
08322818 +0x0aea:  xor    $0x1,%eax
0832281b +0x0aed:  test   %al,%al
0832281d +0x0aef:  je     08322d83 <+0x1055>
08322823 +0x0af5:  mov    0xc(%ebp),%eax
08322826 +0x0af8:  mov    %eax,(%esp)
08322829 +0x0afb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0832282e +0x0b00:  movl   $0x0,0x4c(%esp)
08322836 +0x0b08:  movl   $0x1,0x48(%esp)
0832283e +0x0b10:  movl   $0x1e,0x44(%esp)
08322846 +0x0b18:  mov    -0x1d2(%ebp),%edx
0832284c +0x0b1e:  mov    %edx,0x4(%esp)
08322850 +0x0b22:  mov    -0x1ce(%ebp),%edx
08322856 +0x0b28:  mov    %edx,0x8(%esp)
0832285a +0x0b2c:  mov    -0x1ca(%ebp),%edx
08322860 +0x0b32:  mov    %edx,0xc(%esp)
08322864 +0x0b36:  mov    -0x1c6(%ebp),%edx
0832286a +0x0b3c:  mov    %edx,0x10(%esp)
0832286e +0x0b40:  mov    -0x1c2(%ebp),%edx
08322874 +0x0b46:  mov    %edx,0x14(%esp)
08322878 +0x0b4a:  mov    -0x1be(%ebp),%edx
0832287e +0x0b50:  mov    %edx,0x18(%esp)
08322882 +0x0b54:  mov    -0x1ba(%ebp),%edx
08322888 +0x0b5a:  mov    %edx,0x1c(%esp)
0832288c +0x0b5e:  mov    -0x1b6(%ebp),%edx
08322892 +0x0b64:  mov    %edx,0x20(%esp)
08322896 +0x0b68:  mov    -0x1b2(%ebp),%edx
0832289c +0x0b6e:  mov    %edx,0x24(%esp)
083228a0 +0x0b72:  mov    -0x1ae(%ebp),%edx
083228a6 +0x0b78:  mov    %edx,0x28(%esp)
083228aa +0x0b7c:  mov    -0x1aa(%ebp),%edx
083228b0 +0x0b82:  mov    %edx,0x2c(%esp)
083228b4 +0x0b86:  mov    -0x1a6(%ebp),%edx
083228ba +0x0b8c:  mov    %edx,0x30(%esp)
083228be +0x0b90:  mov    -0x1a2(%ebp),%edx
083228c4 +0x0b96:  mov    %edx,0x34(%esp)
083228c8 +0x0b9a:  mov    -0x19e(%ebp),%edx
083228ce +0x0ba0:  mov    %edx,0x38(%esp)
083228d2 +0x0ba4:  mov    -0x19a(%ebp),%edx
083228d8 +0x0baa:  mov    %edx,0x3c(%esp)
083228dc +0x0bae:  movzbl -0x196(%ebp),%edx
083228e3 +0x0bb5:  mov    %dl,0x40(%esp)
083228e7 +0x0bb9:  mov    %eax,(%esp)
083228ea +0x0bbc:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
083228ef +0x0bc1:  mov    %eax,-0x5c(%ebp)
083228f2 +0x0bc4:  cmpl   $0xffffffff,-0x5c(%ebp)
083228f6 +0x0bc8:  setne  %al
083228f9 +0x0bcb:  test   %al,%al
083228fb +0x0bcd:  je     0832292f <+0xc01>
083228fd +0x0bcf:  mov    -0x5c(%ebp),%eax
08322900 +0x0bd2:  mov    %eax,0xc(%esp)
08322904 +0x0bd6:  movl   $0x0,0x8(%esp)
0832290c +0x0bde:  movl   $0x1,0x4(%esp)
08322914 +0x0be6:  mov    0xc(%ebp),%eax
08322917 +0x0be9:  mov    %eax,(%esp)
0832291a +0x0bec:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0832291f +0x0bf1:  mov    0xc(%ebp),%eax
08322922 +0x0bf4:  mov    %eax,(%esp)
08322925 +0x0bf7:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
0832292a +0x0bfc:  jmp    08322d83 <+0x1055>
0832292f +0x0c01:  movl   $0x4,-0x104(%ebp)
08322939 +0x0c0b:  jmp    08322d83 <+0x1055>
0832293e +0x0c10:  cmpl   $0x3,-0x98(%ebp)
08322945 +0x0c17:  jne    08322b83 <+0xe55>
0832294b +0x0c1d:  mov    -0x80(%ebp),%ebx
0832294e +0x0c20:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08322953 +0x0c25:  mov    %ebx,0x4(%esp)
08322957 +0x0c29:  mov    %eax,(%esp)
0832295a +0x0c2c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0832295f +0x0c31:  mov    %eax,-0x38(%ebp)
08322962 +0x0c34:  lea    -0x20f(%ebp),%eax
08322968 +0x0c3a:  mov    %eax,(%esp)
0832296b +0x0c3d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08322970 +0x0c42:  mov    -0x38(%ebp),%eax
08322973 +0x0c45:  mov    (%eax),%eax
08322975 +0x0c47:  add    $0x8,%eax
08322978 +0x0c4a:  mov    (%eax),%edx
0832297a +0x0c4c:  lea    -0x20f(%ebp),%eax
08322980 +0x0c52:  mov    %eax,0x4(%esp)
08322984 +0x0c56:  mov    -0x38(%ebp),%eax
08322987 +0x0c59:  mov    %eax,(%esp)
0832298a +0x0c5c:  call   *%edx
0832298c +0x0c5e:  mov    -0x80(%ebp),%eax
0832298f +0x0c61:  mov    %eax,-0x20d(%ebp)
08322995 +0x0c67:  movzwl -0x7c(%ebp),%eax
08322999 +0x0c6b:  mov    %eax,-0x208(%ebp)
0832299f +0x0c71:  cmpb   $0x1,-0x65(%ebp)
083229a3 +0x0c75:  jne    08322a8f <+0xd61>
083229a9 +0x0c7b:  mov    -0x38(%ebp),%eax
083229ac +0x0c7e:  mov    %eax,(%esp)
083229af +0x0c81:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
083229b4 +0x0c86:  mov    %eax,%ebx
083229b6 +0x0c88:  mov    -0x38(%ebp),%eax
083229b9 +0x0c8b:  mov    %eax,(%esp)
083229bc +0x0c8e:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
083229c1 +0x0c93:  mov    %ebx,0x54(%esp)
083229c5 +0x0c97:  mov    %eax,0x50(%esp)
083229c9 +0x0c9b:  mov    -0x64(%ebp),%eax
083229cc +0x0c9e:  mov    %eax,0x4c(%esp)
083229d0 +0x0ca2:  mov    -0x60(%ebp),%eax
083229d3 +0x0ca5:  mov    %eax,0x48(%esp)
083229d7 +0x0ca9:  mov    -0x20f(%ebp),%eax
083229dd +0x0caf:  mov    %eax,0x8(%esp)
083229e1 +0x0cb3:  mov    -0x20b(%ebp),%eax
083229e7 +0x0cb9:  mov    %eax,0xc(%esp)
083229eb +0x0cbd:  mov    -0x207(%ebp),%eax
083229f1 +0x0cc3:  mov    %eax,0x10(%esp)
083229f5 +0x0cc7:  mov    -0x203(%ebp),%eax
083229fb +0x0ccd:  mov    %eax,0x14(%esp)
083229ff +0x0cd1:  mov    -0x1ff(%ebp),%eax
08322a05 +0x0cd7:  mov    %eax,0x18(%esp)
08322a09 +0x0cdb:  mov    -0x1fb(%ebp),%eax
08322a0f +0x0ce1:  mov    %eax,0x1c(%esp)
08322a13 +0x0ce5:  mov    -0x1f7(%ebp),%eax
08322a19 +0x0ceb:  mov    %eax,0x20(%esp)
08322a1d +0x0cef:  mov    -0x1f3(%ebp),%eax
08322a23 +0x0cf5:  mov    %eax,0x24(%esp)
08322a27 +0x0cf9:  mov    -0x1ef(%ebp),%eax
08322a2d +0x0cff:  mov    %eax,0x28(%esp)
08322a31 +0x0d03:  mov    -0x1eb(%ebp),%eax
08322a37 +0x0d09:  mov    %eax,0x2c(%esp)
08322a3b +0x0d0d:  mov    -0x1e7(%ebp),%eax
08322a41 +0x0d13:  mov    %eax,0x30(%esp)
08322a45 +0x0d17:  mov    -0x1e3(%ebp),%eax
08322a4b +0x0d1d:  mov    %eax,0x34(%esp)
08322a4f +0x0d21:  mov    -0x1df(%ebp),%eax
08322a55 +0x0d27:  mov    %eax,0x38(%esp)
08322a59 +0x0d2b:  mov    -0x1db(%ebp),%eax
08322a5f +0x0d31:  mov    %eax,0x3c(%esp)
08322a63 +0x0d35:  mov    -0x1d7(%ebp),%eax
08322a69 +0x0d3b:  mov    %eax,0x40(%esp)
08322a6d +0x0d3f:  movzbl -0x1d3(%ebp),%eax
08322a74 +0x0d46:  mov    %al,0x44(%esp)
08322a78 +0x0d4a:  mov    0xc(%ebp),%eax
08322a7b +0x0d4d:  mov    %eax,0x4(%esp)
08322a7f +0x0d51:  mov    0x8(%ebp),%eax
08322a82 +0x0d54:  mov    %eax,(%esp)
08322a85 +0x0d57:  call   083265e8 <_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii>  ; WongWork::CCeraShop::_processCreatureGift(CUser*, Inven_Item, unsigned int, int, int, int)
08322a8a +0x0d5c:  jmp    08322d83 <+0x1055>
08322a8f +0x0d61:  mov    -0x38(%ebp),%eax
08322a92 +0x0d64:  mov    %eax,(%esp)
08322a95 +0x0d67:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08322a9a +0x0d6c:  mov    %eax,%ebx
08322a9c +0x0d6e:  mov    -0x38(%ebp),%eax
08322a9f +0x0d71:  mov    %eax,(%esp)
08322aa2 +0x0d74:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08322aa7 +0x0d79:  mov    %ebx,0x58(%esp)
08322aab +0x0d7d:  mov    %eax,0x54(%esp)
08322aaf +0x0d81:  movl   $0x1,0x50(%esp)
08322ab7 +0x0d89:  lea    -0x104(%ebp),%eax
08322abd +0x0d8f:  mov    %eax,0x4c(%esp)
08322ac1 +0x0d93:  lea    -0x108(%ebp),%eax
08322ac7 +0x0d99:  mov    %eax,0x48(%esp)
08322acb +0x0d9d:  mov    -0x20f(%ebp),%eax
08322ad1 +0x0da3:  mov    %eax,0x8(%esp)
08322ad5 +0x0da7:  mov    -0x20b(%ebp),%eax
08322adb +0x0dad:  mov    %eax,0xc(%esp)
08322adf +0x0db1:  mov    -0x207(%ebp),%eax
08322ae5 +0x0db7:  mov    %eax,0x10(%esp)
08322ae9 +0x0dbb:  mov    -0x203(%ebp),%eax
08322aef +0x0dc1:  mov    %eax,0x14(%esp)
08322af3 +0x0dc5:  mov    -0x1ff(%ebp),%eax
08322af9 +0x0dcb:  mov    %eax,0x18(%esp)
08322afd +0x0dcf:  mov    -0x1fb(%ebp),%eax
08322b03 +0x0dd5:  mov    %eax,0x1c(%esp)
08322b07 +0x0dd9:  mov    -0x1f7(%ebp),%eax
08322b0d +0x0ddf:  mov    %eax,0x20(%esp)
08322b11 +0x0de3:  mov    -0x1f3(%ebp),%eax
08322b17 +0x0de9:  mov    %eax,0x24(%esp)
08322b1b +0x0ded:  mov    -0x1ef(%ebp),%eax
08322b21 +0x0df3:  mov    %eax,0x28(%esp)
08322b25 +0x0df7:  mov    -0x1eb(%ebp),%eax
08322b2b +0x0dfd:  mov    %eax,0x2c(%esp)
08322b2f +0x0e01:  mov    -0x1e7(%ebp),%eax
08322b35 +0x0e07:  mov    %eax,0x30(%esp)
08322b39 +0x0e0b:  mov    -0x1e3(%ebp),%eax
08322b3f +0x0e11:  mov    %eax,0x34(%esp)
08322b43 +0x0e15:  mov    -0x1df(%ebp),%eax
08322b49 +0x0e1b:  mov    %eax,0x38(%esp)
08322b4d +0x0e1f:  mov    -0x1db(%ebp),%eax
08322b53 +0x0e25:  mov    %eax,0x3c(%esp)
08322b57 +0x0e29:  mov    -0x1d7(%ebp),%eax
08322b5d +0x0e2f:  mov    %eax,0x40(%esp)
08322b61 +0x0e33:  movzbl -0x1d3(%ebp),%eax
08322b68 +0x0e3a:  mov    %al,0x44(%esp)
08322b6c +0x0e3e:  mov    0xc(%ebp),%eax
08322b6f +0x0e41:  mov    %eax,0x4(%esp)
08322b73 +0x0e45:  mov    0x8(%ebp),%eax
08322b76 +0x0e48:  mov    %eax,(%esp)
08322b79 +0x0e4b:  call   08325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>  ; WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)
08322b7e +0x0e50:  jmp    08322d83 <+0x1055>
08322b83 +0x0e55:  cmpl   $0xa,-0x98(%ebp)
08322b8a +0x0e5c:  jne    08322d83 <+0x1055>
08322b90 +0x0e62:  movzbl -0x79(%ebp),%eax
08322b94 +0x0e66:  movzbl %al,%ecx
08322b97 +0x0e69:  movzbl -0x7a(%ebp),%eax
08322b9b +0x0e6d:  movzbl %al,%edx
08322b9e +0x0e70:  movzwl -0x7c(%ebp),%eax
08322ba2 +0x0e74:  movl   $0x0,0x20(%esp)
08322baa +0x0e7c:  lea    -0x100(%ebp),%ebx
08322bb0 +0x0e82:  mov    %ebx,0x1c(%esp)
08322bb4 +0x0e86:  lea    -0xe8(%ebp),%ebx
08322bba +0x0e8c:  mov    %ebx,0x18(%esp)
08322bbe +0x0e90:  mov    %ecx,0x14(%esp)
08322bc2 +0x0e94:  mov    %edx,0x10(%esp)
08322bc6 +0x0e98:  mov    %eax,0xc(%esp)
08322bca +0x0e9c:  mov    -0x80(%ebp),%eax
08322bcd +0x0e9f:  mov    %eax,0x8(%esp)
08322bd1 +0x0ea3:  mov    0xc(%ebp),%eax
08322bd4 +0x0ea6:  mov    %eax,0x4(%esp)
08322bd8 +0x0eaa:  mov    0x8(%ebp),%eax
08322bdb +0x0ead:  mov    %eax,(%esp)
08322bde +0x0eb0:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
08322be3 +0x0eb5:  movl   $0xffffffff,-0x98(%ebp)
08322bed +0x0ebf:  mov    -0x80(%ebp),%ebx
08322bf0 +0x0ec2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08322bf5 +0x0ec7:  mov    %ebx,0x4(%esp)
08322bf9 +0x0ecb:  mov    %eax,(%esp)
08322bfc +0x0ece:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08322c01 +0x0ed3:  mov    %eax,-0x34(%ebp)
08322c04 +0x0ed6:  cmpl   $0x0,-0x34(%ebp)
08322c08 +0x0eda:  je     08322c20 <+0xef2>
08322c0a +0x0edc:  mov    -0x34(%ebp),%eax
08322c0d +0x0edf:  mov    %eax,(%esp)
08322c10 +0x0ee2:  call   08179fb4 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x32>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x32
08322c15 +0x0ee7:  test   %al,%al
08322c17 +0x0ee9:  je     08322c20 <+0xef2>
08322c19 +0x0eeb:  mov    $0x1,%eax
08322c1e +0x0ef0:  jmp    08322c25 <+0xef7>
08322c20 +0x0ef2:  mov    $0x0,%eax
08322c25 +0x0ef7:  test   %al,%al
08322c27 +0x0ef9:  je     08322c33 <+0xf05>
08322c29 +0x0efb:  movl   $0x7,-0x98(%ebp)
08322c33 +0x0f05:  cmpl   $0x7,-0x98(%ebp)
08322c3a +0x0f0c:  je     08322c4a <+0xf1c>
08322c3c +0x0f0e:  lea    -0xe8(%ebp),%eax
08322c42 +0x0f14:  mov    %eax,(%esp)
08322c45 +0x0f17:  call   08152ad0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2405>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2405
08322c4a +0x0f1c:  movl   $0x0,-0x30(%ebp)
08322c51 +0x0f23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08322c56 +0x0f28:  mov    %eax,(%esp)
08322c59 +0x0f2b:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
08322c5e +0x0f30:  mov    -0x84(%ebp),%edx
08322c64 +0x0f36:  mov    %edx,0x4(%esp)
08322c68 +0x0f3a:  mov    %eax,(%esp)
08322c6b +0x0f3d:  call   0817a0a8 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x126>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x126
08322c70 +0x0f42:  mov    %eax,-0x30(%ebp)
08322c73 +0x0f45:  cmpl   $0x0,-0x30(%ebp)
08322c77 +0x0f49:  sete   %al
08322c7a +0x0f4c:  test   %al,%al
08322c7c +0x0f4e:  je     08322caa <+0xf7c>
08322c7e +0x0f50:  movl   $0x4,(%esp)
08322c85 +0x0f57:  call   08725800 <__cxa_allocate_exception>
08322c8a +0x0f5c:  mov    %eax,%edx
08322c8c +0x0f5e:  movl   $0x11,(%edx)
08322c92 +0x0f64:  movl   $0x0,0x8(%esp)
08322c9a +0x0f6c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08322ca2 +0x0f74:  mov    %eax,(%esp)
08322ca5 +0x0f77:  call   08724c50 <__cxa_throw>
08322caa +0x0f7c:  movb   $0x0,-0x109(%ebp)
08322cb1 +0x0f83:  movl   $0x0,-0x110(%ebp)
08322cbb +0x0f8d:  movl   $0x0,-0x114(%ebp)
08322cc5 +0x0f97:  mov    -0x30(%ebp),%eax
08322cc8 +0x0f9a:  mov    %eax,(%esp)
08322ccb +0x0f9d:  call   0817a09c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x11a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x11a
08322cd0 +0x0fa2:  mov    %eax,-0x2c(%ebp)
08322cd3 +0x0fa5:  cmpl   $0x0,-0x2c(%ebp)
08322cd7 +0x0fa9:  jne    08322d1c <+0xfee>
08322cd9 +0x0fab:  mov    -0x30(%ebp),%eax
08322cdc +0x0fae:  mov    %eax,(%esp)
08322cdf +0x0fb1:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
08322ce4 +0x0fb6:  lea    -0x109(%ebp),%edx
08322cea +0x0fbc:  mov    %edx,0x10(%esp)
08322cee +0x0fc0:  lea    -0x114(%ebp),%edx
08322cf4 +0x0fc6:  mov    %edx,0xc(%esp)
08322cf8 +0x0fca:  lea    -0x110(%ebp),%edx
08322cfe +0x0fd0:  mov    %edx,0x8(%esp)
08322d02 +0x0fd4:  mov    %eax,0x4(%esp)
08322d06 +0x0fd8:  mov    0x8(%ebp),%eax
08322d09 +0x0fdb:  mov    %eax,(%esp)
08322d0c +0x0fde:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08322d11 +0x0fe3:  test   %al,%al
08322d13 +0x0fe5:  je     08322d1c <+0xfee>
08322d15 +0x0fe7:  mov    $0x1,%eax
08322d1a +0x0fec:  jmp    08322d21 <+0xff3>
08322d1c +0x0fee:  mov    $0x0,%eax
08322d21 +0x0ff3:  test   %al,%al
08322d23 +0x0ff5:  je     08322d49 <+0x101b>
08322d25 +0x0ff7:  mov    -0x30(%ebp),%eax
08322d28 +0x0ffa:  mov    %eax,(%esp)
08322d2b +0x0ffd:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
08322d30 +0x1002:  mov    %eax,%ebx
08322d32 +0x1004:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08322d37 +0x1009:  mov    0xc(%eax),%eax
08322d3a +0x100c:  mov    %ebx,0x4(%esp)
08322d3e +0x1010:  mov    %eax,(%esp)
08322d41 +0x1013:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08322d46 +0x1018:  mov    %eax,-0x2c(%ebp)
08322d49 +0x101b:  cmpl   $0x0,-0x2c(%ebp)
08322d4d +0x101f:  je     08322d83 <+0x1055>
08322d4f +0x1021:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08322d56 +0x1028:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08322d5b +0x102d:  mov    %eax,%ebx
08322d5d +0x102f:  mov    -0x30(%ebp),%eax
08322d60 +0x1032:  mov    %eax,(%esp)
08322d63 +0x1035:  call   0817a09c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x11a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x11a
08322d68 +0x103a:  movl   $0x0,0xc(%esp)
08322d70 +0x1042:  mov    %ebx,0x8(%esp)
08322d74 +0x1046:  mov    %eax,0x4(%esp)
08322d78 +0x104a:  mov    0xc(%ebp),%eax
08322d7b +0x104d:  mov    %eax,(%esp)
08322d7e +0x1050:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08322d83 +0x1055:  mov    -0x104(%ebp),%eax
08322d89 +0x105b:  test   %eax,%eax
08322d8b +0x105d:  je     08322e44 <+0x1116>
08322d91 +0x1063:  movsbl -0x65(%ebp),%edx
08322d95 +0x1067:  mov    -0x104(%ebp),%eax
08322d9b +0x106d:  movzbl %al,%eax
08322d9e +0x1070:  mov    %edx,0x24(%esp)
08322da2 +0x1074:  mov    -0x90(%ebp),%edx
08322da8 +0x107a:  mov    %edx,0x20(%esp)
08322dac +0x107e:  mov    -0x94(%ebp),%edx
08322db2 +0x1084:  mov    %edx,0x1c(%esp)
08322db6 +0x1088:  mov    -0x84(%ebp),%edx
08322dbc +0x108e:  mov    %edx,0x18(%esp)
08322dc0 +0x1092:  mov    -0x98(%ebp),%edx
08322dc6 +0x1098:  mov    %edx,0x14(%esp)
08322dca +0x109c:  mov    %eax,0x10(%esp)
08322dce +0x10a0:  mov    0x14(%ebp),%eax
08322dd1 +0x10a3:  mov    %eax,0xc(%esp)
08322dd5 +0x10a7:  mov    0x10(%ebp),%eax
08322dd8 +0x10aa:  mov    %eax,0x8(%esp)
08322ddc +0x10ae:  mov    0xc(%ebp),%eax
08322ddf +0x10b1:  mov    %eax,0x4(%esp)
08322de3 +0x10b5:  mov    0x8(%ebp),%eax
08322de6 +0x10b8:  mov    %eax,(%esp)
08322de9 +0x10bb:  call   083237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>  ; WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)
08322dee +0x10c0:  movl   $0x0,0xc(%esp)
08322df6 +0x10c8:  movl   $0x955,0x8(%esp)
08322dfe +0x10d0:  movl   $&_ZZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08322e06 +0x10d8:  lea    -0xb8(%ebp),%eax
08322e0c +0x10de:  mov    %eax,(%esp)
08322e0f +0x10e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08322e14 +0x10e6:  movl   $0x955,0xc(%esp)
08322e1c +0x10ee:  movl   $&_ZZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08322e24 +0x10f6:  movl   $"[%s][%d]",0x4(%esp)
08322e2c +0x10fe:  lea    -0xb8(%ebp),%eax
08322e32 +0x1104:  mov    %eax,(%esp)
08322e35 +0x1107:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08322e3a +0x110c:  mov    $0x0,%ebx
08322e3f +0x1111:  jmp    08323747 <+0x1a19>
08322e44 +0x1116:  cmpl   $0x0,-0x78(%ebp)
08322e48 +0x111a:  je     08322e6e <+0x1140>
08322e4a +0x111c:  mov    0xc(%ebp),%eax
08322e4d +0x111f:  mov    %eax,(%esp)
08322e50 +0x1122:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08322e55 +0x1127:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%edx
08322e5b +0x112d:  mov    -0x78(%ebp),%ecx
08322e5e +0x1130:  mov    %ecx,0x8(%esp)
08322e62 +0x1134:  mov    %eax,0x4(%esp)
08322e66 +0x1138:  mov    %edx,(%esp)
08322e69 +0x113b:  call   0831ce5e <_ZN18break_away_prevent23CBreakAwayPreventSystem14updateUsedCeraEjj>  ; break_away_prevent::CBreakAwayPreventSystem::updateUsedCera(unsigned int, unsigned int)
08322e6e +0x1140:  cmpl   $0x0,-0x70(%ebp)
08322e72 +0x1144:  je     08322e97 <+0x1169>
08322e74 +0x1146:  mov    -0x70(%ebp),%ebx
08322e77 +0x1149:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
08322e7c +0x114e:  mov    %ebx,0xc(%esp)
08322e80 +0x1152:  mov    0xc(%ebp),%edx
08322e83 +0x1155:  mov    %edx,0x8(%esp)
08322e87 +0x1159:  movl   $0x26,0x4(%esp)
08322e8f +0x1161:  mov    %eax,(%esp)
08322e92 +0x1164:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
08322e97 +0x1169:  mov    0xc(%ebp),%eax
08322e9a +0x116c:  mov    %eax,(%esp)
08322e9d +0x116f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08322ea2 +0x1174:  movl   $0x1,0xc(%esp)
08322eaa +0x117c:  movl   $0x8,0x8(%esp)
08322eb2 +0x1184:  mov    -0x70(%ebp),%edx
08322eb5 +0x1187:  mov    %edx,0x4(%esp)
08322eb9 +0x118b:  mov    %eax,(%esp)
08322ebc +0x118e:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08322ec1 +0x1193:  movl   $0x2,0x8(%esp)
08322ec9 +0x119b:  mov    -0x74(%ebp),%eax
08322ecc +0x119e:  mov    %eax,0x4(%esp)
08322ed0 +0x11a2:  mov    0xc(%ebp),%eax
08322ed3 +0x11a5:  mov    %eax,(%esp)
08322ed6 +0x11a8:  call   0864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>  ; CUser::UseWinPoint(int, eWPSubReason)
08322edb +0x11ad:  mov    -0x78(%ebp),%eax
08322ede +0x11b0:  mov    %eax,0x4(%esp)
08322ee2 +0x11b4:  mov    0xc(%ebp),%eax
08322ee5 +0x11b7:  mov    %eax,(%esp)
08322ee8 +0x11ba:  call   0817a1c6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x244>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x244
08322eed +0x11bf:  mov    -0x78(%ebp),%eax
08322ef0 +0x11c2:  mov    %eax,0x4(%esp)
08322ef4 +0x11c6:  mov    0xc(%ebp),%eax
08322ef7 +0x11c9:  mov    %eax,(%esp)
08322efa +0x11cc:  call   0817a21a <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x298>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x298
08322eff +0x11d1:  cmpl   $0x0,-0x8c(%ebp)
08322f06 +0x11d8:  je     08322f5d <+0x122f>
08322f08 +0x11da:  mov    -0x8c(%ebp),%eax
08322f0e +0x11e0:  mov    %eax,0x4(%esp)
08322f12 +0x11e4:  mov    0xc(%ebp),%eax
08322f15 +0x11e7:  mov    %eax,(%esp)
08322f18 +0x11ea:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
08322f1d +0x11ef:  xor    $0x1,%eax
08322f20 +0x11f2:  test   %al,%al
08322f22 +0x11f4:  je     08322f5d <+0x122f>
08322f24 +0x11f6:  mov    -0x8c(%ebp),%eax
08322f2a +0x11fc:  mov    %eax,0x4(%esp)
08322f2e +0x1200:  mov    0xc(%ebp),%eax
08322f31 +0x1203:  mov    %eax,(%esp)
08322f34 +0x1206:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
08322f39 +0x120b:  movl   $0x0,0xc(%esp)
08322f41 +0x1213:  mov    -0x6c(%ebp),%eax
08322f44 +0x1216:  mov    %eax,0x8(%esp)
08322f48 +0x121a:  mov    -0x8c(%ebp),%eax
08322f4e +0x1220:  mov    %eax,0x4(%esp)
08322f52 +0x1224:  mov    0xc(%ebp),%eax
08322f55 +0x1227:  mov    %eax,(%esp)
08322f58 +0x122a:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08322f5d +0x122f:  movl   $0x43,0x8(%esp)
08322f65 +0x1237:  movl   $0x1,0x4(%esp)
08322f6d +0x123f:  lea    -0xd4(%ebp),%eax
08322f73 +0x1245:  mov    %eax,(%esp)
08322f76 +0x1248:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08322f7b +0x124d:  movl   $0x1,0x4(%esp)
08322f83 +0x1255:  lea    -0xd4(%ebp),%eax
08322f89 +0x125b:  mov    %eax,(%esp)
08322f8c +0x125e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08322f91 +0x1263:  movsbl -0x65(%ebp),%eax
08322f95 +0x1267:  mov    %eax,0x4(%esp)
08322f99 +0x126b:  lea    -0xd4(%ebp),%eax
08322f9f +0x1271:  mov    %eax,(%esp)
08322fa2 +0x1274:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08322fa7 +0x1279:  mov    -0x98(%ebp),%eax
08322fad +0x127f:  mov    %eax,0x4(%esp)
08322fb1 +0x1283:  lea    -0xd4(%ebp),%eax
08322fb7 +0x1289:  mov    %eax,(%esp)
08322fba +0x128c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08322fbf +0x1291:  mov    -0x84(%ebp),%eax
08322fc5 +0x1297:  mov    %eax,0x4(%esp)
08322fc9 +0x129b:  lea    -0xd4(%ebp),%eax
08322fcf +0x12a1:  mov    %eax,(%esp)
08322fd2 +0x12a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08322fd7 +0x12a9:  mov    -0x94(%ebp),%eax
08322fdd +0x12af:  mov    %eax,0x4(%esp)
08322fe1 +0x12b3:  lea    -0xd4(%ebp),%eax
08322fe7 +0x12b9:  mov    %eax,(%esp)
08322fea +0x12bc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08322fef +0x12c1:  mov    -0x90(%ebp),%eax
08322ff5 +0x12c7:  mov    %eax,0x4(%esp)
08322ff9 +0x12cb:  lea    -0xd4(%ebp),%eax
08322fff +0x12d1:  mov    %eax,(%esp)
08323002 +0x12d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323007 +0x12d9:  mov    -0x108(%ebp),%eax
0832300d +0x12df:  mov    %eax,0x4(%esp)
08323011 +0x12e3:  lea    -0xd4(%ebp),%eax
08323017 +0x12e9:  mov    %eax,(%esp)
0832301a +0x12ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0832301f +0x12f1:  lea    -0xe8(%ebp),%eax
08323025 +0x12f7:  mov    %eax,(%esp)
08323028 +0x12fa:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
0832302d +0x12ff:  mov    %eax,0x4(%esp)
08323031 +0x1303:  lea    -0xd4(%ebp),%eax
08323037 +0x1309:  mov    %eax,(%esp)
0832303a +0x130c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0832303f +0x1311:  lea    -0xa8(%ebp),%eax
08323045 +0x1317:  lea    -0xe8(%ebp),%edx
0832304b +0x131d:  mov    %edx,0x4(%esp)
0832304f +0x1321:  mov    %eax,(%esp)
08323052 +0x1324:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08323057 +0x1329:  sub    $0x4,%esp
0832305a +0x132c:  lea    -0xa8(%ebp),%eax
08323060 +0x1332:  mov    %eax,0x4(%esp)
08323064 +0x1336:  lea    -0x118(%ebp),%eax
0832306a +0x133c:  mov    %eax,(%esp)
0832306d +0x133f:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
08323072 +0x1344:  lea    -0xa4(%ebp),%eax
08323078 +0x134a:  lea    -0xe8(%ebp),%edx
0832307e +0x1350:  mov    %edx,0x4(%esp)
08323082 +0x1354:  mov    %eax,(%esp)
08323085 +0x1357:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0832308a +0x135c:  sub    $0x4,%esp
0832308d +0x135f:  lea    -0xa4(%ebp),%eax
08323093 +0x1365:  mov    %eax,0x4(%esp)
08323097 +0x1369:  lea    -0x11c(%ebp),%eax
0832309d +0x136f:  mov    %eax,(%esp)
083230a0 +0x1372:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
083230a5 +0x1377:  jmp    083230fb <+0x13cd>
083230a7 +0x1379:  lea    -0x118(%ebp),%eax
083230ad +0x137f:  mov    %eax,(%esp)
083230b0 +0x1382:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
083230b5 +0x1387:  mov    0x2(%eax),%eax
083230b8 +0x138a:  mov    %eax,0x4(%esp)
083230bc +0x138e:  lea    -0xd4(%ebp),%eax
083230c2 +0x1394:  mov    %eax,(%esp)
083230c5 +0x1397:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
083230ca +0x139c:  lea    -0x118(%ebp),%eax
083230d0 +0x13a2:  mov    %eax,(%esp)
083230d3 +0x13a5:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
083230d8 +0x13aa:  mov    0x7(%eax),%eax
083230db +0x13ad:  mov    %eax,0x4(%esp)
083230df +0x13b1:  lea    -0xd4(%ebp),%eax
083230e5 +0x13b7:  mov    %eax,(%esp)
083230e8 +0x13ba:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
083230ed +0x13bf:  lea    -0x118(%ebp),%eax
083230f3 +0x13c5:  mov    %eax,(%esp)
083230f6 +0x13c8:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
083230fb +0x13cd:  lea    -0x11c(%ebp),%eax
08323101 +0x13d3:  mov    %eax,0x4(%esp)
08323105 +0x13d7:  lea    -0x118(%ebp),%eax
0832310b +0x13dd:  mov    %eax,(%esp)
0832310e +0x13e0:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
08323113 +0x13e5:  test   %al,%al
08323115 +0x13e7:  jne    083230a7 <+0x1379>
08323117 +0x13e9:  cmpb   $0x1,-0x65(%ebp)
0832311b +0x13ed:  jne    08323136 <+0x1408>
0832311d +0x13ef:  cmpl   $0x0,-0x60(%ebp)
08323121 +0x13f3:  je     08323136 <+0x1408>
08323123 +0x13f5:  movl   $0x1,0x4(%esp)
0832312b +0x13fd:  mov    -0x60(%ebp),%eax
0832312e +0x1400:  mov    %eax,(%esp)
08323131 +0x1403:  call   084271ec <_ZN18DB_UpdateGiftCount11makeRequestEji>  ; DB_UpdateGiftCount::makeRequest(unsigned int, int)
08323136 +0x1408:  mov    -0x90(%ebp),%eax
0832313c +0x140e:  cmp    -0x94(%ebp),%eax
08323142 +0x1414:  jne    08323728 <+0x19fa>
08323148 +0x141a:  call   0848f140 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv>  ; WongWork::CEventMgr::IsChildrensDayEventing()
0832314d +0x141f:  test   %al,%al
0832314f +0x1421:  je     083233e4 <+0x16b6>
08323155 +0x1427:  mov    0xc(%ebp),%eax
08323158 +0x142a:  mov    %eax,(%esp)
0832315b +0x142d:  call   08328220 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x179>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x179
08323160 +0x1432:  test   %al,%al
08323162 +0x1434:  je     083233e4 <+0x16b6>
08323168 +0x143a:  mov    0xc(%ebp),%eax
0832316b +0x143d:  mov    %eax,(%esp)
0832316e +0x1440:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08323173 +0x1445:  mov    %eax,%ebx
08323175 +0x1447:  mov    0xc(%ebp),%eax
08323178 +0x144a:  mov    %eax,(%esp)
0832317b +0x144d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08323180 +0x1452:  movl   $0x1,0x18(%esp)
08323188 +0x145a:  movl   $0x0,0x14(%esp)
08323190 +0x1462:  movl   $&_ZL14gUnicodeBuffer+0x2681b,0x10(%esp)
08323198 +0x146a:  movl   $0x1,0xc(%esp)
083231a0 +0x1472:  movl   $0x65ae,0x8(%esp)
083231a8 +0x147a:  mov    %ebx,0x4(%esp)
083231ac +0x147e:  mov    %eax,(%esp)
083231af +0x1481:  call   086c1910 <_ZN8WongWork9CWebEvent16ReqSaveEventItemEjjjjjjb>  ; WongWork::CWebEvent::ReqSaveEventItem(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool)
083231b4 +0x1486:  lea    -0x13c(%ebp),%eax
083231ba +0x148c:  mov    %eax,(%esp)
083231bd +0x148f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
083231c2 +0x1494:  movl   $0xe,0x8(%esp)
083231ca +0x149c:  movl   $0x0,0x4(%esp)
083231d2 +0x14a4:  lea    -0x13c(%ebp),%eax
083231d8 +0x14aa:  mov    %eax,(%esp)
083231db +0x14ad:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083231e0 +0x14b2:  movl   $0x1,0x4(%esp)
083231e8 +0x14ba:  lea    -0x13c(%ebp),%eax
083231ee +0x14c0:  mov    %eax,(%esp)
083231f1 +0x14c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083231f6 +0x14c8:  lea    -0x13c(%ebp),%eax
083231fc +0x14ce:  mov    %eax,(%esp)
083231ff +0x14d1:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08323204 +0x14d6:  mov    %eax,-0x140(%ebp)
0832320a +0x14dc:  movl   $0x0,-0x28(%ebp)
08323211 +0x14e3:  movl   $0xa,0x4(%esp)
08323219 +0x14eb:  lea    -0x13c(%ebp),%eax
0832321f +0x14f1:  mov    %eax,(%esp)
08323222 +0x14f4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08323227 +0x14f9:  movl   $0x0,-0x24(%ebp)
0832322e +0x1500:  jmp    0832335d <+0x162f>
08323233 +0x1505:  mov    -0x24(%ebp),%eax
08323236 +0x1508:  mov    %eax,0x4(%esp)
0832323a +0x150c:  mov    0xc(%ebp),%eax
0832323d +0x150f:  mov    %eax,(%esp)
08323240 +0x1512:  call   08328240 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x199>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x199
08323245 +0x1517:  mov    %eax,-0x20(%ebp)
08323248 +0x151a:  cmpl   $0x0,-0x20(%ebp)
0832324c +0x151e:  js     08323265 <+0x1537>
0832324e +0x1520:  mov    -0x24(%ebp),%eax
08323251 +0x1523:  mov    %eax,0x4(%esp)
08323255 +0x1527:  mov    0xc(%ebp),%eax
08323258 +0x152a:  mov    %eax,(%esp)
0832325b +0x152d:  call   08328262 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1bb>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1bb
08323260 +0x1532:  cmp    $0xffffffff,%eax
08323263 +0x1535:  jne    0832326c <+0x153e>
08323265 +0x1537:  mov    $0x1,%eax
0832326a +0x153c:  jmp    08323271 <+0x1543>
0832326c +0x153e:  mov    $0x0,%eax
08323271 +0x1543:  test   %al,%al
08323273 +0x1545:  jne    0832336e <+0x1640>
08323279 +0x154b:  mov    0xc(%ebp),%eax
0832327c +0x154e:  mov    %eax,(%esp)
0832327f +0x1551:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08323284 +0x1556:  lea    -0x24c(%ebp),%edx
0832328a +0x155c:  mov    -0x20(%ebp),%ecx
0832328d +0x155f:  mov    %ecx,0xc(%esp)
08323291 +0x1563:  movl   $0x2,0x8(%esp)
08323299 +0x156b:  mov    %eax,0x4(%esp)
0832329d +0x156f:  mov    %edx,(%esp)
083232a0 +0x1572:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
083232a5 +0x1577:  sub    $0x4,%esp
083232a8 +0x157a:  movzwl -0x241(%ebp),%eax
083232af +0x1581:  movsbl %al,%edi
083232b2 +0x1584:  mov    -0x24(%ebp),%eax
083232b5 +0x1587:  mov    %eax,0x4(%esp)
083232b9 +0x158b:  mov    0xc(%ebp),%eax
083232bc +0x158e:  mov    %eax,(%esp)
083232bf +0x1591:  call   08328262 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1bb>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1bb
083232c4 +0x1596:  mov    %eax,%ebx
083232c6 +0x1598:  mov    -0x24a(%ebp),%eax
083232cc +0x159e:  mov    %eax,%esi
083232ce +0x15a0:  mov    0xc(%ebp),%eax
083232d1 +0x15a3:  mov    %eax,(%esp)
083232d4 +0x15a6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
083232d9 +0x15ab:  movl   $0x0,0x24(%esp)
083232e1 +0x15b3:  movl   $0x0,0x20(%esp)
083232e9 +0x15bb:  movl   $0x2,0x1c(%esp)
083232f1 +0x15c3:  movl   $"E_CHILDRENS_DAY",0x18(%esp)
083232f9 +0x15cb:  movl   $0xffffffff,0x14(%esp)
08323301 +0x15d3:  mov    %edi,0x10(%esp)
08323305 +0x15d7:  movl   $0x0,0xc(%esp)
0832330d +0x15df:  mov    %ebx,0x8(%esp)
08323311 +0x15e3:  mov    %esi,0x4(%esp)
08323315 +0x15e7:  mov    %eax,(%esp)
08323318 +0x15ea:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0832331d +0x15ef:  mov    %eax,-0x1c(%ebp)
08323320 +0x15f2:  cmpl   $0x0,-0x1c(%ebp)
08323324 +0x15f6:  js     08323358 <+0x162a>
08323326 +0x15f8:  mov    0xc(%ebp),%eax
08323329 +0x15fb:  mov    %eax,(%esp)
0832332c +0x15fe:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08323331 +0x1603:  lea    -0x13c(%ebp),%edx
08323337 +0x1609:  mov    %edx,0xc(%esp)
0832333b +0x160d:  mov    -0x1c(%ebp),%edx
0832333e +0x1610:  mov    %edx,0x8(%esp)
08323342 +0x1614:  movl   $0x2,0x4(%esp)
0832334a +0x161c:  mov    %eax,(%esp)
0832334d +0x161f:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08323352 +0x1624:  addl   $0x1,-0x28(%ebp)
08323356 +0x1628:  jmp    08323359 <+0x162b>
08323358 +0x162a:  nop
08323359 +0x162b:  addl   $0x1,-0x24(%ebp)
0832335d +0x162f:  cmpl   $0x9,-0x24(%ebp)
08323361 +0x1633:  setle  %al
08323364 +0x1636:  test   %al,%al
08323366 +0x1638:  jne    08323233 <+0x1505>
0832336c +0x163e:  jmp    0832336f <+0x1641>
0832336e +0x1640:  nop
0832336f +0x1641:  mov    -0x28(%ebp),%eax
08323372 +0x1644:  mov    %eax,0x8(%esp)
08323376 +0x1648:  lea    -0x140(%ebp),%eax
0832337c +0x164e:  mov    %eax,0x4(%esp)
08323380 +0x1652:  lea    -0x13c(%ebp),%eax
08323386 +0x1658:  mov    %eax,(%esp)
08323389 +0x165b:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
0832338e +0x1660:  movl   $0x1,0x4(%esp)
08323396 +0x1668:  lea    -0x13c(%ebp),%eax
0832339c +0x166e:  mov    %eax,(%esp)
0832339f +0x1671:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083233a4 +0x1676:  lea    -0x13c(%ebp),%eax
083233aa +0x167c:  mov    %eax,0x4(%esp)
083233ae +0x1680:  mov    0xc(%ebp),%eax
083233b1 +0x1683:  mov    %eax,(%esp)
083233b4 +0x1686:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
083233b9 +0x168b:  jmp    083233d6 <+0x16a8>
083233bb +0x168d:  mov    %edx,%ebx
083233bd +0x168f:  mov    %eax,%esi
083233bf +0x1691:  lea    -0x13c(%ebp),%eax
083233c5 +0x1697:  mov    %eax,(%esp)
083233c8 +0x169a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083233cd +0x169f:  mov    %esi,%eax
083233cf +0x16a1:  mov    %ebx,%edx
083233d1 +0x16a3:  jmp    0832372f <+0x1a01>
083233d6 +0x16a8:  lea    -0x13c(%ebp),%eax
083233dc +0x16ae:  mov    %eax,(%esp)
083233df +0x16b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083233e4 +0x16b6:  movl   $0xffffffff,-0x120(%ebp)
083233ee +0x16c0:  movl   $0x0,-0x124(%ebp)
083233f8 +0x16ca:  mov    &_ZN10GlobalData15s_event_managerE,%eax
083233fd +0x16cf:  movl   $0x11,0x4(%esp)
08323405 +0x16d7:  mov    %eax,(%esp)
08323408 +0x16da:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0832340d +0x16df:  mov    (%eax),%edx
0832340f +0x16e1:  add    $0x34,%edx
08323412 +0x16e4:  mov    (%edx),%edx
08323414 +0x16e6:  movl   $0x0,0x4(%esp)
0832341c +0x16ee:  mov    %eax,(%esp)
0832341f +0x16f1:  call   *%edx
08323421 +0x16f3:  test   %al,%al
08323423 +0x16f5:  je     08323569 <+0x183b>
08323429 +0x16fb:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0832342e +0x1700:  movl   $0x11,0x4(%esp)
08323436 +0x1708:  mov    %eax,(%esp)
08323439 +0x170b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0832343e +0x1710:  mov    %eax,(%esp)
08323441 +0x1713:  call   0817a2e2 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x360>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x360
08323446 +0x1718:  mov    %eax,%ebx
08323448 +0x171a:  movl   $0x3e8,(%esp)
0832344f +0x1721:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08323454 +0x1726:  cmp    %eax,%ebx
08323456 +0x1728:  setge  %al
08323459 +0x172b:  test   %al,%al
0832345b +0x172d:  je     08323569 <+0x183b>
08323461 +0x1733:  mov    0xc(%ebp),%eax
08323464 +0x1736:  mov    %eax,(%esp)
08323467 +0x1739:  call   0817a236 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2b4>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2b4
0832346c +0x173e:  mov    %eax,%ebx
0832346e +0x1740:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08323473 +0x1745:  mov    0xc(%eax),%eax
08323476 +0x1748:  lea    -0x124(%ebp),%edx
0832347c +0x174e:  mov    %edx,0xc(%esp)
08323480 +0x1752:  lea    -0x120(%ebp),%edx
08323486 +0x1758:  mov    %edx,0x8(%esp)
0832348a +0x175c:  mov    %ebx,0x4(%esp)
0832348e +0x1760:  mov    %eax,(%esp)
08323491 +0x1763:  call   08512930 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj>  ; CItemList::getCeraShopBonusItem(int, unsigned long&, unsigned int&) const
08323496 +0x1768:  mov    -0x120(%ebp),%eax
0832349c +0x176e:  cmp    $0xffffffff,%eax
0832349f +0x1771:  je     08323569 <+0x183b>
083234a5 +0x1777:  lea    -0x14c(%ebp),%eax
083234ab +0x177d:  mov    %eax,(%esp)
083234ae +0x1780:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
083234b3 +0x1785:  lea    -0x158(%ebp),%eax
083234b9 +0x178b:  mov    %eax,(%esp)
083234bc +0x178e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
083234c1 +0x1793:  mov    -0x124(%ebp),%eax
083234c7 +0x1799:  movzwl %ax,%edx
083234ca +0x179c:  mov    -0x120(%ebp),%eax
083234d0 +0x17a2:  movl   $0x0,0x20(%esp)
083234d8 +0x17aa:  lea    -0x100(%ebp),%ecx
083234de +0x17b0:  mov    %ecx,0x1c(%esp)
083234e2 +0x17b4:  lea    -0x14c(%ebp),%ecx
083234e8 +0x17ba:  mov    %ecx,0x18(%esp)
083234ec +0x17be:  movl   $0xff,0x14(%esp)
083234f4 +0x17c6:  movl   $0x0,0x10(%esp)
083234fc +0x17ce:  mov    %edx,0xc(%esp)
08323500 +0x17d2:  mov    %eax,0x8(%esp)
08323504 +0x17d6:  mov    0xc(%ebp),%eax
08323507 +0x17d9:  mov    %eax,0x4(%esp)
0832350b +0x17dd:  mov    0x8(%ebp),%eax
0832350e +0x17e0:  mov    %eax,(%esp)
08323511 +0x17e3:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
08323516 +0x17e8:  jmp    08323530 <+0x1802>
08323518 +0x17ea:  mov    %edx,%ebx
0832351a +0x17ec:  mov    %eax,%esi
0832351c +0x17ee:  lea    -0x158(%ebp),%eax
08323522 +0x17f4:  mov    %eax,(%esp)
08323525 +0x17f7:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0832352a +0x17fc:  mov    %esi,%eax
0832352c +0x17fe:  mov    %ebx,%edx
0832352e +0x1800:  jmp    08323540 <+0x1812>
08323530 +0x1802:  lea    -0x158(%ebp),%eax
08323536 +0x1808:  mov    %eax,(%esp)
08323539 +0x180b:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0832353e +0x1810:  jmp    0832355b <+0x182d>
08323540 +0x1812:  mov    %edx,%ebx
08323542 +0x1814:  mov    %eax,%esi
08323544 +0x1816:  lea    -0x14c(%ebp),%eax
0832354a +0x181c:  mov    %eax,(%esp)
0832354d +0x181f:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08323552 +0x1824:  mov    %esi,%eax
08323554 +0x1826:  mov    %ebx,%edx
08323556 +0x1828:  jmp    0832372f <+0x1a01>
0832355b +0x182d:  lea    -0x14c(%ebp),%eax
08323561 +0x1833:  mov    %eax,(%esp)
08323564 +0x1836:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08323569 +0x183b:  mov    -0x120(%ebp),%eax
0832356f +0x1841:  mov    %eax,0x4(%esp)
08323573 +0x1845:  lea    -0xd4(%ebp),%eax
08323579 +0x184b:  mov    %eax,(%esp)
0832357c +0x184e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323581 +0x1853:  mov    -0x124(%ebp),%eax
08323587 +0x1859:  mov    %eax,0x4(%esp)
0832358b +0x185d:  lea    -0xd4(%ebp),%eax
08323591 +0x1863:  mov    %eax,(%esp)
08323594 +0x1866:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323599 +0x186b:  lea    -0x130(%ebp),%eax
0832359f +0x1871:  mov    %eax,(%esp)
083235a2 +0x1874:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
083235a7 +0x1879:  movl   $0x35,0x8(%esp)
083235af +0x1881:  movl   $0x0,0x4(%esp)
083235b7 +0x1889:  lea    -0x130(%ebp),%eax
083235bd +0x188f:  mov    %eax,(%esp)
083235c0 +0x1892:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083235c5 +0x1897:  movl   $0x1,0x4(%esp)
083235cd +0x189f:  lea    -0x130(%ebp),%eax
083235d3 +0x18a5:  mov    %eax,(%esp)
083235d6 +0x18a8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083235db +0x18ad:  mov    0xc(%ebp),%eax
083235de +0x18b0:  mov    %eax,(%esp)
083235e1 +0x18b3:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
083235e6 +0x18b8:  mov    %eax,0x4(%esp)
083235ea +0x18bc:  lea    -0x130(%ebp),%eax
083235f0 +0x18c2:  mov    %eax,(%esp)
083235f3 +0x18c5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
083235f8 +0x18ca:  movl   $0x1,0x4(%esp)
08323600 +0x18d2:  lea    -0x130(%ebp),%eax
08323606 +0x18d8:  mov    %eax,(%esp)
08323609 +0x18db:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0832360e +0x18e0:  lea    -0x130(%ebp),%eax
08323614 +0x18e6:  mov    %eax,0x4(%esp)
08323618 +0x18ea:  mov    0xc(%ebp),%eax
0832361b +0x18ed:  mov    %eax,(%esp)
0832361e +0x18f0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08323623 +0x18f5:  lea    -0x130(%ebp),%eax
08323629 +0x18fb:  mov    %eax,(%esp)
0832362c +0x18fe:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08323631 +0x1903:  movl   $0xe,0x8(%esp)
08323639 +0x190b:  movl   $0x0,0x4(%esp)
08323641 +0x1913:  lea    -0x130(%ebp),%eax
08323647 +0x1919:  mov    %eax,(%esp)
0832364a +0x191c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0832364f +0x1921:  movl   $0x0,0x4(%esp)
08323657 +0x1929:  lea    -0x130(%ebp),%eax
0832365d +0x192f:  mov    %eax,(%esp)
08323660 +0x1932:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08323665 +0x1937:  movl   $0x2,0x4(%esp)
0832366d +0x193f:  lea    -0x130(%ebp),%eax
08323673 +0x1945:  mov    %eax,(%esp)
08323676 +0x1948:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0832367b +0x194d:  mov    0xc(%ebp),%eax
0832367e +0x1950:  mov    %eax,(%esp)
08323681 +0x1953:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08323686 +0x1958:  lea    -0x130(%ebp),%edx
0832368c +0x195e:  mov    %edx,0xc(%esp)
08323690 +0x1962:  movl   $0x0,0x8(%esp)
08323698 +0x196a:  movl   $0x1,0x4(%esp)
083236a0 +0x1972:  mov    %eax,(%esp)
083236a3 +0x1975:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
083236a8 +0x197a:  mov    0xc(%ebp),%eax
083236ab +0x197d:  mov    %eax,(%esp)
083236ae +0x1980:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083236b3 +0x1985:  lea    -0x130(%ebp),%edx
083236b9 +0x198b:  mov    %edx,0xc(%esp)
083236bd +0x198f:  movl   $0x2,0x8(%esp)
083236c5 +0x1997:  movl   $0x1,0x4(%esp)
083236cd +0x199f:  mov    %eax,(%esp)
083236d0 +0x19a2:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
083236d5 +0x19a7:  movl   $0x1,0x4(%esp)
083236dd +0x19af:  lea    -0x130(%ebp),%eax
083236e3 +0x19b5:  mov    %eax,(%esp)
083236e6 +0x19b8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083236eb +0x19bd:  lea    -0x130(%ebp),%eax
083236f1 +0x19c3:  mov    %eax,0x4(%esp)
083236f5 +0x19c7:  mov    0xc(%ebp),%eax
083236f8 +0x19ca:  mov    %eax,(%esp)
083236fb +0x19cd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08323700 +0x19d2:  jmp    0832371a <+0x19ec>
08323702 +0x19d4:  mov    %edx,%ebx
08323704 +0x19d6:  mov    %eax,%esi
08323706 +0x19d8:  lea    -0x130(%ebp),%eax
0832370c +0x19de:  mov    %eax,(%esp)
0832370f +0x19e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08323714 +0x19e6:  mov    %esi,%eax
08323716 +0x19e8:  mov    %ebx,%edx
08323718 +0x19ea:  jmp    0832372f <+0x1a01>
0832371a +0x19ec:  lea    -0x130(%ebp),%eax
08323720 +0x19f2:  mov    %eax,(%esp)
08323723 +0x19f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08323728 +0x19fa:  mov    $0x1,%ebx
0832372d +0x19ff:  jmp    08323747 <+0x1a19>
0832372f +0x1a01:  mov    %edx,%ebx
08323731 +0x1a03:  mov    %eax,%esi
08323733 +0x1a05:  lea    -0x100(%ebp),%eax
08323739 +0x1a0b:  mov    %eax,(%esp)
0832373c +0x1a0e:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08323741 +0x1a13:  mov    %esi,%eax
08323743 +0x1a15:  mov    %ebx,%edx
08323745 +0x1a17:  jmp    08323767 <+0x1a39>
08323747 +0x1a19:  lea    -0x100(%ebp),%eax
0832374d +0x1a1f:  mov    %eax,(%esp)
08323750 +0x1a22:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08323755 +0x1a27:  test   %ebx,%ebx
08323757 +0x1a29:  jne    08323760 <+0x1a32>
08323759 +0x1a2b:  mov    $0x0,%ebx
0832375e +0x1a30:  jmp    0832377f <+0x1a51>
08323760 +0x1a32:  mov    $0x1,%ebx
08323765 +0x1a37:  jmp    0832377f <+0x1a51>
08323767 +0x1a39:  mov    %edx,%ebx
08323769 +0x1a3b:  mov    %eax,%esi
0832376b +0x1a3d:  lea    -0xe8(%ebp),%eax
08323771 +0x1a43:  mov    %eax,(%esp)
08323774 +0x1a46:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08323779 +0x1a4b:  mov    %esi,%eax
0832377b +0x1a4d:  mov    %ebx,%edx
0832377d +0x1a4f:  jmp    083237be <+0x1a90>
0832377f +0x1a51:  lea    -0xe8(%ebp),%eax
08323785 +0x1a57:  mov    %eax,(%esp)
08323788 +0x1a5a:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0832378d +0x1a5f:  test   %ebx,%ebx
0832378f +0x1a61:  je     083237dc <+0x1aae>
08323791 +0x1a63:  movl   $0x1,0x4(%esp)
08323799 +0x1a6b:  lea    -0xd4(%ebp),%eax
0832379f +0x1a71:  mov    %eax,(%esp)
083237a2 +0x1a74:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083237a7 +0x1a79:  lea    -0xd4(%ebp),%eax
083237ad +0x1a7f:  mov    %eax,0x4(%esp)
083237b1 +0x1a83:  mov    0xc(%ebp),%eax
083237b4 +0x1a86:  mov    %eax,(%esp)
083237b7 +0x1a89:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
083237bc +0x1a8e:  jmp    083237dc <+0x1aae>
083237be +0x1a90:  mov    %edx,%ebx
083237c0 +0x1a92:  mov    %eax,%esi
083237c2 +0x1a94:  lea    -0xd4(%ebp),%eax
083237c8 +0x1a9a:  mov    %eax,(%esp)
083237cb +0x1a9d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083237d0 +0x1aa2:  mov    %esi,%eax
083237d2 +0x1aa4:  mov    %ebx,%edx
083237d4 +0x1aa6:  mov    %eax,(%esp)
083237d7 +0x1aa9:  call   08ae3750 <_Unwind_Resume>
083237dc +0x1aae:  lea    -0xd4(%ebp),%eax
083237e2 +0x1ab4:  mov    %eax,(%esp)
083237e5 +0x1ab7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083237ea +0x1abc:  lea    -0xc(%ebp),%esp
083237ed +0x1abf:  add    $0x0,%esp
083237f0 +0x1ac2:  pop    %ebx
083237f1 +0x1ac3:  pop    %esi
083237f2 +0x1ac4:  pop    %edi
083237f3 +0x1ac5:  pop    %ebp
083237f4 +0x1ac6:  ret
083237f5 +0x1ac7:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::ProcessIPGUserData @ 0x8321d2e

/* WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
WongWork::CCeraShop::ProcessIPGUserData
          (CCeraShop *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,Stream *param_4)

{
  ulong uVar1;
  stCeraShopIPGRequest_t sVar2;
  stCeraShopIPGRequest_t sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  CDataManager *pCVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  CCirculationStatistic *pCVar17;
  CInventory *pCVar18;
  uint uVar19;
  undefined4 uVar20;
  int *piVar21;
  CCeraShopBonusItemEvent *this_00;
  undefined1 local_250 [2];
  undefined4 local_24e;
  undefined2 local_245;
  undefined2 local_213;
  undefined2 uStack_211;
  undefined2 uStack_20f;
  undefined1 uStack_20d;
  uint uStack_20c;
  undefined1 uStack_208;
  undefined4 local_207;
  undefined4 local_203;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1f7;
  undefined4 local_1f3;
  undefined4 local_1ef;
  undefined4 local_1eb;
  undefined4 local_1e7;
  undefined4 local_1e3;
  undefined4 local_1df;
  undefined4 local_1db;
  undefined1 local_1d7;
  undefined2 local_1d6;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  undefined1 uStack_1d0;
  uint uStack_1cf;
  undefined1 uStack_1cb;
  undefined4 local_1ca;
  undefined4 local_1c6;
  undefined4 local_1c2;
  undefined4 local_1be;
  undefined4 local_1ba;
  undefined4 local_1b6;
  undefined4 local_1b2;
  undefined4 local_1ae;
  undefined4 local_1aa;
  undefined4 local_1a6;
  undefined4 local_1a2;
  undefined4 local_19e;
  undefined1 local_19a;
  undefined2 local_199;
  undefined2 uStack_197;
  undefined2 uStack_195;
  undefined1 uStack_193;
  uint uStack_192;
  undefined1 uStack_18e;
  undefined4 local_18d;
  undefined4 local_189;
  undefined4 local_185;
  undefined4 local_181;
  undefined4 local_17d;
  undefined4 local_179;
  undefined4 local_175;
  undefined4 local_171;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_165;
  undefined4 local_161;
  undefined1 local_15d;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_15c [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_150 [12];
  int local_144;
  PacketGuard local_140 [12];
  PacketGuard local_134 [12];
  uint local_128;
  ulong local_124;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_120 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_11c [4];
  int local_118 [2];
  bool local_10d;
  int local_10c;
  int local_108;
  stCeraShopItemParam_t local_104 [12];
  vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>> avStack_f8 [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_ec [12];
  int local_e0 [2];
  PacketGuard local_d8 [12];
  pair<int,int> local_cc [8];
  ulong local_c4 [2];
  cMyTrace local_bc [16];
  __normal_iterator local_ac [4];
  __normal_iterator local_a8 [4];
  uint local_a4;
  stCeraShopIPGRequest_t *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  ulong local_84;
  ushort local_80;
  stCeraShopIPGRequest_t local_7e;
  stCeraShopIPGRequest_t local_7d;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  long local_70;
  stCeraShopIPGRequest_t local_69;
  int local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  char *local_50;
  CCeraShopGoods *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  CItem *local_3c;
  CItem *local_38;
  CItemLimitEdition *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  PacketGuard::PacketGuard(local_d8);
  if (*(int *)(param_3 + 0x1c) == 4) {
    if (param_1 == (CUser *)0x0) goto LAB_083237dc;
    iVar6 = atoi((char *)(param_3 + 0x99));
    iVar7 = atoi((char *)(param_3 + 0xa5));
    iVar8 = atoi((char *)(param_3 + 0x81));
    iVar9 = atoi((char *)(param_3 + 0x75));
    iVar10 = atoi((char *)(param_3 + 0x8d));
    iVar11 = atoi((char *)(param_3 + 0x69));
    local_a4 = iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11;
    CUser::SetCera(param_1,local_a4);
                    /* try { // try from 08321dfe to 08322014 has its CatchHandler @ 083237be */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,0,0x35);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,1);
    iVar6 = CUser::GetCera(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,iVar6);
  }
  if (*(int *)(param_3 + 0x1c) == 0) {
    iVar6 = atoi((char *)(param_3 + 0x26e));
    if (iVar6 == 1) {
      local_e0[1] = 0;
      local_e0[0] = 0;
      Stream::operator>>(param_4,local_e0);
      Stream::operator>>(param_4,local_e0 + 1);
      if (param_1 != (CUser *)0x0) {
        (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_1);
      }
      goto LAB_083237dc;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,0,0x35);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,0);
  }
  else if (*(int *)(param_3 + 0x1c) == 2) {
    iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar6 == 0) goto LAB_083237dc;
    local_a0 = Stream::GetOutBuffer<stCeraShopIPGRequest_t>(param_4);
    local_9c = *(int *)(local_a0 + 4);
    local_98 = *(int *)(local_a0 + 0x24);
    local_94 = *(int *)(local_a0 + 0x20);
    local_90 = *(int *)(local_a0 + 0x28);
    local_8c = *(int *)(local_a0 + 0x1c);
    local_88 = *(uint *)local_a0;
    local_84 = *(ulong *)(local_a0 + 8);
    local_80 = *(ushort *)(local_a0 + 0xc);
    local_7e = local_a0[0x2c];
    local_7d = local_a0[0x2d];
    local_7c = *(uint *)(local_a0 + 0x10);
    local_78 = *(undefined4 *)(local_a0 + 0x14);
    local_74 = *(int *)(local_a0 + 0x18);
    local_70 = *(long *)(local_a0 + 0x30);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_ec);
    local_69 = local_a0[0x34];
    local_68 = *(int *)(local_a0 + 0x38);
    local_64 = *(uint *)(local_a0 + 0x40);
                    /* try { // try from 08322043 to 08322047 has its CatchHandler @ 08323767 */
    stCeraShopItemParam_t::stCeraShopItemParam_t(local_104);
    for (local_58 = 0; local_58 < (int)(uint)(byte)local_a0[0x44]; local_58 = local_58 + 1) {
                    /* try { // try from 08322086 to 083231c1 has its CatchHandler @ 0832372f */
      std::make_pair<unsigned_long&,unsigned_char&>
                (local_c4,(uchar *)(local_a0 + (local_58 + 8) * 8 + 8));
      std::pair<int,int>::pair<unsigned_long,unsigned_char>(local_cc,(pair *)local_c4);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_104,local_cc
                );
    }
    for (local_54 = 0; local_54 < (int)(uint)(byte)local_a0[0x160]; local_54 = local_54 + 1) {
      std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::push_back
                (avStack_f8,(tagPackageItemSelection *)(local_a0 + (local_54 + 0x2c) * 8 + 4));
    }
    local_108 = atoi((char *)(param_3 + 0x173));
    if (((local_108 == 1) && (param_1 != (CUser *)0x0)) &&
       (iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar6 != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar1 = local_84;
    if (bVar5) {
      if (local_108 == -0xc) {
        _ProcessIPGError(this,param_1,param_2,param_3,'\x1a',local_9c,local_88,local_98,local_94,
                         (char)local_69);
      }
      else {
        _ProcessIPGError(this,param_1,param_2,param_3,'\x19',local_9c,local_88,local_98,local_94,
                         (char)local_69);
      }
      bVar5 = false;
    }
    else {
      local_60 = -1;
      local_108 = 0;
      local_10c = -1;
      local_5c = 2;
      if (local_9c == 0) {
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          _processAvatarGift(this,param_1,local_84,local_8c,(char)local_7e,(char)local_7d,
                             (char *)(param_2 + 0x7d),local_64,local_68);
        }
        else {
          iVar7 = (int)(char)local_7d;
          iVar6 = (int)(char)local_7e;
          pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_60 = CInventory::AddAvatarItem
                               (pCVar18,uVar1,local_8c,0,iVar6,iVar7,param_2 + 0x7d,0,0,0);
          if (local_60 < 0) {
            local_50 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "game_server_msg_104",(bool *)0x0);
            sVar12 = strlen(local_50);
            sVar3 = local_7d;
            sVar2 = local_7e;
            uVar1 = local_84;
            iVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            CMailBoxHelper::ReqDBSendNewAvatarMail
                      (param_1,iVar6,uVar1,local_8c,(char)sVar2,(char)sVar3,(char *)(param_2 + 0x7d)
                       ,local_50,sVar12);
          }
          else {
            CUser::SendUpdateItemList(param_1,1,1,local_60);
            cVar4 = CEventMgr::IsChildrensDayEventing();
            if (cVar4 != '\0') {
              iVar6 = G_CDataManager();
              local_4c = (CCeraShopGoods *)CDataManager::FindGoods(iVar6);
              uVar1 = local_84;
              pCVar13 = (CDataManager *)G_CDataManager();
              local_48 = (int *)CDataManager::find_item(pCVar13,uVar1);
              iVar6 = CCeraShopGoods::GetSticker(local_4c);
              if (iVar6 == 0x16) {
                iVar6 = (**(code **)(*local_48 + 0xc))(local_48);
                CUser::SetChildrensDayEventValue(param_1,iVar6,local_60,local_8c);
              }
            }
          }
        }
      }
      else if (local_9c == 1) {
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          _processCoinGift(this,param_1,local_80,local_64,local_68);
        }
        else {
          _processCoin((CUser *)this,(ushort)param_1,SUB21(local_80,0));
        }
      }
      else if (((local_9c == 2) || (local_9c == 7)) || (local_9c == 9)) {
        local_5c = 1;
        pCVar13 = (CDataManager *)G_CDataManager();
        local_44 = (int *)CDataManager::find_item(pCVar13,uVar1);
        Inven_Item::Inven_Item((Inven_Item *)&local_199);
        (**(code **)(*local_44 + 8))(local_44,&local_199);
        uStack_197 = (undefined2)local_84;
        uStack_195 = (undefined2)(local_84 >> 0x10);
        uStack_192._0_1_ = (undefined1)local_80;
        uStack_192._1_3_ = (uint3)(byte)(local_80 >> 8);
        uStack_192 = (uint)local_80;
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          uVar14 = CONCAT13((undefined1)uStack_192,CONCAT12(uStack_193,uStack_195));
          uVar20 = CONCAT13(uStack_18e,uStack_192._1_3_);
          _processItemGift(this,param_1,CONCAT22(uStack_197,local_199),uVar14,uVar20,local_18d,
                           local_189,local_185,local_181,local_17d,local_179,local_175,local_171,
                           local_16d,local_169,local_165,local_161,local_15d,local_64,local_68);
        }
        else {
          uVar14 = CONCAT13((undefined1)uStack_192,CONCAT12(uStack_193,uStack_195));
          uVar20 = CONCAT13(uStack_18e,uStack_192._1_3_);
          _processItem(this,param_1,CONCAT22(uStack_197,local_199),uVar14,uVar20,local_18d,local_189
                       ,local_185,local_181,local_17d,local_179,local_175,local_171,local_16d,
                       local_169,local_165,local_161,local_15d,local_90,&local_108,local_70,0,1,
                       local_ec,local_104);
        }
      }
      else if (local_9c == 4) {
        local_5c = 1;
        pCVar13 = (CDataManager *)G_CDataManager();
        local_40 = (int *)CDataManager::find_item(pCVar13,uVar1);
        if (local_40 == (int *)0x0) {
          bVar5 = false;
          goto LAB_08323747;
        }
        Inven_Item::Inven_Item((Inven_Item *)&local_1d6);
        (**(code **)(*local_40 + 8))(local_40,&local_1d6);
        uStack_1d4 = (undefined2)local_84;
        uStack_1d2 = (undefined2)(local_84 >> 0x10);
        uStack_1cf = (uint)local_80;
        cVar4 = ProcessSpecialItem(this,param_1,local_84,local_90,&local_108,local_70,false,
                                   (vector *)local_ec,local_104,'\0','\0',false,1);
        if (cVar4 != '\x01') {
          uVar14 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_60 = CInventory::insertItemIntoInventory
                               (uVar14,CONCAT22(uStack_1d4,local_1d6),
                                CONCAT13((undefined1)uStack_1cf,CONCAT12(uStack_1d0,uStack_1d2)),
                                CONCAT13(uStack_1cb,uStack_1cf._1_3_),local_1ca,local_1c6,local_1c2,
                                local_1be,local_1ba,local_1b6,local_1b2,local_1ae,local_1aa,
                                local_1a6,local_1a2,local_19e,local_19a,0x1e,1,0);
          if (local_60 == -1) {
            local_108 = 4;
          }
          else {
            CUser::SendUpdateItemList(param_1,1,0,local_60);
            CUser::SaveInventory(param_1);
          }
        }
      }
      else if (local_9c == 3) {
        pCVar13 = (CDataManager *)G_CDataManager();
        local_3c = (CItem *)CDataManager::find_item(pCVar13,uVar1);
        Inven_Item::Inven_Item((Inven_Item *)&local_213);
        (**(code **)(*(int *)local_3c + 8))(local_3c,&local_213);
        uStack_211 = (undefined2)local_84;
        uStack_20f = (undefined2)(local_84 >> 0x10);
        uStack_20c = (uint)local_80;
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          uVar14 = CItem::getExpirationDate(local_3c);
          uVar20 = CItem::getUsablePeriod(local_3c);
          _processCreatureGift
                    (this,param_1,CONCAT22(uStack_211,local_213),
                     CONCAT13((undefined1)uStack_20c,CONCAT12(uStack_20d,uStack_20f)),
                     CONCAT13(uStack_208,uStack_20c._1_3_),local_207,local_203,local_1ff,local_1fb,
                     local_1f7,local_1f3,local_1ef,local_1eb,local_1e7,local_1e3,local_1df,local_1db
                     ,local_1d7,local_64,local_68,uVar20,uVar14);
        }
        else {
          uVar14 = CItem::getExpirationDate(local_3c);
          uVar20 = CItem::getUsablePeriod(local_3c);
          _processCreature(this,param_1,CONCAT22(uStack_211,local_213),
                           CONCAT13((undefined1)uStack_20c,CONCAT12(uStack_20d,uStack_20f)),
                           CONCAT13(uStack_208,uStack_20c._1_3_),local_207,local_203,local_1ff,
                           local_1fb,local_1f7,local_1f3,local_1ef,local_1eb,local_1e7,local_1e3,
                           local_1df,local_1db,local_1d7,&local_10c,&local_108,1,uVar20,uVar14);
        }
      }
      else if (local_9c == 10) {
        _processAdditionalItem
                  (this,param_1,local_84,local_80,(uchar)local_7e,(uchar)local_7d,(vector *)local_ec
                   ,local_104,'\0');
        uVar1 = local_84;
        local_9c = -1;
        pCVar13 = (CDataManager *)G_CDataManager();
        local_38 = (CItem *)CDataManager::find_item(pCVar13,uVar1);
        if ((local_38 == (CItem *)0x0) ||
           (cVar4 = CItem::isCerashopPackageItem(local_38), cVar4 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_9c = 7;
        }
        if (local_9c != 7) {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::clear(local_ec);
        }
        local_34 = (CItemLimitEdition *)0x0;
        pCVar13 = (CDataManager *)G_CDataManager();
        uVar19 = CDataManager::getItemLimitEditionMgr(pCVar13);
        uVar16 = local_88;
        local_34 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar19);
        if (local_34 == (CItemLimitEdition *)0x0) {
          puVar15 = (undefined4 *)__cxa_allocate_exception(4,uVar16);
          *puVar15 = 0x11;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar15,&ENUM_ERROR::typeinfo,0);
        }
        local_10d = false;
        local_118[1] = 0;
        local_118[0] = 0;
        local_30 = CItemLimitEdition::getFeaturedIdx(local_34);
        if (local_30 == 0) {
          iVar6 = CItemLimitEdition::getRelateditem(local_34);
          cVar4 = IsSpecialItem(this,iVar6,local_118 + 1,local_118,&local_10d);
          if (cVar4 == '\0') goto LAB_08322d1c;
          bVar5 = true;
        }
        else {
LAB_08322d1c:
          bVar5 = false;
        }
        if (bVar5) {
          iVar6 = CItemLimitEdition::getRelateditem(local_34);
          iVar7 = G_CDataManager();
          local_30 = CItemList::GetRestrictCode(*(CItemList **)(iVar7 + 0xc),iVar6);
        }
        if (local_30 != 0) {
          iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          iVar7 = CItemLimitEdition::getFeaturedIdx(local_34);
          SaveFeaturedIdx(param_1,iVar7,iVar6,0);
        }
      }
      if (local_108 == 0) {
        if (local_7c != 0) {
          uVar16 = CUser::get_acc_id(param_1);
          break_away_prevent::CBreakAwayPreventSystem::updateUsedCera
                    (GlobalData::s_BreakAwaySys,uVar16,local_7c);
        }
        iVar6 = local_74;
        if (local_74 != 0) {
          pCVar17 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
          CCirculationStatistic::AddCirculationStatistic(pCVar17,0x26,param_1,iVar6);
        }
        pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::use_money(pCVar18,local_74,8,1);
        CUser::UseWinPoint(param_1,local_78,2);
        CUser::UseCera(param_1,local_7c);
        CUser::addUsedCera(param_1,local_7c);
        if ((local_90 != 0) && (cVar4 = CUser::IsRestrictedGoods(param_1,local_90), cVar4 != '\x01')
           ) {
          CUser::SetRestrictedGoods(param_1,local_90);
          SaveFeaturedIdx(param_1,local_90,local_70,0);
        }
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,1,0x43);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,(int)(char)local_69);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_9c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_88);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_98);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_94);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_10c);
        iVar6 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_ec);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d8,iVar6);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        __gnu_cxx::
        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
        __normal_iterator<Inven_Item*>(local_11c,local_ac);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
        __gnu_cxx::
        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
        __normal_iterator<Inven_Item*>(local_120,local_a8);
        while (bVar5 = __gnu_cxx::operator!=(local_11c,local_120), bVar5) {
          iVar6 = __gnu_cxx::
                  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator->(local_11c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,*(int *)(iVar6 + 2));
          iVar6 = __gnu_cxx::
                  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator->(local_11c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,*(int *)(iVar6 + 7));
          __gnu_cxx::
          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
          operator++(local_11c);
        }
        if ((local_69 == (stCeraShopIPGRequest_t)0x1) && (local_64 != 0)) {
          DB_UpdateGiftCount::makeRequest(local_64,1);
        }
        if (local_94 == local_98) {
          cVar4 = CEventMgr::IsChildrensDayEventing();
          if ((cVar4 != '\0') &&
             (cVar4 = CUser::IsOKChildrensDayEventCondition(param_1), cVar4 != '\0')) {
            uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar19 = CUser::get_acc_id(param_1);
            CWebEvent::ReqSaveEventItem(uVar19,uVar16,0x65ae,1,0x30d47,0,true);
            PacketGuard::PacketGuard(local_140);
                    /* try { // try from 083231db to 083233b8 has its CatchHandler @ 083233bb */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_140,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_140,1);
            local_144 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_140);
            local_2c = 0;
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_140,10);
            for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
              local_24 = CUser::GetChildrensDayEventTargetItemSlot(param_1,local_28);
              if ((local_24 < 0) ||
                 (iVar6 = CUser::GetChildrensDayEventTargetItemPeriod(param_1,local_28), iVar6 == -1
                 )) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (bVar5) break;
              iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
              CInventory::GetInvenSlot((int)local_250,iVar6);
              cVar4 = (char)local_245;
              uVar20 = CUser::GetChildrensDayEventTargetItemPeriod(param_1,local_28);
              uVar14 = local_24e;
              pCVar18 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              local_20 = CInventory::AddAvatarItem
                                   (pCVar18,uVar14,uVar20,0,(int)cVar4,0xffffffff,"E_CHILDRENS_DAY",
                                    2,0,0);
              if (-1 < local_20) {
                pCVar18 = (CInventory *)
                          CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::MakeItemPacket(pCVar18,2,local_20,local_140);
                local_2c = local_2c + 1;
              }
            }
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_140,&local_144,local_2c);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_140,true);
            CUser::Send(param_1,local_140);
                    /* try { // try from 083233df to 083234b2 has its CatchHandler @ 0832372f */
            PacketGuard::~PacketGuard(local_140);
          }
          local_124 = 0xffffffff;
          local_128 = 0;
          piVar21 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
          cVar4 = (**(code **)(*piVar21 + 0x34))(piVar21,0);
          if (cVar4 != '\0') {
            this_00 = (CCeraShopBonusItemEvent *)
                      CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
            iVar6 = CCeraShopBonusItemEvent::getBonusRate(this_00);
            iVar7 = get_rand_int(1000);
            if (iVar7 <= iVar6) {
              iVar6 = CUser::getUsedCera(param_1);
              iVar7 = G_CDataManager();
              CItemList::getCeraShopBonusItem
                        (*(CItemList **)(iVar7 + 0xc),iVar6,&local_124,&local_128);
              if (local_124 != 0xffffffff) {
                std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_150);
                    /* try { // try from 083234bc to 083234c0 has its CatchHandler @ 08323540 */
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                          (local_15c);
                    /* try { // try from 08323511 to 08323515 has its CatchHandler @ 08323518 */
                _processAdditionalItem
                          (this,param_1,local_124,(ushort)local_128,'\0',0xff,(vector *)local_150,
                           local_104,'\0');
                    /* try { // try from 08323539 to 0832353d has its CatchHandler @ 08323540 */
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                          (local_15c);
                    /* try { // try from 08323564 to 083235a6 has its CatchHandler @ 0832372f */
                std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_150);
              }
            }
          }
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_124);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_128);
          PacketGuard::PacketGuard(local_134);
                    /* try { // try from 083235c0 to 083236ff has its CatchHandler @ 08323702 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_134,0,0x35);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_134,1);
          iVar6 = CUser::GetCera(param_1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_134,iVar6);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_134,true);
          CUser::Send(param_1,local_134);
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_134);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_134,0,0xe);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_134,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_134,2);
          pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::MakeItemPacket(pCVar18,1,0,local_134);
          pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::MakeItemPacket(pCVar18,1,2,local_134);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_134,true);
          CUser::Send(param_1,local_134);
                    /* try { // try from 08323723 to 08323727 has its CatchHandler @ 0832372f */
          PacketGuard::~PacketGuard(local_134);
        }
        bVar5 = true;
      }
      else {
        _ProcessIPGError(this,param_1,param_2,param_3,(uchar)local_108,local_9c,local_88,local_98,
                         local_94,(char)local_69);
        cMyTrace::cMyTrace(local_bc,
                           "void WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                           ,0x955,0);
        cMyTrace::operator()
                  (local_bc,"[%s][%d]",
                   "void WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                   ,0x955);
        bVar5 = false;
      }
    }
LAB_08323747:
                    /* try { // try from 08323750 to 08323754 has its CatchHandler @ 08323767 */
    stCeraShopItemParam_t::~stCeraShopItemParam_t(local_104);
                    /* try { // try from 08323788 to 083237bb has its CatchHandler @ 083237be */
    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_ec);
    if (!bVar5) goto LAB_083237dc;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d8,true);
  CUser::Send(param_1,local_d8);
LAB_083237dc:
  PacketGuard::~PacketGuard(local_d8);
  return;
}
```
