# dispatch_sig

`_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci`

`Inter_LoginInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoginInfo` | `0x084c5294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c5294  _ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci
#           Inter_LoginInfo::dispatch_sig(CUser*, char*, int)
# range [0x084c5294, 0x084c7aef]
084c5294 +0x0000:  push   %ebp
084c5295 +0x0001:  mov    %esp,%ebp
084c5297 +0x0003:  push   %edi
084c5298 +0x0004:  push   %esi
084c5299 +0x0005:  push   %ebx
084c529a +0x0006:  sub    $0x27c,%esp
084c52a0 +0x000c:  mov    0x10(%ebp),%eax
084c52a3 +0x000f:  mov    %eax,-0x60(%ebp)
084c52a6 +0x0012:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c52ab +0x0017:  mov    %eax,(%esp)
084c52ae +0x001a:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c52b3 +0x001f:  cmp    $0xe,%eax
084c52b6 +0x0022:  sete   %al
084c52b9 +0x0025:  test   %al,%al
084c52bb +0x0027:  je     084c52d5 <+0x41>
084c52bd +0x0029:  mov    -0x60(%ebp),%eax
084c52c0 +0x002c:  mov    0x39d0(%eax),%eax
084c52c6 +0x0032:  mov    %eax,0x4(%esp)
084c52ca +0x0036:  mov    0xc(%ebp),%eax
084c52cd +0x0039:  mov    %eax,(%esp)
084c52d0 +0x003c:  call   082300ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5756>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5756
084c52d5 +0x0041:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c52da +0x0046:  mov    %eax,(%esp)
084c52dd +0x0049:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c52e2 +0x004e:  cmp    $0x7,%eax
084c52e5 +0x0051:  sete   %al
084c52e8 +0x0054:  test   %al,%al
084c52ea +0x0056:  je     084c5304 <+0x70>
084c52ec +0x0058:  mov    -0x60(%ebp),%eax
084c52ef +0x005b:  mov    0x39a8(%eax),%eax
084c52f5 +0x0061:  mov    %eax,0x4(%esp)
084c52f9 +0x0065:  mov    0xc(%ebp),%eax
084c52fc +0x0068:  mov    %eax,(%esp)
084c52ff +0x006b:  call   082300ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5756>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5756
084c5304 +0x0070:  mov    -0x60(%ebp),%eax
084c5307 +0x0073:  add    $0x3a3a,%eax
084c530c +0x0078:  mov    %eax,0x4(%esp)
084c5310 +0x007c:  mov    0xc(%ebp),%eax
084c5313 +0x007f:  mov    %eax,(%esp)
084c5316 +0x0082:  call   084ec918 <_GLOBAL__I__Z7getUserj+0x38ca>  ; global constructors keyed to getUser(unsigned int)+0x38ca
084c531b +0x0087:  lea    -0x12c(%ebp),%eax
084c5321 +0x008d:  mov    %eax,(%esp)
084c5324 +0x0090:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c5329 +0x0095:  movl   $0x1,0x8(%esp)
084c5331 +0x009d:  movl   $0x1,0x4(%esp)
084c5339 +0x00a5:  lea    -0x12c(%ebp),%eax
084c533f +0x00ab:  mov    %eax,(%esp)
084c5342 +0x00ae:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c5347 +0x00b3:  mov    -0x60(%ebp),%eax
084c534a +0x00b6:  mov    0xb8(%eax),%eax
084c5350 +0x00bc:  cmp    $0x1,%eax
084c5353 +0x00bf:  je     084c5363 <+0xcf>
084c5355 +0x00c1:  cmp    $0x8,%eax
084c5358 +0x00c4:  je     084c5423 <+0x18f>
084c535e +0x00ca:  jmp    084c54a7 <+0x213>
084c5363 +0x00cf:  movl   $0x0,0x4(%esp)
084c536b +0x00d7:  lea    -0x12c(%ebp),%eax
084c5371 +0x00dd:  mov    %eax,(%esp)
084c5374 +0x00e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5379 +0x00e5:  movl   $0x6,0x4(%esp)
084c5381 +0x00ed:  lea    -0x12c(%ebp),%eax
084c5387 +0x00f3:  mov    %eax,(%esp)
084c538a +0x00f6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c538f +0x00fb:  movl   $0x1,0x4(%esp)
084c5397 +0x0103:  lea    -0x12c(%ebp),%eax
084c539d +0x0109:  mov    %eax,(%esp)
084c53a0 +0x010c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c53a5 +0x0111:  lea    -0x12c(%ebp),%eax
084c53ab +0x0117:  mov    %eax,0x4(%esp)
084c53af +0x011b:  mov    0xc(%ebp),%eax
084c53b2 +0x011e:  mov    %eax,(%esp)
084c53b5 +0x0121:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c53ba +0x0126:  movl   $0x0,0xc(%esp)
084c53c2 +0x012e:  movl   $0x1b0a,0x8(%esp)
084c53ca +0x0136:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c53d2 +0x013e:  lea    -0x120(%ebp),%eax
084c53d8 +0x0144:  mov    %eax,(%esp)
084c53db +0x0147:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c53e0 +0x014c:  movl   $"pInfo->err_code == SIG_LOGIN_DATA::E_CANTFIND",0x4(%esp)
084c53e8 +0x0154:  lea    -0x120(%ebp),%eax
084c53ee +0x015a:  mov    %eax,(%esp)
084c53f1 +0x015d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c53f6 +0x0162:  movl   $0x0,0xc(%esp)
084c53fe +0x016a:  movl   $0x1,0x8(%esp)
084c5406 +0x0172:  movl   $0xb,0x4(%esp)
084c540e +0x017a:  mov    0xc(%ebp),%eax
084c5411 +0x017d:  mov    %eax,(%esp)
084c5414 +0x0180:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c5419 +0x0185:  mov    $0x0,%ebx
084c541e +0x018a:  jmp    084c7ad4 <+0x2840>
084c5423 +0x018f:  movl   $0x0,0x4(%esp)
084c542b +0x0197:  lea    -0x12c(%ebp),%eax
084c5431 +0x019d:  mov    %eax,(%esp)
084c5434 +0x01a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5439 +0x01a5:  movl   $0x60,0x4(%esp)
084c5441 +0x01ad:  lea    -0x12c(%ebp),%eax
084c5447 +0x01b3:  mov    %eax,(%esp)
084c544a +0x01b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c544f +0x01bb:  movl   $0x1,0x4(%esp)
084c5457 +0x01c3:  lea    -0x12c(%ebp),%eax
084c545d +0x01c9:  mov    %eax,(%esp)
084c5460 +0x01cc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c5465 +0x01d1:  lea    -0x12c(%ebp),%eax
084c546b +0x01d7:  mov    %eax,0x4(%esp)
084c546f +0x01db:  mov    0xc(%ebp),%eax
084c5472 +0x01de:  mov    %eax,(%esp)
084c5475 +0x01e1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c547a +0x01e6:  movl   $0x0,0xc(%esp)
084c5482 +0x01ee:  movl   $0x1,0x8(%esp)
084c548a +0x01f6:  movl   $0x21,0x4(%esp)
084c5492 +0x01fe:  mov    0xc(%ebp),%eax
084c5495 +0x0201:  mov    %eax,(%esp)
084c5498 +0x0204:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c549d +0x0209:  mov    $0x0,%ebx
084c54a2 +0x020e:  jmp    084c7ad4 <+0x2840>
084c54a7 +0x0213:  mov    -0x60(%ebp),%eax
084c54aa +0x0216:  mov    0xb8(%eax),%eax
084c54b0 +0x021c:  cmp    $0x9,%eax
084c54b3 +0x021f:  jle    084c55b9 <+0x325>
084c54b9 +0x0225:  mov    -0x60(%ebp),%eax
084c54bc +0x0228:  mov    0xb8(%eax),%eax
084c54c2 +0x022e:  cmp    $0xc,%eax
084c54c5 +0x0231:  jg     084c55b9 <+0x325>
084c54cb +0x0237:  movl   $0x0,0x4(%esp)
084c54d3 +0x023f:  lea    -0x12c(%ebp),%eax
084c54d9 +0x0245:  mov    %eax,(%esp)
084c54dc +0x0248:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c54e1 +0x024d:  movb   $0x0,-0x55(%ebp)
084c54e5 +0x0251:  mov    -0x60(%ebp),%eax
084c54e8 +0x0254:  mov    0xb8(%eax),%eax
084c54ee +0x025a:  sub    $0x26,%eax
084c54f1 +0x025d:  mov    %al,-0x55(%ebp)
084c54f4 +0x0260:  movzbl -0x55(%ebp),%eax
084c54f8 +0x0264:  mov    %eax,0x4(%esp)
084c54fc +0x0268:  lea    -0x12c(%ebp),%eax
084c5502 +0x026e:  mov    %eax,(%esp)
084c5505 +0x0271:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c550a +0x0276:  mov    -0x60(%ebp),%eax
084c550d +0x0279:  mov    0xd8(%eax),%eax
084c5513 +0x027f:  mov    %eax,0x4(%esp)
084c5517 +0x0283:  lea    -0x12c(%ebp),%eax
084c551d +0x0289:  mov    %eax,(%esp)
084c5520 +0x028c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5525 +0x0291:  movl   $0x1,0x4(%esp)
084c552d +0x0299:  lea    -0x12c(%ebp),%eax
084c5533 +0x029f:  mov    %eax,(%esp)
084c5536 +0x02a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c553b +0x02a7:  lea    -0x12c(%ebp),%eax
084c5541 +0x02ad:  mov    %eax,0x4(%esp)
084c5545 +0x02b1:  mov    0xc(%ebp),%eax
084c5548 +0x02b4:  mov    %eax,(%esp)
084c554b +0x02b7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c5550 +0x02bc:  movl   $0x0,0xc(%esp)
084c5558 +0x02c4:  movl   $0x1b67,0x8(%esp)
084c5560 +0x02cc:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c5568 +0x02d4:  lea    -0x110(%ebp),%eax
084c556e +0x02da:  mov    %eax,(%esp)
084c5571 +0x02dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c5576 +0x02e2:  movl   $"pInfo->err_code == SIG_LOGIN_DATA::PUNISH_REASON",0x4(%esp)
084c557e +0x02ea:  lea    -0x110(%ebp),%eax
084c5584 +0x02f0:  mov    %eax,(%esp)
084c5587 +0x02f3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c558c +0x02f8:  movl   $0x0,0xc(%esp)
084c5594 +0x0300:  movl   $0x1,0x8(%esp)
084c559c +0x0308:  movl   $0x1a,0x4(%esp)
084c55a4 +0x0310:  mov    0xc(%ebp),%eax
084c55a7 +0x0313:  mov    %eax,(%esp)
084c55aa +0x0316:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c55af +0x031b:  mov    $0x0,%ebx
084c55b4 +0x0320:  jmp    084c7ad4 <+0x2840>
084c55b9 +0x0325:  mov    -0x60(%ebp),%eax
084c55bc +0x0328:  mov    0xb8(%eax),%eax
084c55c2 +0x032e:  cmp    $0x4,%eax
084c55c5 +0x0331:  jne    084c56bc <+0x428>
084c55cb +0x0337:  movl   $0x0,0x4(%esp)
084c55d3 +0x033f:  lea    -0x12c(%ebp),%eax
084c55d9 +0x0345:  mov    %eax,(%esp)
084c55dc +0x0348:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c55e1 +0x034d:  movl   $0x8,0x4(%esp)
084c55e9 +0x0355:  lea    -0x12c(%ebp),%eax
084c55ef +0x035b:  mov    %eax,(%esp)
084c55f2 +0x035e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c55f7 +0x0363:  mov    -0x60(%ebp),%eax
084c55fa +0x0366:  mov    0x3a50(%eax),%edx
084c5600 +0x036c:  mov    -0x60(%ebp),%ecx
084c5603 +0x036f:  mov    %edx,%eax
084c5605 +0x0371:  add    %eax,%eax
084c5607 +0x0373:  add    %edx,%eax
084c5609 +0x0375:  shl    $0x3,%eax
084c560c +0x0378:  lea    (%ecx,%eax,1),%eax
084c560f +0x037b:  add    $0x3a68,%eax
084c5614 +0x0380:  mov    (%eax),%eax
084c5616 +0x0382:  mov    %eax,0x4(%esp)
084c561a +0x0386:  lea    -0x12c(%ebp),%eax
084c5620 +0x038c:  mov    %eax,(%esp)
084c5623 +0x038f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c5628 +0x0394:  movl   $0x1,0x4(%esp)
084c5630 +0x039c:  lea    -0x12c(%ebp),%eax
084c5636 +0x03a2:  mov    %eax,(%esp)
084c5639 +0x03a5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c563e +0x03aa:  lea    -0x12c(%ebp),%eax
084c5644 +0x03b0:  mov    %eax,0x4(%esp)
084c5648 +0x03b4:  mov    0xc(%ebp),%eax
084c564b +0x03b7:  mov    %eax,(%esp)
084c564e +0x03ba:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c5653 +0x03bf:  movl   $0x0,0xc(%esp)
084c565b +0x03c7:  movl   $0x1b77,0x8(%esp)
084c5663 +0x03cf:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c566b +0x03d7:  lea    -0x100(%ebp),%eax
084c5671 +0x03dd:  mov    %eax,(%esp)
084c5674 +0x03e0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c5679 +0x03e5:  movl   $"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH",0x4(%esp)
084c5681 +0x03ed:  lea    -0x100(%ebp),%eax
084c5687 +0x03f3:  mov    %eax,(%esp)
084c568a +0x03f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c568f +0x03fb:  movl   $0x0,0xc(%esp)
084c5697 +0x0403:  movl   $0x1,0x8(%esp)
084c569f +0x040b:  movl   $0x1a,0x4(%esp)
084c56a7 +0x0413:  mov    0xc(%ebp),%eax
084c56aa +0x0416:  mov    %eax,(%esp)
084c56ad +0x0419:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c56b2 +0x041e:  mov    $0x0,%ebx
084c56b7 +0x0423:  jmp    084c7ad4 <+0x2840>
084c56bc +0x0428:  mov    -0x60(%ebp),%eax
084c56bf +0x042b:  mov    0xb8(%eax),%eax
084c56c5 +0x0431:  cmp    $0x5,%eax
084c56c8 +0x0434:  jne    084c57a9 <+0x515>
084c56ce +0x043a:  movl   $0x0,0x4(%esp)
084c56d6 +0x0442:  lea    -0x12c(%ebp),%eax
084c56dc +0x0448:  mov    %eax,(%esp)
084c56df +0x044b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c56e4 +0x0450:  movl   $0x48,0x4(%esp)
084c56ec +0x0458:  lea    -0x12c(%ebp),%eax
084c56f2 +0x045e:  mov    %eax,(%esp)
084c56f5 +0x0461:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c56fa +0x0466:  mov    -0x60(%ebp),%eax
084c56fd +0x0469:  mov    0x3914(%eax),%eax
084c5703 +0x046f:  mov    %eax,0x4(%esp)
084c5707 +0x0473:  lea    -0x12c(%ebp),%eax
084c570d +0x0479:  mov    %eax,(%esp)
084c5710 +0x047c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5715 +0x0481:  movl   $0x1,0x4(%esp)
084c571d +0x0489:  lea    -0x12c(%ebp),%eax
084c5723 +0x048f:  mov    %eax,(%esp)
084c5726 +0x0492:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c572b +0x0497:  lea    -0x12c(%ebp),%eax
084c5731 +0x049d:  mov    %eax,0x4(%esp)
084c5735 +0x04a1:  mov    0xc(%ebp),%eax
084c5738 +0x04a4:  mov    %eax,(%esp)
084c573b +0x04a7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c5740 +0x04ac:  movl   $0x0,0xc(%esp)
084c5748 +0x04b4:  movl   $0x1ba0,0x8(%esp)
084c5750 +0x04bc:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c5758 +0x04c4:  lea    -0xf0(%ebp),%eax
084c575e +0x04ca:  mov    %eax,(%esp)
084c5761 +0x04cd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c5766 +0x04d2:  movl   $"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH_MOUSE",0x4(%esp)
084c576e +0x04da:  lea    -0xf0(%ebp),%eax
084c5774 +0x04e0:  mov    %eax,(%esp)
084c5777 +0x04e3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c577c +0x04e8:  movl   $0x0,0xc(%esp)
084c5784 +0x04f0:  movl   $0x1,0x8(%esp)
084c578c +0x04f8:  movl   $0x1a,0x4(%esp)
084c5794 +0x0500:  mov    0xc(%ebp),%eax
084c5797 +0x0503:  mov    %eax,(%esp)
084c579a +0x0506:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c579f +0x050b:  mov    $0x0,%ebx
084c57a4 +0x0510:  jmp    084c7ad4 <+0x2840>
084c57a9 +0x0515:  mov    -0x60(%ebp),%eax
084c57ac +0x0518:  mov    0xb8(%eax),%eax
084c57b2 +0x051e:  cmp    $0x6,%eax
084c57b5 +0x0521:  jne    084c587b <+0x5e7>
084c57bb +0x0527:  movl   $0x0,0x4(%esp)
084c57c3 +0x052f:  lea    -0x12c(%ebp),%eax
084c57c9 +0x0535:  mov    %eax,(%esp)
084c57cc +0x0538:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c57d1 +0x053d:  movl   $0x49,0x4(%esp)
084c57d9 +0x0545:  lea    -0x12c(%ebp),%eax
084c57df +0x054b:  mov    %eax,(%esp)
084c57e2 +0x054e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c57e7 +0x0553:  movl   $0x1,0x4(%esp)
084c57ef +0x055b:  lea    -0x12c(%ebp),%eax
084c57f5 +0x0561:  mov    %eax,(%esp)
084c57f8 +0x0564:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c57fd +0x0569:  lea    -0x12c(%ebp),%eax
084c5803 +0x056f:  mov    %eax,0x4(%esp)
084c5807 +0x0573:  mov    0xc(%ebp),%eax
084c580a +0x0576:  mov    %eax,(%esp)
084c580d +0x0579:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c5812 +0x057e:  movl   $0x0,0xc(%esp)
084c581a +0x0586:  movl   $0x1baa,0x8(%esp)
084c5822 +0x058e:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c582a +0x0596:  lea    -0xe0(%ebp),%eax
084c5830 +0x059c:  mov    %eax,(%esp)
084c5833 +0x059f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c5838 +0x05a4:  movl   $"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH_MOUSE_DENY",0x4(%esp)
084c5840 +0x05ac:  lea    -0xe0(%ebp),%eax
084c5846 +0x05b2:  mov    %eax,(%esp)
084c5849 +0x05b5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c584e +0x05ba:  movl   $0x0,0xc(%esp)
084c5856 +0x05c2:  movl   $0x1,0x8(%esp)
084c585e +0x05ca:  movl   $0x1a,0x4(%esp)
084c5866 +0x05d2:  mov    0xc(%ebp),%eax
084c5869 +0x05d5:  mov    %eax,(%esp)
084c586c +0x05d8:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c5871 +0x05dd:  mov    $0x0,%ebx
084c5876 +0x05e2:  jmp    084c7ad4 <+0x2840>
084c587b +0x05e7:  mov    -0x60(%ebp),%eax
084c587e +0x05ea:  mov    0xb8(%eax),%eax
084c5884 +0x05f0:  cmp    $0x9,%eax
084c5887 +0x05f3:  jne    084c594d <+0x6b9>
084c588d +0x05f9:  movl   $0x0,0x4(%esp)
084c5895 +0x0601:  lea    -0x12c(%ebp),%eax
084c589b +0x0607:  mov    %eax,(%esp)
084c589e +0x060a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c58a3 +0x060f:  movl   $0xa6,0x4(%esp)
084c58ab +0x0617:  lea    -0x12c(%ebp),%eax
084c58b1 +0x061d:  mov    %eax,(%esp)
084c58b4 +0x0620:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c58b9 +0x0625:  movl   $0x1,0x4(%esp)
084c58c1 +0x062d:  lea    -0x12c(%ebp),%eax
084c58c7 +0x0633:  mov    %eax,(%esp)
084c58ca +0x0636:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c58cf +0x063b:  lea    -0x12c(%ebp),%eax
084c58d5 +0x0641:  mov    %eax,0x4(%esp)
084c58d9 +0x0645:  mov    0xc(%ebp),%eax
084c58dc +0x0648:  mov    %eax,(%esp)
084c58df +0x064b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c58e4 +0x0650:  movl   $0x0,0xc(%esp)
084c58ec +0x0658:  movl   $0x1bb4,0x8(%esp)
084c58f4 +0x0660:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c58fc +0x0668:  lea    -0xd0(%ebp),%eax
084c5902 +0x066e:  mov    %eax,(%esp)
084c5905 +0x0671:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c590a +0x0676:  movl   $"pInfo->err_code == SIG_LOGIN_DATA::E_PASSPAD_WRONG_VERSION",0x4(%esp)
084c5912 +0x067e:  lea    -0xd0(%ebp),%eax
084c5918 +0x0684:  mov    %eax,(%esp)
084c591b +0x0687:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c5920 +0x068c:  movl   $0x0,0xc(%esp)
084c5928 +0x0694:  movl   $0x1,0x8(%esp)
084c5930 +0x069c:  movl   $0x1a,0x4(%esp)
084c5938 +0x06a4:  mov    0xc(%ebp),%eax
084c593b +0x06a7:  mov    %eax,(%esp)
084c593e +0x06aa:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c5943 +0x06af:  mov    $0x0,%ebx
084c5948 +0x06b4:  jmp    084c7ad4 <+0x2840>
084c594d +0x06b9:  mov    -0x60(%ebp),%eax
084c5950 +0x06bc:  mov    0xb8(%eax),%eax
084c5956 +0x06c2:  cmp    $0x7,%eax
084c5959 +0x06c5:  jne    084c59e3 <+0x74f>
084c595f +0x06cb:  movl   $0x0,0x4(%esp)
084c5967 +0x06d3:  lea    -0x12c(%ebp),%eax
084c596d +0x06d9:  mov    %eax,(%esp)
084c5970 +0x06dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5975 +0x06e1:  movl   $0x5f,0x4(%esp)
084c597d +0x06e9:  lea    -0x12c(%ebp),%eax
084c5983 +0x06ef:  mov    %eax,(%esp)
084c5986 +0x06f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c598b +0x06f7:  movl   $0x1,0x4(%esp)
084c5993 +0x06ff:  lea    -0x12c(%ebp),%eax
084c5999 +0x0705:  mov    %eax,(%esp)
084c599c +0x0708:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c59a1 +0x070d:  lea    -0x12c(%ebp),%eax
084c59a7 +0x0713:  mov    %eax,0x4(%esp)
084c59ab +0x0717:  mov    0xc(%ebp),%eax
084c59ae +0x071a:  mov    %eax,(%esp)
084c59b1 +0x071d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c59b6 +0x0722:  movl   $0x0,0xc(%esp)
084c59be +0x072a:  movl   $0x1,0x8(%esp)
084c59c6 +0x0732:  movl   $0x20,0x4(%esp)
084c59ce +0x073a:  mov    0xc(%ebp),%eax
084c59d1 +0x073d:  mov    %eax,(%esp)
084c59d4 +0x0740:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c59d9 +0x0745:  mov    $0x0,%ebx
084c59de +0x074a:  jmp    084c7ad4 <+0x2840>
084c59e3 +0x074f:  mov    -0x60(%ebp),%eax
084c59e6 +0x0752:  movzbl 0x38dd(%eax),%eax
084c59ed +0x0759:  movzbl %al,%eax
084c59f0 +0x075c:  mov    %eax,0x4(%esp)
084c59f4 +0x0760:  mov    0xc(%ebp),%eax
084c59f7 +0x0763:  mov    %eax,(%esp)
084c59fa +0x0766:  call   084ec99c <_GLOBAL__I__Z7getUserj+0x394e>  ; global constructors keyed to getUser(unsigned int)+0x394e
084c59ff +0x076b:  mov    -0x60(%ebp),%eax
084c5a02 +0x076e:  mov    0xb8(%eax),%eax
084c5a08 +0x0774:  test   %eax,%eax
084c5a0a +0x0776:  je     084c5add <+0x849>
084c5a10 +0x077c:  movl   $0x0,0x4(%esp)
084c5a18 +0x0784:  lea    -0x12c(%ebp),%eax
084c5a1e +0x078a:  mov    %eax,(%esp)
084c5a21 +0x078d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5a26 +0x0792:  movl   $0x1,0x4(%esp)
084c5a2e +0x079a:  lea    -0x12c(%ebp),%eax
084c5a34 +0x07a0:  mov    %eax,(%esp)
084c5a37 +0x07a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5a3c +0x07a8:  movl   $0x1,0x4(%esp)
084c5a44 +0x07b0:  lea    -0x12c(%ebp),%eax
084c5a4a +0x07b6:  mov    %eax,(%esp)
084c5a4d +0x07b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c5a52 +0x07be:  lea    -0x12c(%ebp),%eax
084c5a58 +0x07c4:  mov    %eax,0x4(%esp)
084c5a5c +0x07c8:  mov    0xc(%ebp),%eax
084c5a5f +0x07cb:  mov    %eax,(%esp)
084c5a62 +0x07ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c5a67 +0x07d3:  mov    -0x60(%ebp),%eax
084c5a6a +0x07d6:  mov    0xb8(%eax),%ebx
084c5a70 +0x07dc:  movl   $0x0,0xc(%esp)
084c5a78 +0x07e4:  movl   $0x1bf2,0x8(%esp)
084c5a80 +0x07ec:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c5a88 +0x07f4:  lea    -0xc0(%ebp),%eax
084c5a8e +0x07fa:  mov    %eax,(%esp)
084c5a91 +0x07fd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c5a96 +0x0802:  mov    %ebx,0x8(%esp)
084c5a9a +0x0806:  movl   $"[Inter_LoginInfo::dispatch_sig] Abnormal LoginError: SIG_LOGIN_DATA::ERROR_OK(%d)",0x4(%esp)
084c5aa2 +0x080e:  lea    -0xc0(%ebp),%eax
084c5aa8 +0x0814:  mov    %eax,(%esp)
084c5aab +0x0817:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c5ab0 +0x081c:  movl   $0x0,0xc(%esp)
084c5ab8 +0x0824:  movl   $0x1,0x8(%esp)
084c5ac0 +0x082c:  movl   $0xe,0x4(%esp)
084c5ac8 +0x0834:  mov    0xc(%ebp),%eax
084c5acb +0x0837:  mov    %eax,(%esp)
084c5ace +0x083a:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c5ad3 +0x083f:  mov    $0x0,%ebx
084c5ad8 +0x0844:  jmp    084c7ad4 <+0x2840>
084c5add +0x0849:  mov    0xc(%ebp),%eax
084c5ae0 +0x084c:  mov    %eax,(%esp)
084c5ae3 +0x084f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084c5ae8 +0x0854:  movzwl %ax,%eax
084c5aeb +0x0857:  mov    %eax,-0x260(%ebp)
084c5af1 +0x085d:  mov    0xc(%ebp),%eax
084c5af4 +0x0860:  mov    %eax,(%esp)
084c5af7 +0x0863:  call   082a683c <_GLOBAL__I__ZN4CLog5this_E+0x2c63>  ; global constructors keyed to CLog::this_+0x2c63
084c5afc +0x0868:  cwtl
084c5afd +0x0869:  mov    %eax,-0x25c(%ebp)
084c5b03 +0x086f:  mov    0xc(%ebp),%eax
084c5b06 +0x0872:  mov    %eax,(%esp)
084c5b09 +0x0875:  call   084ecd42 <_GLOBAL__I__Z7getUserj+0x3cf4>  ; global constructors keyed to getUser(unsigned int)+0x3cf4
084c5b0e +0x087a:  movswl %ax,%edi
084c5b11 +0x087d:  mov    0xc(%ebp),%eax
084c5b14 +0x0880:  mov    %eax,(%esp)
084c5b17 +0x0883:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c5b1c +0x0888:  mov    %eax,%esi
084c5b1e +0x088a:  mov    -0x60(%ebp),%eax
084c5b21 +0x088d:  mov    0xc0(%eax),%eax
084c5b27 +0x0893:  movl   $0x0,0x4(%esp)
084c5b2f +0x089b:  mov    %eax,(%esp)
084c5b32 +0x089e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c5b37 +0x08a3:  mov    %eax,%ebx
084c5b39 +0x08a5:  movl   $0x0,0xc(%esp)
084c5b41 +0x08ad:  movl   $0x1bf6,0x8(%esp)
084c5b49 +0x08b5:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c5b51 +0x08bd:  lea    -0xb0(%ebp),%eax
084c5b57 +0x08c3:  mov    %eax,(%esp)
084c5b5a +0x08c6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c5b5f +0x08cb:  mov    -0x260(%ebp),%eax
084c5b65 +0x08d1:  mov    %eax,0x18(%esp)
084c5b69 +0x08d5:  mov    -0x25c(%ebp),%edx
084c5b6f +0x08db:  mov    %edx,0x14(%esp)
084c5b73 +0x08df:  mov    %edi,0x10(%esp)
084c5b77 +0x08e3:  mov    %esi,0xc(%esp)
084c5b7b +0x08e7:  mov    %ebx,0x8(%esp)
084c5b7f +0x08eb:  movl   $"[USER LOGIN] DB ID : %s (UID: %d)(SlotIDX: %d)(IncreID: %d)(SocketID: %d)\n",0x4(%esp)
084c5b87 +0x08f3:  lea    -0xb0(%ebp),%eax
084c5b8d +0x08f9:  mov    %eax,(%esp)
084c5b90 +0x08fc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c5b95 +0x0901:  mov    -0x60(%ebp),%eax
084c5b98 +0x0904:  mov    0xc0(%eax),%ebx
084c5b9e +0x090a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c5ba3 +0x090f:  mov    %ebx,0x4(%esp)
084c5ba7 +0x0913:  mov    %eax,(%esp)
084c5baa +0x0916:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084c5baf +0x091b:  mov    %eax,-0x5c(%ebp)
084c5bb2 +0x091e:  cmpl   $0x0,-0x5c(%ebp)
084c5bb6 +0x0922:  je     084c5c53 <+0x9bf>
084c5bbc +0x0928:  mov    -0x5c(%ebp),%eax
084c5bbf +0x092b:  add    $0xe0,%eax
084c5bc4 +0x0930:  mov    %eax,(%esp)
084c5bc7 +0x0933:  call   082b2cb8 <_GLOBAL__I__ZN4CLog5this_E+0xf0df>  ; global constructors keyed to CLog::this_+0xf0df
084c5bcc +0x0938:  cmp    $0xffffffff,%eax
084c5bcf +0x093b:  je     084c5be7 <+0x953>
084c5bd1 +0x093d:  mov    -0x5c(%ebp),%eax
084c5bd4 +0x0940:  mov    %eax,(%esp)
084c5bd7 +0x0943:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c5bdc +0x0948:  test   %eax,%eax
084c5bde +0x094a:  je     084c5be7 <+0x953>
084c5be0 +0x094c:  mov    $0x1,%eax
084c5be5 +0x0951:  jmp    084c5bec <+0x958>
084c5be7 +0x0953:  mov    $0x0,%eax
084c5bec +0x0958:  test   %al,%al
084c5bee +0x095a:  je     084c5c53 <+0x9bf>
084c5bf0 +0x095c:  movl   $0x12,0x8(%esp)
084c5bf8 +0x0964:  movl   $0x1,0x4(%esp)
084c5c00 +0x096c:  mov    -0x5c(%ebp),%eax
084c5c03 +0x096f:  mov    %eax,(%esp)
084c5c06 +0x0972:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084c5c0b +0x0977:  movl   $0x0,0xc(%esp)
084c5c13 +0x097f:  movl   $0x1,0x8(%esp)
084c5c1b +0x0987:  movl   $0xc,0x4(%esp)
084c5c23 +0x098f:  mov    -0x5c(%ebp),%eax
084c5c26 +0x0992:  mov    %eax,(%esp)
084c5c29 +0x0995:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c5c2e +0x099a:  movl   $0x12,0x8(%esp)
084c5c36 +0x09a2:  movl   $0x1,0x4(%esp)
084c5c3e +0x09aa:  mov    0xc(%ebp),%eax
084c5c41 +0x09ad:  mov    %eax,(%esp)
084c5c44 +0x09b0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084c5c49 +0x09b5:  mov    $0x1c18,%ebx
084c5c4e +0x09ba:  jmp    084c7ad4 <+0x2840>
084c5c53 +0x09bf:  mov    -0x60(%ebp),%edx
084c5c56 +0x09c2:  mov    -0x60(%ebp),%eax
084c5c59 +0x09c5:  mov    0xc0(%eax),%eax
084c5c5f +0x09cb:  mov    %edx,0x8(%esp)
084c5c63 +0x09cf:  mov    %eax,0x4(%esp)
084c5c67 +0x09d3:  mov    0xc(%ebp),%eax
084c5c6a +0x09d6:  mov    %eax,(%esp)
084c5c6d +0x09d9:  call   08649bfc <_ZN5CUser12set_acc_infoEjPKc>  ; CUser::set_acc_info(unsigned int, char const*)
084c5c72 +0x09de:  movl   $0x0,-0x13c(%ebp)
084c5c7c +0x09e8:  movl   $0x0,-0x138(%ebp)
084c5c86 +0x09f2:  movl   $0x0,-0x134(%ebp)
084c5c90 +0x09fc:  movl   $0x0,-0x130(%ebp)
084c5c9a +0x0a06:  mov    0xc(%ebp),%eax
084c5c9d +0x0a09:  lea    0xe0(%eax),%edx
084c5ca3 +0x0a0f:  movl   $0x10,0x8(%esp)
084c5cab +0x0a17:  lea    -0x13c(%ebp),%eax
084c5cb1 +0x0a1d:  mov    %eax,0x4(%esp)
084c5cb5 +0x0a21:  mov    %edx,(%esp)
084c5cb8 +0x0a24:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c5cbd +0x0a29:  mov    $0x0,%ebx
084c5cc2 +0x0a2e:  mov    $0x0,%esi
084c5cc7 +0x0a33:  mov    $0x0,%edi
084c5ccc +0x0a38:  movb   $0x0,-0x255(%ebp)
084c5cd3 +0x0a3f:  mov    -0x60(%ebp),%eax
084c5cd6 +0x0a42:  movzbl 0xb5(%eax),%eax
084c5cdd +0x0a49:  xor    $0x1,%eax
084c5ce0 +0x0a4c:  test   %al,%al
084c5ce2 +0x0a4e:  je     084c5d92 <+0xafe>
084c5ce8 +0x0a54:  lea    -0x99(%ebp),%eax
084c5cee +0x0a5a:  mov    %eax,(%esp)
084c5cf1 +0x0a5d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084c5cf6 +0x0a62:  mov    $0x1,%ebx
084c5cfb +0x0a67:  lea    -0x99(%ebp),%eax
084c5d01 +0x0a6d:  mov    %eax,0x8(%esp)
084c5d05 +0x0a71:  lea    -0x13c(%ebp),%eax
084c5d0b +0x0a77:  mov    %eax,0x4(%esp)
084c5d0f +0x0a7b:  lea    -0xa0(%ebp),%eax
084c5d15 +0x0a81:  mov    %eax,(%esp)
084c5d18 +0x0a84:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084c5d1d +0x0a89:  mov    $0x1,%esi
084c5d22 +0x0a8e:  lea    -0x91(%ebp),%eax
084c5d28 +0x0a94:  mov    %eax,(%esp)
084c5d2b +0x0a97:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084c5d30 +0x0a9c:  mov    $0x1,%edi
084c5d35 +0x0aa1:  mov    0xc(%ebp),%eax
084c5d38 +0x0aa4:  mov    %eax,(%esp)
084c5d3b +0x0aa7:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084c5d40 +0x0aac:  lea    -0x91(%ebp),%edx
084c5d46 +0x0ab2:  mov    %edx,0x8(%esp)
084c5d4a +0x0ab6:  mov    %eax,0x4(%esp)
084c5d4e +0x0aba:  lea    -0x98(%ebp),%eax
084c5d54 +0x0ac0:  mov    %eax,(%esp)
084c5d57 +0x0ac3:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084c5d5c +0x0ac8:  movb   $0x1,-0x255(%ebp)
084c5d63 +0x0acf:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
084c5d68 +0x0ad4:  lea    -0xa0(%ebp),%edx
084c5d6e +0x0ada:  mov    %edx,0x8(%esp)
084c5d72 +0x0ade:  lea    -0x98(%ebp),%edx
084c5d78 +0x0ae4:  mov    %edx,0x4(%esp)
084c5d7c +0x0ae8:  mov    %eax,(%esp)
084c5d7f +0x0aeb:  call   08170b2c <_ZN19RestrictGeolocation7isAllowESsSs>  ; RestrictGeolocation::isAllow(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
084c5d84 +0x0af0:  xor    $0x1,%eax
084c5d87 +0x0af3:  test   %al,%al
084c5d89 +0x0af5:  je     084c5d92 <+0xafe>
084c5d8b +0x0af7:  mov    $0x1,%eax
084c5d90 +0x0afc:  jmp    084c5d97 <+0xb03>
084c5d92 +0x0afe:  mov    $0x0,%eax
084c5d97 +0x0b03:  mov    %al,-0x256(%ebp)
084c5d9d +0x0b09:  cmpb   $0x0,-0x255(%ebp)
084c5da4 +0x0b10:  jne    084c5dd9 <+0xb45>
084c5da6 +0x0b12:  jmp    084c5e25 <+0xb91>
084c5da8 +0x0b14:  mov    %edx,-0x228(%ebp)
084c5dae +0x0b1a:  mov    %eax,-0x22c(%ebp)
084c5db4 +0x0b20:  cmpb   $0x0,-0x255(%ebp)
084c5dbb +0x0b27:  je     084c5dcb <+0xb37>
084c5dbd +0x0b29:  lea    -0x98(%ebp),%eax
084c5dc3 +0x0b2f:  mov    %eax,(%esp)
084c5dc6 +0x0b32:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c5dcb +0x0b37:  mov    -0x22c(%ebp),%eax
084c5dd1 +0x0b3d:  mov    -0x228(%ebp),%edx
084c5dd7 +0x0b43:  jmp    084c5de9 <+0xb55>
084c5dd9 +0x0b45:  lea    -0x98(%ebp),%eax
084c5ddf +0x0b4b:  mov    %eax,(%esp)
084c5de2 +0x0b4e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c5de7 +0x0b53:  jmp    084c5e25 <+0xb91>
084c5de9 +0x0b55:  mov    %edx,-0x220(%ebp)
084c5def +0x0b5b:  mov    %eax,-0x224(%ebp)
084c5df5 +0x0b61:  mov    %edi,%ecx
084c5df7 +0x0b63:  test   %cl,%cl
084c5df9 +0x0b65:  je     084c5e09 <+0xb75>
084c5dfb +0x0b67:  lea    -0x91(%ebp),%eax
084c5e01 +0x0b6d:  mov    %eax,(%esp)
084c5e04 +0x0b70:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c5e09 +0x0b75:  mov    -0x224(%ebp),%eax
084c5e0f +0x0b7b:  mov    -0x220(%ebp),%edx
084c5e15 +0x0b81:  mov    %edx,%edi
084c5e17 +0x0b83:  mov    %eax,-0x21c(%ebp)
084c5e1d +0x0b89:  mov    %esi,%eax
084c5e1f +0x0b8b:  test   %al,%al
084c5e21 +0x0b8d:  je     084c5e49 <+0xbb5>
084c5e23 +0x0b8f:  jmp    084c5e3b <+0xba7>
084c5e25 +0x0b91:  mov    %edi,%edx
084c5e27 +0x0b93:  test   %dl,%dl
084c5e29 +0x0b95:  je     084c5e53 <+0xbbf>
084c5e2b +0x0b97:  lea    -0x91(%ebp),%eax
084c5e31 +0x0b9d:  mov    %eax,(%esp)
084c5e34 +0x0ba0:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c5e39 +0x0ba5:  jmp    084c5e53 <+0xbbf>
084c5e3b +0x0ba7:  lea    -0xa0(%ebp),%eax
084c5e41 +0x0bad:  mov    %eax,(%esp)
084c5e44 +0x0bb0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c5e49 +0x0bb5:  mov    -0x21c(%ebp),%eax
084c5e4f +0x0bbb:  mov    %edi,%edx
084c5e51 +0x0bbd:  jmp    084c5e69 <+0xbd5>
084c5e53 +0x0bbf:  mov    %esi,%ecx
084c5e55 +0x0bc1:  test   %cl,%cl
084c5e57 +0x0bc3:  je     084c5e88 <+0xbf4>
084c5e59 +0x0bc5:  lea    -0xa0(%ebp),%eax
084c5e5f +0x0bcb:  mov    %eax,(%esp)
084c5e62 +0x0bce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c5e67 +0x0bd3:  jmp    084c5e88 <+0xbf4>
084c5e69 +0x0bd5:  mov    %edx,%esi
084c5e6b +0x0bd7:  mov    %eax,%edi
084c5e6d +0x0bd9:  test   %bl,%bl
084c5e6f +0x0bdb:  je     084c5e7f <+0xbeb>
084c5e71 +0x0bdd:  lea    -0x99(%ebp),%eax
084c5e77 +0x0be3:  mov    %eax,(%esp)
084c5e7a +0x0be6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c5e7f +0x0beb:  mov    %edi,%eax
084c5e81 +0x0bed:  mov    %esi,%edx
084c5e83 +0x0bef:  jmp    084c7ab6 <+0x2822>
084c5e88 +0x0bf4:  test   %bl,%bl
084c5e8a +0x0bf6:  je     084c5e9a <+0xc06>
084c5e8c +0x0bf8:  lea    -0x99(%ebp),%eax
084c5e92 +0x0bfe:  mov    %eax,(%esp)
084c5e95 +0x0c01:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c5e9a +0x0c06:  cmpb   $0x0,-0x256(%ebp)
084c5ea1 +0x0c0d:  je     084c5f1d <+0xc89>
084c5ea3 +0x0c0f:  movl   $0x0,0x4(%esp)
084c5eab +0x0c17:  lea    -0x12c(%ebp),%eax
084c5eb1 +0x0c1d:  mov    %eax,(%esp)
084c5eb4 +0x0c20:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5eb9 +0x0c25:  movl   $0x41,0x4(%esp)
084c5ec1 +0x0c2d:  lea    -0x12c(%ebp),%eax
084c5ec7 +0x0c33:  mov    %eax,(%esp)
084c5eca +0x0c36:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c5ecf +0x0c3b:  movl   $0x1,0x4(%esp)
084c5ed7 +0x0c43:  lea    -0x12c(%ebp),%eax
084c5edd +0x0c49:  mov    %eax,(%esp)
084c5ee0 +0x0c4c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c5ee5 +0x0c51:  lea    -0x12c(%ebp),%eax
084c5eeb +0x0c57:  mov    %eax,0x4(%esp)
084c5eef +0x0c5b:  mov    0xc(%ebp),%eax
084c5ef2 +0x0c5e:  mov    %eax,(%esp)
084c5ef5 +0x0c61:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c5efa +0x0c66:  movl   $0x0,0xc(%esp)
084c5f02 +0x0c6e:  movl   $0x1,0x8(%esp)
084c5f0a +0x0c76:  movl   $0x15,0x4(%esp)
084c5f12 +0x0c7e:  mov    0xc(%ebp),%eax
084c5f15 +0x0c81:  mov    %eax,(%esp)
084c5f18 +0x0c84:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c5f1d +0x0c89:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c5f22 +0x0c8e:  mov    %eax,(%esp)
084c5f25 +0x0c91:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084c5f2a +0x0c96:  test   %al,%al
084c5f2c +0x0c98:  je     084c60b2 <+0xe1e>
084c5f32 +0x0c9e:  movl   $0x0,-0x154(%ebp)
084c5f3c +0x0ca8:  movl   $0x0,-0x150(%ebp)
084c5f46 +0x0cb2:  movl   $0x0,-0x14c(%ebp)
084c5f50 +0x0cbc:  movl   $0x0,-0x148(%ebp)
084c5f5a +0x0cc6:  lea    -0x89(%ebp),%eax
084c5f60 +0x0ccc:  mov    %eax,(%esp)
084c5f63 +0x0ccf:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084c5f68 +0x0cd4:  lea    -0x89(%ebp),%eax
084c5f6e +0x0cda:  mov    %eax,0x8(%esp)
084c5f72 +0x0cde:  lea    -0x13c(%ebp),%eax
084c5f78 +0x0ce4:  mov    %eax,0x4(%esp)
084c5f7c +0x0ce8:  lea    -0x90(%ebp),%eax
084c5f82 +0x0cee:  mov    %eax,(%esp)
084c5f85 +0x0cf1:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084c5f8a +0x0cf6:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
084c5f8f +0x0cfb:  lea    -0x90(%ebp),%edx
084c5f95 +0x0d01:  mov    %edx,0xc(%esp)
084c5f99 +0x0d05:  movl   $0x10,0x8(%esp)
084c5fa1 +0x0d0d:  lea    -0x154(%ebp),%edx
084c5fa7 +0x0d13:  mov    %edx,0x4(%esp)
084c5fab +0x0d17:  mov    %eax,(%esp)
084c5fae +0x0d1a:  call   08170f3a <_ZN19RestrictGeolocation14getCountryCodeEPcjSs>  ; RestrictGeolocation::getCountryCode(char*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
084c5fb3 +0x0d1f:  jmp    084c5fcd <+0xd39>
084c5fb5 +0x0d21:  mov    %edx,%ebx
084c5fb7 +0x0d23:  mov    %eax,%esi
084c5fb9 +0x0d25:  lea    -0x90(%ebp),%eax
084c5fbf +0x0d2b:  mov    %eax,(%esp)
084c5fc2 +0x0d2e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c5fc7 +0x0d33:  mov    %esi,%eax
084c5fc9 +0x0d35:  mov    %ebx,%edx
084c5fcb +0x0d37:  jmp    084c5fdd <+0xd49>
084c5fcd +0x0d39:  lea    -0x90(%ebp),%eax
084c5fd3 +0x0d3f:  mov    %eax,(%esp)
084c5fd6 +0x0d42:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c5fdb +0x0d47:  jmp    084c5ff8 <+0xd64>
084c5fdd +0x0d49:  mov    %edx,%ebx
084c5fdf +0x0d4b:  mov    %eax,%esi
084c5fe1 +0x0d4d:  lea    -0x89(%ebp),%eax
084c5fe7 +0x0d53:  mov    %eax,(%esp)
084c5fea +0x0d56:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c5fef +0x0d5b:  mov    %esi,%eax
084c5ff1 +0x0d5d:  mov    %ebx,%edx
084c5ff3 +0x0d5f:  jmp    084c7ab6 <+0x2822>
084c5ff8 +0x0d64:  lea    -0x89(%ebp),%eax
084c5ffe +0x0d6a:  mov    %eax,(%esp)
084c6001 +0x0d6d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c6006 +0x0d72:  lea    -0x81(%ebp),%eax
084c600c +0x0d78:  mov    %eax,(%esp)
084c600f +0x0d7b:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084c6014 +0x0d80:  lea    -0x81(%ebp),%eax
084c601a +0x0d86:  mov    %eax,0x8(%esp)
084c601e +0x0d8a:  lea    -0x154(%ebp),%eax
084c6024 +0x0d90:  mov    %eax,0x4(%esp)
084c6028 +0x0d94:  lea    -0x88(%ebp),%eax
084c602e +0x0d9a:  mov    %eax,(%esp)
084c6031 +0x0d9d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084c6036 +0x0da2:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
084c603b +0x0da7:  lea    -0x88(%ebp),%edx
084c6041 +0x0dad:  mov    %edx,0x4(%esp)
084c6045 +0x0db1:  mov    %eax,(%esp)
084c6048 +0x0db4:  call   08170ecc <_ZN19RestrictGeolocation7isAllowESs>  ; RestrictGeolocation::isAllow(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
084c604d +0x0db9:  movzbl %al,%eax
084c6050 +0x0dbc:  mov    %eax,0x4(%esp)
084c6054 +0x0dc0:  mov    0xc(%ebp),%eax
084c6057 +0x0dc3:  mov    %eax,(%esp)
084c605a +0x0dc6:  call   08692f46 <_ZN5CUser24setAllowLocationGeoStateEb>  ; CUser::setAllowLocationGeoState(bool)
084c605f +0x0dcb:  jmp    084c6079 <+0xde5>
084c6061 +0x0dcd:  mov    %edx,%ebx
084c6063 +0x0dcf:  mov    %eax,%esi
084c6065 +0x0dd1:  lea    -0x88(%ebp),%eax
084c606b +0x0dd7:  mov    %eax,(%esp)
084c606e +0x0dda:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c6073 +0x0ddf:  mov    %esi,%eax
084c6075 +0x0de1:  mov    %ebx,%edx
084c6077 +0x0de3:  jmp    084c6089 <+0xdf5>
084c6079 +0x0de5:  lea    -0x88(%ebp),%eax
084c607f +0x0deb:  mov    %eax,(%esp)
084c6082 +0x0dee:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c6087 +0x0df3:  jmp    084c60a4 <+0xe10>
084c6089 +0x0df5:  mov    %edx,%ebx
084c608b +0x0df7:  mov    %eax,%esi
084c608d +0x0df9:  lea    -0x81(%ebp),%eax
084c6093 +0x0dff:  mov    %eax,(%esp)
084c6096 +0x0e02:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c609b +0x0e07:  mov    %esi,%eax
084c609d +0x0e09:  mov    %ebx,%edx
084c609f +0x0e0b:  jmp    084c7ab6 <+0x2822>
084c60a4 +0x0e10:  lea    -0x81(%ebp),%eax
084c60aa +0x0e16:  mov    %eax,(%esp)
084c60ad +0x0e19:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c60b2 +0x0e1e:  movl   $0x2,0x4(%esp)
084c60ba +0x0e26:  mov    0xc(%ebp),%eax
084c60bd +0x0e29:  mov    %eax,(%esp)
084c60c0 +0x0e2c:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
084c60c5 +0x0e31:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c60ca +0x0e36:  mov    0xc(%ebp),%edx
084c60cd +0x0e39:  mov    %edx,0x4(%esp)
084c60d1 +0x0e3d:  mov    %eax,(%esp)
084c60d4 +0x0e40:  call   086cf59c <_ZN9GameWorld15InsertLoginUserEP5CUser>  ; GameWorld::InsertLoginUser(CUser*)
084c60d9 +0x0e45:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c60de +0x0e4a:  movl   $0x1c7e,0x8(%esp)
084c60e6 +0x0e52:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c60ee +0x0e5a:  mov    %eax,(%esp)
084c60f1 +0x0e5d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c60f6 +0x0e62:  movl   $0x1,0x8(%esp)
084c60fe +0x0e6a:  mov    %eax,0x4(%esp)
084c6102 +0x0e6e:  lea    -0x144(%ebp),%eax
084c6108 +0x0e74:  mov    %eax,(%esp)
084c610b +0x0e77:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c6110 +0x0e7c:  lea    -0x144(%ebp),%eax
084c6116 +0x0e82:  mov    %eax,(%esp)
084c6119 +0x0e85:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c611e +0x0e8a:  movl   $0x12e,0x4(%esp)
084c6126 +0x0e92:  mov    %eax,(%esp)
084c6129 +0x0e95:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c612e +0x0e9a:  mov    0xc(%ebp),%eax
084c6131 +0x0e9d:  mov    %eax,(%esp)
084c6134 +0x0ea0:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c6139 +0x0ea5:  mov    %eax,%ebx
084c613b +0x0ea7:  lea    -0x144(%ebp),%eax
084c6141 +0x0ead:  mov    %eax,(%esp)
084c6144 +0x0eb0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c6149 +0x0eb5:  mov    %ebx,0x4(%esp)
084c614d +0x0eb9:  mov    %eax,(%esp)
084c6150 +0x0ebc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c6155 +0x0ec1:  lea    -0x144(%ebp),%eax
084c615b +0x0ec7:  mov    %eax,(%esp)
084c615e +0x0eca:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084c6163 +0x0ecf:  mov    %eax,(%esp)
084c6166 +0x0ed2:  call   084f1646 <_GLOBAL__I__Z7getUserj+0x85f8>  ; global constructors keyed to getUser(unsigned int)+0x85f8
084c616b +0x0ed7:  mov    %eax,-0x54(%ebp)
084c616e +0x0eda:  mov    0xc(%ebp),%eax
084c6171 +0x0edd:  mov    %eax,(%esp)
084c6174 +0x0ee0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c6179 +0x0ee5:  mov    -0x54(%ebp),%edx
084c617c +0x0ee8:  mov    %eax,(%edx)
084c617e +0x0eea:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c6183 +0x0eef:  lea    -0x144(%ebp),%edx
084c6189 +0x0ef5:  mov    %edx,0x8(%esp)
084c618d +0x0ef9:  movl   $0x2,0x4(%esp)
084c6195 +0x0f01:  mov    %eax,(%esp)
084c6198 +0x0f04:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c619d +0x0f09:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c61a2 +0x0f0e:  mov    0xc(%ebp),%edx
084c61a5 +0x0f11:  mov    %edx,0x4(%esp)
084c61a9 +0x0f15:  mov    %eax,(%esp)
084c61ac +0x0f18:  call   0829445e <_ZN12CGameManager17insertUserByAccIDEP5CUser>  ; CGameManager::insertUserByAccID(CUser*)
084c61b1 +0x0f1d:  mov    -0x60(%ebp),%eax
084c61b4 +0x0f20:  lea    0x2204(%eax),%ecx
084c61ba +0x0f26:  mov    -0x60(%ebp),%eax
084c61bd +0x0f29:  lea    0x2284(%eax),%edx
084c61c3 +0x0f2f:  mov    -0x60(%ebp),%eax
084c61c6 +0x0f32:  add    $0x2184,%eax
084c61cb +0x0f37:  mov    %ecx,0xc(%esp)
084c61cf +0x0f3b:  mov    %edx,0x8(%esp)
084c61d3 +0x0f3f:  mov    %eax,0x4(%esp)
084c61d7 +0x0f43:  mov    0xc(%ebp),%eax
084c61da +0x0f46:  mov    %eax,(%esp)
084c61dd +0x0f49:  call   084ec9ec <_GLOBAL__I__Z7getUserj+0x399e>  ; global constructors keyed to getUser(unsigned int)+0x399e
084c61e2 +0x0f4e:  mov    -0x60(%ebp),%eax
084c61e5 +0x0f51:  add    $0x2284,%eax
084c61ea +0x0f56:  mov    %eax,0x4(%esp)
084c61ee +0x0f5a:  mov    0xc(%ebp),%eax
084c61f1 +0x0f5d:  mov    %eax,(%esp)
084c61f4 +0x0f60:  call   0867ecf0 <_ZN5CUser8SetBirthEPKc>  ; CUser::SetBirth(char const*)
084c61f9 +0x0f65:  movl   $0x0,-0x30(%ebp)
084c6200 +0x0f6c:  jmp    084c629d <+0x1009>
084c6205 +0x0f71:  movb   $0x0,-0x2a(%ebp)
084c6209 +0x0f75:  mov    -0x60(%ebp),%eax
084c620c +0x0f78:  mov    0x2294(%eax),%eax
084c6212 +0x0f7e:  sub    $0x1,%eax
084c6215 +0x0f81:  cmp    -0x30(%ebp),%eax
084c6218 +0x0f84:  jne    084c621e <+0xf8a>
084c621a +0x0f86:  movb   $0x1,-0x2a(%ebp)
084c621e +0x0f8a:  movzbl -0x2a(%ebp),%esi
084c6222 +0x0f8e:  mov    -0x30(%ebp),%edx
084c6225 +0x0f91:  mov    -0x60(%ebp),%eax
084c6228 +0x0f94:  add    $0x229,%edx
084c622e +0x0f9a:  shl    $0x4,%edx
084c6231 +0x0f9d:  add    %edx,%eax
084c6233 +0x0f9f:  add    $0x14,%eax
084c6236 +0x0fa2:  mov    (%eax),%ebx
084c6238 +0x0fa4:  mov    -0x30(%ebp),%edx
084c623b +0x0fa7:  mov    -0x60(%ebp),%eax
084c623e +0x0faa:  add    $0x229,%edx
084c6244 +0x0fb0:  shl    $0x4,%edx
084c6247 +0x0fb3:  add    %edx,%eax
084c6249 +0x0fb5:  add    $0x10,%eax
084c624c +0x0fb8:  mov    (%eax),%ecx
084c624e +0x0fba:  mov    -0x30(%ebp),%edx
084c6251 +0x0fbd:  mov    -0x60(%ebp),%eax
084c6254 +0x0fc0:  add    $0x229,%edx
084c625a +0x0fc6:  shl    $0x4,%edx
084c625d +0x0fc9:  add    %edx,%eax
084c625f +0x0fcb:  add    $0xc,%eax
084c6262 +0x0fce:  mov    (%eax),%edx
084c6264 +0x0fd0:  mov    -0x30(%ebp),%edi
084c6267 +0x0fd3:  mov    -0x60(%ebp),%eax
084c626a +0x0fd6:  add    $0x229,%edi
084c6270 +0x0fdc:  shl    $0x4,%edi
084c6273 +0x0fdf:  add    %edi,%eax
084c6275 +0x0fe1:  add    $0x8,%eax
084c6278 +0x0fe4:  mov    (%eax),%eax
084c627a +0x0fe6:  mov    %esi,0x14(%esp)
084c627e +0x0fea:  mov    %ebx,0x10(%esp)
084c6282 +0x0fee:  mov    %ecx,0xc(%esp)
084c6286 +0x0ff2:  mov    %edx,0x8(%esp)
084c628a +0x0ff6:  mov    %eax,0x4(%esp)
084c628e +0x0ffa:  mov    0xc(%ebp),%eax
084c6291 +0x0ffd:  mov    %eax,(%esp)
084c6294 +0x1000:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
084c6299 +0x1005:  addl   $0x1,-0x30(%ebp)
084c629d +0x1009:  mov    -0x60(%ebp),%eax
084c62a0 +0x100c:  mov    0x2294(%eax),%eax
084c62a6 +0x1012:  cmp    -0x30(%ebp),%eax
084c62a9 +0x1015:  setg   %al
084c62ac +0x1018:  test   %al,%al
084c62ae +0x101a:  jne    084c6205 <+0xf71>
084c62b4 +0x1020:  mov    -0x60(%ebp),%eax
084c62b7 +0x1023:  mov    0xcc(%eax),%eax
084c62bd +0x1029:  mov    %eax,0x4(%esp)
084c62c1 +0x102d:  mov    0xc(%ebp),%eax
084c62c4 +0x1030:  mov    %eax,(%esp)
084c62c7 +0x1033:  call   084ec9c8 <_GLOBAL__I__Z7getUserj+0x397a>  ; global constructors keyed to getUser(unsigned int)+0x397a
084c62cc +0x1038:  mov    -0x60(%ebp),%eax
084c62cf +0x103b:  mov    0xd4(%eax),%eax
084c62d5 +0x1041:  mov    %eax,0x4(%esp)
084c62d9 +0x1045:  mov    0xc(%ebp),%eax
084c62dc +0x1048:  mov    %eax,(%esp)
084c62df +0x104b:  call   084ec9da <_GLOBAL__I__Z7getUserj+0x398c>  ; global constructors keyed to getUser(unsigned int)+0x398c
084c62e4 +0x1050:  mov    -0x60(%ebp),%eax
084c62e7 +0x1053:  mov    0xdc(%eax),%eax
084c62ed +0x1059:  test   %eax,%eax
084c62ef +0x105b:  jle    084c6322 <+0x108e>
084c62f1 +0x105d:  mov    -0x60(%ebp),%eax
084c62f4 +0x1060:  add    $0xe0,%eax
084c62f9 +0x1065:  mov    %eax,%edx
084c62fb +0x1067:  mov    -0x60(%ebp),%eax
084c62fe +0x106a:  mov    0xdc(%eax),%eax
084c6304 +0x1070:  mov    %edx,0x8(%esp)
084c6308 +0x1074:  mov    %eax,0x4(%esp)
084c630c +0x1078:  mov    0xc(%ebp),%eax
084c630f +0x107b:  mov    %eax,(%esp)
084c6312 +0x107e:  call   08649c6a <_ZN5CUser13SetCharacInfoEiPc>  ; CUser::SetCharacInfo(int, char*)
084c6317 +0x1083:  mov    0xc(%ebp),%eax
084c631a +0x1086:  mov    %eax,(%esp)
084c631d +0x1089:  call   0867ceae <_ZN5CUser25SetNeedCheckOverEquipItemEv>  ; CUser::SetNeedCheckOverEquipItem()
084c6322 +0x108e:  mov    -0x60(%ebp),%eax
084c6325 +0x1091:  mov    0x15b0(%eax),%eax
084c632b +0x1097:  test   %eax,%eax
084c632d +0x1099:  jle    084c63ea <+0x1156>
084c6333 +0x109f:  mov    -0x60(%ebp),%eax
084c6336 +0x10a2:  lea    0x15b4(%eax),%edx
084c633c +0x10a8:  mov    -0x60(%ebp),%eax
084c633f +0x10ab:  mov    0x15b0(%eax),%eax
084c6345 +0x10b1:  mov    %edx,0x8(%esp)
084c6349 +0x10b5:  mov    %eax,0x4(%esp)
084c634d +0x10b9:  mov    0xc(%ebp),%eax
084c6350 +0x10bc:  mov    %eax,(%esp)
084c6353 +0x10bf:  call   0868e544 <_ZN5CUser22SetCharacMercenaryInfoEiP21CHARAC_LOAD_MERCENARY>  ; CUser::SetCharacMercenaryInfo(int, CHARAC_LOAD_MERCENARY*)
084c6358 +0x10c4:  movb   $0x1,-0x29(%ebp)
084c635c +0x10c8:  movl   $0x0,-0x28(%ebp)
084c6363 +0x10cf:  jmp    084c6386 <+0x10f2>
084c6365 +0x10d1:  mov    -0x28(%ebp),%eax
084c6368 +0x10d4:  mov    -0x60(%ebp),%edx
084c636b +0x10d7:  imul   $0x54,%eax,%eax
084c636e +0x10da:  lea    (%edx,%eax,1),%eax
084c6371 +0x10dd:  add    $0x15dc,%eax
084c6376 +0x10e2:  mov    (%eax),%eax
084c6378 +0x10e4:  test   %eax,%eax
084c637a +0x10e6:  je     084c6382 <+0x10ee>
084c637c +0x10e8:  movb   $0x0,-0x29(%ebp)
084c6380 +0x10ec:  jmp    084c63aa <+0x1116>
084c6382 +0x10ee:  addl   $0x1,-0x28(%ebp)
084c6386 +0x10f2:  mov    -0x60(%ebp),%eax
084c6389 +0x10f5:  mov    0x15b0(%eax),%eax
084c638f +0x10fb:  cmp    -0x28(%ebp),%eax
084c6392 +0x10fe:  jle    084c63a1 <+0x110d>
084c6394 +0x1100:  cmpl   $0x23,-0x28(%ebp)
084c6398 +0x1104:  jg     084c63a1 <+0x110d>
084c639a +0x1106:  mov    $0x1,%eax
084c639f +0x110b:  jmp    084c63a6 <+0x1112>
084c63a1 +0x110d:  mov    $0x0,%eax
084c63a6 +0x1112:  test   %al,%al
084c63a8 +0x1114:  jne    084c6365 <+0x10d1>
084c63aa +0x1116:  cmpb   $0x0,-0x29(%ebp)
084c63ae +0x111a:  je     084c63ea <+0x1156>
084c63b0 +0x111c:  mov    0xc(%ebp),%eax
084c63b3 +0x111f:  mov    %eax,(%esp)
084c63b6 +0x1122:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084c63bb +0x1127:  movl   $0x0,0x14(%esp)
084c63c3 +0x112f:  movl   $0x0,0x10(%esp)
084c63cb +0x1137:  movl   $0x1,0xc(%esp)
084c63d3 +0x113f:  movl   $0x1aa,0x8(%esp)
084c63db +0x1147:  mov    0xc(%ebp),%edx
084c63de +0x114a:  mov    %edx,0x4(%esp)
084c63e2 +0x114e:  mov    %eax,(%esp)
084c63e5 +0x1151:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084c63ea +0x1156:  movl   $0x0,-0x24(%ebp)
084c63f1 +0x115d:  jmp    084c6416 <+0x1182>
084c63f3 +0x115f:  mov    -0x24(%ebp),%edx
084c63f6 +0x1162:  mov    -0x60(%ebp),%eax
084c63f9 +0x1165:  add    $0xa4c,%edx
084c63ff +0x116b:  mov    0xc(%eax,%edx,4),%eax
084c6403 +0x116f:  mov    %eax,0x4(%esp)
084c6407 +0x1173:  mov    0xc(%ebp),%eax
084c640a +0x1176:  mov    %eax,(%esp)
084c640d +0x1179:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
084c6412 +0x117e:  addl   $0x1,-0x24(%ebp)
084c6416 +0x1182:  mov    -0x60(%ebp),%eax
084c6419 +0x1185:  movzwl 0x293a(%eax),%eax
084c6420 +0x118c:  movzwl %ax,%eax
084c6423 +0x118f:  cmp    -0x24(%ebp),%eax
084c6426 +0x1192:  setg   %al
084c6429 +0x1195:  test   %al,%al
084c642b +0x1197:  jne    084c63f3 <+0x115f>
084c642d +0x1199:  mov    0xc(%ebp),%eax
084c6430 +0x119c:  mov    %eax,(%esp)
084c6433 +0x119f:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
084c6438 +0x11a4:  mov    %eax,-0x254(%ebp)
084c643e +0x11aa:  mov    0xc(%ebp),%eax
084c6441 +0x11ad:  mov    %eax,(%esp)
084c6444 +0x11b0:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
084c6449 +0x11b5:  movzbl %al,%eax
084c644c +0x11b8:  mov    %eax,-0x250(%ebp)
084c6452 +0x11be:  mov    0xc(%ebp),%eax
084c6455 +0x11c1:  lea    0xe0(%eax),%edx
084c645b +0x11c7:  movl   $0x10,0x8(%esp)
084c6463 +0x11cf:  lea    -0x164(%ebp),%eax
084c6469 +0x11d5:  mov    %eax,0x4(%esp)
084c646d +0x11d9:  mov    %edx,(%esp)
084c6470 +0x11dc:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c6475 +0x11e1:  mov    %eax,%edi
084c6477 +0x11e3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c647c +0x11e8:  mov    %eax,(%esp)
084c647f +0x11eb:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084c6484 +0x11f0:  mov    %eax,%esi
084c6486 +0x11f2:  mov    -0x60(%ebp),%eax
084c6489 +0x11f5:  mov    0xc0(%eax),%eax
084c648f +0x11fb:  mov    %eax,-0x24c(%ebp)
084c6495 +0x1201:  mov    0xc(%ebp),%eax
084c6498 +0x1204:  mov    %eax,(%esp)
084c649b +0x1207:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c64a0 +0x120c:  mov    %eax,%ebx
084c64a2 +0x120e:  mov    0xc(%ebp),%eax
084c64a5 +0x1211:  mov    %eax,(%esp)
084c64a8 +0x1214:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c64ad +0x1219:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084c64b3 +0x121f:  mov    %eax,0x4(%esp)
084c64b7 +0x1223:  mov    %edx,(%esp)
084c64ba +0x1226:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084c64bf +0x122b:  mov    -0x254(%ebp),%edx
084c64c5 +0x1231:  mov    %edx,0x18(%esp)
084c64c9 +0x1235:  mov    -0x250(%ebp),%ecx
084c64cf +0x123b:  mov    %ecx,0x14(%esp)
084c64d3 +0x123f:  mov    %edi,0x10(%esp)
084c64d7 +0x1243:  mov    %esi,0xc(%esp)
084c64db +0x1247:  mov    -0x24c(%ebp),%edx
084c64e1 +0x124d:  mov    %edx,0x8(%esp)
084c64e5 +0x1251:  mov    %ebx,0x4(%esp)
084c64e9 +0x1255:  mov    %eax,(%esp)
084c64ec +0x1258:  call   08470c94 <_ZN19CMonitorServerProxy9SendLoginEijiPchS0_>  ; CMonitorServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*)
084c64f1 +0x125d:  mov    0xc(%ebp),%eax
084c64f4 +0x1260:  mov    %eax,(%esp)
084c64f7 +0x1263:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
084c64fc +0x1268:  mov    %eax,-0x248(%ebp)
084c6502 +0x126e:  mov    0xc(%ebp),%eax
084c6505 +0x1271:  mov    %eax,(%esp)
084c6508 +0x1274:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
084c650d +0x1279:  movzbl %al,%eax
084c6510 +0x127c:  mov    %eax,-0x244(%ebp)
084c6516 +0x1282:  mov    0xc(%ebp),%eax
084c6519 +0x1285:  lea    0xe0(%eax),%edx
084c651f +0x128b:  movl   $0x10,0x8(%esp)
084c6527 +0x1293:  lea    -0x164(%ebp),%eax
084c652d +0x1299:  mov    %eax,0x4(%esp)
084c6531 +0x129d:  mov    %edx,(%esp)
084c6534 +0x12a0:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c6539 +0x12a5:  mov    %eax,%edi
084c653b +0x12a7:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c6540 +0x12ac:  mov    %eax,(%esp)
084c6543 +0x12af:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084c6548 +0x12b4:  mov    %eax,%esi
084c654a +0x12b6:  mov    -0x60(%ebp),%eax
084c654d +0x12b9:  mov    0xc0(%eax),%eax
084c6553 +0x12bf:  mov    %eax,-0x240(%ebp)
084c6559 +0x12c5:  mov    0xc(%ebp),%eax
084c655c +0x12c8:  mov    %eax,(%esp)
084c655f +0x12cb:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c6564 +0x12d0:  mov    %eax,%ebx
084c6566 +0x12d2:  mov    0xc(%ebp),%eax
084c6569 +0x12d5:  mov    %eax,(%esp)
084c656c +0x12d8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c6571 +0x12dd:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084c6577 +0x12e3:  mov    %eax,0x4(%esp)
084c657b +0x12e7:  mov    %edx,(%esp)
084c657e +0x12ea:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084c6583 +0x12ef:  mov    -0x248(%ebp),%ecx
084c6589 +0x12f5:  mov    %ecx,0x18(%esp)
084c658d +0x12f9:  mov    -0x244(%ebp),%edx
084c6593 +0x12ff:  mov    %edx,0x14(%esp)
084c6597 +0x1303:  mov    %edi,0x10(%esp)
084c659b +0x1307:  mov    %esi,0xc(%esp)
084c659f +0x130b:  mov    -0x240(%ebp),%ecx
084c65a5 +0x1311:  mov    %ecx,0x8(%esp)
084c65a9 +0x1315:  mov    %ebx,0x4(%esp)
084c65ad +0x1319:  mov    %eax,(%esp)
084c65b0 +0x131c:  call   0846db2a <_ZN17CGuildServerProxy9SendLoginEijiPchS0_>  ; CGuildServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*)
084c65b5 +0x1321:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c65ba +0x1326:  mov    0x378(%eax),%ebx
084c65c0 +0x132c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c65c5 +0x1331:  mov    %eax,(%esp)
084c65c8 +0x1334:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084c65cd +0x1339:  mov    -0x60(%ebp),%edx
084c65d0 +0x133c:  mov    0xc0(%edx),%ecx
084c65d6 +0x1342:  mov    &_ZN10GlobalData20s_double_check_proxyE,%edx
084c65dc +0x1348:  mov    %ebx,0xc(%esp)
084c65e0 +0x134c:  mov    %eax,0x8(%esp)
084c65e4 +0x1350:  mov    %ecx,0x4(%esp)
084c65e8 +0x1354:  mov    %edx,(%esp)
084c65eb +0x1357:  call   0846d412 <_ZN27CDoubleConnCheckServerProxy9SendLoginEjii>  ; CDoubleConnCheckServerProxy::SendLogin(unsigned int, int, int)
084c65f0 +0x135c:  mov    -0x60(%ebp),%eax
084c65f3 +0x135f:  lea    0x3f64(%eax),%ebx
084c65f9 +0x1365:  mov    0xc(%ebp),%eax
084c65fc +0x1368:  mov    %eax,(%esp)
084c65ff +0x136b:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
084c6604 +0x1370:  mov    %ebx,0x4(%esp)
084c6608 +0x1374:  mov    %eax,(%esp)
084c660b +0x1377:  call   082872a0 <_ZN16Secu_GoldControl7SetInfoER14user_gold_info>  ; Secu_GoldControl::SetInfo(user_gold_info&)
084c6610 +0x137c:  movl   $0x0,-0x20(%ebp)
084c6617 +0x1383:  jmp    084c6708 <+0x1474>
084c661c +0x1388:  mov    -0x20(%ebp),%edx
084c661f +0x138b:  mov    -0x60(%ebp),%ecx
084c6622 +0x138e:  mov    %edx,%eax
084c6624 +0x1390:  add    %eax,%eax
084c6626 +0x1392:  add    %edx,%eax
084c6628 +0x1394:  shl    $0x3,%eax
084c662b +0x1397:  lea    (%ecx,%eax,1),%eax
084c662e +0x139a:  add    $0x3a54,%eax
084c6633 +0x139f:  mov    (%eax),%eax
084c6635 +0x13a1:  cmp    $0x63,%eax
084c6638 +0x13a4:  jle    084c6700 <+0x146c>
084c663e +0x13aa:  mov    -0x20(%ebp),%edx
084c6641 +0x13ad:  mov    -0x60(%ebp),%ecx
084c6644 +0x13b0:  mov    %edx,%eax
084c6646 +0x13b2:  add    %eax,%eax
084c6648 +0x13b4:  add    %edx,%eax
084c664a +0x13b6:  shl    $0x3,%eax
084c664d +0x13b9:  lea    (%ecx,%eax,1),%eax
084c6650 +0x13bc:  add    $0x3a54,%eax
084c6655 +0x13c1:  mov    (%eax),%eax
084c6657 +0x13c3:  cmp    $0xc7,%eax
084c665c +0x13c8:  jg     084c6703 <+0x146f>
084c6662 +0x13ce:  mov    -0x20(%ebp),%edx
084c6665 +0x13d1:  mov    -0x60(%ebp),%ecx
084c6668 +0x13d4:  mov    %edx,%eax
084c666a +0x13d6:  add    %eax,%eax
084c666c +0x13d8:  add    %edx,%eax
084c666e +0x13da:  shl    $0x3,%eax
084c6671 +0x13dd:  lea    (%ecx,%eax,1),%eax
084c6674 +0x13e0:  add    $0x3a68,%eax
084c6679 +0x13e5:  mov    (%eax),%ebx
084c667b +0x13e7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c6682 +0x13ee:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c6687 +0x13f3:  cmp    %eax,%ebx
084c6689 +0x13f5:  jge    084c66a8 <+0x1414>
084c668b +0x13f7:  mov    -0x20(%ebp),%edx
084c668e +0x13fa:  mov    -0x60(%ebp),%ecx
084c6691 +0x13fd:  mov    %edx,%eax
084c6693 +0x13ff:  add    %eax,%eax
084c6695 +0x1401:  add    %edx,%eax
084c6697 +0x1403:  shl    $0x3,%eax
084c669a +0x1406:  lea    (%ecx,%eax,1),%eax
084c669d +0x1409:  add    $0x3a68,%eax
084c66a2 +0x140e:  mov    (%eax),%eax
084c66a4 +0x1410:  test   %eax,%eax
084c66a6 +0x1412:  jne    084c66af <+0x141b>
084c66a8 +0x1414:  mov    $0x1,%eax
084c66ad +0x1419:  jmp    084c66b4 <+0x1420>
084c66af +0x141b:  mov    $0x0,%eax
084c66b4 +0x1420:  test   %al,%al
084c66b6 +0x1422:  je     084c6704 <+0x1470>
084c66b8 +0x1424:  mov    -0x20(%ebp),%edx
084c66bb +0x1427:  mov    -0x60(%ebp),%ecx
084c66be +0x142a:  mov    %edx,%eax
084c66c0 +0x142c:  add    %eax,%eax
084c66c2 +0x142e:  add    %edx,%eax
084c66c4 +0x1430:  shl    $0x3,%eax
084c66c7 +0x1433:  lea    (%ecx,%eax,1),%eax
084c66ca +0x1436:  add    $0x3a54,%eax
084c66cf +0x143b:  mov    (%eax),%eax
084c66d1 +0x143d:  cmp    $0x65,%eax
084c66d4 +0x1440:  jne    084c6704 <+0x1470>
084c66d6 +0x1442:  mov    -0x20(%ebp),%edx
084c66d9 +0x1445:  mov    -0x60(%ebp),%ecx
084c66dc +0x1448:  mov    %edx,%eax
084c66de +0x144a:  add    %eax,%eax
084c66e0 +0x144c:  add    %edx,%eax
084c66e2 +0x144e:  shl    $0x3,%eax
084c66e5 +0x1451:  lea    (%ecx,%eax,1),%eax
084c66e8 +0x1454:  add    $0x3a5c,%eax
084c66ed +0x1459:  mov    (%eax),%eax
084c66ef +0x145b:  mov    %eax,0x4(%esp)
084c66f3 +0x145f:  mov    0xc(%ebp),%eax
084c66f6 +0x1462:  mov    %eax,(%esp)
084c66f9 +0x1465:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
084c66fe +0x146a:  jmp    084c6704 <+0x1470>
084c6700 +0x146c:  nop
084c6701 +0x146d:  jmp    084c6704 <+0x1470>
084c6703 +0x146f:  nop
084c6704 +0x1470:  addl   $0x1,-0x20(%ebp)
084c6708 +0x1474:  mov    -0x60(%ebp),%eax
084c670b +0x1477:  mov    0x3a50(%eax),%eax
084c6711 +0x147d:  cmp    -0x20(%ebp),%eax
084c6714 +0x1480:  setg   %al
084c6717 +0x1483:  test   %al,%al
084c6719 +0x1485:  jne    084c661c <+0x1388>
084c671f +0x148b:  movl   $0x0,-0x1c(%ebp)
084c6726 +0x1492:  jmp    084c68af <+0x161b>
084c672b +0x1497:  mov    -0x1c(%ebp),%edx
084c672e +0x149a:  mov    -0x60(%ebp),%ecx
084c6731 +0x149d:  mov    %edx,%eax
084c6733 +0x149f:  add    %eax,%eax
084c6735 +0x14a1:  add    %edx,%eax
084c6737 +0x14a3:  shl    $0x3,%eax
084c673a +0x14a6:  lea    (%ecx,%eax,1),%eax
084c673d +0x14a9:  add    $0x3a68,%eax
084c6742 +0x14ae:  mov    (%eax),%ebx
084c6744 +0x14b0:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c674b +0x14b7:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c6750 +0x14bc:  cmp    %eax,%ebx
084c6752 +0x14be:  jge    084c6771 <+0x14dd>
084c6754 +0x14c0:  mov    -0x1c(%ebp),%edx
084c6757 +0x14c3:  mov    -0x60(%ebp),%ecx
084c675a +0x14c6:  mov    %edx,%eax
084c675c +0x14c8:  add    %eax,%eax
084c675e +0x14ca:  add    %edx,%eax
084c6760 +0x14cc:  shl    $0x3,%eax
084c6763 +0x14cf:  lea    (%ecx,%eax,1),%eax
084c6766 +0x14d2:  add    $0x3a68,%eax
084c676b +0x14d7:  mov    (%eax),%eax
084c676d +0x14d9:  test   %eax,%eax
084c676f +0x14db:  jne    084c6778 <+0x14e4>
084c6771 +0x14dd:  mov    $0x1,%eax
084c6776 +0x14e2:  jmp    084c677d <+0x14e9>
084c6778 +0x14e4:  mov    $0x0,%eax
084c677d +0x14e9:  test   %al,%al
084c677f +0x14eb:  je     084c68ab <+0x1617>
084c6785 +0x14f1:  mov    -0x1c(%ebp),%edx
084c6788 +0x14f4:  mov    -0x60(%ebp),%ecx
084c678b +0x14f7:  mov    %edx,%eax
084c678d +0x14f9:  add    %eax,%eax
084c678f +0x14fb:  add    %edx,%eax
084c6791 +0x14fd:  shl    $0x3,%eax
084c6794 +0x1500:  lea    (%ecx,%eax,1),%eax
084c6797 +0x1503:  add    $0x3a54,%eax
084c679c +0x1508:  mov    (%eax),%eax
084c679e +0x150a:  cmp    $0x4,%eax
084c67a1 +0x150d:  jne    084c67b6 <+0x1522>
084c67a3 +0x150f:  movl   $0x8,0x4(%esp)
084c67ab +0x1517:  mov    0xc(%ebp),%eax
084c67ae +0x151a:  mov    %eax,(%esp)
084c67b1 +0x151d:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c67b6 +0x1522:  mov    -0x1c(%ebp),%edx
084c67b9 +0x1525:  mov    -0x60(%ebp),%ecx
084c67bc +0x1528:  mov    %edx,%eax
084c67be +0x152a:  add    %eax,%eax
084c67c0 +0x152c:  add    %edx,%eax
084c67c2 +0x152e:  shl    $0x3,%eax
084c67c5 +0x1531:  lea    (%ecx,%eax,1),%eax
084c67c8 +0x1534:  add    $0x3a54,%eax
084c67cd +0x1539:  mov    (%eax),%eax
084c67cf +0x153b:  cmp    $0xb,%eax
084c67d2 +0x153e:  jne    084c67e7 <+0x1553>
084c67d4 +0x1540:  movl   $0x1,0x4(%esp)
084c67dc +0x1548:  mov    0xc(%ebp),%eax
084c67df +0x154b:  mov    %eax,(%esp)
084c67e2 +0x154e:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c67e7 +0x1553:  mov    -0x1c(%ebp),%edx
084c67ea +0x1556:  mov    -0x60(%ebp),%ecx
084c67ed +0x1559:  mov    %edx,%eax
084c67ef +0x155b:  add    %eax,%eax
084c67f1 +0x155d:  add    %edx,%eax
084c67f3 +0x155f:  shl    $0x3,%eax
084c67f6 +0x1562:  lea    (%ecx,%eax,1),%eax
084c67f9 +0x1565:  add    $0x3a54,%eax
084c67fe +0x156a:  mov    (%eax),%eax
084c6800 +0x156c:  cmp    $0xc,%eax
084c6803 +0x156f:  jne    084c6818 <+0x1584>
084c6805 +0x1571:  movl   $0x4,0x4(%esp)
084c680d +0x1579:  mov    0xc(%ebp),%eax
084c6810 +0x157c:  mov    %eax,(%esp)
084c6813 +0x157f:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c6818 +0x1584:  mov    -0x1c(%ebp),%edx
084c681b +0x1587:  mov    -0x60(%ebp),%ecx
084c681e +0x158a:  mov    %edx,%eax
084c6820 +0x158c:  add    %eax,%eax
084c6822 +0x158e:  add    %edx,%eax
084c6824 +0x1590:  shl    $0x3,%eax
084c6827 +0x1593:  lea    (%ecx,%eax,1),%eax
084c682a +0x1596:  add    $0x3a54,%eax
084c682f +0x159b:  mov    (%eax),%eax
084c6831 +0x159d:  cmp    $0xd,%eax
084c6834 +0x15a0:  jne    084c6849 <+0x15b5>
084c6836 +0x15a2:  movl   $0x20,0x4(%esp)
084c683e +0x15aa:  mov    0xc(%ebp),%eax
084c6841 +0x15ad:  mov    %eax,(%esp)
084c6844 +0x15b0:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c6849 +0x15b5:  mov    -0x1c(%ebp),%edx
084c684c +0x15b8:  mov    -0x60(%ebp),%ecx
084c684f +0x15bb:  mov    %edx,%eax
084c6851 +0x15bd:  add    %eax,%eax
084c6853 +0x15bf:  add    %edx,%eax
084c6855 +0x15c1:  shl    $0x3,%eax
084c6858 +0x15c4:  lea    (%ecx,%eax,1),%eax
084c685b +0x15c7:  add    $0x3a54,%eax
084c6860 +0x15cc:  mov    (%eax),%eax
084c6862 +0x15ce:  cmp    $0xe,%eax
084c6865 +0x15d1:  jne    084c687a <+0x15e6>
084c6867 +0x15d3:  movl   $0x2,0x4(%esp)
084c686f +0x15db:  mov    0xc(%ebp),%eax
084c6872 +0x15de:  mov    %eax,(%esp)
084c6875 +0x15e1:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c687a +0x15e6:  mov    -0x1c(%ebp),%edx
084c687d +0x15e9:  mov    -0x60(%ebp),%ecx
084c6880 +0x15ec:  mov    %edx,%eax
084c6882 +0x15ee:  add    %eax,%eax
084c6884 +0x15f0:  add    %edx,%eax
084c6886 +0x15f2:  shl    $0x3,%eax
084c6889 +0x15f5:  lea    (%ecx,%eax,1),%eax
084c688c +0x15f8:  add    $0x3a54,%eax
084c6891 +0x15fd:  mov    (%eax),%eax
084c6893 +0x15ff:  cmp    $0x67,%eax
084c6896 +0x1602:  jne    084c68ab <+0x1617>
084c6898 +0x1604:  movl   $0x80,0x4(%esp)
084c68a0 +0x160c:  mov    0xc(%ebp),%eax
084c68a3 +0x160f:  mov    %eax,(%esp)
084c68a6 +0x1612:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c68ab +0x1617:  addl   $0x1,-0x1c(%ebp)
084c68af +0x161b:  mov    -0x60(%ebp),%eax
084c68b2 +0x161e:  mov    0x3a50(%eax),%eax
084c68b8 +0x1624:  cmp    -0x1c(%ebp),%eax
084c68bb +0x1627:  setg   %al
084c68be +0x162a:  test   %al,%al
084c68c0 +0x162c:  jne    084c672b <+0x1497>
084c68c6 +0x1632:  mov    -0x60(%ebp),%eax
084c68c9 +0x1635:  mov    0x3a24(%eax),%eax
084c68cf +0x163b:  mov    %eax,0x4(%esp)
084c68d3 +0x163f:  mov    0xc(%ebp),%eax
084c68d6 +0x1642:  mov    %eax,(%esp)
084c68d9 +0x1645:  call   084ec96a <_GLOBAL__I__Z7getUserj+0x391c>  ; global constructors keyed to getUser(unsigned int)+0x391c
084c68de +0x164a:  mov    -0x60(%ebp),%eax
084c68e1 +0x164d:  mov    0x3a2c(%eax),%edx
084c68e7 +0x1653:  mov    0x3a28(%eax),%eax
084c68ed +0x1659:  mov    %eax,0x4(%esp)
084c68f1 +0x165d:  mov    %edx,0x8(%esp)
084c68f5 +0x1661:  mov    0xc(%ebp),%eax
084c68f8 +0x1664:  mov    %eax,(%esp)
084c68fb +0x1667:  call   084ec940 <_GLOBAL__I__Z7getUserj+0x38f2>  ; global constructors keyed to getUser(unsigned int)+0x38f2
084c6900 +0x166c:  mov    -0x60(%ebp),%eax
084c6903 +0x166f:  lea    0xa1(%eax),%edx
084c6909 +0x1675:  mov    &_ZN10GlobalData26g_autoPunishRuleBlackIPMgrE,%eax
084c690e +0x167a:  mov    %edx,0x4(%esp)
084c6912 +0x167e:  mov    %eax,(%esp)
084c6915 +0x1681:  call   084eb63e <_GLOBAL__I__Z7getUserj+0x25f0>  ; global constructors keyed to getUser(unsigned int)+0x25f0
084c691a +0x1686:  test   %al,%al
084c691c +0x1688:  je     084c6958 <+0x16c4>
084c691e +0x168a:  mov    0xc(%ebp),%eax
084c6921 +0x168d:  mov    %eax,(%esp)
084c6924 +0x1690:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084c6929 +0x1695:  movl   $0x0,0x14(%esp)
084c6931 +0x169d:  movl   $0x0,0x10(%esp)
084c6939 +0x16a5:  movl   $0x1,0xc(%esp)
084c6941 +0x16ad:  movl   $0x32a,0x8(%esp)
084c6949 +0x16b5:  mov    0xc(%ebp),%edx
084c694c +0x16b8:  mov    %edx,0x4(%esp)
084c6950 +0x16bc:  mov    %eax,(%esp)
084c6953 +0x16bf:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084c6958 +0x16c4:  mov    -0x60(%ebp),%eax
084c695b +0x16c7:  movzbl 0x3f0c(%eax),%eax
084c6962 +0x16ce:  movzbl %al,%eax
084c6965 +0x16d1:  mov    %eax,0x4(%esp)
084c6969 +0x16d5:  mov    0xc(%ebp),%eax
084c696c +0x16d8:  mov    %eax,(%esp)
084c696f +0x16db:  call   084ecf3e <_GLOBAL__I__Z7getUserj+0x3ef0>  ; global constructors keyed to getUser(unsigned int)+0x3ef0
084c6974 +0x16e0:  movl   $0x0,0x4(%esp)
084c697c +0x16e8:  mov    0xc(%ebp),%eax
084c697f +0x16eb:  mov    %eax,(%esp)
084c6982 +0x16ee:  call   084ecf2c <_GLOBAL__I__Z7getUserj+0x3ede>  ; global constructors keyed to getUser(unsigned int)+0x3ede
084c6987 +0x16f3:  movl   $0x1,0x4(%esp)
084c698f +0x16fb:  mov    0xc(%ebp),%eax
084c6992 +0x16fe:  mov    %eax,(%esp)
084c6995 +0x1701:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
084c699a +0x1706:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c69a1 +0x170d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c69a6 +0x1712:  mov    %eax,-0x168(%ebp)
084c69ac +0x1718:  lea    -0x1ac(%ebp),%eax
084c69b2 +0x171e:  mov    %eax,0x4(%esp)
084c69b6 +0x1722:  lea    -0x168(%ebp),%eax
084c69bc +0x1728:  mov    %eax,(%esp)
084c69bf +0x172b:  call   0807e360 <_init+0xc58>
084c69c4 +0x1730:  mov    %eax,-0x50(%ebp)
084c69c7 +0x1733:  mov    -0x50(%ebp),%eax
084c69ca +0x1736:  mov    0x14(%eax),%eax
084c69cd +0x1739:  mov    %eax,-0x4c(%ebp)
084c69d0 +0x173c:  mov    -0x50(%ebp),%eax
084c69d3 +0x173f:  mov    0x10(%eax),%eax
084c69d6 +0x1742:  mov    %eax,-0x48(%ebp)
084c69d9 +0x1745:  mov    -0x50(%ebp),%eax
084c69dc +0x1748:  mov    0xc(%eax),%eax
084c69df +0x174b:  mov    %eax,-0x44(%ebp)
084c69e2 +0x174e:  mov    -0x60(%ebp),%eax
084c69e5 +0x1751:  mov    0x395c(%eax),%ebx
084c69eb +0x1757:  mov    0xc(%ebp),%eax
084c69ee +0x175a:  mov    %eax,(%esp)
084c69f1 +0x175d:  call   084ec86c <_GLOBAL__I__Z7getUserj+0x381e>  ; global constructors keyed to getUser(unsigned int)+0x381e
084c69f6 +0x1762:  mov    %ebx,0x4(%esp)
084c69fa +0x1766:  mov    %eax,(%esp)
084c69fd +0x1769:  call   084ec5d8 <_GLOBAL__I__Z7getUserj+0x358a>  ; global constructors keyed to getUser(unsigned int)+0x358a
084c6a02 +0x176e:  mov    0xc(%ebp),%eax
084c6a05 +0x1771:  movl   $0x1,0x4(%esp)
084c6a0d +0x1779:  mov    %eax,(%esp)
084c6a10 +0x177c:  call   084ec02e <_GLOBAL__I__Z7getUserj+0x2fe0>  ; global constructors keyed to getUser(unsigned int)+0x2fe0
084c6a15 +0x1781:  mov    -0x60(%ebp),%eax
084c6a18 +0x1784:  movzbl 0x3964(%eax),%eax
084c6a1f +0x178b:  test   %al,%al
084c6a21 +0x178d:  setne  %al
084c6a24 +0x1790:  movzbl %al,%edx
084c6a27 +0x1793:  mov    0xc(%ebp),%eax
084c6a2a +0x1796:  mov    %edx,0x4(%esp)
084c6a2e +0x179a:  mov    %eax,(%esp)
084c6a31 +0x179d:  call   084ec02e <_GLOBAL__I__Z7getUserj+0x2fe0>  ; global constructors keyed to getUser(unsigned int)+0x2fe0
084c6a36 +0x17a2:  mov    -0x50(%ebp),%eax
084c6a39 +0x17a5:  movl   $0x6,0x8(%eax)
084c6a40 +0x17ac:  mov    -0x50(%ebp),%eax
084c6a43 +0x17af:  mov    %eax,(%esp)
084c6a46 +0x17b2:  call   0807e820 <_init+0x1118>
084c6a4b +0x17b7:  mov    %eax,-0x40(%ebp)
084c6a4e +0x17ba:  mov    -0x60(%ebp),%eax
084c6a51 +0x17bd:  mov    0x3958(%eax),%eax
084c6a57 +0x17c3:  cmp    -0x40(%ebp),%eax
084c6a5a +0x17c6:  jle    084c6a76 <+0x17e2>
084c6a5c +0x17c8:  mov    -0x60(%ebp),%eax
084c6a5f +0x17cb:  mov    0x3968(%eax),%edx
084c6a65 +0x17d1:  mov    0xc(%ebp),%eax
084c6a68 +0x17d4:  mov    %edx,0x4(%esp)
084c6a6c +0x17d8:  mov    %eax,(%esp)
084c6a6f +0x17db:  call   084ec04a <_GLOBAL__I__Z7getUserj+0x2ffc>  ; global constructors keyed to getUser(unsigned int)+0x2ffc
084c6a74 +0x17e0:  jmp    084c6a89 <+0x17f5>
084c6a76 +0x17e2:  mov    0xc(%ebp),%eax
084c6a79 +0x17e5:  movl   $0x0,0x4(%esp)
084c6a81 +0x17ed:  mov    %eax,(%esp)
084c6a84 +0x17f0:  call   084ec04a <_GLOBAL__I__Z7getUserj+0x2ffc>  ; global constructors keyed to getUser(unsigned int)+0x2ffc
084c6a89 +0x17f5:  mov    -0x60(%ebp),%eax
084c6a8c +0x17f8:  lea    0x3958(%eax),%edx
084c6a92 +0x17fe:  lea    -0x1d8(%ebp),%eax
084c6a98 +0x1804:  mov    %eax,0x4(%esp)
084c6a9c +0x1808:  mov    %edx,(%esp)
084c6a9f +0x180b:  call   0807e360 <_init+0xc58>
084c6aa4 +0x1810:  mov    %eax,-0x3c(%ebp)
084c6aa7 +0x1813:  mov    -0x3c(%ebp),%eax
084c6aaa +0x1816:  mov    0x14(%eax),%eax
084c6aad +0x1819:  cmp    -0x4c(%ebp),%eax
084c6ab0 +0x181c:  jne    084c6ae2 <+0x184e>
084c6ab2 +0x181e:  mov    -0x3c(%ebp),%eax
084c6ab5 +0x1821:  mov    0x10(%eax),%eax
084c6ab8 +0x1824:  cmp    -0x48(%ebp),%eax
084c6abb +0x1827:  jne    084c6ae2 <+0x184e>
084c6abd +0x1829:  mov    -0x3c(%ebp),%eax
084c6ac0 +0x182c:  mov    0xc(%eax),%eax
084c6ac3 +0x182f:  cmp    -0x44(%ebp),%eax
084c6ac6 +0x1832:  jne    084c6ae2 <+0x184e>
084c6ac8 +0x1834:  mov    -0x60(%ebp),%eax
084c6acb +0x1837:  mov    0x3960(%eax),%eax
084c6ad1 +0x183d:  mov    %eax,0x4(%esp)
084c6ad5 +0x1841:  mov    0xc(%ebp),%eax
084c6ad8 +0x1844:  mov    %eax,(%esp)
084c6adb +0x1847:  call   084ec97c <_GLOBAL__I__Z7getUserj+0x392e>  ; global constructors keyed to getUser(unsigned int)+0x392e
084c6ae0 +0x184c:  jmp    084c6af5 <+0x1861>
084c6ae2 +0x184e:  movl   $0x0,0x4(%esp)
084c6aea +0x1856:  mov    0xc(%ebp),%eax
084c6aed +0x1859:  mov    %eax,(%esp)
084c6af0 +0x185c:  call   084ec97c <_GLOBAL__I__Z7getUserj+0x392e>  ; global constructors keyed to getUser(unsigned int)+0x392e
084c6af5 +0x1861:  mov    -0x60(%ebp),%eax
084c6af8 +0x1864:  mov    0x396c(%eax),%eax
084c6afe +0x186a:  mov    %eax,0x4(%esp)
084c6b02 +0x186e:  mov    0xc(%ebp),%eax
084c6b05 +0x1871:  mov    %eax,(%esp)
084c6b08 +0x1874:  call   084eca90 <_GLOBAL__I__Z7getUserj+0x3a42>  ; global constructors keyed to getUser(unsigned int)+0x3a42
084c6b0d +0x1879:  mov    -0x60(%ebp),%eax
084c6b10 +0x187c:  mov    0x3970(%eax),%eax
084c6b16 +0x1882:  mov    %eax,0x4(%esp)
084c6b1a +0x1886:  mov    0xc(%ebp),%eax
084c6b1d +0x1889:  mov    %eax,(%esp)
084c6b20 +0x188c:  call   084ecaa2 <_GLOBAL__I__Z7getUserj+0x3a54>  ; global constructors keyed to getUser(unsigned int)+0x3a54
084c6b25 +0x1891:  mov    -0x60(%ebp),%eax
084c6b28 +0x1894:  add    $0x3974,%eax
084c6b2d +0x1899:  mov    %eax,0x4(%esp)
084c6b31 +0x189d:  mov    0xc(%ebp),%eax
084c6b34 +0x18a0:  mov    %eax,(%esp)
084c6b37 +0x18a3:  call   084ecab4 <_GLOBAL__I__Z7getUserj+0x3a66>  ; global constructors keyed to getUser(unsigned int)+0x3a66
084c6b3c +0x18a8:  mov    -0x60(%ebp),%eax
084c6b3f +0x18ab:  add    $0x399c,%eax
084c6b44 +0x18b0:  mov    %eax,0x4(%esp)
084c6b48 +0x18b4:  mov    0xc(%ebp),%eax
084c6b4b +0x18b7:  mov    %eax,(%esp)
084c6b4e +0x18ba:  call   084eca54 <_GLOBAL__I__Z7getUserj+0x3a06>  ; global constructors keyed to getUser(unsigned int)+0x3a06
084c6b53 +0x18bf:  mov    -0x60(%ebp),%eax
084c6b56 +0x18c2:  movzbl 0x39a2(%eax),%eax
084c6b5d +0x18c9:  movzbl %al,%eax
084c6b60 +0x18cc:  mov    %eax,0x4(%esp)
084c6b64 +0x18d0:  mov    0xc(%ebp),%eax
084c6b67 +0x18d3:  mov    %eax,(%esp)
084c6b6a +0x18d6:  call   084ecae4 <_GLOBAL__I__Z7getUserj+0x3a96>  ; global constructors keyed to getUser(unsigned int)+0x3a96
084c6b6f +0x18db:  lea    -0x178(%ebp),%eax
084c6b75 +0x18e1:  mov    %eax,(%esp)
084c6b78 +0x18e4:  call   082a4224 <_GLOBAL__I__ZN4CLog5this_E+0x64b>  ; global constructors keyed to CLog::this_+0x64b
084c6b7d +0x18e9:  movzbl -0x178(%ebp),%eax
084c6b84 +0x18f0:  movsbl %al,%edx
084c6b87 +0x18f3:  mov    -0x60(%ebp),%eax
084c6b8a +0x18f6:  mov    0xc8(%eax),%eax
084c6b90 +0x18fc:  mov    %edx,%ecx
084c6b92 +0x18fe:  sub    %eax,%ecx
084c6b94 +0x1900:  mov    %ecx,%eax
084c6b96 +0x1902:  add    $0x7d1,%eax
084c6b9b +0x1907:  mov    %eax,0x4(%esp)
084c6b9f +0x190b:  mov    0xc(%ebp),%eax
084c6ba2 +0x190e:  mov    %eax,(%esp)
084c6ba5 +0x1911:  call   082300be <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5768>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5768
084c6baa +0x1916:  mov    -0x60(%ebp),%eax
084c6bad +0x1919:  movzbl 0x3f0e(%eax),%eax
084c6bb4 +0x1920:  movzbl %al,%eax
084c6bb7 +0x1923:  mov    %eax,0x4(%esp)
084c6bbb +0x1927:  mov    0xc(%ebp),%eax
084c6bbe +0x192a:  mov    %eax,(%esp)
084c6bc1 +0x192d:  call   084ecf78 <_GLOBAL__I__Z7getUserj+0x3f2a>  ; global constructors keyed to getUser(unsigned int)+0x3f2a
084c6bc6 +0x1932:  mov    -0x60(%ebp),%eax
084c6bc9 +0x1935:  movzbl 0x3f0d(%eax),%eax
084c6bd0 +0x193c:  movzbl %al,%eax
084c6bd3 +0x193f:  mov    %eax,0x4(%esp)
084c6bd7 +0x1943:  mov    0xc(%ebp),%eax
084c6bda +0x1946:  mov    %eax,(%esp)
084c6bdd +0x1949:  call   084ecfa4 <_GLOBAL__I__Z7getUserj+0x3f56>  ; global constructors keyed to getUser(unsigned int)+0x3f56
084c6be2 +0x194e:  mov    -0x60(%ebp),%eax
084c6be5 +0x1951:  movzbl 0x3f0f(%eax),%eax
084c6bec +0x1958:  movzbl %al,%eax
084c6bef +0x195b:  mov    %eax,0x4(%esp)
084c6bf3 +0x195f:  mov    0xc(%ebp),%eax
084c6bf6 +0x1962:  mov    %eax,(%esp)
084c6bf9 +0x1965:  call   084ecfd0 <_GLOBAL__I__Z7getUserj+0x3f82>  ; global constructors keyed to getUser(unsigned int)+0x3f82
084c6bfe +0x196a:  mov    -0x60(%ebp),%eax
084c6c01 +0x196d:  movzbl 0x3f0d(%eax),%eax
084c6c08 +0x1974:  movsbl %al,%eax
084c6c0b +0x1977:  and    $0x27,%eax
084c6c0e +0x197a:  mov    %eax,0x4(%esp)
084c6c12 +0x197e:  mov    0xc(%ebp),%eax
084c6c15 +0x1981:  mov    %eax,(%esp)
084c6c18 +0x1984:  call   084ecfec <_GLOBAL__I__Z7getUserj+0x3f9e>  ; global constructors keyed to getUser(unsigned int)+0x3f9e
084c6c1d +0x1989:  mov    -0x60(%ebp),%eax
084c6c20 +0x198c:  movzbl 0x39e0(%eax),%eax
084c6c27 +0x1993:  test   %al,%al
084c6c29 +0x1995:  je     084c6cd9 <+0x1a45>
084c6c2f +0x199b:  mov    -0x60(%ebp),%eax
084c6c32 +0x199e:  lea    0x3a18(%eax),%esi
084c6c38 +0x19a4:  mov    -0x60(%ebp),%eax
084c6c3b +0x19a7:  mov    0x3a14(%eax),%eax
084c6c41 +0x19ad:  mov    %eax,-0x23c(%ebp)
084c6c47 +0x19b3:  mov    -0x60(%ebp),%eax
084c6c4a +0x19b6:  movzbl 0x39ec(%eax),%eax
084c6c51 +0x19bd:  movsbl %al,%eax
084c6c54 +0x19c0:  mov    %eax,-0x238(%ebp)
084c6c5a +0x19c6:  mov    -0x60(%ebp),%eax
084c6c5d +0x19c9:  mov    0x39e4(%eax),%eax
084c6c63 +0x19cf:  mov    %eax,-0x234(%ebp)
084c6c69 +0x19d5:  mov    -0x60(%ebp),%eax
084c6c6c +0x19d8:  movzbl 0x39e1(%eax),%eax
084c6c73 +0x19df:  movzbl %al,%eax
084c6c76 +0x19e2:  mov    %eax,-0x230(%ebp)
084c6c7c +0x19e8:  mov    -0x60(%ebp),%eax
084c6c7f +0x19eb:  movzbl 0x39e0(%eax),%eax
084c6c86 +0x19f2:  movzbl %al,%edi
084c6c89 +0x19f5:  mov    -0x60(%ebp),%eax
084c6c8c +0x19f8:  lea    0x39ed(%eax),%ebx
084c6c92 +0x19fe:  mov    0xc(%ebp),%eax
084c6c95 +0x1a01:  mov    %eax,(%esp)
084c6c98 +0x1a04:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084c6c9d +0x1a09:  mov    %esi,0x1c(%esp)
084c6ca1 +0x1a0d:  mov    -0x23c(%ebp),%edx
084c6ca7 +0x1a13:  mov    %edx,0x18(%esp)
084c6cab +0x1a17:  mov    -0x238(%ebp),%ecx
084c6cb1 +0x1a1d:  mov    %ecx,0x14(%esp)
084c6cb5 +0x1a21:  mov    -0x234(%ebp),%edx
084c6cbb +0x1a27:  mov    %edx,0x10(%esp)
084c6cbf +0x1a2b:  mov    -0x230(%ebp),%ecx
084c6cc5 +0x1a31:  mov    %ecx,0xc(%esp)
084c6cc9 +0x1a35:  mov    %edi,0x8(%esp)
084c6ccd +0x1a39:  mov    %ebx,0x4(%esp)
084c6cd1 +0x1a3d:  mov    %eax,(%esp)
084c6cd4 +0x1a40:  call   085fde9c <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc>  ; WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*)
084c6cd9 +0x1a45:  mov    -0x60(%ebp),%eax
084c6cdc +0x1a48:  movzbl 0x390c(%eax),%eax
084c6ce3 +0x1a4f:  movsbl %al,%ebx
084c6ce6 +0x1a52:  mov    0xc(%ebp),%eax
084c6ce9 +0x1a55:  mov    %eax,(%esp)
084c6cec +0x1a58:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6cf1 +0x1a5d:  mov    %ebx,0x4(%esp)
084c6cf5 +0x1a61:  mov    %eax,(%esp)
084c6cf8 +0x1a64:  call   084ebdd6 <_GLOBAL__I__Z7getUserj+0x2d88>  ; global constructors keyed to getUser(unsigned int)+0x2d88
084c6cfd +0x1a69:  mov    -0x60(%ebp),%eax
084c6d00 +0x1a6c:  movzbl 0x38e0(%eax),%eax
084c6d07 +0x1a73:  test   %al,%al
084c6d09 +0x1a75:  je     084c6f42 <+0x1cae>
084c6d0f +0x1a7b:  mov    0xc(%ebp),%eax
084c6d12 +0x1a7e:  mov    %eax,(%esp)
084c6d15 +0x1a81:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6d1a +0x1a86:  movl   $0x1,0x4(%esp)
084c6d22 +0x1a8e:  mov    %eax,(%esp)
084c6d25 +0x1a91:  call   084ebe08 <_GLOBAL__I__Z7getUserj+0x2dba>  ; global constructors keyed to getUser(unsigned int)+0x2dba
084c6d2a +0x1a96:  mov    -0x60(%ebp),%eax
084c6d2d +0x1a99:  mov    0x3918(%eax),%ebx
084c6d33 +0x1a9f:  mov    0xc(%ebp),%eax
084c6d36 +0x1aa2:  mov    %eax,(%esp)
084c6d39 +0x1aa5:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6d3e +0x1aaa:  mov    %ebx,0x4(%esp)
084c6d42 +0x1aae:  mov    %eax,(%esp)
084c6d45 +0x1ab1:  call   084ebdfa <_GLOBAL__I__Z7getUserj+0x2dac>  ; global constructors keyed to getUser(unsigned int)+0x2dac
084c6d4a +0x1ab6:  mov    -0x60(%ebp),%eax
084c6d4d +0x1ab9:  movzbl 0x390c(%eax),%eax
084c6d54 +0x1ac0:  movsbl %al,%ebx
084c6d57 +0x1ac3:  mov    0xc(%ebp),%eax
084c6d5a +0x1ac6:  mov    %eax,(%esp)
084c6d5d +0x1ac9:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6d62 +0x1ace:  mov    %ebx,0x4(%esp)
084c6d66 +0x1ad2:  mov    %eax,(%esp)
084c6d69 +0x1ad5:  call   084ebdd6 <_GLOBAL__I__Z7getUserj+0x2d88>  ; global constructors keyed to getUser(unsigned int)+0x2d88
084c6d6e +0x1ada:  mov    -0x60(%ebp),%eax
084c6d71 +0x1add:  movzbl 0x390e(%eax),%eax
084c6d78 +0x1ae4:  movzbl %al,%ebx
084c6d7b +0x1ae7:  mov    0xc(%ebp),%eax
084c6d7e +0x1aea:  mov    %eax,(%esp)
084c6d81 +0x1aed:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6d86 +0x1af2:  mov    %ebx,0x4(%esp)
084c6d8a +0x1af6:  mov    %eax,(%esp)
084c6d8d +0x1af9:  call   0826530e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xe6>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xe6
084c6d92 +0x1afe:  mov    -0x60(%ebp),%eax
084c6d95 +0x1b01:  mov    0x3910(%eax),%ebx
084c6d9b +0x1b07:  mov    0xc(%ebp),%eax
084c6d9e +0x1b0a:  mov    %eax,(%esp)
084c6da1 +0x1b0d:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6da6 +0x1b12:  mov    %ebx,0x4(%esp)
084c6daa +0x1b16:  mov    %eax,(%esp)
084c6dad +0x1b19:  call   084ebe20 <_GLOBAL__I__Z7getUserj+0x2dd2>  ; global constructors keyed to getUser(unsigned int)+0x2dd2
084c6db2 +0x1b1e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c6db9 +0x1b25:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c6dbe +0x1b2a:  mov    %eax,%ebx
084c6dc0 +0x1b2c:  mov    -0x60(%ebp),%eax
084c6dc3 +0x1b2f:  mov    0x3958(%eax),%esi
084c6dc9 +0x1b35:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c6dce +0x1b3a:  mov    0x37c(%eax),%eax
084c6dd4 +0x1b40:  mov    %ebx,0x8(%esp)
084c6dd8 +0x1b44:  mov    %esi,0x4(%esp)
084c6ddc +0x1b48:  mov    %eax,(%esp)
084c6ddf +0x1b4b:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c6de4 +0x1b50:  test   %al,%al
084c6de6 +0x1b52:  je     084c6ea8 <+0x1c14>
084c6dec +0x1b58:  mov    -0x60(%ebp),%eax
084c6def +0x1b5b:  mov    0x3914(%eax),%eax
084c6df5 +0x1b61:  test   %eax,%eax
084c6df7 +0x1b63:  jle    084c6ec8 <+0x1c34>
084c6dfd +0x1b69:  mov    0xc(%ebp),%eax
084c6e00 +0x1b6c:  mov    %eax,(%esp)
084c6e03 +0x1b6f:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6e08 +0x1b74:  movl   $0x0,0x4(%esp)
084c6e10 +0x1b7c:  mov    %eax,(%esp)
084c6e13 +0x1b7f:  call   0828712c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x6a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x6a
084c6e18 +0x1b84:  mov    0xc(%ebp),%eax
084c6e1b +0x1b87:  mov    %eax,(%esp)
084c6e1e +0x1b8a:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6e23 +0x1b8f:  movl   $0x0,0x4(%esp)
084c6e2b +0x1b97:  mov    %eax,(%esp)
084c6e2e +0x1b9a:  call   084ebdfa <_GLOBAL__I__Z7getUserj+0x2dac>  ; global constructors keyed to getUser(unsigned int)+0x2dac
084c6e33 +0x1b9f:  mov    0xc(%ebp),%eax
084c6e36 +0x1ba2:  mov    %eax,(%esp)
084c6e39 +0x1ba5:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
084c6e3e +0x1baa:  mov    %eax,%ebx
084c6e40 +0x1bac:  mov    0xc(%ebp),%eax
084c6e43 +0x1baf:  mov    %eax,(%esp)
084c6e46 +0x1bb2:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6e4b +0x1bb7:  mov    %eax,(%esp)
084c6e4e +0x1bba:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
084c6e53 +0x1bbf:  mov    %eax,%esi
084c6e55 +0x1bc1:  mov    0xc(%ebp),%eax
084c6e58 +0x1bc4:  mov    %eax,(%esp)
084c6e5b +0x1bc7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c6e60 +0x1bcc:  mov    %ebx,0x8(%esp)
084c6e64 +0x1bd0:  mov    %esi,0x4(%esp)
084c6e68 +0x1bd4:  mov    %eax,(%esp)
084c6e6b +0x1bd7:  call   08423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>  ; DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*)
084c6e70 +0x1bdc:  movl   $0x0,0xc(%esp)
084c6e78 +0x1be4:  movl   $0x1df5,0x8(%esp)
084c6e80 +0x1bec:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c6e88 +0x1bf4:  lea    -0x80(%ebp),%eax
084c6e8b +0x1bf7:  mov    %eax,(%esp)
084c6e8e +0x1bfa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c6e93 +0x1bff:  movl   $"GOBLIN PAD RESET OK!!!",0x4(%esp)
084c6e9b +0x1c07:  lea    -0x80(%ebp),%eax
084c6e9e +0x1c0a:  mov    %eax,(%esp)
084c6ea1 +0x1c0d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c6ea6 +0x1c12:  jmp    084c6ec8 <+0x1c34>
084c6ea8 +0x1c14:  mov    -0x60(%ebp),%eax
084c6eab +0x1c17:  mov    0x3914(%eax),%ebx
084c6eb1 +0x1c1d:  mov    0xc(%ebp),%eax
084c6eb4 +0x1c20:  mov    %eax,(%esp)
084c6eb7 +0x1c23:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6ebc +0x1c28:  mov    %ebx,0x4(%esp)
084c6ec0 +0x1c2c:  mov    %eax,(%esp)
084c6ec3 +0x1c2f:  call   0828712c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x6a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x6a
084c6ec8 +0x1c34:  mov    -0x60(%ebp),%eax
084c6ecb +0x1c37:  lea    0x38e1(%eax),%ebx
084c6ed1 +0x1c3d:  mov    0xc(%ebp),%eax
084c6ed4 +0x1c40:  mov    %eax,(%esp)
084c6ed7 +0x1c43:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6edc +0x1c48:  mov    %ebx,0x4(%esp)
084c6ee0 +0x1c4c:  mov    %eax,(%esp)
084c6ee3 +0x1c4f:  call   0828713a <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x78>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x78
084c6ee8 +0x1c54:  mov    0xc(%ebp),%eax
084c6eeb +0x1c57:  mov    %eax,(%esp)
084c6eee +0x1c5a:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
084c6ef3 +0x1c5f:  mov    %eax,(%esp)
084c6ef6 +0x1c62:  call   084b9200 <_ZN8XNuclear6CHades10Send_LoginEv>  ; XNuclear::CHades::Send_Login()
084c6efb +0x1c67:  mov    0xc(%ebp),%eax
084c6efe +0x1c6a:  mov    %eax,(%esp)
084c6f01 +0x1c6d:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
084c6f06 +0x1c72:  movl   $0x0,0x8(%esp)
084c6f0e +0x1c7a:  movl   $0x3,0x4(%esp)
084c6f16 +0x1c82:  mov    %eax,(%esp)
084c6f19 +0x1c85:  call   084b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>  ; XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short)
084c6f1e +0x1c8a:  mov    -0x60(%ebp),%eax
084c6f21 +0x1c8d:  movzbl 0x390d(%eax),%eax
084c6f28 +0x1c94:  movzbl %al,%ebx
084c6f2b +0x1c97:  mov    0xc(%ebp),%eax
084c6f2e +0x1c9a:  mov    %eax,(%esp)
084c6f31 +0x1c9d:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6f36 +0x1ca2:  mov    %ebx,0x4(%esp)
084c6f3a +0x1ca6:  mov    %eax,(%esp)
084c6f3d +0x1ca9:  call   084ebdb2 <_GLOBAL__I__Z7getUserj+0x2d64>  ; global constructors keyed to getUser(unsigned int)+0x2d64
084c6f42 +0x1cae:  mov    0xc(%ebp),%eax
084c6f45 +0x1cb1:  mov    %eax,(%esp)
084c6f48 +0x1cb4:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c6f4d +0x1cb9:  movl   $0x1,0x4(%esp)
084c6f55 +0x1cc1:  mov    %eax,(%esp)
084c6f58 +0x1cc4:  call   0826530e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xe6>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xe6
084c6f5d +0x1cc9:  mov    -0x60(%ebp),%eax
084c6f60 +0x1ccc:  movzwl 0x38de(%eax),%eax
084c6f67 +0x1cd3:  cmp    $0xd,%ax
084c6f6b +0x1cd7:  jne    084c6f82 <+0x1cee>
084c6f6d +0x1cd9:  movl   $0xe7,0x4(%esp)
084c6f75 +0x1ce1:  mov    0xc(%ebp),%eax
084c6f78 +0x1ce4:  mov    %eax,(%esp)
084c6f7b +0x1ce7:  call   084ecf5a <_GLOBAL__I__Z7getUserj+0x3f0c>  ; global constructors keyed to getUser(unsigned int)+0x3f0c
084c6f80 +0x1cec:  jmp    084c6fba <+0x1d26>
084c6f82 +0x1cee:  mov    -0x60(%ebp),%eax
084c6f85 +0x1cf1:  movzwl 0x38de(%eax),%eax
084c6f8c +0x1cf8:  cmp    $0xe,%ax
084c6f90 +0x1cfc:  jne    084c6fa7 <+0x1d13>
084c6f92 +0x1cfe:  movl   $0xe8,0x4(%esp)
084c6f9a +0x1d06:  mov    0xc(%ebp),%eax
084c6f9d +0x1d09:  mov    %eax,(%esp)
084c6fa0 +0x1d0c:  call   084ecf5a <_GLOBAL__I__Z7getUserj+0x3f0c>  ; global constructors keyed to getUser(unsigned int)+0x3f0c
084c6fa5 +0x1d11:  jmp    084c6fba <+0x1d26>
084c6fa7 +0x1d13:  movl   $0x0,0x4(%esp)
084c6faf +0x1d1b:  mov    0xc(%ebp),%eax
084c6fb2 +0x1d1e:  mov    %eax,(%esp)
084c6fb5 +0x1d21:  call   084ecf5a <_GLOBAL__I__Z7getUserj+0x3f0c>  ; global constructors keyed to getUser(unsigned int)+0x3f0c
084c6fba +0x1d26:  mov    -0x60(%ebp),%eax
084c6fbd +0x1d29:  mov    0x39d4(%eax),%eax
084c6fc3 +0x1d2f:  mov    %eax,0x4(%esp)
084c6fc7 +0x1d33:  mov    0xc(%ebp),%eax
084c6fca +0x1d36:  mov    %eax,(%esp)
084c6fcd +0x1d39:  call   084ec734 <_GLOBAL__I__Z7getUserj+0x36e6>  ; global constructors keyed to getUser(unsigned int)+0x36e6
084c6fd2 +0x1d3e:  mov    -0x60(%ebp),%eax
084c6fd5 +0x1d41:  mov    0x39d0(%eax),%eax
084c6fdb +0x1d47:  mov    %eax,0x4(%esp)
084c6fdf +0x1d4b:  mov    0xc(%ebp),%eax
084c6fe2 +0x1d4e:  mov    %eax,(%esp)
084c6fe5 +0x1d51:  call   084ec722 <_GLOBAL__I__Z7getUserj+0x36d4>  ; global constructors keyed to getUser(unsigned int)+0x36d4
084c6fea +0x1d56:  mov    -0x60(%ebp),%eax
084c6fed +0x1d59:  mov    0x39d8(%eax),%eax
084c6ff3 +0x1d5f:  mov    %eax,0x4(%esp)
084c6ff7 +0x1d63:  mov    0xc(%ebp),%eax
084c6ffa +0x1d66:  mov    %eax,(%esp)
084c6ffd +0x1d69:  call   084ec746 <_GLOBAL__I__Z7getUserj+0x36f8>  ; global constructors keyed to getUser(unsigned int)+0x36f8
084c7002 +0x1d6e:  mov    -0x60(%ebp),%eax
084c7005 +0x1d71:  mov    0x39d8(%eax),%esi
084c700b +0x1d77:  mov    -0x60(%ebp),%eax
084c700e +0x1d7a:  mov    0xc0(%eax),%eax
084c7014 +0x1d80:  movl   $0x0,0x4(%esp)
084c701c +0x1d88:  mov    %eax,(%esp)
084c701f +0x1d8b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c7024 +0x1d90:  mov    %eax,%ebx
084c7026 +0x1d92:  movl   $0x0,0xc(%esp)
084c702e +0x1d9a:  movl   $0x1e33,0x8(%esp)
084c7036 +0x1da2:  movl   $&_ZZN15Inter_LoginInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c703e +0x1daa:  lea    -0x70(%ebp),%eax
084c7041 +0x1dad:  mov    %eax,(%esp)
084c7044 +0x1db0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c7049 +0x1db5:  mov    %esi,0xc(%esp)
084c704d +0x1db9:  mov    %ebx,0x8(%esp)
084c7051 +0x1dbd:  movl   $"OnlinePreliminary m_id(%s), play_type(%d)",0x4(%esp)
084c7059 +0x1dc5:  lea    -0x70(%ebp),%eax
084c705c +0x1dc8:  mov    %eax,(%esp)
084c705f +0x1dcb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c7064 +0x1dd0:  mov    -0x60(%ebp),%eax
084c7067 +0x1dd3:  mov    0x39ac(%eax),%eax
084c706d +0x1dd9:  test   %eax,%eax
084c706f +0x1ddb:  je     084c7085 <+0x1df1>
084c7071 +0x1ddd:  mov    -0x60(%ebp),%eax
084c7074 +0x1de0:  mov    0x39a8(%eax),%eax
084c707a +0x1de6:  test   %eax,%eax
084c707c +0x1de8:  je     084c7085 <+0x1df1>
084c707e +0x1dea:  mov    $0x1,%eax
084c7083 +0x1def:  jmp    084c708a <+0x1df6>
084c7085 +0x1df1:  mov    $0x0,%eax
084c708a +0x1df6:  movzbl %al,%eax
084c708d +0x1df9:  mov    %eax,0x4(%esp)
084c7091 +0x1dfd:  mov    0xc(%ebp),%eax
084c7094 +0x1e00:  mov    %eax,(%esp)
084c7097 +0x1e03:  call   084ec6f6 <_GLOBAL__I__Z7getUserj+0x36a8>  ; global constructors keyed to getUser(unsigned int)+0x36a8
084c709c +0x1e08:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c70a1 +0x1e0d:  mov    %eax,(%esp)
084c70a4 +0x1e10:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c70a9 +0x1e15:  cmp    $0x7,%eax
084c70ac +0x1e18:  sete   %al
084c70af +0x1e1b:  test   %al,%al
084c70b1 +0x1e1d:  je     084c7203 <+0x1f6f>
084c70b7 +0x1e23:  lea    -0x20b(%ebp),%eax
084c70bd +0x1e29:  mov    %eax,(%esp)
084c70c0 +0x1e2c:  call   0846f24c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x1c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1c
084c70c5 +0x1e31:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c70ca +0x1e36:  movl   $0x1e3b,0x8(%esp)
084c70d2 +0x1e3e:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c70da +0x1e46:  mov    %eax,(%esp)
084c70dd +0x1e49:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c70e2 +0x1e4e:  movl   $0x1,0x8(%esp)
084c70ea +0x1e56:  mov    %eax,0x4(%esp)
084c70ee +0x1e5a:  lea    -0x180(%ebp),%eax
084c70f4 +0x1e60:  mov    %eax,(%esp)
084c70f7 +0x1e63:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c70fc +0x1e68:  lea    -0x180(%ebp),%eax
084c7102 +0x1e6e:  mov    %eax,(%esp)
084c7105 +0x1e71:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c710a +0x1e76:  movl   $0x41,0x4(%esp)
084c7112 +0x1e7e:  mov    %eax,(%esp)
084c7115 +0x1e81:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c711a +0x1e86:  mov    0xc(%ebp),%eax
084c711d +0x1e89:  mov    %eax,(%esp)
084c7120 +0x1e8c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c7125 +0x1e91:  mov    %eax,%ebx
084c7127 +0x1e93:  lea    -0x180(%ebp),%eax
084c712d +0x1e99:  mov    %eax,(%esp)
084c7130 +0x1e9c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c7135 +0x1ea1:  mov    %ebx,0x4(%esp)
084c7139 +0x1ea5:  mov    %eax,(%esp)
084c713c +0x1ea8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c7141 +0x1ead:  mov    0xc(%ebp),%eax
084c7144 +0x1eb0:  mov    %eax,(%esp)
084c7147 +0x1eb3:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c714c +0x1eb8:  mov    %eax,-0x201(%ebp)
084c7152 +0x1ebe:  mov    0xc(%ebp),%eax
084c7155 +0x1ec1:  mov    %eax,(%esp)
084c7158 +0x1ec4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c715d +0x1ec9:  mov    %eax,-0x1fd(%ebp)
084c7163 +0x1ecf:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c7168 +0x1ed4:  mov    %eax,(%esp)
084c716b +0x1ed7:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084c7170 +0x1edc:  mov    %al,-0x1f9(%ebp)
084c7176 +0x1ee2:  movb   $0x1,-0x1e8(%ebp)
084c717d +0x1ee9:  movl   $0x0,-0x1e7(%ebp)
084c7187 +0x1ef3:  movl   $0x0,-0x1e3(%ebp)
084c7191 +0x1efd:  lea    -0x180(%ebp),%eax
084c7197 +0x1f03:  mov    %eax,(%esp)
084c719a +0x1f06:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084c719f +0x1f0b:  movl   $0x33,0x8(%esp)
084c71a7 +0x1f13:  lea    -0x20b(%ebp),%edx
084c71ad +0x1f19:  mov    %edx,0x4(%esp)
084c71b1 +0x1f1d:  mov    %eax,(%esp)
084c71b4 +0x1f20:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084c71b9 +0x1f25:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c71be +0x1f2a:  lea    -0x180(%ebp),%edx
084c71c4 +0x1f30:  mov    %edx,0x8(%esp)
084c71c8 +0x1f34:  movl   $0x1,0x4(%esp)
084c71d0 +0x1f3c:  mov    %eax,(%esp)
084c71d3 +0x1f3f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c71d8 +0x1f44:  jmp    084c71f5 <+0x1f61>
084c71da +0x1f46:  mov    %edx,%ebx
084c71dc +0x1f48:  mov    %eax,%esi
084c71de +0x1f4a:  lea    -0x180(%ebp),%eax
084c71e4 +0x1f50:  mov    %eax,(%esp)
084c71e7 +0x1f53:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c71ec +0x1f58:  mov    %esi,%eax
084c71ee +0x1f5a:  mov    %ebx,%edx
084c71f0 +0x1f5c:  jmp    084c7a9e <+0x280a>
084c71f5 +0x1f61:  lea    -0x180(%ebp),%eax
084c71fb +0x1f67:  mov    %eax,(%esp)
084c71fe +0x1f6a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c7203 +0x1f6f:  mov    -0x60(%ebp),%eax
084c7206 +0x1f72:  mov    0x3a34(%eax),%eax
084c720c +0x1f78:  mov    %eax,0x4(%esp)
084c7210 +0x1f7c:  mov    0xc(%ebp),%eax
084c7213 +0x1f7f:  mov    %eax,(%esp)
084c7216 +0x1f82:  call   084ec89a <_GLOBAL__I__Z7getUserj+0x384c>  ; global constructors keyed to getUser(unsigned int)+0x384c
084c721b +0x1f87:  mov    -0x60(%ebp),%eax
084c721e +0x1f8a:  mov    0x3958(%eax),%eax
084c7224 +0x1f90:  mov    %eax,0x4(%esp)
084c7228 +0x1f94:  mov    0xc(%ebp),%eax
084c722b +0x1f97:  mov    %eax,(%esp)
084c722e +0x1f9a:  call   084ec8f8 <_GLOBAL__I__Z7getUserj+0x38aa>  ; global constructors keyed to getUser(unsigned int)+0x38aa
084c7233 +0x1f9f:  mov    -0x60(%ebp),%eax
084c7236 +0x1fa2:  movzbl 0x3a4a(%eax),%eax
084c723d +0x1fa9:  movzbl %al,%eax
084c7240 +0x1fac:  mov    %eax,0x4(%esp)
084c7244 +0x1fb0:  mov    0xc(%ebp),%eax
084c7247 +0x1fb3:  mov    %eax,(%esp)
084c724a +0x1fb6:  call   084ec6da <_GLOBAL__I__Z7getUserj+0x368c>  ; global constructors keyed to getUser(unsigned int)+0x368c
084c724f +0x1fbb:  mov    0xc(%ebp),%eax
084c7252 +0x1fbe:  movb   $0x0,0x8e47c(%eax)
084c7259 +0x1fc5:  mov    0xc(%ebp),%eax
084c725c +0x1fc8:  lea    0x8e418(%eax),%edx
084c7262 +0x1fce:  mov    0xc(%ebp),%eax
084c7265 +0x1fd1:  add    $0xe0,%eax
084c726a +0x1fd6:  movl   $0x14,0x8(%esp)
084c7272 +0x1fde:  mov    %edx,0x4(%esp)
084c7276 +0x1fe2:  mov    %eax,(%esp)
084c7279 +0x1fe5:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c727e +0x1fea:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%edx
084c7284 +0x1ff0:  mov    %eax,0x4(%esp)
084c7288 +0x1ff4:  mov    %edx,(%esp)
084c728b +0x1ff7:  call   084ebba6 <_GLOBAL__I__Z7getUserj+0x2b58>  ; global constructors keyed to getUser(unsigned int)+0x2b58
084c7290 +0x1ffc:  mov    0xc(%ebp),%edx
084c7293 +0x1fff:  mov    %eax,0x8e478(%edx)
084c7299 +0x2005:  mov    0xc(%ebp),%eax
084c729c +0x2008:  mov    0x8e478(%eax),%eax
084c72a2 +0x200e:  and    $0x1,%eax
084c72a5 +0x2011:  test   %al,%al
084c72a7 +0x2013:  je     084c7301 <+0x206d>
084c72a9 +0x2015:  mov    0xc(%ebp),%eax
084c72ac +0x2018:  lea    0x8e418(%eax),%edx
084c72b2 +0x201e:  mov    0xc(%ebp),%eax
084c72b5 +0x2021:  add    $0xe0,%eax
084c72ba +0x2026:  movl   $0x14,0x8(%esp)
084c72c2 +0x202e:  mov    %edx,0x4(%esp)
084c72c6 +0x2032:  mov    %eax,(%esp)
084c72c9 +0x2035:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c72ce +0x203a:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%edx
084c72d4 +0x2040:  movl   $0x1,0x8(%esp)
084c72dc +0x2048:  mov    %eax,0x4(%esp)
084c72e0 +0x204c:  mov    %edx,(%esp)
084c72e3 +0x204f:  call   084ebc8c <_GLOBAL__I__Z7getUserj+0x2c3e>  ; global constructors keyed to getUser(unsigned int)+0x2c3e
084c72e8 +0x2054:  mov    %eax,%ebx
084c72ea +0x2056:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c72f1 +0x205d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c72f6 +0x2062:  cmp    %eax,%ebx
084c72f8 +0x2064:  jl     084c7301 <+0x206d>
084c72fa +0x2066:  mov    $0x1,%eax
084c72ff +0x206b:  jmp    084c7306 <+0x2072>
084c7301 +0x206d:  mov    $0x0,%eax
084c7306 +0x2072:  test   %al,%al
084c7308 +0x2074:  je     084c7330 <+0x209c>
084c730a +0x2076:  movl   $0x10,0x4(%esp)
084c7312 +0x207e:  mov    0xc(%ebp),%eax
084c7315 +0x2081:  mov    %eax,(%esp)
084c7318 +0x2084:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084c731d +0x2089:  mov    0xc(%ebp),%eax
084c7320 +0x208c:  mov    %eax,(%esp)
084c7323 +0x208f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c7328 +0x2094:  mov    %eax,(%esp)
084c732b +0x2097:  call   084355ca <_ZN34DB_BlackipPrivateSecurityValuation11makeRequestEj>  ; DB_BlackipPrivateSecurityValuation::makeRequest(unsigned int)
084c7330 +0x209c:  mov    -0x60(%ebp),%eax
084c7333 +0x209f:  mov    0x3a4c(%eax),%eax
084c7339 +0x20a5:  mov    %eax,-0x38(%ebp)
084c733c +0x20a8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c7343 +0x20af:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c7348 +0x20b4:  mov    %eax,%ebx
084c734a +0x20b6:  mov    -0x60(%ebp),%eax
084c734d +0x20b9:  mov    0x3958(%eax),%esi
084c7353 +0x20bf:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c7358 +0x20c4:  mov    0x37c(%eax),%eax
084c735e +0x20ca:  mov    %ebx,0x8(%esp)
084c7362 +0x20ce:  mov    %esi,0x4(%esp)
084c7366 +0x20d2:  mov    %eax,(%esp)
084c7369 +0x20d5:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c736e +0x20da:  test   %al,%al
084c7370 +0x20dc:  je     084c7381 <+0x20ed>
084c7372 +0x20de:  mov    -0x60(%ebp),%eax
084c7375 +0x20e1:  movl   $0x0,0x3a4c(%eax)
084c737f +0x20eb:  jmp    084c7396 <+0x2102>
084c7381 +0x20ed:  mov    -0x60(%ebp),%eax
084c7384 +0x20f0:  mov    0x3a4c(%eax),%eax
084c738a +0x20f6:  lea    -0x1(%eax),%edx
084c738d +0x20f9:  mov    -0x60(%ebp),%eax
084c7390 +0x20fc:  mov    %edx,0x3a4c(%eax)
084c7396 +0x2102:  mov    -0x60(%ebp),%eax
084c7399 +0x2105:  mov    0x3a4c(%eax),%eax
084c739f +0x210b:  mov    0xc(%ebp),%edx
084c73a2 +0x210e:  add    $0x8e3f0,%edx
084c73a8 +0x2114:  mov    %eax,0x4(%esp)
084c73ac +0x2118:  mov    %edx,(%esp)
084c73af +0x211b:  call   084eb53e <_GLOBAL__I__Z7getUserj+0x24f0>  ; global constructors keyed to getUser(unsigned int)+0x24f0
084c73b4 +0x2120:  mov    0xc(%ebp),%eax
084c73b7 +0x2123:  add    $0x8e3f0,%eax
084c73bc +0x2128:  mov    %eax,(%esp)
084c73bf +0x212b:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
084c73c4 +0x2130:  cmp    -0x38(%ebp),%eax
084c73c7 +0x2133:  sete   %al
084c73ca +0x2136:  test   %al,%al
084c73cc +0x2138:  je     084c73de <+0x214a>
084c73ce +0x213a:  mov    0xc(%ebp),%eax
084c73d1 +0x213d:  add    $0x8e3f0,%eax
084c73d6 +0x2142:  mov    %eax,(%esp)
084c73d9 +0x2145:  call   0822eeea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4594>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4594
084c73de +0x214a:  mov    0xc(%ebp),%eax
084c73e1 +0x214d:  mov    0x8e478(%eax),%eax
084c73e7 +0x2153:  and    $0x2,%eax
084c73ea +0x2156:  test   %eax,%eax
084c73ec +0x2158:  je     084c7446 <+0x21b2>
084c73ee +0x215a:  mov    0xc(%ebp),%eax
084c73f1 +0x215d:  lea    0x8e418(%eax),%edx
084c73f7 +0x2163:  mov    0xc(%ebp),%eax
084c73fa +0x2166:  add    $0xe0,%eax
084c73ff +0x216b:  movl   $0x14,0x8(%esp)
084c7407 +0x2173:  mov    %edx,0x4(%esp)
084c740b +0x2177:  mov    %eax,(%esp)
084c740e +0x217a:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c7413 +0x217f:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%edx
084c7419 +0x2185:  movl   $0x2,0x8(%esp)
084c7421 +0x218d:  mov    %eax,0x4(%esp)
084c7425 +0x2191:  mov    %edx,(%esp)
084c7428 +0x2194:  call   084ebc8c <_GLOBAL__I__Z7getUserj+0x2c3e>  ; global constructors keyed to getUser(unsigned int)+0x2c3e
084c742d +0x2199:  mov    %eax,%ebx
084c742f +0x219b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c7436 +0x21a2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c743b +0x21a7:  cmp    %eax,%ebx
084c743d +0x21a9:  jl     084c7446 <+0x21b2>
084c743f +0x21ab:  mov    $0x1,%eax
084c7444 +0x21b0:  jmp    084c744b <+0x21b7>
084c7446 +0x21b2:  mov    $0x0,%eax
084c744b +0x21b7:  test   %al,%al
084c744d +0x21b9:  je     084c748d <+0x21f9>
084c744f +0x21bb:  mov    0xc(%ebp),%eax
084c7452 +0x21be:  movb   $0x1,0x8e47c(%eax)
084c7459 +0x21c5:  mov    0xc(%ebp),%eax
084c745c +0x21c8:  add    $0x8e3f0,%eax
084c7461 +0x21cd:  mov    %eax,(%esp)
084c7464 +0x21d0:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
084c7469 +0x21d5:  cmp    $0x251b,%eax
084c746e +0x21da:  setbe  %al
084c7471 +0x21dd:  test   %al,%al
084c7473 +0x21df:  je     084c748d <+0x21f9>
084c7475 +0x21e1:  mov    0xc(%ebp),%eax
084c7478 +0x21e4:  add    $0x8e3f0,%eax
084c747d +0x21e9:  movl   $0x251c,0x4(%esp)
084c7485 +0x21f1:  mov    %eax,(%esp)
084c7488 +0x21f4:  call   084eb53e <_GLOBAL__I__Z7getUserj+0x24f0>  ; global constructors keyed to getUser(unsigned int)+0x24f0
084c748d +0x21f9:  mov    -0x60(%ebp),%eax
084c7490 +0x21fc:  movzbl 0x3f04(%eax),%eax
084c7497 +0x2203:  test   %al,%al
084c7499 +0x2205:  je     084c7515 <+0x2281>
084c749b +0x2207:  mov    0xc(%ebp),%eax
084c749e +0x220a:  mov    %eax,(%esp)
084c74a1 +0x220d:  call   084ec778 <_GLOBAL__I__Z7getUserj+0x372a>  ; global constructors keyed to getUser(unsigned int)+0x372a
084c74a6 +0x2212:  mov    -0x60(%ebp),%eax
084c74a9 +0x2215:  mov    0x3f08(%eax),%eax
084c74af +0x221b:  mov    %eax,0x4(%esp)
084c74b3 +0x221f:  mov    0xc(%ebp),%eax
084c74b6 +0x2222:  mov    %eax,(%esp)
084c74b9 +0x2225:  call   084ec7c2 <_GLOBAL__I__Z7getUserj+0x3774>  ; global constructors keyed to getUser(unsigned int)+0x3774
084c74be +0x222a:  mov    -0x60(%ebp),%eax
084c74c1 +0x222d:  movzbl 0x3f05(%eax),%eax
084c74c8 +0x2234:  movzbl %al,%eax
084c74cb +0x2237:  mov    %eax,0x4(%esp)
084c74cf +0x223b:  mov    0xc(%ebp),%eax
084c74d2 +0x223e:  mov    %eax,(%esp)
084c74d5 +0x2241:  call   084ec798 <_GLOBAL__I__Z7getUserj+0x374a>  ; global constructors keyed to getUser(unsigned int)+0x374a
084c74da +0x2246:  mov    0xc(%ebp),%eax
084c74dd +0x2249:  mov    %eax,(%esp)
084c74e0 +0x224c:  call   084ec7b4 <_GLOBAL__I__Z7getUserj+0x3766>  ; global constructors keyed to getUser(unsigned int)+0x3766
084c74e5 +0x2251:  mov    %eax,%esi
084c74e7 +0x2253:  mov    0xc(%ebp),%eax
084c74ea +0x2256:  mov    %eax,(%esp)
084c74ed +0x2259:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084c74f2 +0x225e:  movzwl %ax,%ebx
084c74f5 +0x2261:  mov    0xc(%ebp),%eax
084c74f8 +0x2264:  mov    %eax,(%esp)
084c74fb +0x2267:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c7500 +0x226c:  mov    %esi,0x8(%esp)
084c7504 +0x2270:  mov    %ebx,0x4(%esp)
084c7508 +0x2274:  mov    %eax,(%esp)
084c750b +0x2277:  call   0863a706 <_ZN23Timer_ReturnUserTimeout15registNextTimerEiij>  ; Timer_ReturnUserTimeout::registNextTimer(int, int, unsigned int)
084c7510 +0x227c:  jmp    084c75d7 <+0x2343>
084c7515 +0x2281:  mov    -0x60(%ebp),%eax
084c7518 +0x2284:  mov    0x3958(%eax),%eax
084c751e +0x228a:  test   %eax,%eax
084c7520 +0x228c:  jne    084c7532 <+0x229e>
084c7522 +0x228e:  mov    0xc(%ebp),%eax
084c7525 +0x2291:  mov    %eax,(%esp)
084c7528 +0x2294:  call   084ec788 <_GLOBAL__I__Z7getUserj+0x373a>  ; global constructors keyed to getUser(unsigned int)+0x373a
084c752d +0x2299:  jmp    084c75d7 <+0x2343>
084c7532 +0x229e:  mov    -0x60(%ebp),%eax
084c7535 +0x22a1:  mov    0x3958(%eax),%eax
084c753b +0x22a7:  lea    0x3b53800(%eax),%ebx
084c7541 +0x22ad:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c7548 +0x22b4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c754d +0x22b9:  cmp    %eax,%ebx
084c754f +0x22bb:  setl   %al
084c7552 +0x22be:  test   %al,%al
084c7554 +0x22c0:  je     084c75cc <+0x2338>
084c7556 +0x22c2:  mov    0xc(%ebp),%eax
084c7559 +0x22c5:  mov    %eax,(%esp)
084c755c +0x22c8:  call   084ec778 <_GLOBAL__I__Z7getUserj+0x372a>  ; global constructors keyed to getUser(unsigned int)+0x372a
084c7561 +0x22cd:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c7568 +0x22d4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c756d +0x22d9:  add    $0x127500,%eax
084c7572 +0x22de:  mov    %eax,0x4(%esp)
084c7576 +0x22e2:  mov    0xc(%ebp),%eax
084c7579 +0x22e5:  mov    %eax,(%esp)
084c757c +0x22e8:  call   084ec7c2 <_GLOBAL__I__Z7getUserj+0x3774>  ; global constructors keyed to getUser(unsigned int)+0x3774
084c7581 +0x22ed:  movl   $0x1,0x4(%esp)
084c7589 +0x22f5:  mov    0xc(%ebp),%eax
084c758c +0x22f8:  mov    %eax,(%esp)
084c758f +0x22fb:  call   084ec798 <_GLOBAL__I__Z7getUserj+0x374a>  ; global constructors keyed to getUser(unsigned int)+0x374a
084c7594 +0x2300:  mov    0xc(%ebp),%eax
084c7597 +0x2303:  mov    %eax,(%esp)
084c759a +0x2306:  call   084ec7b4 <_GLOBAL__I__Z7getUserj+0x3766>  ; global constructors keyed to getUser(unsigned int)+0x3766
084c759f +0x230b:  mov    %eax,%esi
084c75a1 +0x230d:  mov    0xc(%ebp),%eax
084c75a4 +0x2310:  mov    %eax,(%esp)
084c75a7 +0x2313:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084c75ac +0x2318:  movzwl %ax,%ebx
084c75af +0x231b:  mov    0xc(%ebp),%eax
084c75b2 +0x231e:  mov    %eax,(%esp)
084c75b5 +0x2321:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c75ba +0x2326:  mov    %esi,0x8(%esp)
084c75be +0x232a:  mov    %ebx,0x4(%esp)
084c75c2 +0x232e:  mov    %eax,(%esp)
084c75c5 +0x2331:  call   0863a706 <_ZN23Timer_ReturnUserTimeout15registNextTimerEiij>  ; Timer_ReturnUserTimeout::registNextTimer(int, int, unsigned int)
084c75ca +0x2336:  jmp    084c75d7 <+0x2343>
084c75cc +0x2338:  mov    0xc(%ebp),%eax
084c75cf +0x233b:  mov    %eax,(%esp)
084c75d2 +0x233e:  call   084ec788 <_GLOBAL__I__Z7getUserj+0x373a>  ; global constructors keyed to getUser(unsigned int)+0x373a
084c75d7 +0x2343:  mov    0xc(%ebp),%eax
084c75da +0x2346:  mov    %eax,(%esp)
084c75dd +0x2349:  call   084ec812 <_GLOBAL__I__Z7getUserj+0x37c4>  ; global constructors keyed to getUser(unsigned int)+0x37c4
084c75e2 +0x234e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c75e7 +0x2353:  mov    0x37c(%eax),%eax
084c75ed +0x2359:  mov    %eax,-0x34(%ebp)
084c75f0 +0x235c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c75f7 +0x2363:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c75fc +0x2368:  mov    -0x60(%ebp),%edx
084c75ff +0x236b:  mov    0x3f60(%edx),%edx
084c7605 +0x2371:  mov    %eax,0x8(%esp)
084c7609 +0x2375:  mov    %edx,0x4(%esp)
084c760d +0x2379:  mov    -0x34(%ebp),%eax
084c7610 +0x237c:  mov    %eax,(%esp)
084c7613 +0x237f:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c7618 +0x2384:  xor    $0x1,%eax
084c761b +0x2387:  test   %al,%al
084c761d +0x2389:  je     084c763b <+0x23a7>
084c761f +0x238b:  mov    -0x60(%ebp),%eax
084c7622 +0x238e:  movzwl 0x3f5e(%eax),%eax
084c7629 +0x2395:  cwtl
084c762a +0x2396:  mov    %eax,0x4(%esp)
084c762e +0x239a:  mov    0xc(%ebp),%eax
084c7631 +0x239d:  mov    %eax,(%esp)
084c7634 +0x23a0:  call   084ec7e4 <_GLOBAL__I__Z7getUserj+0x3796>  ; global constructors keyed to getUser(unsigned int)+0x3796
084c7639 +0x23a5:  jmp    084c7646 <+0x23b2>
084c763b +0x23a7:  mov    0xc(%ebp),%eax
084c763e +0x23aa:  mov    %eax,(%esp)
084c7641 +0x23ad:  call   084ec7d4 <_GLOBAL__I__Z7getUserj+0x3786>  ; global constructors keyed to getUser(unsigned int)+0x3786
084c7646 +0x23b2:  mov    -0x60(%ebp),%eax
084c7649 +0x23b5:  movzbl 0x3f10(%eax),%eax
084c7650 +0x23bc:  movzbl %al,%edx
084c7653 +0x23bf:  mov    0xc(%ebp),%eax
084c7656 +0x23c2:  mov    %edx,0x4(%esp)
084c765a +0x23c6:  mov    %eax,(%esp)
084c765d +0x23c9:  call   084ebfe6 <_GLOBAL__I__Z7getUserj+0x2f98>  ; global constructors keyed to getUser(unsigned int)+0x2f98
084c7662 +0x23ce:  mov    -0x60(%ebp),%eax
084c7665 +0x23d1:  mov    0x3f14(%eax),%eax
084c766b +0x23d7:  mov    %eax,0x4(%esp)
084c766f +0x23db:  mov    0xc(%ebp),%eax
084c7672 +0x23de:  mov    %eax,(%esp)
084c7675 +0x23e1:  call   086509c6 <_ZN5CUser10SetMileageEi>  ; CUser::SetMileage(int)
084c767a +0x23e6:  mov    -0x60(%ebp),%eax
084c767d +0x23e9:  movzbl 0x3f5c(%eax),%eax
084c7684 +0x23f0:  test   %al,%al
084c7686 +0x23f2:  setne  %al
084c7689 +0x23f5:  movzbl %al,%eax
084c768c +0x23f8:  mov    %eax,0x4(%esp)
084c7690 +0x23fc:  mov    0xc(%ebp),%eax
084c7693 +0x23ff:  mov    %eax,(%esp)
084c7696 +0x2402:  call   084ece20 <_GLOBAL__I__Z7getUserj+0x3dd2>  ; global constructors keyed to getUser(unsigned int)+0x3dd2
084c769b +0x2407:  mov    -0x60(%ebp),%eax
084c769e +0x240a:  movzbl 0x3f58(%eax),%eax
084c76a5 +0x2411:  test   %al,%al
084c76a7 +0x2413:  je     084c76c6 <+0x2432>
084c76a9 +0x2415:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%eax
084c76ae +0x241a:  mov    -0x60(%ebp),%edx
084c76b1 +0x241d:  mov    %edx,0x4(%esp)
084c76b5 +0x2421:  mov    %eax,(%esp)
084c76b8 +0x2424:  call   0831cb56 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA>  ; break_away_prevent::CBreakAwayPreventSystem::updateUvList(SIG_LOGIN_DATA const*)
084c76bd +0x2429:  mov    -0x60(%ebp),%edx
084c76c0 +0x242c:  mov    %al,0x3f58(%edx)
084c76c6 +0x2432:  mov    -0x60(%ebp),%eax
084c76c9 +0x2435:  mov    0x3f54(%eax),%eax
084c76cf +0x243b:  test   %eax,%eax
084c76d1 +0x243d:  jle    084c76fe <+0x246a>
084c76d3 +0x243f:  movl   $0x1,0x4(%esp)
084c76db +0x2447:  mov    0xc(%ebp),%eax
084c76de +0x244a:  mov    %eax,(%esp)
084c76e1 +0x244d:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
084c76e6 +0x2452:  mov    -0x60(%ebp),%eax
084c76e9 +0x2455:  mov    0x3f54(%eax),%eax
084c76ef +0x245b:  mov    %eax,0x4(%esp)
084c76f3 +0x245f:  mov    0xc(%ebp),%eax
084c76f6 +0x2462:  mov    %eax,(%esp)
084c76f9 +0x2465:  call   084ec6c8 <_GLOBAL__I__Z7getUserj+0x367a>  ; global constructors keyed to getUser(unsigned int)+0x367a
084c76fe +0x246a:  mov    -0x60(%ebp),%eax
084c7701 +0x246d:  mov    0x3f48(%eax),%eax
084c7707 +0x2473:  test   %eax,%eax
084c7709 +0x2475:  jle    084c7779 <+0x24e5>
084c770b +0x2477:  mov    -0x60(%ebp),%eax
084c770e +0x247a:  mov    0x3f40(%eax),%edx
084c7714 +0x2480:  mov    -0x60(%ebp),%eax
084c7717 +0x2483:  mov    0x3f44(%eax),%eax
084c771d +0x2489:  cmp    %eax,%edx
084c771f +0x248b:  jbe    084c7736 <+0x24a2>
084c7721 +0x248d:  movl   $0x1,0x4(%esp)
084c7729 +0x2495:  mov    0xc(%ebp),%eax
084c772c +0x2498:  mov    %eax,(%esp)
084c772f +0x249b:  call   0831d4de <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x297>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x297
084c7734 +0x24a0:  jmp    084c7749 <+0x24b5>
084c7736 +0x24a2:  movl   $0x3,0x4(%esp)
084c773e +0x24aa:  mov    0xc(%ebp),%eax
084c7741 +0x24ad:  mov    %eax,(%esp)
084c7744 +0x24b0:  call   0831d4de <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x297>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x297
084c7749 +0x24b5:  mov    -0x60(%ebp),%eax
084c774c +0x24b8:  mov    0x3f48(%eax),%eax
084c7752 +0x24be:  mov    %eax,0x4(%esp)
084c7756 +0x24c2:  mov    0xc(%ebp),%eax
084c7759 +0x24c5:  mov    %eax,(%esp)
084c775c +0x24c8:  call   0822fc5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5306>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5306
084c7761 +0x24cd:  mov    -0x60(%ebp),%eax
084c7764 +0x24d0:  mov    0x3f4c(%eax),%eax
084c776a +0x24d6:  mov    %eax,0x4(%esp)
084c776e +0x24da:  mov    0xc(%ebp),%eax
084c7771 +0x24dd:  mov    %eax,(%esp)
084c7774 +0x24e0:  call   0822fc7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5326>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5326
084c7779 +0x24e5:  mov    -0x60(%ebp),%eax
084c777c +0x24e8:  mov    0x3f18(%eax),%eax
084c7782 +0x24ee:  test   %eax,%eax
084c7784 +0x24f0:  js     084c779e <+0x250a>
084c7786 +0x24f2:  mov    -0x60(%ebp),%eax
084c7789 +0x24f5:  mov    0x3f18(%eax),%eax
084c778f +0x24fb:  mov    %eax,0x4(%esp)
084c7793 +0x24ff:  mov    0xc(%ebp),%eax
084c7796 +0x2502:  mov    %eax,(%esp)
084c7799 +0x2505:  call   084ec63c <_GLOBAL__I__Z7getUserj+0x35ee>  ; global constructors keyed to getUser(unsigned int)+0x35ee
084c779e +0x250a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084c77a3 +0x250f:  movl   $0x34,0x4(%esp)
084c77ab +0x2517:  mov    %eax,(%esp)
084c77ae +0x251a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084c77b3 +0x251f:  mov    (%eax),%edx
084c77b5 +0x2521:  add    $0x34,%edx
084c77b8 +0x2524:  mov    (%edx),%edx
084c77ba +0x2526:  movl   $0x0,0x4(%esp)
084c77c2 +0x252e:  mov    %eax,(%esp)
084c77c5 +0x2531:  call   *%edx
084c77c7 +0x2533:  test   %al,%al
084c77c9 +0x2535:  je     084c77e0 <+0x254c>
084c77cb +0x2537:  mov    -0x60(%ebp),%eax
084c77ce +0x253a:  movzbl 0x3f58(%eax),%eax
084c77d5 +0x2541:  test   %al,%al
084c77d7 +0x2543:  je     084c77e0 <+0x254c>
084c77d9 +0x2545:  mov    $0x1,%eax
084c77de +0x254a:  jmp    084c77e5 <+0x2551>
084c77e0 +0x254c:  mov    $0x0,%eax
084c77e5 +0x2551:  test   %al,%al
084c77e7 +0x2553:  je     084c7804 <+0x2570>
084c77e9 +0x2555:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%eax
084c77ee +0x255a:  mov    0xc(%ebp),%edx
084c77f1 +0x255d:  mov    %edx,0x8(%esp)
084c77f5 +0x2561:  mov    -0x60(%ebp),%edx
084c77f8 +0x2564:  mov    %edx,0x4(%esp)
084c77fc +0x2568:  mov    %eax,(%esp)
084c77ff +0x256b:  call   0831ce78 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem(SIG_LOGIN_DATA const*, CUser*)
084c7804 +0x2570:  mov    0xc(%ebp),%eax
084c7807 +0x2573:  mov    %eax,(%esp)
084c780a +0x2576:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c780f +0x257b:  mov    %eax,%ebx
084c7811 +0x257d:  mov    0xc(%ebp),%eax
084c7814 +0x2580:  mov    %eax,(%esp)
084c7817 +0x2583:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c781c +0x2588:  mov    %ebx,0x4(%esp)
084c7820 +0x258c:  mov    %eax,(%esp)
084c7823 +0x258f:  call   0843b6ec <_ZN19DB_LoadAccountCargo11makeRequestEij>  ; DB_LoadAccountCargo::makeRequest(int, unsigned int)
084c7828 +0x2594:  mov    -0x60(%ebp),%eax
084c782b +0x2597:  movzbl 0x38dc(%eax),%eax
084c7832 +0x259e:  movzbl %al,%eax
084c7835 +0x25a1:  mov    %eax,0x4(%esp)
084c7839 +0x25a5:  mov    0xc(%ebp),%eax
084c783c +0x25a8:  mov    %eax,(%esp)
084c783f +0x25ab:  call   08692b58 <_ZN5CUser9SetPuUserEb>  ; CUser::SetPuUser(bool)
084c7844 +0x25b0:  mov    -0x60(%ebp),%eax
084c7847 +0x25b3:  movzbl 0x3fa1(%eax),%eax
084c784e +0x25ba:  movzbl %al,%edx
084c7851 +0x25bd:  mov    -0x60(%ebp),%eax
084c7854 +0x25c0:  movzbl 0x3fa0(%eax),%eax
084c785b +0x25c7:  movzbl %al,%eax
084c785e +0x25ca:  mov    %edx,0x8(%esp)
084c7862 +0x25ce:  mov    %eax,0x4(%esp)
084c7866 +0x25d2:  mov    0xc(%ebp),%eax
084c7869 +0x25d5:  mov    %eax,(%esp)
084c786c +0x25d8:  call   0868b480 <_ZN5CUser22setCharacSlotCountInfoEhh>  ; CUser::setCharacSlotCountInfo(unsigned char, unsigned char)
084c7871 +0x25dd:  mov    -0x60(%ebp),%eax
084c7874 +0x25e0:  mov    0x3fa4(%eax),%eax
084c787a +0x25e6:  mov    %eax,0x4(%esp)
084c787e +0x25ea:  mov    0xc(%ebp),%eax
084c7881 +0x25ed:  mov    %eax,(%esp)
084c7884 +0x25f0:  call   081bc11e <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1b8>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1b8
084c7889 +0x25f5:  mov    -0x60(%ebp),%eax
084c788c +0x25f8:  add    $0x3a3a,%eax
084c7891 +0x25fd:  mov    %eax,0x4(%esp)
084c7895 +0x2601:  mov    0xc(%ebp),%eax
084c7898 +0x2604:  mov    %eax,(%esp)
084c789b +0x2607:  call   084ec918 <_GLOBAL__I__Z7getUserj+0x38ca>  ; global constructors keyed to getUser(unsigned int)+0x38ca
084c78a0 +0x260c:  mov    -0x60(%ebp),%eax
084c78a3 +0x260f:  movzbl 0x3fa8(%eax),%eax
084c78aa +0x2616:  test   %al,%al
084c78ac +0x2618:  je     084c78c1 <+0x262d>
084c78ae +0x261a:  movl   $0x1,0x4(%esp)
084c78b6 +0x2622:  mov    0xc(%ebp),%eax
084c78b9 +0x2625:  mov    %eax,(%esp)
084c78bc +0x2628:  call   084ed032 <_GLOBAL__I__Z7getUserj+0x3fe4>  ; global constructors keyed to getUser(unsigned int)+0x3fe4
084c78c1 +0x262d:  mov    0xc(%ebp),%eax
084c78c4 +0x2630:  mov    %eax,(%esp)
084c78c7 +0x2633:  call   0868d476 <_ZN5CUser25reset_server_fatigue_dataEv>  ; CUser::reset_server_fatigue_data()
084c78cc +0x2638:  mov    -0x60(%ebp),%eax
084c78cf +0x263b:  movzwl 0x3faa(%eax),%eax
084c78d6 +0x2642:  movswl %ax,%edx
084c78d9 +0x2645:  mov    -0x60(%ebp),%eax
084c78dc +0x2648:  movzbl 0x3fa9(%eax),%eax
084c78e3 +0x264f:  movzbl %al,%eax
084c78e6 +0x2652:  mov    %edx,0x8(%esp)
084c78ea +0x2656:  mov    %eax,0x4(%esp)
084c78ee +0x265a:  mov    0xc(%ebp),%eax
084c78f1 +0x265d:  mov    %eax,(%esp)
084c78f4 +0x2660:  call   0868d4a2 <_ZN5CUser20set_fatigue_count_dbEii>  ; CUser::set_fatigue_count_db(int, int)
084c78f9 +0x2665:  mov    -0x60(%ebp),%eax
084c78fc +0x2668:  add    $0x3fac,%eax
084c7901 +0x266d:  mov    %eax,0x4(%esp)
084c7905 +0x2671:  mov    0xc(%ebp),%eax
084c7908 +0x2674:  mov    %eax,(%esp)
084c790b +0x2677:  call   0868d664 <_ZN5CUser24set_ingame_event_historyEP24SIG_INGAME_EVENT_HISTORY>  ; CUser::set_ingame_event_history(SIG_INGAME_EVENT_HISTORY*)
084c7910 +0x267c:  mov    -0x60(%ebp),%eax
084c7913 +0x267f:  movzbl 0x4124(%eax),%eax
084c791a +0x2686:  test   %al,%al
084c791c +0x2688:  je     084c7958 <+0x26c4>
084c791e +0x268a:  mov    0xc(%ebp),%eax
084c7921 +0x268d:  mov    %eax,(%esp)
084c7924 +0x2690:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084c7929 +0x2695:  movl   $0x0,0x14(%esp)
084c7931 +0x269d:  movl   $0x0,0x10(%esp)
084c7939 +0x26a5:  movl   $0x1,0xc(%esp)
084c7941 +0x26ad:  movl   $0x261,0x8(%esp)
084c7949 +0x26b5:  mov    0xc(%ebp),%edx
084c794c +0x26b8:  mov    %edx,0x4(%esp)
084c7950 +0x26bc:  mov    %eax,(%esp)
084c7953 +0x26bf:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084c7958 +0x26c4:  mov    0xc(%ebp),%eax
084c795b +0x26c7:  mov    %eax,(%esp)
084c795e +0x26ca:  call   084ecb1a <_GLOBAL__I__Z7getUserj+0x3acc>  ; global constructors keyed to getUser(unsigned int)+0x3acc
084c7963 +0x26cf:  mov    %eax,(%esp)
084c7966 +0x26d2:  call   08279020 <_ZN19Secu_AccountHacking12setLoginTimeEv>  ; Secu_AccountHacking::setLoginTime()
084c796b +0x26d7:  mov    -0x60(%ebp),%eax
084c796e +0x26da:  add    $0x4125,%eax
084c7973 +0x26df:  mov    %eax,0x4(%esp)
084c7977 +0x26e3:  mov    0xc(%ebp),%eax
084c797a +0x26e6:  mov    %eax,(%esp)
084c797d +0x26e9:  call   0868f900 <_ZN5CUser20loadInformNoticeFlagEPc>  ; CUser::loadInformNoticeFlag(char*)
084c7982 +0x26ee:  mov    0xc(%ebp),%eax
084c7985 +0x26f1:  mov    %eax,(%esp)
084c7988 +0x26f4:  call   08690be6 <_ZN5CUser19ValidateStrikerInfoEv>  ; CUser::ValidateStrikerInfo()
084c798d +0x26f9:  mov    0xc(%ebp),%eax
084c7990 +0x26fc:  mov    %eax,(%esp)
084c7993 +0x26ff:  call   08690026 <_ZN5CUser20CalcurateManageLevelEv>  ; CUser::CalcurateManageLevel()
084c7998 +0x2704:  mov    0xc(%ebp),%eax
084c799b +0x2707:  mov    %eax,(%esp)
084c799e +0x270a:  call   0868ff04 <_ZN5CUser21CalcurateUserMaxLevelEv>  ; CUser::CalcurateUserMaxLevel()
084c79a3 +0x270f:  mov    -0x60(%ebp),%eax
084c79a6 +0x2712:  mov    %eax,0x4(%esp)
084c79aa +0x2716:  mov    0xc(%ebp),%eax
084c79ad +0x2719:  mov    %eax,(%esp)
084c79b0 +0x271c:  call   0869126e <_ZN5CUser12SetBingoDataER14SIG_LOGIN_DATA>  ; CUser::SetBingoData(SIG_LOGIN_DATA&)
084c79b5 +0x2721:  mov    0xc(%ebp),%eax
084c79b8 +0x2724:  mov    %eax,(%esp)
084c79bb +0x2727:  call   086912be <_ZN5CUser13initBingoDataEv>  ; CUser::initBingoData()
084c79c0 +0x272c:  mov    0xc(%ebp),%eax
084c79c3 +0x272f:  mov    %eax,(%esp)
084c79c6 +0x2732:  call   0868a9a4 <_ZN5CUser24sendReturnUserFirstLoginEv>  ; CUser::sendReturnUserFirstLogin()
084c79cb +0x2737:  mov    -0x60(%ebp),%eax
084c79ce +0x273a:  add    $0x4140,%eax
084c79d3 +0x273f:  mov    %eax,0x4(%esp)
084c79d7 +0x2743:  mov    0xc(%ebp),%eax
084c79da +0x2746:  mov    %eax,(%esp)
084c79dd +0x2749:  call   08691bae <_ZN5CUser24SetGrowthWeaponEventInfoERK23SIG_GROWTH_WEAPON_EVENT>  ; CUser::SetGrowthWeaponEventInfo(SIG_GROWTH_WEAPON_EVENT const&)
084c79e2 +0x274e:  mov    -0x60(%ebp),%eax
084c79e5 +0x2751:  add    $0x4154,%eax
084c79ea +0x2756:  mov    %eax,0x4(%esp)
084c79ee +0x275a:  mov    0xc(%ebp),%eax
084c79f1 +0x275d:  mov    %eax,(%esp)
084c79f4 +0x2760:  call   08691cde <_ZN5CUser26SetGrowthCreatureEventInfoERK30SIG_GIVE_GROWTH_CREATURE_EVENT>  ; CUser::SetGrowthCreatureEventInfo(SIG_GIVE_GROWTH_CREATURE_EVENT const&)
084c79f9 +0x2765:  mov    -0x60(%ebp),%eax
084c79fc +0x2768:  add    $0x4338,%eax
084c7a01 +0x276d:  mov    %eax,0x4(%esp)
084c7a05 +0x2771:  mov    0xc(%ebp),%eax
084c7a08 +0x2774:  mov    %eax,(%esp)
084c7a0b +0x2777:  call   08691dca <_ZN5CUser32setCharacLevelUpGift_AccountOnceER29SIG_LEVELUP_GIFT_ACCOUNT_ONCE>  ; CUser::setCharacLevelUpGift_AccountOnce(SIG_LEVELUP_GIFT_ACCOUNT_ONCE&)
084c7a10 +0x277c:  mov    0xc(%ebp),%eax
084c7a13 +0x277f:  mov    %eax,(%esp)
084c7a16 +0x2782:  call   08691e6a <_ZN5CUser13sendEventInfoEv>  ; CUser::sendEventInfo()
084c7a1b +0x2787:  movl   $0x0,0x4(%esp)
084c7a23 +0x278f:  mov    0xc(%ebp),%eax
084c7a26 +0x2792:  mov    %eax,(%esp)
084c7a29 +0x2795:  call   08693198 <_ZN5CUser23SetEventCreateDnfRewardEb>  ; CUser::SetEventCreateDnfReward(bool)
084c7a2e +0x279a:  mov    0xc(%ebp),%eax
084c7a31 +0x279d:  mov    %eax,(%esp)
084c7a34 +0x27a0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c7a39 +0x27a5:  mov    %eax,%ebx
084c7a3b +0x27a7:  mov    0xc(%ebp),%eax
084c7a3e +0x27aa:  mov    %eax,(%esp)
084c7a41 +0x27ad:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c7a46 +0x27b2:  mov    %ebx,0x4(%esp)
084c7a4a +0x27b6:  mov    %eax,(%esp)
084c7a4d +0x27b9:  call   0815bee0 <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij>  ; DBSelectCreateDnfUserInfo::makeRequest(int, unsigned int)
084c7a52 +0x27be:  mov    0xc(%ebp),%eax
084c7a55 +0x27c1:  movb   $0x0,0x8ec32(%eax)
084c7a5c +0x27c8:  mov    0xc(%ebp),%eax
084c7a5f +0x27cb:  mov    %eax,(%esp)
084c7a62 +0x27ce:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
084c7a67 +0x27d3:  mov    %eax,(%esp)
084c7a6a +0x27d6:  call   08173008 <_ZN6Taiwan14GarenaAuthData10getGcaTypeEv>  ; Taiwan::GarenaAuthData::getGcaType()
084c7a6f +0x27db:  movzwl %ax,%eax
084c7a72 +0x27de:  mov    %eax,(%esp)
084c7a75 +0x27e1:  call   0817305a <_ZN6Taiwan15GarenaCyberCafeEt>  ; Taiwan::GarenaCyberCafe(unsigned short)
084c7a7a +0x27e6:  test   %al,%al
084c7a7c +0x27e8:  je     084c7a89 <+0x27f5>
084c7a7e +0x27ea:  mov    0xc(%ebp),%eax
084c7a81 +0x27ed:  mov    %eax,(%esp)
084c7a84 +0x27f0:  call   0815c986 <_ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser>  ; DBSelectPcroomDailyReward::makeRequest(CUser*)
084c7a89 +0x27f5:  mov    $0x0,%ebx
084c7a8e +0x27fa:  lea    -0x144(%ebp),%eax
084c7a94 +0x2800:  mov    %eax,(%esp)
084c7a97 +0x2803:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c7a9c +0x2808:  jmp    084c7ad4 <+0x2840>
084c7a9e +0x280a:  mov    %edx,%ebx
084c7aa0 +0x280c:  mov    %eax,%esi
084c7aa2 +0x280e:  lea    -0x144(%ebp),%eax
084c7aa8 +0x2814:  mov    %eax,(%esp)
084c7aab +0x2817:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c7ab0 +0x281c:  mov    %esi,%eax
084c7ab2 +0x281e:  mov    %ebx,%edx
084c7ab4 +0x2820:  jmp    084c7ab6 <+0x2822>
084c7ab6 +0x2822:  mov    %edx,%ebx
084c7ab8 +0x2824:  mov    %eax,%esi
084c7aba +0x2826:  lea    -0x12c(%ebp),%eax
084c7ac0 +0x282c:  mov    %eax,(%esp)
084c7ac3 +0x282f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c7ac8 +0x2834:  mov    %esi,%eax
084c7aca +0x2836:  mov    %ebx,%edx
084c7acc +0x2838:  mov    %eax,(%esp)
084c7acf +0x283b:  call   08ae3750 <_Unwind_Resume>
084c7ad4 +0x2840:  lea    -0x12c(%ebp),%eax
084c7ada +0x2846:  mov    %eax,(%esp)
084c7add +0x2849:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c7ae2 +0x284e:  mov    %ebx,%eax
084c7ae4 +0x2850:  add    $0x27c,%esp
084c7aea +0x2856:  pop    %ebx
084c7aeb +0x2857:  pop    %esi
084c7aec +0x2858:  pop    %edi
084c7aed +0x2859:  pop    %ebp
084c7aee +0x285a:  ret
084c7aef +0x285b:  nop
```

