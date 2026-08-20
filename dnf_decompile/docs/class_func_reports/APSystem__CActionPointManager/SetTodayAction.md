# SetTodayAction

`_ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE`

`APSystem::CActionPointManager::SetTodayAction(int, unsigned int, ENUM_EXPERT_JOB_TYPE, std::map<unsigned short, std::vector<APSystem::CActionPointEx, std::allocator<APSystem::CActionPointEx> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, std::vector<APSystem::CActionPointEx, std::allocator<APSystem::CActionPointEx> > > > > const&)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x0812161c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812161c  _ZN8APSystem19CActionPointManager14SetTodayActionEij20ENUM_EXPERT_JOB_TYPERKSt3mapItSt6vectorINS_14CActionPointExESaIS4_EESt4lessItESaISt4pairIKtS6_EEE
#           APSystem::CActionPointManager::SetTodayAction(int, unsigned int, ENUM_EXPERT_JOB_TYPE, std::map<unsigned short, std::vector<APSystem::CActionPointEx, std::allocator<APSystem::CActionPointEx> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, std::vector<APSystem::CActionPointEx, std::allocator<APSystem::CActionPointEx> > > > > const&)
# range [0x0812161c, 0x08121b0b]
0812161c +0x000:  push   %ebp
0812161d +0x001:  mov    %esp,%ebp
0812161f +0x003:  push   %esi
08121620 +0x004:  push   %ebx
08121621 +0x005:  sub    $0x90,%esp
08121627 +0x00b:  mov    0x8(%ebp),%eax
0812162a +0x00e:  mov    %eax,(%esp)
0812162d +0x011:  call   08122af4 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x67>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x67
08121632 +0x016:  mov    0x8(%ebp),%eax
08121635 +0x019:  mov    0x10(%ebp),%edx
08121638 +0x01c:  mov    %edx,0x8(%eax)
0812163b +0x01f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08121642 +0x026:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08121647 +0x02b:  mov    %eax,-0x4c(%ebp)
0812164a +0x02e:  lea    -0x88(%ebp),%eax
08121650 +0x034:  mov    %eax,0x4(%esp)
08121654 +0x038:  lea    -0x4c(%ebp),%eax
08121657 +0x03b:  mov    %eax,(%esp)
0812165a +0x03e:  call   0807e360 <_init+0xc58>
0812165f +0x043:  mov    -0x70(%ebp),%eax
08121662 +0x046:  mov    %eax,-0x3c(%ebp)
08121665 +0x049:  lea    -0x50(%ebp),%eax
08121668 +0x04c:  mov    0x18(%ebp),%edx
0812166b +0x04f:  mov    %edx,0x4(%esp)
0812166f +0x053:  mov    %eax,(%esp)
08121672 +0x056:  call   08122b2a <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x9d>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x9d
08121677 +0x05b:  sub    $0x4,%esp
0812167a +0x05e:  movl   $0x0,-0x38(%ebp)
08121681 +0x065:  jmp    08121ab3 <+0x497>
08121686 +0x06a:  lea    -0x50(%ebp),%eax
08121689 +0x06d:  mov    %eax,(%esp)
0812168c +0x070:  call   08122bc8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x13b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x13b
08121691 +0x075:  add    $0x4,%eax
08121694 +0x078:  mov    %eax,-0x34(%ebp)
08121697 +0x07b:  mov    -0x34(%ebp),%eax
0812169a +0x07e:  mov    %eax,(%esp)
0812169d +0x081:  call   08122bd6 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x149>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x149
081216a2 +0x086:  mov    %eax,-0x30(%ebp)
081216a5 +0x089:  cmpl   $0x0,-0x30(%ebp)
081216a9 +0x08d:  je     08121a91 <+0x475>
081216af +0x093:  movb   $0x0,-0x2a(%ebp)
081216b3 +0x097:  movb   $0x0,-0x29(%ebp)
081216b7 +0x09b:  movl   $0x0,0x4(%esp)
081216bf +0x0a3:  mov    -0x34(%ebp),%eax
081216c2 +0x0a6:  mov    %eax,(%esp)
081216c5 +0x0a9:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
081216ca +0x0ae:  mov    0x20(%eax),%eax
081216cd +0x0b1:  cmp    $0x7,%eax
081216d0 +0x0b4:  setne  %al
081216d3 +0x0b7:  test   %al,%al
081216d5 +0x0b9:  je     081216db <+0xbf>
081216d7 +0x0bb:  movb   $0x1,-0x2a(%ebp)
081216db +0x0bf:  movl   $0x0,0x4(%esp)
081216e3 +0x0c7:  mov    -0x34(%ebp),%eax
081216e6 +0x0ca:  mov    %eax,(%esp)
081216e9 +0x0cd:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
081216ee +0x0d2:  movzbl 0xf(%eax),%eax
081216f2 +0x0d6:  test   %al,%al
081216f4 +0x0d8:  setne  %al
081216f7 +0x0db:  test   %al,%al
081216f9 +0x0dd:  je     081216ff <+0xe3>
081216fb +0x0df:  movb   $0x1,-0x29(%ebp)
081216ff +0x0e3:  lea    -0x5c(%ebp),%eax
08121702 +0x0e6:  mov    %eax,(%esp)
08121705 +0x0e9:  call   08122c12 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x185>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x185
0812170a +0x0ee:  movl   $0x0,-0x18(%ebp)
08121711 +0x0f5:  jmp    0812173e <+0x122>
08121713 +0x0f7:  mov    -0x18(%ebp),%eax
08121716 +0x0fa:  mov    %eax,0x4(%esp)
0812171a +0x0fe:  mov    -0x34(%ebp),%eax
0812171d +0x101:  mov    %eax,(%esp)
08121720 +0x104:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
08121725 +0x109:  mov    %eax,-0x44(%ebp)
08121728 +0x10c:  lea    -0x44(%ebp),%eax
0812172b +0x10f:  mov    %eax,0x4(%esp)
0812172f +0x113:  lea    -0x5c(%ebp),%eax
08121732 +0x116:  mov    %eax,(%esp)
08121735 +0x119:  call   08122c84 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x1f7>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x1f7
0812173a +0x11e:  addl   $0x1,-0x18(%ebp)
0812173e +0x122:  mov    -0x18(%ebp),%eax
08121741 +0x125:  cmp    -0x30(%ebp),%eax
08121744 +0x128:  setl   %al
08121747 +0x12b:  test   %al,%al
08121749 +0x12d:  jne    08121713 <+0xf7>
0812174b +0x12f:  movl   $0x0,-0x28(%ebp)
08121752 +0x136:  movl   $0x0,-0x14(%ebp)
08121759 +0x13d:  jmp    08121995 <+0x379>
0812175e +0x142:  mov    -0x14(%ebp),%eax
08121761 +0x145:  mov    %eax,0x4(%esp)
08121765 +0x149:  lea    -0x5c(%ebp),%eax
08121768 +0x14c:  mov    %eax,(%esp)
0812176b +0x14f:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
08121770 +0x154:  mov    (%eax),%eax
08121772 +0x156:  test   %eax,%eax
08121774 +0x158:  sete   %al
08121777 +0x15b:  test   %al,%al
08121779 +0x15d:  jne    0812198d <+0x371>
0812177f +0x163:  cmpb   $0x0,-0x2a(%ebp)
08121783 +0x167:  je     081217da <+0x1be>
08121785 +0x169:  movzbl &_ZN8APSystem19CActionPointManager10_gmWeekdayE,%eax
0812178c +0x170:  test   %al,%al
0812178e +0x172:  je     08121798 <+0x17c>
08121790 +0x174:  mov    &_ZN8APSystem19CActionPointManager10_gmWeekdayE+0x4,%eax
08121795 +0x179:  mov    %eax,-0x3c(%ebp)
08121798 +0x17c:  mov    -0x14(%ebp),%eax
0812179b +0x17f:  mov    %eax,0x4(%esp)
0812179f +0x183:  lea    -0x5c(%ebp),%eax
081217a2 +0x186:  mov    %eax,(%esp)
081217a5 +0x189:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
081217aa +0x18e:  mov    (%eax),%eax
081217ac +0x190:  mov    0x20(%eax),%eax
081217af +0x193:  mov    %eax,%edx
081217b1 +0x195:  mov    -0x3c(%ebp),%eax
081217b4 +0x198:  cmp    %eax,%edx
081217b6 +0x19a:  setne  %al
081217b9 +0x19d:  test   %al,%al
081217bb +0x19f:  je     081217da <+0x1be>
081217bd +0x1a1:  mov    -0x14(%ebp),%eax
081217c0 +0x1a4:  mov    %eax,0x4(%esp)
081217c4 +0x1a8:  lea    -0x5c(%ebp),%eax
081217c7 +0x1ab:  mov    %eax,(%esp)
081217ca +0x1ae:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
081217cf +0x1b3:  movl   $0x0,(%eax)
081217d5 +0x1b9:  jmp    08121991 <+0x375>
081217da +0x1be:  cmpb   $0x0,-0x29(%ebp)
081217de +0x1c2:  je     08121849 <+0x22d>
081217e0 +0x1c4:  mov    -0x14(%ebp),%eax
081217e3 +0x1c7:  mov    %eax,0x4(%esp)
081217e7 +0x1cb:  mov    -0x34(%ebp),%eax
081217ea +0x1ce:  mov    %eax,(%esp)
081217ed +0x1d1:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
081217f2 +0x1d6:  movzbl 0xf(%eax),%eax
081217f6 +0x1da:  movzbl %al,%eax
081217f9 +0x1dd:  cmp    0xc(%ebp),%eax
081217fc +0x1e0:  jg     0812181c <+0x200>
081217fe +0x1e2:  mov    -0x14(%ebp),%eax
08121801 +0x1e5:  mov    %eax,0x4(%esp)
08121805 +0x1e9:  mov    -0x34(%ebp),%eax
08121808 +0x1ec:  mov    %eax,(%esp)
0812180b +0x1ef:  call   08122bf8 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x16b>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x16b
08121810 +0x1f4:  movzbl 0x10(%eax),%eax
08121814 +0x1f8:  movzbl %al,%eax
08121817 +0x1fb:  cmp    0xc(%ebp),%eax
0812181a +0x1fe:  jge    08121823 <+0x207>
0812181c +0x200:  mov    $0x1,%eax
08121821 +0x205:  jmp    08121828 <+0x20c>
08121823 +0x207:  mov    $0x0,%eax
08121828 +0x20c:  test   %al,%al
0812182a +0x20e:  je     08121849 <+0x22d>
0812182c +0x210:  mov    -0x14(%ebp),%eax
0812182f +0x213:  mov    %eax,0x4(%esp)
08121833 +0x217:  lea    -0x5c(%ebp),%eax
08121836 +0x21a:  mov    %eax,(%esp)
08121839 +0x21d:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
0812183e +0x222:  movl   $0x0,(%eax)
08121844 +0x228:  jmp    08121991 <+0x375>
08121849 +0x22d:  mov    -0x14(%ebp),%eax
0812184c +0x230:  mov    %eax,0x4(%esp)
08121850 +0x234:  lea    -0x5c(%ebp),%eax
08121853 +0x237:  mov    %eax,(%esp)
08121856 +0x23a:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
0812185b +0x23f:  mov    (%eax),%eax
0812185d +0x241:  mov    0x2(%eax),%eax
08121860 +0x244:  mov    %eax,-0x10(%ebp)
08121863 +0x247:  cmpl   $0x1d,-0x10(%ebp)
08121867 +0x24b:  je     08121885 <+0x269>
08121869 +0x24d:  cmpl   $0x1e,-0x10(%ebp)
0812186d +0x251:  je     08121885 <+0x269>
0812186f +0x253:  cmpl   $0x1f,-0x10(%ebp)
08121873 +0x257:  je     08121885 <+0x269>
08121875 +0x259:  cmpl   $0x2d,-0x10(%ebp)
08121879 +0x25d:  je     08121885 <+0x269>
0812187b +0x25f:  cmpl   $0x20,-0x10(%ebp)
0812187f +0x263:  jne    08121961 <+0x345>
08121885 +0x269:  cmpl   $0x1d,-0x10(%ebp)
08121889 +0x26d:  jne    081218ae <+0x292>
0812188b +0x26f:  cmpl   $0x2,0x14(%ebp)
0812188f +0x273:  je     081218ae <+0x292>
08121891 +0x275:  mov    -0x14(%ebp),%eax
08121894 +0x278:  mov    %eax,0x4(%esp)
08121898 +0x27c:  lea    -0x5c(%ebp),%eax
0812189b +0x27f:  mov    %eax,(%esp)
0812189e +0x282:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
081218a3 +0x287:  movl   $0x0,(%eax)
081218a9 +0x28d:  jmp    08121944 <+0x328>
081218ae +0x292:  cmpl   $0x1e,-0x10(%ebp)
081218b2 +0x296:  jne    081218d4 <+0x2b8>
081218b4 +0x298:  cmpl   $0x4,0x14(%ebp)
081218b8 +0x29c:  je     081218d4 <+0x2b8>
081218ba +0x29e:  mov    -0x14(%ebp),%eax
081218bd +0x2a1:  mov    %eax,0x4(%esp)
081218c1 +0x2a5:  lea    -0x5c(%ebp),%eax
081218c4 +0x2a8:  mov    %eax,(%esp)
081218c7 +0x2ab:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
081218cc +0x2b0:  movl   $0x0,(%eax)
081218d2 +0x2b6:  jmp    08121944 <+0x328>
081218d4 +0x2b8:  cmpl   $0x1f,-0x10(%ebp)
081218d8 +0x2bc:  jne    081218fa <+0x2de>
081218da +0x2be:  cmpl   $0x1,0x14(%ebp)
081218de +0x2c2:  je     081218fa <+0x2de>
081218e0 +0x2c4:  mov    -0x14(%ebp),%eax
081218e3 +0x2c7:  mov    %eax,0x4(%esp)
081218e7 +0x2cb:  lea    -0x5c(%ebp),%eax
081218ea +0x2ce:  mov    %eax,(%esp)
081218ed +0x2d1:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
081218f2 +0x2d6:  movl   $0x0,(%eax)
081218f8 +0x2dc:  jmp    08121944 <+0x328>
081218fa +0x2de:  cmpl   $0x20,-0x10(%ebp)
081218fe +0x2e2:  jne    08121920 <+0x304>
08121900 +0x2e4:  cmpl   $0x3,0x14(%ebp)
08121904 +0x2e8:  je     08121920 <+0x304>
08121906 +0x2ea:  mov    -0x14(%ebp),%eax
08121909 +0x2ed:  mov    %eax,0x4(%esp)
0812190d +0x2f1:  lea    -0x5c(%ebp),%eax
08121910 +0x2f4:  mov    %eax,(%esp)
08121913 +0x2f7:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
08121918 +0x2fc:  movl   $0x0,(%eax)
0812191e +0x302:  jmp    08121944 <+0x328>
08121920 +0x304:  cmpl   $0x2d,-0x10(%ebp)
08121924 +0x308:  jne    08121944 <+0x328>
08121926 +0x30a:  cmpl   $0x3,0x14(%ebp)
0812192a +0x30e:  je     08121944 <+0x328>
0812192c +0x310:  mov    -0x14(%ebp),%eax
0812192f +0x313:  mov    %eax,0x4(%esp)
08121933 +0x317:  lea    -0x5c(%ebp),%eax
08121936 +0x31a:  mov    %eax,(%esp)
08121939 +0x31d:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
0812193e +0x322:  movl   $0x0,(%eax)
08121944 +0x328:  mov    -0x14(%ebp),%eax
08121947 +0x32b:  mov    %eax,0x4(%esp)
0812194b +0x32f:  lea    -0x5c(%ebp),%eax
0812194e +0x332:  mov    %eax,(%esp)
08121951 +0x335:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
08121956 +0x33a:  mov    (%eax),%eax
08121958 +0x33c:  test   %eax,%eax
0812195a +0x33e:  sete   %al
0812195d +0x341:  test   %al,%al
0812195f +0x343:  jne    08121990 <+0x374>
08121961 +0x345:  cmpl   $0x22,-0x10(%ebp)
08121965 +0x349:  jne    08121987 <+0x36b>
08121967 +0x34b:  cmpl   $0x0,0x14(%ebp)
0812196b +0x34f:  je     08121987 <+0x36b>
0812196d +0x351:  mov    -0x14(%ebp),%eax
08121970 +0x354:  mov    %eax,0x4(%esp)
08121974 +0x358:  lea    -0x5c(%ebp),%eax
08121977 +0x35b:  mov    %eax,(%esp)
0812197a +0x35e:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
0812197f +0x363:  movl   $0x0,(%eax)
08121985 +0x369:  jmp    08121991 <+0x375>
08121987 +0x36b:  addl   $0x1,-0x28(%ebp)
0812198b +0x36f:  jmp    08121991 <+0x375>
0812198d +0x371:  nop
0812198e +0x372:  jmp    08121991 <+0x375>
08121990 +0x374:  nop
08121991 +0x375:  addl   $0x1,-0x14(%ebp)
08121995 +0x379:  mov    -0x14(%ebp),%eax
08121998 +0x37c:  cmp    -0x30(%ebp),%eax
0812199b +0x37f:  setl   %al
0812199e +0x382:  test   %al,%al
081219a0 +0x384:  jne    0812175e <+0x142>
081219a6 +0x38a:  cmpl   $0x0,-0x28(%ebp)
081219aa +0x38e:  jne    081219b5 <+0x399>
081219ac +0x390:  subl   $0x1,-0x38(%ebp)
081219b0 +0x394:  jmp    08121a84 <+0x468>
081219b5 +0x399:  mov    -0x28(%ebp),%eax
081219b8 +0x39c:  mov    %eax,(%esp)
081219bb +0x39f:  call   08108b06 <_ZN7DNFFLib12get_rand_intEi>  ; DNFFLib::get_rand_int(int)
081219c0 +0x3a4:  mov    %eax,-0x24(%ebp)
081219c3 +0x3a7:  movl   $0x0,-0x20(%ebp)
081219ca +0x3ae:  movl   $0x0,-0x1c(%ebp)
081219d1 +0x3b5:  movl   $0x0,-0xc(%ebp)
081219d8 +0x3bc:  jmp    08121a23 <+0x407>
081219da +0x3be:  mov    -0xc(%ebp),%eax
081219dd +0x3c1:  mov    %eax,0x4(%esp)
081219e1 +0x3c5:  lea    -0x5c(%ebp),%eax
081219e4 +0x3c8:  mov    %eax,(%esp)
081219e7 +0x3cb:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
081219ec +0x3d0:  mov    (%eax),%eax
081219ee +0x3d2:  test   %eax,%eax
081219f0 +0x3d4:  sete   %al
081219f3 +0x3d7:  test   %al,%al
081219f5 +0x3d9:  jne    08121a1e <+0x402>
081219f7 +0x3db:  mov    -0x20(%ebp),%eax
081219fa +0x3de:  cmp    -0x24(%ebp),%eax
081219fd +0x3e1:  jne    08121a18 <+0x3fc>
081219ff +0x3e3:  mov    -0xc(%ebp),%eax
08121a02 +0x3e6:  mov    %eax,0x4(%esp)
08121a06 +0x3ea:  lea    -0x5c(%ebp),%eax
08121a09 +0x3ed:  mov    %eax,(%esp)
08121a0c +0x3f0:  call   08122cae <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x221>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x221
08121a11 +0x3f5:  mov    (%eax),%eax
08121a13 +0x3f7:  mov    %eax,-0x1c(%ebp)
08121a16 +0x3fa:  jmp    08121a30 <+0x414>
08121a18 +0x3fc:  addl   $0x1,-0x20(%ebp)
08121a1c +0x400:  jmp    08121a1f <+0x403>
08121a1e +0x402:  nop
08121a1f +0x403:  addl   $0x1,-0xc(%ebp)
08121a23 +0x407:  mov    -0xc(%ebp),%eax
08121a26 +0x40a:  cmp    -0x30(%ebp),%eax
08121a29 +0x40d:  setl   %al
08121a2c +0x410:  test   %al,%al
08121a2e +0x412:  jne    081219da <+0x3be>
08121a30 +0x414:  cmpl   $0x0,-0x1c(%ebp)
08121a34 +0x418:  jne    08121a3c <+0x420>
08121a36 +0x41a:  subl   $0x1,-0x38(%ebp)
08121a3a +0x41e:  jmp    08121a84 <+0x468>
08121a3c +0x420:  mov    -0x1c(%ebp),%ecx
08121a3f +0x423:  mov    -0x38(%ebp),%edx
08121a42 +0x426:  mov    %edx,%eax
08121a44 +0x428:  shl    $0x2,%eax
08121a47 +0x42b:  add    %edx,%eax
08121a49 +0x42d:  add    %eax,%eax
08121a4b +0x42f:  add    %edx,%eax
08121a4d +0x431:  add    0x8(%ebp),%eax
08121a50 +0x434:  add    $0x15,%eax
08121a53 +0x437:  movl   $0xb,0x8(%esp)
08121a5b +0x43f:  mov    %ecx,0x4(%esp)
08121a5f +0x443:  mov    %eax,(%esp)
08121a62 +0x446:  call   0807d8a0 <_init+0x198>
08121a67 +0x44b:  jmp    08121a84 <+0x468>
08121a69 +0x44d:  mov    %edx,%ebx
08121a6b +0x44f:  mov    %eax,%esi
08121a6d +0x451:  lea    -0x5c(%ebp),%eax
08121a70 +0x454:  mov    %eax,(%esp)
08121a73 +0x457:  call   08122c26 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x199>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x199
08121a78 +0x45c:  mov    %esi,%eax
08121a7a +0x45e:  mov    %ebx,%edx
08121a7c +0x460:  mov    %eax,(%esp)
08121a7f +0x463:  call   08ae3750 <_Unwind_Resume>
08121a84 +0x468:  lea    -0x5c(%ebp),%eax
08121a87 +0x46b:  mov    %eax,(%esp)
08121a8a +0x46e:  call   08122c26 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x199>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x199
08121a8f +0x473:  jmp    08121a92 <+0x476>
08121a91 +0x475:  nop
08121a92 +0x476:  addl   $0x1,-0x38(%ebp)
08121a96 +0x47a:  lea    -0x40(%ebp),%eax
08121a99 +0x47d:  movl   $0x0,0x8(%esp)
08121aa1 +0x485:  lea    -0x50(%ebp),%edx
08121aa4 +0x488:  mov    %edx,0x4(%esp)
08121aa8 +0x48c:  mov    %eax,(%esp)
08121aab +0x48f:  call   08122b8a <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0xfd>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0xfd
08121ab0 +0x494:  sub    $0x4,%esp
08121ab3 +0x497:  cmpl   $0x12b,-0x38(%ebp)
08121aba +0x49e:  jg     08121aee <+0x4d2>
08121abc +0x4a0:  lea    -0x48(%ebp),%eax
08121abf +0x4a3:  mov    0x18(%ebp),%edx
08121ac2 +0x4a6:  mov    %edx,0x4(%esp)
08121ac6 +0x4aa:  mov    %eax,(%esp)
08121ac9 +0x4ad:  call   08122b50 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0xc3>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0xc3
08121ace +0x4b2:  sub    $0x4,%esp
08121ad1 +0x4b5:  lea    -0x48(%ebp),%eax
08121ad4 +0x4b8:  mov    %eax,0x4(%esp)
08121ad8 +0x4bc:  lea    -0x50(%ebp),%eax
08121adb +0x4bf:  mov    %eax,(%esp)
08121ade +0x4c2:  call   08122b76 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0xe9>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0xe9
08121ae3 +0x4c7:  test   %al,%al
08121ae5 +0x4c9:  je     08121aee <+0x4d2>
08121ae7 +0x4cb:  mov    $0x1,%eax
08121aec +0x4d0:  jmp    08121af3 <+0x4d7>
08121aee +0x4d2:  mov    $0x0,%eax
08121af3 +0x4d7:  test   %al,%al
08121af5 +0x4d9:  jne    08121686 <+0x6a>
08121afb +0x4df:  mov    0x8(%ebp),%eax
08121afe +0x4e2:  movb   $0x1,(%eax)
08121b01 +0x4e5:  lea    -0x8(%ebp),%esp
08121b04 +0x4e8:  add    $0x0,%esp
08121b07 +0x4eb:  pop    %ebx
08121b08 +0x4ec:  pop    %esi
08121b09 +0x4ed:  pop    %ebp
08121b0a +0x4ee:  ret
08121b0b +0x4ef:  nop
```

