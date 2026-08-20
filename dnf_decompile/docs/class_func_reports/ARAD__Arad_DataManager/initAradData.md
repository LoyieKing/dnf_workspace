# initAradData

`_ZN4ARAD16Arad_DataManager12initAradDataEv`

`ARAD::Arad_DataManager::initAradData()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x081882f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081882f8  _ZN4ARAD16Arad_DataManager12initAradDataEv
#           ARAD::Arad_DataManager::initAradData()
# range [0x081882f8, 0x08188951]
081882f8 +0x000:  push   %ebp
081882f9 +0x001:  mov    %esp,%ebp
081882fb +0x003:  push   %edi
081882fc +0x004:  push   %esi
081882fd +0x005:  push   %ebx
081882fe +0x006:  sub    $0x11c,%esp
08188304 +0x00c:  movl   $0x0,-0x20(%ebp)
0818830b +0x013:  movl   $0x0,0x14(%esp)
08188313 +0x01b:  movl   $0x1,0x10(%esp)
0818831b +0x023:  movl   $0x9,0xc(%esp)
08188323 +0x02b:  movl   $0x48,0x8(%esp)
0818832b +0x033:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
08188333 +0x03b:  lea    -0x100(%ebp),%eax
08188339 +0x041:  mov    %eax,(%esp)
0818833c +0x044:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08188341 +0x049:  movl   $"\t- Loading Event Period Script - ",0x4(%esp)
08188349 +0x051:  lea    -0x100(%ebp),%eax
0818834f +0x057:  mov    %eax,(%esp)
08188352 +0x05a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08188357 +0x05f:  movl   $0x44,(%esp)
0818835e +0x066:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08188363 +0x06b:  mov    %eax,%ebx
08188365 +0x06d:  mov    %ebx,%eax
08188367 +0x06f:  mov    %eax,(%esp)
0818836a +0x072:  call   081953fa <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev>  ; ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager()
0818836f +0x077:  jmp    08188389 <+0x91>
08188371 +0x079:  mov    %edx,%esi
08188373 +0x07b:  mov    %eax,%edi
08188375 +0x07d:  mov    %ebx,(%esp)
08188378 +0x080:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818837d +0x085:  mov    %edi,%eax
0818837f +0x087:  mov    %esi,%edx
08188381 +0x089:  mov    %eax,(%esp)
08188384 +0x08c:  call   08ae3750 <_Unwind_Resume>
08188389 +0x091:  mov    %ebx,%eax
0818838b +0x093:  mov    %eax,-0x20(%ebp)
0818838e +0x096:  cmpl   $0x0,-0x20(%ebp)
08188392 +0x09a:  je     081883ad <+0xb5>
08188394 +0x09c:  mov    -0x20(%ebp),%eax
08188397 +0x09f:  mov    (%eax),%eax
08188399 +0x0a1:  add    $0x8,%eax
0818839c +0x0a4:  mov    (%eax),%edx
0818839e +0x0a6:  mov    -0x20(%ebp),%eax
081883a1 +0x0a9:  mov    %eax,(%esp)
081883a4 +0x0ac:  call   *%edx
081883a6 +0x0ae:  xor    $0x1,%eax
081883a9 +0x0b1:  test   %al,%al
081883ab +0x0b3:  je     081883b4 <+0xbc>
081883ad +0x0b5:  mov    $0x1,%eax
081883b2 +0x0ba:  jmp    081883b9 <+0xc1>
081883b4 +0x0bc:  mov    $0x0,%eax
081883b9 +0x0c1:  test   %al,%al
081883bb +0x0c3:  je     08188413 <+0x11b>
081883bd +0x0c5:  movl   $0x1,0x14(%esp)
081883c5 +0x0cd:  movl   $0x1,0x10(%esp)
081883cd +0x0d5:  movl   $0x9,0xc(%esp)
081883d5 +0x0dd:  movl   $0x4c,0x8(%esp)
081883dd +0x0e5:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
081883e5 +0x0ed:  lea    -0xf0(%ebp),%eax
081883eb +0x0f3:  mov    %eax,(%esp)
081883ee +0x0f6:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081883f3 +0x0fb:  movl   $"Fail",0x4(%esp)
081883fb +0x103:  lea    -0xf0(%ebp),%eax
08188401 +0x109:  mov    %eax,(%esp)
08188404 +0x10c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08188409 +0x111:  mov    $0x0,%eax
0818840e +0x116:  jmp    08188946 <+0x64e>
08188413 +0x11b:  mov    -0x20(%ebp),%eax
08188416 +0x11e:  mov    %eax,0x4(%esp)
0818841a +0x122:  mov    0x8(%ebp),%eax
0818841d +0x125:  mov    %eax,(%esp)
08188420 +0x128:  call   081889bc <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE>  ; ARAD::Arad_DataManager::__insertGameScript(ARAD::Arad_InterfaceGameScript*)
08188425 +0x12d:  xor    $0x1,%eax
08188428 +0x130:  test   %al,%al
0818842a +0x132:  je     08188482 <+0x18a>
0818842c +0x134:  movl   $0x1,0x14(%esp)
08188434 +0x13c:  movl   $0x1,0x10(%esp)
0818843c +0x144:  movl   $0x9,0xc(%esp)
08188444 +0x14c:  movl   $0x52,0x8(%esp)
0818844c +0x154:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
08188454 +0x15c:  lea    -0xe0(%ebp),%eax
0818845a +0x162:  mov    %eax,(%esp)
0818845d +0x165:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08188462 +0x16a:  movl   $"Fail",0x4(%esp)
0818846a +0x172:  lea    -0xe0(%ebp),%eax
08188470 +0x178:  mov    %eax,(%esp)
08188473 +0x17b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08188478 +0x180:  mov    $0x0,%eax
0818847d +0x185:  jmp    08188946 <+0x64e>
08188482 +0x18a:  movl   $0x1,0x14(%esp)
0818848a +0x192:  movl   $0x0,0x10(%esp)
08188492 +0x19a:  movl   $0x9,0xc(%esp)
0818849a +0x1a2:  movl   $0x55,0x8(%esp)
081884a2 +0x1aa:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
081884aa +0x1b2:  lea    -0xd0(%ebp),%eax
081884b0 +0x1b8:  mov    %eax,(%esp)
081884b3 +0x1bb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081884b8 +0x1c0:  movl   $"Success",0x4(%esp)
081884c0 +0x1c8:  lea    -0xd0(%ebp),%eax
081884c6 +0x1ce:  mov    %eax,(%esp)
081884c9 +0x1d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081884ce +0x1d6:  movl   $0x0,0x14(%esp)
081884d6 +0x1de:  movl   $0x1,0x10(%esp)
081884de +0x1e6:  movl   $0x9,0xc(%esp)
081884e6 +0x1ee:  movl   $0x59,0x8(%esp)
081884ee +0x1f6:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
081884f6 +0x1fe:  lea    -0xc0(%ebp),%eax
081884fc +0x204:  mov    %eax,(%esp)
081884ff +0x207:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08188504 +0x20c:  movl   $"\t- Loading Statistics Item List - ",0x4(%esp)
0818850c +0x214:  lea    -0xc0(%ebp),%eax
08188512 +0x21a:  mov    %eax,(%esp)
08188515 +0x21d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818851a +0x222:  movl   $0x14,(%esp)
08188521 +0x229:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08188526 +0x22e:  mov    %eax,%ebx
08188528 +0x230:  mov    %ebx,%eax
0818852a +0x232:  mov    %eax,(%esp)
0818852d +0x235:  call   0819cbe8 <_ZN4ARAD28Arad_StatisticsEventItemListC1Ev>  ; ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()
08188532 +0x23a:  jmp    0818854c <+0x254>
08188534 +0x23c:  mov    %edx,%esi
08188536 +0x23e:  mov    %eax,%edi
08188538 +0x240:  mov    %ebx,(%esp)
0818853b +0x243:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08188540 +0x248:  mov    %edi,%eax
08188542 +0x24a:  mov    %esi,%edx
08188544 +0x24c:  mov    %eax,(%esp)
08188547 +0x24f:  call   08ae3750 <_Unwind_Resume>
0818854c +0x254:  mov    %ebx,%eax
0818854e +0x256:  mov    %eax,-0x20(%ebp)
08188551 +0x259:  cmpl   $0x0,-0x20(%ebp)
08188555 +0x25d:  je     08188570 <+0x278>
08188557 +0x25f:  mov    -0x20(%ebp),%eax
0818855a +0x262:  mov    (%eax),%eax
0818855c +0x264:  add    $0x8,%eax
0818855f +0x267:  mov    (%eax),%edx
08188561 +0x269:  mov    -0x20(%ebp),%eax
08188564 +0x26c:  mov    %eax,(%esp)
08188567 +0x26f:  call   *%edx
08188569 +0x271:  xor    $0x1,%eax
0818856c +0x274:  test   %al,%al
0818856e +0x276:  je     08188577 <+0x27f>
08188570 +0x278:  mov    $0x1,%eax
08188575 +0x27d:  jmp    0818857c <+0x284>
08188577 +0x27f:  mov    $0x0,%eax
0818857c +0x284:  test   %al,%al
0818857e +0x286:  je     081885d6 <+0x2de>
08188580 +0x288:  movl   $0x1,0x14(%esp)
08188588 +0x290:  movl   $0x1,0x10(%esp)
08188590 +0x298:  movl   $0x9,0xc(%esp)
08188598 +0x2a0:  movl   $0x5d,0x8(%esp)
081885a0 +0x2a8:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
081885a8 +0x2b0:  lea    -0xb0(%ebp),%eax
081885ae +0x2b6:  mov    %eax,(%esp)
081885b1 +0x2b9:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081885b6 +0x2be:  movl   $"Fail",0x4(%esp)
081885be +0x2c6:  lea    -0xb0(%ebp),%eax
081885c4 +0x2cc:  mov    %eax,(%esp)
081885c7 +0x2cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081885cc +0x2d4:  mov    $0x0,%eax
081885d1 +0x2d9:  jmp    08188946 <+0x64e>
081885d6 +0x2de:  mov    -0x20(%ebp),%eax
081885d9 +0x2e1:  mov    %eax,0x4(%esp)
081885dd +0x2e5:  mov    0x8(%ebp),%eax
081885e0 +0x2e8:  mov    %eax,(%esp)
081885e3 +0x2eb:  call   081889bc <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE>  ; ARAD::Arad_DataManager::__insertGameScript(ARAD::Arad_InterfaceGameScript*)
081885e8 +0x2f0:  xor    $0x1,%eax
081885eb +0x2f3:  test   %al,%al
081885ed +0x2f5:  je     08188645 <+0x34d>
081885ef +0x2f7:  movl   $0x1,0x14(%esp)
081885f7 +0x2ff:  movl   $0x1,0x10(%esp)
081885ff +0x307:  movl   $0x9,0xc(%esp)
08188607 +0x30f:  movl   $0x63,0x8(%esp)
0818860f +0x317:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
08188617 +0x31f:  lea    -0xa0(%ebp),%eax
0818861d +0x325:  mov    %eax,(%esp)
08188620 +0x328:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08188625 +0x32d:  movl   $"Fail",0x4(%esp)
0818862d +0x335:  lea    -0xa0(%ebp),%eax
08188633 +0x33b:  mov    %eax,(%esp)
08188636 +0x33e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818863b +0x343:  mov    $0x0,%eax
08188640 +0x348:  jmp    08188946 <+0x64e>
08188645 +0x34d:  movl   $0x1,0x14(%esp)
0818864d +0x355:  movl   $0x0,0x10(%esp)
08188655 +0x35d:  movl   $0x9,0xc(%esp)
0818865d +0x365:  movl   $0x66,0x8(%esp)
08188665 +0x36d:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
0818866d +0x375:  lea    -0x90(%ebp),%eax
08188673 +0x37b:  mov    %eax,(%esp)
08188676 +0x37e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0818867b +0x383:  movl   $"Success",0x4(%esp)
08188683 +0x38b:  lea    -0x90(%ebp),%eax
08188689 +0x391:  mov    %eax,(%esp)
0818868c +0x394:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08188691 +0x399:  movl   $0x0,-0x1c(%ebp)
08188698 +0x3a0:  movl   $0x0,0x14(%esp)
081886a0 +0x3a8:  movl   $0x1,0x10(%esp)
081886a8 +0x3b0:  movl   $0x9,0xc(%esp)
081886b0 +0x3b8:  movl   $0x94,0x8(%esp)
081886b8 +0x3c0:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
081886c0 +0x3c8:  lea    -0x80(%ebp),%eax
081886c3 +0x3cb:  mov    %eax,(%esp)
081886c6 +0x3ce:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081886cb +0x3d3:  movl   $"\t- Loading NexonFolder Script - ",0x4(%esp)
081886d3 +0x3db:  lea    -0x80(%ebp),%eax
081886d6 +0x3de:  mov    %eax,(%esp)
081886d9 +0x3e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081886de +0x3e6:  mov    0x8(%ebp),%eax
081886e1 +0x3e9:  add    $0x1c,%eax
081886e4 +0x3ec:  movl   $"Nexon/AradSpecialUseItems.txt",0x4(%esp)
081886ec +0x3f4:  mov    %eax,(%esp)
081886ef +0x3f7:  call   081a1eec <_ZN17Arad_ScriptLoader4openEPKc>  ; Arad_ScriptLoader::open(char const*)
081886f4 +0x3fc:  mov    %eax,-0x1c(%ebp)
081886f7 +0x3ff:  cmpl   $0x0,-0x1c(%ebp)
081886fb +0x403:  setne  %al
081886fe +0x406:  test   %al,%al
08188700 +0x408:  je     08188759 <+0x461>
08188702 +0x40a:  movl   $0x1,0x14(%esp)
0818870a +0x412:  movl   $0x1,0x10(%esp)
08188712 +0x41a:  movl   $0x9,0xc(%esp)
0818871a +0x422:  movl   $0x97,0x8(%esp)
08188722 +0x42a:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
0818872a +0x432:  lea    -0x70(%ebp),%eax
0818872d +0x435:  mov    %eax,(%esp)
08188730 +0x438:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08188735 +0x43d:  mov    -0x1c(%ebp),%eax
08188738 +0x440:  mov    %eax,0x8(%esp)
0818873c +0x444:  movl   $"\t- AradSpecialUseItems script load fail. (line:%d)",0x4(%esp)
08188744 +0x44c:  lea    -0x70(%ebp),%eax
08188747 +0x44f:  mov    %eax,(%esp)
0818874a +0x452:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818874f +0x457:  mov    $0x0,%eax
08188754 +0x45c:  jmp    08188946 <+0x64e>
08188759 +0x461:  mov    0x8(%ebp),%eax
0818875c +0x464:  add    $0x38,%eax
0818875f +0x467:  movl   $"Nexon/AradSpecialUseItems.txt",0x4(%esp)
08188767 +0x46f:  mov    %eax,(%esp)
0818876a +0x472:  call   081a1eec <_ZN17Arad_ScriptLoader4openEPKc>  ; Arad_ScriptLoader::open(char const*)
0818876f +0x477:  mov    %eax,-0x1c(%ebp)
08188772 +0x47a:  cmpl   $0x0,-0x1c(%ebp)
08188776 +0x47e:  setne  %al
08188779 +0x481:  test   %al,%al
0818877b +0x483:  je     081887d4 <+0x4dc>
0818877d +0x485:  movl   $0x1,0x14(%esp)
08188785 +0x48d:  movl   $0x1,0x10(%esp)
0818878d +0x495:  movl   $0x9,0xc(%esp)
08188795 +0x49d:  movl   $0x9d,0x8(%esp)
0818879d +0x4a5:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
081887a5 +0x4ad:  lea    -0x60(%ebp),%eax
081887a8 +0x4b0:  mov    %eax,(%esp)
081887ab +0x4b3:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081887b0 +0x4b8:  mov    -0x1c(%ebp),%eax
081887b3 +0x4bb:  mov    %eax,0x8(%esp)
081887b7 +0x4bf:  movl   $"\t- AradSpecialUseItems script load fail. (line:%d)",0x4(%esp)
081887bf +0x4c7:  lea    -0x60(%ebp),%eax
081887c2 +0x4ca:  mov    %eax,(%esp)
081887c5 +0x4cd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081887ca +0x4d2:  mov    $0x0,%eax
081887cf +0x4d7:  jmp    08188946 <+0x64e>
081887d4 +0x4dc:  mov    0x8(%ebp),%eax
081887d7 +0x4df:  add    $0x54,%eax
081887da +0x4e2:  movl   $"Nexon/AradSpecialUseItems.txt",0x4(%esp)
081887e2 +0x4ea:  mov    %eax,(%esp)
081887e5 +0x4ed:  call   081a1eec <_ZN17Arad_ScriptLoader4openEPKc>  ; Arad_ScriptLoader::open(char const*)
081887ea +0x4f2:  mov    %eax,-0x1c(%ebp)
081887ed +0x4f5:  cmpl   $0x0,-0x1c(%ebp)
081887f1 +0x4f9:  setne  %al
081887f4 +0x4fc:  test   %al,%al
081887f6 +0x4fe:  je     0818884f <+0x557>
081887f8 +0x500:  movl   $0x1,0x14(%esp)
08188800 +0x508:  movl   $0x1,0x10(%esp)
08188808 +0x510:  movl   $0x9,0xc(%esp)
08188810 +0x518:  movl   $0xa3,0x8(%esp)
08188818 +0x520:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
08188820 +0x528:  lea    -0x50(%ebp),%eax
08188823 +0x52b:  mov    %eax,(%esp)
08188826 +0x52e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0818882b +0x533:  mov    -0x1c(%ebp),%eax
0818882e +0x536:  mov    %eax,0x8(%esp)
08188832 +0x53a:  movl   $"\t- AradSpecialUseItems script load fail. (line:%d)",0x4(%esp)
0818883a +0x542:  lea    -0x50(%ebp),%eax
0818883d +0x545:  mov    %eax,(%esp)
08188840 +0x548:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08188845 +0x54d:  mov    $0x0,%eax
0818884a +0x552:  jmp    08188946 <+0x64e>
0818884f +0x557:  mov    0x8(%ebp),%eax
08188852 +0x55a:  add    $0x70,%eax
08188855 +0x55d:  movl   $"Nexon/CeraShopMileage.txt",0x4(%esp)
0818885d +0x565:  mov    %eax,(%esp)
08188860 +0x568:  call   081a1eec <_ZN17Arad_ScriptLoader4openEPKc>  ; Arad_ScriptLoader::open(char const*)
08188865 +0x56d:  mov    %eax,-0x1c(%ebp)
08188868 +0x570:  cmpl   $0x0,-0x1c(%ebp)
0818886c +0x574:  setne  %al
0818886f +0x577:  test   %al,%al
08188871 +0x579:  je     081888c7 <+0x5cf>
08188873 +0x57b:  movl   $0x1,0x14(%esp)
0818887b +0x583:  movl   $0x1,0x10(%esp)
08188883 +0x58b:  movl   $0x9,0xc(%esp)
0818888b +0x593:  movl   $0xb2,0x8(%esp)
08188893 +0x59b:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
0818889b +0x5a3:  lea    -0x40(%ebp),%eax
0818889e +0x5a6:  mov    %eax,(%esp)
081888a1 +0x5a9:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081888a6 +0x5ae:  mov    -0x1c(%ebp),%eax
081888a9 +0x5b1:  mov    %eax,0x8(%esp)
081888ad +0x5b5:  movl   $"\t- CeraShopMileage script load fail. (line:%d)",0x4(%esp)
081888b5 +0x5bd:  lea    -0x40(%ebp),%eax
081888b8 +0x5c0:  mov    %eax,(%esp)
081888bb +0x5c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081888c0 +0x5c8:  mov    $0x0,%eax
081888c5 +0x5cd:  jmp    08188946 <+0x64e>
081888c7 +0x5cf:  mov    0x8(%ebp),%eax
081888ca +0x5d2:  add    $0xa0,%eax
081888cf +0x5d7:  movl   $"Nexon/VillageAttackRewardItem.txt",0x4(%esp)
081888d7 +0x5df:  mov    %eax,(%esp)
081888da +0x5e2:  call   081a1eec <_ZN17Arad_ScriptLoader4openEPKc>  ; Arad_ScriptLoader::open(char const*)
081888df +0x5e7:  mov    %eax,-0x1c(%ebp)
081888e2 +0x5ea:  cmpl   $0x0,-0x1c(%ebp)
081888e6 +0x5ee:  setne  %al
081888e9 +0x5f1:  test   %al,%al
081888eb +0x5f3:  je     08188941 <+0x649>
081888ed +0x5f5:  movl   $0x1,0x14(%esp)
081888f5 +0x5fd:  movl   $0x1,0x10(%esp)
081888fd +0x605:  movl   $0x9,0xc(%esp)
08188905 +0x60d:  movl   $0xbb,0x8(%esp)
0818890d +0x615:  movl   $&_ZZN4ARAD16Arad_DataManager12initAradDataEvE12__FUNCTION__,0x4(%esp)
08188915 +0x61d:  lea    -0x30(%ebp),%eax
08188918 +0x620:  mov    %eax,(%esp)
0818891b +0x623:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08188920 +0x628:  mov    -0x1c(%ebp),%eax
08188923 +0x62b:  mov    %eax,0x8(%esp)
08188927 +0x62f:  movl   $"\t- VillageAttackRewardItem script load fail. (line:%d)",0x4(%esp)
0818892f +0x637:  lea    -0x30(%ebp),%eax
08188932 +0x63a:  mov    %eax,(%esp)
08188935 +0x63d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818893a +0x642:  mov    $0x0,%eax
0818893f +0x647:  jmp    08188946 <+0x64e>
08188941 +0x649:  mov    $0x1,%eax
08188946 +0x64e:  add    $0x11c,%esp
0818894c +0x654:  pop    %ebx
0818894d +0x655:  pop    %esi
0818894e +0x656:  pop    %edi
0818894f +0x657:  pop    %ebp
08188950 +0x658:  ret
08188951 +0x659:  nop
```

