# dispatch_sig_taiwan

`_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci`

`Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultBidding` | `0x084d6cda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d6cda  _ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci
#           Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)
# range [0x084d6cda, 0x084d741b]
084d6cda +0x000:  push   %ebp
084d6cdb +0x001:  mov    %esp,%ebp
084d6cdd +0x003:  push   %esi
084d6cde +0x004:  push   %ebx
084d6cdf +0x005:  add    $0xffffff80,%esp
084d6ce2 +0x008:  mov    0x10(%ebp),%eax
084d6ce5 +0x00b:  mov    %eax,-0x2c(%ebp)
084d6ce8 +0x00e:  mov    -0x2c(%ebp),%eax
084d6ceb +0x011:  mov    0x4(%eax),%eax
084d6cee +0x014:  mov    %eax,%ebx
084d6cf0 +0x016:  mov    0xc(%ebp),%eax
084d6cf3 +0x019:  mov    %eax,(%esp)
084d6cf6 +0x01c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6cfb +0x021:  cmp    %eax,%ebx
084d6cfd +0x023:  setne  %al
084d6d00 +0x026:  test   %al,%al
084d6d02 +0x028:  je     084d6d0e <+0x34>
084d6d04 +0x02a:  mov    $0x0,%ebx
084d6d09 +0x02f:  jmp    084d7412 <+0x738>
084d6d0e +0x034:  movl   $0x0,-0x18(%ebp)
084d6d15 +0x03b:  jmp    084d6d8c <+0xb2>
084d6d17 +0x03d:  mov    -0x18(%ebp),%eax
084d6d1a +0x040:  mov    &_ZL6gmList(,%eax,4),%eax
084d6d21 +0x047:  mov    %eax,%ebx
084d6d23 +0x049:  mov    0xc(%ebp),%eax
084d6d26 +0x04c:  mov    %eax,(%esp)
084d6d29 +0x04f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6d2e +0x054:  cmp    %eax,%ebx
084d6d30 +0x056:  sete   %al
084d6d33 +0x059:  test   %al,%al
084d6d35 +0x05b:  je     084d6d88 <+0xae>
084d6d37 +0x05d:  mov    0xc(%ebp),%eax
084d6d3a +0x060:  mov    %eax,(%esp)
084d6d3d +0x063:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6d42 +0x068:  mov    %eax,%ebx
084d6d44 +0x06a:  movl   $0x0,0xc(%esp)
084d6d4c +0x072:  movl   $0x3c12,0x8(%esp)
084d6d54 +0x07a:  movl   $&_ZZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d6d5c +0x082:  lea    -0x3c(%ebp),%eax
084d6d5f +0x085:  mov    %eax,(%esp)
084d6d62 +0x088:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d6d67 +0x08d:  mov    %ebx,0xc(%esp)
084d6d6b +0x091:  movl   $"ACK AuctionResultBidding",0x8(%esp)
084d6d73 +0x099:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d6d7b +0x0a1:  lea    -0x3c(%ebp),%eax
084d6d7e +0x0a4:  mov    %eax,(%esp)
084d6d81 +0x0a7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d6d86 +0x0ac:  jmp    084d6d97 <+0xbd>
084d6d88 +0x0ae:  addl   $0x1,-0x18(%ebp)
084d6d8c +0x0b2:  cmpl   $0x4,-0x18(%ebp)
084d6d90 +0x0b6:  setle  %al
084d6d93 +0x0b9:  test   %al,%al
084d6d95 +0x0bb:  jne    084d6d17 <+0x3d>
084d6d97 +0x0bd:  lea    -0x48(%ebp),%eax
084d6d9a +0x0c0:  mov    %eax,(%esp)
084d6d9d +0x0c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d6da2 +0x0c8:  movl   $0xbc,0x8(%esp)
084d6daa +0x0d0:  movl   $0x1,0x4(%esp)
084d6db2 +0x0d8:  lea    -0x48(%ebp),%eax
084d6db5 +0x0db:  mov    %eax,(%esp)
084d6db8 +0x0de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d6dbd +0x0e3:  mov    -0x2c(%ebp),%eax
084d6dc0 +0x0e6:  movzbl 0xc(%eax),%eax
084d6dc4 +0x0ea:  movzbl %al,%eax
084d6dc7 +0x0ed:  mov    %eax,0x4(%esp)
084d6dcb +0x0f1:  lea    -0x48(%ebp),%eax
084d6dce +0x0f4:  mov    %eax,(%esp)
084d6dd1 +0x0f7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d6dd6 +0x0fc:  mov    -0x2c(%ebp),%eax
084d6dd9 +0x0ff:  movzbl 0xc(%eax),%eax
084d6ddd +0x103:  test   %al,%al
084d6ddf +0x105:  jne    084d6dfa <+0x120>
084d6de1 +0x107:  mov    -0x2c(%ebp),%eax
084d6de4 +0x10a:  movzbl 0xd(%eax),%eax
084d6de8 +0x10e:  movzbl %al,%eax
084d6deb +0x111:  mov    %eax,0x4(%esp)
084d6def +0x115:  lea    -0x48(%ebp),%eax
084d6df2 +0x118:  mov    %eax,(%esp)
084d6df5 +0x11b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d6dfa +0x120:  mov    -0x2c(%ebp),%eax
084d6dfd +0x123:  mov    (%eax),%eax
084d6dff +0x125:  mov    %eax,0x4(%esp)
084d6e03 +0x129:  lea    -0x48(%ebp),%eax
084d6e06 +0x12c:  mov    %eax,(%esp)
084d6e09 +0x12f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d6e0e +0x134:  movl   $0x0,-0x28(%ebp)
084d6e15 +0x13b:  movl   $0x0,-0x24(%ebp)
084d6e1c +0x142:  movl   $0x0,-0x20(%ebp)
084d6e23 +0x149:  movl   $0x0,-0x1c(%ebp)
084d6e2a +0x150:  mov    -0x2c(%ebp),%eax
084d6e2d +0x153:  mov    (%eax),%eax
084d6e2f +0x155:  cmp    $0x1,%eax
084d6e32 +0x158:  jne    084d6f2a <+0x250>
084d6e38 +0x15e:  movl   $0x0,0x4(%esp)
084d6e40 +0x166:  mov    0xc(%ebp),%eax
084d6e43 +0x169:  mov    %eax,(%esp)
084d6e46 +0x16c:  call   08692a08 <_ZN5CUser13SetBuyingGoldEb>  ; CUser::SetBuyingGold(bool)
084d6e4b +0x171:  mov    0xc(%ebp),%eax
084d6e4e +0x174:  mov    %eax,(%esp)
084d6e51 +0x177:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6e56 +0x17c:  mov    %eax,%ebx
084d6e58 +0x17e:  call   08231f20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x75ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x75ca
084d6e5d +0x183:  mov    %ebx,0x4(%esp)
084d6e61 +0x187:  mov    %eax,(%esp)
084d6e64 +0x18a:  call   082151b8 <_ZN14CPrePayInfoMgr14FindPrePayInfoEi>  ; CPrePayInfoMgr::FindPrePayInfo(int)
084d6e69 +0x18f:  mov    %eax,-0x28(%ebp)
084d6e6c +0x192:  cmpl   $0x0,-0x28(%ebp)
084d6e70 +0x196:  jne    084d6eb7 <+0x1dd>
084d6e72 +0x198:  mov    0xc(%ebp),%eax
084d6e75 +0x19b:  mov    %eax,(%esp)
084d6e78 +0x19e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6e7d +0x1a3:  mov    %eax,0x14(%esp)
084d6e81 +0x1a7:  movl   $"PrePayInfo is null. character:%u",0x10(%esp)
084d6e89 +0x1af:  movl   $0x3c28,0xc(%esp)
084d6e91 +0x1b7:  movl   $&_ZZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d6e99 +0x1bf:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d6ea1 +0x1c7:  movl   $0x1,(%esp)
084d6ea8 +0x1ce:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d6ead +0x1d3:  mov    $0x0,%ebx
084d6eb2 +0x1d8:  jmp    084d7407 <+0x72d>
084d6eb7 +0x1dd:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084d6ebc +0x1e2:  mov    (%eax),%eax
084d6ebe +0x1e4:  add    $0x3c,%eax
084d6ec1 +0x1e7:  mov    (%eax),%edx
084d6ec3 +0x1e9:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084d6ec8 +0x1ee:  mov    %eax,(%esp)
084d6ecb +0x1f1:  call   *%edx
084d6ecd +0x1f3:  mov    %eax,-0x24(%ebp)
084d6ed0 +0x1f6:  mov    -0x28(%ebp),%eax
084d6ed3 +0x1f9:  mov    0x10(%eax),%edx
084d6ed6 +0x1fc:  mov    %edx,-0x54(%ebp)
084d6ed9 +0x1ff:  mov    0x14(%eax),%edx
084d6edc +0x202:  mov    %edx,-0x50(%ebp)
084d6edf +0x205:  mov    0x18(%eax),%eax
084d6ee2 +0x208:  mov    %eax,-0x4c(%ebp)
084d6ee5 +0x20b:  mov    -0x28(%ebp),%eax
084d6ee8 +0x20e:  mov    0x1c(%eax),%edx
084d6eeb +0x211:  mov    %edx,-0x60(%ebp)
084d6eee +0x214:  mov    0x20(%eax),%edx
084d6ef1 +0x217:  mov    %edx,-0x5c(%ebp)
084d6ef4 +0x21a:  mov    0x24(%eax),%eax
084d6ef7 +0x21d:  mov    %eax,-0x58(%ebp)
084d6efa +0x220:  mov    -0x28(%ebp),%eax
084d6efd +0x223:  mov    0x8(%eax),%eax
084d6f00 +0x226:  mov    %eax,-0x20(%ebp)
084d6f03 +0x229:  mov    -0x28(%ebp),%eax
084d6f06 +0x22c:  mov    0xc(%eax),%eax
084d6f09 +0x22f:  mov    %eax,-0x1c(%ebp)
084d6f0c +0x232:  mov    0xc(%ebp),%eax
084d6f0f +0x235:  mov    %eax,(%esp)
084d6f12 +0x238:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6f17 +0x23d:  mov    %eax,%ebx
084d6f19 +0x23f:  call   08231f20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x75ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x75ca
084d6f1e +0x244:  mov    %ebx,0x4(%esp)
084d6f22 +0x248:  mov    %eax,(%esp)
084d6f25 +0x24b:  call   084ed10e <_GLOBAL__I__Z7getUserj+0x40c0>  ; global constructors keyed to getUser(unsigned int)+0x40c0
084d6f2a +0x250:  mov    -0x2c(%ebp),%eax
084d6f2d +0x253:  movzbl 0xc(%eax),%eax
084d6f31 +0x257:  test   %al,%al
084d6f33 +0x259:  jne    084d71a5 <+0x4cb>
084d6f39 +0x25f:  mov    -0x2c(%ebp),%eax
084d6f3c +0x262:  mov    (%eax),%eax
084d6f3e +0x264:  cmp    $0x1,%eax
084d6f41 +0x267:  jne    084d7135 <+0x45b>
084d6f47 +0x26d:  mov    -0x24(%ebp),%eax
084d6f4a +0x270:  mov    %eax,(%esp)
084d6f4d +0x273:  call   0817a2ee <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x36c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x36c
084d6f52 +0x278:  lea    -0x54(%ebp),%edx
084d6f55 +0x27b:  mov    %edx,0x4(%esp)
084d6f59 +0x27f:  mov    %eax,(%esp)
084d6f5c +0x282:  call   08173d1c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&)
084d6f61 +0x287:  mov    %eax,-0x14(%ebp)
084d6f64 +0x28a:  mov    -0x14(%ebp),%eax
084d6f67 +0x28d:  mov    %eax,(%esp)
084d6f6a +0x290:  call   08146669 <_Z21CheckBillingErrorCodei>  ; CheckBillingErrorCode(int)
084d6f6f +0x295:  xor    $0x1,%eax
084d6f72 +0x298:  test   %al,%al
084d6f74 +0x29a:  je     084d700c <+0x332>
084d6f7a +0x2a0:  mov    0xc(%ebp),%eax
084d6f7d +0x2a3:  mov    %eax,(%esp)
084d6f80 +0x2a6:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d6f85 +0x2ab:  mov    %eax,%ebx
084d6f87 +0x2ad:  mov    0xc(%ebp),%eax
084d6f8a +0x2b0:  mov    %eax,(%esp)
084d6f8d +0x2b3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6f92 +0x2b8:  mov    -0x14(%ebp),%edx
084d6f95 +0x2bb:  mov    %edx,0x1c(%esp)
084d6f99 +0x2bf:  mov    %ebx,0x18(%esp)
084d6f9d +0x2c3:  mov    %eax,0x14(%esp)
084d6fa1 +0x2c7:  movl   $"IPG_CANCEL user: %d, charac: %s reason: %d",0x10(%esp)
084d6fa9 +0x2cf:  movl   $0x3c3c,0xc(%esp)
084d6fb1 +0x2d7:  movl   $&_ZZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d6fb9 +0x2df:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d6fc1 +0x2e7:  movl   $0x1,(%esp)
084d6fc8 +0x2ee:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d6fcd +0x2f3:  mov    -0x50(%ebp),%eax
084d6fd0 +0x2f6:  mov    -0x4c(%ebp),%edx
084d6fd3 +0x2f9:  mov    0xc(%ebp),%ecx
084d6fd6 +0x2fc:  lea    0x79700(%ecx),%ebx
084d6fdc +0x302:  movl   $"rollback",0x18(%esp)
084d6fe4 +0x30a:  mov    -0x14(%ebp),%ecx
084d6fe7 +0x30d:  mov    %ecx,0x14(%esp)
084d6feb +0x311:  mov    -0x20(%ebp),%ecx
084d6fee +0x314:  mov    %ecx,0x10(%esp)
084d6ff2 +0x318:  mov    %eax,0x8(%esp)
084d6ff6 +0x31c:  mov    %edx,0xc(%esp)
084d6ffa +0x320:  movl   $0x2,0x4(%esp)
084d7002 +0x328:  mov    %ebx,(%esp)
084d7005 +0x32b:  call   08685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>  ; cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
084d700a +0x330:  jmp    084d703a <+0x360>
084d700c +0x332:  mov    -0x50(%ebp),%eax
084d700f +0x335:  mov    -0x4c(%ebp),%edx
084d7012 +0x338:  mov    0xc(%ebp),%ecx
084d7015 +0x33b:  lea    0x79700(%ecx),%ebx
084d701b +0x341:  mov    -0x20(%ebp),%ecx
084d701e +0x344:  mov    %ecx,0x10(%esp)
084d7022 +0x348:  mov    %eax,0x8(%esp)
084d7026 +0x34c:  mov    %edx,0xc(%esp)
084d702a +0x350:  movl   $0x2,0x4(%esp)
084d7032 +0x358:  mov    %ebx,(%esp)
084d7035 +0x35b:  call   086858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>  ; cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
084d703a +0x360:  mov    -0x24(%ebp),%eax
084d703d +0x363:  mov    %eax,(%esp)
084d7040 +0x366:  call   0817a2ee <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x36c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x36c
084d7045 +0x36b:  lea    -0x60(%ebp),%edx
084d7048 +0x36e:  mov    %edx,0x4(%esp)
084d704c +0x372:  mov    %eax,(%esp)
084d704f +0x375:  call   08173d1c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&)
084d7054 +0x37a:  mov    %eax,-0x14(%ebp)
084d7057 +0x37d:  mov    -0x14(%ebp),%eax
084d705a +0x380:  mov    %eax,(%esp)
084d705d +0x383:  call   08146669 <_Z21CheckBillingErrorCodei>  ; CheckBillingErrorCode(int)
084d7062 +0x388:  xor    $0x1,%eax
084d7065 +0x38b:  test   %al,%al
084d7067 +0x38d:  je     084d7102 <+0x428>
084d706d +0x393:  mov    0xc(%ebp),%eax
084d7070 +0x396:  mov    %eax,(%esp)
084d7073 +0x399:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d7078 +0x39e:  mov    %eax,%ebx
084d707a +0x3a0:  mov    0xc(%ebp),%eax
084d707d +0x3a3:  mov    %eax,(%esp)
084d7080 +0x3a6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7085 +0x3ab:  mov    -0x14(%ebp),%edx
084d7088 +0x3ae:  mov    %edx,0x1c(%esp)
084d708c +0x3b2:  mov    %ebx,0x18(%esp)
084d7090 +0x3b6:  mov    %eax,0x14(%esp)
084d7094 +0x3ba:  movl   $"IPG_CANCEL user: %d, charac: %s reason: %d",0x10(%esp)
084d709c +0x3c2:  movl   $0x3c47,0xc(%esp)
084d70a4 +0x3ca:  movl   $&_ZZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d70ac +0x3d2:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d70b4 +0x3da:  movl   $0x1,(%esp)
084d70bb +0x3e1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d70c0 +0x3e6:  mov    -0x5c(%ebp),%eax
084d70c3 +0x3e9:  mov    -0x58(%ebp),%edx
084d70c6 +0x3ec:  mov    0xc(%ebp),%ecx
084d70c9 +0x3ef:  lea    0x79700(%ecx),%ebx
084d70cf +0x3f5:  movl   $"rollback",0x18(%esp)
084d70d7 +0x3fd:  mov    -0x14(%ebp),%ecx
084d70da +0x400:  mov    %ecx,0x14(%esp)
084d70de +0x404:  mov    -0x1c(%ebp),%ecx
084d70e1 +0x407:  mov    %ecx,0x10(%esp)
084d70e5 +0x40b:  mov    %eax,0x8(%esp)
084d70e9 +0x40f:  mov    %edx,0xc(%esp)
084d70ed +0x413:  movl   $0x2,0x4(%esp)
084d70f5 +0x41b:  mov    %ebx,(%esp)
084d70f8 +0x41e:  call   08685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>  ; cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
084d70fd +0x423:  jmp    084d7399 <+0x6bf>
084d7102 +0x428:  mov    -0x5c(%ebp),%eax
084d7105 +0x42b:  mov    -0x58(%ebp),%edx
084d7108 +0x42e:  mov    0xc(%ebp),%ecx
084d710b +0x431:  lea    0x79700(%ecx),%ebx
084d7111 +0x437:  mov    -0x1c(%ebp),%ecx
084d7114 +0x43a:  mov    %ecx,0x10(%esp)
084d7118 +0x43e:  mov    %eax,0x8(%esp)
084d711c +0x442:  mov    %edx,0xc(%esp)
084d7120 +0x446:  movl   $0x2,0x4(%esp)
084d7128 +0x44e:  mov    %ebx,(%esp)
084d712b +0x451:  call   086858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>  ; cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
084d7130 +0x456:  jmp    084d7399 <+0x6bf>
084d7135 +0x45b:  mov    -0x2c(%ebp),%eax
084d7138 +0x45e:  mov    0x8(%eax),%ebx
084d713b +0x461:  mov    0xc(%ebp),%eax
084d713e +0x464:  mov    %eax,(%esp)
084d7141 +0x467:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084d7146 +0x46c:  movl   $0x0,0x10(%esp)
084d714e +0x474:  movl   $0x1,0xc(%esp)
084d7156 +0x47c:  movl   $0x14,0x8(%esp)
084d715e +0x484:  mov    %ebx,0x4(%esp)
084d7162 +0x488:  mov    %eax,(%esp)
084d7165 +0x48b:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084d716a +0x490:  mov    %eax,-0x10(%ebp)
084d716d +0x493:  mov    -0x2c(%ebp),%eax
084d7170 +0x496:  mov    0x8(%eax),%eax
084d7173 +0x499:  cmp    -0x10(%ebp),%eax
084d7176 +0x49c:  jle    084d7399 <+0x6bf>
084d717c +0x4a2:  mov    -0x10(%ebp),%edx
084d717f +0x4a5:  mov    -0x2c(%ebp),%eax
084d7182 +0x4a8:  mov    0x8(%eax),%eax
084d7185 +0x4ab:  mov    %edx,0xc(%esp)
084d7189 +0x4af:  mov    %eax,0x8(%esp)
084d718d +0x4b3:  movl   $0x0,0x4(%esp)
084d7195 +0x4bb:  mov    0xc(%ebp),%eax
084d7198 +0x4be:  mov    %eax,(%esp)
084d719b +0x4c1:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
084d71a0 +0x4c6:  jmp    084d7399 <+0x6bf>
084d71a5 +0x4cb:  mov    -0x2c(%ebp),%eax
084d71a8 +0x4ce:  mov    (%eax),%eax
084d71aa +0x4d0:  cmp    $0x1,%eax
084d71ad +0x4d3:  jne    084d7399 <+0x6bf>
084d71b3 +0x4d9:  mov    -0x24(%ebp),%eax
084d71b6 +0x4dc:  mov    %eax,(%esp)
084d71b9 +0x4df:  call   0817a2ee <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x36c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x36c
084d71be +0x4e4:  lea    -0x54(%ebp),%edx
084d71c1 +0x4e7:  mov    %edx,0x4(%esp)
084d71c5 +0x4eb:  mov    %eax,(%esp)
084d71c8 +0x4ee:  call   08173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&)
084d71cd +0x4f3:  mov    %eax,-0xc(%ebp)
084d71d0 +0x4f6:  mov    -0xc(%ebp),%eax
084d71d3 +0x4f9:  mov    %eax,(%esp)
084d71d6 +0x4fc:  call   08146669 <_Z21CheckBillingErrorCodei>  ; CheckBillingErrorCode(int)
084d71db +0x501:  xor    $0x1,%eax
084d71de +0x504:  test   %al,%al
084d71e0 +0x506:  je     084d7278 <+0x59e>
084d71e6 +0x50c:  mov    0xc(%ebp),%eax
084d71e9 +0x50f:  mov    %eax,(%esp)
084d71ec +0x512:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d71f1 +0x517:  mov    %eax,%ebx
084d71f3 +0x519:  mov    0xc(%ebp),%eax
084d71f6 +0x51c:  mov    %eax,(%esp)
084d71f9 +0x51f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d71fe +0x524:  mov    -0xc(%ebp),%edx
084d7201 +0x527:  mov    %edx,0x1c(%esp)
084d7205 +0x52b:  mov    %ebx,0x18(%esp)
084d7209 +0x52f:  mov    %eax,0x14(%esp)
084d720d +0x533:  movl   $"IPG_CONFIRM user: %d, charac: %s reason: %d",0x10(%esp)
084d7215 +0x53b:  movl   $0x3c5f,0xc(%esp)
084d721d +0x543:  movl   $&_ZZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d7225 +0x54b:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d722d +0x553:  movl   $0x1,(%esp)
084d7234 +0x55a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d7239 +0x55f:  mov    -0x50(%ebp),%eax
084d723c +0x562:  mov    -0x4c(%ebp),%edx
084d723f +0x565:  mov    0xc(%ebp),%ecx
084d7242 +0x568:  lea    0x79700(%ecx),%ebx
084d7248 +0x56e:  movl   $"confirm",0x18(%esp)
084d7250 +0x576:  mov    -0xc(%ebp),%ecx
084d7253 +0x579:  mov    %ecx,0x14(%esp)
084d7257 +0x57d:  mov    -0x20(%ebp),%ecx
084d725a +0x580:  mov    %ecx,0x10(%esp)
084d725e +0x584:  mov    %eax,0x8(%esp)
084d7262 +0x588:  mov    %edx,0xc(%esp)
084d7266 +0x58c:  movl   $0x2,0x4(%esp)
084d726e +0x594:  mov    %ebx,(%esp)
084d7271 +0x597:  call   08685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>  ; cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
084d7276 +0x59c:  jmp    084d72a6 <+0x5cc>
084d7278 +0x59e:  mov    -0x50(%ebp),%eax
084d727b +0x5a1:  mov    -0x4c(%ebp),%edx
084d727e +0x5a4:  mov    0xc(%ebp),%ecx
084d7281 +0x5a7:  lea    0x79700(%ecx),%ebx
084d7287 +0x5ad:  mov    -0x20(%ebp),%ecx
084d728a +0x5b0:  mov    %ecx,0x10(%esp)
084d728e +0x5b4:  mov    %eax,0x8(%esp)
084d7292 +0x5b8:  mov    %edx,0xc(%esp)
084d7296 +0x5bc:  movl   $0x2,0x4(%esp)
084d729e +0x5c4:  mov    %ebx,(%esp)
084d72a1 +0x5c7:  call   086858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>  ; cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
084d72a6 +0x5cc:  mov    -0x24(%ebp),%eax
084d72a9 +0x5cf:  mov    %eax,(%esp)
084d72ac +0x5d2:  call   0817a2ee <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x36c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x36c
084d72b1 +0x5d7:  lea    -0x60(%ebp),%edx
084d72b4 +0x5da:  mov    %edx,0x4(%esp)
084d72b8 +0x5de:  mov    %eax,(%esp)
084d72bb +0x5e1:  call   08173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&)
084d72c0 +0x5e6:  mov    %eax,-0xc(%ebp)
084d72c3 +0x5e9:  mov    -0xc(%ebp),%eax
084d72c6 +0x5ec:  mov    %eax,(%esp)
084d72c9 +0x5ef:  call   08146669 <_Z21CheckBillingErrorCodei>  ; CheckBillingErrorCode(int)
084d72ce +0x5f4:  xor    $0x1,%eax
084d72d1 +0x5f7:  test   %al,%al
084d72d3 +0x5f9:  je     084d736b <+0x691>
084d72d9 +0x5ff:  mov    0xc(%ebp),%eax
084d72dc +0x602:  mov    %eax,(%esp)
084d72df +0x605:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d72e4 +0x60a:  mov    %eax,%ebx
084d72e6 +0x60c:  mov    0xc(%ebp),%eax
084d72e9 +0x60f:  mov    %eax,(%esp)
084d72ec +0x612:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d72f1 +0x617:  mov    -0xc(%ebp),%edx
084d72f4 +0x61a:  mov    %edx,0x1c(%esp)
084d72f8 +0x61e:  mov    %ebx,0x18(%esp)
084d72fc +0x622:  mov    %eax,0x14(%esp)
084d7300 +0x626:  movl   $"IPG_CONFIRM user: %d, charac: %s reason: %d",0x10(%esp)
084d7308 +0x62e:  movl   $0x3c6a,0xc(%esp)
084d7310 +0x636:  movl   $&_ZZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d7318 +0x63e:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d7320 +0x646:  movl   $0x1,(%esp)
084d7327 +0x64d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d732c +0x652:  mov    -0x5c(%ebp),%eax
084d732f +0x655:  mov    -0x58(%ebp),%edx
084d7332 +0x658:  mov    0xc(%ebp),%ecx
084d7335 +0x65b:  lea    0x79700(%ecx),%ebx
084d733b +0x661:  movl   $"confirm",0x18(%esp)
084d7343 +0x669:  mov    -0xc(%ebp),%ecx
084d7346 +0x66c:  mov    %ecx,0x14(%esp)
084d734a +0x670:  mov    -0x1c(%ebp),%ecx
084d734d +0x673:  mov    %ecx,0x10(%esp)
084d7351 +0x677:  mov    %eax,0x8(%esp)
084d7355 +0x67b:  mov    %edx,0xc(%esp)
084d7359 +0x67f:  movl   $0x2,0x4(%esp)
084d7361 +0x687:  mov    %ebx,(%esp)
084d7364 +0x68a:  call   08685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>  ; cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
084d7369 +0x68f:  jmp    084d7399 <+0x6bf>
084d736b +0x691:  mov    -0x5c(%ebp),%eax
084d736e +0x694:  mov    -0x58(%ebp),%edx
084d7371 +0x697:  mov    0xc(%ebp),%ecx
084d7374 +0x69a:  lea    0x79700(%ecx),%ebx
084d737a +0x6a0:  mov    -0x1c(%ebp),%ecx
084d737d +0x6a3:  mov    %ecx,0x10(%esp)
084d7381 +0x6a7:  mov    %eax,0x8(%esp)
084d7385 +0x6ab:  mov    %edx,0xc(%esp)
084d7389 +0x6af:  movl   $0x2,0x4(%esp)
084d7391 +0x6b7:  mov    %ebx,(%esp)
084d7394 +0x6ba:  call   086858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>  ; cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
084d7399 +0x6bf:  movl   $0x1,0x4(%esp)
084d73a1 +0x6c7:  lea    -0x48(%ebp),%eax
084d73a4 +0x6ca:  mov    %eax,(%esp)
084d73a7 +0x6cd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d73ac +0x6d2:  lea    -0x48(%ebp),%eax
084d73af +0x6d5:  mov    %eax,0x4(%esp)
084d73b3 +0x6d9:  mov    0xc(%ebp),%eax
084d73b6 +0x6dc:  mov    %eax,(%esp)
084d73b9 +0x6df:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d73be +0x6e4:  mov    -0x2c(%ebp),%eax
084d73c1 +0x6e7:  mov    (%eax),%eax
084d73c3 +0x6e9:  cmp    $0x1,%eax
084d73c6 +0x6ec:  jne    084d73e5 <+0x70b>
084d73c8 +0x6ee:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084d73cd +0x6f3:  mov    (%eax),%eax
084d73cf +0x6f5:  add    $0x2c,%eax
084d73d2 +0x6f8:  mov    (%eax),%ecx
084d73d4 +0x6fa:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084d73d9 +0x6ff:  mov    0xc(%ebp),%edx
084d73dc +0x702:  mov    %edx,0x4(%esp)
084d73e0 +0x706:  mov    %eax,(%esp)
084d73e3 +0x709:  call   *%ecx
084d73e5 +0x70b:  mov    $0x0,%ebx
084d73ea +0x710:  jmp    084d7407 <+0x72d>
084d73ec +0x712:  mov    %edx,%ebx
084d73ee +0x714:  mov    %eax,%esi
084d73f0 +0x716:  lea    -0x48(%ebp),%eax
084d73f3 +0x719:  mov    %eax,(%esp)
084d73f6 +0x71c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d73fb +0x721:  mov    %esi,%eax
084d73fd +0x723:  mov    %ebx,%edx
084d73ff +0x725:  mov    %eax,(%esp)
084d7402 +0x728:  call   08ae3750 <_Unwind_Resume>
084d7407 +0x72d:  lea    -0x48(%ebp),%eax
084d740a +0x730:  mov    %eax,(%esp)
084d740d +0x733:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7412 +0x738:  mov    %ebx,%eax
084d7414 +0x73a:  sub    $0xffffff80,%esp
084d7417 +0x73d:  pop    %ebx
084d7418 +0x73e:  pop    %esi
084d7419 +0x73f:  pop    %ebp
084d741a +0x740:  ret
084d741b +0x741:  nop
```

