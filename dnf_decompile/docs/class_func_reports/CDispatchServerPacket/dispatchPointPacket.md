# dispatchPointPacket

`_ZN21CDispatchServerPacket19dispatchPointPacketEPc`

`CDispatchServerPacket::dispatchPointPacket(char*)`

| 类 | 地址 |
|---|---|
| `CDispatchServerPacket` | `0x0847c1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847c1fe  _ZN21CDispatchServerPacket19dispatchPointPacketEPc
#           CDispatchServerPacket::dispatchPointPacket(char*)
# range [0x0847c1fe, 0x0847dc9d]
0847c1fe +0x0000:  push   %ebp
0847c1ff +0x0001:  mov    %esp,%ebp
0847c201 +0x0003:  push   %esi
0847c202 +0x0004:  push   %ebx
0847c203 +0x0005:  sub    $0x140,%esp
0847c209 +0x000b:  mov    0x8(%ebp),%eax
0847c20c +0x000e:  mov    %eax,(%esp)
0847c20f +0x0011:  call   082f7d0c <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1d
0847c214 +0x0016:  mov    %eax,-0x8c(%ebp)
0847c21a +0x001c:  mov    0x8(%ebp),%eax
0847c21d +0x001f:  mov    %eax,(%esp)
0847c220 +0x0022:  call   082f7d28 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x39>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x39
0847c225 +0x0027:  mov    %eax,-0x88(%ebp)
0847c22b +0x002d:  cmpl   $0x13,-0x88(%ebp)
0847c232 +0x0034:  jne    0847dc8f <+0x1a91>
0847c238 +0x003a:  mov    -0x8c(%ebp),%eax
0847c23e +0x0040:  cmp    $0x9,%eax
0847c241 +0x0043:  je     0847d12d <+0xf2f>
0847c247 +0x0049:  cmp    $0x9,%eax
0847c24a +0x004c:  ja     0847c2ac <+0xae>
0847c24c +0x004e:  cmp    $0x4,%eax
0847c24f +0x0051:  je     0847c830 <+0x632>
0847c255 +0x0057:  cmp    $0x4,%eax
0847c258 +0x005a:  ja     0847c283 <+0x85>
0847c25a +0x005c:  cmp    $0x1,%eax
0847c25d +0x005f:  je     0847c4b0 <+0x2b2>
0847c263 +0x0065:  cmp    $0x1,%eax
0847c266 +0x0068:  jb     0847c320 <+0x122>
0847c26c +0x006e:  cmp    $0x2,%eax
0847c26f +0x0071:  je     0847c59e <+0x3a0>
0847c275 +0x0077:  cmp    $0x3,%eax
0847c278 +0x007a:  je     0847c6dc <+0x4de>
0847c27e +0x0080:  jmp    0847dc56 <+0x1a58>
0847c283 +0x0085:  cmp    $0x6,%eax
0847c286 +0x0088:  je     0847caae <+0x8b0>
0847c28c +0x008e:  cmp    $0x6,%eax
0847c28f +0x0091:  jb     0847c945 <+0x747>
0847c295 +0x0097:  cmp    $0x7,%eax
0847c298 +0x009a:  je     0847cbc3 <+0x9c5>
0847c29e +0x00a0:  cmp    $0x8,%eax
0847c2a1 +0x00a3:  je     0847ce89 <+0xc8b>
0847c2a7 +0x00a9:  jmp    0847dc56 <+0x1a58>
0847c2ac +0x00ae:  cmp    $0xe,%eax
0847c2af +0x00b1:  je     0847db01 <+0x1903>
0847c2b5 +0x00b7:  cmp    $0xe,%eax
0847c2b8 +0x00ba:  ja     0847c2e3 <+0xe5>
0847c2ba +0x00bc:  cmp    $0xb,%eax
0847c2bd +0x00bf:  je     0847d3cd <+0x11cf>
0847c2c3 +0x00c5:  cmp    $0xb,%eax
0847c2c6 +0x00c8:  jb     0847dc8e <+0x1a90>
0847c2cc +0x00ce:  cmp    $0xc,%eax
0847c2cf +0x00d1:  je     0847d528 <+0x132a>
0847c2d5 +0x00d7:  cmp    $0xd,%eax
0847c2d8 +0x00da:  je     0847d616 <+0x1418>
0847c2de +0x00e0:  jmp    0847dc56 <+0x1a58>
0847c2e3 +0x00e5:  cmp    $0x2719,%eax
0847c2e8 +0x00ea:  je     0847d81b <+0x161d>
0847c2ee +0x00f0:  cmp    $0x2719,%eax
0847c2f3 +0x00f5:  ja     0847c305 <+0x107>
0847c2f5 +0x00f7:  cmp    $0x2718,%eax
0847c2fa +0x00fc:  je     0847d723 <+0x1525>
0847c300 +0x0102:  jmp    0847dc56 <+0x1a58>
0847c305 +0x0107:  cmp    $0x271a,%eax
0847c30a +0x010c:  je     0847d913 <+0x1715>
0847c310 +0x0112:  cmp    $0x271b,%eax
0847c315 +0x0117:  je     0847da0b <+0x180d>
0847c31b +0x011d:  jmp    0847dc56 <+0x1a58>
0847c320 +0x0122:  mov    0x8(%ebp),%eax
0847c323 +0x0125:  mov    %eax,-0x84(%ebp)
0847c329 +0x012b:  mov    -0x84(%ebp),%eax
0847c32f +0x0131:  mov    0xe(%eax),%eax
0847c332 +0x0134:  test   %eax,%eax
0847c334 +0x0136:  jne    0847c428 <+0x22a>
0847c33a +0x013c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c33f +0x0141:  movl   $0x14b4,0x8(%esp)
0847c347 +0x0149:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c34f +0x0151:  mov    %eax,(%esp)
0847c352 +0x0154:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c357 +0x0159:  movl   $0x1,0x8(%esp)
0847c35f +0x0161:  mov    %eax,0x4(%esp)
0847c363 +0x0165:  lea    -0x94(%ebp),%eax
0847c369 +0x016b:  mov    %eax,(%esp)
0847c36c +0x016e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c371 +0x0173:  lea    -0x94(%ebp),%eax
0847c377 +0x0179:  mov    %eax,(%esp)
0847c37a +0x017c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c37f +0x0181:  movl   $0xf9,0x4(%esp)
0847c387 +0x0189:  mov    %eax,(%esp)
0847c38a +0x018c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c38f +0x0191:  lea    -0x94(%ebp),%eax
0847c395 +0x0197:  mov    %eax,(%esp)
0847c398 +0x019a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c39d +0x019f:  movl   $0xffffffff,0x4(%esp)
0847c3a5 +0x01a7:  mov    %eax,(%esp)
0847c3a8 +0x01aa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c3ad +0x01af:  lea    -0x94(%ebp),%eax
0847c3b3 +0x01b5:  mov    %eax,(%esp)
0847c3b6 +0x01b8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c3bb +0x01bd:  mov    %eax,(%esp)
0847c3be +0x01c0:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847c3c3 +0x01c5:  mov    %eax,-0x80(%ebp)
0847c3c6 +0x01c8:  mov    -0x80(%ebp),%eax
0847c3c9 +0x01cb:  movl   $0x1,(%eax)
0847c3cf +0x01d1:  mov    -0x80(%ebp),%eax
0847c3d2 +0x01d4:  movb   $0x1,0x4(%eax)
0847c3d6 +0x01d8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c3db +0x01dd:  lea    -0x94(%ebp),%edx
0847c3e1 +0x01e3:  mov    %edx,0x8(%esp)
0847c3e5 +0x01e7:  movl   $0x1,0x4(%esp)
0847c3ed +0x01ef:  mov    %eax,(%esp)
0847c3f0 +0x01f2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c3f5 +0x01f7:  jmp    0847c415 <+0x217>
0847c3f7 +0x01f9:  mov    %edx,%ebx
0847c3f9 +0x01fb:  mov    %eax,%esi
0847c3fb +0x01fd:  lea    -0x94(%ebp),%eax
0847c401 +0x0203:  mov    %eax,(%esp)
0847c404 +0x0206:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c409 +0x020b:  mov    %esi,%eax
0847c40b +0x020d:  mov    %ebx,%edx
0847c40d +0x020f:  mov    %eax,(%esp)
0847c410 +0x0212:  call   08ae3750 <_Unwind_Resume>
0847c415 +0x0217:  lea    -0x94(%ebp),%eax
0847c41b +0x021d:  mov    %eax,(%esp)
0847c41e +0x0220:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c423 +0x0225:  jmp    0847dc8f <+0x1a91>
0847c428 +0x022a:  mov    -0x84(%ebp),%eax
0847c42e +0x0230:  mov    0xe(%eax),%eax
0847c431 +0x0233:  cmp    $0x2,%eax
0847c434 +0x0236:  jne    0847c440 <+0x242>
0847c436 +0x0238:  call   0863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>  ; Timer_CheckAuctionReady::RegistNextTimer()
0847c43b +0x023d:  jmp    0847dc8f <+0x1a91>
0847c440 +0x0242:  mov    -0x84(%ebp),%eax
0847c446 +0x0248:  mov    0xe(%eax),%eax
0847c449 +0x024b:  cmp    $0x1,%eax
0847c44c +0x024e:  jne    0847c47f <+0x281>
0847c44e +0x0250:  movl   $"AUCTION REGIST SERVER ID DUPLICATE",0x10(%esp)
0847c456 +0x0258:  movl   $0x14c8,0xc(%esp)
0847c45e +0x0260:  movl   $&_ZZN21CDispatchServerPacket19dispatchPointPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847c466 +0x0268:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c46e +0x0270:  movl   $0x1,(%esp)
0847c475 +0x0277:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847c47a +0x027c:  jmp    0847dc8f <+0x1a91>
0847c47f +0x0281:  movl   $"AUCTION REGIST UNHANDLED ERROR",0x10(%esp)
0847c487 +0x0289:  movl   $0x14cc,0xc(%esp)
0847c48f +0x0291:  movl   $&_ZZN21CDispatchServerPacket19dispatchPointPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847c497 +0x0299:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c49f +0x02a1:  movl   $0x1,(%esp)
0847c4a6 +0x02a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847c4ab +0x02ad:  jmp    0847dc8f <+0x1a91>
0847c4b0 +0x02b2:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c4b5 +0x02b7:  movl   $0x14d5,0x8(%esp)
0847c4bd +0x02bf:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c4c5 +0x02c7:  mov    %eax,(%esp)
0847c4c8 +0x02ca:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c4cd +0x02cf:  movl   $0x1,0x8(%esp)
0847c4d5 +0x02d7:  mov    %eax,0x4(%esp)
0847c4d9 +0x02db:  lea    -0x9c(%ebp),%eax
0847c4df +0x02e1:  mov    %eax,(%esp)
0847c4e2 +0x02e4:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c4e7 +0x02e9:  lea    -0x9c(%ebp),%eax
0847c4ed +0x02ef:  mov    %eax,(%esp)
0847c4f0 +0x02f2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c4f5 +0x02f7:  movl   $0xf9,0x4(%esp)
0847c4fd +0x02ff:  mov    %eax,(%esp)
0847c500 +0x0302:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c505 +0x0307:  lea    -0x9c(%ebp),%eax
0847c50b +0x030d:  mov    %eax,(%esp)
0847c50e +0x0310:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c513 +0x0315:  movl   $0xffffffff,0x4(%esp)
0847c51b +0x031d:  mov    %eax,(%esp)
0847c51e +0x0320:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c523 +0x0325:  lea    -0x9c(%ebp),%eax
0847c529 +0x032b:  mov    %eax,(%esp)
0847c52c +0x032e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c531 +0x0333:  mov    %eax,(%esp)
0847c534 +0x0336:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847c539 +0x033b:  mov    %eax,-0x7c(%ebp)
0847c53c +0x033e:  mov    -0x7c(%ebp),%eax
0847c53f +0x0341:  movb   $0x0,0x4(%eax)
0847c543 +0x0345:  mov    -0x7c(%ebp),%eax
0847c546 +0x0348:  movl   $0x1,(%eax)
0847c54c +0x034e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c551 +0x0353:  lea    -0x9c(%ebp),%edx
0847c557 +0x0359:  mov    %edx,0x8(%esp)
0847c55b +0x035d:  movl   $0x1,0x4(%esp)
0847c563 +0x0365:  mov    %eax,(%esp)
0847c566 +0x0368:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c56b +0x036d:  jmp    0847c58b <+0x38d>
0847c56d +0x036f:  mov    %edx,%ebx
0847c56f +0x0371:  mov    %eax,%esi
0847c571 +0x0373:  lea    -0x9c(%ebp),%eax
0847c577 +0x0379:  mov    %eax,(%esp)
0847c57a +0x037c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c57f +0x0381:  mov    %esi,%eax
0847c581 +0x0383:  mov    %ebx,%edx
0847c583 +0x0385:  mov    %eax,(%esp)
0847c586 +0x0388:  call   08ae3750 <_Unwind_Resume>
0847c58b +0x038d:  lea    -0x9c(%ebp),%eax
0847c591 +0x0393:  mov    %eax,(%esp)
0847c594 +0x0396:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c599 +0x039b:  jmp    0847dc8f <+0x1a91>
0847c59e +0x03a0:  mov    0x8(%ebp),%eax
0847c5a1 +0x03a3:  mov    %eax,-0x78(%ebp)
0847c5a4 +0x03a6:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c5a9 +0x03ab:  movl   $0x14e9,0x8(%esp)
0847c5b1 +0x03b3:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c5b9 +0x03bb:  mov    %eax,(%esp)
0847c5bc +0x03be:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c5c1 +0x03c3:  movl   $0x1,0x8(%esp)
0847c5c9 +0x03cb:  mov    %eax,0x4(%esp)
0847c5cd +0x03cf:  lea    -0xa4(%ebp),%eax
0847c5d3 +0x03d5:  mov    %eax,(%esp)
0847c5d6 +0x03d8:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c5db +0x03dd:  lea    -0xa4(%ebp),%eax
0847c5e1 +0x03e3:  mov    %eax,(%esp)
0847c5e4 +0x03e6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c5e9 +0x03eb:  movl   $0xf0,0x4(%esp)
0847c5f1 +0x03f3:  mov    %eax,(%esp)
0847c5f4 +0x03f6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c5f9 +0x03fb:  mov    -0x78(%ebp),%eax
0847c5fc +0x03fe:  mov    0x12(%eax),%ebx
0847c5ff +0x0401:  lea    -0xa4(%ebp),%eax
0847c605 +0x0407:  mov    %eax,(%esp)
0847c608 +0x040a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c60d +0x040f:  mov    %ebx,0x4(%esp)
0847c611 +0x0413:  mov    %eax,(%esp)
0847c614 +0x0416:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c619 +0x041b:  lea    -0xa4(%ebp),%eax
0847c61f +0x0421:  mov    %eax,(%esp)
0847c622 +0x0424:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c627 +0x0429:  mov    %eax,(%esp)
0847c62a +0x042c:  call   0847dd68 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x8a>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x8a
0847c62f +0x0431:  mov    %eax,-0x74(%ebp)
0847c632 +0x0434:  mov    -0x74(%ebp),%eax
0847c635 +0x0437:  movl   $0x1,(%eax)
0847c63b +0x043d:  mov    -0x78(%ebp),%eax
0847c63e +0x0440:  mov    0x16(%eax),%edx
0847c641 +0x0443:  mov    -0x74(%ebp),%eax
0847c644 +0x0446:  mov    %edx,0x4(%eax)
0847c647 +0x0449:  mov    -0x78(%ebp),%eax
0847c64a +0x044c:  mov    0x1a(%eax),%edx
0847c64d +0x044f:  mov    -0x74(%ebp),%eax
0847c650 +0x0452:  mov    %edx,0x8(%eax)
0847c653 +0x0455:  movl   $0x0,-0x70(%ebp)
0847c65a +0x045c:  jmp    0847c67f <+0x481>
0847c65c +0x045e:  mov    -0x70(%ebp),%edx
0847c65f +0x0461:  mov    -0x74(%ebp),%eax
0847c662 +0x0464:  movl   $0x0,0xc(%eax,%edx,4)
0847c66a +0x046c:  mov    -0x70(%ebp),%edx
0847c66d +0x046f:  mov    -0x74(%ebp),%eax
0847c670 +0x0472:  add    $0x4,%edx
0847c673 +0x0475:  movl   $0x0,0x8(%eax,%edx,4)
0847c67b +0x047d:  addl   $0x1,-0x70(%ebp)
0847c67f +0x0481:  cmpl   $0x2,-0x70(%ebp)
0847c683 +0x0485:  setle  %al
0847c686 +0x0488:  test   %al,%al
0847c688 +0x048a:  jne    0847c65c <+0x45e>
0847c68a +0x048c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c68f +0x0491:  lea    -0xa4(%ebp),%edx
0847c695 +0x0497:  mov    %edx,0x8(%esp)
0847c699 +0x049b:  movl   $0x1,0x4(%esp)
0847c6a1 +0x04a3:  mov    %eax,(%esp)
0847c6a4 +0x04a6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c6a9 +0x04ab:  jmp    0847c6c9 <+0x4cb>
0847c6ab +0x04ad:  mov    %edx,%ebx
0847c6ad +0x04af:  mov    %eax,%esi
0847c6af +0x04b1:  lea    -0xa4(%ebp),%eax
0847c6b5 +0x04b7:  mov    %eax,(%esp)
0847c6b8 +0x04ba:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c6bd +0x04bf:  mov    %esi,%eax
0847c6bf +0x04c1:  mov    %ebx,%edx
0847c6c1 +0x04c3:  mov    %eax,(%esp)
0847c6c4 +0x04c6:  call   08ae3750 <_Unwind_Resume>
0847c6c9 +0x04cb:  lea    -0xa4(%ebp),%eax
0847c6cf +0x04d1:  mov    %eax,(%esp)
0847c6d2 +0x04d4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c6d7 +0x04d9:  jmp    0847dc8f <+0x1a91>
0847c6dc +0x04de:  mov    0x8(%ebp),%eax
0847c6df +0x04e1:  mov    %eax,-0x6c(%ebp)
0847c6e2 +0x04e4:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c6e7 +0x04e9:  movl   $0x1502,0x8(%esp)
0847c6ef +0x04f1:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c6f7 +0x04f9:  mov    %eax,(%esp)
0847c6fa +0x04fc:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c6ff +0x0501:  movl   $0x1,0x8(%esp)
0847c707 +0x0509:  mov    %eax,0x4(%esp)
0847c70b +0x050d:  lea    -0xac(%ebp),%eax
0847c711 +0x0513:  mov    %eax,(%esp)
0847c714 +0x0516:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c719 +0x051b:  lea    -0xac(%ebp),%eax
0847c71f +0x0521:  mov    %eax,(%esp)
0847c722 +0x0524:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c727 +0x0529:  movl   $0xf1,0x4(%esp)
0847c72f +0x0531:  mov    %eax,(%esp)
0847c732 +0x0534:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c737 +0x0539:  mov    -0x6c(%ebp),%eax
0847c73a +0x053c:  mov    0x12(%eax),%ebx
0847c73d +0x053f:  lea    -0xac(%ebp),%eax
0847c743 +0x0545:  mov    %eax,(%esp)
0847c746 +0x0548:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c74b +0x054d:  mov    %ebx,0x4(%esp)
0847c74f +0x0551:  mov    %eax,(%esp)
0847c752 +0x0554:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c757 +0x0559:  lea    -0xac(%ebp),%eax
0847c75d +0x055f:  mov    %eax,(%esp)
0847c760 +0x0562:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c765 +0x0567:  mov    %eax,(%esp)
0847c768 +0x056a:  call   0847dd7e <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xa0>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xa0
0847c76d +0x056f:  mov    %eax,-0x68(%ebp)
0847c770 +0x0572:  mov    -0x6c(%ebp),%eax
0847c773 +0x0575:  mov    0x16(%eax),%edx
0847c776 +0x0578:  mov    -0x68(%ebp),%eax
0847c779 +0x057b:  mov    %edx,0x4(%eax)
0847c77c +0x057e:  mov    -0x6c(%ebp),%eax
0847c77f +0x0581:  movzwl 0x1a(%eax),%edx
0847c783 +0x0585:  mov    -0x68(%ebp),%eax
0847c786 +0x0588:  mov    %dx,0x8(%eax)
0847c78a +0x058c:  mov    -0x6c(%ebp),%eax
0847c78d +0x058f:  movzbl 0x1c(%eax),%edx
0847c791 +0x0593:  mov    -0x68(%ebp),%eax
0847c794 +0x0596:  mov    %dl,0xa(%eax)
0847c797 +0x0599:  mov    -0x6c(%ebp),%eax
0847c79a +0x059c:  movzwl 0x1d(%eax),%edx
0847c79e +0x05a0:  mov    -0x68(%ebp),%eax
0847c7a1 +0x05a3:  mov    %dx,0xb(%eax)
0847c7a5 +0x05a7:  mov    -0x6c(%ebp),%eax
0847c7a8 +0x05aa:  mov    0x1f(%eax),%edx
0847c7ab +0x05ad:  mov    -0x68(%ebp),%eax
0847c7ae +0x05b0:  mov    %edx,0xd(%eax)
0847c7b1 +0x05b3:  mov    -0x6c(%ebp),%eax
0847c7b4 +0x05b6:  mov    0x23(%eax),%edx
0847c7b7 +0x05b9:  mov    -0x68(%ebp),%eax
0847c7ba +0x05bc:  mov    %edx,0x11(%eax)
0847c7bd +0x05bf:  mov    -0x6c(%ebp),%eax
0847c7c0 +0x05c2:  mov    0x27(%eax),%edx
0847c7c3 +0x05c5:  mov    -0x68(%ebp),%eax
0847c7c6 +0x05c8:  mov    %edx,0x15(%eax)
0847c7c9 +0x05cb:  mov    -0x6c(%ebp),%eax
0847c7cc +0x05ce:  mov    0x2b(%eax),%edx
0847c7cf +0x05d1:  mov    -0x68(%ebp),%eax
0847c7d2 +0x05d4:  mov    %edx,0x19(%eax)
0847c7d5 +0x05d7:  mov    -0x68(%ebp),%eax
0847c7d8 +0x05da:  movl   $0x1,(%eax)
0847c7de +0x05e0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c7e3 +0x05e5:  lea    -0xac(%ebp),%edx
0847c7e9 +0x05eb:  mov    %edx,0x8(%esp)
0847c7ed +0x05ef:  movl   $0x1,0x4(%esp)
0847c7f5 +0x05f7:  mov    %eax,(%esp)
0847c7f8 +0x05fa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c7fd +0x05ff:  jmp    0847c81d <+0x61f>
0847c7ff +0x0601:  mov    %edx,%ebx
0847c801 +0x0603:  mov    %eax,%esi
0847c803 +0x0605:  lea    -0xac(%ebp),%eax
0847c809 +0x060b:  mov    %eax,(%esp)
0847c80c +0x060e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c811 +0x0613:  mov    %esi,%eax
0847c813 +0x0615:  mov    %ebx,%edx
0847c815 +0x0617:  mov    %eax,(%esp)
0847c818 +0x061a:  call   08ae3750 <_Unwind_Resume>
0847c81d +0x061f:  lea    -0xac(%ebp),%eax
0847c823 +0x0625:  mov    %eax,(%esp)
0847c826 +0x0628:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c82b +0x062d:  jmp    0847dc8f <+0x1a91>
0847c830 +0x0632:  mov    0x8(%ebp),%eax
0847c833 +0x0635:  mov    %eax,-0x64(%ebp)
0847c836 +0x0638:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c83b +0x063d:  movl   $0x1523,0x8(%esp)
0847c843 +0x0645:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c84b +0x064d:  mov    %eax,(%esp)
0847c84e +0x0650:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c853 +0x0655:  movl   $0x1,0x8(%esp)
0847c85b +0x065d:  mov    %eax,0x4(%esp)
0847c85f +0x0661:  lea    -0xb4(%ebp),%eax
0847c865 +0x0667:  mov    %eax,(%esp)
0847c868 +0x066a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c86d +0x066f:  lea    -0xb4(%ebp),%eax
0847c873 +0x0675:  mov    %eax,(%esp)
0847c876 +0x0678:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c87b +0x067d:  movl   $0xf2,0x4(%esp)
0847c883 +0x0685:  mov    %eax,(%esp)
0847c886 +0x0688:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c88b +0x068d:  mov    -0x64(%ebp),%eax
0847c88e +0x0690:  mov    0x12(%eax),%ebx
0847c891 +0x0693:  lea    -0xb4(%ebp),%eax
0847c897 +0x0699:  mov    %eax,(%esp)
0847c89a +0x069c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c89f +0x06a1:  mov    %ebx,0x4(%esp)
0847c8a3 +0x06a5:  mov    %eax,(%esp)
0847c8a6 +0x06a8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c8ab +0x06ad:  lea    -0xb4(%ebp),%eax
0847c8b1 +0x06b3:  mov    %eax,(%esp)
0847c8b4 +0x06b6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c8b9 +0x06bb:  mov    %eax,(%esp)
0847c8bc +0x06be:  call   0847dd94 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xb6>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xb6
0847c8c1 +0x06c3:  mov    %eax,-0x60(%ebp)
0847c8c4 +0x06c6:  mov    -0x64(%ebp),%eax
0847c8c7 +0x06c9:  mov    0x16(%eax),%edx
0847c8ca +0x06cc:  mov    -0x60(%ebp),%eax
0847c8cd +0x06cf:  mov    %edx,0x4(%eax)
0847c8d0 +0x06d2:  mov    -0x64(%ebp),%eax
0847c8d3 +0x06d5:  movzbl 0x1a(%eax),%edx
0847c8d7 +0x06d9:  mov    -0x60(%ebp),%eax
0847c8da +0x06dc:  mov    %dl,0x8(%eax)
0847c8dd +0x06df:  mov    -0x64(%ebp),%eax
0847c8e0 +0x06e2:  movzbl 0x1b(%eax),%edx
0847c8e4 +0x06e6:  mov    -0x60(%ebp),%eax
0847c8e7 +0x06e9:  mov    %dl,0x9(%eax)
0847c8ea +0x06ec:  mov    -0x60(%ebp),%eax
0847c8ed +0x06ef:  movl   $0x1,(%eax)
0847c8f3 +0x06f5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c8f8 +0x06fa:  lea    -0xb4(%ebp),%edx
0847c8fe +0x0700:  mov    %edx,0x8(%esp)
0847c902 +0x0704:  movl   $0x1,0x4(%esp)
0847c90a +0x070c:  mov    %eax,(%esp)
0847c90d +0x070f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c912 +0x0714:  jmp    0847c932 <+0x734>
0847c914 +0x0716:  mov    %edx,%ebx
0847c916 +0x0718:  mov    %eax,%esi
0847c918 +0x071a:  lea    -0xb4(%ebp),%eax
0847c91e +0x0720:  mov    %eax,(%esp)
0847c921 +0x0723:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c926 +0x0728:  mov    %esi,%eax
0847c928 +0x072a:  mov    %ebx,%edx
0847c92a +0x072c:  mov    %eax,(%esp)
0847c92d +0x072f:  call   08ae3750 <_Unwind_Resume>
0847c932 +0x0734:  lea    -0xb4(%ebp),%eax
0847c938 +0x073a:  mov    %eax,(%esp)
0847c93b +0x073d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c940 +0x0742:  jmp    0847dc8f <+0x1a91>
0847c945 +0x0747:  mov    0x8(%ebp),%eax
0847c948 +0x074a:  mov    %eax,-0x5c(%ebp)
0847c94b +0x074d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c950 +0x0752:  movl   $0x1536,0x8(%esp)
0847c958 +0x075a:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c960 +0x0762:  mov    %eax,(%esp)
0847c963 +0x0765:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c968 +0x076a:  movl   $0x1,0x8(%esp)
0847c970 +0x0772:  mov    %eax,0x4(%esp)
0847c974 +0x0776:  lea    -0xbc(%ebp),%eax
0847c97a +0x077c:  mov    %eax,(%esp)
0847c97d +0x077f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c982 +0x0784:  lea    -0xbc(%ebp),%eax
0847c988 +0x078a:  mov    %eax,(%esp)
0847c98b +0x078d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c990 +0x0792:  movl   $0xf3,0x4(%esp)
0847c998 +0x079a:  mov    %eax,(%esp)
0847c99b +0x079d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c9a0 +0x07a2:  mov    -0x5c(%ebp),%eax
0847c9a3 +0x07a5:  mov    0x12(%eax),%ebx
0847c9a6 +0x07a8:  lea    -0xbc(%ebp),%eax
0847c9ac +0x07ae:  mov    %eax,(%esp)
0847c9af +0x07b1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c9b4 +0x07b6:  mov    %ebx,0x4(%esp)
0847c9b8 +0x07ba:  mov    %eax,(%esp)
0847c9bb +0x07bd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c9c0 +0x07c2:  lea    -0xbc(%ebp),%eax
0847c9c6 +0x07c8:  mov    %eax,(%esp)
0847c9c9 +0x07cb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c9ce +0x07d0:  mov    %eax,(%esp)
0847c9d1 +0x07d3:  call   0847ddaa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xcc>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xcc
0847c9d6 +0x07d8:  mov    %eax,-0x58(%ebp)
0847c9d9 +0x07db:  mov    -0x5c(%ebp),%eax
0847c9dc +0x07de:  mov    0x16(%eax),%edx
0847c9df +0x07e1:  mov    -0x58(%ebp),%eax
0847c9e2 +0x07e4:  mov    %edx,0x4(%eax)
0847c9e5 +0x07e7:  mov    -0x5c(%ebp),%eax
0847c9e8 +0x07ea:  mov    0x1a(%eax),%edx
0847c9eb +0x07ed:  mov    -0x58(%ebp),%eax
0847c9ee +0x07f0:  mov    %edx,0x8(%eax)
0847c9f1 +0x07f3:  mov    -0x5c(%ebp),%eax
0847c9f4 +0x07f6:  movzbl 0x1e(%eax),%edx
0847c9f8 +0x07fa:  mov    -0x58(%ebp),%eax
0847c9fb +0x07fd:  mov    %dl,0xc(%eax)
0847c9fe +0x0800:  mov    -0x5c(%ebp),%eax
0847ca01 +0x0803:  movzbl 0x1f(%eax),%edx
0847ca05 +0x0807:  mov    -0x58(%ebp),%eax
0847ca08 +0x080a:  mov    %dl,0xd(%eax)
0847ca0b +0x080d:  mov    -0x5c(%ebp),%eax
0847ca0e +0x0810:  mov    0x24(%eax),%edx
0847ca11 +0x0813:  mov    0x20(%eax),%eax
0847ca14 +0x0816:  mov    -0x58(%ebp),%ecx
0847ca17 +0x0819:  mov    %eax,0xe(%ecx)
0847ca1a +0x081c:  mov    %edx,0x12(%ecx)
0847ca1d +0x081f:  mov    -0x58(%ebp),%eax
0847ca20 +0x0822:  movl   $0x1,(%eax)
0847ca26 +0x0828:  mov    -0x5c(%ebp),%eax
0847ca29 +0x082b:  add    $0x28,%eax
0847ca2c +0x082e:  mov    %eax,(%esp)
0847ca2f +0x0831:  call   0807e3b0 <_init+0xca8>
0847ca34 +0x0836:  mov    -0x5c(%ebp),%edx
0847ca37 +0x0839:  lea    0x28(%edx),%ecx
0847ca3a +0x083c:  mov    -0x58(%ebp),%edx
0847ca3d +0x083f:  add    $0x16,%edx
0847ca40 +0x0842:  mov    %eax,0x8(%esp)
0847ca44 +0x0846:  mov    %ecx,0x4(%esp)
0847ca48 +0x084a:  mov    %edx,(%esp)
0847ca4b +0x084d:  call   0807d8d0 <_init+0x1c8>
0847ca50 +0x0852:  mov    -0x5c(%ebp),%eax
0847ca53 +0x0855:  mov    0x48(%eax),%edx
0847ca56 +0x0858:  mov    -0x58(%ebp),%eax
0847ca59 +0x085b:  mov    %edx,0x36(%eax)
0847ca5c +0x085e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847ca61 +0x0863:  lea    -0xbc(%ebp),%edx
0847ca67 +0x0869:  mov    %edx,0x8(%esp)
0847ca6b +0x086d:  movl   $0x1,0x4(%esp)
0847ca73 +0x0875:  mov    %eax,(%esp)
0847ca76 +0x0878:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847ca7b +0x087d:  jmp    0847ca9b <+0x89d>
0847ca7d +0x087f:  mov    %edx,%ebx
0847ca7f +0x0881:  mov    %eax,%esi
0847ca81 +0x0883:  lea    -0xbc(%ebp),%eax
0847ca87 +0x0889:  mov    %eax,(%esp)
0847ca8a +0x088c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ca8f +0x0891:  mov    %esi,%eax
0847ca91 +0x0893:  mov    %ebx,%edx
0847ca93 +0x0895:  mov    %eax,(%esp)
0847ca96 +0x0898:  call   08ae3750 <_Unwind_Resume>
0847ca9b +0x089d:  lea    -0xbc(%ebp),%eax
0847caa1 +0x08a3:  mov    %eax,(%esp)
0847caa4 +0x08a6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847caa9 +0x08ab:  jmp    0847dc8f <+0x1a91>
0847caae +0x08b0:  mov    0x8(%ebp),%eax
0847cab1 +0x08b3:  mov    %eax,-0x54(%ebp)
0847cab4 +0x08b6:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847cab9 +0x08bb:  movl   $0x154e,0x8(%esp)
0847cac1 +0x08c3:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847cac9 +0x08cb:  mov    %eax,(%esp)
0847cacc +0x08ce:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847cad1 +0x08d3:  movl   $0x1,0x8(%esp)
0847cad9 +0x08db:  mov    %eax,0x4(%esp)
0847cadd +0x08df:  lea    -0xc4(%ebp),%eax
0847cae3 +0x08e5:  mov    %eax,(%esp)
0847cae6 +0x08e8:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847caeb +0x08ed:  lea    -0xc4(%ebp),%eax
0847caf1 +0x08f3:  mov    %eax,(%esp)
0847caf4 +0x08f6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847caf9 +0x08fb:  movl   $0xf4,0x4(%esp)
0847cb01 +0x0903:  mov    %eax,(%esp)
0847cb04 +0x0906:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cb09 +0x090b:  mov    -0x54(%ebp),%eax
0847cb0c +0x090e:  mov    0x12(%eax),%ebx
0847cb0f +0x0911:  lea    -0xc4(%ebp),%eax
0847cb15 +0x0917:  mov    %eax,(%esp)
0847cb18 +0x091a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cb1d +0x091f:  mov    %ebx,0x4(%esp)
0847cb21 +0x0923:  mov    %eax,(%esp)
0847cb24 +0x0926:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cb29 +0x092b:  lea    -0xc4(%ebp),%eax
0847cb2f +0x0931:  mov    %eax,(%esp)
0847cb32 +0x0934:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cb37 +0x0939:  mov    %eax,(%esp)
0847cb3a +0x093c:  call   0847ddc0 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xe2>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xe2
0847cb3f +0x0941:  mov    %eax,-0x50(%ebp)
0847cb42 +0x0944:  mov    -0x54(%ebp),%eax
0847cb45 +0x0947:  mov    0x16(%eax),%edx
0847cb48 +0x094a:  mov    -0x50(%ebp),%eax
0847cb4b +0x094d:  mov    %edx,0x4(%eax)
0847cb4e +0x0950:  mov    -0x54(%ebp),%eax
0847cb51 +0x0953:  movzbl 0x1a(%eax),%edx
0847cb55 +0x0957:  mov    -0x50(%ebp),%eax
0847cb58 +0x095a:  mov    %dl,0x8(%eax)
0847cb5b +0x095d:  mov    -0x54(%ebp),%eax
0847cb5e +0x0960:  movzbl 0x1b(%eax),%edx
0847cb62 +0x0964:  mov    -0x50(%ebp),%eax
0847cb65 +0x0967:  mov    %dl,0x9(%eax)
0847cb68 +0x096a:  mov    -0x50(%ebp),%eax
0847cb6b +0x096d:  movl   $0x1,(%eax)
0847cb71 +0x0973:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847cb76 +0x0978:  lea    -0xc4(%ebp),%edx
0847cb7c +0x097e:  mov    %edx,0x8(%esp)
0847cb80 +0x0982:  movl   $0x1,0x4(%esp)
0847cb88 +0x098a:  mov    %eax,(%esp)
0847cb8b +0x098d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847cb90 +0x0992:  jmp    0847cbb0 <+0x9b2>
0847cb92 +0x0994:  mov    %edx,%ebx
0847cb94 +0x0996:  mov    %eax,%esi
0847cb96 +0x0998:  lea    -0xc4(%ebp),%eax
0847cb9c +0x099e:  mov    %eax,(%esp)
0847cb9f +0x09a1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847cba4 +0x09a6:  mov    %esi,%eax
0847cba6 +0x09a8:  mov    %ebx,%edx
0847cba8 +0x09aa:  mov    %eax,(%esp)
0847cbab +0x09ad:  call   08ae3750 <_Unwind_Resume>
0847cbb0 +0x09b2:  lea    -0xc4(%ebp),%eax
0847cbb6 +0x09b8:  mov    %eax,(%esp)
0847cbb9 +0x09bb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847cbbe +0x09c0:  jmp    0847dc8f <+0x1a91>
0847cbc3 +0x09c5:  mov    0x8(%ebp),%eax
0847cbc6 +0x09c8:  mov    %eax,-0x4c(%ebp)
0847cbc9 +0x09cb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847cbce +0x09d0:  movl   $0x1561,0x8(%esp)
0847cbd6 +0x09d8:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847cbde +0x09e0:  mov    %eax,(%esp)
0847cbe1 +0x09e3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847cbe6 +0x09e8:  movl   $0x1,0x8(%esp)
0847cbee +0x09f0:  mov    %eax,0x4(%esp)
0847cbf2 +0x09f4:  lea    -0xcc(%ebp),%eax
0847cbf8 +0x09fa:  mov    %eax,(%esp)
0847cbfb +0x09fd:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847cc00 +0x0a02:  lea    -0xcc(%ebp),%eax
0847cc06 +0x0a08:  mov    %eax,(%esp)
0847cc09 +0x0a0b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cc0e +0x0a10:  movl   $0xf5,0x4(%esp)
0847cc16 +0x0a18:  mov    %eax,(%esp)
0847cc19 +0x0a1b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cc1e +0x0a20:  mov    -0x4c(%ebp),%eax
0847cc21 +0x0a23:  mov    0x12(%eax),%ebx
0847cc24 +0x0a26:  lea    -0xcc(%ebp),%eax
0847cc2a +0x0a2c:  mov    %eax,(%esp)
0847cc2d +0x0a2f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cc32 +0x0a34:  mov    %ebx,0x4(%esp)
0847cc36 +0x0a38:  mov    %eax,(%esp)
0847cc39 +0x0a3b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cc3e +0x0a40:  mov    -0x4c(%ebp),%eax
0847cc41 +0x0a43:  mov    0x16(%eax),%ebx
0847cc44 +0x0a46:  lea    -0xcc(%ebp),%eax
0847cc4a +0x0a4c:  mov    %eax,(%esp)
0847cc4d +0x0a4f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cc52 +0x0a54:  mov    %ebx,0x4(%esp)
0847cc56 +0x0a58:  mov    %eax,(%esp)
0847cc59 +0x0a5b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cc5e +0x0a60:  mov    -0x4c(%ebp),%eax
0847cc61 +0x0a63:  movzbl 0x1a(%eax),%eax
0847cc65 +0x0a67:  movzbl %al,%ebx
0847cc68 +0x0a6a:  lea    -0xcc(%ebp),%eax
0847cc6e +0x0a70:  mov    %eax,(%esp)
0847cc71 +0x0a73:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cc76 +0x0a78:  mov    %ebx,0x4(%esp)
0847cc7a +0x0a7c:  mov    %eax,(%esp)
0847cc7d +0x0a7f:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847cc82 +0x0a84:  mov    -0x4c(%ebp),%eax
0847cc85 +0x0a87:  mov    0x1b(%eax),%ebx
0847cc88 +0x0a8a:  lea    -0xcc(%ebp),%eax
0847cc8e +0x0a90:  mov    %eax,(%esp)
0847cc91 +0x0a93:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cc96 +0x0a98:  mov    %ebx,0x4(%esp)
0847cc9a +0x0a9c:  mov    %eax,(%esp)
0847cc9d +0x0a9f:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0847cca2 +0x0aa4:  mov    -0x4c(%ebp),%eax
0847cca5 +0x0aa7:  movzwl 0x1f(%eax),%eax
0847cca9 +0x0aab:  movzwl %ax,%eax
0847ccac +0x0aae:  imul   $0x89,%eax,%eax
0847ccb2 +0x0ab4:  add    $0x2,%eax
0847ccb5 +0x0ab7:  mov    %eax,-0x48(%ebp)
0847ccb8 +0x0aba:  lea    -0xcc(%ebp),%eax
0847ccbe +0x0ac0:  mov    %eax,(%esp)
0847ccc1 +0x0ac3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847ccc6 +0x0ac8:  mov    %eax,(%esp)
0847ccc9 +0x0acb:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847ccce +0x0ad0:  mov    %eax,(%esp)
0847ccd1 +0x0ad3:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847ccd6 +0x0ad8:  mov    %eax,%ebx
0847ccd8 +0x0ada:  add    -0x48(%ebp),%ebx
0847ccdb +0x0add:  lea    -0xcc(%ebp),%eax
0847cce1 +0x0ae3:  mov    %eax,(%esp)
0847cce4 +0x0ae6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cce9 +0x0aeb:  mov    %eax,(%esp)
0847ccec +0x0aee:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847ccf1 +0x0af3:  mov    %eax,(%esp)
0847ccf4 +0x0af6:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847ccf9 +0x0afb:  cmp    %eax,%ebx
0847ccfb +0x0afd:  setg   %al
0847ccfe +0x0b00:  test   %al,%al
0847cd00 +0x0b02:  je     0847cd47 <+0xb49>
0847cd02 +0x0b04:  lea    -0xcc(%ebp),%eax
0847cd08 +0x0b0a:  mov    %eax,(%esp)
0847cd0b +0x0b0d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cd10 +0x0b12:  mov    %eax,(%esp)
0847cd13 +0x0b15:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cd18 +0x0b1a:  mov    %eax,(%esp)
0847cd1b +0x0b1d:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847cd20 +0x0b22:  mov    %eax,%ebx
0847cd22 +0x0b24:  add    -0x48(%ebp),%ebx
0847cd25 +0x0b27:  lea    -0xcc(%ebp),%eax
0847cd2b +0x0b2d:  mov    %eax,(%esp)
0847cd2e +0x0b30:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cd33 +0x0b35:  mov    %eax,(%esp)
0847cd36 +0x0b38:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cd3b +0x0b3d:  mov    %ebx,0x4(%esp)
0847cd3f +0x0b41:  mov    %eax,(%esp)
0847cd42 +0x0b44:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847cd47 +0x0b49:  lea    -0xcc(%ebp),%eax
0847cd4d +0x0b4f:  mov    %eax,(%esp)
0847cd50 +0x0b52:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cd55 +0x0b57:  mov    %eax,(%esp)
0847cd58 +0x0b5a:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cd5d +0x0b5f:  mov    %eax,(%esp)
0847cd60 +0x0b62:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847cd65 +0x0b67:  mov    %eax,%ebx
0847cd67 +0x0b69:  add    -0x48(%ebp),%ebx
0847cd6a +0x0b6c:  lea    -0xcc(%ebp),%eax
0847cd70 +0x0b72:  mov    %eax,(%esp)
0847cd73 +0x0b75:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cd78 +0x0b7a:  mov    %eax,(%esp)
0847cd7b +0x0b7d:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cd80 +0x0b82:  mov    %eax,(%esp)
0847cd83 +0x0b85:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847cd88 +0x0b8a:  cmp    %eax,%ebx
0847cd8a +0x0b8c:  setle  %al
0847cd8d +0x0b8f:  test   %al,%al
0847cd8f +0x0b91:  je     0847cded <+0xbef>
0847cd91 +0x0b93:  mov    -0x4c(%ebp),%eax
0847cd94 +0x0b96:  movzwl 0x1f(%eax),%eax
0847cd98 +0x0b9a:  movzwl %ax,%ebx
0847cd9b +0x0b9d:  lea    -0xcc(%ebp),%eax
0847cda1 +0x0ba3:  mov    %eax,(%esp)
0847cda4 +0x0ba6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cda9 +0x0bab:  mov    %ebx,0x4(%esp)
0847cdad +0x0baf:  mov    %eax,(%esp)
0847cdb0 +0x0bb2:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847cdb5 +0x0bb7:  mov    -0x4c(%ebp),%eax
0847cdb8 +0x0bba:  movzwl 0x1f(%eax),%eax
0847cdbc +0x0bbe:  movzwl %ax,%eax
0847cdbf +0x0bc1:  imul   $0x89,%eax,%eax
0847cdc5 +0x0bc7:  mov    %eax,%ebx
0847cdc7 +0x0bc9:  mov    -0x4c(%ebp),%eax
0847cdca +0x0bcc:  lea    0x21(%eax),%esi
0847cdcd +0x0bcf:  lea    -0xcc(%ebp),%eax
0847cdd3 +0x0bd5:  mov    %eax,(%esp)
0847cdd6 +0x0bd8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cddb +0x0bdd:  mov    %ebx,0x8(%esp)
0847cddf +0x0be1:  mov    %esi,0x4(%esp)
0847cde3 +0x0be5:  mov    %eax,(%esp)
0847cde6 +0x0be8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847cdeb +0x0bed:  jmp    0847ce37 <+0xc39>
0847cded +0x0bef:  lea    -0xcc(%ebp),%eax
0847cdf3 +0x0bf5:  mov    %eax,(%esp)
0847cdf6 +0x0bf8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cdfb +0x0bfd:  movl   $0x0,0x4(%esp)
0847ce03 +0x0c05:  mov    %eax,(%esp)
0847ce06 +0x0c08:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847ce0b +0x0c0d:  movl   $"onAUCTION_ITEM_LIST_PG, resize failed.",0x10(%esp)
0847ce13 +0x0c15:  movl   $0x1579,0xc(%esp)
0847ce1b +0x0c1d:  movl   $&_ZZN21CDispatchServerPacket19dispatchPointPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847ce23 +0x0c25:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847ce2b +0x0c2d:  movl   $0x1,(%esp)
0847ce32 +0x0c34:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847ce37 +0x0c39:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847ce3c +0x0c3e:  lea    -0xcc(%ebp),%edx
0847ce42 +0x0c44:  mov    %edx,0x8(%esp)
0847ce46 +0x0c48:  movl   $0x1,0x4(%esp)
0847ce4e +0x0c50:  mov    %eax,(%esp)
0847ce51 +0x0c53:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847ce56 +0x0c58:  jmp    0847ce76 <+0xc78>
0847ce58 +0x0c5a:  mov    %edx,%ebx
0847ce5a +0x0c5c:  mov    %eax,%esi
0847ce5c +0x0c5e:  lea    -0xcc(%ebp),%eax
0847ce62 +0x0c64:  mov    %eax,(%esp)
0847ce65 +0x0c67:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ce6a +0x0c6c:  mov    %esi,%eax
0847ce6c +0x0c6e:  mov    %ebx,%edx
0847ce6e +0x0c70:  mov    %eax,(%esp)
0847ce71 +0x0c73:  call   08ae3750 <_Unwind_Resume>
0847ce76 +0x0c78:  lea    -0xcc(%ebp),%eax
0847ce7c +0x0c7e:  mov    %eax,(%esp)
0847ce7f +0x0c81:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ce84 +0x0c86:  jmp    0847dc8f <+0x1a91>
0847ce89 +0x0c8b:  mov    0x8(%ebp),%eax
0847ce8c +0x0c8e:  mov    %eax,-0x44(%ebp)
0847ce8f +0x0c91:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847ce94 +0x0c96:  movl   $0x1584,0x8(%esp)
0847ce9c +0x0c9e:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847cea4 +0x0ca6:  mov    %eax,(%esp)
0847cea7 +0x0ca9:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847ceac +0x0cae:  movl   $0x1,0x8(%esp)
0847ceb4 +0x0cb6:  mov    %eax,0x4(%esp)
0847ceb8 +0x0cba:  lea    -0xd4(%ebp),%eax
0847cebe +0x0cc0:  mov    %eax,(%esp)
0847cec1 +0x0cc3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847cec6 +0x0cc8:  lea    -0xd4(%ebp),%eax
0847cecc +0x0cce:  mov    %eax,(%esp)
0847cecf +0x0cd1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ced4 +0x0cd6:  movl   $0xf6,0x4(%esp)
0847cedc +0x0cde:  mov    %eax,(%esp)
0847cedf +0x0ce1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cee4 +0x0ce6:  mov    -0x44(%ebp),%eax
0847cee7 +0x0ce9:  mov    0x12(%eax),%ebx
0847ceea +0x0cec:  lea    -0xd4(%ebp),%eax
0847cef0 +0x0cf2:  mov    %eax,(%esp)
0847cef3 +0x0cf5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cef8 +0x0cfa:  mov    %ebx,0x4(%esp)
0847cefc +0x0cfe:  mov    %eax,(%esp)
0847ceff +0x0d01:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cf04 +0x0d06:  mov    -0x44(%ebp),%eax
0847cf07 +0x0d09:  mov    0x16(%eax),%ebx
0847cf0a +0x0d0c:  lea    -0xd4(%ebp),%eax
0847cf10 +0x0d12:  mov    %eax,(%esp)
0847cf13 +0x0d15:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cf18 +0x0d1a:  mov    %ebx,0x4(%esp)
0847cf1c +0x0d1e:  mov    %eax,(%esp)
0847cf1f +0x0d21:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847cf24 +0x0d26:  mov    -0x44(%ebp),%eax
0847cf27 +0x0d29:  movzbl 0x1a(%eax),%eax
0847cf2b +0x0d2d:  movzbl %al,%ebx
0847cf2e +0x0d30:  lea    -0xd4(%ebp),%eax
0847cf34 +0x0d36:  mov    %eax,(%esp)
0847cf37 +0x0d39:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847cf3c +0x0d3e:  mov    %ebx,0x4(%esp)
0847cf40 +0x0d42:  mov    %eax,(%esp)
0847cf43 +0x0d45:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847cf48 +0x0d4a:  mov    -0x44(%ebp),%eax
0847cf4b +0x0d4d:  movzbl 0x1b(%eax),%eax
0847cf4f +0x0d51:  movzbl %al,%eax
0847cf52 +0x0d54:  imul   $0x75,%eax,%eax
0847cf55 +0x0d57:  add    $0x1,%eax
0847cf58 +0x0d5a:  mov    %eax,-0x40(%ebp)
0847cf5b +0x0d5d:  lea    -0xd4(%ebp),%eax
0847cf61 +0x0d63:  mov    %eax,(%esp)
0847cf64 +0x0d66:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cf69 +0x0d6b:  mov    %eax,(%esp)
0847cf6c +0x0d6e:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cf71 +0x0d73:  mov    %eax,(%esp)
0847cf74 +0x0d76:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847cf79 +0x0d7b:  mov    %eax,%ebx
0847cf7b +0x0d7d:  add    -0x40(%ebp),%ebx
0847cf7e +0x0d80:  lea    -0xd4(%ebp),%eax
0847cf84 +0x0d86:  mov    %eax,(%esp)
0847cf87 +0x0d89:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cf8c +0x0d8e:  mov    %eax,(%esp)
0847cf8f +0x0d91:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cf94 +0x0d96:  mov    %eax,(%esp)
0847cf97 +0x0d99:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847cf9c +0x0d9e:  cmp    %eax,%ebx
0847cf9e +0x0da0:  setg   %al
0847cfa1 +0x0da3:  test   %al,%al
0847cfa3 +0x0da5:  je     0847cfea <+0xdec>
0847cfa5 +0x0da7:  lea    -0xd4(%ebp),%eax
0847cfab +0x0dad:  mov    %eax,(%esp)
0847cfae +0x0db0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cfb3 +0x0db5:  mov    %eax,(%esp)
0847cfb6 +0x0db8:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cfbb +0x0dbd:  mov    %eax,(%esp)
0847cfbe +0x0dc0:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847cfc3 +0x0dc5:  mov    %eax,%ebx
0847cfc5 +0x0dc7:  add    -0x40(%ebp),%ebx
0847cfc8 +0x0dca:  lea    -0xd4(%ebp),%eax
0847cfce +0x0dd0:  mov    %eax,(%esp)
0847cfd1 +0x0dd3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cfd6 +0x0dd8:  mov    %eax,(%esp)
0847cfd9 +0x0ddb:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847cfde +0x0de0:  mov    %ebx,0x4(%esp)
0847cfe2 +0x0de4:  mov    %eax,(%esp)
0847cfe5 +0x0de7:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847cfea +0x0dec:  lea    -0xd4(%ebp),%eax
0847cff0 +0x0df2:  mov    %eax,(%esp)
0847cff3 +0x0df5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847cff8 +0x0dfa:  mov    %eax,(%esp)
0847cffb +0x0dfd:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d000 +0x0e02:  mov    %eax,(%esp)
0847d003 +0x0e05:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847d008 +0x0e0a:  mov    %eax,%ebx
0847d00a +0x0e0c:  add    -0x40(%ebp),%ebx
0847d00d +0x0e0f:  lea    -0xd4(%ebp),%eax
0847d013 +0x0e15:  mov    %eax,(%esp)
0847d016 +0x0e18:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d01b +0x0e1d:  mov    %eax,(%esp)
0847d01e +0x0e20:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d023 +0x0e25:  mov    %eax,(%esp)
0847d026 +0x0e28:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847d02b +0x0e2d:  cmp    %eax,%ebx
0847d02d +0x0e2f:  setle  %al
0847d030 +0x0e32:  test   %al,%al
0847d032 +0x0e34:  je     0847d091 <+0xe93>
0847d034 +0x0e36:  mov    -0x44(%ebp),%eax
0847d037 +0x0e39:  lea    0x1b(%eax),%ebx
0847d03a +0x0e3c:  lea    -0xd4(%ebp),%eax
0847d040 +0x0e42:  mov    %eax,(%esp)
0847d043 +0x0e45:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d048 +0x0e4a:  movl   $0x1,0x8(%esp)
0847d050 +0x0e52:  mov    %ebx,0x4(%esp)
0847d054 +0x0e56:  mov    %eax,(%esp)
0847d057 +0x0e59:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847d05c +0x0e5e:  mov    -0x44(%ebp),%eax
0847d05f +0x0e61:  movzbl 0x1b(%eax),%eax
0847d063 +0x0e65:  movzbl %al,%eax
0847d066 +0x0e68:  imul   $0x75,%eax,%eax
0847d069 +0x0e6b:  mov    %eax,%ebx
0847d06b +0x0e6d:  mov    -0x44(%ebp),%eax
0847d06e +0x0e70:  lea    0x1c(%eax),%esi
0847d071 +0x0e73:  lea    -0xd4(%ebp),%eax
0847d077 +0x0e79:  mov    %eax,(%esp)
0847d07a +0x0e7c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d07f +0x0e81:  mov    %ebx,0x8(%esp)
0847d083 +0x0e85:  mov    %esi,0x4(%esp)
0847d087 +0x0e89:  mov    %eax,(%esp)
0847d08a +0x0e8c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847d08f +0x0e91:  jmp    0847d0db <+0xedd>
0847d091 +0x0e93:  lea    -0xd4(%ebp),%eax
0847d097 +0x0e99:  mov    %eax,(%esp)
0847d09a +0x0e9c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d09f +0x0ea1:  movl   $0x0,0x4(%esp)
0847d0a7 +0x0ea9:  mov    %eax,(%esp)
0847d0aa +0x0eac:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847d0af +0x0eb1:  movl   $"onAUCTION_MY_REGISTED_ITEM_INFO_PG, resize failed.",0x10(%esp)
0847d0b7 +0x0eb9:  movl   $0x159b,0xc(%esp)
0847d0bf +0x0ec1:  movl   $&_ZZN21CDispatchServerPacket19dispatchPointPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847d0c7 +0x0ec9:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d0cf +0x0ed1:  movl   $0x1,(%esp)
0847d0d6 +0x0ed8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847d0db +0x0edd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d0e0 +0x0ee2:  lea    -0xd4(%ebp),%edx
0847d0e6 +0x0ee8:  mov    %edx,0x8(%esp)
0847d0ea +0x0eec:  movl   $0x1,0x4(%esp)
0847d0f2 +0x0ef4:  mov    %eax,(%esp)
0847d0f5 +0x0ef7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d0fa +0x0efc:  jmp    0847d11a <+0xf1c>
0847d0fc +0x0efe:  mov    %edx,%ebx
0847d0fe +0x0f00:  mov    %eax,%esi
0847d100 +0x0f02:  lea    -0xd4(%ebp),%eax
0847d106 +0x0f08:  mov    %eax,(%esp)
0847d109 +0x0f0b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d10e +0x0f10:  mov    %esi,%eax
0847d110 +0x0f12:  mov    %ebx,%edx
0847d112 +0x0f14:  mov    %eax,(%esp)
0847d115 +0x0f17:  call   08ae3750 <_Unwind_Resume>
0847d11a +0x0f1c:  lea    -0xd4(%ebp),%eax
0847d120 +0x0f22:  mov    %eax,(%esp)
0847d123 +0x0f25:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d128 +0x0f2a:  jmp    0847dc8f <+0x1a91>
0847d12d +0x0f2f:  mov    0x8(%ebp),%eax
0847d130 +0x0f32:  mov    %eax,-0x3c(%ebp)
0847d133 +0x0f35:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d138 +0x0f3a:  movl   $0x15a6,0x8(%esp)
0847d140 +0x0f42:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d148 +0x0f4a:  mov    %eax,(%esp)
0847d14b +0x0f4d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d150 +0x0f52:  movl   $0x1,0x8(%esp)
0847d158 +0x0f5a:  mov    %eax,0x4(%esp)
0847d15c +0x0f5e:  lea    -0xdc(%ebp),%eax
0847d162 +0x0f64:  mov    %eax,(%esp)
0847d165 +0x0f67:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d16a +0x0f6c:  lea    -0xdc(%ebp),%eax
0847d170 +0x0f72:  mov    %eax,(%esp)
0847d173 +0x0f75:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d178 +0x0f7a:  movl   $0xf7,0x4(%esp)
0847d180 +0x0f82:  mov    %eax,(%esp)
0847d183 +0x0f85:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d188 +0x0f8a:  mov    -0x3c(%ebp),%eax
0847d18b +0x0f8d:  mov    0x12(%eax),%ebx
0847d18e +0x0f90:  lea    -0xdc(%ebp),%eax
0847d194 +0x0f96:  mov    %eax,(%esp)
0847d197 +0x0f99:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d19c +0x0f9e:  mov    %ebx,0x4(%esp)
0847d1a0 +0x0fa2:  mov    %eax,(%esp)
0847d1a3 +0x0fa5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d1a8 +0x0faa:  mov    -0x3c(%ebp),%eax
0847d1ab +0x0fad:  mov    0x16(%eax),%ebx
0847d1ae +0x0fb0:  lea    -0xdc(%ebp),%eax
0847d1b4 +0x0fb6:  mov    %eax,(%esp)
0847d1b7 +0x0fb9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d1bc +0x0fbe:  mov    %ebx,0x4(%esp)
0847d1c0 +0x0fc2:  mov    %eax,(%esp)
0847d1c3 +0x0fc5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d1c8 +0x0fca:  mov    -0x3c(%ebp),%eax
0847d1cb +0x0fcd:  movzbl 0x1a(%eax),%eax
0847d1cf +0x0fd1:  movzbl %al,%ebx
0847d1d2 +0x0fd4:  lea    -0xdc(%ebp),%eax
0847d1d8 +0x0fda:  mov    %eax,(%esp)
0847d1db +0x0fdd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d1e0 +0x0fe2:  mov    %ebx,0x4(%esp)
0847d1e4 +0x0fe6:  mov    %eax,(%esp)
0847d1e7 +0x0fe9:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847d1ec +0x0fee:  mov    -0x3c(%ebp),%eax
0847d1ef +0x0ff1:  movzwl 0x1b(%eax),%eax
0847d1f3 +0x0ff5:  movzwl %ax,%eax
0847d1f6 +0x0ff8:  imul   $0x7d,%eax,%eax
0847d1f9 +0x0ffb:  add    $0x2,%eax
0847d1fc +0x0ffe:  mov    %eax,-0x38(%ebp)
0847d1ff +0x1001:  lea    -0xdc(%ebp),%eax
0847d205 +0x1007:  mov    %eax,(%esp)
0847d208 +0x100a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d20d +0x100f:  mov    %eax,(%esp)
0847d210 +0x1012:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d215 +0x1017:  mov    %eax,(%esp)
0847d218 +0x101a:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847d21d +0x101f:  mov    %eax,%ebx
0847d21f +0x1021:  add    -0x38(%ebp),%ebx
0847d222 +0x1024:  lea    -0xdc(%ebp),%eax
0847d228 +0x102a:  mov    %eax,(%esp)
0847d22b +0x102d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d230 +0x1032:  mov    %eax,(%esp)
0847d233 +0x1035:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d238 +0x103a:  mov    %eax,(%esp)
0847d23b +0x103d:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847d240 +0x1042:  cmp    %eax,%ebx
0847d242 +0x1044:  setg   %al
0847d245 +0x1047:  test   %al,%al
0847d247 +0x1049:  je     0847d28e <+0x1090>
0847d249 +0x104b:  lea    -0xdc(%ebp),%eax
0847d24f +0x1051:  mov    %eax,(%esp)
0847d252 +0x1054:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d257 +0x1059:  mov    %eax,(%esp)
0847d25a +0x105c:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d25f +0x1061:  mov    %eax,(%esp)
0847d262 +0x1064:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847d267 +0x1069:  mov    %eax,%ebx
0847d269 +0x106b:  add    -0x38(%ebp),%ebx
0847d26c +0x106e:  lea    -0xdc(%ebp),%eax
0847d272 +0x1074:  mov    %eax,(%esp)
0847d275 +0x1077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d27a +0x107c:  mov    %eax,(%esp)
0847d27d +0x107f:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d282 +0x1084:  mov    %ebx,0x4(%esp)
0847d286 +0x1088:  mov    %eax,(%esp)
0847d289 +0x108b:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847d28e +0x1090:  lea    -0xdc(%ebp),%eax
0847d294 +0x1096:  mov    %eax,(%esp)
0847d297 +0x1099:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d29c +0x109e:  mov    %eax,(%esp)
0847d29f +0x10a1:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d2a4 +0x10a6:  mov    %eax,(%esp)
0847d2a7 +0x10a9:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847d2ac +0x10ae:  mov    %eax,%ebx
0847d2ae +0x10b0:  add    -0x38(%ebp),%ebx
0847d2b1 +0x10b3:  lea    -0xdc(%ebp),%eax
0847d2b7 +0x10b9:  mov    %eax,(%esp)
0847d2ba +0x10bc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d2bf +0x10c1:  mov    %eax,(%esp)
0847d2c2 +0x10c4:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847d2c7 +0x10c9:  mov    %eax,(%esp)
0847d2ca +0x10cc:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847d2cf +0x10d1:  cmp    %eax,%ebx
0847d2d1 +0x10d3:  setle  %al
0847d2d4 +0x10d6:  test   %al,%al
0847d2d6 +0x10d8:  je     0847d331 <+0x1133>
0847d2d8 +0x10da:  mov    -0x3c(%ebp),%eax
0847d2db +0x10dd:  movzwl 0x1b(%eax),%eax
0847d2df +0x10e1:  movzwl %ax,%ebx
0847d2e2 +0x10e4:  lea    -0xdc(%ebp),%eax
0847d2e8 +0x10ea:  mov    %eax,(%esp)
0847d2eb +0x10ed:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d2f0 +0x10f2:  mov    %ebx,0x4(%esp)
0847d2f4 +0x10f6:  mov    %eax,(%esp)
0847d2f7 +0x10f9:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847d2fc +0x10fe:  mov    -0x3c(%ebp),%eax
0847d2ff +0x1101:  movzwl 0x1b(%eax),%eax
0847d303 +0x1105:  movzwl %ax,%eax
0847d306 +0x1108:  imul   $0x7d,%eax,%eax
0847d309 +0x110b:  mov    %eax,%ebx
0847d30b +0x110d:  mov    -0x3c(%ebp),%eax
0847d30e +0x1110:  lea    0x1d(%eax),%esi
0847d311 +0x1113:  lea    -0xdc(%ebp),%eax
0847d317 +0x1119:  mov    %eax,(%esp)
0847d31a +0x111c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d31f +0x1121:  mov    %ebx,0x8(%esp)
0847d323 +0x1125:  mov    %esi,0x4(%esp)
0847d327 +0x1129:  mov    %eax,(%esp)
0847d32a +0x112c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847d32f +0x1131:  jmp    0847d37b <+0x117d>
0847d331 +0x1133:  lea    -0xdc(%ebp),%eax
0847d337 +0x1139:  mov    %eax,(%esp)
0847d33a +0x113c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d33f +0x1141:  movl   $0x0,0x4(%esp)
0847d347 +0x1149:  mov    %eax,(%esp)
0847d34a +0x114c:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847d34f +0x1151:  movl   $"onAUCTION_MY_BIDDING_INFO_PG, resize failed.",0x10(%esp)
0847d357 +0x1159:  movl   $0x15bd,0xc(%esp)
0847d35f +0x1161:  movl   $&_ZZN21CDispatchServerPacket19dispatchPointPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847d367 +0x1169:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d36f +0x1171:  movl   $0x1,(%esp)
0847d376 +0x1178:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847d37b +0x117d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d380 +0x1182:  lea    -0xdc(%ebp),%edx
0847d386 +0x1188:  mov    %edx,0x8(%esp)
0847d38a +0x118c:  movl   $0x1,0x4(%esp)
0847d392 +0x1194:  mov    %eax,(%esp)
0847d395 +0x1197:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d39a +0x119c:  jmp    0847d3ba <+0x11bc>
0847d39c +0x119e:  mov    %edx,%ebx
0847d39e +0x11a0:  mov    %eax,%esi
0847d3a0 +0x11a2:  lea    -0xdc(%ebp),%eax
0847d3a6 +0x11a8:  mov    %eax,(%esp)
0847d3a9 +0x11ab:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d3ae +0x11b0:  mov    %esi,%eax
0847d3b0 +0x11b2:  mov    %ebx,%edx
0847d3b2 +0x11b4:  mov    %eax,(%esp)
0847d3b5 +0x11b7:  call   08ae3750 <_Unwind_Resume>
0847d3ba +0x11bc:  lea    -0xdc(%ebp),%eax
0847d3c0 +0x11c2:  mov    %eax,(%esp)
0847d3c3 +0x11c5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d3c8 +0x11ca:  jmp    0847dc8f <+0x1a91>
0847d3cd +0x11cf:  mov    0x8(%ebp),%eax
0847d3d0 +0x11d2:  mov    %eax,-0x34(%ebp)
0847d3d3 +0x11d5:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d3d8 +0x11da:  movl   $0x15ce,0x8(%esp)
0847d3e0 +0x11e2:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d3e8 +0x11ea:  mov    %eax,(%esp)
0847d3eb +0x11ed:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d3f0 +0x11f2:  movl   $0x1,0x8(%esp)
0847d3f8 +0x11fa:  mov    %eax,0x4(%esp)
0847d3fc +0x11fe:  lea    -0xe4(%ebp),%eax
0847d402 +0x1204:  mov    %eax,(%esp)
0847d405 +0x1207:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d40a +0x120c:  lea    -0xe4(%ebp),%eax
0847d410 +0x1212:  mov    %eax,(%esp)
0847d413 +0x1215:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d418 +0x121a:  movl   $0xfa,0x4(%esp)
0847d420 +0x1222:  mov    %eax,(%esp)
0847d423 +0x1225:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d428 +0x122a:  mov    -0x34(%ebp),%eax
0847d42b +0x122d:  mov    0x12(%eax),%ebx
0847d42e +0x1230:  lea    -0xe4(%ebp),%eax
0847d434 +0x1236:  mov    %eax,(%esp)
0847d437 +0x1239:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d43c +0x123e:  mov    %ebx,0x4(%esp)
0847d440 +0x1242:  mov    %eax,(%esp)
0847d443 +0x1245:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d448 +0x124a:  lea    -0xe4(%ebp),%eax
0847d44e +0x1250:  mov    %eax,(%esp)
0847d451 +0x1253:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d456 +0x1258:  mov    %eax,(%esp)
0847d459 +0x125b:  call   0847de02 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x124>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x124
0847d45e +0x1260:  mov    %eax,-0x30(%ebp)
0847d461 +0x1263:  mov    -0x34(%ebp),%eax
0847d464 +0x1266:  movzbl 0x16(%eax),%edx
0847d468 +0x126a:  mov    -0x30(%ebp),%eax
0847d46b +0x126d:  mov    %dl,(%eax)
0847d46d +0x126f:  mov    -0x34(%ebp),%eax
0847d470 +0x1272:  mov    0x1b(%eax),%edx
0847d473 +0x1275:  mov    0x17(%eax),%eax
0847d476 +0x1278:  mov    -0x30(%ebp),%ecx
0847d479 +0x127b:  mov    %eax,0x1(%ecx)
0847d47c +0x127e:  mov    %edx,0x5(%ecx)
0847d47f +0x1281:  mov    -0x34(%ebp),%eax
0847d482 +0x1284:  mov    0x1f(%eax),%edx
0847d485 +0x1287:  mov    -0x30(%ebp),%eax
0847d488 +0x128a:  mov    %edx,0x9(%eax)
0847d48b +0x128d:  mov    -0x34(%ebp),%eax
0847d48e +0x1290:  mov    0x23(%eax),%edx
0847d491 +0x1293:  mov    -0x30(%ebp),%eax
0847d494 +0x1296:  mov    %edx,0xd(%eax)
0847d497 +0x1299:  mov    -0x34(%ebp),%eax
0847d49a +0x129c:  mov    0x27(%eax),%edx
0847d49d +0x129f:  mov    -0x30(%ebp),%eax
0847d4a0 +0x12a2:  mov    %edx,0x11(%eax)
0847d4a3 +0x12a5:  mov    -0x34(%ebp),%eax
0847d4a6 +0x12a8:  movzbl 0x2b(%eax),%edx
0847d4aa +0x12ac:  mov    -0x30(%ebp),%eax
0847d4ad +0x12af:  mov    %dl,0x15(%eax)
0847d4b0 +0x12b2:  mov    -0x34(%ebp),%eax
0847d4b3 +0x12b5:  mov    0x2c(%eax),%edx
0847d4b6 +0x12b8:  mov    -0x30(%ebp),%eax
0847d4b9 +0x12bb:  mov    %edx,0x16(%eax)
0847d4bc +0x12be:  mov    -0x34(%ebp),%eax
0847d4bf +0x12c1:  movzwl 0x30(%eax),%edx
0847d4c3 +0x12c5:  mov    -0x30(%ebp),%eax
0847d4c6 +0x12c8:  mov    %dx,0x1a(%eax)
0847d4ca +0x12cc:  mov    -0x34(%ebp),%eax
0847d4cd +0x12cf:  mov    0x32(%eax),%edx
0847d4d0 +0x12d2:  mov    -0x30(%ebp),%eax
0847d4d3 +0x12d5:  mov    %edx,0x1c(%eax)
0847d4d6 +0x12d8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d4db +0x12dd:  lea    -0xe4(%ebp),%edx
0847d4e1 +0x12e3:  mov    %edx,0x8(%esp)
0847d4e5 +0x12e7:  movl   $0x1,0x4(%esp)
0847d4ed +0x12ef:  mov    %eax,(%esp)
0847d4f0 +0x12f2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d4f5 +0x12f7:  jmp    0847d515 <+0x1317>
0847d4f7 +0x12f9:  mov    %edx,%ebx
0847d4f9 +0x12fb:  mov    %eax,%esi
0847d4fb +0x12fd:  lea    -0xe4(%ebp),%eax
0847d501 +0x1303:  mov    %eax,(%esp)
0847d504 +0x1306:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d509 +0x130b:  mov    %esi,%eax
0847d50b +0x130d:  mov    %ebx,%edx
0847d50d +0x130f:  mov    %eax,(%esp)
0847d510 +0x1312:  call   08ae3750 <_Unwind_Resume>
0847d515 +0x1317:  lea    -0xe4(%ebp),%eax
0847d51b +0x131d:  mov    %eax,(%esp)
0847d51e +0x1320:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d523 +0x1325:  jmp    0847dc8f <+0x1a91>
0847d528 +0x132a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d52d +0x132f:  movl   $0x15e5,0x8(%esp)
0847d535 +0x1337:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d53d +0x133f:  mov    %eax,(%esp)
0847d540 +0x1342:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d545 +0x1347:  movl   $0x1,0x8(%esp)
0847d54d +0x134f:  mov    %eax,0x4(%esp)
0847d551 +0x1353:  lea    -0xec(%ebp),%eax
0847d557 +0x1359:  mov    %eax,(%esp)
0847d55a +0x135c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d55f +0x1361:  lea    -0xec(%ebp),%eax
0847d565 +0x1367:  mov    %eax,(%esp)
0847d568 +0x136a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d56d +0x136f:  movl   $0xf9,0x4(%esp)
0847d575 +0x1377:  mov    %eax,(%esp)
0847d578 +0x137a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d57d +0x137f:  lea    -0xec(%ebp),%eax
0847d583 +0x1385:  mov    %eax,(%esp)
0847d586 +0x1388:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d58b +0x138d:  movl   $0xffffffff,0x4(%esp)
0847d593 +0x1395:  mov    %eax,(%esp)
0847d596 +0x1398:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d59b +0x139d:  lea    -0xec(%ebp),%eax
0847d5a1 +0x13a3:  mov    %eax,(%esp)
0847d5a4 +0x13a6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d5a9 +0x13ab:  mov    %eax,(%esp)
0847d5ac +0x13ae:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847d5b1 +0x13b3:  mov    %eax,-0x2c(%ebp)
0847d5b4 +0x13b6:  mov    -0x2c(%ebp),%eax
0847d5b7 +0x13b9:  movb   $0x1,0x4(%eax)
0847d5bb +0x13bd:  mov    -0x2c(%ebp),%eax
0847d5be +0x13c0:  movl   $0x1,(%eax)
0847d5c4 +0x13c6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d5c9 +0x13cb:  lea    -0xec(%ebp),%edx
0847d5cf +0x13d1:  mov    %edx,0x8(%esp)
0847d5d3 +0x13d5:  movl   $0x1,0x4(%esp)
0847d5db +0x13dd:  mov    %eax,(%esp)
0847d5de +0x13e0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d5e3 +0x13e5:  jmp    0847d603 <+0x1405>
0847d5e5 +0x13e7:  mov    %edx,%ebx
0847d5e7 +0x13e9:  mov    %eax,%esi
0847d5e9 +0x13eb:  lea    -0xec(%ebp),%eax
0847d5ef +0x13f1:  mov    %eax,(%esp)
0847d5f2 +0x13f4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d5f7 +0x13f9:  mov    %esi,%eax
0847d5f9 +0x13fb:  mov    %ebx,%edx
0847d5fb +0x13fd:  mov    %eax,(%esp)
0847d5fe +0x1400:  call   08ae3750 <_Unwind_Resume>
0847d603 +0x1405:  lea    -0xec(%ebp),%eax
0847d609 +0x140b:  mov    %eax,(%esp)
0847d60c +0x140e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d611 +0x1413:  jmp    0847dc8f <+0x1a91>
0847d616 +0x1418:  mov    0x8(%ebp),%eax
0847d619 +0x141b:  mov    %eax,-0x28(%ebp)
0847d61c +0x141e:  mov    -0x28(%ebp),%eax
0847d61f +0x1421:  movzbl 0x12(%eax),%eax
0847d623 +0x1425:  test   %al,%al
0847d625 +0x1427:  je     0847d719 <+0x151b>
0847d62b +0x142d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d630 +0x1432:  movl   $0x15fa,0x8(%esp)
0847d638 +0x143a:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d640 +0x1442:  mov    %eax,(%esp)
0847d643 +0x1445:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d648 +0x144a:  movl   $0x1,0x8(%esp)
0847d650 +0x1452:  mov    %eax,0x4(%esp)
0847d654 +0x1456:  lea    -0xf4(%ebp),%eax
0847d65a +0x145c:  mov    %eax,(%esp)
0847d65d +0x145f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d662 +0x1464:  lea    -0xf4(%ebp),%eax
0847d668 +0x146a:  mov    %eax,(%esp)
0847d66b +0x146d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d670 +0x1472:  movl   $0xf9,0x4(%esp)
0847d678 +0x147a:  mov    %eax,(%esp)
0847d67b +0x147d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d680 +0x1482:  lea    -0xf4(%ebp),%eax
0847d686 +0x1488:  mov    %eax,(%esp)
0847d689 +0x148b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d68e +0x1490:  movl   $0xffffffff,0x4(%esp)
0847d696 +0x1498:  mov    %eax,(%esp)
0847d699 +0x149b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d69e +0x14a0:  lea    -0xf4(%ebp),%eax
0847d6a4 +0x14a6:  mov    %eax,(%esp)
0847d6a7 +0x14a9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d6ac +0x14ae:  mov    %eax,(%esp)
0847d6af +0x14b1:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847d6b4 +0x14b6:  mov    %eax,-0x24(%ebp)
0847d6b7 +0x14b9:  mov    -0x24(%ebp),%eax
0847d6ba +0x14bc:  movl   $0x1,(%eax)
0847d6c0 +0x14c2:  mov    -0x24(%ebp),%eax
0847d6c3 +0x14c5:  movb   $0x1,0x4(%eax)
0847d6c7 +0x14c9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d6cc +0x14ce:  lea    -0xf4(%ebp),%edx
0847d6d2 +0x14d4:  mov    %edx,0x8(%esp)
0847d6d6 +0x14d8:  movl   $0x1,0x4(%esp)
0847d6de +0x14e0:  mov    %eax,(%esp)
0847d6e1 +0x14e3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d6e6 +0x14e8:  jmp    0847d706 <+0x1508>
0847d6e8 +0x14ea:  mov    %edx,%ebx
0847d6ea +0x14ec:  mov    %eax,%esi
0847d6ec +0x14ee:  lea    -0xf4(%ebp),%eax
0847d6f2 +0x14f4:  mov    %eax,(%esp)
0847d6f5 +0x14f7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d6fa +0x14fc:  mov    %esi,%eax
0847d6fc +0x14fe:  mov    %ebx,%edx
0847d6fe +0x1500:  mov    %eax,(%esp)
0847d701 +0x1503:  call   08ae3750 <_Unwind_Resume>
0847d706 +0x1508:  lea    -0xf4(%ebp),%eax
0847d70c +0x150e:  mov    %eax,(%esp)
0847d70f +0x1511:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d714 +0x1516:  jmp    0847dc8f <+0x1a91>
0847d719 +0x151b:  call   0863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>  ; Timer_CheckAuctionReady::RegistNextTimer()
0847d71e +0x1520:  jmp    0847dc8f <+0x1a91>
0847d723 +0x1525:  mov    0x8(%ebp),%eax
0847d726 +0x1528:  mov    %eax,-0x20(%ebp)
0847d729 +0x152b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d72e +0x1530:  movl   $0x1613,0x8(%esp)
0847d736 +0x1538:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d73e +0x1540:  mov    %eax,(%esp)
0847d741 +0x1543:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d746 +0x1548:  movl   $0x1,0x8(%esp)
0847d74e +0x1550:  mov    %eax,0x4(%esp)
0847d752 +0x1554:  lea    -0xfc(%ebp),%eax
0847d758 +0x155a:  mov    %eax,(%esp)
0847d75b +0x155d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d760 +0x1562:  lea    -0xfc(%ebp),%eax
0847d766 +0x1568:  mov    %eax,(%esp)
0847d769 +0x156b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d76e +0x1570:  movl   $0x2a5,0x4(%esp)
0847d776 +0x1578:  mov    %eax,(%esp)
0847d779 +0x157b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d77e +0x1580:  mov    -0x20(%ebp),%eax
0847d781 +0x1583:  mov    0xa(%eax),%ebx
0847d784 +0x1586:  lea    -0xfc(%ebp),%eax
0847d78a +0x158c:  mov    %eax,(%esp)
0847d78d +0x158f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d792 +0x1594:  mov    %ebx,0x4(%esp)
0847d796 +0x1598:  mov    %eax,(%esp)
0847d799 +0x159b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d79e +0x15a0:  mov    -0x20(%ebp),%eax
0847d7a1 +0x15a3:  movzwl 0x2(%eax),%eax
0847d7a5 +0x15a7:  movzwl %ax,%ebx
0847d7a8 +0x15aa:  lea    -0xfc(%ebp),%eax
0847d7ae +0x15b0:  mov    %eax,(%esp)
0847d7b1 +0x15b3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d7b6 +0x15b8:  mov    %ebx,0x8(%esp)
0847d7ba +0x15bc:  mov    -0x20(%ebp),%edx
0847d7bd +0x15bf:  mov    %edx,0x4(%esp)
0847d7c1 +0x15c3:  mov    %eax,(%esp)
0847d7c4 +0x15c6:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847d7c9 +0x15cb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d7ce +0x15d0:  lea    -0xfc(%ebp),%edx
0847d7d4 +0x15d6:  mov    %edx,0x8(%esp)
0847d7d8 +0x15da:  movl   $0x1,0x4(%esp)
0847d7e0 +0x15e2:  mov    %eax,(%esp)
0847d7e3 +0x15e5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d7e8 +0x15ea:  jmp    0847d808 <+0x160a>
0847d7ea +0x15ec:  mov    %edx,%ebx
0847d7ec +0x15ee:  mov    %eax,%esi
0847d7ee +0x15f0:  lea    -0xfc(%ebp),%eax
0847d7f4 +0x15f6:  mov    %eax,(%esp)
0847d7f7 +0x15f9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d7fc +0x15fe:  mov    %esi,%eax
0847d7fe +0x1600:  mov    %ebx,%edx
0847d800 +0x1602:  mov    %eax,(%esp)
0847d803 +0x1605:  call   08ae3750 <_Unwind_Resume>
0847d808 +0x160a:  lea    -0xfc(%ebp),%eax
0847d80e +0x1610:  mov    %eax,(%esp)
0847d811 +0x1613:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d816 +0x1618:  jmp    0847dc8f <+0x1a91>
0847d81b +0x161d:  mov    0x8(%ebp),%eax
0847d81e +0x1620:  mov    %eax,-0x1c(%ebp)
0847d821 +0x1623:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d826 +0x1628:  movl   $0x1620,0x8(%esp)
0847d82e +0x1630:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d836 +0x1638:  mov    %eax,(%esp)
0847d839 +0x163b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d83e +0x1640:  movl   $0x1,0x8(%esp)
0847d846 +0x1648:  mov    %eax,0x4(%esp)
0847d84a +0x164c:  lea    -0x104(%ebp),%eax
0847d850 +0x1652:  mov    %eax,(%esp)
0847d853 +0x1655:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d858 +0x165a:  lea    -0x104(%ebp),%eax
0847d85e +0x1660:  mov    %eax,(%esp)
0847d861 +0x1663:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d866 +0x1668:  movl   $0x2a6,0x4(%esp)
0847d86e +0x1670:  mov    %eax,(%esp)
0847d871 +0x1673:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d876 +0x1678:  mov    -0x1c(%ebp),%eax
0847d879 +0x167b:  mov    0xf(%eax),%ebx
0847d87c +0x167e:  lea    -0x104(%ebp),%eax
0847d882 +0x1684:  mov    %eax,(%esp)
0847d885 +0x1687:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d88a +0x168c:  mov    %ebx,0x4(%esp)
0847d88e +0x1690:  mov    %eax,(%esp)
0847d891 +0x1693:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d896 +0x1698:  mov    -0x1c(%ebp),%eax
0847d899 +0x169b:  movzwl 0x2(%eax),%eax
0847d89d +0x169f:  movzwl %ax,%ebx
0847d8a0 +0x16a2:  lea    -0x104(%ebp),%eax
0847d8a6 +0x16a8:  mov    %eax,(%esp)
0847d8a9 +0x16ab:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d8ae +0x16b0:  mov    %ebx,0x8(%esp)
0847d8b2 +0x16b4:  mov    -0x1c(%ebp),%edx
0847d8b5 +0x16b7:  mov    %edx,0x4(%esp)
0847d8b9 +0x16bb:  mov    %eax,(%esp)
0847d8bc +0x16be:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847d8c1 +0x16c3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d8c6 +0x16c8:  lea    -0x104(%ebp),%edx
0847d8cc +0x16ce:  mov    %edx,0x8(%esp)
0847d8d0 +0x16d2:  movl   $0x1,0x4(%esp)
0847d8d8 +0x16da:  mov    %eax,(%esp)
0847d8db +0x16dd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d8e0 +0x16e2:  jmp    0847d900 <+0x1702>
0847d8e2 +0x16e4:  mov    %edx,%ebx
0847d8e4 +0x16e6:  mov    %eax,%esi
0847d8e6 +0x16e8:  lea    -0x104(%ebp),%eax
0847d8ec +0x16ee:  mov    %eax,(%esp)
0847d8ef +0x16f1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d8f4 +0x16f6:  mov    %esi,%eax
0847d8f6 +0x16f8:  mov    %ebx,%edx
0847d8f8 +0x16fa:  mov    %eax,(%esp)
0847d8fb +0x16fd:  call   08ae3750 <_Unwind_Resume>
0847d900 +0x1702:  lea    -0x104(%ebp),%eax
0847d906 +0x1708:  mov    %eax,(%esp)
0847d909 +0x170b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d90e +0x1710:  jmp    0847dc8f <+0x1a91>
0847d913 +0x1715:  mov    0x8(%ebp),%eax
0847d916 +0x1718:  mov    %eax,-0x18(%ebp)
0847d919 +0x171b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847d91e +0x1720:  movl   $0x162c,0x8(%esp)
0847d926 +0x1728:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847d92e +0x1730:  mov    %eax,(%esp)
0847d931 +0x1733:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847d936 +0x1738:  movl   $0x1,0x8(%esp)
0847d93e +0x1740:  mov    %eax,0x4(%esp)
0847d942 +0x1744:  lea    -0x10c(%ebp),%eax
0847d948 +0x174a:  mov    %eax,(%esp)
0847d94b +0x174d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847d950 +0x1752:  lea    -0x10c(%ebp),%eax
0847d956 +0x1758:  mov    %eax,(%esp)
0847d959 +0x175b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d95e +0x1760:  movl   $0x2a7,0x4(%esp)
0847d966 +0x1768:  mov    %eax,(%esp)
0847d969 +0x176b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d96e +0x1770:  mov    -0x18(%ebp),%eax
0847d971 +0x1773:  mov    0xa(%eax),%ebx
0847d974 +0x1776:  lea    -0x10c(%ebp),%eax
0847d97a +0x177c:  mov    %eax,(%esp)
0847d97d +0x177f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847d982 +0x1784:  mov    %ebx,0x4(%esp)
0847d986 +0x1788:  mov    %eax,(%esp)
0847d989 +0x178b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847d98e +0x1790:  mov    -0x18(%ebp),%eax
0847d991 +0x1793:  movzwl 0x2(%eax),%eax
0847d995 +0x1797:  movzwl %ax,%ebx
0847d998 +0x179a:  lea    -0x10c(%ebp),%eax
0847d99e +0x17a0:  mov    %eax,(%esp)
0847d9a1 +0x17a3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847d9a6 +0x17a8:  mov    %ebx,0x8(%esp)
0847d9aa +0x17ac:  mov    -0x18(%ebp),%edx
0847d9ad +0x17af:  mov    %edx,0x4(%esp)
0847d9b1 +0x17b3:  mov    %eax,(%esp)
0847d9b4 +0x17b6:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847d9b9 +0x17bb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847d9be +0x17c0:  lea    -0x10c(%ebp),%edx
0847d9c4 +0x17c6:  mov    %edx,0x8(%esp)
0847d9c8 +0x17ca:  movl   $0x1,0x4(%esp)
0847d9d0 +0x17d2:  mov    %eax,(%esp)
0847d9d3 +0x17d5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847d9d8 +0x17da:  jmp    0847d9f8 <+0x17fa>
0847d9da +0x17dc:  mov    %edx,%ebx
0847d9dc +0x17de:  mov    %eax,%esi
0847d9de +0x17e0:  lea    -0x10c(%ebp),%eax
0847d9e4 +0x17e6:  mov    %eax,(%esp)
0847d9e7 +0x17e9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847d9ec +0x17ee:  mov    %esi,%eax
0847d9ee +0x17f0:  mov    %ebx,%edx
0847d9f0 +0x17f2:  mov    %eax,(%esp)
0847d9f3 +0x17f5:  call   08ae3750 <_Unwind_Resume>
0847d9f8 +0x17fa:  lea    -0x10c(%ebp),%eax
0847d9fe +0x1800:  mov    %eax,(%esp)
0847da01 +0x1803:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847da06 +0x1808:  jmp    0847dc8f <+0x1a91>
0847da0b +0x180d:  mov    0x8(%ebp),%eax
0847da0e +0x1810:  mov    %eax,-0x14(%ebp)
0847da11 +0x1813:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847da16 +0x1818:  movl   $0x1638,0x8(%esp)
0847da1e +0x1820:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847da26 +0x1828:  mov    %eax,(%esp)
0847da29 +0x182b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847da2e +0x1830:  movl   $0x1,0x8(%esp)
0847da36 +0x1838:  mov    %eax,0x4(%esp)
0847da3a +0x183c:  lea    -0x114(%ebp),%eax
0847da40 +0x1842:  mov    %eax,(%esp)
0847da43 +0x1845:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847da48 +0x184a:  lea    -0x114(%ebp),%eax
0847da4e +0x1850:  mov    %eax,(%esp)
0847da51 +0x1853:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847da56 +0x1858:  movl   $0x2a8,0x4(%esp)
0847da5e +0x1860:  mov    %eax,(%esp)
0847da61 +0x1863:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847da66 +0x1868:  lea    -0x114(%ebp),%eax
0847da6c +0x186e:  mov    %eax,(%esp)
0847da6f +0x1871:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847da74 +0x1876:  movl   $0xffffffff,0x4(%esp)
0847da7c +0x187e:  mov    %eax,(%esp)
0847da7f +0x1881:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847da84 +0x1886:  mov    -0x14(%ebp),%eax
0847da87 +0x1889:  movzwl 0x2(%eax),%eax
0847da8b +0x188d:  movzwl %ax,%ebx
0847da8e +0x1890:  lea    -0x114(%ebp),%eax
0847da94 +0x1896:  mov    %eax,(%esp)
0847da97 +0x1899:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847da9c +0x189e:  mov    %ebx,0x8(%esp)
0847daa0 +0x18a2:  mov    -0x14(%ebp),%edx
0847daa3 +0x18a5:  mov    %edx,0x4(%esp)
0847daa7 +0x18a9:  mov    %eax,(%esp)
0847daaa +0x18ac:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847daaf +0x18b1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847dab4 +0x18b6:  lea    -0x114(%ebp),%edx
0847daba +0x18bc:  mov    %edx,0x8(%esp)
0847dabe +0x18c0:  movl   $0x1,0x4(%esp)
0847dac6 +0x18c8:  mov    %eax,(%esp)
0847dac9 +0x18cb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847dace +0x18d0:  jmp    0847daee <+0x18f0>
0847dad0 +0x18d2:  mov    %edx,%ebx
0847dad2 +0x18d4:  mov    %eax,%esi
0847dad4 +0x18d6:  lea    -0x114(%ebp),%eax
0847dada +0x18dc:  mov    %eax,(%esp)
0847dadd +0x18df:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847dae2 +0x18e4:  mov    %esi,%eax
0847dae4 +0x18e6:  mov    %ebx,%edx
0847dae6 +0x18e8:  mov    %eax,(%esp)
0847dae9 +0x18eb:  call   08ae3750 <_Unwind_Resume>
0847daee +0x18f0:  lea    -0x114(%ebp),%eax
0847daf4 +0x18f6:  mov    %eax,(%esp)
0847daf7 +0x18f9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847dafc +0x18fe:  jmp    0847dc8f <+0x1a91>
0847db01 +0x1903:  mov    0x8(%ebp),%eax
0847db04 +0x1906:  mov    %eax,-0x10(%ebp)
0847db07 +0x1909:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847db0c +0x190e:  movl   $0x1646,0x8(%esp)
0847db14 +0x1916:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847db1c +0x191e:  mov    %eax,(%esp)
0847db1f +0x1921:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847db24 +0x1926:  movl   $0x1,0x8(%esp)
0847db2c +0x192e:  mov    %eax,0x4(%esp)
0847db30 +0x1932:  lea    -0x11c(%ebp),%eax
0847db36 +0x1938:  mov    %eax,(%esp)
0847db39 +0x193b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847db3e +0x1940:  lea    -0x11c(%ebp),%eax
0847db44 +0x1946:  mov    %eax,(%esp)
0847db47 +0x1949:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847db4c +0x194e:  movl   $0x2da,0x4(%esp)
0847db54 +0x1956:  mov    %eax,(%esp)
0847db57 +0x1959:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847db5c +0x195e:  mov    -0x10(%ebp),%eax
0847db5f +0x1961:  mov    0x12(%eax),%ebx
0847db62 +0x1964:  lea    -0x11c(%ebp),%eax
0847db68 +0x196a:  mov    %eax,(%esp)
0847db6b +0x196d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847db70 +0x1972:  mov    %ebx,0x4(%esp)
0847db74 +0x1976:  mov    %eax,(%esp)
0847db77 +0x1979:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847db7c +0x197e:  lea    -0x11c(%ebp),%eax
0847db82 +0x1984:  mov    %eax,(%esp)
0847db85 +0x1987:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847db8a +0x198c:  mov    %eax,(%esp)
0847db8d +0x198f:  call   0847de18 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x13a>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x13a
0847db92 +0x1994:  mov    %eax,-0xc(%ebp)
0847db95 +0x1997:  mov    -0x10(%ebp),%eax
0847db98 +0x199a:  mov    0x1a(%eax),%edx
0847db9b +0x199d:  mov    0x16(%eax),%eax
0847db9e +0x19a0:  mov    -0xc(%ebp),%ecx
0847dba1 +0x19a3:  mov    %eax,0x4(%ecx)
0847dba4 +0x19a6:  mov    %edx,0x8(%ecx)
0847dba7 +0x19a9:  mov    -0x10(%ebp),%eax
0847dbaa +0x19ac:  mov    0x1f(%eax),%edx
0847dbad +0x19af:  mov    -0xc(%ebp),%eax
0847dbb0 +0x19b2:  mov    %edx,0xd(%eax)
0847dbb3 +0x19b5:  mov    -0x10(%ebp),%eax
0847dbb6 +0x19b8:  mov    0x23(%eax),%edx
0847dbb9 +0x19bb:  mov    -0xc(%ebp),%eax
0847dbbc +0x19be:  mov    %edx,0x11(%eax)
0847dbbf +0x19c1:  mov    -0x10(%ebp),%eax
0847dbc2 +0x19c4:  lea    0x27(%eax),%edx
0847dbc5 +0x19c7:  mov    -0xc(%ebp),%eax
0847dbc8 +0x19ca:  add    $0x15,%eax
0847dbcb +0x19cd:  mov    %edx,0x4(%esp)
0847dbcf +0x19d1:  mov    %eax,(%esp)
0847dbd2 +0x19d4:  call   0807def0 <_init+0x7e8>
0847dbd7 +0x19d9:  mov    -0x10(%ebp),%eax
0847dbda +0x19dc:  mov    0x12(%eax),%edx
0847dbdd +0x19df:  mov    -0xc(%ebp),%eax
0847dbe0 +0x19e2:  mov    %edx,(%eax)
0847dbe2 +0x19e4:  mov    -0x10(%ebp),%eax
0847dbe5 +0x19e7:  movzbl 0x1e(%eax),%edx
0847dbe9 +0x19eb:  mov    -0xc(%ebp),%eax
0847dbec +0x19ee:  mov    %dl,0xc(%eax)
0847dbef +0x19f1:  mov    -0x10(%ebp),%eax
0847dbf2 +0x19f4:  mov    0x38(%eax),%edx
0847dbf5 +0x19f7:  mov    -0xc(%ebp),%eax
0847dbf8 +0x19fa:  mov    %edx,0x26(%eax)
0847dbfb +0x19fd:  mov    -0x10(%ebp),%eax
0847dbfe +0x1a00:  mov    0x34(%eax),%edx
0847dc01 +0x1a03:  mov    -0xc(%ebp),%eax
0847dc04 +0x1a06:  mov    %edx,0x22(%eax)
0847dc07 +0x1a09:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847dc0c +0x1a0e:  lea    -0x11c(%ebp),%edx
0847dc12 +0x1a14:  mov    %edx,0x8(%esp)
0847dc16 +0x1a18:  movl   $0x1,0x4(%esp)
0847dc1e +0x1a20:  mov    %eax,(%esp)
0847dc21 +0x1a23:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847dc26 +0x1a28:  jmp    0847dc46 <+0x1a48>
0847dc28 +0x1a2a:  mov    %edx,%ebx
0847dc2a +0x1a2c:  mov    %eax,%esi
0847dc2c +0x1a2e:  lea    -0x11c(%ebp),%eax
0847dc32 +0x1a34:  mov    %eax,(%esp)
0847dc35 +0x1a37:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847dc3a +0x1a3c:  mov    %esi,%eax
0847dc3c +0x1a3e:  mov    %ebx,%edx
0847dc3e +0x1a40:  mov    %eax,(%esp)
0847dc41 +0x1a43:  call   08ae3750 <_Unwind_Resume>
0847dc46 +0x1a48:  lea    -0x11c(%ebp),%eax
0847dc4c +0x1a4e:  mov    %eax,(%esp)
0847dc4f +0x1a51:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847dc54 +0x1a56:  jmp    0847dc8f <+0x1a91>
0847dc56 +0x1a58:  mov    -0x8c(%ebp),%eax
0847dc5c +0x1a5e:  mov    %eax,0x14(%esp)
0847dc60 +0x1a62:  movl   $"[AUCTION PACKET ERROR] not exist packet id (%d)",0x10(%esp)
0847dc68 +0x1a6a:  movl   $0x166f,0xc(%esp)
0847dc70 +0x1a72:  movl   $&_ZZN21CDispatchServerPacket19dispatchPointPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847dc78 +0x1a7a:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847dc80 +0x1a82:  movl   $0x1,(%esp)
0847dc87 +0x1a89:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847dc8c +0x1a8e:  jmp    0847dc8f <+0x1a91>
0847dc8e +0x1a90:  nop
0847dc8f +0x1a91:  mov    $0x1,%eax
0847dc94 +0x1a96:  add    $0x140,%esp
0847dc9a +0x1a9c:  pop    %ebx
0847dc9b +0x1a9d:  pop    %esi
0847dc9c +0x1a9e:  pop    %ebp
0847dc9d +0x1a9f:  ret
```