## 反编译 C

```c
// Inter_LoginInfo::dispatch_sig @ 0x84c5294

/* Inter_LoginInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoginInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  user_gold_info *puVar1;
  SIG_LOGIN_DATA *pSVar2;
  SIG_LOGIN_DATA *pSVar3;
  SIG_LOGIN_DATA SVar4;
  SIG_LOGIN_DATA SVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uchar uVar12;
  undefined1 uVar13;
  SIG_LOGIN_DATA SVar14;
  short sVar15;
  short sVar16;
  ushort uVar17;
  GameWorld *pGVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  CGameManager *pCVar22;
  char *pcVar23;
  RestrictGeolocation *pRVar24;
  Stream *pSVar25;
  CStreamGuard *pCVar26;
  CHackAnalyzer *pCVar38;
  char *pcVar27;
  CEnvironment *pCVar28;
  int iVar29;
  CMonitorServerProxy *this;
  CGuildServerProxy *this_00;
  Secu_GoldControl *this_01;
  CDungeonGainedGold *this_02;
  CSecurityCard *this_03;
  CPad *pCVar30;
  long lVar31;
  uint uVar32;
  CHades *pCVar33;
  long lVar34;
  int *piVar35;
  Secu_AccountHacking *this_04;
  GarenaAuthData *this_05;
  undefined4 uVar36;
  CUser *pCVar39;
  undefined1 uVar37;
  Packet_Monitor_UDP_Login local_20f [10];
  undefined4 local_205;
  undefined4 local_201;
  undefined1 local_1fd;
  undefined1 local_1ec;
  undefined4 local_1eb;
  undefined4 local_1e7;
  tm local_1dc;
  tm local_1b0;
  CStreamGuard local_184 [8];
  CommonTime local_17c [16];
  time_t local_16c;
  char local_168 [16];
  char local_158 [16];
  CStreamGuard local_148 [8];
  char local_140 [16];
  PacketGuard local_130 [12];
  cMyTrace local_124 [16];
  cMyTrace local_114 [16];
  cMyTrace local_104 [16];
  cMyTrace local_f4 [16];
  cMyTrace local_e4 [16];
  cMyTrace local_d4 [16];
  cMyTrace local_c4 [16];
  cMyTrace local_b4 [16];
  string local_a4 [7];
  allocator<char> local_9d;
  string local_9c [7];
  allocator<char> local_95;
  string local_94 [7];
  allocator<char> local_8d;
  string local_8c [7];
  allocator<char> local_85;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  SIG_LOGIN_DATA *local_64;
  CUser *local_60;
  byte local_59;
  SIG_REQ_LOAD_GAME_OPTION *local_58;
  tm *local_54;
  int local_50;
  int local_4c;
  int local_48;
  time_t local_44;
  tm *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_64 = (SIG_LOGIN_DATA *)param_3;
  pGVar18 = (GameWorld *)G_GameWorld();
  iVar19 = GameWorld::GetChannelType(pGVar18);
  pCVar39._0_2_ = SUB42(param_2,0);
  if (iVar19 == 0xe) {
    CUser::SetServerGroup(pCVar39._0_2_,(char)*(undefined4 *)(local_64 + 0x39d0));
  }
  pGVar18 = (GameWorld *)G_GameWorld();
  iVar19 = GameWorld::GetChannelType(pGVar18);
  if (iVar19 == 7) {
    CUser::SetServerGroup(pCVar39._0_2_,(char)*(undefined4 *)(local_64 + 0x39a8));
  }
  CUser::setWebAddress((CUser *)param_2,(char *)(local_64 + 0x3a3a));
  PacketGuard::PacketGuard(local_130);
                    /* try { // try from 084c5342 to 084c5c71 has its CatchHandler @ 084c7ab6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_130,1,1);
  if (*(int *)(local_64 + 0xb8) == 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_124,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1b0a,0);
    cMyTrace::operator()(local_124,"pInfo->err_code == SIG_LOGIN_DATA::E_CANTFIND",0x74);
    CUser::DisConnSig(pCVar39._0_2_,0xb,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 8) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x60);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    CUser::DisConnSig(pCVar39._0_2_,0x21,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if ((9 < *(int *)(local_64 + 0xb8)) && (*(int *)(local_64 + 0xb8) < 0xd)) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    local_59 = (char)*(undefined4 *)(local_64 + 0xb8) - 0x26;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,(uint)local_59);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,*(int *)(local_64 + 0xd8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_114,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1b67,0);
    cMyTrace::operator()(local_114,"pInfo->err_code == SIG_LOGIN_DATA::PUNISH_REASON",0xa4);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 4) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,8);
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_130,
               *(int *)(local_64 + *(int *)(local_64 + 0x3a50) * 0x18 + 0x3a68));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_104,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1b77,0);
    cMyTrace::operator()(local_104,"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH",0xd8);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 5) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x48);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,*(int *)(local_64 + 0x3914));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_f4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1ba0,0);
    cMyTrace::operator()(local_f4,"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH_MOUSE",4);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 6) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x49);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_e4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1baa,0);
    cMyTrace::operator()(local_e4,"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH_MOUSE_DENY",0x34);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 9) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0xa6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_d4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1bb4,0);
    cMyTrace::operator()(local_d4,"pInfo->err_code == SIG_LOGIN_DATA::E_PASSPAD_WRONG_VERSION",0x6c)
    ;
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 7) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x5f);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    CUser::DisConnSig(pCVar39._0_2_,0x20,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  CUser::setHangameUser((CUser *)param_2,(bool)local_64[0x38dd]);
  if (*(int *)(local_64 + 0xb8) != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    uVar36 = *(undefined4 *)(local_64 + 0xb8);
    cMyTrace::cMyTrace(local_c4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1bf2,0);
    cMyTrace::operator()
              (local_c4,
               "[Inter_LoginInfo::dispatch_sig] Abnormal LoginError: SIG_LOGIN_DATA::ERROR_OK(%d)",
               0xa8,uVar36);
    CUser::DisConnSig(pCVar39._0_2_,0xe,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  uVar20 = CUser::get_unique_id((CUser *)param_2);
  sVar15 = CUser::GetIncreID((CUser *)param_2);
  sVar16 = CUser::GetSlotIDX((CUser *)param_2);
  uVar36 = CUser::GetUID((CUser *)param_2);
  uVar21 = NumberToString(*(uint *)(local_64 + 0xc0),0);
  cMyTrace::cMyTrace(local_b4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",0x1bf6
                     ,0);
  cMyTrace::operator()
            (local_b4,"[USER LOGIN] DB ID : %s (UID: %d)(SlotIDX: %d)(IncreID: %d)(SocketID: %d)\n",
             0xfc,uVar21,uVar36,(int)sVar16,(int)sVar15,uVar20 & 0xffff);
  uVar20 = *(uint *)(local_64 + 0xc0);
  pCVar22 = (CGameManager *)G_CGameManager();
  local_60 = (CUser *)CGameManager::GetUserByAccId(pCVar22,uVar20);
  if (local_60 != (CUser *)0x0) {
    iVar19 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(local_60 + 0xe0));
    if ((iVar19 == -1) || (iVar19 = CUser::get_state(local_60), iVar19 == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      CUser::SendCmdErrorPacket(SUB42(local_60,0),1,0x12);
      CUser::DisConnSig(SUB42(local_60,0),0xc,1,0);
      CUser::SendCmdErrorPacket(pCVar39._0_2_,1,0x12);
      uVar36 = 0x1c18;
      goto LAB_084c7ad4;
    }
  }
  CUser::set_acc_info((CUser *)param_2,*(uint *)(local_64 + 0xc0),(char *)local_64);
  local_140[0] = '\0';
  local_140[1] = '\0';
  local_140[2] = '\0';
  local_140[3] = '\0';
  local_140[4] = '\0';
  local_140[5] = '\0';
  local_140[6] = '\0';
  local_140[7] = '\0';
  local_140[8] = '\0';
  local_140[9] = '\0';
  local_140[10] = '\0';
  local_140[0xb] = '\0';
  local_140[0xc] = '\0';
  local_140[0xd] = '\0';
  local_140[0xe] = '\0';
  local_140[0xf] = '\0';
  CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(param_2 + 0xe0),local_140,0x10);
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  bVar9 = false;
  if (local_64[0xb5] == (SIG_LOGIN_DATA)0x1) {
LAB_084c5d92:
    bVar8 = false;
  }
  else {
    std::allocator<char>::allocator();
    bVar7 = true;
                    /* try { // try from 084c5d18 to 084c5d83 has its CatchHandler @ 084c5da8 */
    std::string::string(local_a4,local_140,(allocator *)&local_9d);
    bVar6 = true;
    std::allocator<char>::allocator();
    bVar11 = true;
    pcVar23 = (char *)CUser::get_acc_name((CUser *)param_2);
    std::string::string(local_9c,pcVar23,(allocator *)&local_95);
    bVar9 = true;
    pRVar24 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    cVar10 = RestrictGeolocation::isAllow(pRVar24,(string)local_9c,(string)local_a4);
    if (cVar10 == '\x01') goto LAB_084c5d92;
    bVar8 = true;
  }
  if (bVar9) {
                    /* try { // try from 084c5de2 to 084c5de6 has its CatchHandler @ 084c5de9 */
    std::string::~string(local_9c);
  }
  if (bVar11) {
    std::allocator<char>::~allocator(&local_95);
  }
  if (bVar6) {
                    /* try { // try from 084c5e62 to 084c5e66 has its CatchHandler @ 084c5e69 */
    std::string::~string(local_a4);
  }
  if (bVar7) {
    std::allocator<char>::~allocator(&local_9d);
  }
  if (bVar8) {
                    /* try { // try from 084c5eb4 to 084c5f21 has its CatchHandler @ 084c7ab6 */
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x41);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    CUser::DisConnSig(pCVar39._0_2_,0x15,1,0);
  }
  pGVar18 = (GameWorld *)G_GameWorld();
  cVar10 = GameWorld::IsIntegratedPvPBaseChannel(pGVar18);
  if (cVar10 != '\0') {
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    std::allocator<char>::allocator();
                    /* try { // try from 084c5f85 to 084c5f89 has its CatchHandler @ 084c5fdd */
    std::string::string(local_94,local_140,(allocator *)&local_8d);
                    /* try { // try from 084c5f8a to 084c5fb2 has its CatchHandler @ 084c5fb5 */
    pRVar24 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    RestrictGeolocation::getCountryCode(pRVar24,local_158,0x10,(string)local_94);
                    /* try { // try from 084c5fd6 to 084c5fda has its CatchHandler @ 084c5fdd */
    std::string::~string(local_94);
    std::allocator<char>::~allocator(&local_8d);
    std::allocator<char>::allocator();
                    /* try { // try from 084c6031 to 084c6035 has its CatchHandler @ 084c6089 */
    std::string::string(local_8c,local_158,(allocator *)&local_85);
                    /* try { // try from 084c6036 to 084c605e has its CatchHandler @ 084c6061 */
    pRVar24 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    bVar11 = (bool)RestrictGeolocation::isAllow(pRVar24,(string)local_8c);
    CUser::setAllowLocationGeoState((CUser *)param_2,bVar11);
                    /* try { // try from 084c6082 to 084c6086 has its CatchHandler @ 084c6089 */
    std::string::~string(local_8c);
    std::allocator<char>::~allocator(&local_85);
  }
                    /* try { // try from 084c60c0 to 084c60f5 has its CatchHandler @ 084c7ab6 */
  CUser::set_state(pCVar39._0_2_,2);
  pGVar18 = (GameWorld *)G_GameWorld();
  uVar37 = SUB41(param_2,0);
  GameWorld::InsertLoginUser(pGVar18,(CUser *)param_2);
  pSVar25 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x1c7e);
  CStreamGuard::CStreamGuard(local_148,pSVar25,true);
  pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_148);
                    /* try { // try from 084c6129 to 084c70e1 has its CatchHandler @ 084c7a9e */
  CStreamGuard::operator<<(pCVar26,0x12e);
  iVar19 = CUser::GetUID((CUser *)param_2);
  pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_148);
  CStreamGuard::operator<<(pCVar26,iVar19);
  pCVar26 = (CStreamGuard *)CStreamGuard::operator->(local_148);
  local_58 = CStreamGuard::GetInBuffer<SIG_REQ_LOAD_GAME_OPTION>(pCVar26);
  uVar36 = CUser::get_acc_id((CUser *)param_2);
  *(undefined4 *)local_58 = uVar36;
  MsgQueueMgr::put((MsgQueueMgr *)GlobalData::s_msgq_mgr,2,local_148);
  pCVar22 = (CGameManager *)G_CGameManager();
  CGameManager::insertUserByAccID(pCVar22,(CUser *)param_2);
  CUser::SetUserDetailInfo
            ((CUser *)param_2,(char *)(local_64 + 0x2184),(char *)(local_64 + 0x2284),
             (char *)(local_64 + 0x2204));
  CUser::SetBirth((CUser *)param_2,(char *)(local_64 + 0x2284));
  for (local_34 = 0; local_34 < *(int *)(local_64 + 0x2294); local_34 = local_34 + 1) {
    local_2e = *(int *)(local_64 + 0x2294) + -1 == local_34;
    WongWork::CHandlePremium::handleSetUserPremium
              ((undefined2)pCVar39._0_2_,
               (char)*(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 8),
               *(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 0xc),
               *(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 0x10),
               *(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 0x14),local_2e);
  }
  CUser::setRegDate((CUser *)param_2,*(uint *)(local_64 + 0xcc));
  CUser::setRegTime((CUser *)param_2,*(long *)(local_64 + 0xd4));
  if (0 < *(int *)(local_64 + 0xdc)) {
    CUser::SetCharacInfo((CUser *)param_2,*(int *)(local_64 + 0xdc),(char *)(local_64 + 0xe0));
    CUser::SetNeedCheckOverEquipItem((CUser *)param_2);
  }
  if (0 < *(int *)(local_64 + 0x15b0)) {
    CUser::SetCharacMercenaryInfo
              ((CUser *)param_2,*(int *)(local_64 + 0x15b0),
               (CHARAC_LOAD_MERCENARY *)(local_64 + 0x15b4));
    local_2d = '\x01';
    local_2c = 0;
    while( true ) {
      if ((local_2c < *(int *)(local_64 + 0x15b0)) && (local_2c < 0x24)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) goto LAB_084c63aa;
      if (*(int *)(local_64 + local_2c * 0x54 + 0x15dc) != 0) break;
      local_2c = local_2c + 1;
    }
    local_2d = '\0';
LAB_084c63aa:
    if (local_2d != '\0') {
      pCVar38._0_2_ = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar38._0_2_,uVar37,0x1aa,1,0,0);
    }
  }
  for (local_28 = 0; local_28 < (int)(uint)*(ushort *)(local_64 + 0x293a); local_28 = local_28 + 1)
  {
    CUser::SetRestrictedGoods((CUser *)param_2,*(int *)(local_64 + (local_28 + 0xa4c) * 4 + 0xc));
  }
  pcVar23 = (char *)CUser::GetSsnString((CUser *)param_2);
  uVar12 = CUser::getSex((CUser *)param_2);
  pcVar27 = (char *)CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_168,0x10);
  pCVar28 = (CEnvironment *)G_CEnvironment();
  iVar19 = CEnvironment::get_channel_no(pCVar28);
  uVar20 = *(uint *)(local_64 + 0xc0);
  iVar29 = CUser::GetUID((CUser *)param_2);
  uVar13 = CUser::GetServerGroup((CUser *)param_2);
  this = (CMonitorServerProxy *)
         CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                   ((CServerProxyMgr<CMonitorServerProxy> *)GlobalData::s_monitor_proxy_mgr,uVar13);
  CMonitorServerProxy::SendLogin(this,iVar29,uVar20,iVar19,pcVar27,uVar12,pcVar23);
  pcVar23 = (char *)CUser::GetSsnString((CUser *)param_2);
  uVar12 = CUser::getSex((CUser *)param_2);
  pcVar27 = (char *)CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_168,0x10);
  pCVar28 = (CEnvironment *)G_CEnvironment();
  iVar19 = CEnvironment::get_channel_no(pCVar28);
  uVar20 = *(uint *)(local_64 + 0xc0);
  iVar29 = CUser::GetUID((CUser *)param_2);
  uVar13 = CUser::GetServerGroup((CUser *)param_2);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                      ((CServerProxyMgr<CGuildServerProxy> *)GlobalData::s_guild_proxy_mgr,uVar13);
  CGuildServerProxy::SendLogin(this_00,iVar29,uVar20,iVar19,pcVar27,uVar12,pcVar23);
  iVar19 = G_CEnvironment();
  iVar19 = *(int *)(iVar19 + 0x378);
  pCVar28 = (CEnvironment *)G_CEnvironment();
  iVar29 = CEnvironment::get_channel_no(pCVar28);
  CDoubleConnCheckServerProxy::SendLogin
            (GlobalData::s_double_check_proxy,*(uint *)(local_64 + 0xc0),iVar29,iVar19);
  puVar1 = (user_gold_info *)(local_64 + 0x3f64);
  this_01 = (Secu_GoldControl *)CUser::GetGoldControl((CUser *)param_2);
  Secu_GoldControl::SetInfo(this_01,puVar1);
  for (local_24 = 0; local_24 < *(int *)(local_64 + 0x3a50); local_24 = local_24 + 1) {
    if ((99 < *(int *)(local_64 + local_24 * 0x18 + 0x3a54)) &&
       (*(int *)(local_64 + local_24 * 0x18 + 0x3a54) < 200)) {
      iVar19 = *(int *)(local_64 + local_24 * 0x18 + 0x3a68);
      iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if ((iVar19 < iVar29) && (*(int *)(local_64 + local_24 * 0x18 + 0x3a68) != 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((bVar11) && (*(int *)(local_64 + local_24 * 0x18 + 0x3a54) == 0x65)) {
        CUser::setStdDropRate((CUser *)param_2,*(int *)(local_64 + local_24 * 0x18 + 0x3a5c));
      }
    }
  }
  for (local_20 = 0; local_20 < *(int *)(local_64 + 0x3a50); local_20 = local_20 + 1) {
    iVar19 = *(int *)(local_64 + local_20 * 0x18 + 0x3a68);
    iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if ((iVar19 < iVar29) && (*(int *)(local_64 + local_20 * 0x18 + 0x3a68) != 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 4) {
        CUser::SetTradePunishType((CUser *)param_2,8);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xb) {
        CUser::SetTradePunishType((CUser *)param_2,1);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xc) {
        CUser::SetTradePunishType((CUser *)param_2,4);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xd) {
        CUser::SetTradePunishType((CUser *)param_2,0x20);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xe) {
        CUser::SetTradePunishType((CUser *)param_2,2);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0x67) {
        CUser::SetTradePunishType((CUser *)param_2,0x80);
      }
    }
  }
  CUser::setTotalHackUserTradeCnt((CUser *)param_2,*(uint *)(local_64 + 0x3a24));
  uVar36 = *(undefined4 *)(local_64 + 0x3a28);
  CUser::setTotalHackUserTradeGold
            (CONCAT26((short)((uint)uVar36 >> 0x10),
                      CONCAT15((char)((uint)uVar36 >> 8),CONCAT14((char)uVar36,param_2))));
  cVar10 = WongWork::CAutoPunishRuleBlackIPMgr::isBlackIP
                     (GlobalData::g_autoPunishRuleBlackIPMgr,(char *)(local_64 + 0xa1));
  if (cVar10 != '\0') {
    pCVar38._0_2_ = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar38._0_2_,uVar37,0x32a,1,0,0);
  }
  CUser::setRestingUserRestrict((CUser *)param_2,(bool)local_64[0x3f0c]);
  CUser::setHumanCertifyErrorCnt((CUser *)param_2,0);
  CUser::setHumanCertified((CUser *)param_2,true);
  local_16c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_54 = localtime_r(&local_16c,&local_1b0);
  local_50 = local_54->tm_year;
  local_4c = local_54->tm_mon;
  local_48 = local_54->tm_mday;
  uVar20 = *(uint *)(local_64 + 0x395c);
  this_02 = (CDungeonGainedGold *)CUser::getDungeonGainedGold((CUser *)param_2);
  CDungeonGainedGold::setGainedGold(this_02,uVar20);
  CUserCharacInfo::SetReliablePerson((CUserCharacInfo *)param_2,true);
  CUserCharacInfo::SetReliablePerson
            ((CUserCharacInfo *)param_2,local_64[0x3964] != (SIG_LOGIN_DATA)0x0);
  local_54->tm_hour = 6;
  local_44 = mktime(local_54);
  if (local_44 < *(int *)(local_64 + 0x3958)) {
    CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)param_2,*(uint *)(local_64 + 0x3968));
  }
  else {
    CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)param_2,0);
  }
  local_40 = localtime_r((time_t *)(local_64 + 0x3958),&local_1dc);
  if (((local_40->tm_year == local_50) && (local_40->tm_mon == local_4c)) &&
     (local_40->tm_mday == local_48)) {
    CUser::SetReportMannerlessUserCount((CUser *)param_2,*(int *)(local_64 + 0x3960));
  }
  else {
    CUser::SetReportMannerlessUserCount((CUser *)param_2,0);
  }
  CUser::SetSchoolNo((CUser *)param_2,*(uint *)(local_64 + 0x396c));
  CUser::SetRating((CUser *)param_2,*(float *)(local_64 + 0x3970));
  CUser::SetSchoolName((CUser *)param_2,(char *)(local_64 + 0x3974));
  CUser::SetDailyBadge((CUser *)param_2,(short *)(local_64 + 0x399c));
  CUser::SetTutorialSkipable((CUser *)param_2,(uchar)local_64[0x39a2]);
  CommonTime::SetCurTime(local_17c);
  CUser::SetAge((CUser *)param_2,((int)(char)local_17c[0] - *(int *)(local_64 + 200)) + 0x7d1);
  CUser::setSecuReward((CUser *)param_2,(bool)local_64[0x3f0e]);
  CUser::setSecuType((CUser *)param_2,(uchar)local_64[0x3f0d]);
  CUser::setRewardType((CUser *)param_2,(uchar)local_64[0x3f0f]);
  CUser::setSecuGrade((CUser *)param_2,(byte)local_64[0x3f0d] & 0x27);
  if (local_64[0x39e0] != (SIG_LOGIN_DATA)0x0) {
    pSVar2 = local_64 + 0x3a18;
    iVar19 = *(int *)(local_64 + 0x3a14);
    SVar14 = local_64[0x39ec];
    iVar29 = *(int *)(local_64 + 0x39e4);
    SVar4 = local_64[0x39e1];
    SVar5 = local_64[0x39e0];
    pSVar3 = local_64 + 0x39ed;
    this_03 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    WongWork::CSecurityCard::setSecurityCardInfo
              (this_03,(char *)pSVar3,(bool)SVar5,(bool)SVar4,iVar29,(int)(char)SVar14,iVar19,
               (char *)pSVar2);
  }
  SVar14 = local_64[0x390c];
  pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
  Sanicova::CPad::setVersionInfo(pCVar30,(char)SVar14);
  if (local_64[0x38e0] != (SIG_LOGIN_DATA)0x0) {
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setActivate(pCVar30,true);
    iVar19 = *(int *)(local_64 + 0x3918);
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setCancelCnt(pCVar30,iVar19);
    SVar14 = local_64[0x390c];
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setVersionInfo(pCVar30,(char)SVar14);
    SVar14 = local_64[0x390e];
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setCertified(pCVar30,(bool)SVar14);
    lVar34 = *(long *)(local_64 + 0x3910);
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setCheckTime(pCVar30,lVar34);
    lVar31 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar34 = *(long *)(local_64 + 0x3958);
    iVar19 = G_CEnvironment();
    cVar10 = CheckDailyScheduleTime(*(int *)(iVar19 + 0x37c),lVar34,lVar31);
    if (cVar10 == '\0') {
      iVar19 = *(int *)(local_64 + 0x3914);
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setFailCnt(pCVar30,iVar19);
    }
    else if (0 < *(int *)(local_64 + 0x3914)) {
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setFailCnt(pCVar30,0);
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCancelCnt(pCVar30,0);
      pcVar23 = (char *)CUser::getWebAddress((CUser *)param_2);
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      uVar20 = Sanicova::CPad::getFailCnt(pCVar30);
      uVar32 = CUser::get_acc_id((CUser *)param_2);
      DB_PassPadUpdateFailCnt::makeRequest(uVar32,uVar20,pcVar23);
      cMyTrace::cMyTrace(local_84,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                         0x1df5,0);
      cMyTrace::operator()(local_84,"GOBLIN PAD RESET OK!!!",0x47);
    }
    pSVar2 = local_64 + 0x38e1;
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setPassword(pCVar30,(char *)pSVar2);
    pCVar33 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::Send_Login(pCVar33);
    pCVar33 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::StdCateUpdate(pCVar33,3,0);
    SVar14 = local_64[0x390d];
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setAdvideChangePwd(pCVar30,(bool)SVar14);
  }
  pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
  Sanicova::CPad::setCertified(pCVar30,true);
  if (*(short *)(local_64 + 0x38de) == 0xd) {
    CUser::setPunishTradeAlert((CUser *)param_2,0xe7);
  }
  else if (*(short *)(local_64 + 0x38de) == 0xe) {
    CUser::setPunishTradeAlert((CUser *)param_2,0xe8);
  }
  else {
    CUser::setPunishTradeAlert((CUser *)param_2,0);
  }
  CUser::setOnlinePreliminaryCharacNo((CUser *)param_2,*(uint *)(local_64 + 0x39d4));
  CUser::setOnlinePreliminaryServerGroup(pCVar39._0_2_,(char)*(undefined4 *)(local_64 + 0x39d0));
  CUser::setOnlinePreliminaryPlayType((CUser *)param_2,*(int *)(local_64 + 0x39d8));
  uVar36 = *(undefined4 *)(local_64 + 0x39d8);
  uVar21 = NumberToString(*(uint *)(local_64 + 0xc0),0);
  cMyTrace::cMyTrace(local_74,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",0x1e33
                     ,0);
  cMyTrace::operator()(local_74,"OnlinePreliminary m_id(%s), play_type(%d)",0x60,uVar21,uVar36);
  if ((*(int *)(local_64 + 0x39ac) == 0) || (*(int *)(local_64 + 0x39a8) == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  CUser::setTournamentAccount((CUser *)param_2,bVar11);
  pGVar18 = (GameWorld *)G_GameWorld();
  iVar19 = GameWorld::GetChannelType(pGVar18);
  if (iVar19 == 7) {
    Packet_Monitor_UDP_Login::Packet_Monitor_UDP_Login(local_20f);
    pSVar25 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x1e3b);
    CStreamGuard::CStreamGuard(local_184,pSVar25,true);
    pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_184);
                    /* try { // try from 084c7115 to 084c71d7 has its CatchHandler @ 084c71da */
    CStreamGuard::operator<<(pCVar26,0x41);
    iVar19 = CUser::GetUID((CUser *)param_2);
    pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_184);
    CStreamGuard::operator<<(pCVar26,iVar19);
    local_205 = CUser::GetUID((CUser *)param_2);
    local_201 = CUser::get_acc_id((CUser *)param_2);
    pCVar28 = (CEnvironment *)G_CEnvironment();
    local_1fd = CEnvironment::get_channel_no(pCVar28);
    local_1ec = 1;
    local_1eb = 0;
    local_1e7 = 0;
    pCVar26 = (CStreamGuard *)CStreamGuard::operator->(local_184);
    CStreamGuard::put_binary(pCVar26,local_20f,0x33);
    MsgQueueMgr::put((MsgQueueMgr *)GlobalData::s_msgq_mgr,1,local_184);
                    /* try { // try from 084c71fe to 084c7a88 has its CatchHandler @ 084c7a9e */
    CStreamGuard::~CStreamGuard(local_184);
  }
  CUser::setClientVersion((CUser *)param_2,*(uint *)(local_64 + 0x3a34));
  CUser::SetAccountLastPlayTime((CUser *)param_2,*(long *)(local_64 + 0x3958));
  CUser::setJoinedSchoolPointEvent((CUser *)param_2,(bool)local_64[0x3a4a]);
  param_2[0x8e47c] = '\0';
  pcVar23 = (char *)CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_2 + 0xe0),param_2 + 0x8e418,0x14);
  uVar36 = WongWork::CBlackIPMonitor::getPunishType(GlobalData::g_blackIPMonitor,pcVar23);
  *(undefined4 *)(param_2 + 0x8e478) = uVar36;
  if ((*(uint *)(param_2 + 0x8e478) & 1) == 0) {
LAB_084c7301:
    bVar11 = false;
  }
  else {
    uVar13 = CNetwork<4096,450000>::GetPeerIP2
                       ((CNetwork<4096,450000> *)(param_2 + 0xe0),param_2 + 0x8e418,0x14);
    iVar19 = WongWork::CBlackIPMonitor::GetEndTime(SUB42(GlobalData::g_blackIPMonitor,0),uVar13,1);
    iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar19 < iVar29) goto LAB_084c7301;
    bVar11 = true;
  }
  if (bVar11) {
    CUser::SetTradePunishType((CUser *)param_2,0x10);
    uVar20 = CUser::get_acc_id((CUser *)param_2);
    DB_BlackipPrivateSecurityValuation::makeRequest(uVar20);
  }
  local_3c = *(int *)(local_64 + 0x3a4c);
  lVar31 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar34 = *(long *)(local_64 + 0x3958);
  iVar19 = G_CEnvironment();
  cVar10 = CheckDailyScheduleTime(*(int *)(iVar19 + 0x37c),lVar34,lVar31);
  if (cVar10 == '\0') {
    *(int *)(local_64 + 0x3a4c) = *(int *)(local_64 + 0x3a4c) + -1;
  }
  else {
    *(undefined4 *)(local_64 + 0x3a4c) = 0;
  }
  WongWork::CMCAPManager::incPoint((CMCAPManager *)(param_2 + 0x8e3f0),*(int *)(local_64 + 0x3a4c));
  iVar19 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
  if (iVar19 == local_3c) {
    WongWork::CMCAPManager::disableCleanPadPoint((CMCAPManager *)(param_2 + 0x8e3f0));
  }
  if ((*(uint *)(param_2 + 0x8e478) & 2) == 0) {
LAB_084c7446:
    bVar11 = false;
  }
  else {
    uVar13 = CNetwork<4096,450000>::GetPeerIP2
                       ((CNetwork<4096,450000> *)(param_2 + 0xe0),param_2 + 0x8e418,0x14);
    iVar19 = WongWork::CBlackIPMonitor::GetEndTime(SUB42(GlobalData::g_blackIPMonitor,0),uVar13,2);
    iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar19 < iVar29) goto LAB_084c7446;
    bVar11 = true;
  }
  if (bVar11) {
    param_2[0x8e47c] = '\x01';
    uVar20 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    if (uVar20 < 0x251c) {
      WongWork::CMCAPManager::incPoint((CMCAPManager *)(param_2 + 0x8e3f0),0x251c);
    }
  }
  if (local_64[0x3f04] == (SIG_LOGIN_DATA)0x0) {
    if (*(int *)(local_64 + 0x3958) == 0) {
      CUser::ResetReturnUser((CUser *)param_2);
    }
    else {
      iVar19 = *(int *)(local_64 + 0x3958);
      iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar19 + 0x3b53800 < iVar29) {
        CUser::SetReturnUser((CUser *)param_2);
        iVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        CUser::SetReturnUserExpireTime((CUser *)param_2,iVar19 + 0x127500);
        CUser::SetReturnUserFirstUserLogin((CUser *)param_2,true);
        uVar20 = CUser::GetReturnUserExpireTime((CUser *)param_2);
        uVar32 = CUser::get_unique_id((CUser *)param_2);
        iVar19 = CUser::GetUID((CUser *)param_2);
        Timer_ReturnUserTimeout::registNextTimer(iVar19,uVar32 & 0xffff,uVar20);
      }
      else {
        CUser::ResetReturnUser((CUser *)param_2);
      }
    }
  }
  else {
    CUser::SetReturnUser((CUser *)param_2);
    CUser::SetReturnUserExpireTime((CUser *)param_2,*(int *)(local_64 + 0x3f08));
    CUser::SetReturnUserFirstUserLogin((CUser *)param_2,(bool)local_64[0x3f05]);
    uVar20 = CUser::GetReturnUserExpireTime((CUser *)param_2);
    uVar32 = CUser::get_unique_id((CUser *)param_2);
    iVar19 = CUser::GetUID((CUser *)param_2);
    Timer_ReturnUserTimeout::registNextTimer(iVar19,uVar32 & 0xffff,uVar20);
  }
  CUser::resetAccountMemberBonusFatigue((CUser *)param_2);
  iVar19 = G_CEnvironment();
  local_38 = *(int *)(iVar19 + 0x37c);
  lVar34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar10 = CheckDailyScheduleTime(local_38,*(long *)(local_64 + 0x3f60),lVar34);
  if (cVar10 == '\x01') {
    CUser::EnableSaveMemberBonusFatigue((CUser *)param_2);
  }
  else {
    CUser::incAccountMemberBonusFatigue((CUser *)param_2,*(short *)(local_64 + 0x3f5e));
  }
  CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)param_2,(uchar)local_64[0x3f10]);
  CUser::SetMileage((CUser *)param_2,*(int *)(local_64 + 0x3f14));
  CUser::setCharacLinkMessageFlag((CUser *)param_2,local_64[0x3f5c] != (SIG_LOGIN_DATA)0x0);
  if (local_64[0x3f58] != (SIG_LOGIN_DATA)0x0) {
    SVar14 = (SIG_LOGIN_DATA)
             break_away_prevent::CBreakAwayPreventSystem::updateUvList
                       (GlobalData::s_BreakAwaySys,local_64);
    local_64[0x3f58] = SVar14;
  }
  if (0 < *(int *)(local_64 + 0x3f54)) {
    CUser::setBreakAwayRewardData((CUser *)param_2,true);
    CUser::setUserBreakAwayRewardLuckPoint((CUser *)param_2,*(int *)(local_64 + 0x3f54));
  }
  if (0 < *(int *)(local_64 + 0x3f48)) {
    if (*(uint *)(local_64 + 0x3f44) < *(uint *)(local_64 + 0x3f40)) {
      CUser::setBreakAwayRewardOrder(pCVar39._0_2_,1);
    }
    else {
      CUser::setBreakAwayRewardOrder(pCVar39._0_2_,3);
    }
    CUser::setBreakAwayDungeonClearCnt((CUser *)param_2,*(int *)(local_64 + 0x3f48));
    CUser::setBreakAwayQuestTime((CUser *)param_2,*(uint *)(local_64 + 0x3f4c));
  }
  if (-1 < *(int *)(local_64 + 0x3f18)) {
    CUser::setBreakAwayAccureCera((CUser *)param_2,*(int *)(local_64 + 0x3f18));
  }
  piVar35 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x34);
  cVar10 = (**(code **)(*piVar35 + 0x34))((short)piVar35,0);
  if ((cVar10 == '\0') || (local_64[0x3f58] == (SIG_LOGIN_DATA)0x0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (bVar11) {
    break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem
              (GlobalData::s_BreakAwaySys,local_64,(CUser *)param_2);
  }
  uVar20 = CUser::get_acc_id((CUser *)param_2);
  iVar19 = CUser::GetUID((CUser *)param_2);
  DB_LoadAccountCargo::makeRequest(iVar19,uVar20);
  CUser::SetPuUser((CUser *)param_2,(bool)local_64[0x38dc]);
  CUser::setCharacSlotCountInfo((CUser *)param_2,(uchar)local_64[0x3fa0],(uchar)local_64[0x3fa1]);
  CUser::set_ontime_last_recv_idx((CUser *)param_2,*(int *)(local_64 + 0x3fa4));
  CUser::setWebAddress((CUser *)param_2,(char *)(local_64 + 0x3a3a));
  if (local_64[0x3fa8] != (SIG_LOGIN_DATA)0x0) {
    CUser::setCheckPickUpRandomOptionItem((CUser *)param_2,true);
  }
  CUser::reset_server_fatigue_data((CUser *)param_2);
  CUser::set_fatigue_count_db
            ((CUser *)param_2,(uint)(byte)local_64[0x3fa9],(int)*(short *)(local_64 + 0x3faa));
  CUser::set_ingame_event_history((CUser *)param_2,(SIG_INGAME_EVENT_HISTORY *)(local_64 + 0x3fac));
  if (local_64[0x4124] != (SIG_LOGIN_DATA)0x0) {
    pCVar38._0_2_ = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar38._0_2_,uVar37,0x261,1,0,0);
  }
  this_04 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)param_2);
  Secu_AccountHacking::setLoginTime(this_04);
  CUser::loadInformNoticeFlag((CUser *)param_2,(char *)(local_64 + 0x4125));
  CUser::ValidateStrikerInfo((CUser *)param_2);
  CUser::CalcurateManageLevel((CUser *)param_2);
  CUser::CalcurateUserMaxLevel((CUser *)param_2);
  CUser::SetBingoData((CUser *)param_2,local_64);
  CUser::initBingoData((CUser *)param_2);
  CUser::sendReturnUserFirstLogin((CUser *)param_2);
  CUser::SetGrowthWeaponEventInfo((CUser *)param_2,(SIG_GROWTH_WEAPON_EVENT *)(local_64 + 0x4140));
  CUser::SetGrowthCreatureEventInfo
            ((CUser *)param_2,(SIG_GIVE_GROWTH_CREATURE_EVENT *)(local_64 + 0x4154));
  CUser::setCharacLevelUpGift_AccountOnce
            ((CUser *)param_2,(SIG_LEVELUP_GIFT_ACCOUNT_ONCE *)(local_64 + 0x4338));
  CUser::sendEventInfo();
  CUser::SetEventCreateDnfReward((CUser *)param_2,false);
  uVar20 = CUser::get_acc_id((CUser *)param_2);
  iVar19 = CUser::GetUID((CUser *)param_2);
  DBSelectCreateDnfUserInfo::makeRequest(iVar19,uVar20);
  param_2[0x8ec32] = '\0';
  this_05 = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
  uVar17 = Taiwan::GarenaAuthData::getGcaType(this_05);
  cVar10 = Taiwan::GarenaCyberCafe(uVar17);
  if (cVar10 != '\0') {
    DBSelectPcroomDailyReward::makeRequest((CUser *)param_2);
  }
  uVar36 = 0;
                    /* try { // try from 084c7a97 to 084c7a9b has its CatchHandler @ 084c7ab6 */
  CStreamGuard::~CStreamGuard(local_148);
LAB_084c7ad4:
  PacketGuard::~PacketGuard(local_130);
  return uVar36;
}
```
