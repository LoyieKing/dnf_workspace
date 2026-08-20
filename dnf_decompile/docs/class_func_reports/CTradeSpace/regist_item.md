# regist_item

`_ZN11CTradeSpace11regist_itemEP5CUseriii`

`CTradeSpace::regist_item(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08529e7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08529e7e  _ZN11CTradeSpace11regist_itemEP5CUseriii
#           CTradeSpace::regist_item(CUser*, int, int, int)
# range [0x08529e7e, 0x0852bfcb]
08529e7e +0x0000:  push   %ebp
08529e7f +0x0001:  mov    %esp,%ebp
08529e81 +0x0003:  push   %edi
08529e82 +0x0004:  push   %esi
08529e83 +0x0005:  push   %ebx
08529e84 +0x0006:  sub    $0x1cc,%esp
08529e8a +0x000c:  mov    0x8(%ebp),%eax
08529e8d +0x000f:  mov    %eax,(%esp)
08529e90 +0x0012:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
08529e95 +0x0017:  test   %al,%al
08529e97 +0x0019:  je     08529ea3 <+0x25>
08529e99 +0x001b:  mov    $0xffffff9d,%ebx
08529e9e +0x0020:  jmp    0852bfbf <+0x2141>
08529ea3 +0x0025:  cmpl   $0x0,0x18(%ebp)
08529ea7 +0x0029:  jg     08529eb3 <+0x35>
08529ea9 +0x002b:  mov    $0xffffff9e,%ebx
08529eae +0x0030:  jmp    0852bfbf <+0x2141>
08529eb3 +0x0035:  movl   $0x0,-0x64(%ebp)
08529eba +0x003c:  mov    0x8(%ebp),%eax
08529ebd +0x003f:  mov    0x20(%eax),%eax
08529ec0 +0x0042:  cmp    0xc(%ebp),%eax
08529ec3 +0x0045:  jne    08529ede <+0x60>
08529ec5 +0x0047:  mov    0x8(%ebp),%eax
08529ec8 +0x004a:  mov    0x24(%eax),%eax
08529ecb +0x004d:  mov    %eax,-0x64(%ebp)
08529ece +0x0050:  movl   $0x1,-0x60(%ebp)
08529ed5 +0x0057:  movl   $0x0,-0x5c(%ebp)
08529edc +0x005e:  jmp    08529ef5 <+0x77>
08529ede +0x0060:  mov    0x8(%ebp),%eax
08529ee1 +0x0063:  mov    0x20(%eax),%eax
08529ee4 +0x0066:  mov    %eax,-0x64(%ebp)
08529ee7 +0x0069:  movl   $0x0,-0x60(%ebp)
08529eee +0x0070:  movl   $0x1,-0x5c(%ebp)
08529ef5 +0x0077:  cmpl   $0x0,-0x64(%ebp)
08529ef9 +0x007b:  jne    08529f05 <+0x87>
08529efb +0x007d:  mov    $0xffffffff,%ebx
08529f00 +0x0082:  jmp    0852bfbf <+0x2141>
08529f05 +0x0087:  lea    -0x130(%ebp),%eax
08529f0b +0x008d:  mov    %eax,(%esp)
08529f0e +0x0090:  call   082a411a <_GLOBAL__I__ZN4CLog5this_E+0x541>  ; global constructors keyed to CLog::this_+0x541
08529f13 +0x0095:  mov    0x10(%ebp),%eax
08529f16 +0x0098:  mov    %al,-0x128(%ebp)
08529f1c +0x009e:  mov    0xc(%ebp),%eax
08529f1f +0x00a1:  mov    %eax,(%esp)
08529f22 +0x00a4:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08529f27 +0x00a9:  test   %eax,%eax
08529f29 +0x00ab:  sete   %al
08529f2c +0x00ae:  test   %al,%al
08529f2e +0x00b0:  je     08529f76 <+0xf8>
08529f30 +0x00b2:  movl   $0x5,0xc(%esp)
08529f38 +0x00ba:  movl   $0x147,0x8(%esp)
08529f40 +0x00c2:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
08529f48 +0x00ca:  lea    -0xd4(%ebp),%eax
08529f4e +0x00d0:  mov    %eax,(%esp)
08529f51 +0x00d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08529f56 +0x00d8:  movl   $"CTradeSpace::regist_item()\t0 == owner->getCurCharacR()",0x4(%esp)
08529f5e +0x00e0:  lea    -0xd4(%ebp),%eax
08529f64 +0x00e6:  mov    %eax,(%esp)
08529f67 +0x00e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08529f6c +0x00ee:  mov    $0xfffffffe,%ebx
08529f71 +0x00f3:  jmp    0852bfbf <+0x2141>
08529f76 +0x00f8:  cmpl   $0x0,0x10(%ebp)
08529f7a +0x00fc:  je     08529fa1 <+0x123>
08529f7c +0x00fe:  mov    0xc(%ebp),%eax
08529f7f +0x0101:  mov    %eax,(%esp)
08529f82 +0x0104:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
08529f87 +0x0109:  test   %al,%al
08529f89 +0x010b:  jne    08529f9a <+0x11c>
08529f8b +0x010d:  mov    -0x64(%ebp),%eax
08529f8e +0x0110:  mov    %eax,(%esp)
08529f91 +0x0113:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
08529f96 +0x0118:  test   %al,%al
08529f98 +0x011a:  je     08529fa1 <+0x123>
08529f9a +0x011c:  mov    $0x1,%eax
08529f9f +0x0121:  jmp    08529fa6 <+0x128>
08529fa1 +0x0123:  mov    $0x0,%eax
08529fa6 +0x0128:  test   %al,%al
08529fa8 +0x012a:  je     08529fb4 <+0x136>
08529faa +0x012c:  mov    $0xfffffead,%ebx
08529faf +0x0131:  jmp    0852bfbf <+0x2141>
08529fb4 +0x0136:  lea    -0xe0(%ebp),%eax
08529fba +0x013c:  mov    %eax,(%esp)
08529fbd +0x013f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08529fc2 +0x0144:  mov    0x10(%ebp),%eax
08529fc5 +0x0147:  cmp    $0x1,%eax
08529fc8 +0x014a:  je     0852b345 <+0x14c7>
08529fce +0x0150:  cmp    $0x1,%eax
08529fd1 +0x0153:  jg     08529fdc <+0x15e>
08529fd3 +0x0155:  test   %eax,%eax
08529fd5 +0x0157:  je     08529ff3 <+0x175>
08529fd7 +0x0159:  jmp    0852bf8c <+0x210e>
08529fdc +0x015e:  cmp    $0x3,%eax
08529fdf +0x0161:  je     0852ab55 <+0xcd7>
08529fe5 +0x0167:  cmp    $0x7,%eax
08529fe8 +0x016a:  je     0852ba4a <+0x1bcc>
08529fee +0x0170:  jmp    0852bf8c <+0x210e>
08529ff3 +0x0175:  cmpl   $0x0,0x14(%ebp)
08529ff7 +0x0179:  js     0852a002 <+0x184>
08529ff9 +0x017b:  cmpl   $0x138,0x14(%ebp)
0852a000 +0x0182:  jle    0852a03f <+0x1c1>
0852a002 +0x0184:  mov    0x14(%ebp),%eax
0852a005 +0x0187:  mov    %eax,0x14(%esp)
0852a009 +0x018b:  movl   $"slot_no(%d) < 0 || slot_no > Inven_Item::MAX_INVEN_SLOT",0x10(%esp)
0852a011 +0x0193:  movl   $0x15e,0xc(%esp)
0852a019 +0x019b:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852a021 +0x01a3:  movl   $"item_trade.cpp",0x4(%esp)
0852a029 +0x01ab:  movl   $0x1,(%esp)
0852a030 +0x01b2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852a035 +0x01b7:  mov    $0xfffffffd,%ebx
0852a03a +0x01bc:  jmp    0852bfb1 <+0x2133>
0852a03f +0x01c1:  cmpl   $0x0,0x14(%ebp)
0852a043 +0x01c5:  jne    0852a2ce <+0x450>
0852a049 +0x01cb:  mov    0xc(%ebp),%eax
0852a04c +0x01ce:  mov    %eax,(%esp)
0852a04f +0x01d1:  call   08532078 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0xd6>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0xd6
0852a054 +0x01d6:  mov    %eax,%ebx
0852a056 +0x01d8:  mov    %edx,%esi
0852a058 +0x01da:  mov    0xc(%ebp),%eax
0852a05b +0x01dd:  mov    %eax,(%esp)
0852a05e +0x01e0:  call   0853208c <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0xea>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0xea
0852a063 +0x01e5:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%edx
0852a069 +0x01eb:  mov    %ebx,0x8(%esp)
0852a06d +0x01ef:  mov    %esi,0xc(%esp)
0852a071 +0x01f3:  mov    %eax,0x4(%esp)
0852a075 +0x01f7:  mov    %edx,(%esp)
0852a078 +0x01fa:  call   08531fd2 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x30>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x30
0852a07d +0x01ff:  test   %al,%al
0852a07f +0x0201:  je     0852a08b <+0x20d>
0852a081 +0x0203:  mov    $0xfffffe96,%ebx
0852a086 +0x0208:  jmp    0852bfb1 <+0x2133>
0852a08b +0x020d:  mov    0xc(%ebp),%eax
0852a08e +0x0210:  mov    %eax,(%esp)
0852a091 +0x0213:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852a096 +0x0218:  movl   $0x1,0xc(%esp)
0852a09e +0x0220:  movl   $0x2,0x8(%esp)
0852a0a6 +0x0228:  mov    0x18(%ebp),%edx
0852a0a9 +0x022b:  mov    %edx,0x4(%esp)
0852a0ad +0x022f:  mov    %eax,(%esp)
0852a0b0 +0x0232:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0852a0b5 +0x0237:  test   %al,%al
0852a0b7 +0x0239:  je     0852a2c4 <+0x446>
0852a0bd +0x023f:  mov    -0x5c(%ebp),%ecx
0852a0c0 +0x0242:  mov    -0x5c(%ebp),%edx
0852a0c3 +0x0245:  mov    0x8(%ebp),%eax
0852a0c6 +0x0248:  add    $0x3d8,%edx
0852a0cc +0x024e:  mov    (%eax,%edx,4),%eax
0852a0cf +0x0251:  mov    %eax,%edx
0852a0d1 +0x0253:  add    0x18(%ebp),%edx
0852a0d4 +0x0256:  mov    0x8(%ebp),%eax
0852a0d7 +0x0259:  add    $0x3d8,%ecx
0852a0dd +0x025f:  mov    %edx,(%eax,%ecx,4)
0852a0e0 +0x0262:  mov    0x8(%ebp),%eax
0852a0e3 +0x0265:  mov    %eax,(%esp)
0852a0e6 +0x0268:  call   0852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>  ; CTradeSpace::checkCancelTrade()
0852a0eb +0x026d:  test   %al,%al
0852a0ed +0x026f:  je     0852a105 <+0x287>
0852a0ef +0x0271:  mov    0x8(%ebp),%eax
0852a0f2 +0x0274:  mov    %eax,(%esp)
0852a0f5 +0x0277:  call   08530210 <_ZN11CTradeSpace10checkTradeEv>  ; CTradeSpace::checkTrade()
0852a0fa +0x027c:  test   %al,%al
0852a0fc +0x027e:  je     0852a105 <+0x287>
0852a0fe +0x0280:  mov    $0x1,%eax
0852a103 +0x0285:  jmp    0852a10a <+0x28c>
0852a105 +0x0287:  mov    $0x0,%eax
0852a10a +0x028c:  test   %al,%al
0852a10c +0x028e:  je     0852a265 <+0x3e7>
0852a112 +0x0294:  lea    -0xe0(%ebp),%eax
0852a118 +0x029a:  mov    %eax,(%esp)
0852a11b +0x029d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852a120 +0x02a2:  movl   $0xf,0x8(%esp)
0852a128 +0x02aa:  movl   $0x0,0x4(%esp)
0852a130 +0x02b2:  lea    -0xe0(%ebp),%eax
0852a136 +0x02b8:  mov    %eax,(%esp)
0852a139 +0x02bb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852a13e +0x02c0:  mov    0x14(%ebp),%eax
0852a141 +0x02c3:  mov    %eax,0x4(%esp)
0852a145 +0x02c7:  lea    -0xe0(%ebp),%eax
0852a14b +0x02cd:  mov    %eax,(%esp)
0852a14e +0x02d0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852a153 +0x02d5:  movl   $0x0,0x4(%esp)
0852a15b +0x02dd:  lea    -0xe0(%ebp),%eax
0852a161 +0x02e3:  mov    %eax,(%esp)
0852a164 +0x02e6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852a169 +0x02eb:  mov    -0x5c(%ebp),%edx
0852a16c +0x02ee:  mov    0x8(%ebp),%eax
0852a16f +0x02f1:  add    $0x3d8,%edx
0852a175 +0x02f7:  mov    (%eax,%edx,4),%eax
0852a178 +0x02fa:  mov    %eax,0x4(%esp)
0852a17c +0x02fe:  lea    -0xe0(%ebp),%eax
0852a182 +0x0304:  mov    %eax,(%esp)
0852a185 +0x0307:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852a18a +0x030c:  movl   $0x0,0x4(%esp)
0852a192 +0x0314:  lea    -0xe0(%ebp),%eax
0852a198 +0x031a:  mov    %eax,(%esp)
0852a19b +0x031d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852a1a0 +0x0322:  movl   $0x0,0x4(%esp)
0852a1a8 +0x032a:  lea    -0xe0(%ebp),%eax
0852a1ae +0x0330:  mov    %eax,(%esp)
0852a1b1 +0x0333:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852a1b6 +0x0338:  movl   $0x0,0x4(%esp)
0852a1be +0x0340:  lea    -0xe0(%ebp),%eax
0852a1c4 +0x0346:  mov    %eax,(%esp)
0852a1c7 +0x0349:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852a1cc +0x034e:  movl   $0x0,0x4(%esp)
0852a1d4 +0x0356:  lea    -0xe0(%ebp),%eax
0852a1da +0x035c:  mov    %eax,(%esp)
0852a1dd +0x035f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852a1e2 +0x0364:  movl   $0x0,0x4(%esp)
0852a1ea +0x036c:  lea    -0xe0(%ebp),%eax
0852a1f0 +0x0372:  mov    %eax,(%esp)
0852a1f3 +0x0375:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852a1f8 +0x037a:  movl   $&g_emptySlot,0x4(%esp)
0852a200 +0x0382:  lea    -0xe0(%ebp),%eax
0852a206 +0x0388:  mov    %eax,(%esp)
0852a209 +0x038b:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852a20e +0x0390:  movl   $0x1,0x4(%esp)
0852a216 +0x0398:  lea    -0xe0(%ebp),%eax
0852a21c +0x039e:  mov    %eax,(%esp)
0852a21f +0x03a1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852a224 +0x03a6:  lea    -0xe0(%ebp),%eax
0852a22a +0x03ac:  mov    %eax,0x4(%esp)
0852a22e +0x03b0:  mov    -0x64(%ebp),%eax
0852a231 +0x03b3:  mov    %eax,(%esp)
0852a234 +0x03b6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852a239 +0x03bb:  mov    -0x5c(%ebp),%edx
0852a23c +0x03be:  mov    0x8(%ebp),%eax
0852a23f +0x03c1:  add    $0x8,%edx
0852a242 +0x03c4:  movl   $0x0,0x8(%eax,%edx,4)
0852a24a +0x03cc:  mov    -0x60(%ebp),%edx
0852a24d +0x03cf:  mov    0x8(%ebp),%eax
0852a250 +0x03d2:  add    $0x8,%edx
0852a253 +0x03d5:  movl   $0x0,0x8(%eax,%edx,4)
0852a25b +0x03dd:  mov    $0x0,%ebx
0852a260 +0x03e2:  jmp    0852bfb1 <+0x2133>
0852a265 +0x03e7:  mov    -0x5c(%ebp),%ecx
0852a268 +0x03ea:  mov    -0x5c(%ebp),%edx
0852a26b +0x03ed:  mov    0x8(%ebp),%eax
0852a26e +0x03f0:  add    $0x3d8,%edx
0852a274 +0x03f6:  mov    (%eax,%edx,4),%eax
0852a277 +0x03f9:  mov    %eax,%edx
0852a279 +0x03fb:  sub    0x18(%ebp),%edx
0852a27c +0x03fe:  mov    0x8(%ebp),%eax
0852a27f +0x0401:  add    $0x3d8,%ecx
0852a285 +0x0407:  mov    %edx,(%eax,%ecx,4)
0852a288 +0x040a:  mov    0xc(%ebp),%eax
0852a28b +0x040d:  mov    %eax,(%esp)
0852a28e +0x0410:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852a293 +0x0415:  movl   $0x0,0x10(%esp)
0852a29b +0x041d:  movl   $0x1,0xc(%esp)
0852a2a3 +0x0425:  movl   $0xc,0x8(%esp)
0852a2ab +0x042d:  mov    0x18(%ebp),%edx
0852a2ae +0x0430:  mov    %edx,0x4(%esp)
0852a2b2 +0x0434:  mov    %eax,(%esp)
0852a2b5 +0x0437:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0852a2ba +0x043c:  mov    $0xfffffffc,%ebx
0852a2bf +0x0441:  jmp    0852bfb1 <+0x2133>
0852a2c4 +0x0446:  mov    $0xfffffffb,%ebx
0852a2c9 +0x044b:  jmp    0852bfb1 <+0x2133>
0852a2ce +0x0450:  mov    0xc(%ebp),%eax
0852a2d1 +0x0453:  mov    %eax,(%esp)
0852a2d4 +0x0456:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
0852a2d9 +0x045b:  test   %al,%al
0852a2db +0x045d:  jne    0852a2ec <+0x46e>
0852a2dd +0x045f:  mov    -0x64(%ebp),%eax
0852a2e0 +0x0462:  mov    %eax,(%esp)
0852a2e3 +0x0465:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
0852a2e8 +0x046a:  test   %al,%al
0852a2ea +0x046c:  je     0852a2f3 <+0x475>
0852a2ec +0x046e:  mov    $0x1,%eax
0852a2f1 +0x0473:  jmp    0852a2f8 <+0x47a>
0852a2f3 +0x0475:  mov    $0x0,%eax
0852a2f8 +0x047a:  test   %al,%al
0852a2fa +0x047c:  je     0852a306 <+0x488>
0852a2fc +0x047e:  mov    $0xfffffe5f,%ebx
0852a301 +0x0483:  jmp    0852bfb1 <+0x2133>
0852a306 +0x0488:  mov    0xc(%ebp),%eax
0852a309 +0x048b:  mov    %eax,(%esp)
0852a30c +0x048e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852a311 +0x0493:  lea    -0x178(%ebp),%edx
0852a317 +0x0499:  mov    0x14(%ebp),%ecx
0852a31a +0x049c:  mov    %ecx,0xc(%esp)
0852a31e +0x04a0:  movl   $0x1,0x8(%esp)
0852a326 +0x04a8:  mov    %eax,0x4(%esp)
0852a32a +0x04ac:  mov    %edx,(%esp)
0852a32d +0x04af:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0852a332 +0x04b4:  sub    $0x4,%esp
0852a335 +0x04b7:  mov    -0x178(%ebp),%eax
0852a33b +0x04bd:  mov    %eax,-0x127(%ebp)
0852a341 +0x04c3:  mov    -0x174(%ebp),%eax
0852a347 +0x04c9:  mov    %eax,-0x123(%ebp)
0852a34d +0x04cf:  mov    -0x170(%ebp),%eax
0852a353 +0x04d5:  mov    %eax,-0x11f(%ebp)
0852a359 +0x04db:  mov    -0x16c(%ebp),%eax
0852a35f +0x04e1:  mov    %eax,-0x11b(%ebp)
0852a365 +0x04e7:  mov    -0x168(%ebp),%eax
0852a36b +0x04ed:  mov    %eax,-0x117(%ebp)
0852a371 +0x04f3:  mov    -0x164(%ebp),%eax
0852a377 +0x04f9:  mov    %eax,-0x113(%ebp)
0852a37d +0x04ff:  mov    -0x160(%ebp),%eax
0852a383 +0x0505:  mov    %eax,-0x10f(%ebp)
0852a389 +0x050b:  mov    -0x15c(%ebp),%eax
0852a38f +0x0511:  mov    %eax,-0x10b(%ebp)
0852a395 +0x0517:  mov    -0x158(%ebp),%eax
0852a39b +0x051d:  mov    %eax,-0x107(%ebp)
0852a3a1 +0x0523:  mov    -0x154(%ebp),%eax
0852a3a7 +0x0529:  mov    %eax,-0x103(%ebp)
0852a3ad +0x052f:  mov    -0x150(%ebp),%eax
0852a3b3 +0x0535:  mov    %eax,-0xff(%ebp)
0852a3b9 +0x053b:  mov    -0x14c(%ebp),%eax
0852a3bf +0x0541:  mov    %eax,-0xfb(%ebp)
0852a3c5 +0x0547:  mov    -0x148(%ebp),%eax
0852a3cb +0x054d:  mov    %eax,-0xf7(%ebp)
0852a3d1 +0x0553:  mov    -0x144(%ebp),%eax
0852a3d7 +0x0559:  mov    %eax,-0xf3(%ebp)
0852a3dd +0x055f:  mov    -0x140(%ebp),%eax
0852a3e3 +0x0565:  mov    %eax,-0xef(%ebp)
0852a3e9 +0x056b:  movzbl -0x13c(%ebp),%eax
0852a3f0 +0x0572:  mov    %al,-0xeb(%ebp)
0852a3f6 +0x0578:  mov    -0x125(%ebp),%eax
0852a3fc +0x057e:  test   %eax,%eax
0852a3fe +0x0580:  jne    0852a475 <+0x5f7>
0852a400 +0x0582:  lea    -0x130(%ebp),%eax
0852a406 +0x0588:  add    $0x9,%eax
0852a409 +0x058b:  mov    %eax,(%esp)
0852a40c +0x058e:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852a411 +0x0593:  mov    %eax,%esi
0852a413 +0x0595:  mov    -0x125(%ebp),%edi
0852a419 +0x059b:  mov    0xc(%ebp),%eax
0852a41c +0x059e:  mov    %eax,(%esp)
0852a41f +0x05a1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852a424 +0x05a6:  mov    %eax,%ebx
0852a426 +0x05a8:  movl   $0x5,0xc(%esp)
0852a42e +0x05b0:  movl   $0x1a8,0x8(%esp)
0852a436 +0x05b8:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852a43e +0x05c0:  lea    -0xc4(%ebp),%eax
0852a444 +0x05c6:  mov    %eax,(%esp)
0852a447 +0x05c9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852a44c +0x05ce:  mov    0x14(%ebp),%eax
0852a44f +0x05d1:  mov    %eax,0x14(%esp)
0852a453 +0x05d5:  mov    %esi,0x10(%esp)
0852a457 +0x05d9:  mov    %edi,0xc(%esp)
0852a45b +0x05dd:  mov    %ebx,0x8(%esp)
0852a45f +0x05e1:  movl   $"CTradeSpace::regist_item, item find failed(1), ch=%d %d %d %d",0x4(%esp)
0852a467 +0x05e9:  lea    -0xc4(%ebp),%eax
0852a46d +0x05ef:  mov    %eax,(%esp)
0852a470 +0x05f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852a475 +0x05f7:  lea    -0x130(%ebp),%eax
0852a47b +0x05fd:  add    $0x9,%eax
0852a47e +0x0600:  mov    %eax,0x4(%esp)
0852a482 +0x0604:  mov    0x8(%ebp),%eax
0852a485 +0x0607:  mov    %eax,(%esp)
0852a488 +0x060a:  call   08529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>  ; CTradeSpace::_IsTradable(Inven_Item const&)
0852a48d +0x060f:  xor    $0x1,%eax
0852a490 +0x0612:  test   %al,%al
0852a492 +0x0614:  je     0852a49e <+0x620>
0852a494 +0x0616:  mov    $0xffffff9a,%ebx
0852a499 +0x061b:  jmp    0852bfb1 <+0x2133>
0852a49e +0x0620:  movzbl -0x126(%ebp),%eax
0852a4a5 +0x0627:  cmp    $0x1,%al
0852a4a7 +0x0629:  je     0852a547 <+0x6c9>
0852a4ad +0x062f:  lea    -0x130(%ebp),%eax
0852a4b3 +0x0635:  add    $0x9,%eax
0852a4b6 +0x0638:  mov    %eax,(%esp)
0852a4b9 +0x063b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852a4be +0x0640:  cmp    0x18(%ebp),%eax
0852a4c1 +0x0643:  setl   %al
0852a4c4 +0x0646:  test   %al,%al
0852a4c6 +0x0648:  je     0852a547 <+0x6c9>
0852a4c8 +0x064a:  lea    -0x130(%ebp),%eax
0852a4ce +0x0650:  add    $0x9,%eax
0852a4d1 +0x0653:  mov    %eax,(%esp)
0852a4d4 +0x0656:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852a4d9 +0x065b:  mov    %eax,%esi
0852a4db +0x065d:  mov    -0x125(%ebp),%edi
0852a4e1 +0x0663:  mov    0xc(%ebp),%eax
0852a4e4 +0x0666:  mov    %eax,(%esp)
0852a4e7 +0x0669:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852a4ec +0x066e:  mov    %eax,%ebx
0852a4ee +0x0670:  movl   $0x5,0xc(%esp)
0852a4f6 +0x0678:  movl   $0x1b5,0x8(%esp)
0852a4fe +0x0680:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852a506 +0x0688:  lea    -0xb4(%ebp),%eax
0852a50c +0x068e:  mov    %eax,(%esp)
0852a50f +0x0691:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852a514 +0x0696:  mov    0x18(%ebp),%eax
0852a517 +0x0699:  mov    %eax,0x14(%esp)
0852a51b +0x069d:  mov    %esi,0x10(%esp)
0852a51f +0x06a1:  mov    %edi,0xc(%esp)
0852a523 +0x06a5:  mov    %ebx,0x8(%esp)
0852a527 +0x06a9:  movl   $"CTradeSpace::regist_item, item count failed(1), ch=%d %d %d %d",0x4(%esp)
0852a52f +0x06b1:  lea    -0xb4(%ebp),%eax
0852a535 +0x06b7:  mov    %eax,(%esp)
0852a538 +0x06ba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852a53d +0x06bf:  mov    $0xfffffff8,%ebx
0852a542 +0x06c4:  jmp    0852bfb1 <+0x2133>
0852a547 +0x06c9:  cmpl   $0x0,0x18(%ebp)
0852a54b +0x06cd:  jg     0852a5cc <+0x74e>
0852a54d +0x06cf:  lea    -0x130(%ebp),%eax
0852a553 +0x06d5:  add    $0x9,%eax
0852a556 +0x06d8:  mov    %eax,(%esp)
0852a559 +0x06db:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852a55e +0x06e0:  mov    %eax,%esi
0852a560 +0x06e2:  mov    -0x125(%ebp),%edi
0852a566 +0x06e8:  mov    0xc(%ebp),%eax
0852a569 +0x06eb:  mov    %eax,(%esp)
0852a56c +0x06ee:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852a571 +0x06f3:  mov    %eax,%ebx
0852a573 +0x06f5:  movl   $0x5,0xc(%esp)
0852a57b +0x06fd:  movl   $0x1be,0x8(%esp)
0852a583 +0x0705:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852a58b +0x070d:  lea    -0xa4(%ebp),%eax
0852a591 +0x0713:  mov    %eax,(%esp)
0852a594 +0x0716:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852a599 +0x071b:  mov    0x18(%ebp),%eax
0852a59c +0x071e:  mov    %eax,0x14(%esp)
0852a5a0 +0x0722:  mov    %esi,0x10(%esp)
0852a5a4 +0x0726:  mov    %edi,0xc(%esp)
0852a5a8 +0x072a:  mov    %ebx,0x8(%esp)
0852a5ac +0x072e:  movl   $"CTradeSpace::regist_item, item count failed(2), ch=%d %d %d %d",0x4(%esp)
0852a5b4 +0x0736:  lea    -0xa4(%ebp),%eax
0852a5ba +0x073c:  mov    %eax,(%esp)
0852a5bd +0x073f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852a5c2 +0x0744:  mov    $0xfffffff7,%ebx
0852a5c7 +0x0749:  jmp    0852bfb1 <+0x2133>
0852a5cc +0x074e:  mov    0xc(%ebp),%eax
0852a5cf +0x0751:  mov    %eax,(%esp)
0852a5d2 +0x0754:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852a5d7 +0x0759:  movl   $0x1,0x14(%esp)
0852a5df +0x0761:  movl   $0x2,0x10(%esp)
0852a5e7 +0x0769:  mov    0x18(%ebp),%edx
0852a5ea +0x076c:  mov    %edx,0xc(%esp)
0852a5ee +0x0770:  mov    0x14(%ebp),%edx
0852a5f1 +0x0773:  mov    %edx,0x8(%esp)
0852a5f5 +0x0777:  movl   $0x1,0x4(%esp)
0852a5fd +0x077f:  mov    %eax,(%esp)
0852a600 +0x0782:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0852a605 +0x0787:  mov    %al,-0x51(%ebp)
0852a608 +0x078a:  movzbl -0x51(%ebp),%eax
0852a60c +0x078e:  xor    $0x1,%eax
0852a60f +0x0791:  test   %al,%al
0852a611 +0x0793:  je     0852a678 <+0x7fa>
0852a613 +0x0795:  mov    0xc(%ebp),%eax
0852a616 +0x0798:  mov    %eax,(%esp)
0852a619 +0x079b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852a61e +0x07a0:  mov    %eax,%ebx
0852a620 +0x07a2:  movl   $0x5,0xc(%esp)
0852a628 +0x07aa:  movl   $0x1c8,0x8(%esp)
0852a630 +0x07b2:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852a638 +0x07ba:  lea    -0x94(%ebp),%eax
0852a63e +0x07c0:  mov    %eax,(%esp)
0852a641 +0x07c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852a646 +0x07c8:  mov    0x18(%ebp),%eax
0852a649 +0x07cb:  mov    %eax,0x10(%esp)
0852a64d +0x07cf:  mov    0x14(%ebp),%eax
0852a650 +0x07d2:  mov    %eax,0xc(%esp)
0852a654 +0x07d6:  mov    %ebx,0x8(%esp)
0852a658 +0x07da:  movl   $"CTradeSpace::regist_item, delete_item failed, ch=%d %d %d",0x4(%esp)
0852a660 +0x07e2:  lea    -0x94(%ebp),%eax
0852a666 +0x07e8:  mov    %eax,(%esp)
0852a669 +0x07eb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852a66e +0x07f0:  mov    $0xfffffff6,%ebx
0852a673 +0x07f5:  jmp    0852bfb1 <+0x2133>
0852a678 +0x07fa:  mov    0x18(%ebp),%eax
0852a67b +0x07fd:  mov    %eax,0x50(%esp)
0852a67f +0x0801:  lea    0x8(%esp),%edx
0852a683 +0x0805:  lea    -0x130(%ebp),%ebx
0852a689 +0x080b:  mov    $0x12,%eax
0852a68e +0x0810:  mov    %edx,%edi
0852a690 +0x0812:  mov    %ebx,%esi
0852a692 +0x0814:  mov    %eax,%ecx
0852a694 +0x0816:  rep movsl %ds:(%esi),%es:(%edi)
0852a696 +0x0818:  mov    -0x5c(%ebp),%eax
0852a699 +0x081b:  mov    %eax,0x4(%esp)
0852a69d +0x081f:  mov    0x8(%ebp),%eax
0852a6a0 +0x0822:  mov    %eax,(%esp)
0852a6a3 +0x0825:  call   08529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>  ; CTradeSpace::add_item(int, TradeSlot, int)
0852a6a8 +0x082a:  mov    %eax,-0x58(%ebp)
0852a6ab +0x082d:  cmpl   $0xffffffff,-0x58(%ebp)
0852a6af +0x0831:  je     0852ab4d <+0xccf>
0852a6b5 +0x0837:  mov    0x8(%ebp),%eax
0852a6b8 +0x083a:  mov    %eax,(%esp)
0852a6bb +0x083d:  call   08530210 <_ZN11CTradeSpace10checkTradeEv>  ; CTradeSpace::checkTrade()
0852a6c0 +0x0842:  test   %al,%al
0852a6c2 +0x0844:  je     0852a6da <+0x85c>
0852a6c4 +0x0846:  mov    0x8(%ebp),%eax
0852a6c7 +0x0849:  mov    %eax,(%esp)
0852a6ca +0x084c:  call   0852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>  ; CTradeSpace::checkCancelTrade()
0852a6cf +0x0851:  test   %al,%al
0852a6d1 +0x0853:  je     0852a6da <+0x85c>
0852a6d3 +0x0855:  mov    $0x1,%eax
0852a6d8 +0x085a:  jmp    0852a6df <+0x861>
0852a6da +0x085c:  mov    $0x0,%eax
0852a6df +0x0861:  test   %al,%al
0852a6e1 +0x0863:  je     0852a891 <+0xa13>
0852a6e7 +0x0869:  mov    -0x5c(%ebp),%edx
0852a6ea +0x086c:  mov    0x8(%ebp),%eax
0852a6ed +0x086f:  add    $0x8,%edx
0852a6f0 +0x0872:  movl   $0x0,0x8(%eax,%edx,4)
0852a6f8 +0x087a:  mov    -0x60(%ebp),%edx
0852a6fb +0x087d:  mov    0x8(%ebp),%eax
0852a6fe +0x0880:  add    $0x8,%edx
0852a701 +0x0883:  movl   $0x0,0x8(%eax,%edx,4)
0852a709 +0x088b:  lea    -0xe0(%ebp),%eax
0852a70f +0x0891:  mov    %eax,(%esp)
0852a712 +0x0894:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852a717 +0x0899:  movl   $0xf,0x8(%esp)
0852a71f +0x08a1:  movl   $0x0,0x4(%esp)
0852a727 +0x08a9:  lea    -0xe0(%ebp),%eax
0852a72d +0x08af:  mov    %eax,(%esp)
0852a730 +0x08b2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852a735 +0x08b7:  mov    -0x58(%ebp),%eax
0852a738 +0x08ba:  mov    %eax,0x4(%esp)
0852a73c +0x08be:  lea    -0xe0(%ebp),%eax
0852a742 +0x08c4:  mov    %eax,(%esp)
0852a745 +0x08c7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852a74a +0x08cc:  mov    -0x125(%ebp),%eax
0852a750 +0x08d2:  mov    %eax,0x4(%esp)
0852a754 +0x08d6:  lea    -0xe0(%ebp),%eax
0852a75a +0x08dc:  mov    %eax,(%esp)
0852a75d +0x08df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852a762 +0x08e4:  mov    -0x5c(%ebp),%ecx
0852a765 +0x08e7:  mov    -0x58(%ebp),%edx
0852a768 +0x08ea:  mov    %edx,%eax
0852a76a +0x08ec:  shl    $0x3,%eax
0852a76d +0x08ef:  add    %edx,%eax
0852a76f +0x08f1:  shl    $0x3,%eax
0852a772 +0x08f4:  imul   $0x798,%ecx,%edx
0852a778 +0x08fa:  add    %edx,%eax
0852a77a +0x08fc:  add    $0x30,%eax
0852a77d +0x08ff:  add    0x8(%ebp),%eax
0852a780 +0x0902:  add    $0x9,%eax
0852a783 +0x0905:  mov    %eax,(%esp)
0852a786 +0x0908:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852a78b +0x090d:  mov    %eax,0x4(%esp)
0852a78f +0x0911:  lea    -0xe0(%ebp),%eax
0852a795 +0x0917:  mov    %eax,(%esp)
0852a798 +0x091a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852a79d +0x091f:  lea    -0x130(%ebp),%eax
0852a7a3 +0x0925:  add    $0x9,%eax
0852a7a6 +0x0928:  mov    %eax,(%esp)
0852a7a9 +0x092b:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0852a7ae +0x0930:  movzbl %al,%eax
0852a7b1 +0x0933:  mov    %eax,0x4(%esp)
0852a7b5 +0x0937:  lea    -0xe0(%ebp),%eax
0852a7bb +0x093d:  mov    %eax,(%esp)
0852a7be +0x0940:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852a7c3 +0x0945:  movzwl -0x11c(%ebp),%eax
0852a7ca +0x094c:  movzwl %ax,%eax
0852a7cd +0x094f:  mov    %eax,0x4(%esp)
0852a7d1 +0x0953:  lea    -0xe0(%ebp),%eax
0852a7d7 +0x0959:  mov    %eax,(%esp)
0852a7da +0x095c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852a7df +0x0961:  mov    -0x11a(%ebp),%eax
0852a7e5 +0x0967:  mov    %eax,0x4(%esp)
0852a7e9 +0x096b:  lea    -0xe0(%ebp),%eax
0852a7ef +0x0971:  mov    %eax,(%esp)
0852a7f2 +0x0974:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852a7f7 +0x0979:  lea    -0x130(%ebp),%eax
0852a7fd +0x097f:  add    $0x1a,%eax
0852a800 +0x0982:  mov    %eax,(%esp)
0852a803 +0x0985:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0852a808 +0x098a:  movzbl %al,%eax
0852a80b +0x098d:  mov    %eax,0x4(%esp)
0852a80f +0x0991:  lea    -0xe0(%ebp),%eax
0852a815 +0x0997:  mov    %eax,(%esp)
0852a818 +0x099a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852a81d +0x099f:  lea    -0x130(%ebp),%eax
0852a823 +0x09a5:  add    $0x1a,%eax
0852a826 +0x09a8:  mov    %eax,(%esp)
0852a829 +0x09ab:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0852a82e +0x09b0:  movzwl %ax,%eax
0852a831 +0x09b3:  mov    %eax,0x4(%esp)
0852a835 +0x09b7:  lea    -0xe0(%ebp),%eax
0852a83b +0x09bd:  mov    %eax,(%esp)
0852a83e +0x09c0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852a843 +0x09c5:  lea    -0x130(%ebp),%eax
0852a849 +0x09cb:  add    $0x9,%eax
0852a84c +0x09ce:  mov    %eax,0x4(%esp)
0852a850 +0x09d2:  lea    -0xe0(%ebp),%eax
0852a856 +0x09d8:  mov    %eax,(%esp)
0852a859 +0x09db:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852a85e +0x09e0:  movl   $0x1,0x4(%esp)
0852a866 +0x09e8:  lea    -0xe0(%ebp),%eax
0852a86c +0x09ee:  mov    %eax,(%esp)
0852a86f +0x09f1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852a874 +0x09f6:  lea    -0xe0(%ebp),%eax
0852a87a +0x09fc:  mov    %eax,0x4(%esp)
0852a87e +0x0a00:  mov    -0x64(%ebp),%eax
0852a881 +0x0a03:  mov    %eax,(%esp)
0852a884 +0x0a06:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852a889 +0x0a0b:  mov    -0x58(%ebp),%ebx
0852a88c +0x0a0e:  jmp    0852bfb1 <+0x2133>
0852a891 +0x0a13:  mov    0xc(%ebp),%eax
0852a894 +0x0a16:  mov    %eax,(%esp)
0852a897 +0x0a19:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852a89c +0x0a1e:  mov    %eax,%ebx
0852a89e +0x0a20:  movl   $0x5,0xc(%esp)
0852a8a6 +0x0a28:  movl   $0x1fc,0x8(%esp)
0852a8ae +0x0a30:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852a8b6 +0x0a38:  lea    -0x84(%ebp),%eax
0852a8bc +0x0a3e:  mov    %eax,(%esp)
0852a8bf +0x0a41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852a8c4 +0x0a46:  mov    0x18(%ebp),%eax
0852a8c7 +0x0a49:  mov    %eax,0x10(%esp)
0852a8cb +0x0a4d:  mov    0x14(%ebp),%eax
0852a8ce +0x0a50:  mov    %eax,0xc(%esp)
0852a8d2 +0x0a54:  mov    %ebx,0x8(%esp)
0852a8d6 +0x0a58:  movl   $"CTradeSpace::regist_item, (checkTrade() && checkCancelTrade()) failed, ch=%d %d %d",0x4(%esp)
0852a8de +0x0a60:  lea    -0x84(%ebp),%eax
0852a8e4 +0x0a66:  mov    %eax,(%esp)
0852a8e7 +0x0a69:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852a8ec +0x0a6e:  mov    -0x5c(%ebp),%ecx
0852a8ef +0x0a71:  mov    -0x58(%ebp),%edx
0852a8f2 +0x0a74:  mov    %edx,%eax
0852a8f4 +0x0a76:  shl    $0x3,%eax
0852a8f7 +0x0a79:  add    %edx,%eax
0852a8f9 +0x0a7b:  shl    $0x3,%eax
0852a8fc +0x0a7e:  imul   $0x798,%ecx,%edx
0852a902 +0x0a84:  add    %edx,%eax
0852a904 +0x0a86:  add    $0x30,%eax
0852a907 +0x0a89:  add    0x8(%ebp),%eax
0852a90a +0x0a8c:  add    $0x9,%eax
0852a90d +0x0a8f:  mov    %eax,(%esp)
0852a910 +0x0a92:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0852a915 +0x0a97:  test   %al,%al
0852a917 +0x0a99:  je     0852a947 <+0xac9>
0852a919 +0x0a9b:  mov    -0x5c(%ebp),%ecx
0852a91c +0x0a9e:  mov    -0x58(%ebp),%edx
0852a91f +0x0aa1:  mov    %edx,%eax
0852a921 +0x0aa3:  shl    $0x3,%eax
0852a924 +0x0aa6:  add    %edx,%eax
0852a926 +0x0aa8:  shl    $0x3,%eax
0852a929 +0x0aab:  imul   $0x798,%ecx,%edx
0852a92f +0x0ab1:  add    %edx,%eax
0852a931 +0x0ab3:  add    $0x30,%eax
0852a934 +0x0ab6:  add    0x8(%ebp),%eax
0852a937 +0x0ab9:  add    $0x9,%eax
0852a93a +0x0abc:  mov    %eax,(%esp)
0852a93d +0x0abf:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852a942 +0x0ac4:  jmp    0852aa3c <+0xbbe>
0852a947 +0x0ac9:  mov    -0x5c(%ebp),%ebx
0852a94a +0x0acc:  mov    -0x58(%ebp),%edx
0852a94d +0x0acf:  mov    0x8(%ebp),%ecx
0852a950 +0x0ad2:  mov    %edx,%eax
0852a952 +0x0ad4:  shl    $0x3,%eax
0852a955 +0x0ad7:  add    %edx,%eax
0852a957 +0x0ad9:  shl    $0x3,%eax
0852a95a +0x0adc:  imul   $0x798,%ebx,%edx
0852a960 +0x0ae2:  add    %edx,%eax
0852a962 +0x0ae4:  lea    (%ecx,%eax,1),%eax
0852a965 +0x0ae7:  add    $0x40,%eax
0852a968 +0x0aea:  mov    (%eax),%eax
0852a96a +0x0aec:  cmp    0x18(%ebp),%eax
0852a96d +0x0aef:  je     0852aa13 <+0xb95>
0852a973 +0x0af5:  mov    -0x5c(%ebp),%ebx
0852a976 +0x0af8:  mov    -0x58(%ebp),%edx
0852a979 +0x0afb:  mov    0x8(%ebp),%ecx
0852a97c +0x0afe:  mov    %edx,%eax
0852a97e +0x0b00:  shl    $0x3,%eax
0852a981 +0x0b03:  add    %edx,%eax
0852a983 +0x0b05:  shl    $0x3,%eax
0852a986 +0x0b08:  imul   $0x798,%ebx,%edx
0852a98c +0x0b0e:  add    %edx,%eax
0852a98e +0x0b10:  lea    (%ecx,%eax,1),%eax
0852a991 +0x0b13:  add    $0x40,%eax
0852a994 +0x0b16:  mov    (%eax),%eax
0852a996 +0x0b18:  cmp    0x18(%ebp),%eax
0852a999 +0x0b1b:  jle    0852a9e8 <+0xb6a>
0852a99b +0x0b1d:  mov    -0x5c(%ebp),%esi
0852a99e +0x0b20:  mov    -0x58(%ebp),%edx
0852a9a1 +0x0b23:  mov    -0x5c(%ebp),%edi
0852a9a4 +0x0b26:  mov    -0x58(%ebp),%ecx
0852a9a7 +0x0b29:  mov    0x8(%ebp),%ebx
0852a9aa +0x0b2c:  mov    %ecx,%eax
0852a9ac +0x0b2e:  shl    $0x3,%eax
0852a9af +0x0b31:  add    %ecx,%eax
0852a9b1 +0x0b33:  shl    $0x3,%eax
0852a9b4 +0x0b36:  imul   $0x798,%edi,%ecx
0852a9ba +0x0b3c:  add    %ecx,%eax
0852a9bc +0x0b3e:  lea    (%ebx,%eax,1),%eax
0852a9bf +0x0b41:  add    $0x40,%eax
0852a9c2 +0x0b44:  mov    (%eax),%eax
0852a9c4 +0x0b46:  mov    %eax,%ecx
0852a9c6 +0x0b48:  sub    0x18(%ebp),%ecx
0852a9c9 +0x0b4b:  mov    0x8(%ebp),%ebx
0852a9cc +0x0b4e:  mov    %edx,%eax
0852a9ce +0x0b50:  shl    $0x3,%eax
0852a9d1 +0x0b53:  add    %edx,%eax
0852a9d3 +0x0b55:  shl    $0x3,%eax
0852a9d6 +0x0b58:  imul   $0x798,%esi,%edx
0852a9dc +0x0b5e:  add    %edx,%eax
0852a9de +0x0b60:  lea    (%ebx,%eax,1),%eax
0852a9e1 +0x0b63:  add    $0x40,%eax
0852a9e4 +0x0b66:  mov    %ecx,(%eax)
0852a9e6 +0x0b68:  jmp    0852aa3c <+0xbbe>
0852a9e8 +0x0b6a:  mov    -0x5c(%ebp),%ecx
0852a9eb +0x0b6d:  mov    -0x58(%ebp),%edx
0852a9ee +0x0b70:  mov    %edx,%eax
0852a9f0 +0x0b72:  shl    $0x3,%eax
0852a9f3 +0x0b75:  add    %edx,%eax
0852a9f5 +0x0b77:  shl    $0x3,%eax
0852a9f8 +0x0b7a:  imul   $0x798,%ecx,%edx
0852a9fe +0x0b80:  add    %edx,%eax
0852aa00 +0x0b82:  add    $0x30,%eax
0852aa03 +0x0b85:  add    0x8(%ebp),%eax
0852aa06 +0x0b88:  add    $0x9,%eax
0852aa09 +0x0b8b:  mov    %eax,(%esp)
0852aa0c +0x0b8e:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852aa11 +0x0b93:  jmp    0852aa3c <+0xbbe>
0852aa13 +0x0b95:  mov    -0x5c(%ebp),%ecx
0852aa16 +0x0b98:  mov    -0x58(%ebp),%edx
0852aa19 +0x0b9b:  mov    %edx,%eax
0852aa1b +0x0b9d:  shl    $0x3,%eax
0852aa1e +0x0ba0:  add    %edx,%eax
0852aa20 +0x0ba2:  shl    $0x3,%eax
0852aa23 +0x0ba5:  imul   $0x798,%ecx,%edx
0852aa29 +0x0bab:  add    %edx,%eax
0852aa2b +0x0bad:  add    $0x30,%eax
0852aa2e +0x0bb0:  add    0x8(%ebp),%eax
0852aa31 +0x0bb3:  add    $0x9,%eax
0852aa34 +0x0bb6:  mov    %eax,(%esp)
0852aa37 +0x0bb9:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852aa3c +0x0bbe:  mov    0xc(%ebp),%eax
0852aa3f +0x0bc1:  mov    %eax,(%esp)
0852aa42 +0x0bc4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852aa47 +0x0bc9:  movl   $0x10,0x50(%esp)
0852aa4f +0x0bd1:  movl   $0x9,0x4c(%esp)
0852aa57 +0x0bd9:  mov    0x14(%ebp),%edx
0852aa5a +0x0bdc:  mov    %edx,0x48(%esp)
0852aa5e +0x0be0:  mov    0x18(%ebp),%edx
0852aa61 +0x0be3:  mov    %edx,0x44(%esp)
0852aa65 +0x0be7:  mov    -0x127(%ebp),%edx
0852aa6b +0x0bed:  mov    %edx,0x4(%esp)
0852aa6f +0x0bf1:  mov    -0x123(%ebp),%edx
0852aa75 +0x0bf7:  mov    %edx,0x8(%esp)
0852aa79 +0x0bfb:  mov    -0x11f(%ebp),%edx
0852aa7f +0x0c01:  mov    %edx,0xc(%esp)
0852aa83 +0x0c05:  mov    -0x11b(%ebp),%edx
0852aa89 +0x0c0b:  mov    %edx,0x10(%esp)
0852aa8d +0x0c0f:  mov    -0x117(%ebp),%edx
0852aa93 +0x0c15:  mov    %edx,0x14(%esp)
0852aa97 +0x0c19:  mov    -0x113(%ebp),%edx
0852aa9d +0x0c1f:  mov    %edx,0x18(%esp)
0852aaa1 +0x0c23:  mov    -0x10f(%ebp),%edx
0852aaa7 +0x0c29:  mov    %edx,0x1c(%esp)
0852aaab +0x0c2d:  mov    -0x10b(%ebp),%edx
0852aab1 +0x0c33:  mov    %edx,0x20(%esp)
0852aab5 +0x0c37:  mov    -0x107(%ebp),%edx
0852aabb +0x0c3d:  mov    %edx,0x24(%esp)
0852aabf +0x0c41:  mov    -0x103(%ebp),%edx
0852aac5 +0x0c47:  mov    %edx,0x28(%esp)
0852aac9 +0x0c4b:  mov    -0xff(%ebp),%edx
0852aacf +0x0c51:  mov    %edx,0x2c(%esp)
0852aad3 +0x0c55:  mov    -0xfb(%ebp),%edx
0852aad9 +0x0c5b:  mov    %edx,0x30(%esp)
0852aadd +0x0c5f:  mov    -0xf7(%ebp),%edx
0852aae3 +0x0c65:  mov    %edx,0x34(%esp)
0852aae7 +0x0c69:  mov    -0xf3(%ebp),%edx
0852aaed +0x0c6f:  mov    %edx,0x38(%esp)
0852aaf1 +0x0c73:  mov    -0xef(%ebp),%edx
0852aaf7 +0x0c79:  mov    %edx,0x3c(%esp)
0852aafb +0x0c7d:  movzbl -0xeb(%ebp),%edx
0852ab02 +0x0c84:  mov    %dl,0x40(%esp)
0852ab06 +0x0c88:  mov    %eax,(%esp)
0852ab09 +0x0c8b:  call   085039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>  ; CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)
0852ab0e +0x0c90:  mov    %eax,-0x50(%ebp)
0852ab11 +0x0c93:  cmpl   $0x0,-0x50(%ebp)
0852ab15 +0x0c97:  jns    0852ab43 <+0xcc5>
0852ab17 +0x0c99:  mov    -0x125(%ebp),%eax
0852ab1d +0x0c9f:  mov    0xc(%ebp),%edx
0852ab20 +0x0ca2:  lea    0x79700(%edx),%ecx
0852ab26 +0x0ca8:  mov    0x18(%ebp),%edx
0852ab29 +0x0cab:  mov    %edx,0x8(%esp)
0852ab2d +0x0caf:  mov    %eax,0x4(%esp)
0852ab31 +0x0cb3:  mov    %ecx,(%esp)
0852ab34 +0x0cb6:  call   08683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>  ; cUserHistoryLog::TradeItemAddFail(int, int)
0852ab39 +0x0cbb:  mov    $0xfffffff5,%ebx
0852ab3e +0x0cc0:  jmp    0852bfb1 <+0x2133>
0852ab43 +0x0cc5:  mov    $0xfffffff4,%ebx
0852ab48 +0x0cca:  jmp    0852bfb1 <+0x2133>
0852ab4d +0x0ccf:  mov    -0x58(%ebp),%ebx
0852ab50 +0x0cd2:  jmp    0852bfb1 <+0x2133>
0852ab55 +0x0cd7:  cmpl   $0x0,0x14(%ebp)
0852ab59 +0x0cdb:  js     0852ab61 <+0xce3>
0852ab5b +0x0cdd:  cmpl   $0x19,0x14(%ebp)
0852ab5f +0x0ce1:  jle    0852ab9e <+0xd20>
0852ab61 +0x0ce3:  mov    0x14(%ebp),%eax
0852ab64 +0x0ce6:  mov    %eax,0x14(%esp)
0852ab68 +0x0cea:  movl   $"slot_no(%d) < 0 || slot_no > ENUM_EQUIPMENTTYPE_TOTAL_MAX",0x10(%esp)
0852ab70 +0x0cf2:  movl   $0x266,0xc(%esp)
0852ab78 +0x0cfa:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852ab80 +0x0d02:  movl   $"item_trade.cpp",0x4(%esp)
0852ab88 +0x0d0a:  movl   $0x1,(%esp)
0852ab8f +0x0d11:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852ab94 +0x0d16:  mov    $0xfffffff3,%ebx
0852ab99 +0x0d1b:  jmp    0852bfb1 <+0x2133>
0852ab9e +0x0d20:  mov    0xc(%ebp),%eax
0852aba1 +0x0d23:  mov    %eax,(%esp)
0852aba4 +0x0d26:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852aba9 +0x0d2b:  lea    -0x178(%ebp),%edx
0852abaf +0x0d31:  mov    0x14(%ebp),%ecx
0852abb2 +0x0d34:  mov    %ecx,0xc(%esp)
0852abb6 +0x0d38:  movl   $0x0,0x8(%esp)
0852abbe +0x0d40:  mov    %eax,0x4(%esp)
0852abc2 +0x0d44:  mov    %edx,(%esp)
0852abc5 +0x0d47:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0852abca +0x0d4c:  sub    $0x4,%esp
0852abcd +0x0d4f:  mov    -0x178(%ebp),%eax
0852abd3 +0x0d55:  mov    %eax,-0x127(%ebp)
0852abd9 +0x0d5b:  mov    -0x174(%ebp),%eax
0852abdf +0x0d61:  mov    %eax,-0x123(%ebp)
0852abe5 +0x0d67:  mov    -0x170(%ebp),%eax
0852abeb +0x0d6d:  mov    %eax,-0x11f(%ebp)
0852abf1 +0x0d73:  mov    -0x16c(%ebp),%eax
0852abf7 +0x0d79:  mov    %eax,-0x11b(%ebp)
0852abfd +0x0d7f:  mov    -0x168(%ebp),%eax
0852ac03 +0x0d85:  mov    %eax,-0x117(%ebp)
0852ac09 +0x0d8b:  mov    -0x164(%ebp),%eax
0852ac0f +0x0d91:  mov    %eax,-0x113(%ebp)
0852ac15 +0x0d97:  mov    -0x160(%ebp),%eax
0852ac1b +0x0d9d:  mov    %eax,-0x10f(%ebp)
0852ac21 +0x0da3:  mov    -0x15c(%ebp),%eax
0852ac27 +0x0da9:  mov    %eax,-0x10b(%ebp)
0852ac2d +0x0daf:  mov    -0x158(%ebp),%eax
0852ac33 +0x0db5:  mov    %eax,-0x107(%ebp)
0852ac39 +0x0dbb:  mov    -0x154(%ebp),%eax
0852ac3f +0x0dc1:  mov    %eax,-0x103(%ebp)
0852ac45 +0x0dc7:  mov    -0x150(%ebp),%eax
0852ac4b +0x0dcd:  mov    %eax,-0xff(%ebp)
0852ac51 +0x0dd3:  mov    -0x14c(%ebp),%eax
0852ac57 +0x0dd9:  mov    %eax,-0xfb(%ebp)
0852ac5d +0x0ddf:  mov    -0x148(%ebp),%eax
0852ac63 +0x0de5:  mov    %eax,-0xf7(%ebp)
0852ac69 +0x0deb:  mov    -0x144(%ebp),%eax
0852ac6f +0x0df1:  mov    %eax,-0xf3(%ebp)
0852ac75 +0x0df7:  mov    -0x140(%ebp),%eax
0852ac7b +0x0dfd:  mov    %eax,-0xef(%ebp)
0852ac81 +0x0e03:  movzbl -0x13c(%ebp),%eax
0852ac88 +0x0e0a:  mov    %al,-0xeb(%ebp)
0852ac8e +0x0e10:  mov    -0x125(%ebp),%eax
0852ac94 +0x0e16:  test   %eax,%eax
0852ac96 +0x0e18:  jne    0852aca2 <+0xe24>
0852ac98 +0x0e1a:  mov    $0xfffffff2,%ebx
0852ac9d +0x0e1f:  jmp    0852bfb1 <+0x2133>
0852aca2 +0x0e24:  lea    -0x130(%ebp),%eax
0852aca8 +0x0e2a:  add    $0x9,%eax
0852acab +0x0e2d:  mov    %eax,0x4(%esp)
0852acaf +0x0e31:  mov    0x8(%ebp),%eax
0852acb2 +0x0e34:  mov    %eax,(%esp)
0852acb5 +0x0e37:  call   08529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>  ; CTradeSpace::_IsTradable(Inven_Item const&)
0852acba +0x0e3c:  xor    $0x1,%eax
0852acbd +0x0e3f:  test   %al,%al
0852acbf +0x0e41:  je     0852accb <+0xe4d>
0852acc1 +0x0e43:  mov    $0xffffff9a,%ebx
0852acc6 +0x0e48:  jmp    0852bfb1 <+0x2133>
0852accb +0x0e4d:  cmpl   $0x9,0x14(%ebp)
0852accf +0x0e51:  jg     0852ad64 <+0xee6>
0852acd5 +0x0e57:  mov    -0x120(%ebp),%eax
0852acdb +0x0e5d:  mov    %eax,(%esp)
0852acde +0x0e60:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
0852ace3 +0x0e65:  test   %al,%al
0852ace5 +0x0e67:  je     0852acf1 <+0xe73>
0852ace7 +0x0e69:  mov    $0xffffff9a,%ebx
0852acec +0x0e6e:  jmp    0852bfb1 <+0x2133>
0852acf1 +0x0e73:  mov    0x14(%ebp),%eax
0852acf4 +0x0e76:  mov    %eax,-0x130(%ebp)
0852acfa +0x0e7c:  mov    0xc(%ebp),%eax
0852acfd +0x0e7f:  mov    %eax,(%esp)
0852ad00 +0x0e82:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852ad05 +0x0e87:  mov    %eax,-0x12c(%ebp)
0852ad0b +0x0e8d:  mov    -0x120(%ebp),%ebx
0852ad11 +0x0e93:  mov    0xc(%ebp),%eax
0852ad14 +0x0e96:  mov    %eax,(%esp)
0852ad17 +0x0e99:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852ad1c +0x0e9e:  mov    %eax,(%esp)
0852ad1f +0x0ea1:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852ad24 +0x0ea6:  mov    %ebx,0x4(%esp)
0852ad28 +0x0eaa:  mov    %eax,(%esp)
0852ad2b +0x0ead:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
0852ad30 +0x0eb2:  mov    %eax,-0x48(%ebp)
0852ad33 +0x0eb5:  cmpl   $0x0,-0x48(%ebp)
0852ad37 +0x0eb9:  je     0852ad51 <+0xed3>
0852ad39 +0x0ebb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0852ad40 +0x0ec2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0852ad45 +0x0ec7:  cmp    -0x48(%ebp),%eax
0852ad48 +0x0eca:  jle    0852ad51 <+0xed3>
0852ad4a +0x0ecc:  mov    $0x1,%eax
0852ad4f +0x0ed1:  jmp    0852ad56 <+0xed8>
0852ad51 +0x0ed3:  mov    $0x0,%eax
0852ad56 +0x0ed8:  test   %al,%al
0852ad58 +0x0eda:  je     0852ad64 <+0xee6>
0852ad5a +0x0edc:  mov    $0xffffff9c,%ebx
0852ad5f +0x0ee1:  jmp    0852bfb1 <+0x2133>
0852ad64 +0x0ee6:  mov    0xc(%ebp),%eax
0852ad67 +0x0ee9:  mov    %eax,(%esp)
0852ad6a +0x0eec:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852ad6f +0x0ef1:  movl   $0x1,0x14(%esp)
0852ad77 +0x0ef9:  movl   $0x2,0x10(%esp)
0852ad7f +0x0f01:  movl   $0x1,0xc(%esp)
0852ad87 +0x0f09:  mov    0x14(%ebp),%edx
0852ad8a +0x0f0c:  mov    %edx,0x8(%esp)
0852ad8e +0x0f10:  movl   $0x0,0x4(%esp)
0852ad96 +0x0f18:  mov    %eax,(%esp)
0852ad99 +0x0f1b:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0852ad9e +0x0f20:  mov    %al,-0x49(%ebp)
0852ada1 +0x0f23:  movzbl -0x49(%ebp),%eax
0852ada5 +0x0f27:  xor    $0x1,%eax
0852ada8 +0x0f2a:  test   %al,%al
0852adaa +0x0f2c:  je     0852ae0b <+0xf8d>
0852adac +0x0f2e:  mov    0xc(%ebp),%eax
0852adaf +0x0f31:  mov    %eax,(%esp)
0852adb2 +0x0f34:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852adb7 +0x0f39:  mov    %eax,%ebx
0852adb9 +0x0f3b:  movl   $0x5,0xc(%esp)
0852adc1 +0x0f43:  movl   $0x281,0x8(%esp)
0852adc9 +0x0f4b:  movl   $&_ZZN11CTradeSpace11regist_itemEP5CUseriiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852add1 +0x0f53:  lea    -0x74(%ebp),%eax
0852add4 +0x0f56:  mov    %eax,(%esp)
0852add7 +0x0f59:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852addc +0x0f5e:  mov    0x18(%ebp),%eax
0852addf +0x0f61:  mov    %eax,0x10(%esp)
0852ade3 +0x0f65:  mov    0x14(%ebp),%eax
0852ade6 +0x0f68:  mov    %eax,0xc(%esp)
0852adea +0x0f6c:  mov    %ebx,0x8(%esp)
0852adee +0x0f70:  movl   $"CTradeSpace::regist_item 2, delete_item failed, ch=%d, %d %d",0x4(%esp)
0852adf6 +0x0f78:  lea    -0x74(%ebp),%eax
0852adf9 +0x0f7b:  mov    %eax,(%esp)
0852adfc +0x0f7e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852ae01 +0x0f83:  mov    $0xfffffff1,%ebx
0852ae06 +0x0f88:  jmp    0852bfb1 <+0x2133>
0852ae0b +0x0f8d:  mov    0x18(%ebp),%eax
0852ae0e +0x0f90:  mov    %eax,0x50(%esp)
0852ae12 +0x0f94:  lea    0x8(%esp),%edx
0852ae16 +0x0f98:  lea    -0x130(%ebp),%ebx
0852ae1c +0x0f9e:  mov    $0x12,%eax
0852ae21 +0x0fa3:  mov    %edx,%edi
0852ae23 +0x0fa5:  mov    %ebx,%esi
0852ae25 +0x0fa7:  mov    %eax,%ecx
0852ae27 +0x0fa9:  rep movsl %ds:(%esi),%es:(%edi)
0852ae29 +0x0fab:  mov    -0x5c(%ebp),%eax
0852ae2c +0x0fae:  mov    %eax,0x4(%esp)
0852ae30 +0x0fb2:  mov    0x8(%ebp),%eax
0852ae33 +0x0fb5:  mov    %eax,(%esp)
0852ae36 +0x0fb8:  call   08529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>  ; CTradeSpace::add_item(int, TradeSlot, int)
0852ae3b +0x0fbd:  mov    %eax,-0x58(%ebp)
0852ae3e +0x0fc0:  cmpl   $0xffffffff,-0x58(%ebp)
0852ae42 +0x0fc4:  je     0852b33d <+0x14bf>
0852ae48 +0x0fca:  mov    0x8(%ebp),%eax
0852ae4b +0x0fcd:  mov    %eax,(%esp)
0852ae4e +0x0fd0:  call   08530210 <_ZN11CTradeSpace10checkTradeEv>  ; CTradeSpace::checkTrade()
0852ae53 +0x0fd5:  test   %al,%al
0852ae55 +0x0fd7:  je     0852ae6d <+0xfef>
0852ae57 +0x0fd9:  mov    0x8(%ebp),%eax
0852ae5a +0x0fdc:  mov    %eax,(%esp)
0852ae5d +0x0fdf:  call   0852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>  ; CTradeSpace::checkCancelTrade()
0852ae62 +0x0fe4:  test   %al,%al
0852ae64 +0x0fe6:  je     0852ae6d <+0xfef>
0852ae66 +0x0fe8:  mov    $0x1,%eax
0852ae6b +0x0fed:  jmp    0852ae72 <+0xff4>
0852ae6d +0x0fef:  mov    $0x0,%eax
0852ae72 +0x0ff4:  test   %al,%al
0852ae74 +0x0ff6:  je     0852b203 <+0x1385>
0852ae7a +0x0ffc:  mov    -0x5c(%ebp),%edx
0852ae7d +0x0fff:  mov    0x8(%ebp),%eax
0852ae80 +0x1002:  add    $0x8,%edx
0852ae83 +0x1005:  movl   $0x0,0x8(%eax,%edx,4)
0852ae8b +0x100d:  mov    -0x60(%ebp),%edx
0852ae8e +0x1010:  mov    0x8(%ebp),%eax
0852ae91 +0x1013:  add    $0x8,%edx
0852ae94 +0x1016:  movl   $0x0,0x8(%eax,%edx,4)
0852ae9c +0x101e:  lea    -0xe0(%ebp),%eax
0852aea2 +0x1024:  mov    %eax,(%esp)
0852aea5 +0x1027:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852aeaa +0x102c:  movl   $0xf,0x8(%esp)
0852aeb2 +0x1034:  movl   $0x0,0x4(%esp)
0852aeba +0x103c:  lea    -0xe0(%ebp),%eax
0852aec0 +0x1042:  mov    %eax,(%esp)
0852aec3 +0x1045:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852aec8 +0x104a:  mov    -0x58(%ebp),%eax
0852aecb +0x104d:  mov    %eax,0x4(%esp)
0852aecf +0x1051:  lea    -0xe0(%ebp),%eax
0852aed5 +0x1057:  mov    %eax,(%esp)
0852aed8 +0x105a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852aedd +0x105f:  mov    -0x125(%ebp),%eax
0852aee3 +0x1065:  mov    %eax,0x4(%esp)
0852aee7 +0x1069:  lea    -0xe0(%ebp),%eax
0852aeed +0x106f:  mov    %eax,(%esp)
0852aef0 +0x1072:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852aef5 +0x1077:  mov    -0x5c(%ebp),%ebx
0852aef8 +0x107a:  mov    -0x58(%ebp),%edx
0852aefb +0x107d:  mov    0x8(%ebp),%ecx
0852aefe +0x1080:  mov    %edx,%eax
0852af00 +0x1082:  shl    $0x3,%eax
0852af03 +0x1085:  add    %edx,%eax
0852af05 +0x1087:  shl    $0x3,%eax
0852af08 +0x108a:  imul   $0x798,%ebx,%edx
0852af0e +0x1090:  add    %edx,%eax
0852af10 +0x1092:  lea    (%ecx,%eax,1),%eax
0852af13 +0x1095:  add    $0x30,%eax
0852af16 +0x1098:  movzbl 0xa(%eax),%eax
0852af1a +0x109c:  cmp    $0x8,%al
0852af1c +0x109e:  jne    0852af87 <+0x1109>
0852af1e +0x10a0:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0852af23 +0x10a5:  mov    %eax,%esi
0852af25 +0x10a7:  mov    -0x5c(%ebp),%ecx
0852af28 +0x10aa:  mov    -0x58(%ebp),%edx
0852af2b +0x10ad:  mov    %edx,%eax
0852af2d +0x10af:  shl    $0x3,%eax
0852af30 +0x10b2:  add    %edx,%eax
0852af32 +0x10b4:  shl    $0x3,%eax
0852af35 +0x10b7:  imul   $0x798,%ecx,%edx
0852af3b +0x10bd:  add    %edx,%eax
0852af3d +0x10bf:  add    $0x30,%eax
0852af40 +0x10c2:  add    0x8(%ebp),%eax
0852af43 +0x10c5:  add    $0x9,%eax
0852af46 +0x10c8:  mov    %eax,(%esp)
0852af49 +0x10cb:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852af4e +0x10d0:  mov    %eax,%ebx
0852af50 +0x10d2:  mov    0xc(%ebp),%eax
0852af53 +0x10d5:  mov    %eax,(%esp)
0852af56 +0x10d8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852af5b +0x10dd:  mov    %eax,(%esp)
0852af5e +0x10e0:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852af63 +0x10e5:  mov    %esi,0x8(%esp)
0852af67 +0x10e9:  mov    %ebx,0x4(%esp)
0852af6b +0x10ed:  mov    %eax,(%esp)
0852af6e +0x10f0:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
0852af73 +0x10f5:  mov    %eax,0x4(%esp)
0852af77 +0x10f9:  lea    -0xe0(%ebp),%eax
0852af7d +0x10ff:  mov    %eax,(%esp)
0852af80 +0x1102:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852af85 +0x1107:  jmp    0852afc2 <+0x1144>
0852af87 +0x1109:  mov    -0x5c(%ebp),%ecx
0852af8a +0x110c:  mov    -0x58(%ebp),%edx
0852af8d +0x110f:  mov    %edx,%eax
0852af8f +0x1111:  shl    $0x3,%eax
0852af92 +0x1114:  add    %edx,%eax
0852af94 +0x1116:  shl    $0x3,%eax
0852af97 +0x1119:  imul   $0x798,%ecx,%edx
0852af9d +0x111f:  add    %edx,%eax
0852af9f +0x1121:  add    $0x30,%eax
0852afa2 +0x1124:  add    0x8(%ebp),%eax
0852afa5 +0x1127:  add    $0x9,%eax
0852afa8 +0x112a:  mov    %eax,(%esp)
0852afab +0x112d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852afb0 +0x1132:  mov    %eax,0x4(%esp)
0852afb4 +0x1136:  lea    -0xe0(%ebp),%eax
0852afba +0x113c:  mov    %eax,(%esp)
0852afbd +0x113f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852afc2 +0x1144:  lea    -0x130(%ebp),%eax
0852afc8 +0x114a:  add    $0x9,%eax
0852afcb +0x114d:  mov    %eax,(%esp)
0852afce +0x1150:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0852afd3 +0x1155:  movzbl %al,%eax
0852afd6 +0x1158:  mov    %eax,0x4(%esp)
0852afda +0x115c:  lea    -0xe0(%ebp),%eax
0852afe0 +0x1162:  mov    %eax,(%esp)
0852afe3 +0x1165:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852afe8 +0x116a:  movzwl -0x11c(%ebp),%eax
0852afef +0x1171:  movzwl %ax,%eax
0852aff2 +0x1174:  mov    %eax,0x4(%esp)
0852aff6 +0x1178:  lea    -0xe0(%ebp),%eax
0852affc +0x117e:  mov    %eax,(%esp)
0852afff +0x1181:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852b004 +0x1186:  mov    -0x11a(%ebp),%eax
0852b00a +0x118c:  mov    %eax,0x4(%esp)
0852b00e +0x1190:  lea    -0xe0(%ebp),%eax
0852b014 +0x1196:  mov    %eax,(%esp)
0852b017 +0x1199:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b01c +0x119e:  lea    -0x130(%ebp),%eax
0852b022 +0x11a4:  add    $0x1a,%eax
0852b025 +0x11a7:  mov    %eax,(%esp)
0852b028 +0x11aa:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0852b02d +0x11af:  movzbl %al,%eax
0852b030 +0x11b2:  mov    %eax,0x4(%esp)
0852b034 +0x11b6:  lea    -0xe0(%ebp),%eax
0852b03a +0x11bc:  mov    %eax,(%esp)
0852b03d +0x11bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852b042 +0x11c4:  lea    -0x130(%ebp),%eax
0852b048 +0x11ca:  add    $0x1a,%eax
0852b04b +0x11cd:  mov    %eax,(%esp)
0852b04e +0x11d0:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0852b053 +0x11d5:  movzwl %ax,%eax
0852b056 +0x11d8:  mov    %eax,0x4(%esp)
0852b05a +0x11dc:  lea    -0xe0(%ebp),%eax
0852b060 +0x11e2:  mov    %eax,(%esp)
0852b063 +0x11e5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852b068 +0x11ea:  mov    -0x5c(%ebp),%ebx
0852b06b +0x11ed:  mov    -0x58(%ebp),%edx
0852b06e +0x11f0:  mov    0x8(%ebp),%ecx
0852b071 +0x11f3:  mov    %edx,%eax
0852b073 +0x11f5:  shl    $0x3,%eax
0852b076 +0x11f8:  add    %edx,%eax
0852b078 +0x11fa:  shl    $0x3,%eax
0852b07b +0x11fd:  imul   $0x798,%ebx,%edx
0852b081 +0x1203:  add    %edx,%eax
0852b083 +0x1205:  lea    (%ecx,%eax,1),%eax
0852b086 +0x1208:  add    $0x30,%eax
0852b089 +0x120b:  movzbl 0xa(%eax),%eax
0852b08d +0x120f:  cmp    $0x8,%al
0852b08f +0x1211:  jne    0852b1b5 <+0x1337>
0852b095 +0x1217:  movl   $0x1e,0x4(%esp)
0852b09d +0x121f:  lea    -0xe0(%ebp),%eax
0852b0a3 +0x1225:  mov    %eax,(%esp)
0852b0a6 +0x1228:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b0ab +0x122d:  mov    -0x5c(%ebp),%ebx
0852b0ae +0x1230:  mov    -0x58(%ebp),%edx
0852b0b1 +0x1233:  mov    0x8(%ebp),%ecx
0852b0b4 +0x1236:  mov    %edx,%eax
0852b0b6 +0x1238:  shl    $0x3,%eax
0852b0b9 +0x123b:  add    %edx,%eax
0852b0bb +0x123d:  shl    $0x3,%eax
0852b0be +0x1240:  imul   $0x798,%ebx,%edx
0852b0c4 +0x1246:  add    %edx,%eax
0852b0c6 +0x1248:  lea    (%ecx,%eax,1),%eax
0852b0c9 +0x124b:  add    $0x40,%eax
0852b0cc +0x124e:  mov    (%eax),%ebx
0852b0ce +0x1250:  mov    0xc(%ebp),%eax
0852b0d1 +0x1253:  mov    %eax,(%esp)
0852b0d4 +0x1256:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b0d9 +0x125b:  mov    %eax,(%esp)
0852b0dc +0x125e:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852b0e1 +0x1263:  mov    %ebx,0x4(%esp)
0852b0e5 +0x1267:  mov    %eax,(%esp)
0852b0e8 +0x126a:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
0852b0ed +0x126f:  movl   $0x1e,0x8(%esp)
0852b0f5 +0x1277:  mov    %eax,0x4(%esp)
0852b0f9 +0x127b:  lea    -0xe0(%ebp),%eax
0852b0ff +0x1281:  mov    %eax,(%esp)
0852b102 +0x1284:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0852b107 +0x1289:  movl   $0x4,0x4(%esp)
0852b10f +0x1291:  lea    -0xe0(%ebp),%eax
0852b115 +0x1297:  mov    %eax,(%esp)
0852b118 +0x129a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b11d +0x129f:  mov    -0x5c(%ebp),%ebx
0852b120 +0x12a2:  mov    -0x58(%ebp),%edx
0852b123 +0x12a5:  mov    0x8(%ebp),%ecx
0852b126 +0x12a8:  mov    %edx,%eax
0852b128 +0x12aa:  shl    $0x3,%eax
0852b12b +0x12ad:  add    %edx,%eax
0852b12d +0x12af:  shl    $0x3,%eax
0852b130 +0x12b2:  imul   $0x798,%ebx,%edx
0852b136 +0x12b8:  add    %edx,%eax
0852b138 +0x12ba:  lea    (%ecx,%eax,1),%eax
0852b13b +0x12bd:  add    $0x40,%eax
0852b13e +0x12c0:  mov    (%eax),%ebx
0852b140 +0x12c2:  mov    0xc(%ebp),%eax
0852b143 +0x12c5:  mov    %eax,(%esp)
0852b146 +0x12c8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b14b +0x12cd:  mov    %eax,(%esp)
0852b14e +0x12d0:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852b153 +0x12d5:  mov    %ebx,0x4(%esp)
0852b157 +0x12d9:  mov    %eax,(%esp)
0852b15a +0x12dc:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
0852b15f +0x12e1:  mov    %eax,-0x44(%ebp)
0852b162 +0x12e4:  cmpl   $0x0,-0x44(%ebp)
0852b166 +0x12e8:  je     0852b187 <+0x1309>
0852b168 +0x12ea:  mov    -0x44(%ebp),%eax
0852b16b +0x12ed:  movl   $0x4,0x8(%esp)
0852b173 +0x12f5:  mov    %eax,0x4(%esp)
0852b177 +0x12f9:  lea    -0xe0(%ebp),%eax
0852b17d +0x12ff:  mov    %eax,(%esp)
0852b180 +0x1302:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0852b185 +0x1307:  jmp    0852b1b5 <+0x1337>
0852b187 +0x1309:  lea    -0xe4(%ebp),%eax
0852b18d +0x130f:  mov    %eax,(%esp)
0852b190 +0x1312:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
0852b195 +0x1317:  lea    -0xe4(%ebp),%eax
0852b19b +0x131d:  movl   $0x4,0x8(%esp)
0852b1a3 +0x1325:  mov    %eax,0x4(%esp)
0852b1a7 +0x1329:  lea    -0xe0(%ebp),%eax
0852b1ad +0x132f:  mov    %eax,(%esp)
0852b1b0 +0x1332:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0852b1b5 +0x1337:  lea    -0x130(%ebp),%eax
0852b1bb +0x133d:  add    $0x9,%eax
0852b1be +0x1340:  mov    %eax,0x4(%esp)
0852b1c2 +0x1344:  lea    -0xe0(%ebp),%eax
0852b1c8 +0x134a:  mov    %eax,(%esp)
0852b1cb +0x134d:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852b1d0 +0x1352:  movl   $0x1,0x4(%esp)
0852b1d8 +0x135a:  lea    -0xe0(%ebp),%eax
0852b1de +0x1360:  mov    %eax,(%esp)
0852b1e1 +0x1363:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852b1e6 +0x1368:  lea    -0xe0(%ebp),%eax
0852b1ec +0x136e:  mov    %eax,0x4(%esp)
0852b1f0 +0x1372:  mov    -0x64(%ebp),%eax
0852b1f3 +0x1375:  mov    %eax,(%esp)
0852b1f6 +0x1378:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852b1fb +0x137d:  mov    -0x58(%ebp),%ebx
0852b1fe +0x1380:  jmp    0852bfb1 <+0x2133>
0852b203 +0x1385:  mov    -0x5c(%ebp),%ecx
0852b206 +0x1388:  mov    -0x58(%ebp),%edx
0852b209 +0x138b:  mov    %edx,%eax
0852b20b +0x138d:  shl    $0x3,%eax
0852b20e +0x1390:  add    %edx,%eax
0852b210 +0x1392:  shl    $0x3,%eax
0852b213 +0x1395:  imul   $0x798,%ecx,%edx
0852b219 +0x139b:  add    %edx,%eax
0852b21b +0x139d:  add    $0x30,%eax
0852b21e +0x13a0:  add    0x8(%ebp),%eax
0852b221 +0x13a3:  add    $0x9,%eax
0852b224 +0x13a6:  mov    %eax,(%esp)
0852b227 +0x13a9:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852b22c +0x13ae:  mov    0xc(%ebp),%eax
0852b22f +0x13b1:  mov    %eax,(%esp)
0852b232 +0x13b4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852b237 +0x13b9:  movl   $0x10,0x50(%esp)
0852b23f +0x13c1:  movl   $0x9,0x4c(%esp)
0852b247 +0x13c9:  mov    0x14(%ebp),%edx
0852b24a +0x13cc:  mov    %edx,0x48(%esp)
0852b24e +0x13d0:  mov    0x18(%ebp),%edx
0852b251 +0x13d3:  mov    %edx,0x44(%esp)
0852b255 +0x13d7:  mov    -0x127(%ebp),%edx
0852b25b +0x13dd:  mov    %edx,0x4(%esp)
0852b25f +0x13e1:  mov    -0x123(%ebp),%edx
0852b265 +0x13e7:  mov    %edx,0x8(%esp)
0852b269 +0x13eb:  mov    -0x11f(%ebp),%edx
0852b26f +0x13f1:  mov    %edx,0xc(%esp)
0852b273 +0x13f5:  mov    -0x11b(%ebp),%edx
0852b279 +0x13fb:  mov    %edx,0x10(%esp)
0852b27d +0x13ff:  mov    -0x117(%ebp),%edx
0852b283 +0x1405:  mov    %edx,0x14(%esp)
0852b287 +0x1409:  mov    -0x113(%ebp),%edx
0852b28d +0x140f:  mov    %edx,0x18(%esp)
0852b291 +0x1413:  mov    -0x10f(%ebp),%edx
0852b297 +0x1419:  mov    %edx,0x1c(%esp)
0852b29b +0x141d:  mov    -0x10b(%ebp),%edx
0852b2a1 +0x1423:  mov    %edx,0x20(%esp)
0852b2a5 +0x1427:  mov    -0x107(%ebp),%edx
0852b2ab +0x142d:  mov    %edx,0x24(%esp)
0852b2af +0x1431:  mov    -0x103(%ebp),%edx
0852b2b5 +0x1437:  mov    %edx,0x28(%esp)
0852b2b9 +0x143b:  mov    -0xff(%ebp),%edx
0852b2bf +0x1441:  mov    %edx,0x2c(%esp)
0852b2c3 +0x1445:  mov    -0xfb(%ebp),%edx
0852b2c9 +0x144b:  mov    %edx,0x30(%esp)
0852b2cd +0x144f:  mov    -0xf7(%ebp),%edx
0852b2d3 +0x1455:  mov    %edx,0x34(%esp)
0852b2d7 +0x1459:  mov    -0xf3(%ebp),%edx
0852b2dd +0x145f:  mov    %edx,0x38(%esp)
0852b2e1 +0x1463:  mov    -0xef(%ebp),%edx
0852b2e7 +0x1469:  mov    %edx,0x3c(%esp)
0852b2eb +0x146d:  movzbl -0xeb(%ebp),%edx
0852b2f2 +0x1474:  mov    %dl,0x40(%esp)
0852b2f6 +0x1478:  mov    %eax,(%esp)
0852b2f9 +0x147b:  call   085039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>  ; CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)
0852b2fe +0x1480:  mov    %eax,-0x40(%ebp)
0852b301 +0x1483:  cmpl   $0x0,-0x40(%ebp)
0852b305 +0x1487:  jns    0852b333 <+0x14b5>
0852b307 +0x1489:  mov    -0x125(%ebp),%eax
0852b30d +0x148f:  mov    0xc(%ebp),%edx
0852b310 +0x1492:  lea    0x79700(%edx),%ecx
0852b316 +0x1498:  mov    0x18(%ebp),%edx
0852b319 +0x149b:  mov    %edx,0x8(%esp)
0852b31d +0x149f:  mov    %eax,0x4(%esp)
0852b321 +0x14a3:  mov    %ecx,(%esp)
0852b324 +0x14a6:  call   08683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>  ; cUserHistoryLog::TradeItemAddFail(int, int)
0852b329 +0x14ab:  mov    $0xfffffff0,%ebx
0852b32e +0x14b0:  jmp    0852bfb1 <+0x2133>
0852b333 +0x14b5:  mov    $0xffffffef,%ebx
0852b338 +0x14ba:  jmp    0852bfb1 <+0x2133>
0852b33d +0x14bf:  mov    -0x58(%ebp),%ebx
0852b340 +0x14c2:  jmp    0852bfb1 <+0x2133>
0852b345 +0x14c7:  mov    0xc(%ebp),%eax
0852b348 +0x14ca:  mov    %eax,(%esp)
0852b34b +0x14cd:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b350 +0x14d2:  lea    -0x178(%ebp),%edx
0852b356 +0x14d8:  mov    0x14(%ebp),%ecx
0852b359 +0x14db:  mov    %ecx,0xc(%esp)
0852b35d +0x14df:  movl   $0x2,0x8(%esp)
0852b365 +0x14e7:  mov    %eax,0x4(%esp)
0852b369 +0x14eb:  mov    %edx,(%esp)
0852b36c +0x14ee:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0852b371 +0x14f3:  sub    $0x4,%esp
0852b374 +0x14f6:  mov    -0x178(%ebp),%eax
0852b37a +0x14fc:  mov    %eax,-0x127(%ebp)
0852b380 +0x1502:  mov    -0x174(%ebp),%eax
0852b386 +0x1508:  mov    %eax,-0x123(%ebp)
0852b38c +0x150e:  mov    -0x170(%ebp),%eax
0852b392 +0x1514:  mov    %eax,-0x11f(%ebp)
0852b398 +0x151a:  mov    -0x16c(%ebp),%eax
0852b39e +0x1520:  mov    %eax,-0x11b(%ebp)
0852b3a4 +0x1526:  mov    -0x168(%ebp),%eax
0852b3aa +0x152c:  mov    %eax,-0x117(%ebp)
0852b3b0 +0x1532:  mov    -0x164(%ebp),%eax
0852b3b6 +0x1538:  mov    %eax,-0x113(%ebp)
0852b3bc +0x153e:  mov    -0x160(%ebp),%eax
0852b3c2 +0x1544:  mov    %eax,-0x10f(%ebp)
0852b3c8 +0x154a:  mov    -0x15c(%ebp),%eax
0852b3ce +0x1550:  mov    %eax,-0x10b(%ebp)
0852b3d4 +0x1556:  mov    -0x158(%ebp),%eax
0852b3da +0x155c:  mov    %eax,-0x107(%ebp)
0852b3e0 +0x1562:  mov    -0x154(%ebp),%eax
0852b3e6 +0x1568:  mov    %eax,-0x103(%ebp)
0852b3ec +0x156e:  mov    -0x150(%ebp),%eax
0852b3f2 +0x1574:  mov    %eax,-0xff(%ebp)
0852b3f8 +0x157a:  mov    -0x14c(%ebp),%eax
0852b3fe +0x1580:  mov    %eax,-0xfb(%ebp)
0852b404 +0x1586:  mov    -0x148(%ebp),%eax
0852b40a +0x158c:  mov    %eax,-0xf7(%ebp)
0852b410 +0x1592:  mov    -0x144(%ebp),%eax
0852b416 +0x1598:  mov    %eax,-0xf3(%ebp)
0852b41c +0x159e:  mov    -0x140(%ebp),%eax
0852b422 +0x15a4:  mov    %eax,-0xef(%ebp)
0852b428 +0x15aa:  movzbl -0x13c(%ebp),%eax
0852b42f +0x15b1:  mov    %al,-0xeb(%ebp)
0852b435 +0x15b7:  cmpl   $0x0,0x18(%ebp)
0852b439 +0x15bb:  jg     0852b445 <+0x15c7>
0852b43b +0x15bd:  mov    $0xfffffff7,%ebx
0852b440 +0x15c2:  jmp    0852bfb1 <+0x2133>
0852b445 +0x15c7:  mov    0x14(%ebp),%eax
0852b448 +0x15ca:  mov    %eax,-0x130(%ebp)
0852b44e +0x15d0:  mov    0xc(%ebp),%eax
0852b451 +0x15d3:  mov    %eax,(%esp)
0852b454 +0x15d6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852b459 +0x15db:  mov    %eax,-0x12c(%ebp)
0852b45f +0x15e1:  mov    -0x120(%ebp),%ebx
0852b465 +0x15e7:  mov    0xc(%ebp),%eax
0852b468 +0x15ea:  mov    %eax,(%esp)
0852b46b +0x15ed:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b470 +0x15f2:  mov    %eax,(%esp)
0852b473 +0x15f5:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852b478 +0x15fa:  mov    %ebx,0x4(%esp)
0852b47c +0x15fe:  mov    %eax,(%esp)
0852b47f +0x1601:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
0852b484 +0x1606:  mov    %eax,-0x3c(%ebp)
0852b487 +0x1609:  cmpl   $0x0,-0x3c(%ebp)
0852b48b +0x160d:  je     0852b4a5 <+0x1627>
0852b48d +0x160f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0852b494 +0x1616:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0852b499 +0x161b:  cmp    -0x3c(%ebp),%eax
0852b49c +0x161e:  jle    0852b4a5 <+0x1627>
0852b49e +0x1620:  mov    $0x1,%eax
0852b4a3 +0x1625:  jmp    0852b4aa <+0x162c>
0852b4a5 +0x1627:  mov    $0x0,%eax
0852b4aa +0x162c:  test   %al,%al
0852b4ac +0x162e:  je     0852b4b8 <+0x163a>
0852b4ae +0x1630:  mov    $0xffffff9c,%ebx
0852b4b3 +0x1635:  jmp    0852bfb1 <+0x2133>
0852b4b8 +0x163a:  mov    -0x120(%ebp),%eax
0852b4be +0x1640:  mov    %eax,(%esp)
0852b4c1 +0x1643:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
0852b4c6 +0x1648:  test   %al,%al
0852b4c8 +0x164a:  je     0852b4d4 <+0x1656>
0852b4ca +0x164c:  mov    $0xffffff9a,%ebx
0852b4cf +0x1651:  jmp    0852bfb1 <+0x2133>
0852b4d4 +0x1656:  lea    -0x130(%ebp),%eax
0852b4da +0x165c:  add    $0x9,%eax
0852b4dd +0x165f:  mov    %eax,0x4(%esp)
0852b4e1 +0x1663:  mov    0x8(%ebp),%eax
0852b4e4 +0x1666:  mov    %eax,(%esp)
0852b4e7 +0x1669:  call   08529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>  ; CTradeSpace::_IsTradable(Inven_Item const&)
0852b4ec +0x166e:  xor    $0x1,%eax
0852b4ef +0x1671:  test   %al,%al
0852b4f1 +0x1673:  je     0852b4fd <+0x167f>
0852b4f3 +0x1675:  mov    $0xffffff9a,%ebx
0852b4f8 +0x167a:  jmp    0852bfb1 <+0x2133>
0852b4fd +0x167f:  movl   $0x3,-0x34(%ebp)
0852b504 +0x1686:  jmp    0852b541 <+0x16c3>
0852b506 +0x1688:  mov    -0x5c(%ebp),%ebx
0852b509 +0x168b:  mov    -0x34(%ebp),%edx
0852b50c +0x168e:  mov    0x8(%ebp),%ecx
0852b50f +0x1691:  mov    %edx,%eax
0852b511 +0x1693:  shl    $0x3,%eax
0852b514 +0x1696:  add    %edx,%eax
0852b516 +0x1698:  shl    $0x3,%eax
0852b519 +0x169b:  imul   $0x798,%ebx,%edx
0852b51f +0x16a1:  add    %edx,%eax
0852b521 +0x16a3:  lea    (%ecx,%eax,1),%eax
0852b524 +0x16a6:  add    $0x40,%eax
0852b527 +0x16a9:  mov    (%eax),%edx
0852b529 +0x16ab:  mov    -0x120(%ebp),%eax
0852b52f +0x16b1:  cmp    %eax,%edx
0852b531 +0x16b3:  jne    0852b53d <+0x16bf>
0852b533 +0x16b5:  mov    $0xffffff99,%ebx
0852b538 +0x16ba:  jmp    0852bfb1 <+0x2133>
0852b53d +0x16bf:  addl   $0x1,-0x34(%ebp)
0852b541 +0x16c3:  cmpl   $0x1a,-0x34(%ebp)
0852b545 +0x16c7:  setle  %al
0852b548 +0x16ca:  test   %al,%al
0852b54a +0x16cc:  jne    0852b506 <+0x1688>
0852b54c +0x16ce:  mov    0xc(%ebp),%eax
0852b54f +0x16d1:  mov    %eax,(%esp)
0852b552 +0x16d4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852b557 +0x16d9:  movl   $0x1,0x14(%esp)
0852b55f +0x16e1:  movl   $0x1,0x10(%esp)
0852b567 +0x16e9:  mov    0x18(%ebp),%edx
0852b56a +0x16ec:  mov    %edx,0xc(%esp)
0852b56e +0x16f0:  mov    0x14(%ebp),%edx
0852b571 +0x16f3:  mov    %edx,0x8(%esp)
0852b575 +0x16f7:  movl   $0x2,0x4(%esp)
0852b57d +0x16ff:  mov    %eax,(%esp)
0852b580 +0x1702:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0852b585 +0x1707:  mov    %al,-0x35(%ebp)
0852b588 +0x170a:  movzbl -0x35(%ebp),%eax
0852b58c +0x170e:  xor    $0x1,%eax
0852b58f +0x1711:  test   %al,%al
0852b591 +0x1713:  je     0852b59d <+0x171f>
0852b593 +0x1715:  mov    $0xfffffff6,%ebx
0852b598 +0x171a:  jmp    0852bfb1 <+0x2133>
0852b59d +0x171f:  mov    0x18(%ebp),%eax
0852b5a0 +0x1722:  mov    %eax,0x50(%esp)
0852b5a4 +0x1726:  lea    0x8(%esp),%edx
0852b5a8 +0x172a:  lea    -0x130(%ebp),%ebx
0852b5ae +0x1730:  mov    $0x12,%eax
0852b5b3 +0x1735:  mov    %edx,%edi
0852b5b5 +0x1737:  mov    %ebx,%esi
0852b5b7 +0x1739:  mov    %eax,%ecx
0852b5b9 +0x173b:  rep movsl %ds:(%esi),%es:(%edi)
0852b5bb +0x173d:  mov    -0x5c(%ebp),%eax
0852b5be +0x1740:  mov    %eax,0x4(%esp)
0852b5c2 +0x1744:  mov    0x8(%ebp),%eax
0852b5c5 +0x1747:  mov    %eax,(%esp)
0852b5c8 +0x174a:  call   08529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>  ; CTradeSpace::add_item(int, TradeSlot, int)
0852b5cd +0x174f:  mov    %eax,-0x58(%ebp)
0852b5d0 +0x1752:  cmpl   $0xffffffff,-0x58(%ebp)
0852b5d4 +0x1756:  je     0852ba42 <+0x1bc4>
0852b5da +0x175c:  mov    0x8(%ebp),%eax
0852b5dd +0x175f:  mov    %eax,(%esp)
0852b5e0 +0x1762:  call   08530210 <_ZN11CTradeSpace10checkTradeEv>  ; CTradeSpace::checkTrade()
0852b5e5 +0x1767:  test   %al,%al
0852b5e7 +0x1769:  je     0852b5ff <+0x1781>
0852b5e9 +0x176b:  mov    0x8(%ebp),%eax
0852b5ec +0x176e:  mov    %eax,(%esp)
0852b5ef +0x1771:  call   0852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>  ; CTradeSpace::checkCancelTrade()
0852b5f4 +0x1776:  test   %al,%al
0852b5f6 +0x1778:  je     0852b5ff <+0x1781>
0852b5f8 +0x177a:  mov    $0x1,%eax
0852b5fd +0x177f:  jmp    0852b604 <+0x1786>
0852b5ff +0x1781:  mov    $0x0,%eax
0852b604 +0x1786:  test   %al,%al
0852b606 +0x1788:  je     0852b90f <+0x1a91>
0852b60c +0x178e:  mov    -0x5c(%ebp),%edx
0852b60f +0x1791:  mov    0x8(%ebp),%eax
0852b612 +0x1794:  add    $0x8,%edx
0852b615 +0x1797:  movl   $0x0,0x8(%eax,%edx,4)
0852b61d +0x179f:  mov    -0x60(%ebp),%edx
0852b620 +0x17a2:  mov    0x8(%ebp),%eax
0852b623 +0x17a5:  add    $0x8,%edx
0852b626 +0x17a8:  movl   $0x0,0x8(%eax,%edx,4)
0852b62e +0x17b0:  lea    -0xe0(%ebp),%eax
0852b634 +0x17b6:  mov    %eax,(%esp)
0852b637 +0x17b9:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852b63c +0x17be:  movl   $0xf,0x8(%esp)
0852b644 +0x17c6:  movl   $0x0,0x4(%esp)
0852b64c +0x17ce:  lea    -0xe0(%ebp),%eax
0852b652 +0x17d4:  mov    %eax,(%esp)
0852b655 +0x17d7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852b65a +0x17dc:  mov    -0x58(%ebp),%eax
0852b65d +0x17df:  mov    %eax,0x4(%esp)
0852b661 +0x17e3:  lea    -0xe0(%ebp),%eax
0852b667 +0x17e9:  mov    %eax,(%esp)
0852b66a +0x17ec:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852b66f +0x17f1:  mov    -0x125(%ebp),%eax
0852b675 +0x17f7:  mov    %eax,0x4(%esp)
0852b679 +0x17fb:  lea    -0xe0(%ebp),%eax
0852b67f +0x1801:  mov    %eax,(%esp)
0852b682 +0x1804:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b687 +0x1809:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0852b68c +0x180e:  mov    %eax,%esi
0852b68e +0x1810:  mov    -0x5c(%ebp),%ecx
0852b691 +0x1813:  mov    -0x58(%ebp),%edx
0852b694 +0x1816:  mov    %edx,%eax
0852b696 +0x1818:  shl    $0x3,%eax
0852b699 +0x181b:  add    %edx,%eax
0852b69b +0x181d:  shl    $0x3,%eax
0852b69e +0x1820:  imul   $0x798,%ecx,%edx
0852b6a4 +0x1826:  add    %edx,%eax
0852b6a6 +0x1828:  add    $0x30,%eax
0852b6a9 +0x182b:  add    0x8(%ebp),%eax
0852b6ac +0x182e:  add    $0x9,%eax
0852b6af +0x1831:  mov    %eax,(%esp)
0852b6b2 +0x1834:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852b6b7 +0x1839:  mov    %eax,%ebx
0852b6b9 +0x183b:  mov    0xc(%ebp),%eax
0852b6bc +0x183e:  mov    %eax,(%esp)
0852b6bf +0x1841:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b6c4 +0x1846:  mov    %eax,(%esp)
0852b6c7 +0x1849:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852b6cc +0x184e:  mov    %esi,0x8(%esp)
0852b6d0 +0x1852:  mov    %ebx,0x4(%esp)
0852b6d4 +0x1856:  mov    %eax,(%esp)
0852b6d7 +0x1859:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
0852b6dc +0x185e:  mov    %eax,0x4(%esp)
0852b6e0 +0x1862:  lea    -0xe0(%ebp),%eax
0852b6e6 +0x1868:  mov    %eax,(%esp)
0852b6e9 +0x186b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b6ee +0x1870:  lea    -0x130(%ebp),%eax
0852b6f4 +0x1876:  add    $0x9,%eax
0852b6f7 +0x1879:  mov    %eax,(%esp)
0852b6fa +0x187c:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0852b6ff +0x1881:  movzbl %al,%eax
0852b702 +0x1884:  mov    %eax,0x4(%esp)
0852b706 +0x1888:  lea    -0xe0(%ebp),%eax
0852b70c +0x188e:  mov    %eax,(%esp)
0852b70f +0x1891:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852b714 +0x1896:  movzwl -0x11c(%ebp),%eax
0852b71b +0x189d:  movzwl %ax,%eax
0852b71e +0x18a0:  mov    %eax,0x4(%esp)
0852b722 +0x18a4:  lea    -0xe0(%ebp),%eax
0852b728 +0x18aa:  mov    %eax,(%esp)
0852b72b +0x18ad:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852b730 +0x18b2:  mov    -0x11a(%ebp),%eax
0852b736 +0x18b8:  mov    %eax,0x4(%esp)
0852b73a +0x18bc:  lea    -0xe0(%ebp),%eax
0852b740 +0x18c2:  mov    %eax,(%esp)
0852b743 +0x18c5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b748 +0x18ca:  movl   $0x0,0x4(%esp)
0852b750 +0x18d2:  lea    -0xe0(%ebp),%eax
0852b756 +0x18d8:  mov    %eax,(%esp)
0852b759 +0x18db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852b75e +0x18e0:  movl   $0x0,0x4(%esp)
0852b766 +0x18e8:  lea    -0xe0(%ebp),%eax
0852b76c +0x18ee:  mov    %eax,(%esp)
0852b76f +0x18f1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852b774 +0x18f6:  mov    -0x5c(%ebp),%ebx
0852b777 +0x18f9:  mov    -0x58(%ebp),%edx
0852b77a +0x18fc:  mov    0x8(%ebp),%ecx
0852b77d +0x18ff:  mov    %edx,%eax
0852b77f +0x1901:  shl    $0x3,%eax
0852b782 +0x1904:  add    %edx,%eax
0852b784 +0x1906:  shl    $0x3,%eax
0852b787 +0x1909:  imul   $0x798,%ebx,%edx
0852b78d +0x190f:  add    %edx,%eax
0852b78f +0x1911:  lea    (%ecx,%eax,1),%eax
0852b792 +0x1914:  add    $0x30,%eax
0852b795 +0x1917:  movzbl 0xa(%eax),%eax
0852b799 +0x191b:  cmp    $0x8,%al
0852b79b +0x191d:  jne    0852b8c1 <+0x1a43>
0852b7a1 +0x1923:  movl   $0x1e,0x4(%esp)
0852b7a9 +0x192b:  lea    -0xe0(%ebp),%eax
0852b7af +0x1931:  mov    %eax,(%esp)
0852b7b2 +0x1934:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b7b7 +0x1939:  mov    -0x5c(%ebp),%ebx
0852b7ba +0x193c:  mov    -0x58(%ebp),%edx
0852b7bd +0x193f:  mov    0x8(%ebp),%ecx
0852b7c0 +0x1942:  mov    %edx,%eax
0852b7c2 +0x1944:  shl    $0x3,%eax
0852b7c5 +0x1947:  add    %edx,%eax
0852b7c7 +0x1949:  shl    $0x3,%eax
0852b7ca +0x194c:  imul   $0x798,%ebx,%edx
0852b7d0 +0x1952:  add    %edx,%eax
0852b7d2 +0x1954:  lea    (%ecx,%eax,1),%eax
0852b7d5 +0x1957:  add    $0x40,%eax
0852b7d8 +0x195a:  mov    (%eax),%ebx
0852b7da +0x195c:  mov    0xc(%ebp),%eax
0852b7dd +0x195f:  mov    %eax,(%esp)
0852b7e0 +0x1962:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b7e5 +0x1967:  mov    %eax,(%esp)
0852b7e8 +0x196a:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852b7ed +0x196f:  mov    %ebx,0x4(%esp)
0852b7f1 +0x1973:  mov    %eax,(%esp)
0852b7f4 +0x1976:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
0852b7f9 +0x197b:  movl   $0x1e,0x8(%esp)
0852b801 +0x1983:  mov    %eax,0x4(%esp)
0852b805 +0x1987:  lea    -0xe0(%ebp),%eax
0852b80b +0x198d:  mov    %eax,(%esp)
0852b80e +0x1990:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0852b813 +0x1995:  movl   $0x4,0x4(%esp)
0852b81b +0x199d:  lea    -0xe0(%ebp),%eax
0852b821 +0x19a3:  mov    %eax,(%esp)
0852b824 +0x19a6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852b829 +0x19ab:  mov    -0x5c(%ebp),%ebx
0852b82c +0x19ae:  mov    -0x58(%ebp),%edx
0852b82f +0x19b1:  mov    0x8(%ebp),%ecx
0852b832 +0x19b4:  mov    %edx,%eax
0852b834 +0x19b6:  shl    $0x3,%eax
0852b837 +0x19b9:  add    %edx,%eax
0852b839 +0x19bb:  shl    $0x3,%eax
0852b83c +0x19be:  imul   $0x798,%ebx,%edx
0852b842 +0x19c4:  add    %edx,%eax
0852b844 +0x19c6:  lea    (%ecx,%eax,1),%eax
0852b847 +0x19c9:  add    $0x40,%eax
0852b84a +0x19cc:  mov    (%eax),%ebx
0852b84c +0x19ce:  mov    0xc(%ebp),%eax
0852b84f +0x19d1:  mov    %eax,(%esp)
0852b852 +0x19d4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852b857 +0x19d9:  mov    %eax,(%esp)
0852b85a +0x19dc:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0852b85f +0x19e1:  mov    %ebx,0x4(%esp)
0852b863 +0x19e5:  mov    %eax,(%esp)
0852b866 +0x19e8:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
0852b86b +0x19ed:  mov    %eax,-0x30(%ebp)
0852b86e +0x19f0:  cmpl   $0x0,-0x30(%ebp)
0852b872 +0x19f4:  je     0852b893 <+0x1a15>
0852b874 +0x19f6:  mov    -0x30(%ebp),%eax
0852b877 +0x19f9:  movl   $0x4,0x8(%esp)
0852b87f +0x1a01:  mov    %eax,0x4(%esp)
0852b883 +0x1a05:  lea    -0xe0(%ebp),%eax
0852b889 +0x1a0b:  mov    %eax,(%esp)
0852b88c +0x1a0e:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0852b891 +0x1a13:  jmp    0852b8c1 <+0x1a43>
0852b893 +0x1a15:  lea    -0xe8(%ebp),%eax
0852b899 +0x1a1b:  mov    %eax,(%esp)
0852b89c +0x1a1e:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
0852b8a1 +0x1a23:  lea    -0xe8(%ebp),%eax
0852b8a7 +0x1a29:  movl   $0x4,0x8(%esp)
0852b8af +0x1a31:  mov    %eax,0x4(%esp)
0852b8b3 +0x1a35:  lea    -0xe0(%ebp),%eax
0852b8b9 +0x1a3b:  mov    %eax,(%esp)
0852b8bc +0x1a3e:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0852b8c1 +0x1a43:  lea    -0x130(%ebp),%eax
0852b8c7 +0x1a49:  add    $0x9,%eax
0852b8ca +0x1a4c:  mov    %eax,0x4(%esp)
0852b8ce +0x1a50:  lea    -0xe0(%ebp),%eax
0852b8d4 +0x1a56:  mov    %eax,(%esp)
0852b8d7 +0x1a59:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852b8dc +0x1a5e:  movl   $0x1,0x4(%esp)
0852b8e4 +0x1a66:  lea    -0xe0(%ebp),%eax
0852b8ea +0x1a6c:  mov    %eax,(%esp)
0852b8ed +0x1a6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852b8f2 +0x1a74:  lea    -0xe0(%ebp),%eax
0852b8f8 +0x1a7a:  mov    %eax,0x4(%esp)
0852b8fc +0x1a7e:  mov    -0x64(%ebp),%eax
0852b8ff +0x1a81:  mov    %eax,(%esp)
0852b902 +0x1a84:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852b907 +0x1a89:  mov    -0x58(%ebp),%ebx
0852b90a +0x1a8c:  jmp    0852bfb1 <+0x2133>
0852b90f +0x1a91:  mov    -0x5c(%ebp),%ecx
0852b912 +0x1a94:  mov    -0x58(%ebp),%edx
0852b915 +0x1a97:  mov    %edx,%eax
0852b917 +0x1a99:  shl    $0x3,%eax
0852b91a +0x1a9c:  add    %edx,%eax
0852b91c +0x1a9e:  shl    $0x3,%eax
0852b91f +0x1aa1:  imul   $0x798,%ecx,%edx
0852b925 +0x1aa7:  add    %edx,%eax
0852b927 +0x1aa9:  add    $0x30,%eax
0852b92a +0x1aac:  add    0x8(%ebp),%eax
0852b92d +0x1aaf:  add    $0x9,%eax
0852b930 +0x1ab2:  mov    %eax,(%esp)
0852b933 +0x1ab5:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852b938 +0x1aba:  mov    0xc(%ebp),%eax
0852b93b +0x1abd:  mov    %eax,(%esp)
0852b93e +0x1ac0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852b943 +0x1ac5:  movl   $0x1,0x4c(%esp)
0852b94b +0x1acd:  movl   $0x4,0x48(%esp)
0852b953 +0x1ad5:  mov    0x14(%ebp),%edx
0852b956 +0x1ad8:  mov    %edx,0x44(%esp)
0852b95a +0x1adc:  mov    -0x127(%ebp),%edx
0852b960 +0x1ae2:  mov    %edx,0x4(%esp)
0852b964 +0x1ae6:  mov    -0x123(%ebp),%edx
0852b96a +0x1aec:  mov    %edx,0x8(%esp)
0852b96e +0x1af0:  mov    -0x11f(%ebp),%edx
0852b974 +0x1af6:  mov    %edx,0xc(%esp)
0852b978 +0x1afa:  mov    -0x11b(%ebp),%edx
0852b97e +0x1b00:  mov    %edx,0x10(%esp)
0852b982 +0x1b04:  mov    -0x117(%ebp),%edx
0852b988 +0x1b0a:  mov    %edx,0x14(%esp)
0852b98c +0x1b0e:  mov    -0x113(%ebp),%edx
0852b992 +0x1b14:  mov    %edx,0x18(%esp)
0852b996 +0x1b18:  mov    -0x10f(%ebp),%edx
0852b99c +0x1b1e:  mov    %edx,0x1c(%esp)
0852b9a0 +0x1b22:  mov    -0x10b(%ebp),%edx
0852b9a6 +0x1b28:  mov    %edx,0x20(%esp)
0852b9aa +0x1b2c:  mov    -0x107(%ebp),%edx
0852b9b0 +0x1b32:  mov    %edx,0x24(%esp)
0852b9b4 +0x1b36:  mov    -0x103(%ebp),%edx
0852b9ba +0x1b3c:  mov    %edx,0x28(%esp)
0852b9be +0x1b40:  mov    -0xff(%ebp),%edx
0852b9c4 +0x1b46:  mov    %edx,0x2c(%esp)
0852b9c8 +0x1b4a:  mov    -0xfb(%ebp),%edx
0852b9ce +0x1b50:  mov    %edx,0x30(%esp)
0852b9d2 +0x1b54:  mov    -0xf7(%ebp),%edx
0852b9d8 +0x1b5a:  mov    %edx,0x34(%esp)
0852b9dc +0x1b5e:  mov    -0xf3(%ebp),%edx
0852b9e2 +0x1b64:  mov    %edx,0x38(%esp)
0852b9e6 +0x1b68:  mov    -0xef(%ebp),%edx
0852b9ec +0x1b6e:  mov    %edx,0x3c(%esp)
0852b9f0 +0x1b72:  movzbl -0xeb(%ebp),%edx
0852b9f7 +0x1b79:  mov    %dl,0x40(%esp)
0852b9fb +0x1b7d:  mov    %eax,(%esp)
0852b9fe +0x1b80:  call   085037d8 <_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoSpecificSlot(Inven_Item, int, eAvatarItemAddReason, bool)
0852ba03 +0x1b85:  mov    %eax,-0x2c(%ebp)
0852ba06 +0x1b88:  cmpl   $0x0,-0x2c(%ebp)
0852ba0a +0x1b8c:  jns    0852ba38 <+0x1bba>
0852ba0c +0x1b8e:  mov    -0x125(%ebp),%eax
0852ba12 +0x1b94:  mov    0xc(%ebp),%edx
0852ba15 +0x1b97:  lea    0x79700(%edx),%ecx
0852ba1b +0x1b9d:  mov    0x18(%ebp),%edx
0852ba1e +0x1ba0:  mov    %edx,0x8(%esp)
0852ba22 +0x1ba4:  mov    %eax,0x4(%esp)
0852ba26 +0x1ba8:  mov    %ecx,(%esp)
0852ba29 +0x1bab:  call   08683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>  ; cUserHistoryLog::TradeItemAddFail(int, int)
0852ba2e +0x1bb0:  mov    $0xfffffff5,%ebx
0852ba33 +0x1bb5:  jmp    0852bfb1 <+0x2133>
0852ba38 +0x1bba:  mov    $0xfffffff4,%ebx
0852ba3d +0x1bbf:  jmp    0852bfb1 <+0x2133>
0852ba42 +0x1bc4:  mov    -0x58(%ebp),%ebx
0852ba45 +0x1bc7:  jmp    0852bfb1 <+0x2133>
0852ba4a +0x1bcc:  mov    0xc(%ebp),%eax
0852ba4d +0x1bcf:  mov    %eax,(%esp)
0852ba50 +0x1bd2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852ba55 +0x1bd7:  lea    -0x178(%ebp),%edx
0852ba5b +0x1bdd:  mov    0x14(%ebp),%ecx
0852ba5e +0x1be0:  mov    %ecx,0xc(%esp)
0852ba62 +0x1be4:  movl   $0x3,0x8(%esp)
0852ba6a +0x1bec:  mov    %eax,0x4(%esp)
0852ba6e +0x1bf0:  mov    %edx,(%esp)
0852ba71 +0x1bf3:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0852ba76 +0x1bf8:  sub    $0x4,%esp
0852ba79 +0x1bfb:  mov    -0x178(%ebp),%eax
0852ba7f +0x1c01:  mov    %eax,-0x127(%ebp)
0852ba85 +0x1c07:  mov    -0x174(%ebp),%eax
0852ba8b +0x1c0d:  mov    %eax,-0x123(%ebp)
0852ba91 +0x1c13:  mov    -0x170(%ebp),%eax
0852ba97 +0x1c19:  mov    %eax,-0x11f(%ebp)
0852ba9d +0x1c1f:  mov    -0x16c(%ebp),%eax
0852baa3 +0x1c25:  mov    %eax,-0x11b(%ebp)
0852baa9 +0x1c2b:  mov    -0x168(%ebp),%eax
0852baaf +0x1c31:  mov    %eax,-0x117(%ebp)
0852bab5 +0x1c37:  mov    -0x164(%ebp),%eax
0852babb +0x1c3d:  mov    %eax,-0x113(%ebp)
0852bac1 +0x1c43:  mov    -0x160(%ebp),%eax
0852bac7 +0x1c49:  mov    %eax,-0x10f(%ebp)
0852bacd +0x1c4f:  mov    -0x15c(%ebp),%eax
0852bad3 +0x1c55:  mov    %eax,-0x10b(%ebp)
0852bad9 +0x1c5b:  mov    -0x158(%ebp),%eax
0852badf +0x1c61:  mov    %eax,-0x107(%ebp)
0852bae5 +0x1c67:  mov    -0x154(%ebp),%eax
0852baeb +0x1c6d:  mov    %eax,-0x103(%ebp)
0852baf1 +0x1c73:  mov    -0x150(%ebp),%eax
0852baf7 +0x1c79:  mov    %eax,-0xff(%ebp)
0852bafd +0x1c7f:  mov    -0x14c(%ebp),%eax
0852bb03 +0x1c85:  mov    %eax,-0xfb(%ebp)
0852bb09 +0x1c8b:  mov    -0x148(%ebp),%eax
0852bb0f +0x1c91:  mov    %eax,-0xf7(%ebp)
0852bb15 +0x1c97:  mov    -0x144(%ebp),%eax
0852bb1b +0x1c9d:  mov    %eax,-0xf3(%ebp)
0852bb21 +0x1ca3:  mov    -0x140(%ebp),%eax
0852bb27 +0x1ca9:  mov    %eax,-0xef(%ebp)
0852bb2d +0x1caf:  movzbl -0x13c(%ebp),%eax
0852bb34 +0x1cb6:  mov    %al,-0xeb(%ebp)
0852bb3a +0x1cbc:  cmpl   $0x0,0x18(%ebp)
0852bb3e +0x1cc0:  jg     0852bb4a <+0x1ccc>
0852bb40 +0x1cc2:  mov    $0xfffffff7,%ebx
0852bb45 +0x1cc7:  jmp    0852bfb1 <+0x2133>
0852bb4a +0x1ccc:  mov    0x14(%ebp),%eax
0852bb4d +0x1ccf:  mov    %eax,-0x130(%ebp)
0852bb53 +0x1cd5:  mov    0xc(%ebp),%eax
0852bb56 +0x1cd8:  mov    %eax,(%esp)
0852bb59 +0x1cdb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852bb5e +0x1ce0:  mov    %eax,-0x12c(%ebp)
0852bb64 +0x1ce6:  lea    -0x130(%ebp),%eax
0852bb6a +0x1cec:  add    $0x9,%eax
0852bb6d +0x1cef:  mov    %eax,0x4(%esp)
0852bb71 +0x1cf3:  mov    0x8(%ebp),%eax
0852bb74 +0x1cf6:  mov    %eax,(%esp)
0852bb77 +0x1cf9:  call   08529dce <_ZN11CTradeSpace11_IsTradableERK10Inven_Item>  ; CTradeSpace::_IsTradable(Inven_Item const&)
0852bb7c +0x1cfe:  xor    $0x1,%eax
0852bb7f +0x1d01:  test   %al,%al
0852bb81 +0x1d03:  je     0852bb8d <+0x1d0f>
0852bb83 +0x1d05:  mov    $0xffffff9a,%ebx
0852bb88 +0x1d0a:  jmp    0852bfb1 <+0x2133>
0852bb8d +0x1d0f:  mov    0xc(%ebp),%eax
0852bb90 +0x1d12:  mov    %eax,(%esp)
0852bb93 +0x1d15:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852bb98 +0x1d1a:  movl   $0x1,0x14(%esp)
0852bba0 +0x1d22:  movl   $0x15,0x10(%esp)
0852bba8 +0x1d2a:  mov    0x18(%ebp),%edx
0852bbab +0x1d2d:  mov    %edx,0xc(%esp)
0852bbaf +0x1d31:  mov    0x14(%ebp),%edx
0852bbb2 +0x1d34:  mov    %edx,0x8(%esp)
0852bbb6 +0x1d38:  movl   $0x3,0x4(%esp)
0852bbbe +0x1d40:  mov    %eax,(%esp)
0852bbc1 +0x1d43:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0852bbc6 +0x1d48:  mov    %al,-0x25(%ebp)
0852bbc9 +0x1d4b:  movzbl -0x25(%ebp),%eax
0852bbcd +0x1d4f:  xor    $0x1,%eax
0852bbd0 +0x1d52:  test   %al,%al
0852bbd2 +0x1d54:  je     0852bbde <+0x1d60>
0852bbd4 +0x1d56:  mov    $0xfffffff6,%ebx
0852bbd9 +0x1d5b:  jmp    0852bfb1 <+0x2133>
0852bbde +0x1d60:  mov    0x18(%ebp),%eax
0852bbe1 +0x1d63:  mov    %eax,0x50(%esp)
0852bbe5 +0x1d67:  lea    0x8(%esp),%edx
0852bbe9 +0x1d6b:  lea    -0x130(%ebp),%ebx
0852bbef +0x1d71:  mov    $0x12,%eax
0852bbf4 +0x1d76:  mov    %edx,%edi
0852bbf6 +0x1d78:  mov    %ebx,%esi
0852bbf8 +0x1d7a:  mov    %eax,%ecx
0852bbfa +0x1d7c:  rep movsl %ds:(%esi),%es:(%edi)
0852bbfc +0x1d7e:  mov    -0x5c(%ebp),%eax
0852bbff +0x1d81:  mov    %eax,0x4(%esp)
0852bc03 +0x1d85:  mov    0x8(%ebp),%eax
0852bc06 +0x1d88:  mov    %eax,(%esp)
0852bc09 +0x1d8b:  call   08529aa2 <_ZN11CTradeSpace8add_itemEi9TradeSloti>  ; CTradeSpace::add_item(int, TradeSlot, int)
0852bc0e +0x1d90:  mov    %eax,-0x58(%ebp)
0852bc11 +0x1d93:  cmpl   $0xffffffff,-0x58(%ebp)
0852bc15 +0x1d97:  je     0852bf87 <+0x2109>
0852bc1b +0x1d9d:  mov    0x8(%ebp),%eax
0852bc1e +0x1da0:  mov    %eax,(%esp)
0852bc21 +0x1da3:  call   08530210 <_ZN11CTradeSpace10checkTradeEv>  ; CTradeSpace::checkTrade()
0852bc26 +0x1da8:  test   %al,%al
0852bc28 +0x1daa:  je     0852bc40 <+0x1dc2>
0852bc2a +0x1dac:  mov    0x8(%ebp),%eax
0852bc2d +0x1daf:  mov    %eax,(%esp)
0852bc30 +0x1db2:  call   0852dbb8 <_ZN11CTradeSpace16checkCancelTradeEv>  ; CTradeSpace::checkCancelTrade()
0852bc35 +0x1db7:  test   %al,%al
0852bc37 +0x1db9:  je     0852bc40 <+0x1dc2>
0852bc39 +0x1dbb:  mov    $0x1,%eax
0852bc3e +0x1dc0:  jmp    0852bc45 <+0x1dc7>
0852bc40 +0x1dc2:  mov    $0x0,%eax
0852bc45 +0x1dc7:  test   %al,%al
0852bc47 +0x1dc9:  je     0852be5a <+0x1fdc>
0852bc4d +0x1dcf:  mov    -0x5c(%ebp),%edx
0852bc50 +0x1dd2:  mov    0x8(%ebp),%eax
0852bc53 +0x1dd5:  add    $0x8,%edx
0852bc56 +0x1dd8:  movl   $0x0,0x8(%eax,%edx,4)
0852bc5e +0x1de0:  mov    -0x60(%ebp),%edx
0852bc61 +0x1de3:  mov    0x8(%ebp),%eax
0852bc64 +0x1de6:  add    $0x8,%edx
0852bc67 +0x1de9:  movl   $0x0,0x8(%eax,%edx,4)
0852bc6f +0x1df1:  lea    -0xe0(%ebp),%eax
0852bc75 +0x1df7:  mov    %eax,(%esp)
0852bc78 +0x1dfa:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852bc7d +0x1dff:  movl   $0xf,0x8(%esp)
0852bc85 +0x1e07:  movl   $0x0,0x4(%esp)
0852bc8d +0x1e0f:  lea    -0xe0(%ebp),%eax
0852bc93 +0x1e15:  mov    %eax,(%esp)
0852bc96 +0x1e18:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852bc9b +0x1e1d:  mov    -0x58(%ebp),%eax
0852bc9e +0x1e20:  mov    %eax,0x4(%esp)
0852bca2 +0x1e24:  lea    -0xe0(%ebp),%eax
0852bca8 +0x1e2a:  mov    %eax,(%esp)
0852bcab +0x1e2d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852bcb0 +0x1e32:  mov    -0x125(%ebp),%eax
0852bcb6 +0x1e38:  mov    %eax,0x4(%esp)
0852bcba +0x1e3c:  lea    -0xe0(%ebp),%eax
0852bcc0 +0x1e42:  mov    %eax,(%esp)
0852bcc3 +0x1e45:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852bcc8 +0x1e4a:  mov    -0x5c(%ebp),%ecx
0852bccb +0x1e4d:  mov    -0x58(%ebp),%edx
0852bcce +0x1e50:  mov    %edx,%eax
0852bcd0 +0x1e52:  shl    $0x3,%eax
0852bcd3 +0x1e55:  add    %edx,%eax
0852bcd5 +0x1e57:  shl    $0x3,%eax
0852bcd8 +0x1e5a:  imul   $0x798,%ecx,%edx
0852bcde +0x1e60:  add    %edx,%eax
0852bce0 +0x1e62:  add    $0x30,%eax
0852bce3 +0x1e65:  add    0x8(%ebp),%eax
0852bce6 +0x1e68:  add    $0x9,%eax
0852bce9 +0x1e6b:  mov    %eax,(%esp)
0852bcec +0x1e6e:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852bcf1 +0x1e73:  mov    %eax,0x4(%esp)
0852bcf5 +0x1e77:  lea    -0xe0(%ebp),%eax
0852bcfb +0x1e7d:  mov    %eax,(%esp)
0852bcfe +0x1e80:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852bd03 +0x1e85:  lea    -0x130(%ebp),%eax
0852bd09 +0x1e8b:  add    $0x9,%eax
0852bd0c +0x1e8e:  mov    %eax,(%esp)
0852bd0f +0x1e91:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0852bd14 +0x1e96:  movzbl %al,%eax
0852bd17 +0x1e99:  mov    %eax,0x4(%esp)
0852bd1b +0x1e9d:  lea    -0xe0(%ebp),%eax
0852bd21 +0x1ea3:  mov    %eax,(%esp)
0852bd24 +0x1ea6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852bd29 +0x1eab:  movzwl -0x11c(%ebp),%eax
0852bd30 +0x1eb2:  movzwl %ax,%eax
0852bd33 +0x1eb5:  mov    %eax,0x4(%esp)
0852bd37 +0x1eb9:  lea    -0xe0(%ebp),%eax
0852bd3d +0x1ebf:  mov    %eax,(%esp)
0852bd40 +0x1ec2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852bd45 +0x1ec7:  mov    -0x11a(%ebp),%eax
0852bd4b +0x1ecd:  mov    %eax,0x4(%esp)
0852bd4f +0x1ed1:  lea    -0xe0(%ebp),%eax
0852bd55 +0x1ed7:  mov    %eax,(%esp)
0852bd58 +0x1eda:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852bd5d +0x1edf:  movl   $0x0,0x4(%esp)
0852bd65 +0x1ee7:  lea    -0xe0(%ebp),%eax
0852bd6b +0x1eed:  mov    %eax,(%esp)
0852bd6e +0x1ef0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852bd73 +0x1ef5:  movl   $0x0,0x4(%esp)
0852bd7b +0x1efd:  lea    -0xe0(%ebp),%eax
0852bd81 +0x1f03:  mov    %eax,(%esp)
0852bd84 +0x1f06:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852bd89 +0x1f0b:  movzbl -0x126(%ebp),%eax
0852bd90 +0x1f12:  cmp    $0x5,%al
0852bd92 +0x1f14:  jne    0852be0c <+0x1f8e>
0852bd94 +0x1f16:  movl   $0x0,-0x24(%ebp)
0852bd9b +0x1f1d:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0852bda0 +0x1f22:  mov    %eax,-0x24(%ebp)
0852bda3 +0x1f25:  mov    -0x5c(%ebp),%ecx
0852bda6 +0x1f28:  mov    -0x58(%ebp),%edx
0852bda9 +0x1f2b:  mov    %edx,%eax
0852bdab +0x1f2d:  shl    $0x3,%eax
0852bdae +0x1f30:  add    %edx,%eax
0852bdb0 +0x1f32:  shl    $0x3,%eax
0852bdb3 +0x1f35:  imul   $0x798,%ecx,%edx
0852bdb9 +0x1f3b:  add    %edx,%eax
0852bdbb +0x1f3d:  add    $0x30,%eax
0852bdbe +0x1f40:  add    0x8(%ebp),%eax
0852bdc1 +0x1f43:  add    $0x9,%eax
0852bdc4 +0x1f46:  mov    %eax,(%esp)
0852bdc7 +0x1f49:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852bdcc +0x1f4e:  mov    %eax,%ebx
0852bdce +0x1f50:  mov    0xc(%ebp),%eax
0852bdd1 +0x1f53:  mov    %eax,(%esp)
0852bdd4 +0x1f56:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852bdd9 +0x1f5b:  mov    %eax,(%esp)
0852bddc +0x1f5e:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0852bde1 +0x1f63:  mov    -0x24(%ebp),%edx
0852bde4 +0x1f66:  mov    %edx,0x8(%esp)
0852bde8 +0x1f6a:  mov    %ebx,0x4(%esp)
0852bdec +0x1f6e:  mov    %eax,(%esp)
0852bdef +0x1f71:  call   0833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>  ; user_creature::CCreatureMgr::GetRemainDate(int, int) const
0852bdf4 +0x1f76:  mov    %eax,-0x20(%ebp)
0852bdf7 +0x1f79:  mov    -0x20(%ebp),%eax
0852bdfa +0x1f7c:  mov    %eax,0x4(%esp)
0852bdfe +0x1f80:  lea    -0xe0(%ebp),%eax
0852be04 +0x1f86:  mov    %eax,(%esp)
0852be07 +0x1f89:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852be0c +0x1f8e:  lea    -0x130(%ebp),%eax
0852be12 +0x1f94:  add    $0x9,%eax
0852be15 +0x1f97:  mov    %eax,0x4(%esp)
0852be19 +0x1f9b:  lea    -0xe0(%ebp),%eax
0852be1f +0x1fa1:  mov    %eax,(%esp)
0852be22 +0x1fa4:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852be27 +0x1fa9:  movl   $0x1,0x4(%esp)
0852be2f +0x1fb1:  lea    -0xe0(%ebp),%eax
0852be35 +0x1fb7:  mov    %eax,(%esp)
0852be38 +0x1fba:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852be3d +0x1fbf:  lea    -0xe0(%ebp),%eax
0852be43 +0x1fc5:  mov    %eax,0x4(%esp)
0852be47 +0x1fc9:  mov    -0x64(%ebp),%eax
0852be4a +0x1fcc:  mov    %eax,(%esp)
0852be4d +0x1fcf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852be52 +0x1fd4:  mov    -0x58(%ebp),%ebx
0852be55 +0x1fd7:  jmp    0852bfb1 <+0x2133>
0852be5a +0x1fdc:  mov    -0x5c(%ebp),%ecx
0852be5d +0x1fdf:  mov    -0x58(%ebp),%edx
0852be60 +0x1fe2:  mov    %edx,%eax
0852be62 +0x1fe4:  shl    $0x3,%eax
0852be65 +0x1fe7:  add    %edx,%eax
0852be67 +0x1fe9:  shl    $0x3,%eax
0852be6a +0x1fec:  imul   $0x798,%ecx,%edx
0852be70 +0x1ff2:  add    %edx,%eax
0852be72 +0x1ff4:  add    $0x30,%eax
0852be75 +0x1ff7:  add    0x8(%ebp),%eax
0852be78 +0x1ffa:  add    $0x9,%eax
0852be7b +0x1ffd:  mov    %eax,(%esp)
0852be7e +0x2000:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0852be83 +0x2005:  mov    0xc(%ebp),%eax
0852be86 +0x2008:  mov    %eax,(%esp)
0852be89 +0x200b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852be8e +0x2010:  movl   $0x1,0x4c(%esp)
0852be96 +0x2018:  movl   $0x1d,0x48(%esp)
0852be9e +0x2020:  mov    0x14(%ebp),%edx
0852bea1 +0x2023:  mov    %edx,0x44(%esp)
0852bea5 +0x2027:  mov    -0x127(%ebp),%edx
0852beab +0x202d:  mov    %edx,0x4(%esp)
0852beaf +0x2031:  mov    -0x123(%ebp),%edx
0852beb5 +0x2037:  mov    %edx,0x8(%esp)
0852beb9 +0x203b:  mov    -0x11f(%ebp),%edx
0852bebf +0x2041:  mov    %edx,0xc(%esp)
0852bec3 +0x2045:  mov    -0x11b(%ebp),%edx
0852bec9 +0x204b:  mov    %edx,0x10(%esp)
0852becd +0x204f:  mov    -0x117(%ebp),%edx
0852bed3 +0x2055:  mov    %edx,0x14(%esp)
0852bed7 +0x2059:  mov    -0x113(%ebp),%edx
0852bedd +0x205f:  mov    %edx,0x18(%esp)
0852bee1 +0x2063:  mov    -0x10f(%ebp),%edx
0852bee7 +0x2069:  mov    %edx,0x1c(%esp)
0852beeb +0x206d:  mov    -0x10b(%ebp),%edx
0852bef1 +0x2073:  mov    %edx,0x20(%esp)
0852bef5 +0x2077:  mov    -0x107(%ebp),%edx
0852befb +0x207d:  mov    %edx,0x24(%esp)
0852beff +0x2081:  mov    -0x103(%ebp),%edx
0852bf05 +0x2087:  mov    %edx,0x28(%esp)
0852bf09 +0x208b:  mov    -0xff(%ebp),%edx
0852bf0f +0x2091:  mov    %edx,0x2c(%esp)
0852bf13 +0x2095:  mov    -0xfb(%ebp),%edx
0852bf19 +0x209b:  mov    %edx,0x30(%esp)
0852bf1d +0x209f:  mov    -0xf7(%ebp),%edx
0852bf23 +0x20a5:  mov    %edx,0x34(%esp)
0852bf27 +0x20a9:  mov    -0xf3(%ebp),%edx
0852bf2d +0x20af:  mov    %edx,0x38(%esp)
0852bf31 +0x20b3:  mov    -0xef(%ebp),%edx
0852bf37 +0x20b9:  mov    %edx,0x3c(%esp)
0852bf3b +0x20bd:  movzbl -0xeb(%ebp),%edx
0852bf42 +0x20c4:  mov    %dl,0x40(%esp)
0852bf46 +0x20c8:  mov    %eax,(%esp)
0852bf49 +0x20cb:  call   0850ab10 <_ZN10CInventory30insertCreatureIntoSpecificSlotE10Inven_Itemi14eItemAddReasonb>  ; CInventory::insertCreatureIntoSpecificSlot(Inven_Item, int, eItemAddReason, bool)
0852bf4e +0x20d0:  mov    %eax,-0x1c(%ebp)
0852bf51 +0x20d3:  cmpl   $0x0,-0x1c(%ebp)
0852bf55 +0x20d7:  jns    0852bf80 <+0x2102>
0852bf57 +0x20d9:  mov    -0x125(%ebp),%eax
0852bf5d +0x20df:  mov    0xc(%ebp),%edx
0852bf60 +0x20e2:  lea    0x79700(%edx),%ecx
0852bf66 +0x20e8:  mov    0x18(%ebp),%edx
0852bf69 +0x20eb:  mov    %edx,0x8(%esp)
0852bf6d +0x20ef:  mov    %eax,0x4(%esp)
0852bf71 +0x20f3:  mov    %ecx,(%esp)
0852bf74 +0x20f6:  call   08683d5a <_ZN15cUserHistoryLog16TradeItemAddFailEii>  ; cUserHistoryLog::TradeItemAddFail(int, int)
0852bf79 +0x20fb:  mov    $0xfffffff5,%ebx
0852bf7e +0x2100:  jmp    0852bfb1 <+0x2133>
0852bf80 +0x2102:  mov    $0xfffffff4,%ebx
0852bf85 +0x2107:  jmp    0852bfb1 <+0x2133>
0852bf87 +0x2109:  mov    -0x58(%ebp),%ebx
0852bf8a +0x210c:  jmp    0852bfb1 <+0x2133>
0852bf8c +0x210e:  mov    $0xffffffec,%ebx
0852bf91 +0x2113:  jmp    0852bfb1 <+0x2133>
0852bf93 +0x2115:  mov    %edx,%ebx
0852bf95 +0x2117:  mov    %eax,%esi
0852bf97 +0x2119:  lea    -0xe0(%ebp),%eax
0852bf9d +0x211f:  mov    %eax,(%esp)
0852bfa0 +0x2122:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852bfa5 +0x2127:  mov    %esi,%eax
0852bfa7 +0x2129:  mov    %ebx,%edx
0852bfa9 +0x212b:  mov    %eax,(%esp)
0852bfac +0x212e:  call   08ae3750 <_Unwind_Resume>
0852bfb1 +0x2133:  lea    -0xe0(%ebp),%eax
0852bfb7 +0x2139:  mov    %eax,(%esp)
0852bfba +0x213c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852bfbf +0x2141:  mov    %ebx,%eax
0852bfc1 +0x2143:  lea    -0xc(%ebp),%esp
0852bfc4 +0x2146:  add    $0x0,%esp
0852bfc7 +0x2149:  pop    %ebx
0852bfc8 +0x214a:  pop    %esi
0852bfc9 +0x214b:  pop    %edi
0852bfca +0x214c:  pop    %ebp
0852bfcb +0x214d:  ret
```

