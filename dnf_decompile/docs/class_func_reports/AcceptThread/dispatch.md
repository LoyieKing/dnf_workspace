# dispatch

`_ZN12AcceptThread8dispatchEPv`

`AcceptThread::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `AcceptThread` | `0x0857cc5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857cc5a  _ZN12AcceptThread8dispatchEPv
#           AcceptThread::dispatch(void*)
# range [0x0857cc5a, 0x0857d553]
0857cc5a +0x000:  push   %ebp
0857cc5b +0x001:  mov    %esp,%ebp
0857cc5d +0x003:  push   %esi
0857cc5e +0x004:  push   %ebx
0857cc5f +0x005:  sub    $&_ZL14gUnicodeBuffer+0xcf54,%esp
0857cc65 +0x00b:  movl   $0x0,-0x60(%ebp)
0857cc6c +0x012:  movl   $0xea60,-0x64(%ebp)
0857cc73 +0x019:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857cc78 +0x01e:  mov    %eax,(%esp)
0857cc7b +0x021:  call   0857f428 <_GLOBAL__I_g_bUdp_TH_start+0x3f>  ; global constructors keyed to g_bUdp_TH_start+0x3f
0857cc80 +0x026:  mov    %ax,-0x1e(%ebp)
0857cc84 +0x02a:  movl   $0x0,0x8(%esp)
0857cc8c +0x032:  movl   $0x1,0x4(%esp)
0857cc94 +0x03a:  movl   $0x2,(%esp)
0857cc9b +0x041:  call   0807dab0 <_init+0x3a8>
0857cca0 +0x046:  mov    %eax,-0x2c(%ebp)
0857cca3 +0x049:  cmpl   $0x0,-0x2c(%ebp)
0857cca7 +0x04d:  jns    0857ccda <+0x80>
0857cca9 +0x04f:  movl   $"[AcceptThread::dispatch] Fail to Create ListenSocket.",0x10(%esp)
0857ccb1 +0x057:  movl   $0x18e,0xc(%esp)
0857ccb9 +0x05f:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ccc1 +0x067:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ccc9 +0x06f:  movl   $0x1,(%esp)
0857ccd0 +0x076:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ccd5 +0x07b:  jmp    0857d549 <+0x8ef>
0857ccda +0x080:  movl   $0x10,0x8(%esp)
0857cce2 +0x088:  movl   $0x0,0x4(%esp)
0857ccea +0x090:  lea    -0x74(%ebp),%eax
0857cced +0x093:  mov    %eax,(%esp)
0857ccf0 +0x096:  call   0807dcc0 <_init+0x5b8>
0857ccf5 +0x09b:  movw   $0x2,-0x74(%ebp)
0857ccfb +0x0a1:  movl   $0x0,(%esp)
0857cd02 +0x0a8:  call   0807db10 <_init+0x408>
0857cd07 +0x0ad:  mov    %eax,-0x70(%ebp)
0857cd0a +0x0b0:  movzwl -0x1e(%ebp),%eax
0857cd0e +0x0b4:  mov    %eax,(%esp)
0857cd11 +0x0b7:  call   0807e680 <_init+0xf78>
0857cd16 +0x0bc:  mov    %ax,-0x72(%ebp)
0857cd1a +0x0c0:  movl   $0x4,0x10(%esp)
0857cd22 +0x0c8:  lea    -0x64(%ebp),%eax
0857cd25 +0x0cb:  mov    %eax,0xc(%esp)
0857cd29 +0x0cf:  movl   $0x2,0x8(%esp)
0857cd31 +0x0d7:  movl   $0x1,0x4(%esp)
0857cd39 +0x0df:  mov    -0x2c(%ebp),%eax
0857cd3c +0x0e2:  mov    %eax,(%esp)
0857cd3f +0x0e5:  call   0807e2a0 <_init+0xb98>
0857cd44 +0x0ea:  mov    %eax,-0x24(%ebp)
0857cd47 +0x0ed:  cmpl   $0x0,-0x24(%ebp)
0857cd4b +0x0f1:  jns    0857cd7e <+0x124>
0857cd4d +0x0f3:  movl   $"[Error] listen socket setsockopt error",0x10(%esp)
0857cd55 +0x0fb:  movl   $0x19b,0xc(%esp)
0857cd5d +0x103:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857cd65 +0x10b:  movl   $"NetworkThread.cpp",0x4(%esp)
0857cd6d +0x113:  movl   $0x1,(%esp)
0857cd74 +0x11a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857cd79 +0x11f:  jmp    0857d53e <+0x8e4>
0857cd7e +0x124:  lea    -0x74(%ebp),%eax
0857cd81 +0x127:  movl   $0x10,0x8(%esp)
0857cd89 +0x12f:  mov    %eax,0x4(%esp)
0857cd8d +0x133:  mov    -0x2c(%ebp),%eax
0857cd90 +0x136:  mov    %eax,(%esp)
0857cd93 +0x139:  call   0807e750 <_init+0x1048>
0857cd98 +0x13e:  shr    $0x1f,%eax
0857cd9b +0x141:  test   %al,%al
0857cd9d +0x143:  je     0857cde3 <+0x189>
0857cd9f +0x145:  call   0807dd70 <_init+0x668>
0857cda4 +0x14a:  mov    (%eax),%eax
0857cda6 +0x14c:  mov    %eax,(%esp)
0857cda9 +0x14f:  call   0807d730 <_init+0x28>
0857cdae +0x154:  mov    %eax,0x14(%esp)
0857cdb2 +0x158:  movl   $"Fail to bind Listen - %s",0x10(%esp)
0857cdba +0x160:  movl   $0x1a1,0xc(%esp)
0857cdc2 +0x168:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857cdca +0x170:  movl   $"NetworkThread.cpp",0x4(%esp)
0857cdd2 +0x178:  movl   $0x1,(%esp)
0857cdd9 +0x17f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857cdde +0x184:  jmp    0857d53e <+0x8e4>
0857cde3 +0x189:  movl   $0x400,0x4(%esp)
0857cdeb +0x191:  mov    -0x2c(%ebp),%eax
0857cdee +0x194:  mov    %eax,(%esp)
0857cdf1 +0x197:  call   0807d770 <_init+0x68>
0857cdf6 +0x19c:  shr    $0x1f,%eax
0857cdf9 +0x19f:  test   %al,%al
0857cdfb +0x1a1:  je     0857ce2e <+0x1d4>
0857cdfd +0x1a3:  movl   $"Fail to Create AcceptThread.",0x10(%esp)
0857ce05 +0x1ab:  movl   $0x1a7,0xc(%esp)
0857ce0d +0x1b3:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ce15 +0x1bb:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ce1d +0x1c3:  movl   $0x1,(%esp)
0857ce24 +0x1ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ce29 +0x1cf:  jmp    0857d53e <+0x8e4>
0857ce2e +0x1d4:  mov    -0x2c(%ebp),%eax
0857ce31 +0x1d7:  mov    %eax,(%esp)
0857ce34 +0x1da:  call   0857f484 <_GLOBAL__I_g_bUdp_TH_start+0x9b>  ; global constructors keyed to g_bUdp_TH_start+0x9b
0857ce39 +0x1df:  xor    $0x1,%eax
0857ce3c +0x1e2:  test   %al,%al
0857ce3e +0x1e4:  je     0857d526 <+0x8cc>
0857ce44 +0x1ea:  movl   $"Fail to SetNonBlock AcceptThread.",0x10(%esp)
0857ce4c +0x1f2:  movl   $0x1ae,0xc(%esp)
0857ce54 +0x1fa:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ce5c +0x202:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ce64 +0x20a:  movl   $0x1,(%esp)
0857ce6b +0x211:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ce70 +0x216:  jmp    0857d53e <+0x8e4>
0857ce75 +0x21b:  movl   $0x10,-0x90(%ebp)
0857ce7f +0x225:  lea    -0x128(%ebp),%eax
0857ce85 +0x22b:  mov    %eax,-0x10(%ebp)
0857ce88 +0x22e:  movl   $0x0,-0x14(%ebp)
0857ce8f +0x235:  jmp    0857cea2 <+0x248>
0857ce91 +0x237:  mov    -0x14(%ebp),%edx
0857ce94 +0x23a:  mov    -0x10(%ebp),%eax
0857ce97 +0x23d:  movl   $0x0,(%eax,%edx,4)
0857ce9e +0x244:  addl   $0x1,-0x14(%ebp)
0857cea2 +0x248:  cmpl   $0x1f,-0x14(%ebp)
0857cea6 +0x24c:  setbe  %al
0857cea9 +0x24f:  test   %al,%al
0857ceab +0x251:  jne    0857ce91 <+0x237>
0857cead +0x253:  mov    -0x2c(%ebp),%eax
0857ceb0 +0x256:  shr    $0x5,%eax
0857ceb3 +0x259:  mov    %eax,%edx
0857ceb5 +0x25b:  mov    -0x128(%ebp,%eax,4),%eax
0857cebc +0x262:  mov    -0x2c(%ebp),%ecx
0857cebf +0x265:  and    $0x1f,%ecx
0857cec2 +0x268:  mov    $0x1,%ebx
0857cec7 +0x26d:  mov    %ebx,%esi
0857cec9 +0x26f:  shl    %cl,%esi
0857cecb +0x271:  mov    %esi,%ecx
0857cecd +0x273:  or     %ecx,%eax
0857cecf +0x275:  mov    %eax,-0x128(%ebp,%edx,4)
0857ced6 +0x27c:  movl   $0x1,-0x7c(%ebp)
0857cedd +0x283:  movl   $0x0,-0x78(%ebp)
0857cee4 +0x28a:  mov    -0x2c(%ebp),%eax
0857cee7 +0x28d:  lea    0x1(%eax),%edx
0857ceea +0x290:  lea    -0x7c(%ebp),%eax
0857ceed +0x293:  mov    %eax,0x10(%esp)
0857cef1 +0x297:  movl   $0x0,0xc(%esp)
0857cef9 +0x29f:  movl   $0x0,0x8(%esp)
0857cf01 +0x2a7:  lea    -0x128(%ebp),%eax
0857cf07 +0x2ad:  mov    %eax,0x4(%esp)
0857cf0b +0x2b1:  mov    %edx,(%esp)
0857cf0e +0x2b4:  call   0807e840 <_init+0x1138>
0857cf13 +0x2b9:  mov    %eax,-0x1c(%ebp)
0857cf16 +0x2bc:  cmpl   $0x0,-0x1c(%ebp)
0857cf1a +0x2c0:  js     0857d522 <+0x8c8>
0857cf20 +0x2c6:  mov    -0x2c(%ebp),%eax
0857cf23 +0x2c9:  shr    $0x5,%eax
0857cf26 +0x2cc:  mov    -0x128(%ebp,%eax,4),%edx
0857cf2d +0x2d3:  mov    -0x2c(%ebp),%eax
0857cf30 +0x2d6:  and    $0x1f,%eax
0857cf33 +0x2d9:  mov    %edx,%ebx
0857cf35 +0x2db:  mov    %eax,%ecx
0857cf37 +0x2dd:  sar    %cl,%ebx
0857cf39 +0x2df:  mov    %ebx,%eax
0857cf3b +0x2e1:  and    $0x1,%eax
0857cf3e +0x2e4:  xor    $0x1,%eax
0857cf41 +0x2e7:  test   %al,%al
0857cf43 +0x2e9:  jne    0857d525 <+0x8cb>
0857cf49 +0x2ef:  lea    -0x8c(%ebp),%eax
0857cf4f +0x2f5:  lea    -0x90(%ebp),%edx
0857cf55 +0x2fb:  mov    %edx,0x8(%esp)
0857cf59 +0x2ff:  mov    %eax,0x4(%esp)
0857cf5d +0x303:  mov    -0x2c(%ebp),%eax
0857cf60 +0x306:  mov    %eax,(%esp)
0857cf63 +0x309:  call   0807deb0 <_init+0x7a8>
0857cf68 +0x30e:  mov    %eax,-0x28(%ebp)
0857cf6b +0x311:  cmpl   $0x0,-0x28(%ebp)
0857cf6f +0x315:  jns    0857cfbc <+0x362>
0857cf71 +0x317:  call   0807dd70 <_init+0x668>
0857cf76 +0x31c:  mov    (%eax),%eax
0857cf78 +0x31e:  mov    %eax,(%esp)
0857cf7b +0x321:  call   0807d730 <_init+0x28>
0857cf80 +0x326:  mov    %eax,0x18(%esp)
0857cf84 +0x32a:  mov    -0x28(%ebp),%eax
0857cf87 +0x32d:  mov    %eax,0x14(%esp)
0857cf8b +0x331:  movl   $"Accept Socket[%d] Error(%s)",0x10(%esp)
0857cf93 +0x339:  movl   $0x1d4,0xc(%esp)
0857cf9b +0x341:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857cfa3 +0x349:  movl   $"NetworkThread.cpp",0x4(%esp)
0857cfab +0x351:  movl   $0x1,(%esp)
0857cfb2 +0x358:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857cfb7 +0x35d:  jmp    0857d526 <+0x8cc>
0857cfbc +0x362:  mov    -0x88(%ebp),%eax
0857cfc2 +0x368:  mov    %eax,(%esp)
0857cfc5 +0x36b:  call   0807ddc0 <_init+0x6b8>
0857cfca +0x370:  mov    %eax,%ebx
0857cfcc +0x372:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857cfd1 +0x377:  mov    %eax,(%esp)
0857cfd4 +0x37a:  call   0857f436 <_GLOBAL__I_g_bUdp_TH_start+0x4d>  ; global constructors keyed to g_bUdp_TH_start+0x4d
0857cfd9 +0x37f:  mov    %ebx,0x4(%esp)
0857cfdd +0x383:  mov    %eax,(%esp)
0857cfe0 +0x386:  call   0807e4e0 <_init+0xdd8>
0857cfe5 +0x38b:  test   %eax,%eax
0857cfe7 +0x38d:  sete   %al
0857cfea +0x390:  test   %al,%al
0857cfec +0x392:  je     0857cffe <+0x3a4>
0857cfee +0x394:  mov    -0x28(%ebp),%eax
0857cff1 +0x397:  mov    %eax,(%esp)
0857cff4 +0x39a:  call   0807d860 <_init+0x158>
0857cff9 +0x39f:  jmp    0857d526 <+0x8cc>
0857cffe +0x3a4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857d003 +0x3a9:  mov    0x2f0(%eax),%eax
0857d009 +0x3af:  test   %eax,%eax
0857d00b +0x3b1:  setne  %al
0857d00e +0x3b4:  test   %al,%al
0857d010 +0x3b6:  je     0857d09e <+0x444>
0857d016 +0x3bc:  movl   $0x0,-0xc(%ebp)
0857d01d +0x3c3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857d022 +0x3c8:  movl   $0x2,0x4(%esp)
0857d02a +0x3d0:  mov    %eax,(%esp)
0857d02d +0x3d3:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
0857d032 +0x3d8:  mov    %eax,-0xc(%ebp)
0857d035 +0x3db:  mov    0x8(%ebp),%eax
0857d038 +0x3de:  movzbl 0xc(%eax),%eax
0857d03c +0x3e2:  xor    $0x1,%eax
0857d03f +0x3e5:  test   %al,%al
0857d041 +0x3e7:  je     0857d05a <+0x400>
0857d043 +0x3e9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857d048 +0x3ee:  mov    0x2f0(%eax),%eax
0857d04e +0x3f4:  cmp    -0xc(%ebp),%eax
0857d051 +0x3f7:  jg     0857d05a <+0x400>
0857d053 +0x3f9:  mov    $0x1,%eax
0857d058 +0x3fe:  jmp    0857d05f <+0x405>
0857d05a +0x400:  mov    $0x0,%eax
0857d05f +0x405:  test   %al,%al
0857d061 +0x407:  je     0857d06c <+0x412>
0857d063 +0x409:  mov    0x8(%ebp),%eax
0857d066 +0x40c:  movb   $0x1,0xc(%eax)
0857d06a +0x410:  jmp    0857d09e <+0x444>
0857d06c +0x412:  mov    0x8(%ebp),%eax
0857d06f +0x415:  movzbl 0xc(%eax),%eax
0857d073 +0x419:  test   %al,%al
0857d075 +0x41b:  je     0857d08e <+0x434>
0857d077 +0x41d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857d07c +0x422:  mov    0x2f4(%eax),%eax
0857d082 +0x428:  cmp    -0xc(%ebp),%eax
0857d085 +0x42b:  jle    0857d08e <+0x434>
0857d087 +0x42d:  mov    $0x1,%eax
0857d08c +0x432:  jmp    0857d093 <+0x439>
0857d08e +0x434:  mov    $0x0,%eax
0857d093 +0x439:  test   %al,%al
0857d095 +0x43b:  je     0857d09e <+0x444>
0857d097 +0x43d:  mov    0x8(%ebp),%eax
0857d09a +0x440:  movb   $0x0,0xc(%eax)
0857d09e +0x444:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0857d0a3 +0x449:  add    $0x4c,%eax
0857d0a6 +0x44c:  mov    %eax,(%esp)
0857d0a9 +0x44f:  call   080ee400 <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x61>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x61
0857d0ae +0x454:  mov    %eax,%ebx
0857d0b0 +0x456:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0857d0b5 +0x45b:  add    $0x4c,%eax
0857d0b8 +0x45e:  mov    %eax,(%esp)
0857d0bb +0x461:  call   080ee40a <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x6b>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x6b
0857d0c0 +0x466:  mov    %ebx,%esi
0857d0c2 +0x468:  sub    %eax,%esi
0857d0c4 +0x46a:  mov    %esi,%eax
0857d0c6 +0x46c:  mov    %eax,-0x18(%ebp)
0857d0c9 +0x46f:  mov    0x8(%ebp),%eax
0857d0cc +0x472:  movzbl 0xc(%eax),%eax
0857d0d0 +0x476:  test   %al,%al
0857d0d2 +0x478:  jne    0857d0e4 <+0x48a>
0857d0d4 +0x47a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857d0d9 +0x47f:  mov    0x3c0(%eax),%eax
0857d0df +0x485:  cmp    -0x18(%ebp),%eax
0857d0e2 +0x488:  jg     0857d0eb <+0x491>
0857d0e4 +0x48a:  mov    $0x1,%eax
0857d0e9 +0x48f:  jmp    0857d0f0 <+0x496>
0857d0eb +0x491:  mov    $0x0,%eax
0857d0f0 +0x496:  test   %al,%al
0857d0f2 +0x498:  je     0857d25f <+0x605>
0857d0f8 +0x49e:  mov    -0x88(%ebp),%eax
0857d0fe +0x4a4:  mov    %eax,(%esp)
0857d101 +0x4a7:  call   0807ddc0 <_init+0x6b8>
0857d106 +0x4ac:  mov    %eax,0x4(%esp)
0857d10a +0x4b0:  movl   $"192.168.30.146",(%esp)
0857d111 +0x4b7:  call   0807e4e0 <_init+0xdd8>
0857d116 +0x4bc:  test   %eax,%eax
0857d118 +0x4be:  setne  %al
0857d11b +0x4c1:  test   %al,%al
0857d11d +0x4c3:  je     0857d25f <+0x605>
0857d123 +0x4c9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857d128 +0x4ce:  mov    0x3c0(%eax),%eax
0857d12e +0x4d4:  add    $0x5,%eax
0857d131 +0x4d7:  cmp    -0x18(%ebp),%eax
0857d134 +0x4da:  setle  %al
0857d137 +0x4dd:  test   %al,%al
0857d139 +0x4df:  je     0857d25f <+0x605>
0857d13f +0x4e5:  lea    -0x9c(%ebp),%eax
0857d145 +0x4eb:  mov    %eax,(%esp)
0857d148 +0x4ee:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0857d14d +0x4f3:  movl   $0x1,0x8(%esp)
0857d155 +0x4fb:  movl   $0x1,0x4(%esp)
0857d15d +0x503:  lea    -0x9c(%ebp),%eax
0857d163 +0x509:  mov    %eax,(%esp)
0857d166 +0x50c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0857d16b +0x511:  movl   $0x0,0x4(%esp)
0857d173 +0x519:  lea    -0x9c(%ebp),%eax
0857d179 +0x51f:  mov    %eax,(%esp)
0857d17c +0x522:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0857d181 +0x527:  movl   $0x4,0x4(%esp)
0857d189 +0x52f:  lea    -0x9c(%ebp),%eax
0857d18f +0x535:  mov    %eax,(%esp)
0857d192 +0x538:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0857d197 +0x53d:  movl   $0x1,0x4(%esp)
0857d19f +0x545:  lea    -0x9c(%ebp),%eax
0857d1a5 +0x54b:  mov    %eax,(%esp)
0857d1a8 +0x54e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0857d1ad +0x553:  lea    -0x9c(%ebp),%eax
0857d1b3 +0x559:  mov    %eax,(%esp)
0857d1b6 +0x55c:  call   0848f438 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x116>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x116
0857d1bb +0x561:  mov    %eax,%ebx
0857d1bd +0x563:  movl   $0x0,0x4(%esp)
0857d1c5 +0x56b:  lea    -0x9c(%ebp),%eax
0857d1cb +0x571:  mov    %eax,(%esp)
0857d1ce +0x574:  call   0848f41c <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0xfa>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0xfa
0857d1d3 +0x579:  mov    %ebx,0x8(%esp)
0857d1d7 +0x57d:  mov    %eax,0x4(%esp)
0857d1db +0x581:  mov    -0x28(%ebp),%eax
0857d1de +0x584:  mov    %eax,(%esp)
0857d1e1 +0x587:  call   0807e830 <_init+0x1128>
0857d1e6 +0x58c:  mov    -0x28(%ebp),%eax
0857d1e9 +0x58f:  mov    %eax,(%esp)
0857d1ec +0x592:  call   0807d860 <_init+0x158>
0857d1f1 +0x597:  movl   $0x0,0xc(%esp)
0857d1f9 +0x59f:  movl   $0x211,0x8(%esp)
0857d201 +0x5a7:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857d209 +0x5af:  lea    -0x5c(%ebp),%eax
0857d20c +0x5b2:  mov    %eax,(%esp)
0857d20f +0x5b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857d214 +0x5ba:  mov    -0x18(%ebp),%eax
0857d217 +0x5bd:  mov    %eax,0x8(%esp)
0857d21b +0x5c1:  movl   $"[ACCEPT] LOCK STATE(Curr Session : %d)",0x4(%esp)
0857d223 +0x5c9:  lea    -0x5c(%ebp),%eax
0857d226 +0x5cc:  mov    %eax,(%esp)
0857d229 +0x5cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857d22e +0x5d4:  lea    -0x9c(%ebp),%eax
0857d234 +0x5da:  mov    %eax,(%esp)
0857d237 +0x5dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0857d23c +0x5e2:  jmp    0857d526 <+0x8cc>
0857d241 +0x5e7:  mov    %edx,%ebx
0857d243 +0x5e9:  mov    %eax,%esi
0857d245 +0x5eb:  lea    -0x9c(%ebp),%eax
0857d24b +0x5f1:  mov    %eax,(%esp)
0857d24e +0x5f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0857d253 +0x5f9:  mov    %esi,%eax
0857d255 +0x5fb:  mov    %ebx,%edx
0857d257 +0x5fd:  mov    %eax,(%esp)
0857d25a +0x600:  call   08ae3750 <_Unwind_Resume>
0857d25f +0x605:  call   080f61b8 <_Z30GameserverDemonManagerInstancev>  ; GameserverDemonManagerInstance()
0857d264 +0x60a:  mov    %eax,(%esp)
0857d267 +0x60d:  call   084ed404 <_GLOBAL__I__Z7getUserj+0x43b6>  ; global constructors keyed to getUser(unsigned int)+0x43b6
0857d26c +0x612:  test   %al,%al
0857d26e +0x614:  je     0857d394 <+0x73a>
0857d274 +0x61a:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d27a +0x620:  mov    %eax,(%esp)
0857d27d +0x623:  call   0858c8c0 <_ZN9PacketBufC1Ev>  ; PacketBuf::PacketBuf()
0857d282 +0x628:  movl   $0x1,0x8(%esp)
0857d28a +0x630:  movl   $0x1,0x4(%esp)
0857d292 +0x638:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d298 +0x63e:  mov    %eax,(%esp)
0857d29b +0x641:  call   0858c94a <_ZN9PacketBuf10put_headerEii>  ; PacketBuf::put_header(int, int)
0857d2a0 +0x646:  movl   $0x0,0x4(%esp)
0857d2a8 +0x64e:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d2ae +0x654:  mov    %eax,(%esp)
0857d2b1 +0x657:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0857d2b6 +0x65c:  movl   $0x4,0x4(%esp)
0857d2be +0x664:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d2c4 +0x66a:  mov    %eax,(%esp)
0857d2c7 +0x66d:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0857d2cc +0x672:  movl   $0x1,0x4(%esp)
0857d2d4 +0x67a:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d2da +0x680:  mov    %eax,(%esp)
0857d2dd +0x683:  call   0858d548 <_ZN9PacketBuf8finalizeEb>  ; PacketBuf::finalize(bool)
0857d2e2 +0x688:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d2e8 +0x68e:  mov    %eax,(%esp)
0857d2eb +0x691:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0857d2f0 +0x696:  mov    %eax,%ebx
0857d2f2 +0x698:  movl   $0x0,0x4(%esp)
0857d2fa +0x6a0:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d300 +0x6a6:  mov    %eax,(%esp)
0857d303 +0x6a9:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0857d308 +0x6ae:  mov    %ebx,0x8(%esp)
0857d30c +0x6b2:  mov    %eax,0x4(%esp)
0857d310 +0x6b6:  mov    -0x28(%ebp),%eax
0857d313 +0x6b9:  mov    %eax,(%esp)
0857d316 +0x6bc:  call   0807e830 <_init+0x1128>
0857d31b +0x6c1:  mov    -0x28(%ebp),%eax
0857d31e +0x6c4:  mov    %eax,(%esp)
0857d321 +0x6c7:  call   0807d860 <_init+0x158>
0857d326 +0x6cc:  movl   $0x0,0xc(%esp)
0857d32e +0x6d4:  movl   $0x230,0x8(%esp)
0857d336 +0x6dc:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857d33e +0x6e4:  lea    -0x4c(%ebp),%eax
0857d341 +0x6e7:  mov    %eax,(%esp)
0857d344 +0x6ea:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857d349 +0x6ef:  mov    -0x18(%ebp),%eax
0857d34c +0x6f2:  mov    %eax,0x8(%esp)
0857d350 +0x6f6:  movl   $"[ACCEPT DENY] ProhibitUserConnect Signal STATE(Curr Session : %d)",0x4(%esp)
0857d358 +0x6fe:  lea    -0x4c(%ebp),%eax
0857d35b +0x701:  mov    %eax,(%esp)
0857d35e +0x704:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857d363 +0x709:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d369 +0x70f:  mov    %eax,(%esp)
0857d36c +0x712:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
0857d371 +0x717:  jmp    0857d526 <+0x8cc>
0857d376 +0x71c:  mov    %edx,%ebx
0857d378 +0x71e:  mov    %eax,%esi
0857d37a +0x720:  lea    -&_ZL14gUnicodeBuffer+0xcf30(%ebp),%eax
0857d380 +0x726:  mov    %eax,(%esp)
0857d383 +0x729:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
0857d388 +0x72e:  mov    %esi,%eax
0857d38a +0x730:  mov    %ebx,%edx
0857d38c +0x732:  mov    %eax,(%esp)
0857d38f +0x735:  call   08ae3750 <_Unwind_Resume>
0857d394 +0x73a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0857d399 +0x73f:  mov    %eax,(%esp)
0857d39c +0x742:  call   08294296 <_ZN12CGameManager10createUserEv>  ; CGameManager::createUser()
0857d3a1 +0x747:  mov    %eax,-0x60(%ebp)
0857d3a4 +0x74a:  mov    -0x60(%ebp),%eax
0857d3a7 +0x74d:  test   %eax,%eax
0857d3a9 +0x74f:  jne    0857d4cc <+0x872>
0857d3af +0x755:  lea    -0xa8(%ebp),%eax
0857d3b5 +0x75b:  mov    %eax,(%esp)
0857d3b8 +0x75e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0857d3bd +0x763:  movl   $0x1,0x8(%esp)
0857d3c5 +0x76b:  movl   $0x1,0x4(%esp)
0857d3cd +0x773:  lea    -0xa8(%ebp),%eax
0857d3d3 +0x779:  mov    %eax,(%esp)
0857d3d6 +0x77c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0857d3db +0x781:  movl   $0x0,0x4(%esp)
0857d3e3 +0x789:  lea    -0xa8(%ebp),%eax
0857d3e9 +0x78f:  mov    %eax,(%esp)
0857d3ec +0x792:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0857d3f1 +0x797:  movl   $0x4,0x4(%esp)
0857d3f9 +0x79f:  lea    -0xa8(%ebp),%eax
0857d3ff +0x7a5:  mov    %eax,(%esp)
0857d402 +0x7a8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0857d407 +0x7ad:  movl   $0x1,0x4(%esp)
0857d40f +0x7b5:  lea    -0xa8(%ebp),%eax
0857d415 +0x7bb:  mov    %eax,(%esp)
0857d418 +0x7be:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0857d41d +0x7c3:  lea    -0xa8(%ebp),%eax
0857d423 +0x7c9:  mov    %eax,(%esp)
0857d426 +0x7cc:  call   0848f438 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x116>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x116
0857d42b +0x7d1:  mov    %eax,%ebx
0857d42d +0x7d3:  movl   $0x0,0x4(%esp)
0857d435 +0x7db:  lea    -0xa8(%ebp),%eax
0857d43b +0x7e1:  mov    %eax,(%esp)
0857d43e +0x7e4:  call   0848f41c <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0xfa>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0xfa
0857d443 +0x7e9:  mov    %ebx,0x8(%esp)
0857d447 +0x7ed:  mov    %eax,0x4(%esp)
0857d44b +0x7f1:  mov    -0x28(%ebp),%eax
0857d44e +0x7f4:  mov    %eax,(%esp)
0857d451 +0x7f7:  call   0807e830 <_init+0x1128>
0857d456 +0x7fc:  mov    -0x28(%ebp),%eax
0857d459 +0x7ff:  mov    %eax,(%esp)
0857d45c +0x802:  call   0807d860 <_init+0x158>
0857d461 +0x807:  movl   $0x0,0xc(%esp)
0857d469 +0x80f:  movl   $0x277,0x8(%esp)
0857d471 +0x817:  movl   $&_ZZN12AcceptThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857d479 +0x81f:  lea    -0x3c(%ebp),%eax
0857d47c +0x822:  mov    %eax,(%esp)
0857d47f +0x825:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857d484 +0x82a:  mov    -0x18(%ebp),%eax
0857d487 +0x82d:  mov    %eax,0x8(%esp)
0857d48b +0x831:  movl   $"[ACCEPT] fail create user(Curr Session : %d)",0x4(%esp)
0857d493 +0x839:  lea    -0x3c(%ebp),%eax
0857d496 +0x83c:  mov    %eax,(%esp)
0857d499 +0x83f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857d49e +0x844:  lea    -0xa8(%ebp),%eax
0857d4a4 +0x84a:  mov    %eax,(%esp)
0857d4a7 +0x84d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0857d4ac +0x852:  jmp    0857d526 <+0x8cc>
0857d4ae +0x854:  mov    %edx,%ebx
0857d4b0 +0x856:  mov    %eax,%esi
0857d4b2 +0x858:  lea    -0xa8(%ebp),%eax
0857d4b8 +0x85e:  mov    %eax,(%esp)
0857d4bb +0x861:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0857d4c0 +0x866:  mov    %esi,%eax
0857d4c2 +0x868:  mov    %ebx,%edx
0857d4c4 +0x86a:  mov    %eax,(%esp)
0857d4c7 +0x86d:  call   08ae3750 <_Unwind_Resume>
0857d4cc +0x872:  mov    -0x60(%ebp),%eax
0857d4cf +0x875:  mov    -0x28(%ebp),%edx
0857d4d2 +0x878:  mov    %edx,0x4(%esp)
0857d4d6 +0x87c:  mov    %eax,(%esp)
0857d4d9 +0x87f:  call   086493c8 <_ZN5CUser12InitOnAcceptEi>  ; CUser::InitOnAccept(int)
0857d4de +0x884:  mov    -0x88(%ebp),%eax
0857d4e4 +0x88a:  mov    %eax,%edx
0857d4e6 +0x88c:  mov    -0x60(%ebp),%eax
0857d4e9 +0x88f:  mov    %edx,0x4(%esp)
0857d4ed +0x893:  mov    %eax,(%esp)
0857d4f0 +0x896:  call   0857f406 <_GLOBAL__I_g_bUdp_TH_start+0x1d>  ; global constructors keyed to g_bUdp_TH_start+0x1d
0857d4f5 +0x89b:  movl   $&_ZN10GlobalData13s_accept_lockE,(%esp)
0857d4fc +0x8a2:  call   0810539e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x1d>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x1d
0857d501 +0x8a7:  lea    -0x60(%ebp),%eax
0857d504 +0x8aa:  mov    %eax,0x4(%esp)
0857d508 +0x8ae:  movl   $&_ZN10GlobalData12s_accept_queE,(%esp)
0857d50f +0x8b5:  call   0857f5c0 <_GLOBAL__I_g_bUdp_TH_start+0x1d7>  ; global constructors keyed to g_bUdp_TH_start+0x1d7
0857d514 +0x8ba:  movl   $&_ZN10GlobalData13s_accept_lockE,(%esp)
0857d51b +0x8c1:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
0857d520 +0x8c6:  jmp    0857d526 <+0x8cc>
0857d522 +0x8c8:  nop
0857d523 +0x8c9:  jmp    0857d526 <+0x8cc>
0857d525 +0x8cb:  nop
0857d526 +0x8cc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0857d52b +0x8d1:  mov    %eax,(%esp)
0857d52e +0x8d4:  call   0857f418 <_GLOBAL__I_g_bUdp_TH_start+0x2f>  ; global constructors keyed to g_bUdp_TH_start+0x2f
0857d533 +0x8d9:  xor    $0x1,%eax
0857d536 +0x8dc:  test   %al,%al
0857d538 +0x8de:  jne    0857ce75 <+0x21b>
0857d53e +0x8e4:  mov    -0x2c(%ebp),%eax
0857d541 +0x8e7:  mov    %eax,(%esp)
0857d544 +0x8ea:  call   0807d860 <_init+0x158>
0857d549 +0x8ef:  add    $&_ZL14gUnicodeBuffer+0xcf54,%esp
0857d54f +0x8f5:  pop    %ebx
0857d550 +0x8f6:  pop    %esi
0857d551 +0x8f7:  pop    %ebp
0857d552 +0x8f8:  ret
0857d553 +0x8f9:  nop
```

## 反编译 C

```c
// AcceptThread::dispatch @ 0x857cc5a

