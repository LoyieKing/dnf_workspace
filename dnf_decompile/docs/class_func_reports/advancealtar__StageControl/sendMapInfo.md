# sendMapInfo

`_ZN12advancealtar12StageControl11sendMapInfoEv`

`advancealtar::StageControl::sendMapInfo()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x081301e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081301e0  _ZN12advancealtar12StageControl11sendMapInfoEv
#           advancealtar::StageControl::sendMapInfo()
# range [0x081301e0, 0x081305f5]
081301e0 +0x000:  push   %ebp
081301e1 +0x001:  mov    %esp,%ebp
081301e3 +0x003:  push   %esi
081301e4 +0x004:  push   %ebx
081301e5 +0x005:  sub    $0x90,%esp
081301eb +0x00b:  mov    0x8(%ebp),%eax
081301ee +0x00e:  add    $0x98,%eax
081301f3 +0x013:  mov    %eax,(%esp)
081301f6 +0x016:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
081301fb +0x01b:  mov    %eax,-0x2c(%ebp)
081301fe +0x01e:  cmpl   $0x0,-0x2c(%ebp)
08130202 +0x022:  je     081305e5 <+0x405>
08130208 +0x028:  mov    0x8(%ebp),%eax
0813020b +0x02b:  add    $0x4,%eax
0813020e +0x02e:  mov    %eax,(%esp)
08130211 +0x031:  call   08134860 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x467>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x467
08130216 +0x036:  mov    %eax,-0x28(%ebp)
08130219 +0x039:  cmpl   $0x0,-0x28(%ebp)
0813021d +0x03d:  je     081305e8 <+0x408>
08130223 +0x043:  lea    -0x58(%ebp),%eax
08130226 +0x046:  mov    %eax,(%esp)
08130229 +0x049:  call   081346fc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x303>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x303
0813022e +0x04e:  mov    0x8(%ebp),%eax
08130231 +0x051:  add    $0x4,%eax
08130234 +0x054:  mov    %eax,(%esp)
08130237 +0x057:  call   08134852 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x459>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x459
0813023c +0x05c:  mov    %eax,-0x24(%ebp)
0813023f +0x05f:  cmpl   $0x0,-0x24(%ebp)
08130243 +0x063:  je     081305eb <+0x40b>
08130249 +0x069:  mov    0x8(%ebp),%eax
0813024c +0x06c:  add    $0x4,%eax
0813024f +0x06f:  mov    %eax,(%esp)
08130252 +0x072:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
08130257 +0x077:  mov    %eax,-0x58(%ebp)
0813025a +0x07a:  mov    0x8(%ebp),%eax
0813025d +0x07d:  add    $0x4,%eax
08130260 +0x080:  mov    %eax,(%esp)
08130263 +0x083:  call   08134878 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x47f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x47f
08130268 +0x088:  mov    %eax,-0x54(%ebp)
0813026b +0x08b:  mov    -0x28(%ebp),%eax
0813026e +0x08e:  mov    %eax,(%esp)
08130271 +0x091:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
08130276 +0x096:  mov    %eax,-0x50(%ebp)
08130279 +0x099:  mov    -0x24(%ebp),%eax
0813027c +0x09c:  mov    0xc(%eax),%eax
0813027f +0x09f:  mov    %eax,-0x4c(%ebp)
08130282 +0x0a2:  mov    0x8(%ebp),%eax
08130285 +0x0a5:  add    $0x4,%eax
08130288 +0x0a8:  mov    %eax,(%esp)
0813028b +0x0ab:  call   08134894 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x49b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x49b
08130290 +0x0b0:  mov    %eax,-0x48(%ebp)
08130293 +0x0b3:  lea    -0x64(%ebp),%eax
08130296 +0x0b6:  mov    %eax,(%esp)
08130299 +0x0b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0813029e +0x0be:  movl   $0x20a,0x8(%esp)
081302a6 +0x0c6:  movl   $0x0,0x4(%esp)
081302ae +0x0ce:  lea    -0x64(%ebp),%eax
081302b1 +0x0d1:  mov    %eax,(%esp)
081302b4 +0x0d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081302b9 +0x0d9:  lea    -0x58(%ebp),%eax
081302bc +0x0dc:  movl   $0x14,0x8(%esp)
081302c4 +0x0e4:  mov    %eax,0x4(%esp)
081302c8 +0x0e8:  lea    -0x64(%ebp),%eax
081302cb +0x0eb:  mov    %eax,(%esp)
081302ce +0x0ee:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081302d3 +0x0f3:  mov    -0x24(%ebp),%eax
081302d6 +0x0f6:  add    $0x10,%eax
081302d9 +0x0f9:  mov    %eax,(%esp)
081302dc +0x0fc:  call   08135ca4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x18ab>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x18ab
081302e1 +0x101:  mov    %eax,0x4(%esp)
081302e5 +0x105:  lea    -0x64(%ebp),%eax
081302e8 +0x108:  mov    %eax,(%esp)
081302eb +0x10b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081302f0 +0x110:  mov    -0x24(%ebp),%eax
081302f3 +0x113:  lea    0x10(%eax),%edx
081302f6 +0x116:  lea    -0x68(%ebp),%eax
081302f9 +0x119:  mov    %edx,0x4(%esp)
081302fd +0x11d:  mov    %eax,(%esp)
08130300 +0x120:  call   08135cc6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x18cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x18cd
08130305 +0x125:  sub    $0x4,%esp
08130308 +0x128:  movl   $0x0,-0x20(%ebp)
0813030f +0x12f:  jmp    0813035a <+0x17a>
08130311 +0x131:  lea    -0x68(%ebp),%eax
08130314 +0x134:  mov    %eax,(%esp)
08130317 +0x137:  call   08135d7e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1985>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1985
0813031c +0x13c:  mov    %eax,-0x1c(%ebp)
0813031f +0x13f:  mov    -0x1c(%ebp),%eax
08130322 +0x142:  movl   $0xc,0x8(%esp)
0813032a +0x14a:  mov    %eax,0x4(%esp)
0813032e +0x14e:  lea    -0x64(%ebp),%eax
08130331 +0x151:  mov    %eax,(%esp)
08130334 +0x154:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08130339 +0x159:  lea    -0x40(%ebp),%eax
0813033c +0x15c:  movl   $0x0,0x8(%esp)
08130344 +0x164:  lea    -0x68(%ebp),%edx
08130347 +0x167:  mov    %edx,0x4(%esp)
0813034b +0x16b:  mov    %eax,(%esp)
0813034e +0x16e:  call   08135d4a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1951>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1951
08130353 +0x173:  sub    $0x4,%esp
08130356 +0x176:  addl   $0x1,-0x20(%ebp)
0813035a +0x17a:  mov    -0x24(%ebp),%eax
0813035d +0x17d:  lea    0x10(%eax),%edx
08130360 +0x180:  lea    -0x44(%ebp),%eax
08130363 +0x183:  mov    %edx,0x4(%esp)
08130367 +0x187:  mov    %eax,(%esp)
0813036a +0x18a:  call   08135cf2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x18f9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x18f9
0813036f +0x18f:  sub    $0x4,%esp
08130372 +0x192:  lea    -0x44(%ebp),%eax
08130375 +0x195:  mov    %eax,0x4(%esp)
08130379 +0x199:  lea    -0x68(%ebp),%eax
0813037c +0x19c:  mov    %eax,(%esp)
0813037f +0x19f:  call   08135d1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1925>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1925
08130384 +0x1a4:  test   %al,%al
08130386 +0x1a6:  jne    08130311 <+0x131>
08130388 +0x1a8:  mov    0x8(%ebp),%eax
0813038b +0x1ab:  add    $0x4,%eax
0813038e +0x1ae:  mov    %eax,(%esp)
08130391 +0x1b1:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
08130396 +0x1b6:  cmp    $0x1,%eax
08130399 +0x1b9:  jne    081303ad <+0x1cd>
0813039b +0x1bb:  mov    0x8(%ebp),%eax
0813039e +0x1be:  add    $0x4,%eax
081303a1 +0x1c1:  mov    %eax,(%esp)
081303a4 +0x1c4:  call   0812f70c <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv>  ; advancealtar::ProcStage::isSurvivalModeFirstRound() const
081303a9 +0x1c9:  test   %al,%al
081303ab +0x1cb:  je     081303b4 <+0x1d4>
081303ad +0x1cd:  mov    $0x1,%eax
081303b2 +0x1d2:  jmp    081303b9 <+0x1d9>
081303b4 +0x1d4:  mov    $0x0,%eax
081303b9 +0x1d9:  test   %al,%al
081303bb +0x1db:  je     08130570 <+0x390>
081303c1 +0x1e1:  lea    -0x3c(%ebp),%eax
081303c4 +0x1e4:  mov    -0x28(%ebp),%edx
081303c7 +0x1e7:  mov    %edx,0x4(%esp)
081303cb +0x1eb:  mov    %eax,(%esp)
081303ce +0x1ee:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
081303d3 +0x1f3:  sub    $0x4,%esp
081303d6 +0x1f6:  lea    -0x3c(%ebp),%eax
081303d9 +0x1f9:  mov    %eax,-0x18(%ebp)
081303dc +0x1fc:  mov    0x8(%ebp),%eax
081303df +0x1ff:  mov    %eax,(%esp)
081303e2 +0x202:  call   081307a6 <_ZNK12advancealtar12StageControl14getCenterCountEv>  ; advancealtar::StageControl::getCenterCount() const
081303e7 +0x207:  mov    %eax,-0x14(%ebp)
081303ea +0x20a:  mov    -0x14(%ebp),%eax
081303ed +0x20d:  mov    %eax,0x4(%esp)
081303f1 +0x211:  lea    -0x64(%ebp),%eax
081303f4 +0x214:  mov    %eax,(%esp)
081303f7 +0x217:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081303fc +0x21c:  lea    -0x6c(%ebp),%eax
081303ff +0x21f:  mov    -0x18(%ebp),%edx
08130402 +0x222:  mov    %edx,0x4(%esp)
08130406 +0x226:  mov    %eax,(%esp)
08130409 +0x229:  call   08135d88 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x198f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x198f
0813040e +0x22e:  sub    $0x4,%esp
08130411 +0x231:  jmp    0813051d <+0x33d>
08130416 +0x236:  lea    -0x79(%ebp),%eax
08130419 +0x239:  mov    %eax,(%esp)
0813041c +0x23c:  call   0813442e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x35>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x35
08130421 +0x241:  lea    -0x6c(%ebp),%eax
08130424 +0x244:  mov    %eax,(%esp)
08130427 +0x247:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
0813042c +0x24c:  mov    0x2c(%eax),%eax
0813042f +0x24f:  mov    %eax,-0x79(%ebp)
08130432 +0x252:  movw   $0x0,-0x75(%ebp)
08130438 +0x258:  movl   $0x0,-0x80(%ebp)
0813043f +0x25f:  movl   $0x0,-0x84(%ebp)
08130449 +0x269:  lea    -0x6c(%ebp),%eax
0813044c +0x26c:  mov    %eax,(%esp)
0813044f +0x26f:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
08130454 +0x274:  mov    (%eax),%eax
08130456 +0x276:  mov    -0x2c(%ebp),%edx
08130459 +0x279:  lea    0x8df60(%edx),%ecx
0813045f +0x27f:  lea    -0x84(%ebp),%edx
08130465 +0x285:  mov    %edx,0xc(%esp)
08130469 +0x289:  lea    -0x80(%ebp),%edx
0813046c +0x28c:  mov    %edx,0x8(%esp)
08130470 +0x290:  mov    %eax,0x4(%esp)
08130474 +0x294:  mov    %ecx,(%esp)
08130477 +0x297:  call   081328ea <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_>  ; advancealtar::CharacAdvanceAltarManager::getTowerInfo(int, int&, int&) const
0813047c +0x29c:  mov    %al,-0xd(%ebp)
0813047f +0x29f:  movzbl -0xd(%ebp),%eax
08130483 +0x2a3:  xor    $0x1,%eax
08130486 +0x2a6:  test   %al,%al
08130488 +0x2a8:  jne    081304ff <+0x31f>
0813048a +0x2aa:  mov    -0x80(%ebp),%eax
0813048d +0x2ad:  mov    %ax,-0x73(%ebp)
08130491 +0x2b1:  mov    -0x84(%ebp),%eax
08130497 +0x2b7:  mov    %al,-0x71(%ebp)
0813049a +0x2ba:  lea    -0x6c(%ebp),%eax
0813049d +0x2bd:  mov    %eax,(%esp)
081304a0 +0x2c0:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
081304a5 +0x2c5:  mov    0x18(%eax),%eax
081304a8 +0x2c8:  mov    %al,-0x70(%ebp)
081304ab +0x2cb:  lea    -0x6c(%ebp),%eax
081304ae +0x2ce:  mov    %eax,(%esp)
081304b1 +0x2d1:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
081304b6 +0x2d6:  mov    0x20(%eax),%eax
081304b9 +0x2d9:  mov    %al,-0x6f(%ebp)
081304bc +0x2dc:  lea    -0x6c(%ebp),%eax
081304bf +0x2df:  mov    %eax,(%esp)
081304c2 +0x2e2:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
081304c7 +0x2e7:  movzbl 0x1c(%eax),%eax
081304cb +0x2eb:  mov    %al,-0x6e(%ebp)
081304ce +0x2ee:  mov    0x8(%ebp),%eax
081304d1 +0x2f1:  lea    0x4(%eax),%edx
081304d4 +0x2f4:  lea    -0x79(%ebp),%eax
081304d7 +0x2f7:  mov    %eax,0x4(%esp)
081304db +0x2fb:  mov    %edx,(%esp)
081304de +0x2fe:  call   0812e16e <_ZN12advancealtar9ProcStage20addCreatedMapMonsterERNS_18_MapMonsterSummaryE>  ; advancealtar::ProcStage::addCreatedMapMonster(advancealtar::_MapMonsterSummary&)
081304e3 +0x303:  lea    -0x79(%ebp),%eax
081304e6 +0x306:  movl   $0xd,0x8(%esp)
081304ee +0x30e:  mov    %eax,0x4(%esp)
081304f2 +0x312:  lea    -0x64(%ebp),%eax
081304f5 +0x315:  mov    %eax,(%esp)
081304f8 +0x318:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081304fd +0x31d:  jmp    08130500 <+0x320>
081304ff +0x31f:  nop
08130500 +0x320:  lea    -0x30(%ebp),%eax
08130503 +0x323:  movl   $0x0,0x8(%esp)
0813050b +0x32b:  lea    -0x6c(%ebp),%edx
0813050e +0x32e:  mov    %edx,0x4(%esp)
08130512 +0x332:  mov    %eax,(%esp)
08130515 +0x335:  call   08135de6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19ed>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19ed
0813051a +0x33a:  sub    $0x4,%esp
0813051d +0x33d:  lea    -0x34(%ebp),%eax
08130520 +0x340:  mov    -0x18(%ebp),%edx
08130523 +0x343:  mov    %edx,0x4(%esp)
08130527 +0x347:  mov    %eax,(%esp)
0813052a +0x34a:  call   08135dae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19b5
0813052f +0x34f:  sub    $0x4,%esp
08130532 +0x352:  lea    -0x34(%ebp),%eax
08130535 +0x355:  mov    %eax,0x4(%esp)
08130539 +0x359:  lea    -0x6c(%ebp),%eax
0813053c +0x35c:  mov    %eax,(%esp)
0813053f +0x35f:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
08130544 +0x364:  test   %al,%al
08130546 +0x366:  jne    08130416 <+0x236>
0813054c +0x36c:  jmp    08130563 <+0x383>
0813054e +0x36e:  mov    %edx,%ebx
08130550 +0x370:  mov    %eax,%esi
08130552 +0x372:  lea    -0x3c(%ebp),%eax
08130555 +0x375:  mov    %eax,(%esp)
08130558 +0x378:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0813055d +0x37d:  mov    %esi,%eax
0813055f +0x37f:  mov    %ebx,%edx
08130561 +0x381:  jmp    081305bd <+0x3dd>
08130563 +0x383:  lea    -0x3c(%ebp),%eax
08130566 +0x386:  mov    %eax,(%esp)
08130569 +0x389:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0813056e +0x38e:  jmp    08130589 <+0x3a9>
08130570 +0x390:  movl   $0x0,-0xc(%ebp)
08130577 +0x397:  mov    -0xc(%ebp),%eax
0813057a +0x39a:  mov    %eax,0x4(%esp)
0813057e +0x39e:  lea    -0x64(%ebp),%eax
08130581 +0x3a1:  mov    %eax,(%esp)
08130584 +0x3a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08130589 +0x3a9:  movl   $0x1,0x4(%esp)
08130591 +0x3b1:  lea    -0x64(%ebp),%eax
08130594 +0x3b4:  mov    %eax,(%esp)
08130597 +0x3b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0813059c +0x3bc:  mov    0x8(%ebp),%eax
0813059f +0x3bf:  add    $0x98,%eax
081305a4 +0x3c4:  mov    %eax,(%esp)
081305a7 +0x3c7:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
081305ac +0x3cc:  lea    -0x64(%ebp),%edx
081305af +0x3cf:  mov    %edx,0x4(%esp)
081305b3 +0x3d3:  mov    %eax,(%esp)
081305b6 +0x3d6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081305bb +0x3db:  jmp    081305d8 <+0x3f8>
081305bd +0x3dd:  mov    %edx,%ebx
081305bf +0x3df:  mov    %eax,%esi
081305c1 +0x3e1:  lea    -0x64(%ebp),%eax
081305c4 +0x3e4:  mov    %eax,(%esp)
081305c7 +0x3e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081305cc +0x3ec:  mov    %esi,%eax
081305ce +0x3ee:  mov    %ebx,%edx
081305d0 +0x3f0:  mov    %eax,(%esp)
081305d3 +0x3f3:  call   08ae3750 <_Unwind_Resume>
081305d8 +0x3f8:  lea    -0x64(%ebp),%eax
081305db +0x3fb:  mov    %eax,(%esp)
081305de +0x3fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081305e3 +0x403:  jmp    081305ec <+0x40c>
081305e5 +0x405:  nop
081305e6 +0x406:  jmp    081305ec <+0x40c>
081305e8 +0x408:  nop
081305e9 +0x409:  jmp    081305ec <+0x40c>
081305eb +0x40b:  nop
081305ec +0x40c:  lea    -0x8(%ebp),%esp
081305ef +0x40f:  add    $0x0,%esp
081305f2 +0x412:  pop    %ebx
081305f3 +0x413:  pop    %esi
081305f4 +0x414:  pop    %ebp
081305f5 +0x415:  ret
```

