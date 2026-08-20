# dispatch

`_ZN14DispatchThread8dispatchEPv`

`DispatchThread::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `DispatchThread` | `0x0847e2d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847e2d2  _ZN14DispatchThread8dispatchEPv
#           DispatchThread::dispatch(void*)
# range [0x0847e2d2, 0x0847e7ff]
0847e2d2 +0x000:  push   %ebp
0847e2d3 +0x001:  mov    %esp,%ebp
0847e2d5 +0x003:  push   %edi
0847e2d6 +0x004:  push   %esi
0847e2d7 +0x005:  push   %ebx
0847e2d8 +0x006:  sub    $0x1fc,%esp
0847e2de +0x00c:  lea    -0x90(%ebp),%eax
0847e2e4 +0x012:  mov    %eax,(%esp)
0847e2e7 +0x015:  call   0847e85c <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x1c>  ; global constructors keyed to DispatchThread::DispatchThread()+0x1c
0847e2ec +0x01a:  movb   $0x0,-0x33(%ebp)
0847e2f0 +0x01e:  movw   $0x0,-0x32(%ebp)
0847e2f6 +0x024:  movl   $0x2710,0x4(%esp)
0847e2fe +0x02c:  lea    -0xb4(%ebp),%eax
0847e304 +0x032:  mov    %eax,(%esp)
0847e307 +0x035:  call   0844de36 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa4c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa4c
0847e30c +0x03a:  movl   $0x0,-0x30(%ebp)
0847e313 +0x041:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847e31a +0x048:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0847e31f +0x04d:  mov    %eax,-0x2c(%ebp)
0847e322 +0x050:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0847e327 +0x055:  mov    %eax,(%esp)
0847e32a +0x058:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0847e32f +0x05d:  movl   $"UserPacketCounter",0x8(%esp)
0847e337 +0x065:  mov    %eax,0x4(%esp)
0847e33b +0x069:  lea    -0x1d0(%ebp),%eax
0847e341 +0x06f:  mov    %eax,(%esp)
0847e344 +0x072:  call   0847e8d2 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x92>  ; global constructors keyed to DispatchThread::DispatchThread()+0x92
0847e349 +0x077:  lea    -0x1d0(%ebp),%eax
0847e34f +0x07d:  mov    %eax,&_ZN16PacketDispatcher19pUserPacketCounter_E
0847e354 +0x082:  call   0856f974 <_ZN15message_counter13CTimeInterval6CreateEv>  ; message_counter::CTimeInterval::Create()
0847e359 +0x087:  mov    %eax,-0x28(%ebp)
0847e35c +0x08a:  jmp    0847e782 <+0x4b0>
0847e361 +0x08f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847e368 +0x096:  call   082a68c8 <_GLOBAL__I__ZN4CLog5this_E+0x2cef>  ; global constructors keyed to CLog::this_+0x2cef
0847e36d +0x09b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0847e372 +0x0a0:  lea    -0x90(%ebp),%edx
0847e378 +0x0a6:  mov    %edx,0x4(%esp)
0847e37c +0x0aa:  mov    %eax,(%esp)
0847e37f +0x0ad:  call   08630ecc <_ZN10TimerQueue12GetTimerMessER10TimerEntry>  ; TimerQueue::GetTimerMess(TimerEntry&)
0847e384 +0x0b2:  test   %al,%al
0847e386 +0x0b4:  je     0847e3f8 <+0x126>
0847e388 +0x0b6:  mov    -0x28(%ebp),%eax
0847e38b +0x0b9:  mov    (%eax),%eax
0847e38d +0x0bb:  mov    (%eax),%edx
0847e38f +0x0bd:  mov    -0x28(%ebp),%eax
0847e392 +0x0c0:  mov    %eax,(%esp)
0847e395 +0x0c3:  call   *%edx
0847e397 +0x0c5:  call   0847e8c4 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x84>  ; global constructors keyed to DispatchThread::DispatchThread()+0x84
0847e39c +0x0ca:  lea    -0x90(%ebp),%edx
0847e3a2 +0x0d0:  mov    %edx,0x4(%esp)
0847e3a6 +0x0d4:  mov    %eax,(%esp)
0847e3a9 +0x0d7:  call   08632a18 <_ZN15TimerDispatcher8dispatchER10TimerEntry>  ; TimerDispatcher::dispatch(TimerEntry&)
0847e3ae +0x0dc:  mov    -0x28(%ebp),%eax
0847e3b1 +0x0df:  mov    (%eax),%eax
0847e3b3 +0x0e1:  add    $0x4,%eax
0847e3b6 +0x0e4:  mov    (%eax),%edx
0847e3b8 +0x0e6:  mov    -0x28(%ebp),%eax
0847e3bb +0x0e9:  mov    %eax,(%esp)
0847e3be +0x0ec:  call   *%edx
0847e3c0 +0x0ee:  mov    -0x88(%ebp),%ecx
0847e3c6 +0x0f4:  add    $0x7530,%cx
0847e3cb +0x0f9:  movzwl %cx,%ecx
0847e3ce +0x0fc:  mov    %eax,0x10(%esp)
0847e3d2 +0x100:  mov    %edx,0x14(%esp)
0847e3d6 +0x104:  mov    %ecx,0xc(%esp)
0847e3da +0x108:  movl   $0x0,0x8(%esp)
0847e3e2 +0x110:  movl   $0x0,0x4(%esp)
0847e3ea +0x118:  lea    -0xb4(%ebp),%eax
0847e3f0 +0x11e:  mov    %eax,(%esp)
0847e3f3 +0x121:  call   0856f9c4 <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx>  ; message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short, long long)
0847e3f8 +0x126:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847e3fd +0x12b:  movl   $0x1,0x4(%esp)
0847e405 +0x133:  mov    %eax,(%esp)
0847e408 +0x136:  call   085710ae <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE>  ; MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX)
0847e40d +0x13b:  mov    %eax,-0x24(%ebp)
0847e410 +0x13e:  cmpl   $0x0,-0x24(%ebp)
0847e414 +0x142:  jne    0847e427 <+0x155>
0847e416 +0x144:  movl   $0x64,(%esp)
0847e41d +0x14b:  call   0858c4fa <_ZN6OS_API6uSleepEj>  ; OS_API::uSleep(unsigned int)
0847e422 +0x150:  jmp    0847e782 <+0x4b0>
0847e427 +0x155:  mov    -0x24(%ebp),%eax
0847e42a +0x158:  mov    %eax,(%esp)
0847e42d +0x15b:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0847e432 +0x160:  mov    %eax,-0x20(%ebp)
0847e435 +0x163:  mov    -0x24(%ebp),%eax
0847e438 +0x166:  mov    0x20(%eax),%eax
0847e43b +0x169:  mov    %eax,-0x1c(%ebp)
0847e43e +0x16c:  lea    -0x94(%ebp),%eax
0847e444 +0x172:  mov    %eax,0x4(%esp)
0847e448 +0x176:  mov    -0x24(%ebp),%eax
0847e44b +0x179:  mov    %eax,(%esp)
0847e44e +0x17c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0847e453 +0x181:  lea    -0x98(%ebp),%eax
0847e459 +0x187:  mov    %eax,0x4(%esp)
0847e45d +0x18b:  mov    -0x24(%ebp),%eax
0847e460 +0x18e:  mov    %eax,(%esp)
0847e463 +0x191:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0847e468 +0x196:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847e46f +0x19d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0847e474 +0x1a2:  mov    %eax,-0x30(%ebp)
0847e477 +0x1a5:  mov    -0x28(%ebp),%eax
0847e47a +0x1a8:  mov    (%eax),%eax
0847e47c +0x1aa:  mov    (%eax),%edx
0847e47e +0x1ac:  mov    -0x28(%ebp),%eax
0847e481 +0x1af:  mov    %eax,(%esp)
0847e484 +0x1b2:  call   *%edx
0847e486 +0x1b4:  mov    -0x94(%ebp),%eax
0847e48c +0x1ba:  test   %eax,%eax
0847e48e +0x1bc:  jne    0847e4f1 <+0x21f>
0847e490 +0x1be:  mov    -0x24(%ebp),%eax
0847e493 +0x1c1:  mov    %eax,(%esp)
0847e496 +0x1c4:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
0847e49b +0x1c9:  movzbl (%eax),%eax
0847e49e +0x1cc:  mov    %al,-0x33(%ebp)
0847e4a1 +0x1cf:  mov    -0x24(%ebp),%eax
0847e4a4 +0x1d2:  mov    %eax,(%esp)
0847e4a7 +0x1d5:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
0847e4ac +0x1da:  add    $0x1,%eax
0847e4af +0x1dd:  movzwl (%eax),%eax
0847e4b2 +0x1e0:  mov    %ax,-0x32(%ebp)
0847e4b6 +0x1e4:  mov    -0x24(%ebp),%eax
0847e4b9 +0x1e7:  mov    %eax,(%esp)
0847e4bc +0x1ea:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0847e4c1 +0x1ef:  mov    %eax,%esi
0847e4c3 +0x1f1:  mov    -0x24(%ebp),%eax
0847e4c6 +0x1f4:  mov    %eax,(%esp)
0847e4c9 +0x1f7:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
0847e4ce +0x1fc:  mov    %eax,%ebx
0847e4d0 +0x1fe:  mov    -0x98(%ebp),%edi
0847e4d6 +0x204:  call   0823453e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9be8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9be8
0847e4db +0x209:  mov    %esi,0xc(%esp)
0847e4df +0x20d:  mov    %ebx,0x8(%esp)
0847e4e3 +0x211:  mov    %edi,0x4(%esp)
0847e4e7 +0x215:  mov    %eax,(%esp)
0847e4ea +0x218:  call   08594e52 <_ZN16PacketDispatcher8dispatchEiPci>  ; PacketDispatcher::dispatch(int, char*, int)
0847e4ef +0x21d:  jmp    0847e54a <+0x278>
0847e4f1 +0x21f:  movb   $0x0,-0x33(%ebp)
0847e4f5 +0x223:  movw   $0x0,-0x32(%ebp)
0847e4fb +0x229:  mov    -0x24(%ebp),%eax
0847e4fe +0x22c:  mov    %eax,(%esp)
0847e501 +0x22f:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0847e506 +0x234:  mov    %eax,%esi
0847e508 +0x236:  mov    -0x24(%ebp),%eax
0847e50b +0x239:  mov    %eax,(%esp)
0847e50e +0x23c:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
0847e513 +0x241:  mov    %eax,%ebx
0847e515 +0x243:  mov    -0x98(%ebp),%eax
0847e51b +0x249:  mov    %eax,-0x1dc(%ebp)
0847e521 +0x24f:  mov    -0x94(%ebp),%edi
0847e527 +0x255:  call   0847e8b7 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x77>  ; global constructors keyed to DispatchThread::DispatchThread()+0x77
0847e52c +0x25a:  mov    %esi,0x10(%esp)
0847e530 +0x25e:  mov    %ebx,0xc(%esp)
0847e534 +0x262:  mov    -0x1dc(%ebp),%edx
0847e53a +0x268:  mov    %edx,0x8(%esp)
0847e53e +0x26c:  mov    %edi,0x4(%esp)
0847e542 +0x270:  mov    %eax,(%esp)
0847e545 +0x273:  call   084be970 <_ZN15InterDispatcher8dispatchEiiPci>  ; InterDispatcher::dispatch(int, int, char*, int)
0847e54a +0x278:  mov    -0x28(%ebp),%eax
0847e54d +0x27b:  mov    (%eax),%eax
0847e54f +0x27d:  add    $0x4,%eax
0847e552 +0x280:  mov    (%eax),%edx
0847e554 +0x282:  mov    -0x28(%ebp),%eax
0847e557 +0x285:  mov    %eax,(%esp)
0847e55a +0x288:  call   *%edx
0847e55c +0x28a:  movzwl -0x32(%ebp),%esi
0847e560 +0x28e:  movzbl -0x33(%ebp),%ebx
0847e564 +0x292:  mov    -0x94(%ebp),%ecx
0847e56a +0x298:  mov    %eax,0x10(%esp)
0847e56e +0x29c:  mov    %edx,0x14(%esp)
0847e572 +0x2a0:  mov    %esi,0xc(%esp)
0847e576 +0x2a4:  mov    %ebx,0x8(%esp)
0847e57a +0x2a8:  mov    %ecx,0x4(%esp)
0847e57e +0x2ac:  lea    -0xb4(%ebp),%eax
0847e584 +0x2b2:  mov    %eax,(%esp)
0847e587 +0x2b5:  call   0856f9c4 <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx>  ; message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short, long long)
0847e58c +0x2ba:  mov    -0x2c(%ebp),%eax
0847e58f +0x2bd:  mov    -0x30(%ebp),%edx
0847e592 +0x2c0:  mov    %edx,%ecx
0847e594 +0x2c2:  sub    %eax,%ecx
0847e596 +0x2c4:  mov    %ecx,%eax
0847e598 +0x2c6:  cmp    $0x258,%eax
0847e59d +0x2cb:  jle    0847e617 <+0x345>
0847e59f +0x2cd:  mov    -0x30(%ebp),%eax
0847e5a2 +0x2d0:  mov    %eax,-0x2c(%ebp)
0847e5a5 +0x2d3:  lea    -0xb4(%ebp),%eax
0847e5ab +0x2d9:  mov    %eax,(%esp)
0847e5ae +0x2dc:  call   0856fbb0 <_ZN15message_counter15CMessageCounter8WriteLogEv>  ; message_counter::CMessageCounter::WriteLog()
0847e5b3 +0x2e1:  lea    -0x1d0(%ebp),%eax
0847e5b9 +0x2e7:  mov    %eax,(%esp)
0847e5bc +0x2ea:  call   0856fff0 <_ZN15message_counter18CUserPacketCounter8WriteLogEv>  ; message_counter::CUserPacketCounter::WriteLog()
0847e5c1 +0x2ef:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0847e5c6 +0x2f4:  mov    %eax,(%esp)
0847e5c9 +0x2f7:  call   0847e8a4 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x64>  ; global constructors keyed to DispatchThread::DispatchThread()+0x64
0847e5ce +0x2fc:  mov    %eax,%ebx
0847e5d0 +0x2fe:  movl   $0x5,0xc(%esp)
0847e5d8 +0x306:  movl   $0x8f,0x8(%esp)
0847e5e0 +0x30e:  movl   $&_ZZN14DispatchThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0847e5e8 +0x316:  lea    -0x74(%ebp),%eax
0847e5eb +0x319:  mov    %eax,(%esp)
0847e5ee +0x31c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847e5f3 +0x321:  mov    %ebx,0x8(%esp)
0847e5f7 +0x325:  movl   $"timer_queue_count(%u)",0x4(%esp)
0847e5ff +0x32d:  lea    -0x74(%ebp),%eax
0847e602 +0x330:  mov    %eax,(%esp)
0847e605 +0x333:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847e60a +0x338:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0847e60f +0x33d:  mov    %eax,(%esp)
0847e612 +0x340:  call   0863101e <_ZN10TimerQueue21write_timer_queue_logEv>  ; TimerQueue::write_timer_queue_log()
0847e617 +0x345:  mov    -0x1c(%ebp),%eax
0847e61a +0x348:  cmp    $0x1,%eax
0847e61d +0x34b:  je     0847e631 <+0x35f>
0847e61f +0x34d:  cmp    $0x2,%eax
0847e622 +0x350:  je     0847e714 <+0x442>
0847e628 +0x356:  test   %eax,%eax
0847e62a +0x358:  je     0847e6a4 <+0x3d2>
0847e62c +0x35a:  jmp    0847e782 <+0x4b0>
0847e631 +0x35f:  cmpl   $0xfff,-0x20(%ebp)
0847e638 +0x366:  jle    0847e68b <+0x3b9>
0847e63a +0x368:  mov    -0x98(%ebp),%esi
0847e640 +0x36e:  mov    -0x94(%ebp),%ebx
0847e646 +0x374:  movl   $0x5,0xc(%esp)
0847e64e +0x37c:  movl   $0x9e,0x8(%esp)
0847e656 +0x384:  movl   $&_ZZN14DispatchThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0847e65e +0x38c:  lea    -0x64(%ebp),%eax
0847e661 +0x38f:  mov    %eax,(%esp)
0847e664 +0x392:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847e669 +0x397:  mov    -0x20(%ebp),%eax
0847e66c +0x39a:  mov    %eax,0x10(%esp)
0847e670 +0x39e:  mov    %esi,0xc(%esp)
0847e674 +0x3a2:  mov    %ebx,0x8(%esp)
0847e678 +0x3a6:  movl   $"Small Stream Size over code(%d), idx(%d), size(%u)",0x4(%esp)
0847e680 +0x3ae:  lea    -0x64(%ebp),%eax
0847e683 +0x3b1:  mov    %eax,(%esp)
0847e686 +0x3b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847e68b +0x3b9:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
0847e690 +0x3be:  mov    -0x24(%ebp),%edx
0847e693 +0x3c1:  mov    %edx,0x4(%esp)
0847e697 +0x3c5:  mov    %eax,(%esp)
0847e69a +0x3c8:  call   08290004 <_ZN15SmallStreamPool4FreeEP6Stream>  ; SmallStreamPool::Free(Stream*)
0847e69f +0x3cd:  jmp    0847e782 <+0x4b0>
0847e6a4 +0x3d2:  cmpl   $0x3fff,-0x20(%ebp)
0847e6ab +0x3d9:  jle    0847e6fe <+0x42c>
0847e6ad +0x3db:  mov    -0x98(%ebp),%esi
0847e6b3 +0x3e1:  mov    -0x94(%ebp),%ebx
0847e6b9 +0x3e7:  movl   $0x5,0xc(%esp)
0847e6c1 +0x3ef:  movl   $0xa8,0x8(%esp)
0847e6c9 +0x3f7:  movl   $&_ZZN14DispatchThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0847e6d1 +0x3ff:  lea    -0x54(%ebp),%eax
0847e6d4 +0x402:  mov    %eax,(%esp)
0847e6d7 +0x405:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847e6dc +0x40a:  mov    -0x20(%ebp),%eax
0847e6df +0x40d:  mov    %eax,0x10(%esp)
0847e6e3 +0x411:  mov    %esi,0xc(%esp)
0847e6e7 +0x415:  mov    %ebx,0x8(%esp)
0847e6eb +0x419:  movl   $"Default Stream Size over code(%d), idx(%d), size(%u)",0x4(%esp)
0847e6f3 +0x421:  lea    -0x54(%ebp),%eax
0847e6f6 +0x424:  mov    %eax,(%esp)
0847e6f9 +0x427:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847e6fe +0x42c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847e703 +0x431:  mov    -0x24(%ebp),%edx
0847e706 +0x434:  mov    %edx,0x4(%esp)
0847e70a +0x438:  mov    %eax,(%esp)
0847e70d +0x43b:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
0847e712 +0x440:  jmp    0847e782 <+0x4b0>
0847e714 +0x442:  cmpl   $0x3ffff,-0x20(%ebp)
0847e71b +0x449:  jle    0847e76e <+0x49c>
0847e71d +0x44b:  mov    -0x98(%ebp),%esi
0847e723 +0x451:  mov    -0x94(%ebp),%ebx
0847e729 +0x457:  movl   $0x5,0xc(%esp)
0847e731 +0x45f:  movl   $0xb2,0x8(%esp)
0847e739 +0x467:  movl   $&_ZZN14DispatchThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0847e741 +0x46f:  lea    -0x44(%ebp),%eax
0847e744 +0x472:  mov    %eax,(%esp)
0847e747 +0x475:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847e74c +0x47a:  mov    -0x20(%ebp),%eax
0847e74f +0x47d:  mov    %eax,0x10(%esp)
0847e753 +0x481:  mov    %esi,0xc(%esp)
0847e757 +0x485:  mov    %ebx,0x8(%esp)
0847e75b +0x489:  movl   $"Big Stream Size over code(%d), idx(%d), size(%u)",0x4(%esp)
0847e763 +0x491:  lea    -0x44(%ebp),%eax
0847e766 +0x494:  mov    %eax,(%esp)
0847e769 +0x497:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847e76e +0x49c:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0847e773 +0x4a1:  mov    -0x24(%ebp),%edx
0847e776 +0x4a4:  mov    %edx,0x4(%esp)
0847e77a +0x4a8:  mov    %eax,(%esp)
0847e77d +0x4ab:  call   08290304 <_ZN13BigStreamPool4FreeEP6Stream>  ; BigStreamPool::Free(Stream*)
0847e782 +0x4b0:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
0847e789 +0x4b7:  xor    $0x1,%eax
0847e78c +0x4ba:  test   %al,%al
0847e78e +0x4bc:  jne    0847e361 <+0x8f>
0847e794 +0x4c2:  mov    -0x28(%ebp),%eax
0847e797 +0x4c5:  mov    %eax,(%esp)
0847e79a +0x4c8:  call   0856f9b0 <_ZN15message_counter13CTimeInterval7DestoryEPS0_>  ; message_counter::CTimeInterval::Destory(message_counter::CTimeInterval*)
0847e79f +0x4cd:  jmp    0847e7b9 <+0x4e7>
0847e7a1 +0x4cf:  mov    %edx,%ebx
0847e7a3 +0x4d1:  mov    %eax,%esi
0847e7a5 +0x4d3:  lea    -0x1d0(%ebp),%eax
0847e7ab +0x4d9:  mov    %eax,(%esp)
0847e7ae +0x4dc:  call   0847e916 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0xd6>  ; global constructors keyed to DispatchThread::DispatchThread()+0xd6
0847e7b3 +0x4e1:  mov    %esi,%eax
0847e7b5 +0x4e3:  mov    %ebx,%edx
0847e7b7 +0x4e5:  jmp    0847e7c9 <+0x4f7>
0847e7b9 +0x4e7:  lea    -0x1d0(%ebp),%eax
0847e7bf +0x4ed:  mov    %eax,(%esp)
0847e7c2 +0x4f0:  call   0847e916 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0xd6>  ; global constructors keyed to DispatchThread::DispatchThread()+0xd6
0847e7c7 +0x4f5:  jmp    0847e7e7 <+0x515>
0847e7c9 +0x4f7:  mov    %edx,%ebx
0847e7cb +0x4f9:  mov    %eax,%esi
0847e7cd +0x4fb:  lea    -0xb4(%ebp),%eax
0847e7d3 +0x501:  mov    %eax,(%esp)
0847e7d6 +0x504:  call   0845000e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2c24>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2c24
0847e7db +0x509:  mov    %esi,%eax
0847e7dd +0x50b:  mov    %ebx,%edx
0847e7df +0x50d:  mov    %eax,(%esp)
0847e7e2 +0x510:  call   08ae3750 <_Unwind_Resume>
0847e7e7 +0x515:  lea    -0xb4(%ebp),%eax
0847e7ed +0x51b:  mov    %eax,(%esp)
0847e7f0 +0x51e:  call   0845000e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2c24>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2c24
0847e7f5 +0x523:  add    $0x1fc,%esp
0847e7fb +0x529:  pop    %ebx
0847e7fc +0x52a:  pop    %esi
0847e7fd +0x52b:  pop    %edi
0847e7fe +0x52c:  pop    %ebp
0847e7ff +0x52d:  ret
```

## 反编译 C

```c
// DispatchThread::dispatch @ 0x847e2d2

