# dispatchAuctionPacket

`_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc`

`CDispatchServerPacket::dispatchAuctionPacket(char*)`

| 类 | 地址 |
|---|---|
| `CDispatchServerPacket` | `0x0847ac3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847ac3c  _ZN21CDispatchServerPacket21dispatchAuctionPacketEPc
#           CDispatchServerPacket::dispatchAuctionPacket(char*)
# range [0x0847ac3c, 0x0847c1fd]
0847ac3c +0x0000:  push   %ebp
0847ac3d +0x0001:  mov    %esp,%ebp
0847ac3f +0x0003:  push   %esi
0847ac40 +0x0004:  push   %ebx
0847ac41 +0x0005:  sub    $0x110,%esp
0847ac47 +0x000b:  mov    0x8(%ebp),%eax
0847ac4a +0x000e:  mov    %eax,(%esp)
0847ac4d +0x0011:  call   082f7d0c <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1d
0847ac52 +0x0016:  mov    %eax,-0x7c(%ebp)
0847ac55 +0x0019:  mov    0x8(%ebp),%eax
0847ac58 +0x001c:  mov    %eax,(%esp)
0847ac5b +0x001f:  call   082f7d28 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x39>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x39
0847ac60 +0x0024:  mov    %eax,-0x78(%ebp)
0847ac63 +0x0027:  cmpl   $0x13,-0x78(%ebp)
0847ac67 +0x002b:  jne    0847ac7e <+0x42>
0847ac69 +0x002d:  mov    0x8(%ebp),%eax
0847ac6c +0x0030:  mov    %eax,(%esp)
0847ac6f +0x0033:  call   0847c1fe <_ZN21CDispatchServerPacket19dispatchPointPacketEPc>  ; CDispatchServerPacket::dispatchPointPacket(char*)
0847ac74 +0x0038:  mov    $0x1,%eax
0847ac79 +0x003d:  jmp    0847c1f4 <+0x15b8>
0847ac7e +0x0042:  cmpl   $0xe,-0x7c(%ebp)
0847ac82 +0x0046:  ja     0847c1bc <+0x1580>
0847ac88 +0x004c:  mov    -0x7c(%ebp),%eax
0847ac8b +0x004f:  shl    $0x2,%eax
0847ac8e +0x0052:  mov    &data#06069cd5(.rodata)(%eax),%eax
0847ac94 +0x0058:  jmp    *%eax
0847ac96 +0x005a:  mov    0x8(%ebp),%eax
0847ac99 +0x005d:  mov    %eax,-0x74(%ebp)
0847ac9c +0x0060:  mov    -0x74(%ebp),%eax
0847ac9f +0x0063:  mov    0xe(%eax),%eax
0847aca2 +0x0066:  test   %eax,%eax
0847aca4 +0x0068:  jne    0847ad98 <+0x15c>
0847acaa +0x006e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847acaf +0x0073:  movl   $0x128f,0x8(%esp)
0847acb7 +0x007b:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847acbf +0x0083:  mov    %eax,(%esp)
0847acc2 +0x0086:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847acc7 +0x008b:  movl   $0x1,0x8(%esp)
0847accf +0x0093:  mov    %eax,0x4(%esp)
0847acd3 +0x0097:  lea    -0x84(%ebp),%eax
0847acd9 +0x009d:  mov    %eax,(%esp)
0847acdc +0x00a0:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847ace1 +0x00a5:  lea    -0x84(%ebp),%eax
0847ace7 +0x00ab:  mov    %eax,(%esp)
0847acea +0x00ae:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847acef +0x00b3:  movl   $0xf9,0x4(%esp)
0847acf7 +0x00bb:  mov    %eax,(%esp)
0847acfa +0x00be:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847acff +0x00c3:  lea    -0x84(%ebp),%eax
0847ad05 +0x00c9:  mov    %eax,(%esp)
0847ad08 +0x00cc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ad0d +0x00d1:  movl   $0xffffffff,0x4(%esp)
0847ad15 +0x00d9:  mov    %eax,(%esp)
0847ad18 +0x00dc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847ad1d +0x00e1:  lea    -0x84(%ebp),%eax
0847ad23 +0x00e7:  mov    %eax,(%esp)
0847ad26 +0x00ea:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847ad2b +0x00ef:  mov    %eax,(%esp)
0847ad2e +0x00f2:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847ad33 +0x00f7:  mov    %eax,-0x70(%ebp)
0847ad36 +0x00fa:  mov    -0x70(%ebp),%eax
0847ad39 +0x00fd:  movl   $0x0,(%eax)
0847ad3f +0x0103:  mov    -0x70(%ebp),%eax
0847ad42 +0x0106:  movb   $0x1,0x4(%eax)
0847ad46 +0x010a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847ad4b +0x010f:  lea    -0x84(%ebp),%edx
0847ad51 +0x0115:  mov    %edx,0x8(%esp)
0847ad55 +0x0119:  movl   $0x1,0x4(%esp)
0847ad5d +0x0121:  mov    %eax,(%esp)
0847ad60 +0x0124:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847ad65 +0x0129:  jmp    0847ad85 <+0x149>
0847ad67 +0x012b:  mov    %edx,%ebx
0847ad69 +0x012d:  mov    %eax,%esi
0847ad6b +0x012f:  lea    -0x84(%ebp),%eax
0847ad71 +0x0135:  mov    %eax,(%esp)
0847ad74 +0x0138:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ad79 +0x013d:  mov    %esi,%eax
0847ad7b +0x013f:  mov    %ebx,%edx
0847ad7d +0x0141:  mov    %eax,(%esp)
0847ad80 +0x0144:  call   08ae3750 <_Unwind_Resume>
0847ad85 +0x0149:  lea    -0x84(%ebp),%eax
0847ad8b +0x014f:  mov    %eax,(%esp)
0847ad8e +0x0152:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ad93 +0x0157:  jmp    0847c1ef <+0x15b3>
0847ad98 +0x015c:  mov    -0x74(%ebp),%eax
0847ad9b +0x015f:  mov    0xe(%eax),%eax
0847ad9e +0x0162:  cmp    $0x2,%eax
0847ada1 +0x0165:  jne    0847adad <+0x171>
0847ada3 +0x0167:  call   0863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>  ; Timer_CheckAuctionReady::RegistNextTimer()
0847ada8 +0x016c:  jmp    0847c1ef <+0x15b3>
0847adad +0x0171:  mov    -0x74(%ebp),%eax
0847adb0 +0x0174:  mov    0xe(%eax),%eax
0847adb3 +0x0177:  cmp    $0x1,%eax
0847adb6 +0x017a:  jne    0847ade9 <+0x1ad>
0847adb8 +0x017c:  movl   $"AUCTION REGIST SERVER ID DUPLICATE",0x10(%esp)
0847adc0 +0x0184:  movl   $0x12a3,0xc(%esp)
0847adc8 +0x018c:  movl   $&_ZZN21CDispatchServerPacket21dispatchAuctionPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847add0 +0x0194:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847add8 +0x019c:  movl   $0x1,(%esp)
0847addf +0x01a3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847ade4 +0x01a8:  jmp    0847c1ef <+0x15b3>
0847ade9 +0x01ad:  movl   $"AUCTION REGIST UNHANDLED ERROR",0x10(%esp)
0847adf1 +0x01b5:  movl   $0x12a7,0xc(%esp)
0847adf9 +0x01bd:  movl   $&_ZZN21CDispatchServerPacket21dispatchAuctionPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847ae01 +0x01c5:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847ae09 +0x01cd:  movl   $0x1,(%esp)
0847ae10 +0x01d4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847ae15 +0x01d9:  jmp    0847c1ef <+0x15b3>
0847ae1a +0x01de:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847ae1f +0x01e3:  movl   $0x12b2,0x8(%esp)
0847ae27 +0x01eb:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847ae2f +0x01f3:  mov    %eax,(%esp)
0847ae32 +0x01f6:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847ae37 +0x01fb:  movl   $0x1,0x8(%esp)
0847ae3f +0x0203:  mov    %eax,0x4(%esp)
0847ae43 +0x0207:  lea    -0x8c(%ebp),%eax
0847ae49 +0x020d:  mov    %eax,(%esp)
0847ae4c +0x0210:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847ae51 +0x0215:  lea    -0x8c(%ebp),%eax
0847ae57 +0x021b:  mov    %eax,(%esp)
0847ae5a +0x021e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ae5f +0x0223:  movl   $0xf9,0x4(%esp)
0847ae67 +0x022b:  mov    %eax,(%esp)
0847ae6a +0x022e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847ae6f +0x0233:  lea    -0x8c(%ebp),%eax
0847ae75 +0x0239:  mov    %eax,(%esp)
0847ae78 +0x023c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ae7d +0x0241:  movl   $0xffffffff,0x4(%esp)
0847ae85 +0x0249:  mov    %eax,(%esp)
0847ae88 +0x024c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847ae8d +0x0251:  lea    -0x8c(%ebp),%eax
0847ae93 +0x0257:  mov    %eax,(%esp)
0847ae96 +0x025a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847ae9b +0x025f:  mov    %eax,(%esp)
0847ae9e +0x0262:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847aea3 +0x0267:  mov    %eax,-0x6c(%ebp)
0847aea6 +0x026a:  mov    -0x6c(%ebp),%eax
0847aea9 +0x026d:  movl   $0x0,(%eax)
0847aeaf +0x0273:  mov    -0x6c(%ebp),%eax
0847aeb2 +0x0276:  movb   $0x0,0x4(%eax)
0847aeb6 +0x027a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847aebb +0x027f:  lea    -0x8c(%ebp),%edx
0847aec1 +0x0285:  mov    %edx,0x8(%esp)
0847aec5 +0x0289:  movl   $0x1,0x4(%esp)
0847aecd +0x0291:  mov    %eax,(%esp)
0847aed0 +0x0294:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847aed5 +0x0299:  jmp    0847aef5 <+0x2b9>
0847aed7 +0x029b:  mov    %edx,%ebx
0847aed9 +0x029d:  mov    %eax,%esi
0847aedb +0x029f:  lea    -0x8c(%ebp),%eax
0847aee1 +0x02a5:  mov    %eax,(%esp)
0847aee4 +0x02a8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847aee9 +0x02ad:  mov    %esi,%eax
0847aeeb +0x02af:  mov    %ebx,%edx
0847aeed +0x02b1:  mov    %eax,(%esp)
0847aef0 +0x02b4:  call   08ae3750 <_Unwind_Resume>
0847aef5 +0x02b9:  lea    -0x8c(%ebp),%eax
0847aefb +0x02bf:  mov    %eax,(%esp)
0847aefe +0x02c2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847af03 +0x02c7:  jmp    0847c1ef <+0x15b3>
0847af08 +0x02cc:  mov    0x8(%ebp),%eax
0847af0b +0x02cf:  mov    %eax,-0x68(%ebp)
0847af0e +0x02d2:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847af13 +0x02d7:  movl   $0x12cd,0x8(%esp)
0847af1b +0x02df:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847af23 +0x02e7:  mov    %eax,(%esp)
0847af26 +0x02ea:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847af2b +0x02ef:  movl   $0x1,0x8(%esp)
0847af33 +0x02f7:  mov    %eax,0x4(%esp)
0847af37 +0x02fb:  lea    -0x94(%ebp),%eax
0847af3d +0x0301:  mov    %eax,(%esp)
0847af40 +0x0304:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847af45 +0x0309:  lea    -0x94(%ebp),%eax
0847af4b +0x030f:  mov    %eax,(%esp)
0847af4e +0x0312:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847af53 +0x0317:  movl   $0xf0,0x4(%esp)
0847af5b +0x031f:  mov    %eax,(%esp)
0847af5e +0x0322:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847af63 +0x0327:  mov    -0x68(%ebp),%eax
0847af66 +0x032a:  mov    0x12(%eax),%ebx
0847af69 +0x032d:  lea    -0x94(%ebp),%eax
0847af6f +0x0333:  mov    %eax,(%esp)
0847af72 +0x0336:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847af77 +0x033b:  mov    %ebx,0x4(%esp)
0847af7b +0x033f:  mov    %eax,(%esp)
0847af7e +0x0342:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847af83 +0x0347:  lea    -0x94(%ebp),%eax
0847af89 +0x034d:  mov    %eax,(%esp)
0847af8c +0x0350:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847af91 +0x0355:  mov    %eax,(%esp)
0847af94 +0x0358:  call   0847dd68 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x8a>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x8a
0847af99 +0x035d:  mov    %eax,-0x64(%ebp)
0847af9c +0x0360:  mov    -0x64(%ebp),%eax
0847af9f +0x0363:  movl   $0x0,(%eax)
0847afa5 +0x0369:  mov    -0x68(%ebp),%eax
0847afa8 +0x036c:  mov    0x16(%eax),%edx
0847afab +0x036f:  mov    -0x64(%ebp),%eax
0847afae +0x0372:  mov    %edx,0x4(%eax)
0847afb1 +0x0375:  mov    -0x68(%ebp),%eax
0847afb4 +0x0378:  mov    0x1a(%eax),%edx
0847afb7 +0x037b:  mov    -0x64(%ebp),%eax
0847afba +0x037e:  mov    %edx,0x8(%eax)
0847afbd +0x0381:  movl   $0x0,-0x60(%ebp)
0847afc4 +0x0388:  jmp    0847affb <+0x3bf>
0847afc6 +0x038a:  mov    -0x60(%ebp),%edx
0847afc9 +0x038d:  mov    -0x60(%ebp),%ecx
0847afcc +0x0390:  mov    -0x68(%ebp),%eax
0847afcf +0x0393:  add    $0x4,%ecx
0847afd2 +0x0396:  mov    0xe(%eax,%ecx,4),%ecx
0847afd6 +0x039a:  mov    -0x64(%ebp),%eax
0847afd9 +0x039d:  mov    %ecx,0xc(%eax,%edx,4)
0847afdd +0x03a1:  mov    -0x60(%ebp),%ecx
0847afe0 +0x03a4:  mov    -0x60(%ebp),%edx
0847afe3 +0x03a7:  mov    -0x68(%ebp),%eax
0847afe6 +0x03aa:  add    $0x8,%edx
0847afe9 +0x03ad:  mov    0xa(%eax,%edx,4),%edx
0847afed +0x03b1:  mov    -0x64(%ebp),%eax
0847aff0 +0x03b4:  add    $0x4,%ecx
0847aff3 +0x03b7:  mov    %edx,0x8(%eax,%ecx,4)
0847aff7 +0x03bb:  addl   $0x1,-0x60(%ebp)
0847affb +0x03bf:  cmpl   $0x2,-0x60(%ebp)
0847afff +0x03c3:  setle  %al
0847b002 +0x03c6:  test   %al,%al
0847b004 +0x03c8:  jne    0847afc6 <+0x38a>
0847b006 +0x03ca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847b00b +0x03cf:  lea    -0x94(%ebp),%edx
0847b011 +0x03d5:  mov    %edx,0x8(%esp)
0847b015 +0x03d9:  movl   $0x1,0x4(%esp)
0847b01d +0x03e1:  mov    %eax,(%esp)
0847b020 +0x03e4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847b025 +0x03e9:  jmp    0847b045 <+0x409>
0847b027 +0x03eb:  mov    %edx,%ebx
0847b029 +0x03ed:  mov    %eax,%esi
0847b02b +0x03ef:  lea    -0x94(%ebp),%eax
0847b031 +0x03f5:  mov    %eax,(%esp)
0847b034 +0x03f8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b039 +0x03fd:  mov    %esi,%eax
0847b03b +0x03ff:  mov    %ebx,%edx
0847b03d +0x0401:  mov    %eax,(%esp)
0847b040 +0x0404:  call   08ae3750 <_Unwind_Resume>
0847b045 +0x0409:  lea    -0x94(%ebp),%eax
0847b04b +0x040f:  mov    %eax,(%esp)
0847b04e +0x0412:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b053 +0x0417:  jmp    0847c1ef <+0x15b3>
0847b058 +0x041c:  mov    0x8(%ebp),%eax
0847b05b +0x041f:  mov    %eax,-0x5c(%ebp)
0847b05e +0x0422:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847b063 +0x0427:  movl   $0x12f0,0x8(%esp)
0847b06b +0x042f:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b073 +0x0437:  mov    %eax,(%esp)
0847b076 +0x043a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847b07b +0x043f:  movl   $0x1,0x8(%esp)
0847b083 +0x0447:  mov    %eax,0x4(%esp)
0847b087 +0x044b:  lea    -0x9c(%ebp),%eax
0847b08d +0x0451:  mov    %eax,(%esp)
0847b090 +0x0454:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847b095 +0x0459:  lea    -0x9c(%ebp),%eax
0847b09b +0x045f:  mov    %eax,(%esp)
0847b09e +0x0462:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b0a3 +0x0467:  movl   $0xf1,0x4(%esp)
0847b0ab +0x046f:  mov    %eax,(%esp)
0847b0ae +0x0472:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b0b3 +0x0477:  mov    -0x5c(%ebp),%eax
0847b0b6 +0x047a:  mov    0x12(%eax),%ebx
0847b0b9 +0x047d:  lea    -0x9c(%ebp),%eax
0847b0bf +0x0483:  mov    %eax,(%esp)
0847b0c2 +0x0486:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b0c7 +0x048b:  mov    %ebx,0x4(%esp)
0847b0cb +0x048f:  mov    %eax,(%esp)
0847b0ce +0x0492:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b0d3 +0x0497:  lea    -0x9c(%ebp),%eax
0847b0d9 +0x049d:  mov    %eax,(%esp)
0847b0dc +0x04a0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b0e1 +0x04a5:  mov    %eax,(%esp)
0847b0e4 +0x04a8:  call   0847dd7e <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xa0>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xa0
0847b0e9 +0x04ad:  mov    %eax,-0x58(%ebp)
0847b0ec +0x04b0:  mov    -0x5c(%ebp),%eax
0847b0ef +0x04b3:  mov    0x16(%eax),%edx
0847b0f2 +0x04b6:  mov    -0x58(%ebp),%eax
0847b0f5 +0x04b9:  mov    %edx,0x4(%eax)
0847b0f8 +0x04bc:  mov    -0x5c(%ebp),%eax
0847b0fb +0x04bf:  movzwl 0x1a(%eax),%edx
0847b0ff +0x04c3:  mov    -0x58(%ebp),%eax
0847b102 +0x04c6:  mov    %dx,0x8(%eax)
0847b106 +0x04ca:  mov    -0x5c(%ebp),%eax
0847b109 +0x04cd:  movzbl 0x1c(%eax),%edx
0847b10d +0x04d1:  mov    -0x58(%ebp),%eax
0847b110 +0x04d4:  mov    %dl,0xa(%eax)
0847b113 +0x04d7:  mov    -0x5c(%ebp),%eax
0847b116 +0x04da:  movzwl 0x1d(%eax),%edx
0847b11a +0x04de:  mov    -0x58(%ebp),%eax
0847b11d +0x04e1:  mov    %dx,0xb(%eax)
0847b121 +0x04e5:  mov    -0x5c(%ebp),%eax
0847b124 +0x04e8:  mov    0x1f(%eax),%edx
0847b127 +0x04eb:  mov    -0x58(%ebp),%eax
0847b12a +0x04ee:  mov    %edx,0xd(%eax)
0847b12d +0x04f1:  mov    -0x5c(%ebp),%eax
0847b130 +0x04f4:  mov    0x23(%eax),%edx
0847b133 +0x04f7:  mov    -0x58(%ebp),%eax
0847b136 +0x04fa:  mov    %edx,0x11(%eax)
0847b139 +0x04fd:  mov    -0x5c(%ebp),%eax
0847b13c +0x0500:  mov    0x27(%eax),%edx
0847b13f +0x0503:  mov    -0x58(%ebp),%eax
0847b142 +0x0506:  mov    %edx,0x15(%eax)
0847b145 +0x0509:  mov    -0x5c(%ebp),%eax
0847b148 +0x050c:  mov    0x2b(%eax),%edx
0847b14b +0x050f:  mov    -0x58(%ebp),%eax
0847b14e +0x0512:  mov    %edx,0x19(%eax)
0847b151 +0x0515:  mov    -0x5c(%ebp),%eax
0847b154 +0x0518:  mov    0x2f(%eax),%edx
0847b157 +0x051b:  mov    -0x58(%ebp),%eax
0847b15a +0x051e:  mov    %edx,0x1d(%eax)
0847b15d +0x0521:  mov    -0x58(%ebp),%eax
0847b160 +0x0524:  mov    -0x5c(%ebp),%edx
0847b163 +0x0527:  mov    0x33(%edx),%ecx
0847b166 +0x052a:  mov    %ecx,0x21(%eax)
0847b169 +0x052d:  mov    0x37(%edx),%ecx
0847b16c +0x0530:  mov    %ecx,0x25(%eax)
0847b16f +0x0533:  mov    0x3b(%edx),%edx
0847b172 +0x0536:  mov    %edx,0x29(%eax)
0847b175 +0x0539:  mov    -0x58(%ebp),%eax
0847b178 +0x053c:  movl   $0x0,(%eax)
0847b17e +0x0542:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847b183 +0x0547:  lea    -0x9c(%ebp),%edx
0847b189 +0x054d:  mov    %edx,0x8(%esp)
0847b18d +0x0551:  movl   $0x1,0x4(%esp)
0847b195 +0x0559:  mov    %eax,(%esp)
0847b198 +0x055c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847b19d +0x0561:  jmp    0847b1bd <+0x581>
0847b19f +0x0563:  mov    %edx,%ebx
0847b1a1 +0x0565:  mov    %eax,%esi
0847b1a3 +0x0567:  lea    -0x9c(%ebp),%eax
0847b1a9 +0x056d:  mov    %eax,(%esp)
0847b1ac +0x0570:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b1b1 +0x0575:  mov    %esi,%eax
0847b1b3 +0x0577:  mov    %ebx,%edx
0847b1b5 +0x0579:  mov    %eax,(%esp)
0847b1b8 +0x057c:  call   08ae3750 <_Unwind_Resume>
0847b1bd +0x0581:  lea    -0x9c(%ebp),%eax
0847b1c3 +0x0587:  mov    %eax,(%esp)
0847b1c6 +0x058a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b1cb +0x058f:  jmp    0847c1ef <+0x15b3>
0847b1d0 +0x0594:  mov    0x8(%ebp),%eax
0847b1d3 +0x0597:  mov    %eax,-0x54(%ebp)
0847b1d6 +0x059a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847b1db +0x059f:  movl   $0x1319,0x8(%esp)
0847b1e3 +0x05a7:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b1eb +0x05af:  mov    %eax,(%esp)
0847b1ee +0x05b2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847b1f3 +0x05b7:  movl   $0x1,0x8(%esp)
0847b1fb +0x05bf:  mov    %eax,0x4(%esp)
0847b1ff +0x05c3:  lea    -0xa4(%ebp),%eax
0847b205 +0x05c9:  mov    %eax,(%esp)
0847b208 +0x05cc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847b20d +0x05d1:  lea    -0xa4(%ebp),%eax
0847b213 +0x05d7:  mov    %eax,(%esp)
0847b216 +0x05da:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b21b +0x05df:  movl   $0xf2,0x4(%esp)
0847b223 +0x05e7:  mov    %eax,(%esp)
0847b226 +0x05ea:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b22b +0x05ef:  mov    -0x54(%ebp),%eax
0847b22e +0x05f2:  mov    0x12(%eax),%ebx
0847b231 +0x05f5:  lea    -0xa4(%ebp),%eax
0847b237 +0x05fb:  mov    %eax,(%esp)
0847b23a +0x05fe:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b23f +0x0603:  mov    %ebx,0x4(%esp)
0847b243 +0x0607:  mov    %eax,(%esp)
0847b246 +0x060a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b24b +0x060f:  lea    -0xa4(%ebp),%eax
0847b251 +0x0615:  mov    %eax,(%esp)
0847b254 +0x0618:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b259 +0x061d:  mov    %eax,(%esp)
0847b25c +0x0620:  call   0847dd94 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xb6>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xb6
0847b261 +0x0625:  mov    %eax,-0x50(%ebp)
0847b264 +0x0628:  mov    -0x54(%ebp),%eax
0847b267 +0x062b:  mov    0x16(%eax),%edx
0847b26a +0x062e:  mov    -0x50(%ebp),%eax
0847b26d +0x0631:  mov    %edx,0x4(%eax)
0847b270 +0x0634:  mov    -0x54(%ebp),%eax
0847b273 +0x0637:  movzbl 0x1a(%eax),%edx
0847b277 +0x063b:  mov    -0x50(%ebp),%eax
0847b27a +0x063e:  mov    %dl,0x8(%eax)
0847b27d +0x0641:  mov    -0x54(%ebp),%eax
0847b280 +0x0644:  movzbl 0x1b(%eax),%edx
0847b284 +0x0648:  mov    -0x50(%ebp),%eax
0847b287 +0x064b:  mov    %dl,0x9(%eax)
0847b28a +0x064e:  mov    -0x50(%ebp),%eax
0847b28d +0x0651:  movl   $0x0,(%eax)
0847b293 +0x0657:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847b298 +0x065c:  lea    -0xa4(%ebp),%edx
0847b29e +0x0662:  mov    %edx,0x8(%esp)
0847b2a2 +0x0666:  movl   $0x1,0x4(%esp)
0847b2aa +0x066e:  mov    %eax,(%esp)
0847b2ad +0x0671:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847b2b2 +0x0676:  jmp    0847b2d2 <+0x696>
0847b2b4 +0x0678:  mov    %edx,%ebx
0847b2b6 +0x067a:  mov    %eax,%esi
0847b2b8 +0x067c:  lea    -0xa4(%ebp),%eax
0847b2be +0x0682:  mov    %eax,(%esp)
0847b2c1 +0x0685:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b2c6 +0x068a:  mov    %esi,%eax
0847b2c8 +0x068c:  mov    %ebx,%edx
0847b2ca +0x068e:  mov    %eax,(%esp)
0847b2cd +0x0691:  call   08ae3750 <_Unwind_Resume>
0847b2d2 +0x0696:  lea    -0xa4(%ebp),%eax
0847b2d8 +0x069c:  mov    %eax,(%esp)
0847b2db +0x069f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b2e0 +0x06a4:  jmp    0847c1ef <+0x15b3>
0847b2e5 +0x06a9:  mov    0x8(%ebp),%eax
0847b2e8 +0x06ac:  mov    %eax,-0x4c(%ebp)
0847b2eb +0x06af:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847b2f0 +0x06b4:  movl   $0x1336,0x8(%esp)
0847b2f8 +0x06bc:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b300 +0x06c4:  mov    %eax,(%esp)
0847b303 +0x06c7:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847b308 +0x06cc:  movl   $0x1,0x8(%esp)
0847b310 +0x06d4:  mov    %eax,0x4(%esp)
0847b314 +0x06d8:  lea    -0xac(%ebp),%eax
0847b31a +0x06de:  mov    %eax,(%esp)
0847b31d +0x06e1:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847b322 +0x06e6:  lea    -0xac(%ebp),%eax
0847b328 +0x06ec:  mov    %eax,(%esp)
0847b32b +0x06ef:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b330 +0x06f4:  movl   $0xf3,0x4(%esp)
0847b338 +0x06fc:  mov    %eax,(%esp)
0847b33b +0x06ff:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b340 +0x0704:  mov    -0x4c(%ebp),%eax
0847b343 +0x0707:  mov    0x12(%eax),%ebx
0847b346 +0x070a:  lea    -0xac(%ebp),%eax
0847b34c +0x0710:  mov    %eax,(%esp)
0847b34f +0x0713:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b354 +0x0718:  mov    %ebx,0x4(%esp)
0847b358 +0x071c:  mov    %eax,(%esp)
0847b35b +0x071f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b360 +0x0724:  lea    -0xac(%ebp),%eax
0847b366 +0x072a:  mov    %eax,(%esp)
0847b369 +0x072d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b36e +0x0732:  mov    %eax,(%esp)
0847b371 +0x0735:  call   0847ddaa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xcc>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xcc
0847b376 +0x073a:  mov    %eax,-0x48(%ebp)
0847b379 +0x073d:  mov    -0x4c(%ebp),%eax
0847b37c +0x0740:  mov    0x16(%eax),%edx
0847b37f +0x0743:  mov    -0x48(%ebp),%eax
0847b382 +0x0746:  mov    %edx,0x4(%eax)
0847b385 +0x0749:  mov    -0x4c(%ebp),%eax
0847b388 +0x074c:  mov    0x1a(%eax),%edx
0847b38b +0x074f:  mov    -0x48(%ebp),%eax
0847b38e +0x0752:  mov    %edx,0x8(%eax)
0847b391 +0x0755:  mov    -0x4c(%ebp),%eax
0847b394 +0x0758:  movzbl 0x1e(%eax),%edx
0847b398 +0x075c:  mov    -0x48(%ebp),%eax
0847b39b +0x075f:  mov    %dl,0xc(%eax)
0847b39e +0x0762:  mov    -0x4c(%ebp),%eax
0847b3a1 +0x0765:  movzbl 0x1f(%eax),%edx
0847b3a5 +0x0769:  mov    -0x48(%ebp),%eax
0847b3a8 +0x076c:  mov    %dl,0xd(%eax)
0847b3ab +0x076f:  mov    -0x4c(%ebp),%eax
0847b3ae +0x0772:  mov    0x24(%eax),%edx
0847b3b1 +0x0775:  mov    0x20(%eax),%eax
0847b3b4 +0x0778:  mov    -0x48(%ebp),%ecx
0847b3b7 +0x077b:  mov    %eax,0xe(%ecx)
0847b3ba +0x077e:  mov    %edx,0x12(%ecx)
0847b3bd +0x0781:  mov    -0x48(%ebp),%eax
0847b3c0 +0x0784:  movl   $0x0,(%eax)
0847b3c6 +0x078a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847b3cb +0x078f:  lea    -0xac(%ebp),%edx
0847b3d1 +0x0795:  mov    %edx,0x8(%esp)
0847b3d5 +0x0799:  movl   $0x1,0x4(%esp)
0847b3dd +0x07a1:  mov    %eax,(%esp)
0847b3e0 +0x07a4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847b3e5 +0x07a9:  jmp    0847b405 <+0x7c9>
0847b3e7 +0x07ab:  mov    %edx,%ebx
0847b3e9 +0x07ad:  mov    %eax,%esi
0847b3eb +0x07af:  lea    -0xac(%ebp),%eax
0847b3f1 +0x07b5:  mov    %eax,(%esp)
0847b3f4 +0x07b8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b3f9 +0x07bd:  mov    %esi,%eax
0847b3fb +0x07bf:  mov    %ebx,%edx
0847b3fd +0x07c1:  mov    %eax,(%esp)
0847b400 +0x07c4:  call   08ae3750 <_Unwind_Resume>
0847b405 +0x07c9:  lea    -0xac(%ebp),%eax
0847b40b +0x07cf:  mov    %eax,(%esp)
0847b40e +0x07d2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b413 +0x07d7:  jmp    0847c1ef <+0x15b3>
0847b418 +0x07dc:  mov    0x8(%ebp),%eax
0847b41b +0x07df:  mov    %eax,-0x44(%ebp)
0847b41e +0x07e2:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847b423 +0x07e7:  movl   $0x135a,0x8(%esp)
0847b42b +0x07ef:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b433 +0x07f7:  mov    %eax,(%esp)
0847b436 +0x07fa:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847b43b +0x07ff:  movl   $0x1,0x8(%esp)
0847b443 +0x0807:  mov    %eax,0x4(%esp)
0847b447 +0x080b:  lea    -0xb4(%ebp),%eax
0847b44d +0x0811:  mov    %eax,(%esp)
0847b450 +0x0814:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847b455 +0x0819:  lea    -0xb4(%ebp),%eax
0847b45b +0x081f:  mov    %eax,(%esp)
0847b45e +0x0822:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b463 +0x0827:  movl   $0xf4,0x4(%esp)
0847b46b +0x082f:  mov    %eax,(%esp)
0847b46e +0x0832:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b473 +0x0837:  mov    -0x44(%ebp),%eax
0847b476 +0x083a:  mov    0x12(%eax),%ebx
0847b479 +0x083d:  lea    -0xb4(%ebp),%eax
0847b47f +0x0843:  mov    %eax,(%esp)
0847b482 +0x0846:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b487 +0x084b:  mov    %ebx,0x4(%esp)
0847b48b +0x084f:  mov    %eax,(%esp)
0847b48e +0x0852:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b493 +0x0857:  lea    -0xb4(%ebp),%eax
0847b499 +0x085d:  mov    %eax,(%esp)
0847b49c +0x0860:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b4a1 +0x0865:  mov    %eax,(%esp)
0847b4a4 +0x0868:  call   0847ddc0 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xe2>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xe2
0847b4a9 +0x086d:  mov    %eax,-0x40(%ebp)
0847b4ac +0x0870:  mov    -0x44(%ebp),%eax
0847b4af +0x0873:  mov    0x16(%eax),%edx
0847b4b2 +0x0876:  mov    -0x40(%ebp),%eax
0847b4b5 +0x0879:  mov    %edx,0x4(%eax)
0847b4b8 +0x087c:  mov    -0x44(%ebp),%eax
0847b4bb +0x087f:  movzbl 0x1a(%eax),%edx
0847b4bf +0x0883:  mov    -0x40(%ebp),%eax
0847b4c2 +0x0886:  mov    %dl,0x8(%eax)
0847b4c5 +0x0889:  mov    -0x44(%ebp),%eax
0847b4c8 +0x088c:  movzbl 0x1b(%eax),%edx
0847b4cc +0x0890:  mov    -0x40(%ebp),%eax
0847b4cf +0x0893:  mov    %dl,0x9(%eax)
0847b4d2 +0x0896:  mov    -0x40(%ebp),%eax
0847b4d5 +0x0899:  movl   $0x0,(%eax)
0847b4db +0x089f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847b4e0 +0x08a4:  lea    -0xb4(%ebp),%edx
0847b4e6 +0x08aa:  mov    %edx,0x8(%esp)
0847b4ea +0x08ae:  movl   $0x1,0x4(%esp)
0847b4f2 +0x08b6:  mov    %eax,(%esp)
0847b4f5 +0x08b9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847b4fa +0x08be:  jmp    0847b51a <+0x8de>
0847b4fc +0x08c0:  mov    %edx,%ebx
0847b4fe +0x08c2:  mov    %eax,%esi
0847b500 +0x08c4:  lea    -0xb4(%ebp),%eax
0847b506 +0x08ca:  mov    %eax,(%esp)
0847b509 +0x08cd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b50e +0x08d2:  mov    %esi,%eax
0847b510 +0x08d4:  mov    %ebx,%edx
0847b512 +0x08d6:  mov    %eax,(%esp)
0847b515 +0x08d9:  call   08ae3750 <_Unwind_Resume>
0847b51a +0x08de:  lea    -0xb4(%ebp),%eax
0847b520 +0x08e4:  mov    %eax,(%esp)
0847b523 +0x08e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b528 +0x08ec:  jmp    0847c1ef <+0x15b3>
0847b52d +0x08f1:  mov    0x8(%ebp),%eax
0847b530 +0x08f4:  mov    %eax,-0x3c(%ebp)
0847b533 +0x08f7:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847b538 +0x08fc:  movl   $0x1377,0x8(%esp)
0847b540 +0x0904:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b548 +0x090c:  mov    %eax,(%esp)
0847b54b +0x090f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847b550 +0x0914:  movl   $0x1,0x8(%esp)
0847b558 +0x091c:  mov    %eax,0x4(%esp)
0847b55c +0x0920:  lea    -0xbc(%ebp),%eax
0847b562 +0x0926:  mov    %eax,(%esp)
0847b565 +0x0929:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847b56a +0x092e:  lea    -0xbc(%ebp),%eax
0847b570 +0x0934:  mov    %eax,(%esp)
0847b573 +0x0937:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b578 +0x093c:  movl   $0xf5,0x4(%esp)
0847b580 +0x0944:  mov    %eax,(%esp)
0847b583 +0x0947:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b588 +0x094c:  mov    -0x3c(%ebp),%eax
0847b58b +0x094f:  mov    0x12(%eax),%ebx
0847b58e +0x0952:  lea    -0xbc(%ebp),%eax
0847b594 +0x0958:  mov    %eax,(%esp)
0847b597 +0x095b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b59c +0x0960:  mov    %ebx,0x4(%esp)
0847b5a0 +0x0964:  mov    %eax,(%esp)
0847b5a3 +0x0967:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b5a8 +0x096c:  mov    -0x3c(%ebp),%eax
0847b5ab +0x096f:  mov    0x16(%eax),%ebx
0847b5ae +0x0972:  lea    -0xbc(%ebp),%eax
0847b5b4 +0x0978:  mov    %eax,(%esp)
0847b5b7 +0x097b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b5bc +0x0980:  mov    %ebx,0x4(%esp)
0847b5c0 +0x0984:  mov    %eax,(%esp)
0847b5c3 +0x0987:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b5c8 +0x098c:  mov    -0x3c(%ebp),%eax
0847b5cb +0x098f:  movzbl 0x1a(%eax),%eax
0847b5cf +0x0993:  movzbl %al,%ebx
0847b5d2 +0x0996:  lea    -0xbc(%ebp),%eax
0847b5d8 +0x099c:  mov    %eax,(%esp)
0847b5db +0x099f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b5e0 +0x09a4:  mov    %ebx,0x4(%esp)
0847b5e4 +0x09a8:  mov    %eax,(%esp)
0847b5e7 +0x09ab:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847b5ec +0x09b0:  mov    -0x3c(%ebp),%eax
0847b5ef +0x09b3:  mov    0x1b(%eax),%ebx
0847b5f2 +0x09b6:  lea    -0xbc(%ebp),%eax
0847b5f8 +0x09bc:  mov    %eax,(%esp)
0847b5fb +0x09bf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b600 +0x09c4:  mov    %ebx,0x4(%esp)
0847b604 +0x09c8:  mov    %eax,(%esp)
0847b607 +0x09cb:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0847b60c +0x09d0:  mov    -0x3c(%ebp),%eax
0847b60f +0x09d3:  movzwl 0x1f(%eax),%eax
0847b613 +0x09d7:  movzwl %ax,%eax
0847b616 +0x09da:  imul   $0x89,%eax,%eax
0847b61c +0x09e0:  add    $0x2,%eax
0847b61f +0x09e3:  mov    %eax,-0x38(%ebp)
0847b622 +0x09e6:  lea    -0xbc(%ebp),%eax
0847b628 +0x09ec:  mov    %eax,(%esp)
0847b62b +0x09ef:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b630 +0x09f4:  mov    %eax,(%esp)
0847b633 +0x09f7:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b638 +0x09fc:  mov    %eax,(%esp)
0847b63b +0x09ff:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847b640 +0x0a04:  mov    %eax,%ebx
0847b642 +0x0a06:  add    -0x38(%ebp),%ebx
0847b645 +0x0a09:  lea    -0xbc(%ebp),%eax
0847b64b +0x0a0f:  mov    %eax,(%esp)
0847b64e +0x0a12:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b653 +0x0a17:  mov    %eax,(%esp)
0847b656 +0x0a1a:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b65b +0x0a1f:  mov    %eax,(%esp)
0847b65e +0x0a22:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847b663 +0x0a27:  cmp    %eax,%ebx
0847b665 +0x0a29:  setg   %al
0847b668 +0x0a2c:  test   %al,%al
0847b66a +0x0a2e:  je     0847b6b1 <+0xa75>
0847b66c +0x0a30:  lea    -0xbc(%ebp),%eax
0847b672 +0x0a36:  mov    %eax,(%esp)
0847b675 +0x0a39:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b67a +0x0a3e:  mov    %eax,(%esp)
0847b67d +0x0a41:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b682 +0x0a46:  mov    %eax,(%esp)
0847b685 +0x0a49:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847b68a +0x0a4e:  mov    %eax,%ebx
0847b68c +0x0a50:  add    -0x38(%ebp),%ebx
0847b68f +0x0a53:  lea    -0xbc(%ebp),%eax
0847b695 +0x0a59:  mov    %eax,(%esp)
0847b698 +0x0a5c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b69d +0x0a61:  mov    %eax,(%esp)
0847b6a0 +0x0a64:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b6a5 +0x0a69:  mov    %ebx,0x4(%esp)
0847b6a9 +0x0a6d:  mov    %eax,(%esp)
0847b6ac +0x0a70:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847b6b1 +0x0a75:  lea    -0xbc(%ebp),%eax
0847b6b7 +0x0a7b:  mov    %eax,(%esp)
0847b6ba +0x0a7e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b6bf +0x0a83:  mov    %eax,(%esp)
0847b6c2 +0x0a86:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b6c7 +0x0a8b:  mov    %eax,(%esp)
0847b6ca +0x0a8e:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847b6cf +0x0a93:  mov    %eax,%ebx
0847b6d1 +0x0a95:  add    -0x38(%ebp),%ebx
0847b6d4 +0x0a98:  lea    -0xbc(%ebp),%eax
0847b6da +0x0a9e:  mov    %eax,(%esp)
0847b6dd +0x0aa1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b6e2 +0x0aa6:  mov    %eax,(%esp)
0847b6e5 +0x0aa9:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b6ea +0x0aae:  mov    %eax,(%esp)
0847b6ed +0x0ab1:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847b6f2 +0x0ab6:  cmp    %eax,%ebx
0847b6f4 +0x0ab8:  setle  %al
0847b6f7 +0x0abb:  test   %al,%al
0847b6f9 +0x0abd:  je     0847b757 <+0xb1b>
0847b6fb +0x0abf:  mov    -0x3c(%ebp),%eax
0847b6fe +0x0ac2:  movzwl 0x1f(%eax),%eax
0847b702 +0x0ac6:  movzwl %ax,%ebx
0847b705 +0x0ac9:  lea    -0xbc(%ebp),%eax
0847b70b +0x0acf:  mov    %eax,(%esp)
0847b70e +0x0ad2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b713 +0x0ad7:  mov    %ebx,0x4(%esp)
0847b717 +0x0adb:  mov    %eax,(%esp)
0847b71a +0x0ade:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847b71f +0x0ae3:  mov    -0x3c(%ebp),%eax
0847b722 +0x0ae6:  movzwl 0x1f(%eax),%eax
0847b726 +0x0aea:  movzwl %ax,%eax
0847b729 +0x0aed:  imul   $0x89,%eax,%eax
0847b72f +0x0af3:  mov    %eax,%ebx
0847b731 +0x0af5:  mov    -0x3c(%ebp),%eax
0847b734 +0x0af8:  lea    0x21(%eax),%esi
0847b737 +0x0afb:  lea    -0xbc(%ebp),%eax
0847b73d +0x0b01:  mov    %eax,(%esp)
0847b740 +0x0b04:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b745 +0x0b09:  mov    %ebx,0x8(%esp)
0847b749 +0x0b0d:  mov    %esi,0x4(%esp)
0847b74d +0x0b11:  mov    %eax,(%esp)
0847b750 +0x0b14:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847b755 +0x0b19:  jmp    0847b7a1 <+0xb65>
0847b757 +0x0b1b:  lea    -0xbc(%ebp),%eax
0847b75d +0x0b21:  mov    %eax,(%esp)
0847b760 +0x0b24:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b765 +0x0b29:  movl   $0x0,0x4(%esp)
0847b76d +0x0b31:  mov    %eax,(%esp)
0847b770 +0x0b34:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847b775 +0x0b39:  movl   $"onAUCTION_ITEM_LIST_AG, resize failed.",0x10(%esp)
0847b77d +0x0b41:  movl   $0x1390,0xc(%esp)
0847b785 +0x0b49:  movl   $&_ZZN21CDispatchServerPacket21dispatchAuctionPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847b78d +0x0b51:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b795 +0x0b59:  movl   $0x1,(%esp)
0847b79c +0x0b60:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847b7a1 +0x0b65:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847b7a6 +0x0b6a:  lea    -0xbc(%ebp),%edx
0847b7ac +0x0b70:  mov    %edx,0x8(%esp)
0847b7b0 +0x0b74:  movl   $0x1,0x4(%esp)
0847b7b8 +0x0b7c:  mov    %eax,(%esp)
0847b7bb +0x0b7f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847b7c0 +0x0b84:  jmp    0847b7e0 <+0xba4>
0847b7c2 +0x0b86:  mov    %edx,%ebx
0847b7c4 +0x0b88:  mov    %eax,%esi
0847b7c6 +0x0b8a:  lea    -0xbc(%ebp),%eax
0847b7cc +0x0b90:  mov    %eax,(%esp)
0847b7cf +0x0b93:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b7d4 +0x0b98:  mov    %esi,%eax
0847b7d6 +0x0b9a:  mov    %ebx,%edx
0847b7d8 +0x0b9c:  mov    %eax,(%esp)
0847b7db +0x0b9f:  call   08ae3750 <_Unwind_Resume>
0847b7e0 +0x0ba4:  lea    -0xbc(%ebp),%eax
0847b7e6 +0x0baa:  mov    %eax,(%esp)
0847b7e9 +0x0bad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847b7ee +0x0bb2:  jmp    0847c1ef <+0x15b3>
0847b7f3 +0x0bb7:  mov    0x8(%ebp),%eax
0847b7f6 +0x0bba:  mov    %eax,-0x34(%ebp)
0847b7f9 +0x0bbd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847b7fe +0x0bc2:  movl   $0x13a3,0x8(%esp)
0847b806 +0x0bca:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847b80e +0x0bd2:  mov    %eax,(%esp)
0847b811 +0x0bd5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847b816 +0x0bda:  movl   $0x1,0x8(%esp)
0847b81e +0x0be2:  mov    %eax,0x4(%esp)
0847b822 +0x0be6:  lea    -0xc4(%ebp),%eax
0847b828 +0x0bec:  mov    %eax,(%esp)
0847b82b +0x0bef:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847b830 +0x0bf4:  lea    -0xc4(%ebp),%eax
0847b836 +0x0bfa:  mov    %eax,(%esp)
0847b839 +0x0bfd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b83e +0x0c02:  movl   $0xf6,0x4(%esp)
0847b846 +0x0c0a:  mov    %eax,(%esp)
0847b849 +0x0c0d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b84e +0x0c12:  mov    -0x34(%ebp),%eax
0847b851 +0x0c15:  mov    0x12(%eax),%ebx
0847b854 +0x0c18:  lea    -0xc4(%ebp),%eax
0847b85a +0x0c1e:  mov    %eax,(%esp)
0847b85d +0x0c21:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b862 +0x0c26:  mov    %ebx,0x4(%esp)
0847b866 +0x0c2a:  mov    %eax,(%esp)
0847b869 +0x0c2d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b86e +0x0c32:  mov    -0x34(%ebp),%eax
0847b871 +0x0c35:  mov    0x16(%eax),%ebx
0847b874 +0x0c38:  lea    -0xc4(%ebp),%eax
0847b87a +0x0c3e:  mov    %eax,(%esp)
0847b87d +0x0c41:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b882 +0x0c46:  mov    %ebx,0x4(%esp)
0847b886 +0x0c4a:  mov    %eax,(%esp)
0847b889 +0x0c4d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847b88e +0x0c52:  mov    -0x34(%ebp),%eax
0847b891 +0x0c55:  movzbl 0x1a(%eax),%eax
0847b895 +0x0c59:  movzbl %al,%ebx
0847b898 +0x0c5c:  lea    -0xc4(%ebp),%eax
0847b89e +0x0c62:  mov    %eax,(%esp)
0847b8a1 +0x0c65:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b8a6 +0x0c6a:  mov    %ebx,0x4(%esp)
0847b8aa +0x0c6e:  mov    %eax,(%esp)
0847b8ad +0x0c71:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847b8b2 +0x0c76:  mov    -0x34(%ebp),%eax
0847b8b5 +0x0c79:  movzbl 0x1b(%eax),%eax
0847b8b9 +0x0c7d:  movzbl %al,%eax
0847b8bc +0x0c80:  imul   $0x75,%eax,%eax
0847b8bf +0x0c83:  add    $0x1,%eax
0847b8c2 +0x0c86:  mov    %eax,-0x30(%ebp)
0847b8c5 +0x0c89:  lea    -0xc4(%ebp),%eax
0847b8cb +0x0c8f:  mov    %eax,(%esp)
0847b8ce +0x0c92:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b8d3 +0x0c97:  mov    %eax,(%esp)
0847b8d6 +0x0c9a:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b8db +0x0c9f:  mov    %eax,(%esp)
0847b8de +0x0ca2:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847b8e3 +0x0ca7:  mov    %eax,%ebx
0847b8e5 +0x0ca9:  add    -0x30(%ebp),%ebx
0847b8e8 +0x0cac:  lea    -0xc4(%ebp),%eax
0847b8ee +0x0cb2:  mov    %eax,(%esp)
0847b8f1 +0x0cb5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b8f6 +0x0cba:  mov    %eax,(%esp)
0847b8f9 +0x0cbd:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b8fe +0x0cc2:  mov    %eax,(%esp)
0847b901 +0x0cc5:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847b906 +0x0cca:  cmp    %eax,%ebx
0847b908 +0x0ccc:  setg   %al
0847b90b +0x0ccf:  test   %al,%al
0847b90d +0x0cd1:  je     0847b954 <+0xd18>
0847b90f +0x0cd3:  lea    -0xc4(%ebp),%eax
0847b915 +0x0cd9:  mov    %eax,(%esp)
0847b918 +0x0cdc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b91d +0x0ce1:  mov    %eax,(%esp)
0847b920 +0x0ce4:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b925 +0x0ce9:  mov    %eax,(%esp)
0847b928 +0x0cec:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847b92d +0x0cf1:  mov    %eax,%ebx
0847b92f +0x0cf3:  add    -0x30(%ebp),%ebx
0847b932 +0x0cf6:  lea    -0xc4(%ebp),%eax
0847b938 +0x0cfc:  mov    %eax,(%esp)
0847b93b +0x0cff:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b940 +0x0d04:  mov    %eax,(%esp)
0847b943 +0x0d07:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b948 +0x0d0c:  mov    %ebx,0x4(%esp)
0847b94c +0x0d10:  mov    %eax,(%esp)
0847b94f +0x0d13:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847b954 +0x0d18:  lea    -0xc4(%ebp),%eax
0847b95a +0x0d1e:  mov    %eax,(%esp)
0847b95d +0x0d21:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b962 +0x0d26:  mov    %eax,(%esp)
0847b965 +0x0d29:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b96a +0x0d2e:  mov    %eax,(%esp)
0847b96d +0x0d31:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847b972 +0x0d36:  mov    %eax,%ebx
0847b974 +0x0d38:  add    -0x30(%ebp),%ebx
0847b977 +0x0d3b:  lea    -0xc4(%ebp),%eax
0847b97d +0x0d41:  mov    %eax,(%esp)
0847b980 +0x0d44:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b985 +0x0d49:  mov    %eax,(%esp)
0847b988 +0x0d4c:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847b98d +0x0d51:  mov    %eax,(%esp)
0847b990 +0x0d54:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847b995 +0x0d59:  cmp    %eax,%ebx
0847b997 +0x0d5b:  setle  %al
0847b99a +0x0d5e:  test   %al,%al
0847b99c +0x0d60:  je     0847b9f7 <+0xdbb>
0847b99e +0x0d62:  mov    -0x34(%ebp),%eax
0847b9a1 +0x0d65:  movzbl 0x1b(%eax),%eax
0847b9a5 +0x0d69:  movzbl %al,%ebx
0847b9a8 +0x0d6c:  lea    -0xc4(%ebp),%eax
0847b9ae +0x0d72:  mov    %eax,(%esp)
0847b9b1 +0x0d75:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847b9b6 +0x0d7a:  mov    %ebx,0x4(%esp)
0847b9ba +0x0d7e:  mov    %eax,(%esp)
0847b9bd +0x0d81:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847b9c2 +0x0d86:  mov    -0x34(%ebp),%eax
0847b9c5 +0x0d89:  movzbl 0x1b(%eax),%eax
0847b9c9 +0x0d8d:  movzbl %al,%eax
0847b9cc +0x0d90:  imul   $0x75,%eax,%eax
0847b9cf +0x0d93:  mov    %eax,%ebx
0847b9d1 +0x0d95:  mov    -0x34(%ebp),%eax
0847b9d4 +0x0d98:  lea    0x1c(%eax),%esi
0847b9d7 +0x0d9b:  lea    -0xc4(%ebp),%eax
0847b9dd +0x0da1:  mov    %eax,(%esp)
0847b9e0 +0x0da4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847b9e5 +0x0da9:  mov    %ebx,0x8(%esp)
0847b9e9 +0x0dad:  mov    %esi,0x4(%esp)
0847b9ed +0x0db1:  mov    %eax,(%esp)
0847b9f0 +0x0db4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847b9f5 +0x0db9:  jmp    0847ba41 <+0xe05>
0847b9f7 +0x0dbb:  lea    -0xc4(%ebp),%eax
0847b9fd +0x0dc1:  mov    %eax,(%esp)
0847ba00 +0x0dc4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ba05 +0x0dc9:  movl   $0x0,0x4(%esp)
0847ba0d +0x0dd1:  mov    %eax,(%esp)
0847ba10 +0x0dd4:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847ba15 +0x0dd9:  movl   $"onAUCTION_MY_REGISTED_ITEM_INFO_AG, resize failed.",0x10(%esp)
0847ba1d +0x0de1:  movl   $0x13bb,0xc(%esp)
0847ba25 +0x0de9:  movl   $&_ZZN21CDispatchServerPacket21dispatchAuctionPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847ba2d +0x0df1:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847ba35 +0x0df9:  movl   $0x1,(%esp)
0847ba3c +0x0e00:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847ba41 +0x0e05:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847ba46 +0x0e0a:  lea    -0xc4(%ebp),%edx
0847ba4c +0x0e10:  mov    %edx,0x8(%esp)
0847ba50 +0x0e14:  movl   $0x1,0x4(%esp)
0847ba58 +0x0e1c:  mov    %eax,(%esp)
0847ba5b +0x0e1f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847ba60 +0x0e24:  jmp    0847ba80 <+0xe44>
0847ba62 +0x0e26:  mov    %edx,%ebx
0847ba64 +0x0e28:  mov    %eax,%esi
0847ba66 +0x0e2a:  lea    -0xc4(%ebp),%eax
0847ba6c +0x0e30:  mov    %eax,(%esp)
0847ba6f +0x0e33:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ba74 +0x0e38:  mov    %esi,%eax
0847ba76 +0x0e3a:  mov    %ebx,%edx
0847ba78 +0x0e3c:  mov    %eax,(%esp)
0847ba7b +0x0e3f:  call   08ae3750 <_Unwind_Resume>
0847ba80 +0x0e44:  lea    -0xc4(%ebp),%eax
0847ba86 +0x0e4a:  mov    %eax,(%esp)
0847ba89 +0x0e4d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ba8e +0x0e52:  jmp    0847c1ef <+0x15b3>
0847ba93 +0x0e57:  mov    0x8(%ebp),%eax
0847ba96 +0x0e5a:  mov    %eax,-0x2c(%ebp)
0847ba99 +0x0e5d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847ba9e +0x0e62:  movl   $0x13ce,0x8(%esp)
0847baa6 +0x0e6a:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847baae +0x0e72:  mov    %eax,(%esp)
0847bab1 +0x0e75:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847bab6 +0x0e7a:  movl   $0x1,0x8(%esp)
0847babe +0x0e82:  mov    %eax,0x4(%esp)
0847bac2 +0x0e86:  lea    -0xcc(%ebp),%eax
0847bac8 +0x0e8c:  mov    %eax,(%esp)
0847bacb +0x0e8f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847bad0 +0x0e94:  lea    -0xcc(%ebp),%eax
0847bad6 +0x0e9a:  mov    %eax,(%esp)
0847bad9 +0x0e9d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bade +0x0ea2:  movl   $0xf7,0x4(%esp)
0847bae6 +0x0eaa:  mov    %eax,(%esp)
0847bae9 +0x0ead:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847baee +0x0eb2:  mov    -0x2c(%ebp),%eax
0847baf1 +0x0eb5:  mov    0x12(%eax),%ebx
0847baf4 +0x0eb8:  lea    -0xcc(%ebp),%eax
0847bafa +0x0ebe:  mov    %eax,(%esp)
0847bafd +0x0ec1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bb02 +0x0ec6:  mov    %ebx,0x4(%esp)
0847bb06 +0x0eca:  mov    %eax,(%esp)
0847bb09 +0x0ecd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bb0e +0x0ed2:  mov    -0x2c(%ebp),%eax
0847bb11 +0x0ed5:  mov    0x16(%eax),%ebx
0847bb14 +0x0ed8:  lea    -0xcc(%ebp),%eax
0847bb1a +0x0ede:  mov    %eax,(%esp)
0847bb1d +0x0ee1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bb22 +0x0ee6:  mov    %ebx,0x4(%esp)
0847bb26 +0x0eea:  mov    %eax,(%esp)
0847bb29 +0x0eed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bb2e +0x0ef2:  mov    -0x2c(%ebp),%eax
0847bb31 +0x0ef5:  movzbl 0x1a(%eax),%eax
0847bb35 +0x0ef9:  movzbl %al,%ebx
0847bb38 +0x0efc:  lea    -0xcc(%ebp),%eax
0847bb3e +0x0f02:  mov    %eax,(%esp)
0847bb41 +0x0f05:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bb46 +0x0f0a:  mov    %ebx,0x4(%esp)
0847bb4a +0x0f0e:  mov    %eax,(%esp)
0847bb4d +0x0f11:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0847bb52 +0x0f16:  mov    -0x2c(%ebp),%eax
0847bb55 +0x0f19:  movzwl 0x1b(%eax),%eax
0847bb59 +0x0f1d:  movzwl %ax,%eax
0847bb5c +0x0f20:  imul   $0x7d,%eax,%eax
0847bb5f +0x0f23:  add    $0x2,%eax
0847bb62 +0x0f26:  mov    %eax,-0x28(%ebp)
0847bb65 +0x0f29:  lea    -0xcc(%ebp),%eax
0847bb6b +0x0f2f:  mov    %eax,(%esp)
0847bb6e +0x0f32:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bb73 +0x0f37:  mov    %eax,(%esp)
0847bb76 +0x0f3a:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847bb7b +0x0f3f:  mov    %eax,(%esp)
0847bb7e +0x0f42:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847bb83 +0x0f47:  mov    %eax,%ebx
0847bb85 +0x0f49:  add    -0x28(%ebp),%ebx
0847bb88 +0x0f4c:  lea    -0xcc(%ebp),%eax
0847bb8e +0x0f52:  mov    %eax,(%esp)
0847bb91 +0x0f55:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bb96 +0x0f5a:  mov    %eax,(%esp)
0847bb99 +0x0f5d:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847bb9e +0x0f62:  mov    %eax,(%esp)
0847bba1 +0x0f65:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847bba6 +0x0f6a:  cmp    %eax,%ebx
0847bba8 +0x0f6c:  setg   %al
0847bbab +0x0f6f:  test   %al,%al
0847bbad +0x0f71:  je     0847bbf4 <+0xfb8>
0847bbaf +0x0f73:  lea    -0xcc(%ebp),%eax
0847bbb5 +0x0f79:  mov    %eax,(%esp)
0847bbb8 +0x0f7c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bbbd +0x0f81:  mov    %eax,(%esp)
0847bbc0 +0x0f84:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847bbc5 +0x0f89:  mov    %eax,(%esp)
0847bbc8 +0x0f8c:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847bbcd +0x0f91:  mov    %eax,%ebx
0847bbcf +0x0f93:  add    -0x28(%ebp),%ebx
0847bbd2 +0x0f96:  lea    -0xcc(%ebp),%eax
0847bbd8 +0x0f9c:  mov    %eax,(%esp)
0847bbdb +0x0f9f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bbe0 +0x0fa4:  mov    %eax,(%esp)
0847bbe3 +0x0fa7:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847bbe8 +0x0fac:  mov    %ebx,0x4(%esp)
0847bbec +0x0fb0:  mov    %eax,(%esp)
0847bbef +0x0fb3:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847bbf4 +0x0fb8:  lea    -0xcc(%ebp),%eax
0847bbfa +0x0fbe:  mov    %eax,(%esp)
0847bbfd +0x0fc1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bc02 +0x0fc6:  mov    %eax,(%esp)
0847bc05 +0x0fc9:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847bc0a +0x0fce:  mov    %eax,(%esp)
0847bc0d +0x0fd1:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0847bc12 +0x0fd6:  mov    %eax,%ebx
0847bc14 +0x0fd8:  add    -0x28(%ebp),%ebx
0847bc17 +0x0fdb:  lea    -0xcc(%ebp),%eax
0847bc1d +0x0fe1:  mov    %eax,(%esp)
0847bc20 +0x0fe4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bc25 +0x0fe9:  mov    %eax,(%esp)
0847bc28 +0x0fec:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0847bc2d +0x0ff1:  mov    %eax,(%esp)
0847bc30 +0x0ff4:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847bc35 +0x0ff9:  cmp    %eax,%ebx
0847bc37 +0x0ffb:  setle  %al
0847bc3a +0x0ffe:  test   %al,%al
0847bc3c +0x1000:  je     0847bc97 <+0x105b>
0847bc3e +0x1002:  mov    -0x2c(%ebp),%eax
0847bc41 +0x1005:  movzwl 0x1b(%eax),%eax
0847bc45 +0x1009:  movzwl %ax,%ebx
0847bc48 +0x100c:  lea    -0xcc(%ebp),%eax
0847bc4e +0x1012:  mov    %eax,(%esp)
0847bc51 +0x1015:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bc56 +0x101a:  mov    %ebx,0x4(%esp)
0847bc5a +0x101e:  mov    %eax,(%esp)
0847bc5d +0x1021:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847bc62 +0x1026:  mov    -0x2c(%ebp),%eax
0847bc65 +0x1029:  movzwl 0x1b(%eax),%eax
0847bc69 +0x102d:  movzwl %ax,%eax
0847bc6c +0x1030:  imul   $0x7d,%eax,%eax
0847bc6f +0x1033:  mov    %eax,%ebx
0847bc71 +0x1035:  mov    -0x2c(%ebp),%eax
0847bc74 +0x1038:  lea    0x1d(%eax),%esi
0847bc77 +0x103b:  lea    -0xcc(%ebp),%eax
0847bc7d +0x1041:  mov    %eax,(%esp)
0847bc80 +0x1044:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bc85 +0x1049:  mov    %ebx,0x8(%esp)
0847bc89 +0x104d:  mov    %esi,0x4(%esp)
0847bc8d +0x1051:  mov    %eax,(%esp)
0847bc90 +0x1054:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847bc95 +0x1059:  jmp    0847bce1 <+0x10a5>
0847bc97 +0x105b:  lea    -0xcc(%ebp),%eax
0847bc9d +0x1061:  mov    %eax,(%esp)
0847bca0 +0x1064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bca5 +0x1069:  movl   $0x0,0x4(%esp)
0847bcad +0x1071:  mov    %eax,(%esp)
0847bcb0 +0x1074:  call   0847dcfa <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x1c
0847bcb5 +0x1079:  movl   $"onAUCTION_MY_BIDDING_INFO_AG, resize failed.",0x10(%esp)
0847bcbd +0x1081:  movl   $0x13e6,0xc(%esp)
0847bcc5 +0x1089:  movl   $&_ZZN21CDispatchServerPacket21dispatchAuctionPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847bccd +0x1091:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847bcd5 +0x1099:  movl   $0x1,(%esp)
0847bcdc +0x10a0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847bce1 +0x10a5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847bce6 +0x10aa:  lea    -0xcc(%ebp),%edx
0847bcec +0x10b0:  mov    %edx,0x8(%esp)
0847bcf0 +0x10b4:  movl   $0x1,0x4(%esp)
0847bcf8 +0x10bc:  mov    %eax,(%esp)
0847bcfb +0x10bf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847bd00 +0x10c4:  jmp    0847bd20 <+0x10e4>
0847bd02 +0x10c6:  mov    %edx,%ebx
0847bd04 +0x10c8:  mov    %eax,%esi
0847bd06 +0x10ca:  lea    -0xcc(%ebp),%eax
0847bd0c +0x10d0:  mov    %eax,(%esp)
0847bd0f +0x10d3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847bd14 +0x10d8:  mov    %esi,%eax
0847bd16 +0x10da:  mov    %ebx,%edx
0847bd18 +0x10dc:  mov    %eax,(%esp)
0847bd1b +0x10df:  call   08ae3750 <_Unwind_Resume>
0847bd20 +0x10e4:  lea    -0xcc(%ebp),%eax
0847bd26 +0x10ea:  mov    %eax,(%esp)
0847bd29 +0x10ed:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847bd2e +0x10f2:  jmp    0847c1ef <+0x15b3>
0847bd33 +0x10f7:  mov    0x8(%ebp),%eax
0847bd36 +0x10fa:  mov    %eax,-0x24(%ebp)
0847bd39 +0x10fd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847bd3e +0x1102:  movl   $0x142a,0x8(%esp)
0847bd46 +0x110a:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847bd4e +0x1112:  mov    %eax,(%esp)
0847bd51 +0x1115:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847bd56 +0x111a:  movl   $0x1,0x8(%esp)
0847bd5e +0x1122:  mov    %eax,0x4(%esp)
0847bd62 +0x1126:  lea    -0xd4(%ebp),%eax
0847bd68 +0x112c:  mov    %eax,(%esp)
0847bd6b +0x112f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847bd70 +0x1134:  lea    -0xd4(%ebp),%eax
0847bd76 +0x113a:  mov    %eax,(%esp)
0847bd79 +0x113d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bd7e +0x1142:  movl   $0xf8,0x4(%esp)
0847bd86 +0x114a:  mov    %eax,(%esp)
0847bd89 +0x114d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bd8e +0x1152:  mov    -0x24(%ebp),%eax
0847bd91 +0x1155:  mov    0x12(%eax),%ebx
0847bd94 +0x1158:  lea    -0xd4(%ebp),%eax
0847bd9a +0x115e:  mov    %eax,(%esp)
0847bd9d +0x1161:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bda2 +0x1166:  mov    %ebx,0x4(%esp)
0847bda6 +0x116a:  mov    %eax,(%esp)
0847bda9 +0x116d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bdae +0x1172:  lea    -0xd4(%ebp),%eax
0847bdb4 +0x1178:  mov    %eax,(%esp)
0847bdb7 +0x117b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bdbc +0x1180:  mov    %eax,(%esp)
0847bdbf +0x1183:  call   0847ddd6 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0xf8>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0xf8
0847bdc4 +0x1188:  mov    %eax,-0x20(%ebp)
0847bdc7 +0x118b:  mov    -0x24(%ebp),%eax
0847bdca +0x118e:  movzbl 0x16(%eax),%edx
0847bdce +0x1192:  mov    -0x20(%ebp),%eax
0847bdd1 +0x1195:  mov    %dl,(%eax)
0847bdd3 +0x1197:  mov    -0x24(%ebp),%eax
0847bdd6 +0x119a:  mov    0x1b(%eax),%edx
0847bdd9 +0x119d:  mov    0x17(%eax),%eax
0847bddc +0x11a0:  mov    -0x20(%ebp),%ecx
0847bddf +0x11a3:  mov    %eax,0x1(%ecx)
0847bde2 +0x11a6:  mov    %edx,0x5(%ecx)
0847bde5 +0x11a9:  mov    -0x24(%ebp),%eax
0847bde8 +0x11ac:  mov    0x1f(%eax),%edx
0847bdeb +0x11af:  mov    -0x20(%ebp),%eax
0847bdee +0x11b2:  mov    %edx,0x9(%eax)
0847bdf1 +0x11b5:  mov    -0x24(%ebp),%eax
0847bdf4 +0x11b8:  mov    0x23(%eax),%edx
0847bdf7 +0x11bb:  mov    -0x20(%ebp),%eax
0847bdfa +0x11be:  mov    %edx,0xd(%eax)
0847bdfd +0x11c1:  mov    -0x24(%ebp),%eax
0847be00 +0x11c4:  mov    0x27(%eax),%edx
0847be03 +0x11c7:  mov    -0x20(%ebp),%eax
0847be06 +0x11ca:  mov    %edx,0x11(%eax)
0847be09 +0x11cd:  mov    -0x24(%ebp),%eax
0847be0c +0x11d0:  movzbl 0x2b(%eax),%edx
0847be10 +0x11d4:  mov    -0x20(%ebp),%eax
0847be13 +0x11d7:  mov    %dl,0x15(%eax)
0847be16 +0x11da:  mov    -0x24(%ebp),%eax
0847be19 +0x11dd:  mov    0x2c(%eax),%edx
0847be1c +0x11e0:  mov    -0x20(%ebp),%eax
0847be1f +0x11e3:  mov    %edx,0x16(%eax)
0847be22 +0x11e6:  mov    -0x24(%ebp),%eax
0847be25 +0x11e9:  movzwl 0x30(%eax),%edx
0847be29 +0x11ed:  mov    -0x20(%ebp),%eax
0847be2c +0x11f0:  mov    %dx,0x1a(%eax)
0847be30 +0x11f4:  mov    -0x24(%ebp),%eax
0847be33 +0x11f7:  mov    0x32(%eax),%edx
0847be36 +0x11fa:  mov    -0x20(%ebp),%eax
0847be39 +0x11fd:  mov    %edx,0x1c(%eax)
0847be3c +0x1200:  mov    -0x24(%ebp),%eax
0847be3f +0x1203:  movzbl 0x36(%eax),%edx
0847be43 +0x1207:  mov    -0x20(%ebp),%eax
0847be46 +0x120a:  mov    %dl,0x20(%eax)
0847be49 +0x120d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847be4e +0x1212:  lea    -0xd4(%ebp),%edx
0847be54 +0x1218:  mov    %edx,0x8(%esp)
0847be58 +0x121c:  movl   $0x1,0x4(%esp)
0847be60 +0x1224:  mov    %eax,(%esp)
0847be63 +0x1227:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847be68 +0x122c:  jmp    0847be88 <+0x124c>
0847be6a +0x122e:  mov    %edx,%ebx
0847be6c +0x1230:  mov    %eax,%esi
0847be6e +0x1232:  lea    -0xd4(%ebp),%eax
0847be74 +0x1238:  mov    %eax,(%esp)
0847be77 +0x123b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847be7c +0x1240:  mov    %esi,%eax
0847be7e +0x1242:  mov    %ebx,%edx
0847be80 +0x1244:  mov    %eax,(%esp)
0847be83 +0x1247:  call   08ae3750 <_Unwind_Resume>
0847be88 +0x124c:  lea    -0xd4(%ebp),%eax
0847be8e +0x1252:  mov    %eax,(%esp)
0847be91 +0x1255:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847be96 +0x125a:  jmp    0847c1ef <+0x15b3>
0847be9b +0x125f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847bea0 +0x1264:  movl   $0x1447,0x8(%esp)
0847bea8 +0x126c:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847beb0 +0x1274:  mov    %eax,(%esp)
0847beb3 +0x1277:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847beb8 +0x127c:  movl   $0x1,0x8(%esp)
0847bec0 +0x1284:  mov    %eax,0x4(%esp)
0847bec4 +0x1288:  lea    -0xdc(%ebp),%eax
0847beca +0x128e:  mov    %eax,(%esp)
0847becd +0x1291:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847bed2 +0x1296:  lea    -0xdc(%ebp),%eax
0847bed8 +0x129c:  mov    %eax,(%esp)
0847bedb +0x129f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bee0 +0x12a4:  movl   $0xf9,0x4(%esp)
0847bee8 +0x12ac:  mov    %eax,(%esp)
0847beeb +0x12af:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bef0 +0x12b4:  lea    -0xdc(%ebp),%eax
0847bef6 +0x12ba:  mov    %eax,(%esp)
0847bef9 +0x12bd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847befe +0x12c2:  movl   $0xffffffff,0x4(%esp)
0847bf06 +0x12ca:  mov    %eax,(%esp)
0847bf09 +0x12cd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bf0e +0x12d2:  lea    -0xdc(%ebp),%eax
0847bf14 +0x12d8:  mov    %eax,(%esp)
0847bf17 +0x12db:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847bf1c +0x12e0:  mov    %eax,(%esp)
0847bf1f +0x12e3:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847bf24 +0x12e8:  mov    %eax,-0x1c(%ebp)
0847bf27 +0x12eb:  mov    -0x1c(%ebp),%eax
0847bf2a +0x12ee:  movb   $0x1,0x4(%eax)
0847bf2e +0x12f2:  mov    -0x1c(%ebp),%eax
0847bf31 +0x12f5:  movl   $0x0,(%eax)
0847bf37 +0x12fb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847bf3c +0x1300:  lea    -0xdc(%ebp),%edx
0847bf42 +0x1306:  mov    %edx,0x8(%esp)
0847bf46 +0x130a:  movl   $0x1,0x4(%esp)
0847bf4e +0x1312:  mov    %eax,(%esp)
0847bf51 +0x1315:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847bf56 +0x131a:  jmp    0847bf76 <+0x133a>
0847bf58 +0x131c:  mov    %edx,%ebx
0847bf5a +0x131e:  mov    %eax,%esi
0847bf5c +0x1320:  lea    -0xdc(%ebp),%eax
0847bf62 +0x1326:  mov    %eax,(%esp)
0847bf65 +0x1329:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847bf6a +0x132e:  mov    %esi,%eax
0847bf6c +0x1330:  mov    %ebx,%edx
0847bf6e +0x1332:  mov    %eax,(%esp)
0847bf71 +0x1335:  call   08ae3750 <_Unwind_Resume>
0847bf76 +0x133a:  lea    -0xdc(%ebp),%eax
0847bf7c +0x1340:  mov    %eax,(%esp)
0847bf7f +0x1343:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847bf84 +0x1348:  jmp    0847c1ef <+0x15b3>
0847bf89 +0x134d:  mov    0x8(%ebp),%eax
0847bf8c +0x1350:  mov    %eax,-0x18(%ebp)
0847bf8f +0x1353:  mov    -0x18(%ebp),%eax
0847bf92 +0x1356:  movzbl 0x12(%eax),%eax
0847bf96 +0x135a:  test   %al,%al
0847bf98 +0x135c:  je     0847c08c <+0x1450>
0847bf9e +0x1362:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847bfa3 +0x1367:  movl   $0x1464,0x8(%esp)
0847bfab +0x136f:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847bfb3 +0x1377:  mov    %eax,(%esp)
0847bfb6 +0x137a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847bfbb +0x137f:  movl   $0x1,0x8(%esp)
0847bfc3 +0x1387:  mov    %eax,0x4(%esp)
0847bfc7 +0x138b:  lea    -0xe4(%ebp),%eax
0847bfcd +0x1391:  mov    %eax,(%esp)
0847bfd0 +0x1394:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847bfd5 +0x1399:  lea    -0xe4(%ebp),%eax
0847bfdb +0x139f:  mov    %eax,(%esp)
0847bfde +0x13a2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847bfe3 +0x13a7:  movl   $0xf9,0x4(%esp)
0847bfeb +0x13af:  mov    %eax,(%esp)
0847bfee +0x13b2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847bff3 +0x13b7:  lea    -0xe4(%ebp),%eax
0847bff9 +0x13bd:  mov    %eax,(%esp)
0847bffc +0x13c0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c001 +0x13c5:  movl   $0xffffffff,0x4(%esp)
0847c009 +0x13cd:  mov    %eax,(%esp)
0847c00c +0x13d0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c011 +0x13d5:  lea    -0xe4(%ebp),%eax
0847c017 +0x13db:  mov    %eax,(%esp)
0847c01a +0x13de:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c01f +0x13e3:  mov    %eax,(%esp)
0847c022 +0x13e6:  call   0847dd52 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x74
0847c027 +0x13eb:  mov    %eax,-0x14(%ebp)
0847c02a +0x13ee:  mov    -0x14(%ebp),%eax
0847c02d +0x13f1:  movb   $0x1,0x4(%eax)
0847c031 +0x13f5:  mov    -0x14(%ebp),%eax
0847c034 +0x13f8:  movl   $0x0,(%eax)
0847c03a +0x13fe:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c03f +0x1403:  lea    -0xe4(%ebp),%edx
0847c045 +0x1409:  mov    %edx,0x8(%esp)
0847c049 +0x140d:  movl   $0x1,0x4(%esp)
0847c051 +0x1415:  mov    %eax,(%esp)
0847c054 +0x1418:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c059 +0x141d:  jmp    0847c079 <+0x143d>
0847c05b +0x141f:  mov    %edx,%ebx
0847c05d +0x1421:  mov    %eax,%esi
0847c05f +0x1423:  lea    -0xe4(%ebp),%eax
0847c065 +0x1429:  mov    %eax,(%esp)
0847c068 +0x142c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c06d +0x1431:  mov    %esi,%eax
0847c06f +0x1433:  mov    %ebx,%edx
0847c071 +0x1435:  mov    %eax,(%esp)
0847c074 +0x1438:  call   08ae3750 <_Unwind_Resume>
0847c079 +0x143d:  lea    -0xe4(%ebp),%eax
0847c07f +0x1443:  mov    %eax,(%esp)
0847c082 +0x1446:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c087 +0x144b:  jmp    0847c1ef <+0x15b3>
0847c08c +0x1450:  call   0863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>  ; Timer_CheckAuctionReady::RegistNextTimer()
0847c091 +0x1455:  jmp    0847c1ef <+0x15b3>
0847c096 +0x145a:  mov    0x8(%ebp),%eax
0847c099 +0x145d:  mov    %eax,-0x10(%ebp)
0847c09c +0x1460:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847c0a1 +0x1465:  movl   $0x1485,0x8(%esp)
0847c0a9 +0x146d:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c0b1 +0x1475:  mov    %eax,(%esp)
0847c0b4 +0x1478:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847c0b9 +0x147d:  movl   $0x1,0x8(%esp)
0847c0c1 +0x1485:  mov    %eax,0x4(%esp)
0847c0c5 +0x1489:  lea    -0xec(%ebp),%eax
0847c0cb +0x148f:  mov    %eax,(%esp)
0847c0ce +0x1492:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847c0d3 +0x1497:  lea    -0xec(%ebp),%eax
0847c0d9 +0x149d:  mov    %eax,(%esp)
0847c0dc +0x14a0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c0e1 +0x14a5:  movl   $0x20d,0x4(%esp)
0847c0e9 +0x14ad:  mov    %eax,(%esp)
0847c0ec +0x14b0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c0f1 +0x14b5:  mov    -0x10(%ebp),%eax
0847c0f4 +0x14b8:  mov    0x12(%eax),%ebx
0847c0f7 +0x14bb:  lea    -0xec(%ebp),%eax
0847c0fd +0x14c1:  mov    %eax,(%esp)
0847c100 +0x14c4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847c105 +0x14c9:  mov    %ebx,0x4(%esp)
0847c109 +0x14cd:  mov    %eax,(%esp)
0847c10c +0x14d0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847c111 +0x14d5:  lea    -0xec(%ebp),%eax
0847c117 +0x14db:  mov    %eax,(%esp)
0847c11a +0x14de:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847c11f +0x14e3:  mov    %eax,(%esp)
0847c122 +0x14e6:  call   0847ddec <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x10e>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x10e
0847c127 +0x14eb:  mov    %eax,-0xc(%ebp)
0847c12a +0x14ee:  mov    -0x10(%ebp),%eax
0847c12d +0x14f1:  mov    0x16(%eax),%edx
0847c130 +0x14f4:  mov    -0xc(%ebp),%eax
0847c133 +0x14f7:  mov    %edx,(%eax)
0847c135 +0x14f9:  mov    -0x10(%ebp),%eax
0847c138 +0x14fc:  mov    0x1a(%eax),%edx
0847c13b +0x14ff:  mov    -0xc(%ebp),%eax
0847c13e +0x1502:  mov    %edx,0x4(%eax)
0847c141 +0x1505:  mov    -0x10(%ebp),%eax
0847c144 +0x1508:  movzbl 0x1e(%eax),%edx
0847c148 +0x150c:  mov    -0xc(%ebp),%eax
0847c14b +0x150f:  mov    %dl,0x8(%eax)
0847c14e +0x1512:  mov    -0x10(%ebp),%eax
0847c151 +0x1515:  movzbl 0x1f(%eax),%edx
0847c155 +0x1519:  mov    -0xc(%ebp),%eax
0847c158 +0x151c:  mov    %dl,0x9(%eax)
0847c15b +0x151f:  mov    -0x10(%ebp),%eax
0847c15e +0x1522:  mov    0x24(%eax),%edx
0847c161 +0x1525:  mov    0x20(%eax),%eax
0847c164 +0x1528:  mov    -0xc(%ebp),%ecx
0847c167 +0x152b:  mov    %eax,0xa(%ecx)
0847c16a +0x152e:  mov    %edx,0xe(%ecx)
0847c16d +0x1531:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847c172 +0x1536:  lea    -0xec(%ebp),%edx
0847c178 +0x153c:  mov    %edx,0x8(%esp)
0847c17c +0x1540:  movl   $0x1,0x4(%esp)
0847c184 +0x1548:  mov    %eax,(%esp)
0847c187 +0x154b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847c18c +0x1550:  jmp    0847c1ac <+0x1570>
0847c18e +0x1552:  mov    %edx,%ebx
0847c190 +0x1554:  mov    %eax,%esi
0847c192 +0x1556:  lea    -0xec(%ebp),%eax
0847c198 +0x155c:  mov    %eax,(%esp)
0847c19b +0x155f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c1a0 +0x1564:  mov    %esi,%eax
0847c1a2 +0x1566:  mov    %ebx,%edx
0847c1a4 +0x1568:  mov    %eax,(%esp)
0847c1a7 +0x156b:  call   08ae3750 <_Unwind_Resume>
0847c1ac +0x1570:  lea    -0xec(%ebp),%eax
0847c1b2 +0x1576:  mov    %eax,(%esp)
0847c1b5 +0x1579:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847c1ba +0x157e:  jmp    0847c1ef <+0x15b3>
0847c1bc +0x1580:  mov    -0x7c(%ebp),%eax
0847c1bf +0x1583:  mov    %eax,0x14(%esp)
0847c1c3 +0x1587:  movl   $"[AUCTION PACKET ERROR] not exist packet id (%d)",0x10(%esp)
0847c1cb +0x158f:  movl   $0x149c,0xc(%esp)
0847c1d3 +0x1597:  movl   $&_ZZN21CDispatchServerPacket21dispatchAuctionPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847c1db +0x159f:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847c1e3 +0x15a7:  movl   $0x1,(%esp)
0847c1ea +0x15ae:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847c1ef +0x15b3:  mov    $0x1,%eax
0847c1f4 +0x15b8:  add    $0x110,%esp
0847c1fa +0x15be:  pop    %ebx
0847c1fb +0x15bf:  pop    %esi
0847c1fc +0x15c0:  pop    %ebp
0847c1fd +0x15c1:  ret
```