## 反编译 C

```c
// advancealtar::StageControl::sendMapInfo @ 0x81301e0

/* advancealtar::StageControl::sendMapInfo() */

void __thiscall advancealtar::StageControl::sendMapInfo(StageControl *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  CUser *this_00;
  int local_88 [2];
  undefined4 local_7d;
  undefined2 local_79;
  undefined2 local_77;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  _List_const_iterator<_mapMonster> local_70 [4];
  __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
  local_6c [4];
  PacketGuard local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  __normal_iterator local_48 [4];
  __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
  local_44 [4];
  list<_mapMonster,std::allocator<_mapMonster>> local_40 [8];
  _List_const_iterator local_38 [4];
  _List_const_iterator<_mapMonster> local_34 [4];
  int local_30;
  CMap *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  list<_mapMonster,std::allocator<_mapMonster>> *local_1c;
  int local_18;
  char local_11;
  undefined4 local_10;
  
  local_30 = CharacData::getUser((CharacData *)(this + 0x98));
  if ((local_30 != 0) &&
     (local_2c = (CMap *)ProcStage::getMap((ProcStage *)(this + 4)), local_2c != (CMap *)0x0)) {
    NOTIPacketStruct::_NotiAdvanceAltarMapInfo::_NotiAdvanceAltarMapInfo
              ((_NotiAdvanceAltarMapInfo *)&local_5c);
    local_28 = ProcStage::getTimeLine((ProcStage *)(this + 4));
    if (local_28 != 0) {
      local_5c = ProcStage::getStageType((ProcStage *)(this + 4));
      local_58 = ProcStage::getCurrentSurvivalRoundNo((ProcStage *)(this + 4));
      local_54 = CMap::get_index(local_2c);
      local_50 = *(undefined4 *)(local_28 + 0xc);
      local_4c = ProcStage::getMapBasisLevel((ProcStage *)(this + 4));
      PacketGuard::PacketGuard(local_68);
                    /* try { // try from 081302b4 to 081303d2 has its CatchHandler @ 081305bd */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,0,0x20a);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_68,(char *)&local_5c,0x14);
      iVar3 = std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::
              size((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>
                    *)(local_28 + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,iVar3);
      std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::begin();
      local_24 = 0;
      while( true ) {
        std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::end();
        bVar1 = __gnu_cxx::operator!=(local_6c,local_48);
        if (!bVar1) break;
        local_20 = (char *)__gnu_cxx::
                           __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
                           ::operator*(local_6c);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_68,local_20,0xc);
        __gnu_cxx::
        __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
        ::operator++(local_44,(int)local_6c);
        local_24 = local_24 + 1;
      }
      iVar3 = ProcStage::getStageType((ProcStage *)(this + 4));
      if ((iVar3 == 1) &&
         (cVar2 = ProcStage::isSurvivalModeFirstRound((ProcStage *)(this + 4)), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CMap::get_monster_list();
        local_1c = local_40;
                    /* try { // try from 081303e2 to 0813052e has its CatchHandler @ 0813054e */
        local_18 = getCenterCount(this);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,local_18);
        std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
        while( true ) {
          std::list<_mapMonster,std::allocator<_mapMonster>>::end();
          cVar2 = std::_List_const_iterator<_mapMonster>::operator!=(local_70,local_38);
          if (cVar2 == '\0') break;
          _MapMonsterSummary::_MapMonsterSummary((_MapMonsterSummary *)&local_7d);
          iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
          local_7d = *(undefined4 *)(iVar3 + 0x2c);
          local_79 = 0;
          local_88[1] = 0;
          local_88[0] = 0;
          piVar4 = (int *)std::_List_const_iterator<_mapMonster>::operator->(local_70);
          local_11 = CharacAdvanceAltarManager::getTowerInfo
                               ((CharacAdvanceAltarManager *)(local_30 + 0x8df60),*piVar4,
                                local_88 + 1,local_88);
          if (local_11 == '\x01') {
            local_77 = (undefined2)local_88[1];
            local_75 = (undefined1)local_88[0];
            iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
            local_74 = (undefined1)*(undefined4 *)(iVar3 + 0x18);
            iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
            local_73 = (undefined1)*(undefined4 *)(iVar3 + 0x20);
            iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
            local_72 = *(undefined1 *)(iVar3 + 0x1c);
            ProcStage::addCreatedMapMonster((ProcStage *)(this + 4),(_MapMonsterSummary *)&local_7d)
            ;
            InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_68,(char *)&local_7d,0xd);
          }
          std::_List_const_iterator<_mapMonster>::operator++(local_34,(int)local_70);
        }
                    /* try { // try from 08130569 to 081305ba has its CatchHandler @ 081305bd */
        std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_40);
      }
      else {
        local_10 = 0;
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,0);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
      this_00 = (CUser *)CharacData::getUser((CharacData *)(this + 0x98));
      CUser::Send(this_00,local_68);
      PacketGuard::~PacketGuard(local_68);
    }
  }
  return;
}
```
