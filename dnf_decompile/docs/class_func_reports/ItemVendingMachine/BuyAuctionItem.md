# BuyAuctionItem

`_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi`

`ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08175c5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08175c5c  _ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi
#           ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)
# range [0x08175c5c, 0x08176347]
08175c5c +0x000:  push   %ebp
08175c5d +0x001:  mov    %esp,%ebp
08175c5f +0x003:  push   %edi
08175c60 +0x004:  push   %esi
08175c61 +0x005:  push   %ebx
08175c62 +0x006:  sub    $0xec,%esp
08175c68 +0x00c:  mov    0x18(%ebp),%eax
08175c6b +0x00f:  mov    %al,-0x9c(%ebp)
08175c71 +0x015:  mov    0x1c(%ebp),%eax
08175c74 +0x018:  mov    %eax,-0x44(%ebp)
08175c77 +0x01b:  movzbl -0x9c(%ebp),%eax
08175c7e +0x022:  mov    %al,-0x3d(%ebp)
08175c81 +0x025:  movl   $0x5,-0x3c(%ebp)
08175c88 +0x02c:  movl   $0x2,-0x38(%ebp)
08175c8f +0x033:  movl   $0x0,-0x34(%ebp)
08175c96 +0x03a:  mov    0x10(%ebp),%eax
08175c99 +0x03d:  mov    (%eax),%eax
08175c9b +0x03f:  mov    %eax,-0x30(%ebp)
08175c9e +0x042:  cmpl   $0x0,-0x44(%ebp)
08175ca2 +0x046:  jne    08175cc0 <+0x64>
08175ca4 +0x048:  cmpb   $0x0,-0x3d(%ebp)
08175ca8 +0x04c:  je     08175cb5 <+0x59>
08175caa +0x04e:  mov    -0x38(%ebp),%eax
08175cad +0x051:  mov    %eax,-0x34(%ebp)
08175cb0 +0x054:  jmp    08175dcb <+0x16f>
08175cb5 +0x059:  mov    -0x3c(%ebp),%eax
08175cb8 +0x05c:  mov    %eax,-0x34(%ebp)
08175cbb +0x05f:  jmp    08175dcb <+0x16f>
08175cc0 +0x064:  fildl  -0x30(%ebp)
08175cc3 +0x067:  fildl  -0x44(%ebp)
08175cc6 +0x06a:  fdivrp %st,%st(1)
08175cc8 +0x06c:  fstpl  -0x20(%ebp)
08175ccb +0x06f:  fldl   -0x20(%ebp)
08175cce +0x072:  fldl   &data#78e7013f(.rodata)
08175cd4 +0x078:  fucompp
08175cd6 +0x07a:  fnstsw %ax
08175cd8 +0x07c:  test   $0x45,%ah
08175cdb +0x07f:  sete   %al
08175cde +0x082:  test   %al,%al
08175ce0 +0x084:  je     08175cec <+0x90>
08175ce2 +0x086:  mov    $0x0,%ebx
08175ce7 +0x08b:  jmp    0817633b <+0x6df>
08175cec +0x090:  fldl   -0x20(%ebp)
08175cef +0x093:  fldl   &data#dd58a0f3(.rodata)
08175cf5 +0x099:  fucompp
08175cf7 +0x09b:  fnstsw %ax
08175cf9 +0x09d:  test   $0x45,%ah
08175cfc +0x0a0:  sete   %al
08175cff +0x0a3:  test   %al,%al
08175d01 +0x0a5:  je     08175d1f <+0xc3>
08175d03 +0x0a7:  cmpb   $0x0,-0x3d(%ebp)
08175d07 +0x0ab:  je     08175d14 <+0xb8>
08175d09 +0x0ad:  mov    -0x38(%ebp),%eax
08175d0c +0x0b0:  mov    %eax,-0x34(%ebp)
08175d0f +0x0b3:  jmp    08175dcb <+0x16f>
08175d14 +0x0b8:  mov    -0x3c(%ebp),%eax
08175d17 +0x0bb:  mov    %eax,-0x34(%ebp)
08175d1a +0x0be:  jmp    08175dcb <+0x16f>
08175d1f +0x0c3:  fldl   -0x20(%ebp)
08175d22 +0x0c6:  fldl   &data#dd58a0f3(.rodata)
08175d28 +0x0cc:  fxch   %st(1)
08175d2a +0x0ce:  fucompp
08175d2c +0x0d0:  fnstsw %ax
08175d2e +0x0d2:  sahf
08175d2f +0x0d3:  setae  %al
08175d32 +0x0d6:  test   %al,%al
08175d34 +0x0d8:  je     08175d56 <+0xfa>
08175d36 +0x0da:  fldl   -0x20(%ebp)
08175d39 +0x0dd:  fldl   &data#10e5a767(.rodata)
08175d3f +0x0e3:  fucompp
08175d41 +0x0e5:  fnstsw %ax
08175d43 +0x0e7:  test   $0x45,%ah
08175d46 +0x0ea:  sete   %al
08175d49 +0x0ed:  test   %al,%al
08175d4b +0x0ef:  je     08175d56 <+0xfa>
08175d4d +0x0f1:  movl   $0x32,-0x34(%ebp)
08175d54 +0x0f8:  jmp    08175dcb <+0x16f>
08175d56 +0x0fa:  fldl   -0x20(%ebp)
08175d59 +0x0fd:  fldl   &data#10e5a767(.rodata)
08175d5f +0x103:  fxch   %st(1)
08175d61 +0x105:  fucompp
08175d63 +0x107:  fnstsw %ax
08175d65 +0x109:  sahf
08175d66 +0x10a:  setae  %al
08175d69 +0x10d:  test   %al,%al
08175d6b +0x10f:  je     08175d8d <+0x131>
08175d6d +0x111:  fldl   -0x20(%ebp)
08175d70 +0x114:  fldl   &data#65e32670(.rodata)
08175d76 +0x11a:  fucompp
08175d78 +0x11c:  fnstsw %ax
08175d7a +0x11e:  test   $0x45,%ah
08175d7d +0x121:  sete   %al
08175d80 +0x124:  test   %al,%al
08175d82 +0x126:  je     08175d8d <+0x131>
08175d84 +0x128:  movl   $0x32,-0x34(%ebp)
08175d8b +0x12f:  jmp    08175dcb <+0x16f>
08175d8d +0x131:  fldl   -0x20(%ebp)
08175d90 +0x134:  fldl   &data#65e32670(.rodata)
08175d96 +0x13a:  fxch   %st(1)
08175d98 +0x13c:  fucompp
08175d9a +0x13e:  fnstsw %ax
08175d9c +0x140:  sahf
08175d9d +0x141:  setae  %al
08175da0 +0x144:  test   %al,%al
08175da2 +0x146:  je     08175dc4 <+0x168>
08175da4 +0x148:  fldl   -0x20(%ebp)
08175da7 +0x14b:  fldl   &data#90f735a1(.rodata)
08175dad +0x151:  fucompp
08175daf +0x153:  fnstsw %ax
08175db1 +0x155:  test   $0x45,%ah
08175db4 +0x158:  sete   %al
08175db7 +0x15b:  test   %al,%al
08175db9 +0x15d:  je     08175dc4 <+0x168>
08175dbb +0x15f:  movl   $0x32,-0x34(%ebp)
08175dc2 +0x166:  jmp    08175dcb <+0x16f>
08175dc4 +0x168:  movl   $0x50,-0x34(%ebp)
08175dcb +0x16f:  fildl  -0x30(%ebp)
08175dce +0x172:  fldl   &data#69d7849f(.rodata)
08175dd4 +0x178:  fdivrp %st,%st(1)
08175dd6 +0x17a:  fildl  -0x34(%ebp)
08175dd9 +0x17d:  fmulp  %st,%st(1)
08175ddb +0x17f:  fnstcw -0x9e(%ebp)
08175de1 +0x185:  movzwl -0x9e(%ebp),%eax
08175de8 +0x18c:  mov    $0xc,%ah
08175dea +0x18e:  mov    %ax,-0xa0(%ebp)
08175df1 +0x195:  fldcw  -0xa0(%ebp)
08175df7 +0x19b:  fistpl -0x34(%ebp)
08175dfa +0x19e:  fldcw  -0x9e(%ebp)
08175e00 +0x1a4:  mov    0x10(%ebp),%eax
08175e03 +0x1a7:  mov    -0x34(%ebp),%edx
08175e06 +0x1aa:  mov    %edx,0xc(%eax)
08175e09 +0x1ad:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08175e0e +0x1b2:  movl   $0x7b,0x8(%esp)
08175e16 +0x1ba:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08175e1e +0x1c2:  mov    %eax,(%esp)
08175e21 +0x1c5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08175e26 +0x1ca:  movl   $0x1,0x8(%esp)
08175e2e +0x1d2:  mov    %eax,0x4(%esp)
08175e32 +0x1d6:  lea    -0x4c(%ebp),%eax
08175e35 +0x1d9:  mov    %eax,(%esp)
08175e38 +0x1dc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08175e3d +0x1e1:  lea    -0x4c(%ebp),%eax
08175e40 +0x1e4:  mov    %eax,(%esp)
08175e43 +0x1e7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08175e48 +0x1ec:  movl   $0x28,0x8(%esp)
08175e50 +0x1f4:  mov    0x10(%ebp),%edx
08175e53 +0x1f7:  mov    %edx,0x4(%esp)
08175e57 +0x1fb:  mov    %eax,(%esp)
08175e5a +0x1fe:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08175e5f +0x203:  lea    -0x69(%ebp),%eax
08175e62 +0x206:  mov    $0x15,%edx
08175e67 +0x20b:  mov    $0x0,%ecx
08175e6c +0x210:  mov    %eax,%ebx
08175e6e +0x212:  and    $0x1,%ebx
08175e71 +0x215:  test   %ebx,%ebx
08175e73 +0x217:  je     08175e7d <+0x221>
08175e75 +0x219:  mov    %cl,(%eax)
08175e77 +0x21b:  add    $0x1,%eax
08175e7a +0x21e:  sub    $0x1,%edx
08175e7d +0x221:  mov    %eax,%ebx
08175e7f +0x223:  and    $0x2,%ebx
08175e82 +0x226:  test   %ebx,%ebx
08175e84 +0x228:  je     08175e8f <+0x233>
08175e86 +0x22a:  mov    %cx,(%eax)
08175e89 +0x22d:  add    $0x2,%eax
08175e8c +0x230:  sub    $0x2,%edx
08175e8f +0x233:  mov    %edx,%esi
08175e91 +0x235:  and    $0xfffffffc,%esi
08175e94 +0x238:  mov    $0x0,%ebx
08175e99 +0x23d:  mov    %ecx,(%eax,%ebx,1)
08175e9c +0x240:  add    $0x4,%ebx
08175e9f +0x243:  cmp    %esi,%ebx
08175ea1 +0x245:  jb     08175e99 <+0x23d>
08175ea3 +0x247:  add    %ebx,%eax
08175ea5 +0x249:  mov    %edx,%ebx
08175ea7 +0x24b:  and    $0x2,%ebx
08175eaa +0x24e:  test   %ebx,%ebx
08175eac +0x250:  je     08175eb4 <+0x258>
08175eae +0x252:  mov    %cx,(%eax)
08175eb1 +0x255:  add    $0x2,%eax
08175eb4 +0x258:  and    $0x1,%edx
08175eb7 +0x25b:  test   %edx,%edx
08175eb9 +0x25d:  je     08175ec0 <+0x264>
08175ebb +0x25f:  mov    %cl,(%eax)
08175ebd +0x261:  add    $0x1,%eax
08175ec0 +0x264:  movl   $&_ZL14gUnicodeBuffer+0xe173,-0x2c(%ebp)
08175ec7 +0x26b:  mov    -0x2c(%ebp),%eax
08175eca +0x26e:  mov    %eax,0xc(%esp)
08175ece +0x272:  movl   $"%ld",0x8(%esp)
08175ed6 +0x27a:  movl   $0x8,0x4(%esp)
08175ede +0x282:  lea    -0x54(%ebp),%eax
08175ee1 +0x285:  mov    %eax,(%esp)
08175ee4 +0x288:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08175ee9 +0x28d:  mov    0x10(%ebp),%eax
08175eec +0x290:  mov    (%eax),%eax
08175eee +0x292:  sub    -0x34(%ebp),%eax
08175ef1 +0x295:  mov    %eax,0xc(%esp)
08175ef5 +0x299:  movl   $"%d",0x8(%esp)
08175efd +0x2a1:  movl   $0x24,0x4(%esp)
08175f05 +0x2a9:  lea    -0x8d(%ebp),%eax
08175f0b +0x2af:  mov    %eax,(%esp)
08175f0e +0x2b2:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08175f13 +0x2b7:  mov    0x10(%ebp),%eax
08175f16 +0x2ba:  mov    0x8(%eax),%edx
08175f19 +0x2bd:  mov    0x4(%eax),%eax
08175f1c +0x2c0:  mov    %eax,0xc(%esp)
08175f20 +0x2c4:  mov    %edx,0x10(%esp)
08175f24 +0x2c8:  movl   $"%ld",0x8(%esp)
08175f2c +0x2d0:  movl   $0x15,0x4(%esp)
08175f34 +0x2d8:  lea    -0x69(%ebp),%eax
08175f37 +0x2db:  mov    %eax,(%esp)
08175f3a +0x2de:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08175f3f +0x2e3:  movl   $0x0,-0x28(%ebp)
08175f46 +0x2ea:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08175f4b +0x2ef:  mov    (%eax),%eax
08175f4d +0x2f1:  add    $0x3c,%eax
08175f50 +0x2f4:  mov    (%eax),%edx
08175f52 +0x2f6:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08175f57 +0x2fb:  mov    %eax,(%esp)
08175f5a +0x2fe:  call   *%edx
08175f5c +0x300:  mov    %eax,-0x28(%ebp)
08175f5f +0x303:  mov    0x10(%ebp),%eax
08175f62 +0x306:  add    $0x10,%eax
08175f65 +0x309:  mov    %eax,-0xc0(%ebp)
08175f6b +0x30f:  mov    0xc(%ebp),%eax
08175f6e +0x312:  mov    %eax,(%esp)
08175f71 +0x315:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08175f76 +0x31a:  mov    %eax,-0xbc(%ebp)
08175f7c +0x320:  mov    0xc(%ebp),%eax
08175f7f +0x323:  mov    %eax,(%esp)
08175f82 +0x326:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08175f87 +0x32b:  mov    %eax,-0xb8(%ebp)
08175f8d +0x331:  lea    -0x8d(%ebp),%eax
08175f93 +0x337:  mov    %eax,(%esp)
08175f96 +0x33a:  call   0807e6f0 <_init+0xfe8>
08175f9b +0x33f:  mov    %eax,-0xb4(%ebp)
08175fa1 +0x345:  lea    -0x54(%ebp),%eax
08175fa4 +0x348:  mov    %eax,(%esp)
08175fa7 +0x34b:  call   0807e6f0 <_init+0xfe8>
08175fac +0x350:  mov    %eax,%edi
08175fae +0x352:  mov    0x10(%ebp),%eax
08175fb1 +0x355:  mov    0x4(%eax),%ebx
08175fb4 +0x358:  mov    0x8(%eax),%esi
08175fb7 +0x35b:  mov    -0x28(%ebp),%eax
08175fba +0x35e:  mov    %eax,(%esp)
08175fbd +0x361:  call   0817a2ee <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x36c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x36c
08175fc2 +0x366:  movl   $0x3c,0x20(%esp)
08175fca +0x36e:  mov    -0xc0(%ebp),%edx
08175fd0 +0x374:  mov    %edx,0x1c(%esp)
08175fd4 +0x378:  mov    -0xbc(%ebp),%edx
08175fda +0x37e:  mov    %edx,0x18(%esp)
08175fde +0x382:  mov    -0xb8(%ebp),%edx
08175fe4 +0x388:  mov    %edx,0x14(%esp)
08175fe8 +0x38c:  mov    -0xb4(%ebp),%edx
08175fee +0x392:  mov    %edx,0x10(%esp)
08175ff2 +0x396:  mov    %edi,0xc(%esp)
08175ff6 +0x39a:  mov    %ebx,0x4(%esp)
08175ffa +0x39e:  mov    %esi,0x8(%esp)
08175ffe +0x3a2:  mov    %eax,(%esp)
08176001 +0x3a5:  call   08173a00 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs>  ; Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&, short)
08176006 +0x3aa:  mov    %eax,-0x24(%ebp)
08176009 +0x3ad:  mov    -0x24(%ebp),%eax
0817600c +0x3b0:  mov    %eax,(%esp)
0817600f +0x3b3:  call   08146669 <_Z21CheckBillingErrorCodei>  ; CheckBillingErrorCode(int)
08176014 +0x3b8:  xor    $0x1,%eax
08176017 +0x3bb:  test   %al,%al
08176019 +0x3bd:  je     081760be <+0x462>
0817601f +0x3c3:  mov    0x10(%ebp),%eax
08176022 +0x3c6:  mov    (%eax),%ecx
08176024 +0x3c8:  mov    0x10(%ebp),%eax
08176027 +0x3cb:  mov    0x18(%eax),%edx
0817602a +0x3ce:  mov    0x14(%eax),%eax
0817602d +0x3d1:  mov    0xc(%ebp),%ebx
08176030 +0x3d4:  lea    0x79700(%ebx),%esi
08176036 +0x3da:  movl   $"purchase",0x18(%esp)
0817603e +0x3e2:  mov    -0x24(%ebp),%ebx
08176041 +0x3e5:  mov    %ebx,0x14(%esp)
08176045 +0x3e9:  mov    %ecx,0x10(%esp)
08176049 +0x3ed:  mov    %eax,0x8(%esp)
0817604d +0x3f1:  mov    %edx,0xc(%esp)
08176051 +0x3f5:  movl   $0x1,0x4(%esp)
08176059 +0x3fd:  mov    %esi,(%esp)
0817605c +0x400:  call   08685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>  ; cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
08176061 +0x405:  mov    0xc(%ebp),%eax
08176064 +0x408:  mov    %eax,(%esp)
08176067 +0x40b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0817606c +0x410:  mov    %eax,%ebx
0817606e +0x412:  mov    0xc(%ebp),%eax
08176071 +0x415:  mov    %eax,(%esp)
08176074 +0x418:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08176079 +0x41d:  mov    -0x24(%ebp),%edx
0817607c +0x420:  mov    %edx,0x1c(%esp)
08176080 +0x424:  mov    %ebx,0x18(%esp)
08176084 +0x428:  mov    %eax,0x14(%esp)
08176088 +0x42c:  movl   $"IPG_OUTPUT user: %u, charac: %s reason: %d",0x10(%esp)
08176090 +0x434:  movl   $0xa5,0xc(%esp)
08176098 +0x43c:  movl   $&_ZZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibiE19__PRETTY_FUNCTION__,0x8(%esp)
081760a0 +0x444:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
081760a8 +0x44c:  movl   $0x1,(%esp)
081760af +0x453:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081760b4 +0x458:  mov    $0x0,%ebx
081760b9 +0x45d:  jmp    08176330 <+0x6d4>
081760be +0x462:  mov    0x10(%ebp),%eax
081760c1 +0x465:  mov    (%eax),%ecx
081760c3 +0x467:  mov    0x10(%ebp),%eax
081760c6 +0x46a:  mov    0x18(%eax),%edx
081760c9 +0x46d:  mov    0x14(%eax),%eax
081760cc +0x470:  mov    0xc(%ebp),%ebx
081760cf +0x473:  add    $0x79700,%ebx
081760d5 +0x479:  mov    %ecx,0x10(%esp)
081760d9 +0x47d:  mov    %eax,0x8(%esp)
081760dd +0x481:  mov    %edx,0xc(%esp)
081760e1 +0x485:  movl   $0x1,0x4(%esp)
081760e9 +0x48d:  mov    %ebx,(%esp)
081760ec +0x490:  call   086858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>  ; cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
081760f1 +0x495:  mov    -0x2c(%ebp),%eax
081760f4 +0x498:  mov    %eax,0xc(%esp)
081760f8 +0x49c:  movl   $"%ld",0x8(%esp)
08176100 +0x4a4:  movl   $0x8,0x4(%esp)
08176108 +0x4ac:  lea    -0x54(%ebp),%eax
0817610b +0x4af:  mov    %eax,(%esp)
0817610e +0x4b2:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08176113 +0x4b7:  mov    -0x34(%ebp),%eax
08176116 +0x4ba:  mov    %eax,0xc(%esp)
0817611a +0x4be:  movl   $"%d",0x8(%esp)
08176122 +0x4c6:  movl   $0x24,0x4(%esp)
0817612a +0x4ce:  lea    -0x8d(%ebp),%eax
08176130 +0x4d4:  mov    %eax,(%esp)
08176133 +0x4d7:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08176138 +0x4dc:  mov    0x10(%ebp),%eax
0817613b +0x4df:  mov    0x8(%eax),%edx
0817613e +0x4e2:  mov    0x4(%eax),%eax
08176141 +0x4e5:  mov    %eax,0xc(%esp)
08176145 +0x4e9:  mov    %edx,0x10(%esp)
08176149 +0x4ed:  movl   $"%ld",0x8(%esp)
08176151 +0x4f5:  movl   $0x15,0x4(%esp)
08176159 +0x4fd:  lea    -0x69(%ebp),%eax
0817615c +0x500:  mov    %eax,(%esp)
0817615f +0x503:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08176164 +0x508:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08176169 +0x50d:  mov    (%eax),%eax
0817616b +0x50f:  add    $0x3c,%eax
0817616e +0x512:  mov    (%eax),%edx
08176170 +0x514:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08176175 +0x519:  mov    %eax,(%esp)
08176178 +0x51c:  call   *%edx
0817617a +0x51e:  mov    %eax,-0x28(%ebp)
0817617d +0x521:  mov    0x10(%ebp),%eax
08176180 +0x524:  add    $0x1c,%eax
08176183 +0x527:  mov    %eax,-0xb0(%ebp)
08176189 +0x52d:  mov    0xc(%ebp),%eax
0817618c +0x530:  mov    %eax,(%esp)
0817618f +0x533:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08176194 +0x538:  mov    %eax,-0xac(%ebp)
0817619a +0x53e:  mov    0xc(%ebp),%eax
0817619d +0x541:  mov    %eax,(%esp)
081761a0 +0x544:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
081761a5 +0x549:  mov    %eax,-0xa8(%ebp)
081761ab +0x54f:  lea    -0x8d(%ebp),%eax
081761b1 +0x555:  mov    %eax,(%esp)
081761b4 +0x558:  call   0807e6f0 <_init+0xfe8>
081761b9 +0x55d:  mov    %eax,-0xa4(%ebp)
081761bf +0x563:  lea    -0x54(%ebp),%eax
081761c2 +0x566:  mov    %eax,(%esp)
081761c5 +0x569:  call   0807e6f0 <_init+0xfe8>
081761ca +0x56e:  mov    %eax,%edi
081761cc +0x570:  mov    0x10(%ebp),%eax
081761cf +0x573:  mov    0x4(%eax),%ebx
081761d2 +0x576:  mov    0x8(%eax),%esi
081761d5 +0x579:  mov    -0x28(%ebp),%eax
081761d8 +0x57c:  mov    %eax,(%esp)
081761db +0x57f:  call   0817a2ee <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x36c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x36c
081761e0 +0x584:  movl   $0x3e,0x20(%esp)
081761e8 +0x58c:  mov    -0xb0(%ebp),%edx
081761ee +0x592:  mov    %edx,0x1c(%esp)
081761f2 +0x596:  mov    -0xac(%ebp),%edx
081761f8 +0x59c:  mov    %edx,0x18(%esp)
081761fc +0x5a0:  mov    -0xa8(%ebp),%edx
08176202 +0x5a6:  mov    %edx,0x14(%esp)
08176206 +0x5aa:  mov    -0xa4(%ebp),%edx
0817620c +0x5b0:  mov    %edx,0x10(%esp)
08176210 +0x5b4:  mov    %edi,0xc(%esp)
08176214 +0x5b8:  mov    %ebx,0x4(%esp)
08176218 +0x5bc:  mov    %esi,0x8(%esp)
0817621c +0x5c0:  mov    %eax,(%esp)
0817621f +0x5c3:  call   08173a00 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs>  ; Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&, short)
08176224 +0x5c8:  mov    %eax,-0x24(%ebp)
08176227 +0x5cb:  mov    -0x24(%ebp),%eax
0817622a +0x5ce:  mov    %eax,(%esp)
0817622d +0x5d1:  call   08146669 <_Z21CheckBillingErrorCodei>  ; CheckBillingErrorCode(int)
08176232 +0x5d6:  xor    $0x1,%eax
08176235 +0x5d9:  test   %al,%al
08176237 +0x5db:  je     081762da <+0x67e>
0817623d +0x5e1:  mov    0x10(%ebp),%eax
08176240 +0x5e4:  mov    0xc(%eax),%ecx
08176243 +0x5e7:  mov    0x10(%ebp),%eax
08176246 +0x5ea:  mov    0x24(%eax),%edx
08176249 +0x5ed:  mov    0x20(%eax),%eax
0817624c +0x5f0:  mov    0xc(%ebp),%ebx
0817624f +0x5f3:  lea    0x79700(%ebx),%esi
08176255 +0x5f9:  movl   $"purchase",0x18(%esp)
0817625d +0x601:  mov    -0x24(%ebp),%ebx
08176260 +0x604:  mov    %ebx,0x14(%esp)
08176264 +0x608:  mov    %ecx,0x10(%esp)
08176268 +0x60c:  mov    %eax,0x8(%esp)
0817626c +0x610:  mov    %edx,0xc(%esp)
08176270 +0x614:  movl   $0x1,0x4(%esp)
08176278 +0x61c:  mov    %esi,(%esp)
0817627b +0x61f:  call   08685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>  ; cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
08176280 +0x624:  mov    0xc(%ebp),%eax
08176283 +0x627:  mov    %eax,(%esp)
08176286 +0x62a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0817628b +0x62f:  mov    %eax,%ebx
0817628d +0x631:  mov    0xc(%ebp),%eax
08176290 +0x634:  mov    %eax,(%esp)
08176293 +0x637:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08176298 +0x63c:  mov    -0x24(%ebp),%edx
0817629b +0x63f:  mov    %edx,0x1c(%esp)
0817629f +0x643:  mov    %ebx,0x18(%esp)
081762a3 +0x647:  mov    %eax,0x14(%esp)
081762a7 +0x64b:  movl   $"IPG_OUTPUT user: %u, charac: %s reason: %d",0x10(%esp)
081762af +0x653:  movl   $0xe8,0xc(%esp)
081762b7 +0x65b:  movl   $&_ZZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibiE19__PRETTY_FUNCTION__,0x8(%esp)
081762bf +0x663:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
081762c7 +0x66b:  movl   $0x1,(%esp)
081762ce +0x672:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081762d3 +0x677:  mov    $0x0,%ebx
081762d8 +0x67c:  jmp    08176330 <+0x6d4>
081762da +0x67e:  mov    0x10(%ebp),%eax
081762dd +0x681:  mov    0xc(%eax),%ecx
081762e0 +0x684:  mov    0x10(%ebp),%eax
081762e3 +0x687:  mov    0x24(%eax),%edx
081762e6 +0x68a:  mov    0x20(%eax),%eax
081762e9 +0x68d:  mov    0xc(%ebp),%ebx
081762ec +0x690:  add    $0x79700,%ebx
081762f2 +0x696:  mov    %ecx,0x10(%esp)
081762f6 +0x69a:  mov    %eax,0x8(%esp)
081762fa +0x69e:  mov    %edx,0xc(%esp)
081762fe +0x6a2:  movl   $0x1,0x4(%esp)
08176306 +0x6aa:  mov    %ebx,(%esp)
08176309 +0x6ad:  call   086858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>  ; cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
0817630e +0x6b2:  mov    $0x1,%ebx
08176313 +0x6b7:  jmp    08176330 <+0x6d4>
08176315 +0x6b9:  mov    %edx,%ebx
08176317 +0x6bb:  mov    %eax,%esi
08176319 +0x6bd:  lea    -0x4c(%ebp),%eax
0817631c +0x6c0:  mov    %eax,(%esp)
0817631f +0x6c3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08176324 +0x6c8:  mov    %esi,%eax
08176326 +0x6ca:  mov    %ebx,%edx
08176328 +0x6cc:  mov    %eax,(%esp)
0817632b +0x6cf:  call   08ae3750 <_Unwind_Resume>
08176330 +0x6d4:  lea    -0x4c(%ebp),%eax
08176333 +0x6d7:  mov    %eax,(%esp)
08176336 +0x6da:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0817633b +0x6df:  mov    %ebx,%eax
0817633d +0x6e1:  add    $0xec,%esp
08176343 +0x6e7:  pop    %ebx
08176344 +0x6e8:  pop    %esi
08176345 +0x6e9:  pop    %edi
08176346 +0x6ea:  pop    %ebp
08176347 +0x6eb:  ret
```