/* DispatchThread::dispatch(void*) */

void DispatchThread::dispatch(void *param_1)

{
  char cVar1;
  CEnvironment *this;
  char *pcVar2;
  TimerQueue *pTVar3;
  TimerDispatcher *this_00;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  PacketDispatcher *this_01;
  int iVar8;
  InterDispatcher *this_02;
  undefined4 uVar9;
  undefined8 uVar10;
  CUserPacketCounter local_1d4 [284];
  CMessageCounter local_b8 [28];
  int local_9c;
  int local_98;
  TimerEntry local_94 [28];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [17];
  byte local_37;
  ushort local_36;
  int local_34;
  int local_30;
  CTimeInterval *local_2c;
  Stream *local_28;
  int local_24;
  int local_20;
  
  TimerEntry::TimerEntry(local_94);
  local_37 = 0;
  local_36 = 0;
  message_counter::CMessageCounter::CMessageCounter(local_b8,10000);
  local_34 = 0;
  local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 0847e322 to 0847e348 has its CatchHandler @ 0847e7c9 */
  this = (CEnvironment *)G_CEnvironment();
  pcVar2 = (char *)CEnvironment::get_file_name(this);
  message_counter::CUserPacketCounter::CUserPacketCounter(local_1d4,pcVar2,"UserPacketCounter");
  PacketDispatcher::pUserPacketCounter_ = local_1d4;
                    /* try { // try from 0847e354 to 0847e79e has its CatchHandler @ 0847e7a1 */
  local_2c = (CTimeInterval *)message_counter::CTimeInterval::Create();
  while (GlobalData::s_server_stop != '\x01') {
    CSystemTime::update((CSystemTime *)GlobalData::s_systemTime_);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    cVar1 = TimerQueue::GetTimerMess(pTVar3,local_94);
    if (cVar1 != '\0') {
      (*(code *)**(undefined4 **)local_2c)(local_2c);
      this_00 = (TimerDispatcher *)G_TimerDispatcher();
      TimerDispatcher::dispatch(this_00,local_94);
      uVar4 = (**(code **)(*(int *)local_2c + 4))(local_2c);
      message_counter::CMessageCounter::IncreaseMessage
                ((uint)local_b8,'\0',0,CONCAT44(uVar4,(uint)(ushort)((short)local_94._8_4_ + 30000))
                );
    }
    local_28 = (Stream *)MsgQueueMgr::get(GlobalData::s_msgq_mgr,1);
    if (local_28 == (Stream *)0x0) {
      OS_API::uSleep(100);
    }
    else {
      local_24 = Stream::length(local_28);
      local_20 = *(int *)(local_28 + 0x20);
      Stream::operator>>(local_28,&local_98);
      Stream::operator>>(local_28,&local_9c);
      local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      (*(code *)**(undefined4 **)local_2c)(local_2c);
      if (local_98 == 0) {
        pbVar5 = (byte *)Stream::get_buffer(local_28);
        local_37 = *pbVar5;
        iVar6 = Stream::get_buffer(local_28);
        local_36 = *(ushort *)(iVar6 + 1);
        iVar7 = Stream::length(local_28);
        pcVar2 = (char *)Stream::get_buffer(local_28);
        iVar6 = local_9c;
        this_01 = (PacketDispatcher *)G_PacketDispatcher();
        PacketDispatcher::dispatch(this_01,iVar6,pcVar2,iVar7);
      }
      else {
        local_37 = 0;
        local_36 = 0;
        iVar8 = Stream::length(local_28);
        pcVar2 = (char *)Stream::get_buffer(local_28);
        iVar7 = local_98;
        iVar6 = local_9c;
        this_02 = (InterDispatcher *)G_InterDispatcher();
        InterDispatcher::dispatch(this_02,iVar7,iVar6,pcVar2,iVar8);
      }
      uVar10 = (**(code **)(*(int *)local_2c + 4))(local_2c);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      message_counter::CMessageCounter::IncreaseMessage
                ((uint)local_b8,(uchar)local_98,(ushort)local_37,
                 CONCAT44((int)uVar10,(uint)local_36));
      if (600 < local_34 - local_30) {
        local_30 = local_34;
        message_counter::CMessageCounter::WriteLog(local_b8);
        message_counter::CUserPacketCounter::WriteLog(local_1d4);
        pTVar3 = (TimerQueue *)G_TimerQueue();
        uVar9 = TimerQueue::GetQueueSize(pTVar3);
        cMyTrace::cMyTrace(local_78,"virtual void DispatchThread::dispatch(void*)",0x8f,5);
        cMyTrace::operator()(local_78,"timer_queue_count(%u)",uVar9);
        G_TimerQueue();
        TimerQueue::write_timer_queue_log();
      }
      iVar7 = local_98;
      iVar6 = local_9c;
      if (local_20 == 1) {
        if (0xfff < local_24) {
          cMyTrace::cMyTrace(local_68,"virtual void DispatchThread::dispatch(void*)",0x9e,5);
          cMyTrace::operator()
                    (local_68,"Small Stream Size over code(%d), idx(%d), size(%u)",iVar7,iVar6,
                     local_24,uVar4);
        }
        SmallStreamPool::Free(GlobalData::s_small_stream_pool,local_28);
      }
      else if (local_20 == 2) {
        if (0x3ffff < local_24) {
          cMyTrace::cMyTrace(local_48,"virtual void DispatchThread::dispatch(void*)",0xb2,5);
          cMyTrace::operator()
                    (local_48,"Big Stream Size over code(%d), idx(%d), size(%u)",iVar7,iVar6,
                     local_24,uVar4);
        }
        BigStreamPool::Free(GlobalData::s_big_stream_pool,local_28);
      }
      else if (local_20 == 0) {
        if (0x3fff < local_24) {
          cMyTrace::cMyTrace(local_58,"virtual void DispatchThread::dispatch(void*)",0xa8,5);
          cMyTrace::operator()
                    (local_58,"Default Stream Size over code(%d), idx(%d), size(%u)",iVar7,iVar6,
                     local_24,uVar4);
        }
        StreamPool::Free(GlobalData::s_stream_pool,local_28);
      }
    }
  }
  message_counter::CTimeInterval::Destory(local_2c);
                    /* try { // try from 0847e7c2 to 0847e7c6 has its CatchHandler @ 0847e7c9 */
  message_counter::CUserPacketCounter::~CUserPacketCounter(local_1d4);
  message_counter::CMessageCounter::~CMessageCounter(local_b8);
  return;
}
```