/* AcceptThread::dispatch(void*) */

void AcceptThread::dispatch(void *param_1)

{
  bool bVar1;
  char cVar2;
  CEnvironment *pCVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *__s1;
  int iVar7;
  size_t sVar8;
  void *pvVar9;
  GameServerDemonManager *this;
  CGameManager *this_00;
  PacketBuf aPStack_17460 [95028];
  fd_set local_12c;
  PacketGuard local_ac [12];
  PacketGuard local_a0 [12];
  socklen_t local_94;
  undefined1 local_90 [16];
  timeval local_80;
  sockaddr local_78;
  undefined4 local_68;
  CUser *local_64;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  uint local_30;
  int local_2c;
  int local_28;
  uint16_t local_22;
  int local_20;
  int local_1c;
  uint local_18;
  fd_set *local_14;
  int local_10;
  
  local_64 = (CUser *)0x0;
  local_68 = 60000;
  pCVar3 = (CEnvironment *)G_CEnvironment();
  local_22 = CEnvironment::get_tcp_port(pCVar3);
  local_30 = socket(2,1,0);
  if ((int)local_30 < 0) {
    LogManager::logFormat
              (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x18e,
               "[AcceptThread::dispatch] Fail to Create ListenSocket.");
  }
  else {
    memset(&local_78,0,0x10);
    local_78.sa_family = 2;
    local_78.sa_data._2_4_ = htonl(0);
    local_78.sa_data._0_2_ = htons(local_22);
    local_28 = setsockopt(local_30,1,2,&local_68,4);
    if (local_28 < 0) {
      LogManager::logFormat
                (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x19b,
                 "[Error] listen socket setsockopt error");
    }
    else {
      iVar4 = bind(local_30,&local_78,0x10);
      if (iVar4 < 0) {
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x1a1,
                   "Fail to bind Listen - %s",pcVar6);
      }
      else {
        iVar4 = listen(local_30,0x400);
        if (iVar4 < 0) {
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x1a7,
                     "Fail to Create AcceptThread.");
        }
        else {
          cVar2 = CNetwork<4096,450000>::SetNonBlock(local_30);
          if (cVar2 == '\x01') {
LAB_0857d526:
            pCVar3 = (CEnvironment *)G_CEnvironment();
            cVar2 = CEnvironment::get_suspend_state(pCVar3);
            if (cVar2 != '\x01') {
              local_94 = 0x10;
              local_14 = &local_12c;
              for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
                local_12c.fds_bits[local_18] = 0;
              }
              local_12c.fds_bits[local_30 >> 5] =
                   local_12c.fds_bits[local_30 >> 5] | 1 << ((byte)local_30 & 0x1f);
              local_80.tv_sec = 1;
              local_80.tv_usec = 0;
              local_20 = select(local_30 + 1,&local_12c,(fd_set *)0x0,(fd_set *)0x0,&local_80);
              if ((-1 < local_20) &&
                 (((byte)(local_12c.fds_bits[local_30 >> 5] >> ((byte)local_30 & 0x1f)) & 1) == 1))
              {
                local_2c = accept(local_30,(sockaddr *)local_90,&local_94);
                if (local_2c < 0) {
                  piVar5 = __errno_location();
                  pcVar6 = strerror(*piVar5);
                  LogManager::logFormat
                            (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",
                             0x1d4,"Accept Socket[%d] Error(%s)",local_2c,pcVar6);
                }
                else {
                  pcVar6 = inet_ntoa((in_addr)local_90._4_4_);
                  pCVar3 = (CEnvironment *)G_CEnvironment();
                  __s1 = (char *)CEnvironment::get_system_monitoring_ip(pCVar3);
                  iVar4 = strcmp(__s1,pcVar6);
                  if (iVar4 != 0) {
                    iVar4 = G_CEnvironment();
                    if (*(int *)(iVar4 + 0x2f0) != 0) {
                      local_10 = 0;
                      local_10 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,2);
                      if ((*(char *)((int)param_1 + 0xc) == '\x01') ||
                         (iVar4 = G_CEnvironment(), local_10 < *(int *)(iVar4 + 0x2f0))) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if (bVar1) {
                        *(undefined1 *)((int)param_1 + 0xc) = 1;
                      }
                      else {
                        if ((*(char *)((int)param_1 + 0xc) == '\0') ||
                           (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x2f4) <= local_10)) {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                        }
                        if (bVar1) {
                          *(undefined1 *)((int)param_1 + 0xc) = 0;
                        }
                      }
                    }
                    G_CGameManager();
                    iVar4 = StaticPool<CUser,600>::Size();
                    iVar7 = G_CGameManager();
                    local_1c = StaticPool<CUser,600>::Remain
                                         ((StaticPool<CUser,600> *)(iVar7 + 0x4c));
                    local_1c = iVar4 - local_1c;
                    if ((*(char *)((int)param_1 + 0xc) == '\0') &&
                       (iVar4 = G_CEnvironment(), local_1c < *(int *)(iVar4 + 0x3c0))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      pcVar6 = inet_ntoa((in_addr)local_90._4_4_);
                      iVar4 = strcmp("192.168.30.146",pcVar6);
                      if ((iVar4 != 0) &&
                         (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x3c0) + 5 <= local_1c)) {
                        PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 0857d166 to 0857d22d has its CatchHandler @ 0857d241 */
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,1,1);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,4);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
                        sVar8 = InterfacePacketBuf::get_len((InterfacePacketBuf *)local_a0);
                        pvVar9 = (void *)InterfacePacketBuf::get_packet
                                                   ((InterfacePacketBuf *)local_a0,0);
                        write(local_2c,pvVar9,sVar8);
                        close(local_2c);
                        cMyTrace::cMyTrace(local_60,"virtual void AcceptThread::dispatch(void*)",
                                           0x211,0);
                        cMyTrace::operator()
                                  (local_60,"[ACCEPT] LOCK STATE(Curr Session : %d)",local_1c);
                        PacketGuard::~PacketGuard(local_a0);
                        goto LAB_0857d526;
                      }
                    }
                    this = (GameServerDemonManager *)GameserverDemonManagerInstance();
                    cVar2 = GameServerDemonManager::IsProhibitConnectState(this);
                    if (cVar2 == '\0') {
                      this_00 = (CGameManager *)G_CGameManager();
                      local_64 = (CUser *)CGameManager::createUser(this_00);
                      if (local_64 == (CUser *)0x0) {
                        PacketGuard::PacketGuard(local_ac);
                    /* try { // try from 0857d3d6 to 0857d49d has its CatchHandler @ 0857d4ae */
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ac,1,1);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,4);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ac,true);
                        sVar8 = InterfacePacketBuf::get_len((InterfacePacketBuf *)local_ac);
                        pvVar9 = (void *)InterfacePacketBuf::get_packet
                                                   ((InterfacePacketBuf *)local_ac,0);
                        write(local_2c,pvVar9,sVar8);
                        close(local_2c);
                        cMyTrace::cMyTrace(local_40,"virtual void AcceptThread::dispatch(void*)",
                                           0x277,0);
                        cMyTrace::operator()
                                  (local_40,"[ACCEPT] fail create user(Curr Session : %d)",local_1c)
                        ;
                        PacketGuard::~PacketGuard(local_ac);
                      }
                      else {
                        CUser::InitOnAccept(local_64,local_2c);
                        CUser::set_public_ip_address(local_64,local_90._4_4_);
                        Mutex::lock((Mutex *)GlobalData::s_accept_lock);
                        std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::push
                                  ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                                   GlobalData::s_accept_que,&local_64);
                        Mutex::unlock((Mutex *)GlobalData::s_accept_lock);
                      }
                    }
                    else {
                      PacketBuf::PacketBuf(aPStack_17460);
                    /* try { // try from 0857d29b to 0857d362 has its CatchHandler @ 0857d376 */
                      PacketBuf::put_header(aPStack_17460,1,1);
                      PacketBuf::put_byte(aPStack_17460,0);
                      PacketBuf::put_byte(aPStack_17460,4);
                      PacketBuf::finalize(aPStack_17460,true);
                      sVar8 = PacketBuf::get_len(aPStack_17460);
                      pvVar9 = (void *)PacketBuf::get_packet(aPStack_17460,0);
                      write(local_2c,pvVar9,sVar8);
                      close(local_2c);
                      cMyTrace::cMyTrace(local_50,"virtual void AcceptThread::dispatch(void*)",0x230
                                         ,0);
                      cMyTrace::operator()
                                (local_50,
                                 "[ACCEPT DENY] ProhibitUserConnect Signal STATE(Curr Session : %d)"
                                 ,local_1c);
                      PacketBuf::~PacketBuf(aPStack_17460);
                    }
                    goto LAB_0857d526;
                  }
                  close(local_2c);
                }
              }
              goto LAB_0857d526;
            }
          }
          else {
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x1ae,
                       "Fail to SetNonBlock AcceptThread.");
          }
        }
      }
    }
    close(local_30);
  }
  return;
}
```