## 反编译 C

```c
// ItemVendingMachine::BuyAuctionItem @ 0x8175c5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)
    */

undefined4 __thiscall
ItemVendingMachine::BuyAuctionItem
          (ItemVendingMachine *this,CUser *param_1,AuctionNeedInfo *param_2,int param_3,bool param_4
          ,int param_5)

{
  ulonglong uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *this_00;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  TaiwanCash *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char local_91 [36];
  char local_6d;
  char local_6c [20];
  char local_58 [8];
  CStreamGuard local_50 [8];
  int local_48;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  CIPGMgr *local_2c;
  int local_28;
  double local_24;
  
  local_41 = param_4;
  local_48 = param_5;
  local_40 = 5;
  local_3c = 2;
  local_34 = *(int *)param_2;
  if (param_5 == 0) {
    if (param_4) {
      local_38 = 2;
    }
    else {
      local_38 = 5;
    }
  }
  else {
    local_24 = (double)local_34 / (double)param_5;
    if (local_24 < _DAT_08b871a8) {
      return 0;
    }
    if (_DAT_08b871b0 <= local_24) {
      if ((local_24 < _DAT_08b871b0) || (_DAT_08b871b8 <= local_24)) {
        if ((local_24 < _DAT_08b871b8) || (_DAT_08b871c0 <= local_24)) {
          if ((local_24 < _DAT_08b871c0) || (_DAT_08b871c8 <= local_24)) {
            local_38 = 0x50;
          }
          else {
            local_38 = 0x32;
          }
        }
        else {
          local_38 = 0x32;
        }
      }
      else {
        local_38 = 0x32;
      }
    }
    else if (param_4) {
      local_38 = 2;
    }
    else {
      local_38 = 5;
    }
  }
  local_38 = (int)ROUND((double)local_38 * ((double)local_34 / _DAT_08b871d0));
  *(int *)(param_2 + 0xc) = local_38;
  pSVar3 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/AppendVendingMachine.cpp",0x7b)
  ;
  CStreamGuard::CStreamGuard(local_50,pSVar3,true);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_50);
                    /* try { // try from 08175e5a to 0817630d has its CatchHandler @ 08176315 */
  CStreamGuard::put_binary(this_00,param_2,0x28);
  pcVar4 = &local_6d;
  uVar11 = 0x15;
  bVar13 = ((uint)pcVar4 & 1) != 0;
  if (bVar13) {
    local_6d = '\0';
    pcVar4 = local_6c;
    uVar11 = 0x14;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar11 = uVar11 - 2;
  }
  uVar12 = 0;
  do {
    pcVar5 = pcVar4 + uVar12;
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    uVar12 = uVar12 + 4;
  } while (uVar12 < (uVar11 & 0xfffffffc));
  pcVar4 = pcVar4 + uVar12;
  if ((uVar11 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar13) {
    *pcVar4 = '\0';
  }
  local_30 = 99999;
  OS_API::snprintf(local_58,8,"%ld",99999);
  OS_API::snprintf(local_91,0x24,"%d",*(int *)param_2 - local_38);
  OS_API::snprintf(&local_6d,0x15,"%ld",*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  local_2c = (CIPGMgr *)0x0;
  local_2c = (CIPGMgr *)(**(code **)(*GlobalData::s_pIPGHelper + 0x3c))(GlobalData::s_pIPGHelper);
  pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar5 = (char *)CUser::get_acc_name(param_1);
  iVar6 = atoi(local_91);
  iVar7 = atoi(local_58);
  uVar1 = *(ulonglong *)(param_2 + 4);
  pTVar8 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_2c);
  local_28 = Taiwan::TaiwanCash::purchase
                       (pTVar8,uVar1,iVar7,iVar6,pcVar5,pcVar4,(BillTransaction *)(param_2 + 0x10),
                        0x3c);
  cVar2 = CheckBillingErrorCode(local_28);
  if (cVar2 == '\x01') {
    cUserHistoryLog::BillingSuccess
              (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)param_2);
    OS_API::snprintf(local_58,8,"%ld",local_30);
    OS_API::snprintf(local_91,0x24,"%d",local_38);
    OS_API::snprintf(&local_6d,0x15,"%ld",*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
    ;
    local_2c = (CIPGMgr *)(**(code **)(*GlobalData::s_pIPGHelper + 0x3c))(GlobalData::s_pIPGHelper);
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    pcVar5 = (char *)CUser::get_acc_name(param_1);
    iVar6 = atoi(local_91);
    iVar7 = atoi(local_58);
    uVar1 = *(ulonglong *)(param_2 + 4);
    pTVar8 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_2c);
    local_28 = Taiwan::TaiwanCash::purchase
                         (pTVar8,uVar1,iVar7,iVar6,pcVar5,pcVar4,(BillTransaction *)(param_2 + 0x1c)
                          ,0x3e);
    cVar2 = CheckBillingErrorCode(local_28);
    if (cVar2 == '\x01') {
      cUserHistoryLog::BillingSuccess
                (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                 ,*(undefined4 *)(param_2 + 0xc));
      uVar9 = 1;
    }
    else {
      cUserHistoryLog::BillingFail
                (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                 ,*(undefined4 *)(param_2 + 0xc),local_28,"purchase");
      uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"localjapan/AppendVendingMachine.cpp",
                 "bool ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)"
                 ,0xe8,"IPG_OUTPUT user: %u, charac: %s reason: %d",uVar10,uVar9,local_28);
      uVar9 = 0;
    }
  }
  else {
    cUserHistoryLog::BillingFail
              (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)param_2,local_28,"purchase");
    uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/AppendVendingMachine.cpp",
               "bool ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)"
               ,0xa5,"IPG_OUTPUT user: %u, charac: %s reason: %d",uVar10,uVar9,local_28);
    uVar9 = 0;
  }
  CStreamGuard::~CStreamGuard(local_50);
  return uVar9;
}
```
