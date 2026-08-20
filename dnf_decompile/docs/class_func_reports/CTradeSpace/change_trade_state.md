# change_trade_state

`_ZN11CTradeSpace18change_trade_stateEP5CUseri`

`CTradeSpace::change_trade_state(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852f134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852f134  _ZN11CTradeSpace18change_trade_stateEP5CUseri
#           CTradeSpace::change_trade_state(CUser*, int)
# range [0x0852f134, 0x0853020f]
0852f134 +0x0000:  push   %ebp
0852f135 +0x0001:  mov    %esp,%ebp
0852f137 +0x0003:  push   %edi
0852f138 +0x0004:  push   %esi
0852f139 +0x0005:  push   %ebx
0852f13a +0x0006:  sub    $0x13c,%esp
0852f140 +0x000c:  lea    -0xc0(%ebp),%eax
0852f146 +0x0012:  mov    %eax,(%esp)
0852f149 +0x0015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0852f14e +0x001a:  movl   $0x0,-0x74(%ebp)
0852f155 +0x0021:  mov    0x8(%ebp),%eax
0852f158 +0x0024:  mov    0x20(%eax),%eax
0852f15b +0x0027:  cmp    0xc(%ebp),%eax
0852f15e +0x002a:  jne    0852f179 <+0x45>
0852f160 +0x002c:  mov    0x8(%ebp),%eax
0852f163 +0x002f:  mov    0x24(%eax),%eax
0852f166 +0x0032:  mov    %eax,-0x74(%ebp)
0852f169 +0x0035:  movl   $0x1,-0x70(%ebp)
0852f170 +0x003c:  movl   $0x0,-0x6c(%ebp)
0852f177 +0x0043:  jmp    0852f190 <+0x5c>
0852f179 +0x0045:  mov    0x8(%ebp),%eax
0852f17c +0x0048:  mov    0x20(%eax),%eax
0852f17f +0x004b:  mov    %eax,-0x74(%ebp)
0852f182 +0x004e:  movl   $0x0,-0x70(%ebp)
0852f189 +0x0055:  movl   $0x1,-0x6c(%ebp)
0852f190 +0x005c:  cmpl   $0x0,-0x74(%ebp)
0852f194 +0x0060:  jne    0852f227 <+0xf3>
0852f19a +0x0066:  lea    -0xc0(%ebp),%eax
0852f1a0 +0x006c:  mov    %eax,(%esp)
0852f1a3 +0x006f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852f1a8 +0x0074:  movl   $0x1a,0x8(%esp)
0852f1b0 +0x007c:  movl   $0x1,0x4(%esp)
0852f1b8 +0x0084:  lea    -0xc0(%ebp),%eax
0852f1be +0x008a:  mov    %eax,(%esp)
0852f1c1 +0x008d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852f1c6 +0x0092:  movl   $0x0,0x4(%esp)
0852f1ce +0x009a:  lea    -0xc0(%ebp),%eax
0852f1d4 +0x00a0:  mov    %eax,(%esp)
0852f1d7 +0x00a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852f1dc +0x00a8:  movl   $0x1,0x4(%esp)
0852f1e4 +0x00b0:  lea    -0xc0(%ebp),%eax
0852f1ea +0x00b6:  mov    %eax,(%esp)
0852f1ed +0x00b9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852f1f2 +0x00be:  movl   $0x1,0x4(%esp)
0852f1fa +0x00c6:  lea    -0xc0(%ebp),%eax
0852f200 +0x00cc:  mov    %eax,(%esp)
0852f203 +0x00cf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852f208 +0x00d4:  lea    -0xc0(%ebp),%eax
0852f20e +0x00da:  mov    %eax,0x4(%esp)
0852f212 +0x00de:  mov    0xc(%ebp),%eax
0852f215 +0x00e1:  mov    %eax,(%esp)
0852f218 +0x00e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852f21d +0x00e9:  mov    $0x1,%ebx
0852f222 +0x00ee:  jmp    085301f4 <+0x10c0>
0852f227 +0x00f3:  cmpl   $0x4,0x10(%ebp)
0852f22b +0x00f7:  ja     08530193 <+0x105f>
0852f231 +0x00fd:  mov    0x10(%ebp),%eax
0852f234 +0x0100:  shl    $0x2,%eax
0852f237 +0x0103:  mov    &data#13654777(.rodata)(%eax),%eax
0852f23d +0x0109:  jmp    *%eax
0852f23f +0x010b:  mov    0x8(%ebp),%eax
0852f242 +0x010e:  mov    %eax,(%esp)
0852f245 +0x0111:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
0852f24a +0x0116:  test   %al,%al
0852f24c +0x0118:  je     0852f267 <+0x133>
0852f24e +0x011a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0852f253 +0x011f:  mov    0x8(%ebp),%edx
0852f256 +0x0122:  mov    %edx,0x4(%esp)
0852f25a +0x0126:  mov    %eax,(%esp)
0852f25d +0x0129:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
0852f262 +0x012e:  jmp    0852f2ea <+0x1b6>
0852f267 +0x0133:  mov    -0x74(%ebp),%eax
0852f26a +0x0136:  mov    %eax,(%esp)
0852f26d +0x0139:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852f272 +0x013e:  mov    %eax,%esi
0852f274 +0x0140:  mov    0xc(%ebp),%eax
0852f277 +0x0143:  mov    %eax,(%esp)
0852f27a +0x0146:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852f27f +0x014b:  mov    %eax,%ebx
0852f281 +0x014d:  movl   $0x5,0xc(%esp)
0852f289 +0x0155:  movl   $0x9db,0x8(%esp)
0852f291 +0x015d:  movl   $&_ZZN11CTradeSpace18change_trade_stateEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0852f299 +0x0165:  lea    -0xb4(%ebp),%eax
0852f29f +0x016b:  mov    %eax,(%esp)
0852f2a2 +0x016e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852f2a7 +0x0173:  mov    %esi,0xc(%esp)
0852f2ab +0x0177:  mov    %ebx,0x8(%esp)
0852f2af +0x017b:  movl   $"change_trade_state, cancel_trade Failed 1!  %d %d",0x4(%esp)
0852f2b7 +0x0183:  lea    -0xb4(%ebp),%eax
0852f2bd +0x0189:  mov    %eax,(%esp)
0852f2c0 +0x018c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852f2c5 +0x0191:  lea    -0xc0(%ebp),%eax
0852f2cb +0x0197:  mov    %eax,0xc(%esp)
0852f2cf +0x019b:  movl   $0x1,0x8(%esp)
0852f2d7 +0x01a3:  movl   $0x1a,0x4(%esp)
0852f2df +0x01ab:  mov    0xc(%ebp),%eax
0852f2e2 +0x01ae:  mov    %eax,(%esp)
0852f2e5 +0x01b1:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852f2ea +0x01b6:  movl   $0x0,-0x68(%ebp)
0852f2f1 +0x01bd:  movl   $0x0,-0x64(%ebp)
0852f2f8 +0x01c4:  jmp    0852f342 <+0x20e>
0852f2fa +0x01c6:  movl   $0x3,-0x60(%ebp)
0852f301 +0x01cd:  jmp    0852f333 <+0x1ff>
0852f303 +0x01cf:  mov    -0x64(%ebp),%ebx
0852f306 +0x01d2:  mov    -0x60(%ebp),%edx
0852f309 +0x01d5:  mov    0x8(%ebp),%ecx
0852f30c +0x01d8:  mov    %edx,%eax
0852f30e +0x01da:  shl    $0x3,%eax
0852f311 +0x01dd:  add    %edx,%eax
0852f313 +0x01df:  shl    $0x3,%eax
0852f316 +0x01e2:  imul   $0x798,%ebx,%edx
0852f31c +0x01e8:  add    %edx,%eax
0852f31e +0x01ea:  lea    (%ecx,%eax,1),%eax
0852f321 +0x01ed:  add    $0x30,%eax
0852f324 +0x01f0:  mov    0xb(%eax),%eax
0852f327 +0x01f3:  test   %eax,%eax
0852f329 +0x01f5:  je     0852f32f <+0x1fb>
0852f32b +0x01f7:  addl   $0x1,-0x68(%ebp)
0852f32f +0x01fb:  addl   $0x1,-0x60(%ebp)
0852f333 +0x01ff:  cmpl   $0x1a,-0x60(%ebp)
0852f337 +0x0203:  setle  %al
0852f33a +0x0206:  test   %al,%al
0852f33c +0x0208:  jne    0852f303 <+0x1cf>
0852f33e +0x020a:  addl   $0x1,-0x64(%ebp)
0852f342 +0x020e:  cmpl   $0x1,-0x64(%ebp)
0852f346 +0x0212:  setle  %al
0852f349 +0x0215:  test   %al,%al
0852f34b +0x0217:  jne    0852f2fa <+0x1c6>
0852f34d +0x0219:  cmpl   $0x0,-0x68(%ebp)
0852f351 +0x021d:  jle    085301bf <+0x108b>
0852f357 +0x0223:  mov    0x8(%ebp),%eax
0852f35a +0x0226:  mov    0x20(%eax),%eax
0852f35d +0x0229:  test   %eax,%eax
0852f35f +0x022b:  je     085301c2 <+0x108e>
0852f365 +0x0231:  mov    0x8(%ebp),%eax
0852f368 +0x0234:  mov    0x24(%eax),%eax
0852f36b +0x0237:  test   %eax,%eax
0852f36d +0x0239:  je     085301c5 <+0x1091>
0852f373 +0x023f:  mov    0x8(%ebp),%eax
0852f376 +0x0242:  mov    0x24(%eax),%eax
0852f379 +0x0245:  movl   $0xffffffff,0x4(%esp)
0852f381 +0x024d:  mov    %eax,(%esp)
0852f384 +0x0250:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0852f389 +0x0255:  mov    %eax,%esi
0852f38b +0x0257:  mov    0x8(%ebp),%eax
0852f38e +0x025a:  mov    0x20(%eax),%eax
0852f391 +0x025d:  movl   $0xffffffff,0x4(%esp)
0852f399 +0x0265:  mov    %eax,(%esp)
0852f39c +0x0268:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0852f3a1 +0x026d:  mov    %eax,%ebx
0852f3a3 +0x026f:  movl   $0x5,0xc(%esp)
0852f3ab +0x0277:  movl   $0x9eb,0x8(%esp)
0852f3b3 +0x027f:  movl   $&_ZZN11CTradeSpace18change_trade_stateEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0852f3bb +0x0287:  lea    -0xa4(%ebp),%eax
0852f3c1 +0x028d:  mov    %eax,(%esp)
0852f3c4 +0x0290:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852f3c9 +0x0295:  mov    %esi,0x10(%esp)
0852f3cd +0x0299:  mov    %ebx,0xc(%esp)
0852f3d1 +0x029d:  mov    -0x68(%ebp),%eax
0852f3d4 +0x02a0:  mov    %eax,0x8(%esp)
0852f3d8 +0x02a4:  movl   $"TRADE CANCELED! BUT, ITEM REMAINED! %d Count , Ch1 %d Ch2 %d",0x4(%esp)
0852f3e0 +0x02ac:  lea    -0xa4(%ebp),%eax
0852f3e6 +0x02b2:  mov    %eax,(%esp)
0852f3e9 +0x02b5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852f3ee +0x02ba:  movl   $0x0,-0x5c(%ebp)
0852f3f5 +0x02c1:  jmp    0852f512 <+0x3de>
0852f3fa +0x02c6:  mov    -0x5c(%ebp),%edx
0852f3fd +0x02c9:  mov    0x8(%ebp),%eax
0852f400 +0x02cc:  add    $0x8,%edx
0852f403 +0x02cf:  mov    (%eax,%edx,4),%eax
0852f406 +0x02d2:  test   %eax,%eax
0852f408 +0x02d4:  je     0852f50e <+0x3da>
0852f40e +0x02da:  movl   $0x3,-0x58(%ebp)
0852f415 +0x02e1:  jmp    0852f4ff <+0x3cb>
0852f41a +0x02e6:  mov    -0x5c(%ebp),%ebx
0852f41d +0x02e9:  mov    -0x58(%ebp),%edx
0852f420 +0x02ec:  mov    0x8(%ebp),%ecx
0852f423 +0x02ef:  mov    %edx,%eax
0852f425 +0x02f1:  shl    $0x3,%eax
0852f428 +0x02f4:  add    %edx,%eax
0852f42a +0x02f6:  shl    $0x3,%eax
0852f42d +0x02f9:  imul   $0x798,%ebx,%edx
0852f433 +0x02ff:  add    %edx,%eax
0852f435 +0x0301:  lea    (%ecx,%eax,1),%eax
0852f438 +0x0304:  add    $0x30,%eax
0852f43b +0x0307:  mov    0xb(%eax),%eax
0852f43e +0x030a:  test   %eax,%eax
0852f440 +0x030c:  je     0852f4fb <+0x3c7>
0852f446 +0x0312:  mov    -0x5c(%ebp),%ecx
0852f449 +0x0315:  mov    -0x58(%ebp),%edx
0852f44c +0x0318:  mov    %edx,%eax
0852f44e +0x031a:  shl    $0x3,%eax
0852f451 +0x031d:  add    %edx,%eax
0852f453 +0x031f:  shl    $0x3,%eax
0852f456 +0x0322:  imul   $0x798,%ecx,%edx
0852f45c +0x0328:  add    %edx,%eax
0852f45e +0x032a:  add    $0x30,%eax
0852f461 +0x032d:  add    0x8(%ebp),%eax
0852f464 +0x0330:  add    $0x9,%eax
0852f467 +0x0333:  mov    %eax,(%esp)
0852f46a +0x0336:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852f46f +0x033b:  mov    %eax,%esi
0852f471 +0x033d:  mov    -0x5c(%ebp),%ebx
0852f474 +0x0340:  mov    -0x58(%ebp),%edx
0852f477 +0x0343:  mov    0x8(%ebp),%ecx
0852f47a +0x0346:  mov    %edx,%eax
0852f47c +0x0348:  shl    $0x3,%eax
0852f47f +0x034b:  add    %edx,%eax
0852f481 +0x034d:  shl    $0x3,%eax
0852f484 +0x0350:  imul   $0x798,%ebx,%edx
0852f48a +0x0356:  add    %edx,%eax
0852f48c +0x0358:  lea    (%ecx,%eax,1),%eax
0852f48f +0x035b:  add    $0x30,%eax
0852f492 +0x035e:  mov    0xb(%eax),%edi
0852f495 +0x0361:  mov    -0x5c(%ebp),%edx
0852f498 +0x0364:  mov    0x8(%ebp),%eax
0852f49b +0x0367:  add    $0x8,%edx
0852f49e +0x036a:  mov    (%eax,%edx,4),%eax
0852f4a1 +0x036d:  movl   $0xffffffff,0x4(%esp)
0852f4a9 +0x0375:  mov    %eax,(%esp)
0852f4ac +0x0378:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0852f4b1 +0x037d:  mov    %eax,%ebx
0852f4b3 +0x037f:  movl   $0x5,0xc(%esp)
0852f4bb +0x0387:  movl   $0x9f8,0x8(%esp)
0852f4c3 +0x038f:  movl   $&_ZZN11CTradeSpace18change_trade_stateEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0852f4cb +0x0397:  lea    -0x94(%ebp),%eax
0852f4d1 +0x039d:  mov    %eax,(%esp)
0852f4d4 +0x03a0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852f4d9 +0x03a5:  mov    %esi,0x10(%esp)
0852f4dd +0x03a9:  mov    %edi,0xc(%esp)
0852f4e1 +0x03ad:  mov    %ebx,0x8(%esp)
0852f4e5 +0x03b1:  movl   $"Remained Item %d : %d x %d",0x4(%esp)
0852f4ed +0x03b9:  lea    -0x94(%ebp),%eax
0852f4f3 +0x03bf:  mov    %eax,(%esp)
0852f4f6 +0x03c2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852f4fb +0x03c7:  addl   $0x1,-0x58(%ebp)
0852f4ff +0x03cb:  cmpl   $0x1a,-0x58(%ebp)
0852f503 +0x03cf:  setle  %al
0852f506 +0x03d2:  test   %al,%al
0852f508 +0x03d4:  jne    0852f41a <+0x2e6>
0852f50e +0x03da:  addl   $0x1,-0x5c(%ebp)
0852f512 +0x03de:  cmpl   $0x1,-0x5c(%ebp)
0852f516 +0x03e2:  setle  %al
0852f519 +0x03e5:  test   %al,%al
0852f51b +0x03e7:  jne    0852f3fa <+0x2c6>
0852f521 +0x03ed:  jmp    085301cf <+0x109b>
0852f526 +0x03f2:  mov    0x8(%ebp),%eax
0852f529 +0x03f5:  mov    %eax,(%esp)
0852f52c +0x03f8:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
0852f531 +0x03fd:  test   %al,%al
0852f533 +0x03ff:  je     0852f55f <+0x42b>
0852f535 +0x0401:  lea    -0xc0(%ebp),%eax
0852f53b +0x0407:  mov    %eax,0xc(%esp)
0852f53f +0x040b:  movl   $0x7,0x8(%esp)
0852f547 +0x0413:  movl   $0x1a,0x4(%esp)
0852f54f +0x041b:  mov    0xc(%ebp),%eax
0852f552 +0x041e:  mov    %eax,(%esp)
0852f555 +0x0421:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852f55a +0x0426:  jmp    085301cf <+0x109b>
0852f55f +0x042b:  mov    -0x6c(%ebp),%edx
0852f562 +0x042e:  mov    0x8(%ebp),%eax
0852f565 +0x0431:  add    $0x8,%edx
0852f568 +0x0434:  movl   $0x0,0x8(%eax,%edx,4)
0852f570 +0x043c:  movl   $0x0,0xc(%esp)
0852f578 +0x0444:  mov    -0x74(%ebp),%eax
0852f57b +0x0447:  mov    %eax,0x8(%esp)
0852f57f +0x044b:  mov    0xc(%ebp),%eax
0852f582 +0x044e:  mov    %eax,0x4(%esp)
0852f586 +0x0452:  lea    -0xc0(%ebp),%eax
0852f58c +0x0458:  mov    %eax,(%esp)
0852f58f +0x045b:  call   0852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>  ; SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE)
0852f594 +0x0460:  jmp    085301cf <+0x109b>
0852f599 +0x0465:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0852f59e +0x046a:  movl   $0x36,0x8(%esp)
0852f5a6 +0x0472:  mov    0xc(%ebp),%edx
0852f5a9 +0x0475:  mov    %edx,0x4(%esp)
0852f5ad +0x0479:  mov    %eax,(%esp)
0852f5b0 +0x047c:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0852f5b5 +0x0481:  mov    %eax,-0x54(%ebp)
0852f5b8 +0x0484:  cmpl   $0x0,-0x54(%ebp)
0852f5bc +0x0488:  je     0852f693 <+0x55f>
0852f5c2 +0x048e:  mov    -0x54(%ebp),%eax
0852f5c5 +0x0491:  movzbl %al,%eax
0852f5c8 +0x0494:  mov    %eax,0x8(%esp)
0852f5cc +0x0498:  movl   $0x1a,0x4(%esp)
0852f5d4 +0x04a0:  mov    0xc(%ebp),%eax
0852f5d7 +0x04a3:  mov    %eax,(%esp)
0852f5da +0x04a6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0852f5df +0x04ab:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0852f5e4 +0x04b0:  mov    -0x54(%ebp),%edx
0852f5e7 +0x04b3:  mov    %edx,0x4(%esp)
0852f5eb +0x04b7:  mov    %eax,(%esp)
0852f5ee +0x04ba:  call   08288140 <_ZN21CSecu_ProtectionField14GetOppositeErrEi>  ; CSecu_ProtectionField::GetOppositeErr(int)
0852f5f3 +0x04bf:  movzbl %al,%eax
0852f5f6 +0x04c2:  mov    %eax,0x8(%esp)
0852f5fa +0x04c6:  movl   $0x1a,0x4(%esp)
0852f602 +0x04ce:  mov    -0x74(%ebp),%eax
0852f605 +0x04d1:  mov    %eax,(%esp)
0852f608 +0x04d4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0852f60d +0x04d9:  cmpl   $0x7b,-0x54(%ebp)
0852f611 +0x04dd:  je     0852f61c <+0x4e8>
0852f613 +0x04df:  cmpl   $0x89,-0x54(%ebp)
0852f61a +0x04e6:  jne    0852f689 <+0x555>
0852f61c +0x04e8:  lea    -0xc0(%ebp),%eax
0852f622 +0x04ee:  mov    %eax,(%esp)
0852f625 +0x04f1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852f62a +0x04f6:  movl   $0xb0,0x8(%esp)
0852f632 +0x04fe:  movl   $0x0,0x4(%esp)
0852f63a +0x0506:  lea    -0xc0(%ebp),%eax
0852f640 +0x050c:  mov    %eax,(%esp)
0852f643 +0x050f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852f648 +0x0514:  movl   $0x1,0x4(%esp)
0852f650 +0x051c:  lea    -0xc0(%ebp),%eax
0852f656 +0x0522:  mov    %eax,(%esp)
0852f659 +0x0525:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852f65e +0x052a:  movl   $0x1,0x4(%esp)
0852f666 +0x0532:  lea    -0xc0(%ebp),%eax
0852f66c +0x0538:  mov    %eax,(%esp)
0852f66f +0x053b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852f674 +0x0540:  lea    -0xc0(%ebp),%eax
0852f67a +0x0546:  mov    %eax,0x4(%esp)
0852f67e +0x054a:  mov    -0x74(%ebp),%eax
0852f681 +0x054d:  mov    %eax,(%esp)
0852f684 +0x0550:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852f689 +0x0555:  mov    $0x0,%ebx
0852f68e +0x055a:  jmp    085301f4 <+0x10c0>
0852f693 +0x055f:  mov    0x8(%ebp),%eax
0852f696 +0x0562:  mov    %eax,(%esp)
0852f699 +0x0565:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
0852f69e +0x056a:  test   %al,%al
0852f6a0 +0x056c:  je     0852f6cc <+0x598>
0852f6a2 +0x056e:  lea    -0xc0(%ebp),%eax
0852f6a8 +0x0574:  mov    %eax,0xc(%esp)
0852f6ac +0x0578:  movl   $0x7,0x8(%esp)
0852f6b4 +0x0580:  movl   $0x1a,0x4(%esp)
0852f6bc +0x0588:  mov    0xc(%ebp),%eax
0852f6bf +0x058b:  mov    %eax,(%esp)
0852f6c2 +0x058e:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852f6c7 +0x0593:  jmp    085301cf <+0x109b>
0852f6cc +0x0598:  lea    -0xec(%ebp),%ebx
0852f6d2 +0x059e:  mov    $0x0,%eax
0852f6d7 +0x05a3:  mov    $0xb,%edx
0852f6dc +0x05a8:  mov    %ebx,%edi
0852f6de +0x05aa:  mov    %edx,%ecx
0852f6e0 +0x05ac:  rep stos %eax,%es:(%edi)
0852f6e2 +0x05ae:  lea    -0x118(%ebp),%ebx
0852f6e8 +0x05b4:  mov    $0x0,%eax
0852f6ed +0x05b9:  mov    $0xb,%edx
0852f6f2 +0x05be:  mov    %ebx,%edi
0852f6f4 +0x05c0:  mov    %edx,%ecx
0852f6f6 +0x05c2:  rep stos %eax,%es:(%edi)
0852f6f8 +0x05c4:  mov    -0x70(%ebp),%edx
0852f6fb +0x05c7:  mov    0x8(%ebp),%eax
0852f6fe +0x05ca:  add    $0x8,%edx
0852f701 +0x05cd:  mov    (%eax,%edx,4),%eax
0852f704 +0x05d0:  mov    %eax,(%esp)
0852f707 +0x05d3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852f70c +0x05d8:  mov    %eax,(%esp)
0852f70f +0x05db:  call   08505038 <_ZNK10CInventory15QuickEmptyCountEv>  ; CInventory::QuickEmptyCount() const
0852f714 +0x05e0:  mov    %eax,-0x50(%ebp)
0852f717 +0x05e3:  movl   $0x3,-0x4c(%ebp)
0852f71e +0x05ea:  jmp    0852f84b <+0x717>
0852f723 +0x05ef:  mov    -0x6c(%ebp),%ebx
0852f726 +0x05f2:  mov    -0x4c(%ebp),%edx
0852f729 +0x05f5:  mov    0x8(%ebp),%ecx
0852f72c +0x05f8:  mov    %edx,%eax
0852f72e +0x05fa:  shl    $0x3,%eax
0852f731 +0x05fd:  add    %edx,%eax
0852f733 +0x05ff:  shl    $0x3,%eax
0852f736 +0x0602:  imul   $0x798,%ebx,%edx
0852f73c +0x0608:  add    %edx,%eax
0852f73e +0x060a:  lea    (%ecx,%eax,1),%eax
0852f741 +0x060d:  add    $0x30,%eax
0852f744 +0x0610:  mov    0xb(%eax),%eax
0852f747 +0x0613:  test   %eax,%eax
0852f749 +0x0615:  je     0852f846 <+0x712>
0852f74f +0x061b:  mov    -0x6c(%ebp),%ecx
0852f752 +0x061e:  mov    -0x4c(%ebp),%edx
0852f755 +0x0621:  mov    %edx,%eax
0852f757 +0x0623:  shl    $0x3,%eax
0852f75a +0x0626:  add    %edx,%eax
0852f75c +0x0628:  shl    $0x3,%eax
0852f75f +0x062b:  imul   $0x798,%ecx,%edx
0852f765 +0x0631:  add    %edx,%eax
0852f767 +0x0633:  add    $0x30,%eax
0852f76a +0x0636:  add    0x8(%ebp),%eax
0852f76d +0x0639:  add    $0x9,%eax
0852f770 +0x063c:  mov    %eax,(%esp)
0852f773 +0x063f:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0852f778 +0x0644:  xor    $0x1,%eax
0852f77b +0x0647:  test   %al,%al
0852f77d +0x0649:  je     0852f80b <+0x6d7>
0852f783 +0x064f:  mov    -0x6c(%ebp),%ebx
0852f786 +0x0652:  mov    -0x4c(%ebp),%edx
0852f789 +0x0655:  mov    0x8(%ebp),%ecx
0852f78c +0x0658:  mov    %edx,%eax
0852f78e +0x065a:  shl    $0x3,%eax
0852f791 +0x065d:  add    %edx,%eax
0852f793 +0x065f:  shl    $0x3,%eax
0852f796 +0x0662:  imul   $0x798,%ebx,%edx
0852f79c +0x0668:  add    %edx,%eax
0852f79e +0x066a:  lea    (%ecx,%eax,1),%eax
0852f7a1 +0x066d:  add    $0x30,%eax
0852f7a4 +0x0670:  mov    0xb(%eax),%eax
0852f7a7 +0x0673:  mov    %eax,%ebx
0852f7a9 +0x0675:  mov    -0x70(%ebp),%edx
0852f7ac +0x0678:  mov    0x8(%ebp),%eax
0852f7af +0x067b:  add    $0x8,%edx
0852f7b2 +0x067e:  mov    (%eax,%edx,4),%eax
0852f7b5 +0x0681:  mov    %eax,(%esp)
0852f7b8 +0x0684:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852f7bd +0x0689:  mov    %ebx,0x4(%esp)
0852f7c1 +0x068d:  mov    %eax,(%esp)
0852f7c4 +0x0690:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0852f7c9 +0x0695:  shr    $0x1f,%eax
0852f7cc +0x0698:  test   %al,%al
0852f7ce +0x069a:  je     0852f847 <+0x713>
0852f7d0 +0x069c:  mov    -0x6c(%ebp),%ebx
0852f7d3 +0x069f:  mov    -0x4c(%ebp),%edx
0852f7d6 +0x06a2:  mov    0x8(%ebp),%ecx
0852f7d9 +0x06a5:  mov    %edx,%eax
0852f7db +0x06a7:  shl    $0x3,%eax
0852f7de +0x06aa:  add    %edx,%eax
0852f7e0 +0x06ac:  shl    $0x3,%eax
0852f7e3 +0x06af:  imul   $0x798,%ebx,%edx
0852f7e9 +0x06b5:  add    %edx,%eax
0852f7eb +0x06b7:  lea    (%ecx,%eax,1),%eax
0852f7ee +0x06ba:  add    $0x30,%eax
0852f7f1 +0x06bd:  movzbl 0xa(%eax),%eax
0852f7f5 +0x06c1:  movzbl %al,%eax
0852f7f8 +0x06c4:  mov    -0xec(%ebp,%eax,4),%edx
0852f7ff +0x06cb:  add    $0x1,%edx
0852f802 +0x06ce:  mov    %edx,-0xec(%ebp,%eax,4)
0852f809 +0x06d5:  jmp    0852f847 <+0x713>
0852f80b +0x06d7:  mov    -0x6c(%ebp),%ebx
0852f80e +0x06da:  mov    -0x4c(%ebp),%edx
0852f811 +0x06dd:  mov    0x8(%ebp),%ecx
0852f814 +0x06e0:  mov    %edx,%eax
0852f816 +0x06e2:  shl    $0x3,%eax
0852f819 +0x06e5:  add    %edx,%eax
0852f81b +0x06e7:  shl    $0x3,%eax
0852f81e +0x06ea:  imul   $0x798,%ebx,%edx
0852f824 +0x06f0:  add    %edx,%eax
0852f826 +0x06f2:  lea    (%ecx,%eax,1),%eax
0852f829 +0x06f5:  add    $0x30,%eax
0852f82c +0x06f8:  movzbl 0xa(%eax),%eax
0852f830 +0x06fc:  movzbl %al,%eax
0852f833 +0x06ff:  mov    -0xec(%ebp,%eax,4),%edx
0852f83a +0x0706:  add    $0x1,%edx
0852f83d +0x0709:  mov    %edx,-0xec(%ebp,%eax,4)
0852f844 +0x0710:  jmp    0852f847 <+0x713>
0852f846 +0x0712:  nop
0852f847 +0x0713:  addl   $0x1,-0x4c(%ebp)
0852f84b +0x0717:  cmpl   $0x1a,-0x4c(%ebp)
0852f84f +0x071b:  setle  %al
0852f852 +0x071e:  test   %al,%al
0852f854 +0x0720:  jne    0852f723 <+0x5ef>
0852f85a +0x0726:  movl   $0x1,-0x48(%ebp)
0852f861 +0x072d:  jmp    0852f901 <+0x7cd>
0852f866 +0x0732:  mov    -0x48(%ebp),%ebx
0852f869 +0x0735:  mov    -0x48(%ebp),%esi
0852f86c +0x0738:  mov    -0x70(%ebp),%edx
0852f86f +0x073b:  mov    0x8(%ebp),%eax
0852f872 +0x073e:  add    $0x8,%edx
0852f875 +0x0741:  mov    (%eax,%edx,4),%eax
0852f878 +0x0744:  mov    %eax,(%esp)
0852f87b +0x0747:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852f880 +0x074c:  mov    %esi,0x4(%esp)
0852f884 +0x0750:  mov    %eax,(%esp)
0852f887 +0x0753:  call   08505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>  ; CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const
0852f88c +0x0758:  mov    %eax,-0x118(%ebp,%ebx,4)
0852f893 +0x075f:  mov    -0x48(%ebp),%eax
0852f896 +0x0762:  mov    -0xec(%ebp,%eax,4),%edx
0852f89d +0x0769:  mov    -0x48(%ebp),%eax
0852f8a0 +0x076c:  mov    -0x118(%ebp,%eax,4),%eax
0852f8a7 +0x0773:  cmp    %eax,%edx
0852f8a9 +0x0775:  jle    0852f8fd <+0x7c9>
0852f8ab +0x0777:  mov    -0x48(%ebp),%eax
0852f8ae +0x077a:  mov    -0x118(%ebp,%eax,4),%edx
0852f8b5 +0x0781:  mov    -0x48(%ebp),%eax
0852f8b8 +0x0784:  mov    -0xec(%ebp,%eax,4),%eax
0852f8bf +0x078b:  mov    %edx,%ecx
0852f8c1 +0x078d:  sub    %eax,%ecx
0852f8c3 +0x078f:  mov    %ecx,%eax
0852f8c5 +0x0791:  add    %eax,-0x50(%ebp)
0852f8c8 +0x0794:  cmpl   $0x0,-0x50(%ebp)
0852f8cc +0x0798:  jns    0852f8fd <+0x7c9>
0852f8ce +0x079a:  lea    -0xc0(%ebp),%eax
0852f8d4 +0x07a0:  mov    %eax,0xc(%esp)
0852f8d8 +0x07a4:  movl   $0x4,0x8(%esp)
0852f8e0 +0x07ac:  movl   $0x1a,0x4(%esp)
0852f8e8 +0x07b4:  mov    0xc(%ebp),%eax
0852f8eb +0x07b7:  mov    %eax,(%esp)
0852f8ee +0x07ba:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852f8f3 +0x07bf:  mov    $0x0,%ebx
0852f8f8 +0x07c4:  jmp    085301f4 <+0x10c0>
0852f8fd +0x07c9:  addl   $0x1,-0x48(%ebp)
0852f901 +0x07cd:  cmpl   $0xa,-0x48(%ebp)
0852f905 +0x07d1:  setle  %al
0852f908 +0x07d4:  test   %al,%al
0852f90a +0x07d6:  jne    0852f866 <+0x732>
0852f910 +0x07dc:  mov    -0x6c(%ebp),%edx
0852f913 +0x07df:  mov    0x8(%ebp),%eax
0852f916 +0x07e2:  add    $0x8,%edx
0852f919 +0x07e5:  movl   $0x1,0x8(%eax,%edx,4)
0852f921 +0x07ed:  movl   $0x1,0xc(%esp)
0852f929 +0x07f5:  mov    -0x74(%ebp),%eax
0852f92c +0x07f8:  mov    %eax,0x8(%esp)
0852f930 +0x07fc:  mov    0xc(%ebp),%eax
0852f933 +0x07ff:  mov    %eax,0x4(%esp)
0852f937 +0x0803:  lea    -0xc0(%ebp),%eax
0852f93d +0x0809:  mov    %eax,(%esp)
0852f940 +0x080c:  call   0852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>  ; SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE)
0852f945 +0x0811:  mov    -0x70(%ebp),%edx
0852f948 +0x0814:  mov    0x8(%ebp),%eax
0852f94b +0x0817:  add    $0x8,%edx
0852f94e +0x081a:  mov    0x8(%eax,%edx,4),%eax
0852f952 +0x081e:  cmp    $0x1,%eax
0852f955 +0x0821:  jne    085301c8 <+0x1094>
0852f95b +0x0827:  movl   $0x1,0x4(%esp)
0852f963 +0x082f:  mov    0x8(%ebp),%eax
0852f966 +0x0832:  mov    %eax,(%esp)
0852f969 +0x0835:  call   085320fa <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x158>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x158
0852f96e +0x083a:  jmp    085301cf <+0x109b>
0852f973 +0x083f:  movb   $0x0,-0x42(%ebp)
0852f977 +0x0843:  movb   $0x0,-0x41(%ebp)
0852f97b +0x0847:  mov    -0x6c(%ebp),%edx
0852f97e +0x084a:  mov    0x8(%ebp),%eax
0852f981 +0x084d:  add    $0x3d8,%edx
0852f987 +0x0853:  mov    (%eax,%edx,4),%eax
0852f98a +0x0856:  mov    %eax,-0x40(%ebp)
0852f98d +0x0859:  mov    -0x70(%ebp),%edx
0852f990 +0x085c:  mov    0x8(%ebp),%eax
0852f993 +0x085f:  add    $0x3d8,%edx
0852f999 +0x0865:  mov    (%eax,%edx,4),%eax
0852f99c +0x0868:  mov    %eax,-0x3c(%ebp)
0852f99f +0x086b:  cmpl   $0x0,0xc(%ebp)
0852f9a3 +0x086f:  je     0852f9ff <+0x8cb>
0852f9a5 +0x0871:  mov    0xc(%ebp),%eax
0852f9a8 +0x0874:  mov    %eax,(%esp)
0852f9ab +0x0877:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
0852f9b0 +0x087c:  xor    $0x1,%eax
0852f9b3 +0x087f:  test   %al,%al
0852f9b5 +0x0881:  je     0852f9ff <+0x8cb>
0852f9b7 +0x0883:  mov    -0x40(%ebp),%edx
0852f9ba +0x0886:  mov    0xc(%ebp),%eax
0852f9bd +0x0889:  mov    %edx,0x4(%esp)
0852f9c1 +0x088d:  mov    %eax,(%esp)
0852f9c4 +0x0890:  call   08646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>  ; CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
0852f9c9 +0x0895:  xor    $0x1,%eax
0852f9cc +0x0898:  test   %al,%al
0852f9ce +0x089a:  je     0852f9ff <+0x8cb>
0852f9d0 +0x089c:  lea    -0xc0(%ebp),%eax
0852f9d6 +0x08a2:  mov    %eax,0xc(%esp)
0852f9da +0x08a6:  movl   $0x46,0x8(%esp)
0852f9e2 +0x08ae:  movl   $0x1a,0x4(%esp)
0852f9ea +0x08b6:  mov    0xc(%ebp),%eax
0852f9ed +0x08b9:  mov    %eax,(%esp)
0852f9f0 +0x08bc:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852f9f5 +0x08c1:  mov    $0x0,%ebx
0852f9fa +0x08c6:  jmp    085301f4 <+0x10c0>
0852f9ff +0x08cb:  cmpl   $0x0,-0x74(%ebp)
0852fa03 +0x08cf:  je     0852fa5f <+0x92b>
0852fa05 +0x08d1:  mov    -0x74(%ebp),%eax
0852fa08 +0x08d4:  mov    %eax,(%esp)
0852fa0b +0x08d7:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
0852fa10 +0x08dc:  xor    $0x1,%eax
0852fa13 +0x08df:  test   %al,%al
0852fa15 +0x08e1:  je     0852fa5f <+0x92b>
0852fa17 +0x08e3:  mov    -0x3c(%ebp),%edx
0852fa1a +0x08e6:  mov    -0x74(%ebp),%eax
0852fa1d +0x08e9:  mov    %edx,0x4(%esp)
0852fa21 +0x08ed:  mov    %eax,(%esp)
0852fa24 +0x08f0:  call   08646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>  ; CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
0852fa29 +0x08f5:  xor    $0x1,%eax
0852fa2c +0x08f8:  test   %al,%al
0852fa2e +0x08fa:  je     0852fa5f <+0x92b>
0852fa30 +0x08fc:  lea    -0xc0(%ebp),%eax
0852fa36 +0x0902:  mov    %eax,0xc(%esp)
0852fa3a +0x0906:  movl   $0x47,0x8(%esp)
0852fa42 +0x090e:  movl   $0x1a,0x4(%esp)
0852fa4a +0x0916:  mov    0xc(%ebp),%eax
0852fa4d +0x0919:  mov    %eax,(%esp)
0852fa50 +0x091c:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852fa55 +0x0921:  mov    $0x0,%ebx
0852fa5a +0x0926:  jmp    085301f4 <+0x10c0>
0852fa5f +0x092b:  mov    -0x6c(%ebp),%edx
0852fa62 +0x092e:  mov    0x8(%ebp),%eax
0852fa65 +0x0931:  add    $0x8,%edx
0852fa68 +0x0934:  mov    0x8(%eax,%edx,4),%eax
0852fa6c +0x0938:  cmp    $0x1,%eax
0852fa6f +0x093b:  je     0852faa0 <+0x96c>
0852fa71 +0x093d:  lea    -0xc0(%ebp),%eax
0852fa77 +0x0943:  mov    %eax,0xc(%esp)
0852fa7b +0x0947:  movl   $0x7,0x8(%esp)
0852fa83 +0x094f:  movl   $0x1a,0x4(%esp)
0852fa8b +0x0957:  mov    0xc(%ebp),%eax
0852fa8e +0x095a:  mov    %eax,(%esp)
0852fa91 +0x095d:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0852fa96 +0x0962:  mov    $0x0,%ebx
0852fa9b +0x0967:  jmp    085301f4 <+0x10c0>
0852faa0 +0x096c:  mov    -0x6c(%ebp),%edx
0852faa3 +0x096f:  mov    0x8(%ebp),%eax
0852faa6 +0x0972:  add    $0x8,%edx
0852faa9 +0x0975:  movl   $0x3,0x8(%eax,%edx,4)
0852fab1 +0x097d:  mov    -0x70(%ebp),%edx
0852fab4 +0x0980:  mov    0x8(%ebp),%eax
0852fab7 +0x0983:  add    $0x8,%edx
0852faba +0x0986:  mov    0x8(%eax,%edx,4),%eax
0852fabe +0x098a:  cmp    $0x3,%eax
0852fac1 +0x098d:  jne    085301cb <+0x1097>
0852fac7 +0x0993:  movb   $0x0,-0x36(%ebp)
0852facb +0x0997:  movb   $0x0,-0x35(%ebp)
0852facf +0x099b:  cmpl   $0x0,0xc(%ebp)
0852fad3 +0x099f:  je     0852fb9f <+0xa6b>
0852fad9 +0x09a5:  movl   $0x3,-0x28(%ebp)
0852fae0 +0x09ac:  jmp    0852fb90 <+0xa5c>
0852fae5 +0x09b1:  mov    -0x70(%ebp),%ebx
0852fae8 +0x09b4:  mov    -0x28(%ebp),%edx
0852faeb +0x09b7:  mov    0x8(%ebp),%ecx
0852faee +0x09ba:  mov    %edx,%eax
0852faf0 +0x09bc:  shl    $0x3,%eax
0852faf3 +0x09bf:  add    %edx,%eax
0852faf5 +0x09c1:  shl    $0x3,%eax
0852faf8 +0x09c4:  imul   $0x798,%ebx,%edx
0852fafe +0x09ca:  add    %edx,%eax
0852fb00 +0x09cc:  lea    (%ecx,%eax,1),%eax
0852fb03 +0x09cf:  add    $0x30,%eax
0852fb06 +0x09d2:  mov    0xb(%eax),%eax
0852fb09 +0x09d5:  test   %eax,%eax
0852fb0b +0x09d7:  je     0852fb8c <+0xa58>
0852fb0d +0x09d9:  mov    -0x70(%ebp),%ebx
0852fb10 +0x09dc:  mov    -0x28(%ebp),%edx
0852fb13 +0x09df:  mov    0x8(%ebp),%ecx
0852fb16 +0x09e2:  mov    %edx,%eax
0852fb18 +0x09e4:  shl    $0x3,%eax
0852fb1b +0x09e7:  add    %edx,%eax
0852fb1d +0x09e9:  shl    $0x3,%eax
0852fb20 +0x09ec:  imul   $0x798,%ebx,%edx
0852fb26 +0x09f2:  add    %edx,%eax
0852fb28 +0x09f4:  lea    (%ecx,%eax,1),%eax
0852fb2b +0x09f7:  add    $0x30,%eax
0852fb2e +0x09fa:  mov    0xb(%eax),%eax
0852fb31 +0x09fd:  mov    %eax,%ebx
0852fb33 +0x09ff:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0852fb38 +0x0a04:  mov    %ebx,0x4(%esp)
0852fb3c +0x0a08:  mov    %eax,(%esp)
0852fb3f +0x0a0b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0852fb44 +0x0a10:  mov    %eax,-0x24(%ebp)
0852fb47 +0x0a13:  cmpl   $0x0,-0x24(%ebp)
0852fb4b +0x0a17:  je     0852fb8c <+0xa58>
0852fb4d +0x0a19:  mov    -0x24(%ebp),%eax
0852fb50 +0x0a1c:  mov    (%eax),%eax
0852fb52 +0x0a1e:  add    $0x10,%eax
0852fb55 +0x0a21:  mov    (%eax),%edx
0852fb57 +0x0a23:  mov    -0x24(%ebp),%eax
0852fb5a +0x0a26:  mov    %eax,(%esp)
0852fb5d +0x0a29:  call   *%edx
0852fb5f +0x0a2b:  xor    $0x1,%eax
0852fb62 +0x0a2e:  test   %al,%al
0852fb64 +0x0a30:  je     0852fb7d <+0xa49>
0852fb66 +0x0a32:  mov    -0x24(%ebp),%eax
0852fb69 +0x0a35:  mov    %eax,(%esp)
0852fb6c +0x0a38:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0852fb71 +0x0a3d:  cmp    $0x1,%eax
0852fb74 +0x0a40:  jg     0852fb7d <+0xa49>
0852fb76 +0x0a42:  mov    $0x1,%eax
0852fb7b +0x0a47:  jmp    0852fb82 <+0xa4e>
0852fb7d +0x0a49:  mov    $0x0,%eax
0852fb82 +0x0a4e:  test   %al,%al
0852fb84 +0x0a50:  je     0852fb8c <+0xa58>
0852fb86 +0x0a52:  movb   $0x1,-0x36(%ebp)
0852fb8a +0x0a56:  jmp    0852fb9f <+0xa6b>
0852fb8c +0x0a58:  addl   $0x1,-0x28(%ebp)
0852fb90 +0x0a5c:  cmpl   $0x1a,-0x28(%ebp)
0852fb94 +0x0a60:  setle  %al
0852fb97 +0x0a63:  test   %al,%al
0852fb99 +0x0a65:  jne    0852fae5 <+0x9b1>
0852fb9f +0x0a6b:  cmpl   $0x0,-0x74(%ebp)
0852fba3 +0x0a6f:  je     0852fc6f <+0xb3b>
0852fba9 +0x0a75:  movl   $0x3,-0x20(%ebp)
0852fbb0 +0x0a7c:  jmp    0852fc60 <+0xb2c>
0852fbb5 +0x0a81:  mov    -0x6c(%ebp),%ebx
0852fbb8 +0x0a84:  mov    -0x20(%ebp),%edx
0852fbbb +0x0a87:  mov    0x8(%ebp),%ecx
0852fbbe +0x0a8a:  mov    %edx,%eax
0852fbc0 +0x0a8c:  shl    $0x3,%eax
0852fbc3 +0x0a8f:  add    %edx,%eax
0852fbc5 +0x0a91:  shl    $0x3,%eax
0852fbc8 +0x0a94:  imul   $0x798,%ebx,%edx
0852fbce +0x0a9a:  add    %edx,%eax
0852fbd0 +0x0a9c:  lea    (%ecx,%eax,1),%eax
0852fbd3 +0x0a9f:  add    $0x30,%eax
0852fbd6 +0x0aa2:  mov    0xb(%eax),%eax
0852fbd9 +0x0aa5:  test   %eax,%eax
0852fbdb +0x0aa7:  je     0852fc5c <+0xb28>
0852fbdd +0x0aa9:  mov    -0x6c(%ebp),%ebx
0852fbe0 +0x0aac:  mov    -0x20(%ebp),%edx
0852fbe3 +0x0aaf:  mov    0x8(%ebp),%ecx
0852fbe6 +0x0ab2:  mov    %edx,%eax
0852fbe8 +0x0ab4:  shl    $0x3,%eax
0852fbeb +0x0ab7:  add    %edx,%eax
0852fbed +0x0ab9:  shl    $0x3,%eax
0852fbf0 +0x0abc:  imul   $0x798,%ebx,%edx
0852fbf6 +0x0ac2:  add    %edx,%eax
0852fbf8 +0x0ac4:  lea    (%ecx,%eax,1),%eax
0852fbfb +0x0ac7:  add    $0x30,%eax
0852fbfe +0x0aca:  mov    0xb(%eax),%eax
0852fc01 +0x0acd:  mov    %eax,%ebx
0852fc03 +0x0acf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0852fc08 +0x0ad4:  mov    %ebx,0x4(%esp)
0852fc0c +0x0ad8:  mov    %eax,(%esp)
0852fc0f +0x0adb:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0852fc14 +0x0ae0:  mov    %eax,-0x1c(%ebp)
0852fc17 +0x0ae3:  cmpl   $0x0,-0x1c(%ebp)
0852fc1b +0x0ae7:  je     0852fc5c <+0xb28>
0852fc1d +0x0ae9:  mov    -0x1c(%ebp),%eax
0852fc20 +0x0aec:  mov    (%eax),%eax
0852fc22 +0x0aee:  add    $0x10,%eax
0852fc25 +0x0af1:  mov    (%eax),%edx
0852fc27 +0x0af3:  mov    -0x1c(%ebp),%eax
0852fc2a +0x0af6:  mov    %eax,(%esp)
0852fc2d +0x0af9:  call   *%edx
0852fc2f +0x0afb:  xor    $0x1,%eax
0852fc32 +0x0afe:  test   %al,%al
0852fc34 +0x0b00:  je     0852fc4d <+0xb19>
0852fc36 +0x0b02:  mov    -0x1c(%ebp),%eax
0852fc39 +0x0b05:  mov    %eax,(%esp)
0852fc3c +0x0b08:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0852fc41 +0x0b0d:  cmp    $0x1,%eax
0852fc44 +0x0b10:  jg     0852fc4d <+0xb19>
0852fc46 +0x0b12:  mov    $0x1,%eax
0852fc4b +0x0b17:  jmp    0852fc52 <+0xb1e>
0852fc4d +0x0b19:  mov    $0x0,%eax
0852fc52 +0x0b1e:  test   %al,%al
0852fc54 +0x0b20:  je     0852fc5c <+0xb28>
0852fc56 +0x0b22:  movb   $0x1,-0x35(%ebp)
0852fc5a +0x0b26:  jmp    0852fc6f <+0xb3b>
0852fc5c +0x0b28:  addl   $0x1,-0x20(%ebp)
0852fc60 +0x0b2c:  cmpl   $0x1a,-0x20(%ebp)
0852fc64 +0x0b30:  setle  %al
0852fc67 +0x0b33:  test   %al,%al
0852fc69 +0x0b35:  jne    0852fbb5 <+0xa81>
0852fc6f +0x0b3b:  mov    0x8(%ebp),%eax
0852fc72 +0x0b3e:  mov    %eax,(%esp)
0852fc75 +0x0b41:  call   0853087a <_ZN11CTradeSpace13proceed_tradeEv>  ; CTradeSpace::proceed_trade()
0852fc7a +0x0b46:  test   %al,%al
0852fc7c +0x0b48:  je     0852fcdb <+0xba7>
0852fc7e +0x0b4a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0852fc83 +0x0b4f:  mov    0x8(%ebp),%edx
0852fc86 +0x0b52:  mov    %edx,0x4(%esp)
0852fc8a +0x0b56:  mov    %eax,(%esp)
0852fc8d +0x0b59:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
0852fc92 +0x0b5e:  cmpl   $0x0,0xc(%ebp)
0852fc96 +0x0b62:  je     0852fcb2 <+0xb7e>
0852fc98 +0x0b64:  movzbl -0x36(%ebp),%edx
0852fc9c +0x0b68:  mov    -0x40(%ebp),%eax
0852fc9f +0x0b6b:  mov    %edx,0x8(%esp)
0852fca3 +0x0b6f:  mov    %eax,0x4(%esp)
0852fca7 +0x0b73:  mov    0xc(%ebp),%eax
0852fcaa +0x0b76:  mov    %eax,(%esp)
0852fcad +0x0b79:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
0852fcb2 +0x0b7e:  cmpl   $0x0,-0x74(%ebp)
0852fcb6 +0x0b82:  je     0852fda3 <+0xc6f>
0852fcbc +0x0b88:  movzbl -0x35(%ebp),%edx
0852fcc0 +0x0b8c:  mov    -0x3c(%ebp),%eax
0852fcc3 +0x0b8f:  mov    %edx,0x8(%esp)
0852fcc7 +0x0b93:  mov    %eax,0x4(%esp)
0852fccb +0x0b97:  mov    -0x74(%ebp),%eax
0852fcce +0x0b9a:  mov    %eax,(%esp)
0852fcd1 +0x0b9d:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
0852fcd6 +0x0ba2:  jmp    0852fda3 <+0xc6f>
0852fcdb +0x0ba7:  mov    -0x74(%ebp),%eax
0852fcde +0x0baa:  mov    %eax,(%esp)
0852fce1 +0x0bad:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852fce6 +0x0bb2:  mov    %eax,%esi
0852fce8 +0x0bb4:  mov    0xc(%ebp),%eax
0852fceb +0x0bb7:  mov    %eax,(%esp)
0852fcee +0x0bba:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0852fcf3 +0x0bbf:  mov    %eax,%ebx
0852fcf5 +0x0bc1:  movl   $0x5,0xc(%esp)
0852fcfd +0x0bc9:  movl   $0xaed,0x8(%esp)
0852fd05 +0x0bd1:  movl   $&_ZZN11CTradeSpace18change_trade_stateEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0852fd0d +0x0bd9:  lea    -0x84(%ebp),%eax
0852fd13 +0x0bdf:  mov    %eax,(%esp)
0852fd16 +0x0be2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852fd1b +0x0be7:  mov    %esi,0xc(%esp)
0852fd1f +0x0beb:  mov    %ebx,0x8(%esp)
0852fd23 +0x0bef:  movl   $"change_trade_state, proceed_trade Failed2! %d %d",0x4(%esp)
0852fd2b +0x0bf7:  lea    -0x84(%ebp),%eax
0852fd31 +0x0bfd:  mov    %eax,(%esp)
0852fd34 +0x0c00:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852fd39 +0x0c05:  mov    -0x6c(%ebp),%edx
0852fd3c +0x0c08:  mov    0x8(%ebp),%eax
0852fd3f +0x0c0b:  add    $0x8,%edx
0852fd42 +0x0c0e:  movl   $0x0,0x8(%eax,%edx,4)
0852fd4a +0x0c16:  mov    -0x70(%ebp),%edx
0852fd4d +0x0c19:  mov    0x8(%ebp),%eax
0852fd50 +0x0c1c:  add    $0x8,%edx
0852fd53 +0x0c1f:  movl   $0x0,0x8(%eax,%edx,4)
0852fd5b +0x0c27:  movl   $0x0,0xc(%esp)
0852fd63 +0x0c2f:  mov    -0x74(%ebp),%eax
0852fd66 +0x0c32:  mov    %eax,0x8(%esp)
0852fd6a +0x0c36:  mov    0xc(%ebp),%eax
0852fd6d +0x0c39:  mov    %eax,0x4(%esp)
0852fd71 +0x0c3d:  lea    -0xc0(%ebp),%eax
0852fd77 +0x0c43:  mov    %eax,(%esp)
0852fd7a +0x0c46:  call   0852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>  ; SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE)
0852fd7f +0x0c4b:  movl   $0x0,0xc(%esp)
0852fd87 +0x0c53:  mov    0xc(%ebp),%eax
0852fd8a +0x0c56:  mov    %eax,0x8(%esp)
0852fd8e +0x0c5a:  mov    -0x74(%ebp),%eax
0852fd91 +0x0c5d:  mov    %eax,0x4(%esp)
0852fd95 +0x0c61:  lea    -0xc0(%ebp),%eax
0852fd9b +0x0c67:  mov    %eax,(%esp)
0852fd9e +0x0c6a:  call   0852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>  ; SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE)
0852fda3 +0x0c6f:  mov    0xc(%ebp),%eax
0852fda6 +0x0c72:  mov    %eax,(%esp)
0852fda9 +0x0c75:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0852fdae +0x0c7a:  mov    %ax,-0x34(%ebp)
0852fdb2 +0x0c7e:  mov    -0x74(%ebp),%eax
0852fdb5 +0x0c81:  mov    %eax,(%esp)
0852fdb8 +0x0c84:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0852fdbd +0x0c89:  mov    %ax,-0x32(%ebp)
0852fdc1 +0x0c8d:  movl   $0x19,(%esp)
0852fdc8 +0x0c94:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0852fdcd +0x0c99:  mov    %eax,-0x30(%ebp)
0852fdd0 +0x0c9c:  movl   $0x14,(%esp)
0852fdd7 +0x0ca3:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0852fddc +0x0ca8:  mov    %eax,-0x2c(%ebp)
0852fddf +0x0cab:  mov    0xc(%ebp),%eax
0852fde2 +0x0cae:  mov    %eax,(%esp)
0852fde5 +0x0cb1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852fdea +0x0cb6:  mov    %eax,(%esp)
0852fded +0x0cb9:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0852fdf2 +0x0cbe:  add    -0x40(%ebp),%eax
0852fdf5 +0x0cc1:  mov    %eax,-0x120(%ebp)
0852fdfb +0x0cc7:  fildl  -0x120(%ebp)
0852fe01 +0x0ccd:  fildl  -0x30(%ebp)
0852fe04 +0x0cd0:  fldl   &data#f224355d(.rodata)
0852fe0a +0x0cd6:  fmulp  %st,%st(1)
0852fe0c +0x0cd8:  fstps  -0x11c(%ebp)
0852fe12 +0x0cde:  flds   -0x11c(%ebp)
0852fe18 +0x0ce4:  fldl   &data#a3841abf(.rodata)
0852fe1e +0x0cea:  faddp  %st,%st(1)
0852fe20 +0x0cec:  fmulp  %st,%st(1)
0852fe22 +0x0cee:  fildl  -0x40(%ebp)
0852fe25 +0x0cf1:  fucompp
0852fe27 +0x0cf3:  fnstsw %ax
0852fe29 +0x0cf5:  test   $0x45,%ah
0852fe2c +0x0cf8:  sete   %al
0852fe2f +0x0cfb:  test   %al,%al
0852fe31 +0x0cfd:  je     0852fe43 <+0xd0f>
0852fe33 +0x0cff:  cmpl   $0x270f,-0x40(%ebp)
0852fe3a +0x0d06:  jle    0852fe43 <+0xd0f>
0852fe3c +0x0d08:  mov    $0x1,%eax
0852fe41 +0x0d0d:  jmp    0852fe48 <+0xd14>
0852fe43 +0x0d0f:  mov    $0x0,%eax
0852fe48 +0x0d14:  test   %al,%al
0852fe4a +0x0d16:  je     0852ff6c <+0xe38>
0852fe50 +0x0d1c:  mov    -0x74(%ebp),%eax
0852fe53 +0x0d1f:  mov    %eax,(%esp)
0852fe56 +0x0d22:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0852fe5b +0x0d27:  mov    %eax,0x8(%esp)
0852fe5f +0x0d2b:  movl   $0x2c0,0x4(%esp)
0852fe67 +0x0d33:  mov    0xc(%ebp),%eax
0852fe6a +0x0d36:  mov    %eax,(%esp)
0852fe6d +0x0d39:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
0852fe72 +0x0d3e:  mov    %eax,%ebx
0852fe74 +0x0d40:  mov    0xc(%ebp),%eax
0852fe77 +0x0d43:  mov    %eax,(%esp)
0852fe7a +0x0d46:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0852fe7f +0x0d4b:  movl   $0x0,0x14(%esp)
0852fe87 +0x0d53:  mov    %ebx,0x10(%esp)
0852fe8b +0x0d57:  movl   $0x1,0xc(%esp)
0852fe93 +0x0d5f:  movl   $0x2c0,0x8(%esp)
0852fe9b +0x0d67:  mov    0xc(%ebp),%edx
0852fe9e +0x0d6a:  mov    %edx,0x4(%esp)
0852fea2 +0x0d6e:  mov    %eax,(%esp)
0852fea5 +0x0d71:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0852feaa +0x0d76:  movzwl -0x34(%ebp),%eax
0852feae +0x0d7a:  mov    -0x2c(%ebp),%edx
0852feb1 +0x0d7d:  add    $0x78,%edx
0852feb4 +0x0d80:  cmp    %edx,%eax
0852feb6 +0x0d82:  jl     0852ff12 <+0xdde>
0852feb8 +0x0d84:  mov    -0x74(%ebp),%eax
0852febb +0x0d87:  mov    %eax,(%esp)
0852febe +0x0d8a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0852fec3 +0x0d8f:  mov    %eax,0x8(%esp)
0852fec7 +0x0d93:  movl   $0x2bd,0x4(%esp)
0852fecf +0x0d9b:  mov    0xc(%ebp),%eax
0852fed2 +0x0d9e:  mov    %eax,(%esp)
0852fed5 +0x0da1:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
0852feda +0x0da6:  mov    %eax,%ebx
0852fedc +0x0da8:  mov    0xc(%ebp),%eax
0852fedf +0x0dab:  mov    %eax,(%esp)
0852fee2 +0x0dae:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0852fee7 +0x0db3:  movl   $0x0,0x14(%esp)
0852feef +0x0dbb:  mov    %ebx,0x10(%esp)
0852fef3 +0x0dbf:  movl   $0x1,0xc(%esp)
0852fefb +0x0dc7:  movl   $0x2bd,0x8(%esp)
0852ff03 +0x0dcf:  mov    0xc(%ebp),%edx
0852ff06 +0x0dd2:  mov    %edx,0x4(%esp)
0852ff0a +0x0dd6:  mov    %eax,(%esp)
0852ff0d +0x0dd9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0852ff12 +0x0dde:  mov    0xc(%ebp),%eax
0852ff15 +0x0de1:  mov    %eax,(%esp)
0852ff18 +0x0de4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0852ff1d +0x0de9:  mov    %eax,0x8(%esp)
0852ff21 +0x0ded:  movl   $0x2c1,0x4(%esp)
0852ff29 +0x0df5:  mov    -0x74(%ebp),%eax
0852ff2c +0x0df8:  mov    %eax,(%esp)
0852ff2f +0x0dfb:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
0852ff34 +0x0e00:  mov    %eax,%ebx
0852ff36 +0x0e02:  mov    -0x74(%ebp),%eax
0852ff39 +0x0e05:  mov    %eax,(%esp)
0852ff3c +0x0e08:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0852ff41 +0x0e0d:  movl   $0x0,0x14(%esp)
0852ff49 +0x0e15:  mov    %ebx,0x10(%esp)
0852ff4d +0x0e19:  movl   $0x1,0xc(%esp)
0852ff55 +0x0e21:  movl   $0x2c1,0x8(%esp)
0852ff5d +0x0e29:  mov    -0x74(%ebp),%edx
0852ff60 +0x0e2c:  mov    %edx,0x4(%esp)
0852ff64 +0x0e30:  mov    %eax,(%esp)
0852ff67 +0x0e33:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0852ff6c +0x0e38:  mov    -0x74(%ebp),%eax
0852ff6f +0x0e3b:  mov    %eax,(%esp)
0852ff72 +0x0e3e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852ff77 +0x0e43:  mov    %eax,(%esp)
0852ff7a +0x0e46:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0852ff7f +0x0e4b:  add    -0x3c(%ebp),%eax
0852ff82 +0x0e4e:  mov    %eax,-0x120(%ebp)
0852ff88 +0x0e54:  fildl  -0x120(%ebp)
0852ff8e +0x0e5a:  fldl   &data#f9feb249(.rodata)
0852ff94 +0x0e60:  fmulp  %st,%st(1)
0852ff96 +0x0e62:  fildl  -0x3c(%ebp)
0852ff99 +0x0e65:  fucompp
0852ff9b +0x0e67:  fnstsw %ax
0852ff9d +0x0e69:  test   $0x45,%ah
0852ffa0 +0x0e6c:  sete   %al
0852ffa3 +0x0e6f:  test   %al,%al
0852ffa5 +0x0e71:  je     0852ffb7 <+0xe83>
0852ffa7 +0x0e73:  cmpl   $0x270f,-0x3c(%ebp)
0852ffae +0x0e7a:  jle    0852ffb7 <+0xe83>
0852ffb0 +0x0e7c:  mov    $0x1,%eax
0852ffb5 +0x0e81:  jmp    0852ffbc <+0xe88>
0852ffb7 +0x0e83:  mov    $0x0,%eax
0852ffbc +0x0e88:  test   %al,%al
0852ffbe +0x0e8a:  je     085301ce <+0x109a>
0852ffc4 +0x0e90:  mov    0xc(%ebp),%eax
0852ffc7 +0x0e93:  mov    %eax,(%esp)
0852ffca +0x0e96:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0852ffcf +0x0e9b:  mov    %eax,0x8(%esp)
0852ffd3 +0x0e9f:  movl   $0x2c0,0x4(%esp)
0852ffdb +0x0ea7:  mov    -0x74(%ebp),%eax
0852ffde +0x0eaa:  mov    %eax,(%esp)
0852ffe1 +0x0ead:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
0852ffe6 +0x0eb2:  mov    %eax,%ebx
0852ffe8 +0x0eb4:  mov    -0x74(%ebp),%eax
0852ffeb +0x0eb7:  mov    %eax,(%esp)
0852ffee +0x0eba:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0852fff3 +0x0ebf:  movl   $0x0,0x14(%esp)
0852fffb +0x0ec7:  mov    %ebx,0x10(%esp)
0852ffff +0x0ecb:  movl   $0x1,0xc(%esp)
08530007 +0x0ed3:  movl   $0x2c0,0x8(%esp)
0853000f +0x0edb:  mov    -0x74(%ebp),%edx
08530012 +0x0ede:  mov    %edx,0x4(%esp)
08530016 +0x0ee2:  mov    %eax,(%esp)
08530019 +0x0ee5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0853001e +0x0eea:  cmpw   $0x77,-0x32(%ebp)
08530023 +0x0eef:  jbe    0853007f <+0xf4b>
08530025 +0x0ef1:  mov    0xc(%ebp),%eax
08530028 +0x0ef4:  mov    %eax,(%esp)
0853002b +0x0ef7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08530030 +0x0efc:  mov    %eax,0x8(%esp)
08530034 +0x0f00:  movl   $0x2bd,0x4(%esp)
0853003c +0x0f08:  mov    -0x74(%ebp),%eax
0853003f +0x0f0b:  mov    %eax,(%esp)
08530042 +0x0f0e:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
08530047 +0x0f13:  mov    %eax,%ebx
08530049 +0x0f15:  mov    -0x74(%ebp),%eax
0853004c +0x0f18:  mov    %eax,(%esp)
0853004f +0x0f1b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08530054 +0x0f20:  movl   $0x0,0x14(%esp)
0853005c +0x0f28:  mov    %ebx,0x10(%esp)
08530060 +0x0f2c:  movl   $0x1,0xc(%esp)
08530068 +0x0f34:  movl   $0x2bd,0x8(%esp)
08530070 +0x0f3c:  mov    -0x74(%ebp),%edx
08530073 +0x0f3f:  mov    %edx,0x4(%esp)
08530077 +0x0f43:  mov    %eax,(%esp)
0853007a +0x0f46:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0853007f +0x0f4b:  mov    -0x74(%ebp),%eax
08530082 +0x0f4e:  mov    %eax,(%esp)
08530085 +0x0f51:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0853008a +0x0f56:  mov    %eax,0x8(%esp)
0853008e +0x0f5a:  movl   $0x2c1,0x4(%esp)
08530096 +0x0f62:  mov    0xc(%ebp),%eax
08530099 +0x0f65:  mov    %eax,(%esp)
0853009c +0x0f68:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085300a1 +0x0f6d:  mov    %eax,%ebx
085300a3 +0x0f6f:  mov    0xc(%ebp),%eax
085300a6 +0x0f72:  mov    %eax,(%esp)
085300a9 +0x0f75:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085300ae +0x0f7a:  movl   $0x0,0x14(%esp)
085300b6 +0x0f82:  mov    %ebx,0x10(%esp)
085300ba +0x0f86:  movl   $0x1,0xc(%esp)
085300c2 +0x0f8e:  movl   $0x2c1,0x8(%esp)
085300ca +0x0f96:  mov    0xc(%ebp),%edx
085300cd +0x0f99:  mov    %edx,0x4(%esp)
085300d1 +0x0f9d:  mov    %eax,(%esp)
085300d4 +0x0fa0:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085300d9 +0x0fa5:  jmp    085301cf <+0x109b>
085300de +0x0faa:  mov    0x8(%ebp),%eax
085300e1 +0x0fad:  mov    %eax,(%esp)
085300e4 +0x0fb0:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
085300e9 +0x0fb5:  test   %al,%al
085300eb +0x0fb7:  je     0853016c <+0x1038>
085300ed +0x0fb9:  mov    -0x6c(%ebp),%edx
085300f0 +0x0fbc:  mov    0x8(%ebp),%eax
085300f3 +0x0fbf:  add    $0x8,%edx
085300f6 +0x0fc2:  movl   $0x0,0x8(%eax,%edx,4)
085300fe +0x0fca:  mov    -0x70(%ebp),%edx
08530101 +0x0fcd:  mov    0x8(%ebp),%eax
08530104 +0x0fd0:  add    $0x8,%edx
08530107 +0x0fd3:  movl   $0x0,0x8(%eax,%edx,4)
0853010f +0x0fdb:  movl   $0x0,0xc(%esp)
08530117 +0x0fe3:  mov    -0x74(%ebp),%eax
0853011a +0x0fe6:  mov    %eax,0x8(%esp)
0853011e +0x0fea:  mov    0xc(%ebp),%eax
08530121 +0x0fed:  mov    %eax,0x4(%esp)
08530125 +0x0ff1:  lea    -0xc0(%ebp),%eax
0853012b +0x0ff7:  mov    %eax,(%esp)
0853012e +0x0ffa:  call   0852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>  ; SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE)
08530133 +0x0fff:  movl   $0x0,0xc(%esp)
0853013b +0x1007:  mov    0xc(%ebp),%eax
0853013e +0x100a:  mov    %eax,0x8(%esp)
08530142 +0x100e:  mov    -0x74(%ebp),%eax
08530145 +0x1011:  mov    %eax,0x4(%esp)
08530149 +0x1015:  lea    -0xc0(%ebp),%eax
0853014f +0x101b:  mov    %eax,(%esp)
08530152 +0x101e:  call   0852f0a0 <_Z20SendChangeTradeStateR11PacketGuardP5CUserS2_15ENUM_TRADESTATE>  ; SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE)
08530157 +0x1023:  movl   $0x0,0x4(%esp)
0853015f +0x102b:  mov    0x8(%ebp),%eax
08530162 +0x102e:  mov    %eax,(%esp)
08530165 +0x1031:  call   085320fa <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x158>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x158
0853016a +0x1036:  jmp    085301cf <+0x109b>
0853016c +0x1038:  lea    -0xc0(%ebp),%eax
08530172 +0x103e:  mov    %eax,0xc(%esp)
08530176 +0x1042:  movl   $0x7,0x8(%esp)
0853017e +0x104a:  movl   $0x1a,0x4(%esp)
08530186 +0x1052:  mov    0xc(%ebp),%eax
08530189 +0x1055:  mov    %eax,(%esp)
0853018c +0x1058:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08530191 +0x105d:  jmp    085301cf <+0x109b>
08530193 +0x105f:  lea    -0xc0(%ebp),%eax
08530199 +0x1065:  mov    %eax,0xc(%esp)
0853019d +0x1069:  movl   $0x1,0x8(%esp)
085301a5 +0x1071:  movl   $0x1a,0x4(%esp)
085301ad +0x1079:  mov    0xc(%ebp),%eax
085301b0 +0x107c:  mov    %eax,(%esp)
085301b3 +0x107f:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
085301b8 +0x1084:  mov    $0x1,%ebx
085301bd +0x1089:  jmp    085301f4 <+0x10c0>
085301bf +0x108b:  nop
085301c0 +0x108c:  jmp    085301cf <+0x109b>
085301c2 +0x108e:  nop
085301c3 +0x108f:  jmp    085301cf <+0x109b>
085301c5 +0x1091:  nop
085301c6 +0x1092:  jmp    085301cf <+0x109b>
085301c8 +0x1094:  nop
085301c9 +0x1095:  jmp    085301cf <+0x109b>
085301cb +0x1097:  nop
085301cc +0x1098:  jmp    085301cf <+0x109b>
085301ce +0x109a:  nop
085301cf +0x109b:  mov    $0x0,%ebx
085301d4 +0x10a0:  jmp    085301f4 <+0x10c0>
085301d6 +0x10a2:  mov    %edx,%ebx
085301d8 +0x10a4:  mov    %eax,%esi
085301da +0x10a6:  lea    -0xc0(%ebp),%eax
085301e0 +0x10ac:  mov    %eax,(%esp)
085301e3 +0x10af:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085301e8 +0x10b4:  mov    %esi,%eax
085301ea +0x10b6:  mov    %ebx,%edx
085301ec +0x10b8:  mov    %eax,(%esp)
085301ef +0x10bb:  call   08ae3750 <_Unwind_Resume>
085301f4 +0x10c0:  lea    -0xc0(%ebp),%eax
085301fa +0x10c6:  mov    %eax,(%esp)
085301fd +0x10c9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08530202 +0x10ce:  mov    %ebx,%eax
08530204 +0x10d0:  add    $0x13c,%esp
0853020a +0x10d6:  pop    %ebx
0853020b +0x10d7:  pop    %esi
0853020c +0x10d8:  pop    %edi
0853020d +0x10d9:  pop    %ebp
0853020e +0x10da:  ret
0853020f +0x10db:  nop
```

