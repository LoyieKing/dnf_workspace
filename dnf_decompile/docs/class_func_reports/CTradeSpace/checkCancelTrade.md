# checkCancelTrade

`_ZN11CTradeSpace16checkCancelTradeEv`

`CTradeSpace::checkCancelTrade()`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852dbb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852dbb8  _ZN11CTradeSpace16checkCancelTradeEv
#           CTradeSpace::checkCancelTrade()
# range [0x0852dbb8, 0x0852e3a7]
0852dbb8 +0x000:  push   %ebp
0852dbb9 +0x001:  mov    %esp,%ebp
0852dbbb +0x003:  push   %edi
0852dbbc +0x004:  push   %esi
0852dbbd +0x005:  push   %ebx
0852dbbe +0x006:  sub    $&_ZL14gUnicodeBuffer+0xeda0,%esp
0852dbc4 +0x00c:  mov    0x8(%ebp),%eax
0852dbc7 +0x00f:  mov    0x20(%eax),%eax
0852dbca +0x012:  mov    %eax,(%esp)
0852dbcd +0x015:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852dbd2 +0x01a:  test   %eax,%eax
0852dbd4 +0x01c:  je     0852dbe8 <+0x30>
0852dbd6 +0x01e:  mov    0x8(%ebp),%eax
0852dbd9 +0x021:  mov    0x24(%eax),%eax
0852dbdc +0x024:  mov    %eax,(%esp)
0852dbdf +0x027:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852dbe4 +0x02c:  test   %eax,%eax
0852dbe6 +0x02e:  jne    0852dbef <+0x37>
0852dbe8 +0x030:  mov    $0x1,%eax
0852dbed +0x035:  jmp    0852dbf4 <+0x3c>
0852dbef +0x037:  mov    $0x0,%eax
0852dbf4 +0x03c:  test   %al,%al
0852dbf6 +0x03e:  je     0852dc38 <+0x80>
0852dbf8 +0x040:  movl   $0x5,0xc(%esp)
0852dc00 +0x048:  movl   $0x674,0x8(%esp)
0852dc08 +0x050:  movl   $&_ZZN11CTradeSpace16checkCancelTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0852dc10 +0x058:  lea    -0x80(%ebp),%eax
0852dc13 +0x05b:  mov    %eax,(%esp)
0852dc16 +0x05e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852dc1b +0x063:  movl   $"CTradeSpace::cancel_trade()\t0 == m_pTraders[0]->getCurCharacR() || m_pTraders[1]->getCurCharacR()",0x4(%esp)
0852dc23 +0x06b:  lea    -0x80(%ebp),%eax
0852dc26 +0x06e:  mov    %eax,(%esp)
0852dc29 +0x071:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852dc2e +0x076:  mov    $0x0,%ebx
0852dc33 +0x07b:  jmp    0852e39b <+0x7e3>
0852dc38 +0x080:  lea    -0xff0(%ebp),%ebx
0852dc3e +0x086:  mov    %ebx,%edi
0852dc40 +0x088:  mov    $0x1,%esi
0852dc45 +0x08d:  jmp    0852dc58 <+0xa0>
0852dc47 +0x08f:  mov    %edi,(%esp)
0852dc4a +0x092:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
0852dc4f +0x097:  add    $0x7b8,%edi
0852dc55 +0x09d:  sub    $0x1,%esi
0852dc58 +0x0a0:  cmp    $0xffffffff,%esi
0852dc5b +0x0a3:  setne  %al
0852dc5e +0x0a6:  test   %al,%al
0852dc60 +0x0a8:  jne    0852dc47 <+0x8f>
0852dc62 +0x0aa:  jmp    0852dca4 <+0xec>
0852dc64 +0x0ac:  mov    %edx,%edi
0852dc66 +0x0ae:  mov    %eax,-&_ZL14gUnicodeBuffer+0xed50(%ebp)
0852dc6c +0x0b4:  test   %ebx,%ebx
0852dc6e +0x0b6:  je     0852dc94 <+0xdc>
0852dc70 +0x0b8:  mov    $0x1,%eax
0852dc75 +0x0bd:  sub    %esi,%eax
0852dc77 +0x0bf:  imul   $0x7b8,%eax,%eax
0852dc7d +0x0c5:  lea    (%ebx,%eax,1),%esi
0852dc80 +0x0c8:  cmp    %ebx,%esi
0852dc82 +0x0ca:  je     0852dc94 <+0xdc>
0852dc84 +0x0cc:  sub    $0x7b8,%esi
0852dc8a +0x0d2:  mov    %esi,(%esp)
0852dc8d +0x0d5:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0852dc92 +0x0da:  jmp    0852dc80 <+0xc8>
0852dc94 +0x0dc:  mov    -&_ZL14gUnicodeBuffer+0xed50(%ebp),%eax
0852dc9a +0x0e2:  mov    %edi,%edx
0852dc9c +0x0e4:  mov    %eax,(%esp)
0852dc9f +0x0e7:  call   08ae3750 <_Unwind_Resume>
0852dca4 +0x0ec:  lea    -0xd12f(%ebp),%eax
0852dcaa +0x0f2:  mov    %eax,(%esp)
0852dcad +0x0f5:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
0852dcb2 +0x0fa:  lea    -0xd12f(%ebp),%eax
0852dcb8 +0x100:  mov    %eax,0x4(%esp)
0852dcbc +0x104:  lea    -0xff0(%ebp),%eax
0852dcc2 +0x10a:  mov    %eax,(%esp)
0852dcc5 +0x10d:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
0852dcca +0x112:  lea    -&_ZL14gUnicodeBuffer+0xed42(%ebp),%eax
0852dcd0 +0x118:  mov    %eax,(%esp)
0852dcd3 +0x11b:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
0852dcd8 +0x120:  lea    -&_ZL14gUnicodeBuffer+0xed42(%ebp),%eax
0852dcde +0x126:  mov    %eax,0x4(%esp)
0852dce2 +0x12a:  lea    -0xff0(%ebp),%eax
0852dce8 +0x130:  add    $0x7b8,%eax
0852dced +0x135:  mov    %eax,(%esp)
0852dcf0 +0x138:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
0852dcf5 +0x13d:  mov    0x8(%ebp),%eax
0852dcf8 +0x140:  mov    0x20(%eax),%eax
0852dcfb +0x143:  mov    %eax,(%esp)
0852dcfe +0x146:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0852dd03 +0x14b:  mov    %eax,0x4(%esp)
0852dd07 +0x14f:  lea    -0xff0(%ebp),%eax
0852dd0d +0x155:  mov    %eax,(%esp)
0852dd10 +0x158:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
0852dd15 +0x15d:  mov    0x8(%ebp),%eax
0852dd18 +0x160:  mov    0x24(%eax),%eax
0852dd1b +0x163:  mov    %eax,(%esp)
0852dd1e +0x166:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0852dd23 +0x16b:  mov    %eax,0x4(%esp)
0852dd27 +0x16f:  lea    -0xff0(%ebp),%eax
0852dd2d +0x175:  add    $0x7b8,%eax
0852dd32 +0x17a:  mov    %eax,(%esp)
0852dd35 +0x17d:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
0852dd3a +0x182:  movl   $0x0,-0x30(%ebp)
0852dd41 +0x189:  movl   $0x0,-0x2c(%ebp)
0852dd48 +0x190:  movl   $0x0,-0x2c(%ebp)
0852dd4f +0x197:  jmp    0852e329 <+0x771>
0852dd54 +0x19c:  movl   $0x0,-0x30(%ebp)
0852dd5b +0x1a3:  movl   $0x3,-0x24(%ebp)
0852dd62 +0x1aa:  jmp    0852dd94 <+0x1dc>
0852dd64 +0x1ac:  mov    -0x2c(%ebp),%ebx
0852dd67 +0x1af:  mov    -0x24(%ebp),%edx
0852dd6a +0x1b2:  mov    0x8(%ebp),%ecx
0852dd6d +0x1b5:  mov    %edx,%eax
0852dd6f +0x1b7:  shl    $0x3,%eax
0852dd72 +0x1ba:  add    %edx,%eax
0852dd74 +0x1bc:  shl    $0x3,%eax
0852dd77 +0x1bf:  imul   $0x798,%ebx,%edx
0852dd7d +0x1c5:  add    %edx,%eax
0852dd7f +0x1c7:  lea    (%ecx,%eax,1),%eax
0852dd82 +0x1ca:  add    $0x30,%eax
0852dd85 +0x1cd:  mov    0xb(%eax),%eax
0852dd88 +0x1d0:  test   %eax,%eax
0852dd8a +0x1d2:  je     0852dd90 <+0x1d8>
0852dd8c +0x1d4:  addl   $0x1,-0x30(%ebp)
0852dd90 +0x1d8:  addl   $0x1,-0x24(%ebp)
0852dd94 +0x1dc:  cmpl   $0x1a,-0x24(%ebp)
0852dd98 +0x1e0:  setle  %al
0852dd9b +0x1e3:  test   %al,%al
0852dd9d +0x1e5:  jne    0852dd64 <+0x1ac>
0852dd9f +0x1e7:  mov    -0x2c(%ebp),%edx
0852dda2 +0x1ea:  mov    0x8(%ebp),%eax
0852dda5 +0x1ed:  add    $0x3d8,%edx
0852ddab +0x1f3:  mov    (%eax,%edx,4),%eax
0852ddae +0x1f6:  test   %eax,%eax
0852ddb0 +0x1f8:  jle    0852de0e <+0x256>
0852ddb2 +0x1fa:  addl   $0x1,-0x30(%ebp)
0852ddb6 +0x1fe:  mov    -0x2c(%ebp),%edx
0852ddb9 +0x201:  mov    0x8(%ebp),%eax
0852ddbc +0x204:  add    $0x8,%edx
0852ddbf +0x207:  mov    (%eax,%edx,4),%eax
0852ddc2 +0x20a:  test   %eax,%eax
0852ddc4 +0x20c:  je     0852de0e <+0x256>
0852ddc6 +0x20e:  mov    -0x2c(%ebp),%edx
0852ddc9 +0x211:  mov    0x8(%ebp),%eax
0852ddcc +0x214:  add    $0x3d8,%edx
0852ddd2 +0x21a:  mov    (%eax,%edx,4),%eax
0852ddd5 +0x21d:  mov    -0x2c(%ebp),%edx
0852ddd8 +0x220:  lea    -0xff0(%ebp),%ecx
0852ddde +0x226:  imul   $0x7b8,%edx,%edx
0852dde4 +0x22c:  lea    (%ecx,%edx,1),%edx
0852dde7 +0x22f:  movl   $0x0,0x10(%esp)
0852ddef +0x237:  movl   $0x0,0xc(%esp)
0852ddf7 +0x23f:  movl   $0x2,0x8(%esp)
0852ddff +0x247:  mov    %eax,0x4(%esp)
0852de03 +0x24b:  mov    %edx,(%esp)
0852de06 +0x24e:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0852de0b +0x253:  mov    %eax,-0x20(%ebp)
0852de0e +0x256:  movl   $0x3,-0x1c(%ebp)
0852de15 +0x25d:  jmp    0852e316 <+0x75e>
0852de1a +0x262:  mov    -0x2c(%ebp),%ebx
0852de1d +0x265:  mov    -0x1c(%ebp),%edx
0852de20 +0x268:  mov    0x8(%ebp),%ecx
0852de23 +0x26b:  mov    %edx,%eax
0852de25 +0x26d:  shl    $0x3,%eax
0852de28 +0x270:  add    %edx,%eax
0852de2a +0x272:  shl    $0x3,%eax
0852de2d +0x275:  imul   $0x798,%ebx,%edx
0852de33 +0x27b:  add    %edx,%eax
0852de35 +0x27d:  lea    (%ecx,%eax,1),%eax
0852de38 +0x280:  add    $0x30,%eax
0852de3b +0x283:  mov    0xb(%eax),%eax
0852de3e +0x286:  test   %eax,%eax
0852de40 +0x288:  je     0852e30e <+0x756>
0852de46 +0x28e:  mov    -0x2c(%ebp),%edx
0852de49 +0x291:  mov    0x8(%ebp),%eax
0852de4c +0x294:  add    $0x8,%edx
0852de4f +0x297:  mov    (%eax,%edx,4),%eax
0852de52 +0x29a:  test   %eax,%eax
0852de54 +0x29c:  je     0852e311 <+0x759>
0852de5a +0x2a2:  mov    -0x2c(%ebp),%ebx
0852de5d +0x2a5:  mov    -0x1c(%ebp),%edx
0852de60 +0x2a8:  mov    0x8(%ebp),%ecx
0852de63 +0x2ab:  mov    %edx,%eax
0852de65 +0x2ad:  shl    $0x3,%eax
0852de68 +0x2b0:  add    %edx,%eax
0852de6a +0x2b2:  shl    $0x3,%eax
0852de6d +0x2b5:  imul   $0x798,%ebx,%edx
0852de73 +0x2bb:  add    %edx,%eax
0852de75 +0x2bd:  lea    (%ecx,%eax,1),%eax
0852de78 +0x2c0:  add    $0x30,%eax
0852de7b +0x2c3:  movzbl 0x8(%eax),%eax
0852de7f +0x2c7:  test   %al,%al
0852de81 +0x2c9:  jne    0852dfb1 <+0x3f9>
0852de87 +0x2cf:  mov    -0x2c(%ebp),%esi
0852de8a +0x2d2:  mov    -0x1c(%ebp),%edx
0852de8d +0x2d5:  mov    -0x2c(%ebp),%eax
0852de90 +0x2d8:  lea    -0xff0(%ebp),%ecx
0852de96 +0x2de:  imul   $0x7b8,%eax,%eax
0852de9c +0x2e4:  add    %eax,%ecx
0852de9e +0x2e6:  movl   $0x1,0x4c(%esp)
0852dea6 +0x2ee:  movl   $0x0,0x48(%esp)
0852deae +0x2f6:  movl   $0x2,0x44(%esp)
0852deb6 +0x2fe:  mov    0x8(%ebp),%ebx
0852deb9 +0x301:  mov    %edx,%eax
0852debb +0x303:  shl    $0x3,%eax
0852debe +0x306:  add    %edx,%eax
0852dec0 +0x308:  shl    $0x3,%eax
0852dec3 +0x30b:  imul   $0x798,%esi,%edx
0852dec9 +0x311:  add    %edx,%eax
0852decb +0x313:  lea    (%ebx,%eax,1),%eax
0852dece +0x316:  add    $0x30,%eax
0852ded1 +0x319:  mov    0x9(%eax),%edx
0852ded4 +0x31c:  mov    %edx,0x4(%esp)
0852ded8 +0x320:  mov    0xd(%eax),%edx
0852dedb +0x323:  mov    %edx,0x8(%esp)
0852dedf +0x327:  mov    0x11(%eax),%edx
0852dee2 +0x32a:  mov    %edx,0xc(%esp)
0852dee6 +0x32e:  mov    0x15(%eax),%edx
0852dee9 +0x331:  mov    %edx,0x10(%esp)
0852deed +0x335:  mov    0x19(%eax),%edx
0852def0 +0x338:  mov    %edx,0x14(%esp)
0852def4 +0x33c:  mov    0x1d(%eax),%edx
0852def7 +0x33f:  mov    %edx,0x18(%esp)
0852defb +0x343:  mov    0x21(%eax),%edx
0852defe +0x346:  mov    %edx,0x1c(%esp)
0852df02 +0x34a:  mov    0x25(%eax),%edx
0852df05 +0x34d:  mov    %edx,0x20(%esp)
0852df09 +0x351:  mov    0x29(%eax),%edx
0852df0c +0x354:  mov    %edx,0x24(%esp)
0852df10 +0x358:  mov    0x2d(%eax),%edx
0852df13 +0x35b:  mov    %edx,0x28(%esp)
0852df17 +0x35f:  mov    0x31(%eax),%edx
0852df1a +0x362:  mov    %edx,0x2c(%esp)
0852df1e +0x366:  mov    0x35(%eax),%edx
0852df21 +0x369:  mov    %edx,0x30(%esp)
0852df25 +0x36d:  mov    0x39(%eax),%edx
0852df28 +0x370:  mov    %edx,0x34(%esp)
0852df2c +0x374:  mov    0x3d(%eax),%edx
0852df2f +0x377:  mov    %edx,0x38(%esp)
0852df33 +0x37b:  mov    0x41(%eax),%edx
0852df36 +0x37e:  mov    %edx,0x3c(%esp)
0852df3a +0x382:  movzbl 0x45(%eax),%eax
0852df3e +0x386:  mov    %al,0x40(%esp)
0852df42 +0x38a:  mov    %ecx,(%esp)
0852df45 +0x38d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0852df4a +0x392:  mov    %eax,-0x28(%ebp)
0852df4d +0x395:  cmpl   $0x0,-0x28(%ebp)
0852df51 +0x399:  jns    0852e312 <+0x75a>
0852df57 +0x39f:  mov    -0x2c(%ebp),%edx
0852df5a +0x3a2:  mov    0x8(%ebp),%eax
0852df5d +0x3a5:  add    $0x8,%edx
0852df60 +0x3a8:  mov    (%eax,%edx,4),%eax
0852df63 +0x3ab:  mov    %eax,(%esp)
0852df66 +0x3ae:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852df6b +0x3b3:  mov    %eax,%ebx
0852df6d +0x3b5:  movl   $0x5,0xc(%esp)
0852df75 +0x3bd:  movl   $0x6af,0x8(%esp)
0852df7d +0x3c5:  movl   $&_ZZN11CTradeSpace16checkCancelTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0852df85 +0x3cd:  lea    -0x70(%ebp),%eax
0852df88 +0x3d0:  mov    %eax,(%esp)
0852df8b +0x3d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852df90 +0x3d8:  mov    %ebx,0x8(%esp)
0852df94 +0x3dc:  movl   $"try insert_item(INVEN_TYPE_INVENTORY) fail - [Fail]Insert_item - fatal! canceled ch=%d",0x4(%esp)
0852df9c +0x3e4:  lea    -0x70(%ebp),%eax
0852df9f +0x3e7:  mov    %eax,(%esp)
0852dfa2 +0x3ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852dfa7 +0x3ef:  mov    $0x0,%ebx
0852dfac +0x3f4:  jmp    0852e375 <+0x7bd>
0852dfb1 +0x3f9:  mov    -0x2c(%ebp),%ebx
0852dfb4 +0x3fc:  mov    -0x1c(%ebp),%edx
0852dfb7 +0x3ff:  mov    0x8(%ebp),%ecx
0852dfba +0x402:  mov    %edx,%eax
0852dfbc +0x404:  shl    $0x3,%eax
0852dfbf +0x407:  add    %edx,%eax
0852dfc1 +0x409:  shl    $0x3,%eax
0852dfc4 +0x40c:  imul   $0x798,%ebx,%edx
0852dfca +0x412:  add    %edx,%eax
0852dfcc +0x414:  lea    (%ecx,%eax,1),%eax
0852dfcf +0x417:  add    $0x30,%eax
0852dfd2 +0x41a:  movzbl 0x8(%eax),%eax
0852dfd6 +0x41e:  cmp    $0x1,%al
0852dfd8 +0x420:  jne    0852e100 <+0x548>
0852dfde +0x426:  mov    -0x2c(%ebp),%esi
0852dfe1 +0x429:  mov    -0x1c(%ebp),%edx
0852dfe4 +0x42c:  mov    -0x2c(%ebp),%eax
0852dfe7 +0x42f:  lea    -0xff0(%ebp),%ecx
0852dfed +0x435:  imul   $0x7b8,%eax,%eax
0852dff3 +0x43b:  add    %eax,%ecx
0852dff5 +0x43d:  movl   $0x0,0x48(%esp)
0852dffd +0x445:  movl   $0x3,0x44(%esp)
0852e005 +0x44d:  mov    0x8(%ebp),%ebx
0852e008 +0x450:  mov    %edx,%eax
0852e00a +0x452:  shl    $0x3,%eax
0852e00d +0x455:  add    %edx,%eax
0852e00f +0x457:  shl    $0x3,%eax
0852e012 +0x45a:  imul   $0x798,%esi,%edx
0852e018 +0x460:  add    %edx,%eax
0852e01a +0x462:  lea    (%ebx,%eax,1),%eax
0852e01d +0x465:  add    $0x30,%eax
0852e020 +0x468:  mov    0x9(%eax),%edx
0852e023 +0x46b:  mov    %edx,0x4(%esp)
0852e027 +0x46f:  mov    0xd(%eax),%edx
0852e02a +0x472:  mov    %edx,0x8(%esp)
0852e02e +0x476:  mov    0x11(%eax),%edx
0852e031 +0x479:  mov    %edx,0xc(%esp)
0852e035 +0x47d:  mov    0x15(%eax),%edx
0852e038 +0x480:  mov    %edx,0x10(%esp)
0852e03c +0x484:  mov    0x19(%eax),%edx
0852e03f +0x487:  mov    %edx,0x14(%esp)
0852e043 +0x48b:  mov    0x1d(%eax),%edx
0852e046 +0x48e:  mov    %edx,0x18(%esp)
0852e04a +0x492:  mov    0x21(%eax),%edx
0852e04d +0x495:  mov    %edx,0x1c(%esp)
0852e051 +0x499:  mov    0x25(%eax),%edx
0852e054 +0x49c:  mov    %edx,0x20(%esp)
0852e058 +0x4a0:  mov    0x29(%eax),%edx
0852e05b +0x4a3:  mov    %edx,0x24(%esp)
0852e05f +0x4a7:  mov    0x2d(%eax),%edx
0852e062 +0x4aa:  mov    %edx,0x28(%esp)
0852e066 +0x4ae:  mov    0x31(%eax),%edx
0852e069 +0x4b1:  mov    %edx,0x2c(%esp)
0852e06d +0x4b5:  mov    0x35(%eax),%edx
0852e070 +0x4b8:  mov    %edx,0x30(%esp)
0852e074 +0x4bc:  mov    0x39(%eax),%edx
0852e077 +0x4bf:  mov    %edx,0x34(%esp)
0852e07b +0x4c3:  mov    0x3d(%eax),%edx
0852e07e +0x4c6:  mov    %edx,0x38(%esp)
0852e082 +0x4ca:  mov    0x41(%eax),%edx
0852e085 +0x4cd:  mov    %edx,0x3c(%esp)
0852e089 +0x4d1:  movzbl 0x45(%eax),%eax
0852e08d +0x4d5:  mov    %al,0x40(%esp)
0852e091 +0x4d9:  mov    %ecx,(%esp)
0852e094 +0x4dc:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
0852e099 +0x4e1:  mov    %eax,-0x28(%ebp)
0852e09c +0x4e4:  cmpl   $0x0,-0x28(%ebp)
0852e0a0 +0x4e8:  jns    0852e312 <+0x75a>
0852e0a6 +0x4ee:  mov    -0x2c(%ebp),%edx
0852e0a9 +0x4f1:  mov    0x8(%ebp),%eax
0852e0ac +0x4f4:  add    $0x8,%edx
0852e0af +0x4f7:  mov    (%eax,%edx,4),%eax
0852e0b2 +0x4fa:  mov    %eax,(%esp)
0852e0b5 +0x4fd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852e0ba +0x502:  mov    %eax,%ebx
0852e0bc +0x504:  movl   $0x5,0xc(%esp)
0852e0c4 +0x50c:  movl   $0x6b9,0x8(%esp)
0852e0cc +0x514:  movl   $&_ZZN11CTradeSpace16checkCancelTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0852e0d4 +0x51c:  lea    -0x60(%ebp),%eax
0852e0d7 +0x51f:  mov    %eax,(%esp)
0852e0da +0x522:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852e0df +0x527:  mov    %ebx,0x8(%esp)
0852e0e3 +0x52b:  movl   $"try insert_item(ENUM_ITEMSPACE_AVATAR) fail - [Fail]Insert_item - fatal! canceled ch=%d",0x4(%esp)
0852e0eb +0x533:  lea    -0x60(%ebp),%eax
0852e0ee +0x536:  mov    %eax,(%esp)
0852e0f1 +0x539:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852e0f6 +0x53e:  mov    $0x0,%ebx
0852e0fb +0x543:  jmp    0852e375 <+0x7bd>
0852e100 +0x548:  mov    -0x2c(%ebp),%ebx
0852e103 +0x54b:  mov    -0x1c(%ebp),%edx
0852e106 +0x54e:  mov    0x8(%ebp),%ecx
0852e109 +0x551:  mov    %edx,%eax
0852e10b +0x553:  shl    $0x3,%eax
0852e10e +0x556:  add    %edx,%eax
0852e110 +0x558:  shl    $0x3,%eax
0852e113 +0x55b:  imul   $0x798,%ebx,%edx
0852e119 +0x561:  add    %edx,%eax
0852e11b +0x563:  lea    (%ecx,%eax,1),%eax
0852e11e +0x566:  add    $0x30,%eax
0852e121 +0x569:  movzbl 0x8(%eax),%eax
0852e125 +0x56d:  cmp    $0x7,%al
0852e127 +0x56f:  jne    0852e1eb <+0x633>
0852e12d +0x575:  mov    -0x2c(%ebp),%ecx
0852e130 +0x578:  mov    -0x1c(%ebp),%edx
0852e133 +0x57b:  mov    %edx,%eax
0852e135 +0x57d:  shl    $0x3,%eax
0852e138 +0x580:  add    %edx,%eax
0852e13a +0x582:  shl    $0x3,%eax
0852e13d +0x585:  imul   $0x798,%ecx,%edx
0852e143 +0x58b:  add    %edx,%eax
0852e145 +0x58d:  add    $0x30,%eax
0852e148 +0x590:  add    0x8(%ebp),%eax
0852e14b +0x593:  lea    0x9(%eax),%edx
0852e14e +0x596:  mov    -0x2c(%ebp),%eax
0852e151 +0x599:  lea    -0xff0(%ebp),%ecx
0852e157 +0x59f:  imul   $0x7b8,%eax,%eax
0852e15d +0x5a5:  lea    (%ecx,%eax,1),%eax
0852e160 +0x5a8:  movl   $0x1,0x10(%esp)
0852e168 +0x5b0:  movl   $0x0,0xc(%esp)
0852e170 +0x5b8:  movl   $0x1c,0x8(%esp)
0852e178 +0x5c0:  mov    %edx,0x4(%esp)
0852e17c +0x5c4:  mov    %eax,(%esp)
0852e17f +0x5c7:  call   0850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)
0852e184 +0x5cc:  mov    %eax,-0x28(%ebp)
0852e187 +0x5cf:  cmpl   $0x0,-0x28(%ebp)
0852e18b +0x5d3:  jns    0852e312 <+0x75a>
0852e191 +0x5d9:  mov    -0x2c(%ebp),%edx
0852e194 +0x5dc:  mov    0x8(%ebp),%eax
0852e197 +0x5df:  add    $0x8,%edx
0852e19a +0x5e2:  mov    (%eax,%edx,4),%eax
0852e19d +0x5e5:  mov    %eax,(%esp)
0852e1a0 +0x5e8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852e1a5 +0x5ed:  mov    %eax,%ebx
0852e1a7 +0x5ef:  movl   $0x5,0xc(%esp)
0852e1af +0x5f7:  movl   $0x6c3,0x8(%esp)
0852e1b7 +0x5ff:  movl   $&_ZZN11CTradeSpace16checkCancelTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0852e1bf +0x607:  lea    -0x50(%ebp),%eax
0852e1c2 +0x60a:  mov    %eax,(%esp)
0852e1c5 +0x60d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852e1ca +0x612:  mov    %ebx,0x8(%esp)
0852e1ce +0x616:  movl   $"try insert_item(ENUM_ITEMSPACE_CREATURE) fail - [Fail]Insert_item - fatal! canceled ch=%d",0x4(%esp)
0852e1d6 +0x61e:  lea    -0x50(%ebp),%eax
0852e1d9 +0x621:  mov    %eax,(%esp)
0852e1dc +0x624:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852e1e1 +0x629:  mov    $0x0,%ebx
0852e1e6 +0x62e:  jmp    0852e375 <+0x7bd>
0852e1eb +0x633:  mov    -0x2c(%ebp),%esi
0852e1ee +0x636:  mov    -0x1c(%ebp),%edx
0852e1f1 +0x639:  mov    -0x2c(%ebp),%eax
0852e1f4 +0x63c:  lea    -0xff0(%ebp),%ecx
0852e1fa +0x642:  imul   $0x7b8,%eax,%eax
0852e200 +0x648:  add    %eax,%ecx
0852e202 +0x64a:  movl   $0x1,0x4c(%esp)
0852e20a +0x652:  movl   $0x0,0x48(%esp)
0852e212 +0x65a:  movl   $0x2,0x44(%esp)
0852e21a +0x662:  mov    0x8(%ebp),%ebx
0852e21d +0x665:  mov    %edx,%eax
0852e21f +0x667:  shl    $0x3,%eax
0852e222 +0x66a:  add    %edx,%eax
0852e224 +0x66c:  shl    $0x3,%eax
0852e227 +0x66f:  imul   $0x798,%esi,%edx
0852e22d +0x675:  add    %edx,%eax
0852e22f +0x677:  lea    (%ebx,%eax,1),%eax
0852e232 +0x67a:  add    $0x30,%eax
0852e235 +0x67d:  mov    0x9(%eax),%edx
0852e238 +0x680:  mov    %edx,0x4(%esp)
0852e23c +0x684:  mov    0xd(%eax),%edx
0852e23f +0x687:  mov    %edx,0x8(%esp)
0852e243 +0x68b:  mov    0x11(%eax),%edx
0852e246 +0x68e:  mov    %edx,0xc(%esp)
0852e24a +0x692:  mov    0x15(%eax),%edx
0852e24d +0x695:  mov    %edx,0x10(%esp)
0852e251 +0x699:  mov    0x19(%eax),%edx
0852e254 +0x69c:  mov    %edx,0x14(%esp)
0852e258 +0x6a0:  mov    0x1d(%eax),%edx
0852e25b +0x6a3:  mov    %edx,0x18(%esp)
0852e25f +0x6a7:  mov    0x21(%eax),%edx
0852e262 +0x6aa:  mov    %edx,0x1c(%esp)
0852e266 +0x6ae:  mov    0x25(%eax),%edx
0852e269 +0x6b1:  mov    %edx,0x20(%esp)
0852e26d +0x6b5:  mov    0x29(%eax),%edx
0852e270 +0x6b8:  mov    %edx,0x24(%esp)
0852e274 +0x6bc:  mov    0x2d(%eax),%edx
0852e277 +0x6bf:  mov    %edx,0x28(%esp)
0852e27b +0x6c3:  mov    0x31(%eax),%edx
0852e27e +0x6c6:  mov    %edx,0x2c(%esp)
0852e282 +0x6ca:  mov    0x35(%eax),%edx
0852e285 +0x6cd:  mov    %edx,0x30(%esp)
0852e289 +0x6d1:  mov    0x39(%eax),%edx
0852e28c +0x6d4:  mov    %edx,0x34(%esp)
0852e290 +0x6d8:  mov    0x3d(%eax),%edx
0852e293 +0x6db:  mov    %edx,0x38(%esp)
0852e297 +0x6df:  mov    0x41(%eax),%edx
0852e29a +0x6e2:  mov    %edx,0x3c(%esp)
0852e29e +0x6e6:  movzbl 0x45(%eax),%eax
0852e2a2 +0x6ea:  mov    %al,0x40(%esp)
0852e2a6 +0x6ee:  mov    %ecx,(%esp)
0852e2a9 +0x6f1:  call   08502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)
0852e2ae +0x6f6:  mov    %eax,-0x28(%ebp)
0852e2b1 +0x6f9:  cmpl   $0x0,-0x28(%ebp)
0852e2b5 +0x6fd:  jns    0852e312 <+0x75a>
0852e2b7 +0x6ff:  mov    -0x2c(%ebp),%edx
0852e2ba +0x702:  mov    0x8(%ebp),%eax
0852e2bd +0x705:  add    $0x8,%edx
0852e2c0 +0x708:  mov    (%eax,%edx,4),%eax
0852e2c3 +0x70b:  mov    %eax,(%esp)
0852e2c6 +0x70e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852e2cb +0x713:  mov    %eax,%ebx
0852e2cd +0x715:  movl   $0x5,0xc(%esp)
0852e2d5 +0x71d:  movl   $0x6d8,0x8(%esp)
0852e2dd +0x725:  movl   $&_ZZN11CTradeSpace16checkCancelTradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0852e2e5 +0x72d:  lea    -0x40(%ebp),%eax
0852e2e8 +0x730:  mov    %eax,(%esp)
0852e2eb +0x733:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852e2f0 +0x738:  mov    %ebx,0x8(%esp)
0852e2f4 +0x73c:  movl   $"try insert_item(INVEN_TYPE_EQUIP) fail - [Fail]Insert_item - fatal! canceled ch=%d",0x4(%esp)
0852e2fc +0x744:  lea    -0x40(%ebp),%eax
0852e2ff +0x747:  mov    %eax,(%esp)
0852e302 +0x74a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852e307 +0x74f:  mov    $0x0,%ebx
0852e30c +0x754:  jmp    0852e375 <+0x7bd>
0852e30e +0x756:  nop
0852e30f +0x757:  jmp    0852e312 <+0x75a>
0852e311 +0x759:  nop
0852e312 +0x75a:  addl   $0x1,-0x1c(%ebp)
0852e316 +0x75e:  cmpl   $0x1a,-0x1c(%ebp)
0852e31a +0x762:  setle  %al
0852e31d +0x765:  test   %al,%al
0852e31f +0x767:  jne    0852de1a <+0x262>
0852e325 +0x76d:  addl   $0x1,-0x2c(%ebp)
0852e329 +0x771:  cmpl   $0x1,-0x2c(%ebp)
0852e32d +0x775:  setle  %al
0852e330 +0x778:  test   %al,%al
0852e332 +0x77a:  jne    0852dd54 <+0x19c>
0852e338 +0x780:  mov    $0x1,%ebx
0852e33d +0x785:  jmp    0852e375 <+0x7bd>
0852e33f +0x787:  mov    %edx,%esi
0852e341 +0x789:  mov    %eax,%edi
0852e343 +0x78b:  lea    -0xff0(%ebp),%eax
0852e349 +0x791:  lea    0xf70(%eax),%ebx
0852e34f +0x797:  lea    -0xff0(%ebp),%eax
0852e355 +0x79d:  cmp    %eax,%ebx
0852e357 +0x79f:  je     0852e369 <+0x7b1>
0852e359 +0x7a1:  sub    $0x7b8,%ebx
0852e35f +0x7a7:  mov    %ebx,(%esp)
0852e362 +0x7aa:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0852e367 +0x7af:  jmp    0852e34f <+0x797>
0852e369 +0x7b1:  mov    %edi,%eax
0852e36b +0x7b3:  mov    %esi,%edx
0852e36d +0x7b5:  mov    %eax,(%esp)
0852e370 +0x7b8:  call   08ae3750 <_Unwind_Resume>
0852e375 +0x7bd:  lea    -0xff0(%ebp),%eax
0852e37b +0x7c3:  lea    0xf70(%eax),%esi
0852e381 +0x7c9:  lea    -0xff0(%ebp),%eax
0852e387 +0x7cf:  cmp    %eax,%esi
0852e389 +0x7d1:  je     0852e39b <+0x7e3>
0852e38b +0x7d3:  sub    $0x7b8,%esi
0852e391 +0x7d9:  mov    %esi,(%esp)
0852e394 +0x7dc:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0852e399 +0x7e1:  jmp    0852e381 <+0x7c9>
0852e39b +0x7e3:  mov    %ebx,%eax
0852e39d +0x7e5:  add    $&_ZL14gUnicodeBuffer+0xeda0,%esp
0852e3a3 +0x7eb:  pop    %ebx
0852e3a4 +0x7ec:  pop    %esi
0852e3a5 +0x7ed:  pop    %edi
0852e3a6 +0x7ee:  pop    %ebp
0852e3a7 +0x7ef:  ret
```

## 反编译 C

```c
// CTradeSpace::checkCancelTrade @ 0x852dbb8