## 反编译 C

```c
// Inter_AuctionResultBidding::dispatch_sig_taiwan @ 0x84d6cda

/* Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int) */

undefined4 Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  TaiwanCash *pTVar5;
  undefined4 uVar6;
  CInventory *pCVar7;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  int *local_30;
  int local_2c;
  CIPGMgr *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_30 = (int *)param_3;
  iVar4 = *(int *)(param_3 + 4);
  iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  if (iVar4 != iVar2) {
    return 0;
  }
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    iVar4 = *(int *)(gmList + local_1c * 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar4 == iVar2) {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_40,
                         "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",
                         0x3c12,0);
      cMyTrace::operator()(local_40,"Trace Auction Delay, %s(%d)","ACK AuctionResultBidding",uVar3);
      break;
    }
  }
  PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 084d6db8 to 084d73e4 has its CatchHandler @ 084d73ec */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0xbc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,(uint)*(byte *)(local_30 + 3));
  if ((char)local_30[3] == '\0') {
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_4c,(uint)*(byte *)((int)local_30 + 0xd));
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,*local_30);
  local_2c = 0;
  local_28 = (CIPGMgr *)0x0;
  local_24 = 0;
  local_20 = 0;
  if (*local_30 == 1) {
    CUser::SetBuyingGold((CUser *)param_2,false);
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar4 = G_CPrePayInfoMgr();
    local_2c = CPrePayInfoMgr::FindPrePayInfo(iVar4);
    if (local_2c == 0) {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c28,
                 "PrePayInfo is null. character:%u",uVar3);
      goto LAB_084d7407;
    }
    local_28 = (CIPGMgr *)
               (**(code **)(*GlobalData::s_pIPGHelper + 0x3c))(GlobalData::s_pIPGHelper,uVar3);
    local_58 = *(undefined4 *)(local_2c + 0x10);
    local_54 = *(undefined4 *)(local_2c + 0x14);
    local_50 = *(undefined4 *)(local_2c + 0x18);
    local_64 = *(undefined4 *)(local_2c + 0x1c);
    local_60 = *(undefined4 *)(local_2c + 0x20);
    local_5c = *(undefined4 *)(local_2c + 0x24);
    local_24 = *(undefined4 *)(local_2c + 8);
    local_20 = *(undefined4 *)(local_2c + 0xc);
    CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar4 = G_CPrePayInfoMgr();
    CPrePayInfoMgr::DeletePrePayInfo(iVar4);
  }
  if ((char)local_30[3] == '\0') {
    if (*local_30 == 1) {
      pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
      local_18 = Taiwan::TaiwanCash::cancel(pTVar5,(BillTransaction *)&local_58);
      cVar1 = CheckBillingErrorCode(local_18);
      if (cVar1 == '\x01') {
        cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_54,local_50,local_24);
      }
      else {
        uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c3c,
                   "IPG_CANCEL user: %d, charac: %s reason: %d",uVar6,uVar3,local_18);
        cUserHistoryLog::BillingFail
                  (param_2 + 0x79700,2,local_54,local_50,local_24,local_18,"rollback");
      }
      pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
      local_18 = Taiwan::TaiwanCash::cancel(pTVar5,(BillTransaction *)&local_64);
      cVar1 = CheckBillingErrorCode(local_18);
      if (cVar1 == '\x01') {
        cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_60,local_5c,local_20);
      }
      else {
        uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c47,
                   "IPG_CANCEL user: %d, charac: %s reason: %d",uVar6,uVar3,local_18);
        cUserHistoryLog::BillingFail
                  (param_2 + 0x79700,2,local_60,local_5c,local_20,local_18,"rollback");
      }
    }
    else {
      iVar4 = local_30[2];
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_14 = CInventory::gain_money(pCVar7,iVar4,0x14,1,0);
      if (local_14 < local_30[2]) {
        CUser::SendMoneyFullReason((CUser *)param_2,0,local_30[2],local_14);
      }
    }
  }
  else if (*local_30 == 1) {
    pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
    local_10 = Taiwan::TaiwanCash::confirm(pTVar5,(BillTransaction *)&local_58);
    cVar1 = CheckBillingErrorCode(local_10);
    if (cVar1 == '\x01') {
      cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_54,local_50,local_24);
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c5f,
                 "IPG_CONFIRM user: %d, charac: %s reason: %d",uVar6,uVar3,local_10);
      cUserHistoryLog::BillingFail
                (param_2 + 0x79700,2,local_54,local_50,local_24,local_10,"confirm");
    }
    pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
    local_10 = Taiwan::TaiwanCash::confirm(pTVar5,(BillTransaction *)&local_64);
    cVar1 = CheckBillingErrorCode(local_10);
    if (cVar1 == '\x01') {
      cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_60,local_5c,local_20);
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c6a,
                 "IPG_CONFIRM user: %d, charac: %s reason: %d",uVar6,uVar3,local_10);
      cUserHistoryLog::BillingFail
                (param_2 + 0x79700,2,local_60,local_5c,local_20,local_10,"confirm");
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
  CUser::Send((CUser *)param_2,local_4c);
  if (*local_30 == 1) {
    (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_2);
  }
LAB_084d7407:
  PacketGuard::~PacketGuard(local_4c);
  return 0;
}
```
