# _processUDPData

`_ZN9UdpThread15_processUDPDataEPci`

`UdpThread::_processUDPData(char*, int)`

| 类 | 地址 |
|---|---|
| `UdpThread` | `0x0857c5a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c5a4  _ZN9UdpThread15_processUDPDataEPci
#           UdpThread::_processUDPData(char*, int)
# range [0x0857c5a4, 0x0857c9dd]
0857c5a4 +0x000:  push   %ebp
0857c5a5 +0x001:  mov    %esp,%ebp
0857c5a7 +0x003:  push   %edi
0857c5a8 +0x004:  push   %esi
0857c5a9 +0x005:  push   %ebx
0857c5aa +0x006:  sub    $0x4c,%esp
0857c5ad +0x009:  mov    0xc(%ebp),%eax
0857c5b0 +0x00c:  movzwl (%eax),%eax
0857c5b3 +0x00f:  movzwl %ax,%ebx
0857c5b6 +0x012:  call   08260640 <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x370>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x370
0857c5bb +0x017:  mov    %ebx,0x8(%esp)
0857c5bf +0x01b:  movl   $0x3,0x4(%esp)
0857c5c7 +0x023:  mov    %eax,(%esp)
0857c5ca +0x026:  call   0859926c <_ZN13CPacketTracer9AddUdpLogEii>  ; CPacketTracer::AddUdpLog(int, int)
0857c5cf +0x02b:  mov    $&_ZGVZN9UdpThread15_processUDPDataEPciE14packet_counter,%eax
0857c5d4 +0x030:  movzbl (%eax),%eax
0857c5d7 +0x033:  test   %al,%al
0857c5d9 +0x035:  jne    0857c669 <+0xc5>
0857c5df +0x03b:  movl   $&_ZGVZN9UdpThread15_processUDPDataEPciE14packet_counter,(%esp)
0857c5e6 +0x042:  call   08725330 <__cxa_guard_acquire>
0857c5eb +0x047:  test   %eax,%eax
0857c5ed +0x049:  setne  %al
0857c5f0 +0x04c:  test   %al,%al
0857c5f2 +0x04e:  je     0857c669 <+0xc5>
0857c5f4 +0x050:  mov    $0x0,%ebx
0857c5f9 +0x055:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857c5fe +0x05a:  mov    %eax,(%esp)
0857c601 +0x05d:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0857c606 +0x062:  movl   $"InterDispatcher",0x8(%esp)
0857c60e +0x06a:  mov    %eax,0x4(%esp)
0857c612 +0x06e:  movl   $&_ZZN9UdpThread15_processUDPDataEPciE14packet_counter,(%esp)
0857c619 +0x075:  call   0857f4dc <_GLOBAL__I_g_bUdp_TH_start+0xf3>  ; global constructors keyed to g_bUdp_TH_start+0xf3
0857c61e +0x07a:  movl   $&_ZGVZN9UdpThread15_processUDPDataEPciE14packet_counter,(%esp)
0857c625 +0x081:  call   08725250 <__cxa_guard_release>
0857c62a +0x086:  mov    $&_ZN14CPacketCounterILi1000ELi10240EED1Ev,%eax
0857c62f +0x08b:  movl   $&__dso_handle,0x8(%esp)
0857c637 +0x093:  movl   $&_ZZN9UdpThread15_processUDPDataEPciE14packet_counter,0x4(%esp)
0857c63f +0x09b:  mov    %eax,(%esp)
0857c642 +0x09e:  call   0807ddd0 <_init+0x6c8>
0857c647 +0x0a3:  jmp    0857c669 <+0xc5>
0857c649 +0x0a5:  mov    %edx,%esi
0857c64b +0x0a7:  mov    %eax,%edi
0857c64d +0x0a9:  test   %bl,%bl
0857c64f +0x0ab:  jne    0857c65d <+0xb9>
0857c651 +0x0ad:  movl   $&_ZGVZN9UdpThread15_processUDPDataEPciE14packet_counter,(%esp)
0857c658 +0x0b4:  call   087252c0 <__cxa_guard_abort>
0857c65d +0x0b9:  mov    %edi,%eax
0857c65f +0x0bb:  mov    %esi,%edx
0857c661 +0x0bd:  mov    %eax,(%esp)
0857c664 +0x0c0:  call   08ae3750 <_Unwind_Resume>
0857c669 +0x0c5:  mov    0xc(%ebp),%eax
0857c66c +0x0c8:  movzwl (%eax),%eax
0857c66f +0x0cb:  movzwl %ax,%eax
0857c672 +0x0ce:  mov    %eax,0x4(%esp)
0857c676 +0x0d2:  movl   $&_ZZN9UdpThread15_processUDPDataEPciE14packet_counter,(%esp)
0857c67d +0x0d9:  call   0857f560 <_GLOBAL__I_g_bUdp_TH_start+0x177>  ; global constructors keyed to g_bUdp_TH_start+0x177
0857c682 +0x0de:  mov    0xc(%ebp),%eax
0857c685 +0x0e1:  mov    %eax,(%esp)
0857c688 +0x0e4:  call   08473660 <_ZN21CDispatchServerPacket14dispatchPacketEPc>  ; CDispatchServerPacket::dispatchPacket(char*)
0857c68d +0x0e9:  test   %al,%al
0857c68f +0x0eb:  jne    0857c9ce <+0x42a>
0857c695 +0x0f1:  mov    0xc(%ebp),%eax
0857c698 +0x0f4:  movzbl (%eax),%eax
0857c69b +0x0f7:  movsbl %al,%eax
0857c69e +0x0fa:  cmp    $0x1,%eax
0857c6a1 +0x0fd:  je     0857c7a7 <+0x203>
0857c6a7 +0x103:  cmp    $0x1,%eax
0857c6aa +0x106:  jg     0857c6b5 <+0x111>
0857c6ac +0x108:  test   %eax,%eax
0857c6ae +0x10a:  je     0857c6cc <+0x128>
0857c6b0 +0x10c:  jmp    0857c87e <+0x2da>
0857c6b5 +0x111:  cmp    $0x2,%eax
0857c6b8 +0x114:  je     0857c9d1 <+0x42d>
0857c6be +0x11a:  cmp    $0x3,%eax
0857c6c1 +0x11d:  je     0857c8cc <+0x328>
0857c6c7 +0x123:  jmp    0857c87e <+0x2da>
0857c6cc +0x128:  mov    0xc(%ebp),%eax
0857c6cf +0x12b:  mov    %eax,-0x20(%ebp)
0857c6d2 +0x12e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857c6d7 +0x133:  movl   $0xe8,0x8(%esp)
0857c6df +0x13b:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c6e7 +0x143:  mov    %eax,(%esp)
0857c6ea +0x146:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857c6ef +0x14b:  movl   $0x1,0x8(%esp)
0857c6f7 +0x153:  mov    %eax,0x4(%esp)
0857c6fb +0x157:  lea    -0x28(%ebp),%eax
0857c6fe +0x15a:  mov    %eax,(%esp)
0857c701 +0x15d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857c706 +0x162:  lea    -0x28(%ebp),%eax
0857c709 +0x165:  mov    %eax,(%esp)
0857c70c +0x168:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857c711 +0x16d:  movl   $0x3d,0x4(%esp)
0857c719 +0x175:  mov    %eax,(%esp)
0857c71c +0x178:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857c721 +0x17d:  lea    -0x28(%ebp),%eax
0857c724 +0x180:  mov    %eax,(%esp)
0857c727 +0x183:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857c72c +0x188:  movl   $0xffffffff,0x4(%esp)
0857c734 +0x190:  mov    %eax,(%esp)
0857c737 +0x193:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857c73c +0x198:  lea    -0x28(%ebp),%eax
0857c73f +0x19b:  mov    %eax,(%esp)
0857c742 +0x19e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0857c747 +0x1a3:  movl   $0x52,0x8(%esp)
0857c74f +0x1ab:  mov    -0x20(%ebp),%edx
0857c752 +0x1ae:  mov    %edx,0x4(%esp)
0857c756 +0x1b2:  mov    %eax,(%esp)
0857c759 +0x1b5:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0857c75e +0x1ba:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857c763 +0x1bf:  lea    -0x28(%ebp),%edx
0857c766 +0x1c2:  mov    %edx,0x8(%esp)
0857c76a +0x1c6:  movl   $0x1,0x4(%esp)
0857c772 +0x1ce:  mov    %eax,(%esp)
0857c775 +0x1d1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857c77a +0x1d6:  jmp    0857c797 <+0x1f3>
0857c77c +0x1d8:  mov    %edx,%ebx
0857c77e +0x1da:  mov    %eax,%esi
0857c780 +0x1dc:  lea    -0x28(%ebp),%eax
0857c783 +0x1df:  mov    %eax,(%esp)
0857c786 +0x1e2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857c78b +0x1e7:  mov    %esi,%eax
0857c78d +0x1e9:  mov    %ebx,%edx
0857c78f +0x1eb:  mov    %eax,(%esp)
0857c792 +0x1ee:  call   08ae3750 <_Unwind_Resume>
0857c797 +0x1f3:  lea    -0x28(%ebp),%eax
0857c79a +0x1f6:  mov    %eax,(%esp)
0857c79d +0x1f9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857c7a2 +0x1fe:  jmp    0857c9d5 <+0x431>
0857c7a7 +0x203:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857c7ac +0x208:  movl   $0xf8,0x8(%esp)
0857c7b4 +0x210:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c7bc +0x218:  mov    %eax,(%esp)
0857c7bf +0x21b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857c7c4 +0x220:  movl   $0x1,0x8(%esp)
0857c7cc +0x228:  mov    %eax,0x4(%esp)
0857c7d0 +0x22c:  lea    -0x30(%ebp),%eax
0857c7d3 +0x22f:  mov    %eax,(%esp)
0857c7d6 +0x232:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857c7db +0x237:  lea    -0x30(%ebp),%eax
0857c7de +0x23a:  mov    %eax,(%esp)
0857c7e1 +0x23d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857c7e6 +0x242:  movl   $0x9f,0x4(%esp)
0857c7ee +0x24a:  mov    %eax,(%esp)
0857c7f1 +0x24d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857c7f6 +0x252:  lea    -0x30(%ebp),%eax
0857c7f9 +0x255:  mov    %eax,(%esp)
0857c7fc +0x258:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857c801 +0x25d:  movl   $0xffffffff,0x4(%esp)
0857c809 +0x265:  mov    %eax,(%esp)
0857c80c +0x268:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857c811 +0x26d:  mov    0xc(%ebp),%eax
0857c814 +0x270:  lea    0x2(%eax),%ebx
0857c817 +0x273:  lea    -0x30(%ebp),%eax
0857c81a +0x276:  mov    %eax,(%esp)
0857c81d +0x279:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0857c822 +0x27e:  mov    0x10(%ebp),%edx
0857c825 +0x281:  mov    %edx,0x8(%esp)
0857c829 +0x285:  mov    %ebx,0x4(%esp)
0857c82d +0x289:  mov    %eax,(%esp)
0857c830 +0x28c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0857c835 +0x291:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857c83a +0x296:  lea    -0x30(%ebp),%edx
0857c83d +0x299:  mov    %edx,0x8(%esp)
0857c841 +0x29d:  movl   $0x1,0x4(%esp)
0857c849 +0x2a5:  mov    %eax,(%esp)
0857c84c +0x2a8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857c851 +0x2ad:  jmp    0857c86e <+0x2ca>
0857c853 +0x2af:  mov    %edx,%ebx
0857c855 +0x2b1:  mov    %eax,%esi
0857c857 +0x2b3:  lea    -0x30(%ebp),%eax
0857c85a +0x2b6:  mov    %eax,(%esp)
0857c85d +0x2b9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857c862 +0x2be:  mov    %esi,%eax
0857c864 +0x2c0:  mov    %ebx,%edx
0857c866 +0x2c2:  mov    %eax,(%esp)
0857c869 +0x2c5:  call   08ae3750 <_Unwind_Resume>
0857c86e +0x2ca:  lea    -0x30(%ebp),%eax
0857c871 +0x2cd:  mov    %eax,(%esp)
0857c874 +0x2d0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857c879 +0x2d5:  jmp    0857c9d5 <+0x431>
0857c87e +0x2da:  mov    0xc(%ebp),%eax
0857c881 +0x2dd:  movzwl (%eax),%eax
0857c884 +0x2e0:  cmp    $0x3e7,%ax
0857c888 +0x2e4:  ja     0857c9d4 <+0x430>
0857c88e +0x2ea:  mov    0xc(%ebp),%eax
0857c891 +0x2ed:  movzbl (%eax),%eax
0857c894 +0x2f0:  movsbl %al,%eax
0857c897 +0x2f3:  mov    %eax,0x14(%esp)
0857c89b +0x2f7:  movl   $"ABNORMAL UDP PACKET [%d]",0x10(%esp)
0857c8a3 +0x2ff:  movl   $0x112,0xc(%esp)
0857c8ab +0x307:  movl   $&_ZZN9UdpThread15_processUDPDataEPciE19__PRETTY_FUNCTION__,0x8(%esp)
0857c8b3 +0x30f:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c8bb +0x317:  movl   $0x1,(%esp)
0857c8c2 +0x31e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857c8c7 +0x323:  jmp    0857c9d5 <+0x431>
0857c8cc +0x328:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857c8d1 +0x32d:  movl   $0x0,0x4(%esp)
0857c8d9 +0x335:  mov    %eax,(%esp)
0857c8dc +0x338:  call   084ed344 <_GLOBAL__I__Z7getUserj+0x42f6>  ; global constructors keyed to getUser(unsigned int)+0x42f6
0857c8e1 +0x33d:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857c8e6 +0x342:  movl   $0x0,0x4(%esp)
0857c8ee +0x34a:  mov    %eax,(%esp)
0857c8f1 +0x34d:  call   084ed360 <_GLOBAL__I__Z7getUserj+0x4312>  ; global constructors keyed to getUser(unsigned int)+0x4312
0857c8f6 +0x352:  mov    0xc(%ebp),%eax
0857c8f9 +0x355:  mov    %eax,-0x1c(%ebp)
0857c8fc +0x358:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857c901 +0x35d:  movl   $0x126,0x8(%esp)
0857c909 +0x365:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c911 +0x36d:  mov    %eax,(%esp)
0857c914 +0x370:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857c919 +0x375:  movl   $0x1,0x8(%esp)
0857c921 +0x37d:  mov    %eax,0x4(%esp)
0857c925 +0x381:  lea    -0x38(%ebp),%eax
0857c928 +0x384:  mov    %eax,(%esp)
0857c92b +0x387:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857c930 +0x38c:  lea    -0x38(%ebp),%eax
0857c933 +0x38f:  mov    %eax,(%esp)
0857c936 +0x392:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857c93b +0x397:  movl   $0x3d,0x4(%esp)
0857c943 +0x39f:  mov    %eax,(%esp)
0857c946 +0x3a2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857c94b +0x3a7:  lea    -0x38(%ebp),%eax
0857c94e +0x3aa:  mov    %eax,(%esp)
0857c951 +0x3ad:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857c956 +0x3b2:  movl   $0xffffffff,0x4(%esp)
0857c95e +0x3ba:  mov    %eax,(%esp)
0857c961 +0x3bd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857c966 +0x3c2:  lea    -0x38(%ebp),%eax
0857c969 +0x3c5:  mov    %eax,(%esp)
0857c96c +0x3c8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0857c971 +0x3cd:  movl   $0x52,0x8(%esp)
0857c979 +0x3d5:  mov    -0x1c(%ebp),%edx
0857c97c +0x3d8:  mov    %edx,0x4(%esp)
0857c980 +0x3dc:  mov    %eax,(%esp)
0857c983 +0x3df:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0857c988 +0x3e4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857c98d +0x3e9:  lea    -0x38(%ebp),%edx
0857c990 +0x3ec:  mov    %edx,0x8(%esp)
0857c994 +0x3f0:  movl   $0x1,0x4(%esp)
0857c99c +0x3f8:  mov    %eax,(%esp)
0857c99f +0x3fb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857c9a4 +0x400:  jmp    0857c9c1 <+0x41d>
0857c9a6 +0x402:  mov    %edx,%ebx
0857c9a8 +0x404:  mov    %eax,%esi
0857c9aa +0x406:  lea    -0x38(%ebp),%eax
0857c9ad +0x409:  mov    %eax,(%esp)
0857c9b0 +0x40c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857c9b5 +0x411:  mov    %esi,%eax
0857c9b7 +0x413:  mov    %ebx,%edx
0857c9b9 +0x415:  mov    %eax,(%esp)
0857c9bc +0x418:  call   08ae3750 <_Unwind_Resume>
0857c9c1 +0x41d:  lea    -0x38(%ebp),%eax
0857c9c4 +0x420:  mov    %eax,(%esp)
0857c9c7 +0x423:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857c9cc +0x428:  jmp    0857c9d5 <+0x431>
0857c9ce +0x42a:  nop
0857c9cf +0x42b:  jmp    0857c9d5 <+0x431>
0857c9d1 +0x42d:  nop
0857c9d2 +0x42e:  jmp    0857c9d5 <+0x431>
0857c9d4 +0x430:  nop
0857c9d5 +0x431:  add    $0x4c,%esp
0857c9d8 +0x434:  pop    %ebx
0857c9d9 +0x435:  pop    %esi
0857c9da +0x436:  pop    %edi
0857c9db +0x437:  pop    %ebp
0857c9dc +0x438:  ret
0857c9dd +0x439:  nop
```