## 反编译 C

```c
// ARAD::Arad_DataManager::initAradData @ 0x81882f8

/* ARAD::Arad_DataManager::initAradData() */

undefined4 __thiscall ARAD::Arad_DataManager::initAradData(Arad_DataManager *this)

{
  bool bVar1;
  char cVar2;
  Arad_EventPeriodDataManager *this_00;
  Arad_StatisticsEventItemList *this_01;
  undefined4 uVar3;
  cMyTrace local_104 [16];
  cMyTrace local_f4 [16];
  cMyTrace local_e4 [16];
  cMyTrace local_d4 [16];
  cMyTrace local_c4 [16];
  cMyTrace local_b4 [16];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  Arad_EventPeriodDataManager *local_24;
  int local_20;
  
  local_24 = (Arad_EventPeriodDataManager *)0x0;
  cMyTrace::cMyTrace(local_104,"initAradData",0x48,9,true,false);
  cMyTrace::operator()(local_104,"\t- Loading Event Period Script - ");
  this_00 = operator_new(0x44);
                    /* try { // try from 0818836a to 0818836e has its CatchHandler @ 08188371 */
  Arad_EventPeriodDataManager::Arad_EventPeriodDataManager(this_00);
  local_24 = this_00;
  if ((this_00 == (Arad_EventPeriodDataManager *)0x0) ||
     (cVar2 = (**(code **)(*(int *)this_00 + 8))(this_00), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = __insertGameScript(this,(Arad_InterfaceGameScript *)local_24);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_d4,"initAradData",0x55,9,false,true);
      cMyTrace::operator()(local_d4,"Success");
      cMyTrace::cMyTrace(local_c4,"initAradData",0x59,9,true,false);
      cMyTrace::operator()(local_c4,"\t- Loading Statistics Item List - ");
      this_01 = operator_new(0x14);
                    /* try { // try from 0818852d to 08188531 has its CatchHandler @ 08188534 */
      Arad_StatisticsEventItemList::Arad_StatisticsEventItemList(this_01);
      local_24 = (Arad_EventPeriodDataManager *)this_01;
      if ((this_01 == (Arad_StatisticsEventItemList *)0x0) ||
         (cVar2 = (**(code **)(*(int *)this_01 + 8))(this_01), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cMyTrace::cMyTrace(local_b4,"initAradData",0x5d,9,true,true);
        cMyTrace::operator()(local_b4,"Fail");
        uVar3 = 0;
      }
      else {
        cVar2 = __insertGameScript(this,(Arad_InterfaceGameScript *)local_24);
        if (cVar2 == '\x01') {
          cMyTrace::cMyTrace(local_94,"initAradData",0x66,9,false,true);
          cMyTrace::operator()(local_94,"Success");
          local_20 = 0;
          cMyTrace::cMyTrace(local_84,"initAradData",0x94,9,true,false);
          cMyTrace::operator()(local_84,"\t- Loading NexonFolder Script - ");
          local_20 = Arad_ScriptLoader::open
                               ((Arad_ScriptLoader *)(this + 0x1c),"Nexon/AradSpecialUseItems.txt");
          if (local_20 == 0) {
            local_20 = Arad_ScriptLoader::open
                                 ((Arad_ScriptLoader *)(this + 0x38),"Nexon/AradSpecialUseItems.txt"
                                 );
            if (local_20 == 0) {
              local_20 = Arad_ScriptLoader::open
                                   ((Arad_ScriptLoader *)(this + 0x54),
                                    "Nexon/AradSpecialUseItems.txt");
              if (local_20 == 0) {
                local_20 = Arad_ScriptLoader::open
                                     ((Arad_ScriptLoader *)(this + 0x70),"Nexon/CeraShopMileage.txt"
                                     );
                if (local_20 == 0) {
                  local_20 = Arad_ScriptLoader::open
                                       ((Arad_ScriptLoader *)(this + 0xa0),
                                        "Nexon/VillageAttackRewardItem.txt");
                  if (local_20 == 0) {
                    uVar3 = 1;
                  }
                  else {
                    cMyTrace::cMyTrace(local_34,"initAradData",0xbb,9,true,true);
                    cMyTrace::operator()
                              (local_34,"\t- VillageAttackRewardItem script load fail. (line:%d)",
                               local_20);
                    uVar3 = 0;
                  }
                }
                else {
                  cMyTrace::cMyTrace(local_44,"initAradData",0xb2,9,true,true);
                  cMyTrace::operator()
                            (local_44,"\t- CeraShopMileage script load fail. (line:%d)",local_20);
                  uVar3 = 0;
                }
              }
              else {
                cMyTrace::cMyTrace(local_54,"initAradData",0xa3,9,true,true);
                cMyTrace::operator()
                          (local_54,"\t- AradSpecialUseItems script load fail. (line:%d)",local_20);
                uVar3 = 0;
              }
            }
            else {
              cMyTrace::cMyTrace(local_64,"initAradData",0x9d,9,true,true);
              cMyTrace::operator()
                        (local_64,"\t- AradSpecialUseItems script load fail. (line:%d)",local_20);
              uVar3 = 0;
            }
          }
          else {
            cMyTrace::cMyTrace(local_74,"initAradData",0x97,9,true,true);
            cMyTrace::operator()
                      (local_74,"\t- AradSpecialUseItems script load fail. (line:%d)",local_20);
            uVar3 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_a4,"initAradData",99,9,true,true);
          cMyTrace::operator()(local_a4,"Fail");
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    cMyTrace::cMyTrace(local_e4,"initAradData",0x52,9,true,true);
    cMyTrace::operator()(local_e4,"Fail");
    return 0;
  }
  cMyTrace::cMyTrace(local_f4,"initAradData",0x4c,9,true,true);
  cMyTrace::operator()(local_f4,"Fail");
  return 0;
}
```