## 反编译 C

```c
// CTradeSpace::regist_item @ 0x8529e7e

/* CTradeSpace::regist_item(CUser*, int, int, int) */

int __thiscall
CTradeSpace::regist_item(CTradeSpace *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  uint uVar6;
  CAvatarItemMgr *pCVar7;
  int iVar8;
  char *pcVar9;
  CCreatureMgr *this_00;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  undefined1 local_17c [12];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140;
  int local_134;
  undefined4 local_130;
  undefined1 local_12c;
  Inven_Item local_12b;
  char cStack_12a;
  undefined2 uStack_129;
  undefined2 local_127;
  undefined1 uStack_125;
  int iStack_124;
  undefined1 uStack_120;
  undefined4 uStack_11f;
  undefined4 local_11b;
  undefined4 local_117;
  undefined4 local_113;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined1 local_ef;
  stAvatarExpansionInfo_t local_ec [4];
  stAvatarExpansionInfo_t local_e8 [4];
  PacketGuard local_e4 [12];
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  CUser *local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  char local_55;
  int local_54;
  char local_4d;
  int local_4c;
  char *local_48;
  int local_44;
  int local_40;
  char local_39;
  int local_38;
  char *local_34;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  bVar13 = 0;
  cVar1 = IsLocked(this);
  if (cVar1 != '\0') {
    return -99;
  }
  if (param_4 < 1) {
    return -0x62;
  }
  bVar12 = *(CUser **)(this + 0x20) != param_1;
  if (bVar12) {
    local_68 = *(CUser **)(this + 0x20);
  }
  else {
    local_68 = *(CUser **)(this + 0x24);
  }
  local_60 = (uint)bVar12;
  local_64 = (uint)!bVar12;
  if (local_68 == (CUser *)0x0) {
    return -1;
  }
  TradeSlot::TradeSlot((TradeSlot *)&local_134);
  local_12c = (undefined1)param_2;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    cMyTrace::cMyTrace(local_d8,"int CTradeSpace::regist_item(CUser*, int, int, int)",0x147,5);
    cMyTrace::operator()(local_d8,"CTradeSpace::regist_item()\t0 == owner->getCurCharacR()");
    return -2;
  }
  if ((param_2 == 0) ||
     ((cVar1 = CUser::isHackUser(param_1), cVar1 == '\0' &&
      (cVar1 = CUser::isHackUser(local_68), cVar1 == '\0')))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (bVar12) {
    return -0x153;
  }
  PacketGuard::PacketGuard(local_e4);
  if (param_2 == 1) {
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_17c,iVar2);
    local_12b = SUB41(local_17c._0_4_,0);
    cStack_12a = SUB41(local_17c._0_4_,1);
    uStack_129 = SUB42(local_17c._0_4_,2);
    local_127 = (undefined2)local_17c._4_4_;
    uStack_125 = SUB41(local_17c._4_4_,2);
    iStack_124._1_3_ = (undefined3)local_17c._8_4_;
    iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
    uStack_120 = SUB41(local_17c._8_4_,3);
    uStack_11f = local_170;
    local_11b = local_16c;
    local_117 = local_168;
    local_113 = local_164;
    local_10f = local_160;
    local_10b = local_15c;
    local_107 = local_158;
    local_103 = local_154;
    local_ff = local_150;
    local_fb = local_14c;
    local_f7 = local_148;
    local_f3 = local_144;
    local_ef = local_140;
    if (param_4 < 1) {
      iVar2 = -9;
    }
    else {
      local_134 = param_3;
      local_130 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      iVar2 = iStack_124;
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
      local_40 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar7,iVar2);
      if ((local_40 == 0) ||
         (iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         iVar2 <= local_40)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        iVar2 = -100;
      }
      else {
        cVar1 = WongWork::CAvatarItemMgr::IsTempKey(iStack_124);
        if (cVar1 == '\0') {
          cVar1 = _IsTradable(this,&local_12b);
          if (cVar1 == '\x01') {
            for (local_38 = 3; local_38 < 0x1b; local_38 = local_38 + 1) {
              if (*(int *)(this + local_38 * 0x48 + local_60 * 0x798 + 0x40) == iStack_124) {
                iVar2 = -0x67;
                goto LAB_0852bfb1;
              }
            }
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_39 = CInventory::delete_item(pCVar5,2);
            if (local_39 == '\x01') {
              piVar10 = &local_134;
              piVar11 = (int *)&stack0xfffffe2c;
              for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar11 = *piVar10;
                piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
                piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
              }
              iVar2 = add_item(this,local_60);
              local_5c = iVar2;
              if (iVar2 != -1) {
                cVar1 = checkTrade(this);
                if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (bVar12) {
                  *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                  *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                  iVar2 = OS_API::GetDateTimeTick();
                  iVar8 = Inven_Item::get_add_info
                                    ((Inven_Item *)
                                     (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                  iVar2 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar7,iVar8,iVar2);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                  uVar6 = Inven_Item::GetItemAttr(&local_12b);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_e4,
                             (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,
                             CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
                  if (this[local_5c * 0x48 + local_60 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0x1e);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    pcVar9 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar7,iVar2);
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,pcVar9,0x1e);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,4);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    local_34 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar7,iVar2);
                    if (local_34 == (char *)0x0) {
                      stAvatarExpansionInfo_t::init(local_ec);
                      InterfacePacketBuf::put_binary
                                ((InterfacePacketBuf *)local_e4,(char *)local_ec,4);
                    }
                    else {
                      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,local_34,4);
                    }
                  }
                  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                  CUser::Send(local_68,local_e4);
                  iVar2 = local_5c;
                }
                else {
                  Inven_Item::reset((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39)
                                   );
                  uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  local_30 = CInventory::insertAvatarIntoSpecificSlot
                                       (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)));
                  if (local_30 < 0) {
                    cUserHistoryLog::TradeItemAddFail
                              ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_127,uStack_129)
                               ,param_4);
                    iVar2 = -0xb;
                  }
                  else {
                    iVar2 = -0xc;
                  }
                }
              }
            }
            else {
              iVar2 = -10;
            }
          }
          else {
            iVar2 = -0x66;
          }
        }
        else {
          iVar2 = -0x66;
        }
      }
    }
    goto LAB_0852bfb1;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      if ((param_3 < 0) || (0x138 < param_3)) {
                    /* try { // try from 0852a030 to 0852bf78 has its CatchHandler @ 0852bf93 */
        LogManager::logFormat
                  (1,"item_trade.cpp","int CTradeSpace::regist_item(CUser*, int, int, int)",0x15e,
                   "slot_no(%d) < 0 || slot_no > Inven_Item::MAX_INVEN_SLOT");
        iVar2 = -3;
      }
      else if (param_3 == 0) {
        uVar3 = CUser::getTotalHackUserTradeGold(param_1);
        uVar4 = CUser::getTotalHackUserTradeCnt(param_1);
        cVar1 = WongWork::CAutoPunishRuleHackTypeMgr::checkTotalTradeRuleOver
                          (GlobalData::g_autoPunishRuleHackTypeMgr,CONCAT44(uVar3,uVar4));
        if (cVar1 == '\0') {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar1 = CInventory::use_money(pCVar5,param_4);
          if (cVar1 == '\0') {
            iVar2 = -5;
          }
          else {
            *(int *)(this + (local_60 + 0x3d8) * 4) =
                 *(int *)(this + (local_60 + 0x3d8) * 4) + param_4;
            cVar1 = checkCancelTrade(this);
            if ((cVar1 == '\0') || (cVar1 = checkTrade(this), cVar1 == '\0')) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (bVar12) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_int
                        ((InterfacePacketBuf *)local_e4,*(int *)(this + (local_60 + 0x3d8) * 4));
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
              InterfacePacketBuf::put_packet
                        ((InterfacePacketBuf *)local_e4,(Inven_Item *)g_emptySlot);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
              CUser::Send(local_68,local_e4);
              *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
              *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
              iVar2 = 0;
            }
            else {
              *(int *)(this + (local_60 + 0x3d8) * 4) =
                   *(int *)(this + (local_60 + 0x3d8) * 4) - param_4;
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::gain_money(pCVar5,param_4);
              iVar2 = -4;
            }
          }
        }
        else {
          iVar2 = -0x16a;
        }
      }
      else {
        cVar1 = CUser::isHackUser(param_1);
        if ((cVar1 == '\0') && (cVar1 = CUser::isHackUser(local_68), cVar1 == '\0')) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          iVar2 = -0x1a1;
        }
        else {
          iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::GetInvenSlot((int)local_17c,iVar2);
          local_12b = SUB41(local_17c._0_4_,0);
          cStack_12a = SUB41(local_17c._0_4_,1);
          uStack_129 = SUB42(local_17c._0_4_,2);
          local_127 = (undefined2)local_17c._4_4_;
          uStack_125 = SUB41(local_17c._4_4_,2);
          iStack_124._1_3_ = (undefined3)local_17c._8_4_;
          iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
          uStack_120 = SUB41(local_17c._8_4_,3);
          uStack_11f = local_170;
          local_11b = local_16c;
          local_117 = local_168;
          local_113 = local_164;
          local_10f = local_160;
          local_10b = local_15c;
          local_107 = local_158;
          local_103 = local_154;
          local_ff = local_150;
          local_fb = local_14c;
          local_f7 = local_148;
          local_f3 = local_144;
          local_ef = local_140;
          if (CONCAT22(local_127,uStack_129) == 0) {
            Inven_Item::get_add_info(&local_12b);
            CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cMyTrace::cMyTrace(local_c8,"int CTradeSpace::regist_item(CUser*, int, int, int)",0x1a8,
                               5);
            cMyTrace::operator()
                      (local_c8,"CTradeSpace::regist_item, item find failed(1), ch=%d %d %d %d");
          }
          cVar1 = _IsTradable(this,&local_12b);
          if (cVar1 == '\x01') {
            if ((cStack_12a == '\x01') ||
               (iVar2 = Inven_Item::get_add_info(&local_12b), param_4 <= iVar2)) {
              if (param_4 < 1) {
                Inven_Item::get_add_info(&local_12b);
                CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_a8,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                   0x1be,5);
                cMyTrace::operator()
                          (local_a8,"CTradeSpace::regist_item, item count failed(2), ch=%d %d %d %d"
                          );
                iVar2 = -9;
              }
              else {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_55 = CInventory::delete_item(pCVar5,1);
                if (local_55 == '\x01') {
                  piVar10 = &local_134;
                  piVar11 = (int *)&stack0xfffffe2c;
                  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *piVar11 = *piVar10;
                    piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
                    piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
                  }
                  iVar2 = add_item(this,local_60);
                  local_5c = iVar2;
                  if (iVar2 != -1) {
                    cVar1 = checkTrade(this);
                    if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                    }
                    if (bVar12) {
                      *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                      *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                      InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                      iVar2 = Inven_Item::get_add_info
                                        ((Inven_Item *)
                                         (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                      uVar6 = Inven_Item::GetItemAttr(&local_12b);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                      InterfacePacketBuf::put_short
                                ((InterfacePacketBuf *)local_e4,
                                 (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_e4,
                                 CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                      uVar6 = stAmplifyOption_t::getAbilityType
                                        ((stAmplifyOption_t *)((int)&local_11b + 1));
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                      uVar6 = stAmplifyOption_t::getAbilityValue
                                        ((stAmplifyOption_t *)((int)&local_11b + 1));
                      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,uVar6 & 0xffff);
                      InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                      CUser::Send(local_68,local_e4);
                      iVar2 = local_5c;
                    }
                    else {
                      CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      cMyTrace::cMyTrace(local_88,
                                         "int CTradeSpace::regist_item(CUser*, int, int, int)",0x1fc
                                         ,5);
                      cMyTrace::operator()
                                (local_88,
                                 "CTradeSpace::regist_item, (checkTrade() && checkCancelTrade()) failed, ch=%d %d %d"
                                );
                      cVar1 = Inven_Item::isEquipableItemType
                                        ((Inven_Item *)
                                         (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                      if (cVar1 == '\0') {
                        if (*(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40) == param_4) {
                          Inven_Item::reset((Inven_Item *)
                                            (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                        }
                        else if (param_4 < *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40
                                                   )) {
                          *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40) =
                               *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40) - param_4;
                        }
                        else {
                          Inven_Item::reset((Inven_Item *)
                                            (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                        }
                      }
                      else {
                        Inven_Item::reset((Inven_Item *)
                                          (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                      }
                      uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      local_54 = CInventory::insert_item_special_slot
                                           (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)
                                                          ));
                      if (local_54 < 0) {
                        cUserHistoryLog::TradeItemAddFail
                                  ((cUserHistoryLog *)(param_1 + 0x79700),
                                   CONCAT22(local_127,uStack_129),param_4);
                        iVar2 = -0xb;
                      }
                      else {
                        iVar2 = -0xc;
                      }
                    }
                  }
                }
                else {
                  CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_98,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                     0x1c8,5);
                  cMyTrace::operator()
                            (local_98,"CTradeSpace::regist_item, delete_item failed, ch=%d %d %d");
                  iVar2 = -10;
                }
              }
            }
            else {
              Inven_Item::get_add_info(&local_12b);
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_b8,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                 0x1b5,5);
              cMyTrace::operator()
                        (local_b8,"CTradeSpace::regist_item, item count failed(1), ch=%d %d %d %d");
              iVar2 = -8;
            }
          }
          else {
            iVar2 = -0x66;
          }
        }
      }
      goto LAB_0852bfb1;
    }
  }
  else {
    if (param_2 == 3) {
      if ((param_3 < 0) || (0x19 < param_3)) {
        LogManager::logFormat
                  (1,"item_trade.cpp","int CTradeSpace::regist_item(CUser*, int, int, int)",0x266,
                   "slot_no(%d) < 0 || slot_no > ENUM_EQUIPMENTTYPE_TOTAL_MAX");
        iVar2 = -0xd;
      }
      else {
        iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_17c,iVar2);
        local_12b = SUB41(local_17c._0_4_,0);
        cStack_12a = SUB41(local_17c._0_4_,1);
        uStack_129 = SUB42(local_17c._0_4_,2);
        local_127 = (undefined2)local_17c._4_4_;
        uStack_125 = SUB41(local_17c._4_4_,2);
        iStack_124._1_3_ = (undefined3)local_17c._8_4_;
        iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
        uStack_120 = SUB41(local_17c._8_4_,3);
        uStack_11f = local_170;
        local_11b = local_16c;
        local_117 = local_168;
        local_113 = local_164;
        local_10f = local_160;
        local_10b = local_15c;
        local_107 = local_158;
        local_103 = local_154;
        local_ff = local_150;
        local_fb = local_14c;
        local_f7 = local_148;
        local_f3 = local_144;
        local_ef = local_140;
        if (CONCAT22(local_127,uStack_129) == 0) {
          iVar2 = -0xe;
        }
        else {
          cVar1 = _IsTradable(this,&local_12b);
          if (cVar1 == '\x01') {
            if (param_3 < 10) {
              cVar1 = WongWork::CAvatarItemMgr::IsTempKey(iStack_124);
              if (cVar1 != '\0') {
                iVar2 = -0x66;
                goto LAB_0852bfb1;
              }
              local_134 = param_3;
              local_130 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              iVar2 = iStack_124;
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
              local_4c = WongWork::CAvatarItemMgr::GetExpireDate(pCVar7,iVar2);
              if ((local_4c == 0) ||
                 (iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
                 iVar2 <= local_4c)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if (bVar12) {
                iVar2 = -100;
                goto LAB_0852bfb1;
              }
            }
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_4d = CInventory::delete_item(pCVar5,0);
            if (local_4d == '\x01') {
              piVar10 = &local_134;
              piVar11 = (int *)&stack0xfffffe2c;
              for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar11 = *piVar10;
                piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
                piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
              }
              iVar2 = add_item(this,local_60);
              local_5c = iVar2;
              if (iVar2 != -1) {
                cVar1 = checkTrade(this);
                if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (bVar12) {
                  *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                  *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                  if (this[local_5c * 0x48 + local_60 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    iVar2 = OS_API::GetDateTimeTick();
                    iVar8 = Inven_Item::get_add_info
                                      ((Inven_Item *)
                                       (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    iVar2 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar7,iVar8,iVar2);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                  }
                  else {
                    iVar2 = Inven_Item::get_add_info
                                      ((Inven_Item *)
                                       (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                  }
                  uVar6 = Inven_Item::GetItemAttr(&local_12b);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_e4,
                             (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_e4,
                             CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                  uVar6 = stAmplifyOption_t::getAbilityType
                                    ((stAmplifyOption_t *)((int)&local_11b + 1));
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                  uVar6 = stAmplifyOption_t::getAbilityValue
                                    ((stAmplifyOption_t *)((int)&local_11b + 1));
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,uVar6 & 0xffff);
                  if (this[local_5c * 0x48 + local_60 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,0x1e);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    pcVar9 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar7,iVar2);
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,pcVar9,0x1e);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,4);
                    iVar2 = *(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x40);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    pCVar7 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
                    local_48 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar7,iVar2);
                    if (local_48 == (char *)0x0) {
                      stAvatarExpansionInfo_t::init(local_e8);
                      InterfacePacketBuf::put_binary
                                ((InterfacePacketBuf *)local_e4,(char *)local_e8,4);
                    }
                    else {
                      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_e4,local_48,4);
                    }
                  }
                  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                  CUser::Send(local_68,local_e4);
                  iVar2 = local_5c;
                }
                else {
                  Inven_Item::reset((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39)
                                   );
                  uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  local_44 = CInventory::insert_item_special_slot
                                       (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)));
                  if (local_44 < 0) {
                    cUserHistoryLog::TradeItemAddFail
                              ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_127,uStack_129)
                               ,param_4);
                    iVar2 = -0x10;
                  }
                  else {
                    iVar2 = -0x11;
                  }
                }
              }
            }
            else {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_78,"int CTradeSpace::regist_item(CUser*, int, int, int)",
                                 0x281,5);
              cMyTrace::operator()
                        (local_78,"CTradeSpace::regist_item 2, delete_item failed, ch=%d, %d %d");
              iVar2 = -0xf;
            }
          }
          else {
            iVar2 = -0x66;
          }
        }
      }
      goto LAB_0852bfb1;
    }
    if (param_2 == 7) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_17c,iVar2);
      local_12b = SUB41(local_17c._0_4_,0);
      cStack_12a = SUB41(local_17c._0_4_,1);
      uStack_129 = SUB42(local_17c._0_4_,2);
      local_127 = (undefined2)local_17c._4_4_;
      uStack_125 = SUB41(local_17c._4_4_,2);
      iStack_124._1_3_ = (undefined3)local_17c._8_4_;
      iStack_124 = CONCAT31(iStack_124._1_3_,SUB41(local_17c._4_4_,3));
      uStack_120 = SUB41(local_17c._8_4_,3);
      uStack_11f = local_170;
      local_11b = local_16c;
      local_117 = local_168;
      local_113 = local_164;
      local_10f = local_160;
      local_10b = local_15c;
      local_107 = local_158;
      local_103 = local_154;
      local_ff = local_150;
      local_fb = local_14c;
      local_f7 = local_148;
      local_f3 = local_144;
      local_ef = local_140;
      if (param_4 < 1) {
        iVar2 = -9;
      }
      else {
        local_134 = param_3;
        local_130 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cVar1 = _IsTradable(this,&local_12b);
        if (cVar1 == '\x01') {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_29 = CInventory::delete_item(pCVar5,3);
          if (local_29 == '\x01') {
            piVar10 = &local_134;
            piVar11 = (int *)&stack0xfffffe2c;
            for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar11 = *piVar10;
              piVar10 = piVar10 + (uint)bVar13 * -2 + 1;
              piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
            }
            iVar2 = add_item(this,local_60);
            local_5c = iVar2;
            if (iVar2 != -1) {
              cVar1 = checkTrade(this);
              if ((cVar1 == '\0') || (cVar1 = checkCancelTrade(this), cVar1 == '\0')) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if (bVar12) {
                *(undefined4 *)(this + (local_60 + 8) * 4 + 8) = 0;
                *(undefined4 *)(this + (local_64 + 8) * 4 + 8) = 0;
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_e4);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e4,0,0xf);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,local_5c);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_e4,CONCAT22(local_127,uStack_129));
                iVar2 = Inven_Item::get_add_info
                                  ((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39))
                ;
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,iVar2);
                uVar6 = Inven_Item::GetItemAttr(&local_12b);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,uVar6 & 0xff);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)local_e4,
                           (uint)CONCAT11((undefined1)uStack_11f,uStack_120));
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_e4,
                           CONCAT13((undefined1)local_11b,uStack_11f._1_3_));
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e4,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_e4,0);
                if (cStack_12a == '\x05') {
                  local_28 = 0;
                  local_28 = OS_API::GetDateTimeTick();
                  iVar2 = Inven_Item::get_add_info
                                    ((Inven_Item *)
                                     (this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar5);
                  local_24 = user_creature::CCreatureMgr::GetRemainDate(this_00,iVar2,local_28);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e4,local_24);
                }
                InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_e4,&local_12b);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e4,true);
                CUser::Send(local_68,local_e4);
                iVar2 = local_5c;
              }
              else {
                Inven_Item::reset((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39));
                uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_20 = CInventory::insertCreatureIntoSpecificSlot
                                     (uVar3,CONCAT22(uStack_129,CONCAT11(cStack_12a,local_12b)));
                if (local_20 < 0) {
                  cUserHistoryLog::TradeItemAddFail
                            ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_127,uStack_129),
                             param_4);
                  iVar2 = -0xb;
                }
                else {
                  iVar2 = -0xc;
                }
              }
            }
          }
          else {
            iVar2 = -10;
          }
        }
        else {
          iVar2 = -0x66;
        }
      }
      goto LAB_0852bfb1;
    }
  }
  iVar2 = -0x14;
LAB_0852bfb1:
  PacketGuard::~PacketGuard(local_e4);
  return iVar2;
}
```