## 反编译 C

```c
// UdpThread::_processUDPData @ 0x857c5a4

/* UdpThread::_processUDPData(char*, int) */

void __thiscall UdpThread::_processUDPData(UdpThread *this,char *param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  CPacketTracer *this_00;
  int iVar3;
  CEnvironment *this_01;
  char *pcVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_3c [8];
  CStreamGuard local_34 [8];
  CStreamGuard local_2c [8];
  char *local_24;
  char *local_20;
  
  uVar1 = *(ushort *)param_1;
  this_00 = (CPacketTracer *)CPacketTracerInstance();
  CPacketTracer::AddUdpLog(this_00,3,(uint)uVar1);
  if ((_processUDPData(char*,int)::packet_counter == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_processUDPData(char*,int)::packet_counter), iVar3 != 0)) {
                    /* try { // try from 0857c5f9 to 0857c61d has its CatchHandler @ 0857c649 */
    this_01 = (CEnvironment *)G_CEnvironment();
    pcVar4 = (char *)CEnvironment::get_file_name(this_01);
    CPacketCounter<1000,10240>::CPacketCounter
              ((CPacketCounter<1000,10240> *)_processUDPData(char*,int)::packet_counter,pcVar4,
               "InterDispatcher");
    __cxa_guard_release(&_processUDPData(char*,int)::packet_counter);
    __cxa_atexit(CPacketCounter<1000,10240>::~CPacketCounter,
                 _processUDPData(char*,int)::packet_counter,&__dso_handle);
  }
  CPacketCounter<1000,10240>::IncrementPacketCount
            ((CPacketCounter<1000,10240> *)_processUDPData(char*,int)::packet_counter,
             (uint)*(ushort *)param_1);
  cVar2 = CDispatchServerPacket::dispatchPacket(param_1);
  if (cVar2 == '\0') {
    cVar2 = *param_1;
    if (cVar2 == '\x01') {
      pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0xf8);
      CStreamGuard::CStreamGuard(local_34,pSVar5,true);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0857c7f1 to 0857c850 has its CatchHandler @ 0857c853 */
      CStreamGuard::operator<<(pCVar6,0x9f);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
      CStreamGuard::operator<<(pCVar6,-1);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      CStreamGuard::put_binary(pCVar6,param_1 + 2,param_2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      CStreamGuard::~CStreamGuard(local_34);
    }
    else {
      if (cVar2 < '\x02') {
        if (cVar2 == '\0') {
          local_24 = param_1;
          pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0xe8)
          ;
          CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 0857c71c to 0857c779 has its CatchHandler @ 0857c77c */
          CStreamGuard::operator<<(pCVar6,0x3d);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
          CStreamGuard::operator<<(pCVar6,-1);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
          CStreamGuard::put_binary(pCVar6,local_24,0x52);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
          CStreamGuard::~CStreamGuard(local_2c);
          return;
        }
      }
      else {
        if (cVar2 == '\x02') {
          return;
        }
        if (cVar2 == '\x03') {
          CAuctionServerProxy::SetRunning(GlobalData::s_auction_proxy,false);
          CCeraAuctionServerProxy::SetRunning(GlobalData::s_cera_auction_proxy,false);
          local_20 = param_1;
          pSVar5 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x126);
          CStreamGuard::CStreamGuard(local_3c,pSVar5,true);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0857c946 to 0857c9a3 has its CatchHandler @ 0857c9a6 */
          CStreamGuard::operator<<(pCVar6,0x3d);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
          CStreamGuard::operator<<(pCVar6,-1);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
          CStreamGuard::put_binary(pCVar6,local_20,0x52);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_3c);
          CStreamGuard::~CStreamGuard(local_3c);
          return;
        }
      }
      if (*(ushort *)param_1 < 1000) {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","void UdpThread::_processUDPData(char*, int)",0x112,
                   "ABNORMAL UDP PACKET [%d]",(int)*param_1);
      }
    }
  }
  return;
}
```
