# AvatarRechargeServer

`_GLOBAL__I__ZN20AvatarRechargeServerC2Ev`

`global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to AvatarRechargeServer` | `0x08193398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08193398  _GLOBAL__I__ZN20AvatarRechargeServerC2Ev
#           global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()
# range [0x08193398, 0x08194ab3]
08193398 +0x0000:  push   %ebp
08193399 +0x0001:  mov    %esp,%ebp
0819339b +0x0003:  sub    $0x18,%esp
0819339e +0x0006:  movl   $0xffff,0x4(%esp)
081933a6 +0x000e:  movl   $0x1,(%esp)
081933ad +0x0015:  call   08193358 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081933b2 +0x001a:  leave
081933b3 +0x001b:  ret
081933b4 +0x001c:  push   %ebp
081933b5 +0x001d:  mov    %esp,%ebp
081933b7 +0x001f:  cmpl   $0x0,0xc(%ebp)
081933bb +0x0023:  js     081933d7 <+0x3f>
081933bd +0x0025:  cmpl   $0x6,0xc(%ebp)
081933c1 +0x0029:  jg     081933da <+0x42>
081933c3 +0x002b:  mov    0xc(%ebp),%eax
081933c6 +0x002e:  mov    0x8(%ebp),%edx
081933c9 +0x0031:  mov    (%edx,%eax,4),%edx
081933cc +0x0034:  lea    0x1(%edx),%ecx
081933cf +0x0037:  mov    0x8(%ebp),%edx
081933d2 +0x003a:  mov    %ecx,(%edx,%eax,4)
081933d5 +0x003d:  jmp    081933db <+0x43>
081933d7 +0x003f:  nop
081933d8 +0x0040:  jmp    081933db <+0x43>
081933da +0x0042:  nop
081933db +0x0043:  pop    %ebp
081933dc +0x0044:  ret
081933dd +0x0045:  nop
081933de +0x0046:  push   %ebp
081933df +0x0047:  mov    %esp,%ebp
081933e1 +0x0049:  mov    0x8(%ebp),%eax
081933e4 +0x004c:  movl   $0x0,(%eax)
081933ea +0x0052:  mov    0x8(%ebp),%eax
081933ed +0x0055:  movl   $0x0,0x4(%eax)
081933f4 +0x005c:  pop    %ebp
081933f5 +0x005d:  ret
081933f6 +0x005e:  push   %ebp
081933f7 +0x005f:  mov    %esp,%ebp
081933f9 +0x0061:  sub    $0x18,%esp
081933fc +0x0064:  mov    0x8(%ebp),%eax
081933ff +0x0067:  mov    %eax,(%esp)
08193402 +0x006a:  call   081933de <+0x46>
08193407 +0x006f:  leave
08193408 +0x0070:  ret
08193409 +0x0071:  nop
0819340a +0x0072:  push   %ebp
0819340b +0x0073:  mov    %esp,%ebp
0819340d +0x0075:  sub    $0x18,%esp
08193410 +0x0078:  mov    0x8(%ebp),%eax
08193413 +0x007b:  mov    %eax,(%esp)
08193416 +0x007e:  call   080da2ac <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x449>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x449
0819341b +0x0083:  mov    0x8(%ebp),%eax
0819341e +0x0086:  mov    0x10(%eax),%eax
08193421 +0x0089:  add    $0xda,%eax
08193426 +0x008e:  leave
08193427 +0x008f:  ret
08193428 +0x0090:  push   %ebp
08193429 +0x0091:  mov    %esp,%ebp
0819342b +0x0093:  push   %ebx
0819342c +0x0094:  sub    $0x14,%esp
0819342f +0x0097:  mov    0x8(%ebp),%eax
08193432 +0x009a:  mov    %eax,(%esp)
08193435 +0x009d:  call   080cee16 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3c63>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3c63
0819343a +0x00a2:  mov    (%eax),%ebx
0819343c +0x00a4:  mov    0xc(%ebp),%eax
0819343f +0x00a7:  mov    %eax,(%esp)
08193442 +0x00aa:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
08193447 +0x00af:  mov    (%eax),%eax
08193449 +0x00b1:  cmp    %eax,%ebx
0819344b +0x00b3:  setne  %al
0819344e +0x00b6:  add    $0x14,%esp
08193451 +0x00b9:  pop    %ebx
08193452 +0x00ba:  pop    %ebp
08193453 +0x00bb:  ret
08193454 +0x00bc:  push   %ebp
08193455 +0x00bd:  mov    %esp,%ebp
08193457 +0x00bf:  sub    $0x18,%esp
0819345a +0x00c2:  mov    0x8(%ebp),%eax
0819345d +0x00c5:  mov    (%eax),%eax
0819345f +0x00c7:  mov    %eax,(%esp)
08193462 +0x00ca:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
08193467 +0x00cf:  mov    0x8(%ebp),%edx
0819346a +0x00d2:  mov    %eax,(%edx)
0819346c +0x00d4:  mov    0x8(%ebp),%eax
0819346f +0x00d7:  leave
08193470 +0x00d8:  ret
08193471 +0x00d9:  nop
08193472 +0x00da:  push   %ebp
08193473 +0x00db:  mov    %esp,%ebp
08193475 +0x00dd:  push   %ebx
08193476 +0x00de:  sub    $0x24,%esp
08193479 +0x00e1:  mov    0x8(%ebp),%ebx
0819347c +0x00e4:  mov    0xc(%ebp),%eax
0819347f +0x00e7:  mov    (%eax),%eax
08193481 +0x00e9:  mov    %eax,-0xc(%ebp)
08193484 +0x00ec:  lea    -0xc(%ebp),%edx
08193487 +0x00ef:  lea    0x8(%eax),%ecx
0819348a +0x00f2:  mov    0xc(%ebp),%eax
0819348d +0x00f5:  mov    %ecx,(%eax)
0819348f +0x00f7:  mov    %edx,0x4(%esp)
08193493 +0x00fb:  mov    %ebx,(%esp)
08193496 +0x00fe:  call   08112404 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1916>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1916
0819349b +0x0103:  mov    %ebx,%eax
0819349d +0x0105:  add    $0x24,%esp
081934a0 +0x0108:  pop    %ebx
081934a1 +0x0109:  pop    %ebp
081934a2 +0x010a:  ret    $0x4
081934a5 +0x010d:  nop
081934a6 +0x010e:  push   %ebp
081934a7 +0x010f:  mov    %esp,%ebp
081934a9 +0x0111:  pop    %ebp
081934aa +0x0112:  ret
081934ab +0x0113:  nop
081934ac +0x0114:  push   %ebp
081934ad +0x0115:  mov    %esp,%ebp
081934af +0x0117:  push   %ebx
081934b0 +0x0118:  sub    $0x44,%esp
081934b3 +0x011b:  lea    -0x20(%ebp),%eax
081934b6 +0x011e:  mov    0xc(%ebp),%edx
081934b9 +0x0121:  mov    %edx,0x8(%esp)
081934bd +0x0125:  mov    0x8(%ebp),%edx
081934c0 +0x0128:  mov    %edx,0x4(%esp)
081934c4 +0x012c:  mov    %eax,(%esp)
081934c7 +0x012f:  call   08193928 <+0x590>
081934cc +0x0134:  sub    $0x4,%esp
081934cf +0x0137:  lea    -0x1c(%ebp),%eax
081934d2 +0x013a:  mov    0x8(%ebp),%edx
081934d5 +0x013d:  mov    %edx,0x4(%esp)
081934d9 +0x0141:  mov    %eax,(%esp)
081934dc +0x0144:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
081934e1 +0x0149:  sub    $0x4,%esp
081934e4 +0x014c:  lea    -0x1c(%ebp),%eax
081934e7 +0x014f:  mov    %eax,0x4(%esp)
081934eb +0x0153:  lea    -0x20(%ebp),%eax
081934ee +0x0156:  mov    %eax,(%esp)
081934f1 +0x0159:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
081934f6 +0x015e:  test   %al,%al
081934f8 +0x0160:  jne    08193536 <+0x19e>
081934fa +0x0162:  lea    -0x20(%ebp),%eax
081934fd +0x0165:  mov    %eax,(%esp)
08193500 +0x0168:  call   0819397a <+0x5e2>
08193505 +0x016d:  mov    %eax,%ebx
08193507 +0x016f:  lea    -0x15(%ebp),%eax
0819350a +0x0172:  mov    0x8(%ebp),%edx
0819350d +0x0175:  mov    %edx,0x4(%esp)
08193511 +0x0179:  mov    %eax,(%esp)
08193514 +0x017c:  call   08193954 <+0x5bc>
08193519 +0x0181:  sub    $0x4,%esp
0819351c +0x0184:  mov    %ebx,0x8(%esp)
08193520 +0x0188:  mov    0xc(%ebp),%eax
08193523 +0x018b:  mov    %eax,0x4(%esp)
08193527 +0x018f:  lea    -0x15(%ebp),%eax
0819352a +0x0192:  mov    %eax,(%esp)
0819352d +0x0195:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08193532 +0x019a:  test   %al,%al
08193534 +0x019c:  je     0819353d <+0x1a5>
08193536 +0x019e:  mov    $0x1,%eax
0819353b +0x01a3:  jmp    08193542 <+0x1aa>
0819353d +0x01a5:  mov    $0x0,%eax
08193542 +0x01aa:  test   %al,%al
08193544 +0x01ac:  je     0819358f <+0x1f7>
08193546 +0x01ae:  movl   $0x0,-0xc(%ebp)
0819354d +0x01b5:  lea    -0xc(%ebp),%eax
08193550 +0x01b8:  mov    %eax,0x8(%esp)
08193554 +0x01bc:  mov    0xc(%ebp),%eax
08193557 +0x01bf:  mov    %eax,0x4(%esp)
0819355b +0x01c3:  lea    -0x14(%ebp),%eax
0819355e +0x01c6:  mov    %eax,(%esp)
08193561 +0x01c9:  call   08147c6c <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x15f>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x15f
08193566 +0x01ce:  lea    -0x2c(%ebp),%eax
08193569 +0x01d1:  lea    -0x14(%ebp),%edx
0819356c +0x01d4:  mov    %edx,0xc(%esp)
08193570 +0x01d8:  mov    -0x20(%ebp),%edx
08193573 +0x01db:  mov    %edx,0x8(%esp)
08193577 +0x01df:  mov    0x8(%ebp),%edx
0819357a +0x01e2:  mov    %edx,0x4(%esp)
0819357e +0x01e6:  mov    %eax,(%esp)
08193581 +0x01e9:  call   08193988 <+0x5f0>
08193586 +0x01ee:  sub    $0x4,%esp
08193589 +0x01f1:  mov    -0x2c(%ebp),%eax
0819358c +0x01f4:  mov    %eax,-0x20(%ebp)
0819358f +0x01f7:  lea    -0x20(%ebp),%eax
08193592 +0x01fa:  mov    %eax,(%esp)
08193595 +0x01fd:  call   0819397a <+0x5e2>
0819359a +0x0202:  add    $0x4,%eax
0819359d +0x0205:  mov    -0x4(%ebp),%ebx
081935a0 +0x0208:  leave
081935a1 +0x0209:  ret
081935a2 +0x020a:  push   %ebp
081935a3 +0x020b:  mov    %esp,%ebp
081935a5 +0x020d:  push   %edi
081935a6 +0x020e:  push   %esi
081935a7 +0x020f:  push   %ebx
081935a8 +0x0210:  sub    $0x1c,%esp
081935ab +0x0213:  mov    $&_ZGVZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,%eax
081935b0 +0x0218:  movzbl (%eax),%eax
081935b3 +0x021b:  test   %al,%al
081935b5 +0x021d:  jne    08193628 <+0x290>
081935b7 +0x021f:  movl   $&_ZGVZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,(%esp)
081935be +0x0226:  call   08725330 <__cxa_guard_acquire>
081935c3 +0x022b:  test   %eax,%eax
081935c5 +0x022d:  setne  %al
081935c8 +0x0230:  test   %al,%al
081935ca +0x0232:  je     08193628 <+0x290>
081935cc +0x0234:  mov    $0x0,%ebx
081935d1 +0x0239:  movl   $&_ZZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,(%esp)
081935d8 +0x0240:  call   08190200 <_ZN20AvatarRechargeServerC1Ev>  ; AvatarRechargeServer::AvatarRechargeServer()
081935dd +0x0245:  movl   $&_ZGVZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,(%esp)
081935e4 +0x024c:  call   08725250 <__cxa_guard_release>
081935e9 +0x0251:  mov    $&_ZN20AvatarRechargeServerD1Ev,%eax
081935ee +0x0256:  movl   $&__dso_handle,0x8(%esp)
081935f6 +0x025e:  movl   $&_ZZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,0x4(%esp)
081935fe +0x0266:  mov    %eax,(%esp)
08193601 +0x0269:  call   0807ddd0 <_init+0x6c8>
08193606 +0x026e:  jmp    08193628 <+0x290>
08193608 +0x0270:  mov    %edx,%esi
0819360a +0x0272:  mov    %eax,%edi
0819360c +0x0274:  test   %bl,%bl
0819360e +0x0276:  jne    0819361c <+0x284>
08193610 +0x0278:  movl   $&_ZGVZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,(%esp)
08193617 +0x027f:  call   087252c0 <__cxa_guard_abort>
0819361c +0x0284:  mov    %edi,%eax
0819361e +0x0286:  mov    %esi,%edx
08193620 +0x0288:  mov    %eax,(%esp)
08193623 +0x028b:  call   08ae3750 <_Unwind_Resume>
08193628 +0x0290:  mov    $&_ZZN4ARAD9SingletonI20AvatarRechargeServerE3GetEvE3obj,%eax
0819362d +0x0295:  add    $0x1c,%esp
08193630 +0x0298:  pop    %ebx
08193631 +0x0299:  pop    %esi
08193632 +0x029a:  pop    %edi
08193633 +0x029b:  pop    %ebp
08193634 +0x029c:  ret
08193635 +0x029d:  nop
08193636 +0x029e:  push   %ebp
08193637 +0x029f:  mov    %esp,%ebp
08193639 +0x02a1:  pop    %ebp
0819363a +0x02a2:  ret
0819363b +0x02a3:  nop
0819363c +0x02a4:  push   %ebp
0819363d +0x02a5:  mov    %esp,%ebp
0819363f +0x02a7:  push   %ebx
08193640 +0x02a8:  sub    $0x44,%esp
08193643 +0x02ab:  lea    -0x20(%ebp),%eax
08193646 +0x02ae:  mov    0xc(%ebp),%edx
08193649 +0x02b1:  mov    %edx,0x8(%esp)
0819364d +0x02b5:  mov    0x8(%ebp),%edx
08193650 +0x02b8:  mov    %edx,0x4(%esp)
08193654 +0x02bc:  mov    %eax,(%esp)
08193657 +0x02bf:  call   081939ce <+0x636>
0819365c +0x02c4:  sub    $0x4,%esp
0819365f +0x02c7:  lea    -0x1c(%ebp),%eax
08193662 +0x02ca:  mov    0x8(%ebp),%edx
08193665 +0x02cd:  mov    %edx,0x4(%esp)
08193669 +0x02d1:  mov    %eax,(%esp)
0819366c +0x02d4:  call   08193a2e <+0x696>
08193671 +0x02d9:  sub    $0x4,%esp
08193674 +0x02dc:  lea    -0x1c(%ebp),%eax
08193677 +0x02df:  mov    %eax,0x4(%esp)
0819367b +0x02e3:  lea    -0x20(%ebp),%eax
0819367e +0x02e6:  mov    %eax,(%esp)
08193681 +0x02e9:  call   08193a54 <+0x6bc>
08193686 +0x02ee:  test   %al,%al
08193688 +0x02f0:  jne    081936c6 <+0x32e>
0819368a +0x02f2:  lea    -0x20(%ebp),%eax
0819368d +0x02f5:  mov    %eax,(%esp)
08193690 +0x02f8:  call   08193a20 <+0x688>
08193695 +0x02fd:  mov    %eax,%ebx
08193697 +0x02ff:  lea    -0x15(%ebp),%eax
0819369a +0x0302:  mov    0x8(%ebp),%edx
0819369d +0x0305:  mov    %edx,0x4(%esp)
081936a1 +0x0309:  mov    %eax,(%esp)
081936a4 +0x030c:  call   081939fa <+0x662>
081936a9 +0x0311:  sub    $0x4,%esp
081936ac +0x0314:  mov    %ebx,0x8(%esp)
081936b0 +0x0318:  mov    0xc(%ebp),%eax
081936b3 +0x031b:  mov    %eax,0x4(%esp)
081936b7 +0x031f:  lea    -0x15(%ebp),%eax
081936ba +0x0322:  mov    %eax,(%esp)
081936bd +0x0325:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081936c2 +0x032a:  test   %al,%al
081936c4 +0x032c:  je     081936cd <+0x335>
081936c6 +0x032e:  mov    $0x1,%eax
081936cb +0x0333:  jmp    081936d2 <+0x33a>
081936cd +0x0335:  mov    $0x0,%eax
081936d2 +0x033a:  test   %al,%al
081936d4 +0x033c:  je     0819371f <+0x387>
081936d6 +0x033e:  movl   $0x0,-0xc(%ebp)
081936dd +0x0345:  lea    -0xc(%ebp),%eax
081936e0 +0x0348:  mov    %eax,0x8(%esp)
081936e4 +0x034c:  mov    0xc(%ebp),%eax
081936e7 +0x034f:  mov    %eax,0x4(%esp)
081936eb +0x0353:  lea    -0x14(%ebp),%eax
081936ee +0x0356:  mov    %eax,(%esp)
081936f1 +0x0359:  call   08193a68 <+0x6d0>
081936f6 +0x035e:  lea    -0x2c(%ebp),%eax
081936f9 +0x0361:  lea    -0x14(%ebp),%edx
081936fc +0x0364:  mov    %edx,0xc(%esp)
08193700 +0x0368:  mov    -0x20(%ebp),%edx
08193703 +0x036b:  mov    %edx,0x8(%esp)
08193707 +0x036f:  mov    0x8(%ebp),%edx
0819370a +0x0372:  mov    %edx,0x4(%esp)
0819370e +0x0376:  mov    %eax,(%esp)
08193711 +0x0379:  call   08193a96 <+0x6fe>
08193716 +0x037e:  sub    $0x4,%esp
08193719 +0x0381:  mov    -0x2c(%ebp),%eax
0819371c +0x0384:  mov    %eax,-0x20(%ebp)
0819371f +0x0387:  lea    -0x20(%ebp),%eax
08193722 +0x038a:  mov    %eax,(%esp)
08193725 +0x038d:  call   08193a20 <+0x688>
0819372a +0x0392:  add    $0x4,%eax
0819372d +0x0395:  mov    -0x4(%ebp),%ebx
08193730 +0x0398:  leave
08193731 +0x0399:  ret
08193732 +0x039a:  push   %ebp
08193733 +0x039b:  mov    %esp,%ebp
08193735 +0x039d:  sub    $0x28,%esp
08193738 +0x03a0:  lea    -0x10(%ebp),%eax
0819373b +0x03a3:  mov    0x8(%ebp),%edx
0819373e +0x03a6:  mov    %edx,0x4(%esp)
08193742 +0x03aa:  mov    %eax,(%esp)
08193745 +0x03ad:  call   08193adc <+0x744>
0819374a +0x03b2:  sub    $0x4,%esp
0819374d +0x03b5:  lea    -0xc(%ebp),%eax
08193750 +0x03b8:  mov    0x8(%ebp),%edx
08193753 +0x03bb:  mov    %edx,0x4(%esp)
08193757 +0x03bf:  mov    %eax,(%esp)
0819375a +0x03c2:  call   08193b08 <+0x770>
0819375f +0x03c7:  sub    $0x4,%esp
08193762 +0x03ca:  lea    -0x10(%ebp),%eax
08193765 +0x03cd:  mov    %eax,0x4(%esp)
08193769 +0x03d1:  lea    -0xc(%ebp),%eax
0819376c +0x03d4:  mov    %eax,(%esp)
0819376f +0x03d7:  call   08193b33 <+0x79b>
08193774 +0x03dc:  leave
08193775 +0x03dd:  ret
08193776 +0x03de:  push   %ebp
08193777 +0x03df:  mov    %esp,%ebp
08193779 +0x03e1:  push   %edi
0819377a +0x03e2:  push   %esi
0819377b +0x03e3:  push   %ebx
0819377c +0x03e4:  sub    $0x1c,%esp
0819377f +0x03e7:  mov    $&_ZGVZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,%eax
08193784 +0x03ec:  movzbl (%eax),%eax
08193787 +0x03ef:  test   %al,%al
08193789 +0x03f1:  jne    081937fc <+0x464>
0819378b +0x03f3:  movl   $&_ZGVZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,(%esp)
08193792 +0x03fa:  call   08725330 <__cxa_guard_acquire>
08193797 +0x03ff:  test   %eax,%eax
08193799 +0x0401:  setne  %al
0819379c +0x0404:  test   %al,%al
0819379e +0x0406:  je     081937fc <+0x464>
081937a0 +0x0408:  mov    $0x0,%ebx
081937a5 +0x040d:  movl   $&_ZZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,(%esp)
081937ac +0x0414:  call   0819155e <_ZN20EmblemCompoundServerC1Ev>  ; EmblemCompoundServer::EmblemCompoundServer()
081937b1 +0x0419:  movl   $&_ZGVZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,(%esp)
081937b8 +0x0420:  call   08725250 <__cxa_guard_release>
081937bd +0x0425:  mov    $&_ZN20EmblemCompoundServerD1Ev,%eax
081937c2 +0x042a:  movl   $&__dso_handle,0x8(%esp)
081937ca +0x0432:  movl   $&_ZZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,0x4(%esp)
081937d2 +0x043a:  mov    %eax,(%esp)
081937d5 +0x043d:  call   0807ddd0 <_init+0x6c8>
081937da +0x0442:  jmp    081937fc <+0x464>
081937dc +0x0444:  mov    %edx,%esi
081937de +0x0446:  mov    %eax,%edi
081937e0 +0x0448:  test   %bl,%bl
081937e2 +0x044a:  jne    081937f0 <+0x458>
081937e4 +0x044c:  movl   $&_ZGVZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,(%esp)
081937eb +0x0453:  call   087252c0 <__cxa_guard_abort>
081937f0 +0x0458:  mov    %edi,%eax
081937f2 +0x045a:  mov    %esi,%edx
081937f4 +0x045c:  mov    %eax,(%esp)
081937f7 +0x045f:  call   08ae3750 <_Unwind_Resume>
081937fc +0x0464:  mov    $&_ZZN4ARAD9SingletonI20EmblemCompoundServerE3GetEvE3obj,%eax
08193801 +0x0469:  add    $0x1c,%esp
08193804 +0x046c:  pop    %ebx
08193805 +0x046d:  pop    %esi
08193806 +0x046e:  pop    %edi
08193807 +0x046f:  pop    %ebp
08193808 +0x0470:  ret
08193809 +0x0471:  nop
0819380a +0x0472:  push   %ebp
0819380b +0x0473:  mov    %esp,%ebp
0819380d +0x0475:  pop    %ebp
0819380e +0x0476:  ret
0819380f +0x0477:  nop
08193810 +0x0478:  push   %ebp
08193811 +0x0479:  mov    %esp,%ebp
08193813 +0x047b:  mov    0x8(%ebp),%eax
08193816 +0x047e:  mov    0x4(%eax),%eax
08193819 +0x0481:  mov    %eax,%edx
0819381b +0x0483:  mov    0x8(%ebp),%eax
0819381e +0x0486:  mov    (%eax),%eax
08193820 +0x0488:  mov    %edx,%ecx
08193822 +0x048a:  sub    %eax,%ecx
08193824 +0x048c:  mov    %ecx,%eax
08193826 +0x048e:  sar    $0x3,%eax
08193829 +0x0491:  pop    %ebp
0819382a +0x0492:  ret
0819382b +0x0493:  nop
0819382c +0x0494:  push   %ebp
0819382d +0x0495:  mov    %esp,%ebp
0819382f +0x0497:  mov    0x8(%ebp),%eax
08193832 +0x049a:  mov    (%eax),%eax
08193834 +0x049c:  mov    0xc(%ebp),%edx
08193837 +0x049f:  shl    $0x3,%edx
0819383a +0x04a2:  add    %edx,%eax
0819383c +0x04a4:  pop    %ebp
0819383d +0x04a5:  ret
0819383e +0x04a6:  push   %ebp
0819383f +0x04a7:  mov    %esp,%ebp
08193841 +0x04a9:  push   %esi
08193842 +0x04aa:  push   %ebx
08193843 +0x04ab:  sub    $0x10,%esp
08193846 +0x04ae:  mov    0x8(%ebp),%esi
08193849 +0x04b1:  mov    0x10(%ebp),%eax
0819384c +0x04b4:  mov    %eax,(%esp)
0819384f +0x04b7:  call   080f59f2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9a3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9a3
08193854 +0x04bc:  mov    %eax,%ebx
08193856 +0x04be:  mov    0xc(%ebp),%eax
08193859 +0x04c1:  mov    %eax,(%esp)
0819385c +0x04c4:  call   0811244a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x195c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x195c
08193861 +0x04c9:  mov    %ebx,0x8(%esp)
08193865 +0x04cd:  mov    %eax,0x4(%esp)
08193869 +0x04d1:  mov    %esi,(%esp)
0819386c +0x04d4:  call   08193b60 <+0x7c8>
08193871 +0x04d9:  mov    %esi,%eax
08193873 +0x04db:  add    $0x10,%esp
08193876 +0x04de:  pop    %ebx
08193877 +0x04df:  pop    %esi
08193878 +0x04e0:  pop    %ebp
08193879 +0x04e1:  ret    $0x4
0819387c +0x04e4:  push   %ebp
0819387d +0x04e5:  mov    %esp,%ebp
0819387f +0x04e7:  sub    $0x18,%esp
08193882 +0x04ea:  mov    0xc(%ebp),%eax
08193885 +0x04ed:  mov    %eax,(%esp)
08193888 +0x04f0:  call   08080fec <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1012>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1012
0819388d +0x04f5:  mov    (%eax),%eax
0819388f +0x04f7:  mov    %eax,%edx
08193891 +0x04f9:  mov    0x8(%ebp),%eax
08193894 +0x04fc:  mov    %edx,(%eax)
08193896 +0x04fe:  mov    0xc(%ebp),%eax
08193899 +0x0501:  add    $0x4,%eax
0819389c +0x0504:  mov    %eax,(%esp)
0819389f +0x0507:  call   080f5a2b <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9dc>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9dc
081938a4 +0x050c:  movzwl (%eax),%eax
081938a7 +0x050f:  movswl %ax,%edx
081938aa +0x0512:  mov    0x8(%ebp),%eax
081938ad +0x0515:  mov    %edx,0x4(%eax)
081938b0 +0x0518:  leave
081938b1 +0x0519:  ret
081938b2 +0x051a:  push   %ebp
081938b3 +0x051b:  mov    %esp,%ebp
081938b5 +0x051d:  push   %ebx
081938b6 +0x051e:  sub    $0x24,%esp
081938b9 +0x0521:  mov    0x8(%ebp),%ebx
081938bc +0x0524:  mov    0xc(%ebp),%eax
081938bf +0x0527:  mov    (%eax),%eax
081938c1 +0x0529:  mov    %eax,-0xc(%ebp)
081938c4 +0x052c:  lea    -0xc(%ebp),%edx
081938c7 +0x052f:  lea    0x4(%eax),%ecx
081938ca +0x0532:  mov    0xc(%ebp),%eax
081938cd +0x0535:  mov    %ecx,(%eax)
081938cf +0x0537:  mov    %edx,0x4(%esp)
081938d3 +0x053b:  mov    %ebx,(%esp)
081938d6 +0x053e:  call   080cee2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x3c77>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3c77
081938db +0x0543:  mov    %ebx,%eax
081938dd +0x0545:  add    $0x24,%esp
081938e0 +0x0548:  pop    %ebx
081938e1 +0x0549:  pop    %ebp
081938e2 +0x054a:  ret    $0x4
081938e5 +0x054d:  push   %ebp
081938e6 +0x054e:  mov    %esp,%ebp
081938e8 +0x0550:  push   %ebx
081938e9 +0x0551:  sub    $0x14,%esp
081938ec +0x0554:  mov    0x8(%ebp),%eax
081938ef +0x0557:  mov    %eax,(%esp)
081938f2 +0x055a:  call   0811243a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x194c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x194c
081938f7 +0x055f:  mov    (%eax),%ebx
081938f9 +0x0561:  mov    0xc(%ebp),%eax
081938fc +0x0564:  mov    %eax,(%esp)
081938ff +0x0567:  call   0811243a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x194c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x194c
08193904 +0x056c:  mov    (%eax),%eax
08193906 +0x056e:  cmp    %eax,%ebx
08193908 +0x0570:  setne  %al
0819390b +0x0573:  add    $0x14,%esp
0819390e +0x0576:  pop    %ebx
0819390f +0x0577:  pop    %ebp
08193910 +0x0578:  ret
08193911 +0x0579:  nop
08193912 +0x057a:  push   %ebp
08193913 +0x057b:  mov    %esp,%ebp
08193915 +0x057d:  mov    0x8(%ebp),%eax
08193918 +0x0580:  mov    (%eax),%eax
0819391a +0x0582:  pop    %ebp
0819391b +0x0583:  ret
0819391c +0x0584:  push   %ebp
0819391d +0x0585:  mov    %esp,%ebp
0819391f +0x0587:  mov    0x8(%ebp),%eax
08193922 +0x058a:  mov    0x14(%eax),%eax
08193925 +0x058d:  pop    %ebp
08193926 +0x058e:  ret
08193927 +0x058f:  nop
08193928 +0x0590:  push   %ebp
08193929 +0x0591:  mov    %esp,%ebp
0819392b +0x0593:  push   %ebx
0819392c +0x0594:  sub    $0x14,%esp
0819392f +0x0597:  mov    0x8(%ebp),%ebx
08193932 +0x059a:  mov    0xc(%ebp),%eax
08193935 +0x059d:  mov    0x10(%ebp),%edx
08193938 +0x05a0:  mov    %edx,0x8(%esp)
0819393c +0x05a4:  mov    %eax,0x4(%esp)
08193940 +0x05a8:  mov    %ebx,(%esp)
08193943 +0x05ab:  call   08193b90 <+0x7f8>
08193948 +0x05b0:  sub    $0x4,%esp
0819394b +0x05b3:  mov    %ebx,%eax
0819394d +0x05b5:  mov    -0x4(%ebp),%ebx
08193950 +0x05b8:  leave
08193951 +0x05b9:  ret    $0x4
08193954 +0x05bc:  push   %ebp
08193955 +0x05bd:  mov    %esp,%ebp
08193957 +0x05bf:  push   %ebx
08193958 +0x05c0:  sub    $0x14,%esp
0819395b +0x05c3:  mov    0x8(%ebp),%ebx
0819395e +0x05c6:  mov    0xc(%ebp),%eax
08193961 +0x05c9:  mov    %eax,0x4(%esp)
08193965 +0x05cd:  mov    %ebx,(%esp)
08193968 +0x05d0:  call   08193be2 <+0x84a>
0819396d +0x05d5:  sub    $0x4,%esp
08193970 +0x05d8:  mov    %ebx,%eax
08193972 +0x05da:  mov    -0x4(%ebp),%ebx
08193975 +0x05dd:  leave
08193976 +0x05de:  ret    $0x4
08193979 +0x05e1:  nop
0819397a +0x05e2:  push   %ebp
0819397b +0x05e3:  mov    %esp,%ebp
0819397d +0x05e5:  mov    0x8(%ebp),%eax
08193980 +0x05e8:  mov    (%eax),%eax
08193982 +0x05ea:  add    $0x10,%eax
08193985 +0x05ed:  pop    %ebp
08193986 +0x05ee:  ret
08193987 +0x05ef:  nop
08193988 +0x05f0:  push   %ebp
08193989 +0x05f1:  mov    %esp,%ebp
0819398b +0x05f3:  push   %ebx
0819398c +0x05f4:  sub    $0x24,%esp
0819398f +0x05f7:  mov    0x8(%ebp),%ebx
08193992 +0x05fa:  lea    0x10(%ebp),%eax
08193995 +0x05fd:  mov    %eax,0x4(%esp)
08193999 +0x0601:  lea    -0xc(%ebp),%eax
0819399c +0x0604:  mov    %eax,(%esp)
0819399f +0x0607:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
081939a4 +0x060c:  mov    0xc(%ebp),%eax
081939a7 +0x060f:  mov    0x14(%ebp),%edx
081939aa +0x0612:  mov    %edx,0xc(%esp)
081939ae +0x0616:  mov    -0xc(%ebp),%edx
081939b1 +0x0619:  mov    %edx,0x8(%esp)
081939b5 +0x061d:  mov    %eax,0x4(%esp)
081939b9 +0x0621:  mov    %ebx,(%esp)
081939bc +0x0624:  call   08193bec <+0x854>
081939c1 +0x0629:  sub    $0x4,%esp
081939c4 +0x062c:  mov    %ebx,%eax
081939c6 +0x062e:  mov    -0x4(%ebp),%ebx
081939c9 +0x0631:  leave
081939ca +0x0632:  ret    $0x4
081939cd +0x0635:  nop
081939ce +0x0636:  push   %ebp
081939cf +0x0637:  mov    %esp,%ebp
081939d1 +0x0639:  push   %ebx
081939d2 +0x063a:  sub    $0x14,%esp
081939d5 +0x063d:  mov    0x8(%ebp),%ebx
081939d8 +0x0640:  mov    0xc(%ebp),%eax
081939db +0x0643:  mov    0x10(%ebp),%edx
081939de +0x0646:  mov    %edx,0x8(%esp)
081939e2 +0x064a:  mov    %eax,0x4(%esp)
081939e6 +0x064e:  mov    %ebx,(%esp)
081939e9 +0x0651:  call   08193fb2 <+0xc1a>
081939ee +0x0656:  sub    $0x4,%esp
081939f1 +0x0659:  mov    %ebx,%eax
081939f3 +0x065b:  mov    -0x4(%ebp),%ebx
081939f6 +0x065e:  leave
081939f7 +0x065f:  ret    $0x4
081939fa +0x0662:  push   %ebp
081939fb +0x0663:  mov    %esp,%ebp
081939fd +0x0665:  push   %ebx
081939fe +0x0666:  sub    $0x14,%esp
08193a01 +0x0669:  mov    0x8(%ebp),%ebx
08193a04 +0x066c:  mov    0xc(%ebp),%eax
08193a07 +0x066f:  mov    %eax,0x4(%esp)
08193a0b +0x0673:  mov    %ebx,(%esp)
08193a0e +0x0676:  call   08194004 <+0xc6c>
08193a13 +0x067b:  sub    $0x4,%esp
08193a16 +0x067e:  mov    %ebx,%eax
08193a18 +0x0680:  mov    -0x4(%ebp),%ebx
08193a1b +0x0683:  leave
08193a1c +0x0684:  ret    $0x4
08193a1f +0x0687:  nop
08193a20 +0x0688:  push   %ebp
08193a21 +0x0689:  mov    %esp,%ebp
08193a23 +0x068b:  mov    0x8(%ebp),%eax
08193a26 +0x068e:  mov    (%eax),%eax
08193a28 +0x0690:  add    $0x10,%eax
08193a2b +0x0693:  pop    %ebp
08193a2c +0x0694:  ret
08193a2d +0x0695:  nop
08193a2e +0x0696:  push   %ebp
08193a2f +0x0697:  mov    %esp,%ebp
08193a31 +0x0699:  push   %ebx
08193a32 +0x069a:  sub    $0x14,%esp
08193a35 +0x069d:  mov    0x8(%ebp),%ebx
08193a38 +0x06a0:  mov    0xc(%ebp),%eax
08193a3b +0x06a3:  mov    %eax,0x4(%esp)
08193a3f +0x06a7:  mov    %ebx,(%esp)
08193a42 +0x06aa:  call   0819400e <+0xc76>
08193a47 +0x06af:  sub    $0x4,%esp
08193a4a +0x06b2:  mov    %ebx,%eax
08193a4c +0x06b4:  mov    -0x4(%ebp),%ebx
08193a4f +0x06b7:  leave
08193a50 +0x06b8:  ret    $0x4
08193a53 +0x06bb:  nop
08193a54 +0x06bc:  push   %ebp
08193a55 +0x06bd:  mov    %esp,%ebp
08193a57 +0x06bf:  mov    0x8(%ebp),%eax
08193a5a +0x06c2:  mov    (%eax),%edx
08193a5c +0x06c4:  mov    0xc(%ebp),%eax
08193a5f +0x06c7:  mov    (%eax),%eax
08193a61 +0x06c9:  cmp    %eax,%edx
08193a63 +0x06cb:  sete   %al
08193a66 +0x06ce:  pop    %ebp
08193a67 +0x06cf:  ret
08193a68 +0x06d0:  push   %ebp
08193a69 +0x06d1:  mov    %esp,%ebp
08193a6b +0x06d3:  sub    $0x18,%esp
08193a6e +0x06d6:  mov    0xc(%ebp),%eax
08193a71 +0x06d9:  mov    %eax,(%esp)
08193a74 +0x06dc:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
08193a79 +0x06e1:  mov    (%eax),%edx
08193a7b +0x06e3:  mov    0x8(%ebp),%eax
08193a7e +0x06e6:  mov    %edx,(%eax)
08193a80 +0x06e8:  mov    0x10(%ebp),%eax
08193a83 +0x06eb:  mov    %eax,(%esp)
08193a86 +0x06ee:  call   08194034 <+0xc9c>
08193a8b +0x06f3:  mov    (%eax),%edx
08193a8d +0x06f5:  mov    0x8(%ebp),%eax
08193a90 +0x06f8:  mov    %edx,0x4(%eax)
08193a93 +0x06fb:  leave
08193a94 +0x06fc:  ret
08193a95 +0x06fd:  nop
08193a96 +0x06fe:  push   %ebp
08193a97 +0x06ff:  mov    %esp,%ebp
08193a99 +0x0701:  push   %ebx
08193a9a +0x0702:  sub    $0x24,%esp
08193a9d +0x0705:  mov    0x8(%ebp),%ebx
08193aa0 +0x0708:  lea    0x10(%ebp),%eax
08193aa3 +0x070b:  mov    %eax,0x4(%esp)
08193aa7 +0x070f:  lea    -0xc(%ebp),%eax
08193aaa +0x0712:  mov    %eax,(%esp)
08193aad +0x0715:  call   0819403c <+0xca4>
08193ab2 +0x071a:  mov    0xc(%ebp),%eax
08193ab5 +0x071d:  mov    0x14(%ebp),%edx
08193ab8 +0x0720:  mov    %edx,0xc(%esp)
08193abc +0x0724:  mov    -0xc(%ebp),%edx
08193abf +0x0727:  mov    %edx,0x8(%esp)
08193ac3 +0x072b:  mov    %eax,0x4(%esp)
08193ac7 +0x072f:  mov    %ebx,(%esp)
08193aca +0x0732:  call   0819404c <+0xcb4>
08193acf +0x0737:  sub    $0x4,%esp
08193ad2 +0x073a:  mov    %ebx,%eax
08193ad4 +0x073c:  mov    -0x4(%ebp),%ebx
08193ad7 +0x073f:  leave
08193ad8 +0x0740:  ret    $0x4
08193adb +0x0743:  nop
08193adc +0x0744:  push   %ebp
08193add +0x0745:  mov    %esp,%ebp
08193adf +0x0747:  push   %ebx
08193ae0 +0x0748:  sub    $0x24,%esp
08193ae3 +0x074b:  mov    0x8(%ebp),%ebx
08193ae6 +0x074e:  mov    0xc(%ebp),%eax
08193ae9 +0x0751:  mov    0x4(%eax),%eax
08193aec +0x0754:  mov    %eax,-0xc(%ebp)
08193aef +0x0757:  lea    -0xc(%ebp),%eax
08193af2 +0x075a:  mov    %eax,0x4(%esp)
08193af6 +0x075e:  mov    %ebx,(%esp)
08193af9 +0x0761:  call   08194412 <+0x107a>
08193afe +0x0766:  mov    %ebx,%eax
08193b00 +0x0768:  add    $0x24,%esp
08193b03 +0x076b:  pop    %ebx
08193b04 +0x076c:  pop    %ebp
08193b05 +0x076d:  ret    $0x4
08193b08 +0x0770:  push   %ebp
08193b09 +0x0771:  mov    %esp,%ebp
08193b0b +0x0773:  push   %ebx
08193b0c +0x0774:  sub    $0x24,%esp
08193b0f +0x0777:  mov    0x8(%ebp),%ebx
08193b12 +0x077a:  mov    0xc(%ebp),%eax
08193b15 +0x077d:  mov    (%eax),%eax
08193b17 +0x077f:  mov    %eax,-0xc(%ebp)
08193b1a +0x0782:  lea    -0xc(%ebp),%eax
08193b1d +0x0785:  mov    %eax,0x4(%esp)
08193b21 +0x0789:  mov    %ebx,(%esp)
08193b24 +0x078c:  call   08194412 <+0x107a>
08193b29 +0x0791:  mov    %ebx,%eax
08193b2b +0x0793:  add    $0x24,%esp
08193b2e +0x0796:  pop    %ebx
08193b2f +0x0797:  pop    %ebp
08193b30 +0x0798:  ret    $0x4
08193b33 +0x079b:  push   %ebp
08193b34 +0x079c:  mov    %esp,%ebp
08193b36 +0x079e:  push   %ebx
08193b37 +0x079f:  sub    $0x14,%esp
08193b3a +0x07a2:  mov    0x8(%ebp),%eax
08193b3d +0x07a5:  mov    %eax,(%esp)
08193b40 +0x07a8:  call   08194422 <+0x108a>
08193b45 +0x07ad:  mov    (%eax),%ebx
08193b47 +0x07af:  mov    0xc(%ebp),%eax
08193b4a +0x07b2:  mov    %eax,(%esp)
08193b4d +0x07b5:  call   08194422 <+0x108a>
08193b52 +0x07ba:  mov    (%eax),%eax
08193b54 +0x07bc:  cmp    %eax,%ebx
08193b56 +0x07be:  sete   %al
08193b59 +0x07c1:  add    $0x14,%esp
08193b5c +0x07c4:  pop    %ebx
08193b5d +0x07c5:  pop    %ebp
08193b5e +0x07c6:  ret
08193b5f +0x07c7:  nop
08193b60 +0x07c8:  push   %ebp
08193b61 +0x07c9:  mov    %esp,%ebp
08193b63 +0x07cb:  sub    $0x18,%esp
08193b66 +0x07ce:  mov    0xc(%ebp),%eax
08193b69 +0x07d1:  mov    %eax,(%esp)
08193b6c +0x07d4:  call   0811244a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x195c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x195c
08193b71 +0x07d9:  mov    (%eax),%edx
08193b73 +0x07db:  mov    0x8(%ebp),%eax
08193b76 +0x07de:  mov    %edx,(%eax)
08193b78 +0x07e0:  mov    0x10(%ebp),%eax
08193b7b +0x07e3:  mov    %eax,(%esp)
08193b7e +0x07e6:  call   080f59f2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9a3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9a3
08193b83 +0x07eb:  movzwl (%eax),%edx
08193b86 +0x07ee:  mov    0x8(%ebp),%eax
08193b89 +0x07f1:  mov    %dx,0x4(%eax)
08193b8d +0x07f5:  leave
08193b8e +0x07f6:  ret
08193b8f +0x07f7:  nop
08193b90 +0x07f8:  push   %ebp
08193b91 +0x07f9:  mov    %esp,%ebp
08193b93 +0x07fb:  push   %esi
08193b94 +0x07fc:  push   %ebx
08193b95 +0x07fd:  sub    $0x20,%esp
08193b98 +0x0800:  mov    0x8(%ebp),%esi
08193b9b +0x0803:  mov    0xc(%ebp),%eax
08193b9e +0x0806:  mov    %eax,(%esp)
08193ba1 +0x0809:  call   080c7862 <_GLOBAL__I_g_ServerString_+0xdcd>  ; global constructors keyed to g_ServerString_+0xdcd
08193ba6 +0x080e:  mov    %eax,%ebx
08193ba8 +0x0810:  mov    0xc(%ebp),%eax
08193bab +0x0813:  mov    %eax,(%esp)
08193bae +0x0816:  call   080c70d6 <_GLOBAL__I_g_ServerString_+0x641>  ; global constructors keyed to g_ServerString_+0x641
08193bb3 +0x081b:  mov    0x10(%ebp),%edx
08193bb6 +0x081e:  mov    %edx,0x10(%esp)
08193bba +0x0822:  mov    %ebx,0xc(%esp)
08193bbe +0x0826:  mov    %eax,0x8(%esp)
08193bc2 +0x082a:  mov    0xc(%ebp),%eax
08193bc5 +0x082d:  mov    %eax,0x4(%esp)
08193bc9 +0x0831:  mov    %esi,(%esp)
08193bcc +0x0834:  call   080d11b4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6001>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6001
08193bd1 +0x0839:  sub    $0x4,%esp
08193bd4 +0x083c:  mov    %esi,%eax
08193bd6 +0x083e:  lea    -0x8(%ebp),%esp
08193bd9 +0x0841:  add    $0x0,%esp
08193bdc +0x0844:  pop    %ebx
08193bdd +0x0845:  pop    %esi
08193bde +0x0846:  pop    %ebp
08193bdf +0x0847:  ret    $0x4
08193be2 +0x084a:  push   %ebp
08193be3 +0x084b:  mov    %esp,%ebp
08193be5 +0x084d:  mov    0x8(%ebp),%eax
08193be8 +0x0850:  pop    %ebp
08193be9 +0x0851:  ret    $0x4
08193bec +0x0854:  push   %ebp
08193bed +0x0855:  mov    %esp,%ebp
08193bef +0x0857:  push   %esi
08193bf0 +0x0858:  push   %ebx
08193bf1 +0x0859:  sub    $0x50,%esp
08193bf4 +0x085c:  mov    0x8(%ebp),%ebx
08193bf7 +0x085f:  mov    0x10(%ebp),%esi
08193bfa +0x0862:  mov    0xc(%ebp),%eax
08193bfd +0x0865:  mov    %eax,(%esp)
08193c00 +0x0868:  call   080c7862 <_GLOBAL__I_g_ServerString_+0xdcd>  ; global constructors keyed to g_ServerString_+0xdcd
08193c05 +0x086d:  cmp    %eax,%esi
08193c07 +0x086f:  sete   %al
08193c0a +0x0872:  test   %al,%al
08193c0c +0x0874:  je     08193cce <+0x936>
08193c12 +0x087a:  mov    0xc(%ebp),%eax
08193c15 +0x087d:  mov    %eax,(%esp)
08193c18 +0x0880:  call   0819391c <+0x584>
08193c1d +0x0885:  test   %eax,%eax
08193c1f +0x0887:  je     08193c68 <+0x8d0>
08193c21 +0x0889:  mov    0x14(%ebp),%eax
08193c24 +0x088c:  mov    %eax,0x4(%esp)
08193c28 +0x0890:  lea    -0x29(%ebp),%eax
08193c2b +0x0893:  mov    %eax,(%esp)
08193c2e +0x0896:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
08193c33 +0x089b:  mov    %eax,%esi
08193c35 +0x089d:  mov    0xc(%ebp),%eax
08193c38 +0x08a0:  mov    %eax,(%esp)
08193c3b +0x08a3:  call   080c7886 <_GLOBAL__I_g_ServerString_+0xdf1>  ; global constructors keyed to g_ServerString_+0xdf1
08193c40 +0x08a8:  mov    (%eax),%eax
08193c42 +0x08aa:  mov    %eax,(%esp)
08193c45 +0x08ad:  call   080c7a17 <_GLOBAL__I_g_ServerString_+0xf82>  ; global constructors keyed to g_ServerString_+0xf82
08193c4a +0x08b2:  mov    0xc(%ebp),%edx
08193c4d +0x08b5:  mov    %esi,0x8(%esp)
08193c51 +0x08b9:  mov    %eax,0x4(%esp)
08193c55 +0x08bd:  mov    %edx,(%esp)
08193c58 +0x08c0:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08193c5d +0x08c5:  test   %al,%al
08193c5f +0x08c7:  je     08193c68 <+0x8d0>
08193c61 +0x08c9:  mov    $0x1,%eax
08193c66 +0x08ce:  jmp    08193c6d <+0x8d5>
08193c68 +0x08d0:  mov    $0x0,%eax
08193c6d +0x08d5:  test   %al,%al
08193c6f +0x08d7:  je     08193ca8 <+0x910>
08193c71 +0x08d9:  mov    0xc(%ebp),%eax
08193c74 +0x08dc:  mov    %eax,(%esp)
08193c77 +0x08df:  call   080c7886 <_GLOBAL__I_g_ServerString_+0xdf1>  ; global constructors keyed to g_ServerString_+0xdf1
08193c7c +0x08e4:  mov    (%eax),%eax
08193c7e +0x08e6:  mov    0x14(%ebp),%edx
08193c81 +0x08e9:  mov    %edx,0x10(%esp)
08193c85 +0x08ed:  mov    %eax,0xc(%esp)
08193c89 +0x08f1:  movl   $0x0,0x8(%esp)
08193c91 +0x08f9:  mov    0xc(%ebp),%eax
08193c94 +0x08fc:  mov    %eax,0x4(%esp)
08193c98 +0x0900:  mov    %ebx,(%esp)
08193c9b +0x0903:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193ca0 +0x0908:  sub    $0x4,%esp
08193ca3 +0x090b:  jmp    08193fa3 <+0xc0b>
08193ca8 +0x0910:  lea    -0x28(%ebp),%eax
08193cab +0x0913:  mov    0x14(%ebp),%edx
08193cae +0x0916:  mov    %edx,0x8(%esp)
08193cb2 +0x091a:  mov    0xc(%ebp),%edx
08193cb5 +0x091d:  mov    %edx,0x4(%esp)
08193cb9 +0x0921:  mov    %eax,(%esp)
08193cbc +0x0924:  call   080c7160 <_GLOBAL__I_g_ServerString_+0x6cb>  ; global constructors keyed to g_ServerString_+0x6cb
08193cc1 +0x0929:  sub    $0x4,%esp
08193cc4 +0x092c:  mov    -0x28(%ebp),%eax
08193cc7 +0x092f:  mov    %eax,(%ebx)
08193cc9 +0x0931:  jmp    08193fa3 <+0xc0b>
08193cce +0x0936:  mov    0x10(%ebp),%eax
08193cd1 +0x0939:  mov    %eax,(%esp)
08193cd4 +0x093c:  call   080c7a17 <_GLOBAL__I_g_ServerString_+0xf82>  ; global constructors keyed to g_ServerString_+0xf82
08193cd9 +0x0941:  mov    %eax,%esi
08193cdb +0x0943:  mov    0x14(%ebp),%eax
08193cde +0x0946:  mov    %eax,0x4(%esp)
08193ce2 +0x094a:  lea    -0x1e(%ebp),%eax
08193ce5 +0x094d:  mov    %eax,(%esp)
08193ce8 +0x0950:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
08193ced +0x0955:  mov    0xc(%ebp),%edx
08193cf0 +0x0958:  mov    %esi,0x8(%esp)
08193cf4 +0x095c:  mov    %eax,0x4(%esp)
08193cf8 +0x0960:  mov    %edx,(%esp)
08193cfb +0x0963:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08193d00 +0x0968:  test   %al,%al
08193d02 +0x096a:  je     08193e3a <+0xaa2>
08193d08 +0x0970:  mov    0x10(%ebp),%eax
08193d0b +0x0973:  mov    %eax,-0x30(%ebp)
08193d0e +0x0976:  mov    0x10(%ebp),%esi
08193d11 +0x0979:  mov    0xc(%ebp),%eax
08193d14 +0x097c:  mov    %eax,(%esp)
08193d17 +0x097f:  call   080c786e <_GLOBAL__I_g_ServerString_+0xdd9>  ; global constructors keyed to g_ServerString_+0xdd9
08193d1c +0x0984:  mov    (%eax),%eax
08193d1e +0x0986:  cmp    %eax,%esi
08193d20 +0x0988:  sete   %al
08193d23 +0x098b:  test   %al,%al
08193d25 +0x098d:  je     08193d67 <+0x9cf>
08193d27 +0x098f:  mov    0xc(%ebp),%eax
08193d2a +0x0992:  mov    %eax,(%esp)
08193d2d +0x0995:  call   080c786e <_GLOBAL__I_g_ServerString_+0xdd9>  ; global constructors keyed to g_ServerString_+0xdd9
08193d32 +0x099a:  mov    (%eax),%esi
08193d34 +0x099c:  mov    0xc(%ebp),%eax
08193d37 +0x099f:  mov    %eax,(%esp)
08193d3a +0x09a2:  call   080c786e <_GLOBAL__I_g_ServerString_+0xdd9>  ; global constructors keyed to g_ServerString_+0xdd9
08193d3f +0x09a7:  mov    (%eax),%eax
08193d41 +0x09a9:  mov    0x14(%ebp),%edx
08193d44 +0x09ac:  mov    %edx,0x10(%esp)
08193d48 +0x09b0:  mov    %esi,0xc(%esp)
08193d4c +0x09b4:  mov    %eax,0x8(%esp)
08193d50 +0x09b8:  mov    0xc(%ebp),%eax
08193d53 +0x09bb:  mov    %eax,0x4(%esp)
08193d57 +0x09bf:  mov    %ebx,(%esp)
08193d5a +0x09c2:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193d5f +0x09c7:  sub    $0x4,%esp
08193d62 +0x09ca:  jmp    08193fa3 <+0xc0b>
08193d67 +0x09cf:  mov    0x14(%ebp),%eax
08193d6a +0x09d2:  mov    %eax,0x4(%esp)
08193d6e +0x09d6:  lea    -0x1d(%ebp),%eax
08193d71 +0x09d9:  mov    %eax,(%esp)
08193d74 +0x09dc:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
08193d79 +0x09e1:  mov    %eax,%esi
08193d7b +0x09e3:  lea    -0x30(%ebp),%eax
08193d7e +0x09e6:  mov    %eax,(%esp)
08193d81 +0x09e9:  call   08193454 <+0xbc>
08193d86 +0x09ee:  mov    (%eax),%eax
08193d88 +0x09f0:  mov    %eax,(%esp)
08193d8b +0x09f3:  call   080c7a17 <_GLOBAL__I_g_ServerString_+0xf82>  ; global constructors keyed to g_ServerString_+0xf82
08193d90 +0x09f8:  mov    0xc(%ebp),%edx
08193d93 +0x09fb:  mov    %esi,0x8(%esp)
08193d97 +0x09ff:  mov    %eax,0x4(%esp)
08193d9b +0x0a03:  mov    %edx,(%esp)
08193d9e +0x0a06:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08193da3 +0x0a0b:  test   %al,%al
08193da5 +0x0a0d:  je     08193e14 <+0xa7c>
08193da7 +0x0a0f:  mov    -0x30(%ebp),%eax
08193daa +0x0a12:  mov    %eax,(%esp)
08193dad +0x0a15:  call   080c7feb <_GLOBAL__I_g_ServerString_+0x1556>  ; global constructors keyed to g_ServerString_+0x1556
08193db2 +0x0a1a:  test   %eax,%eax
08193db4 +0x0a1c:  sete   %al
08193db7 +0x0a1f:  test   %al,%al
08193db9 +0x0a21:  je     08193de8 <+0xa50>
08193dbb +0x0a23:  mov    -0x30(%ebp),%eax
08193dbe +0x0a26:  mov    0x14(%ebp),%edx
08193dc1 +0x0a29:  mov    %edx,0x10(%esp)
08193dc5 +0x0a2d:  mov    %eax,0xc(%esp)
08193dc9 +0x0a31:  movl   $0x0,0x8(%esp)
08193dd1 +0x0a39:  mov    0xc(%ebp),%eax
08193dd4 +0x0a3c:  mov    %eax,0x4(%esp)
08193dd8 +0x0a40:  mov    %ebx,(%esp)
08193ddb +0x0a43:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193de0 +0x0a48:  sub    $0x4,%esp
08193de3 +0x0a4b:  jmp    08193fa3 <+0xc0b>
08193de8 +0x0a50:  mov    0x10(%ebp),%edx
08193deb +0x0a53:  mov    0x10(%ebp),%eax
08193dee +0x0a56:  mov    0x14(%ebp),%ecx
08193df1 +0x0a59:  mov    %ecx,0x10(%esp)
08193df5 +0x0a5d:  mov    %edx,0xc(%esp)
08193df9 +0x0a61:  mov    %eax,0x8(%esp)
08193dfd +0x0a65:  mov    0xc(%ebp),%eax
08193e00 +0x0a68:  mov    %eax,0x4(%esp)
08193e04 +0x0a6c:  mov    %ebx,(%esp)
08193e07 +0x0a6f:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193e0c +0x0a74:  sub    $0x4,%esp
08193e0f +0x0a77:  jmp    08193fa3 <+0xc0b>
08193e14 +0x0a7c:  lea    -0x1c(%ebp),%eax
08193e17 +0x0a7f:  mov    0x14(%ebp),%edx
08193e1a +0x0a82:  mov    %edx,0x8(%esp)
08193e1e +0x0a86:  mov    0xc(%ebp),%edx
08193e21 +0x0a89:  mov    %edx,0x4(%esp)
08193e25 +0x0a8d:  mov    %eax,(%esp)
08193e28 +0x0a90:  call   080c7160 <_GLOBAL__I_g_ServerString_+0x6cb>  ; global constructors keyed to g_ServerString_+0x6cb
08193e2d +0x0a95:  sub    $0x4,%esp
08193e30 +0x0a98:  mov    -0x1c(%ebp),%eax
08193e33 +0x0a9b:  mov    %eax,(%ebx)
08193e35 +0x0a9d:  jmp    08193fa3 <+0xc0b>
08193e3a +0x0aa2:  mov    0x14(%ebp),%eax
08193e3d +0x0aa5:  mov    %eax,0x4(%esp)
08193e41 +0x0aa9:  lea    -0x12(%ebp),%eax
08193e44 +0x0aac:  mov    %eax,(%esp)
08193e47 +0x0aaf:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
08193e4c +0x0ab4:  mov    %eax,%esi
08193e4e +0x0ab6:  mov    0x10(%ebp),%eax
08193e51 +0x0ab9:  mov    %eax,(%esp)
08193e54 +0x0abc:  call   080c7a17 <_GLOBAL__I_g_ServerString_+0xf82>  ; global constructors keyed to g_ServerString_+0xf82
08193e59 +0x0ac1:  mov    0xc(%ebp),%edx
08193e5c +0x0ac4:  mov    %esi,0x8(%esp)
08193e60 +0x0ac8:  mov    %eax,0x4(%esp)
08193e64 +0x0acc:  mov    %edx,(%esp)
08193e67 +0x0acf:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08193e6c +0x0ad4:  test   %al,%al
08193e6e +0x0ad6:  je     08193f94 <+0xbfc>
08193e74 +0x0adc:  mov    0x10(%ebp),%eax
08193e77 +0x0adf:  mov    %eax,-0x34(%ebp)
08193e7a +0x0ae2:  mov    0x10(%ebp),%esi
08193e7d +0x0ae5:  mov    0xc(%ebp),%eax
08193e80 +0x0ae8:  mov    %eax,(%esp)
08193e83 +0x0aeb:  call   080c7886 <_GLOBAL__I_g_ServerString_+0xdf1>  ; global constructors keyed to g_ServerString_+0xdf1
08193e88 +0x0af0:  mov    (%eax),%eax
08193e8a +0x0af2:  cmp    %eax,%esi
08193e8c +0x0af4:  sete   %al
08193e8f +0x0af7:  test   %al,%al
08193e91 +0x0af9:  je     08193eca <+0xb32>
08193e93 +0x0afb:  mov    0xc(%ebp),%eax
08193e96 +0x0afe:  mov    %eax,(%esp)
08193e99 +0x0b01:  call   080c7886 <_GLOBAL__I_g_ServerString_+0xdf1>  ; global constructors keyed to g_ServerString_+0xdf1
08193e9e +0x0b06:  mov    (%eax),%eax
08193ea0 +0x0b08:  mov    0x14(%ebp),%edx
08193ea3 +0x0b0b:  mov    %edx,0x10(%esp)
08193ea7 +0x0b0f:  mov    %eax,0xc(%esp)
08193eab +0x0b13:  movl   $0x0,0x8(%esp)
08193eb3 +0x0b1b:  mov    0xc(%ebp),%eax
08193eb6 +0x0b1e:  mov    %eax,0x4(%esp)
08193eba +0x0b22:  mov    %ebx,(%esp)
08193ebd +0x0b25:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193ec2 +0x0b2a:  sub    $0x4,%esp
08193ec5 +0x0b2d:  jmp    08193fa3 <+0xc0b>
08193eca +0x0b32:  lea    -0x34(%ebp),%eax
08193ecd +0x0b35:  mov    %eax,(%esp)
08193ed0 +0x0b38:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
08193ed5 +0x0b3d:  mov    (%eax),%eax
08193ed7 +0x0b3f:  mov    %eax,(%esp)
08193eda +0x0b42:  call   080c7a17 <_GLOBAL__I_g_ServerString_+0xf82>  ; global constructors keyed to g_ServerString_+0xf82
08193edf +0x0b47:  mov    %eax,%esi
08193ee1 +0x0b49:  mov    0x14(%ebp),%eax
08193ee4 +0x0b4c:  mov    %eax,0x4(%esp)
08193ee8 +0x0b50:  lea    -0x11(%ebp),%eax
08193eeb +0x0b53:  mov    %eax,(%esp)
08193eee +0x0b56:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
08193ef3 +0x0b5b:  mov    0xc(%ebp),%edx
08193ef6 +0x0b5e:  mov    %esi,0x8(%esp)
08193efa +0x0b62:  mov    %eax,0x4(%esp)
08193efe +0x0b66:  mov    %edx,(%esp)
08193f01 +0x0b69:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08193f06 +0x0b6e:  test   %al,%al
08193f08 +0x0b70:  je     08193f71 <+0xbd9>
08193f0a +0x0b72:  mov    0x10(%ebp),%eax
08193f0d +0x0b75:  mov    %eax,(%esp)
08193f10 +0x0b78:  call   080c7feb <_GLOBAL__I_g_ServerString_+0x1556>  ; global constructors keyed to g_ServerString_+0x1556
08193f15 +0x0b7d:  test   %eax,%eax
08193f17 +0x0b7f:  sete   %al
08193f1a +0x0b82:  test   %al,%al
08193f1c +0x0b84:  je     08193f48 <+0xbb0>
08193f1e +0x0b86:  mov    0x10(%ebp),%eax
08193f21 +0x0b89:  mov    0x14(%ebp),%edx
08193f24 +0x0b8c:  mov    %edx,0x10(%esp)
08193f28 +0x0b90:  mov    %eax,0xc(%esp)
08193f2c +0x0b94:  movl   $0x0,0x8(%esp)
08193f34 +0x0b9c:  mov    0xc(%ebp),%eax
08193f37 +0x0b9f:  mov    %eax,0x4(%esp)
08193f3b +0x0ba3:  mov    %ebx,(%esp)
08193f3e +0x0ba6:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193f43 +0x0bab:  sub    $0x4,%esp
08193f46 +0x0bae:  jmp    08193fa3 <+0xc0b>
08193f48 +0x0bb0:  mov    -0x34(%ebp),%edx
08193f4b +0x0bb3:  mov    -0x34(%ebp),%eax
08193f4e +0x0bb6:  mov    0x14(%ebp),%ecx
08193f51 +0x0bb9:  mov    %ecx,0x10(%esp)
08193f55 +0x0bbd:  mov    %edx,0xc(%esp)
08193f59 +0x0bc1:  mov    %eax,0x8(%esp)
08193f5d +0x0bc5:  mov    0xc(%ebp),%eax
08193f60 +0x0bc8:  mov    %eax,0x4(%esp)
08193f64 +0x0bcc:  mov    %ebx,(%esp)
08193f67 +0x0bcf:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
08193f6c +0x0bd4:  sub    $0x4,%esp
08193f6f +0x0bd7:  jmp    08193fa3 <+0xc0b>
08193f71 +0x0bd9:  lea    -0x10(%ebp),%eax
08193f74 +0x0bdc:  mov    0x14(%ebp),%edx
08193f77 +0x0bdf:  mov    %edx,0x8(%esp)
08193f7b +0x0be3:  mov    0xc(%ebp),%edx
08193f7e +0x0be6:  mov    %edx,0x4(%esp)
08193f82 +0x0bea:  mov    %eax,(%esp)
08193f85 +0x0bed:  call   080c7160 <_GLOBAL__I_g_ServerString_+0x6cb>  ; global constructors keyed to g_ServerString_+0x6cb
08193f8a +0x0bf2:  sub    $0x4,%esp
08193f8d +0x0bf5:  mov    -0x10(%ebp),%eax
08193f90 +0x0bf8:  mov    %eax,(%ebx)
08193f92 +0x0bfa:  jmp    08193fa3 <+0xc0b>
08193f94 +0x0bfc:  mov    0x10(%ebp),%eax
08193f97 +0x0bff:  mov    %eax,0x4(%esp)
08193f9b +0x0c03:  mov    %ebx,(%esp)
08193f9e +0x0c06:  call   080c78bc <_GLOBAL__I_g_ServerString_+0xe27>  ; global constructors keyed to g_ServerString_+0xe27
08193fa3 +0x0c0b:  mov    %ebx,%eax
08193fa5 +0x0c0d:  lea    -0x8(%ebp),%esp
08193fa8 +0x0c10:  add    $0x0,%esp
08193fab +0x0c13:  pop    %ebx
08193fac +0x0c14:  pop    %esi
08193fad +0x0c15:  pop    %ebp
08193fae +0x0c16:  ret    $0x4
08193fb1 +0x0c19:  nop
08193fb2 +0x0c1a:  push   %ebp
08193fb3 +0x0c1b:  mov    %esp,%ebp
08193fb5 +0x0c1d:  push   %esi
08193fb6 +0x0c1e:  push   %ebx
08193fb7 +0x0c1f:  sub    $0x20,%esp
08193fba +0x0c22:  mov    0x8(%ebp),%esi
08193fbd +0x0c25:  mov    0xc(%ebp),%eax
08193fc0 +0x0c28:  mov    %eax,(%esp)
08193fc3 +0x0c2b:  call   08194436 <+0x109e>
08193fc8 +0x0c30:  mov    %eax,%ebx
08193fca +0x0c32:  mov    0xc(%ebp),%eax
08193fcd +0x0c35:  mov    %eax,(%esp)
08193fd0 +0x0c38:  call   0819442a <+0x1092>
08193fd5 +0x0c3d:  mov    0x10(%ebp),%edx
08193fd8 +0x0c40:  mov    %edx,0x10(%esp)
08193fdc +0x0c44:  mov    %ebx,0xc(%esp)
08193fe0 +0x0c48:  mov    %eax,0x8(%esp)
08193fe4 +0x0c4c:  mov    0xc(%ebp),%eax
08193fe7 +0x0c4f:  mov    %eax,0x4(%esp)
08193feb +0x0c53:  mov    %esi,(%esp)
08193fee +0x0c56:  call   08194442 <+0x10aa>
08193ff3 +0x0c5b:  sub    $0x4,%esp
08193ff6 +0x0c5e:  mov    %esi,%eax
08193ff8 +0x0c60:  lea    -0x8(%ebp),%esp
08193ffb +0x0c63:  add    $0x0,%esp
08193ffe +0x0c66:  pop    %ebx
08193fff +0x0c67:  pop    %esi
08194000 +0x0c68:  pop    %ebp
08194001 +0x0c69:  ret    $0x4
08194004 +0x0c6c:  push   %ebp
08194005 +0x0c6d:  mov    %esp,%ebp
08194007 +0x0c6f:  mov    0x8(%ebp),%eax
0819400a +0x0c72:  pop    %ebp
0819400b +0x0c73:  ret    $0x4
0819400e +0x0c76:  push   %ebp
0819400f +0x0c77:  mov    %esp,%ebp
08194011 +0x0c79:  push   %ebx
08194012 +0x0c7a:  sub    $0x14,%esp
08194015 +0x0c7d:  mov    0x8(%ebp),%ebx
08194018 +0x0c80:  mov    0xc(%ebp),%eax
0819401b +0x0c83:  add    $0x4,%eax
0819401e +0x0c86:  mov    %eax,0x4(%esp)
08194022 +0x0c8a:  mov    %ebx,(%esp)
08194025 +0x0c8d:  call   081944be <+0x1126>
0819402a +0x0c92:  mov    %ebx,%eax
0819402c +0x0c94:  add    $0x14,%esp
0819402f +0x0c97:  pop    %ebx
08194030 +0x0c98:  pop    %ebp
08194031 +0x0c99:  ret    $0x4
08194034 +0x0c9c:  push   %ebp
08194035 +0x0c9d:  mov    %esp,%ebp
08194037 +0x0c9f:  mov    0x8(%ebp),%eax
0819403a +0x0ca2:  pop    %ebp
0819403b +0x0ca3:  ret
0819403c +0x0ca4:  push   %ebp
0819403d +0x0ca5:  mov    %esp,%ebp
0819403f +0x0ca7:  mov    0xc(%ebp),%eax
08194042 +0x0caa:  mov    (%eax),%edx
08194044 +0x0cac:  mov    0x8(%ebp),%eax
08194047 +0x0caf:  mov    %edx,(%eax)
08194049 +0x0cb1:  pop    %ebp
0819404a +0x0cb2:  ret
0819404b +0x0cb3:  nop
0819404c +0x0cb4:  push   %ebp
0819404d +0x0cb5:  mov    %esp,%ebp
0819404f +0x0cb7:  push   %esi
08194050 +0x0cb8:  push   %ebx
08194051 +0x0cb9:  sub    $0x50,%esp
08194054 +0x0cbc:  mov    0x8(%ebp),%ebx
08194057 +0x0cbf:  mov    0x10(%ebp),%esi
0819405a +0x0cc2:  mov    0xc(%ebp),%eax
0819405d +0x0cc5:  mov    %eax,(%esp)
08194060 +0x0cc8:  call   08194436 <+0x109e>
08194065 +0x0ccd:  cmp    %eax,%esi
08194067 +0x0ccf:  sete   %al
0819406a +0x0cd2:  test   %al,%al
0819406c +0x0cd4:  je     0819412e <+0xd96>
08194072 +0x0cda:  mov    0xc(%ebp),%eax
08194075 +0x0cdd:  mov    %eax,(%esp)
08194078 +0x0ce0:  call   08194502 <+0x116a>
0819407d +0x0ce5:  test   %eax,%eax
0819407f +0x0ce7:  je     081940c8 <+0xd30>
08194081 +0x0ce9:  mov    0x14(%ebp),%eax
08194084 +0x0cec:  mov    %eax,0x4(%esp)
08194088 +0x0cf0:  lea    -0x29(%ebp),%eax
0819408b +0x0cf3:  mov    %eax,(%esp)
0819408e +0x0cf6:  call   081944fa <+0x1162>
08194093 +0x0cfb:  mov    %eax,%esi
08194095 +0x0cfd:  mov    0xc(%ebp),%eax
08194098 +0x0d00:  mov    %eax,(%esp)
0819409b +0x0d03:  call   081944cc <+0x1134>
081940a0 +0x0d08:  mov    (%eax),%eax
081940a2 +0x0d0a:  mov    %eax,(%esp)
081940a5 +0x0d0d:  call   081944d7 <+0x113f>
081940aa +0x0d12:  mov    0xc(%ebp),%edx
081940ad +0x0d15:  mov    %esi,0x8(%esp)
081940b1 +0x0d19:  mov    %eax,0x4(%esp)
081940b5 +0x0d1d:  mov    %edx,(%esp)
081940b8 +0x0d20:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081940bd +0x0d25:  test   %al,%al
081940bf +0x0d27:  je     081940c8 <+0xd30>
081940c1 +0x0d29:  mov    $0x1,%eax
081940c6 +0x0d2e:  jmp    081940cd <+0xd35>
081940c8 +0x0d30:  mov    $0x0,%eax
081940cd +0x0d35:  test   %al,%al
081940cf +0x0d37:  je     08194108 <+0xd70>
081940d1 +0x0d39:  mov    0xc(%ebp),%eax
081940d4 +0x0d3c:  mov    %eax,(%esp)
081940d7 +0x0d3f:  call   081944cc <+0x1134>
081940dc +0x0d44:  mov    (%eax),%eax
081940de +0x0d46:  mov    0x14(%ebp),%edx
081940e1 +0x0d49:  mov    %edx,0x10(%esp)
081940e5 +0x0d4d:  mov    %eax,0xc(%esp)
081940e9 +0x0d51:  movl   $0x0,0x8(%esp)
081940f1 +0x0d59:  mov    0xc(%ebp),%eax
081940f4 +0x0d5c:  mov    %eax,0x4(%esp)
081940f8 +0x0d60:  mov    %ebx,(%esp)
081940fb +0x0d63:  call   0819450e <+0x1176>
08194100 +0x0d68:  sub    $0x4,%esp
08194103 +0x0d6b:  jmp    08194403 <+0x106b>
08194108 +0x0d70:  lea    -0x28(%ebp),%eax
0819410b +0x0d73:  mov    0x14(%ebp),%edx
0819410e +0x0d76:  mov    %edx,0x8(%esp)
08194112 +0x0d7a:  mov    0xc(%ebp),%edx
08194115 +0x0d7d:  mov    %edx,0x4(%esp)
08194119 +0x0d81:  mov    %eax,(%esp)
0819411c +0x0d84:  call   081945d6 <+0x123e>
08194121 +0x0d89:  sub    $0x4,%esp
08194124 +0x0d8c:  mov    -0x28(%ebp),%eax
08194127 +0x0d8f:  mov    %eax,(%ebx)
08194129 +0x0d91:  jmp    08194403 <+0x106b>
0819412e +0x0d96:  mov    0x10(%ebp),%eax
08194131 +0x0d99:  mov    %eax,(%esp)
08194134 +0x0d9c:  call   081944d7 <+0x113f>
08194139 +0x0da1:  mov    %eax,%esi
0819413b +0x0da3:  mov    0x14(%ebp),%eax
0819413e +0x0da6:  mov    %eax,0x4(%esp)
08194142 +0x0daa:  lea    -0x1e(%ebp),%eax
08194145 +0x0dad:  mov    %eax,(%esp)
08194148 +0x0db0:  call   081944fa <+0x1162>
0819414d +0x0db5:  mov    0xc(%ebp),%edx
08194150 +0x0db8:  mov    %esi,0x8(%esp)
08194154 +0x0dbc:  mov    %eax,0x4(%esp)
08194158 +0x0dc0:  mov    %edx,(%esp)
0819415b +0x0dc3:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08194160 +0x0dc8:  test   %al,%al
08194162 +0x0dca:  je     0819429a <+0xf02>
08194168 +0x0dd0:  mov    0x10(%ebp),%eax
0819416b +0x0dd3:  mov    %eax,-0x30(%ebp)
0819416e +0x0dd6:  mov    0x10(%ebp),%esi
08194171 +0x0dd9:  mov    0xc(%ebp),%eax
08194174 +0x0ddc:  mov    %eax,(%esp)
08194177 +0x0ddf:  call   081947a6 <+0x140e>
0819417c +0x0de4:  mov    (%eax),%eax
0819417e +0x0de6:  cmp    %eax,%esi
08194180 +0x0de8:  sete   %al
08194183 +0x0deb:  test   %al,%al
08194185 +0x0ded:  je     081941c7 <+0xe2f>
08194187 +0x0def:  mov    0xc(%ebp),%eax
0819418a +0x0df2:  mov    %eax,(%esp)
0819418d +0x0df5:  call   081947a6 <+0x140e>
08194192 +0x0dfa:  mov    (%eax),%esi
08194194 +0x0dfc:  mov    0xc(%ebp),%eax
08194197 +0x0dff:  mov    %eax,(%esp)
0819419a +0x0e02:  call   081947a6 <+0x140e>
0819419f +0x0e07:  mov    (%eax),%eax
081941a1 +0x0e09:  mov    0x14(%ebp),%edx
081941a4 +0x0e0c:  mov    %edx,0x10(%esp)
081941a8 +0x0e10:  mov    %esi,0xc(%esp)
081941ac +0x0e14:  mov    %eax,0x8(%esp)
081941b0 +0x0e18:  mov    0xc(%ebp),%eax
081941b3 +0x0e1b:  mov    %eax,0x4(%esp)
081941b7 +0x0e1f:  mov    %ebx,(%esp)
081941ba +0x0e22:  call   0819450e <+0x1176>
081941bf +0x0e27:  sub    $0x4,%esp
081941c2 +0x0e2a:  jmp    08194403 <+0x106b>
081941c7 +0x0e2f:  mov    0x14(%ebp),%eax
081941ca +0x0e32:  mov    %eax,0x4(%esp)
081941ce +0x0e36:  lea    -0x1d(%ebp),%eax
081941d1 +0x0e39:  mov    %eax,(%esp)
081941d4 +0x0e3c:  call   081944fa <+0x1162>
081941d9 +0x0e41:  mov    %eax,%esi
081941db +0x0e43:  lea    -0x30(%ebp),%eax
081941de +0x0e46:  mov    %eax,(%esp)
081941e1 +0x0e49:  call   081947b2 <+0x141a>
081941e6 +0x0e4e:  mov    (%eax),%eax
081941e8 +0x0e50:  mov    %eax,(%esp)
081941eb +0x0e53:  call   081944d7 <+0x113f>
081941f0 +0x0e58:  mov    0xc(%ebp),%edx
081941f3 +0x0e5b:  mov    %esi,0x8(%esp)
081941f7 +0x0e5f:  mov    %eax,0x4(%esp)
081941fb +0x0e63:  mov    %edx,(%esp)
081941fe +0x0e66:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08194203 +0x0e6b:  test   %al,%al
08194205 +0x0e6d:  je     08194274 <+0xedc>
08194207 +0x0e6f:  mov    -0x30(%ebp),%eax
0819420a +0x0e72:  mov    %eax,(%esp)
0819420d +0x0e75:  call   081947cf <+0x1437>
08194212 +0x0e7a:  test   %eax,%eax
08194214 +0x0e7c:  sete   %al
08194217 +0x0e7f:  test   %al,%al
08194219 +0x0e81:  je     08194248 <+0xeb0>
0819421b +0x0e83:  mov    -0x30(%ebp),%eax
0819421e +0x0e86:  mov    0x14(%ebp),%edx
08194221 +0x0e89:  mov    %edx,0x10(%esp)
08194225 +0x0e8d:  mov    %eax,0xc(%esp)
08194229 +0x0e91:  movl   $0x0,0x8(%esp)
08194231 +0x0e99:  mov    0xc(%ebp),%eax
08194234 +0x0e9c:  mov    %eax,0x4(%esp)
08194238 +0x0ea0:  mov    %ebx,(%esp)
0819423b +0x0ea3:  call   0819450e <+0x1176>
08194240 +0x0ea8:  sub    $0x4,%esp
08194243 +0x0eab:  jmp    08194403 <+0x106b>
08194248 +0x0eb0:  mov    0x10(%ebp),%edx
0819424b +0x0eb3:  mov    0x10(%ebp),%eax
0819424e +0x0eb6:  mov    0x14(%ebp),%ecx
08194251 +0x0eb9:  mov    %ecx,0x10(%esp)
08194255 +0x0ebd:  mov    %edx,0xc(%esp)
08194259 +0x0ec1:  mov    %eax,0x8(%esp)
0819425d +0x0ec5:  mov    0xc(%ebp),%eax
08194260 +0x0ec8:  mov    %eax,0x4(%esp)
08194264 +0x0ecc:  mov    %ebx,(%esp)
08194267 +0x0ecf:  call   0819450e <+0x1176>
0819426c +0x0ed4:  sub    $0x4,%esp
0819426f +0x0ed7:  jmp    08194403 <+0x106b>
08194274 +0x0edc:  lea    -0x1c(%ebp),%eax
08194277 +0x0edf:  mov    0x14(%ebp),%edx
0819427a +0x0ee2:  mov    %edx,0x8(%esp)
0819427e +0x0ee6:  mov    0xc(%ebp),%edx
08194281 +0x0ee9:  mov    %edx,0x4(%esp)
08194285 +0x0eed:  mov    %eax,(%esp)
08194288 +0x0ef0:  call   081945d6 <+0x123e>
0819428d +0x0ef5:  sub    $0x4,%esp
08194290 +0x0ef8:  mov    -0x1c(%ebp),%eax
08194293 +0x0efb:  mov    %eax,(%ebx)
08194295 +0x0efd:  jmp    08194403 <+0x106b>
0819429a +0x0f02:  mov    0x14(%ebp),%eax
0819429d +0x0f05:  mov    %eax,0x4(%esp)
081942a1 +0x0f09:  lea    -0x12(%ebp),%eax
081942a4 +0x0f0c:  mov    %eax,(%esp)
081942a7 +0x0f0f:  call   081944fa <+0x1162>
081942ac +0x0f14:  mov    %eax,%esi
081942ae +0x0f16:  mov    0x10(%ebp),%eax
081942b1 +0x0f19:  mov    %eax,(%esp)
081942b4 +0x0f1c:  call   081944d7 <+0x113f>
081942b9 +0x0f21:  mov    0xc(%ebp),%edx
081942bc +0x0f24:  mov    %esi,0x8(%esp)
081942c0 +0x0f28:  mov    %eax,0x4(%esp)
081942c4 +0x0f2c:  mov    %edx,(%esp)
081942c7 +0x0f2f:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081942cc +0x0f34:  test   %al,%al
081942ce +0x0f36:  je     081943f4 <+0x105c>
081942d4 +0x0f3c:  mov    0x10(%ebp),%eax
081942d7 +0x0f3f:  mov    %eax,-0x34(%ebp)
081942da +0x0f42:  mov    0x10(%ebp),%esi
081942dd +0x0f45:  mov    0xc(%ebp),%eax
081942e0 +0x0f48:  mov    %eax,(%esp)
081942e3 +0x0f4b:  call   081944cc <+0x1134>
081942e8 +0x0f50:  mov    (%eax),%eax
081942ea +0x0f52:  cmp    %eax,%esi
081942ec +0x0f54:  sete   %al
081942ef +0x0f57:  test   %al,%al
081942f1 +0x0f59:  je     0819432a <+0xf92>
081942f3 +0x0f5b:  mov    0xc(%ebp),%eax
081942f6 +0x0f5e:  mov    %eax,(%esp)
081942f9 +0x0f61:  call   081944cc <+0x1134>
081942fe +0x0f66:  mov    (%eax),%eax
08194300 +0x0f68:  mov    0x14(%ebp),%edx
08194303 +0x0f6b:  mov    %edx,0x10(%esp)
08194307 +0x0f6f:  mov    %eax,0xc(%esp)
0819430b +0x0f73:  movl   $0x0,0x8(%esp)
08194313 +0x0f7b:  mov    0xc(%ebp),%eax
08194316 +0x0f7e:  mov    %eax,0x4(%esp)
0819431a +0x0f82:  mov    %ebx,(%esp)
0819431d +0x0f85:  call   0819450e <+0x1176>
08194322 +0x0f8a:  sub    $0x4,%esp
08194325 +0x0f8d:  jmp    08194403 <+0x106b>
0819432a +0x0f92:  lea    -0x34(%ebp),%eax
0819432d +0x0f95:  mov    %eax,(%esp)
08194330 +0x0f98:  call   081947da <+0x1442>
08194335 +0x0f9d:  mov    (%eax),%eax
08194337 +0x0f9f:  mov    %eax,(%esp)
0819433a +0x0fa2:  call   081944d7 <+0x113f>
0819433f +0x0fa7:  mov    %eax,%esi
08194341 +0x0fa9:  mov    0x14(%ebp),%eax
08194344 +0x0fac:  mov    %eax,0x4(%esp)
08194348 +0x0fb0:  lea    -0x11(%ebp),%eax
0819434b +0x0fb3:  mov    %eax,(%esp)
0819434e +0x0fb6:  call   081944fa <+0x1162>
08194353 +0x0fbb:  mov    0xc(%ebp),%edx
08194356 +0x0fbe:  mov    %esi,0x8(%esp)
0819435a +0x0fc2:  mov    %eax,0x4(%esp)
0819435e +0x0fc6:  mov    %edx,(%esp)
08194361 +0x0fc9:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08194366 +0x0fce:  test   %al,%al
08194368 +0x0fd0:  je     081943d1 <+0x1039>
0819436a +0x0fd2:  mov    0x10(%ebp),%eax
0819436d +0x0fd5:  mov    %eax,(%esp)
08194370 +0x0fd8:  call   081947cf <+0x1437>
08194375 +0x0fdd:  test   %eax,%eax
08194377 +0x0fdf:  sete   %al
0819437a +0x0fe2:  test   %al,%al
0819437c +0x0fe4:  je     081943a8 <+0x1010>
0819437e +0x0fe6:  mov    0x10(%ebp),%eax
08194381 +0x0fe9:  mov    0x14(%ebp),%edx
08194384 +0x0fec:  mov    %edx,0x10(%esp)
08194388 +0x0ff0:  mov    %eax,0xc(%esp)
0819438c +0x0ff4:  movl   $0x0,0x8(%esp)
08194394 +0x0ffc:  mov    0xc(%ebp),%eax
08194397 +0x0fff:  mov    %eax,0x4(%esp)
0819439b +0x1003:  mov    %ebx,(%esp)
0819439e +0x1006:  call   0819450e <+0x1176>
081943a3 +0x100b:  sub    $0x4,%esp
081943a6 +0x100e:  jmp    08194403 <+0x106b>
081943a8 +0x1010:  mov    -0x34(%ebp),%edx
081943ab +0x1013:  mov    -0x34(%ebp),%eax
081943ae +0x1016:  mov    0x14(%ebp),%ecx
081943b1 +0x1019:  mov    %ecx,0x10(%esp)
081943b5 +0x101d:  mov    %edx,0xc(%esp)
081943b9 +0x1021:  mov    %eax,0x8(%esp)
081943bd +0x1025:  mov    0xc(%ebp),%eax
081943c0 +0x1028:  mov    %eax,0x4(%esp)
081943c4 +0x102c:  mov    %ebx,(%esp)
081943c7 +0x102f:  call   0819450e <+0x1176>
081943cc +0x1034:  sub    $0x4,%esp
081943cf +0x1037:  jmp    08194403 <+0x106b>
081943d1 +0x1039:  lea    -0x10(%ebp),%eax
081943d4 +0x103c:  mov    0x14(%ebp),%edx
081943d7 +0x103f:  mov    %edx,0x8(%esp)
081943db +0x1043:  mov    0xc(%ebp),%edx
081943de +0x1046:  mov    %edx,0x4(%esp)
081943e2 +0x104a:  mov    %eax,(%esp)
081943e5 +0x104d:  call   081945d6 <+0x123e>
081943ea +0x1052:  sub    $0x4,%esp
081943ed +0x1055:  mov    -0x10(%ebp),%eax
081943f0 +0x1058:  mov    %eax,(%ebx)
081943f2 +0x105a:  jmp    08194403 <+0x106b>
081943f4 +0x105c:  mov    0x10(%ebp),%eax
081943f7 +0x105f:  mov    %eax,0x4(%esp)
081943fb +0x1063:  mov    %ebx,(%esp)
081943fe +0x1066:  call   081944be <+0x1126>
08194403 +0x106b:  mov    %ebx,%eax
08194405 +0x106d:  lea    -0x8(%ebp),%esp
08194408 +0x1070:  add    $0x0,%esp
0819440b +0x1073:  pop    %ebx
0819440c +0x1074:  pop    %esi
0819440d +0x1075:  pop    %ebp
0819440e +0x1076:  ret    $0x4
08194411 +0x1079:  nop
08194412 +0x107a:  push   %ebp
08194413 +0x107b:  mov    %esp,%ebp
08194415 +0x107d:  mov    0xc(%ebp),%eax
08194418 +0x1080:  mov    (%eax),%edx
0819441a +0x1082:  mov    0x8(%ebp),%eax
0819441d +0x1085:  mov    %edx,(%eax)
0819441f +0x1087:  pop    %ebp
08194420 +0x1088:  ret
08194421 +0x1089:  nop
08194422 +0x108a:  push   %ebp
08194423 +0x108b:  mov    %esp,%ebp
08194425 +0x108d:  mov    0x8(%ebp),%eax
08194428 +0x1090:  pop    %ebp
08194429 +0x1091:  ret
0819442a +0x1092:  push   %ebp
0819442b +0x1093:  mov    %esp,%ebp
0819442d +0x1095:  mov    0x8(%ebp),%eax
08194430 +0x1098:  mov    0x8(%eax),%eax
08194433 +0x109b:  pop    %ebp
08194434 +0x109c:  ret
08194435 +0x109d:  nop
08194436 +0x109e:  push   %ebp
08194437 +0x109f:  mov    %esp,%ebp
08194439 +0x10a1:  mov    0x8(%ebp),%eax
0819443c +0x10a4:  add    $0x4,%eax
0819443f +0x10a7:  pop    %ebp
08194440 +0x10a8:  ret
08194441 +0x10a9:  nop
08194442 +0x10aa:  push   %ebp
08194443 +0x10ab:  mov    %esp,%ebp
08194445 +0x10ad:  push   %ebx
08194446 +0x10ae:  sub    $0x14,%esp
08194449 +0x10b1:  mov    0x8(%ebp),%ebx
0819444c +0x10b4:  jmp    0819449a <+0x1102>
0819444e +0x10b6:  mov    0x10(%ebp),%eax
08194451 +0x10b9:  mov    %eax,(%esp)
08194454 +0x10bc:  call   081947f7 <+0x145f>
08194459 +0x10c1:  mov    0xc(%ebp),%edx
0819445c +0x10c4:  mov    0x18(%ebp),%ecx
0819445f +0x10c7:  mov    %ecx,0x8(%esp)
08194463 +0x10cb:  mov    %eax,0x4(%esp)
08194467 +0x10cf:  mov    %edx,(%esp)
0819446a +0x10d2:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0819446f +0x10d7:  xor    $0x1,%eax
08194472 +0x10da:  test   %al,%al
08194474 +0x10dc:  je     0819448c <+0x10f4>
08194476 +0x10de:  mov    0x10(%ebp),%eax
08194479 +0x10e1:  mov    %eax,0x14(%ebp)
0819447c +0x10e4:  mov    0x10(%ebp),%eax
0819447f +0x10e7:  mov    %eax,(%esp)
08194482 +0x10ea:  call   08194819 <+0x1481>
08194487 +0x10ef:  mov    %eax,0x10(%ebp)
0819448a +0x10f2:  jmp    0819449a <+0x1102>
0819448c +0x10f4:  mov    0x10(%ebp),%eax
0819448f +0x10f7:  mov    %eax,(%esp)
08194492 +0x10fa:  call   08194824 <+0x148c>
08194497 +0x10ff:  mov    %eax,0x10(%ebp)
0819449a +0x1102:  cmpl   $0x0,0x10(%ebp)
0819449e +0x1106:  setne  %al
081944a1 +0x1109:  test   %al,%al
081944a3 +0x110b:  jne    0819444e <+0x10b6>
081944a5 +0x110d:  mov    0x14(%ebp),%eax
081944a8 +0x1110:  mov    %eax,0x4(%esp)
081944ac +0x1114:  mov    %ebx,(%esp)
081944af +0x1117:  call   081944be <+0x1126>
081944b4 +0x111c:  mov    %ebx,%eax
081944b6 +0x111e:  add    $0x14,%esp
081944b9 +0x1121:  pop    %ebx
081944ba +0x1122:  pop    %ebp
081944bb +0x1123:  ret    $0x4
081944be +0x1126:  push   %ebp
081944bf +0x1127:  mov    %esp,%ebp
081944c1 +0x1129:  mov    0xc(%ebp),%edx
081944c4 +0x112c:  mov    0x8(%ebp),%eax
081944c7 +0x112f:  mov    %edx,(%eax)
081944c9 +0x1131:  pop    %ebp
081944ca +0x1132:  ret
081944cb +0x1133:  nop
081944cc +0x1134:  push   %ebp
081944cd +0x1135:  mov    %esp,%ebp
081944cf +0x1137:  mov    0x8(%ebp),%eax
081944d2 +0x113a:  add    $0x10,%eax
081944d5 +0x113d:  pop    %ebp
081944d6 +0x113e:  ret
081944d7 +0x113f:  push   %ebp
081944d8 +0x1140:  mov    %esp,%ebp
081944da +0x1142:  sub    $0x28,%esp
081944dd +0x1145:  mov    0x8(%ebp),%eax
081944e0 +0x1148:  mov    %eax,(%esp)
081944e3 +0x114b:  call   0819482f <+0x1497>
081944e8 +0x1150:  mov    %eax,0x4(%esp)
081944ec +0x1154:  lea    -0x9(%ebp),%eax
081944ef +0x1157:  mov    %eax,(%esp)
081944f2 +0x115a:  call   081944fa <+0x1162>
081944f7 +0x115f:  leave
081944f8 +0x1160:  ret
081944f9 +0x1161:  nop
081944fa +0x1162:  push   %ebp
081944fb +0x1163:  mov    %esp,%ebp
081944fd +0x1165:  mov    0xc(%ebp),%eax
08194500 +0x1168:  pop    %ebp
08194501 +0x1169:  ret
08194502 +0x116a:  push   %ebp
08194503 +0x116b:  mov    %esp,%ebp
08194505 +0x116d:  mov    0x8(%ebp),%eax
08194508 +0x1170:  mov    0x14(%eax),%eax
0819450b +0x1173:  pop    %ebp
0819450c +0x1174:  ret
0819450d +0x1175:  nop
0819450e +0x1176:  push   %ebp
0819450f +0x1177:  mov    %esp,%ebp
08194511 +0x1179:  push   %esi
08194512 +0x117a:  push   %ebx
08194513 +0x117b:  sub    $0x20,%esp
08194516 +0x117e:  mov    0x8(%ebp),%esi
08194519 +0x1181:  cmpl   $0x0,0x10(%ebp)
0819451d +0x1185:  jne    08194565 <+0x11cd>
0819451f +0x1187:  mov    0xc(%ebp),%eax
08194522 +0x118a:  mov    %eax,(%esp)
08194525 +0x118d:  call   08194436 <+0x109e>
0819452a +0x1192:  cmp    0x14(%ebp),%eax
0819452d +0x1195:  je     08194565 <+0x11cd>
0819452f +0x1197:  mov    0x14(%ebp),%eax
08194532 +0x119a:  mov    %eax,(%esp)
08194535 +0x119d:  call   081944d7 <+0x113f>
0819453a +0x11a2:  mov    %eax,%ebx
0819453c +0x11a4:  mov    0x18(%ebp),%eax
0819453f +0x11a7:  mov    %eax,0x4(%esp)
08194543 +0x11ab:  lea    -0xe(%ebp),%eax
08194546 +0x11ae:  mov    %eax,(%esp)
08194549 +0x11b1:  call   081944fa <+0x1162>
0819454e +0x11b6:  mov    0xc(%ebp),%edx
08194551 +0x11b9:  mov    %ebx,0x8(%esp)
08194555 +0x11bd:  mov    %eax,0x4(%esp)
08194559 +0x11c1:  mov    %edx,(%esp)
0819455c +0x11c4:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08194561 +0x11c9:  test   %al,%al
08194563 +0x11cb:  je     0819456c <+0x11d4>
08194565 +0x11cd:  mov    $0x1,%eax
0819456a +0x11d2:  jmp    08194571 <+0x11d9>
0819456c +0x11d4:  mov    $0x0,%eax
08194571 +0x11d9:  mov    %al,-0xd(%ebp)
08194574 +0x11dc:  mov    0x18(%ebp),%eax
08194577 +0x11df:  mov    %eax,0x4(%esp)
0819457b +0x11e3:  mov    0xc(%ebp),%eax
0819457e +0x11e6:  mov    %eax,(%esp)
08194581 +0x11e9:  call   0819483a <+0x14a2>
08194586 +0x11ee:  mov    %eax,-0xc(%ebp)
08194589 +0x11f1:  mov    0xc(%ebp),%eax
0819458c +0x11f4:  lea    0x4(%eax),%ecx
0819458f +0x11f7:  mov    -0xc(%ebp),%edx
08194592 +0x11fa:  movzbl -0xd(%ebp),%eax
08194596 +0x11fe:  mov    %ecx,0xc(%esp)
0819459a +0x1202:  mov    0x14(%ebp),%ecx
0819459d +0x1205:  mov    %ecx,0x8(%esp)
081945a1 +0x1209:  mov    %edx,0x4(%esp)
081945a5 +0x120d:  mov    %eax,(%esp)
081945a8 +0x1210:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081945ad +0x1215:  mov    0xc(%ebp),%eax
081945b0 +0x1218:  mov    0x14(%eax),%eax
081945b3 +0x121b:  lea    0x1(%eax),%edx
081945b6 +0x121e:  mov    0xc(%ebp),%eax
081945b9 +0x1221:  mov    %edx,0x14(%eax)
081945bc +0x1224:  mov    -0xc(%ebp),%eax
081945bf +0x1227:  mov    %eax,0x4(%esp)
081945c3 +0x122b:  mov    %esi,(%esp)
081945c6 +0x122e:  call   081944be <+0x1126>
081945cb +0x1233:  mov    %esi,%eax
081945cd +0x1235:  add    $0x20,%esp
081945d0 +0x1238:  pop    %ebx
081945d1 +0x1239:  pop    %esi
081945d2 +0x123a:  pop    %ebp
081945d3 +0x123b:  ret    $0x4
081945d6 +0x123e:  push   %ebp
081945d7 +0x123f:  mov    %esp,%ebp
081945d9 +0x1241:  push   %esi
081945da +0x1242:  push   %ebx
081945db +0x1243:  sub    $0x50,%esp
081945de +0x1246:  mov    0x8(%ebp),%ebx
081945e1 +0x1249:  mov    0xc(%ebp),%eax
081945e4 +0x124c:  mov    %eax,(%esp)
081945e7 +0x124f:  call   0819442a <+0x1092>
081945ec +0x1254:  mov    %eax,-0x14(%ebp)
081945ef +0x1257:  mov    0xc(%ebp),%eax
081945f2 +0x125a:  mov    %eax,(%esp)
081945f5 +0x125d:  call   08194436 <+0x109e>
081945fa +0x1262:  mov    %eax,-0x10(%ebp)
081945fd +0x1265:  movb   $0x1,-0x9(%ebp)
08194601 +0x1269:  jmp    0819465f <+0x12c7>
08194603 +0x126b:  mov    -0x14(%ebp),%eax
08194606 +0x126e:  mov    %eax,-0x10(%ebp)
08194609 +0x1271:  mov    -0x14(%ebp),%eax
0819460c +0x1274:  mov    %eax,(%esp)
0819460f +0x1277:  call   081947f7 <+0x145f>
08194614 +0x127c:  mov    %eax,%esi
08194616 +0x127e:  mov    0x10(%ebp),%eax
08194619 +0x1281:  mov    %eax,0x4(%esp)
0819461d +0x1285:  lea    -0x2d(%ebp),%eax
08194620 +0x1288:  mov    %eax,(%esp)
08194623 +0x128b:  call   081944fa <+0x1162>
08194628 +0x1290:  mov    0xc(%ebp),%edx
0819462b +0x1293:  mov    %esi,0x8(%esp)
0819462f +0x1297:  mov    %eax,0x4(%esp)
08194633 +0x129b:  mov    %edx,(%esp)
08194636 +0x129e:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0819463b +0x12a3:  mov    %al,-0x9(%ebp)
0819463e +0x12a6:  cmpb   $0x0,-0x9(%ebp)
08194642 +0x12aa:  je     08194651 <+0x12b9>
08194644 +0x12ac:  mov    -0x14(%ebp),%eax
08194647 +0x12af:  mov    %eax,(%esp)
0819464a +0x12b2:  call   08194819 <+0x1481>
0819464f +0x12b7:  jmp    0819465c <+0x12c4>
08194651 +0x12b9:  mov    -0x14(%ebp),%eax
08194654 +0x12bc:  mov    %eax,(%esp)
08194657 +0x12bf:  call   08194824 <+0x148c>
0819465c +0x12c4:  mov    %eax,-0x14(%ebp)
0819465f +0x12c7:  cmpl   $0x0,-0x14(%ebp)
08194663 +0x12cb:  setne  %al
08194666 +0x12ce:  test   %al,%al
08194668 +0x12d0:  jne    08194603 <+0x126b>
0819466a +0x12d2:  mov    -0x10(%ebp),%eax
0819466d +0x12d5:  mov    %eax,0x4(%esp)
08194671 +0x12d9:  lea    -0x34(%ebp),%eax
08194674 +0x12dc:  mov    %eax,(%esp)
08194677 +0x12df:  call   081944be <+0x1126>
0819467c +0x12e4:  cmpb   $0x0,-0x9(%ebp)
08194680 +0x12e8:  je     08194701 <+0x1369>
08194682 +0x12ea:  lea    -0x2c(%ebp),%eax
08194685 +0x12ed:  mov    0xc(%ebp),%edx
08194688 +0x12f0:  mov    %edx,0x4(%esp)
0819468c +0x12f4:  mov    %eax,(%esp)
0819468f +0x12f7:  call   081948bc <+0x1524>
08194694 +0x12fc:  sub    $0x4,%esp
08194697 +0x12ff:  lea    -0x2c(%ebp),%eax
0819469a +0x1302:  mov    %eax,0x4(%esp)
0819469e +0x1306:  lea    -0x34(%ebp),%eax
081946a1 +0x1309:  mov    %eax,(%esp)
081946a4 +0x130c:  call   08193a54 <+0x6bc>
081946a9 +0x1311:  test   %al,%al
081946ab +0x1313:  je     081946f6 <+0x135e>
081946ad +0x1315:  movb   $0x1,-0x25(%ebp)
081946b1 +0x1319:  mov    -0x10(%ebp),%ecx
081946b4 +0x131c:  mov    -0x14(%ebp),%edx
081946b7 +0x131f:  lea    -0x24(%ebp),%eax
081946ba +0x1322:  mov    0x10(%ebp),%esi
081946bd +0x1325:  mov    %esi,0x10(%esp)
081946c1 +0x1329:  mov    %ecx,0xc(%esp)
081946c5 +0x132d:  mov    %edx,0x8(%esp)
081946c9 +0x1331:  mov    0xc(%ebp),%edx
081946cc +0x1334:  mov    %edx,0x4(%esp)
081946d0 +0x1338:  mov    %eax,(%esp)
081946d3 +0x133b:  call   0819450e <+0x1176>
081946d8 +0x1340:  sub    $0x4,%esp
081946db +0x1343:  lea    -0x25(%ebp),%eax
081946de +0x1346:  mov    %eax,0x8(%esp)
081946e2 +0x134a:  lea    -0x24(%ebp),%eax
081946e5 +0x134d:  mov    %eax,0x4(%esp)
081946e9 +0x1351:  mov    %ebx,(%esp)
081946ec +0x1354:  call   081948e2 <+0x154a>
081946f1 +0x1359:  jmp    08194797 <+0x13ff>
081946f6 +0x135e:  lea    -0x34(%ebp),%eax
081946f9 +0x1361:  mov    %eax,(%esp)
081946fc +0x1364:  call   08194910 <+0x1578>
08194701 +0x1369:  mov    0x10(%ebp),%eax
08194704 +0x136c:  mov    %eax,0x4(%esp)
08194708 +0x1370:  lea    -0x1e(%ebp),%eax
0819470b +0x1373:  mov    %eax,(%esp)
0819470e +0x1376:  call   081944fa <+0x1162>
08194713 +0x137b:  mov    %eax,%esi
08194715 +0x137d:  mov    -0x34(%ebp),%eax
08194718 +0x1380:  mov    %eax,(%esp)
0819471b +0x1383:  call   081944d7 <+0x113f>
08194720 +0x1388:  mov    0xc(%ebp),%edx
08194723 +0x138b:  mov    %esi,0x8(%esp)
08194727 +0x138f:  mov    %eax,0x4(%esp)
0819472b +0x1393:  mov    %edx,(%esp)
0819472e +0x1396:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08194733 +0x139b:  test   %al,%al
08194735 +0x139d:  je     0819477d <+0x13e5>
08194737 +0x139f:  movb   $0x1,-0x1d(%ebp)
0819473b +0x13a3:  mov    -0x10(%ebp),%ecx
0819473e +0x13a6:  mov    -0x14(%ebp),%edx
08194741 +0x13a9:  lea    -0x1c(%ebp),%eax
08194744 +0x13ac:  mov    0x10(%ebp),%esi
08194747 +0x13af:  mov    %esi,0x10(%esp)
0819474b +0x13b3:  mov    %ecx,0xc(%esp)
0819474f +0x13b7:  mov    %edx,0x8(%esp)
08194753 +0x13bb:  mov    0xc(%ebp),%edx
08194756 +0x13be:  mov    %edx,0x4(%esp)
0819475a +0x13c2:  mov    %eax,(%esp)
0819475d +0x13c5:  call   0819450e <+0x1176>
08194762 +0x13ca:  sub    $0x4,%esp
08194765 +0x13cd:  lea    -0x1d(%ebp),%eax
08194768 +0x13d0:  mov    %eax,0x8(%esp)
0819476c +0x13d4:  lea    -0x1c(%ebp),%eax
0819476f +0x13d7:  mov    %eax,0x4(%esp)
08194773 +0x13db:  mov    %ebx,(%esp)
08194776 +0x13de:  call   081948e2 <+0x154a>
0819477b +0x13e3:  jmp    08194797 <+0x13ff>
0819477d +0x13e5:  movb   $0x0,-0x15(%ebp)
08194781 +0x13e9:  lea    -0x15(%ebp),%eax
08194784 +0x13ec:  mov    %eax,0x8(%esp)
08194788 +0x13f0:  lea    -0x34(%ebp),%eax
0819478b +0x13f3:  mov    %eax,0x4(%esp)
0819478f +0x13f7:  mov    %ebx,(%esp)
08194792 +0x13fa:  call   0819492e <+0x1596>
08194797 +0x13ff:  mov    %ebx,%eax
08194799 +0x1401:  lea    -0x8(%ebp),%esp
0819479c +0x1404:  add    $0x0,%esp
0819479f +0x1407:  pop    %ebx
081947a0 +0x1408:  pop    %esi
081947a1 +0x1409:  pop    %ebp
081947a2 +0x140a:  ret    $0x4
081947a5 +0x140d:  nop
081947a6 +0x140e:  push   %ebp
081947a7 +0x140f:  mov    %esp,%ebp
081947a9 +0x1411:  mov    0x8(%ebp),%eax
081947ac +0x1414:  add    $0xc,%eax
081947af +0x1417:  pop    %ebp
081947b0 +0x1418:  ret
081947b1 +0x1419:  nop
081947b2 +0x141a:  push   %ebp
081947b3 +0x141b:  mov    %esp,%ebp
081947b5 +0x141d:  sub    $0x18,%esp
081947b8 +0x1420:  mov    0x8(%ebp),%eax
081947bb +0x1423:  mov    (%eax),%eax
081947bd +0x1425:  mov    %eax,(%esp)
081947c0 +0x1428:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
081947c5 +0x142d:  mov    0x8(%ebp),%edx
081947c8 +0x1430:  mov    %eax,(%edx)
081947ca +0x1432:  mov    0x8(%ebp),%eax
081947cd +0x1435:  leave
081947ce +0x1436:  ret
081947cf +0x1437:  push   %ebp
081947d0 +0x1438:  mov    %esp,%ebp
081947d2 +0x143a:  mov    0x8(%ebp),%eax
081947d5 +0x143d:  mov    0xc(%eax),%eax
081947d8 +0x1440:  pop    %ebp
081947d9 +0x1441:  ret
081947da +0x1442:  push   %ebp
081947db +0x1443:  mov    %esp,%ebp
081947dd +0x1445:  sub    $0x18,%esp
081947e0 +0x1448:  mov    0x8(%ebp),%eax
081947e3 +0x144b:  mov    (%eax),%eax
081947e5 +0x144d:  mov    %eax,(%esp)
081947e8 +0x1450:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
081947ed +0x1455:  mov    0x8(%ebp),%edx
081947f0 +0x1458:  mov    %eax,(%edx)
081947f2 +0x145a:  mov    0x8(%ebp),%eax
081947f5 +0x145d:  leave
081947f6 +0x145e:  ret
081947f7 +0x145f:  push   %ebp
081947f8 +0x1460:  mov    %esp,%ebp
081947fa +0x1462:  sub    $0x28,%esp
081947fd +0x1465:  mov    0x8(%ebp),%eax
08194800 +0x1468:  mov    %eax,(%esp)
08194803 +0x146b:  call   0819495c <+0x15c4>
08194808 +0x1470:  mov    %eax,0x4(%esp)
0819480c +0x1474:  lea    -0x9(%ebp),%eax
0819480f +0x1477:  mov    %eax,(%esp)
08194812 +0x147a:  call   081944fa <+0x1162>
08194817 +0x147f:  leave
08194818 +0x1480:  ret
08194819 +0x1481:  push   %ebp
0819481a +0x1482:  mov    %esp,%ebp
0819481c +0x1484:  mov    0x8(%ebp),%eax
0819481f +0x1487:  mov    0x8(%eax),%eax
08194822 +0x148a:  pop    %ebp
08194823 +0x148b:  ret
08194824 +0x148c:  push   %ebp
08194825 +0x148d:  mov    %esp,%ebp
08194827 +0x148f:  mov    0x8(%ebp),%eax
0819482a +0x1492:  mov    0xc(%eax),%eax
0819482d +0x1495:  pop    %ebp
0819482e +0x1496:  ret
0819482f +0x1497:  push   %ebp
08194830 +0x1498:  mov    %esp,%ebp
08194832 +0x149a:  mov    0x8(%ebp),%eax
08194835 +0x149d:  add    $0x10,%eax
08194838 +0x14a0:  pop    %ebp
08194839 +0x14a1:  ret
0819483a +0x14a2:  push   %ebp
0819483b +0x14a3:  mov    %esp,%ebp
0819483d +0x14a5:  push   %esi
0819483e +0x14a6:  push   %ebx
0819483f +0x14a7:  sub    $0x20,%esp
08194842 +0x14aa:  mov    0x8(%ebp),%eax
08194845 +0x14ad:  mov    %eax,(%esp)
08194848 +0x14b0:  call   08194968 <+0x15d0>
0819484d +0x14b5:  mov    %eax,-0xc(%ebp)
08194850 +0x14b8:  mov    0xc(%ebp),%eax
08194853 +0x14bb:  mov    %eax,(%esp)
08194856 +0x14be:  call   08194994 <+0x15fc>
0819485b +0x14c3:  mov    %eax,%ebx
0819485d +0x14c5:  mov    0x8(%ebp),%eax
08194860 +0x14c8:  mov    %eax,(%esp)
08194863 +0x14cb:  call   0819498c <+0x15f4>
08194868 +0x14d0:  mov    %ebx,0x8(%esp)
0819486c +0x14d4:  mov    -0xc(%ebp),%edx
0819486f +0x14d7:  mov    %edx,0x4(%esp)
08194873 +0x14db:  mov    %eax,(%esp)
08194876 +0x14de:  call   0819499c <+0x1604>
0819487b +0x14e3:  jmp    081948b1 <+0x1519>
0819487d +0x14e5:  mov    %eax,(%esp)
08194880 +0x14e8:  call   08725ce0 <__cxa_begin_catch>
08194885 +0x14ed:  mov    -0xc(%ebp),%eax
08194888 +0x14f0:  mov    %eax,0x4(%esp)
0819488c +0x14f4:  mov    0x8(%ebp),%eax
0819488f +0x14f7:  mov    %eax,(%esp)
08194892 +0x14fa:  call   081949dc <+0x1644>
08194897 +0x14ff:  call   08724be0 <__cxa_rethrow>
0819489c +0x1504:  mov    %edx,%ebx
0819489e +0x1506:  mov    %eax,%esi
081948a0 +0x1508:  call   08725c30 <__cxa_end_catch>
081948a5 +0x150d:  mov    %esi,%eax
081948a7 +0x150f:  mov    %ebx,%edx
081948a9 +0x1511:  mov    %eax,(%esp)
081948ac +0x1514:  call   08ae3750 <_Unwind_Resume>
081948b1 +0x1519:  mov    -0xc(%ebp),%eax
081948b4 +0x151c:  add    $0x20,%esp
081948b7 +0x151f:  pop    %ebx
081948b8 +0x1520:  pop    %esi
081948b9 +0x1521:  pop    %ebp
081948ba +0x1522:  ret
081948bb +0x1523:  nop
081948bc +0x1524:  push   %ebp
081948bd +0x1525:  mov    %esp,%ebp
081948bf +0x1527:  push   %ebx
081948c0 +0x1528:  sub    $0x14,%esp
081948c3 +0x152b:  mov    0x8(%ebp),%ebx
081948c6 +0x152e:  mov    0xc(%ebp),%eax
081948c9 +0x1531:  mov    0xc(%eax),%eax
081948cc +0x1534:  mov    %eax,0x4(%esp)
081948d0 +0x1538:  mov    %ebx,(%esp)
081948d3 +0x153b:  call   081944be <+0x1126>
081948d8 +0x1540:  mov    %ebx,%eax
081948da +0x1542:  add    $0x14,%esp
081948dd +0x1545:  pop    %ebx
081948de +0x1546:  pop    %ebp
081948df +0x1547:  ret    $0x4
081948e2 +0x154a:  push   %ebp
081948e3 +0x154b:  mov    %esp,%ebp
081948e5 +0x154d:  sub    $0x18,%esp
081948e8 +0x1550:  mov    0xc(%ebp),%eax
081948eb +0x1553:  mov    %eax,(%esp)
081948ee +0x1556:  call   081949fe <+0x1666>
081948f3 +0x155b:  mov    0x8(%ebp),%edx
081948f6 +0x155e:  mov    (%eax),%eax
081948f8 +0x1560:  mov    %eax,(%edx)
081948fa +0x1562:  mov    0x10(%ebp),%eax
081948fd +0x1565:  mov    %eax,(%esp)
08194900 +0x1568:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08194905 +0x156d:  movzbl (%eax),%edx
08194908 +0x1570:  mov    0x8(%ebp),%eax
0819490b +0x1573:  mov    %dl,0x4(%eax)
0819490e +0x1576:  leave
0819490f +0x1577:  ret
08194910 +0x1578:  push   %ebp
08194911 +0x1579:  mov    %esp,%ebp
08194913 +0x157b:  sub    $0x18,%esp
08194916 +0x157e:  mov    0x8(%ebp),%eax
08194919 +0x1581:  mov    (%eax),%eax
0819491b +0x1583:  mov    %eax,(%esp)
0819491e +0x1586:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08194923 +0x158b:  mov    0x8(%ebp),%edx
08194926 +0x158e:  mov    %eax,(%edx)
08194928 +0x1590:  mov    0x8(%ebp),%eax
0819492b +0x1593:  leave
0819492c +0x1594:  ret
0819492d +0x1595:  nop
0819492e +0x1596:  push   %ebp
0819492f +0x1597:  mov    %esp,%ebp
08194931 +0x1599:  sub    $0x18,%esp
08194934 +0x159c:  mov    0xc(%ebp),%eax
08194937 +0x159f:  mov    %eax,(%esp)
0819493a +0x15a2:  call   08194a06 <+0x166e>
0819493f +0x15a7:  mov    0x8(%ebp),%edx
08194942 +0x15aa:  mov    (%eax),%eax
08194944 +0x15ac:  mov    %eax,(%edx)
08194946 +0x15ae:  mov    0x10(%ebp),%eax
08194949 +0x15b1:  mov    %eax,(%esp)
0819494c +0x15b4:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08194951 +0x15b9:  movzbl (%eax),%edx
08194954 +0x15bc:  mov    0x8(%ebp),%eax
08194957 +0x15bf:  mov    %dl,0x4(%eax)
0819495a +0x15c2:  leave
0819495b +0x15c3:  ret
0819495c +0x15c4:  push   %ebp
0819495d +0x15c5:  mov    %esp,%ebp
0819495f +0x15c7:  mov    0x8(%ebp),%eax
08194962 +0x15ca:  add    $0x10,%eax
08194965 +0x15cd:  pop    %ebp
08194966 +0x15ce:  ret
08194967 +0x15cf:  nop
08194968 +0x15d0:  push   %ebp
08194969 +0x15d1:  mov    %esp,%ebp
0819496b +0x15d3:  sub    $0x18,%esp
0819496e +0x15d6:  mov    0x8(%ebp),%eax
08194971 +0x15d9:  movl   $0x0,0x8(%esp)
08194979 +0x15e1:  movl   $0x1,0x4(%esp)
08194981 +0x15e9:  mov    %eax,(%esp)
08194984 +0x15ec:  call   08194a0e <+0x1676>
08194989 +0x15f1:  leave
0819498a +0x15f2:  ret
0819498b +0x15f3:  nop
0819498c +0x15f4:  push   %ebp
0819498d +0x15f5:  mov    %esp,%ebp
0819498f +0x15f7:  mov    0x8(%ebp),%eax
08194992 +0x15fa:  pop    %ebp
08194993 +0x15fb:  ret
08194994 +0x15fc:  push   %ebp
08194995 +0x15fd:  mov    %esp,%ebp
08194997 +0x15ff:  mov    0x8(%ebp),%eax
0819499a +0x1602:  pop    %ebp
0819499b +0x1603:  ret
0819499c +0x1604:  push   %ebp
0819499d +0x1605:  mov    %esp,%ebp
0819499f +0x1607:  push   %ebx
081949a0 +0x1608:  sub    $0x14,%esp
081949a3 +0x160b:  mov    0x10(%ebp),%eax
081949a6 +0x160e:  mov    %eax,(%esp)
081949a9 +0x1611:  call   08194994 <+0x15fc>
081949ae +0x1616:  mov    %eax,%ebx
081949b0 +0x1618:  mov    0xc(%ebp),%eax
081949b3 +0x161b:  mov    %eax,0x4(%esp)
081949b7 +0x161f:  movl   $0x18,(%esp)
081949be +0x1626:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081949c3 +0x162b:  mov    %eax,%edx
081949c5 +0x162d:  test   %edx,%edx
081949c7 +0x162f:  je     081949d5 <+0x163d>
081949c9 +0x1631:  mov    %ebx,0x4(%esp)
081949cd +0x1635:  mov    %eax,(%esp)
081949d0 +0x1638:  call   08194a4c <+0x16b4>
081949d5 +0x163d:  add    $0x14,%esp
081949d8 +0x1640:  pop    %ebx
081949d9 +0x1641:  pop    %ebp
081949da +0x1642:  ret
081949db +0x1643:  nop
081949dc +0x1644:  push   %ebp
081949dd +0x1645:  mov    %esp,%ebp
081949df +0x1647:  sub    $0x18,%esp
081949e2 +0x164a:  mov    0x8(%ebp),%eax
081949e5 +0x164d:  movl   $0x1,0x8(%esp)
081949ed +0x1655:  mov    0xc(%ebp),%edx
081949f0 +0x1658:  mov    %edx,0x4(%esp)
081949f4 +0x165c:  mov    %eax,(%esp)
081949f7 +0x165f:  call   08194a94 <+0x16fc>
081949fc +0x1664:  leave
081949fd +0x1665:  ret
081949fe +0x1666:  push   %ebp
081949ff +0x1667:  mov    %esp,%ebp
08194a01 +0x1669:  mov    0x8(%ebp),%eax
08194a04 +0x166c:  pop    %ebp
08194a05 +0x166d:  ret
08194a06 +0x166e:  push   %ebp
08194a07 +0x166f:  mov    %esp,%ebp
08194a09 +0x1671:  mov    0x8(%ebp),%eax
08194a0c +0x1674:  pop    %ebp
08194a0d +0x1675:  ret
08194a0e +0x1676:  push   %ebp
08194a0f +0x1677:  mov    %esp,%ebp
08194a11 +0x1679:  sub    $0x18,%esp
08194a14 +0x167c:  mov    0x8(%ebp),%eax
08194a17 +0x167f:  mov    %eax,(%esp)
08194a1a +0x1682:  call   08194aa8 <+0x1710>
08194a1f +0x1687:  cmp    0xc(%ebp),%eax
08194a22 +0x168a:  setb   %al
08194a25 +0x168d:  movzbl %al,%eax
08194a28 +0x1690:  test   %eax,%eax
08194a2a +0x1692:  setne  %al
08194a2d +0x1695:  test   %al,%al
08194a2f +0x1697:  je     08194a36 <+0x169e>
08194a31 +0x1699:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08194a36 +0x169e:  mov    0xc(%ebp),%edx
08194a39 +0x16a1:  mov    %edx,%eax
08194a3b +0x16a3:  add    %eax,%eax
08194a3d +0x16a5:  add    %edx,%eax
08194a3f +0x16a7:  shl    $0x3,%eax
08194a42 +0x16aa:  mov    %eax,(%esp)
08194a45 +0x16ad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08194a4a +0x16b2:  leave
08194a4b +0x16b3:  ret
08194a4c +0x16b4:  push   %ebp
08194a4d +0x16b5:  mov    %esp,%ebp
08194a4f +0x16b7:  sub    $0x18,%esp
08194a52 +0x16ba:  mov    0x8(%ebp),%eax
08194a55 +0x16bd:  movl   $0x0,(%eax)
08194a5b +0x16c3:  mov    0x8(%ebp),%eax
08194a5e +0x16c6:  movl   $0x0,0x4(%eax)
08194a65 +0x16cd:  mov    0x8(%ebp),%eax
08194a68 +0x16d0:  movl   $0x0,0x8(%eax)
08194a6f +0x16d7:  mov    0x8(%ebp),%eax
08194a72 +0x16da:  movl   $0x0,0xc(%eax)
08194a79 +0x16e1:  mov    0xc(%ebp),%eax
08194a7c +0x16e4:  mov    %eax,(%esp)
08194a7f +0x16e7:  call   08194994 <+0x15fc>
08194a84 +0x16ec:  mov    0x8(%ebp),%ecx
08194a87 +0x16ef:  mov    0x4(%eax),%edx
08194a8a +0x16f2:  mov    (%eax),%eax
08194a8c +0x16f4:  mov    %eax,0x10(%ecx)
08194a8f +0x16f7:  mov    %edx,0x14(%ecx)
08194a92 +0x16fa:  leave
08194a93 +0x16fb:  ret
08194a94 +0x16fc:  push   %ebp
08194a95 +0x16fd:  mov    %esp,%ebp
08194a97 +0x16ff:  sub    $0x18,%esp
08194a9a +0x1702:  mov    0xc(%ebp),%eax
08194a9d +0x1705:  mov    %eax,(%esp)
08194aa0 +0x1708:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08194aa5 +0x170d:  leave
08194aa6 +0x170e:  ret
08194aa7 +0x170f:  nop
08194aa8 +0x1710:  push   %ebp
08194aa9 +0x1711:  mov    %esp,%ebp
08194aab +0x1713:  mov    $0xaaaaaaa,%eax
08194ab0 +0x1718:  pop    %ebp
08194ab1 +0x1719:  ret
08194ab2 +0x171a:  nop
08194ab3 +0x171b:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8193398

/* AvatarRechargeServer::AvatarRechargeServer() */

void AvatarRechargeServer::_GLOBAL__I_AvatarRechargeServer(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
