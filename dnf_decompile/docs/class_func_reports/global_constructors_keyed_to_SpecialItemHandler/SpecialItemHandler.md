# SpecialItemHandler

`_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE`

`global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to SpecialItemHandler` | `0x0827dede` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827dede  _GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE
#           global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)
# range [0x0827dede, 0x0827f4f3]
0827dede +0x0000:  push   %ebp
0827dedf +0x0001:  mov    %esp,%ebp
0827dee1 +0x0003:  sub    $0x18,%esp
0827dee4 +0x0006:  movl   $0xffff,0x4(%esp)
0827deec +0x000e:  movl   $0x1,(%esp)
0827def3 +0x0015:  call   0827de9e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827def8 +0x001a:  leave
0827def9 +0x001b:  ret
0827defa +0x001c:  push   %ebp
0827defb +0x001d:  mov    %esp,%ebp
0827defd +0x001f:  mov    0x8(%ebp),%eax
0827df00 +0x0022:  mov    0x10(%eax),%eax
0827df03 +0x0025:  test   %eax,%eax
0827df05 +0x0027:  je     0827df16 <+0x38>
0827df07 +0x0029:  mov    0x8(%ebp),%eax
0827df0a +0x002c:  mov    0x10(%eax),%eax
0827df0d +0x002f:  movzbl 0x122b(%eax),%eax
0827df14 +0x0036:  jmp    0827df1b <+0x3d>
0827df16 +0x0038:  mov    $0x0,%eax
0827df1b +0x003d:  pop    %ebp
0827df1c +0x003e:  ret
0827df1d +0x003f:  nop
0827df1e +0x0040:  push   %ebp
0827df1f +0x0041:  mov    %esp,%ebp
0827df21 +0x0043:  sub    $0x4,%esp
0827df24 +0x0046:  mov    0xc(%ebp),%eax
0827df27 +0x0049:  mov    %al,-0x4(%ebp)
0827df2a +0x004c:  mov    0x8(%ebp),%eax
0827df2d +0x004f:  movzbl 0x8d245(%eax),%eax
0827df34 +0x0056:  mov    %eax,%edx
0827df36 +0x0058:  add    -0x4(%ebp),%dl
0827df39 +0x005b:  mov    0x8(%ebp),%eax
0827df3c +0x005e:  mov    %dl,0x8d245(%eax)
0827df42 +0x0064:  leave
0827df43 +0x0065:  ret
0827df44 +0x0066:  push   %ebp
0827df45 +0x0067:  mov    %esp,%ebp
0827df47 +0x0069:  push   %esi
0827df48 +0x006a:  push   %ebx
0827df49 +0x006b:  sub    $0x10,%esp
0827df4c +0x006e:  mov    0x8(%ebp),%eax
0827df4f +0x0071:  mov    %eax,(%esp)
0827df52 +0x0074:  call   0827e4f6 <+0x618>
0827df57 +0x0079:  mov    0x8(%ebp),%edx
0827df5a +0x007c:  mov    0x4(%edx),%ecx
0827df5d +0x007f:  mov    0x8(%ebp),%edx
0827df60 +0x0082:  mov    (%edx),%edx
0827df62 +0x0084:  mov    %eax,0x8(%esp)
0827df66 +0x0088:  mov    %ecx,0x4(%esp)
0827df6a +0x008c:  mov    %edx,(%esp)
0827df6d +0x008f:  call   0827e4fe <+0x620>
0827df72 +0x0094:  jmp    0827df8f <+0xb1>
0827df74 +0x0096:  mov    %edx,%ebx
0827df76 +0x0098:  mov    %eax,%esi
0827df78 +0x009a:  mov    0x8(%ebp),%eax
0827df7b +0x009d:  mov    %eax,(%esp)
0827df7e +0x00a0:  call   0827e48e <+0x5b0>
0827df83 +0x00a5:  mov    %esi,%eax
0827df85 +0x00a7:  mov    %ebx,%edx
0827df87 +0x00a9:  mov    %eax,(%esp)
0827df8a +0x00ac:  call   08ae3750 <_Unwind_Resume>
0827df8f +0x00b1:  mov    0x8(%ebp),%eax
0827df92 +0x00b4:  mov    %eax,(%esp)
0827df95 +0x00b7:  call   0827e48e <+0x5b0>
0827df9a +0x00bc:  add    $0x10,%esp
0827df9d +0x00bf:  pop    %ebx
0827df9e +0x00c0:  pop    %esi
0827df9f +0x00c1:  pop    %ebp
0827dfa0 +0x00c2:  ret
0827dfa1 +0x00c3:  nop
0827dfa2 +0x00c4:  push   %ebp
0827dfa3 +0x00c5:  mov    %esp,%ebp
0827dfa5 +0x00c7:  sub    $0x18,%esp
0827dfa8 +0x00ca:  mov    0x8(%ebp),%eax
0827dfab +0x00cd:  mov    (%eax),%eax
0827dfad +0x00cf:  mov    %eax,(%esp)
0827dfb0 +0x00d2:  call   0827e518 <+0x63a>
0827dfb5 +0x00d7:  leave
0827dfb6 +0x00d8:  ret
0827dfb7 +0x00d9:  nop
0827dfb8 +0x00da:  push   %ebp
0827dfb9 +0x00db:  mov    %esp,%ebp
0827dfbb +0x00dd:  push   %esi
0827dfbc +0x00de:  push   %ebx
0827dfbd +0x00df:  sub    $0x20,%esp
0827dfc0 +0x00e2:  mov    0xc(%ebp),%eax
0827dfc3 +0x00e5:  mov    %eax,(%esp)
0827dfc6 +0x00e8:  call   0827e582 <+0x6a4>
0827dfcb +0x00ed:  mov    %eax,%ebx
0827dfcd +0x00ef:  mov    0xc(%ebp),%eax
0827dfd0 +0x00f2:  mov    %eax,(%esp)
0827dfd3 +0x00f5:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
0827dfd8 +0x00fa:  mov    0x8(%ebp),%edx
0827dfdb +0x00fd:  mov    %ebx,0x8(%esp)
0827dfdf +0x0101:  mov    %eax,0x4(%esp)
0827dfe3 +0x0105:  mov    %edx,(%esp)
0827dfe6 +0x0108:  call   0827e58a <+0x6ac>
0827dfeb +0x010d:  mov    0x8(%ebp),%eax
0827dfee +0x0110:  mov    %eax,(%esp)
0827dff1 +0x0113:  call   0827e4f6 <+0x618>
0827dff6 +0x0118:  mov    %eax,%ebx
0827dff8 +0x011a:  mov    0x8(%ebp),%eax
0827dffb +0x011d:  mov    (%eax),%esi
0827dffd +0x011f:  lea    -0x10(%ebp),%eax
0827e000 +0x0122:  mov    0xc(%ebp),%edx
0827e003 +0x0125:  mov    %edx,0x4(%esp)
0827e007 +0x0129:  mov    %eax,(%esp)
0827e00a +0x012c:  call   0827e628 <+0x74a>
0827e00f +0x0131:  sub    $0x4,%esp
0827e012 +0x0134:  lea    -0xc(%ebp),%eax
0827e015 +0x0137:  mov    0xc(%ebp),%edx
0827e018 +0x013a:  mov    %edx,0x4(%esp)
0827e01c +0x013e:  mov    %eax,(%esp)
0827e01f +0x0141:  call   0827e5fc <+0x71e>
0827e024 +0x0146:  sub    $0x4,%esp
0827e027 +0x0149:  mov    %ebx,0xc(%esp)
0827e02b +0x014d:  mov    %esi,0x8(%esp)
0827e02f +0x0151:  mov    -0x10(%ebp),%eax
0827e032 +0x0154:  mov    %eax,0x4(%esp)
0827e036 +0x0158:  mov    -0xc(%ebp),%eax
0827e039 +0x015b:  mov    %eax,(%esp)
0827e03c +0x015e:  call   0827e654 <+0x776>
0827e041 +0x0163:  mov    0x8(%ebp),%edx
0827e044 +0x0166:  mov    %eax,0x4(%edx)
0827e047 +0x0169:  lea    -0x8(%ebp),%esp
0827e04a +0x016c:  add    $0x0,%esp
0827e04d +0x016f:  pop    %ebx
0827e04e +0x0170:  pop    %esi
0827e04f +0x0171:  pop    %ebp
0827e050 +0x0172:  ret
0827e051 +0x0173:  mov    %edx,%ebx
0827e053 +0x0175:  mov    %eax,%esi
0827e055 +0x0177:  mov    0x8(%ebp),%eax
0827e058 +0x017a:  mov    %eax,(%esp)
0827e05b +0x017d:  call   0827e48e <+0x5b0>
0827e060 +0x0182:  mov    %esi,%eax
0827e062 +0x0184:  mov    %ebx,%edx
0827e064 +0x0186:  mov    %eax,(%esp)
0827e067 +0x0189:  call   08ae3750 <_Unwind_Resume>
0827e06c +0x018e:  push   %ebp
0827e06d +0x018f:  mov    %esp,%ebp
0827e06f +0x0191:  sub    $0x28,%esp
0827e072 +0x0194:  lea    -0x10(%ebp),%eax
0827e075 +0x0197:  mov    0x8(%ebp),%edx
0827e078 +0x019a:  mov    %edx,0x4(%esp)
0827e07c +0x019e:  mov    %eax,(%esp)
0827e07f +0x01a1:  call   0827e676 <+0x798>
0827e084 +0x01a6:  sub    $0x4,%esp
0827e087 +0x01a9:  lea    -0xc(%ebp),%eax
0827e08a +0x01ac:  mov    0x8(%ebp),%edx
0827e08d +0x01af:  mov    %edx,0x4(%esp)
0827e091 +0x01b3:  mov    %eax,(%esp)
0827e094 +0x01b6:  call   0827e6a2 <+0x7c4>
0827e099 +0x01bb:  sub    $0x4,%esp
0827e09c +0x01be:  lea    -0x10(%ebp),%eax
0827e09f +0x01c1:  mov    %eax,0x4(%esp)
0827e0a3 +0x01c5:  lea    -0xc(%ebp),%eax
0827e0a6 +0x01c8:  mov    %eax,(%esp)
0827e0a9 +0x01cb:  call   0827e6cd <+0x7ef>
0827e0ae +0x01d0:  leave
0827e0af +0x01d1:  ret
0827e0b0 +0x01d2:  push   %ebp
0827e0b1 +0x01d3:  mov    %esp,%ebp
0827e0b3 +0x01d5:  push   %ebx
0827e0b4 +0x01d6:  sub    $0x14,%esp
0827e0b7 +0x01d9:  mov    0x8(%ebp),%eax
0827e0ba +0x01dc:  mov    %eax,(%esp)
0827e0bd +0x01df:  call   0817aee6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf64>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf64
0827e0c2 +0x01e4:  mov    (%eax),%ebx
0827e0c4 +0x01e6:  mov    0xc(%ebp),%eax
0827e0c7 +0x01e9:  mov    %eax,(%esp)
0827e0ca +0x01ec:  call   0817aee6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf64>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf64
0827e0cf +0x01f1:  mov    (%eax),%eax
0827e0d1 +0x01f3:  cmp    %eax,%ebx
0827e0d3 +0x01f5:  setne  %al
0827e0d6 +0x01f8:  add    $0x14,%esp
0827e0d9 +0x01fb:  pop    %ebx
0827e0da +0x01fc:  pop    %ebp
0827e0db +0x01fd:  ret
0827e0dc +0x01fe:  push   %ebp
0827e0dd +0x01ff:  mov    %esp,%ebp
0827e0df +0x0201:  mov    0x8(%ebp),%eax
0827e0e2 +0x0204:  mov    (%eax),%eax
0827e0e4 +0x0206:  pop    %ebp
0827e0e5 +0x0207:  ret
0827e0e6 +0x0208:  push   %ebp
0827e0e7 +0x0209:  mov    %esp,%ebp
0827e0e9 +0x020b:  mov    0x8(%ebp),%eax
0827e0ec +0x020e:  mov    (%eax),%eax
0827e0ee +0x0210:  lea    0x8(%eax),%edx
0827e0f1 +0x0213:  mov    0x8(%ebp),%eax
0827e0f4 +0x0216:  mov    %edx,(%eax)
0827e0f6 +0x0218:  mov    0x8(%ebp),%eax
0827e0f9 +0x021b:  pop    %ebp
0827e0fa +0x021c:  ret
0827e0fb +0x021d:  nop
0827e0fc +0x021e:  push   %ebp
0827e0fd +0x021f:  mov    %esp,%ebp
0827e0ff +0x0221:  mov    0x8(%ebp),%eax
0827e102 +0x0224:  mov    (%eax),%ecx
0827e104 +0x0226:  mov    0xc(%ebp),%edx
0827e107 +0x0229:  mov    %edx,%eax
0827e109 +0x022b:  add    %eax,%eax
0827e10b +0x022d:  add    %edx,%eax
0827e10d +0x022f:  shl    $0x2,%eax
0827e110 +0x0232:  lea    (%ecx,%eax,1),%eax
0827e113 +0x0235:  pop    %ebp
0827e114 +0x0236:  ret
0827e115 +0x0237:  nop
0827e116 +0x0238:  push   %ebp
0827e117 +0x0239:  mov    %esp,%ebp
0827e119 +0x023b:  sub    $0x28,%esp
0827e11c +0x023e:  mov    0x8(%ebp),%eax
0827e11f +0x0241:  mov    0x4(%eax),%edx
0827e122 +0x0244:  mov    0x8(%ebp),%eax
0827e125 +0x0247:  mov    0x8(%eax),%eax
0827e128 +0x024a:  cmp    %eax,%edx
0827e12a +0x024c:  je     0827e159 <+0x27b>
0827e12c +0x024e:  mov    0x8(%ebp),%eax
0827e12f +0x0251:  mov    0x4(%eax),%edx
0827e132 +0x0254:  mov    0x8(%ebp),%eax
0827e135 +0x0257:  mov    0xc(%ebp),%ecx
0827e138 +0x025a:  mov    %ecx,0x8(%esp)
0827e13c +0x025e:  mov    %edx,0x4(%esp)
0827e140 +0x0262:  mov    %eax,(%esp)
0827e143 +0x0265:  call   0827e6fa <+0x81c>
0827e148 +0x026a:  mov    0x8(%ebp),%eax
0827e14b +0x026d:  mov    0x4(%eax),%eax
0827e14e +0x0270:  lea    0x8(%eax),%edx
0827e151 +0x0273:  mov    0x8(%ebp),%eax
0827e154 +0x0276:  mov    %edx,0x4(%eax)
0827e157 +0x0279:  jmp    0827e187 <+0x2a9>
0827e159 +0x027b:  lea    -0xc(%ebp),%eax
0827e15c +0x027e:  mov    0x8(%ebp),%edx
0827e15f +0x0281:  mov    %edx,0x4(%esp)
0827e163 +0x0285:  mov    %eax,(%esp)
0827e166 +0x0288:  call   0827e2ae <+0x3d0>
0827e16b +0x028d:  sub    $0x4,%esp
0827e16e +0x0290:  mov    0xc(%ebp),%eax
0827e171 +0x0293:  mov    %eax,0x8(%esp)
0827e175 +0x0297:  mov    -0xc(%ebp),%eax
0827e178 +0x029a:  mov    %eax,0x4(%esp)
0827e17c +0x029e:  mov    0x8(%ebp),%eax
0827e17f +0x02a1:  mov    %eax,(%esp)
0827e182 +0x02a4:  call   0827e72a <+0x84c>
0827e187 +0x02a9:  leave
0827e188 +0x02aa:  ret
0827e189 +0x02ab:  nop
0827e18a +0x02ac:  push   %ebp
0827e18b +0x02ad:  mov    %esp,%ebp
0827e18d +0x02af:  push   %ebx
0827e18e +0x02b0:  sub    $0x34,%esp
0827e191 +0x02b3:  mov    0x8(%ebp),%ebx
0827e194 +0x02b6:  lea    -0x24(%ebp),%eax
0827e197 +0x02b9:  mov    0xc(%ebp),%edx
0827e19a +0x02bc:  mov    %edx,0x4(%esp)
0827e19e +0x02c0:  mov    %eax,(%esp)
0827e1a1 +0x02c3:  call   0817aa72 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xaf0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xaf0
0827e1a6 +0x02c8:  sub    $0x4,%esp
0827e1a9 +0x02cb:  movl   $0x1,-0x1c(%ebp)
0827e1b0 +0x02d2:  lea    -0x20(%ebp),%eax
0827e1b3 +0x02d5:  lea    -0x1c(%ebp),%edx
0827e1b6 +0x02d8:  mov    %edx,0x8(%esp)
0827e1ba +0x02dc:  lea    0x10(%ebp),%edx
0827e1bd +0x02df:  mov    %edx,0x4(%esp)
0827e1c1 +0x02e3:  mov    %eax,(%esp)
0827e1c4 +0x02e6:  call   0827e9e2 <+0xb04>
0827e1c9 +0x02eb:  sub    $0x4,%esp
0827e1cc +0x02ee:  lea    -0x24(%ebp),%eax
0827e1cf +0x02f1:  mov    %eax,0x4(%esp)
0827e1d3 +0x02f5:  lea    -0x20(%ebp),%eax
0827e1d6 +0x02f8:  mov    %eax,(%esp)
0827e1d9 +0x02fb:  call   0827e0b0 <+0x1d2>
0827e1de +0x0300:  test   %al,%al
0827e1e0 +0x0302:  je     0827e23d <+0x35f>
0827e1e2 +0x0304:  lea    -0x14(%ebp),%eax
0827e1e5 +0x0307:  mov    0xc(%ebp),%edx
0827e1e8 +0x030a:  mov    %edx,0x4(%esp)
0827e1ec +0x030e:  mov    %eax,(%esp)
0827e1ef +0x0311:  call   0817aa72 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xaf0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xaf0
0827e1f4 +0x0316:  sub    $0x4,%esp
0827e1f7 +0x0319:  movl   $0x1,-0xc(%ebp)
0827e1fe +0x0320:  lea    -0x10(%ebp),%eax
0827e201 +0x0323:  lea    -0xc(%ebp),%edx
0827e204 +0x0326:  mov    %edx,0x8(%esp)
0827e208 +0x032a:  lea    0x10(%ebp),%edx
0827e20b +0x032d:  mov    %edx,0x4(%esp)
0827e20f +0x0331:  mov    %eax,(%esp)
0827e212 +0x0334:  call   0827e9e2 <+0xb04>
0827e217 +0x0339:  sub    $0x4,%esp
0827e21a +0x033c:  lea    -0x18(%ebp),%eax
0827e21d +0x033f:  mov    0x10(%ebp),%edx
0827e220 +0x0342:  mov    %edx,0xc(%esp)
0827e224 +0x0346:  mov    -0x14(%ebp),%edx
0827e227 +0x0349:  mov    %edx,0x8(%esp)
0827e22b +0x034d:  mov    -0x10(%ebp),%edx
0827e22e +0x0350:  mov    %edx,0x4(%esp)
0827e232 +0x0354:  mov    %eax,(%esp)
0827e235 +0x0357:  call   0827ea18 <+0xb3a>
0827e23a +0x035c:  sub    $0x4,%esp
0827e23d +0x035f:  mov    0xc(%ebp),%eax
0827e240 +0x0362:  mov    0x4(%eax),%eax
0827e243 +0x0365:  lea    -0x8(%eax),%edx
0827e246 +0x0368:  mov    0xc(%ebp),%eax
0827e249 +0x036b:  mov    %edx,0x4(%eax)
0827e24c +0x036e:  mov    0xc(%ebp),%eax
0827e24f +0x0371:  mov    0x4(%eax),%edx
0827e252 +0x0374:  mov    0xc(%ebp),%eax
0827e255 +0x0377:  mov    %edx,0x4(%esp)
0827e259 +0x037b:  mov    %eax,(%esp)
0827e25c +0x037e:  call   0817b0bc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x113a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x113a
0827e261 +0x0383:  mov    0x10(%ebp),%eax
0827e264 +0x0386:  mov    %eax,(%ebx)
0827e266 +0x0388:  mov    %ebx,%eax
0827e268 +0x038a:  mov    -0x4(%ebp),%ebx
0827e26b +0x038d:  leave
0827e26c +0x038e:  ret    $0x4
0827e26f +0x0391:  nop
0827e270 +0x0392:  push   %ebp
0827e271 +0x0393:  mov    %esp,%ebp
0827e273 +0x0395:  push   %ebx
0827e274 +0x0396:  sub    $0x14,%esp
0827e277 +0x0399:  mov    0x8(%ebp),%ebx
0827e27a +0x039c:  mov    0xc(%ebp),%eax
0827e27d +0x039f:  mov    %eax,0x4(%esp)
0827e281 +0x03a3:  mov    %ebx,(%esp)
0827e284 +0x03a6:  call   0827ea76 <+0xb98>
0827e289 +0x03ab:  mov    %ebx,%eax
0827e28b +0x03ad:  add    $0x14,%esp
0827e28e +0x03b0:  pop    %ebx
0827e28f +0x03b1:  pop    %ebp
0827e290 +0x03b2:  ret    $0x4
0827e293 +0x03b5:  nop
0827e294 +0x03b6:  push   %ebp
0827e295 +0x03b7:  mov    %esp,%ebp
0827e297 +0x03b9:  sub    $0x18,%esp
0827e29a +0x03bc:  mov    0xc(%ebp),%eax
0827e29d +0x03bf:  mov    %eax,(%esp)
0827e2a0 +0x03c2:  call   0827ea86 <+0xba8>
0827e2a5 +0x03c7:  mov    (%eax),%edx
0827e2a7 +0x03c9:  mov    0x8(%ebp),%eax
0827e2aa +0x03cc:  mov    %edx,(%eax)
0827e2ac +0x03ce:  leave
0827e2ad +0x03cf:  ret
0827e2ae +0x03d0:  push   %ebp
0827e2af +0x03d1:  mov    %esp,%ebp
0827e2b1 +0x03d3:  push   %ebx
0827e2b2 +0x03d4:  sub    $0x14,%esp
0827e2b5 +0x03d7:  mov    0x8(%ebp),%ebx
0827e2b8 +0x03da:  mov    0xc(%ebp),%eax
0827e2bb +0x03dd:  add    $0x4,%eax
0827e2be +0x03e0:  mov    %eax,0x4(%esp)
0827e2c2 +0x03e4:  mov    %ebx,(%esp)
0827e2c5 +0x03e7:  call   0827ea76 <+0xb98>
0827e2ca +0x03ec:  mov    %ebx,%eax
0827e2cc +0x03ee:  add    $0x14,%esp
0827e2cf +0x03f1:  pop    %ebx
0827e2d0 +0x03f2:  pop    %ebp
0827e2d1 +0x03f3:  ret    $0x4
0827e2d4 +0x03f6:  push   %ebp
0827e2d5 +0x03f7:  mov    %esp,%ebp
0827e2d7 +0x03f9:  push   %ebx
0827e2d8 +0x03fa:  sub    $0x14,%esp
0827e2db +0x03fd:  mov    0x8(%ebp),%eax
0827e2de +0x0400:  mov    %eax,(%esp)
0827e2e1 +0x0403:  call   0827ea8e <+0xbb0>
0827e2e6 +0x0408:  mov    (%eax),%ebx
0827e2e8 +0x040a:  mov    0xc(%ebp),%eax
0827e2eb +0x040d:  mov    %eax,(%esp)
0827e2ee +0x0410:  call   0827ea8e <+0xbb0>
0827e2f3 +0x0415:  mov    (%eax),%eax
0827e2f5 +0x0417:  cmp    %eax,%ebx
0827e2f7 +0x0419:  setne  %al
0827e2fa +0x041c:  add    $0x14,%esp
0827e2fd +0x041f:  pop    %ebx
0827e2fe +0x0420:  pop    %ebp
0827e2ff +0x0421:  ret
0827e300 +0x0422:  push   %ebp
0827e301 +0x0423:  mov    %esp,%ebp
0827e303 +0x0425:  mov    0x8(%ebp),%eax
0827e306 +0x0428:  mov    (%eax),%eax
0827e308 +0x042a:  lea    0x8(%eax),%edx
0827e30b +0x042d:  mov    0x8(%ebp),%eax
0827e30e +0x0430:  mov    %edx,(%eax)
0827e310 +0x0432:  mov    0x8(%ebp),%eax
0827e313 +0x0435:  pop    %ebp
0827e314 +0x0436:  ret
0827e315 +0x0437:  nop
0827e316 +0x0438:  push   %ebp
0827e317 +0x0439:  mov    %esp,%ebp
0827e319 +0x043b:  mov    0x8(%ebp),%eax
0827e31c +0x043e:  mov    (%eax),%eax
0827e31e +0x0440:  pop    %ebp
0827e31f +0x0441:  ret
0827e320 +0x0442:  push   %ebp
0827e321 +0x0443:  mov    %esp,%ebp
0827e323 +0x0445:  push   %ebx
0827e324 +0x0446:  sub    $0x34,%esp
0827e327 +0x0449:  mov    0x8(%ebp),%ebx
0827e32a +0x044c:  lea    -0x24(%ebp),%eax
0827e32d +0x044f:  mov    0xc(%ebp),%edx
0827e330 +0x0452:  mov    %edx,0x4(%esp)
0827e334 +0x0456:  mov    %eax,(%esp)
0827e337 +0x0459:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0827e33c +0x045e:  sub    $0x4,%esp
0827e33f +0x0461:  movl   $0x1,-0x1c(%ebp)
0827e346 +0x0468:  lea    -0x20(%ebp),%eax
0827e349 +0x046b:  lea    -0x1c(%ebp),%edx
0827e34c +0x046e:  mov    %edx,0x8(%esp)
0827e350 +0x0472:  lea    0x10(%ebp),%edx
0827e353 +0x0475:  mov    %edx,0x4(%esp)
0827e357 +0x0479:  mov    %eax,(%esp)
0827e35a +0x047c:  call   0827ea96 <+0xbb8>
0827e35f +0x0481:  sub    $0x4,%esp
0827e362 +0x0484:  lea    -0x24(%ebp),%eax
0827e365 +0x0487:  mov    %eax,0x4(%esp)
0827e369 +0x048b:  lea    -0x20(%ebp),%eax
0827e36c +0x048e:  mov    %eax,(%esp)
0827e36f +0x0491:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0827e374 +0x0496:  test   %al,%al
0827e376 +0x0498:  je     0827e3d3 <+0x4f5>
0827e378 +0x049a:  lea    -0x14(%ebp),%eax
0827e37b +0x049d:  mov    0xc(%ebp),%edx
0827e37e +0x04a0:  mov    %edx,0x4(%esp)
0827e382 +0x04a4:  mov    %eax,(%esp)
0827e385 +0x04a7:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0827e38a +0x04ac:  sub    $0x4,%esp
0827e38d +0x04af:  movl   $0x1,-0xc(%ebp)
0827e394 +0x04b6:  lea    -0x10(%ebp),%eax
0827e397 +0x04b9:  lea    -0xc(%ebp),%edx
0827e39a +0x04bc:  mov    %edx,0x8(%esp)
0827e39e +0x04c0:  lea    0x10(%ebp),%edx
0827e3a1 +0x04c3:  mov    %edx,0x4(%esp)
0827e3a5 +0x04c7:  mov    %eax,(%esp)
0827e3a8 +0x04ca:  call   0827ea96 <+0xbb8>
0827e3ad +0x04cf:  sub    $0x4,%esp
0827e3b0 +0x04d2:  lea    -0x18(%ebp),%eax
0827e3b3 +0x04d5:  mov    0x10(%ebp),%edx
0827e3b6 +0x04d8:  mov    %edx,0xc(%esp)
0827e3ba +0x04dc:  mov    -0x14(%ebp),%edx
0827e3bd +0x04df:  mov    %edx,0x8(%esp)
0827e3c1 +0x04e3:  mov    -0x10(%ebp),%edx
0827e3c4 +0x04e6:  mov    %edx,0x4(%esp)
0827e3c8 +0x04ea:  mov    %eax,(%esp)
0827e3cb +0x04ed:  call   0827eacc <+0xbee>
0827e3d0 +0x04f2:  sub    $0x4,%esp
0827e3d3 +0x04f5:  mov    0xc(%ebp),%eax
0827e3d6 +0x04f8:  mov    0x4(%eax),%eax
0827e3d9 +0x04fb:  lea    -0x8(%eax),%edx
0827e3dc +0x04fe:  mov    0xc(%ebp),%eax
0827e3df +0x0501:  mov    %edx,0x4(%eax)
0827e3e2 +0x0504:  mov    0xc(%ebp),%eax
0827e3e5 +0x0507:  mov    0x4(%eax),%edx
0827e3e8 +0x050a:  mov    0xc(%ebp),%eax
0827e3eb +0x050d:  mov    %edx,0x4(%esp)
0827e3ef +0x0511:  mov    %eax,(%esp)
0827e3f2 +0x0514:  call   080ddf56 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa9f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa9f
0827e3f7 +0x0519:  mov    0x10(%ebp),%eax
0827e3fa +0x051c:  mov    %eax,(%ebx)
0827e3fc +0x051e:  mov    %ebx,%eax
0827e3fe +0x0520:  mov    -0x4(%ebp),%ebx
0827e401 +0x0523:  leave
0827e402 +0x0524:  ret    $0x4
0827e405 +0x0527:  nop
0827e406 +0x0528:  push   %ebp
0827e407 +0x0529:  mov    %esp,%ebp
0827e409 +0x052b:  push   %ebx
0827e40a +0x052c:  sub    $0x14,%esp
0827e40d +0x052f:  mov    0x8(%ebp),%ebx
0827e410 +0x0532:  mov    0xc(%ebp),%eax
0827e413 +0x0535:  mov    0x10(%ebp),%edx
0827e416 +0x0538:  mov    %edx,0x8(%esp)
0827e41a +0x053c:  mov    %eax,0x4(%esp)
0827e41e +0x0540:  mov    %ebx,(%esp)
0827e421 +0x0543:  call   0827eb2a <+0xc4c>
0827e426 +0x0548:  sub    $0x4,%esp
0827e429 +0x054b:  mov    %ebx,%eax
0827e42b +0x054d:  mov    -0x4(%ebp),%ebx
0827e42e +0x0550:  leave
0827e42f +0x0551:  ret    $0x4
0827e432 +0x0554:  push   %ebp
0827e433 +0x0555:  mov    %esp,%ebp
0827e435 +0x0557:  push   %ebx
0827e436 +0x0558:  sub    $0x14,%esp
0827e439 +0x055b:  mov    0x8(%ebp),%ebx
0827e43c +0x055e:  mov    0xc(%ebp),%eax
0827e43f +0x0561:  mov    %eax,0x4(%esp)
0827e443 +0x0565:  mov    %ebx,(%esp)
0827e446 +0x0568:  call   0827ebe8 <+0xd0a>
0827e44b +0x056d:  sub    $0x4,%esp
0827e44e +0x0570:  mov    %ebx,%eax
0827e450 +0x0572:  mov    -0x4(%ebp),%ebx
0827e453 +0x0575:  leave
0827e454 +0x0576:  ret    $0x4
0827e457 +0x0579:  nop
0827e458 +0x057a:  push   %ebp
0827e459 +0x057b:  mov    %esp,%ebp
0827e45b +0x057d:  mov    0x8(%ebp),%eax
0827e45e +0x0580:  mov    (%eax),%edx
0827e460 +0x0582:  mov    0xc(%ebp),%eax
0827e463 +0x0585:  mov    (%eax),%eax
0827e465 +0x0587:  cmp    %eax,%edx
0827e467 +0x0589:  sete   %al
0827e46a +0x058c:  pop    %ebp
0827e46b +0x058d:  ret
0827e46c +0x058e:  push   %ebp
0827e46d +0x058f:  mov    %esp,%ebp
0827e46f +0x0591:  mov    0x8(%ebp),%eax
0827e472 +0x0594:  mov    (%eax),%eax
0827e474 +0x0596:  add    $0x10,%eax
0827e477 +0x0599:  pop    %ebp
0827e478 +0x059a:  ret
0827e479 +0x059b:  nop
0827e47a +0x059c:  push   %ebp
0827e47b +0x059d:  mov    %esp,%ebp
0827e47d +0x059f:  sub    $0x18,%esp
0827e480 +0x05a2:  mov    0x8(%ebp),%eax
0827e483 +0x05a5:  mov    %eax,(%esp)
0827e486 +0x05a8:  call   0827ec0e <+0xd30>
0827e48b +0x05ad:  leave
0827e48c +0x05ae:  ret
0827e48d +0x05af:  nop
0827e48e +0x05b0:  push   %ebp
0827e48f +0x05b1:  mov    %esp,%ebp
0827e491 +0x05b3:  push   %esi
0827e492 +0x05b4:  push   %ebx
0827e493 +0x05b5:  sub    $0x10,%esp
0827e496 +0x05b8:  mov    0x8(%ebp),%eax
0827e499 +0x05bb:  mov    0x8(%eax),%eax
0827e49c +0x05be:  mov    %eax,%edx
0827e49e +0x05c0:  mov    0x8(%ebp),%eax
0827e4a1 +0x05c3:  mov    (%eax),%eax
0827e4a3 +0x05c5:  mov    %edx,%ecx
0827e4a5 +0x05c7:  sub    %eax,%ecx
0827e4a7 +0x05c9:  mov    %ecx,%eax
0827e4a9 +0x05cb:  sar    $0x3,%eax
0827e4ac +0x05ce:  mov    %eax,%edx
0827e4ae +0x05d0:  mov    0x8(%ebp),%eax
0827e4b1 +0x05d3:  mov    (%eax),%eax
0827e4b3 +0x05d5:  mov    %edx,0x8(%esp)
0827e4b7 +0x05d9:  mov    %eax,0x4(%esp)
0827e4bb +0x05dd:  mov    0x8(%ebp),%eax
0827e4be +0x05e0:  mov    %eax,(%esp)
0827e4c1 +0x05e3:  call   0827ec22 <+0xd44>
0827e4c6 +0x05e8:  jmp    0827e4e3 <+0x605>
0827e4c8 +0x05ea:  mov    %edx,%ebx
0827e4ca +0x05ec:  mov    %eax,%esi
0827e4cc +0x05ee:  mov    0x8(%ebp),%eax
0827e4cf +0x05f1:  mov    %eax,(%esp)
0827e4d2 +0x05f4:  call   0827e47a <+0x59c>
0827e4d7 +0x05f9:  mov    %esi,%eax
0827e4d9 +0x05fb:  mov    %ebx,%edx
0827e4db +0x05fd:  mov    %eax,(%esp)
0827e4de +0x0600:  call   08ae3750 <_Unwind_Resume>
0827e4e3 +0x0605:  mov    0x8(%ebp),%eax
0827e4e6 +0x0608:  mov    %eax,(%esp)
0827e4e9 +0x060b:  call   0827e47a <+0x59c>
0827e4ee +0x0610:  add    $0x10,%esp
0827e4f1 +0x0613:  pop    %ebx
0827e4f2 +0x0614:  pop    %esi
0827e4f3 +0x0615:  pop    %ebp
0827e4f4 +0x0616:  ret
0827e4f5 +0x0617:  nop
0827e4f6 +0x0618:  push   %ebp
0827e4f7 +0x0619:  mov    %esp,%ebp
0827e4f9 +0x061b:  mov    0x8(%ebp),%eax
0827e4fc +0x061e:  pop    %ebp
0827e4fd +0x061f:  ret
0827e4fe +0x0620:  push   %ebp
0827e4ff +0x0621:  mov    %esp,%ebp
0827e501 +0x0623:  sub    $0x18,%esp
0827e504 +0x0626:  mov    0xc(%ebp),%eax
0827e507 +0x0629:  mov    %eax,0x4(%esp)
0827e50b +0x062d:  mov    0x8(%ebp),%eax
0827e50e +0x0630:  mov    %eax,(%esp)
0827e511 +0x0633:  call   0827ec49 <+0xd6b>
0827e516 +0x0638:  leave
0827e517 +0x0639:  ret
0827e518 +0x063a:  push   %ebp
0827e519 +0x063b:  mov    %esp,%ebp
0827e51b +0x063d:  sub    $0x28,%esp
0827e51e +0x0640:  jmp    0827e53c <+0x65e>
0827e520 +0x0642:  mov    0x8(%ebp),%eax
0827e523 +0x0645:  mov    %eax,(%esp)
0827e526 +0x0648:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0827e52b +0x064d:  add    %eax,%eax
0827e52d +0x064f:  mov    %eax,0x4(%esp)
0827e531 +0x0653:  mov    0x8(%ebp),%eax
0827e534 +0x0656:  mov    %eax,(%esp)
0827e537 +0x0659:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0827e53c +0x065e:  movl   $0xd,0x4(%esp)
0827e544 +0x0666:  mov    0x8(%ebp),%eax
0827e547 +0x0669:  mov    %eax,(%esp)
0827e54a +0x066c:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0827e54f +0x0671:  xor    $0x1,%eax
0827e552 +0x0674:  test   %al,%al
0827e554 +0x0676:  jne    0827e520 <+0x642>
0827e556 +0x0678:  mov    0x8(%ebp),%eax
0827e559 +0x067b:  mov    0x8(%eax),%eax
0827e55c +0x067e:  mov    %eax,%edx
0827e55e +0x0680:  mov    0x8(%ebp),%eax
0827e561 +0x0683:  mov    0xc(%eax),%eax
0827e564 +0x0686:  lea    (%edx,%eax,1),%eax
0827e567 +0x0689:  mov    %eax,-0xc(%ebp)
0827e56a +0x068c:  movl   $0xd,0x4(%esp)
0827e572 +0x0694:  mov    0x8(%ebp),%eax
0827e575 +0x0697:  mov    %eax,(%esp)
0827e578 +0x069a:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0827e57d +0x069f:  mov    -0xc(%ebp),%eax
0827e580 +0x06a2:  leave
0827e581 +0x06a3:  ret
0827e582 +0x06a4:  push   %ebp
0827e583 +0x06a5:  mov    %esp,%ebp
0827e585 +0x06a7:  mov    0x8(%ebp),%eax
0827e588 +0x06aa:  pop    %ebp
0827e589 +0x06ab:  ret
0827e58a +0x06ac:  push   %ebp
0827e58b +0x06ad:  mov    %esp,%ebp
0827e58d +0x06af:  push   %esi
0827e58e +0x06b0:  push   %ebx
0827e58f +0x06b1:  sub    $0x10,%esp
0827e592 +0x06b4:  mov    0x8(%ebp),%eax
0827e595 +0x06b7:  mov    0x10(%ebp),%edx
0827e598 +0x06ba:  mov    %edx,0x4(%esp)
0827e59c +0x06be:  mov    %eax,(%esp)
0827e59f +0x06c1:  call   0827ec64 <+0xd86>
0827e5a4 +0x06c6:  mov    0xc(%ebp),%eax
0827e5a7 +0x06c9:  mov    %eax,0x4(%esp)
0827e5ab +0x06cd:  mov    0x8(%ebp),%eax
0827e5ae +0x06d0:  mov    %eax,(%esp)
0827e5b1 +0x06d3:  call   0827ec9c <+0xdbe>
0827e5b6 +0x06d8:  mov    0x8(%ebp),%edx
0827e5b9 +0x06db:  mov    %eax,(%edx)
0827e5bb +0x06dd:  mov    0x8(%ebp),%eax
0827e5be +0x06e0:  mov    (%eax),%edx
0827e5c0 +0x06e2:  mov    0x8(%ebp),%eax
0827e5c3 +0x06e5:  mov    %edx,0x4(%eax)
0827e5c6 +0x06e8:  mov    0x8(%ebp),%eax
0827e5c9 +0x06eb:  mov    (%eax),%eax
0827e5cb +0x06ed:  mov    0xc(%ebp),%edx
0827e5ce +0x06f0:  shl    $0x3,%edx
0827e5d1 +0x06f3:  lea    (%eax,%edx,1),%edx
0827e5d4 +0x06f6:  mov    0x8(%ebp),%eax
0827e5d7 +0x06f9:  mov    %edx,0x8(%eax)
0827e5da +0x06fc:  add    $0x10,%esp
0827e5dd +0x06ff:  pop    %ebx
0827e5de +0x0700:  pop    %esi
0827e5df +0x0701:  pop    %ebp
0827e5e0 +0x0702:  ret
0827e5e1 +0x0703:  mov    %edx,%ebx
0827e5e3 +0x0705:  mov    %eax,%esi
0827e5e5 +0x0707:  mov    0x8(%ebp),%eax
0827e5e8 +0x070a:  mov    %eax,(%esp)
0827e5eb +0x070d:  call   0827e47a <+0x59c>
0827e5f0 +0x0712:  mov    %esi,%eax
0827e5f2 +0x0714:  mov    %ebx,%edx
0827e5f4 +0x0716:  mov    %eax,(%esp)
0827e5f7 +0x0719:  call   08ae3750 <_Unwind_Resume>
0827e5fc +0x071e:  push   %ebp
0827e5fd +0x071f:  mov    %esp,%ebp
0827e5ff +0x0721:  push   %ebx
0827e600 +0x0722:  sub    $0x24,%esp
0827e603 +0x0725:  mov    0x8(%ebp),%ebx
0827e606 +0x0728:  mov    0xc(%ebp),%eax
0827e609 +0x072b:  mov    (%eax),%eax
0827e60b +0x072d:  mov    %eax,-0xc(%ebp)
0827e60e +0x0730:  lea    -0xc(%ebp),%eax
0827e611 +0x0733:  mov    %eax,0x4(%esp)
0827e615 +0x0737:  mov    %ebx,(%esp)
0827e618 +0x073a:  call   0827eccc <+0xdee>
0827e61d +0x073f:  mov    %ebx,%eax
0827e61f +0x0741:  add    $0x24,%esp
0827e622 +0x0744:  pop    %ebx
0827e623 +0x0745:  pop    %ebp
0827e624 +0x0746:  ret    $0x4
0827e627 +0x0749:  nop
0827e628 +0x074a:  push   %ebp
0827e629 +0x074b:  mov    %esp,%ebp
0827e62b +0x074d:  push   %ebx
0827e62c +0x074e:  sub    $0x24,%esp
0827e62f +0x0751:  mov    0x8(%ebp),%ebx
0827e632 +0x0754:  mov    0xc(%ebp),%eax
0827e635 +0x0757:  mov    0x4(%eax),%eax
0827e638 +0x075a:  mov    %eax,-0xc(%ebp)
0827e63b +0x075d:  lea    -0xc(%ebp),%eax
0827e63e +0x0760:  mov    %eax,0x4(%esp)
0827e642 +0x0764:  mov    %ebx,(%esp)
0827e645 +0x0767:  call   0827eccc <+0xdee>
0827e64a +0x076c:  mov    %ebx,%eax
0827e64c +0x076e:  add    $0x24,%esp
0827e64f +0x0771:  pop    %ebx
0827e650 +0x0772:  pop    %ebp
0827e651 +0x0773:  ret    $0x4
0827e654 +0x0776:  push   %ebp
0827e655 +0x0777:  mov    %esp,%ebp
0827e657 +0x0779:  sub    $0x18,%esp
0827e65a +0x077c:  mov    0x10(%ebp),%eax
0827e65d +0x077f:  mov    %eax,0x8(%esp)
0827e661 +0x0783:  mov    0xc(%ebp),%eax
0827e664 +0x0786:  mov    %eax,0x4(%esp)
0827e668 +0x078a:  mov    0x8(%ebp),%eax
0827e66b +0x078d:  mov    %eax,(%esp)
0827e66e +0x0790:  call   0827ecdb <+0xdfd>
0827e673 +0x0795:  leave
0827e674 +0x0796:  ret
0827e675 +0x0797:  nop
0827e676 +0x0798:  push   %ebp
0827e677 +0x0799:  mov    %esp,%ebp
0827e679 +0x079b:  push   %ebx
0827e67a +0x079c:  sub    $0x24,%esp
0827e67d +0x079f:  mov    0x8(%ebp),%ebx
0827e680 +0x07a2:  mov    0xc(%ebp),%eax
0827e683 +0x07a5:  mov    0x4(%eax),%eax
0827e686 +0x07a8:  mov    %eax,-0xc(%ebp)
0827e689 +0x07ab:  lea    -0xc(%ebp),%eax
0827e68c +0x07ae:  mov    %eax,0x4(%esp)
0827e690 +0x07b2:  mov    %ebx,(%esp)
0827e693 +0x07b5:  call   0827ecfc <+0xe1e>
0827e698 +0x07ba:  mov    %ebx,%eax
0827e69a +0x07bc:  add    $0x24,%esp
0827e69d +0x07bf:  pop    %ebx
0827e69e +0x07c0:  pop    %ebp
0827e69f +0x07c1:  ret    $0x4
0827e6a2 +0x07c4:  push   %ebp
0827e6a3 +0x07c5:  mov    %esp,%ebp
0827e6a5 +0x07c7:  push   %ebx
0827e6a6 +0x07c8:  sub    $0x24,%esp
0827e6a9 +0x07cb:  mov    0x8(%ebp),%ebx
0827e6ac +0x07ce:  mov    0xc(%ebp),%eax
0827e6af +0x07d1:  mov    (%eax),%eax
0827e6b1 +0x07d3:  mov    %eax,-0xc(%ebp)
0827e6b4 +0x07d6:  lea    -0xc(%ebp),%eax
0827e6b7 +0x07d9:  mov    %eax,0x4(%esp)
0827e6bb +0x07dd:  mov    %ebx,(%esp)
0827e6be +0x07e0:  call   0827ecfc <+0xe1e>
0827e6c3 +0x07e5:  mov    %ebx,%eax
0827e6c5 +0x07e7:  add    $0x24,%esp
0827e6c8 +0x07ea:  pop    %ebx
0827e6c9 +0x07eb:  pop    %ebp
0827e6ca +0x07ec:  ret    $0x4
0827e6cd +0x07ef:  push   %ebp
0827e6ce +0x07f0:  mov    %esp,%ebp
0827e6d0 +0x07f2:  push   %ebx
0827e6d1 +0x07f3:  sub    $0x14,%esp
0827e6d4 +0x07f6:  mov    0x8(%ebp),%eax
0827e6d7 +0x07f9:  mov    %eax,(%esp)
0827e6da +0x07fc:  call   0827ed0c <+0xe2e>
0827e6df +0x0801:  mov    (%eax),%ebx
0827e6e1 +0x0803:  mov    0xc(%ebp),%eax
0827e6e4 +0x0806:  mov    %eax,(%esp)
0827e6e7 +0x0809:  call   0827ed0c <+0xe2e>
0827e6ec +0x080e:  mov    (%eax),%eax
0827e6ee +0x0810:  cmp    %eax,%ebx
0827e6f0 +0x0812:  sete   %al
0827e6f3 +0x0815:  add    $0x14,%esp
0827e6f6 +0x0818:  pop    %ebx
0827e6f7 +0x0819:  pop    %ebp
0827e6f8 +0x081a:  ret
0827e6f9 +0x081b:  nop
0827e6fa +0x081c:  push   %ebp
0827e6fb +0x081d:  mov    %esp,%ebp
0827e6fd +0x081f:  sub    $0x18,%esp
0827e700 +0x0822:  mov    0xc(%ebp),%eax
0827e703 +0x0825:  mov    %eax,0x4(%esp)
0827e707 +0x0829:  movl   $0x8,(%esp)
0827e70e +0x0830:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0827e713 +0x0835:  mov    %eax,%edx
0827e715 +0x0837:  test   %edx,%edx
0827e717 +0x0839:  je     0827e728 <+0x84a>
0827e719 +0x083b:  mov    %eax,%ecx
0827e71b +0x083d:  mov    0x10(%ebp),%eax
0827e71e +0x0840:  mov    0x4(%eax),%edx
0827e721 +0x0843:  mov    (%eax),%eax
0827e723 +0x0845:  mov    %eax,(%ecx)
0827e725 +0x0847:  mov    %edx,0x4(%ecx)
0827e728 +0x084a:  leave
0827e729 +0x084b:  ret
0827e72a +0x084c:  push   %ebp
0827e72b +0x084d:  mov    %esp,%ebp
0827e72d +0x084f:  push   %esi
0827e72e +0x0850:  push   %ebx
0827e72f +0x0851:  sub    $0x30,%esp
0827e732 +0x0854:  mov    0x8(%ebp),%eax
0827e735 +0x0857:  mov    0x4(%eax),%edx
0827e738 +0x085a:  mov    0x8(%ebp),%eax
0827e73b +0x085d:  mov    0x8(%eax),%eax
0827e73e +0x0860:  cmp    %eax,%edx
0827e740 +0x0862:  je     0827e7d5 <+0x8f7>
0827e746 +0x0868:  mov    0x8(%ebp),%eax
0827e749 +0x086b:  mov    0x4(%eax),%eax
0827e74c +0x086e:  sub    $0x8,%eax
0827e74f +0x0871:  mov    %eax,(%esp)
0827e752 +0x0874:  call   0827ed14 <+0xe36>
0827e757 +0x0879:  mov    0x8(%ebp),%edx
0827e75a +0x087c:  mov    0x4(%edx),%ecx
0827e75d +0x087f:  mov    0x8(%ebp),%edx
0827e760 +0x0882:  mov    %eax,0x8(%esp)
0827e764 +0x0886:  mov    %ecx,0x4(%esp)
0827e768 +0x088a:  mov    %edx,(%esp)
0827e76b +0x088d:  call   0827ed1c <+0xe3e>
0827e770 +0x0892:  mov    0x8(%ebp),%eax
0827e773 +0x0895:  mov    0x4(%eax),%eax
0827e776 +0x0898:  lea    0x8(%eax),%edx
0827e779 +0x089b:  mov    0x8(%ebp),%eax
0827e77c +0x089e:  mov    %edx,0x4(%eax)
0827e77f +0x08a1:  mov    0x8(%ebp),%eax
0827e782 +0x08a4:  mov    0x4(%eax),%eax
0827e785 +0x08a7:  lea    -0x8(%eax),%esi
0827e788 +0x08aa:  mov    0x8(%ebp),%eax
0827e78b +0x08ad:  mov    0x4(%eax),%eax
0827e78e +0x08b0:  lea    -0x10(%eax),%ebx
0827e791 +0x08b3:  lea    0xc(%ebp),%eax
0827e794 +0x08b6:  mov    %eax,(%esp)
0827e797 +0x08b9:  call   0827ea86 <+0xba8>
0827e79c +0x08be:  mov    (%eax),%eax
0827e79e +0x08c0:  mov    %esi,0x8(%esp)
0827e7a2 +0x08c4:  mov    %ebx,0x4(%esp)
0827e7a6 +0x08c8:  mov    %eax,(%esp)
0827e7a9 +0x08cb:  call   0827ed5b <+0xe7d>
0827e7ae +0x08d0:  lea    0xc(%ebp),%eax
0827e7b1 +0x08d3:  mov    %eax,(%esp)
0827e7b4 +0x08d6:  call   0827ed9c <+0xebe>
0827e7b9 +0x08db:  mov    %eax,%ebx
0827e7bb +0x08dd:  mov    0x10(%ebp),%eax
0827e7be +0x08e0:  mov    %eax,(%esp)
0827e7c1 +0x08e3:  call   0827ed93 <+0xeb5>
0827e7c6 +0x08e8:  mov    0x4(%eax),%edx
0827e7c9 +0x08eb:  mov    (%eax),%eax
0827e7cb +0x08ed:  mov    %eax,(%ebx)
0827e7cd +0x08ef:  mov    %edx,0x4(%ebx)
0827e7d0 +0x08f2:  jmp    0827e9d7 <+0xaf9>
0827e7d5 +0x08f7:  movl   $"vector::_M_insert_aux",0x8(%esp)
0827e7dd +0x08ff:  movl   $0x1,0x4(%esp)
0827e7e5 +0x0907:  mov    0x8(%ebp),%eax
0827e7e8 +0x090a:  mov    %eax,(%esp)
0827e7eb +0x090d:  call   0827eda6 <+0xec8>
0827e7f0 +0x0912:  mov    %eax,-0x18(%ebp)
0827e7f3 +0x0915:  lea    -0x1c(%ebp),%eax
0827e7f6 +0x0918:  mov    0x8(%ebp),%edx
0827e7f9 +0x091b:  mov    %edx,0x4(%esp)
0827e7fd +0x091f:  mov    %eax,(%esp)
0827e800 +0x0922:  call   0827e270 <+0x392>
0827e805 +0x0927:  sub    $0x4,%esp
0827e808 +0x092a:  lea    -0x1c(%ebp),%eax
0827e80b +0x092d:  mov    %eax,0x4(%esp)
0827e80f +0x0931:  lea    0xc(%ebp),%eax
0827e812 +0x0934:  mov    %eax,(%esp)
0827e815 +0x0937:  call   0827ee4b <+0xf6d>
0827e81a +0x093c:  mov    %eax,-0x14(%ebp)
0827e81d +0x093f:  mov    0x8(%ebp),%eax
0827e820 +0x0942:  mov    -0x18(%ebp),%edx
0827e823 +0x0945:  mov    %edx,0x4(%esp)
0827e827 +0x0949:  mov    %eax,(%esp)
0827e82a +0x094c:  call   0827ec9c <+0xdbe>
0827e82f +0x0951:  mov    %eax,-0x10(%ebp)
0827e832 +0x0954:  mov    -0x10(%ebp),%eax
0827e835 +0x0957:  mov    %eax,-0xc(%ebp)
0827e838 +0x095a:  mov    0x10(%ebp),%eax
0827e83b +0x095d:  mov    %eax,(%esp)
0827e83e +0x0960:  call   0827ed93 <+0xeb5>
0827e843 +0x0965:  mov    -0x14(%ebp),%edx
0827e846 +0x0968:  shl    $0x3,%edx
0827e849 +0x096b:  mov    %edx,%ecx
0827e84b +0x096d:  add    -0x10(%ebp),%ecx
0827e84e +0x0970:  mov    0x8(%ebp),%edx
0827e851 +0x0973:  mov    %eax,0x8(%esp)
0827e855 +0x0977:  mov    %ecx,0x4(%esp)
0827e859 +0x097b:  mov    %edx,(%esp)
0827e85c +0x097e:  call   0827e6fa <+0x81c>
0827e861 +0x0983:  movl   $0x0,-0xc(%ebp)
0827e868 +0x098a:  mov    0x8(%ebp),%eax
0827e86b +0x098d:  mov    %eax,(%esp)
0827e86e +0x0990:  call   0827e4f6 <+0x618>
0827e873 +0x0995:  mov    %eax,%ebx
0827e875 +0x0997:  lea    0xc(%ebp),%eax
0827e878 +0x099a:  mov    %eax,(%esp)
0827e87b +0x099d:  call   0827ea86 <+0xba8>
0827e880 +0x09a2:  mov    (%eax),%edx
0827e882 +0x09a4:  mov    0x8(%ebp),%eax
0827e885 +0x09a7:  mov    (%eax),%eax
0827e887 +0x09a9:  mov    %ebx,0xc(%esp)
0827e88b +0x09ad:  mov    -0x10(%ebp),%ecx
0827e88e +0x09b0:  mov    %ecx,0x8(%esp)
0827e892 +0x09b4:  mov    %edx,0x4(%esp)
0827e896 +0x09b8:  mov    %eax,(%esp)
0827e899 +0x09bb:  call   0827ee7d <+0xf9f>
0827e89e +0x09c0:  mov    %eax,-0xc(%ebp)
0827e8a1 +0x09c3:  addl   $0x8,-0xc(%ebp)
0827e8a5 +0x09c7:  mov    0x8(%ebp),%eax
0827e8a8 +0x09ca:  mov    %eax,(%esp)
0827e8ab +0x09cd:  call   0827e4f6 <+0x618>
0827e8b0 +0x09d2:  mov    %eax,%ebx
0827e8b2 +0x09d4:  mov    0x8(%ebp),%eax
0827e8b5 +0x09d7:  mov    0x4(%eax),%esi
0827e8b8 +0x09da:  lea    0xc(%ebp),%eax
0827e8bb +0x09dd:  mov    %eax,(%esp)
0827e8be +0x09e0:  call   0827ea86 <+0xba8>
0827e8c3 +0x09e5:  mov    (%eax),%eax
0827e8c5 +0x09e7:  mov    %ebx,0xc(%esp)
0827e8c9 +0x09eb:  mov    -0xc(%ebp),%edx
0827e8cc +0x09ee:  mov    %edx,0x8(%esp)
0827e8d0 +0x09f2:  mov    %esi,0x4(%esp)
0827e8d4 +0x09f6:  mov    %eax,(%esp)
0827e8d7 +0x09f9:  call   0827ee7d <+0xf9f>
0827e8dc +0x09fe:  mov    %eax,-0xc(%ebp)
0827e8df +0x0a01:  mov    0x8(%ebp),%eax
0827e8e2 +0x0a04:  mov    %eax,(%esp)
0827e8e5 +0x0a07:  call   0827e4f6 <+0x618>
0827e8ea +0x0a0c:  mov    0x8(%ebp),%edx
0827e8ed +0x0a0f:  mov    0x4(%edx),%ecx
0827e8f0 +0x0a12:  mov    0x8(%ebp),%edx
0827e8f3 +0x0a15:  mov    (%edx),%edx
0827e8f5 +0x0a17:  mov    %eax,0x8(%esp)
0827e8f9 +0x0a1b:  mov    %ecx,0x4(%esp)
0827e8fd +0x0a1f:  mov    %edx,(%esp)
0827e900 +0x0a22:  call   0827e4fe <+0x620>
0827e905 +0x0a27:  mov    0x8(%ebp),%eax
0827e908 +0x0a2a:  mov    0x8(%eax),%eax
0827e90b +0x0a2d:  mov    %eax,%edx
0827e90d +0x0a2f:  mov    0x8(%ebp),%eax
0827e910 +0x0a32:  mov    (%eax),%eax
0827e912 +0x0a34:  mov    %edx,%ecx
0827e914 +0x0a36:  sub    %eax,%ecx
0827e916 +0x0a38:  mov    %ecx,%eax
0827e918 +0x0a3a:  sar    $0x3,%eax
0827e91b +0x0a3d:  mov    %eax,%ecx
0827e91d +0x0a3f:  mov    0x8(%ebp),%eax
0827e920 +0x0a42:  mov    (%eax),%edx
0827e922 +0x0a44:  mov    0x8(%ebp),%eax
0827e925 +0x0a47:  mov    %ecx,0x8(%esp)
0827e929 +0x0a4b:  mov    %edx,0x4(%esp)
0827e92d +0x0a4f:  mov    %eax,(%esp)
0827e930 +0x0a52:  call   0827ec22 <+0xd44>
0827e935 +0x0a57:  mov    0x8(%ebp),%eax
0827e938 +0x0a5a:  mov    -0x10(%ebp),%edx
0827e93b +0x0a5d:  mov    %edx,(%eax)
0827e93d +0x0a5f:  mov    0x8(%ebp),%eax
0827e940 +0x0a62:  mov    -0xc(%ebp),%edx
0827e943 +0x0a65:  mov    %edx,0x4(%eax)
0827e946 +0x0a68:  mov    -0x18(%ebp),%eax
0827e949 +0x0a6b:  shl    $0x3,%eax
0827e94c +0x0a6e:  mov    %eax,%edx
0827e94e +0x0a70:  add    -0x10(%ebp),%edx
0827e951 +0x0a73:  mov    0x8(%ebp),%eax
0827e954 +0x0a76:  mov    %edx,0x8(%eax)
0827e957 +0x0a79:  jmp    0827e9d7 <+0xaf9>
0827e959 +0x0a7b:  mov    %eax,(%esp)
0827e95c +0x0a7e:  call   08725ce0 <__cxa_begin_catch>
0827e961 +0x0a83:  cmpl   $0x0,-0xc(%ebp)
0827e965 +0x0a87:  jne    0827e983 <+0xaa5>
0827e967 +0x0a89:  mov    -0x14(%ebp),%eax
0827e96a +0x0a8c:  shl    $0x3,%eax
0827e96d +0x0a8f:  mov    %eax,%edx
0827e96f +0x0a91:  add    -0x10(%ebp),%edx
0827e972 +0x0a94:  mov    0x8(%ebp),%eax
0827e975 +0x0a97:  mov    %edx,0x4(%esp)
0827e979 +0x0a9b:  mov    %eax,(%esp)
0827e97c +0x0a9e:  call   0827eed6 <+0xff8>
0827e981 +0x0aa3:  jmp    0827e9a4 <+0xac6>
0827e983 +0x0aa5:  mov    0x8(%ebp),%eax
0827e986 +0x0aa8:  mov    %eax,(%esp)
0827e989 +0x0aab:  call   0827e4f6 <+0x618>
0827e98e +0x0ab0:  mov    %eax,0x8(%esp)
0827e992 +0x0ab4:  mov    -0xc(%ebp),%eax
0827e995 +0x0ab7:  mov    %eax,0x4(%esp)
0827e999 +0x0abb:  mov    -0x10(%ebp),%eax
0827e99c +0x0abe:  mov    %eax,(%esp)
0827e99f +0x0ac1:  call   0827e4fe <+0x620>
0827e9a4 +0x0ac6:  mov    0x8(%ebp),%eax
0827e9a7 +0x0ac9:  mov    -0x18(%ebp),%edx
0827e9aa +0x0acc:  mov    %edx,0x8(%esp)
0827e9ae +0x0ad0:  mov    -0x10(%ebp),%edx
0827e9b1 +0x0ad3:  mov    %edx,0x4(%esp)
0827e9b5 +0x0ad7:  mov    %eax,(%esp)
0827e9b8 +0x0ada:  call   0827ec22 <+0xd44>
0827e9bd +0x0adf:  call   08724be0 <__cxa_rethrow>
0827e9c2 +0x0ae4:  mov    %edx,%ebx
0827e9c4 +0x0ae6:  mov    %eax,%esi
0827e9c6 +0x0ae8:  call   08725c30 <__cxa_end_catch>
0827e9cb +0x0aed:  mov    %esi,%eax
0827e9cd +0x0aef:  mov    %ebx,%edx
0827e9cf +0x0af1:  mov    %eax,(%esp)
0827e9d2 +0x0af4:  call   08ae3750 <_Unwind_Resume>
0827e9d7 +0x0af9:  lea    -0x8(%ebp),%esp
0827e9da +0x0afc:  add    $0x0,%esp
0827e9dd +0x0aff:  pop    %ebx
0827e9de +0x0b00:  pop    %esi
0827e9df +0x0b01:  pop    %ebp
0827e9e0 +0x0b02:  ret
0827e9e1 +0x0b03:  nop
0827e9e2 +0x0b04:  push   %ebp
0827e9e3 +0x0b05:  mov    %esp,%ebp
0827e9e5 +0x0b07:  push   %ebx
0827e9e6 +0x0b08:  sub    $0x24,%esp
0827e9e9 +0x0b0b:  mov    0x8(%ebp),%ebx
0827e9ec +0x0b0e:  mov    0xc(%ebp),%eax
0827e9ef +0x0b11:  mov    (%eax),%edx
0827e9f1 +0x0b13:  mov    0x10(%ebp),%eax
0827e9f4 +0x0b16:  mov    (%eax),%eax
0827e9f6 +0x0b18:  shl    $0x3,%eax
0827e9f9 +0x0b1b:  lea    (%edx,%eax,1),%eax
0827e9fc +0x0b1e:  mov    %eax,-0xc(%ebp)
0827e9ff +0x0b21:  lea    -0xc(%ebp),%eax
0827ea02 +0x0b24:  mov    %eax,0x4(%esp)
0827ea06 +0x0b28:  mov    %ebx,(%esp)
0827ea09 +0x0b2b:  call   0817ae90 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf0e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf0e
0827ea0e +0x0b30:  mov    %ebx,%eax
0827ea10 +0x0b32:  add    $0x24,%esp
0827ea13 +0x0b35:  pop    %ebx
0827ea14 +0x0b36:  pop    %ebp
0827ea15 +0x0b37:  ret    $0x4
0827ea18 +0x0b3a:  push   %ebp
0827ea19 +0x0b3b:  mov    %esp,%ebp
0827ea1b +0x0b3d:  push   %ebx
0827ea1c +0x0b3e:  sub    $0x24,%esp
0827ea1f +0x0b41:  mov    0x8(%ebp),%ebx
0827ea22 +0x0b44:  lea    -0x10(%ebp),%eax
0827ea25 +0x0b47:  mov    0x10(%ebp),%edx
0827ea28 +0x0b4a:  mov    %edx,0x4(%esp)
0827ea2c +0x0b4e:  mov    %eax,(%esp)
0827ea2f +0x0b51:  call   0827eee9 <+0x100b>
0827ea34 +0x0b56:  sub    $0x4,%esp
0827ea37 +0x0b59:  lea    -0xc(%ebp),%eax
0827ea3a +0x0b5c:  mov    0xc(%ebp),%edx
0827ea3d +0x0b5f:  mov    %edx,0x4(%esp)
0827ea41 +0x0b63:  mov    %eax,(%esp)
0827ea44 +0x0b66:  call   0827eee9 <+0x100b>
0827ea49 +0x0b6b:  sub    $0x4,%esp
0827ea4c +0x0b6e:  mov    0x14(%ebp),%eax
0827ea4f +0x0b71:  mov    %eax,0xc(%esp)
0827ea53 +0x0b75:  mov    -0x10(%ebp),%eax
0827ea56 +0x0b78:  mov    %eax,0x8(%esp)
0827ea5a +0x0b7c:  mov    -0xc(%ebp),%eax
0827ea5d +0x0b7f:  mov    %eax,0x4(%esp)
0827ea61 +0x0b83:  mov    %ebx,(%esp)
0827ea64 +0x0b86:  call   0827eef8 <+0x101a>
0827ea69 +0x0b8b:  sub    $0x4,%esp
0827ea6c +0x0b8e:  mov    %ebx,%eax
0827ea6e +0x0b90:  mov    -0x4(%ebp),%ebx
0827ea71 +0x0b93:  leave
0827ea72 +0x0b94:  ret    $0x4
0827ea75 +0x0b97:  nop
0827ea76 +0x0b98:  push   %ebp
0827ea77 +0x0b99:  mov    %esp,%ebp
0827ea79 +0x0b9b:  mov    0xc(%ebp),%eax
0827ea7c +0x0b9e:  mov    (%eax),%edx
0827ea7e +0x0ba0:  mov    0x8(%ebp),%eax
0827ea81 +0x0ba3:  mov    %edx,(%eax)
0827ea83 +0x0ba5:  pop    %ebp
0827ea84 +0x0ba6:  ret
0827ea85 +0x0ba7:  nop
0827ea86 +0x0ba8:  push   %ebp
0827ea87 +0x0ba9:  mov    %esp,%ebp
0827ea89 +0x0bab:  mov    0x8(%ebp),%eax
0827ea8c +0x0bae:  pop    %ebp
0827ea8d +0x0baf:  ret
0827ea8e +0x0bb0:  push   %ebp
0827ea8f +0x0bb1:  mov    %esp,%ebp
0827ea91 +0x0bb3:  mov    0x8(%ebp),%eax
0827ea94 +0x0bb6:  pop    %ebp
0827ea95 +0x0bb7:  ret
0827ea96 +0x0bb8:  push   %ebp
0827ea97 +0x0bb9:  mov    %esp,%ebp
0827ea99 +0x0bbb:  push   %ebx
0827ea9a +0x0bbc:  sub    $0x24,%esp
0827ea9d +0x0bbf:  mov    0x8(%ebp),%ebx
0827eaa0 +0x0bc2:  mov    0xc(%ebp),%eax
0827eaa3 +0x0bc5:  mov    (%eax),%edx
0827eaa5 +0x0bc7:  mov    0x10(%ebp),%eax
0827eaa8 +0x0bca:  mov    (%eax),%eax
0827eaaa +0x0bcc:  shl    $0x3,%eax
0827eaad +0x0bcf:  lea    (%edx,%eax,1),%eax
0827eab0 +0x0bd2:  mov    %eax,-0xc(%ebp)
0827eab3 +0x0bd5:  lea    -0xc(%ebp),%eax
0827eab6 +0x0bd8:  mov    %eax,0x4(%esp)
0827eaba +0x0bdc:  mov    %ebx,(%esp)
0827eabd +0x0bdf:  call   080dd858 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3a1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3a1
0827eac2 +0x0be4:  mov    %ebx,%eax
0827eac4 +0x0be6:  add    $0x24,%esp
0827eac7 +0x0be9:  pop    %ebx
0827eac8 +0x0bea:  pop    %ebp
0827eac9 +0x0beb:  ret    $0x4
0827eacc +0x0bee:  push   %ebp
0827eacd +0x0bef:  mov    %esp,%ebp
0827eacf +0x0bf1:  push   %ebx
0827ead0 +0x0bf2:  sub    $0x24,%esp
0827ead3 +0x0bf5:  mov    0x8(%ebp),%ebx
0827ead6 +0x0bf8:  lea    -0x10(%ebp),%eax
0827ead9 +0x0bfb:  mov    0x10(%ebp),%edx
0827eadc +0x0bfe:  mov    %edx,0x4(%esp)
0827eae0 +0x0c02:  mov    %eax,(%esp)
0827eae3 +0x0c05:  call   0827ef57 <+0x1079>
0827eae8 +0x0c0a:  sub    $0x4,%esp
0827eaeb +0x0c0d:  lea    -0xc(%ebp),%eax
0827eaee +0x0c10:  mov    0xc(%ebp),%edx
0827eaf1 +0x0c13:  mov    %edx,0x4(%esp)
0827eaf5 +0x0c17:  mov    %eax,(%esp)
0827eaf8 +0x0c1a:  call   0827ef57 <+0x1079>
0827eafd +0x0c1f:  sub    $0x4,%esp
0827eb00 +0x0c22:  mov    0x14(%ebp),%eax
0827eb03 +0x0c25:  mov    %eax,0xc(%esp)
0827eb07 +0x0c29:  mov    -0x10(%ebp),%eax
0827eb0a +0x0c2c:  mov    %eax,0x8(%esp)
0827eb0e +0x0c30:  mov    -0xc(%ebp),%eax
0827eb11 +0x0c33:  mov    %eax,0x4(%esp)
0827eb15 +0x0c37:  mov    %ebx,(%esp)
0827eb18 +0x0c3a:  call   0827ef66 <+0x1088>
0827eb1d +0x0c3f:  sub    $0x4,%esp
0827eb20 +0x0c42:  mov    %ebx,%eax
0827eb22 +0x0c44:  mov    -0x4(%ebp),%ebx
0827eb25 +0x0c47:  leave
0827eb26 +0x0c48:  ret    $0x4
0827eb29 +0x0c4b:  nop
0827eb2a +0x0c4c:  push   %ebp
0827eb2b +0x0c4d:  mov    %esp,%ebp
0827eb2d +0x0c4f:  push   %esi
0827eb2e +0x0c50:  push   %ebx
0827eb2f +0x0c51:  sub    $0x30,%esp
0827eb32 +0x0c54:  mov    0x8(%ebp),%ebx
0827eb35 +0x0c57:  mov    0xc(%ebp),%eax
0827eb38 +0x0c5a:  mov    %eax,(%esp)
0827eb3b +0x0c5d:  call   0827efd2 <+0x10f4>
0827eb40 +0x0c62:  mov    %eax,%esi
0827eb42 +0x0c64:  mov    0xc(%ebp),%eax
0827eb45 +0x0c67:  mov    %eax,(%esp)
0827eb48 +0x0c6a:  call   0827efc6 <+0x10e8>
0827eb4d +0x0c6f:  lea    -0x10(%ebp),%edx
0827eb50 +0x0c72:  mov    0x10(%ebp),%ecx
0827eb53 +0x0c75:  mov    %ecx,0x10(%esp)
0827eb57 +0x0c79:  mov    %esi,0xc(%esp)
0827eb5b +0x0c7d:  mov    %eax,0x8(%esp)
0827eb5f +0x0c81:  mov    0xc(%ebp),%eax
0827eb62 +0x0c84:  mov    %eax,0x4(%esp)
0827eb66 +0x0c88:  mov    %edx,(%esp)
0827eb69 +0x0c8b:  call   0827efde <+0x1100>
0827eb6e +0x0c90:  sub    $0x4,%esp
0827eb71 +0x0c93:  lea    -0xc(%ebp),%eax
0827eb74 +0x0c96:  mov    0xc(%ebp),%edx
0827eb77 +0x0c99:  mov    %edx,0x4(%esp)
0827eb7b +0x0c9d:  mov    %eax,(%esp)
0827eb7e +0x0ca0:  call   0827ebe8 <+0xd0a>
0827eb83 +0x0ca5:  sub    $0x4,%esp
0827eb86 +0x0ca8:  lea    -0xc(%ebp),%eax
0827eb89 +0x0cab:  mov    %eax,0x4(%esp)
0827eb8d +0x0caf:  lea    -0x10(%ebp),%eax
0827eb90 +0x0cb2:  mov    %eax,(%esp)
0827eb93 +0x0cb5:  call   0827e458 <+0x57a>
0827eb98 +0x0cba:  test   %al,%al
0827eb9a +0x0cbc:  jne    0827ebc1 <+0xce3>
0827eb9c +0x0cbe:  mov    -0x10(%ebp),%eax
0827eb9f +0x0cc1:  mov    %eax,(%esp)
0827eba2 +0x0cc4:  call   0827f05a <+0x117c>
0827eba7 +0x0cc9:  mov    0xc(%ebp),%edx
0827ebaa +0x0ccc:  mov    %eax,0x8(%esp)
0827ebae +0x0cd0:  mov    0x10(%ebp),%eax
0827ebb1 +0x0cd3:  mov    %eax,0x4(%esp)
0827ebb5 +0x0cd7:  mov    %edx,(%esp)
0827ebb8 +0x0cda:  call   080f5b18 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xac9>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xac9
0827ebbd +0x0cdf:  test   %al,%al
0827ebbf +0x0ce1:  je     0827ebd5 <+0xcf7>
0827ebc1 +0x0ce3:  mov    0xc(%ebp),%eax
0827ebc4 +0x0ce6:  mov    %eax,0x4(%esp)
0827ebc8 +0x0cea:  mov    %ebx,(%esp)
0827ebcb +0x0ced:  call   0827ebe8 <+0xd0a>
0827ebd0 +0x0cf2:  sub    $0x4,%esp
0827ebd3 +0x0cf5:  jmp    0827ebda <+0xcfc>
0827ebd5 +0x0cf7:  mov    -0x10(%ebp),%eax
0827ebd8 +0x0cfa:  mov    %eax,(%ebx)
0827ebda +0x0cfc:  mov    %ebx,%eax
0827ebdc +0x0cfe:  lea    -0x8(%ebp),%esp
0827ebdf +0x0d01:  add    $0x0,%esp
0827ebe2 +0x0d04:  pop    %ebx
0827ebe3 +0x0d05:  pop    %esi
0827ebe4 +0x0d06:  pop    %ebp
0827ebe5 +0x0d07:  ret    $0x4
0827ebe8 +0x0d0a:  push   %ebp
0827ebe9 +0x0d0b:  mov    %esp,%ebp
0827ebeb +0x0d0d:  push   %ebx
0827ebec +0x0d0e:  sub    $0x14,%esp
0827ebef +0x0d11:  mov    0x8(%ebp),%ebx
0827ebf2 +0x0d14:  mov    0xc(%ebp),%eax
0827ebf5 +0x0d17:  add    $0x4,%eax
0827ebf8 +0x0d1a:  mov    %eax,0x4(%esp)
0827ebfc +0x0d1e:  mov    %ebx,(%esp)
0827ebff +0x0d21:  call   0827f07c <+0x119e>
0827ec04 +0x0d26:  mov    %ebx,%eax
0827ec06 +0x0d28:  add    $0x14,%esp
0827ec09 +0x0d2b:  pop    %ebx
0827ec0a +0x0d2c:  pop    %ebp
0827ec0b +0x0d2d:  ret    $0x4
0827ec0e +0x0d30:  push   %ebp
0827ec0f +0x0d31:  mov    %esp,%ebp
0827ec11 +0x0d33:  sub    $0x18,%esp
0827ec14 +0x0d36:  mov    0x8(%ebp),%eax
0827ec17 +0x0d39:  mov    %eax,(%esp)
0827ec1a +0x0d3c:  call   0827f09e <+0x11c0>
0827ec1f +0x0d41:  leave
0827ec20 +0x0d42:  ret
0827ec21 +0x0d43:  nop
0827ec22 +0x0d44:  push   %ebp
0827ec23 +0x0d45:  mov    %esp,%ebp
0827ec25 +0x0d47:  sub    $0x18,%esp
0827ec28 +0x0d4a:  cmpl   $0x0,0xc(%ebp)
0827ec2c +0x0d4e:  je     0827ec47 <+0xd69>
0827ec2e +0x0d50:  mov    0x8(%ebp),%eax
0827ec31 +0x0d53:  mov    0x10(%ebp),%edx
0827ec34 +0x0d56:  mov    %edx,0x8(%esp)
0827ec38 +0x0d5a:  mov    0xc(%ebp),%edx
0827ec3b +0x0d5d:  mov    %edx,0x4(%esp)
0827ec3f +0x0d61:  mov    %eax,(%esp)
0827ec42 +0x0d64:  call   0827f0a4 <+0x11c6>
0827ec47 +0x0d69:  leave
0827ec48 +0x0d6a:  ret
0827ec49 +0x0d6b:  push   %ebp
0827ec4a +0x0d6c:  mov    %esp,%ebp
0827ec4c +0x0d6e:  sub    $0x18,%esp
0827ec4f +0x0d71:  mov    0xc(%ebp),%eax
0827ec52 +0x0d74:  mov    %eax,0x4(%esp)
0827ec56 +0x0d78:  mov    0x8(%ebp),%eax
0827ec59 +0x0d7b:  mov    %eax,(%esp)
0827ec5c +0x0d7e:  call   0827f0b7 <+0x11d9>
0827ec61 +0x0d83:  leave
0827ec62 +0x0d84:  ret
0827ec63 +0x0d85:  nop
0827ec64 +0x0d86:  push   %ebp
0827ec65 +0x0d87:  mov    %esp,%ebp
0827ec67 +0x0d89:  sub    $0x18,%esp
0827ec6a +0x0d8c:  mov    0x8(%ebp),%eax
0827ec6d +0x0d8f:  mov    0xc(%ebp),%edx
0827ec70 +0x0d92:  mov    %edx,0x4(%esp)
0827ec74 +0x0d96:  mov    %eax,(%esp)
0827ec77 +0x0d99:  call   0827f0bc <+0x11de>
0827ec7c +0x0d9e:  mov    0x8(%ebp),%eax
0827ec7f +0x0da1:  movl   $0x0,(%eax)
0827ec85 +0x0da7:  mov    0x8(%ebp),%eax
0827ec88 +0x0daa:  movl   $0x0,0x4(%eax)
0827ec8f +0x0db1:  mov    0x8(%ebp),%eax
0827ec92 +0x0db4:  movl   $0x0,0x8(%eax)
0827ec99 +0x0dbb:  leave
0827ec9a +0x0dbc:  ret
0827ec9b +0x0dbd:  nop
0827ec9c +0x0dbe:  push   %ebp
0827ec9d +0x0dbf:  mov    %esp,%ebp
0827ec9f +0x0dc1:  sub    $0x18,%esp
0827eca2 +0x0dc4:  cmpl   $0x0,0xc(%ebp)
0827eca6 +0x0dc8:  je     0827ecc4 <+0xde6>
0827eca8 +0x0dca:  mov    0x8(%ebp),%eax
0827ecab +0x0dcd:  movl   $0x0,0x8(%esp)
0827ecb3 +0x0dd5:  mov    0xc(%ebp),%edx
0827ecb6 +0x0dd8:  mov    %edx,0x4(%esp)
0827ecba +0x0ddc:  mov    %eax,(%esp)
0827ecbd +0x0ddf:  call   0827f0d6 <+0x11f8>
0827ecc2 +0x0de4:  jmp    0827ecc9 <+0xdeb>
0827ecc4 +0x0de6:  mov    $0x0,%eax
0827ecc9 +0x0deb:  leave
0827ecca +0x0dec:  ret
0827eccb +0x0ded:  nop
0827eccc +0x0dee:  push   %ebp
0827eccd +0x0def:  mov    %esp,%ebp
0827eccf +0x0df1:  mov    0xc(%ebp),%eax
0827ecd2 +0x0df4:  mov    (%eax),%edx
0827ecd4 +0x0df6:  mov    0x8(%ebp),%eax
0827ecd7 +0x0df9:  mov    %edx,(%eax)
0827ecd9 +0x0dfb:  pop    %ebp
0827ecda +0x0dfc:  ret
0827ecdb +0x0dfd:  push   %ebp
0827ecdc +0x0dfe:  mov    %esp,%ebp
0827ecde +0x0e00:  sub    $0x18,%esp
0827ece1 +0x0e03:  mov    0x10(%ebp),%eax
0827ece4 +0x0e06:  mov    %eax,0x8(%esp)
0827ece8 +0x0e0a:  mov    0xc(%ebp),%eax
0827eceb +0x0e0d:  mov    %eax,0x4(%esp)
0827ecef +0x0e11:  mov    0x8(%ebp),%eax
0827ecf2 +0x0e14:  mov    %eax,(%esp)
0827ecf5 +0x0e17:  call   0827f10e <+0x1230>
0827ecfa +0x0e1c:  leave
0827ecfb +0x0e1d:  ret
0827ecfc +0x0e1e:  push   %ebp
0827ecfd +0x0e1f:  mov    %esp,%ebp
0827ecff +0x0e21:  mov    0xc(%ebp),%eax
0827ed02 +0x0e24:  mov    (%eax),%edx
0827ed04 +0x0e26:  mov    0x8(%ebp),%eax
0827ed07 +0x0e29:  mov    %edx,(%eax)
0827ed09 +0x0e2b:  pop    %ebp
0827ed0a +0x0e2c:  ret
0827ed0b +0x0e2d:  nop
0827ed0c +0x0e2e:  push   %ebp
0827ed0d +0x0e2f:  mov    %esp,%ebp
0827ed0f +0x0e31:  mov    0x8(%ebp),%eax
0827ed12 +0x0e34:  pop    %ebp
0827ed13 +0x0e35:  ret
0827ed14 +0x0e36:  push   %ebp
0827ed15 +0x0e37:  mov    %esp,%ebp
0827ed17 +0x0e39:  mov    0x8(%ebp),%eax
0827ed1a +0x0e3c:  pop    %ebp
0827ed1b +0x0e3d:  ret
0827ed1c +0x0e3e:  push   %ebp
0827ed1d +0x0e3f:  mov    %esp,%ebp
0827ed1f +0x0e41:  push   %ebx
0827ed20 +0x0e42:  sub    $0x14,%esp
0827ed23 +0x0e45:  mov    0x10(%ebp),%eax
0827ed26 +0x0e48:  mov    %eax,(%esp)
0827ed29 +0x0e4b:  call   0827f17d <+0x129f>
0827ed2e +0x0e50:  mov    %eax,%ebx
0827ed30 +0x0e52:  mov    0xc(%ebp),%eax
0827ed33 +0x0e55:  mov    %eax,0x4(%esp)
0827ed37 +0x0e59:  movl   $0x8,(%esp)
0827ed3e +0x0e60:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0827ed43 +0x0e65:  mov    %eax,%edx
0827ed45 +0x0e67:  test   %edx,%edx
0827ed47 +0x0e69:  je     0827ed55 <+0xe77>
0827ed49 +0x0e6b:  mov    %eax,%ecx
0827ed4b +0x0e6d:  mov    (%ebx),%eax
0827ed4d +0x0e6f:  mov    0x4(%ebx),%edx
0827ed50 +0x0e72:  mov    %eax,(%ecx)
0827ed52 +0x0e74:  mov    %edx,0x4(%ecx)
0827ed55 +0x0e77:  add    $0x14,%esp
0827ed58 +0x0e7a:  pop    %ebx
0827ed59 +0x0e7b:  pop    %ebp
0827ed5a +0x0e7c:  ret
0827ed5b +0x0e7d:  push   %ebp
0827ed5c +0x0e7e:  mov    %esp,%ebp
0827ed5e +0x0e80:  push   %ebx
0827ed5f +0x0e81:  sub    $0x14,%esp
0827ed62 +0x0e84:  mov    0xc(%ebp),%eax
0827ed65 +0x0e87:  mov    %eax,(%esp)
0827ed68 +0x0e8a:  call   0827f185 <+0x12a7>
0827ed6d +0x0e8f:  mov    %eax,%ebx
0827ed6f +0x0e91:  mov    0x8(%ebp),%eax
0827ed72 +0x0e94:  mov    %eax,(%esp)
0827ed75 +0x0e97:  call   0827f185 <+0x12a7>
0827ed7a +0x0e9c:  mov    0x10(%ebp),%edx
0827ed7d +0x0e9f:  mov    %edx,0x8(%esp)
0827ed81 +0x0ea3:  mov    %ebx,0x4(%esp)
0827ed85 +0x0ea7:  mov    %eax,(%esp)
0827ed88 +0x0eaa:  call   0827f18d <+0x12af>
0827ed8d +0x0eaf:  add    $0x14,%esp
0827ed90 +0x0eb2:  pop    %ebx
0827ed91 +0x0eb3:  pop    %ebp
0827ed92 +0x0eb4:  ret
0827ed93 +0x0eb5:  push   %ebp
0827ed94 +0x0eb6:  mov    %esp,%ebp
0827ed96 +0x0eb8:  mov    0x8(%ebp),%eax
0827ed99 +0x0ebb:  pop    %ebp
0827ed9a +0x0ebc:  ret
0827ed9b +0x0ebd:  nop
0827ed9c +0x0ebe:  push   %ebp
0827ed9d +0x0ebf:  mov    %esp,%ebp
0827ed9f +0x0ec1:  mov    0x8(%ebp),%eax
0827eda2 +0x0ec4:  mov    (%eax),%eax
0827eda4 +0x0ec6:  pop    %ebp
0827eda5 +0x0ec7:  ret
0827eda6 +0x0ec8:  push   %ebp
0827eda7 +0x0ec9:  mov    %esp,%ebp
0827eda9 +0x0ecb:  push   %ebx
0827edaa +0x0ecc:  sub    $0x24,%esp
0827edad +0x0ecf:  mov    0x8(%ebp),%eax
0827edb0 +0x0ed2:  mov    %eax,(%esp)
0827edb3 +0x0ed5:  call   0827f1d2 <+0x12f4>
0827edb8 +0x0eda:  mov    %eax,%ebx
0827edba +0x0edc:  mov    0x8(%ebp),%eax
0827edbd +0x0edf:  mov    %eax,(%esp)
0827edc0 +0x0ee2:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
0827edc5 +0x0ee7:  mov    %ebx,%edx
0827edc7 +0x0ee9:  sub    %eax,%edx
0827edc9 +0x0eeb:  mov    0xc(%ebp),%eax
0827edcc +0x0eee:  cmp    %eax,%edx
0827edce +0x0ef0:  setb   %al
0827edd1 +0x0ef3:  test   %al,%al
0827edd3 +0x0ef5:  je     0827ede0 <+0xf02>
0827edd5 +0x0ef7:  mov    0x10(%ebp),%eax
0827edd8 +0x0efa:  mov    %eax,(%esp)
0827eddb +0x0efd:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0827ede0 +0x0f02:  mov    0x8(%ebp),%eax
0827ede3 +0x0f05:  mov    %eax,(%esp)
0827ede6 +0x0f08:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
0827edeb +0x0f0d:  mov    %eax,%ebx
0827eded +0x0f0f:  mov    0x8(%ebp),%eax
0827edf0 +0x0f12:  mov    %eax,(%esp)
0827edf3 +0x0f15:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
0827edf8 +0x0f1a:  mov    %eax,-0x10(%ebp)
0827edfb +0x0f1d:  lea    0xc(%ebp),%eax
0827edfe +0x0f20:  mov    %eax,0x4(%esp)
0827ee02 +0x0f24:  lea    -0x10(%ebp),%eax
0827ee05 +0x0f27:  mov    %eax,(%esp)
0827ee08 +0x0f2a:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0827ee0d +0x0f2f:  mov    (%eax),%eax
0827ee0f +0x0f31:  lea    (%ebx,%eax,1),%eax
0827ee12 +0x0f34:  mov    %eax,-0xc(%ebp)
0827ee15 +0x0f37:  mov    0x8(%ebp),%eax
0827ee18 +0x0f3a:  mov    %eax,(%esp)
0827ee1b +0x0f3d:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
0827ee20 +0x0f42:  cmp    -0xc(%ebp),%eax
0827ee23 +0x0f45:  ja     0827ee35 <+0xf57>
0827ee25 +0x0f47:  mov    0x8(%ebp),%eax
0827ee28 +0x0f4a:  mov    %eax,(%esp)
0827ee2b +0x0f4d:  call   0827f1d2 <+0x12f4>
0827ee30 +0x0f52:  cmp    -0xc(%ebp),%eax
0827ee33 +0x0f55:  jae    0827ee42 <+0xf64>
0827ee35 +0x0f57:  mov    0x8(%ebp),%eax
0827ee38 +0x0f5a:  mov    %eax,(%esp)
0827ee3b +0x0f5d:  call   0827f1d2 <+0x12f4>
0827ee40 +0x0f62:  jmp    0827ee45 <+0xf67>
0827ee42 +0x0f64:  mov    -0xc(%ebp),%eax
0827ee45 +0x0f67:  add    $0x24,%esp
0827ee48 +0x0f6a:  pop    %ebx
0827ee49 +0x0f6b:  pop    %ebp
0827ee4a +0x0f6c:  ret
0827ee4b +0x0f6d:  push   %ebp
0827ee4c +0x0f6e:  mov    %esp,%ebp
0827ee4e +0x0f70:  push   %ebx
0827ee4f +0x0f71:  sub    $0x14,%esp
0827ee52 +0x0f74:  mov    0x8(%ebp),%eax
0827ee55 +0x0f77:  mov    %eax,(%esp)
0827ee58 +0x0f7a:  call   0827ea86 <+0xba8>
0827ee5d +0x0f7f:  mov    (%eax),%eax
0827ee5f +0x0f81:  mov    %eax,%ebx
0827ee61 +0x0f83:  mov    0xc(%ebp),%eax
0827ee64 +0x0f86:  mov    %eax,(%esp)
0827ee67 +0x0f89:  call   0827ea86 <+0xba8>
0827ee6c +0x0f8e:  mov    (%eax),%eax
0827ee6e +0x0f90:  mov    %ebx,%edx
0827ee70 +0x0f92:  sub    %eax,%edx
0827ee72 +0x0f94:  mov    %edx,%eax
0827ee74 +0x0f96:  sar    $0x3,%eax
0827ee77 +0x0f99:  add    $0x14,%esp
0827ee7a +0x0f9c:  pop    %ebx
0827ee7b +0x0f9d:  pop    %ebp
0827ee7c +0x0f9e:  ret
0827ee7d +0x0f9f:  push   %ebp
0827ee7e +0x0fa0:  mov    %esp,%ebp
0827ee80 +0x0fa2:  sub    $0x28,%esp
0827ee83 +0x0fa5:  lea    -0x10(%ebp),%eax
0827ee86 +0x0fa8:  lea    0xc(%ebp),%edx
0827ee89 +0x0fab:  mov    %edx,0x4(%esp)
0827ee8d +0x0faf:  mov    %eax,(%esp)
0827ee90 +0x0fb2:  call   0827f1ed <+0x130f>
0827ee95 +0x0fb7:  sub    $0x4,%esp
0827ee98 +0x0fba:  lea    -0xc(%ebp),%eax
0827ee9b +0x0fbd:  lea    0x8(%ebp),%edx
0827ee9e +0x0fc0:  mov    %edx,0x4(%esp)
0827eea2 +0x0fc4:  mov    %eax,(%esp)
0827eea5 +0x0fc7:  call   0827f1ed <+0x130f>
0827eeaa +0x0fcc:  sub    $0x4,%esp
0827eead +0x0fcf:  mov    0x14(%ebp),%eax
0827eeb0 +0x0fd2:  mov    %eax,0xc(%esp)
0827eeb4 +0x0fd6:  mov    0x10(%ebp),%eax
0827eeb7 +0x0fd9:  mov    %eax,0x8(%esp)
0827eebb +0x0fdd:  mov    -0x10(%ebp),%eax
0827eebe +0x0fe0:  mov    %eax,0x4(%esp)
0827eec2 +0x0fe4:  mov    -0xc(%ebp),%eax
0827eec5 +0x0fe7:  mov    %eax,(%esp)
0827eec8 +0x0fea:  call   0827f212 <+0x1334>
0827eecd +0x0fef:  leave
0827eece +0x0ff0:  ret
0827eecf +0x0ff1:  nop
0827eed0 +0x0ff2:  push   %ebp
0827eed1 +0x0ff3:  mov    %esp,%ebp
0827eed3 +0x0ff5:  pop    %ebp
0827eed4 +0x0ff6:  ret
0827eed5 +0x0ff7:  nop
0827eed6 +0x0ff8:  push   %ebp
0827eed7 +0x0ff9:  mov    %esp,%ebp
0827eed9 +0x0ffb:  sub    $0x18,%esp
0827eedc +0x0ffe:  mov    0xc(%ebp),%eax
0827eedf +0x1001:  mov    %eax,(%esp)
0827eee2 +0x1004:  call   0827eed0 <+0xff2>
0827eee7 +0x1009:  leave
0827eee8 +0x100a:  ret
0827eee9 +0x100b:  push   %ebp
0827eeea +0x100c:  mov    %esp,%ebp
0827eeec +0x100e:  mov    0x8(%ebp),%eax
0827eeef +0x1011:  mov    0xc(%ebp),%edx
0827eef2 +0x1014:  mov    %edx,(%eax)
0827eef4 +0x1016:  pop    %ebp
0827eef5 +0x1017:  ret    $0x4
0827eef8 +0x101a:  push   %ebp
0827eef9 +0x101b:  mov    %esp,%ebp
0827eefb +0x101d:  push   %edi
0827eefc +0x101e:  push   %esi
0827eefd +0x101f:  push   %ebx
0827eefe +0x1020:  sub    $0x2c,%esp
0827ef01 +0x1023:  mov    0x8(%ebp),%edi
0827ef04 +0x1026:  mov    0x14(%ebp),%eax
0827ef07 +0x1029:  mov    %eax,(%esp)
0827ef0a +0x102c:  call   0827f233 <+0x1355>
0827ef0f +0x1031:  mov    %eax,%esi
0827ef11 +0x1033:  mov    0x10(%ebp),%eax
0827ef14 +0x1036:  mov    %eax,(%esp)
0827ef17 +0x1039:  call   0827f233 <+0x1355>
0827ef1c +0x103e:  mov    %eax,%ebx
0827ef1e +0x1040:  mov    0xc(%ebp),%eax
0827ef21 +0x1043:  mov    %eax,(%esp)
0827ef24 +0x1046:  call   0827f233 <+0x1355>
0827ef29 +0x104b:  mov    %esi,0x8(%esp)
0827ef2d +0x104f:  mov    %ebx,0x4(%esp)
0827ef31 +0x1053:  mov    %eax,(%esp)
0827ef34 +0x1056:  call   0817b3f6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1474>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1474
0827ef39 +0x105b:  mov    %eax,-0x1c(%ebp)
0827ef3c +0x105e:  lea    -0x1c(%ebp),%eax
0827ef3f +0x1061:  mov    %eax,0x4(%esp)
0827ef43 +0x1065:  mov    %edi,(%esp)
0827ef46 +0x1068:  call   0817ae90 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf0e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf0e
0827ef4b +0x106d:  mov    %edi,%eax
0827ef4d +0x106f:  add    $0x2c,%esp
0827ef50 +0x1072:  pop    %ebx
0827ef51 +0x1073:  pop    %esi
0827ef52 +0x1074:  pop    %edi
0827ef53 +0x1075:  pop    %ebp
0827ef54 +0x1076:  ret    $0x4
0827ef57 +0x1079:  push   %ebp
0827ef58 +0x107a:  mov    %esp,%ebp
0827ef5a +0x107c:  mov    0x8(%ebp),%eax
0827ef5d +0x107f:  mov    0xc(%ebp),%edx
0827ef60 +0x1082:  mov    %edx,(%eax)
0827ef62 +0x1084:  pop    %ebp
0827ef63 +0x1085:  ret    $0x4
0827ef66 +0x1088:  push   %ebp
0827ef67 +0x1089:  mov    %esp,%ebp
0827ef69 +0x108b:  push   %edi
0827ef6a +0x108c:  push   %esi
0827ef6b +0x108d:  push   %ebx
0827ef6c +0x108e:  sub    $0x2c,%esp
0827ef6f +0x1091:  mov    0x8(%ebp),%edi
0827ef72 +0x1094:  mov    0x14(%ebp),%eax
0827ef75 +0x1097:  mov    %eax,(%esp)
0827ef78 +0x109a:  call   0827f089 <+0x11ab>
0827ef7d +0x109f:  mov    %eax,%esi
0827ef7f +0x10a1:  mov    0x10(%ebp),%eax
0827ef82 +0x10a4:  mov    %eax,(%esp)
0827ef85 +0x10a7:  call   0827f089 <+0x11ab>
0827ef8a +0x10ac:  mov    %eax,%ebx
0827ef8c +0x10ae:  mov    0xc(%ebp),%eax
0827ef8f +0x10b1:  mov    %eax,(%esp)
0827ef92 +0x10b4:  call   0827f089 <+0x11ab>
0827ef97 +0x10b9:  mov    %esi,0x8(%esp)
0827ef9b +0x10bd:  mov    %ebx,0x4(%esp)
0827ef9f +0x10c1:  mov    %eax,(%esp)
0827efa2 +0x10c4:  call   0827f248 <+0x136a>
0827efa7 +0x10c9:  mov    %eax,-0x1c(%ebp)
0827efaa +0x10cc:  lea    -0x1c(%ebp),%eax
0827efad +0x10cf:  mov    %eax,0x4(%esp)
0827efb1 +0x10d3:  mov    %edi,(%esp)
0827efb4 +0x10d6:  call   080dd858 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3a1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3a1
0827efb9 +0x10db:  mov    %edi,%eax
0827efbb +0x10dd:  add    $0x2c,%esp
0827efbe +0x10e0:  pop    %ebx
0827efbf +0x10e1:  pop    %esi
0827efc0 +0x10e2:  pop    %edi
0827efc1 +0x10e3:  pop    %ebp
0827efc2 +0x10e4:  ret    $0x4
0827efc5 +0x10e7:  nop
0827efc6 +0x10e8:  push   %ebp
0827efc7 +0x10e9:  mov    %esp,%ebp
0827efc9 +0x10eb:  mov    0x8(%ebp),%eax
0827efcc +0x10ee:  mov    0x8(%eax),%eax
0827efcf +0x10f1:  pop    %ebp
0827efd0 +0x10f2:  ret
0827efd1 +0x10f3:  nop
0827efd2 +0x10f4:  push   %ebp
0827efd3 +0x10f5:  mov    %esp,%ebp
0827efd5 +0x10f7:  mov    0x8(%ebp),%eax
0827efd8 +0x10fa:  add    $0x4,%eax
0827efdb +0x10fd:  pop    %ebp
0827efdc +0x10fe:  ret
0827efdd +0x10ff:  nop
0827efde +0x1100:  push   %ebp
0827efdf +0x1101:  mov    %esp,%ebp
0827efe1 +0x1103:  push   %ebx
0827efe2 +0x1104:  sub    $0x14,%esp
0827efe5 +0x1107:  mov    0x8(%ebp),%ebx
0827efe8 +0x110a:  jmp    0827f036 <+0x1158>
0827efea +0x110c:  mov    0x10(%ebp),%eax
0827efed +0x110f:  mov    %eax,(%esp)
0827eff0 +0x1112:  call   0827f26d <+0x138f>
0827eff5 +0x1117:  mov    0xc(%ebp),%edx
0827eff8 +0x111a:  mov    0x18(%ebp),%ecx
0827effb +0x111d:  mov    %ecx,0x8(%esp)
0827efff +0x1121:  mov    %eax,0x4(%esp)
0827f003 +0x1125:  mov    %edx,(%esp)
0827f006 +0x1128:  call   080f5b18 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xac9>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xac9
0827f00b +0x112d:  xor    $0x1,%eax
0827f00e +0x1130:  test   %al,%al
0827f010 +0x1132:  je     0827f028 <+0x114a>
0827f012 +0x1134:  mov    0x10(%ebp),%eax
0827f015 +0x1137:  mov    %eax,0x14(%ebp)
0827f018 +0x113a:  mov    0x10(%ebp),%eax
0827f01b +0x113d:  mov    %eax,(%esp)
0827f01e +0x1140:  call   0827f28f <+0x13b1>
0827f023 +0x1145:  mov    %eax,0x10(%ebp)
0827f026 +0x1148:  jmp    0827f036 <+0x1158>
0827f028 +0x114a:  mov    0x10(%ebp),%eax
0827f02b +0x114d:  mov    %eax,(%esp)
0827f02e +0x1150:  call   0827f29a <+0x13bc>
0827f033 +0x1155:  mov    %eax,0x10(%ebp)
0827f036 +0x1158:  cmpl   $0x0,0x10(%ebp)
0827f03a +0x115c:  setne  %al
0827f03d +0x115f:  test   %al,%al
0827f03f +0x1161:  jne    0827efea <+0x110c>
0827f041 +0x1163:  mov    0x14(%ebp),%eax
0827f044 +0x1166:  mov    %eax,0x4(%esp)
0827f048 +0x116a:  mov    %ebx,(%esp)
0827f04b +0x116d:  call   0827f07c <+0x119e>
0827f050 +0x1172:  mov    %ebx,%eax
0827f052 +0x1174:  add    $0x14,%esp
0827f055 +0x1177:  pop    %ebx
0827f056 +0x1178:  pop    %ebp
0827f057 +0x1179:  ret    $0x4
0827f05a +0x117c:  push   %ebp
0827f05b +0x117d:  mov    %esp,%ebp
0827f05d +0x117f:  sub    $0x28,%esp
0827f060 +0x1182:  mov    0x8(%ebp),%eax
0827f063 +0x1185:  mov    %eax,(%esp)
0827f066 +0x1188:  call   0827f2a5 <+0x13c7>
0827f06b +0x118d:  mov    %eax,0x4(%esp)
0827f06f +0x1191:  lea    -0x9(%ebp),%eax
0827f072 +0x1194:  mov    %eax,(%esp)
0827f075 +0x1197:  call   0827f2b0 <+0x13d2>
0827f07a +0x119c:  leave
0827f07b +0x119d:  ret
0827f07c +0x119e:  push   %ebp
0827f07d +0x119f:  mov    %esp,%ebp
0827f07f +0x11a1:  mov    0xc(%ebp),%edx
0827f082 +0x11a4:  mov    0x8(%ebp),%eax
0827f085 +0x11a7:  mov    %edx,(%eax)
0827f087 +0x11a9:  pop    %ebp
0827f088 +0x11aa:  ret
0827f089 +0x11ab:  push   %ebp
0827f08a +0x11ac:  mov    %esp,%ebp
0827f08c +0x11ae:  sub    $0x18,%esp
0827f08f +0x11b1:  lea    0x8(%ebp),%eax
0827f092 +0x11b4:  mov    %eax,(%esp)
0827f095 +0x11b7:  call   080dd868 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3b1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3b1
0827f09a +0x11bc:  mov    (%eax),%eax
0827f09c +0x11be:  leave
0827f09d +0x11bf:  ret
0827f09e +0x11c0:  push   %ebp
0827f09f +0x11c1:  mov    %esp,%ebp
0827f0a1 +0x11c3:  pop    %ebp
0827f0a2 +0x11c4:  ret
0827f0a3 +0x11c5:  nop
0827f0a4 +0x11c6:  push   %ebp
0827f0a5 +0x11c7:  mov    %esp,%ebp
0827f0a7 +0x11c9:  sub    $0x18,%esp
0827f0aa +0x11cc:  mov    0xc(%ebp),%eax
0827f0ad +0x11cf:  mov    %eax,(%esp)
0827f0b0 +0x11d2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0827f0b5 +0x11d7:  leave
0827f0b6 +0x11d8:  ret
0827f0b7 +0x11d9:  push   %ebp
0827f0b8 +0x11da:  mov    %esp,%ebp
0827f0ba +0x11dc:  pop    %ebp
0827f0bb +0x11dd:  ret
0827f0bc +0x11de:  push   %ebp
0827f0bd +0x11df:  mov    %esp,%ebp
0827f0bf +0x11e1:  sub    $0x18,%esp
0827f0c2 +0x11e4:  mov    0xc(%ebp),%edx
0827f0c5 +0x11e7:  mov    0x8(%ebp),%eax
0827f0c8 +0x11ea:  mov    %edx,0x4(%esp)
0827f0cc +0x11ee:  mov    %eax,(%esp)
0827f0cf +0x11f1:  call   0827f2b8 <+0x13da>
0827f0d4 +0x11f6:  leave
0827f0d5 +0x11f7:  ret
0827f0d6 +0x11f8:  push   %ebp
0827f0d7 +0x11f9:  mov    %esp,%ebp
0827f0d9 +0x11fb:  sub    $0x18,%esp
0827f0dc +0x11fe:  mov    0x8(%ebp),%eax
0827f0df +0x1201:  mov    %eax,(%esp)
0827f0e2 +0x1204:  call   0827f2be <+0x13e0>
0827f0e7 +0x1209:  cmp    0xc(%ebp),%eax
0827f0ea +0x120c:  setb   %al
0827f0ed +0x120f:  movzbl %al,%eax
0827f0f0 +0x1212:  test   %eax,%eax
0827f0f2 +0x1214:  setne  %al
0827f0f5 +0x1217:  test   %al,%al
0827f0f7 +0x1219:  je     0827f0fe <+0x1220>
0827f0f9 +0x121b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0827f0fe +0x1220:  mov    0xc(%ebp),%eax
0827f101 +0x1223:  shl    $0x3,%eax
0827f104 +0x1226:  mov    %eax,(%esp)
0827f107 +0x1229:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0827f10c +0x122e:  leave
0827f10d +0x122f:  ret
0827f10e +0x1230:  push   %ebp
0827f10f +0x1231:  mov    %esp,%ebp
0827f111 +0x1233:  push   %ebx
0827f112 +0x1234:  sub    $0x24,%esp
0827f115 +0x1237:  mov    0x10(%ebp),%eax
0827f118 +0x123a:  mov    %eax,-0xc(%ebp)
0827f11b +0x123d:  jmp    0827f15e <+0x1280>
0827f11d +0x123f:  lea    0x8(%ebp),%eax
0827f120 +0x1242:  mov    %eax,(%esp)
0827f123 +0x1245:  call   0827f2c8 <+0x13ea>
0827f128 +0x124a:  mov    %eax,%ebx
0827f12a +0x124c:  mov    -0xc(%ebp),%eax
0827f12d +0x124f:  mov    %eax,0x4(%esp)
0827f131 +0x1253:  movl   $0x8,(%esp)
0827f138 +0x125a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0827f13d +0x125f:  mov    %eax,%edx
0827f13f +0x1261:  test   %edx,%edx
0827f141 +0x1263:  je     0827f14f <+0x1271>
0827f143 +0x1265:  mov    %eax,%ecx
0827f145 +0x1267:  mov    (%ebx),%eax
0827f147 +0x1269:  mov    0x4(%ebx),%edx
0827f14a +0x126c:  mov    %eax,(%ecx)
0827f14c +0x126e:  mov    %edx,0x4(%ecx)
0827f14f +0x1271:  lea    0x8(%ebp),%eax
0827f152 +0x1274:  mov    %eax,(%esp)
0827f155 +0x1277:  call   0827e300 <+0x422>
0827f15a +0x127c:  addl   $0x8,-0xc(%ebp)
0827f15e +0x1280:  lea    0xc(%ebp),%eax
0827f161 +0x1283:  mov    %eax,0x4(%esp)
0827f165 +0x1287:  lea    0x8(%ebp),%eax
0827f168 +0x128a:  mov    %eax,(%esp)
0827f16b +0x128d:  call   0827e2d4 <+0x3f6>
0827f170 +0x1292:  test   %al,%al
0827f172 +0x1294:  jne    0827f11d <+0x123f>
0827f174 +0x1296:  mov    -0xc(%ebp),%eax
0827f177 +0x1299:  add    $0x24,%esp
0827f17a +0x129c:  pop    %ebx
0827f17b +0x129d:  pop    %ebp
0827f17c +0x129e:  ret
0827f17d +0x129f:  push   %ebp
0827f17e +0x12a0:  mov    %esp,%ebp
0827f180 +0x12a2:  mov    0x8(%ebp),%eax
0827f183 +0x12a5:  pop    %ebp
0827f184 +0x12a6:  ret
0827f185 +0x12a7:  push   %ebp
0827f186 +0x12a8:  mov    %esp,%ebp
0827f188 +0x12aa:  mov    0x8(%ebp),%eax
0827f18b +0x12ad:  pop    %ebp
0827f18c +0x12ae:  ret
0827f18d +0x12af:  push   %ebp
0827f18e +0x12b0:  mov    %esp,%ebp
0827f190 +0x12b2:  push   %esi
0827f191 +0x12b3:  push   %ebx
0827f192 +0x12b4:  sub    $0x10,%esp
0827f195 +0x12b7:  mov    0x10(%ebp),%eax
0827f198 +0x12ba:  mov    %eax,(%esp)
0827f19b +0x12bd:  call   0827f2d2 <+0x13f4>
0827f1a0 +0x12c2:  mov    %eax,%esi
0827f1a2 +0x12c4:  mov    0xc(%ebp),%eax
0827f1a5 +0x12c7:  mov    %eax,(%esp)
0827f1a8 +0x12ca:  call   0827f2d2 <+0x13f4>
0827f1ad +0x12cf:  mov    %eax,%ebx
0827f1af +0x12d1:  mov    0x8(%ebp),%eax
0827f1b2 +0x12d4:  mov    %eax,(%esp)
0827f1b5 +0x12d7:  call   0827f2d2 <+0x13f4>
0827f1ba +0x12dc:  mov    %esi,0x8(%esp)
0827f1be +0x12e0:  mov    %ebx,0x4(%esp)
0827f1c2 +0x12e4:  mov    %eax,(%esp)
0827f1c5 +0x12e7:  call   0827f2da <+0x13fc>
0827f1ca +0x12ec:  add    $0x10,%esp
0827f1cd +0x12ef:  pop    %ebx
0827f1ce +0x12f0:  pop    %esi
0827f1cf +0x12f1:  pop    %ebp
0827f1d0 +0x12f2:  ret
0827f1d1 +0x12f3:  nop
0827f1d2 +0x12f4:  push   %ebp
0827f1d3 +0x12f5:  mov    %esp,%ebp
0827f1d5 +0x12f7:  sub    $0x18,%esp
0827f1d8 +0x12fa:  mov    0x8(%ebp),%eax
0827f1db +0x12fd:  mov    %eax,(%esp)
0827f1de +0x1300:  call   0827e582 <+0x6a4>
0827f1e3 +0x1305:  mov    %eax,(%esp)
0827f1e6 +0x1308:  call   0827f2be <+0x13e0>
0827f1eb +0x130d:  leave
0827f1ec +0x130e:  ret
0827f1ed +0x130f:  push   %ebp
0827f1ee +0x1310:  mov    %esp,%ebp
0827f1f0 +0x1312:  push   %ebx
0827f1f1 +0x1313:  sub    $0x14,%esp
0827f1f4 +0x1316:  mov    0x8(%ebp),%ebx
0827f1f7 +0x1319:  mov    0xc(%ebp),%eax
0827f1fa +0x131c:  mov    (%eax),%eax
0827f1fc +0x131e:  mov    %eax,0x4(%esp)
0827f200 +0x1322:  mov    %ebx,(%esp)
0827f203 +0x1325:  call   0827f300 <+0x1422>
0827f208 +0x132a:  mov    %ebx,%eax
0827f20a +0x132c:  add    $0x14,%esp
0827f20d +0x132f:  pop    %ebx
0827f20e +0x1330:  pop    %ebp
0827f20f +0x1331:  ret    $0x4
0827f212 +0x1334:  push   %ebp
0827f213 +0x1335:  mov    %esp,%ebp
0827f215 +0x1337:  sub    $0x18,%esp
0827f218 +0x133a:  mov    0x10(%ebp),%eax
0827f21b +0x133d:  mov    %eax,0x8(%esp)
0827f21f +0x1341:  mov    0xc(%ebp),%eax
0827f222 +0x1344:  mov    %eax,0x4(%esp)
0827f226 +0x1348:  mov    0x8(%ebp),%eax
0827f229 +0x134b:  mov    %eax,(%esp)
0827f22c +0x134e:  call   0827f30d <+0x142f>
0827f231 +0x1353:  leave
0827f232 +0x1354:  ret
0827f233 +0x1355:  push   %ebp
0827f234 +0x1356:  mov    %esp,%ebp
0827f236 +0x1358:  sub    $0x18,%esp
0827f239 +0x135b:  lea    0x8(%ebp),%eax
0827f23c +0x135e:  mov    %eax,(%esp)
0827f23f +0x1361:  call   0817aee6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xf64>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xf64
0827f244 +0x1366:  mov    (%eax),%eax
0827f246 +0x1368:  leave
0827f247 +0x1369:  ret
0827f248 +0x136a:  push   %ebp
0827f249 +0x136b:  mov    %esp,%ebp
0827f24b +0x136d:  sub    $0x28,%esp
0827f24e +0x1370:  movb   $0x0,-0x9(%ebp)
0827f252 +0x1374:  mov    0x10(%ebp),%eax
0827f255 +0x1377:  mov    %eax,0x8(%esp)
0827f259 +0x137b:  mov    0xc(%ebp),%eax
0827f25c +0x137e:  mov    %eax,0x4(%esp)
0827f260 +0x1382:  mov    0x8(%ebp),%eax
0827f263 +0x1385:  mov    %eax,(%esp)
0827f266 +0x1388:  call   0827f32e <+0x1450>
0827f26b +0x138d:  leave
0827f26c +0x138e:  ret
0827f26d +0x138f:  push   %ebp
0827f26e +0x1390:  mov    %esp,%ebp
0827f270 +0x1392:  sub    $0x28,%esp
0827f273 +0x1395:  mov    0x8(%ebp),%eax
0827f276 +0x1398:  mov    %eax,(%esp)
0827f279 +0x139b:  call   0827f37e <+0x14a0>
0827f27e +0x13a0:  mov    %eax,0x4(%esp)
0827f282 +0x13a4:  lea    -0x9(%ebp),%eax
0827f285 +0x13a7:  mov    %eax,(%esp)
0827f288 +0x13aa:  call   0827f2b0 <+0x13d2>
0827f28d +0x13af:  leave
0827f28e +0x13b0:  ret
0827f28f +0x13b1:  push   %ebp
0827f290 +0x13b2:  mov    %esp,%ebp
0827f292 +0x13b4:  mov    0x8(%ebp),%eax
0827f295 +0x13b7:  mov    0x8(%eax),%eax
0827f298 +0x13ba:  pop    %ebp
0827f299 +0x13bb:  ret
0827f29a +0x13bc:  push   %ebp
0827f29b +0x13bd:  mov    %esp,%ebp
0827f29d +0x13bf:  mov    0x8(%ebp),%eax
0827f2a0 +0x13c2:  mov    0xc(%eax),%eax
0827f2a3 +0x13c5:  pop    %ebp
0827f2a4 +0x13c6:  ret
0827f2a5 +0x13c7:  push   %ebp
0827f2a6 +0x13c8:  mov    %esp,%ebp
0827f2a8 +0x13ca:  mov    0x8(%ebp),%eax
0827f2ab +0x13cd:  add    $0x10,%eax
0827f2ae +0x13d0:  pop    %ebp
0827f2af +0x13d1:  ret
0827f2b0 +0x13d2:  push   %ebp
0827f2b1 +0x13d3:  mov    %esp,%ebp
0827f2b3 +0x13d5:  mov    0xc(%ebp),%eax
0827f2b6 +0x13d8:  pop    %ebp
0827f2b7 +0x13d9:  ret
0827f2b8 +0x13da:  push   %ebp
0827f2b9 +0x13db:  mov    %esp,%ebp
0827f2bb +0x13dd:  pop    %ebp
0827f2bc +0x13de:  ret
0827f2bd +0x13df:  nop
0827f2be +0x13e0:  push   %ebp
0827f2bf +0x13e1:  mov    %esp,%ebp
0827f2c1 +0x13e3:  mov    $0x1fffffff,%eax
0827f2c6 +0x13e8:  pop    %ebp
0827f2c7 +0x13e9:  ret
0827f2c8 +0x13ea:  push   %ebp
0827f2c9 +0x13eb:  mov    %esp,%ebp
0827f2cb +0x13ed:  mov    0x8(%ebp),%eax
0827f2ce +0x13f0:  mov    (%eax),%eax
0827f2d0 +0x13f2:  pop    %ebp
0827f2d1 +0x13f3:  ret
0827f2d2 +0x13f4:  push   %ebp
0827f2d3 +0x13f5:  mov    %esp,%ebp
0827f2d5 +0x13f7:  mov    0x8(%ebp),%eax
0827f2d8 +0x13fa:  pop    %ebp
0827f2d9 +0x13fb:  ret
0827f2da +0x13fc:  push   %ebp
0827f2db +0x13fd:  mov    %esp,%ebp
0827f2dd +0x13ff:  sub    $0x28,%esp
0827f2e0 +0x1402:  movb   $0x0,-0x9(%ebp)
0827f2e4 +0x1406:  mov    0x10(%ebp),%eax
0827f2e7 +0x1409:  mov    %eax,0x8(%esp)
0827f2eb +0x140d:  mov    0xc(%ebp),%eax
0827f2ee +0x1410:  mov    %eax,0x4(%esp)
0827f2f2 +0x1414:  mov    0x8(%ebp),%eax
0827f2f5 +0x1417:  mov    %eax,(%esp)
0827f2f8 +0x141a:  call   0827f389 <+0x14ab>
0827f2fd +0x141f:  leave
0827f2fe +0x1420:  ret
0827f2ff +0x1421:  nop
0827f300 +0x1422:  push   %ebp
0827f301 +0x1423:  mov    %esp,%ebp
0827f303 +0x1425:  mov    0x8(%ebp),%eax
0827f306 +0x1428:  mov    0xc(%ebp),%edx
0827f309 +0x142b:  mov    %edx,(%eax)
0827f30b +0x142d:  pop    %ebp
0827f30c +0x142e:  ret
0827f30d +0x142f:  push   %ebp
0827f30e +0x1430:  mov    %esp,%ebp
0827f310 +0x1432:  sub    $0x18,%esp
0827f313 +0x1435:  mov    0x10(%ebp),%eax
0827f316 +0x1438:  mov    %eax,0x8(%esp)
0827f31a +0x143c:  mov    0xc(%ebp),%eax
0827f31d +0x143f:  mov    %eax,0x4(%esp)
0827f321 +0x1443:  mov    0x8(%ebp),%eax
0827f324 +0x1446:  mov    %eax,(%esp)
0827f327 +0x1449:  call   0827f3dc <+0x14fe>
0827f32c +0x144e:  leave
0827f32d +0x144f:  ret
0827f32e +0x1450:  push   %ebp
0827f32f +0x1451:  mov    %esp,%ebp
0827f331 +0x1453:  sub    $0x28,%esp
0827f334 +0x1456:  mov    0xc(%ebp),%edx
0827f337 +0x1459:  mov    0x8(%ebp),%eax
0827f33a +0x145c:  mov    %edx,%ecx
0827f33c +0x145e:  sub    %eax,%ecx
0827f33e +0x1460:  mov    %ecx,%eax
0827f340 +0x1462:  sar    $0x3,%eax
0827f343 +0x1465:  mov    %eax,-0xc(%ebp)
0827f346 +0x1468:  jmp    0827f36e <+0x1490>
0827f348 +0x146a:  mov    0x8(%ebp),%eax
0827f34b +0x146d:  mov    %eax,(%esp)
0827f34e +0x1470:  call   080dd870 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3b9>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3b9
0827f353 +0x1475:  mov    %eax,0x4(%esp)
0827f357 +0x1479:  mov    0x10(%ebp),%eax
0827f35a +0x147c:  mov    %eax,(%esp)
0827f35d +0x147f:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
0827f362 +0x1484:  addl   $0x8,0x8(%ebp)
0827f366 +0x1488:  addl   $0x8,0x10(%ebp)
0827f36a +0x148c:  subl   $0x1,-0xc(%ebp)
0827f36e +0x1490:  cmpl   $0x0,-0xc(%ebp)
0827f372 +0x1494:  setg   %al
0827f375 +0x1497:  test   %al,%al
0827f377 +0x1499:  jne    0827f348 <+0x146a>
0827f379 +0x149b:  mov    0x10(%ebp),%eax
0827f37c +0x149e:  leave
0827f37d +0x149f:  ret
0827f37e +0x14a0:  push   %ebp
0827f37f +0x14a1:  mov    %esp,%ebp
0827f381 +0x14a3:  mov    0x8(%ebp),%eax
0827f384 +0x14a6:  add    $0x10,%eax
0827f387 +0x14a9:  pop    %ebp
0827f388 +0x14aa:  ret
0827f389 +0x14ab:  push   %ebp
0827f38a +0x14ac:  mov    %esp,%ebp
0827f38c +0x14ae:  push   %ebx
0827f38d +0x14af:  sub    $0x24,%esp
0827f390 +0x14b2:  mov    0xc(%ebp),%edx
0827f393 +0x14b5:  mov    0x8(%ebp),%eax
0827f396 +0x14b8:  mov    %edx,%ecx
0827f398 +0x14ba:  sub    %eax,%ecx
0827f39a +0x14bc:  mov    %ecx,%eax
0827f39c +0x14be:  sar    $0x3,%eax
0827f39f +0x14c1:  mov    %eax,-0xc(%ebp)
0827f3a2 +0x14c4:  jmp    0827f3c8 <+0x14ea>
0827f3a4 +0x14c6:  subl   $0x8,0x10(%ebp)
0827f3a8 +0x14ca:  mov    0x10(%ebp),%ebx
0827f3ab +0x14cd:  subl   $0x8,0xc(%ebp)
0827f3af +0x14d1:  mov    0xc(%ebp),%eax
0827f3b2 +0x14d4:  mov    %eax,(%esp)
0827f3b5 +0x14d7:  call   0827ed14 <+0xe36>
0827f3ba +0x14dc:  mov    0x4(%eax),%edx
0827f3bd +0x14df:  mov    (%eax),%eax
0827f3bf +0x14e1:  mov    %eax,(%ebx)
0827f3c1 +0x14e3:  mov    %edx,0x4(%ebx)
0827f3c4 +0x14e6:  subl   $0x1,-0xc(%ebp)
0827f3c8 +0x14ea:  cmpl   $0x0,-0xc(%ebp)
0827f3cc +0x14ee:  setg   %al
0827f3cf +0x14f1:  test   %al,%al
0827f3d1 +0x14f3:  jne    0827f3a4 <+0x14c6>
0827f3d3 +0x14f5:  mov    0x10(%ebp),%eax
0827f3d6 +0x14f8:  add    $0x24,%esp
0827f3d9 +0x14fb:  pop    %ebx
0827f3da +0x14fc:  pop    %ebp
0827f3db +0x14fd:  ret
0827f3dc +0x14fe:  push   %ebp
0827f3dd +0x14ff:  mov    %esp,%ebp
0827f3df +0x1501:  push   %esi
0827f3e0 +0x1502:  push   %ebx
0827f3e1 +0x1503:  sub    $0x20,%esp
0827f3e4 +0x1506:  mov    0x10(%ebp),%eax
0827f3e7 +0x1509:  mov    %eax,-0xc(%ebp)
0827f3ea +0x150c:  jmp    0827f42d <+0x154f>
0827f3ec +0x150e:  lea    0x8(%ebp),%eax
0827f3ef +0x1511:  mov    %eax,(%esp)
0827f3f2 +0x1514:  call   0827f4b4 <+0x15d6>
0827f3f7 +0x1519:  mov    %eax,%ebx
0827f3f9 +0x151b:  mov    -0xc(%ebp),%eax
0827f3fc +0x151e:  mov    %eax,0x4(%esp)
0827f400 +0x1522:  movl   $0x8,(%esp)
0827f407 +0x1529:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0827f40c +0x152e:  mov    %eax,%edx
0827f40e +0x1530:  test   %edx,%edx
0827f410 +0x1532:  je     0827f41e <+0x1540>
0827f412 +0x1534:  mov    %eax,%ecx
0827f414 +0x1536:  mov    (%ebx),%eax
0827f416 +0x1538:  mov    0x4(%ebx),%edx
0827f419 +0x153b:  mov    %eax,(%ecx)
0827f41b +0x153d:  mov    %edx,0x4(%ecx)
0827f41e +0x1540:  lea    0x8(%ebp),%eax
0827f421 +0x1543:  mov    %eax,(%esp)
0827f424 +0x1546:  call   0827f49e <+0x15c0>
0827f429 +0x154b:  addl   $0x8,-0xc(%ebp)
0827f42d +0x154f:  lea    0xc(%ebp),%eax
0827f430 +0x1552:  mov    %eax,0x4(%esp)
0827f434 +0x1556:  lea    0x8(%ebp),%eax
0827f437 +0x1559:  mov    %eax,(%esp)
0827f43a +0x155c:  call   0827f481 <+0x15a3>
0827f43f +0x1561:  test   %al,%al
0827f441 +0x1563:  jne    0827f3ec <+0x150e>
0827f443 +0x1565:  mov    -0xc(%ebp),%eax
0827f446 +0x1568:  add    $0x20,%esp
0827f449 +0x156b:  pop    %ebx
0827f44a +0x156c:  pop    %esi
0827f44b +0x156d:  pop    %ebp
0827f44c +0x156e:  ret
0827f44d +0x156f:  mov    %eax,(%esp)
0827f450 +0x1572:  call   08725ce0 <__cxa_begin_catch>
0827f455 +0x1577:  mov    -0xc(%ebp),%eax
0827f458 +0x157a:  mov    %eax,0x4(%esp)
0827f45c +0x157e:  mov    0x10(%ebp),%eax
0827f45f +0x1581:  mov    %eax,(%esp)
0827f462 +0x1584:  call   0827ec49 <+0xd6b>
0827f467 +0x1589:  call   08724be0 <__cxa_rethrow>
0827f46c +0x158e:  mov    %edx,%ebx
0827f46e +0x1590:  mov    %eax,%esi
0827f470 +0x1592:  call   08725c30 <__cxa_end_catch>
0827f475 +0x1597:  mov    %esi,%eax
0827f477 +0x1599:  mov    %ebx,%edx
0827f479 +0x159b:  mov    %eax,(%esp)
0827f47c +0x159e:  call   08ae3750 <_Unwind_Resume>
0827f481 +0x15a3:  push   %ebp
0827f482 +0x15a4:  mov    %esp,%ebp
0827f484 +0x15a6:  sub    $0x18,%esp
0827f487 +0x15a9:  mov    0xc(%ebp),%eax
0827f48a +0x15ac:  mov    %eax,0x4(%esp)
0827f48e +0x15b0:  mov    0x8(%ebp),%eax
0827f491 +0x15b3:  mov    %eax,(%esp)
0827f494 +0x15b6:  call   0827f4be <+0x15e0>
0827f499 +0x15bb:  xor    $0x1,%eax
0827f49c +0x15be:  leave
0827f49d +0x15bf:  ret
0827f49e +0x15c0:  push   %ebp
0827f49f +0x15c1:  mov    %esp,%ebp
0827f4a1 +0x15c3:  mov    0x8(%ebp),%eax
0827f4a4 +0x15c6:  mov    (%eax),%eax
0827f4a6 +0x15c8:  lea    0x8(%eax),%edx
0827f4a9 +0x15cb:  mov    0x8(%ebp),%eax
0827f4ac +0x15ce:  mov    %edx,(%eax)
0827f4ae +0x15d0:  mov    0x8(%ebp),%eax
0827f4b1 +0x15d3:  pop    %ebp
0827f4b2 +0x15d4:  ret
0827f4b3 +0x15d5:  nop
0827f4b4 +0x15d6:  push   %ebp
0827f4b5 +0x15d7:  mov    %esp,%ebp
0827f4b7 +0x15d9:  mov    0x8(%ebp),%eax
0827f4ba +0x15dc:  mov    (%eax),%eax
0827f4bc +0x15de:  pop    %ebp
0827f4bd +0x15df:  ret
0827f4be +0x15e0:  push   %ebp
0827f4bf +0x15e1:  mov    %esp,%ebp
0827f4c1 +0x15e3:  push   %ebx
0827f4c2 +0x15e4:  sub    $0x14,%esp
0827f4c5 +0x15e7:  mov    0x8(%ebp),%eax
0827f4c8 +0x15ea:  mov    %eax,(%esp)
0827f4cb +0x15ed:  call   0827f4e8 <+0x160a>
0827f4d0 +0x15f2:  mov    %eax,%ebx
0827f4d2 +0x15f4:  mov    0xc(%ebp),%eax
0827f4d5 +0x15f7:  mov    %eax,(%esp)
0827f4d8 +0x15fa:  call   0827f4e8 <+0x160a>
0827f4dd +0x15ff:  cmp    %eax,%ebx
0827f4df +0x1601:  sete   %al
0827f4e2 +0x1604:  add    $0x14,%esp
0827f4e5 +0x1607:  pop    %ebx
0827f4e6 +0x1608:  pop    %ebp
0827f4e7 +0x1609:  ret
0827f4e8 +0x160a:  push   %ebp
0827f4e9 +0x160b:  mov    %esp,%ebp
0827f4eb +0x160d:  mov    0x8(%ebp),%eax
0827f4ee +0x1610:  mov    (%eax),%eax
0827f4f0 +0x1612:  pop    %ebp
0827f4f1 +0x1613:  ret
0827f4f2 +0x1614:  nop
0827f4f3 +0x1615:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827dede

/* SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*) */

void SpecialItemHandler::_GLOBAL__I_SpecialItemHandler(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
