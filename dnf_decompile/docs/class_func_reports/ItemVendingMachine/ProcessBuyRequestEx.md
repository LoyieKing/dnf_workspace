# ProcessBuyRequestEx

`_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM`

`ItemVendingMachine::ProcessBuyRequestEx(CUser*, MSG_BUY_CERASHOP_ITEM const&)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x081769f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081769f6  _ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM
#           ItemVendingMachine::ProcessBuyRequestEx(CUser*, MSG_BUY_CERASHOP_ITEM const&)
# range [0x081769f6, 0x081783e9]
081769f6 +0x0000:  push   %ebp
081769f7 +0x0001:  mov    %esp,%ebp
081769f9 +0x0003:  push   %edi
081769fa +0x0004:  push   %esi
081769fb +0x0005:  push   %ebx
081769fc +0x0006:  sub    $0x75c,%esp
08176a02 +0x000c:  cmpl   $0x0,0xc(%ebp)
08176a06 +0x0010:  jne    08176a4e <+0x58>
08176a08 +0x0012:  movl   $0x0,0xc(%esp)
08176a10 +0x001a:  movl   $0x290,0x8(%esp)
08176a18 +0x0022:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08176a20 +0x002a:  lea    -0x160(%ebp),%eax
08176a26 +0x0030:  mov    %eax,(%esp)
08176a29 +0x0033:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08176a2e +0x0038:  movl   $"There is no User in ItemVendingMachine",0x4(%esp)
08176a36 +0x0040:  lea    -0x160(%ebp),%eax
08176a3c +0x0046:  mov    %eax,(%esp)
08176a3f +0x0049:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08176a44 +0x004e:  mov    $0x0,%ebx
08176a49 +0x0053:  jmp    081783dc <+0x19e6>
08176a4e +0x0058:  movl   $0xffffffff,-0x78(%ebp)
08176a55 +0x005f:  movl   $0x0,-0x74(%ebp)
08176a5c +0x0066:  movl   $0x0,-0x70(%ebp)
08176a63 +0x006d:  movl   $0x0,-0x6c(%ebp)
08176a6a +0x0074:  movl   $0x0,-0x68(%ebp)
08176a71 +0x007b:  lea    -0x16c(%ebp),%eax
08176a77 +0x0081:  mov    %eax,(%esp)
08176a7a +0x0084:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08176a7f +0x0089:  lea    -0x280(%ebp),%ebx
08176a85 +0x008f:  mov    $0x0,%eax
08176a8a +0x0094:  mov    $0x24,%edx
08176a8f +0x0099:  mov    %ebx,%edi
08176a91 +0x009b:  mov    %edx,%ecx
08176a93 +0x009d:  rep stos %eax,%es:(%edi)
08176a95 +0x009f:  lea    -0x310(%ebp),%ebx
08176a9b +0x00a5:  mov    $0x0,%eax
08176aa0 +0x00aa:  mov    $0x24,%edx
08176aa5 +0x00af:  mov    %ebx,%edi
08176aa7 +0x00b1:  mov    %edx,%ecx
08176aa9 +0x00b3:  rep stos %eax,%es:(%edi)
08176aab +0x00b5:  mov    0xc(%ebp),%eax
08176aae +0x00b8:  mov    %eax,(%esp)
08176ab1 +0x00bb:  call   0817a208 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x286>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x286
08176ab6 +0x00c0:  movl   $0x0,-0x30(%ebp)
08176abd +0x00c7:  jmp    081773c8 <+0x9d2>
08176ac2 +0x00cc:  mov    -0x30(%ebp),%ebx
08176ac5 +0x00cf:  mov    -0x30(%ebp),%eax
08176ac8 +0x00d2:  mov    0x10(%ebp),%edx
08176acb +0x00d5:  imul   $0x1cf,%eax,%eax
08176ad1 +0x00db:  lea    (%edx,%eax,1),%eax
08176ad4 +0x00de:  add    $0x30,%eax
08176ad7 +0x00e1:  mov    0x9(%eax),%eax
08176ada +0x00e4:  mov    %eax,%esi
08176adc +0x00e6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08176ae1 +0x00eb:  mov    %esi,0x4(%esp)
08176ae5 +0x00ef:  mov    %eax,(%esp)
08176ae8 +0x00f2:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
08176aed +0x00f7:  mov    %eax,-0x310(%ebp,%ebx,4)
08176af4 +0x00fe:  mov    -0x30(%ebp),%eax
08176af7 +0x0101:  mov    -0x310(%ebp,%eax,4),%eax
08176afe +0x0108:  test   %eax,%eax
08176b00 +0x010a:  jne    08176bc5 <+0x1cf>
08176b06 +0x0110:  mov    0x10(%ebp),%eax
08176b09 +0x0113:  movzbl 0xf(%eax),%eax
08176b0d +0x0117:  movsbl %al,%ebx
08176b10 +0x011a:  mov    0x10(%ebp),%eax
08176b13 +0x011d:  movzbl 0x36(%eax),%eax
08176b17 +0x0121:  movzbl %al,%ecx
08176b1a +0x0124:  mov    -0x30(%ebp),%eax
08176b1d +0x0127:  lea    0x1(%eax),%esi
08176b20 +0x012a:  mov    -0x30(%ebp),%eax
08176b23 +0x012d:  mov    0x10(%ebp),%edx
08176b26 +0x0130:  imul   $0x1cf,%eax,%eax
08176b2c +0x0136:  lea    (%edx,%eax,1),%eax
08176b2f +0x0139:  add    $0x30,%eax
08176b32 +0x013c:  mov    0x9(%eax),%edx
08176b35 +0x013f:  mov    0x8(%ebp),%eax
08176b38 +0x0142:  mov    %ebx,0x1c(%esp)
08176b3c +0x0146:  mov    %ecx,0x18(%esp)
08176b40 +0x014a:  mov    %esi,0x14(%esp)
08176b44 +0x014e:  mov    %edx,0x10(%esp)
08176b48 +0x0152:  mov    -0x78(%ebp),%edx
08176b4b +0x0155:  mov    %edx,0xc(%esp)
08176b4f +0x0159:  movl   $0x15,0x8(%esp)
08176b57 +0x0161:  mov    0xc(%ebp),%edx
08176b5a +0x0164:  mov    %edx,0x4(%esp)
08176b5e +0x0168:  mov    %eax,(%esp)
08176b61 +0x016b:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08176b66 +0x0170:  mov    -0x30(%ebp),%eax
08176b69 +0x0173:  movl   $0x0,-0x310(%ebp,%eax,4)
08176b74 +0x017e:  movl   $0x0,0xc(%esp)
08176b7c +0x0186:  movl   $0x2ad,0x8(%esp)
08176b84 +0x018e:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08176b8c +0x0196:  lea    -0x150(%ebp),%eax
08176b92 +0x019c:  mov    %eax,(%esp)
08176b95 +0x019f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08176b9a +0x01a4:  movl   $0x2ad,0xc(%esp)
08176ba2 +0x01ac:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08176baa +0x01b4:  movl   $"[%s][%d]",0x4(%esp)
08176bb2 +0x01bc:  lea    -0x150(%ebp),%eax
08176bb8 +0x01c2:  mov    %eax,(%esp)
08176bbb +0x01c5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08176bc0 +0x01ca:  jmp    081773c4 <+0x9ce>
08176bc5 +0x01cf:  mov    -0x30(%ebp),%eax
08176bc8 +0x01d2:  mov    -0x310(%ebp,%eax,4),%eax
08176bcf +0x01d9:  mov    %eax,(%esp)
08176bd2 +0x01dc:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
08176bd7 +0x01e1:  mov    %eax,-0x78(%ebp)
08176bda +0x01e4:  mov    0x10(%ebp),%eax
08176bdd +0x01e7:  movzbl 0xf(%eax),%eax
08176be1 +0x01eb:  movsbl %al,%edx
08176be4 +0x01ee:  mov    -0x30(%ebp),%eax
08176be7 +0x01f1:  mov    -0x310(%ebp,%eax,4),%eax
08176bee +0x01f8:  mov    %edx,0xc(%esp)
08176bf2 +0x01fc:  mov    0xc(%ebp),%edx
08176bf5 +0x01ff:  mov    %edx,0x8(%esp)
08176bf9 +0x0203:  mov    %eax,0x4(%esp)
08176bfd +0x0207:  mov    0x8(%ebp),%eax
08176c00 +0x020a:  mov    %eax,(%esp)
08176c03 +0x020d:  call   08176722 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc>  ; ItemVendingMachine::_CheckEnableGiftCondition(CCeraShopGoods const*, CUser*, char)
08176c08 +0x0212:  xor    $0x1,%eax
08176c0b +0x0215:  test   %al,%al
08176c0d +0x0217:  je     08176cd2 <+0x2dc>
08176c13 +0x021d:  mov    0x10(%ebp),%eax
08176c16 +0x0220:  movzbl 0xf(%eax),%eax
08176c1a +0x0224:  movsbl %al,%ebx
08176c1d +0x0227:  mov    0x10(%ebp),%eax
08176c20 +0x022a:  movzbl 0x36(%eax),%eax
08176c24 +0x022e:  movzbl %al,%ecx
08176c27 +0x0231:  mov    -0x30(%ebp),%eax
08176c2a +0x0234:  lea    0x1(%eax),%esi
08176c2d +0x0237:  mov    -0x30(%ebp),%eax
08176c30 +0x023a:  mov    0x10(%ebp),%edx
08176c33 +0x023d:  imul   $0x1cf,%eax,%eax
08176c39 +0x0243:  lea    (%edx,%eax,1),%eax
08176c3c +0x0246:  add    $0x30,%eax
08176c3f +0x0249:  mov    0x9(%eax),%edx
08176c42 +0x024c:  mov    0x8(%ebp),%eax
08176c45 +0x024f:  mov    %ebx,0x1c(%esp)
08176c49 +0x0253:  mov    %ecx,0x18(%esp)
08176c4d +0x0257:  mov    %esi,0x14(%esp)
08176c51 +0x025b:  mov    %edx,0x10(%esp)
08176c55 +0x025f:  mov    -0x78(%ebp),%edx
08176c58 +0x0262:  mov    %edx,0xc(%esp)
08176c5c +0x0266:  movl   $0x8,0x8(%esp)
08176c64 +0x026e:  mov    0xc(%ebp),%edx
08176c67 +0x0271:  mov    %edx,0x4(%esp)
08176c6b +0x0275:  mov    %eax,(%esp)
08176c6e +0x0278:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08176c73 +0x027d:  mov    -0x30(%ebp),%eax
08176c76 +0x0280:  movl   $0x0,-0x310(%ebp,%eax,4)
08176c81 +0x028b:  movl   $0x0,0xc(%esp)
08176c89 +0x0293:  movl   $0x2b4,0x8(%esp)
08176c91 +0x029b:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08176c99 +0x02a3:  lea    -0x140(%ebp),%eax
08176c9f +0x02a9:  mov    %eax,(%esp)
08176ca2 +0x02ac:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08176ca7 +0x02b1:  movl   $0x2b4,0xc(%esp)
08176caf +0x02b9:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08176cb7 +0x02c1:  movl   $"[%s][%d]",0x4(%esp)
08176cbf +0x02c9:  lea    -0x140(%ebp),%eax
08176cc5 +0x02cf:  mov    %eax,(%esp)
08176cc8 +0x02d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08176ccd +0x02d7:  jmp    081773c4 <+0x9ce>
08176cd2 +0x02dc:  mov    -0x30(%ebp),%eax
08176cd5 +0x02df:  mov    0x10(%ebp),%edx
08176cd8 +0x02e2:  imul   $0x1cf,%eax,%eax
08176cde +0x02e8:  lea    (%edx,%eax,1),%eax
08176ce1 +0x02eb:  add    $0x30,%eax
08176ce4 +0x02ee:  mov    0x9(%eax),%eax
08176ce7 +0x02f1:  mov    -0x30(%ebp),%edx
08176cea +0x02f4:  mov    %edx,0xc(%esp)
08176cee +0x02f8:  movl   $0x1,0x8(%esp)
08176cf6 +0x0300:  mov    %eax,0x4(%esp)
08176cfa +0x0304:  mov    0xc(%ebp),%eax
08176cfd +0x0307:  mov    %eax,(%esp)
08176d00 +0x030a:  call   080e0ce2 <_ZN19CerashopAddRestrict7Manager21IsBuyableRestrictItemEP5CUserjji>  ; CerashopAddRestrict::Manager::IsBuyableRestrictItem(CUser*, unsigned int, unsigned int, int)
08176d05 +0x030f:  xor    $0x1,%eax
08176d08 +0x0312:  test   %al,%al
08176d0a +0x0314:  je     08176dcf <+0x3d9>
08176d10 +0x031a:  mov    0x10(%ebp),%eax
08176d13 +0x031d:  movzbl 0xf(%eax),%eax
08176d17 +0x0321:  movsbl %al,%ebx
08176d1a +0x0324:  mov    0x10(%ebp),%eax
08176d1d +0x0327:  movzbl 0x36(%eax),%eax
08176d21 +0x032b:  movzbl %al,%ecx
08176d24 +0x032e:  mov    -0x30(%ebp),%eax
08176d27 +0x0331:  lea    0x1(%eax),%esi
08176d2a +0x0334:  mov    -0x30(%ebp),%eax
08176d2d +0x0337:  mov    0x10(%ebp),%edx
08176d30 +0x033a:  imul   $0x1cf,%eax,%eax
08176d36 +0x0340:  lea    (%edx,%eax,1),%eax
08176d39 +0x0343:  add    $0x30,%eax
08176d3c +0x0346:  mov    0x9(%eax),%edx
08176d3f +0x0349:  mov    0x8(%ebp),%eax
08176d42 +0x034c:  mov    %ebx,0x1c(%esp)
08176d46 +0x0350:  mov    %ecx,0x18(%esp)
08176d4a +0x0354:  mov    %esi,0x14(%esp)
08176d4e +0x0358:  mov    %edx,0x10(%esp)
08176d52 +0x035c:  mov    -0x78(%ebp),%edx
08176d55 +0x035f:  mov    %edx,0xc(%esp)
08176d59 +0x0363:  movl   $0x71,0x8(%esp)
08176d61 +0x036b:  mov    0xc(%ebp),%edx
08176d64 +0x036e:  mov    %edx,0x4(%esp)
08176d68 +0x0372:  mov    %eax,(%esp)
08176d6b +0x0375:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08176d70 +0x037a:  mov    -0x30(%ebp),%eax
08176d73 +0x037d:  movl   $0x0,-0x310(%ebp,%eax,4)
08176d7e +0x0388:  movl   $0x0,0xc(%esp)
08176d86 +0x0390:  movl   $0x2bb,0x8(%esp)
08176d8e +0x0398:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08176d96 +0x03a0:  lea    -0x130(%ebp),%eax
08176d9c +0x03a6:  mov    %eax,(%esp)
08176d9f +0x03a9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08176da4 +0x03ae:  movl   $0x2bb,0xc(%esp)
08176dac +0x03b6:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08176db4 +0x03be:  movl   $"[%s][%d]",0x4(%esp)
08176dbc +0x03c6:  lea    -0x130(%ebp),%eax
08176dc2 +0x03cc:  mov    %eax,(%esp)
08176dc5 +0x03cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08176dca +0x03d4:  jmp    081773c4 <+0x9ce>
08176dcf +0x03d9:  mov    -0x30(%ebp),%edx
08176dd2 +0x03dc:  lea    -0x280(%ebp),%eax
08176dd8 +0x03e2:  shl    $0x2,%edx
08176ddb +0x03e5:  lea    (%eax,%edx,1),%ecx
08176dde +0x03e8:  mov    -0x30(%ebp),%eax
08176de1 +0x03eb:  mov    -0x310(%ebp,%eax,4),%eax
08176de8 +0x03f2:  lea    -0x16c(%ebp),%edx
08176dee +0x03f8:  mov    %edx,0xc(%esp)
08176df2 +0x03fc:  mov    %ecx,0x8(%esp)
08176df6 +0x0400:  mov    %eax,0x4(%esp)
08176dfa +0x0404:  mov    0x8(%ebp),%eax
08176dfd +0x0407:  mov    %eax,(%esp)
08176e00 +0x040a:  call   0817697c <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE>  ; ItemVendingMachine::_CheckEnableItemCondition(CCeraShopGoods const*, CItem const*&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08176e05 +0x040f:  xor    $0x1,%eax
08176e08 +0x0412:  test   %al,%al
08176e0a +0x0414:  je     08176ecf <+0x4d9>
08176e10 +0x041a:  mov    0x10(%ebp),%eax
08176e13 +0x041d:  movzbl 0xf(%eax),%eax
08176e17 +0x0421:  movsbl %al,%ebx
08176e1a +0x0424:  mov    0x10(%ebp),%eax
08176e1d +0x0427:  movzbl 0x36(%eax),%eax
08176e21 +0x042b:  movzbl %al,%ecx
08176e24 +0x042e:  mov    -0x30(%ebp),%eax
08176e27 +0x0431:  lea    0x1(%eax),%esi
08176e2a +0x0434:  mov    -0x30(%ebp),%eax
08176e2d +0x0437:  mov    0x10(%ebp),%edx
08176e30 +0x043a:  imul   $0x1cf,%eax,%eax
08176e36 +0x0440:  lea    (%edx,%eax,1),%eax
08176e39 +0x0443:  add    $0x30,%eax
08176e3c +0x0446:  mov    0x9(%eax),%edx
08176e3f +0x0449:  mov    0x8(%ebp),%eax
08176e42 +0x044c:  mov    %ebx,0x1c(%esp)
08176e46 +0x0450:  mov    %ecx,0x18(%esp)
08176e4a +0x0454:  mov    %esi,0x14(%esp)
08176e4e +0x0458:  mov    %edx,0x10(%esp)
08176e52 +0x045c:  mov    -0x78(%ebp),%edx
08176e55 +0x045f:  mov    %edx,0xc(%esp)
08176e59 +0x0463:  movl   $0x11,0x8(%esp)
08176e61 +0x046b:  mov    0xc(%ebp),%edx
08176e64 +0x046e:  mov    %edx,0x4(%esp)
08176e68 +0x0472:  mov    %eax,(%esp)
08176e6b +0x0475:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08176e70 +0x047a:  mov    -0x30(%ebp),%eax
08176e73 +0x047d:  movl   $0x0,-0x310(%ebp,%eax,4)
08176e7e +0x0488:  movl   $0x0,0xc(%esp)
08176e86 +0x0490:  movl   $0x2c2,0x8(%esp)
08176e8e +0x0498:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08176e96 +0x04a0:  lea    -0x120(%ebp),%eax
08176e9c +0x04a6:  mov    %eax,(%esp)
08176e9f +0x04a9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08176ea4 +0x04ae:  movl   $0x2c2,0xc(%esp)
08176eac +0x04b6:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08176eb4 +0x04be:  movl   $"[%s][%d]",0x4(%esp)
08176ebc +0x04c6:  lea    -0x120(%ebp),%eax
08176ec2 +0x04cc:  mov    %eax,(%esp)
08176ec5 +0x04cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08176eca +0x04d4:  jmp    081773c4 <+0x9ce>
08176ecf +0x04d9:  mov    -0x30(%ebp),%eax
08176ed2 +0x04dc:  mov    -0x310(%ebp,%eax,4),%eax
08176ed9 +0x04e3:  mov    0xc(%ebp),%edx
08176edc +0x04e6:  mov    %edx,0x8(%esp)
08176ee0 +0x04ea:  mov    %eax,0x4(%esp)
08176ee4 +0x04ee:  mov    0x8(%ebp),%eax
08176ee7 +0x04f1:  mov    %eax,(%esp)
08176eea +0x04f4:  call   081768b0 <_ZN18ItemVendingMachine26_CheckEnableStateConditionEPK14CCeraShopGoodsP5CUser>  ; ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods const*, CUser*)
08176eef +0x04f9:  xor    $0x1,%eax
08176ef2 +0x04fc:  test   %al,%al
08176ef4 +0x04fe:  je     08176fb9 <+0x5c3>
08176efa +0x0504:  mov    0x10(%ebp),%eax
08176efd +0x0507:  movzbl 0xf(%eax),%eax
08176f01 +0x050b:  movsbl %al,%ebx
08176f04 +0x050e:  mov    0x10(%ebp),%eax
08176f07 +0x0511:  movzbl 0x36(%eax),%eax
08176f0b +0x0515:  movzbl %al,%ecx
08176f0e +0x0518:  mov    -0x30(%ebp),%eax
08176f11 +0x051b:  lea    0x1(%eax),%esi
08176f14 +0x051e:  mov    -0x30(%ebp),%eax
08176f17 +0x0521:  mov    0x10(%ebp),%edx
08176f1a +0x0524:  imul   $0x1cf,%eax,%eax
08176f20 +0x052a:  lea    (%edx,%eax,1),%eax
08176f23 +0x052d:  add    $0x30,%eax
08176f26 +0x0530:  mov    0x9(%eax),%edx
08176f29 +0x0533:  mov    0x8(%ebp),%eax
08176f2c +0x0536:  mov    %ebx,0x1c(%esp)
08176f30 +0x053a:  mov    %ecx,0x18(%esp)
08176f34 +0x053e:  mov    %esi,0x14(%esp)
08176f38 +0x0542:  mov    %edx,0x10(%esp)
08176f3c +0x0546:  mov    -0x78(%ebp),%edx
08176f3f +0x0549:  mov    %edx,0xc(%esp)
08176f43 +0x054d:  movl   $0x7,0x8(%esp)
08176f4b +0x0555:  mov    0xc(%ebp),%edx
08176f4e +0x0558:  mov    %edx,0x4(%esp)
08176f52 +0x055c:  mov    %eax,(%esp)
08176f55 +0x055f:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08176f5a +0x0564:  mov    -0x30(%ebp),%eax
08176f5d +0x0567:  movl   $0x0,-0x310(%ebp,%eax,4)
08176f68 +0x0572:  movl   $0x0,0xc(%esp)
08176f70 +0x057a:  movl   $0x2c8,0x8(%esp)
08176f78 +0x0582:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08176f80 +0x058a:  lea    -0x110(%ebp),%eax
08176f86 +0x0590:  mov    %eax,(%esp)
08176f89 +0x0593:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08176f8e +0x0598:  movl   $0x2c8,0xc(%esp)
08176f96 +0x05a0:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08176f9e +0x05a8:  movl   $"[%s][%d]",0x4(%esp)
08176fa6 +0x05b0:  lea    -0x110(%ebp),%eax
08176fac +0x05b6:  mov    %eax,(%esp)
08176faf +0x05b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08176fb4 +0x05be:  jmp    081773c4 <+0x9ce>
08176fb9 +0x05c3:  movl   $0x0,-0x170(%ebp)
08176fc3 +0x05cd:  mov    0x10(%ebp),%eax
08176fc6 +0x05d0:  movzbl 0xf(%eax),%eax
08176fca +0x05d4:  movsbl %al,%edi
08176fcd +0x05d7:  mov    -0x30(%ebp),%eax
08176fd0 +0x05da:  mov    0x10(%ebp),%edx
08176fd3 +0x05dd:  imul   $0x1cf,%eax,%eax
08176fd9 +0x05e3:  lea    (%edx,%eax,1),%eax
08176fdc +0x05e6:  add    $0x38,%eax
08176fdf +0x05e9:  movzbl (%eax),%eax
08176fe2 +0x05ec:  cbtw
08176fe4 +0x05ee:  movzwl %ax,%esi
08176fe7 +0x05f1:  mov    -0x30(%ebp),%eax
08176fea +0x05f4:  mov    0x10(%ebp),%edx
08176fed +0x05f7:  imul   $0x1cf,%eax,%eax
08176ff3 +0x05fd:  lea    (%edx,%eax,1),%eax
08176ff6 +0x0600:  add    $0x37,%eax
08176ff9 +0x0603:  movzbl (%eax),%eax
08176ffc +0x0606:  movzbl %al,%ebx
08176fff +0x0609:  mov    -0x30(%ebp),%eax
08177002 +0x060c:  mov    0x10(%ebp),%edx
08177005 +0x060f:  imul   $0x1cf,%eax,%eax
0817700b +0x0615:  lea    (%edx,%eax,1),%eax
0817700e +0x0618:  add    $0x30,%eax
08177011 +0x061b:  mov    0x9(%eax),%ecx
08177014 +0x061e:  mov    -0x30(%ebp),%eax
08177017 +0x0621:  mov    -0x310(%ebp,%eax,4),%eax
0817701e +0x0628:  mov    %eax,-0x72c(%ebp)
08177024 +0x062e:  mov    0x8(%ebp),%edx
08177027 +0x0631:  lea    -0x170(%ebp),%eax
0817702d +0x0637:  mov    %eax,-0x71c(%ebp)
08177033 +0x063d:  mov    -0x71c(%ebp),%eax
08177039 +0x0643:  mov    %eax,0x1c(%esp)
0817703d +0x0647:  mov    %edi,0x18(%esp)
08177041 +0x064b:  mov    %esi,0x14(%esp)
08177045 +0x064f:  mov    %ebx,0x10(%esp)
08177049 +0x0653:  mov    %ecx,0xc(%esp)
0817704d +0x0657:  mov    -0x72c(%ebp),%ecx
08177053 +0x065d:  mov    %ecx,0x8(%esp)
08177057 +0x0661:  mov    0xc(%ebp),%eax
0817705a +0x0664:  mov    %eax,0x4(%esp)
0817705e +0x0668:  mov    %edx,(%esp)
08177061 +0x066b:  call   08324810 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi>  ; WongWork::CCeraShop::_CheckBuyingCondition(CUser*, CCeraShopGoods const*, unsigned int, unsigned char, unsigned short, char, int&)
08177066 +0x0670:  xor    $0x1,%eax
08177069 +0x0673:  test   %al,%al
0817706b +0x0675:  je     08177135 <+0x73f>
08177071 +0x067b:  mov    0x10(%ebp),%eax
08177074 +0x067e:  movzbl 0xf(%eax),%eax
08177078 +0x0682:  movsbl %al,%esi
0817707b +0x0685:  mov    0x10(%ebp),%eax
0817707e +0x0688:  movzbl 0x36(%eax),%eax
08177082 +0x068c:  movzbl %al,%ebx
08177085 +0x068f:  mov    -0x30(%ebp),%eax
08177088 +0x0692:  lea    0x1(%eax),%edi
0817708b +0x0695:  mov    -0x30(%ebp),%eax
0817708e +0x0698:  mov    0x10(%ebp),%edx
08177091 +0x069b:  imul   $0x1cf,%eax,%eax
08177097 +0x06a1:  lea    (%edx,%eax,1),%eax
0817709a +0x06a4:  add    $0x30,%eax
0817709d +0x06a7:  mov    0x9(%eax),%ecx
081770a0 +0x06aa:  mov    -0x170(%ebp),%eax
081770a6 +0x06b0:  movzwl %ax,%edx
081770a9 +0x06b3:  mov    0x8(%ebp),%eax
081770ac +0x06b6:  mov    %esi,0x1c(%esp)
081770b0 +0x06ba:  mov    %ebx,0x18(%esp)
081770b4 +0x06be:  mov    %edi,0x14(%esp)
081770b8 +0x06c2:  mov    %ecx,0x10(%esp)
081770bc +0x06c6:  mov    -0x78(%ebp),%ecx
081770bf +0x06c9:  mov    %ecx,0xc(%esp)
081770c3 +0x06cd:  mov    %edx,0x8(%esp)
081770c7 +0x06d1:  mov    0xc(%ebp),%edx
081770ca +0x06d4:  mov    %edx,0x4(%esp)
081770ce +0x06d8:  mov    %eax,(%esp)
081770d1 +0x06db:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081770d6 +0x06e0:  mov    -0x30(%ebp),%eax
081770d9 +0x06e3:  movl   $0x0,-0x310(%ebp,%eax,4)
081770e4 +0x06ee:  movl   $0x0,0xc(%esp)
081770ec +0x06f6:  movl   $0x2d6,0x8(%esp)
081770f4 +0x06fe:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
081770fc +0x0706:  lea    -0x100(%ebp),%eax
08177102 +0x070c:  mov    %eax,(%esp)
08177105 +0x070f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0817710a +0x0714:  movl   $0x2d6,0xc(%esp)
08177112 +0x071c:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
0817711a +0x0724:  movl   $"[%s][%d]",0x4(%esp)
08177122 +0x072c:  lea    -0x100(%ebp),%eax
08177128 +0x0732:  mov    %eax,(%esp)
0817712b +0x0735:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08177130 +0x073a:  jmp    081773c4 <+0x9ce>
08177135 +0x073f:  cmpl   $0x0,-0x78(%ebp)
08177139 +0x0743:  jne    08177281 <+0x88b>
0817713f +0x0749:  mov    -0x30(%ebp),%eax
08177142 +0x074c:  mov    0x10(%ebp),%edx
08177145 +0x074f:  imul   $0x1cf,%eax,%eax
0817714b +0x0755:  lea    (%edx,%eax,1),%eax
0817714e +0x0758:  add    $0x37,%eax
08177151 +0x075b:  movzbl (%eax),%eax
08177154 +0x075e:  movzbl %al,%ecx
08177157 +0x0761:  mov    -0x30(%ebp),%eax
0817715a +0x0764:  mov    0x10(%ebp),%edx
0817715d +0x0767:  imul   $0x1cf,%eax,%eax
08177163 +0x076d:  lea    (%edx,%eax,1),%eax
08177166 +0x0770:  add    $0x38,%eax
08177169 +0x0773:  movzbl (%eax),%eax
0817716c +0x0776:  movsbl %al,%edx
0817716f +0x0779:  mov    -0x30(%ebp),%eax
08177172 +0x077c:  mov    -0x310(%ebp,%eax,4),%eax
08177179 +0x0783:  lea    -0x1cc(%ebp),%ebx
0817717f +0x0789:  mov    %ebx,0x10(%esp)
08177183 +0x078d:  mov    %ecx,0xc(%esp)
08177187 +0x0791:  mov    %edx,0x8(%esp)
0817718b +0x0795:  mov    %eax,0x4(%esp)
0817718f +0x0799:  mov    0x8(%ebp),%eax
08177192 +0x079c:  mov    %eax,(%esp)
08177195 +0x079f:  call   08176794 <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t>  ; ItemVendingMachine::_CheckEnableAvatarCondition(CCeraShopGoods const*, char, unsigned char, stAvatarTypeSelect_t&)
0817719a +0x07a4:  xor    $0x1,%eax
0817719d +0x07a7:  test   %al,%al
0817719f +0x07a9:  je     08177264 <+0x86e>
081771a5 +0x07af:  mov    0x10(%ebp),%eax
081771a8 +0x07b2:  movzbl 0xf(%eax),%eax
081771ac +0x07b6:  movsbl %al,%ebx
081771af +0x07b9:  mov    0x10(%ebp),%eax
081771b2 +0x07bc:  movzbl 0x36(%eax),%eax
081771b6 +0x07c0:  movzbl %al,%ecx
081771b9 +0x07c3:  mov    -0x30(%ebp),%eax
081771bc +0x07c6:  lea    0x1(%eax),%esi
081771bf +0x07c9:  mov    -0x30(%ebp),%eax
081771c2 +0x07cc:  mov    0x10(%ebp),%edx
081771c5 +0x07cf:  imul   $0x1cf,%eax,%eax
081771cb +0x07d5:  lea    (%edx,%eax,1),%eax
081771ce +0x07d8:  add    $0x30,%eax
081771d1 +0x07db:  mov    0x9(%eax),%edx
081771d4 +0x07de:  mov    0x8(%ebp),%eax
081771d7 +0x07e1:  mov    %ebx,0x1c(%esp)
081771db +0x07e5:  mov    %ecx,0x18(%esp)
081771df +0x07e9:  mov    %esi,0x14(%esp)
081771e3 +0x07ed:  mov    %edx,0x10(%esp)
081771e7 +0x07f1:  mov    -0x78(%ebp),%edx
081771ea +0x07f4:  mov    %edx,0xc(%esp)
081771ee +0x07f8:  movl   $0x17,0x8(%esp)
081771f6 +0x0800:  mov    0xc(%ebp),%edx
081771f9 +0x0803:  mov    %edx,0x4(%esp)
081771fd +0x0807:  mov    %eax,(%esp)
08177200 +0x080a:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08177205 +0x080f:  mov    -0x30(%ebp),%eax
08177208 +0x0812:  movl   $0x0,-0x310(%ebp,%eax,4)
08177213 +0x081d:  movl   $0x0,0xc(%esp)
0817721b +0x0825:  movl   $0x2ec,0x8(%esp)
08177223 +0x082d:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
0817722b +0x0835:  lea    -0xf0(%ebp),%eax
08177231 +0x083b:  mov    %eax,(%esp)
08177234 +0x083e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08177239 +0x0843:  movl   $0x2ec,0xc(%esp)
08177241 +0x084b:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177249 +0x0853:  movl   $"[%s][%d]",0x4(%esp)
08177251 +0x085b:  lea    -0xf0(%ebp),%eax
08177257 +0x0861:  mov    %eax,(%esp)
0817725a +0x0864:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817725f +0x0869:  jmp    081773c4 <+0x9ce>
08177264 +0x086e:  mov    -0x1c0(%ebp),%eax
0817726a +0x0874:  add    %eax,-0x6c(%ebp)
0817726d +0x0877:  mov    -0x1c8(%ebp),%eax
08177273 +0x087d:  add    %eax,-0x74(%ebp)
08177276 +0x0880:  mov    -0x1c4(%ebp),%eax
0817727c +0x0886:  add    %eax,-0x70(%ebp)
0817727f +0x0889:  jmp    081772c0 <+0x8ca>
08177281 +0x088b:  mov    -0x30(%ebp),%eax
08177284 +0x088e:  mov    -0x310(%ebp,%eax,4),%eax
0817728b +0x0895:  mov    %eax,(%esp)
0817728e +0x0898:  call   0817a024 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xa2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xa2
08177293 +0x089d:  add    %eax,-0x6c(%ebp)
08177296 +0x08a0:  mov    -0x30(%ebp),%eax
08177299 +0x08a3:  mov    -0x310(%ebp,%eax,4),%eax
081772a0 +0x08aa:  mov    %eax,(%esp)
081772a3 +0x08ad:  call   0817a00c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x8a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x8a
081772a8 +0x08b2:  add    %eax,-0x74(%ebp)
081772ab +0x08b5:  mov    -0x30(%ebp),%eax
081772ae +0x08b8:  mov    -0x310(%ebp,%eax,4),%eax
081772b5 +0x08bf:  mov    %eax,(%esp)
081772b8 +0x08c2:  call   0817a018 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x96>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x96
081772bd +0x08c7:  add    %eax,-0x70(%ebp)
081772c0 +0x08ca:  mov    -0x30(%ebp),%eax
081772c3 +0x08cd:  mov    -0x310(%ebp,%eax,4),%eax
081772ca +0x08d4:  mov    %eax,(%esp)
081772cd +0x08d7:  call   0817a030 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xae>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xae
081772d2 +0x08dc:  add    %eax,-0x68(%ebp)
081772d5 +0x08df:  mov    0x10(%ebp),%eax
081772d8 +0x08e2:  movzwl 0xd(%eax),%eax
081772dc +0x08e6:  cmp    $0x1,%ax
081772e0 +0x08ea:  jne    081773c4 <+0x9ce>
081772e6 +0x08f0:  mov    -0x30(%ebp),%eax
081772e9 +0x08f3:  mov    -0x310(%ebp,%eax,4),%eax
081772f0 +0x08fa:  mov    %eax,(%esp)
081772f3 +0x08fd:  call   0817a084 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x102>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x102
081772f8 +0x0902:  test   %al,%al
081772fa +0x0904:  je     081773c4 <+0x9ce>
08177300 +0x090a:  mov    0x10(%ebp),%eax
08177303 +0x090d:  movzbl 0xf(%eax),%eax
08177307 +0x0911:  movsbl %al,%ebx
0817730a +0x0914:  mov    0x10(%ebp),%eax
0817730d +0x0917:  movzbl 0x36(%eax),%eax
08177311 +0x091b:  movzbl %al,%ecx
08177314 +0x091e:  mov    -0x30(%ebp),%eax
08177317 +0x0921:  lea    0x1(%eax),%esi
0817731a +0x0924:  mov    -0x30(%ebp),%eax
0817731d +0x0927:  mov    0x10(%ebp),%edx
08177320 +0x092a:  imul   $0x1cf,%eax,%eax
08177326 +0x0930:  lea    (%edx,%eax,1),%eax
08177329 +0x0933:  add    $0x30,%eax
0817732c +0x0936:  mov    0x9(%eax),%edx
0817732f +0x0939:  mov    0x8(%ebp),%eax
08177332 +0x093c:  mov    %ebx,0x1c(%esp)
08177336 +0x0940:  mov    %ecx,0x18(%esp)
0817733a +0x0944:  mov    %esi,0x14(%esp)
0817733e +0x0948:  mov    %edx,0x10(%esp)
08177342 +0x094c:  mov    -0x78(%ebp),%edx
08177345 +0x094f:  mov    %edx,0xc(%esp)
08177349 +0x0953:  movl   $0x138b,0x8(%esp)
08177351 +0x095b:  mov    0xc(%ebp),%edx
08177354 +0x095e:  mov    %edx,0x4(%esp)
08177358 +0x0962:  mov    %eax,(%esp)
0817735b +0x0965:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08177360 +0x096a:  mov    -0x30(%ebp),%eax
08177363 +0x096d:  movl   $0x0,-0x310(%ebp,%eax,4)
0817736e +0x0978:  movl   $0x0,0xc(%esp)
08177376 +0x0980:  movl   $0x305,0x8(%esp)
0817737e +0x0988:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08177386 +0x0990:  lea    -0xe0(%ebp),%eax
0817738c +0x0996:  mov    %eax,(%esp)
0817738f +0x0999:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08177394 +0x099e:  movl   $0x305,0xc(%esp)
0817739c +0x09a6:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
081773a4 +0x09ae:  movl   $"[%s][%d]",0x4(%esp)
081773ac +0x09b6:  lea    -0xe0(%ebp),%eax
081773b2 +0x09bc:  mov    %eax,(%esp)
081773b5 +0x09bf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081773ba +0x09c4:  mov    $0x1,%ebx
081773bf +0x09c9:  jmp    081783ce <+0x19d8>
081773c4 +0x09ce:  addl   $0x1,-0x30(%ebp)
081773c8 +0x09d2:  mov    0x10(%ebp),%eax
081773cb +0x09d5:  movzbl 0x36(%eax),%eax
081773cf +0x09d9:  movzbl %al,%eax
081773d2 +0x09dc:  cmp    -0x30(%ebp),%eax
081773d5 +0x09df:  setg   %al
081773d8 +0x09e2:  test   %al,%al
081773da +0x09e4:  jne    08176ac2 <+0xcc>
081773e0 +0x09ea:  mov    0x8(%ebp),%eax
081773e3 +0x09ed:  lea    -0x310(%ebp),%edx
081773e9 +0x09f3:  mov    %edx,0x4(%esp)
081773ed +0x09f7:  mov    %eax,(%esp)
081773f0 +0x09fa:  call   08323af4 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods>  ; WongWork::CCeraShop::_CheckValidCount(CCeraShopGoods const**)
081773f5 +0x09ff:  xor    $0x1,%eax
081773f8 +0x0a02:  test   %al,%al
081773fa +0x0a04:  je     08177456 <+0xa60>
081773fc +0x0a06:  movl   $0xffffffff,-0x78(%ebp)
08177403 +0x0a0d:  mov    0x10(%ebp),%eax
08177406 +0x0a10:  movzbl 0xf(%eax),%eax
0817740a +0x0a14:  movsbl %al,%ecx
0817740d +0x0a17:  mov    0x10(%ebp),%eax
08177410 +0x0a1a:  mov    0x39(%eax),%edx
08177413 +0x0a1d:  mov    0x8(%ebp),%eax
08177416 +0x0a20:  mov    %ecx,0x1c(%esp)
0817741a +0x0a24:  movl   $0x1,0x18(%esp)
08177422 +0x0a2c:  movl   $0x1,0x14(%esp)
0817742a +0x0a34:  mov    %edx,0x10(%esp)
0817742e +0x0a38:  mov    -0x78(%ebp),%edx
08177431 +0x0a3b:  mov    %edx,0xc(%esp)
08177435 +0x0a3f:  movl   $0x1,0x8(%esp)
0817743d +0x0a47:  mov    0xc(%ebp),%edx
08177440 +0x0a4a:  mov    %edx,0x4(%esp)
08177444 +0x0a4e:  mov    %eax,(%esp)
08177447 +0x0a51:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0817744c +0x0a56:  mov    $0x1,%ebx
08177451 +0x0a5b:  jmp    081783ce <+0x19d8>
08177456 +0x0a60:  movl   $0x0,-0x64(%ebp)
0817745d +0x0a67:  mov    0xc(%ebp),%eax
08177460 +0x0a6a:  mov    %eax,(%esp)
08177463 +0x0a6d:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
08177468 +0x0a72:  cmp    -0x6c(%ebp),%eax
0817746b +0x0a75:  setl   %al
0817746e +0x0a78:  test   %al,%al
08177470 +0x0a7a:  je     0817747b <+0xa85>
08177472 +0x0a7c:  movl   $0xb,-0x64(%ebp)
08177479 +0x0a83:  jmp    081774d3 <+0xadd>
0817747b +0x0a85:  mov    0xc(%ebp),%eax
0817747e +0x0a88:  mov    %eax,(%esp)
08177481 +0x0a8b:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08177486 +0x0a90:  cmp    -0x74(%ebp),%eax
08177489 +0x0a93:  setl   %al
0817748c +0x0a96:  test   %al,%al
0817748e +0x0a98:  je     08177499 <+0xaa3>
08177490 +0x0a9a:  movl   $0xa,-0x64(%ebp)
08177497 +0x0aa1:  jmp    081774d3 <+0xadd>
08177499 +0x0aa3:  mov    0xc(%ebp),%eax
0817749c +0x0aa6:  mov    %eax,(%esp)
0817749f +0x0aa9:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
081774a4 +0x0aae:  cmp    -0x70(%ebp),%eax
081774a7 +0x0ab1:  setl   %al
081774aa +0x0ab4:  test   %al,%al
081774ac +0x0ab6:  je     081774b7 <+0xac1>
081774ae +0x0ab8:  movl   $0xc,-0x64(%ebp)
081774b5 +0x0abf:  jmp    081774d3 <+0xadd>
081774b7 +0x0ac1:  mov    0xc(%ebp),%eax
081774ba +0x0ac4:  mov    %eax,(%esp)
081774bd +0x0ac7:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
081774c2 +0x0acc:  cmp    -0x68(%ebp),%eax
081774c5 +0x0acf:  setl   %al
081774c8 +0x0ad2:  test   %al,%al
081774ca +0x0ad4:  je     081774d3 <+0xadd>
081774cc +0x0ad6:  movl   $0x3ed,-0x64(%ebp)
081774d3 +0x0add:  mov    0x10(%ebp),%eax
081774d6 +0x0ae0:  movzwl 0xd(%eax),%eax
081774da +0x0ae4:  cmp    $0x1,%ax
081774de +0x0ae8:  jne    08177505 <+0xb0f>
081774e0 +0x0aea:  movl   $0x0,-0x64(%ebp)
081774e7 +0x0af1:  mov    0xc(%ebp),%eax
081774ea +0x0af4:  mov    %eax,(%esp)
081774ed +0x0af7:  call   08692af6 <_ZN5CUser12GetCeraPointEv>  ; CUser::GetCeraPoint()
081774f2 +0x0afc:  mov    -0x6c(%ebp),%edx
081774f5 +0x0aff:  cmp    %edx,%eax
081774f7 +0x0b01:  setb   %al
081774fa +0x0b04:  test   %al,%al
081774fc +0x0b06:  je     08177505 <+0xb0f>
081774fe +0x0b08:  movl   $0x138a,-0x64(%ebp)
08177505 +0x0b0f:  cmpl   $0x0,-0x64(%ebp)
08177509 +0x0b13:  je     08177638 <+0xc42>
0817750f +0x0b19:  mov    0xc(%ebp),%eax
08177512 +0x0b1c:  mov    %eax,(%esp)
08177515 +0x0b1f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0817751a +0x0b24:  mov    -0x68(%ebp),%edx
0817751d +0x0b27:  mov    %edx,0x24(%esp)
08177521 +0x0b2b:  mov    -0x70(%ebp),%edx
08177524 +0x0b2e:  mov    %edx,0x20(%esp)
08177528 +0x0b32:  mov    -0x74(%ebp),%edx
0817752b +0x0b35:  mov    %edx,0x1c(%esp)
0817752f +0x0b39:  mov    -0x6c(%ebp),%edx
08177532 +0x0b3c:  mov    %edx,0x18(%esp)
08177536 +0x0b40:  mov    %eax,0x14(%esp)
0817753a +0x0b44:  movl   $"[ERROR] Not enough UserID[%s] ACera[%d] AGold[%d] AWP[%d] AMile[%d]",0x10(%esp)
08177542 +0x0b4c:  movl   $0x34b,0xc(%esp)
0817754a +0x0b54:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177552 +0x0b5c:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
0817755a +0x0b64:  movl   $0x1,(%esp)
08177561 +0x0b6b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08177566 +0x0b70:  mov    0xc(%ebp),%eax
08177569 +0x0b73:  mov    %eax,(%esp)
0817756c +0x0b76:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
08177571 +0x0b7b:  mov    %eax,%edi
08177573 +0x0b7d:  mov    0xc(%ebp),%eax
08177576 +0x0b80:  mov    %eax,(%esp)
08177579 +0x0b83:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
0817757e +0x0b88:  mov    %eax,%esi
08177580 +0x0b8a:  mov    0xc(%ebp),%eax
08177583 +0x0b8d:  mov    %eax,(%esp)
08177586 +0x0b90:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0817758b +0x0b95:  mov    %eax,(%esp)
0817758e +0x0b98:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08177593 +0x0b9d:  mov    %eax,%ebx
08177595 +0x0b9f:  mov    0xc(%ebp),%eax
08177598 +0x0ba2:  mov    %eax,(%esp)
0817759b +0x0ba5:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
081775a0 +0x0baa:  mov    %edi,0x20(%esp)
081775a4 +0x0bae:  mov    %esi,0x1c(%esp)
081775a8 +0x0bb2:  mov    %ebx,0x18(%esp)
081775ac +0x0bb6:  mov    %eax,0x14(%esp)
081775b0 +0x0bba:  movl   $" / UCera[%d] UGold[%d] UWP[%d] AMile[%d]\n",0x10(%esp)
081775b8 +0x0bc2:  movl   $0x34c,0xc(%esp)
081775c0 +0x0bca:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
081775c8 +0x0bd2:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
081775d0 +0x0bda:  movl   $0x1,(%esp)
081775d7 +0x0be1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081775dc +0x0be6:  movl   $0xffffffff,-0x78(%ebp)
081775e3 +0x0bed:  mov    0x10(%ebp),%eax
081775e6 +0x0bf0:  movzbl 0xf(%eax),%eax
081775ea +0x0bf4:  movsbl %al,%ebx
081775ed +0x0bf7:  mov    0x10(%ebp),%eax
081775f0 +0x0bfa:  mov    0x39(%eax),%ecx
081775f3 +0x0bfd:  mov    -0x64(%ebp),%eax
081775f6 +0x0c00:  movzwl %ax,%edx
081775f9 +0x0c03:  mov    0x8(%ebp),%eax
081775fc +0x0c06:  mov    %ebx,0x1c(%esp)
08177600 +0x0c0a:  movl   $0x1,0x18(%esp)
08177608 +0x0c12:  movl   $0x1,0x14(%esp)
08177610 +0x0c1a:  mov    %ecx,0x10(%esp)
08177614 +0x0c1e:  mov    -0x78(%ebp),%ecx
08177617 +0x0c21:  mov    %ecx,0xc(%esp)
0817761b +0x0c25:  mov    %edx,0x8(%esp)
0817761f +0x0c29:  mov    0xc(%ebp),%edx
08177622 +0x0c2c:  mov    %edx,0x4(%esp)
08177626 +0x0c30:  mov    %eax,(%esp)
08177629 +0x0c33:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0817762e +0x0c38:  mov    $0x1,%ebx
08177633 +0x0c3d:  jmp    081783ce <+0x19d8>
08177638 +0x0c42:  movl   $0x0,-0x60(%ebp)
0817763f +0x0c49:  movl   $0x0,-0x5c(%ebp)
08177646 +0x0c50:  movl   $0x0,-0x58(%ebp)
0817764d +0x0c57:  movl   $0x0,-0x54(%ebp)
08177654 +0x0c5e:  mov    0xc(%ebp),%eax
08177657 +0x0c61:  mov    %eax,(%esp)
0817765a +0x0c64:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0817765f +0x0c69:  mov    %eax,%edx
08177661 +0x0c6b:  sar    $0x1f,%edx
08177664 +0x0c6e:  mov    %eax,-0x50(%ebp)
08177667 +0x0c71:  mov    %edx,-0x4c(%ebp)
0817766a +0x0c74:  mov    0xc(%ebp),%eax
0817766d +0x0c77:  mov    %eax,(%esp)
08177670 +0x0c7a:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
08177675 +0x0c7f:  mov    $0x0,%edx
0817767a +0x0c84:  mov    %eax,-0x48(%ebp)
0817767d +0x0c87:  mov    %edx,-0x44(%ebp)
08177680 +0x0c8a:  movl   $0x0,-0x3c(%ebp)
08177687 +0x0c91:  mov    0xc(%ebp),%eax
0817768a +0x0c94:  mov    %eax,(%esp)
0817768d +0x0c97:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
08177692 +0x0c9c:  mov    %eax,-0x38(%ebp)
08177695 +0x0c9f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0817769c +0x0ca6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081776a1 +0x0cab:  mov    %eax,-0x34(%ebp)
081776a4 +0x0cae:  movl   $0x0,-0x2c(%ebp)
081776ab +0x0cb5:  jmp    08178391 <+0x199b>
081776b0 +0x0cba:  mov    -0x2c(%ebp),%eax
081776b3 +0x0cbd:  mov    -0x310(%ebp,%eax,4),%eax
081776ba +0x0cc4:  test   %eax,%eax
081776bc +0x0cc6:  je     0817838c <+0x1996>
081776c2 +0x0ccc:  mov    -0x2c(%ebp),%eax
081776c5 +0x0ccf:  mov    -0x310(%ebp,%eax,4),%eax
081776cc +0x0cd6:  mov    %eax,(%esp)
081776cf +0x0cd9:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
081776d4 +0x0cde:  mov    %eax,-0x78(%ebp)
081776d7 +0x0ce1:  cmpl   $0x0,-0x78(%ebp)
081776db +0x0ce5:  jne    0817782c <+0xe36>
081776e1 +0x0ceb:  mov    -0x2c(%ebp),%eax
081776e4 +0x0cee:  mov    0x10(%ebp),%edx
081776e7 +0x0cf1:  imul   $0x1cf,%eax,%eax
081776ed +0x0cf7:  lea    (%edx,%eax,1),%eax
081776f0 +0x0cfa:  add    $0x37,%eax
081776f3 +0x0cfd:  movzbl (%eax),%eax
081776f6 +0x0d00:  movzbl %al,%ecx
081776f9 +0x0d03:  mov    -0x2c(%ebp),%eax
081776fc +0x0d06:  mov    0x10(%ebp),%edx
081776ff +0x0d09:  imul   $0x1cf,%eax,%eax
08177705 +0x0d0f:  lea    (%edx,%eax,1),%eax
08177708 +0x0d12:  add    $0x38,%eax
0817770b +0x0d15:  movzbl (%eax),%eax
0817770e +0x0d18:  movsbl %al,%edx
08177711 +0x0d1b:  mov    -0x2c(%ebp),%eax
08177714 +0x0d1e:  mov    -0x310(%ebp,%eax,4),%eax
0817771b +0x0d25:  lea    -0x1cc(%ebp),%ebx
08177721 +0x0d2b:  mov    %ebx,0x10(%esp)
08177725 +0x0d2f:  mov    %ecx,0xc(%esp)
08177729 +0x0d33:  mov    %edx,0x8(%esp)
0817772d +0x0d37:  mov    %eax,0x4(%esp)
08177731 +0x0d3b:  mov    0x8(%ebp),%eax
08177734 +0x0d3e:  mov    %eax,(%esp)
08177737 +0x0d41:  call   08176794 <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t>  ; ItemVendingMachine::_CheckEnableAvatarCondition(CCeraShopGoods const*, char, unsigned char, stAvatarTypeSelect_t&)
0817773c +0x0d46:  xor    $0x1,%eax
0817773f +0x0d49:  test   %al,%al
08177741 +0x0d4b:  je     08177806 <+0xe10>
08177747 +0x0d51:  mov    0x10(%ebp),%eax
0817774a +0x0d54:  movzbl 0xf(%eax),%eax
0817774e +0x0d58:  movsbl %al,%ebx
08177751 +0x0d5b:  mov    0x10(%ebp),%eax
08177754 +0x0d5e:  movzbl 0x36(%eax),%eax
08177758 +0x0d62:  movzbl %al,%ecx
0817775b +0x0d65:  mov    -0x2c(%ebp),%eax
0817775e +0x0d68:  lea    0x1(%eax),%esi
08177761 +0x0d6b:  mov    -0x2c(%ebp),%eax
08177764 +0x0d6e:  mov    0x10(%ebp),%edx
08177767 +0x0d71:  imul   $0x1cf,%eax,%eax
0817776d +0x0d77:  lea    (%edx,%eax,1),%eax
08177770 +0x0d7a:  add    $0x30,%eax
08177773 +0x0d7d:  mov    0x9(%eax),%edx
08177776 +0x0d80:  mov    0x8(%ebp),%eax
08177779 +0x0d83:  mov    %ebx,0x1c(%esp)
0817777d +0x0d87:  mov    %ecx,0x18(%esp)
08177781 +0x0d8b:  mov    %esi,0x14(%esp)
08177785 +0x0d8f:  mov    %edx,0x10(%esp)
08177789 +0x0d93:  mov    -0x78(%ebp),%edx
0817778c +0x0d96:  mov    %edx,0xc(%esp)
08177790 +0x0d9a:  movl   $0x17,0x8(%esp)
08177798 +0x0da2:  mov    0xc(%ebp),%edx
0817779b +0x0da5:  mov    %edx,0x4(%esp)
0817779f +0x0da9:  mov    %eax,(%esp)
081777a2 +0x0dac:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081777a7 +0x0db1:  mov    -0x2c(%ebp),%eax
081777aa +0x0db4:  movl   $0x0,-0x310(%ebp,%eax,4)
081777b5 +0x0dbf:  movl   $0x0,0xc(%esp)
081777bd +0x0dc7:  movl   $0x37b,0x8(%esp)
081777c5 +0x0dcf:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
081777cd +0x0dd7:  lea    -0xd0(%ebp),%eax
081777d3 +0x0ddd:  mov    %eax,(%esp)
081777d6 +0x0de0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081777db +0x0de5:  movl   $0x37b,0xc(%esp)
081777e3 +0x0ded:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
081777eb +0x0df5:  movl   $"[%s][%d]",0x4(%esp)
081777f3 +0x0dfd:  lea    -0xd0(%ebp),%eax
081777f9 +0x0e03:  mov    %eax,(%esp)
081777fc +0x0e06:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08177801 +0x0e0b:  jmp    0817838d <+0x1997>
08177806 +0x0e10:  mov    -0x1c0(%ebp),%eax
0817780c +0x0e16:  mov    %eax,-0x58(%ebp)
0817780f +0x0e19:  mov    -0x1c8(%ebp),%eax
08177815 +0x0e1f:  mov    %eax,-0x60(%ebp)
08177818 +0x0e22:  mov    -0x1c4(%ebp),%eax
0817781e +0x0e28:  mov    %eax,-0x54(%ebp)
08177821 +0x0e2b:  mov    -0x1cc(%ebp),%eax
08177827 +0x0e31:  mov    %eax,-0x5c(%ebp)
0817782a +0x0e34:  jmp    0817786b <+0xe75>
0817782c +0x0e36:  mov    -0x2c(%ebp),%eax
0817782f +0x0e39:  mov    -0x310(%ebp,%eax,4),%eax
08177836 +0x0e40:  mov    %eax,(%esp)
08177839 +0x0e43:  call   0817a024 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xa2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xa2
0817783e +0x0e48:  mov    %eax,-0x58(%ebp)
08177841 +0x0e4b:  mov    -0x2c(%ebp),%eax
08177844 +0x0e4e:  mov    -0x310(%ebp,%eax,4),%eax
0817784b +0x0e55:  mov    %eax,(%esp)
0817784e +0x0e58:  call   0817a00c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x8a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x8a
08177853 +0x0e5d:  mov    %eax,-0x60(%ebp)
08177856 +0x0e60:  mov    -0x2c(%ebp),%eax
08177859 +0x0e63:  mov    -0x310(%ebp,%eax,4),%eax
08177860 +0x0e6a:  mov    %eax,(%esp)
08177863 +0x0e6d:  call   0817a018 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x96>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x96
08177868 +0x0e72:  mov    %eax,-0x54(%ebp)
0817786b +0x0e75:  mov    -0x2c(%ebp),%eax
0817786e +0x0e78:  mov    -0x310(%ebp,%eax,4),%eax
08177875 +0x0e7f:  mov    %eax,(%esp)
08177878 +0x0e82:  call   0817a030 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xae>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xae
0817787d +0x0e87:  mov    %eax,-0x3c(%ebp)
08177880 +0x0e8a:  movl   $0x0,-0x28(%ebp)
08177887 +0x0e91:  mov    0xc(%ebp),%eax
0817788a +0x0e94:  mov    %eax,(%esp)
0817788d +0x0e97:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
08177892 +0x0e9c:  cmp    -0x58(%ebp),%eax
08177895 +0x0e9f:  setb   %al
08177898 +0x0ea2:  test   %al,%al
0817789a +0x0ea4:  je     081778a5 <+0xeaf>
0817789c +0x0ea6:  movl   $0xb,-0x28(%ebp)
081778a3 +0x0ead:  jmp    081778e7 <+0xef1>
081778a5 +0x0eaf:  mov    0xc(%ebp),%eax
081778a8 +0x0eb2:  mov    %eax,(%esp)
081778ab +0x0eb5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081778b0 +0x0eba:  mov    %eax,(%esp)
081778b3 +0x0ebd:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081778b8 +0x0ec2:  cmp    -0x60(%ebp),%eax
081778bb +0x0ec5:  setl   %al
081778be +0x0ec8:  test   %al,%al
081778c0 +0x0eca:  je     081778cb <+0xed5>
081778c2 +0x0ecc:  movl   $0xa,-0x28(%ebp)
081778c9 +0x0ed3:  jmp    081778e7 <+0xef1>
081778cb +0x0ed5:  mov    0xc(%ebp),%eax
081778ce +0x0ed8:  mov    %eax,(%esp)
081778d1 +0x0edb:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
081778d6 +0x0ee0:  cmp    -0x54(%ebp),%eax
081778d9 +0x0ee3:  setb   %al
081778dc +0x0ee6:  test   %al,%al
081778de +0x0ee8:  je     081778e7 <+0xef1>
081778e0 +0x0eea:  movl   $0xc,-0x28(%ebp)
081778e7 +0x0ef1:  mov    0x10(%ebp),%eax
081778ea +0x0ef4:  movzwl 0xd(%eax),%eax
081778ee +0x0ef8:  cmp    $0x1,%ax
081778f2 +0x0efc:  jne    08177917 <+0xf21>
081778f4 +0x0efe:  movl   $0x0,-0x28(%ebp)
081778fb +0x0f05:  mov    0xc(%ebp),%eax
081778fe +0x0f08:  mov    %eax,(%esp)
08177901 +0x0f0b:  call   08692af6 <_ZN5CUser12GetCeraPointEv>  ; CUser::GetCeraPoint()
08177906 +0x0f10:  cmp    -0x58(%ebp),%eax
08177909 +0x0f13:  setb   %al
0817790c +0x0f16:  test   %al,%al
0817790e +0x0f18:  je     08177917 <+0xf21>
08177910 +0x0f1a:  movl   $0x138a,-0x28(%ebp)
08177917 +0x0f21:  mov    -0x60(%ebp),%eax
0817791a +0x0f24:  mov    %eax,%edx
0817791c +0x0f26:  sar    $0x1f,%edx
0817791f +0x0f29:  cmp    -0x4c(%ebp),%edx
08177922 +0x0f2c:  jl     08177935 <+0xf3f>
08177924 +0x0f2e:  cmp    -0x4c(%ebp),%edx
08177927 +0x0f31:  jg     0817792e <+0xf38>
08177929 +0x0f33:  cmp    -0x50(%ebp),%eax
0817792c +0x0f36:  jbe    08177935 <+0xf3f>
0817792e +0x0f38:  movl   $0xa,-0x28(%ebp)
08177935 +0x0f3f:  mov    -0x54(%ebp),%eax
08177938 +0x0f42:  mov    $0x0,%edx
0817793d +0x0f47:  cmp    -0x44(%ebp),%edx
08177940 +0x0f4a:  jl     08177953 <+0xf5d>
08177942 +0x0f4c:  cmp    -0x44(%ebp),%edx
08177945 +0x0f4f:  jg     0817794c <+0xf56>
08177947 +0x0f51:  cmp    -0x48(%ebp),%eax
0817794a +0x0f54:  jbe    08177953 <+0xf5d>
0817794c +0x0f56:  movl   $0xc,-0x28(%ebp)
08177953 +0x0f5d:  mov    -0x38(%ebp),%eax
08177956 +0x0f60:  cmp    -0x3c(%ebp),%eax
08177959 +0x0f63:  jge    08177962 <+0xf6c>
0817795b +0x0f65:  movl   $0x3ed,-0x28(%ebp)
08177962 +0x0f6c:  mov    -0x3c(%ebp),%eax
08177965 +0x0f6f:  mov    -0x38(%ebp),%edx
08177968 +0x0f72:  mov    %edx,%edi
0817796a +0x0f74:  sub    %eax,%edi
0817796c +0x0f76:  mov    %edi,%eax
0817796e +0x0f78:  mov    %eax,-0xc0(%ebp)
08177974 +0x0f7e:  movl   $0x0,-0xbc(%ebp)
0817797e +0x0f88:  lea    -0xc0(%ebp),%eax
08177984 +0x0f8e:  mov    %eax,0x4(%esp)
08177988 +0x0f92:  lea    -0xbc(%ebp),%eax
0817798e +0x0f98:  mov    %eax,(%esp)
08177991 +0x0f9b:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08177996 +0x0fa0:  mov    (%eax),%eax
08177998 +0x0fa2:  mov    %eax,-0x38(%ebp)
0817799b +0x0fa5:  mov    -0x60(%ebp),%eax
0817799e +0x0fa8:  mov    %eax,%ecx
081779a0 +0x0faa:  mov    %eax,%ebx
081779a2 +0x0fac:  sar    $0x1f,%ebx
081779a5 +0x0faf:  mov    -0x50(%ebp),%eax
081779a8 +0x0fb2:  mov    -0x4c(%ebp),%edx
081779ab +0x0fb5:  sub    %ecx,%eax
081779ad +0x0fb7:  sbb    %ebx,%edx
081779af +0x0fb9:  mov    %eax,-0xb8(%ebp)
081779b5 +0x0fbf:  mov    %edx,-0xb4(%ebp)
081779bb +0x0fc5:  movl   $0x0,-0xb0(%ebp)
081779c5 +0x0fcf:  movl   $0x0,-0xac(%ebp)
081779cf +0x0fd9:  lea    -0xb8(%ebp),%eax
081779d5 +0x0fdf:  mov    %eax,0x4(%esp)
081779d9 +0x0fe3:  lea    -0xb0(%ebp),%eax
081779df +0x0fe9:  mov    %eax,(%esp)
081779e2 +0x0fec:  call   0817a4e0 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x55e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x55e
081779e7 +0x0ff1:  mov    0x4(%eax),%edx
081779ea +0x0ff4:  mov    (%eax),%eax
081779ec +0x0ff6:  mov    %eax,-0x50(%ebp)
081779ef +0x0ff9:  mov    %edx,-0x4c(%ebp)
081779f2 +0x0ffc:  mov    -0x54(%ebp),%ecx
081779f5 +0x0fff:  mov    $0x0,%ebx
081779fa +0x1004:  mov    -0x48(%ebp),%eax
081779fd +0x1007:  mov    -0x44(%ebp),%edx
08177a00 +0x100a:  sub    %ecx,%eax
08177a02 +0x100c:  sbb    %ebx,%edx
08177a04 +0x100e:  mov    %eax,-0xa8(%ebp)
08177a0a +0x1014:  mov    %edx,-0xa4(%ebp)
08177a10 +0x101a:  movl   $0x0,-0xa0(%ebp)
08177a1a +0x1024:  movl   $0x0,-0x9c(%ebp)
08177a24 +0x102e:  lea    -0xa8(%ebp),%eax
08177a2a +0x1034:  mov    %eax,0x4(%esp)
08177a2e +0x1038:  lea    -0xa0(%ebp),%eax
08177a34 +0x103e:  mov    %eax,(%esp)
08177a37 +0x1041:  call   0817a4e0 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x55e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x55e
08177a3c +0x1046:  mov    0x4(%eax),%edx
08177a3f +0x1049:  mov    (%eax),%eax
08177a41 +0x104b:  mov    %eax,-0x48(%ebp)
08177a44 +0x104e:  mov    %edx,-0x44(%ebp)
08177a47 +0x1051:  cmpl   $0x0,-0x28(%ebp)
08177a4b +0x1055:  je     08177c24 <+0x122e>
08177a51 +0x105b:  mov    0xc(%ebp),%eax
08177a54 +0x105e:  mov    %eax,(%esp)
08177a57 +0x1061:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08177a5c +0x1066:  mov    -0x3c(%ebp),%edx
08177a5f +0x1069:  mov    %edx,0x24(%esp)
08177a63 +0x106d:  mov    -0x54(%ebp),%edx
08177a66 +0x1070:  mov    %edx,0x20(%esp)
08177a6a +0x1074:  mov    -0x60(%ebp),%edx
08177a6d +0x1077:  mov    %edx,0x1c(%esp)
08177a71 +0x107b:  mov    -0x58(%ebp),%edx
08177a74 +0x107e:  mov    %edx,0x18(%esp)
08177a78 +0x1082:  mov    %eax,0x14(%esp)
08177a7c +0x1086:  movl   $"IPG ERROR [Dispatcher_BuyCeraShopItem::dispatch_sig] UserID[%s] ACera[%d] AGold[%d] AWP[%d] AMile[%d]",0x10(%esp)
08177a84 +0x108e:  movl   $0x3b3,0xc(%esp)
08177a8c +0x1096:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177a94 +0x109e:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08177a9c +0x10a6:  movl   $0x1,(%esp)
08177aa3 +0x10ad:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08177aa8 +0x10b2:  mov    0xc(%ebp),%eax
08177aab +0x10b5:  mov    %eax,(%esp)
08177aae +0x10b8:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
08177ab3 +0x10bd:  mov    %eax,%edi
08177ab5 +0x10bf:  mov    0xc(%ebp),%eax
08177ab8 +0x10c2:  mov    %eax,(%esp)
08177abb +0x10c5:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
08177ac0 +0x10ca:  mov    %eax,%esi
08177ac2 +0x10cc:  mov    0xc(%ebp),%eax
08177ac5 +0x10cf:  mov    %eax,(%esp)
08177ac8 +0x10d2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08177acd +0x10d7:  mov    %eax,(%esp)
08177ad0 +0x10da:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08177ad5 +0x10df:  mov    %eax,%ebx
08177ad7 +0x10e1:  mov    0xc(%ebp),%eax
08177ada +0x10e4:  mov    %eax,(%esp)
08177add +0x10e7:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
08177ae2 +0x10ec:  mov    %edi,0x20(%esp)
08177ae6 +0x10f0:  mov    %esi,0x1c(%esp)
08177aea +0x10f4:  mov    %ebx,0x18(%esp)
08177aee +0x10f8:  mov    %eax,0x14(%esp)
08177af2 +0x10fc:  movl   $" / UCera[%d] UGold[%d] UWP[%d] UMile[%d]\n",0x10(%esp)
08177afa +0x1104:  movl   $0x3b4,0xc(%esp)
08177b02 +0x110c:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177b0a +0x1114:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08177b12 +0x111c:  movl   $0x1,(%esp)
08177b19 +0x1123:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08177b1e +0x1128:  mov    -0x2c(%ebp),%eax
08177b21 +0x112b:  mov    0x10(%ebp),%edx
08177b24 +0x112e:  imul   $0x1cf,%eax,%eax
08177b2a +0x1134:  lea    (%edx,%eax,1),%eax
08177b2d +0x1137:  add    $0x30,%eax
08177b30 +0x113a:  mov    0x9(%eax),%eax
08177b33 +0x113d:  mov    %eax,0x14(%esp)
08177b37 +0x1141:  movl   $"Error Goods No : %d",0x10(%esp)
08177b3f +0x1149:  movl   $0x3b9,0xc(%esp)
08177b47 +0x1151:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177b4f +0x1159:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08177b57 +0x1161:  movl   $0x1,(%esp)
08177b5e +0x1168:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08177b63 +0x116d:  mov    0x10(%ebp),%eax
08177b66 +0x1170:  movzbl 0xf(%eax),%eax
08177b6a +0x1174:  movsbl %al,%esi
08177b6d +0x1177:  mov    0x10(%ebp),%eax
08177b70 +0x117a:  movzbl 0x36(%eax),%eax
08177b74 +0x117e:  movzbl %al,%ebx
08177b77 +0x1181:  mov    -0x2c(%ebp),%eax
08177b7a +0x1184:  lea    0x1(%eax),%edi
08177b7d +0x1187:  mov    -0x2c(%ebp),%eax
08177b80 +0x118a:  mov    0x10(%ebp),%edx
08177b83 +0x118d:  imul   $0x1cf,%eax,%eax
08177b89 +0x1193:  lea    (%edx,%eax,1),%eax
08177b8c +0x1196:  add    $0x30,%eax
08177b8f +0x1199:  mov    0x9(%eax),%ecx
08177b92 +0x119c:  mov    -0x28(%ebp),%eax
08177b95 +0x119f:  movzwl %ax,%edx
08177b98 +0x11a2:  mov    0x8(%ebp),%eax
08177b9b +0x11a5:  mov    %esi,0x1c(%esp)
08177b9f +0x11a9:  mov    %ebx,0x18(%esp)
08177ba3 +0x11ad:  mov    %edi,0x14(%esp)
08177ba7 +0x11b1:  mov    %ecx,0x10(%esp)
08177bab +0x11b5:  mov    -0x78(%ebp),%ecx
08177bae +0x11b8:  mov    %ecx,0xc(%esp)
08177bb2 +0x11bc:  mov    %edx,0x8(%esp)
08177bb6 +0x11c0:  mov    0xc(%ebp),%edx
08177bb9 +0x11c3:  mov    %edx,0x4(%esp)
08177bbd +0x11c7:  mov    %eax,(%esp)
08177bc0 +0x11ca:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08177bc5 +0x11cf:  mov    -0x2c(%ebp),%eax
08177bc8 +0x11d2:  movl   $0x0,-0x310(%ebp,%eax,4)
08177bd3 +0x11dd:  movl   $0x0,0xc(%esp)
08177bdb +0x11e5:  movl   $0x3bb,0x8(%esp)
08177be3 +0x11ed:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08177beb +0x11f5:  lea    -0x98(%ebp),%eax
08177bf1 +0x11fb:  mov    %eax,(%esp)
08177bf4 +0x11fe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08177bf9 +0x1203:  movl   $0x3bb,0xc(%esp)
08177c01 +0x120b:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177c09 +0x1213:  movl   $"[%s][%d]",0x4(%esp)
08177c11 +0x121b:  lea    -0x98(%ebp),%eax
08177c17 +0x1221:  mov    %eax,(%esp)
08177c1a +0x1224:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08177c1f +0x1229:  jmp    0817838d <+0x1997>
08177c24 +0x122e:  mov    -0x2c(%ebp),%eax
08177c27 +0x1231:  mov    -0x310(%ebp,%eax,4),%eax
08177c2e +0x1238:  mov    %eax,(%esp)
08177c31 +0x123b:  call   0817a054 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xd2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xd2
08177c36 +0x1240:  mov    %eax,0x4(%esp)
08177c3a +0x1244:  mov    0xc(%ebp),%eax
08177c3d +0x1247:  mov    %eax,(%esp)
08177c40 +0x124a:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
08177c45 +0x124f:  test   %al,%al
08177c47 +0x1251:  je     08177d0c <+0x1316>
08177c4d +0x1257:  mov    0x10(%ebp),%eax
08177c50 +0x125a:  movzbl 0xf(%eax),%eax
08177c54 +0x125e:  movsbl %al,%ebx
08177c57 +0x1261:  mov    0x10(%ebp),%eax
08177c5a +0x1264:  movzbl 0x36(%eax),%eax
08177c5e +0x1268:  movzbl %al,%ecx
08177c61 +0x126b:  mov    -0x2c(%ebp),%eax
08177c64 +0x126e:  lea    0x1(%eax),%esi
08177c67 +0x1271:  mov    -0x2c(%ebp),%eax
08177c6a +0x1274:  mov    0x10(%ebp),%edx
08177c6d +0x1277:  imul   $0x1cf,%eax,%eax
08177c73 +0x127d:  lea    (%edx,%eax,1),%eax
08177c76 +0x1280:  add    $0x30,%eax
08177c79 +0x1283:  mov    0x9(%eax),%edx
08177c7c +0x1286:  mov    0x8(%ebp),%eax
08177c7f +0x1289:  mov    %ebx,0x1c(%esp)
08177c83 +0x128d:  mov    %ecx,0x18(%esp)
08177c87 +0x1291:  mov    %esi,0x14(%esp)
08177c8b +0x1295:  mov    %edx,0x10(%esp)
08177c8f +0x1299:  mov    -0x78(%ebp),%edx
08177c92 +0x129c:  mov    %edx,0xc(%esp)
08177c96 +0x12a0:  movl   $0x14,0x8(%esp)
08177c9e +0x12a8:  mov    0xc(%ebp),%edx
08177ca1 +0x12ab:  mov    %edx,0x4(%esp)
08177ca5 +0x12af:  mov    %eax,(%esp)
08177ca8 +0x12b2:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
08177cad +0x12b7:  mov    -0x2c(%ebp),%eax
08177cb0 +0x12ba:  movl   $0x0,-0x310(%ebp,%eax,4)
08177cbb +0x12c5:  movl   $0x0,0xc(%esp)
08177cc3 +0x12cd:  movl   $0x3c1,0x8(%esp)
08177ccb +0x12d5:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
08177cd3 +0x12dd:  lea    -0x88(%ebp),%eax
08177cd9 +0x12e3:  mov    %eax,(%esp)
08177cdc +0x12e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08177ce1 +0x12eb:  movl   $0x3c1,0xc(%esp)
08177ce9 +0x12f3:  movl   $&_ZZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEME19__PRETTY_FUNCTION__,0x8(%esp)
08177cf1 +0x12fb:  movl   $"[%s][%d]",0x4(%esp)
08177cf9 +0x1303:  lea    -0x88(%ebp),%eax
08177cff +0x1309:  mov    %eax,(%esp)
08177d02 +0x130c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08177d07 +0x1311:  jmp    0817838d <+0x1997>
08177d0c +0x1316:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08177d11 +0x131b:  movl   $0x3cb,0x8(%esp)
08177d19 +0x1323:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08177d21 +0x132b:  mov    %eax,(%esp)
08177d24 +0x132e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08177d29 +0x1333:  movl   $0x0,0x8(%esp)
08177d31 +0x133b:  mov    %eax,0x4(%esp)
08177d35 +0x133f:  lea    -0x178(%ebp),%eax
08177d3b +0x1345:  mov    %eax,(%esp)
08177d3e +0x1348:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08177d43 +0x134d:  lea    -0x178(%ebp),%eax
08177d49 +0x1353:  mov    %eax,(%esp)
08177d4c +0x1356:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08177d51 +0x135b:  mov    %eax,(%esp)
08177d54 +0x135e:  call   0817a50c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x58a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x58a
08177d59 +0x1363:  mov    %eax,-0x24(%ebp)
08177d5c +0x1366:  mov    -0x2c(%ebp),%eax
08177d5f +0x1369:  mov    0x10(%ebp),%edx
08177d62 +0x136c:  imul   $0x1cf,%eax,%eax
08177d68 +0x1372:  lea    (%edx,%eax,1),%eax
08177d6b +0x1375:  add    $0x30,%eax
08177d6e +0x1378:  mov    0x9(%eax),%edx
08177d71 +0x137b:  mov    -0x24(%ebp),%eax
08177d74 +0x137e:  mov    %edx,(%eax)
08177d76 +0x1380:  mov    -0x2c(%ebp),%eax
08177d79 +0x1383:  mov    -0x310(%ebp,%eax,4),%eax
08177d80 +0x138a:  mov    %eax,(%esp)
08177d83 +0x138d:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
08177d88 +0x1392:  mov    -0x24(%ebp),%edx
08177d8b +0x1395:  mov    %eax,0x4(%edx)
08177d8e +0x1398:  mov    -0x2c(%ebp),%eax
08177d91 +0x139b:  mov    -0x310(%ebp,%eax,4),%eax
08177d98 +0x13a2:  mov    %eax,(%esp)
08177d9b +0x13a5:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08177da0 +0x13aa:  mov    %eax,%edx
08177da2 +0x13ac:  mov    -0x24(%ebp),%eax
08177da5 +0x13af:  mov    %dx,0xc(%eax)
08177da9 +0x13b3:  mov    -0x58(%ebp),%edx
08177dac +0x13b6:  mov    -0x24(%ebp),%eax
08177daf +0x13b9:  mov    %edx,0x10(%eax)
08177db2 +0x13bc:  mov    -0x24(%ebp),%eax
08177db5 +0x13bf:  mov    -0x60(%ebp),%edx
08177db8 +0x13c2:  mov    %edx,0x18(%eax)
08177dbb +0x13c5:  mov    -0x54(%ebp),%edx
08177dbe +0x13c8:  mov    -0x24(%ebp),%eax
08177dc1 +0x13cb:  mov    %edx,0x14(%eax)
08177dc4 +0x13ce:  mov    -0x2c(%ebp),%eax
08177dc7 +0x13d1:  mov    -0x310(%ebp,%eax,4),%eax
08177dce +0x13d8:  mov    %eax,(%esp)
08177dd1 +0x13db:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08177dd6 +0x13e0:  mov    %eax,%edx
08177dd8 +0x13e2:  mov    -0x24(%ebp),%eax
08177ddb +0x13e5:  mov    %edx,0x8(%eax)
08177dde +0x13e8:  mov    -0x2c(%ebp),%eax
08177de1 +0x13eb:  mov    0x10(%ebp),%edx
08177de4 +0x13ee:  imul   $0x1cf,%eax,%eax
08177dea +0x13f4:  lea    (%edx,%eax,1),%eax
08177ded +0x13f7:  add    $0x37,%eax
08177df0 +0x13fa:  movzbl (%eax),%eax
08177df3 +0x13fd:  mov    %eax,%edx
08177df5 +0x13ff:  mov    -0x24(%ebp),%eax
08177df8 +0x1402:  mov    %dl,0x2c(%eax)
08177dfb +0x1405:  mov    -0x2c(%ebp),%eax
08177dfe +0x1408:  mov    0x10(%ebp),%edx
08177e01 +0x140b:  imul   $0x1cf,%eax,%eax
08177e07 +0x1411:  lea    (%edx,%eax,1),%eax
08177e0a +0x1414:  add    $0x38,%eax
08177e0d +0x1417:  movzbl (%eax),%edx
08177e10 +0x141a:  mov    -0x24(%ebp),%eax
08177e13 +0x141d:  mov    %dl,0x2d(%eax)
08177e16 +0x1420:  mov    -0x24(%ebp),%eax
08177e19 +0x1423:  mov    -0x5c(%ebp),%edx
08177e1c +0x1426:  mov    %edx,0x1c(%eax)
08177e1f +0x1429:  mov    -0x2c(%ebp),%eax
08177e22 +0x142c:  mov    -0x310(%ebp,%eax,4),%eax
08177e29 +0x1433:  mov    %eax,(%esp)
08177e2c +0x1436:  call   0817a054 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xd2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xd2
08177e31 +0x143b:  mov    -0x24(%ebp),%edx
08177e34 +0x143e:  mov    %eax,0x28(%edx)
08177e37 +0x1441:  mov    0x10(%ebp),%eax
08177e3a +0x1444:  movzbl 0x36(%eax),%eax
08177e3e +0x1448:  movzbl %al,%edx
08177e41 +0x144b:  mov    -0x24(%ebp),%eax
08177e44 +0x144e:  mov    %edx,0x20(%eax)
08177e47 +0x1451:  mov    -0x2c(%ebp),%eax
08177e4a +0x1454:  lea    0x1(%eax),%edx
08177e4d +0x1457:  mov    -0x24(%ebp),%eax
08177e50 +0x145a:  mov    %edx,0x24(%eax)
08177e53 +0x145d:  mov    -0x24(%ebp),%eax
08177e56 +0x1460:  mov    -0x34(%ebp),%edx
08177e59 +0x1463:  mov    %edx,0x30(%eax)
08177e5c +0x1466:  mov    0x10(%ebp),%eax
08177e5f +0x1469:  movzbl 0xf(%eax),%eax
08177e63 +0x146d:  mov    %eax,%edx
08177e65 +0x146f:  mov    -0x24(%ebp),%eax
08177e68 +0x1472:  mov    %dl,0x34(%eax)
08177e6b +0x1475:  mov    0x10(%ebp),%eax
08177e6e +0x1478:  mov    0x2e(%eax),%edx
08177e71 +0x147b:  mov    -0x24(%ebp),%eax
08177e74 +0x147e:  mov    %edx,0x40(%eax)
08177e77 +0x1481:  mov    0x10(%ebp),%eax
08177e7a +0x1484:  mov    0x32(%eax),%edx
08177e7d +0x1487:  mov    -0x24(%ebp),%eax
08177e80 +0x148a:  mov    %edx,0x38(%eax)
08177e83 +0x148d:  mov    0x10(%ebp),%eax
08177e86 +0x1490:  movzwl 0xd(%eax),%edx
08177e8a +0x1494:  mov    -0x24(%ebp),%eax
08177e8d +0x1497:  mov    %dx,0x3c(%eax)
08177e91 +0x149b:  mov    -0x2c(%ebp),%eax
08177e94 +0x149e:  mov    0x10(%ebp),%edx
08177e97 +0x14a1:  imul   $0x1cf,%eax,%eax
08177e9d +0x14a7:  lea    (%edx,%eax,1),%eax
08177ea0 +0x14aa:  add    $0x3d,%eax
08177ea3 +0x14ad:  movzbl (%eax),%edx
08177ea6 +0x14b0:  mov    -0x24(%ebp),%eax
08177ea9 +0x14b3:  mov    %dl,0x44(%eax)
08177eac +0x14b6:  movl   $0x0,-0x20(%ebp)
08177eb3 +0x14bd:  jmp    08177f15 <+0x151f>
08177eb5 +0x14bf:  mov    -0x20(%ebp),%ecx
08177eb8 +0x14c2:  mov    -0x2c(%ebp),%esi
08177ebb +0x14c5:  mov    -0x20(%ebp),%edx
08177ebe +0x14c8:  mov    0x10(%ebp),%ebx
08177ec1 +0x14cb:  mov    %edx,%eax
08177ec3 +0x14cd:  shl    $0x2,%eax
08177ec6 +0x14d0:  add    %edx,%eax
08177ec8 +0x14d2:  imul   $0x1cf,%esi,%edx
08177ece +0x14d8:  add    %edx,%eax
08177ed0 +0x14da:  lea    (%ebx,%eax,1),%eax
08177ed3 +0x14dd:  add    $0x30,%eax
08177ed6 +0x14e0:  mov    0xe(%eax),%edx
08177ed9 +0x14e3:  mov    -0x24(%ebp),%eax
08177edc +0x14e6:  add    $0x8,%ecx
08177edf +0x14e9:  mov    %edx,0x8(%eax,%ecx,8)
08177ee3 +0x14ed:  mov    -0x20(%ebp),%ecx
08177ee6 +0x14f0:  mov    -0x2c(%ebp),%esi
08177ee9 +0x14f3:  mov    -0x20(%ebp),%edx
08177eec +0x14f6:  mov    0x10(%ebp),%ebx
08177eef +0x14f9:  mov    %edx,%eax
08177ef1 +0x14fb:  shl    $0x2,%eax
08177ef4 +0x14fe:  add    %edx,%eax
08177ef6 +0x1500:  imul   $0x1cf,%esi,%edx
08177efc +0x1506:  add    %edx,%eax
08177efe +0x1508:  lea    (%ebx,%eax,1),%eax
08177f01 +0x150b:  add    $0x42,%eax
08177f04 +0x150e:  movzbl (%eax),%edx
08177f07 +0x1511:  mov    -0x24(%ebp),%eax
08177f0a +0x1514:  add    $0x8,%ecx
08177f0d +0x1517:  mov    %dl,0xc(%eax,%ecx,8)
08177f11 +0x151b:  addl   $0x1,-0x20(%ebp)
08177f15 +0x151f:  mov    -0x2c(%ebp),%eax
08177f18 +0x1522:  mov    0x10(%ebp),%edx
08177f1b +0x1525:  imul   $0x1cf,%eax,%eax
08177f21 +0x152b:  lea    (%edx,%eax,1),%eax
08177f24 +0x152e:  add    $0x3d,%eax
08177f27 +0x1531:  movzbl (%eax),%eax
08177f2a +0x1534:  movzbl %al,%eax
08177f2d +0x1537:  cmp    -0x20(%ebp),%eax
08177f30 +0x153a:  setg   %al
08177f33 +0x153d:  test   %al,%al
08177f35 +0x153f:  jne    08177eb5 <+0x14bf>
08177f3b +0x1545:  mov    -0x2c(%ebp),%eax
08177f3e +0x1548:  mov    0x10(%ebp),%edx
08177f41 +0x154b:  imul   $0x1cf,%eax,%eax
08177f47 +0x1551:  lea    (%edx,%eax,1),%eax
08177f4a +0x1554:  add    $0xed,%eax
08177f4f +0x1559:  movzbl (%eax),%edx
08177f52 +0x155c:  mov    -0x24(%ebp),%eax
08177f55 +0x155f:  mov    %dl,0x160(%eax)
08177f5b +0x1565:  movl   $0x0,-0x1c(%ebp)
08177f62 +0x156c:  jmp    08177ff6 <+0x1600>
08177f67 +0x1571:  mov    -0x1c(%ebp),%ecx
08177f6a +0x1574:  mov    -0x2c(%ebp),%edx
08177f6d +0x1577:  mov    -0x1c(%ebp),%ebx
08177f70 +0x157a:  mov    0x10(%ebp),%eax
08177f73 +0x157d:  add    $0x16,%ebx
08177f76 +0x1580:  shl    $0x3,%ebx
08177f79 +0x1583:  imul   $0x1cf,%edx,%edx
08177f7f +0x1589:  lea    (%ebx,%edx,1),%edx
08177f82 +0x158c:  add    %edx,%eax
08177f84 +0x158e:  add    $0x30,%eax
08177f87 +0x1591:  mov    0xe(%eax),%edx
08177f8a +0x1594:  mov    -0x24(%ebp),%eax
08177f8d +0x1597:  add    $0x2c,%ecx
08177f90 +0x159a:  mov    %edx,0x4(%eax,%ecx,8)
08177f94 +0x159e:  mov    -0x1c(%ebp),%ecx
08177f97 +0x15a1:  mov    -0x2c(%ebp),%edx
08177f9a +0x15a4:  mov    -0x1c(%ebp),%ebx
08177f9d +0x15a7:  mov    0x10(%ebp),%eax
08177fa0 +0x15aa:  add    $0x16,%ebx
08177fa3 +0x15ad:  shl    $0x3,%ebx
08177fa6 +0x15b0:  imul   $0x1cf,%edx,%edx
08177fac +0x15b6:  lea    (%ebx,%edx,1),%edx
08177faf +0x15b9:  add    %edx,%eax
08177fb1 +0x15bb:  add    $0x30,%eax
08177fb4 +0x15be:  movzwl 0x12(%eax),%edx
08177fb8 +0x15c2:  mov    -0x24(%ebp),%eax
08177fbb +0x15c5:  add    $0x2c,%ecx
08177fbe +0x15c8:  mov    %dx,0x8(%eax,%ecx,8)
08177fc3 +0x15cd:  mov    -0x1c(%ebp),%ecx
08177fc6 +0x15d0:  mov    -0x2c(%ebp),%edx
08177fc9 +0x15d3:  mov    -0x1c(%ebp),%ebx
08177fcc +0x15d6:  mov    0x10(%ebp),%eax
08177fcf +0x15d9:  add    $0x16,%ebx
08177fd2 +0x15dc:  shl    $0x3,%ebx
08177fd5 +0x15df:  imul   $0x1cf,%edx,%edx
08177fdb +0x15e5:  lea    (%ebx,%edx,1),%edx
08177fde +0x15e8:  add    %edx,%eax
08177fe0 +0x15ea:  add    $0x30,%eax
08177fe3 +0x15ed:  movzwl 0x14(%eax),%edx
08177fe7 +0x15f1:  mov    -0x24(%ebp),%eax
08177fea +0x15f4:  add    $0x2c,%ecx
08177fed +0x15f7:  mov    %dx,0xa(%eax,%ecx,8)
08177ff2 +0x15fc:  addl   $0x1,-0x1c(%ebp)
08177ff6 +0x1600:  mov    -0x2c(%ebp),%eax
08177ff9 +0x1603:  mov    0x10(%ebp),%edx
08177ffc +0x1606:  imul   $0x1cf,%eax,%eax
08178002 +0x160c:  lea    (%edx,%eax,1),%eax
08178005 +0x160f:  add    $0xed,%eax
0817800a +0x1614:  movzbl (%eax),%eax
0817800d +0x1617:  movzbl %al,%eax
08178010 +0x161a:  cmp    -0x1c(%ebp),%eax
08178013 +0x161d:  setg   %al
08178016 +0x1620:  test   %al,%al
08178018 +0x1622:  jne    08177f67 <+0x1571>
0817801e +0x1628:  lea    -0x178(%ebp),%eax
08178024 +0x162e:  mov    %eax,(%esp)
08178027 +0x1631:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0817802c +0x1636:  mov    -0x3c(%ebp),%edx
0817802f +0x1639:  mov    %edx,0x4(%esp)
08178033 +0x163d:  mov    %eax,(%esp)
08178036 +0x1640:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0817803b +0x1645:  lea    -0x1f0(%ebp),%ebx
08178041 +0x164b:  mov    $0x0,%eax
08178046 +0x1650:  mov    $0x9,%edx
0817804b +0x1655:  mov    %ebx,%edi
0817804d +0x1657:  mov    %edx,%ecx
0817804f +0x1659:  rep stos %eax,%es:(%edi)
08178051 +0x165b:  movl   $0x0,-0x18c(%ebp)
0817805b +0x1665:  movl   $0x0,-0x188(%ebp)
08178065 +0x166f:  movl   $0x0,-0x184(%ebp)
0817806f +0x1679:  movl   $0x0,-0x180(%ebp)
08178079 +0x1683:  movl   $0x0,-0x17c(%ebp)
08178083 +0x168d:  lea    -0x1a1(%ebp),%eax
08178089 +0x1693:  mov    $0x15,%edx
0817808e +0x1698:  mov    $0x0,%ecx
08178093 +0x169d:  mov    %eax,%ebx
08178095 +0x169f:  and    $0x1,%ebx
08178098 +0x16a2:  test   %ebx,%ebx
0817809a +0x16a4:  je     081780a4 <+0x16ae>
0817809c +0x16a6:  mov    %cl,(%eax)
0817809e +0x16a8:  add    $0x1,%eax
081780a1 +0x16ab:  sub    $0x1,%edx
081780a4 +0x16ae:  mov    %eax,%ebx
081780a6 +0x16b0:  and    $0x2,%ebx
081780a9 +0x16b3:  test   %ebx,%ebx
081780ab +0x16b5:  je     081780b6 <+0x16c0>
081780ad +0x16b7:  mov    %cx,(%eax)
081780b0 +0x16ba:  add    $0x2,%eax
081780b3 +0x16bd:  sub    $0x2,%edx
081780b6 +0x16c0:  mov    %edx,%esi
081780b8 +0x16c2:  and    $0xfffffffc,%esi
081780bb +0x16c5:  mov    $0x0,%ebx
081780c0 +0x16ca:  mov    %ecx,(%eax,%ebx,1)
081780c3 +0x16cd:  add    $0x4,%ebx
081780c6 +0x16d0:  cmp    %esi,%ebx
081780c8 +0x16d2:  jb     081780c0 <+0x16ca>
081780ca +0x16d4:  add    %ebx,%eax
081780cc +0x16d6:  mov    %edx,%ebx
081780ce +0x16d8:  and    $0x2,%ebx
081780d1 +0x16db:  test   %ebx,%ebx
081780d3 +0x16dd:  je     081780db <+0x16e5>
081780d5 +0x16df:  mov    %cx,(%eax)
081780d8 +0x16e2:  add    $0x2,%eax
081780db +0x16e5:  and    $0x1,%edx
081780de +0x16e8:  test   %edx,%edx
081780e0 +0x16ea:  je     081780e7 <+0x16f1>
081780e2 +0x16ec:  mov    %cl,(%eax)
081780e4 +0x16ee:  add    $0x1,%eax
081780e7 +0x16f1:  lea    -0x710(%ebp),%ebx
081780ed +0x16f7:  mov    $0x0,%eax
081780f2 +0x16fc:  mov    $0x100,%edx
081780f7 +0x1701:  mov    %ebx,%edi
081780f9 +0x1703:  mov    %edx,%ecx
081780fb +0x1705:  rep stos %eax,%es:(%edi)
081780fd +0x1707:  movl   $0x0,-0x1a9(%ebp)
08178107 +0x1711:  movl   $0x0,-0x1a5(%ebp)
08178111 +0x171b:  mov    -0x2c(%ebp),%eax
08178114 +0x171e:  mov    -0x310(%ebp,%eax,4),%eax
0817811b +0x1725:  mov    %eax,(%esp)
0817811e +0x1728:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08178123 +0x172d:  mov    %eax,0xc(%esp)
08178127 +0x1731:  movl   $"%d",0x8(%esp)
0817812f +0x1739:  movl   $0x14,0x4(%esp)
08178137 +0x1741:  lea    -0x18c(%ebp),%eax
0817813d +0x1747:  mov    %eax,(%esp)
08178140 +0x174a:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08178145 +0x174f:  mov    -0x58(%ebp),%eax
08178148 +0x1752:  mov    %eax,0xc(%esp)
0817814c +0x1756:  movl   $"%d",0x8(%esp)
08178154 +0x175e:  movl   $0x24,0x4(%esp)
0817815c +0x1766:  lea    -0x1f0(%ebp),%eax
08178162 +0x176c:  mov    %eax,(%esp)
08178165 +0x176f:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0817816a +0x1774:  mov    -0x2c(%ebp),%eax
0817816d +0x1777:  mov    0x10(%ebp),%edx
08178170 +0x177a:  imul   $0x1cf,%eax,%eax
08178176 +0x1780:  lea    (%edx,%eax,1),%eax
08178179 +0x1783:  add    $0x30,%eax
0817817c +0x1786:  mov    0x9(%eax),%eax
0817817f +0x1789:  mov    %eax,0xc(%esp)
08178183 +0x178d:  movl   $"%d",0x8(%esp)
0817818b +0x1795:  movl   $0x8,0x4(%esp)
08178193 +0x179d:  lea    -0x1a9(%ebp),%eax
08178199 +0x17a3:  mov    %eax,(%esp)
0817819c +0x17a6:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081781a1 +0x17ab:  mov    -0x2c(%ebp),%eax
081781a4 +0x17ae:  mov    -0x310(%ebp,%eax,4),%eax
081781ab +0x17b5:  movl   $0x400,0xc(%esp)
081781b3 +0x17bd:  lea    -0x710(%ebp),%edx
081781b9 +0x17c3:  mov    %edx,0x8(%esp)
081781bd +0x17c7:  mov    %eax,0x4(%esp)
081781c1 +0x17cb:  mov    0x8(%ebp),%eax
081781c4 +0x17ce:  mov    %eax,(%esp)
081781c7 +0x17d1:  call   0817645a <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj>  ; ItemVendingMachine::_GetItemString(CCeraShopGoods const*, char*, unsigned int)
081781cc +0x17d6:  cmpl   $0x0,-0x58(%ebp)
081781d0 +0x17da:  jne    08178256 <+0x1860>
081781d6 +0x17e0:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
081781db +0x17e5:  mov    (%eax),%eax
081781dd +0x17e7:  add    $0x18,%eax
081781e0 +0x17ea:  mov    (%eax),%edi
081781e2 +0x17ec:  lea    -0x178(%ebp),%eax
081781e8 +0x17f2:  mov    %eax,(%esp)
081781eb +0x17f5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081781f0 +0x17fa:  mov    %eax,(%esp)
081781f3 +0x17fd:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
081781f8 +0x1802:  mov    %eax,%esi
081781fa +0x1804:  mov    0xc(%ebp),%eax
081781fd +0x1807:  mov    %eax,(%esp)
08178200 +0x180a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08178205 +0x180f:  mov    %eax,%ebx
08178207 +0x1811:  lea    -0x1a1(%ebp),%eax
0817820d +0x1817:  mov    %eax,(%esp)
08178210 +0x181a:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
08178215 +0x181f:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
0817821b +0x1825:  mov    %esi,0x1c(%esp)
0817821f +0x1829:  mov    %ebx,0x18(%esp)
08178223 +0x182d:  lea    -0x710(%ebp),%ecx
08178229 +0x1833:  mov    %ecx,0x14(%esp)
0817822d +0x1837:  mov    %eax,0x10(%esp)
08178231 +0x183b:  lea    -0x1f0(%ebp),%eax
08178237 +0x1841:  mov    %eax,0xc(%esp)
0817823b +0x1845:  lea    -0x1a9(%ebp),%eax
08178241 +0x184b:  mov    %eax,0x8(%esp)
08178245 +0x184f:  mov    0xc(%ebp),%eax
08178248 +0x1852:  mov    %eax,0x4(%esp)
0817824c +0x1856:  mov    %edx,(%esp)
0817824f +0x1859:  call   *%edi
08178251 +0x185b:  jmp    0817837c <+0x1986>
08178256 +0x1860:  mov    0x10(%ebp),%eax
08178259 +0x1863:  movzwl 0xd(%eax),%eax
0817825d +0x1867:  cmp    $0x1,%ax
08178261 +0x186b:  jne    081782e7 <+0x18f1>
08178267 +0x1871:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
0817826c +0x1876:  mov    (%eax),%eax
0817826e +0x1878:  add    $0x10,%eax
08178271 +0x187b:  mov    (%eax),%edi
08178273 +0x187d:  lea    -0x178(%ebp),%eax
08178279 +0x1883:  mov    %eax,(%esp)
0817827c +0x1886:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08178281 +0x188b:  mov    %eax,(%esp)
08178284 +0x188e:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
08178289 +0x1893:  mov    %eax,%esi
0817828b +0x1895:  mov    0xc(%ebp),%eax
0817828e +0x1898:  mov    %eax,(%esp)
08178291 +0x189b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08178296 +0x18a0:  mov    %eax,%ebx
08178298 +0x18a2:  lea    -0x1a1(%ebp),%eax
0817829e +0x18a8:  mov    %eax,(%esp)
081782a1 +0x18ab:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
081782a6 +0x18b0:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
081782ac +0x18b6:  mov    %esi,0x1c(%esp)
081782b0 +0x18ba:  mov    %ebx,0x18(%esp)
081782b4 +0x18be:  lea    -0x710(%ebp),%ecx
081782ba +0x18c4:  mov    %ecx,0x14(%esp)
081782be +0x18c8:  mov    %eax,0x10(%esp)
081782c2 +0x18cc:  lea    -0x1f0(%ebp),%eax
081782c8 +0x18d2:  mov    %eax,0xc(%esp)
081782cc +0x18d6:  lea    -0x1a9(%ebp),%eax
081782d2 +0x18dc:  mov    %eax,0x8(%esp)
081782d6 +0x18e0:  mov    0xc(%ebp),%eax
081782d9 +0x18e3:  mov    %eax,0x4(%esp)
081782dd +0x18e7:  mov    %edx,(%esp)
081782e0 +0x18ea:  call   *%edi
081782e2 +0x18ec:  jmp    0817837c <+0x1986>
081782e7 +0x18f1:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
081782ec +0x18f6:  mov    (%eax),%eax
081782ee +0x18f8:  add    $0x14,%eax
081782f1 +0x18fb:  mov    (%eax),%edi
081782f3 +0x18fd:  lea    -0x178(%ebp),%eax
081782f9 +0x1903:  mov    %eax,(%esp)
081782fc +0x1906:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08178301 +0x190b:  mov    %eax,(%esp)
08178304 +0x190e:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
08178309 +0x1913:  mov    %eax,%esi
0817830b +0x1915:  mov    0xc(%ebp),%eax
0817830e +0x1918:  mov    %eax,(%esp)
08178311 +0x191b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08178316 +0x1920:  mov    %eax,%ebx
08178318 +0x1922:  lea    -0x1a1(%ebp),%eax
0817831e +0x1928:  mov    %eax,(%esp)
08178321 +0x192b:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
08178326 +0x1930:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
0817832c +0x1936:  mov    %esi,0x1c(%esp)
08178330 +0x193a:  mov    %ebx,0x18(%esp)
08178334 +0x193e:  lea    -0x710(%ebp),%ecx
0817833a +0x1944:  mov    %ecx,0x14(%esp)
0817833e +0x1948:  mov    %eax,0x10(%esp)
08178342 +0x194c:  lea    -0x1f0(%ebp),%eax
08178348 +0x1952:  mov    %eax,0xc(%esp)
0817834c +0x1956:  lea    -0x1a9(%ebp),%eax
08178352 +0x195c:  mov    %eax,0x8(%esp)
08178356 +0x1960:  mov    0xc(%ebp),%eax
08178359 +0x1963:  mov    %eax,0x4(%esp)
0817835d +0x1967:  mov    %edx,(%esp)
08178360 +0x196a:  call   *%edi
08178362 +0x196c:  jmp    0817837c <+0x1986>
08178364 +0x196e:  mov    %edx,%ebx
08178366 +0x1970:  mov    %eax,%esi
08178368 +0x1972:  lea    -0x178(%ebp),%eax
0817836e +0x1978:  mov    %eax,(%esp)
08178371 +0x197b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08178376 +0x1980:  mov    %esi,%eax
08178378 +0x1982:  mov    %ebx,%edx
0817837a +0x1984:  jmp    081783b0 <+0x19ba>
0817837c +0x1986:  lea    -0x178(%ebp),%eax
08178382 +0x198c:  mov    %eax,(%esp)
08178385 +0x198f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0817838a +0x1994:  jmp    0817838d <+0x1997>
0817838c +0x1996:  nop
0817838d +0x1997:  addl   $0x1,-0x2c(%ebp)
08178391 +0x199b:  mov    0x10(%ebp),%eax
08178394 +0x199e:  movzbl 0x36(%eax),%eax
08178398 +0x19a2:  movzbl %al,%eax
0817839b +0x19a5:  cmp    -0x2c(%ebp),%eax
0817839e +0x19a8:  setg   %al
081783a1 +0x19ab:  test   %al,%al
081783a3 +0x19ad:  jne    081776b0 <+0xcba>
081783a9 +0x19b3:  mov    $0x1,%ebx
081783ae +0x19b8:  jmp    081783ce <+0x19d8>
081783b0 +0x19ba:  mov    %edx,%ebx
081783b2 +0x19bc:  mov    %eax,%esi
081783b4 +0x19be:  lea    -0x16c(%ebp),%eax
081783ba +0x19c4:  mov    %eax,(%esp)
081783bd +0x19c7:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081783c2 +0x19cc:  mov    %esi,%eax
081783c4 +0x19ce:  mov    %ebx,%edx
081783c6 +0x19d0:  mov    %eax,(%esp)
081783c9 +0x19d3:  call   08ae3750 <_Unwind_Resume>
081783ce +0x19d8:  lea    -0x16c(%ebp),%eax
081783d4 +0x19de:  mov    %eax,(%esp)
081783d7 +0x19e1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081783dc +0x19e6:  mov    %ebx,%eax
081783de +0x19e8:  add    $0x75c,%esp
081783e4 +0x19ee:  pop    %ebx
081783e5 +0x19ef:  pop    %esi
081783e6 +0x19f0:  pop    %edi
081783e7 +0x19f1:  pop    %ebp
081783e8 +0x19f2:  ret
081783e9 +0x19f3:  nop
```

