# _processBonusItem

`_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE`

`ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, ARAD::PurcahseBonus const&)`

| 类 | 地址 |
|---|---|
| `ARAD::CeraShopPurcahseCountBonus` | `0x081ac13e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ac13e  _ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE
#           ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, ARAD::PurcahseBonus const&)
# range [0x081ac13e, 0x081ac6b3]
081ac13e +0x000:  push   %ebp
081ac13f +0x001:  mov    %esp,%ebp
081ac141 +0x003:  push   %edi
081ac142 +0x004:  push   %esi
081ac143 +0x005:  push   %ebx
081ac144 +0x006:  sub    $0x12c,%esp
081ac14a +0x00c:  cmpl   $0x0,0xc(%ebp)
081ac14e +0x010:  je     081ac6a8 <+0x56a>
081ac154 +0x016:  mov    0x14(%ebp),%eax
081ac157 +0x019:  mov    0x4(%eax),%eax
081ac15a +0x01c:  cmp    $0x1,%eax
081ac15d +0x01f:  je     081ac16d <+0x2f>
081ac15f +0x021:  cmp    $0x5,%eax
081ac162 +0x024:  je     081ac258 <+0x11a>
081ac168 +0x02a:  jmp    081ac395 <+0x257>
081ac16d +0x02f:  mov    0xc(%ebp),%eax
081ac170 +0x032:  mov    %eax,(%esp)
081ac173 +0x035:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ac178 +0x03a:  mov    %eax,(%esp)
081ac17b +0x03d:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
081ac180 +0x042:  mov    0x14(%ebp),%edx
081ac183 +0x045:  movzwl 0x8(%edx),%edx
081ac187 +0x049:  movzwl %dx,%edx
081ac18a +0x04c:  lea    (%eax,%edx,1),%ebx
081ac18d +0x04f:  mov    0xc(%ebp),%eax
081ac190 +0x052:  mov    %eax,(%esp)
081ac193 +0x055:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081ac198 +0x05a:  mov    %ebx,0x4(%esp)
081ac19c +0x05e:  mov    %eax,(%esp)
081ac19f +0x061:  call   081ac73a <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x46>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x46
081ac1a4 +0x066:  mov    0x14(%ebp),%eax
081ac1a7 +0x069:  movzwl 0x8(%eax),%eax
081ac1ab +0x06d:  movzwl %ax,%ebx
081ac1ae +0x070:  mov    0xc(%ebp),%eax
081ac1b1 +0x073:  mov    %eax,(%esp)
081ac1b4 +0x076:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ac1b9 +0x07b:  mov    %eax,(%esp)
081ac1bc +0x07e:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
081ac1c1 +0x083:  mov    0xc(%ebp),%edx
081ac1c4 +0x086:  add    $0x79700,%edx
081ac1ca +0x08c:  movl   $0x5,0xc(%esp)
081ac1d2 +0x094:  mov    %ebx,0x8(%esp)
081ac1d6 +0x098:  mov    %eax,0x4(%esp)
081ac1da +0x09c:  mov    %edx,(%esp)
081ac1dd +0x09f:  call   08683bf4 <_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason)
081ac1e2 +0x0a4:  mov    0xc(%ebp),%eax
081ac1e5 +0x0a7:  mov    %eax,(%esp)
081ac1e8 +0x0aa:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
081ac1ed +0x0af:  mov    0xc(%ebp),%eax
081ac1f0 +0x0b2:  mov    %eax,(%esp)
081ac1f3 +0x0b5:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
081ac1f8 +0x0ba:  mov    0x14(%ebp),%eax
081ac1fb +0x0bd:  movzwl 0x8(%eax),%eax
081ac1ff +0x0c1:  movzwl %ax,%esi
081ac202 +0x0c4:  mov    0xc(%ebp),%eax
081ac205 +0x0c7:  mov    %eax,(%esp)
081ac208 +0x0ca:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ac20d +0x0cf:  mov    %eax,%ebx
081ac20f +0x0d1:  movl   $0x0,0xc(%esp)
081ac217 +0x0d9:  movl   $0x45,0x8(%esp)
081ac21f +0x0e1:  movl   $&_ZZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusEE19__PRETTY_FUNCTION__,0x4(%esp)
081ac227 +0x0e9:  lea    -0x90(%ebp),%eax
081ac22d +0x0ef:  mov    %eax,(%esp)
081ac230 +0x0f2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ac235 +0x0f7:  mov    %esi,0xc(%esp)
081ac239 +0x0fb:  mov    %ebx,0x8(%esp)
081ac23d +0x0ff:  movl   $"[PURCAHSE BONUS] add coin (mid:%u, coin:%d)",0x4(%esp)
081ac245 +0x107:  lea    -0x90(%ebp),%eax
081ac24b +0x10d:  mov    %eax,(%esp)
081ac24e +0x110:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ac253 +0x115:  jmp    081ac6a9 <+0x56b>
081ac258 +0x11a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ac25d +0x11f:  mov    0x10(%ebp),%edx
081ac260 +0x122:  mov    %edx,0x4(%esp)
081ac264 +0x126:  mov    %eax,(%esp)
081ac267 +0x129:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
081ac26c +0x12e:  mov    %eax,-0x30(%ebp)
081ac26f +0x131:  cmpl   $0x0,-0x30(%ebp)
081ac273 +0x135:  jne    081ac2b7 <+0x179>
081ac275 +0x137:  movl   $0x0,0xc(%esp)
081ac27d +0x13f:  movl   $0x5f,0x8(%esp)
081ac285 +0x147:  movl   $&_ZZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusEE19__PRETTY_FUNCTION__,0x4(%esp)
081ac28d +0x14f:  lea    -0x80(%ebp),%eax
081ac290 +0x152:  mov    %eax,(%esp)
081ac293 +0x155:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ac298 +0x15a:  mov    0x10(%ebp),%eax
081ac29b +0x15d:  mov    %eax,0x8(%esp)
081ac29f +0x161:  movl   $"[PURCAHSE BONUS] goods is null (goods:%d)",0x4(%esp)
081ac2a7 +0x169:  lea    -0x80(%ebp),%eax
081ac2aa +0x16c:  mov    %eax,(%esp)
081ac2ad +0x16f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ac2b2 +0x174:  jmp    081ac6a9 <+0x56b>
081ac2b7 +0x179:  mov    -0x30(%ebp),%eax
081ac2ba +0x17c:  mov    %eax,(%esp)
081ac2bd +0x17f:  call   0817a024 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xa2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xa2
081ac2c2 +0x184:  mov    %eax,-0x2c(%ebp)
081ac2c5 +0x187:  fildl  -0x2c(%ebp)
081ac2c8 +0x18a:  mov    0x14(%ebp),%eax
081ac2cb +0x18d:  movzwl 0x8(%eax),%eax
081ac2cf +0x191:  movzwl %ax,%eax
081ac2d2 +0x194:  mov    %eax,-0xdc(%ebp)
081ac2d8 +0x19a:  fildl  -0xdc(%ebp)
081ac2de +0x1a0:  flds   ""
081ac2e4 +0x1a6:  fdivrp %st,%st(1)
081ac2e6 +0x1a8:  fmulp  %st,%st(1)
081ac2e8 +0x1aa:  fstpl  (%esp)
081ac2eb +0x1ad:  call   0807db70 <_init+0x468>
081ac2f0 +0x1b2:  fnstcw -0xde(%ebp)
081ac2f6 +0x1b8:  movzwl -0xde(%ebp),%eax
081ac2fd +0x1bf:  mov    $0xc,%ah
081ac2ff +0x1c1:  mov    %ax,-0xe0(%ebp)
081ac306 +0x1c8:  fldcw  -0xe0(%ebp)
081ac30c +0x1ce:  fistpl -0x28(%ebp)
081ac30f +0x1d1:  fldcw  -0xde(%ebp)
081ac315 +0x1d7:  movl   $0x5,0x8(%esp)
081ac31d +0x1df:  mov    -0x28(%ebp),%eax
081ac320 +0x1e2:  mov    %eax,0x4(%esp)
081ac324 +0x1e6:  mov    0xc(%ebp),%eax
081ac327 +0x1e9:  mov    %eax,(%esp)
081ac32a +0x1ec:  call   08650954 <_ZN5CUser10AddMileageEi14eCoinAddReason>  ; CUser::AddMileage(int, eCoinAddReason)
081ac32f +0x1f1:  movl   $0x0,0x4(%esp)
081ac337 +0x1f9:  mov    0xc(%ebp),%eax
081ac33a +0x1fc:  mov    %eax,(%esp)
081ac33d +0x1ff:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
081ac342 +0x204:  mov    0xc(%ebp),%eax
081ac345 +0x207:  mov    %eax,(%esp)
081ac348 +0x20a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ac34d +0x20f:  mov    %eax,%ebx
081ac34f +0x211:  movl   $0x0,0xc(%esp)
081ac357 +0x219:  movl   $0x67,0x8(%esp)
081ac35f +0x221:  movl   $&_ZZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusEE19__PRETTY_FUNCTION__,0x4(%esp)
081ac367 +0x229:  lea    -0x70(%ebp),%eax
081ac36a +0x22c:  mov    %eax,(%esp)
081ac36d +0x22f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ac372 +0x234:  mov    -0x28(%ebp),%eax
081ac375 +0x237:  mov    %eax,0xc(%esp)
081ac379 +0x23b:  mov    %ebx,0x8(%esp)
081ac37d +0x23f:  movl   $"[PURCAHSE BONUS] add mileage coupon (mid:%u, mileage:%d)",0x4(%esp)
081ac385 +0x247:  lea    -0x70(%ebp),%eax
081ac388 +0x24a:  mov    %eax,(%esp)
081ac38b +0x24d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ac390 +0x252:  jmp    081ac6a9 <+0x56b>
081ac395 +0x257:  mov    0x14(%ebp),%eax
081ac398 +0x25a:  mov    0x4(%eax),%eax
081ac39b +0x25d:  mov    %eax,%ebx
081ac39d +0x25f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ac3a2 +0x264:  mov    %ebx,0x4(%esp)
081ac3a6 +0x268:  mov    %eax,(%esp)
081ac3a9 +0x26b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081ac3ae +0x270:  mov    %eax,-0x24(%ebp)
081ac3b1 +0x273:  cmpl   $0x0,-0x24(%ebp)
081ac3b5 +0x277:  jne    081ac3fc <+0x2be>
081ac3b7 +0x279:  mov    0x14(%ebp),%eax
081ac3ba +0x27c:  mov    0x4(%eax),%ebx
081ac3bd +0x27f:  movl   $0x0,0xc(%esp)
081ac3c5 +0x287:  movl   $0x71,0x8(%esp)
081ac3cd +0x28f:  movl   $&_ZZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusEE19__PRETTY_FUNCTION__,0x4(%esp)
081ac3d5 +0x297:  lea    -0x60(%ebp),%eax
081ac3d8 +0x29a:  mov    %eax,(%esp)
081ac3db +0x29d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ac3e0 +0x2a2:  mov    %ebx,0x8(%esp)
081ac3e4 +0x2a6:  movl   $"[PURCAHSE BONUS] item is null (item:%u)",0x4(%esp)
081ac3ec +0x2ae:  lea    -0x60(%ebp),%eax
081ac3ef +0x2b1:  mov    %eax,(%esp)
081ac3f2 +0x2b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ac3f7 +0x2b9:  jmp    081ac6a9 <+0x56b>
081ac3fc +0x2be:  lea    -0xcd(%ebp),%eax
081ac402 +0x2c4:  mov    %eax,(%esp)
081ac405 +0x2c7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081ac40a +0x2cc:  mov    -0x24(%ebp),%eax
081ac40d +0x2cf:  mov    (%eax),%eax
081ac40f +0x2d1:  add    $0x8,%eax
081ac412 +0x2d4:  mov    (%eax),%edx
081ac414 +0x2d6:  lea    -0xcd(%ebp),%eax
081ac41a +0x2dc:  mov    %eax,0x4(%esp)
081ac41e +0x2e0:  mov    -0x24(%ebp),%eax
081ac421 +0x2e3:  mov    %eax,(%esp)
081ac424 +0x2e6:  call   *%edx
081ac426 +0x2e8:  mov    0x14(%ebp),%eax
081ac429 +0x2eb:  mov    0x4(%eax),%eax
081ac42c +0x2ee:  mov    %eax,-0xcb(%ebp)
081ac432 +0x2f4:  mov    0x14(%ebp),%eax
081ac435 +0x2f7:  movzwl 0x8(%eax),%eax
081ac439 +0x2fb:  movzwl %ax,%eax
081ac43c +0x2fe:  mov    %eax,-0xc6(%ebp)
081ac442 +0x304:  mov    -0x24(%ebp),%eax
081ac445 +0x307:  mov    (%eax),%eax
081ac447 +0x309:  add    $0x14,%eax
081ac44a +0x30c:  mov    (%eax),%edx
081ac44c +0x30e:  mov    -0x24(%ebp),%eax
081ac44f +0x311:  mov    %eax,(%esp)
081ac452 +0x314:  call   *%edx
081ac454 +0x316:  test   %al,%al
081ac456 +0x318:  jne    081ac46e <+0x330>
081ac458 +0x31a:  mov    -0x24(%ebp),%eax
081ac45b +0x31d:  mov    (%eax),%eax
081ac45d +0x31f:  add    $0x10,%eax
081ac460 +0x322:  mov    (%eax),%edx
081ac462 +0x324:  mov    -0x24(%ebp),%eax
081ac465 +0x327:  mov    %eax,(%esp)
081ac468 +0x32a:  call   *%edx
081ac46a +0x32c:  test   %al,%al
081ac46c +0x32e:  je     081ac475 <+0x337>
081ac46e +0x330:  mov    $0x1,%eax
081ac473 +0x335:  jmp    081ac47a <+0x33c>
081ac475 +0x337:  mov    $0x0,%eax
081ac47a +0x33c:  test   %al,%al
081ac47c +0x33e:  je     081ac4d4 <+0x396>
081ac47e +0x340:  mov    0x14(%ebp),%eax
081ac481 +0x343:  mov    0x4(%eax),%esi
081ac484 +0x346:  mov    0xc(%ebp),%eax
081ac487 +0x349:  mov    %eax,(%esp)
081ac48a +0x34c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ac48f +0x351:  mov    %eax,%ebx
081ac491 +0x353:  movl   $0x0,0xc(%esp)
081ac499 +0x35b:  movl   $0x7c,0x8(%esp)
081ac4a1 +0x363:  movl   $&_ZZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusEE19__PRETTY_FUNCTION__,0x4(%esp)
081ac4a9 +0x36b:  lea    -0x50(%ebp),%eax
081ac4ac +0x36e:  mov    %eax,(%esp)
081ac4af +0x371:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ac4b4 +0x376:  mov    %esi,0xc(%esp)
081ac4b8 +0x37a:  mov    %ebx,0x8(%esp)
081ac4bc +0x37e:  movl   $"[PURCAHSE BONUS] invalid item type (mid:%u, item:%u)",0x4(%esp)
081ac4c4 +0x386:  lea    -0x50(%ebp),%eax
081ac4c7 +0x389:  mov    %eax,(%esp)
081ac4ca +0x38c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ac4cf +0x391:  jmp    081ac6a9 <+0x56b>
081ac4d4 +0x396:  mov    0xc(%ebp),%eax
081ac4d7 +0x399:  mov    %eax,(%esp)
081ac4da +0x39c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081ac4df +0x3a1:  movl   $0x0,0x4c(%esp)
081ac4e7 +0x3a9:  movl   $0x1,0x48(%esp)
081ac4ef +0x3b1:  movl   $0x1f,0x44(%esp)
081ac4f7 +0x3b9:  mov    -0xcd(%ebp),%edx
081ac4fd +0x3bf:  mov    %edx,0x4(%esp)
081ac501 +0x3c3:  mov    -0xc9(%ebp),%edx
081ac507 +0x3c9:  mov    %edx,0x8(%esp)
081ac50b +0x3cd:  mov    -0xc5(%ebp),%edx
081ac511 +0x3d3:  mov    %edx,0xc(%esp)
081ac515 +0x3d7:  mov    -0xc1(%ebp),%edx
081ac51b +0x3dd:  mov    %edx,0x10(%esp)
081ac51f +0x3e1:  mov    -0xbd(%ebp),%edx
081ac525 +0x3e7:  mov    %edx,0x14(%esp)
081ac529 +0x3eb:  mov    -0xb9(%ebp),%edx
081ac52f +0x3f1:  mov    %edx,0x18(%esp)
081ac533 +0x3f5:  mov    -0xb5(%ebp),%edx
081ac539 +0x3fb:  mov    %edx,0x1c(%esp)
081ac53d +0x3ff:  mov    -0xb1(%ebp),%edx
081ac543 +0x405:  mov    %edx,0x20(%esp)
081ac547 +0x409:  mov    -0xad(%ebp),%edx
081ac54d +0x40f:  mov    %edx,0x24(%esp)
081ac551 +0x413:  mov    -0xa9(%ebp),%edx
081ac557 +0x419:  mov    %edx,0x28(%esp)
081ac55b +0x41d:  mov    -0xa5(%ebp),%edx
081ac561 +0x423:  mov    %edx,0x2c(%esp)
081ac565 +0x427:  mov    -0xa1(%ebp),%edx
081ac56b +0x42d:  mov    %edx,0x30(%esp)
081ac56f +0x431:  mov    -0x9d(%ebp),%edx
081ac575 +0x437:  mov    %edx,0x34(%esp)
081ac579 +0x43b:  mov    -0x99(%ebp),%edx
081ac57f +0x441:  mov    %edx,0x38(%esp)
081ac583 +0x445:  mov    -0x95(%ebp),%edx
081ac589 +0x44b:  mov    %edx,0x3c(%esp)
081ac58d +0x44f:  movzbl -0x91(%ebp),%edx
081ac594 +0x456:  mov    %dl,0x40(%esp)
081ac598 +0x45a:  mov    %eax,(%esp)
081ac59b +0x45d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081ac5a0 +0x462:  mov    %eax,-0x20(%ebp)
081ac5a3 +0x465:  cmpl   $0xffffffff,-0x20(%ebp)
081ac5a7 +0x469:  je     081ac5d8 <+0x49a>
081ac5a9 +0x46b:  mov    -0x20(%ebp),%eax
081ac5ac +0x46e:  mov    %eax,0xc(%esp)
081ac5b0 +0x472:  movl   $0x0,0x8(%esp)
081ac5b8 +0x47a:  movl   $0x1,0x4(%esp)
081ac5c0 +0x482:  mov    0xc(%ebp),%eax
081ac5c3 +0x485:  mov    %eax,(%esp)
081ac5c6 +0x488:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081ac5cb +0x48d:  mov    0xc(%ebp),%eax
081ac5ce +0x490:  mov    %eax,(%esp)
081ac5d1 +0x493:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
081ac5d6 +0x498:  jmp    081ac64b <+0x50d>
081ac5d8 +0x49a:  movl   $0x0,0xc(%esp)
081ac5e0 +0x4a2:  movl   $"game_server_msg_104",0x8(%esp)
081ac5e8 +0x4aa:  movl   $0x4,0x4(%esp)
081ac5f0 +0x4b2:  movl   $&g_scriptStringManager_,(%esp)
081ac5f7 +0x4b9:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081ac5fc +0x4be:  mov    %eax,-0x1c(%ebp)
081ac5ff +0x4c1:  mov    -0x1c(%ebp),%eax
081ac602 +0x4c4:  mov    %eax,(%esp)
081ac605 +0x4c7:  call   0807e3b0 <_init+0xca8>
081ac60a +0x4cc:  mov    %eax,%ebx
081ac60c +0x4ce:  mov    0xc(%ebp),%eax
081ac60f +0x4d1:  mov    %eax,(%esp)
081ac612 +0x4d4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081ac617 +0x4d9:  mov    %ebx,0x18(%esp)
081ac61b +0x4dd:  mov    -0x1c(%ebp),%edx
081ac61e +0x4e0:  mov    %edx,0x14(%esp)
081ac622 +0x4e4:  movl   $0x1,0x10(%esp)
081ac62a +0x4ec:  mov    %eax,0xc(%esp)
081ac62e +0x4f0:  movl   $0x0,0x8(%esp)
081ac636 +0x4f8:  lea    -0xcd(%ebp),%eax
081ac63c +0x4fe:  mov    %eax,0x4(%esp)
081ac640 +0x502:  mov    0xc(%ebp),%eax
081ac643 +0x505:  mov    %eax,(%esp)
081ac646 +0x508:  call   08555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
081ac64b +0x50d:  mov    -0xc6(%ebp),%edi
081ac651 +0x513:  mov    -0xcb(%ebp),%esi
081ac657 +0x519:  mov    0xc(%ebp),%eax
081ac65a +0x51c:  mov    %eax,(%esp)
081ac65d +0x51f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ac662 +0x524:  mov    %eax,%ebx
081ac664 +0x526:  movl   $0x0,0xc(%esp)
081ac66c +0x52e:  movl   $0x96,0x8(%esp)
081ac674 +0x536:  movl   $&_ZZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusEE19__PRETTY_FUNCTION__,0x4(%esp)
081ac67c +0x53e:  lea    -0x40(%ebp),%eax
081ac67f +0x541:  mov    %eax,(%esp)
081ac682 +0x544:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ac687 +0x549:  mov    %edi,0x10(%esp)
081ac68b +0x54d:  mov    %esi,0xc(%esp)
081ac68f +0x551:  mov    %ebx,0x8(%esp)
081ac693 +0x555:  movl   $"[PURCAHSE BONUS] add item. (mid:%u, item:%u, count:%d)",0x4(%esp)
081ac69b +0x55d:  lea    -0x40(%ebp),%eax
081ac69e +0x560:  mov    %eax,(%esp)
081ac6a1 +0x563:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ac6a6 +0x568:  jmp    081ac6a9 <+0x56b>
081ac6a8 +0x56a:  nop
081ac6a9 +0x56b:  add    $0x12c,%esp
081ac6af +0x571:  pop    %ebx
081ac6b0 +0x572:  pop    %esi
081ac6b1 +0x573:  pop    %edi
081ac6b2 +0x574:  pop    %ebp
081ac6b3 +0x575:  ret
```