## 反编译 C

```c
// APSystem::CActionPointManager::SetTodayAction @ 0x812161c

/* APSystem::CActionPointManager::SetTodayAction(int, unsigned int, ENUM_EXPERT_JOB_TYPE,
   std::map<unsigned short, std::vector<APSystem::CActionPointEx,
   std::allocator<APSystem::CActionPointEx> >, std::less<unsigned short>,
   std::allocator<std::pair<unsigned short const, std::vector<APSystem::CActionPointEx,
   std::allocator<APSystem::CActionPointEx> > > > > const&) */

void APSystem::CActionPointManager::SetTodayAction
               (CActionPointManager *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  tm local_8c;
  vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
  local_60 [12];
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_54 [4];
  time_t local_50;
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  local_4c [4];
  CActionPointEx *local_48;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
  local_44 [4];
  int local_40;
  int local_3c;
  vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> *local_38;
  int local_34;
  char local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  Reset(param_1);
  *(undefined4 *)(param_1 + 8) = param_3;
  local_50 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_50,&local_8c);
  local_40 = local_8c.tm_wday;
  std::
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  ::begin(local_54);
  local_3c = 0;
  do {
    if (local_3c < 300) {
      std::
      map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
      ::end(local_4c);
      cVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
              ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
                            *)local_54,(_Rb_tree_const_iterator *)local_4c);
      if (cVar2 == '\0') goto LAB_08121aee;
      bVar1 = true;
    }
    else {
LAB_08121aee:
      bVar1 = false;
    }
    if (!bVar1) {
      *param_1 = (CActionPointManager)0x1;
      return;
    }
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
                          *)local_54);
    local_38 = (vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>> *)
               (iVar3 + 4);
    local_34 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::size
                         (local_38);
    if (local_34 != 0) {
      local_2e = '\0';
      local_2d = '\0';
      iVar3 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
              operator[](local_38,0);
      if (*(int *)(iVar3 + 0x20) != 7) {
        local_2e = '\x01';
      }
      iVar3 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
              operator[](local_38,0);
      if (*(char *)(iVar3 + 0xf) != '\0') {
        local_2d = '\x01';
      }
      std::vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>::
      vector(local_60);
      for (local_1c = 0; (int)local_1c < local_34; local_1c = local_1c + 1) {
        local_48 = (CActionPointEx *)
                   std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                   operator[](local_38,local_1c);
                    /* try { // try from 08121735 to 081219bf has its CatchHandler @ 08121a69 */
        std::vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
        ::push_back(local_60,&local_48);
      }
      local_2c = 0;
      for (local_18 = 0; (int)local_18 < local_34; local_18 = local_18 + 1) {
        piVar4 = (int *)std::
                        vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                        ::operator[](local_60,local_18);
        if (*piVar4 != 0) {
          if (local_2e != '\0') {
            if (_gmWeekday != '\0') {
              local_40 = DAT_09370090;
            }
            piVar4 = (int *)std::
                            vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                            ::operator[](local_60,local_18);
            if (*(int *)(*piVar4 + 0x20) != local_40) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
              goto LAB_08121991;
            }
          }
          if (local_2d != '\0') {
            iVar3 = std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                    operator[](local_38,local_18);
            if ((param_2 < (int)(uint)*(byte *)(iVar3 + 0xf)) ||
               (iVar3 = std::
                        vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>::
                        operator[](local_38,local_18), (int)(uint)*(byte *)(iVar3 + 0x10) < param_2)
               ) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
              goto LAB_08121991;
            }
          }
          piVar4 = (int *)std::
                          vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                          ::operator[](local_60,local_18);
          local_14 = *(int *)(*piVar4 + 2);
          if ((((local_14 == 0x1d) || (local_14 == 0x1e)) || (local_14 == 0x1f)) ||
             ((local_14 == 0x2d || (local_14 == 0x20)))) {
            if ((local_14 == 0x1d) && (param_4 != 2)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x1e) && (param_4 != 4)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x1f) && (param_4 != 1)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x20) && (param_4 != 3)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            else if ((local_14 == 0x2d) && (param_4 != 3)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_18);
              *puVar5 = 0;
            }
            piVar4 = (int *)std::
                            vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                            ::operator[](local_60,local_18);
            if (*piVar4 == 0) goto LAB_08121991;
          }
          if ((local_14 == 0x22) && (param_4 != 0)) {
            puVar5 = (undefined4 *)
                     std::
                     vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                     ::operator[](local_60,local_18);
            *puVar5 = 0;
          }
          else {
            local_2c = local_2c + 1;
          }
        }
LAB_08121991:
      }
      if (local_2c == 0) {
        local_3c = local_3c + -1;
      }
      else {
        local_28 = DNFFLib::get_rand_int(local_2c);
        local_24 = 0;
        local_20 = (void *)0x0;
        for (local_10 = 0; (int)local_10 < local_34; local_10 = local_10 + 1) {
          piVar4 = (int *)std::
                          vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                          ::operator[](local_60,local_10);
          if (*piVar4 != 0) {
            if (local_24 == local_28) {
              puVar5 = (undefined4 *)
                       std::
                       vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>
                       ::operator[](local_60,local_10);
              local_20 = (void *)*puVar5;
              break;
            }
            local_24 = local_24 + 1;
          }
        }
        if (local_20 == (void *)0x0) {
          local_3c = local_3c + -1;
        }
        else {
          memcpy(param_1 + local_3c * 0xb + 0x15,local_20,0xb);
        }
      }
      std::vector<APSystem::CActionPointEx_const*,std::allocator<APSystem::CActionPointEx_const*>>::
      ~vector(local_60);
    }
    local_3c = local_3c + 1;
    std::
    _Rb_tree_const_iterator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>
    ::operator++(local_44,(int)local_54);
  } while( true );
}
```