## 反编译 C

```c
// CTradeSpace::change_trade_state @ 0x852f134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CTradeSpace::change_trade_state(CUser*, int) */

undefined4 __thiscall CTradeSpace::change_trade_state(CTradeSpace *this,CUser *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *pCVar5;
  CGameManager *pCVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  int iVar9;
  CHackAnalyzer *pCVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  byte bVar14;
  int local_11c [11];
  int local_f0 [11];
  PacketGuard local_c4 [12];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  CUserCharacInfo *local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_46;
  undefined1 local_45;
  uint local_44;
  uint local_40;
  byte local_3a;
  byte local_39;
  ushort local_38;
  ushort local_36;
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  CItem *local_20;
  
  bVar14 = 0;
  PacketGuard::PacketGuard(local_c4);
  bVar13 = *(CUser **)(this + 0x20) != param_1;
  if (bVar13) {
    local_78 = *(CUserCharacInfo **)(this + 0x20);
  }
  else {
    local_78 = *(CUserCharacInfo **)(this + 0x24);
  }
  local_70 = (uint)bVar13;
  local_74 = (uint)!bVar13;
  if (local_78 == (CUserCharacInfo *)0x0) {
                    /* try { // try from 0852f1a3 to 085301b7 has its CatchHandler @ 085301d6 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_c4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,1,0x1a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
    CUser::Send(param_1,local_c4);
    uVar11 = 1;
  }
  else {
    switch(param_2) {
    case 0:
      cVar2 = IsLocked(this);
      if (cVar2 == '\0') {
        *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 0;
        SendChangeTradeState(local_c4,param_1,local_78,0);
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
      }
      break;
    case 1:
      local_58 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x36);
      if (local_58 != 0) {
        CUser::SendCmdErrorPacket(param_1,0x1a,local_58 & 0xff);
        uVar1 = CSecu_ProtectionField::GetOppositeErr(GlobalData::s_pSecuProtectionField,local_58);
        CUser::SendCmdErrorPacket((CUser *)local_78,0x1a,uVar1);
        if ((local_58 == 0x7b) || (local_58 == 0x89)) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_c4);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,0,0xb0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
          CUser::Send((CUser *)local_78,local_c4);
        }
        uVar11 = 0;
        goto LAB_085301f4;
      }
      cVar2 = IsLocked(this);
      if (cVar2 == '\0') {
        piVar12 = local_f0;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        }
        piVar12 = local_11c;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        }
        pCVar8 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR
                           (*(CUserCharacInfo **)(this + (local_74 + 8) * 4));
        local_54 = CInventory::QuickEmptyCount(pCVar8);
        for (local_50 = 3; local_50 < 0x1b; local_50 = local_50 + 1) {
          if (*(int *)(this + local_50 * 0x48 + local_70 * 0x798 + 0x3b) != 0) {
            cVar2 = Inven_Item::isEquipableItemType
                              ((Inven_Item *)(this + local_50 * 0x48 + local_70 * 0x798 + 0x39));
            if (cVar2 == '\x01') {
              local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] =
                   local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] + 1;
            }
            else {
              iVar9 = *(int *)(this + local_50 * 0x48 + local_70 * 0x798 + 0x3b);
              pCVar8 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + (local_74 + 8) * 4));
              iVar9 = CInventory::check_item_exist(pCVar8,iVar9);
              if (iVar9 < 0) {
                local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] =
                     local_f0[(byte)this[local_50 * 0x48 + local_70 * 0x798 + 0x3a]] + 1;
              }
            }
          }
        }
        for (local_4c = 1; iVar9 = local_4c, local_4c < 0xb; local_4c = local_4c + 1) {
          pCVar8 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR
                             (*(CUserCharacInfo **)(this + (local_74 + 8) * 4));
          iVar4 = CInventory::InvenEmptycount(pCVar8,iVar9);
          local_11c[iVar9] = iVar4;
          if ((local_11c[local_4c] < local_f0[local_4c]) &&
             (local_54 = local_54 + (local_11c[local_4c] - local_f0[local_4c]), local_54 < 0)) {
            CUser::SendCmdErrorPacket(param_1,0x1a,4,local_c4);
            uVar11 = 0;
            goto LAB_085301f4;
          }
        }
        *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 1;
        SendChangeTradeState(local_c4,param_1,local_78,1);
        if (*(int *)(this + (local_74 + 8) * 4 + 8) == 1) {
          _SetLock(this,true);
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
      }
      break;
    case 2:
      cVar2 = cancel_trade(this);
      if (cVar2 == '\0') {
        uVar11 = CUserCharacInfo::getCurCharacNo(local_78);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_b8,"bool CTradeSpace::change_trade_state(CUser*, int)",0x9db,5);
        cMyTrace::operator()
                  (local_b8,"change_trade_state, cancel_trade Failed 1!  %d %d",uVar7,uVar11);
        CUser::SendCmdErrorPacket(param_1,0x1a,1,local_c4);
      }
      else {
        pCVar6 = (CGameManager *)G_CGameManager();
        CGameManager::PutTradeSpace(pCVar6,this);
      }
      local_6c = 0;
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        for (local_64 = 3; local_64 < 0x1b; local_64 = local_64 + 1) {
          if (*(int *)(this + local_64 * 0x48 + local_68 * 0x798 + 0x3b) != 0) {
            local_6c = local_6c + 1;
          }
        }
      }
      if (((0 < local_6c) && (*(int *)(this + 0x20) != 0)) && (*(int *)(this + 0x24) != 0)) {
        uVar11 = CUser::get_charac_no(*(CUser **)(this + 0x24),-1);
        uVar7 = CUser::get_charac_no(*(CUser **)(this + 0x20),-1);
        cMyTrace::cMyTrace(local_a8,"bool CTradeSpace::change_trade_state(CUser*, int)",0x9eb,5);
        cMyTrace::operator()
                  (local_a8,"TRADE CANCELED! BUT, ITEM REMAINED! %d Count , Ch1 %d Ch2 %d",local_6c,
                   uVar7,uVar11);
        for (local_60 = 0; local_60 < 2; local_60 = local_60 + 1) {
          if (*(int *)(this + (local_60 + 8) * 4) != 0) {
            for (local_5c = 3; local_5c < 0x1b; local_5c = local_5c + 1) {
              if (*(int *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x3b) != 0) {
                uVar7 = Inven_Item::get_add_info
                                  ((Inven_Item *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x39))
                ;
                uVar11 = *(undefined4 *)(this + local_5c * 0x48 + local_60 * 0x798 + 0x3b);
                uVar3 = CUser::get_charac_no(*(CUser **)(this + (local_60 + 8) * 4),-1);
                cMyTrace::cMyTrace(local_98,"bool CTradeSpace::change_trade_state(CUser*, int)",
                                   0x9f8,5);
                cMyTrace::operator()(local_98,"Remained Item %d : %d x %d",uVar3,uVar11,uVar7);
              }
            }
          }
        }
      }
      break;
    case 3:
      local_46 = 0;
      local_45 = 0;
      local_44 = *(uint *)(this + (local_70 + 0x3d8) * 4);
      local_40 = *(uint *)(this + (local_74 + 0x3d8) * 4);
      if (((param_1 != (CUser *)0x0) &&
          (cVar2 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1), cVar2 != '\x01'))
         && (cVar2 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                               ((CUserCharacInfo *)param_1,local_44), cVar2 != '\x01')) {
        CUser::SendCmdErrorPacket(param_1,0x1a,0x46,local_c4);
        uVar11 = 0;
        goto LAB_085301f4;
      }
      if (((local_78 != (CUserCharacInfo *)0x0) &&
          (cVar2 = CUserCharacInfo::GetReliablePerson(local_78), cVar2 != '\x01')) &&
         (cVar2 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(local_78,local_40),
         cVar2 != '\x01')) {
        CUser::SendCmdErrorPacket(param_1,0x1a,0x47,local_c4);
        uVar11 = 0;
        goto LAB_085301f4;
      }
      if (*(int *)(this + (local_70 + 8) * 4 + 8) != 1) {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
        uVar11 = 0;
        goto LAB_085301f4;
      }
      *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 3;
      if (*(int *)(this + (local_74 + 8) * 4 + 8) == 3) {
        local_3a = 0;
        local_39 = 0;
        if (param_1 != (CUser *)0x0) {
          for (local_2c = 3; local_2c < 0x1b; local_2c = local_2c + 1) {
            if (*(int *)(this + local_2c * 0x48 + local_74 * 0x798 + 0x3b) != 0) {
              iVar9 = *(int *)(this + local_2c * 0x48 + local_74 * 0x798 + 0x3b);
              pCVar5 = (CDataManager *)G_CDataManager();
              local_28 = (CItem *)CDataManager::find_item(pCVar5,iVar9);
              if (local_28 != (CItem *)0x0) {
                cVar2 = (**(code **)(*(int *)local_28 + 0x10))(local_28);
                if ((cVar2 == '\x01') || (iVar9 = CItem::get_rarity(local_28), 1 < iVar9)) {
                  bVar13 = false;
                }
                else {
                  bVar13 = true;
                }
                if (bVar13) {
                  local_3a = 1;
                  break;
                }
              }
            }
          }
        }
        if (local_78 != (CUserCharacInfo *)0x0) {
          for (local_24 = 3; local_24 < 0x1b; local_24 = local_24 + 1) {
            if (*(int *)(this + local_24 * 0x48 + local_70 * 0x798 + 0x3b) != 0) {
              iVar9 = *(int *)(this + local_24 * 0x48 + local_70 * 0x798 + 0x3b);
              pCVar5 = (CDataManager *)G_CDataManager();
              local_20 = (CItem *)CDataManager::find_item(pCVar5,iVar9);
              if (local_20 != (CItem *)0x0) {
                cVar2 = (**(code **)(*(int *)local_20 + 0x10))(local_20);
                if ((cVar2 == '\x01') || (iVar9 = CItem::get_rarity(local_20), 1 < iVar9)) {
                  bVar13 = false;
                }
                else {
                  bVar13 = true;
                }
                if (bVar13) {
                  local_39 = 1;
                  break;
                }
              }
            }
          }
        }
        cVar2 = proceed_trade(this);
        if (cVar2 == '\0') {
          uVar11 = CUserCharacInfo::getCurCharacNo(local_78);
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_88,"bool CTradeSpace::change_trade_state(CUser*, int)",0xaed,5);
          cMyTrace::operator()
                    (local_88,"change_trade_state, proceed_trade Failed2! %d %d",uVar7,uVar11);
          *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 0;
          *(undefined4 *)(this + (local_74 + 8) * 4 + 8) = 0;
          SendChangeTradeState(local_c4,param_1,local_78,0);
          SendChangeTradeState(local_c4,local_78,param_1,0);
        }
        else {
          pCVar6 = (CGameManager *)G_CGameManager();
          CGameManager::PutTradeSpace(pCVar6,this);
          if (param_1 != (CUser *)0x0) {
            CUser::IncrementTradeGold(param_1,local_44,(uint)local_3a);
          }
          if (local_78 != (CUserCharacInfo *)0x0) {
            CUser::IncrementTradeGold((CUser *)local_78,local_40,(uint)local_39);
          }
        }
        local_38 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
        local_36 = CUserCharacInfo::getCurCharacUsedFatigue(local_78);
        local_34 = get_rand_int(0x19);
        local_30 = get_rand_int(0x14);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar9 = CInventory::get_money(pCVar8);
        if (((float)(int)local_44 <=
             ((float)_DAT_08c98638 + (float)_DAT_08c98630 * (float)local_34) *
             (float)(int)(iVar9 + local_44)) || ((int)local_44 < 10000)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          iVar9 = CUser::get_acc_id((CUser *)local_78);
          uVar11 = CUser::SetETC(param_1,0x2c0,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x2c0,1,uVar11,0);
          if (local_30 + 0x78 <= (int)(uint)local_38) {
            iVar9 = CUser::get_acc_id((CUser *)local_78);
            uVar11 = CUser::SetETC(param_1,0x2bd,iVar9);
            pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x2bd,1,uVar11,0);
          }
          iVar9 = CUser::get_acc_id(param_1);
          uVar11 = CUser::SetETC((CUser *)local_78,0x2c1,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_78);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,local_78,0x2c1,1,uVar11,0);
        }
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_78);
        iVar9 = CInventory::get_money(pCVar8);
        if (((double)(int)local_40 <= _DAT_08c98640 * (double)(int)(iVar9 + local_40)) ||
           ((int)local_40 < 10000)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          iVar9 = CUser::get_acc_id(param_1);
          uVar11 = CUser::SetETC((CUser *)local_78,0x2c0,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_78);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,local_78,0x2c0,1,uVar11,0);
          if (0x77 < local_36) {
            iVar9 = CUser::get_acc_id(param_1);
            uVar11 = CUser::SetETC((CUser *)local_78,0x2bd,iVar9);
            pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_78);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,local_78,0x2bd,1,uVar11,0);
          }
          iVar9 = CUser::get_acc_id((CUser *)local_78);
          uVar11 = CUser::SetETC(param_1,0x2c1,iVar9);
          pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x2c1,1,uVar11,0);
        }
      }
      break;
    case 4:
      cVar2 = IsLocked(this);
      if (cVar2 == '\0') {
        CUser::SendCmdErrorPacket(param_1,0x1a,7,local_c4);
      }
      else {
        *(undefined4 *)(this + (local_70 + 8) * 4 + 8) = 0;
        *(undefined4 *)(this + (local_74 + 8) * 4 + 8) = 0;
        SendChangeTradeState(local_c4,param_1,local_78,0);
        SendChangeTradeState(local_c4,local_78,param_1,0);
        _SetLock(this,false);
      }
      break;
    default:
      CUser::SendCmdErrorPacket(param_1,0x1a,1,local_c4);
      uVar11 = 1;
      goto LAB_085301f4;
    }
    uVar11 = 0;
  }
LAB_085301f4:
  PacketGuard::~PacketGuard(local_c4);
  return uVar11;
}
```