/* CTradeSpace::checkCancelTrade() */

undefined4 __thiscall CTradeSpace::checkCancelTrade(CTradeSpace *this)

{
  bool bVar1;
  int iVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  cMyTrace *this_00;
  InventoryMemory aIStack_19272 [49471];
  InventoryMemory local_d133 [49471];
  CInventory local_ff4 [1976];
  CInventory aCStack_83c [1976];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
  if ((iVar2 == 0) ||
     (iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24)), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_84,"bool CTradeSpace::checkCancelTrade()",0x674,5);
    cMyTrace::operator()
              (local_84,
               "CTradeSpace::cancel_trade()\t0 == m_pTraders[0]->getCurCharacR() || m_pTraders[1]->getCurCharacR()"
              );
    uVar4 = 0;
  }
  else {
    pCVar3 = local_ff4;
    for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 0852dc4a to 0852dc4e has its CatchHandler @ 0852dc64 */
      CInventory::CInventory(pCVar3);
      pCVar3 = pCVar3 + 0x7b8;
    }
    InventoryMemory::InventoryMemory(local_d133);
    CInventory::SetInventoryMemory(local_ff4,local_d133);
    InventoryMemory::InventoryMemory(aIStack_19272);
    CInventory::SetInventoryMemory(aCStack_83c,aIStack_19272);
    pCVar3 = (CInventory *)
             CUserCharacInfo::getCurCharacInvenRefR(*(CUserCharacInfo **)(this + 0x20));
                    /* try { // try from 0852dd10 to 0852e306 has its CatchHandler @ 0852e33f */
    CInventory::setCopy(local_ff4,pCVar3);
    pCVar3 = (CInventory *)
             CUserCharacInfo::getCurCharacInvenRefR(*(CUserCharacInfo **)(this + 0x24));
    CInventory::setCopy(aCStack_83c,pCVar3);
    local_34 = 0;
    for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
      local_34 = 0;
      for (local_28 = 3; local_28 < 0x1b; local_28 = local_28 + 1) {
        if (*(int *)(this + local_28 * 0x48 + local_30 * 0x798 + 0x3b) != 0) {
          local_34 = local_34 + 1;
        }
      }
      if ((0 < *(int *)(this + (local_30 + 0x3d8) * 4)) &&
         (local_34 = local_34 + 1, *(int *)(this + (local_30 + 8) * 4) != 0)) {
        local_24 = CInventory::gain_money
                             (local_ff4 + local_30 * 0x7b8,
                              *(undefined4 *)(this + (local_30 + 0x3d8) * 4),2,0,0);
      }
      for (local_20 = 3; local_20 < 0x1b; local_20 = local_20 + 1) {
        if ((*(int *)(this + local_20 * 0x48 + local_30 * 0x798 + 0x3b) != 0) &&
           (*(int *)(this + (local_30 + 8) * 4) != 0)) {
          if (this[local_20 * 0x48 + local_30 * 0x798 + 0x38] == (CTradeSpace)0x0) {
            iVar2 = local_20 * 0x48 + local_30 * 0x798;
            local_2c = CInventory::insertItemIntoInventory
                                 (local_ff4 + local_30 * 0x7b8,*(undefined4 *)(this + iVar2 + 0x39),
                                  *(undefined4 *)(this + iVar2 + 0x3d),
                                  *(undefined4 *)(this + iVar2 + 0x41),
                                  *(undefined4 *)(this + iVar2 + 0x45),
                                  *(undefined4 *)(this + iVar2 + 0x49),
                                  *(undefined4 *)(this + iVar2 + 0x4d),
                                  *(undefined4 *)(this + iVar2 + 0x51),
                                  *(undefined4 *)(this + iVar2 + 0x55),
                                  *(undefined4 *)(this + iVar2 + 0x59),
                                  *(undefined4 *)(this + iVar2 + 0x5d),
                                  *(undefined4 *)(this + iVar2 + 0x61),
                                  *(undefined4 *)(this + iVar2 + 0x65),
                                  *(undefined4 *)(this + iVar2 + 0x69),
                                  *(undefined4 *)(this + iVar2 + 0x6d),
                                  *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],2,0,1);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_74,"bool CTradeSpace::checkCancelTrade()",0x6af,5);
              cMyTrace::operator()
                        (local_74,
                         "try insert_item(INVEN_TYPE_INVENTORY) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
          else if (this[local_20 * 0x48 + local_30 * 0x798 + 0x38] == (CTradeSpace)0x1) {
            iVar2 = local_20 * 0x48 + local_30 * 0x798;
            local_2c = CInventory::insertAvatarIntoInventory
                                 (local_ff4 + local_30 * 0x7b8,*(undefined4 *)(this + iVar2 + 0x39),
                                  *(undefined4 *)(this + iVar2 + 0x3d),
                                  *(undefined4 *)(this + iVar2 + 0x41),
                                  *(undefined4 *)(this + iVar2 + 0x45),
                                  *(undefined4 *)(this + iVar2 + 0x49),
                                  *(undefined4 *)(this + iVar2 + 0x4d),
                                  *(undefined4 *)(this + iVar2 + 0x51),
                                  *(undefined4 *)(this + iVar2 + 0x55),
                                  *(undefined4 *)(this + iVar2 + 0x59),
                                  *(undefined4 *)(this + iVar2 + 0x5d),
                                  *(undefined4 *)(this + iVar2 + 0x61),
                                  *(undefined4 *)(this + iVar2 + 0x65),
                                  *(undefined4 *)(this + iVar2 + 0x69),
                                  *(undefined4 *)(this + iVar2 + 0x6d),
                                  *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],3,0);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_64,"bool CTradeSpace::checkCancelTrade()",0x6b9,5);
              cMyTrace::operator()
                        (local_64,
                         "try insert_item(ENUM_ITEMSPACE_AVATAR) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
          else if (this[local_20 * 0x48 + local_30 * 0x798 + 0x38] == (CTradeSpace)0x7) {
            local_2c = CInventory::insertItemIntoCreature
                                 (local_ff4 + local_30 * 0x7b8,
                                  this + local_20 * 0x48 + local_30 * 0x798 + 0x39,0x1c,0,1);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_54,"bool CTradeSpace::checkCancelTrade()",0x6c3,5);
              cMyTrace::operator()
                        (local_54,
                         "try insert_item(ENUM_ITEMSPACE_CREATURE) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
          else {
            iVar2 = local_20 * 0x48 + local_30 * 0x798;
            local_2c = CInventory::insertItemIntoEquipment
                                 (local_ff4 + local_30 * 0x7b8,*(undefined4 *)(this + iVar2 + 0x39),
                                  *(undefined4 *)(this + iVar2 + 0x3d),
                                  *(undefined4 *)(this + iVar2 + 0x41),
                                  *(undefined4 *)(this + iVar2 + 0x45),
                                  *(undefined4 *)(this + iVar2 + 0x49),
                                  *(undefined4 *)(this + iVar2 + 0x4d),
                                  *(undefined4 *)(this + iVar2 + 0x51),
                                  *(undefined4 *)(this + iVar2 + 0x55),
                                  *(undefined4 *)(this + iVar2 + 0x59),
                                  *(undefined4 *)(this + iVar2 + 0x5d),
                                  *(undefined4 *)(this + iVar2 + 0x61),
                                  *(undefined4 *)(this + iVar2 + 0x65),
                                  *(undefined4 *)(this + iVar2 + 0x69),
                                  *(undefined4 *)(this + iVar2 + 0x6d),
                                  *(undefined4 *)(this + iVar2 + 0x71),this[iVar2 + 0x75],2,0,1);
            if (local_2c < 0) {
              uVar4 = CUserCharacInfo::getCurCharacNo
                                (*(CUserCharacInfo **)(this + (local_30 + 8) * 4));
              cMyTrace::cMyTrace(local_44,"bool CTradeSpace::checkCancelTrade()",0x6d8,5);
              cMyTrace::operator()
                        (local_44,
                         "try insert_item(INVEN_TYPE_EQUIP) fail - [Fail]Insert_item - fatal! canceled ch=%d"
                         ,uVar4);
              uVar4 = 0;
              goto LAB_0852e375;
            }
          }
        }
      }
    }
    uVar4 = 1;
LAB_0852e375:
    this_00 = local_84;
    while (this_00 != (cMyTrace *)local_ff4) {
      this_00 = this_00 + -0x7b8;
      CInventory::~CInventory((CInventory *)this_00);
    }
  }
  return uVar4;
}
```