## 反编译 C

```c
// CDispatchServerPacket::dispatchPointPacket @ 0x847c1fe

/* CDispatchServerPacket::dispatchPointPacket(char*) */

undefined4 CDispatchServerPacket::dispatchPointPacket(char *param_1)

{
  char *pcVar1;
  uchar uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  size_t __n;
  int iVar9;
  int iVar10;
  CStreamGuard local_120 [8];
  CStreamGuard local_118 [8];
  CStreamGuard local_110 [8];
  CStreamGuard local_108 [8];
  CStreamGuard local_100 [8];
  CStreamGuard local_f8 [8];
  CStreamGuard local_f0 [8];
  CStreamGuard local_e8 [8];
  CStreamGuard local_e0 [8];
  CStreamGuard local_d8 [8];
  CStreamGuard local_d0 [8];
  CStreamGuard local_c8 [8];
  CStreamGuard local_c0 [8];
  CStreamGuard local_b8 [8];
  CStreamGuard local_b0 [8];
  CStreamGuard local_a8 [8];
  CStreamGuard local_a0 [8];
  CStreamGuard local_98 [8];
  uint local_90;
  int local_8c;
  char *local_88;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_84;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_80;
  char *local_7c;
  SIG_AUCTION_RESULT_ASK_PRICE *local_78;
  int local_74;
  char *local_70;
  SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *local_6c;
  char *local_68;
  SIG_AUCTION_RESULT_REGIST *local_64;
  char *local_60;
  SIG_AUCTION_RESULT_BIDDING *local_5c;
  char *local_58;
  SIG_AUCTION_RESULT_REGIST_CANCEL *local_54;
  char *local_50;
  int local_4c;
  char *local_48;
  int local_44;
  char *local_40;
  int local_3c;
  char *local_38;
  SIG_AUCTION_LOG_MESSAGE_PG *local_34;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_30;
  char *local_2c;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  SIG_AUCTION_OWNER_IS_VIP *local_10;
  
  local_90 = nsl::PACKET_HEADER::getPacketID((PACKET_HEADER *)param_1);
  local_8c = nsl::PACKET_HEADER::getCategory((PACKET_HEADER *)param_1);
  if (local_8c == 0x13) {
    if (local_90 == 9) {
      local_40 = param_1;
      pSVar7 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x15a6);
      CStreamGuard::CStreamGuard(local_e0,pSVar7,true);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
                    /* try { // try from 0847d183 to 0847d399 has its CatchHandler @ 0847d39c */
      CStreamGuard::operator<<(pCVar8,0xf7);
      iVar9 = *(int *)(local_40 + 0x12);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar8,iVar9);
      iVar9 = *(int *)(local_40 + 0x16);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar8,iVar9);
      uVar2 = local_40[0x1a];
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar8,uVar2);
      local_3c = (uint)*(ushort *)(local_40 + 0x1b) * 0x7d + 2;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar9 = Stream::in_ptr(pSVar7);
      iVar9 = iVar9 + local_3c;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar10 = Stream::size(pSVar7);
      if (iVar10 < iVar9) {
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
        pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
        iVar9 = Stream::in_ptr(pSVar7);
        iVar9 = iVar9 + local_3c;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
        pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
        Stream::resize(pSVar7,iVar9);
      }
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar9 = Stream::in_ptr(pSVar7);
      iVar9 = iVar9 + local_3c;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar10 = Stream::size(pSVar7);
      if (iVar10 < iVar9) {
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
        CStreamGuard::operator<<(pCVar8,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x15bd,
                   "onAUCTION_MY_BIDDING_INFO_PG, resize failed.");
      }
      else {
        uVar4 = *(ushort *)(local_40 + 0x1b);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
        CStreamGuard::operator<<(pCVar8,uVar4);
        uVar4 = *(ushort *)(local_40 + 0x1b);
        pcVar1 = local_40 + 0x1d;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
        CStreamGuard::put_binary(pCVar8,pcVar1,(uint)uVar4 * 0x7d);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e0);
      CStreamGuard::~CStreamGuard(local_e0);
    }
    else {
      if (local_90 < 10) {
        if (local_90 == 4) {
          local_68 = param_1;
          pSVar7 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1523);
          CStreamGuard::CStreamGuard(local_b8,pSVar7,true);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
                    /* try { // try from 0847c886 to 0847c911 has its CatchHandler @ 0847c914 */
          CStreamGuard::operator<<(pCVar8,0xf2);
          iVar9 = *(int *)(local_68 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
          CStreamGuard::operator<<(pCVar8,iVar9);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_b8);
          local_64 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST>(pCVar8);
          *(undefined4 *)(local_64 + 4) = *(undefined4 *)(local_68 + 0x16);
          local_64[8] = *(SIG_AUCTION_RESULT_REGIST *)(local_68 + 0x1a);
          local_64[9] = *(SIG_AUCTION_RESULT_REGIST *)(local_68 + 0x1b);
          *(undefined4 *)local_64 = 1;
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b8);
          CStreamGuard::~CStreamGuard(local_b8);
          return 1;
        }
        if (local_90 < 5) {
          if (local_90 == 1) {
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x14d5
                                        );
            CStreamGuard::CStreamGuard(local_a0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
                    /* try { // try from 0847c500 to 0847c56a has its CatchHandler @ 0847c56d */
            CStreamGuard::operator<<(pCVar8,0xf9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_a0);
            local_80 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
            local_80[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x0;
            *(undefined4 *)local_80 = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a0);
            CStreamGuard::~CStreamGuard(local_a0);
            return 1;
          }
          if (local_90 == 0) {
            local_88 = param_1;
            if (*(int *)(param_1 + 0xe) == 0) {
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x14b4);
              CStreamGuard::CStreamGuard(local_98,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_98);
                    /* try { // try from 0847c38a to 0847c3f4 has its CatchHandler @ 0847c3f7 */
              CStreamGuard::operator<<(pCVar8,0xf9);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_98);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_98);
              local_84 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
              *(undefined4 *)local_84 = 1;
              local_84[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_98);
              CStreamGuard::~CStreamGuard(local_98);
              return 1;
            }
            if (*(int *)(param_1 + 0xe) == 2) {
              Timer_CheckAuctionReady::RegistNextTimer();
              return 1;
            }
            if (*(int *)(param_1 + 0xe) == 1) {
              LogManager::logFormat
                        (1,"DispatchServerPacket.cpp",
                         "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x14c8,
                         "AUCTION REGIST SERVER ID DUPLICATE");
              return 1;
            }
            LogManager::logFormat
                      (1,"DispatchServerPacket.cpp",
                       "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x14cc,
                       "AUCTION REGIST UNHANDLED ERROR");
            return 1;
          }
          if (local_90 == 2) {
            local_7c = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x14e9
                                        );
            CStreamGuard::CStreamGuard(local_a8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
                    /* try { // try from 0847c5f4 to 0847c6a8 has its CatchHandler @ 0847c6ab */
            CStreamGuard::operator<<(pCVar8,0xf0);
            iVar9 = *(int *)(local_7c + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_a8);
            local_78 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_PRICE>(pCVar8);
            *(undefined4 *)local_78 = 1;
            *(undefined4 *)(local_78 + 4) = *(undefined4 *)(local_7c + 0x16);
            *(undefined4 *)(local_78 + 8) = *(undefined4 *)(local_7c + 0x1a);
            for (local_74 = 0; local_74 < 3; local_74 = local_74 + 1) {
              *(undefined4 *)(local_78 + local_74 * 4 + 0xc) = 0;
              *(undefined4 *)(local_78 + (local_74 + 4) * 4 + 8) = 0;
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a8);
            CStreamGuard::~CStreamGuard(local_a8);
            return 1;
          }
          if (local_90 == 3) {
            local_70 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1502
                                        );
            CStreamGuard::CStreamGuard(local_b0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
                    /* try { // try from 0847c732 to 0847c7fc has its CatchHandler @ 0847c7ff */
            CStreamGuard::operator<<(pCVar8,0xf1);
            iVar9 = *(int *)(local_70 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_b0);
            local_6c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM>(pCVar8);
            *(undefined4 *)(local_6c + 4) = *(undefined4 *)(local_70 + 0x16);
            *(undefined2 *)(local_6c + 8) = *(undefined2 *)(local_70 + 0x1a);
            local_6c[10] = *(SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *)(local_70 + 0x1c);
            *(undefined2 *)(local_6c + 0xb) = *(undefined2 *)(local_70 + 0x1d);
            *(undefined4 *)(local_6c + 0xd) = *(undefined4 *)(local_70 + 0x1f);
            *(undefined4 *)(local_6c + 0x11) = *(undefined4 *)(local_70 + 0x23);
            *(undefined4 *)(local_6c + 0x15) = *(undefined4 *)(local_70 + 0x27);
            *(undefined4 *)(local_6c + 0x19) = *(undefined4 *)(local_70 + 0x2b);
            *(undefined4 *)local_6c = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b0);
            CStreamGuard::~CStreamGuard(local_b0);
            return 1;
          }
        }
        else {
          if (local_90 == 6) {
            local_58 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x154e
                                        );
            CStreamGuard::CStreamGuard(local_c8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
                    /* try { // try from 0847cb04 to 0847cb8f has its CatchHandler @ 0847cb92 */
            CStreamGuard::operator<<(pCVar8,0xf4);
            iVar9 = *(int *)(local_58 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
            local_54 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST_CANCEL>(pCVar8);
            *(undefined4 *)(local_54 + 4) = *(undefined4 *)(local_58 + 0x16);
            local_54[8] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_58 + 0x1a);
            local_54[9] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_58 + 0x1b);
            *(undefined4 *)local_54 = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c8);
            CStreamGuard::~CStreamGuard(local_c8);
            return 1;
          }
          if (local_90 < 6) {
            local_60 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1536
                                        );
            CStreamGuard::CStreamGuard(local_c0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
                    /* try { // try from 0847c99b to 0847ca7a has its CatchHandler @ 0847ca7d */
            CStreamGuard::operator<<(pCVar8,0xf3);
            iVar9 = *(int *)(local_60 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
            local_5c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_BIDDING>(pCVar8);
            *(undefined4 *)(local_5c + 4) = *(undefined4 *)(local_60 + 0x16);
            *(undefined4 *)(local_5c + 8) = *(undefined4 *)(local_60 + 0x1a);
            local_5c[0xc] = *(SIG_AUCTION_RESULT_BIDDING *)(local_60 + 0x1e);
            local_5c[0xd] = *(SIG_AUCTION_RESULT_BIDDING *)(local_60 + 0x1f);
            uVar5 = *(undefined4 *)(local_60 + 0x24);
            *(undefined4 *)(local_5c + 0xe) = *(undefined4 *)(local_60 + 0x20);
            *(undefined4 *)(local_5c + 0x12) = uVar5;
            *(undefined4 *)local_5c = 1;
            __n = strlen(local_60 + 0x28);
            strncpy((char *)(local_5c + 0x16),local_60 + 0x28,__n);
            *(undefined4 *)(local_5c + 0x36) = *(undefined4 *)(local_60 + 0x48);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c0);
            CStreamGuard::~CStreamGuard(local_c0);
            return 1;
          }
          if (local_90 == 7) {
            local_50 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1561
                                        );
            CStreamGuard::CStreamGuard(local_d0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
                    /* try { // try from 0847cc19 to 0847ce55 has its CatchHandler @ 0847ce58 */
            CStreamGuard::operator<<(pCVar8,0xf5);
            iVar9 = *(int *)(local_50 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            iVar9 = *(int *)(local_50 + 0x16);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            uVar2 = local_50[0x1a];
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,uVar2);
            uVar6 = *(uint *)(local_50 + 0x1b);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,uVar6);
            local_4c = (uint)*(ushort *)(local_50 + 0x1f) * 0x89 + 2;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_4c;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              iVar9 = Stream::in_ptr(pSVar7);
              iVar9 = iVar9 + local_4c;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              Stream::resize(pSVar7,iVar9);
            }
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_4c;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
              CStreamGuard::operator<<(pCVar8,0);
              LogManager::logFormat
                        (1,"DispatchServerPacket.cpp",
                         "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x1579,
                         "onAUCTION_ITEM_LIST_PG, resize failed.");
            }
            else {
              uVar4 = *(ushort *)(local_50 + 0x1f);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
              CStreamGuard::operator<<(pCVar8,uVar4);
              uVar4 = *(ushort *)(local_50 + 0x1f);
              pcVar1 = local_50 + 0x21;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
              CStreamGuard::put_binary(pCVar8,pcVar1,(uint)uVar4 * 0x89);
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d0);
            CStreamGuard::~CStreamGuard(local_d0);
            return 1;
          }
          if (local_90 == 8) {
            local_48 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1584
                                        );
            CStreamGuard::CStreamGuard(local_d8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
                    /* try { // try from 0847cedf to 0847d0f9 has its CatchHandler @ 0847d0fc */
            CStreamGuard::operator<<(pCVar8,0xf6);
            iVar9 = *(int *)(local_48 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            iVar9 = *(int *)(local_48 + 0x16);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            uVar2 = local_48[0x1a];
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
            CStreamGuard::operator<<(pCVar8,uVar2);
            local_44 = (uint)(byte)local_48[0x1b] * 0x75 + 1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_44;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              iVar9 = Stream::in_ptr(pSVar7);
              iVar9 = iVar9 + local_44;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              Stream::resize(pSVar7,iVar9);
            }
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_44;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
              CStreamGuard::operator<<(pCVar8,0);
              LogManager::logFormat
                        (1,"DispatchServerPacket.cpp",
                         "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x159b,
                         "onAUCTION_MY_REGISTED_ITEM_INFO_PG, resize failed.");
            }
            else {
              pcVar1 = local_48 + 0x1b;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              CStreamGuard::put_binary(pCVar8,pcVar1,1);
              bVar3 = local_48[0x1b];
              pcVar1 = local_48 + 0x1c;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              CStreamGuard::put_binary(pCVar8,pcVar1,(uint)bVar3 * 0x75);
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d8);
            CStreamGuard::~CStreamGuard(local_d8);
            return 1;
          }
        }
      }
      else {
        if (local_90 == 0xe) {
          local_14 = param_1;
          pSVar7 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1646);
          CStreamGuard::CStreamGuard(local_120,pSVar7,true);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_120);
                    /* try { // try from 0847db57 to 0847dc25 has its CatchHandler @ 0847dc28 */
          CStreamGuard::operator<<(pCVar8,0x2da);
          iVar9 = *(int *)(local_14 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_120);
          CStreamGuard::operator<<(pCVar8,iVar9);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_120);
          local_10 = CStreamGuard::GetInBuffer<SIG_AUCTION_OWNER_IS_VIP>(pCVar8);
          uVar5 = *(undefined4 *)(local_14 + 0x1a);
          *(undefined4 *)(local_10 + 4) = *(undefined4 *)(local_14 + 0x16);
          *(undefined4 *)(local_10 + 8) = uVar5;
          *(undefined4 *)(local_10 + 0xd) = *(undefined4 *)(local_14 + 0x1f);
          *(undefined4 *)(local_10 + 0x11) = *(undefined4 *)(local_14 + 0x23);
          strcpy((char *)(local_10 + 0x15),local_14 + 0x27);
          *(undefined4 *)local_10 = *(undefined4 *)(local_14 + 0x12);
          local_10[0xc] = *(SIG_AUCTION_OWNER_IS_VIP *)(local_14 + 0x1e);
          *(undefined4 *)(local_10 + 0x26) = *(undefined4 *)(local_14 + 0x38);
          *(undefined4 *)(local_10 + 0x22) = *(undefined4 *)(local_14 + 0x34);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_120);
          CStreamGuard::~CStreamGuard(local_120);
          return 1;
        }
        if (local_90 < 0xf) {
          if (local_90 == 0xb) {
            local_38 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x15ce
                                        );
            CStreamGuard::CStreamGuard(local_e8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
                    /* try { // try from 0847d423 to 0847d4f4 has its CatchHandler @ 0847d4f7 */
            CStreamGuard::operator<<(pCVar8,0xfa);
            iVar9 = *(int *)(local_38 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e8);
            local_34 = CStreamGuard::GetInBuffer<SIG_AUCTION_LOG_MESSAGE_PG>(pCVar8);
            *local_34 = *(SIG_AUCTION_LOG_MESSAGE_PG *)(local_38 + 0x16);
            uVar5 = *(undefined4 *)(local_38 + 0x1b);
            *(undefined4 *)(local_34 + 1) = *(undefined4 *)(local_38 + 0x17);
            *(undefined4 *)(local_34 + 5) = uVar5;
            *(undefined4 *)(local_34 + 9) = *(undefined4 *)(local_38 + 0x1f);
            *(undefined4 *)(local_34 + 0xd) = *(undefined4 *)(local_38 + 0x23);
            *(undefined4 *)(local_34 + 0x11) = *(undefined4 *)(local_38 + 0x27);
            local_34[0x15] = *(SIG_AUCTION_LOG_MESSAGE_PG *)(local_38 + 0x2b);
            *(undefined4 *)(local_34 + 0x16) = *(undefined4 *)(local_38 + 0x2c);
            *(undefined2 *)(local_34 + 0x1a) = *(undefined2 *)(local_38 + 0x30);
            *(undefined4 *)(local_34 + 0x1c) = *(undefined4 *)(local_38 + 0x32);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e8);
            CStreamGuard::~CStreamGuard(local_e8);
            return 1;
          }
          if (local_90 < 0xb) {
            return 1;
          }
          if (local_90 == 0xc) {
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x15e5
                                        );
            CStreamGuard::CStreamGuard(local_f0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
                    /* try { // try from 0847d578 to 0847d5e2 has its CatchHandler @ 0847d5e5 */
            CStreamGuard::operator<<(pCVar8,0xf9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_f0);
            local_30 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
            local_30[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
            *(undefined4 *)local_30 = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f0);
            CStreamGuard::~CStreamGuard(local_f0);
            return 1;
          }
          if (local_90 == 0xd) {
            local_2c = param_1;
            if (param_1[0x12] != '\0') {
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x15fa);
              CStreamGuard::CStreamGuard(local_f8,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f8);
                    /* try { // try from 0847d67b to 0847d6e5 has its CatchHandler @ 0847d6e8 */
              CStreamGuard::operator<<(pCVar8,0xf9);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f8);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_f8);
              local_28 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
              *(undefined4 *)local_28 = 1;
              local_28[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f8);
              CStreamGuard::~CStreamGuard(local_f8);
              return 1;
            }
            Timer_CheckAuctionReady::RegistNextTimer();
            return 1;
          }
        }
        else {
          if (local_90 == 0x2719) {
            local_20 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1620
                                        );
            CStreamGuard::CStreamGuard(local_108,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_108);
                    /* try { // try from 0847d871 to 0847d8df has its CatchHandler @ 0847d8e2 */
            CStreamGuard::operator<<(pCVar8,0x2a6);
            iVar9 = *(int *)(local_20 + 0xf);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_108);
            CStreamGuard::operator<<(pCVar8,iVar9);
            uVar4 = *(ushort *)(local_20 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_108);
            CStreamGuard::put_binary(pCVar8,local_20,(uint)uVar4);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_108);
            CStreamGuard::~CStreamGuard(local_108);
            return 1;
          }
          if (local_90 < 0x271a) {
            if (local_90 == 0x2718) {
              local_24 = param_1;
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x1613);
              CStreamGuard::CStreamGuard(local_100,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_100);
                    /* try { // try from 0847d779 to 0847d7e7 has its CatchHandler @ 0847d7ea */
              CStreamGuard::operator<<(pCVar8,0x2a5);
              iVar9 = *(int *)(local_24 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_100);
              CStreamGuard::operator<<(pCVar8,iVar9);
              uVar4 = *(ushort *)(local_24 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_100);
              CStreamGuard::put_binary(pCVar8,local_24,(uint)uVar4);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_100);
              CStreamGuard::~CStreamGuard(local_100);
              return 1;
            }
          }
          else {
            if (local_90 == 0x271a) {
              local_1c = param_1;
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x162c);
              CStreamGuard::CStreamGuard(local_110,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_110);
                    /* try { // try from 0847d969 to 0847d9d7 has its CatchHandler @ 0847d9da */
              CStreamGuard::operator<<(pCVar8,0x2a7);
              iVar9 = *(int *)(local_1c + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_110);
              CStreamGuard::operator<<(pCVar8,iVar9);
              uVar4 = *(ushort *)(local_1c + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_110);
              CStreamGuard::put_binary(pCVar8,local_1c,(uint)uVar4);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_110);
              CStreamGuard::~CStreamGuard(local_110);
              return 1;
            }
            if (local_90 == 0x271b) {
              local_18 = param_1;
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x1638);
              CStreamGuard::CStreamGuard(local_118,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_118);
                    /* try { // try from 0847da61 to 0847dacd has its CatchHandler @ 0847dad0 */
              CStreamGuard::operator<<(pCVar8,0x2a8);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_118);
              CStreamGuard::operator<<(pCVar8,-1);
              uVar4 = *(ushort *)(local_18 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_118);
              CStreamGuard::put_binary(pCVar8,local_18,(uint)uVar4);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_118);
              CStreamGuard::~CStreamGuard(local_118);
              return 1;
            }
          }
        }
      }
      LogManager::logFormat
                (1,"DispatchServerPacket.cpp",
                 "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x166f,
                 "[AUCTION PACKET ERROR] not exist packet id (%d)",local_90);
    }
  }
  return 1;
}
```
