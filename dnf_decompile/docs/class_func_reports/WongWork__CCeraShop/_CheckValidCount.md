# _CheckValidCount

`_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods`

`WongWork::CCeraShop::_CheckValidCount(CCeraShopGoods const**)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08323af4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08323af4  _ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods
#           WongWork::CCeraShop::_CheckValidCount(CCeraShopGoods const**)
# range [0x08323af4, 0x08323f29]
08323af4 +0x000:  push   %ebp
08323af5 +0x001:  mov    %esp,%ebp
08323af7 +0x003:  push   %edi
08323af8 +0x004:  push   %esi
08323af9 +0x005:  push   %ebx
08323afa +0x006:  sub    $0xbc,%esp
08323b00 +0x00c:  lea    -0xa4(%ebp),%ebx
08323b06 +0x012:  mov    $0x0,%eax
08323b0b +0x017:  mov    $0xf,%edx
08323b10 +0x01c:  mov    %ebx,%edi
08323b12 +0x01e:  mov    %edx,%ecx
08323b14 +0x020:  rep stos %eax,%es:(%edi)
08323b16 +0x022:  movl   $0x0,-0x44(%ebp)
08323b1d +0x029:  movl   $0x0,-0x48(%ebp)
08323b24 +0x030:  movl   $0x0,-0x2c(%ebp)
08323b2b +0x037:  jmp    08323cd3 <+0x1df>
08323b30 +0x03c:  mov    -0x2c(%ebp),%eax
08323b33 +0x03f:  shl    $0x2,%eax
08323b36 +0x042:  add    0xc(%ebp),%eax
08323b39 +0x045:  mov    (%eax),%eax
08323b3b +0x047:  test   %eax,%eax
08323b3d +0x049:  je     08323ce4 <+0x1f0>
08323b43 +0x04f:  mov    -0x2c(%ebp),%eax
08323b46 +0x052:  add    $0x1,%eax
08323b49 +0x055:  mov    %eax,-0x28(%ebp)
08323b4c +0x058:  jmp    08323c09 <+0x115>
08323b51 +0x05d:  mov    -0x28(%ebp),%eax
08323b54 +0x060:  shl    $0x2,%eax
08323b57 +0x063:  add    0xc(%ebp),%eax
08323b5a +0x066:  mov    (%eax),%eax
08323b5c +0x068:  test   %eax,%eax
08323b5e +0x06a:  je     08323c1a <+0x126>
08323b64 +0x070:  mov    -0x2c(%ebp),%eax
08323b67 +0x073:  shl    $0x2,%eax
08323b6a +0x076:  add    0xc(%ebp),%eax
08323b6d +0x079:  mov    (%eax),%eax
08323b6f +0x07b:  mov    %eax,(%esp)
08323b72 +0x07e:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08323b77 +0x083:  mov    %eax,%ebx
08323b79 +0x085:  mov    -0x28(%ebp),%eax
08323b7c +0x088:  shl    $0x2,%eax
08323b7f +0x08b:  add    0xc(%ebp),%eax
08323b82 +0x08e:  mov    (%eax),%eax
08323b84 +0x090:  mov    %eax,(%esp)
08323b87 +0x093:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08323b8c +0x098:  cmp    %eax,%ebx
08323b8e +0x09a:  sete   %al
08323b91 +0x09d:  test   %al,%al
08323b93 +0x09f:  je     08323c05 <+0x111>
08323b95 +0x0a1:  mov    -0x2c(%ebp),%eax
08323b98 +0x0a4:  shl    $0x2,%eax
08323b9b +0x0a7:  add    0xc(%ebp),%eax
08323b9e +0x0aa:  mov    (%eax),%eax
08323ba0 +0x0ac:  mov    %eax,(%esp)
08323ba3 +0x0af:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
08323ba8 +0x0b4:  cmp    $0x3,%eax
08323bab +0x0b7:  je     08323bc0 <+0xcc>
08323bad +0x0b9:  cmp    $0x7,%eax
08323bb0 +0x0bc:  je     08323bb6 <+0xc2>
08323bb2 +0x0be:  test   %eax,%eax
08323bb4 +0x0c0:  jne    08323c05 <+0x111>
08323bb6 +0x0c2:  mov    $0x0,%ebx
08323bbb +0x0c7:  jmp    08323f1c <+0x428>
08323bc0 +0x0cc:  mov    -0x2c(%ebp),%eax
08323bc3 +0x0cf:  shl    $0x2,%eax
08323bc6 +0x0d2:  add    0xc(%ebp),%eax
08323bc9 +0x0d5:  mov    (%eax),%eax
08323bcb +0x0d7:  mov    %eax,(%esp)
08323bce +0x0da:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08323bd3 +0x0df:  mov    %eax,%ebx
08323bd5 +0x0e1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08323bda +0x0e6:  mov    %ebx,0x4(%esp)
08323bde +0x0ea:  mov    %eax,(%esp)
08323be1 +0x0ed:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08323be6 +0x0f2:  mov    %eax,-0x24(%ebp)
08323be9 +0x0f5:  mov    -0x24(%ebp),%eax
08323bec +0x0f8:  mov    %eax,(%esp)
08323bef +0x0fb:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08323bf4 +0x100:  xor    $0x1,%eax
08323bf7 +0x103:  test   %al,%al
08323bf9 +0x105:  je     08323c05 <+0x111>
08323bfb +0x107:  mov    $0x0,%ebx
08323c00 +0x10c:  jmp    08323f1c <+0x428>
08323c05 +0x111:  addl   $0x1,-0x28(%ebp)
08323c09 +0x115:  cmpl   $0x22,-0x28(%ebp)
08323c0d +0x119:  setle  %al
08323c10 +0x11c:  test   %al,%al
08323c12 +0x11e:  jne    08323b51 <+0x5d>
08323c18 +0x124:  jmp    08323c1b <+0x127>
08323c1a +0x126:  nop
08323c1b +0x127:  movb   $0x0,-0x55(%ebp)
08323c1f +0x12b:  mov    -0x2c(%ebp),%eax
08323c22 +0x12e:  shl    $0x2,%eax
08323c25 +0x131:  add    0xc(%ebp),%eax
08323c28 +0x134:  mov    (%eax),%eax
08323c2a +0x136:  mov    %eax,(%esp)
08323c2d +0x139:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08323c32 +0x13e:  mov    &_ZN10GlobalData11s_pCeraShopE,%edx
08323c38 +0x144:  lea    -0x55(%ebp),%ecx
08323c3b +0x147:  mov    %ecx,0x10(%esp)
08323c3f +0x14b:  lea    -0x48(%ebp),%ecx
08323c42 +0x14e:  mov    %ecx,0xc(%esp)
08323c46 +0x152:  lea    -0x44(%ebp),%ecx
08323c49 +0x155:  mov    %ecx,0x8(%esp)
08323c4d +0x159:  mov    %eax,0x4(%esp)
08323c51 +0x15d:  mov    %edx,(%esp)
08323c54 +0x160:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08323c59 +0x165:  xor    $0x1,%eax
08323c5c +0x168:  test   %al,%al
08323c5e +0x16a:  jne    08323cce <+0x1da>
08323c60 +0x16c:  mov    -0x44(%ebp),%eax
08323c63 +0x16f:  mov    -0xa4(%ebp,%eax,4),%edx
08323c6a +0x176:  add    $0x1,%edx
08323c6d +0x179:  mov    %edx,-0xa4(%ebp,%eax,4)
08323c74 +0x180:  movzbl -0x55(%ebp),%eax
08323c78 +0x184:  test   %al,%al
08323c7a +0x186:  je     08323ccf <+0x1db>
08323c7c +0x188:  mov    -0x44(%ebp),%ebx
08323c7f +0x18b:  mov    -0x44(%ebp),%eax
08323c82 +0x18e:  mov    -0xa4(%ebp,%eax,4),%eax
08323c89 +0x195:  sub    $0x1,%eax
08323c8c +0x198:  mov    %eax,-0x40(%ebp)
08323c8f +0x19b:  mov    -0x44(%ebp),%edx
08323c92 +0x19e:  lea    -0xa4(%ebp),%eax
08323c98 +0x1a4:  shl    $0x2,%edx
08323c9b +0x1a7:  lea    (%eax,%edx,1),%edx
08323c9e +0x1aa:  lea    -0x40(%ebp),%eax
08323ca1 +0x1ad:  mov    %eax,0x4(%esp)
08323ca5 +0x1b1:  mov    %edx,(%esp)
08323ca8 +0x1b4:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08323cad +0x1b9:  movl   $0x1,-0x3c(%ebp)
08323cb4 +0x1c0:  mov    %eax,0x4(%esp)
08323cb8 +0x1c4:  lea    -0x3c(%ebp),%eax
08323cbb +0x1c7:  mov    %eax,(%esp)
08323cbe +0x1ca:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08323cc3 +0x1cf:  mov    (%eax),%eax
08323cc5 +0x1d1:  mov    %eax,-0xa4(%ebp,%ebx,4)
08323ccc +0x1d8:  jmp    08323ccf <+0x1db>
08323cce +0x1da:  nop
08323ccf +0x1db:  addl   $0x1,-0x2c(%ebp)
08323cd3 +0x1df:  cmpl   $0x22,-0x2c(%ebp)
08323cd7 +0x1e3:  setle  %al
08323cda +0x1e6:  test   %al,%al
08323cdc +0x1e8:  jne    08323b30 <+0x3c>
08323ce2 +0x1ee:  jmp    08323ce5 <+0x1f1>
08323ce4 +0x1f0:  nop
08323ce5 +0x1f1:  movl   $0x1,-0x20(%ebp)
08323cec +0x1f8:  jmp    08323d0b <+0x217>
08323cee +0x1fa:  mov    -0x20(%ebp),%eax
08323cf1 +0x1fd:  mov    -0xa4(%ebp,%eax,4),%eax
08323cf8 +0x204:  cmp    $0x1,%eax
08323cfb +0x207:  jle    08323d07 <+0x213>
08323cfd +0x209:  mov    $0x0,%ebx
08323d02 +0x20e:  jmp    08323f1c <+0x428>
08323d07 +0x213:  addl   $0x1,-0x20(%ebp)
08323d0b +0x217:  cmpl   $0xe,-0x20(%ebp)
08323d0f +0x21b:  setle  %al
08323d12 +0x21e:  test   %al,%al
08323d14 +0x220:  jne    08323cee <+0x1fa>
08323d16 +0x222:  lea    -0x54(%ebp),%eax
08323d19 +0x225:  mov    %eax,(%esp)
08323d1c +0x228:  call   0832828a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1e3>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1e3
08323d21 +0x22d:  movl   $0x0,-0x1c(%ebp)
08323d28 +0x234:  jmp    08323e74 <+0x380>
08323d2d +0x239:  mov    -0x1c(%ebp),%eax
08323d30 +0x23c:  shl    $0x2,%eax
08323d33 +0x23f:  add    0xc(%ebp),%eax
08323d36 +0x242:  mov    (%eax),%eax
08323d38 +0x244:  test   %eax,%eax
08323d3a +0x246:  je     08323e6f <+0x37b>
08323d40 +0x24c:  mov    -0x1c(%ebp),%eax
08323d43 +0x24f:  shl    $0x2,%eax
08323d46 +0x252:  add    0xc(%ebp),%eax
08323d49 +0x255:  mov    (%eax),%eax
08323d4b +0x257:  mov    %eax,(%esp)
08323d4e +0x25a:  call   083280d0 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x29>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x29
08323d53 +0x25f:  xor    $0x1,%eax
08323d56 +0x262:  test   %al,%al
08323d58 +0x264:  jne    08323d87 <+0x293>
08323d5a +0x266:  mov    -0x1c(%ebp),%eax
08323d5d +0x269:  shl    $0x2,%eax
08323d60 +0x26c:  add    0xc(%ebp),%eax
08323d63 +0x26f:  mov    (%eax),%eax
08323d65 +0x271:  mov    %eax,(%esp)
08323d68 +0x274:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08323d6d +0x279:  mov    %eax,%ebx
08323d6f +0x27b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08323d74 +0x280:  mov    0xc(%eax),%eax
08323d77 +0x283:  mov    %ebx,0x4(%esp)
08323d7b +0x287:  mov    %eax,(%esp)
08323d7e +0x28a:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08323d83 +0x28f:  test   %eax,%eax
08323d85 +0x291:  je     08323d8e <+0x29a>
08323d87 +0x293:  mov    $0x1,%eax
08323d8c +0x298:  jmp    08323d93 <+0x29f>
08323d8e +0x29a:  mov    $0x0,%eax
08323d93 +0x29f:  test   %al,%al
08323d95 +0x2a1:  je     08323e70 <+0x37c>
08323d9b +0x2a7:  lea    -0x64(%ebp),%eax
08323d9e +0x2aa:  lea    -0x54(%ebp),%edx
08323da1 +0x2ad:  mov    %edx,0x4(%esp)
08323da5 +0x2b1:  mov    %eax,(%esp)
08323da8 +0x2b4:  call   083282fc <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x255>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x255
08323dad +0x2b9:  sub    $0x4,%esp
08323db0 +0x2bc:  lea    -0x68(%ebp),%eax
08323db3 +0x2bf:  lea    -0x54(%ebp),%edx
08323db6 +0x2c2:  mov    %edx,0x4(%esp)
08323dba +0x2c6:  mov    %eax,(%esp)
08323dbd +0x2c9:  call   08328320 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x279>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x279
08323dc2 +0x2ce:  sub    $0x4,%esp
08323dc5 +0x2d1:  jmp    08323e09 <+0x315>
08323dc7 +0x2d3:  lea    -0x64(%ebp),%eax
08323dca +0x2d6:  mov    %eax,(%esp)
08323dcd +0x2d9:  call   08328388 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x2e1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x2e1
08323dd2 +0x2de:  mov    (%eax),%edx
08323dd4 +0x2e0:  mov    -0x1c(%ebp),%eax
08323dd7 +0x2e3:  shl    $0x2,%eax
08323dda +0x2e6:  add    0xc(%ebp),%eax
08323ddd +0x2e9:  mov    (%eax),%eax
08323ddf +0x2eb:  cmp    %eax,%edx
08323de1 +0x2ed:  sete   %al
08323de4 +0x2f0:  test   %al,%al
08323de6 +0x2f2:  je     08323dfe <+0x30a>
08323de8 +0x2f4:  lea    -0x64(%ebp),%eax
08323deb +0x2f7:  mov    %eax,(%esp)
08323dee +0x2fa:  call   08328388 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x2e1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x2e1
08323df3 +0x2ff:  mov    0x4(%eax),%edx
08323df6 +0x302:  add    $0x1,%edx
08323df9 +0x305:  mov    %edx,0x4(%eax)
08323dfc +0x308:  jmp    08323e1f <+0x32b>
08323dfe +0x30a:  lea    -0x64(%ebp),%eax
08323e01 +0x30d:  mov    %eax,(%esp)
08323e04 +0x310:  call   08328372 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x2cb>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x2cb
08323e09 +0x315:  lea    -0x68(%ebp),%eax
08323e0c +0x318:  mov    %eax,0x4(%esp)
08323e10 +0x31c:  lea    -0x64(%ebp),%eax
08323e13 +0x31f:  mov    %eax,(%esp)
08323e16 +0x322:  call   08328346 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x29f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x29f
08323e1b +0x327:  test   %al,%al
08323e1d +0x329:  jne    08323dc7 <+0x2d3>
08323e1f +0x32b:  lea    -0x68(%ebp),%eax
08323e22 +0x32e:  mov    %eax,0x4(%esp)
08323e26 +0x332:  lea    -0x64(%ebp),%eax
08323e29 +0x335:  mov    %eax,(%esp)
08323e2c +0x338:  call   08328392 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x2eb>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x2eb
08323e31 +0x33d:  test   %al,%al
08323e33 +0x33f:  je     08323e70 <+0x37c>
08323e35 +0x341:  movl   $0x1,-0x30(%ebp)
08323e3c +0x348:  mov    -0x1c(%ebp),%eax
08323e3f +0x34b:  shl    $0x2,%eax
08323e42 +0x34e:  add    0xc(%ebp),%eax
08323e45 +0x351:  lea    -0x30(%ebp),%edx
08323e48 +0x354:  mov    %edx,0x8(%esp)
08323e4c +0x358:  mov    %eax,0x4(%esp)
08323e50 +0x35c:  lea    -0x38(%ebp),%eax
08323e53 +0x35f:  mov    %eax,(%esp)
08323e56 +0x362:  call   083283be <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x317>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x317
08323e5b +0x367:  lea    -0x38(%ebp),%eax
08323e5e +0x36a:  mov    %eax,0x4(%esp)
08323e62 +0x36e:  lea    -0x54(%ebp),%eax
08323e65 +0x371:  mov    %eax,(%esp)
08323e68 +0x374:  call   083283ee <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x347>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x347
08323e6d +0x379:  jmp    08323e70 <+0x37c>
08323e6f +0x37b:  nop
08323e70 +0x37c:  addl   $0x1,-0x1c(%ebp)
08323e74 +0x380:  cmpl   $0x22,-0x1c(%ebp)
08323e78 +0x384:  setle  %al
08323e7b +0x387:  test   %al,%al
08323e7d +0x389:  jne    08323d2d <+0x239>
08323e83 +0x38f:  lea    -0x5c(%ebp),%eax
08323e86 +0x392:  lea    -0x54(%ebp),%edx
08323e89 +0x395:  mov    %edx,0x4(%esp)
08323e8d +0x399:  mov    %eax,(%esp)
08323e90 +0x39c:  call   083282fc <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x255>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x255
08323e95 +0x3a1:  sub    $0x4,%esp
08323e98 +0x3a4:  lea    -0x60(%ebp),%eax
08323e9b +0x3a7:  lea    -0x54(%ebp),%edx
08323e9e +0x3aa:  mov    %edx,0x4(%esp)
08323ea2 +0x3ae:  mov    %eax,(%esp)
08323ea5 +0x3b1:  call   08328320 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x279>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x279
08323eaa +0x3b6:  sub    $0x4,%esp
08323ead +0x3b9:  jmp    08323ed9 <+0x3e5>
08323eaf +0x3bb:  lea    -0x5c(%ebp),%eax
08323eb2 +0x3be:  mov    %eax,(%esp)
08323eb5 +0x3c1:  call   08328388 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x2e1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x2e1
08323eba +0x3c6:  mov    0x4(%eax),%eax
08323ebd +0x3c9:  cmp    $0x1,%eax
08323ec0 +0x3cc:  seta   %al
08323ec3 +0x3cf:  test   %al,%al
08323ec5 +0x3d1:  je     08323ece <+0x3da>
08323ec7 +0x3d3:  mov    $0x0,%ebx
08323ecc +0x3d8:  jmp    08323f11 <+0x41d>
08323ece +0x3da:  lea    -0x5c(%ebp),%eax
08323ed1 +0x3dd:  mov    %eax,(%esp)
08323ed4 +0x3e0:  call   08328372 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x2cb>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x2cb
08323ed9 +0x3e5:  lea    -0x60(%ebp),%eax
08323edc +0x3e8:  mov    %eax,0x4(%esp)
08323ee0 +0x3ec:  lea    -0x5c(%ebp),%eax
08323ee3 +0x3ef:  mov    %eax,(%esp)
08323ee6 +0x3f2:  call   08328346 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x29f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x29f
08323eeb +0x3f7:  test   %al,%al
08323eed +0x3f9:  jne    08323eaf <+0x3bb>
08323eef +0x3fb:  mov    $0x1,%ebx
08323ef4 +0x400:  jmp    08323f11 <+0x41d>
08323ef6 +0x402:  mov    %edx,%ebx
08323ef8 +0x404:  mov    %eax,%esi
08323efa +0x406:  lea    -0x54(%ebp),%eax
08323efd +0x409:  mov    %eax,(%esp)
08323f00 +0x40c:  call   0832829e <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1f7>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1f7
08323f05 +0x411:  mov    %esi,%eax
08323f07 +0x413:  mov    %ebx,%edx
08323f09 +0x415:  mov    %eax,(%esp)
08323f0c +0x418:  call   08ae3750 <_Unwind_Resume>
08323f11 +0x41d:  lea    -0x54(%ebp),%eax
08323f14 +0x420:  mov    %eax,(%esp)
08323f17 +0x423:  call   0832829e <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1f7>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1f7
08323f1c +0x428:  mov    %ebx,%eax
08323f1e +0x42a:  lea    -0xc(%ebp),%esp
08323f21 +0x42d:  add    $0x0,%esp
08323f24 +0x430:  pop    %ebx
08323f25 +0x431:  pop    %esi
08323f26 +0x432:  pop    %edi
08323f27 +0x433:  pop    %ebp
08323f28 +0x434:  ret
08323f29 +0x435:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_CheckValidCount @ 0x8323af4

/* WongWork::CCeraShop::_CheckValidCount(CCeraShopGoods const**) */

undefined4 __thiscall
WongWork::CCeraShop::_CheckValidCount(CCeraShop *this,CCeraShopGoods **param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_a8 [15];
  __normal_iterator local_6c [4];
  __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
  local_68 [4];
  __normal_iterator local_64 [4];
  __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
  local_60 [7];
  bool local_59;
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  local_58 [12];
  int local_4c;
  int local_48;
  int local_44 [2];
  pair<CCeraShopGoods_const*,unsigned_int> local_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  int local_20;
  
  piVar5 = local_a8;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_48 = 0;
  local_4c = 0;
  for (local_30 = 0;
      (local_30 < 0x23 && (iVar6 = local_30, param_1[local_30] != (CCeraShopGoods *)0x0));
      local_30 = local_30 + 1) {
    while ((local_2c = iVar6 + 1, local_2c < 0x23 && (param_1[local_2c] != (CCeraShopGoods *)0x0)))
    {
      iVar4 = CCeraShopGoods::GetItemIdx(param_1[local_30]);
      iVar3 = CCeraShopGoods::GetItemIdx(param_1[local_2c]);
      iVar6 = local_2c;
      if (iVar4 == iVar3) {
        iVar4 = CCeraShopGoods::GetGroupIdx(param_1[local_30]);
        if (iVar4 == 3) {
          iVar6 = CCeraShopGoods::GetItemIdx(param_1[local_30]);
          this_00 = (CDataManager *)G_CDataManager();
          local_28 = (CItem *)CDataManager::find_item(this_00,iVar6);
          cVar1 = CItem::is_stackable(local_28);
          iVar6 = local_2c;
          if (cVar1 != '\x01') {
            return 0;
          }
        }
        else if ((iVar4 == 7) || (iVar6 = local_2c, iVar4 == 0)) {
          return 0;
        }
      }
    }
    local_59 = false;
    iVar6 = CCeraShopGoods::GetItemIdx(param_1[local_30]);
    cVar1 = IsSpecialItem(GlobalData::s_pCeraShop,iVar6,&local_48,&local_4c,&local_59);
    if ((cVar1 == '\x01') &&
       (local_a8[local_48] = local_a8[local_48] + 1, iVar6 = local_48, local_59 != false)) {
      local_44[0] = local_a8[local_48] + -1;
      piVar5 = std::max<int>(local_a8 + local_48,local_44);
      local_44[1] = 1;
      piVar5 = std::min<int>(local_44 + 1,piVar5);
      local_a8[iVar6] = *piVar5;
    }
  }
  for (local_24 = 1; local_24 < 0xf; local_24 = local_24 + 1) {
    if (1 < local_a8[local_24]) {
      return 0;
    }
  }
  std::
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  ::vector(local_58);
  for (local_20 = 0; local_20 < 0x23; local_20 = local_20 + 1) {
    if (param_1[local_20] != (CCeraShopGoods *)0x0) {
      cVar1 = CCeraShopGoods::isStackBuyable(param_1[local_20]);
      if (cVar1 == '\x01') {
        iVar6 = CCeraShopGoods::GetItemIdx(param_1[local_20]);
                    /* try { // try from 08323d6f to 08323eea has its CatchHandler @ 08323ef6 */
        iVar4 = G_CDataManager();
        iVar6 = CItemList::GetRestrictCode(*(CItemList **)(iVar4 + 0xc),iVar6);
        if (iVar6 != 0) goto LAB_08323d87;
        bVar2 = false;
      }
      else {
LAB_08323d87:
        bVar2 = true;
      }
      if (bVar2) {
        std::
        vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
        ::begin();
        std::
        vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
        ::end();
        while (bVar2 = __gnu_cxx::operator!=(local_68,local_6c), bVar2) {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
                          ::operator->(local_68);
          if ((CCeraShopGoods *)*piVar5 == param_1[local_20]) {
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
                    ::operator->(local_68);
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
            break;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
          ::operator++(local_68);
        }
        bVar2 = __gnu_cxx::operator==(local_68,local_6c);
        if (bVar2) {
          local_34 = 1;
          std::pair<CCeraShopGoods_const*,unsigned_int>::pair<CCeraShopGoods_const*&,int>
                    (local_3c,param_1 + local_20,&local_34);
          std::
          vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
          ::push_back(local_58,local_3c);
        }
      }
    }
  }
  std::
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  ::begin();
  std::
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  ::end();
  do {
    bVar2 = __gnu_cxx::operator!=(local_60,local_64);
    if (!bVar2) {
      uVar7 = 1;
LAB_08323f11:
      std::
      vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
      ::~vector(local_58);
      return uVar7;
    }
    iVar6 = __gnu_cxx::
            __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
            ::operator->(local_60);
    if (1 < *(uint *)(iVar6 + 4)) {
      uVar7 = 0;
      goto LAB_08323f11;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
    ::operator++(local_60);
  } while( true );
}
```
