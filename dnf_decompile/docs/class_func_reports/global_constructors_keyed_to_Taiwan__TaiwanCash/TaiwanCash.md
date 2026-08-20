# TaiwanCash

`_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs`

`global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Taiwan::TaiwanCash` | `0x081754ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081754ac  _GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs
#           global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)
# range [0x081754ac, 0x08175bd7]
081754ac +0x000:  push   %ebp
081754ad +0x001:  mov    %esp,%ebp
081754af +0x003:  sub    $0x18,%esp
081754b2 +0x006:  movl   $0xffff,0x4(%esp)
081754ba +0x00e:  movl   $0x1,(%esp)
081754c1 +0x015:  call   0817546c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081754c6 +0x01a:  leave
081754c7 +0x01b:  ret
081754c8 +0x01c:  push   %ebp
081754c9 +0x01d:  mov    %esp,%ebp
081754cb +0x01f:  sub    $0x18,%esp
081754ce +0x022:  mov    0x8(%ebp),%eax
081754d1 +0x025:  mov    0xc(%eax),%eax
081754d4 +0x028:  test   %eax,%eax
081754d6 +0x02a:  je     081754f1 <+0x45>
081754d8 +0x02c:  mov    0xc(%ebp),%eax
081754db +0x02f:  mov    %eax,0x4(%esp)
081754df +0x033:  mov    0x8(%ebp),%eax
081754e2 +0x036:  mov    %eax,(%esp)
081754e5 +0x039:  call   080e22d0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x76>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x76
081754ea +0x03e:  xor    $0x1,%eax
081754ed +0x041:  test   %al,%al
081754ef +0x043:  je     081754f8 <+0x4c>
081754f1 +0x045:  mov    $0x1,%eax
081754f6 +0x04a:  jmp    081754fd <+0x51>
081754f8 +0x04c:  mov    $0x0,%eax
081754fd +0x051:  test   %al,%al
081754ff +0x053:  je     08175508 <+0x5c>
08175501 +0x055:  mov    $0x0,%eax
08175506 +0x05a:  jmp    0817553d <+0x91>
08175508 +0x05c:  mov    0x8(%ebp),%eax
0817550b +0x05f:  mov    0xc(%eax),%eax
0817550e +0x062:  mov    0xc(%ebp),%edx
08175511 +0x065:  shl    $0x2,%edx
08175514 +0x068:  add    %edx,%eax
08175516 +0x06a:  mov    (%eax),%eax
08175518 +0x06c:  movl   $0xa,0x8(%esp)
08175520 +0x074:  movl   $0x0,0x4(%esp)
08175528 +0x07c:  mov    %eax,(%esp)
0817552b +0x07f:  call   0807dc80 <_init+0x578>
08175530 +0x084:  mov    0x10(%ebp),%ecx
08175533 +0x087:  mov    %eax,(%ecx)
08175535 +0x089:  mov    %edx,0x4(%ecx)
08175538 +0x08c:  mov    $0x1,%eax
0817553d +0x091:  leave
0817553e +0x092:  ret
0817553f +0x093:  nop
08175540 +0x094:  push   %ebp
08175541 +0x095:  mov    %esp,%ebp
08175543 +0x097:  mov    0x8(%ebp),%eax
08175546 +0x09a:  movb   $0x0,(%eax)
08175549 +0x09d:  mov    0x8(%ebp),%eax
0817554c +0x0a0:  movl   $0x0,0x4(%eax)
08175553 +0x0a7:  movl   $0x0,0x8(%eax)
0817555a +0x0ae:  pop    %ebp
0817555b +0x0af:  ret
0817555c +0x0b0:  push   %ebp
0817555d +0x0b1:  mov    %esp,%ebp
0817555f +0x0b3:  push   %ebx
08175560 +0x0b4:  sub    $0x24,%esp
08175563 +0x0b7:  mov    0x8(%ebp),%eax
08175566 +0x0ba:  add    $0x42094,%eax
0817556b +0x0bf:  mov    %eax,0x4(%esp)
0817556f +0x0c3:  lea    -0xc(%ebp),%eax
08175572 +0x0c6:  mov    %eax,(%esp)
08175575 +0x0c9:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0817557a +0x0ce:  mov    0x8(%ebp),%eax
0817557d +0x0d1:  mov    %eax,(%esp)
08175580 +0x0d4:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
08175585 +0x0d9:  mov    0x8(%ebp),%eax
08175588 +0x0dc:  add    $0x8,%eax
0817558b +0x0df:  mov    %eax,0x4(%esp)
0817558f +0x0e3:  mov    0xc(%ebp),%eax
08175592 +0x0e6:  mov    %eax,(%esp)
08175595 +0x0e9:  call   08174012 <_ZN6Taiwan13EntranceQuery8setQueryER5MySQL>  ; Taiwan::EntranceQuery::setQuery(MySQL&)
0817559a +0x0ee:  test   %al,%al
0817559c +0x0f0:  je     081755be <+0x112>
0817559e +0x0f2:  mov    0x8(%ebp),%eax
081755a1 +0x0f5:  add    $0x8,%eax
081755a4 +0x0f8:  mov    %eax,0x4(%esp)
081755a8 +0x0fc:  mov    0xc(%ebp),%eax
081755ab +0x0ff:  mov    %eax,(%esp)
081755ae +0x102:  call   0817401c <_ZN6Taiwan13EntranceQuery9execQueryER5MySQL>  ; Taiwan::EntranceQuery::execQuery(MySQL&)
081755b3 +0x107:  test   %al,%al
081755b5 +0x109:  je     081755be <+0x112>
081755b7 +0x10b:  mov    $0x1,%eax
081755bc +0x110:  jmp    081755c3 <+0x117>
081755be +0x112:  mov    $0x0,%eax
081755c3 +0x117:  test   %al,%al
081755c5 +0x119:  je     081755e0 <+0x134>
081755c7 +0x11b:  mov    0x8(%ebp),%eax
081755ca +0x11e:  add    $0x8,%eax
081755cd +0x121:  mov    %eax,0x4(%esp)
081755d1 +0x125:  mov    0xc(%ebp),%eax
081755d4 +0x128:  mov    %eax,(%esp)
081755d7 +0x12b:  call   08174026 <_ZN6Taiwan13EntranceQuery9getResultER5MySQL>  ; Taiwan::EntranceQuery::getResult(MySQL&)
081755dc +0x130:  mov    %eax,%ebx
081755de +0x132:  jmp    081755e5 <+0x139>
081755e0 +0x134:  mov    $0x0,%ebx
081755e5 +0x139:  lea    -0xc(%ebp),%eax
081755e8 +0x13c:  mov    %eax,(%esp)
081755eb +0x13f:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081755f0 +0x144:  mov    %ebx,%eax
081755f2 +0x146:  add    $0x24,%esp
081755f5 +0x149:  pop    %ebx
081755f6 +0x14a:  pop    %ebp
081755f7 +0x14b:  ret
081755f8 +0x14c:  push   %ebp
081755f9 +0x14d:  mov    %esp,%ebp
081755fb +0x14f:  push   %esi
081755fc +0x150:  push   %ebx
081755fd +0x151:  sub    $0x20,%esp
08175600 +0x154:  mov    0x8(%ebp),%eax
08175603 +0x157:  add    $0x42094,%eax
08175608 +0x15c:  mov    %eax,0x4(%esp)
0817560c +0x160:  lea    -0xc(%ebp),%eax
0817560f +0x163:  mov    %eax,(%esp)
08175612 +0x166:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08175617 +0x16b:  mov    0x8(%ebp),%eax
0817561a +0x16e:  mov    %eax,(%esp)
0817561d +0x171:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
08175622 +0x176:  mov    0x8(%ebp),%eax
08175625 +0x179:  add    $0x8,%eax
08175628 +0x17c:  mov    %eax,0x4(%esp)
0817562c +0x180:  mov    0xc(%ebp),%eax
0817562f +0x183:  mov    %eax,(%esp)
08175632 +0x186:  call   08174052 <_ZN6Taiwan12BalanceQuery8setQueryER5MySQL>  ; Taiwan::BalanceQuery::setQuery(MySQL&)
08175637 +0x18b:  test   %al,%al
08175639 +0x18d:  je     0817565b <+0x1af>
0817563b +0x18f:  mov    0x8(%ebp),%eax
0817563e +0x192:  add    $0x8,%eax
08175641 +0x195:  mov    %eax,0x4(%esp)
08175645 +0x199:  mov    0xc(%ebp),%eax
08175648 +0x19c:  mov    %eax,(%esp)
0817564b +0x19f:  call   08174076 <_ZN6Taiwan12BalanceQuery9execQueryER5MySQL>  ; Taiwan::BalanceQuery::execQuery(MySQL&)
08175650 +0x1a4:  test   %al,%al
08175652 +0x1a6:  je     0817565b <+0x1af>
08175654 +0x1a8:  mov    $0x1,%eax
08175659 +0x1ad:  jmp    08175660 <+0x1b4>
0817565b +0x1af:  mov    $0x0,%eax
08175660 +0x1b4:  test   %al,%al
08175662 +0x1b6:  je     0817567d <+0x1d1>
08175664 +0x1b8:  mov    0x8(%ebp),%eax
08175667 +0x1bb:  add    $0x8,%eax
0817566a +0x1be:  mov    %eax,0x4(%esp)
0817566e +0x1c2:  mov    0xc(%ebp),%eax
08175671 +0x1c5:  mov    %eax,(%esp)
08175674 +0x1c8:  call   08174092 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL>  ; Taiwan::BalanceQuery::getResult(MySQL&)
08175679 +0x1cd:  mov    %eax,%ebx
0817567b +0x1cf:  jmp    0817569f <+0x1f3>
0817567d +0x1d1:  mov    $0x0,%ebx
08175682 +0x1d6:  jmp    0817569f <+0x1f3>
08175684 +0x1d8:  mov    %edx,%ebx
08175686 +0x1da:  mov    %eax,%esi
08175688 +0x1dc:  lea    -0xc(%ebp),%eax
0817568b +0x1df:  mov    %eax,(%esp)
0817568e +0x1e2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175693 +0x1e7:  mov    %esi,%eax
08175695 +0x1e9:  mov    %ebx,%edx
08175697 +0x1eb:  mov    %eax,(%esp)
0817569a +0x1ee:  call   08ae3750 <_Unwind_Resume>
0817569f +0x1f3:  lea    -0xc(%ebp),%eax
081756a2 +0x1f6:  mov    %eax,(%esp)
081756a5 +0x1f9:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081756aa +0x1fe:  mov    %ebx,%eax
081756ac +0x200:  add    $0x20,%esp
081756af +0x203:  pop    %ebx
081756b0 +0x204:  pop    %esi
081756b1 +0x205:  pop    %ebp
081756b2 +0x206:  ret
081756b3 +0x207:  nop
081756b4 +0x208:  push   %ebp
081756b5 +0x209:  mov    %esp,%ebp
081756b7 +0x20b:  push   %esi
081756b8 +0x20c:  push   %ebx
081756b9 +0x20d:  sub    $0x20,%esp
081756bc +0x210:  mov    0x8(%ebp),%eax
081756bf +0x213:  add    $0x42094,%eax
081756c4 +0x218:  mov    %eax,0x4(%esp)
081756c8 +0x21c:  lea    -0xc(%ebp),%eax
081756cb +0x21f:  mov    %eax,(%esp)
081756ce +0x222:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081756d3 +0x227:  mov    0x8(%ebp),%eax
081756d6 +0x22a:  mov    %eax,(%esp)
081756d9 +0x22d:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
081756de +0x232:  mov    0x8(%ebp),%eax
081756e1 +0x235:  add    $0x8,%eax
081756e4 +0x238:  mov    %eax,0x4(%esp)
081756e8 +0x23c:  mov    0xc(%ebp),%eax
081756eb +0x23f:  mov    %eax,(%esp)
081756ee +0x242:  call   081742bc <_ZN6Taiwan17BalancePointQuery8setQueryER5MySQL>  ; Taiwan::BalancePointQuery::setQuery(MySQL&)
081756f3 +0x247:  test   %al,%al
081756f5 +0x249:  je     08175717 <+0x26b>
081756f7 +0x24b:  mov    0x8(%ebp),%eax
081756fa +0x24e:  add    $0x8,%eax
081756fd +0x251:  mov    %eax,0x4(%esp)
08175701 +0x255:  mov    0xc(%ebp),%eax
08175704 +0x258:  mov    %eax,(%esp)
08175707 +0x25b:  call   081742e0 <_ZN6Taiwan17BalancePointQuery9execQueryER5MySQL>  ; Taiwan::BalancePointQuery::execQuery(MySQL&)
0817570c +0x260:  test   %al,%al
0817570e +0x262:  je     08175717 <+0x26b>
08175710 +0x264:  mov    $0x1,%eax
08175715 +0x269:  jmp    0817571c <+0x270>
08175717 +0x26b:  mov    $0x0,%eax
0817571c +0x270:  test   %al,%al
0817571e +0x272:  je     08175739 <+0x28d>
08175720 +0x274:  mov    0x8(%ebp),%eax
08175723 +0x277:  add    $0x8,%eax
08175726 +0x27a:  mov    %eax,0x4(%esp)
0817572a +0x27e:  mov    0xc(%ebp),%eax
0817572d +0x281:  mov    %eax,(%esp)
08175730 +0x284:  call   081742fc <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL>  ; Taiwan::BalancePointQuery::getResult(MySQL&)
08175735 +0x289:  mov    %eax,%ebx
08175737 +0x28b:  jmp    0817575b <+0x2af>
08175739 +0x28d:  mov    $0x0,%ebx
0817573e +0x292:  jmp    0817575b <+0x2af>
08175740 +0x294:  mov    %edx,%ebx
08175742 +0x296:  mov    %eax,%esi
08175744 +0x298:  lea    -0xc(%ebp),%eax
08175747 +0x29b:  mov    %eax,(%esp)
0817574a +0x29e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0817574f +0x2a3:  mov    %esi,%eax
08175751 +0x2a5:  mov    %ebx,%edx
08175753 +0x2a7:  mov    %eax,(%esp)
08175756 +0x2aa:  call   08ae3750 <_Unwind_Resume>
0817575b +0x2af:  lea    -0xc(%ebp),%eax
0817575e +0x2b2:  mov    %eax,(%esp)
08175761 +0x2b5:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175766 +0x2ba:  mov    %ebx,%eax
08175768 +0x2bc:  add    $0x20,%esp
0817576b +0x2bf:  pop    %ebx
0817576c +0x2c0:  pop    %esi
0817576d +0x2c1:  pop    %ebp
0817576e +0x2c2:  ret
0817576f +0x2c3:  nop
08175770 +0x2c4:  push   %ebp
08175771 +0x2c5:  mov    %esp,%ebp
08175773 +0x2c7:  push   %esi
08175774 +0x2c8:  push   %ebx
08175775 +0x2c9:  sub    $0x20,%esp
08175778 +0x2cc:  mov    0x8(%ebp),%eax
0817577b +0x2cf:  add    $0x42094,%eax
08175780 +0x2d4:  mov    %eax,0x4(%esp)
08175784 +0x2d8:  lea    -0xc(%ebp),%eax
08175787 +0x2db:  mov    %eax,(%esp)
0817578a +0x2de:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0817578f +0x2e3:  mov    0x8(%ebp),%eax
08175792 +0x2e6:  mov    %eax,(%esp)
08175795 +0x2e9:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
0817579a +0x2ee:  mov    0x8(%ebp),%eax
0817579d +0x2f1:  add    $0x8,%eax
081757a0 +0x2f4:  mov    %eax,0x4(%esp)
081757a4 +0x2f8:  mov    0xc(%ebp),%eax
081757a7 +0x2fb:  mov    %eax,(%esp)
081757aa +0x2fe:  call   081745aa <_ZN6Taiwan13PurchaseQuery8setQueryER5MySQL>  ; Taiwan::PurchaseQuery::setQuery(MySQL&)
081757af +0x303:  test   %al,%al
081757b1 +0x305:  je     081757d3 <+0x327>
081757b3 +0x307:  mov    0x8(%ebp),%eax
081757b6 +0x30a:  add    $0x8,%eax
081757b9 +0x30d:  mov    %eax,0x4(%esp)
081757bd +0x311:  mov    0xc(%ebp),%eax
081757c0 +0x314:  mov    %eax,(%esp)
081757c3 +0x317:  call   081745f2 <_ZN6Taiwan13PurchaseQuery9execQueryER5MySQL>  ; Taiwan::PurchaseQuery::execQuery(MySQL&)
081757c8 +0x31c:  test   %al,%al
081757ca +0x31e:  je     081757d3 <+0x327>
081757cc +0x320:  mov    $0x1,%eax
081757d1 +0x325:  jmp    081757d8 <+0x32c>
081757d3 +0x327:  mov    $0x0,%eax
081757d8 +0x32c:  test   %al,%al
081757da +0x32e:  je     081757f5 <+0x349>
081757dc +0x330:  mov    0x8(%ebp),%eax
081757df +0x333:  add    $0x8,%eax
081757e2 +0x336:  mov    %eax,0x4(%esp)
081757e6 +0x33a:  mov    0xc(%ebp),%eax
081757e9 +0x33d:  mov    %eax,(%esp)
081757ec +0x340:  call   0817460e <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL>  ; Taiwan::PurchaseQuery::getResult(MySQL&)
081757f1 +0x345:  mov    %eax,%ebx
081757f3 +0x347:  jmp    08175817 <+0x36b>
081757f5 +0x349:  mov    $0x0,%ebx
081757fa +0x34e:  jmp    08175817 <+0x36b>
081757fc +0x350:  mov    %edx,%ebx
081757fe +0x352:  mov    %eax,%esi
08175800 +0x354:  lea    -0xc(%ebp),%eax
08175803 +0x357:  mov    %eax,(%esp)
08175806 +0x35a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0817580b +0x35f:  mov    %esi,%eax
0817580d +0x361:  mov    %ebx,%edx
0817580f +0x363:  mov    %eax,(%esp)
08175812 +0x366:  call   08ae3750 <_Unwind_Resume>
08175817 +0x36b:  lea    -0xc(%ebp),%eax
0817581a +0x36e:  mov    %eax,(%esp)
0817581d +0x371:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175822 +0x376:  mov    %ebx,%eax
08175824 +0x378:  add    $0x20,%esp
08175827 +0x37b:  pop    %ebx
08175828 +0x37c:  pop    %esi
08175829 +0x37d:  pop    %ebp
0817582a +0x37e:  ret
0817582b +0x37f:  nop
0817582c +0x380:  push   %ebp
0817582d +0x381:  mov    %esp,%ebp
0817582f +0x383:  push   %esi
08175830 +0x384:  push   %ebx
08175831 +0x385:  sub    $0x20,%esp
08175834 +0x388:  mov    0x8(%ebp),%eax
08175837 +0x38b:  add    $0x42094,%eax
0817583c +0x390:  mov    %eax,0x4(%esp)
08175840 +0x394:  lea    -0xc(%ebp),%eax
08175843 +0x397:  mov    %eax,(%esp)
08175846 +0x39a:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0817584b +0x39f:  mov    0x8(%ebp),%eax
0817584e +0x3a2:  mov    %eax,(%esp)
08175851 +0x3a5:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
08175856 +0x3aa:  mov    0x8(%ebp),%eax
08175859 +0x3ad:  add    $0x8,%eax
0817585c +0x3b0:  mov    %eax,0x4(%esp)
08175860 +0x3b4:  mov    0xc(%ebp),%eax
08175863 +0x3b7:  mov    %eax,(%esp)
08175866 +0x3ba:  call   08174866 <_ZN6Taiwan9GiftQuery8setQueryER5MySQL>  ; Taiwan::GiftQuery::setQuery(MySQL&)
0817586b +0x3bf:  test   %al,%al
0817586d +0x3c1:  je     0817588f <+0x3e3>
0817586f +0x3c3:  mov    0x8(%ebp),%eax
08175872 +0x3c6:  add    $0x8,%eax
08175875 +0x3c9:  mov    %eax,0x4(%esp)
08175879 +0x3cd:  mov    0xc(%ebp),%eax
0817587c +0x3d0:  mov    %eax,(%esp)
0817587f +0x3d3:  call   081748ba <_ZN6Taiwan9GiftQuery9execQueryER5MySQL>  ; Taiwan::GiftQuery::execQuery(MySQL&)
08175884 +0x3d8:  test   %al,%al
08175886 +0x3da:  je     0817588f <+0x3e3>
08175888 +0x3dc:  mov    $0x1,%eax
0817588d +0x3e1:  jmp    08175894 <+0x3e8>
0817588f +0x3e3:  mov    $0x0,%eax
08175894 +0x3e8:  test   %al,%al
08175896 +0x3ea:  je     081758b1 <+0x405>
08175898 +0x3ec:  mov    0x8(%ebp),%eax
0817589b +0x3ef:  add    $0x8,%eax
0817589e +0x3f2:  mov    %eax,0x4(%esp)
081758a2 +0x3f6:  mov    0xc(%ebp),%eax
081758a5 +0x3f9:  mov    %eax,(%esp)
081758a8 +0x3fc:  call   081748d6 <_ZN6Taiwan9GiftQuery9getResultER5MySQL>  ; Taiwan::GiftQuery::getResult(MySQL&)
081758ad +0x401:  mov    %eax,%ebx
081758af +0x403:  jmp    081758d3 <+0x427>
081758b1 +0x405:  mov    $0x0,%ebx
081758b6 +0x40a:  jmp    081758d3 <+0x427>
081758b8 +0x40c:  mov    %edx,%ebx
081758ba +0x40e:  mov    %eax,%esi
081758bc +0x410:  lea    -0xc(%ebp),%eax
081758bf +0x413:  mov    %eax,(%esp)
081758c2 +0x416:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081758c7 +0x41b:  mov    %esi,%eax
081758c9 +0x41d:  mov    %ebx,%edx
081758cb +0x41f:  mov    %eax,(%esp)
081758ce +0x422:  call   08ae3750 <_Unwind_Resume>
081758d3 +0x427:  lea    -0xc(%ebp),%eax
081758d6 +0x42a:  mov    %eax,(%esp)
081758d9 +0x42d:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081758de +0x432:  mov    %ebx,%eax
081758e0 +0x434:  add    $0x20,%esp
081758e3 +0x437:  pop    %ebx
081758e4 +0x438:  pop    %esi
081758e5 +0x439:  pop    %ebp
081758e6 +0x43a:  ret
081758e7 +0x43b:  nop
081758e8 +0x43c:  push   %ebp
081758e9 +0x43d:  mov    %esp,%ebp
081758eb +0x43f:  push   %esi
081758ec +0x440:  push   %ebx
081758ed +0x441:  sub    $0x20,%esp
081758f0 +0x444:  mov    0x8(%ebp),%eax
081758f3 +0x447:  add    $0x42094,%eax
081758f8 +0x44c:  mov    %eax,0x4(%esp)
081758fc +0x450:  lea    -0xc(%ebp),%eax
081758ff +0x453:  mov    %eax,(%esp)
08175902 +0x456:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08175907 +0x45b:  mov    0x8(%ebp),%eax
0817590a +0x45e:  mov    %eax,(%esp)
0817590d +0x461:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
08175912 +0x466:  mov    0x8(%ebp),%eax
08175915 +0x469:  add    $0x8,%eax
08175918 +0x46c:  mov    %eax,0x4(%esp)
0817591c +0x470:  mov    0xc(%ebp),%eax
0817591f +0x473:  mov    %eax,(%esp)
08175922 +0x476:  call   08174aec <_ZN6Taiwan12ConfirmQuery8setQueryER5MySQL>  ; Taiwan::ConfirmQuery::setQuery(MySQL&)
08175927 +0x47b:  test   %al,%al
08175929 +0x47d:  je     0817594b <+0x49f>
0817592b +0x47f:  mov    0x8(%ebp),%eax
0817592e +0x482:  add    $0x8,%eax
08175931 +0x485:  mov    %eax,0x4(%esp)
08175935 +0x489:  mov    0xc(%ebp),%eax
08175938 +0x48c:  mov    %eax,(%esp)
0817593b +0x48f:  call   08174b28 <_ZN6Taiwan12ConfirmQuery9execQueryER5MySQL>  ; Taiwan::ConfirmQuery::execQuery(MySQL&)
08175940 +0x494:  test   %al,%al
08175942 +0x496:  je     0817594b <+0x49f>
08175944 +0x498:  mov    $0x1,%eax
08175949 +0x49d:  jmp    08175950 <+0x4a4>
0817594b +0x49f:  mov    $0x0,%eax
08175950 +0x4a4:  test   %al,%al
08175952 +0x4a6:  je     0817596d <+0x4c1>
08175954 +0x4a8:  mov    0x8(%ebp),%eax
08175957 +0x4ab:  add    $0x8,%eax
0817595a +0x4ae:  mov    %eax,0x4(%esp)
0817595e +0x4b2:  mov    0xc(%ebp),%eax
08175961 +0x4b5:  mov    %eax,(%esp)
08175964 +0x4b8:  call   08174b44 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL>  ; Taiwan::ConfirmQuery::getResult(MySQL&)
08175969 +0x4bd:  mov    %eax,%ebx
0817596b +0x4bf:  jmp    0817598f <+0x4e3>
0817596d +0x4c1:  mov    $0x0,%ebx
08175972 +0x4c6:  jmp    0817598f <+0x4e3>
08175974 +0x4c8:  mov    %edx,%ebx
08175976 +0x4ca:  mov    %eax,%esi
08175978 +0x4cc:  lea    -0xc(%ebp),%eax
0817597b +0x4cf:  mov    %eax,(%esp)
0817597e +0x4d2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175983 +0x4d7:  mov    %esi,%eax
08175985 +0x4d9:  mov    %ebx,%edx
08175987 +0x4db:  mov    %eax,(%esp)
0817598a +0x4de:  call   08ae3750 <_Unwind_Resume>
0817598f +0x4e3:  lea    -0xc(%ebp),%eax
08175992 +0x4e6:  mov    %eax,(%esp)
08175995 +0x4e9:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0817599a +0x4ee:  mov    %ebx,%eax
0817599c +0x4f0:  add    $0x20,%esp
0817599f +0x4f3:  pop    %ebx
081759a0 +0x4f4:  pop    %esi
081759a1 +0x4f5:  pop    %ebp
081759a2 +0x4f6:  ret
081759a3 +0x4f7:  nop
081759a4 +0x4f8:  push   %ebp
081759a5 +0x4f9:  mov    %esp,%ebp
081759a7 +0x4fb:  push   %esi
081759a8 +0x4fc:  push   %ebx
081759a9 +0x4fd:  sub    $0x20,%esp
081759ac +0x500:  mov    0x8(%ebp),%eax
081759af +0x503:  add    $0x42094,%eax
081759b4 +0x508:  mov    %eax,0x4(%esp)
081759b8 +0x50c:  lea    -0xc(%ebp),%eax
081759bb +0x50f:  mov    %eax,(%esp)
081759be +0x512:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081759c3 +0x517:  mov    0x8(%ebp),%eax
081759c6 +0x51a:  mov    %eax,(%esp)
081759c9 +0x51d:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
081759ce +0x522:  mov    0x8(%ebp),%eax
081759d1 +0x525:  add    $0x8,%eax
081759d4 +0x528:  mov    %eax,0x4(%esp)
081759d8 +0x52c:  mov    0xc(%ebp),%eax
081759db +0x52f:  mov    %eax,(%esp)
081759de +0x532:  call   08174d08 <_ZN6Taiwan11CancelQuery8setQueryER5MySQL>  ; Taiwan::CancelQuery::setQuery(MySQL&)
081759e3 +0x537:  test   %al,%al
081759e5 +0x539:  je     08175a07 <+0x55b>
081759e7 +0x53b:  mov    0x8(%ebp),%eax
081759ea +0x53e:  add    $0x8,%eax
081759ed +0x541:  mov    %eax,0x4(%esp)
081759f1 +0x545:  mov    0xc(%ebp),%eax
081759f4 +0x548:  mov    %eax,(%esp)
081759f7 +0x54b:  call   08174d44 <_ZN6Taiwan11CancelQuery9execQueryER5MySQL>  ; Taiwan::CancelQuery::execQuery(MySQL&)
081759fc +0x550:  test   %al,%al
081759fe +0x552:  je     08175a07 <+0x55b>
08175a00 +0x554:  mov    $0x1,%eax
08175a05 +0x559:  jmp    08175a0c <+0x560>
08175a07 +0x55b:  mov    $0x0,%eax
08175a0c +0x560:  test   %al,%al
08175a0e +0x562:  je     08175a29 <+0x57d>
08175a10 +0x564:  mov    0x8(%ebp),%eax
08175a13 +0x567:  add    $0x8,%eax
08175a16 +0x56a:  mov    %eax,0x4(%esp)
08175a1a +0x56e:  mov    0xc(%ebp),%eax
08175a1d +0x571:  mov    %eax,(%esp)
08175a20 +0x574:  call   08174d60 <_ZN6Taiwan11CancelQuery9getResultER5MySQL>  ; Taiwan::CancelQuery::getResult(MySQL&)
08175a25 +0x579:  mov    %eax,%ebx
08175a27 +0x57b:  jmp    08175a4b <+0x59f>
08175a29 +0x57d:  mov    $0x0,%ebx
08175a2e +0x582:  jmp    08175a4b <+0x59f>
08175a30 +0x584:  mov    %edx,%ebx
08175a32 +0x586:  mov    %eax,%esi
08175a34 +0x588:  lea    -0xc(%ebp),%eax
08175a37 +0x58b:  mov    %eax,(%esp)
08175a3a +0x58e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175a3f +0x593:  mov    %esi,%eax
08175a41 +0x595:  mov    %ebx,%edx
08175a43 +0x597:  mov    %eax,(%esp)
08175a46 +0x59a:  call   08ae3750 <_Unwind_Resume>
08175a4b +0x59f:  lea    -0xc(%ebp),%eax
08175a4e +0x5a2:  mov    %eax,(%esp)
08175a51 +0x5a5:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175a56 +0x5aa:  mov    %ebx,%eax
08175a58 +0x5ac:  add    $0x20,%esp
08175a5b +0x5af:  pop    %ebx
08175a5c +0x5b0:  pop    %esi
08175a5d +0x5b1:  pop    %ebp
08175a5e +0x5b2:  ret
08175a5f +0x5b3:  nop
08175a60 +0x5b4:  push   %ebp
08175a61 +0x5b5:  mov    %esp,%ebp
08175a63 +0x5b7:  push   %esi
08175a64 +0x5b8:  push   %ebx
08175a65 +0x5b9:  sub    $0x20,%esp
08175a68 +0x5bc:  mov    0x8(%ebp),%eax
08175a6b +0x5bf:  add    $0x42094,%eax
08175a70 +0x5c4:  mov    %eax,0x4(%esp)
08175a74 +0x5c8:  lea    -0xc(%ebp),%eax
08175a77 +0x5cb:  mov    %eax,(%esp)
08175a7a +0x5ce:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08175a7f +0x5d3:  mov    0x8(%ebp),%eax
08175a82 +0x5d6:  mov    %eax,(%esp)
08175a85 +0x5d9:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
08175a8a +0x5de:  mov    0x8(%ebp),%eax
08175a8d +0x5e1:  add    $0x8,%eax
08175a90 +0x5e4:  mov    %eax,0x4(%esp)
08175a94 +0x5e8:  mov    0xc(%ebp),%eax
08175a97 +0x5eb:  mov    %eax,(%esp)
08175a9a +0x5ee:  call   08174f52 <_ZN6Taiwan11ChargeQuery8setQueryER5MySQL>  ; Taiwan::ChargeQuery::setQuery(MySQL&)
08175a9f +0x5f3:  test   %al,%al
08175aa1 +0x5f5:  je     08175ac3 <+0x617>
08175aa3 +0x5f7:  mov    0x8(%ebp),%eax
08175aa6 +0x5fa:  add    $0x8,%eax
08175aa9 +0x5fd:  mov    %eax,0x4(%esp)
08175aad +0x601:  mov    0xc(%ebp),%eax
08175ab0 +0x604:  mov    %eax,(%esp)
08175ab3 +0x607:  call   08174faa <_ZN6Taiwan11ChargeQuery9execQueryER5MySQL>  ; Taiwan::ChargeQuery::execQuery(MySQL&)
08175ab8 +0x60c:  test   %al,%al
08175aba +0x60e:  je     08175ac3 <+0x617>
08175abc +0x610:  mov    $0x1,%eax
08175ac1 +0x615:  jmp    08175ac8 <+0x61c>
08175ac3 +0x617:  mov    $0x0,%eax
08175ac8 +0x61c:  test   %al,%al
08175aca +0x61e:  je     08175ae5 <+0x639>
08175acc +0x620:  mov    0x8(%ebp),%eax
08175acf +0x623:  add    $0x8,%eax
08175ad2 +0x626:  mov    %eax,0x4(%esp)
08175ad6 +0x62a:  mov    0xc(%ebp),%eax
08175ad9 +0x62d:  mov    %eax,(%esp)
08175adc +0x630:  call   08174fc6 <_ZN6Taiwan11ChargeQuery9getResultER5MySQL>  ; Taiwan::ChargeQuery::getResult(MySQL&)
08175ae1 +0x635:  mov    %eax,%ebx
08175ae3 +0x637:  jmp    08175b07 <+0x65b>
08175ae5 +0x639:  mov    $0x0,%ebx
08175aea +0x63e:  jmp    08175b07 <+0x65b>
08175aec +0x640:  mov    %edx,%ebx
08175aee +0x642:  mov    %eax,%esi
08175af0 +0x644:  lea    -0xc(%ebp),%eax
08175af3 +0x647:  mov    %eax,(%esp)
08175af6 +0x64a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175afb +0x64f:  mov    %esi,%eax
08175afd +0x651:  mov    %ebx,%edx
08175aff +0x653:  mov    %eax,(%esp)
08175b02 +0x656:  call   08ae3750 <_Unwind_Resume>
08175b07 +0x65b:  lea    -0xc(%ebp),%eax
08175b0a +0x65e:  mov    %eax,(%esp)
08175b0d +0x661:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175b12 +0x666:  mov    %ebx,%eax
08175b14 +0x668:  add    $0x20,%esp
08175b17 +0x66b:  pop    %ebx
08175b18 +0x66c:  pop    %esi
08175b19 +0x66d:  pop    %ebp
08175b1a +0x66e:  ret
08175b1b +0x66f:  nop
08175b1c +0x670:  push   %ebp
08175b1d +0x671:  mov    %esp,%ebp
08175b1f +0x673:  push   %esi
08175b20 +0x674:  push   %ebx
08175b21 +0x675:  sub    $0x20,%esp
08175b24 +0x678:  mov    0x8(%ebp),%eax
08175b27 +0x67b:  add    $0x42094,%eax
08175b2c +0x680:  mov    %eax,0x4(%esp)
08175b30 +0x684:  lea    -0xc(%ebp),%eax
08175b33 +0x687:  mov    %eax,(%esp)
08175b36 +0x68a:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08175b3b +0x68f:  mov    0x8(%ebp),%eax
08175b3e +0x692:  mov    %eax,(%esp)
08175b41 +0x695:  call   0817365a <_ZN6Taiwan10TaiwanCash15increaseRequestEv>  ; Taiwan::TaiwanCash::increaseRequest()
08175b46 +0x69a:  mov    0x8(%ebp),%eax
08175b49 +0x69d:  add    $0x8,%eax
08175b4c +0x6a0:  mov    %eax,0x4(%esp)
08175b50 +0x6a4:  mov    0xc(%ebp),%eax
08175b53 +0x6a7:  mov    %eax,(%esp)
08175b56 +0x6aa:  call   08175224 <_ZN6Taiwan14CeraPointQuery8setQueryER5MySQL>  ; Taiwan::CeraPointQuery::setQuery(MySQL&)
08175b5b +0x6af:  test   %al,%al
08175b5d +0x6b1:  je     08175b7f <+0x6d3>
08175b5f +0x6b3:  mov    0x8(%ebp),%eax
08175b62 +0x6b6:  add    $0x8,%eax
08175b65 +0x6b9:  mov    %eax,0x4(%esp)
08175b69 +0x6bd:  mov    0xc(%ebp),%eax
08175b6c +0x6c0:  mov    %eax,(%esp)
08175b6f +0x6c3:  call   081752b0 <_ZN6Taiwan14CeraPointQuery9execQueryER5MySQL>  ; Taiwan::CeraPointQuery::execQuery(MySQL&)
08175b74 +0x6c8:  test   %al,%al
08175b76 +0x6ca:  je     08175b7f <+0x6d3>
08175b78 +0x6cc:  mov    $0x1,%eax
08175b7d +0x6d1:  jmp    08175b84 <+0x6d8>
08175b7f +0x6d3:  mov    $0x0,%eax
08175b84 +0x6d8:  test   %al,%al
08175b86 +0x6da:  je     08175ba1 <+0x6f5>
08175b88 +0x6dc:  mov    0x8(%ebp),%eax
08175b8b +0x6df:  add    $0x8,%eax
08175b8e +0x6e2:  mov    %eax,0x4(%esp)
08175b92 +0x6e6:  mov    0xc(%ebp),%eax
08175b95 +0x6e9:  mov    %eax,(%esp)
08175b98 +0x6ec:  call   081752cc <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL>  ; Taiwan::CeraPointQuery::getResult(MySQL&)
08175b9d +0x6f1:  mov    %eax,%ebx
08175b9f +0x6f3:  jmp    08175bc3 <+0x717>
08175ba1 +0x6f5:  mov    $0x0,%ebx
08175ba6 +0x6fa:  jmp    08175bc3 <+0x717>
08175ba8 +0x6fc:  mov    %edx,%ebx
08175baa +0x6fe:  mov    %eax,%esi
08175bac +0x700:  lea    -0xc(%ebp),%eax
08175baf +0x703:  mov    %eax,(%esp)
08175bb2 +0x706:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175bb7 +0x70b:  mov    %esi,%eax
08175bb9 +0x70d:  mov    %ebx,%edx
08175bbb +0x70f:  mov    %eax,(%esp)
08175bbe +0x712:  call   08ae3750 <_Unwind_Resume>
08175bc3 +0x717:  lea    -0xc(%ebp),%eax
08175bc6 +0x71a:  mov    %eax,(%esp)
08175bc9 +0x71d:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08175bce +0x722:  mov    %ebx,%eax
08175bd0 +0x724:  add    $0x20,%esp
08175bd3 +0x727:  pop    %ebx
08175bd4 +0x728:  pop    %esi
08175bd5 +0x729:  pop    %ebp
08175bd6 +0x72a:  ret
08175bd7 +0x72b:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81754ac

/* Taiwan::TaiwanCash::TaiwanCash(unsigned char, short) */

void Taiwan::TaiwanCash::_GLOBAL__I_TaiwanCash(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