## 反编译 C

```c
// CDispatchServerPacket::dispatchAuctionPacket @ 0x847ac3c

/* CDispatchServerPacket::dispatchAuctionPacket(char*) */

undefined4 CDispatchServerPacket::dispatchAuctionPacket(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  uchar uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
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
  CStreamGuard local_90 [8];
  CStreamGuard local_88 [8];
  undefined4 local_80;
  int local_7c;
  char *local_78;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_74;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_70;
  char *local_6c;
  SIG_AUCTION_RESULT_ASK_PRICE *local_68;
  int local_64;
  char *local_60;
  SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *local_5c;
  char *local_58;
  SIG_AUCTION_RESULT_REGIST *local_54;
  char *local_50;
  SIG_AUCTION_RESULT_BIDDING *local_4c;
  char *local_48;
  SIG_AUCTION_RESULT_REGIST_CANCEL *local_44;
  char *local_40;
  int local_3c;
  char *local_38;
  int local_34;
  char *local_30;
  int local_2c;
  char *local_28;
  SIG_AUCTION_LOG_MESSAGE_AG *local_24;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_20;
  char *local_1c;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_18;
  char *local_14;
  SIG_AUCTION_RESULT_BUY_ITEM_APIECE *local_10;
  
  local_80 = nsl::PACKET_HEADER::getPacketID((PACKET_HEADER *)param_1);
  local_7c = nsl::PACKET_HEADER::getCategory((PACKET_HEADER *)param_1);
  if (local_7c == 0x13) {
    dispatchPointPacket(param_1);
  }
  else {
    switch(local_80) {
    case 0:
      local_78 = param_1;
      if (*(int *)(param_1 + 0xe) == 0) {
        pSVar9 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x128f);
        CStreamGuard::CStreamGuard(local_88,pSVar9,true);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_88);
                    /* try { // try from 0847acfa to 0847ad64 has its CatchHandler @ 0847ad67 */
        CStreamGuard::operator<<(pCVar10,0xf9);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_88);
        CStreamGuard::operator<<(pCVar10,-1);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_88);
        local_74 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
        *(undefined4 *)local_74 = 0;
        local_74[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_88);
        CStreamGuard::~CStreamGuard(local_88);
      }
      else if (*(int *)(param_1 + 0xe) == 2) {
        Timer_CheckAuctionReady::RegistNextTimer();
      }
      else if (*(int *)(param_1 + 0xe) == 1) {
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x12a3,
                   "AUCTION REGIST SERVER ID DUPLICATE");
      }
      else {
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x12a7,
                   "AUCTION REGIST UNHANDLED ERROR");
      }
      break;
    case 1:
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x12b2);
      CStreamGuard::CStreamGuard(local_90,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_90);
                    /* try { // try from 0847ae6a to 0847aed4 has its CatchHandler @ 0847aed7 */
      CStreamGuard::operator<<(pCVar10,0xf9);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_90);
      CStreamGuard::operator<<(pCVar10,-1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_90);
      local_70 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
      *(undefined4 *)local_70 = 0;
      local_70[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_90);
      CStreamGuard::~CStreamGuard(local_90);
      break;
    case 2:
      local_6c = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x12cd);
      CStreamGuard::CStreamGuard(local_98,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_98);
                    /* try { // try from 0847af5e to 0847b024 has its CatchHandler @ 0847b027 */
      CStreamGuard::operator<<(pCVar10,0xf0);
      iVar7 = *(int *)(local_6c + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_98);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_98);
      local_68 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_PRICE>(pCVar10);
      *(undefined4 *)local_68 = 0;
      *(undefined4 *)(local_68 + 4) = *(undefined4 *)(local_6c + 0x16);
      *(undefined4 *)(local_68 + 8) = *(undefined4 *)(local_6c + 0x1a);
      for (local_64 = 0; local_64 < 3; local_64 = local_64 + 1) {
        *(undefined4 *)(local_68 + local_64 * 4 + 0xc) =
             *(undefined4 *)(local_6c + (local_64 + 4) * 4 + 0xe);
        *(undefined4 *)(local_68 + (local_64 + 4) * 4 + 8) =
             *(undefined4 *)(local_6c + (local_64 + 8) * 4 + 10);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_98);
      CStreamGuard::~CStreamGuard(local_98);
      break;
    case 3:
      local_60 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x12f0);
      CStreamGuard::CStreamGuard(local_a0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
                    /* try { // try from 0847b0ae to 0847b19c has its CatchHandler @ 0847b19f */
      CStreamGuard::operator<<(pCVar10,0xf1);
      iVar7 = *(int *)(local_60 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_a0);
      local_5c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM>(pCVar10);
      *(undefined4 *)(local_5c + 4) = *(undefined4 *)(local_60 + 0x16);
      *(undefined2 *)(local_5c + 8) = *(undefined2 *)(local_60 + 0x1a);
      local_5c[10] = *(SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *)(local_60 + 0x1c);
      *(undefined2 *)(local_5c + 0xb) = *(undefined2 *)(local_60 + 0x1d);
      *(undefined4 *)(local_5c + 0xd) = *(undefined4 *)(local_60 + 0x1f);
      *(undefined4 *)(local_5c + 0x11) = *(undefined4 *)(local_60 + 0x23);
      *(undefined4 *)(local_5c + 0x15) = *(undefined4 *)(local_60 + 0x27);
      *(undefined4 *)(local_5c + 0x19) = *(undefined4 *)(local_60 + 0x2b);
      *(undefined4 *)(local_5c + 0x1d) = *(undefined4 *)(local_60 + 0x2f);
      *(undefined4 *)(local_5c + 0x21) = *(undefined4 *)(local_60 + 0x33);
      *(undefined4 *)(local_5c + 0x25) = *(undefined4 *)(local_60 + 0x37);
      *(undefined4 *)(local_5c + 0x29) = *(undefined4 *)(local_60 + 0x3b);
      *(undefined4 *)local_5c = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a0);
      CStreamGuard::~CStreamGuard(local_a0);
      break;
    case 4:
      local_58 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1319);
      CStreamGuard::CStreamGuard(local_a8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
                    /* try { // try from 0847b226 to 0847b2b1 has its CatchHandler @ 0847b2b4 */
      CStreamGuard::operator<<(pCVar10,0xf2);
      iVar7 = *(int *)(local_58 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_a8);
      local_54 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST>(pCVar10);
      *(undefined4 *)(local_54 + 4) = *(undefined4 *)(local_58 + 0x16);
      local_54[8] = *(SIG_AUCTION_RESULT_REGIST *)(local_58 + 0x1a);
      local_54[9] = *(SIG_AUCTION_RESULT_REGIST *)(local_58 + 0x1b);
      *(undefined4 *)local_54 = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a8);
      CStreamGuard::~CStreamGuard(local_a8);
      break;
    case 5:
      local_50 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1336);
      CStreamGuard::CStreamGuard(local_b0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
                    /* try { // try from 0847b33b to 0847b3e4 has its CatchHandler @ 0847b3e7 */
      CStreamGuard::operator<<(pCVar10,0xf3);
      iVar7 = *(int *)(local_50 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_b0);
      local_4c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_BIDDING>(pCVar10);
      *(undefined4 *)(local_4c + 4) = *(undefined4 *)(local_50 + 0x16);
      *(undefined4 *)(local_4c + 8) = *(undefined4 *)(local_50 + 0x1a);
      local_4c[0xc] = *(SIG_AUCTION_RESULT_BIDDING *)(local_50 + 0x1e);
      local_4c[0xd] = *(SIG_AUCTION_RESULT_BIDDING *)(local_50 + 0x1f);
      uVar6 = *(undefined4 *)(local_50 + 0x24);
      *(undefined4 *)(local_4c + 0xe) = *(undefined4 *)(local_50 + 0x20);
      *(undefined4 *)(local_4c + 0x12) = uVar6;
      *(undefined4 *)local_4c = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b0);
      CStreamGuard::~CStreamGuard(local_b0);
      break;
    case 6:
      local_48 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x135a);
      CStreamGuard::CStreamGuard(local_b8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
                    /* try { // try from 0847b46e to 0847b4f9 has its CatchHandler @ 0847b4fc */
      CStreamGuard::operator<<(pCVar10,0xf4);
      iVar7 = *(int *)(local_48 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_b8);
      local_44 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST_CANCEL>(pCVar10);
      *(undefined4 *)(local_44 + 4) = *(undefined4 *)(local_48 + 0x16);
      local_44[8] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_48 + 0x1a);
      local_44[9] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_48 + 0x1b);
      *(undefined4 *)local_44 = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b8);
      CStreamGuard::~CStreamGuard(local_b8);
      break;
    case 7:
      local_40 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1377);
      CStreamGuard::CStreamGuard(local_c0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
                    /* try { // try from 0847b583 to 0847b7bf has its CatchHandler @ 0847b7c2 */
      CStreamGuard::operator<<(pCVar10,0xf5);
      iVar7 = *(int *)(local_40 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      iVar7 = *(int *)(local_40 + 0x16);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      uVar3 = local_40[0x1a];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,uVar3);
      uVar5 = *(uint *)(local_40 + 0x1b);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,uVar5);
      local_3c = (uint)*(ushort *)(local_40 + 0x1f) * 0x89 + 2;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_3c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        iVar7 = Stream::in_ptr(pSVar9);
        iVar7 = iVar7 + local_3c;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        Stream::resize(pSVar9,iVar7);
      }
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_3c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
        CStreamGuard::operator<<(pCVar10,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x1390,
                   "onAUCTION_ITEM_LIST_AG, resize failed.");
      }
      else {
        uVar4 = *(ushort *)(local_40 + 0x1f);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
        CStreamGuard::operator<<(pCVar10,uVar4);
        uVar4 = *(ushort *)(local_40 + 0x1f);
        pcVar1 = local_40 + 0x21;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
        CStreamGuard::put_binary(pCVar10,pcVar1,(uint)uVar4 * 0x89);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c0);
      CStreamGuard::~CStreamGuard(local_c0);
      break;
    case 8:
      local_38 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x13a3);
      CStreamGuard::CStreamGuard(local_c8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
                    /* try { // try from 0847b849 to 0847ba5f has its CatchHandler @ 0847ba62 */
      CStreamGuard::operator<<(pCVar10,0xf6);
      iVar7 = *(int *)(local_38 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      iVar7 = *(int *)(local_38 + 0x16);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      uVar3 = local_38[0x1a];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
      CStreamGuard::operator<<(pCVar10,uVar3);
      local_34 = (uint)(byte)local_38[0x1b] * 0x75 + 1;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_34;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        iVar7 = Stream::in_ptr(pSVar9);
        iVar7 = iVar7 + local_34;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        Stream::resize(pSVar9,iVar7);
      }
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_34;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
        CStreamGuard::operator<<(pCVar10,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x13bb,
                   "onAUCTION_MY_REGISTED_ITEM_INFO_AG, resize failed.");
      }
      else {
        uVar3 = local_38[0x1b];
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
        CStreamGuard::operator<<(pCVar10,uVar3);
        bVar2 = local_38[0x1b];
        pcVar1 = local_38 + 0x1c;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
        CStreamGuard::put_binary(pCVar10,pcVar1,(uint)bVar2 * 0x75);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c8);
      CStreamGuard::~CStreamGuard(local_c8);
      break;
    case 9:
      local_30 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x13ce);
      CStreamGuard::CStreamGuard(local_d0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
                    /* try { // try from 0847bae9 to 0847bcff has its CatchHandler @ 0847bd02 */
      CStreamGuard::operator<<(pCVar10,0xf7);
      iVar7 = *(int *)(local_30 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      iVar7 = *(int *)(local_30 + 0x16);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      uVar3 = local_30[0x1a];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
      CStreamGuard::operator<<(pCVar10,uVar3);
      local_2c = (uint)*(ushort *)(local_30 + 0x1b) * 0x7d + 2;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_2c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        iVar7 = Stream::in_ptr(pSVar9);
        iVar7 = iVar7 + local_2c;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        Stream::resize(pSVar9,iVar7);
      }
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_2c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
        CStreamGuard::operator<<(pCVar10,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x13e6,
                   "onAUCTION_MY_BIDDING_INFO_AG, resize failed.");
      }
      else {
        uVar4 = *(ushort *)(local_30 + 0x1b);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
        CStreamGuard::operator<<(pCVar10,uVar4);
        uVar4 = *(ushort *)(local_30 + 0x1b);
        pcVar1 = local_30 + 0x1d;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
        CStreamGuard::put_binary(pCVar10,pcVar1,(uint)uVar4 * 0x7d);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d0);
      CStreamGuard::~CStreamGuard(local_d0);
      break;
    default:
      LogManager::logFormat
                (1,"DispatchServerPacket.cpp",
                 "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x149c,
                 "[AUCTION PACKET ERROR] not exist packet id (%d)",local_80);
      break;
    case 0xb:
      local_28 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x142a);
      CStreamGuard::CStreamGuard(local_d8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
                    /* try { // try from 0847bd89 to 0847be67 has its CatchHandler @ 0847be6a */
      CStreamGuard::operator<<(pCVar10,0xf8);
      iVar7 = *(int *)(local_28 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
      local_24 = CStreamGuard::GetInBuffer<SIG_AUCTION_LOG_MESSAGE_AG>(pCVar10);
      *local_24 = *(SIG_AUCTION_LOG_MESSAGE_AG *)(local_28 + 0x16);
      uVar6 = *(undefined4 *)(local_28 + 0x1b);
      *(undefined4 *)(local_24 + 1) = *(undefined4 *)(local_28 + 0x17);
      *(undefined4 *)(local_24 + 5) = uVar6;
      *(undefined4 *)(local_24 + 9) = *(undefined4 *)(local_28 + 0x1f);
      *(undefined4 *)(local_24 + 0xd) = *(undefined4 *)(local_28 + 0x23);
      *(undefined4 *)(local_24 + 0x11) = *(undefined4 *)(local_28 + 0x27);
      local_24[0x15] = *(SIG_AUCTION_LOG_MESSAGE_AG *)(local_28 + 0x2b);
      *(undefined4 *)(local_24 + 0x16) = *(undefined4 *)(local_28 + 0x2c);
      *(undefined2 *)(local_24 + 0x1a) = *(undefined2 *)(local_28 + 0x30);
      *(undefined4 *)(local_24 + 0x1c) = *(undefined4 *)(local_28 + 0x32);
      local_24[0x20] = *(SIG_AUCTION_LOG_MESSAGE_AG *)(local_28 + 0x36);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d8);
      CStreamGuard::~CStreamGuard(local_d8);
      break;
    case 0xc:
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1447);
      CStreamGuard::CStreamGuard(local_e0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
                    /* try { // try from 0847beeb to 0847bf55 has its CatchHandler @ 0847bf58 */
      CStreamGuard::operator<<(pCVar10,0xf9);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar10,-1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      local_20 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
      local_20[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
      *(undefined4 *)local_20 = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e0);
      CStreamGuard::~CStreamGuard(local_e0);
      break;
    case 0xd:
      local_1c = param_1;
      if (param_1[0x12] == '\0') {
        Timer_CheckAuctionReady::RegistNextTimer();
      }
      else {
        pSVar9 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1464);
        CStreamGuard::CStreamGuard(local_e8,pSVar9,true);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
                    /* try { // try from 0847bfee to 0847c058 has its CatchHandler @ 0847c05b */
        CStreamGuard::operator<<(pCVar10,0xf9);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
        CStreamGuard::operator<<(pCVar10,-1);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_e8);
        local_18 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
        local_18[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
        *(undefined4 *)local_18 = 0;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e8);
        CStreamGuard::~CStreamGuard(local_e8);
      }
      break;
    case 0xe:
      local_14 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1485);
      CStreamGuard::CStreamGuard(local_f0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
                    /* try { // try from 0847c0ec to 0847c18b has its CatchHandler @ 0847c18e */
      CStreamGuard::operator<<(pCVar10,0x20d);
      iVar7 = *(int *)(local_14 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_f0);
      local_10 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_BUY_ITEM_APIECE>(pCVar10);
      *(undefined4 *)local_10 = *(undefined4 *)(local_14 + 0x16);
      *(undefined4 *)(local_10 + 4) = *(undefined4 *)(local_14 + 0x1a);
      local_10[8] = *(SIG_AUCTION_RESULT_BUY_ITEM_APIECE *)(local_14 + 0x1e);
      local_10[9] = *(SIG_AUCTION_RESULT_BUY_ITEM_APIECE *)(local_14 + 0x1f);
      uVar6 = *(undefined4 *)(local_14 + 0x24);
      *(undefined4 *)(local_10 + 10) = *(undefined4 *)(local_14 + 0x20);
      *(undefined4 *)(local_10 + 0xe) = uVar6;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f0);
      CStreamGuard::~CStreamGuard(local_f0);
    }
  }
  return 1;
}
```