## 反编译 C

```c
// ItemVendingMachine::ProcessBuyRequestEx @ 0x81769f6

/* ItemVendingMachine::ProcessBuyRequestEx(CUser*, MSG_BUY_CERASHOP_ITEM const&) */

undefined4 __thiscall
ItemVendingMachine::ProcessBuyRequestEx
          (ItemVendingMachine *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  CCeraShopGoods *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint *puVar12;
  Stream *pSVar13;
  CStreamGuard *pCVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  vector *pvVar19;
  CCeraShopGoods **ppCVar20;
  char *pcVar21;
  bool bVar22;
  byte bVar23;
  char local_714 [1024];
  CCeraShopGoods *local_314 [36];
  vector local_284 [144];
  char local_1f4 [36];
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  char local_1ad [8];
  undefined1 local_1a5 [21];
  char local_190 [20];
  CStreamGuard local_17c [8];
  int local_174;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_170 [12];
  cMyTrace local_164 [16];
  cMyTrace local_154 [16];
  cMyTrace local_144 [16];
  cMyTrace local_134 [16];
  cMyTrace local_124 [16];
  cMyTrace local_114 [16];
  cMyTrace local_104 [16];
  cMyTrace local_f4 [16];
  cMyTrace local_e4 [16];
  cMyTrace local_d4 [16];
  int local_c4 [2];
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  stCeraShopIPGRequest_t *local_28;
  int local_24;
  int local_20;
  
  bVar23 = 0;
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_164,
                       "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0x290,0);
    cMyTrace::operator()(local_164,"There is no User in ItemVendingMachine");
    uVar17 = 0;
  }
  else {
    local_7c = -1;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_170);
    pvVar19 = local_284;
    for (iVar16 = 0x24; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(undefined4 *)pvVar19 = 0;
      pvVar19 = pvVar19 + ((uint)bVar23 * -2 + 1) * 4;
    }
    ppCVar20 = local_314;
    for (iVar16 = 0x24; iVar16 != 0; iVar16 = iVar16 + -1) {
      *ppCVar20 = (CCeraShopGoods *)0x0;
      ppCVar20 = ppCVar20 + (uint)bVar23 * -2 + 1;
    }
    CUser::resetUsedCera(param_1);
    for (local_34 = 0; iVar16 = local_34, local_34 < (int)(uint)(byte)param_2[0x36];
        local_34 = local_34 + 1) {
                    /* try { // try from 08176adc to 08177d28 has its CatchHandler @ 081783b0 */
      iVar4 = G_CDataManager();
      pCVar5 = (CCeraShopGoods *)CDataManager::FindGoods(iVar4);
      local_314[iVar16] = pCVar5;
      if (local_314[local_34] == (CCeraShopGoods *)0x0) {
        WongWork::CCeraShop::ProcessError
                  ((CCeraShop *)this,param_1,0x15,local_7c,
                   *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                   (uint)(byte)param_2[0x36],(char)param_2[0xf]);
        local_314[local_34] = (CCeraShopGoods *)0x0;
        cMyTrace::cMyTrace(local_154,
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x2ad,0);
        cMyTrace::operator()
                  (local_154,"[%s][%d]",
                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0x2ad);
      }
      else {
        local_7c = CCeraShopGoods::GetGroupIdx(local_314[local_34]);
        cVar2 = _CheckEnableGiftCondition(this,local_314[local_34],param_1,(char)param_2[0xf]);
        if (cVar2 == '\x01') {
          cVar2 = CerashopAddRestrict::Manager::IsBuyableRestrictItem
                            (param_1,*(uint *)(param_2 + local_34 * 0x1cf + 0x39),1,local_34);
          if (cVar2 == '\x01') {
            cVar2 = _CheckEnableItemCondition
                              ((CCeraShopGoods *)this,(CItem **)local_314[local_34],
                               local_284 + local_34 * 4);
            if (cVar2 == '\x01') {
              cVar2 = _CheckEnableStateCondition
                                ((CCeraShopGoods *)this,(CUser *)local_314[local_34]);
              if (cVar2 == '\x01') {
                local_174 = 0;
                cVar2 = WongWork::CCeraShop::_CheckBuyingCondition
                                  ((CCeraShop *)this,param_1,local_314[local_34],
                                   *(uint *)(param_2 + local_34 * 0x1cf + 0x39),
                                   (uchar)param_2[local_34 * 0x1cf + 0x37],
                                   (short)(char)param_2[local_34 * 0x1cf + 0x38],(char)param_2[0xf],
                                   &local_174);
                if (cVar2 == '\x01') {
                  if (local_7c == 0) {
                    cVar2 = _CheckEnableAvatarCondition
                                      (this,local_314[local_34],
                                       (char)param_2[local_34 * 0x1cf + 0x38],
                                       (uchar)param_2[local_34 * 0x1cf + 0x37],
                                       (stAvatarTypeSelect_t *)&local_1d0);
                    if (cVar2 != '\x01') {
                      WongWork::CCeraShop::ProcessError
                                ((CCeraShop *)this,param_1,0x17,local_7c,
                                 *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                                 (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                      local_314[local_34] = (CCeraShopGoods *)0x0;
                      cMyTrace::cMyTrace(local_f4,
                                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                         ,0x2ec,0);
                      cMyTrace::operator()
                                (local_f4,"[%s][%d]",
                                 "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x2ec);
                      goto LAB_081773c4;
                    }
                    local_70 = local_70 + local_1c4;
                    local_78 = local_78 + local_1cc;
                    local_74 = local_74 + local_1c8;
                  }
                  else {
                    iVar16 = CCeraShopGoods::GetCeraPrice(local_314[local_34]);
                    local_70 = local_70 + iVar16;
                    iVar16 = CCeraShopGoods::GetGoldPrice(local_314[local_34]);
                    local_78 = local_78 + iVar16;
                    iVar16 = CCeraShopGoods::GetWinPoint(local_314[local_34]);
                    local_74 = local_74 + iVar16;
                  }
                  iVar16 = CCeraShopGoods::GetMileagePrice(local_314[local_34]);
                  local_6c = local_6c + iVar16;
                  if ((*(short *)(param_2 + 0xd) == 1) &&
                     (cVar2 = CCeraShopGoods::isCeraPointDisallowance_(local_314[local_34]),
                     cVar2 != '\0')) {
                    WongWork::CCeraShop::ProcessError
                              ((CCeraShop *)this,param_1,0x138b,local_7c,
                               *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                               (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                    local_314[local_34] = (CCeraShopGoods *)0x0;
                    cMyTrace::cMyTrace(local_e4,
                                       "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                       ,0x305,0);
                    cMyTrace::operator()
                              (local_e4,"[%s][%d]",
                               "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0x305);
                    goto LAB_081783ce;
                  }
                }
                else {
                  WongWork::CCeraShop::ProcessError
                            ((CCeraShop *)this,param_1,(ushort)local_174,local_7c,
                             *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                             (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                  local_314[local_34] = (CCeraShopGoods *)0x0;
                  cMyTrace::cMyTrace(local_104,
                                     "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                     ,0x2d6,0);
                  cMyTrace::operator()
                            (local_104,"[%s][%d]",
                             "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                             ,0x2d6);
                }
              }
              else {
                WongWork::CCeraShop::ProcessError
                          ((CCeraShop *)this,param_1,7,local_7c,
                           *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_314[local_34] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_114,
                                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x2c8,0);
                cMyTrace::operator()
                          (local_114,"[%s][%d]",
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x2c8);
              }
            }
            else {
              WongWork::CCeraShop::ProcessError
                        ((CCeraShop *)this,param_1,0x11,local_7c,
                         *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                         (uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_314[local_34] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_124,
                                 "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x2c2,0);
              cMyTrace::operator()
                        (local_124,"[%s][%d]",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2c2);
            }
          }
          else {
            WongWork::CCeraShop::ProcessError
                      ((CCeraShop *)this,param_1,0x71,local_7c,
                       *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                       (uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_314[local_34] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_134,
                               "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,699,0);
            cMyTrace::operator()
                      (local_134,"[%s][%d]",
                       "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,699);
          }
        }
        else {
          WongWork::CCeraShop::ProcessError
                    ((CCeraShop *)this,param_1,8,local_7c,
                     *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                     (uint)(byte)param_2[0x36],(char)param_2[0xf]);
          local_314[local_34] = (CCeraShopGoods *)0x0;
          cMyTrace::cMyTrace(local_144,
                             "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                             ,0x2b4,0);
          cMyTrace::operator()
                    (local_144,"[%s][%d]",
                     "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                     ,0x2b4);
        }
      }
LAB_081773c4:
    }
    cVar2 = WongWork::CCeraShop::_CheckValidCount((CCeraShop *)this,local_314);
    if (cVar2 == '\x01') {
      local_68 = 0;
      iVar16 = CUser::GetCera(param_1);
      if (iVar16 < (int)local_70) {
        local_68 = 0xb;
      }
      else {
        iVar16 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        if (iVar16 < local_78) {
          local_68 = 10;
        }
        else {
          iVar16 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
          if (iVar16 < local_74) {
            local_68 = 0xc;
          }
          else {
            iVar16 = CUser::GetMileage(param_1);
            if (iVar16 < local_6c) {
              local_68 = 0x3ed;
            }
          }
        }
      }
      if (*(short *)(param_2 + 0xd) == 1) {
        local_68 = 0;
        uVar6 = CUser::GetCeraPoint(param_1);
        if (uVar6 < local_70) {
          local_68 = 0x138a;
        }
      }
      if (local_68 == 0) {
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        local_50 = (int)local_54 >> 0x1f;
        local_4c = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
        local_48 = 0;
        local_40 = 0;
        local_3c = CUser::GetMileage(param_1);
        local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        for (local_30 = 0; local_30 < (int)(uint)(byte)param_2[0x36]; local_30 = local_30 + 1) {
          if (local_314[local_30] != (CCeraShopGoods *)0x0) {
            local_7c = CCeraShopGoods::GetGroupIdx(local_314[local_30]);
            if (local_7c == 0) {
              cVar2 = _CheckEnableAvatarCondition
                                (this,local_314[local_30],(char)param_2[local_30 * 0x1cf + 0x38],
                                 (uchar)param_2[local_30 * 0x1cf + 0x37],
                                 (stAvatarTypeSelect_t *)&local_1d0);
              if (cVar2 != '\x01') {
                WongWork::CCeraShop::ProcessError
                          ((CCeraShop *)this,param_1,0x17,local_7c,
                           *(uint *)(param_2 + local_30 * 0x1cf + 0x39),local_30 + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_314[local_30] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_d4,
                                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x37b,0);
                cMyTrace::operator()
                          (local_d4,"[%s][%d]",
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x37b);
                goto LAB_0817838d;
              }
              local_5c = local_1c4;
              local_64 = local_1cc;
              local_58 = local_1c8;
              local_60 = local_1d0;
            }
            else {
              local_5c = CCeraShopGoods::GetCeraPrice(local_314[local_30]);
              local_64 = CCeraShopGoods::GetGoldPrice(local_314[local_30]);
              local_58 = CCeraShopGoods::GetWinPoint(local_314[local_30]);
            }
            local_40 = CCeraShopGoods::GetMileagePrice(local_314[local_30]);
            local_2c = 0;
            uVar6 = CUser::GetCera(param_1);
            if (uVar6 < local_5c) {
              local_2c = 0xb;
            }
            else {
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar16 = CInventory::get_money(pCVar8);
              if (iVar16 < (int)local_64) {
                local_2c = 10;
              }
              else {
                uVar6 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
                if (uVar6 < local_58) {
                  local_2c = 0xc;
                }
              }
            }
            if (*(short *)(param_2 + 0xd) == 1) {
              local_2c = 0;
              uVar6 = CUser::GetCeraPoint(param_1);
              if (uVar6 < local_5c) {
                local_2c = 0x138a;
              }
            }
            if (((int)local_50 <= (int)local_64 >> 0x1f) &&
               (((int)local_50 < (int)local_64 >> 0x1f || (local_54 < local_64)))) {
              local_2c = 10;
            }
            if (((int)local_48 < 1) && ((0x7fffffff < local_48 || (local_4c < local_58)))) {
              local_2c = 0xc;
            }
            if (local_3c < local_40) {
              local_2c = 0x3ed;
            }
            local_c4[0] = local_3c - local_40;
            local_c4[1] = 0;
            piVar11 = std::max<int>(local_c4 + 1,local_c4);
            local_3c = *piVar11;
            local_bc._0_4_ = local_54 - local_64;
            local_bc._4_4_ = (local_50 - ((int)local_64 >> 0x1f)) - (uint)(local_54 < local_64);
            local_b4 = 0;
            local_b0 = 0;
            puVar12 = (uint *)std::max<long_long>((longlong *)&local_b4,&local_bc);
            local_50 = puVar12[1];
            local_54 = *puVar12;
            local_ac = local_4c - local_58;
            local_a8 = local_48 - (local_4c < local_58);
            local_a4 = 0;
            local_a0 = 0;
            puVar12 = (uint *)std::max<long_long>((longlong *)&local_a4,(longlong *)&local_ac);
            local_4c = *puVar12;
            local_48 = puVar12[1];
            if (local_2c == 0) {
              iVar16 = CCeraShopGoods::GetFeaturedIdx(local_314[local_30]);
              cVar2 = CUser::IsRestrictedGoods(param_1,iVar16);
              if (cVar2 == '\0') {
                pSVar13 = (Stream *)
                          StreamPool::Acquire(GlobalData::s_stream_pool,
                                              "localjapan/AppendVendingMachine.cpp",0x3cb);
                CStreamGuard::CStreamGuard(local_17c,pSVar13,false);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                    /* try { // try from 08177d54 to 08178361 has its CatchHandler @ 08178364 */
                local_28 = CStreamGuard::GetInBuffer<stCeraShopIPGRequest_t>(pCVar14);
                *(undefined4 *)local_28 = *(undefined4 *)(param_2 + local_30 * 0x1cf + 0x39);
                uVar17 = CCeraShopGoods::GetGroupIdx(local_314[local_30]);
                *(undefined4 *)(local_28 + 4) = uVar17;
                uVar3 = CCeraShopGoods::GetStackCount(local_314[local_30]);
                *(undefined2 *)(local_28 + 0xc) = uVar3;
                *(uint *)(local_28 + 0x10) = local_5c;
                *(uint *)(local_28 + 0x18) = local_64;
                *(uint *)(local_28 + 0x14) = local_58;
                uVar17 = CCeraShopGoods::GetItemIdx(local_314[local_30]);
                *(undefined4 *)(local_28 + 8) = uVar17;
                local_28[0x2c] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0x37);
                local_28[0x2d] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0x38);
                *(undefined4 *)(local_28 + 0x1c) = local_60;
                uVar17 = CCeraShopGoods::GetFeaturedIdx(local_314[local_30]);
                *(undefined4 *)(local_28 + 0x28) = uVar17;
                *(uint *)(local_28 + 0x20) = (uint)(byte)param_2[0x36];
                *(int *)(local_28 + 0x24) = local_30 + 1;
                *(undefined4 *)(local_28 + 0x30) = local_38;
                local_28[0x34] = *(stCeraShopIPGRequest_t *)(param_2 + 0xf);
                *(undefined4 *)(local_28 + 0x40) = *(undefined4 *)(param_2 + 0x2e);
                *(undefined4 *)(local_28 + 0x38) = *(undefined4 *)(param_2 + 0x32);
                *(undefined2 *)(local_28 + 0x3c) = *(undefined2 *)(param_2 + 0xd);
                local_28[0x44] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0x3d);
                for (local_24 = 0; local_24 < (int)(uint)(byte)param_2[local_30 * 0x1cf + 0x3d];
                    local_24 = local_24 + 1) {
                  *(undefined4 *)(local_28 + (local_24 + 8) * 8 + 8) =
                       *(undefined4 *)(param_2 + local_24 * 5 + local_30 * 0x1cf + 0x3e);
                  local_28[(local_24 + 8) * 8 + 0xc] =
                       *(stCeraShopIPGRequest_t *)(param_2 + local_24 * 5 + local_30 * 0x1cf + 0x42)
                  ;
                }
                local_28[0x160] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0xed);
                for (local_20 = 0; local_20 < (int)(uint)(byte)param_2[local_30 * 0x1cf + 0xed];
                    local_20 = local_20 + 1) {
                  *(undefined4 *)(local_28 + (local_20 + 0x2c) * 8 + 4) =
                       *(undefined4 *)(param_2 + (local_20 + 0x16) * 8 + local_30 * 0x1cf + 0x3e);
                  *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 8) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_30 * 0x1cf + 0x42);
                  *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 10) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_30 * 0x1cf + 0x44);
                }
                pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_17c);
                CStreamGuard::operator<<(pCVar14,local_40);
                pcVar21 = local_1f4;
                for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                  pcVar21[0] = '\0';
                  pcVar21[1] = '\0';
                  pcVar21[2] = '\0';
                  pcVar21[3] = '\0';
                  pcVar21 = pcVar21 + ((uint)bVar23 * -2 + 1) * 4;
                }
                local_190[0] = '\0';
                local_190[1] = '\0';
                local_190[2] = '\0';
                local_190[3] = '\0';
                local_190[4] = '\0';
                local_190[5] = '\0';
                local_190[6] = '\0';
                local_190[7] = '\0';
                local_190[8] = '\0';
                local_190[9] = '\0';
                local_190[10] = '\0';
                local_190[0xb] = '\0';
                local_190[0xc] = '\0';
                local_190[0xd] = '\0';
                local_190[0xe] = '\0';
                local_190[0xf] = '\0';
                local_190[0x10] = '\0';
                local_190[0x11] = '\0';
                local_190[0x12] = '\0';
                local_190[0x13] = '\0';
                puVar15 = (undefined2 *)local_1a5;
                uVar6 = 0x15;
                bVar22 = ((uint)puVar15 & 1) != 0;
                if (bVar22) {
                  local_1a5[0] = '\0';
                  puVar15 = (undefined2 *)(local_1a5 + 1);
                  uVar6 = 0x14;
                }
                if (((uint)puVar15 & 2) != 0) {
                  *puVar15 = 0;
                  puVar15 = puVar15 + 1;
                  uVar6 = uVar6 - 2;
                }
                uVar18 = 0;
                do {
                  *(undefined4 *)((int)puVar15 + uVar18) = 0;
                  uVar18 = uVar18 + 4;
                } while (uVar18 < (uVar6 & 0xfffffffc));
                puVar15 = (undefined2 *)((int)puVar15 + uVar18);
                if ((uVar6 & 2) != 0) {
                  *puVar15 = 0;
                  puVar15 = puVar15 + 1;
                }
                if (!bVar22) {
                  *(undefined1 *)puVar15 = 0;
                }
                pcVar21 = local_714;
                for (iVar16 = 0x100; iVar16 != 0; iVar16 = iVar16 + -1) {
                  pcVar21[0] = '\0';
                  pcVar21[1] = '\0';
                  pcVar21[2] = '\0';
                  pcVar21[3] = '\0';
                  pcVar21 = pcVar21 + ((uint)bVar23 * -2 + 1) * 4;
                }
                local_1ad[0] = '\0';
                local_1ad[1] = '\0';
                local_1ad[2] = '\0';
                local_1ad[3] = '\0';
                local_1ad[4] = '\0';
                local_1ad[5] = '\0';
                local_1ad[6] = '\0';
                local_1ad[7] = '\0';
                uVar17 = CCeraShopGoods::GetItemIdx(local_314[local_30]);
                OS_API::snprintf(local_190,0x14,"%d",uVar17);
                OS_API::snprintf(local_1f4,0x24,"%d",local_5c);
                OS_API::snprintf(local_1ad,8,"%d",*(undefined4 *)(param_2 + local_30 * 0x1cf + 0x39)
                                );
                _GetItemString(this,local_314[local_30],local_714,0x400);
                if (local_5c == 0) {
                  pcVar1 = *(code **)(*GlobalData::s_pIPGHelper + 0x18);
                  pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                  uVar17 = CStreamGuard::Get(pCVar14);
                  uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar9 = WongWork::CGenUniqueNo::GenUniqueNo(local_1a5);
                  (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_1ad,local_1f4,uVar9,local_714,
                            uVar7,uVar17);
                }
                else if (*(short *)(param_2 + 0xd) == 1) {
                  pcVar1 = *(code **)(*GlobalData::s_pIPGHelper + 0x10);
                  pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                  uVar17 = CStreamGuard::Get(pCVar14);
                  uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar9 = WongWork::CGenUniqueNo::GenUniqueNo(local_1a5);
                  (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_1ad,local_1f4,uVar9,local_714,
                            uVar7,uVar17);
                }
                else {
                  pcVar1 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
                  pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                  uVar17 = CStreamGuard::Get(pCVar14);
                  uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar9 = WongWork::CGenUniqueNo::GenUniqueNo(local_1a5);
                  (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_1ad,local_1f4,uVar9,local_714,
                            uVar7,uVar17);
                }
                    /* try { // try from 08178385 to 08178389 has its CatchHandler @ 081783b0 */
                CStreamGuard::~CStreamGuard(local_17c);
              }
              else {
                WongWork::CCeraShop::ProcessError
                          ((CCeraShop *)this,param_1,0x14,local_7c,
                           *(uint *)(param_2 + local_30 * 0x1cf + 0x39),local_30 + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_314[local_30] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_8c,
                                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x3c1,0);
                cMyTrace::operator()
                          (local_8c,"[%s][%d]",
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x3c1);
              }
            }
            else {
              uVar17 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              LogManager::logFormat
                        (1,"localjapan/AppendVendingMachine.cpp",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3b3,
                         "IPG ERROR [Dispatcher_BuyCeraShopItem::dispatch_sig] UserID[%s] ACera[%d] AGold[%d] AWP[%d] AMile[%d]"
                         ,uVar17,local_5c,local_64,local_58,local_40);
              uVar17 = CUser::GetMileage(param_1);
              uVar7 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              uVar9 = CInventory::get_money(pCVar8);
              uVar10 = CUser::GetCera(param_1);
              LogManager::logFormat
                        (1,"localjapan/AppendVendingMachine.cpp",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3b4," / UCera[%d] UGold[%d] UWP[%d] UMile[%d]\n",uVar10,uVar9,uVar7,
                         uVar17);
              LogManager::logFormat
                        (1,"localjapan/AppendVendingMachine.cpp",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3b9,"Error Goods No : %d",
                         *(undefined4 *)(param_2 + local_30 * 0x1cf + 0x39));
              WongWork::CCeraShop::ProcessError
                        ((CCeraShop *)this,param_1,(ushort)local_2c,local_7c,
                         *(uint *)(param_2 + local_30 * 0x1cf + 0x39),local_30 + 1,
                         (uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_314[local_30] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_9c,
                                 "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x3bb,0);
              cMyTrace::operator()
                        (local_9c,"[%s][%d]",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3bb);
            }
          }
LAB_0817838d:
        }
      }
      else {
        uVar17 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"localjapan/AppendVendingMachine.cpp",
                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0x34b,"[ERROR] Not enough UserID[%s] ACera[%d] AGold[%d] AWP[%d] AMile[%d]",
                   uVar17,local_70,local_78,local_74,local_6c);
        uVar17 = CUser::GetMileage(param_1);
        uVar7 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar9 = CInventory::get_money(pCVar8);
        uVar10 = CUser::GetCera(param_1);
        LogManager::logFormat
                  (1,"localjapan/AppendVendingMachine.cpp",
                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0x34c," / UCera[%d] UGold[%d] UWP[%d] AMile[%d]\n",uVar10,uVar9,uVar7,uVar17);
        local_7c = -1;
        WongWork::CCeraShop::ProcessError
                  ((CCeraShop *)this,param_1,(ushort)local_68,-1,*(uint *)(param_2 + 0x39),1,1,
                   (char)param_2[0xf]);
      }
    }
    else {
      local_7c = -1;
      WongWork::CCeraShop::ProcessError
                ((CCeraShop *)this,param_1,1,-1,*(uint *)(param_2 + 0x39),1,1,(char)param_2[0xf]);
    }
LAB_081783ce:
    uVar17 = 1;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_170);
  }
  return uVar17;
}
```
