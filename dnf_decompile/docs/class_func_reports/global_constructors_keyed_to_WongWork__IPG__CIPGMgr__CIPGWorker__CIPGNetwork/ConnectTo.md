# ConnectTo

`_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct`

`global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork` | `0x08105381` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08105381  _GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct
#           global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)
# range [0x08105381, 0x081060df]
08105381 +0x000:  push   %ebp
08105382 +0x001:  mov    %esp,%ebp
08105384 +0x003:  sub    $0x18,%esp
08105387 +0x006:  movl   $0xffff,0x4(%esp)
0810538f +0x00e:  movl   $0x1,(%esp)
08105396 +0x015:  call   08105341 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810539b +0x01a:  leave
0810539c +0x01b:  ret
0810539d +0x01c:  nop
0810539e +0x01d:  push   %ebp
0810539f +0x01e:  mov    %esp,%ebp
081053a1 +0x020:  sub    $0x18,%esp
081053a4 +0x023:  mov    0x8(%ebp),%eax
081053a7 +0x026:  mov    %eax,(%esp)
081053aa +0x029:  call   0807e1f0 <_init+0xae8>
081053af +0x02e:  leave
081053b0 +0x02f:  ret
081053b1 +0x030:  nop
081053b2 +0x031:  push   %ebp
081053b3 +0x032:  mov    %esp,%ebp
081053b5 +0x034:  sub    $0x18,%esp
081053b8 +0x037:  mov    0x8(%ebp),%eax
081053bb +0x03a:  mov    %eax,(%esp)
081053be +0x03d:  call   0807dee0 <_init+0x7d8>
081053c3 +0x042:  leave
081053c4 +0x043:  ret
081053c5 +0x044:  nop
081053c6 +0x045:  push   %ebp
081053c7 +0x046:  mov    %esp,%ebp
081053c9 +0x048:  mov    0x8(%ebp),%eax
081053cc +0x04b:  mov    0xb8(%eax),%eax
081053d2 +0x051:  pop    %ebp
081053d3 +0x052:  ret
081053d4 +0x053:  push   %ebp
081053d5 +0x054:  mov    %esp,%ebp
081053d7 +0x056:  mov    0x8(%ebp),%eax
081053da +0x059:  mov    0xc(%ebp),%edx
081053dd +0x05c:  mov    %edx,0xc(%eax)
081053e0 +0x05f:  pop    %ebp
081053e1 +0x060:  ret
081053e2 +0x061:  push   %ebp
081053e3 +0x062:  mov    %esp,%ebp
081053e5 +0x064:  sub    $0x18,%esp
081053e8 +0x067:  mov    0x8(%ebp),%eax
081053eb +0x06a:  mov    %eax,(%esp)
081053ee +0x06d:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
081053f3 +0x072:  mov    0x8(%ebp),%eax
081053f6 +0x075:  movl   $&_ZTVN8WongWork3IPG7CIPGMgr10CIPGWorkerE+0x8,(%eax)
081053fc +0x07b:  leave
081053fd +0x07c:  ret
081053fe +0x07d:  push   %ebp
081053ff +0x07e:  mov    %esp,%ebp
08105401 +0x080:  sub    $0x18,%esp
08105404 +0x083:  mov    0x8(%ebp),%eax
08105407 +0x086:  movl   $&_ZTVN8WongWork3IPG7CIPGMgr10CIPGWorkerE+0x8,(%eax)
0810540d +0x08c:  mov    0x8(%ebp),%eax
08105410 +0x08f:  mov    %eax,(%esp)
08105413 +0x092:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
08105418 +0x097:  mov    $0x0,%eax
0810541d +0x09c:  test   %al,%al
0810541f +0x09e:  je     0810542c <+0xab>
08105421 +0x0a0:  mov    0x8(%ebp),%eax
08105424 +0x0a3:  mov    %eax,(%esp)
08105427 +0x0a6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810542c +0x0ab:  leave
0810542d +0x0ac:  ret
0810542e +0x0ad:  push   %ebp
0810542f +0x0ae:  mov    %esp,%ebp
08105431 +0x0b0:  sub    $0x18,%esp
08105434 +0x0b3:  mov    0x8(%ebp),%eax
08105437 +0x0b6:  mov    %eax,(%esp)
0810543a +0x0b9:  call   081053fe <+0x7d>
0810543f +0x0be:  mov    0x8(%ebp),%eax
08105442 +0x0c1:  mov    %eax,(%esp)
08105445 +0x0c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810544a +0x0c9:  leave
0810544b +0x0ca:  ret
0810544c +0x0cb:  push   %ebp
0810544d +0x0cc:  mov    %esp,%ebp
0810544f +0x0ce:  sub    $0x18,%esp
08105452 +0x0d1:  mov    0xc(%ebp),%eax
08105455 +0x0d4:  mov    %eax,(%esp)
08105458 +0x0d7:  call   0810539e <+0x1d>
0810545d +0x0dc:  mov    0x8(%ebp),%eax
08105460 +0x0df:  mov    0xc(%ebp),%edx
08105463 +0x0e2:  mov    %edx,(%eax)
08105465 +0x0e4:  leave
08105466 +0x0e5:  ret
08105467 +0x0e6:  nop
08105468 +0x0e7:  push   %ebp
08105469 +0x0e8:  mov    %esp,%ebp
0810546b +0x0ea:  sub    $0x18,%esp
0810546e +0x0ed:  mov    0x8(%ebp),%eax
08105471 +0x0f0:  mov    (%eax),%eax
08105473 +0x0f2:  mov    %eax,(%esp)
08105476 +0x0f5:  call   081053b2 <+0x31>
0810547b +0x0fa:  leave
0810547c +0x0fb:  ret
0810547d +0x0fc:  nop
0810547e +0x0fd:  push   %ebp
0810547f +0x0fe:  mov    %esp,%ebp
08105481 +0x100:  push   %ebx
08105482 +0x101:  sub    $0x74,%esp
08105485 +0x104:  mov    0x8(%ebp),%eax
08105488 +0x107:  add    $0x8,%eax
0810548b +0x10a:  mov    %eax,(%esp)
0810548e +0x10d:  call   0810584c <+0x4cb>
08105493 +0x112:  test   %al,%al
08105495 +0x114:  je     0810552f <+0x1ae>
0810549b +0x11a:  mov    0x8(%ebp),%eax
0810549e +0x11d:  movzwl 0x42(%eax),%eax
081054a2 +0x121:  movzwl %ax,%eax
081054a5 +0x124:  mov    %eax,0x4(%esp)
081054a9 +0x128:  mov    0x8(%ebp),%eax
081054ac +0x12b:  mov    %eax,(%esp)
081054af +0x12e:  call   081019c2 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x9e4>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x9e4
081054b4 +0x133:  mov    0x8(%ebp),%eax
081054b7 +0x136:  add    $0x8,%eax
081054ba +0x139:  mov    %eax,(%esp)
081054bd +0x13c:  call   08101628 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x64a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x64a
081054c2 +0x141:  mov    0x8(%ebp),%edx
081054c5 +0x144:  movzwl 0x42(%edx),%edx
081054c9 +0x148:  movzwl %dx,%edx
081054cc +0x14b:  cmp    %edx,%eax
081054ce +0x14d:  seta   %al
081054d1 +0x150:  test   %al,%al
081054d3 +0x152:  je     0810551f <+0x19e>
081054d5 +0x154:  mov    0x8(%ebp),%eax
081054d8 +0x157:  add    $0x8,%eax
081054db +0x15a:  mov    %eax,(%esp)
081054de +0x15d:  call   08101628 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x64a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x64a
081054e3 +0x162:  mov    %eax,%ebx
081054e5 +0x164:  movl   $0x0,0xc(%esp)
081054ed +0x16c:  movl   $0x19c,0x8(%esp)
081054f5 +0x174:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEvE12__FUNCTION__,0x4(%esp)
081054fd +0x17c:  lea    -0x50(%ebp),%eax
08105500 +0x17f:  mov    %eax,(%esp)
08105503 +0x182:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08105508 +0x187:  mov    %ebx,0x8(%esp)
0810550c +0x18b:  movl   $"DYNAMIC MEMORY_POOL More Alloc Size(%d)",0x4(%esp)
08105514 +0x193:  lea    -0x50(%ebp),%eax
08105517 +0x196:  mov    %eax,(%esp)
0810551a +0x199:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810551f +0x19e:  mov    0x8(%ebp),%eax
08105522 +0x1a1:  mov    (%eax),%eax
08105524 +0x1a3:  test   %eax,%eax
08105526 +0x1a5:  je     0810552f <+0x1ae>
08105528 +0x1a7:  mov    0x8(%ebp),%eax
0810552b +0x1aa:  mov    (%eax),%eax
0810552d +0x1ac:  call   *%eax
0810552f +0x1ae:  mov    0x8(%ebp),%eax
08105532 +0x1b1:  add    $0x8,%eax
08105535 +0x1b4:  mov    %eax,(%esp)
08105538 +0x1b7:  call   0810584c <+0x4cb>
0810553d +0x1bc:  test   %al,%al
0810553f +0x1be:  je     08105577 <+0x1f6>
08105541 +0x1c0:  movl   $"[Pool Err] Insufficient memory!",0x10(%esp)
08105549 +0x1c8:  movl   $0x1a6,0xc(%esp)
08105551 +0x1d0:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEvE12__FUNCTION__,0x8(%esp)
08105559 +0x1d8:  movl   $"Container.h",0x4(%esp)
08105561 +0x1e0:  movl   $0x1,(%esp)
08105568 +0x1e7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810556d +0x1ec:  mov    $0x0,%eax
08105572 +0x1f1:  jmp    081056cd <+0x34c>
08105577 +0x1f6:  mov    0x8(%ebp),%eax
0810557a +0x1f9:  add    $0x8,%eax
0810557d +0x1fc:  mov    %eax,(%esp)
08105580 +0x1ff:  call   08105860 <+0x4df>
08105585 +0x204:  mov    (%eax),%eax
08105587 +0x206:  mov    %eax,-0x10(%ebp)
0810558a +0x209:  mov    -0x10(%ebp),%eax
0810558d +0x20c:  mov    %eax,-0xc(%ebp)
08105590 +0x20f:  mov    -0x10(%ebp),%eax
08105593 +0x212:  mov    0x2dc(%eax),%eax
08105599 +0x218:  cmp    $0x8f21,%eax
0810559e +0x21d:  je     081055f4 <+0x273>
081055a0 +0x21f:  mov    -0x10(%ebp),%eax
081055a3 +0x222:  mov    0x2dc(%eax),%ebx
081055a9 +0x228:  movl   $0x0,0xc(%esp)
081055b1 +0x230:  movl   $0x1b3,0x8(%esp)
081055b9 +0x238:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEvE12__FUNCTION__,0x4(%esp)
081055c1 +0x240:  lea    -0x40(%ebp),%eax
081055c4 +0x243:  mov    %eax,(%esp)
081055c7 +0x246:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081055cc +0x24b:  mov    -0x10(%ebp),%eax
081055cf +0x24e:  mov    %eax,0xc(%esp)
081055d3 +0x252:  mov    %ebx,0x8(%esp)
081055d7 +0x256:  movl   $"DYNAMIC MEMORY_POOL Acquire error dummy(%x), node(%x)",0x4(%esp)
081055df +0x25e:  lea    -0x40(%ebp),%eax
081055e2 +0x261:  mov    %eax,(%esp)
081055e5 +0x264:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081055ea +0x269:  mov    0x8(%ebp),%eax
081055ed +0x26c:  movl   $0x3,0x4(%eax)
081055f4 +0x273:  mov    -0x10(%ebp),%eax
081055f7 +0x276:  movzbl 0x2e0(%eax),%eax
081055fe +0x27d:  test   %al,%al
08105600 +0x27f:  je     0810565a <+0x2d9>
08105602 +0x281:  mov    -0x10(%ebp),%eax
08105605 +0x284:  movzbl 0x2e0(%eax),%eax
0810560c +0x28b:  movsbl %al,%ebx
0810560f +0x28e:  movl   $0x0,0xc(%esp)
08105617 +0x296:  movl   $0x1b9,0x8(%esp)
0810561f +0x29e:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEvE12__FUNCTION__,0x4(%esp)
08105627 +0x2a6:  lea    -0x30(%ebp),%eax
0810562a +0x2a9:  mov    %eax,(%esp)
0810562d +0x2ac:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08105632 +0x2b1:  mov    -0x10(%ebp),%eax
08105635 +0x2b4:  mov    %eax,0xc(%esp)
08105639 +0x2b8:  mov    %ebx,0x8(%esp)
0810563d +0x2bc:  movl   $"DYNAMIC MEMORY_POOL Acquire error reference count(%d), node(%x)",0x4(%esp)
08105645 +0x2c4:  lea    -0x30(%ebp),%eax
08105648 +0x2c7:  mov    %eax,(%esp)
0810564b +0x2ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08105650 +0x2cf:  mov    0x8(%ebp),%eax
08105653 +0x2d2:  movl   $0x4,0x4(%eax)
0810565a +0x2d9:  mov    -0x10(%ebp),%eax
0810565d +0x2dc:  movzbl 0x2e0(%eax),%eax
08105664 +0x2e3:  lea    0x1(%eax),%edx
08105667 +0x2e6:  mov    -0x10(%ebp),%eax
0810566a +0x2e9:  mov    %dl,0x2e0(%eax)
08105670 +0x2ef:  cmpl   $0x0,-0xc(%ebp)
08105674 +0x2f3:  jne    081056bc <+0x33b>
08105676 +0x2f5:  movl   $0x5,0xc(%esp)
0810567e +0x2fd:  movl   $0x1c4,0x8(%esp)
08105686 +0x305:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEvE12__FUNCTION__,0x4(%esp)
0810568e +0x30d:  lea    -0x20(%ebp),%eax
08105691 +0x310:  mov    %eax,(%esp)
08105694 +0x313:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08105699 +0x318:  movl   $0x1c4,0xc(%esp)
081056a1 +0x320:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEvE12__FUNCTION__,0x8(%esp)
081056a9 +0x328:  movl   $"DYNAMIC MEMORY_POOL Acquire error [%s][%d]",0x4(%esp)
081056b1 +0x330:  lea    -0x20(%ebp),%eax
081056b4 +0x333:  mov    %eax,(%esp)
081056b7 +0x336:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081056bc +0x33b:  mov    0x8(%ebp),%eax
081056bf +0x33e:  add    $0x8,%eax
081056c2 +0x341:  mov    %eax,(%esp)
081056c5 +0x344:  call   08105874 <+0x4f3>
081056ca +0x349:  mov    -0xc(%ebp),%eax
081056cd +0x34c:  add    $0x74,%esp
081056d0 +0x34f:  pop    %ebx
081056d1 +0x350:  pop    %ebp
081056d2 +0x351:  ret
081056d3 +0x352:  nop
081056d4 +0x353:  push   %ebp
081056d5 +0x354:  mov    %esp,%ebp
081056d7 +0x356:  push   %esi
081056d8 +0x357:  push   %ebx
081056d9 +0x358:  sub    $0x40,%esp
081056dc +0x35b:  cmpl   $0x0,0xc(%ebp)
081056e0 +0x35f:  jne    081056ec <+0x36b>
081056e2 +0x361:  mov    $0x0,%eax
081056e7 +0x366:  jmp    081057ee <+0x46d>
081056ec +0x36b:  mov    0xc(%ebp),%eax
081056ef +0x36e:  mov    %eax,-0x2c(%ebp)
081056f2 +0x371:  mov    0x8(%ebp),%eax
081056f5 +0x374:  lea    0x8(%eax),%edx
081056f8 +0x377:  lea    -0x2c(%ebp),%eax
081056fb +0x37a:  mov    %eax,0x4(%esp)
081056ff +0x37e:  mov    %edx,(%esp)
08105702 +0x381:  call   08105888 <+0x507>
08105707 +0x386:  mov    -0x2c(%ebp),%eax
0810570a +0x389:  mov    0x2dc(%eax),%eax
08105710 +0x38f:  cmp    $0x8f21,%eax
08105715 +0x394:  je     0810576b <+0x3ea>
08105717 +0x396:  mov    -0x2c(%ebp),%esi
0810571a +0x399:  mov    -0x2c(%ebp),%eax
0810571d +0x39c:  mov    0x2dc(%eax),%ebx
08105723 +0x3a2:  movl   $0x0,0xc(%esp)
0810572b +0x3aa:  movl   $0x269,0x8(%esp)
08105733 +0x3b2:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE4FreeEPS2_E12__FUNCTION__,0x4(%esp)
0810573b +0x3ba:  lea    -0x28(%ebp),%eax
0810573e +0x3bd:  mov    %eax,(%esp)
08105741 +0x3c0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08105746 +0x3c5:  mov    %esi,0xc(%esp)
0810574a +0x3c9:  mov    %ebx,0x8(%esp)
0810574e +0x3cd:  movl   $"DYNAMIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
08105756 +0x3d5:  lea    -0x28(%ebp),%eax
08105759 +0x3d8:  mov    %eax,(%esp)
0810575c +0x3db:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08105761 +0x3e0:  mov    0x8(%ebp),%eax
08105764 +0x3e3:  movl   $0x5,0x4(%eax)
0810576b +0x3ea:  mov    -0x2c(%ebp),%eax
0810576e +0x3ed:  movzbl 0x2e0(%eax),%eax
08105775 +0x3f4:  cmp    $0x1,%al
08105777 +0x3f6:  je     081057d6 <+0x455>
08105779 +0x3f8:  mov    -0x2c(%ebp),%esi
0810577c +0x3fb:  mov    -0x2c(%ebp),%eax
0810577f +0x3fe:  movzbl 0x2e0(%eax),%eax
08105786 +0x405:  movsbl %al,%ebx
08105789 +0x408:  movl   $0x0,0xc(%esp)
08105791 +0x410:  movl   $0x26f,0x8(%esp)
08105799 +0x418:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE4FreeEPS2_E12__FUNCTION__,0x4(%esp)
081057a1 +0x420:  lea    -0x18(%ebp),%eax
081057a4 +0x423:  mov    %eax,(%esp)
081057a7 +0x426:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081057ac +0x42b:  mov    %esi,0xc(%esp)
081057b0 +0x42f:  mov    %ebx,0x8(%esp)
081057b4 +0x433:  movl   $"DYNAMIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
081057bc +0x43b:  lea    -0x18(%ebp),%eax
081057bf +0x43e:  mov    %eax,(%esp)
081057c2 +0x441:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081057c7 +0x446:  mov    0x8(%ebp),%eax
081057ca +0x449:  movl   $0x6,0x4(%eax)
081057d1 +0x450:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
081057d6 +0x455:  mov    -0x2c(%ebp),%eax
081057d9 +0x458:  movzbl 0x2e0(%eax),%edx
081057e0 +0x45f:  sub    $0x1,%edx
081057e3 +0x462:  mov    %dl,0x2e0(%eax)
081057e9 +0x468:  mov    $0x1,%eax
081057ee +0x46d:  add    $0x40,%esp
081057f1 +0x470:  pop    %ebx
081057f2 +0x471:  pop    %esi
081057f3 +0x472:  pop    %ebp
081057f4 +0x473:  ret
081057f5 +0x474:  nop
081057f6 +0x475:  push   %ebp
081057f7 +0x476:  mov    %esp,%ebp
081057f9 +0x478:  sub    $0x18,%esp
081057fc +0x47b:  mov    0x8(%ebp),%eax
081057ff +0x47e:  mov    0xc(%ebp),%edx
08105802 +0x481:  mov    %edx,0x4(%esp)
08105806 +0x485:  mov    %eax,(%esp)
08105809 +0x488:  call   081058a2 <+0x521>
0810580e +0x48d:  leave
0810580f +0x48e:  ret
08105810 +0x48f:  push   %ebp
08105811 +0x490:  mov    %esp,%ebp
08105813 +0x492:  sub    $0x18,%esp
08105816 +0x495:  mov    0x8(%ebp),%eax
08105819 +0x498:  mov    %eax,(%esp)
0810581c +0x49b:  call   081058fc <+0x57b>
08105821 +0x4a0:  leave
08105822 +0x4a1:  ret
08105823 +0x4a2:  nop
08105824 +0x4a3:  push   %ebp
08105825 +0x4a4:  mov    %esp,%ebp
08105827 +0x4a6:  sub    $0x18,%esp
0810582a +0x4a9:  mov    0x8(%ebp),%eax
0810582d +0x4ac:  mov    %eax,(%esp)
08105830 +0x4af:  call   0810591c <+0x59b>
08105835 +0x4b4:  leave
08105836 +0x4b5:  ret
08105837 +0x4b6:  nop
08105838 +0x4b7:  push   %ebp
08105839 +0x4b8:  mov    %esp,%ebp
0810583b +0x4ba:  sub    $0x18,%esp
0810583e +0x4bd:  mov    0x8(%ebp),%eax
08105841 +0x4c0:  mov    %eax,(%esp)
08105844 +0x4c3:  call   08105944 <+0x5c3>
08105849 +0x4c8:  leave
0810584a +0x4c9:  ret
0810584b +0x4ca:  nop
0810584c +0x4cb:  push   %ebp
0810584d +0x4cc:  mov    %esp,%ebp
0810584f +0x4ce:  sub    $0x18,%esp
08105852 +0x4d1:  mov    0x8(%ebp),%eax
08105855 +0x4d4:  mov    %eax,(%esp)
08105858 +0x4d7:  call   08105990 <+0x60f>
0810585d +0x4dc:  leave
0810585e +0x4dd:  ret
0810585f +0x4de:  nop
08105860 +0x4df:  push   %ebp
08105861 +0x4e0:  mov    %esp,%ebp
08105863 +0x4e2:  sub    $0x18,%esp
08105866 +0x4e5:  mov    0x8(%ebp),%eax
08105869 +0x4e8:  mov    %eax,(%esp)
0810586c +0x4eb:  call   081059b0 <+0x62f>
08105871 +0x4f0:  leave
08105872 +0x4f1:  ret
08105873 +0x4f2:  nop
08105874 +0x4f3:  push   %ebp
08105875 +0x4f4:  mov    %esp,%ebp
08105877 +0x4f6:  sub    $0x18,%esp
0810587a +0x4f9:  mov    0x8(%ebp),%eax
0810587d +0x4fc:  mov    %eax,(%esp)
08105880 +0x4ff:  call   081059d8 <+0x657>
08105885 +0x504:  leave
08105886 +0x505:  ret
08105887 +0x506:  nop
08105888 +0x507:  push   %ebp
08105889 +0x508:  mov    %esp,%ebp
0810588b +0x50a:  sub    $0x18,%esp
0810588e +0x50d:  mov    0x8(%ebp),%eax
08105891 +0x510:  mov    0xc(%ebp),%edx
08105894 +0x513:  mov    %edx,0x4(%esp)
08105898 +0x517:  mov    %eax,(%esp)
0810589b +0x51a:  call   08105a24 <+0x6a3>
081058a0 +0x51f:  leave
081058a1 +0x520:  ret
081058a2 +0x521:  push   %ebp
081058a3 +0x522:  mov    %esp,%ebp
081058a5 +0x524:  sub    $0x18,%esp
081058a8 +0x527:  mov    0x8(%ebp),%eax
081058ab +0x52a:  mov    0x18(%eax),%edx
081058ae +0x52d:  mov    0x8(%ebp),%eax
081058b1 +0x530:  mov    0x20(%eax),%eax
081058b4 +0x533:  sub    $0x4,%eax
081058b7 +0x536:  cmp    %eax,%edx
081058b9 +0x538:  je     081058e8 <+0x567>
081058bb +0x53a:  mov    0x8(%ebp),%eax
081058be +0x53d:  mov    0x18(%eax),%edx
081058c1 +0x540:  mov    0x8(%ebp),%eax
081058c4 +0x543:  mov    0xc(%ebp),%ecx
081058c7 +0x546:  mov    %ecx,0x8(%esp)
081058cb +0x54a:  mov    %edx,0x4(%esp)
081058cf +0x54e:  mov    %eax,(%esp)
081058d2 +0x551:  call   08105a7e <+0x6fd>
081058d7 +0x556:  mov    0x8(%ebp),%eax
081058da +0x559:  mov    0x18(%eax),%eax
081058dd +0x55c:  lea    0x4(%eax),%edx
081058e0 +0x55f:  mov    0x8(%ebp),%eax
081058e3 +0x562:  mov    %edx,0x18(%eax)
081058e6 +0x565:  jmp    081058fa <+0x579>
081058e8 +0x567:  mov    0xc(%ebp),%eax
081058eb +0x56a:  mov    %eax,0x4(%esp)
081058ef +0x56e:  mov    0x8(%ebp),%eax
081058f2 +0x571:  mov    %eax,(%esp)
081058f5 +0x574:  call   08105aa6 <+0x725>
081058fa +0x579:  leave
081058fb +0x57a:  ret
081058fc +0x57b:  push   %ebp
081058fd +0x57c:  mov    %esp,%ebp
081058ff +0x57e:  sub    $0x18,%esp
08105902 +0x581:  mov    0x8(%ebp),%eax
08105905 +0x584:  lea    0x8(%eax),%edx
08105908 +0x587:  mov    0x8(%ebp),%eax
0810590b +0x58a:  add    $0x18,%eax
0810590e +0x58d:  mov    %edx,0x4(%esp)
08105912 +0x591:  mov    %eax,(%esp)
08105915 +0x594:  call   08105b27 <+0x7a6>
0810591a +0x599:  leave
0810591b +0x59a:  ret
0810591c +0x59b:  push   %ebp
0810591d +0x59c:  mov    %esp,%ebp
0810591f +0x59e:  sub    $0x28,%esp
08105922 +0x5a1:  lea    -0x18(%ebp),%eax
08105925 +0x5a4:  mov    0x8(%ebp),%edx
08105928 +0x5a7:  mov    %edx,0x4(%esp)
0810592c +0x5ab:  mov    %eax,(%esp)
0810592f +0x5ae:  call   0810173a <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x75c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x75c
08105934 +0x5b3:  sub    $0x4,%esp
08105937 +0x5b6:  lea    -0x18(%ebp),%eax
0810593a +0x5b9:  mov    %eax,(%esp)
0810593d +0x5bc:  call   08105b3c <+0x7bb>
08105942 +0x5c1:  leave
08105943 +0x5c2:  ret
08105944 +0x5c3:  push   %ebp
08105945 +0x5c4:  mov    %esp,%ebp
08105947 +0x5c6:  sub    $0x18,%esp
0810594a +0x5c9:  mov    0x8(%ebp),%eax
0810594d +0x5cc:  mov    0x8(%eax),%edx
08105950 +0x5cf:  mov    0x8(%ebp),%eax
08105953 +0x5d2:  mov    0x10(%eax),%eax
08105956 +0x5d5:  sub    $0x4,%eax
08105959 +0x5d8:  cmp    %eax,%edx
0810595b +0x5da:  je     08105983 <+0x602>
0810595d +0x5dc:  mov    0x8(%ebp),%eax
08105960 +0x5df:  mov    0x8(%eax),%edx
08105963 +0x5e2:  mov    0x8(%ebp),%eax
08105966 +0x5e5:  mov    %edx,0x4(%esp)
0810596a +0x5e9:  mov    %eax,(%esp)
0810596d +0x5ec:  call   08105b46 <+0x7c5>
08105972 +0x5f1:  mov    0x8(%ebp),%eax
08105975 +0x5f4:  mov    0x8(%eax),%eax
08105978 +0x5f7:  lea    0x4(%eax),%edx
0810597b +0x5fa:  mov    0x8(%ebp),%eax
0810597e +0x5fd:  mov    %edx,0x8(%eax)
08105981 +0x600:  jmp    0810598e <+0x60d>
08105983 +0x602:  mov    0x8(%ebp),%eax
08105986 +0x605:  mov    %eax,(%esp)
08105989 +0x608:  call   08105b4c <+0x7cb>
0810598e +0x60d:  leave
0810598f +0x60e:  ret
08105990 +0x60f:  push   %ebp
08105991 +0x610:  mov    %esp,%ebp
08105993 +0x612:  sub    $0x18,%esp
08105996 +0x615:  mov    0x8(%ebp),%eax
08105999 +0x618:  lea    0x8(%eax),%edx
0810599c +0x61b:  mov    0x8(%ebp),%eax
0810599f +0x61e:  add    $0x18,%eax
081059a2 +0x621:  mov    %edx,0x4(%esp)
081059a6 +0x625:  mov    %eax,(%esp)
081059a9 +0x628:  call   08105ba5 <+0x824>
081059ae +0x62d:  leave
081059af +0x62e:  ret
081059b0 +0x62f:  push   %ebp
081059b1 +0x630:  mov    %esp,%ebp
081059b3 +0x632:  sub    $0x28,%esp
081059b6 +0x635:  lea    -0x18(%ebp),%eax
081059b9 +0x638:  mov    0x8(%ebp),%edx
081059bc +0x63b:  mov    %edx,0x4(%esp)
081059c0 +0x63f:  mov    %eax,(%esp)
081059c3 +0x642:  call   08101fe6 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1008>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1008
081059c8 +0x647:  sub    $0x4,%esp
081059cb +0x64a:  lea    -0x18(%ebp),%eax
081059ce +0x64d:  mov    %eax,(%esp)
081059d1 +0x650:  call   08105bba <+0x839>
081059d6 +0x655:  leave
081059d7 +0x656:  ret
081059d8 +0x657:  push   %ebp
081059d9 +0x658:  mov    %esp,%ebp
081059db +0x65a:  sub    $0x18,%esp
081059de +0x65d:  mov    0x8(%ebp),%eax
081059e1 +0x660:  mov    0x8(%eax),%edx
081059e4 +0x663:  mov    0x8(%ebp),%eax
081059e7 +0x666:  mov    0x10(%eax),%eax
081059ea +0x669:  sub    $0x4,%eax
081059ed +0x66c:  cmp    %eax,%edx
081059ef +0x66e:  je     08105a17 <+0x696>
081059f1 +0x670:  mov    0x8(%ebp),%eax
081059f4 +0x673:  mov    0x8(%eax),%edx
081059f7 +0x676:  mov    0x8(%ebp),%eax
081059fa +0x679:  mov    %edx,0x4(%esp)
081059fe +0x67d:  mov    %eax,(%esp)
08105a01 +0x680:  call   08105bc4 <+0x843>
08105a06 +0x685:  mov    0x8(%ebp),%eax
08105a09 +0x688:  mov    0x8(%eax),%eax
08105a0c +0x68b:  lea    0x4(%eax),%edx
08105a0f +0x68e:  mov    0x8(%ebp),%eax
08105a12 +0x691:  mov    %edx,0x8(%eax)
08105a15 +0x694:  jmp    08105a22 <+0x6a1>
08105a17 +0x696:  mov    0x8(%ebp),%eax
08105a1a +0x699:  mov    %eax,(%esp)
08105a1d +0x69c:  call   08105bca <+0x849>
08105a22 +0x6a1:  leave
08105a23 +0x6a2:  ret
08105a24 +0x6a3:  push   %ebp
08105a25 +0x6a4:  mov    %esp,%ebp
08105a27 +0x6a6:  sub    $0x18,%esp
08105a2a +0x6a9:  mov    0x8(%ebp),%eax
08105a2d +0x6ac:  mov    0x18(%eax),%edx
08105a30 +0x6af:  mov    0x8(%ebp),%eax
08105a33 +0x6b2:  mov    0x20(%eax),%eax
08105a36 +0x6b5:  sub    $0x4,%eax
08105a39 +0x6b8:  cmp    %eax,%edx
08105a3b +0x6ba:  je     08105a6a <+0x6e9>
08105a3d +0x6bc:  mov    0x8(%ebp),%eax
08105a40 +0x6bf:  mov    0x18(%eax),%edx
08105a43 +0x6c2:  mov    0x8(%ebp),%eax
08105a46 +0x6c5:  mov    0xc(%ebp),%ecx
08105a49 +0x6c8:  mov    %ecx,0x8(%esp)
08105a4d +0x6cc:  mov    %edx,0x4(%esp)
08105a51 +0x6d0:  mov    %eax,(%esp)
08105a54 +0x6d3:  call   08105c24 <+0x8a3>
08105a59 +0x6d8:  mov    0x8(%ebp),%eax
08105a5c +0x6db:  mov    0x18(%eax),%eax
08105a5f +0x6de:  lea    0x4(%eax),%edx
08105a62 +0x6e1:  mov    0x8(%ebp),%eax
08105a65 +0x6e4:  mov    %edx,0x18(%eax)
08105a68 +0x6e7:  jmp    08105a7c <+0x6fb>
08105a6a +0x6e9:  mov    0xc(%ebp),%eax
08105a6d +0x6ec:  mov    %eax,0x4(%esp)
08105a71 +0x6f0:  mov    0x8(%ebp),%eax
08105a74 +0x6f3:  mov    %eax,(%esp)
08105a77 +0x6f6:  call   08105c4c <+0x8cb>
08105a7c +0x6fb:  leave
08105a7d +0x6fc:  ret
08105a7e +0x6fd:  push   %ebp
08105a7f +0x6fe:  mov    %esp,%ebp
08105a81 +0x700:  sub    $0x18,%esp
08105a84 +0x703:  mov    0xc(%ebp),%eax
08105a87 +0x706:  mov    %eax,0x4(%esp)
08105a8b +0x70a:  movl   $0x4,(%esp)
08105a92 +0x711:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08105a97 +0x716:  mov    %eax,%edx
08105a99 +0x718:  test   %edx,%edx
08105a9b +0x71a:  je     08105aa4 <+0x723>
08105a9d +0x71c:  mov    0x10(%ebp),%edx
08105aa0 +0x71f:  mov    (%edx),%edx
08105aa2 +0x721:  mov    %edx,(%eax)
08105aa4 +0x723:  leave
08105aa5 +0x724:  ret
08105aa6 +0x725:  push   %ebp
08105aa7 +0x726:  mov    %esp,%ebp
08105aa9 +0x728:  push   %ebx
08105aaa +0x729:  sub    $0x14,%esp
08105aad +0x72c:  movl   $0x1,0x4(%esp)
08105ab5 +0x734:  mov    0x8(%ebp),%eax
08105ab8 +0x737:  mov    %eax,(%esp)
08105abb +0x73a:  call   08105cce <+0x94d>
08105ac0 +0x73f:  mov    0x8(%ebp),%eax
08105ac3 +0x742:  mov    0x24(%eax),%eax
08105ac6 +0x745:  lea    0x4(%eax),%ebx
08105ac9 +0x748:  mov    0x8(%ebp),%eax
08105acc +0x74b:  mov    %eax,(%esp)
08105acf +0x74e:  call   08102ce6 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1d08>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1d08
08105ad4 +0x753:  mov    %eax,(%ebx)
08105ad6 +0x755:  mov    0xc(%ebp),%eax
08105ad9 +0x758:  mov    %eax,(%esp)
08105adc +0x75b:  call   08105d23 <+0x9a2>
08105ae1 +0x760:  mov    0x8(%ebp),%edx
08105ae4 +0x763:  mov    0x18(%edx),%ecx
08105ae7 +0x766:  mov    0x8(%ebp),%edx
08105aea +0x769:  mov    %eax,0x8(%esp)
08105aee +0x76d:  mov    %ecx,0x4(%esp)
08105af2 +0x771:  mov    %edx,(%esp)
08105af5 +0x774:  call   08105a7e <+0x6fd>
08105afa +0x779:  mov    0x8(%ebp),%eax
08105afd +0x77c:  mov    0x24(%eax),%eax
08105b00 +0x77f:  lea    0x4(%eax),%edx
08105b03 +0x782:  mov    0x8(%ebp),%eax
08105b06 +0x785:  add    $0x18,%eax
08105b09 +0x788:  mov    %edx,0x4(%esp)
08105b0d +0x78c:  mov    %eax,(%esp)
08105b10 +0x78f:  call   0810250e <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1530>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1530
08105b15 +0x794:  mov    0x8(%ebp),%eax
08105b18 +0x797:  mov    0x1c(%eax),%edx
08105b1b +0x79a:  mov    0x8(%ebp),%eax
08105b1e +0x79d:  mov    %edx,0x18(%eax)
08105b21 +0x7a0:  add    $0x14,%esp
08105b24 +0x7a3:  pop    %ebx
08105b25 +0x7a4:  pop    %ebp
08105b26 +0x7a5:  ret
08105b27 +0x7a6:  push   %ebp
08105b28 +0x7a7:  mov    %esp,%ebp
08105b2a +0x7a9:  mov    0x8(%ebp),%eax
08105b2d +0x7ac:  mov    (%eax),%edx
08105b2f +0x7ae:  mov    0xc(%ebp),%eax
08105b32 +0x7b1:  mov    (%eax),%eax
08105b34 +0x7b3:  cmp    %eax,%edx
08105b36 +0x7b5:  sete   %al
08105b39 +0x7b8:  pop    %ebp
08105b3a +0x7b9:  ret
08105b3b +0x7ba:  nop
08105b3c +0x7bb:  push   %ebp
08105b3d +0x7bc:  mov    %esp,%ebp
08105b3f +0x7be:  mov    0x8(%ebp),%eax
08105b42 +0x7c1:  mov    (%eax),%eax
08105b44 +0x7c3:  pop    %ebp
08105b45 +0x7c4:  ret
08105b46 +0x7c5:  push   %ebp
08105b47 +0x7c6:  mov    %esp,%ebp
08105b49 +0x7c8:  pop    %ebp
08105b4a +0x7c9:  ret
08105b4b +0x7ca:  nop
08105b4c +0x7cb:  push   %ebp
08105b4d +0x7cc:  mov    %esp,%ebp
08105b4f +0x7ce:  sub    $0x18,%esp
08105b52 +0x7d1:  mov    0x8(%ebp),%eax
08105b55 +0x7d4:  mov    0x8(%eax),%edx
08105b58 +0x7d7:  mov    0x8(%ebp),%eax
08105b5b +0x7da:  mov    %edx,0x4(%esp)
08105b5f +0x7de:  mov    %eax,(%esp)
08105b62 +0x7e1:  call   08105b46 <+0x7c5>
08105b67 +0x7e6:  mov    0x8(%ebp),%eax
08105b6a +0x7e9:  mov    0xc(%eax),%edx
08105b6d +0x7ec:  mov    0x8(%ebp),%eax
08105b70 +0x7ef:  mov    %edx,0x4(%esp)
08105b74 +0x7f3:  mov    %eax,(%esp)
08105b77 +0x7f6:  call   08102546 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1568>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1568
08105b7c +0x7fb:  mov    0x8(%ebp),%eax
08105b7f +0x7fe:  mov    0x14(%eax),%eax
08105b82 +0x801:  lea    0x4(%eax),%edx
08105b85 +0x804:  mov    0x8(%ebp),%eax
08105b88 +0x807:  add    $0x8,%eax
08105b8b +0x80a:  mov    %edx,0x4(%esp)
08105b8f +0x80e:  mov    %eax,(%esp)
08105b92 +0x811:  call   0810250e <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1530>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1530
08105b97 +0x816:  mov    0x8(%ebp),%eax
08105b9a +0x819:  mov    0xc(%eax),%edx
08105b9d +0x81c:  mov    0x8(%ebp),%eax
08105ba0 +0x81f:  mov    %edx,0x8(%eax)
08105ba3 +0x822:  leave
08105ba4 +0x823:  ret
08105ba5 +0x824:  push   %ebp
08105ba6 +0x825:  mov    %esp,%ebp
08105ba8 +0x827:  mov    0x8(%ebp),%eax
08105bab +0x82a:  mov    (%eax),%edx
08105bad +0x82c:  mov    0xc(%ebp),%eax
08105bb0 +0x82f:  mov    (%eax),%eax
08105bb2 +0x831:  cmp    %eax,%edx
08105bb4 +0x833:  sete   %al
08105bb7 +0x836:  pop    %ebp
08105bb8 +0x837:  ret
08105bb9 +0x838:  nop
08105bba +0x839:  push   %ebp
08105bbb +0x83a:  mov    %esp,%ebp
08105bbd +0x83c:  mov    0x8(%ebp),%eax
08105bc0 +0x83f:  mov    (%eax),%eax
08105bc2 +0x841:  pop    %ebp
08105bc3 +0x842:  ret
08105bc4 +0x843:  push   %ebp
08105bc5 +0x844:  mov    %esp,%ebp
08105bc7 +0x846:  pop    %ebp
08105bc8 +0x847:  ret
08105bc9 +0x848:  nop
08105bca +0x849:  push   %ebp
08105bcb +0x84a:  mov    %esp,%ebp
08105bcd +0x84c:  sub    $0x18,%esp
08105bd0 +0x84f:  mov    0x8(%ebp),%eax
08105bd3 +0x852:  mov    0x8(%eax),%edx
08105bd6 +0x855:  mov    0x8(%ebp),%eax
08105bd9 +0x858:  mov    %edx,0x4(%esp)
08105bdd +0x85c:  mov    %eax,(%esp)
08105be0 +0x85f:  call   08105bc4 <+0x843>
08105be5 +0x864:  mov    0x8(%ebp),%eax
08105be8 +0x867:  mov    0xc(%eax),%edx
08105beb +0x86a:  mov    0x8(%ebp),%eax
08105bee +0x86d:  mov    %edx,0x4(%esp)
08105bf2 +0x871:  mov    %eax,(%esp)
08105bf5 +0x874:  call   08102ed2 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1ef4>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1ef4
08105bfa +0x879:  mov    0x8(%ebp),%eax
08105bfd +0x87c:  mov    0x14(%eax),%eax
08105c00 +0x87f:  lea    0x4(%eax),%edx
08105c03 +0x882:  mov    0x8(%ebp),%eax
08105c06 +0x885:  add    $0x8,%eax
08105c09 +0x888:  mov    %edx,0x4(%esp)
08105c0d +0x88c:  mov    %eax,(%esp)
08105c10 +0x88f:  call   08102e9a <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1ebc>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1ebc
08105c15 +0x894:  mov    0x8(%ebp),%eax
08105c18 +0x897:  mov    0xc(%eax),%edx
08105c1b +0x89a:  mov    0x8(%ebp),%eax
08105c1e +0x89d:  mov    %edx,0x8(%eax)
08105c21 +0x8a0:  leave
08105c22 +0x8a1:  ret
08105c23 +0x8a2:  nop
08105c24 +0x8a3:  push   %ebp
08105c25 +0x8a4:  mov    %esp,%ebp
08105c27 +0x8a6:  sub    $0x18,%esp
08105c2a +0x8a9:  mov    0xc(%ebp),%eax
08105c2d +0x8ac:  mov    %eax,0x4(%esp)
08105c31 +0x8b0:  movl   $0x4,(%esp)
08105c38 +0x8b7:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08105c3d +0x8bc:  mov    %eax,%edx
08105c3f +0x8be:  test   %edx,%edx
08105c41 +0x8c0:  je     08105c4a <+0x8c9>
08105c43 +0x8c2:  mov    0x10(%ebp),%edx
08105c46 +0x8c5:  mov    (%edx),%edx
08105c48 +0x8c7:  mov    %edx,(%eax)
08105c4a +0x8c9:  leave
08105c4b +0x8ca:  ret
08105c4c +0x8cb:  push   %ebp
08105c4d +0x8cc:  mov    %esp,%ebp
08105c4f +0x8ce:  push   %ebx
08105c50 +0x8cf:  sub    $0x14,%esp
08105c53 +0x8d2:  movl   $0x1,0x4(%esp)
08105c5b +0x8da:  mov    0x8(%ebp),%eax
08105c5e +0x8dd:  mov    %eax,(%esp)
08105c61 +0x8e0:  call   08103d46 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x2d68>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x2d68
08105c66 +0x8e5:  mov    0x8(%ebp),%eax
08105c69 +0x8e8:  mov    0x24(%eax),%eax
08105c6c +0x8eb:  lea    0x4(%eax),%ebx
08105c6f +0x8ee:  mov    0x8(%ebp),%eax
08105c72 +0x8f1:  mov    %eax,(%esp)
08105c75 +0x8f4:  call   081036e8 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x270a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x270a
08105c7a +0x8f9:  mov    %eax,(%ebx)
08105c7c +0x8fb:  mov    0xc(%ebp),%eax
08105c7f +0x8fe:  mov    %eax,(%esp)
08105c82 +0x901:  call   081030f8 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x211a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x211a
08105c87 +0x906:  mov    0x8(%ebp),%edx
08105c8a +0x909:  mov    0x18(%edx),%ecx
08105c8d +0x90c:  mov    0x8(%ebp),%edx
08105c90 +0x90f:  mov    %eax,0x8(%esp)
08105c94 +0x913:  mov    %ecx,0x4(%esp)
08105c98 +0x917:  mov    %edx,(%esp)
08105c9b +0x91a:  call   08105c24 <+0x8a3>
08105ca0 +0x91f:  mov    0x8(%ebp),%eax
08105ca3 +0x922:  mov    0x24(%eax),%eax
08105ca6 +0x925:  lea    0x4(%eax),%edx
08105ca9 +0x928:  mov    0x8(%ebp),%eax
08105cac +0x92b:  add    $0x18,%eax
08105caf +0x92e:  mov    %edx,0x4(%esp)
08105cb3 +0x932:  mov    %eax,(%esp)
08105cb6 +0x935:  call   08102e9a <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1ebc>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1ebc
08105cbb +0x93a:  mov    0x8(%ebp),%eax
08105cbe +0x93d:  mov    0x1c(%eax),%edx
08105cc1 +0x940:  mov    0x8(%ebp),%eax
08105cc4 +0x943:  mov    %edx,0x18(%eax)
08105cc7 +0x946:  add    $0x14,%esp
08105cca +0x949:  pop    %ebx
08105ccb +0x94a:  pop    %ebp
08105ccc +0x94b:  ret
08105ccd +0x94c:  nop
08105cce +0x94d:  push   %ebp
08105ccf +0x94e:  mov    %esp,%ebp
08105cd1 +0x950:  push   %esi
08105cd2 +0x951:  push   %ebx
08105cd3 +0x952:  sub    $0x10,%esp
08105cd6 +0x955:  mov    0xc(%ebp),%eax
08105cd9 +0x958:  lea    0x1(%eax),%ebx
08105cdc +0x95b:  mov    0x8(%ebp),%eax
08105cdf +0x95e:  mov    0x4(%eax),%edx
08105ce2 +0x961:  mov    0x8(%ebp),%eax
08105ce5 +0x964:  mov    0x24(%eax),%eax
08105ce8 +0x967:  mov    %eax,%ecx
08105cea +0x969:  mov    0x8(%ebp),%eax
08105ced +0x96c:  mov    (%eax),%eax
08105cef +0x96e:  mov    %ecx,%esi
08105cf1 +0x970:  sub    %eax,%esi
08105cf3 +0x972:  mov    %esi,%eax
08105cf5 +0x974:  sar    $0x2,%eax
08105cf8 +0x977:  mov    %edx,%ecx
08105cfa +0x979:  sub    %eax,%ecx
08105cfc +0x97b:  mov    %ecx,%eax
08105cfe +0x97d:  cmp    %eax,%ebx
08105d00 +0x97f:  jbe    08105d1c <+0x99b>
08105d02 +0x981:  movl   $0x0,0x8(%esp)
08105d0a +0x989:  mov    0xc(%ebp),%eax
08105d0d +0x98c:  mov    %eax,0x4(%esp)
08105d11 +0x990:  mov    0x8(%ebp),%eax
08105d14 +0x993:  mov    %eax,(%esp)
08105d17 +0x996:  call   08105d2c <+0x9ab>
08105d1c +0x99b:  add    $0x10,%esp
08105d1f +0x99e:  pop    %ebx
08105d20 +0x99f:  pop    %esi
08105d21 +0x9a0:  pop    %ebp
08105d22 +0x9a1:  ret
08105d23 +0x9a2:  push   %ebp
08105d24 +0x9a3:  mov    %esp,%ebp
08105d26 +0x9a5:  mov    0x8(%ebp),%eax
08105d29 +0x9a8:  pop    %ebp
08105d2a +0x9a9:  ret
08105d2b +0x9aa:  nop
08105d2c +0x9ab:  push   %ebp
08105d2d +0x9ac:  mov    %esp,%ebp
08105d2f +0x9ae:  push   %ebx
08105d30 +0x9af:  sub    $0x44,%esp
08105d33 +0x9b2:  mov    0x10(%ebp),%eax
08105d36 +0x9b5:  mov    %al,-0x2c(%ebp)
08105d39 +0x9b8:  mov    0x8(%ebp),%eax
08105d3c +0x9bb:  mov    0x24(%eax),%eax
08105d3f +0x9be:  mov    %eax,%edx
08105d41 +0x9c0:  mov    0x8(%ebp),%eax
08105d44 +0x9c3:  mov    0x14(%eax),%eax
08105d47 +0x9c6:  mov    %edx,%ecx
08105d49 +0x9c8:  sub    %eax,%ecx
08105d4b +0x9ca:  mov    %ecx,%eax
08105d4d +0x9cc:  sar    $0x2,%eax
08105d50 +0x9cf:  add    $0x1,%eax
08105d53 +0x9d2:  mov    %eax,-0x1c(%ebp)
08105d56 +0x9d5:  mov    0xc(%ebp),%eax
08105d59 +0x9d8:  add    -0x1c(%ebp),%eax
08105d5c +0x9db:  mov    %eax,-0x18(%ebp)
08105d5f +0x9de:  mov    0x8(%ebp),%eax
08105d62 +0x9e1:  mov    0x4(%eax),%eax
08105d65 +0x9e4:  mov    -0x18(%ebp),%edx
08105d68 +0x9e7:  add    %edx,%edx
08105d6a +0x9e9:  cmp    %edx,%eax
08105d6c +0x9eb:  jbe    08105e06 <+0xa85>
08105d72 +0x9f1:  mov    0x8(%ebp),%eax
08105d75 +0x9f4:  mov    (%eax),%edx
08105d77 +0x9f6:  mov    0x8(%ebp),%eax
08105d7a +0x9f9:  mov    0x4(%eax),%eax
08105d7d +0x9fc:  sub    -0x18(%ebp),%eax
08105d80 +0x9ff:  shr    %eax
08105d82 +0xa01:  lea    0x0(,%eax,4),%ecx
08105d89 +0xa08:  cmpb   $0x0,-0x2c(%ebp)
08105d8d +0xa0c:  je     08105d97 <+0xa16>
08105d8f +0xa0e:  mov    0xc(%ebp),%eax
08105d92 +0xa11:  shl    $0x2,%eax
08105d95 +0xa14:  jmp    08105d9c <+0xa1b>
08105d97 +0xa16:  mov    $0x0,%eax
08105d9c +0xa1b:  lea    (%ecx,%eax,1),%eax
08105d9f +0xa1e:  lea    (%edx,%eax,1),%eax
08105da2 +0xa21:  mov    %eax,-0x14(%ebp)
08105da5 +0xa24:  mov    0x8(%ebp),%eax
08105da8 +0xa27:  mov    0x14(%eax),%eax
08105dab +0xa2a:  cmp    -0x14(%ebp),%eax
08105dae +0xa2d:  jbe    08105dd7 <+0xa56>
08105db0 +0xa2f:  mov    0x8(%ebp),%eax
08105db3 +0xa32:  mov    0x24(%eax),%eax
08105db6 +0xa35:  lea    0x4(%eax),%ecx
08105db9 +0xa38:  mov    0x8(%ebp),%eax
08105dbc +0xa3b:  mov    0x14(%eax),%eax
08105dbf +0xa3e:  mov    -0x14(%ebp),%edx
08105dc2 +0xa41:  mov    %edx,0x8(%esp)
08105dc6 +0xa45:  mov    %ecx,0x4(%esp)
08105dca +0xa49:  mov    %eax,(%esp)
08105dcd +0xa4c:  call   08105efc <+0xb7b>
08105dd2 +0xa51:  jmp    08105ec3 <+0xb42>
08105dd7 +0xa56:  mov    -0x1c(%ebp),%eax
08105dda +0xa59:  shl    $0x2,%eax
08105ddd +0xa5c:  mov    %eax,%edx
08105ddf +0xa5e:  add    -0x14(%ebp),%edx
08105de2 +0xa61:  mov    0x8(%ebp),%eax
08105de5 +0xa64:  mov    0x24(%eax),%eax
08105de8 +0xa67:  lea    0x4(%eax),%ecx
08105deb +0xa6a:  mov    0x8(%ebp),%eax
08105dee +0xa6d:  mov    0x14(%eax),%eax
08105df1 +0xa70:  mov    %edx,0x8(%esp)
08105df5 +0xa74:  mov    %ecx,0x4(%esp)
08105df9 +0xa78:  mov    %eax,(%esp)
08105dfc +0xa7b:  call   08105f34 <+0xbb3>
08105e01 +0xa80:  jmp    08105ec3 <+0xb42>
08105e06 +0xa85:  mov    0x8(%ebp),%eax
08105e09 +0xa88:  mov    0x4(%eax),%ebx
08105e0c +0xa8b:  mov    0x8(%ebp),%eax
08105e0f +0xa8e:  lea    0x4(%eax),%edx
08105e12 +0xa91:  lea    0xc(%ebp),%eax
08105e15 +0xa94:  mov    %eax,0x4(%esp)
08105e19 +0xa98:  mov    %edx,(%esp)
08105e1c +0xa9b:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08105e21 +0xaa0:  mov    (%eax),%eax
08105e23 +0xaa2:  lea    (%ebx,%eax,1),%eax
08105e26 +0xaa5:  add    $0x2,%eax
08105e29 +0xaa8:  mov    %eax,-0x10(%ebp)
08105e2c +0xaab:  mov    0x8(%ebp),%eax
08105e2f +0xaae:  mov    -0x10(%ebp),%edx
08105e32 +0xab1:  mov    %edx,0x4(%esp)
08105e36 +0xab5:  mov    %eax,(%esp)
08105e39 +0xab8:  call   0810242c <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x144e>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x144e
08105e3e +0xabd:  mov    %eax,-0xc(%ebp)
08105e41 +0xac0:  mov    -0x18(%ebp),%eax
08105e44 +0xac3:  mov    -0x10(%ebp),%edx
08105e47 +0xac6:  mov    %edx,%ecx
08105e49 +0xac8:  sub    %eax,%ecx
08105e4b +0xaca:  mov    %ecx,%eax
08105e4d +0xacc:  shr    %eax
08105e4f +0xace:  lea    0x0(,%eax,4),%edx
08105e56 +0xad5:  cmpb   $0x0,-0x2c(%ebp)
08105e5a +0xad9:  je     08105e64 <+0xae3>
08105e5c +0xadb:  mov    0xc(%ebp),%eax
08105e5f +0xade:  shl    $0x2,%eax
08105e62 +0xae1:  jmp    08105e69 <+0xae8>
08105e64 +0xae3:  mov    $0x0,%eax
08105e69 +0xae8:  lea    (%edx,%eax,1),%eax
08105e6c +0xaeb:  add    -0xc(%ebp),%eax
08105e6f +0xaee:  mov    %eax,-0x14(%ebp)
08105e72 +0xaf1:  mov    0x8(%ebp),%eax
08105e75 +0xaf4:  mov    0x24(%eax),%eax
08105e78 +0xaf7:  lea    0x4(%eax),%ecx
08105e7b +0xafa:  mov    0x8(%ebp),%eax
08105e7e +0xafd:  mov    0x14(%eax),%eax
08105e81 +0xb00:  mov    -0x14(%ebp),%edx
08105e84 +0xb03:  mov    %edx,0x8(%esp)
08105e88 +0xb07:  mov    %ecx,0x4(%esp)
08105e8c +0xb0b:  mov    %eax,(%esp)
08105e8f +0xb0e:  call   08105efc <+0xb7b>
08105e94 +0xb13:  mov    0x8(%ebp),%eax
08105e97 +0xb16:  mov    0x4(%eax),%ecx
08105e9a +0xb19:  mov    0x8(%ebp),%eax
08105e9d +0xb1c:  mov    (%eax),%edx
08105e9f +0xb1e:  mov    0x8(%ebp),%eax
08105ea2 +0xb21:  mov    %ecx,0x8(%esp)
08105ea6 +0xb25:  mov    %edx,0x4(%esp)
08105eaa +0xb29:  mov    %eax,(%esp)
08105ead +0xb2c:  call   08101e02 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xe24>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xe24
08105eb2 +0xb31:  mov    0x8(%ebp),%eax
08105eb5 +0xb34:  mov    -0xc(%ebp),%edx
08105eb8 +0xb37:  mov    %edx,(%eax)
08105eba +0xb39:  mov    0x8(%ebp),%eax
08105ebd +0xb3c:  mov    -0x10(%ebp),%edx
08105ec0 +0xb3f:  mov    %edx,0x4(%eax)
08105ec3 +0xb42:  mov    0x8(%ebp),%eax
08105ec6 +0xb45:  lea    0x8(%eax),%edx
08105ec9 +0xb48:  mov    -0x14(%ebp),%eax
08105ecc +0xb4b:  mov    %eax,0x4(%esp)
08105ed0 +0xb4f:  mov    %edx,(%esp)
08105ed3 +0xb52:  call   0810250e <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1530>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1530
08105ed8 +0xb57:  mov    -0x1c(%ebp),%eax
08105edb +0xb5a:  sub    $0x1,%eax
08105ede +0xb5d:  shl    $0x2,%eax
08105ee1 +0xb60:  add    -0x14(%ebp),%eax
08105ee4 +0xb63:  mov    0x8(%ebp),%edx
08105ee7 +0xb66:  add    $0x18,%edx
08105eea +0xb69:  mov    %eax,0x4(%esp)
08105eee +0xb6d:  mov    %edx,(%esp)
08105ef1 +0xb70:  call   0810250e <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1530>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1530
08105ef6 +0xb75:  add    $0x44,%esp
08105ef9 +0xb78:  pop    %ebx
08105efa +0xb79:  pop    %ebp
08105efb +0xb7a:  ret
08105efc +0xb7b:  push   %ebp
08105efd +0xb7c:  mov    %esp,%ebp
08105eff +0xb7e:  push   %ebx
08105f00 +0xb7f:  sub    $0x14,%esp
08105f03 +0xb82:  mov    0xc(%ebp),%eax
08105f06 +0xb85:  mov    %eax,(%esp)
08105f09 +0xb88:  call   08105f6c <+0xbeb>
08105f0e +0xb8d:  mov    %eax,%ebx
08105f10 +0xb8f:  mov    0x8(%ebp),%eax
08105f13 +0xb92:  mov    %eax,(%esp)
08105f16 +0xb95:  call   08105f6c <+0xbeb>
08105f1b +0xb9a:  mov    0x10(%ebp),%edx
08105f1e +0xb9d:  mov    %edx,0x8(%esp)
08105f22 +0xba1:  mov    %ebx,0x4(%esp)
08105f26 +0xba5:  mov    %eax,(%esp)
08105f29 +0xba8:  call   08105f74 <+0xbf3>
08105f2e +0xbad:  add    $0x14,%esp
08105f31 +0xbb0:  pop    %ebx
08105f32 +0xbb1:  pop    %ebp
08105f33 +0xbb2:  ret
08105f34 +0xbb3:  push   %ebp
08105f35 +0xbb4:  mov    %esp,%ebp
08105f37 +0xbb6:  push   %ebx
08105f38 +0xbb7:  sub    $0x14,%esp
08105f3b +0xbba:  mov    0xc(%ebp),%eax
08105f3e +0xbbd:  mov    %eax,(%esp)
08105f41 +0xbc0:  call   08105f6c <+0xbeb>
08105f46 +0xbc5:  mov    %eax,%ebx
08105f48 +0xbc7:  mov    0x8(%ebp),%eax
08105f4b +0xbca:  mov    %eax,(%esp)
08105f4e +0xbcd:  call   08105f6c <+0xbeb>
08105f53 +0xbd2:  mov    0x10(%ebp),%edx
08105f56 +0xbd5:  mov    %edx,0x8(%esp)
08105f5a +0xbd9:  mov    %ebx,0x4(%esp)
08105f5e +0xbdd:  mov    %eax,(%esp)
08105f61 +0xbe0:  call   08105fb8 <+0xc37>
08105f66 +0xbe5:  add    $0x14,%esp
08105f69 +0xbe8:  pop    %ebx
08105f6a +0xbe9:  pop    %ebp
08105f6b +0xbea:  ret
08105f6c +0xbeb:  push   %ebp
08105f6d +0xbec:  mov    %esp,%ebp
08105f6f +0xbee:  mov    0x8(%ebp),%eax
08105f72 +0xbf1:  pop    %ebp
08105f73 +0xbf2:  ret
08105f74 +0xbf3:  push   %ebp
08105f75 +0xbf4:  mov    %esp,%ebp
08105f77 +0xbf6:  push   %esi
08105f78 +0xbf7:  push   %ebx
08105f79 +0xbf8:  sub    $0x10,%esp
08105f7c +0xbfb:  mov    0x10(%ebp),%eax
08105f7f +0xbfe:  mov    %eax,(%esp)
08105f82 +0xc01:  call   08105ffc <+0xc7b>
08105f87 +0xc06:  mov    %eax,%esi
08105f89 +0xc08:  mov    0xc(%ebp),%eax
08105f8c +0xc0b:  mov    %eax,(%esp)
08105f8f +0xc0e:  call   08105ffc <+0xc7b>
08105f94 +0xc13:  mov    %eax,%ebx
08105f96 +0xc15:  mov    0x8(%ebp),%eax
08105f99 +0xc18:  mov    %eax,(%esp)
08105f9c +0xc1b:  call   08105ffc <+0xc7b>
08105fa1 +0xc20:  mov    %esi,0x8(%esp)
08105fa5 +0xc24:  mov    %ebx,0x4(%esp)
08105fa9 +0xc28:  mov    %eax,(%esp)
08105fac +0xc2b:  call   08106004 <+0xc83>
08105fb1 +0xc30:  add    $0x10,%esp
08105fb4 +0xc33:  pop    %ebx
08105fb5 +0xc34:  pop    %esi
08105fb6 +0xc35:  pop    %ebp
08105fb7 +0xc36:  ret
08105fb8 +0xc37:  push   %ebp
08105fb9 +0xc38:  mov    %esp,%ebp
08105fbb +0xc3a:  push   %esi
08105fbc +0xc3b:  push   %ebx
08105fbd +0xc3c:  sub    $0x10,%esp
08105fc0 +0xc3f:  mov    0x10(%ebp),%eax
08105fc3 +0xc42:  mov    %eax,(%esp)
08105fc6 +0xc45:  call   08105ffc <+0xc7b>
08105fcb +0xc4a:  mov    %eax,%esi
08105fcd +0xc4c:  mov    0xc(%ebp),%eax
08105fd0 +0xc4f:  mov    %eax,(%esp)
08105fd3 +0xc52:  call   08105ffc <+0xc7b>
08105fd8 +0xc57:  mov    %eax,%ebx
08105fda +0xc59:  mov    0x8(%ebp),%eax
08105fdd +0xc5c:  mov    %eax,(%esp)
08105fe0 +0xc5f:  call   08105ffc <+0xc7b>
08105fe5 +0xc64:  mov    %esi,0x8(%esp)
08105fe9 +0xc68:  mov    %ebx,0x4(%esp)
08105fed +0xc6c:  mov    %eax,(%esp)
08105ff0 +0xc6f:  call   08106029 <+0xca8>
08105ff5 +0xc74:  add    $0x10,%esp
08105ff8 +0xc77:  pop    %ebx
08105ff9 +0xc78:  pop    %esi
08105ffa +0xc79:  pop    %ebp
08105ffb +0xc7a:  ret
08105ffc +0xc7b:  push   %ebp
08105ffd +0xc7c:  mov    %esp,%ebp
08105fff +0xc7e:  mov    0x8(%ebp),%eax
08106002 +0xc81:  pop    %ebp
08106003 +0xc82:  ret
08106004 +0xc83:  push   %ebp
08106005 +0xc84:  mov    %esp,%ebp
08106007 +0xc86:  sub    $0x28,%esp
0810600a +0xc89:  movb   $0x1,-0x9(%ebp)
0810600e +0xc8d:  mov    0x10(%ebp),%eax
08106011 +0xc90:  mov    %eax,0x8(%esp)
08106015 +0xc94:  mov    0xc(%ebp),%eax
08106018 +0xc97:  mov    %eax,0x4(%esp)
0810601c +0xc9b:  mov    0x8(%ebp),%eax
0810601f +0xc9e:  mov    %eax,(%esp)
08106022 +0xca1:  call   0810604e <+0xccd>
08106027 +0xca6:  leave
08106028 +0xca7:  ret
08106029 +0xca8:  push   %ebp
0810602a +0xca9:  mov    %esp,%ebp
0810602c +0xcab:  sub    $0x28,%esp
0810602f +0xcae:  movb   $0x1,-0x9(%ebp)
08106033 +0xcb2:  mov    0x10(%ebp),%eax
08106036 +0xcb5:  mov    %eax,0x8(%esp)
0810603a +0xcb9:  mov    0xc(%ebp),%eax
0810603d +0xcbc:  mov    %eax,0x4(%esp)
08106041 +0xcc0:  mov    0x8(%ebp),%eax
08106044 +0xcc3:  mov    %eax,(%esp)
08106047 +0xcc6:  call   08106093 <+0xd12>
0810604c +0xccb:  leave
0810604d +0xccc:  ret
0810604e +0xccd:  push   %ebp
0810604f +0xcce:  mov    %esp,%ebp
08106051 +0xcd0:  sub    $0x18,%esp
08106054 +0xcd3:  mov    0xc(%ebp),%edx
08106057 +0xcd6:  mov    0x8(%ebp),%eax
0810605a +0xcd9:  mov    %edx,%ecx
0810605c +0xcdb:  sub    %eax,%ecx
0810605e +0xcdd:  mov    %ecx,%eax
08106060 +0xcdf:  sar    $0x2,%eax
08106063 +0xce2:  shl    $0x2,%eax
08106066 +0xce5:  mov    %eax,0x8(%esp)
0810606a +0xce9:  mov    0x8(%ebp),%eax
0810606d +0xcec:  mov    %eax,0x4(%esp)
08106071 +0xcf0:  mov    0x10(%ebp),%eax
08106074 +0xcf3:  mov    %eax,(%esp)
08106077 +0xcf6:  call   0807d880 <_init+0x178>
0810607c +0xcfb:  mov    0xc(%ebp),%edx
0810607f +0xcfe:  mov    0x8(%ebp),%eax
08106082 +0xd01:  mov    %edx,%ecx
08106084 +0xd03:  sub    %eax,%ecx
08106086 +0xd05:  mov    %ecx,%eax
08106088 +0xd07:  sar    $0x2,%eax
0810608b +0xd0a:  shl    $0x2,%eax
0810608e +0xd0d:  add    0x10(%ebp),%eax
08106091 +0xd10:  leave
08106092 +0xd11:  ret
08106093 +0xd12:  push   %ebp
08106094 +0xd13:  mov    %esp,%ebp
08106096 +0xd15:  sub    $0x28,%esp
08106099 +0xd18:  mov    0xc(%ebp),%edx
0810609c +0xd1b:  mov    0x8(%ebp),%eax
0810609f +0xd1e:  mov    %edx,%ecx
081060a1 +0xd20:  sub    %eax,%ecx
081060a3 +0xd22:  mov    %ecx,%eax
081060a5 +0xd24:  sar    $0x2,%eax
081060a8 +0xd27:  mov    %eax,-0xc(%ebp)
081060ab +0xd2a:  mov    -0xc(%ebp),%eax
081060ae +0xd2d:  lea    0x0(,%eax,4),%edx
081060b5 +0xd34:  mov    -0xc(%ebp),%eax
081060b8 +0xd37:  shl    $0x2,%eax
081060bb +0xd3a:  neg    %eax
081060bd +0xd3c:  add    0x10(%ebp),%eax
081060c0 +0xd3f:  mov    %edx,0x8(%esp)
081060c4 +0xd43:  mov    0x8(%ebp),%edx
081060c7 +0xd46:  mov    %edx,0x4(%esp)
081060cb +0xd4a:  mov    %eax,(%esp)
081060ce +0xd4d:  call   0807d880 <_init+0x178>
081060d3 +0xd52:  mov    -0xc(%ebp),%eax
081060d6 +0xd55:  shl    $0x2,%eax
081060d9 +0xd58:  neg    %eax
081060db +0xd5a:  add    0x10(%ebp),%eax
081060de +0xd5d:  leave
081060df +0xd5e:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8105381

/* WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short) */

void WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::_GLOBAL__I_ConnectTo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