## 反编译 C

```c
// ARAD::CeraShopPurcahseCountBonus::_processBonusItem @ 0x81ac13e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, ARAD::PurcahseBonus const&) */

void __thiscall
ARAD::CeraShopPurcahseCountBonus::_processBonusItem
          (CeraShopPurcahseCountBonus *this,CUser *param_1,int param_2,PurcahseBonus *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  CInventory *pCVar5;
  int iVar6;
  CDataManager *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  uint uVar10;
  double dVar11;
  undefined2 local_d1;
  undefined2 uStack_cf;
  undefined2 uStack_cd;
  undefined1 uStack_cb;
  uint uStack_ca;
  undefined1 uStack_c6;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined1 local_95;
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CCeraShopGoods *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  char *local_20;
  
  if (param_1 == (CUser *)0x0) {
    return;
  }
  if (*(int *)(param_3 + 4) == 1) {
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::GetPayCoin(pCVar5);
    uVar1 = *(ushort *)(param_3 + 8);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetPayCoin(pCVar5,iVar6 + (uint)uVar1);
    uVar2 = *(undefined2 *)(param_3 + 8);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar8 = CInventory::GetPayCoin(pCVar5);
    cUserHistoryLog::PayCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar8,uVar2,5);
    CUser::SaveMoneyCoin(param_1);
    CUser::SendCoin(param_1);
    uVar1 = *(ushort *)(param_3 + 8);
    uVar8 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_94,
                       "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                       ,0x45,0);
    cMyTrace::operator()(local_94,"[PURCAHSE BONUS] add coin (mid:%u, coin:%d)",uVar8,(uint)uVar1);
    return;
  }
  if (*(int *)(param_3 + 4) == 5) {
    iVar6 = G_CDataManager();
    local_34 = (CCeraShopGoods *)CDataManager::FindGoods(iVar6);
    if (local_34 == (CCeraShopGoods *)0x0) {
      cMyTrace::cMyTrace(local_84,
                         "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                         ,0x5f,0);
      cMyTrace::operator()(local_84,"[PURCAHSE BONUS] goods is null (goods:%d)",param_2);
      return;
    }
    local_30 = CCeraShopGoods::GetCeraPrice(local_34);
    dVar11 = floor((double)(((float)*(ushort *)(param_3 + 8) / _DAT_08bb2aa4) * (float)local_30));
    local_2c = (int)ROUND(dVar11);
    CUser::AddMileage(param_1,local_2c,5);
    CUser::SendCashData(param_1,false);
    uVar8 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_74,
                       "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                       ,0x67,0);
    cMyTrace::operator()
              (local_74,"[PURCAHSE BONUS] add mileage coupon (mid:%u, mileage:%d)",uVar8,local_2c);
    return;
  }
  iVar6 = *(int *)(param_3 + 4);
  this_00 = (CDataManager *)G_CDataManager();
  local_28 = (int *)CDataManager::find_item(this_00,iVar6);
  if (local_28 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_d1);
    (**(code **)(*local_28 + 8))(local_28);
    uStack_cf = (undefined2)*(undefined4 *)(param_3 + 4);
    uStack_cd = (undefined2)((uint)*(undefined4 *)(param_3 + 4) >> 0x10);
    uStack_ca = (uint)*(ushort *)(param_3 + 8);
    cVar4 = (**(code **)(*local_28 + 0x14))(local_28);
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(*local_28 + 0x10))(local_28), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = *(undefined4 *)(param_3 + 4);
      uVar7 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_54,
                         "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                         ,0x7c,0);
      cMyTrace::operator()
                (local_54,"[PURCAHSE BONUS] invalid item type (mid:%u, item:%u)",uVar7,uVar8);
    }
    else {
      uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_24 = CInventory::insertItemIntoInventory
                           (uVar8,CONCAT22(uStack_cf,local_d1),
                            CONCAT13((undefined1)uStack_ca,CONCAT12(uStack_cb,uStack_cd)),
                            CONCAT13(uStack_c6,uStack_ca._1_3_),local_c5,local_c1,local_bd,local_b9,
                            local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d,local_99,
                            local_95,0x1f,1,0);
      if (local_24 == -1) {
        local_20 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_104",(bool *)0x0);
        sVar9 = strlen(local_20);
        uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewMail
                  (param_1,(Inven_Item *)&local_d1,0,uVar10,true,local_20,sVar9);
      }
      else {
        CUser::SendUpdateItemList(param_1,1,0,local_24);
        CUser::SaveInventory(param_1);
      }
      uVar10 = uStack_ca;
      uVar8 = CONCAT22(uStack_cd,uStack_cf);
      uVar7 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_44,
                         "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                         ,0x96,0);
      cMyTrace::operator()
                (local_44,"[PURCAHSE BONUS] add item. (mid:%u, item:%u, count:%d)",uVar7,uVar8,
                 uVar10);
    }
    return;
  }
  uVar8 = *(undefined4 *)(param_3 + 4);
  cMyTrace::cMyTrace(local_64,
                     "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                     ,0x71,0);
  cMyTrace::operator()(local_64,"[PURCAHSE BONUS] item is null (item:%u)",uVar8);
  return;
}
```
