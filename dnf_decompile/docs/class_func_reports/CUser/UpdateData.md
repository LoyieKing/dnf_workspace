# UpdateData

`_ZN5CUser10UpdateDataEv`

`CUser::UpdateData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08653270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08653270  _ZN5CUser10UpdateDataEv
#           CUser::UpdateData()
# range [0x08653270, 0x08654599]
08653270 +0x0000:  push   %ebp
08653271 +0x0001:  mov    %esp,%ebp
08653273 +0x0003:  push   %edi
08653274 +0x0004:  push   %esi
08653275 +0x0005:  push   %ebx
08653276 +0x0006:  sub    $0xec,%esp
0865327c +0x000c:  mov    0x8(%ebp),%eax
0865327f +0x000f:  mov    0x8cfc4(%eax),%eax
08653285 +0x0015:  cmp    $0x2,%eax
08653288 +0x0018:  jle    0865458a <+0x131a>
0865328e +0x001e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08653293 +0x0023:  mov    %eax,(%esp)
08653296 +0x0026:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865329b +0x002b:  cmp    $0x7,%eax
0865329e +0x002e:  sete   %al
086532a1 +0x0031:  test   %al,%al
086532a3 +0x0033:  jne    0865458d <+0x131d>
086532a9 +0x0039:  mov    0x8(%ebp),%eax
086532ac +0x003c:  mov    %eax,(%esp)
086532af +0x003f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086532b4 +0x0044:  test   %eax,%eax
086532b6 +0x0046:  sete   %al
086532b9 +0x0049:  test   %al,%al
086532bb +0x004b:  je     0865330f <+0x9f>
086532bd +0x004d:  mov    0x8(%ebp),%eax
086532c0 +0x0050:  mov    %eax,(%esp)
086532c3 +0x0053:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086532c8 +0x0058:  mov    %eax,%ebx
086532ca +0x005a:  movl   $0x5,0xc(%esp)
086532d2 +0x0062:  movl   $0x1d99,0x8(%esp)
086532da +0x006a:  movl   $&_ZZN5CUser10UpdateDataEvE19__PRETTY_FUNCTION__,0x4(%esp)
086532e2 +0x0072:  lea    -0x98(%ebp),%eax
086532e8 +0x0078:  mov    %eax,(%esp)
086532eb +0x007b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086532f0 +0x0080:  mov    %ebx,0x8(%esp)
086532f4 +0x0084:  movl   $"CUser::UpdateData() character %s - m_selected is null",0x4(%esp)
086532fc +0x008c:  lea    -0x98(%ebp),%eax
08653302 +0x0092:  mov    %eax,(%esp)
08653305 +0x0095:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865330a +0x009a:  jmp    0865458e <+0x131e>
0865330f +0x009f:  mov    0x8(%ebp),%eax
08653312 +0x00a2:  mov    %eax,(%esp)
08653315 +0x00a5:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
0865331a +0x00aa:  test   %al,%al
0865331c +0x00ac:  je     08653391 <+0x121>
0865331e +0x00ae:  mov    0x8(%ebp),%eax
08653321 +0x00b1:  mov    %eax,(%esp)
08653324 +0x00b4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653329 +0x00b9:  mov    %eax,%esi
0865332b +0x00bb:  mov    0x8(%ebp),%eax
0865332e +0x00be:  mov    %eax,(%esp)
08653331 +0x00c1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08653336 +0x00c6:  movl   $0x0,0x4(%esp)
0865333e +0x00ce:  mov    %eax,(%esp)
08653341 +0x00d1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08653346 +0x00d6:  mov    %eax,%ebx
08653348 +0x00d8:  movl   $0x5,0xc(%esp)
08653350 +0x00e0:  movl   $0x1da1,0x8(%esp)
08653358 +0x00e8:  movl   $&_ZZN5CUser10UpdateDataEvE19__PRETTY_FUNCTION__,0x4(%esp)
08653360 +0x00f0:  lea    -0x88(%ebp),%eax
08653366 +0x00f6:  mov    %eax,(%esp)
08653369 +0x00f9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865336e +0x00fe:  mov    %esi,0xc(%esp)
08653372 +0x0102:  mov    %ebx,0x8(%esp)
08653376 +0x0106:  movl   $"Can not save character until loading done(m_id: %s, charac_no: %d",0x4(%esp)
0865337e +0x010e:  lea    -0x88(%ebp),%eax
08653384 +0x0114:  mov    %eax,(%esp)
08653387 +0x0117:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865338c +0x011c:  jmp    0865458e <+0x131e>
08653391 +0x0121:  mov    0x8(%ebp),%eax
08653394 +0x0124:  mov    %eax,(%esp)
08653397 +0x0127:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865339c +0x012c:  mov    %eax,(%esp)
0865339f +0x012f:  call   08509610 <_ZNK10CInventory10checkToFixEv>  ; CInventory::checkToFix() const
086533a4 +0x0134:  test   %al,%al
086533a6 +0x0136:  je     086533bb <+0x14b>
086533a8 +0x0138:  mov    0x8(%ebp),%eax
086533ab +0x013b:  mov    %eax,(%esp)
086533ae +0x013e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086533b3 +0x0143:  mov    %eax,(%esp)
086533b6 +0x0146:  call   08509738 <_ZN10CInventory9CheckNFixEv>  ; CInventory::CheckNFix()
086533bb +0x014b:  mov    0x8(%ebp),%eax
086533be +0x014e:  mov    %eax,(%esp)
086533c1 +0x0151:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086533c6 +0x0156:  test   %eax,%eax
086533c8 +0x0158:  setne  %al
086533cb +0x015b:  test   %al,%al
086533cd +0x015d:  je     0865348f <+0x21f>
086533d3 +0x0163:  mov    0x8(%ebp),%eax
086533d6 +0x0166:  mov    %eax,(%esp)
086533d9 +0x0169:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086533de +0x016e:  test   %eax,%eax
086533e0 +0x0170:  setne  %al
086533e3 +0x0173:  test   %al,%al
086533e5 +0x0175:  je     0865348f <+0x21f>
086533eb +0x017b:  mov    0x8(%ebp),%eax
086533ee +0x017e:  mov    %eax,(%esp)
086533f1 +0x0181:  call   0822f612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cbc
086533f6 +0x0186:  mov    %eax,-0x68(%ebp)
086533f9 +0x0189:  mov    0x8(%ebp),%eax
086533fc +0x018c:  mov    %eax,(%esp)
086533ff +0x018f:  call   0822f652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cfc
08653404 +0x0194:  mov    %eax,-0x64(%ebp)
08653407 +0x0197:  mov    0x8(%ebp),%eax
0865340a +0x019a:  mov    %eax,(%esp)
0865340d +0x019d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653412 +0x01a2:  mov    %eax,%ebx
08653414 +0x01a4:  mov    0x8(%ebp),%eax
08653417 +0x01a7:  mov    %eax,(%esp)
0865341a +0x01aa:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
0865341f +0x01af:  movzbl %al,%esi
08653422 +0x01b2:  mov    0x8(%ebp),%eax
08653425 +0x01b5:  mov    %eax,(%esp)
08653428 +0x01b8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0865342d +0x01bd:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08653433 +0x01c3:  mov    %eax,0x4(%esp)
08653437 +0x01c7:  mov    %edx,(%esp)
0865343a +0x01ca:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0865343f +0x01cf:  mov    -0x64(%ebp),%edx
08653442 +0x01d2:  mov    %edx,0x10(%esp)
08653446 +0x01d6:  mov    -0x68(%ebp),%edx
08653449 +0x01d9:  mov    %edx,0xc(%esp)
0865344d +0x01dd:  mov    %ebx,0x8(%esp)
08653451 +0x01e1:  mov    %esi,0x4(%esp)
08653455 +0x01e5:  mov    %eax,(%esp)
08653458 +0x01e8:  call   08470fb4 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii>  ; CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int)
0865345d +0x01ed:  cmpl   $0x0,-0x68(%ebp)
08653461 +0x01f1:  jle    08653476 <+0x206>
08653463 +0x01f3:  mov    0x8(%ebp),%eax
08653466 +0x01f6:  movl   $0x0,0x4(%esp)
0865346e +0x01fe:  mov    %eax,(%esp)
08653471 +0x0201:  call   0822f634 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4cde>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4cde
08653476 +0x0206:  cmpl   $0x0,-0x64(%ebp)
0865347a +0x020a:  jle    0865348f <+0x21f>
0865347c +0x020c:  mov    0x8(%ebp),%eax
0865347f +0x020f:  movl   $0x0,0x4(%esp)
08653487 +0x0217:  mov    %eax,(%esp)
0865348a +0x021a:  call   0822f674 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d1e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d1e
0865348f +0x021f:  mov    0x8(%ebp),%eax
08653492 +0x0222:  mov    %eax,(%esp)
08653495 +0x0225:  call   08650aa2 <_ZN5CUser15_SaveCharacDataEv>  ; CUser::_SaveCharacData()
0865349a +0x022a:  mov    0x8(%ebp),%eax
0865349d +0x022d:  mov    %eax,(%esp)
086534a0 +0x0230:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
086534a5 +0x0235:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
086534aa +0x023a:  movl   $0x0,0x8(%esp)
086534b2 +0x0242:  mov    0x8(%ebp),%edx
086534b5 +0x0245:  mov    %edx,0x4(%esp)
086534b9 +0x0249:  mov    %eax,(%esp)
086534bc +0x024c:  call   08166d38 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb>  ; HeroMissionEvent::saveEventData(CUser*, bool)
086534c1 +0x0251:  mov    0x8(%ebp),%eax
086534c4 +0x0254:  mov    %eax,(%esp)
086534c7 +0x0257:  call   0863bdc4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2d5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2d5
086534cc +0x025c:  test   %al,%al
086534ce +0x025e:  jne    086534df <+0x26f>
086534d0 +0x0260:  mov    0x8(%ebp),%eax
086534d3 +0x0263:  mov    %eax,(%esp)
086534d6 +0x0266:  call   086962ea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b3f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b3f
086534db +0x026b:  test   %al,%al
086534dd +0x026d:  je     086534e6 <+0x276>
086534df +0x026f:  mov    $0x1,%eax
086534e4 +0x0274:  jmp    086534eb <+0x27b>
086534e6 +0x0276:  mov    $0x0,%eax
086534eb +0x027b:  test   %al,%al
086534ed +0x027d:  je     0865352b <+0x2bb>
086534ef +0x027f:  mov    0x8(%ebp),%eax
086534f2 +0x0282:  mov    0x8cfc4(%eax),%eax
086534f8 +0x0288:  cmp    $0x5,%eax
086534fb +0x028b:  jne    0865350a <+0x29a>
086534fd +0x028d:  mov    0x8(%ebp),%eax
08653500 +0x0290:  mov    %eax,(%esp)
08653503 +0x0293:  call   086501c8 <_ZN5CUser17SaveInventoryOnlyEv>  ; CUser::SaveInventoryOnly()
08653508 +0x0298:  jmp    08653515 <+0x2a5>
0865350a +0x029a:  mov    0x8(%ebp),%eax
0865350d +0x029d:  mov    %eax,(%esp)
08653510 +0x02a0:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
08653515 +0x02a5:  mov    0x8(%ebp),%eax
08653518 +0x02a8:  mov    %eax,(%esp)
0865351b +0x02ab:  call   084ebf18 <_GLOBAL__I__Z7getUserj+0x2eca>  ; global constructors keyed to getUser(unsigned int)+0x2eca
08653520 +0x02b0:  mov    0x8(%ebp),%eax
08653523 +0x02b3:  mov    %eax,(%esp)
08653526 +0x02b6:  call   084ebf48 <_GLOBAL__I__Z7getUserj+0x2efa>  ; global constructors keyed to getUser(unsigned int)+0x2efa
0865352b +0x02bb:  mov    0x8(%ebp),%eax
0865352e +0x02be:  mov    %eax,(%esp)
08653531 +0x02c1:  call   085566ae <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser>  ; WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser*)
08653536 +0x02c6:  mov    0x8(%ebp),%eax
08653539 +0x02c9:  mov    %eax,(%esp)
0865353c +0x02cc:  call   086962ae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b03>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b03
08653541 +0x02d1:  test   %al,%al
08653543 +0x02d3:  je     086537ad <+0x53d>
08653549 +0x02d9:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865354e +0x02de:  movl   $0x1ded,0x8(%esp)
08653556 +0x02e6:  movl   $"user.cpp",0x4(%esp)
0865355e +0x02ee:  mov    %eax,(%esp)
08653561 +0x02f1:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08653566 +0x02f6:  movl   $0x1,0x8(%esp)
0865356e +0x02fe:  mov    %eax,0x4(%esp)
08653572 +0x0302:  lea    -0xa0(%ebp),%eax
08653578 +0x0308:  mov    %eax,(%esp)
0865357b +0x030b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08653580 +0x0310:  lea    -0xa0(%ebp),%eax
08653586 +0x0316:  mov    %eax,(%esp)
08653589 +0x0319:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865358e +0x031e:  movl   $0x24,0x4(%esp)
08653596 +0x0326:  mov    %eax,(%esp)
08653599 +0x0329:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865359e +0x032e:  mov    0x8(%ebp),%eax
086535a1 +0x0331:  mov    %eax,(%esp)
086535a4 +0x0334:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086535a9 +0x0339:  mov    %eax,%ebx
086535ab +0x033b:  lea    -0xa0(%ebp),%eax
086535b1 +0x0341:  mov    %eax,(%esp)
086535b4 +0x0344:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086535b9 +0x0349:  mov    %ebx,0x4(%esp)
086535bd +0x034d:  mov    %eax,(%esp)
086535c0 +0x0350:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086535c5 +0x0355:  lea    -0xa0(%ebp),%eax
086535cb +0x035b:  mov    %eax,(%esp)
086535ce +0x035e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086535d3 +0x0363:  mov    %eax,(%esp)
086535d6 +0x0366:  call   08236d46 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3f0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3f0
086535db +0x036b:  mov    %eax,-0x60(%ebp)
086535de +0x036e:  movl   $0x414,0x8(%esp)
086535e6 +0x0376:  movl   $0x0,0x4(%esp)
086535ee +0x037e:  mov    -0x60(%ebp),%eax
086535f1 +0x0381:  mov    %eax,(%esp)
086535f4 +0x0384:  call   0807dcc0 <_init+0x5b8>
086535f9 +0x0389:  mov    0x8(%ebp),%eax
086535fc +0x038c:  mov    %eax,(%esp)
086535ff +0x038f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653604 +0x0394:  mov    -0x60(%ebp),%edx
08653607 +0x0397:  mov    %eax,(%edx)
08653609 +0x0399:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865360e +0x039e:  movzbl 0xa850(%eax),%edx
08653615 +0x03a5:  mov    -0x60(%ebp),%eax
08653618 +0x03a8:  mov    %dl,0x411(%eax)
0865361e +0x03ae:  mov    -0x60(%ebp),%eax
08653621 +0x03b1:  add    $0x344,%eax
08653626 +0x03b6:  mov    %eax,-0xd0(%ebp)
0865362c +0x03bc:  mov    -0x60(%ebp),%eax
0865362f +0x03bf:  add    $0x340,%eax
08653634 +0x03c4:  mov    %eax,%edi
08653636 +0x03c6:  mov    -0x60(%ebp),%eax
08653639 +0x03c9:  add    $0x1a4,%eax
0865363e +0x03ce:  mov    %eax,%esi
08653640 +0x03d0:  mov    -0x60(%ebp),%eax
08653643 +0x03d3:  add    $0x8,%eax
08653646 +0x03d6:  mov    %eax,%ebx
08653648 +0x03d8:  mov    0x8(%ebp),%eax
0865364b +0x03db:  mov    %eax,(%esp)
0865364e +0x03de:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
08653653 +0x03e3:  mov    -0xd0(%ebp),%edx
08653659 +0x03e9:  mov    %edx,0x10(%esp)
0865365d +0x03ed:  mov    %edi,0xc(%esp)
08653661 +0x03f1:  mov    %esi,0x8(%esp)
08653665 +0x03f5:  mov    %ebx,0x4(%esp)
08653669 +0x03f9:  mov    %eax,(%esp)
0865366c +0x03fc:  call   08694ec0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1715>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1715
08653671 +0x0401:  mov    0x8(%ebp),%eax
08653674 +0x0404:  mov    %eax,(%esp)
08653677 +0x0407:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865367c +0x040c:  movl   $0x0,0x4(%esp)
08653684 +0x0414:  mov    %eax,(%esp)
08653687 +0x0417:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
0865368c +0x041c:  mov    %eax,-0x5c(%ebp)
0865368f +0x041f:  mov    0x8(%ebp),%eax
08653692 +0x0422:  mov    %eax,(%esp)
08653695 +0x0425:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0865369a +0x042a:  movl   $0x1,0x4(%esp)
086536a2 +0x0432:  mov    %eax,(%esp)
086536a5 +0x0435:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
086536aa +0x043a:  mov    %eax,-0x58(%ebp)
086536ad +0x043d:  cmpl   $0x0,-0x5c(%ebp)
086536b1 +0x0441:  je     086536f6 <+0x486>
086536b3 +0x0443:  cmpl   $0x0,-0x58(%ebp)
086536b7 +0x0447:  je     086536f6 <+0x486>
086536b9 +0x0449:  mov    -0x60(%ebp),%eax
086536bc +0x044c:  lea    0xc(%eax),%edx
086536bf +0x044f:  movl   $0x198,0x8(%esp)
086536c7 +0x0457:  mov    -0x5c(%ebp),%eax
086536ca +0x045a:  mov    %eax,0x4(%esp)
086536ce +0x045e:  mov    %edx,(%esp)
086536d1 +0x0461:  call   0807d8a0 <_init+0x198>
086536d6 +0x0466:  mov    -0x60(%ebp),%eax
086536d9 +0x0469:  lea    0x1a8(%eax),%edx
086536df +0x046f:  movl   $0x198,0x8(%esp)
086536e7 +0x0477:  mov    -0x58(%ebp),%eax
086536ea +0x047a:  mov    %eax,0x4(%esp)
086536ee +0x047e:  mov    %edx,(%esp)
086536f1 +0x0481:  call   0807d8a0 <_init+0x198>
086536f6 +0x0486:  mov    0x8(%ebp),%eax
086536f9 +0x0489:  mov    %eax,(%esp)
086536fc +0x048c:  call   0865459a <_ZN5CUser21get_skill_command_bufEv>  ; CUser::get_skill_command_buf()
08653701 +0x0491:  mov    %eax,-0x54(%ebp)
08653704 +0x0494:  cmpl   $0x0,-0x54(%ebp)
08653708 +0x0498:  je     0865372a <+0x4ba>
0865370a +0x049a:  mov    -0x60(%ebp),%eax
0865370d +0x049d:  lea    0x348(%eax),%edx
08653713 +0x04a3:  movl   $0xc8,0x8(%esp)
0865371b +0x04ab:  mov    -0x54(%ebp),%eax
0865371e +0x04ae:  mov    %eax,0x4(%esp)
08653722 +0x04b2:  mov    %edx,(%esp)
08653725 +0x04b5:  call   0807d8a0 <_init+0x198>
0865372a +0x04ba:  mov    0x8(%ebp),%eax
0865372d +0x04bd:  add    $0x703db,%eax
08653732 +0x04c2:  movl   $0xc8,0x8(%esp)
0865373a +0x04ca:  movl   $0x0,0x4(%esp)
08653742 +0x04d2:  mov    %eax,(%esp)
08653745 +0x04d5:  call   0807dcc0 <_init+0x5b8>
0865374a +0x04da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0865374f +0x04df:  lea    -0xa0(%ebp),%edx
08653755 +0x04e5:  mov    %edx,0x8(%esp)
08653759 +0x04e9:  movl   $0x2,0x4(%esp)
08653761 +0x04f1:  mov    %eax,(%esp)
08653764 +0x04f4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08653769 +0x04f9:  mov    0x8(%ebp),%eax
0865376c +0x04fc:  mov    %eax,(%esp)
0865376f +0x04ff:  call   08692396 <_ZN5CUser16updateComboSkillEv>  ; CUser::updateComboSkill()
08653774 +0x0504:  mov    0x8(%ebp),%eax
08653777 +0x0507:  mov    %eax,(%esp)
0865377a +0x050a:  call   084ebf24 <_GLOBAL__I__Z7getUserj+0x2ed6>  ; global constructors keyed to getUser(unsigned int)+0x2ed6
0865377f +0x050f:  lea    -0xa0(%ebp),%eax
08653785 +0x0515:  mov    %eax,(%esp)
08653788 +0x0518:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0865378d +0x051d:  jmp    086537ad <+0x53d>
0865378f +0x051f:  mov    %edx,%ebx
08653791 +0x0521:  mov    %eax,%esi
08653793 +0x0523:  lea    -0xa0(%ebp),%eax
08653799 +0x0529:  mov    %eax,(%esp)
0865379c +0x052c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086537a1 +0x0531:  mov    %esi,%eax
086537a3 +0x0533:  mov    %ebx,%edx
086537a5 +0x0535:  mov    %eax,(%esp)
086537a8 +0x0538:  call   08ae3750 <_Unwind_Resume>
086537ad +0x053d:  mov    0x8(%ebp),%eax
086537b0 +0x0540:  mov    %eax,(%esp)
086537b3 +0x0543:  call   086962ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b0f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b0f
086537b8 +0x0548:  test   %al,%al
086537ba +0x054a:  je     086538f6 <+0x686>
086537c0 +0x0550:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086537c5 +0x0555:  movl   $0x1e2c,0x8(%esp)
086537cd +0x055d:  movl   $"user.cpp",0x4(%esp)
086537d5 +0x0565:  mov    %eax,(%esp)
086537d8 +0x0568:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086537dd +0x056d:  movl   $0x1,0x8(%esp)
086537e5 +0x0575:  mov    %eax,0x4(%esp)
086537e9 +0x0579:  lea    -0xa8(%ebp),%eax
086537ef +0x057f:  mov    %eax,(%esp)
086537f2 +0x0582:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086537f7 +0x0587:  lea    -0xa8(%ebp),%eax
086537fd +0x058d:  mov    %eax,(%esp)
08653800 +0x0590:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653805 +0x0595:  movl   $0x25,0x4(%esp)
0865380d +0x059d:  mov    %eax,(%esp)
08653810 +0x05a0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08653815 +0x05a5:  mov    0x8(%ebp),%eax
08653818 +0x05a8:  mov    %eax,(%esp)
0865381b +0x05ab:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08653820 +0x05b0:  mov    %eax,%ebx
08653822 +0x05b2:  lea    -0xa8(%ebp),%eax
08653828 +0x05b8:  mov    %eax,(%esp)
0865382b +0x05bb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653830 +0x05c0:  mov    %ebx,0x4(%esp)
08653834 +0x05c4:  mov    %eax,(%esp)
08653837 +0x05c7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865383c +0x05cc:  lea    -0xa8(%ebp),%eax
08653842 +0x05d2:  mov    %eax,(%esp)
08653845 +0x05d5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0865384a +0x05da:  mov    %eax,(%esp)
0865384d +0x05dd:  call   0869aa76 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x72cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x72cb
08653852 +0x05e2:  mov    %eax,-0x50(%ebp)
08653855 +0x05e5:  movl   $0x88,0x8(%esp)
0865385d +0x05ed:  movl   $0x0,0x4(%esp)
08653865 +0x05f5:  mov    -0x50(%ebp),%eax
08653868 +0x05f8:  mov    %eax,(%esp)
0865386b +0x05fb:  call   0807dcc0 <_init+0x5b8>
08653870 +0x0600:  mov    0x8(%ebp),%eax
08653873 +0x0603:  mov    %eax,(%esp)
08653876 +0x0606:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865387b +0x060b:  mov    -0x50(%ebp),%edx
0865387e +0x060e:  mov    %eax,0x84(%edx)
08653884 +0x0614:  mov    0x8(%ebp),%eax
08653887 +0x0617:  mov    %eax,(%esp)
0865388a +0x061a:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865388f +0x061f:  mov    -0x50(%ebp),%edx
08653892 +0x0622:  mov    %eax,0x4(%esp)
08653896 +0x0626:  mov    %edx,(%esp)
08653899 +0x0629:  call   085d58e6 <_ZN13PvpResultType3SetERKS_>  ; PvpResultType::Set(PvpResultType const&)
0865389e +0x062e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086538a3 +0x0633:  lea    -0xa8(%ebp),%edx
086538a9 +0x0639:  mov    %edx,0x8(%esp)
086538ad +0x063d:  movl   $0x2,0x4(%esp)
086538b5 +0x0645:  mov    %eax,(%esp)
086538b8 +0x0648:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086538bd +0x064d:  mov    0x8(%ebp),%eax
086538c0 +0x0650:  mov    %eax,(%esp)
086538c3 +0x0653:  call   084ebf30 <_GLOBAL__I__Z7getUserj+0x2ee2>  ; global constructors keyed to getUser(unsigned int)+0x2ee2
086538c8 +0x0658:  lea    -0xa8(%ebp),%eax
086538ce +0x065e:  mov    %eax,(%esp)
086538d1 +0x0661:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086538d6 +0x0666:  jmp    086538f6 <+0x686>
086538d8 +0x0668:  mov    %edx,%ebx
086538da +0x066a:  mov    %eax,%esi
086538dc +0x066c:  lea    -0xa8(%ebp),%eax
086538e2 +0x0672:  mov    %eax,(%esp)
086538e5 +0x0675:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086538ea +0x067a:  mov    %esi,%eax
086538ec +0x067c:  mov    %ebx,%edx
086538ee +0x067e:  mov    %eax,(%esp)
086538f1 +0x0681:  call   08ae3750 <_Unwind_Resume>
086538f6 +0x0686:  mov    0x8(%ebp),%eax
086538f9 +0x0689:  mov    %eax,(%esp)
086538fc +0x068c:  call   086962d2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b27>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b27
08653901 +0x0691:  test   %al,%al
08653903 +0x0693:  je     08653ac6 <+0x856>
08653909 +0x0699:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865390e +0x069e:  movl   $0x1e4e,0x8(%esp)
08653916 +0x06a6:  movl   $"user.cpp",0x4(%esp)
0865391e +0x06ae:  mov    %eax,(%esp)
08653921 +0x06b1:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08653926 +0x06b6:  movl   $0x1,0x8(%esp)
0865392e +0x06be:  mov    %eax,0x4(%esp)
08653932 +0x06c2:  lea    -0xb0(%ebp),%eax
08653938 +0x06c8:  mov    %eax,(%esp)
0865393b +0x06cb:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08653940 +0x06d0:  lea    -0xb0(%ebp),%eax
08653946 +0x06d6:  mov    %eax,(%esp)
08653949 +0x06d9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865394e +0x06de:  movl   $0x27,0x4(%esp)
08653956 +0x06e6:  mov    %eax,(%esp)
08653959 +0x06e9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865395e +0x06ee:  mov    0x8(%ebp),%eax
08653961 +0x06f1:  mov    %eax,(%esp)
08653964 +0x06f4:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08653969 +0x06f9:  mov    %eax,%ebx
0865396b +0x06fb:  lea    -0xb0(%ebp),%eax
08653971 +0x0701:  mov    %eax,(%esp)
08653974 +0x0704:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653979 +0x0709:  mov    %ebx,0x4(%esp)
0865397d +0x070d:  mov    %eax,(%esp)
08653980 +0x0710:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08653985 +0x0715:  lea    -0xb0(%ebp),%eax
0865398b +0x071b:  mov    %eax,(%esp)
0865398e +0x071e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08653993 +0x0723:  mov    %eax,(%esp)
08653996 +0x0726:  call   0869aa8c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x72e1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x72e1
0865399b +0x072b:  mov    %eax,-0x4c(%ebp)
0865399e +0x072e:  movl   $0x180c,0x8(%esp)
086539a6 +0x0736:  movl   $0x0,0x4(%esp)
086539ae +0x073e:  mov    -0x4c(%ebp),%eax
086539b1 +0x0741:  mov    %eax,(%esp)
086539b4 +0x0744:  call   0807dcc0 <_init+0x5b8>
086539b9 +0x0749:  mov    0x8(%ebp),%eax
086539bc +0x074c:  mov    %eax,(%esp)
086539bf +0x074f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086539c4 +0x0754:  mov    -0x4c(%ebp),%edx
086539c7 +0x0757:  mov    %eax,(%edx)
086539c9 +0x0759:  mov    0x8(%ebp),%eax
086539cc +0x075c:  mov    %eax,(%esp)
086539cf +0x075f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086539d4 +0x0764:  mov    -0x4c(%ebp),%edx
086539d7 +0x0767:  mov    %eax,0x4(%edx)
086539da +0x076a:  mov    -0x4c(%ebp),%eax
086539dd +0x076d:  lea    0xc(%eax),%ebx
086539e0 +0x0770:  mov    0x8(%ebp),%eax
086539e3 +0x0773:  mov    %eax,(%esp)
086539e6 +0x0776:  call   085bfab2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1010>  ; global constructors keyed to CParty::cMember::cMember()+0x1010
086539eb +0x077b:  movl   $0x1800,0x8(%esp)
086539f3 +0x0783:  mov    %ebx,0x4(%esp)
086539f7 +0x0787:  mov    %eax,(%esp)
086539fa +0x078a:  call   0848441c <_ZNK8WongWork13CDungeonClear8toStringEPcj>  ; WongWork::CDungeonClear::toString(char*, unsigned int) const
086539ff +0x078f:  shr    $0x1f,%eax
08653a02 +0x0792:  test   %al,%al
08653a04 +0x0794:  je     08653a6e <+0x7fe>
08653a06 +0x0796:  mov    0x8(%ebp),%eax
08653a09 +0x0799:  mov    %eax,(%esp)
08653a0c +0x079c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653a11 +0x07a1:  mov    %eax,%esi
08653a13 +0x07a3:  mov    0x8(%ebp),%eax
08653a16 +0x07a6:  mov    %eax,(%esp)
08653a19 +0x07a9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08653a1e +0x07ae:  movl   $0x0,0x4(%esp)
08653a26 +0x07b6:  mov    %eax,(%esp)
08653a29 +0x07b9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08653a2e +0x07be:  mov    %eax,%ebx
08653a30 +0x07c0:  movl   $0x5,0xc(%esp)
08653a38 +0x07c8:  movl   $0x1e5e,0x8(%esp)
08653a40 +0x07d0:  movl   $&_ZZN5CUser10UpdateDataEvE19__PRETTY_FUNCTION__,0x4(%esp)
08653a48 +0x07d8:  lea    -0x78(%ebp),%eax
08653a4b +0x07db:  mov    %eax,(%esp)
08653a4e +0x07de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08653a53 +0x07e3:  mov    %esi,0xc(%esp)
08653a57 +0x07e7:  mov    %ebx,0x8(%esp)
08653a5b +0x07eb:  movl   $"Quest buffer overflow (m_id: %s, charac_no: %d",0x4(%esp)
08653a63 +0x07f3:  lea    -0x78(%ebp),%eax
08653a66 +0x07f6:  mov    %eax,(%esp)
08653a69 +0x07f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08653a6e +0x07fe:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08653a73 +0x0803:  lea    -0xb0(%ebp),%edx
08653a79 +0x0809:  mov    %edx,0x8(%esp)
08653a7d +0x080d:  movl   $0x2,0x4(%esp)
08653a85 +0x0815:  mov    %eax,(%esp)
08653a88 +0x0818:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08653a8d +0x081d:  mov    0x8(%ebp),%eax
08653a90 +0x0820:  mov    %eax,(%esp)
08653a93 +0x0823:  call   084ebf3c <_GLOBAL__I__Z7getUserj+0x2eee>  ; global constructors keyed to getUser(unsigned int)+0x2eee
08653a98 +0x0828:  lea    -0xb0(%ebp),%eax
08653a9e +0x082e:  mov    %eax,(%esp)
08653aa1 +0x0831:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08653aa6 +0x0836:  jmp    08653ac6 <+0x856>
08653aa8 +0x0838:  mov    %edx,%ebx
08653aaa +0x083a:  mov    %eax,%esi
08653aac +0x083c:  lea    -0xb0(%ebp),%eax
08653ab2 +0x0842:  mov    %eax,(%esp)
08653ab5 +0x0845:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08653aba +0x084a:  mov    %esi,%eax
08653abc +0x084c:  mov    %ebx,%edx
08653abe +0x084e:  mov    %eax,(%esp)
08653ac1 +0x0851:  call   08ae3750 <_Unwind_Resume>
08653ac6 +0x0856:  mov    0x8(%ebp),%eax
08653ac9 +0x0859:  mov    %eax,(%esp)
08653acc +0x085c:  call   086962de <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b33>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b33
08653ad1 +0x0861:  test   %al,%al
08653ad3 +0x0863:  je     08653ae0 <+0x870>
08653ad5 +0x0865:  mov    0x8(%ebp),%eax
08653ad8 +0x0868:  mov    %eax,(%esp)
08653adb +0x086b:  call   08696266 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2abb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2abb
08653ae0 +0x0870:  mov    0x8(%ebp),%eax
08653ae3 +0x0873:  mov    %eax,(%esp)
08653ae6 +0x0876:  call   086962c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b1b
08653aeb +0x087b:  test   %al,%al
08653aed +0x087d:  je     08653d1e <+0xaae>
08653af3 +0x0883:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08653af8 +0x0888:  movl   $0x1e8c,0x8(%esp)
08653b00 +0x0890:  movl   $"user.cpp",0x4(%esp)
08653b08 +0x0898:  mov    %eax,(%esp)
08653b0b +0x089b:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
08653b10 +0x08a0:  movl   $0x1,0x8(%esp)
08653b18 +0x08a8:  mov    %eax,0x4(%esp)
08653b1c +0x08ac:  lea    -0xb8(%ebp),%eax
08653b22 +0x08b2:  mov    %eax,(%esp)
08653b25 +0x08b5:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08653b2a +0x08ba:  lea    -0xb8(%ebp),%eax
08653b30 +0x08c0:  mov    %eax,(%esp)
08653b33 +0x08c3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653b38 +0x08c8:  movl   $0x29,0x4(%esp)
08653b40 +0x08d0:  mov    %eax,(%esp)
08653b43 +0x08d3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08653b48 +0x08d8:  mov    0x8(%ebp),%eax
08653b4b +0x08db:  mov    %eax,(%esp)
08653b4e +0x08de:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08653b53 +0x08e3:  mov    %eax,%ebx
08653b55 +0x08e5:  lea    -0xb8(%ebp),%eax
08653b5b +0x08eb:  mov    %eax,(%esp)
08653b5e +0x08ee:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653b63 +0x08f3:  mov    %ebx,0x4(%esp)
08653b67 +0x08f7:  mov    %eax,(%esp)
08653b6a +0x08fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08653b6f +0x08ff:  lea    -0xb8(%ebp),%eax
08653b75 +0x0905:  mov    %eax,(%esp)
08653b78 +0x0908:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08653b7d +0x090d:  mov    %eax,(%esp)
08653b80 +0x0910:  call   0869aaa2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x72f7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x72f7
08653b85 +0x0915:  mov    %eax,-0x48(%ebp)
08653b88 +0x0918:  movl   $0x7601,0x8(%esp)
08653b90 +0x0920:  movl   $0x0,0x4(%esp)
08653b98 +0x0928:  mov    -0x48(%ebp),%eax
08653b9b +0x092b:  mov    %eax,(%esp)
08653b9e +0x092e:  call   0807dcc0 <_init+0x5b8>
08653ba3 +0x0933:  mov    0x8(%ebp),%eax
08653ba6 +0x0936:  mov    %eax,(%esp)
08653ba9 +0x0939:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08653bae +0x093e:  add    $0x4,%eax
08653bb1 +0x0941:  mov    %eax,(%esp)
08653bb4 +0x0944:  call   0808bb3e <_ZNK8WongWork11CQuestClear13checkSaveFlagEv>  ; WongWork::CQuestClear::checkSaveFlag() const
08653bb9 +0x0949:  test   %al,%al
08653bbb +0x094b:  je     08653bfa <+0x98a>
08653bbd +0x094d:  mov    0x8(%ebp),%eax
08653bc0 +0x0950:  mov    %eax,(%esp)
08653bc3 +0x0953:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08653bc8 +0x0958:  add    $0x4,%eax
08653bcb +0x095b:  mov    %eax,(%esp)
08653bce +0x095e:  call   0808bb80 <_ZNK8WongWork11CQuestClear15getClearedQuestEv>  ; WongWork::CQuestClear::getClearedQuest() const
08653bd3 +0x0963:  mov    -0x48(%ebp),%edx
08653bd6 +0x0966:  add    $0xa4,%edx
08653bdc +0x096c:  movl   $0x7530,0x8(%esp)
08653be4 +0x0974:  mov    %eax,0x4(%esp)
08653be8 +0x0978:  mov    %edx,(%esp)
08653beb +0x097b:  call   0807d8a0 <_init+0x198>
08653bf0 +0x0980:  mov    -0x48(%ebp),%eax
08653bf3 +0x0983:  movb   $0x1,0x75d4(%eax)
08653bfa +0x098a:  mov    0x8(%ebp),%eax
08653bfd +0x098d:  mov    %eax,(%esp)
08653c00 +0x0990:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653c05 +0x0995:  mov    -0x48(%ebp),%edx
08653c08 +0x0998:  mov    %eax,(%edx)
08653c0a +0x099a:  movl   $0x0,-0x44(%ebp)
08653c11 +0x09a1:  jmp    08653c5e <+0x9ee>
08653c13 +0x09a3:  mov    -0x44(%ebp),%ebx
08653c16 +0x09a6:  mov    0x8(%ebp),%eax
08653c19 +0x09a9:  mov    %eax,(%esp)
08653c1c +0x09ac:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08653c21 +0x09b1:  mov    -0x44(%ebp),%edx
08653c24 +0x09b4:  add    $0x1d4c,%edx
08653c2a +0x09ba:  mov    0x8(%eax,%edx,4),%edx
08653c2e +0x09be:  mov    -0x48(%ebp),%eax
08653c31 +0x09c1:  mov    %edx,0x4(%eax,%ebx,4)
08653c35 +0x09c5:  mov    -0x44(%ebp),%ebx
08653c38 +0x09c8:  mov    0x8(%ebp),%eax
08653c3b +0x09cb:  mov    %eax,(%esp)
08653c3e +0x09ce:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08653c43 +0x09d3:  mov    -0x44(%ebp),%edx
08653c46 +0x09d6:  add    $0x1d60,%edx
08653c4c +0x09dc:  mov    0x8(%eax,%edx,4),%edx
08653c50 +0x09e0:  mov    -0x48(%ebp),%eax
08653c53 +0x09e3:  lea    0x14(%ebx),%ecx
08653c56 +0x09e6:  mov    %edx,0x4(%eax,%ecx,4)
08653c5a +0x09ea:  addl   $0x1,-0x44(%ebp)
08653c5e +0x09ee:  cmpl   $0x13,-0x44(%ebp)
08653c62 +0x09f2:  setle  %al
08653c65 +0x09f5:  test   %al,%al
08653c67 +0x09f7:  jne    08653c13 <+0x9a3>
08653c69 +0x09f9:  mov    0x8(%ebp),%eax
08653c6c +0x09fc:  mov    %eax,(%esp)
08653c6f +0x09ff:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08653c74 +0x0a04:  mov    0x75f0(%eax),%edx
08653c7a +0x0a0a:  mov    -0x48(%ebp),%eax
08653c7d +0x0a0d:  mov    %edx,0x75d5(%eax)
08653c83 +0x0a13:  mov    0x8(%ebp),%eax
08653c86 +0x0a16:  mov    %eax,(%esp)
08653c89 +0x0a19:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08653c8e +0x0a1e:  add    $0x75f4,%eax
08653c93 +0x0a23:  mov    -0x48(%ebp),%edx
08653c96 +0x0a26:  add    $0x75d9,%edx
08653c9c +0x0a2c:  movl   $0x28,0x8(%esp)
08653ca4 +0x0a34:  mov    %eax,0x4(%esp)
08653ca8 +0x0a38:  mov    %edx,(%esp)
08653cab +0x0a3b:  call   0807d8a0 <_init+0x198>
08653cb0 +0x0a40:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08653cb5 +0x0a45:  lea    -0xb8(%ebp),%edx
08653cbb +0x0a4b:  mov    %edx,0x8(%esp)
08653cbf +0x0a4f:  movl   $0x2,0x4(%esp)
08653cc7 +0x0a57:  mov    %eax,(%esp)
08653cca +0x0a5a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08653ccf +0x0a5f:  mov    0x8(%ebp),%eax
08653cd2 +0x0a62:  mov    %eax,(%esp)
08653cd5 +0x0a65:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08653cda +0x0a6a:  add    $0x4,%eax
08653cdd +0x0a6d:  mov    %eax,(%esp)
08653ce0 +0x0a70:  call   0808bb4e <_ZN8WongWork11CQuestClear14resetSaveFlagsEv>  ; WongWork::CQuestClear::resetSaveFlags()
08653ce5 +0x0a75:  mov    0x8(%ebp),%eax
08653ce8 +0x0a78:  mov    %eax,(%esp)
08653ceb +0x0a7b:  call   0869625a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2aaf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2aaf
08653cf0 +0x0a80:  lea    -0xb8(%ebp),%eax
08653cf6 +0x0a86:  mov    %eax,(%esp)
08653cf9 +0x0a89:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08653cfe +0x0a8e:  jmp    08653d1e <+0xaae>
08653d00 +0x0a90:  mov    %edx,%ebx
08653d02 +0x0a92:  mov    %eax,%esi
08653d04 +0x0a94:  lea    -0xb8(%ebp),%eax
08653d0a +0x0a9a:  mov    %eax,(%esp)
08653d0d +0x0a9d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08653d12 +0x0aa2:  mov    %esi,%eax
08653d14 +0x0aa4:  mov    %ebx,%edx
08653d16 +0x0aa6:  mov    %eax,(%esp)
08653d19 +0x0aa9:  call   08ae3750 <_Unwind_Resume>
08653d1e +0x0aae:  mov    0x8(%ebp),%eax
08653d21 +0x0ab1:  mov    %eax,(%esp)
08653d24 +0x0ab4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08653d29 +0x0ab9:  mov    %eax,(%esp)
08653d2c +0x0abc:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08653d31 +0x0ac1:  mov    %eax,(%esp)
08653d34 +0x0ac4:  call   0833ba30 <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv>  ; user_creature::CCreatureMgr::IsSaveCreatureItem()
08653d39 +0x0ac9:  test   %al,%al
08653d3b +0x0acb:  je     08653d58 <+0xae8>
08653d3d +0x0acd:  mov    0x8(%ebp),%eax
08653d40 +0x0ad0:  mov    %eax,(%esp)
08653d43 +0x0ad3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08653d48 +0x0ad8:  mov    %eax,(%esp)
08653d4b +0x0adb:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08653d50 +0x0ae0:  mov    %eax,(%esp)
08653d53 +0x0ae3:  call   0833bbbe <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv>  ; user_creature::CCreatureMgr::SaveCreatureItem()
08653d58 +0x0ae8:  mov    0x8(%ebp),%eax
08653d5b +0x0aeb:  mov    %eax,(%esp)
08653d5e +0x0aee:  call   086964a6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2cfb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2cfb
08653d63 +0x0af3:  test   %ax,%ax
08653d66 +0x0af6:  setne  %al
08653d69 +0x0af9:  test   %al,%al
08653d6b +0x0afb:  je     08653da2 <+0xb32>
08653d6d +0x0afd:  mov    0x8(%ebp),%eax
08653d70 +0x0b00:  mov    %eax,(%esp)
08653d73 +0x0b03:  call   086964a6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2cfb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2cfb
08653d78 +0x0b08:  mov    %ax,-0x3e(%ebp)
08653d7c +0x0b0c:  movswl -0x3e(%ebp),%ebx
08653d80 +0x0b10:  mov    0x8(%ebp),%eax
08653d83 +0x0b13:  mov    %eax,(%esp)
08653d86 +0x0b16:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08653d8b +0x0b1b:  mov    %ebx,0x4(%esp)
08653d8f +0x0b1f:  mov    %eax,(%esp)
08653d92 +0x0b22:  call   0843eca4 <_ZN23DB_UpdateItemCountValue11makeRequestEjj>  ; DB_UpdateItemCountValue::makeRequest(unsigned int, unsigned int)
08653d97 +0x0b27:  mov    0x8(%ebp),%eax
08653d9a +0x0b2a:  mov    %eax,(%esp)
08653d9d +0x0b2d:  call   08696488 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2cdd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2cdd
08653da2 +0x0b32:  mov    0x8(%ebp),%eax
08653da5 +0x0b35:  mov    %eax,(%esp)
08653da8 +0x0b38:  call   0868fa46 <_ZN5CUser22isSaveInformNoticeFlagEv>  ; CUser::isSaveInformNoticeFlag()
08653dad +0x0b3d:  test   %al,%al
08653daf +0x0b3f:  je     08653efa <+0xc8a>
08653db5 +0x0b45:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08653dba +0x0b4a:  movl   $0x1f2b,0x8(%esp)
08653dc2 +0x0b52:  movl   $"user.cpp",0x4(%esp)
08653dca +0x0b5a:  mov    %eax,(%esp)
08653dcd +0x0b5d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08653dd2 +0x0b62:  movl   $0x1,0x8(%esp)
08653dda +0x0b6a:  mov    %eax,0x4(%esp)
08653dde +0x0b6e:  lea    -0xc0(%ebp),%eax
08653de4 +0x0b74:  mov    %eax,(%esp)
08653de7 +0x0b77:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08653dec +0x0b7c:  lea    -0xc0(%ebp),%eax
08653df2 +0x0b82:  mov    %eax,(%esp)
08653df5 +0x0b85:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653dfa +0x0b8a:  movl   $0x2f5,0x4(%esp)
08653e02 +0x0b92:  mov    %eax,(%esp)
08653e05 +0x0b95:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08653e0a +0x0b9a:  lea    -0xc0(%ebp),%eax
08653e10 +0x0ba0:  mov    %eax,(%esp)
08653e13 +0x0ba3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08653e18 +0x0ba8:  movl   $0xffffffff,0x4(%esp)
08653e20 +0x0bb0:  mov    %eax,(%esp)
08653e23 +0x0bb3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08653e28 +0x0bb8:  lea    -0xc0(%ebp),%eax
08653e2e +0x0bbe:  mov    %eax,(%esp)
08653e31 +0x0bc1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08653e36 +0x0bc6:  mov    %eax,(%esp)
08653e39 +0x0bc9:  call   0869aab8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x730d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x730d
08653e3e +0x0bce:  mov    %eax,-0x3c(%ebp)
08653e41 +0x0bd1:  movl   $0x14,0x8(%esp)
08653e49 +0x0bd9:  movl   $0x0,0x4(%esp)
08653e51 +0x0be1:  mov    -0x3c(%ebp),%eax
08653e54 +0x0be4:  mov    %eax,(%esp)
08653e57 +0x0be7:  call   0807dcc0 <_init+0x5b8>
08653e5c +0x0bec:  mov    0x8(%ebp),%eax
08653e5f +0x0bef:  mov    %eax,(%esp)
08653e62 +0x0bf2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08653e67 +0x0bf7:  mov    -0x3c(%ebp),%edx
08653e6a +0x0bfa:  mov    %eax,(%edx)
08653e6c +0x0bfc:  movl   $0x0,-0x38(%ebp)
08653e73 +0x0c03:  jmp    08653e97 <+0xc27>
08653e75 +0x0c05:  mov    -0x38(%ebp),%ebx
08653e78 +0x0c08:  mov    -0x38(%ebp),%eax
08653e7b +0x0c0b:  mov    %eax,0x4(%esp)
08653e7f +0x0c0f:  mov    0x8(%ebp),%eax
08653e82 +0x0c12:  mov    %eax,(%esp)
08653e85 +0x0c15:  call   0868fa76 <_ZN5CUser19getInformNoticeFlagEi>  ; CUser::getInformNoticeFlag(int)
08653e8a +0x0c1a:  mov    %eax,%edx
08653e8c +0x0c1c:  mov    -0x3c(%ebp),%eax
08653e8f +0x0c1f:  mov    %dl,0x4(%eax,%ebx,1)
08653e93 +0x0c23:  addl   $0x1,-0x38(%ebp)
08653e97 +0x0c27:  cmpl   $0xf,-0x38(%ebp)
08653e9b +0x0c2b:  setle  %al
08653e9e +0x0c2e:  test   %al,%al
08653ea0 +0x0c30:  jne    08653e75 <+0xc05>
08653ea2 +0x0c32:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08653ea7 +0x0c37:  lea    -0xc0(%ebp),%edx
08653ead +0x0c3d:  mov    %edx,0x8(%esp)
08653eb1 +0x0c41:  movl   $0x2,0x4(%esp)
08653eb9 +0x0c49:  mov    %eax,(%esp)
08653ebc +0x0c4c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08653ec1 +0x0c51:  mov    0x8(%ebp),%eax
08653ec4 +0x0c54:  mov    %eax,(%esp)
08653ec7 +0x0c57:  call   0868fa66 <_ZN5CUser27disableSaveInformNoticeFlagEv>  ; CUser::disableSaveInformNoticeFlag()
08653ecc +0x0c5c:  lea    -0xc0(%ebp),%eax
08653ed2 +0x0c62:  mov    %eax,(%esp)
08653ed5 +0x0c65:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08653eda +0x0c6a:  jmp    08653efa <+0xc8a>
08653edc +0x0c6c:  mov    %edx,%ebx
08653ede +0x0c6e:  mov    %eax,%esi
08653ee0 +0x0c70:  lea    -0xc0(%ebp),%eax
08653ee6 +0x0c76:  mov    %eax,(%esp)
08653ee9 +0x0c79:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08653eee +0x0c7e:  mov    %esi,%eax
08653ef0 +0x0c80:  mov    %ebx,%edx
08653ef2 +0x0c82:  mov    %eax,(%esp)
08653ef5 +0x0c85:  call   08ae3750 <_Unwind_Resume>
08653efa +0x0c8a:  mov    0x8(%ebp),%eax
08653efd +0x0c8d:  mov    %eax,(%esp)
08653f00 +0x0c90:  call   086975e0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3e35>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3e35
08653f05 +0x0c95:  test   %eax,%eax
08653f07 +0x0c97:  setne  %al
08653f0a +0x0c9a:  test   %al,%al
08653f0c +0x0c9c:  je     08653f3d <+0xccd>
08653f0e +0x0c9e:  mov    0x8(%ebp),%eax
08653f11 +0x0ca1:  mov    %eax,(%esp)
08653f14 +0x0ca4:  call   086975e0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3e35>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3e35
08653f19 +0x0ca9:  mov    %eax,%ebx
08653f1b +0x0cab:  mov    0x8(%ebp),%eax
08653f1e +0x0cae:  mov    %eax,(%esp)
08653f21 +0x0cb1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08653f26 +0x0cb6:  mov    %ebx,0x4(%esp)
08653f2a +0x0cba:  mov    %eax,(%esp)
08653f2d +0x0cbd:  call   08441c2a <_ZN28DB_UpdateUserFatigueQuantity11makeRequestEjj>  ; DB_UpdateUserFatigueQuantity::makeRequest(unsigned int, unsigned int)
08653f32 +0x0cc2:  mov    0x8(%ebp),%eax
08653f35 +0x0cc5:  mov    %eax,(%esp)
08653f38 +0x0cc8:  call   086975ce <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3e23>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3e23
08653f3d +0x0ccd:  mov    0x8(%ebp),%eax
08653f40 +0x0cd0:  mov    %eax,(%esp)
08653f43 +0x0cd3:  call   086975ee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3e43>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3e43
08653f48 +0x0cd8:  test   %al,%al
08653f4a +0x0cda:  je     08653f94 <+0xd24>
08653f4c +0x0cdc:  mov    0x8(%ebp),%eax
08653f4f +0x0cdf:  mov    %eax,(%esp)
08653f52 +0x0ce2:  call   08110e6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x37e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x37e
08653f57 +0x0ce7:  mov    %eax,%esi
08653f59 +0x0ce9:  mov    0x8(%ebp),%eax
08653f5c +0x0cec:  mov    %eax,(%esp)
08653f5f +0x0cef:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653f64 +0x0cf4:  mov    %eax,%ebx
08653f66 +0x0cf6:  mov    0x8(%ebp),%eax
08653f69 +0x0cf9:  mov    %eax,(%esp)
08653f6c +0x0cfc:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08653f71 +0x0d01:  mov    %esi,0x8(%esp)
08653f75 +0x0d05:  mov    %ebx,0x4(%esp)
08653f79 +0x0d09:  mov    %eax,(%esp)
08653f7c +0x0d0c:  call   08441fde <_ZN32DB_UpdateUserGiftFatigueQuantity11makeRequestEjjj>  ; DB_UpdateUserGiftFatigueQuantity::makeRequest(unsigned int, unsigned int, unsigned int)
08653f81 +0x0d11:  movl   $0x0,0x4(%esp)
08653f89 +0x0d19:  mov    0x8(%ebp),%eax
08653f8c +0x0d1c:  mov    %eax,(%esp)
08653f8f +0x0d1f:  call   08110e7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x38c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x38c
08653f94 +0x0d24:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08653f99 +0x0d29:  mov    %eax,(%esp)
08653f9c +0x0d2c:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08653fa1 +0x0d31:  movl   $0x19b,0x4(%esp)
08653fa9 +0x0d39:  mov    %eax,(%esp)
08653fac +0x0d3c:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08653fb1 +0x0d41:  test   %al,%al
08653fb3 +0x0d43:  je     08654102 <+0xe92>
08653fb9 +0x0d49:  mov    0x8(%ebp),%eax
08653fbc +0x0d4c:  mov    %eax,(%esp)
08653fbf +0x0d4f:  call   08110d52 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x264>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x264
08653fc4 +0x0d54:  test   %al,%al
08653fc6 +0x0d56:  setne  %al
08653fc9 +0x0d59:  test   %al,%al
08653fcb +0x0d5b:  je     08654102 <+0xe92>
08653fd1 +0x0d61:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08653fd6 +0x0d66:  movl   $0x1f73,0x8(%esp)
08653fde +0x0d6e:  movl   $"user.cpp",0x4(%esp)
08653fe6 +0x0d76:  mov    %eax,(%esp)
08653fe9 +0x0d79:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08653fee +0x0d7e:  movl   $0x1,0x8(%esp)
08653ff6 +0x0d86:  mov    %eax,0x4(%esp)
08653ffa +0x0d8a:  lea    -0xc8(%ebp),%eax
08654000 +0x0d90:  mov    %eax,(%esp)
08654003 +0x0d93:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08654008 +0x0d98:  lea    -0xc8(%ebp),%eax
0865400e +0x0d9e:  mov    %eax,(%esp)
08654011 +0x0da1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08654016 +0x0da6:  movl   $0x2ca,0x4(%esp)
0865401e +0x0dae:  mov    %eax,(%esp)
08654021 +0x0db1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08654026 +0x0db6:  lea    -0xc8(%ebp),%eax
0865402c +0x0dbc:  mov    %eax,(%esp)
0865402f +0x0dbf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08654034 +0x0dc4:  movl   $0xffffffff,0x4(%esp)
0865403c +0x0dcc:  mov    %eax,(%esp)
0865403f +0x0dcf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08654044 +0x0dd4:  lea    -0xc8(%ebp),%eax
0865404a +0x0dda:  mov    %eax,(%esp)
0865404d +0x0ddd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08654052 +0x0de2:  mov    %eax,(%esp)
08654055 +0x0de5:  call   08111f9a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x14ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x14ac
0865405a +0x0dea:  mov    %eax,-0x34(%ebp)
0865405d +0x0ded:  mov    0x8(%ebp),%eax
08654060 +0x0df0:  mov    %eax,(%esp)
08654063 +0x0df3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08654068 +0x0df8:  mov    -0x34(%ebp),%edx
0865406b +0x0dfb:  mov    %eax,(%edx)
0865406d +0x0dfd:  mov    0x8(%ebp),%eax
08654070 +0x0e00:  mov    %eax,(%esp)
08654073 +0x0e03:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08654078 +0x0e08:  mov    -0x34(%ebp),%edx
0865407b +0x0e0b:  mov    %eax,0x4(%edx)
0865407e +0x0e0e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08654083 +0x0e13:  mov    0x378(%eax),%eax
08654089 +0x0e19:  movzbl %al,%edx
0865408c +0x0e1c:  mov    -0x34(%ebp),%eax
0865408f +0x0e1f:  mov    %edx,0x8(%eax)
08654092 +0x0e22:  mov    0x8(%ebp),%eax
08654095 +0x0e25:  mov    %eax,(%esp)
08654098 +0x0e28:  call   08110d52 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x264>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x264
0865409d +0x0e2d:  mov    -0x34(%ebp),%edx
086540a0 +0x0e30:  mov    %al,0xc(%edx)
086540a3 +0x0e33:  mov    -0x34(%ebp),%eax
086540a6 +0x0e36:  movb   $0x0,0xd(%eax)
086540aa +0x0e3a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086540af +0x0e3f:  lea    -0xc8(%ebp),%edx
086540b5 +0x0e45:  mov    %edx,0x8(%esp)
086540b9 +0x0e49:  movl   $0x2,0x4(%esp)
086540c1 +0x0e51:  mov    %eax,(%esp)
086540c4 +0x0e54:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086540c9 +0x0e59:  mov    0x8(%ebp),%eax
086540cc +0x0e5c:  mov    %eax,(%esp)
086540cf +0x0e5f:  call   08110d36 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x248>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x248
086540d4 +0x0e64:  lea    -0xc8(%ebp),%eax
086540da +0x0e6a:  mov    %eax,(%esp)
086540dd +0x0e6d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086540e2 +0x0e72:  jmp    08654102 <+0xe92>
086540e4 +0x0e74:  mov    %edx,%ebx
086540e6 +0x0e76:  mov    %eax,%esi
086540e8 +0x0e78:  lea    -0xc8(%ebp),%eax
086540ee +0x0e7e:  mov    %eax,(%esp)
086540f1 +0x0e81:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086540f6 +0x0e86:  mov    %esi,%eax
086540f8 +0x0e88:  mov    %ebx,%edx
086540fa +0x0e8a:  mov    %eax,(%esp)
086540fd +0x0e8d:  call   08ae3750 <_Unwind_Resume>
08654102 +0x0e92:  mov    0x8(%ebp),%eax
08654105 +0x0e95:  mov    %eax,(%esp)
08654108 +0x0e98:  call   086964e8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d3d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d3d
0865410d +0x0e9d:  test   %ax,%ax
08654110 +0x0ea0:  setne  %al
08654113 +0x0ea3:  test   %al,%al
08654115 +0x0ea5:  je     0865414c <+0xedc>
08654117 +0x0ea7:  mov    0x8(%ebp),%eax
0865411a +0x0eaa:  mov    %eax,(%esp)
0865411d +0x0ead:  call   086964e8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d3d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d3d
08654122 +0x0eb2:  mov    %ax,-0x2e(%ebp)
08654126 +0x0eb6:  movswl -0x2e(%ebp),%ebx
0865412a +0x0eba:  mov    0x8(%ebp),%eax
0865412d +0x0ebd:  mov    %eax,(%esp)
08654130 +0x0ec0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08654135 +0x0ec5:  mov    %ebx,0x4(%esp)
08654139 +0x0ec9:  mov    %eax,(%esp)
0865413c +0x0ecc:  call   0843ef30 <_ZN26DB_UpdateAddItemCountValue11makeRequestEjj>  ; DB_UpdateAddItemCountValue::makeRequest(unsigned int, unsigned int)
08654141 +0x0ed1:  mov    0x8(%ebp),%eax
08654144 +0x0ed4:  mov    %eax,(%esp)
08654147 +0x0ed7:  call   086964ca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d1f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d1f
0865414c +0x0edc:  movl   $0x65,-0x2c(%ebp)
08654153 +0x0ee3:  jmp    08654218 <+0xfa8>
08654158 +0x0ee8:  mov    -0x2c(%ebp),%ebx
0865415b +0x0eeb:  mov    0x8(%ebp),%eax
0865415e +0x0eee:  mov    %eax,(%esp)
08654161 +0x0ef1:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08654166 +0x0ef6:  mov    %ebx,0x4(%esp)
0865416a +0x0efa:  mov    %eax,(%esp)
0865416d +0x0efd:  call   08695086 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18db
08654172 +0x0f02:  test   %eax,%eax
08654174 +0x0f04:  setne  %al
08654177 +0x0f07:  test   %al,%al
08654179 +0x0f09:  je     08654214 <+0xfa4>
0865417f +0x0f0f:  mov    -0x2c(%ebp),%ebx
08654182 +0x0f12:  mov    0x8(%ebp),%eax
08654185 +0x0f15:  mov    %eax,(%esp)
08654188 +0x0f18:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0865418d +0x0f1d:  mov    %ebx,0x4(%esp)
08654191 +0x0f21:  mov    %eax,(%esp)
08654194 +0x0f24:  call   08695086 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18db
08654199 +0x0f29:  mov    %eax,%esi
0865419b +0x0f2b:  mov    -0x2c(%ebp),%eax
0865419e +0x0f2e:  cwtl
0865419f +0x0f2f:  mov    %eax,0x4(%esp)
086541a3 +0x0f33:  mov    0x8(%ebp),%eax
086541a6 +0x0f36:  mov    %eax,(%esp)
086541a9 +0x0f39:  call   08697474 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3cc9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3cc9
086541ae +0x0f3e:  mov    %eax,%ebx
086541b0 +0x0f40:  mov    -0x2c(%ebp),%eax
086541b3 +0x0f43:  movzwl %ax,%eax
086541b6 +0x0f46:  mov    %eax,-0xcc(%ebp)
086541bc +0x0f4c:  movl   $0xffffffff,0x4(%esp)
086541c4 +0x0f54:  mov    0x8(%ebp),%eax
086541c7 +0x0f57:  mov    %eax,(%esp)
086541ca +0x0f5a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086541cf +0x0f5f:  mov    %eax,%edi
086541d1 +0x0f61:  mov    0x8(%ebp),%eax
086541d4 +0x0f64:  mov    %eax,(%esp)
086541d7 +0x0f67:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086541dc +0x0f6c:  mov    %esi,0x10(%esp)
086541e0 +0x0f70:  mov    %ebx,0xc(%esp)
086541e4 +0x0f74:  mov    -0xcc(%ebp),%edx
086541ea +0x0f7a:  mov    %edx,0x8(%esp)
086541ee +0x0f7e:  mov    %edi,0x4(%esp)
086541f2 +0x0f82:  mov    %eax,(%esp)
086541f5 +0x0f85:  call   080f8f62 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii>  ; WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
086541fa +0x0f8a:  mov    -0x2c(%ebp),%ebx
086541fd +0x0f8d:  mov    0x8(%ebp),%eax
08654200 +0x0f90:  mov    %eax,(%esp)
08654203 +0x0f93:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08654208 +0x0f98:  mov    %ebx,0x4(%esp)
0865420c +0x0f9c:  mov    %eax,(%esp)
0865420f +0x0f9f:  call   0869509c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18f1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18f1
08654214 +0x0fa4:  addl   $0x1,-0x2c(%ebp)
08654218 +0x0fa8:  cmpl   $0xfa0,-0x2c(%ebp)
0865421f +0x0faf:  setle  %al
08654222 +0x0fb2:  test   %al,%al
08654224 +0x0fb4:  jne    08654158 <+0xee8>
0865422a +0x0fba:  mov    0x8(%ebp),%eax
0865422d +0x0fbd:  add    $0x8e3f0,%eax
08654232 +0x0fc2:  mov    %eax,(%esp)
08654235 +0x0fc5:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0865423a +0x0fca:  cmp    $0x1f3,%eax
0865423f +0x0fcf:  seta   %al
08654242 +0x0fd2:  test   %al,%al
08654244 +0x0fd4:  je     086542b6 <+0x1046>
08654246 +0x0fd6:  mov    0x8(%ebp),%eax
08654249 +0x0fd9:  add    $0x8e3f0,%eax
0865424e +0x0fde:  mov    %eax,(%esp)
08654251 +0x0fe1:  call   0869504c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18a1
08654256 +0x0fe6:  mov    %eax,%edi
08654258 +0x0fe8:  mov    0x8(%ebp),%eax
0865425b +0x0feb:  add    $0x8e3f0,%eax
08654260 +0x0ff0:  mov    %eax,(%esp)
08654263 +0x0ff3:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
08654268 +0x0ff8:  mov    %eax,%esi
0865426a +0x0ffa:  movl   $0xffffffff,0x4(%esp)
08654272 +0x1002:  mov    0x8(%ebp),%eax
08654275 +0x1005:  mov    %eax,(%esp)
08654278 +0x1008:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0865427d +0x100d:  mov    %eax,%ebx
0865427f +0x100f:  mov    0x8(%ebp),%eax
08654282 +0x1012:  mov    %eax,(%esp)
08654285 +0x1015:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865428a +0x101a:  mov    %edi,0x10(%esp)
0865428e +0x101e:  mov    %esi,0xc(%esp)
08654292 +0x1022:  movl   $0x329,0x8(%esp)
0865429a +0x102a:  mov    %ebx,0x4(%esp)
0865429e +0x102e:  mov    %eax,(%esp)
086542a1 +0x1031:  call   080f8f62 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii>  ; WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
086542a6 +0x1036:  mov    0x8(%ebp),%eax
086542a9 +0x1039:  add    $0x8e3f0,%eax
086542ae +0x103e:  mov    %eax,(%esp)
086542b1 +0x1041:  call   08695058 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18ad
086542b6 +0x1046:  mov    0x8(%ebp),%eax
086542b9 +0x1049:  mov    %eax,(%esp)
086542bc +0x104c:  call   08696528 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d7d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d7d
086542c1 +0x1051:  test   %eax,%eax
086542c3 +0x1053:  setne  %al
086542c6 +0x1056:  test   %al,%al
086542c8 +0x1058:  je     0865430a <+0x109a>
086542ca +0x105a:  mov    0x8(%ebp),%eax
086542cd +0x105d:  mov    %eax,(%esp)
086542d0 +0x1060:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086542d5 +0x1065:  mov    %eax,%ebx
086542d7 +0x1067:  mov    0x8(%ebp),%eax
086542da +0x106a:  mov    %eax,(%esp)
086542dd +0x106d:  call   08696528 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d7d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d7d
086542e2 +0x1072:  mov    %eax,%esi
086542e4 +0x1074:  mov    0x8(%ebp),%eax
086542e7 +0x1077:  mov    %eax,(%esp)
086542ea +0x107a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086542ef +0x107f:  mov    %ebx,0x8(%esp)
086542f3 +0x1083:  mov    %esi,0x4(%esp)
086542f7 +0x1087:  mov    %eax,(%esp)
086542fa +0x108a:  call   0842f0f0 <_ZN20DB_UpdateSchoolPoint11makeRequestEjii>  ; DB_UpdateSchoolPoint::makeRequest(unsigned int, int, int)
086542ff +0x108f:  mov    0x8(%ebp),%eax
08654302 +0x1092:  mov    %eax,(%esp)
08654305 +0x1095:  call   0869650c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d61>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d61
0865430a +0x109a:  mov    0x8(%ebp),%eax
0865430d +0x109d:  mov    %eax,(%esp)
08654310 +0x10a0:  call   08696196 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29eb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29eb
08654315 +0x10a5:  test   %al,%al
08654317 +0x10a7:  je     08654324 <+0x10b4>
08654319 +0x10a9:  mov    0x8(%ebp),%eax
0865431c +0x10ac:  mov    %eax,(%esp)
0865431f +0x10af:  call   08651de6 <_ZN5CUser17UpdateBloodRecordEv>  ; CUser::UpdateBloodRecord()
08654324 +0x10b4:  mov    0x8(%ebp),%eax
08654327 +0x10b7:  mov    %eax,(%esp)
0865432a +0x10ba:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0865432f +0x10bf:  cmp    $0x3b,%eax
08654332 +0x10c2:  jle    08654359 <+0x10e9>
08654334 +0x10c4:  mov    0x8(%ebp),%eax
08654337 +0x10c7:  mov    %eax,(%esp)
0865433a +0x10ca:  call   08696116 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x296b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x296b
0865433f +0x10cf:  test   %al,%al
08654341 +0x10d1:  jne    08654352 <+0x10e2>
08654343 +0x10d3:  mov    0x8(%ebp),%eax
08654346 +0x10d6:  mov    %eax,(%esp)
08654349 +0x10d9:  call   08696146 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x299b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x299b
0865434e +0x10de:  test   %al,%al
08654350 +0x10e0:  je     08654359 <+0x10e9>
08654352 +0x10e2:  mov    $0x1,%eax
08654357 +0x10e7:  jmp    0865435e <+0x10ee>
08654359 +0x10e9:  mov    $0x0,%eax
0865435e +0x10ee:  test   %al,%al
08654360 +0x10f0:  je     0865436d <+0x10fd>
08654362 +0x10f2:  mov    0x8(%ebp),%eax
08654365 +0x10f5:  mov    %eax,(%esp)
08654368 +0x10f8:  call   08651fba <_ZN5CUser20UpdateDimensionInoutEv>  ; CUser::UpdateDimensionInout()
0865436d +0x10fd:  mov    0x8(%ebp),%eax
08654370 +0x1100:  mov    %eax,(%esp)
08654373 +0x1103:  call   0869720a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a5f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a5f
08654378 +0x1108:  test   %al,%al
0865437a +0x110a:  je     08654387 <+0x1117>
0865437c +0x110c:  mov    0x8(%ebp),%eax
0865437f +0x110f:  mov    %eax,(%esp)
08654382 +0x1112:  call   086521ec <_ZN5CUser24UpdateBreakAwayLuckPointEv>  ; CUser::UpdateBreakAwayLuckPoint()
08654387 +0x1117:  mov    0x8(%ebp),%eax
0865438a +0x111a:  mov    %eax,(%esp)
0865438d +0x111d:  call   086971de <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a33>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a33
08654392 +0x1122:  test   %al,%al
08654394 +0x1124:  je     086543a1 <+0x1131>
08654396 +0x1126:  mov    0x8(%ebp),%eax
08654399 +0x1129:  mov    %eax,(%esp)
0865439c +0x112c:  call   086522ea <_ZN5CUser30UpdateBreakAwayDungeonClearCntEv>  ; CUser::UpdateBreakAwayDungeonClearCnt()
086543a1 +0x1131:  mov    0x8(%ebp),%eax
086543a4 +0x1134:  mov    %eax,(%esp)
086543a7 +0x1137:  call   08696b6e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x33c3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x33c3
086543ac +0x113c:  test   %eax,%eax
086543ae +0x113e:  jne    086543bf <+0x114f>
086543b0 +0x1140:  mov    0x8(%ebp),%eax
086543b3 +0x1143:  mov    %eax,(%esp)
086543b6 +0x1146:  call   08696bae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3403>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3403
086543bb +0x114b:  test   %eax,%eax
086543bd +0x114d:  je     086543c6 <+0x1156>
086543bf +0x114f:  mov    $0x1,%eax
086543c4 +0x1154:  jmp    086543cb <+0x115b>
086543c6 +0x1156:  mov    $0x0,%eax
086543cb +0x115b:  test   %al,%al
086543cd +0x115d:  je     08654433 <+0x11c3>
086543cf +0x115f:  mov    0x8(%ebp),%eax
086543d2 +0x1162:  mov    %eax,(%esp)
086543d5 +0x1165:  call   08696b6e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x33c3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x33c3
086543da +0x116a:  mov    %eax,-0x28(%ebp)
086543dd +0x116d:  mov    0x8(%ebp),%eax
086543e0 +0x1170:  mov    %eax,(%esp)
086543e3 +0x1173:  call   08696bae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3403>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3403
086543e8 +0x1178:  mov    %eax,-0x24(%ebp)
086543eb +0x117b:  mov    0x8(%ebp),%eax
086543ee +0x117e:  mov    %eax,(%esp)
086543f1 +0x1181:  call   084ec474 <_GLOBAL__I__Z7getUserj+0x3426>  ; global constructors keyed to getUser(unsigned int)+0x3426
086543f6 +0x1186:  movsbl %al,%eax
086543f9 +0x1189:  mov    %eax,0x4(%esp)
086543fd +0x118d:  mov    0x8(%ebp),%eax
08654400 +0x1190:  mov    %eax,(%esp)
08654403 +0x1193:  call   0869736e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3bc3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3bc3
08654408 +0x1198:  mov    %eax,-0x20(%ebp)
0865440b +0x119b:  movl   $0x2,0x10(%esp)
08654413 +0x11a3:  mov    -0x20(%ebp),%eax
08654416 +0x11a6:  mov    %eax,0xc(%esp)
0865441a +0x11aa:  mov    -0x24(%ebp),%eax
0865441d +0x11ad:  mov    %eax,0x8(%esp)
08654421 +0x11b1:  mov    -0x28(%ebp),%eax
08654424 +0x11b4:  mov    %eax,0x4(%esp)
08654428 +0x11b8:  mov    0x8(%ebp),%eax
0865442b +0x11bb:  mov    %eax,(%esp)
0865442e +0x11be:  call   0865240c <_ZN5CUser21UpdateCharacLinkBonusEjjj28ENUM_CHARAC_LINK_BONUS_STATE>  ; CUser::UpdateCharacLinkBonus(unsigned int, unsigned int, unsigned int, ENUM_CHARAC_LINK_BONUS_STATE)
08654433 +0x11c3:  mov    0x8(%ebp),%eax
08654436 +0x11c6:  mov    %eax,(%esp)
08654439 +0x11c9:  call   08652dd8 <_ZN5CUser22_updateNPCRelationshipEv>  ; CUser::_updateNPCRelationship()
0865443e +0x11ce:  mov    0x8(%ebp),%eax
08654441 +0x11d1:  lea    0x79744(%eax),%edx
08654447 +0x11d7:  mov    0x8(%ebp),%eax
0865444a +0x11da:  mov    %eax,0x4(%esp)
0865444e +0x11de:  mov    %edx,(%esp)
08654451 +0x11e1:  call   0832acd0 <_ZN13charac_expand8CDataMgr6updateEP5CUser>  ; charac_expand::CDataMgr::update(CUser*)
08654456 +0x11e6:  mov    0x8(%ebp),%eax
08654459 +0x11e9:  mov    %eax,(%esp)
0865445c +0x11ec:  call   08335c14 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0xba>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0xba
08654461 +0x11f1:  movswl %ax,%esi
08654464 +0x11f4:  mov    0x8(%ebp),%eax
08654467 +0x11f7:  mov    %eax,(%esp)
0865446a +0x11fa:  call   08335ba8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x4e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x4e
0865446f +0x11ff:  movswl %ax,%ebx
08654472 +0x1202:  mov    0x8(%ebp),%eax
08654475 +0x1205:  mov    %eax,(%esp)
08654478 +0x1208:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865447d +0x120d:  mov    %esi,0xc(%esp)
08654481 +0x1211:  mov    %ebx,0x8(%esp)
08654485 +0x1215:  mov    %eax,0x4(%esp)
08654489 +0x1219:  mov    0x8(%ebp),%eax
0865448c +0x121c:  mov    %eax,(%esp)
0865448f +0x121f:  call   086819fa <_ZN5CUser23_saveConditionEventInfoEjss>  ; CUser::_saveConditionEventInfo(unsigned int, short, short)
08654494 +0x1224:  mov    0x8(%ebp),%eax
08654497 +0x1227:  mov    %eax,(%esp)
0865449a +0x122a:  call   08335c80 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x126>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x126
0865449f +0x122f:  movswl %ax,%ebx
086544a2 +0x1232:  mov    0x8(%ebp),%eax
086544a5 +0x1235:  mov    %eax,(%esp)
086544a8 +0x1238:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086544ad +0x123d:  mov    %ebx,0x8(%esp)
086544b1 +0x1241:  mov    %eax,0x4(%esp)
086544b5 +0x1245:  mov    0x8(%ebp),%eax
086544b8 +0x1248:  mov    %eax,(%esp)
086544bb +0x124b:  call   08681b3a <_ZN5CUser28_saveProperDungeonClearCountEjs>  ; CUser::_saveProperDungeonClearCount(unsigned int, short)
086544c0 +0x1250:  mov    0x8(%ebp),%eax
086544c3 +0x1253:  mov    %eax,(%esp)
086544c6 +0x1256:  call   086962f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b4b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b4b
086544cb +0x125b:  test   %al,%al
086544cd +0x125d:  je     086544da <+0x126a>
086544cf +0x125f:  mov    0x8(%ebp),%eax
086544d2 +0x1262:  mov    %eax,(%esp)
086544d5 +0x1265:  call   08652dde <_ZN5CUser17_updateSaveOptionEv>  ; CUser::_updateSaveOption()
086544da +0x126a:  mov    0x8(%ebp),%eax
086544dd +0x126d:  mov    %eax,(%esp)
086544e0 +0x1270:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
086544e5 +0x1275:  test   %al,%al
086544e7 +0x1277:  je     08654531 <+0x12c1>
086544e9 +0x1279:  mov    0x8(%ebp),%eax
086544ec +0x127c:  mov    %eax,(%esp)
086544ef +0x127f:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
086544f4 +0x1284:  mov    %eax,-0x1c(%ebp)
086544f7 +0x1287:  mov    -0x1c(%ebp),%eax
086544fa +0x128a:  mov    %eax,(%esp)
086544fd +0x128d:  call   08695a0c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2261>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2261
08654502 +0x1292:  test   %al,%al
08654504 +0x1294:  je     08654531 <+0x12c1>
08654506 +0x1296:  mov    0x8(%ebp),%eax
08654509 +0x1299:  mov    %eax,(%esp)
0865450c +0x129c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08654511 +0x12a1:  mov    %eax,%ebx
08654513 +0x12a3:  mov    0x8(%ebp),%eax
08654516 +0x12a6:  mov    %eax,(%esp)
08654519 +0x12a9:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865451e +0x12ae:  mov    -0x1c(%ebp),%edx
08654521 +0x12b1:  mov    %edx,0x8(%esp)
08654525 +0x12b5:  mov    %ebx,0x4(%esp)
08654529 +0x12b9:  mov    %eax,(%esp)
0865452c +0x12bc:  call   0843b946 <_ZN19DB_SaveAccountCargo11makeRequestEijP13CAccountCargo>  ; DB_SaveAccountCargo::makeRequest(int, unsigned int, CAccountCargo*)
08654531 +0x12c1:  mov    0x8(%ebp),%eax
08654534 +0x12c4:  mov    %eax,(%esp)
08654537 +0x12c7:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
0865453c +0x12cc:  movl   $0x0,0xc(%esp)
08654544 +0x12d4:  movl   $0x1,0x8(%esp)
0865454c +0x12dc:  movl   $0x1,0x4(%esp)
08654554 +0x12e4:  mov    %eax,(%esp)
08654557 +0x12e7:  call   082872ca <_ZN16Secu_GoldControl8SavetoDBEbbb>  ; Secu_GoldControl::SavetoDB(bool, bool, bool)
0865455c +0x12ec:  mov    0x8(%ebp),%eax
0865455f +0x12ef:  mov    %eax,(%esp)
08654562 +0x12f2:  call   0868e36a <_ZN5CUser17SaveMercenaryDataEv>  ; CUser::SaveMercenaryData()
08654567 +0x12f7:  mov    0x8(%ebp),%eax
0865456a +0x12fa:  mov    %eax,(%esp)
0865456d +0x12fd:  call   0868f726 <_ZN5CUser20updatePcRoomPlayTimeEv>  ; CUser::updatePcRoomPlayTime()
08654572 +0x1302:  mov    0x8(%ebp),%eax
08654575 +0x1305:  mov    %eax,(%esp)
08654578 +0x1308:  call   0869106c <_ZN5CUser26updateBlueMarbleEnterCountEv>  ; CUser::updateBlueMarbleEnterCount()
0865457d +0x130d:  mov    0x8(%ebp),%eax
08654580 +0x1310:  mov    %eax,(%esp)
08654583 +0x1313:  call   086914cc <_ZN5CUser15updateBingoDataEv>  ; CUser::updateBingoData()
08654588 +0x1318:  jmp    0865458e <+0x131e>
0865458a +0x131a:  nop
0865458b +0x131b:  jmp    0865458e <+0x131e>
0865458d +0x131d:  nop
0865458e +0x131e:  add    $0xec,%esp
08654594 +0x1324:  pop    %ebx
08654595 +0x1325:  pop    %esi
08654596 +0x1326:  pop    %edi
08654597 +0x1327:  pop    %ebp
08654598 +0x1328:  ret
08654599 +0x1329:  nop
```

## 反编译 C

```c
// CUser::UpdateData @ 0x8653270

/* CUser::UpdateData() */

void __thiscall CUser::UpdateData(CUser *this)

{
  SIG_SAVE_DUNGEON_CLEAR *pSVar1;
  char cVar2;
  bool bVar3;
  InformNoticeFlagData IVar4;
  SIG_OBJECT_BRING_UP SVar5;
  short sVar6;
  short sVar7;
  GameWorld *this_00;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  CInventory *pCVar12;
  CMonitorServerProxy *this_01;
  HeroMissionEvent *this_02;
  Stream *pSVar13;
  CStreamGuard *pCVar14;
  SIG_LOAD_SKILL *pSVar15;
  SIG_LOAD_SKILL *pSVar16;
  SIG_LOAD_SKILL *pSVar17;
  SIG_LOAD_SKILL *pSVar18;
  SkillSlot *pSVar19;
  PvpResultType *pPVar20;
  CDungeonClear *this_03;
  void *__src;
  CCreatureMgr *pCVar21;
  uint uVar22;
  CDataManager *this_04;
  CEventScriptMng *this_05;
  CHackAnalyzer *pCVar23;
  int iVar24;
  int iVar25;
  Secu_GoldControl *this_06;
  uint uVar26;
  CStreamGuard local_cc [8];
  CStreamGuard local_c4 [8];
  CStreamGuard local_bc [8];
  CStreamGuard local_b4 [8];
  CStreamGuard local_ac [8];
  CStreamGuard local_a4 [8];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  int local_6c;
  int local_68;
  SIG_LOAD_SKILL *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  SIG_SAVE_PVP *local_54;
  SIG_SAVE_DUNGEON_CLEAR *local_50;
  SIG_UPDATE_QUEST *local_4c;
  int local_48;
  short local_42;
  InformNoticeFlagData *local_40;
  int local_3c;
  SIG_OBJECT_BRING_UP *local_38;
  short local_32;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CAccountCargo *local_20;
  
  if (2 < *(int *)(this + 0x8cfc4)) {
    this_00 = (GameWorld *)G_GameWorld();
    iVar8 = GameWorld::GetChannelType(this_00);
    if (iVar8 != 7) {
      iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      if (iVar8 == 0) {
        uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_9c,"void CUser::UpdateData()",0x1d99,5);
        cMyTrace::operator()(local_9c,"CUser::UpdateData() character %s - m_selected is null",uVar9)
        ;
      }
      else {
        cVar2 = isLocked4DataLoad(this);
        if (cVar2 == '\0') {
          pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          cVar2 = CInventory::checkToFix(pCVar12);
          if (cVar2 != '\0') {
            pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
            CInventory::CheckNFix(pCVar12);
          }
          iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
          if ((iVar8 != 0) &&
             (iVar8 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this), iVar8 != 0)) {
            local_6c = CUserCharacInfo::get_member_pay_tex_money_to_upper((CUserCharacInfo *)this);
            local_68 = CUserCharacInfo::get_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)this)
            ;
            uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            bVar3 = (bool)CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)this);
            uVar9 = GetServerGroup(this);
            this_01 = (CMonitorServerProxy *)
                      CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                (GlobalData::s_monitor_proxy_mgr,uVar9);
            CMonitorServerProxy::SendMemberPayTax(this_01,bVar3,uVar10,local_6c,local_68);
            if (0 < local_6c) {
              CUserCharacInfo::set_member_pay_tex_money_to_upper((CUserCharacInfo *)this,0);
            }
            if (0 < local_68) {
              CUserCharacInfo::set_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)this,0);
            }
          }
          _SaveCharacData(this);
          UpdateCharacView(this);
          this_02 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
          HeroMissionEvent::saveEventData(this_02,this,false);
          cVar2 = CUserCharacInfo::isSaveInven((CUserCharacInfo *)this);
          if ((cVar2 == '\0') &&
             (cVar2 = CUserCharacInfo::isSaveCargo((CUserCharacInfo *)this), cVar2 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(int *)(this + 0x8cfc4) == 5) {
              SaveInventoryOnly(this);
            }
            else {
              SaveInventory(this);
            }
            CUserCharacInfo::disableSaveInven((CUserCharacInfo *)this);
            CUserCharacInfo::disableSaveCargo((CUserCharacInfo *)this);
          }
          WongWork::CMailBoxHelper::ReqDBSendStoredMail(this);
          cVar2 = CUserCharacInfo::isSaveSkill((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1ded);
            CStreamGuard::CStreamGuard(local_a4,pSVar13,true);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_a4);
                    /* try { // try from 08653599 to 08653773 has its CatchHandler @ 0865378f */
            CStreamGuard::operator<<(pCVar14,0x24);
            iVar8 = GetUID(this);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_a4);
            CStreamGuard::operator<<(pCVar14,iVar8);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_a4);
            local_64 = CStreamGuard::GetInBuffer<SIG_LOAD_SKILL>(pCVar14);
            memset(local_64,0,0x414);
            uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            *(undefined4 *)local_64 = uVar9;
            iVar8 = G_CDataManager();
            local_64[0x411] = *(SIG_LOAD_SKILL *)(iVar8 + 0xa850);
            pSVar15 = local_64 + 0x344;
            pSVar16 = local_64 + 0x340;
            pSVar17 = local_64 + 0x1a4;
            pSVar18 = local_64 + 8;
            pSVar19 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
            SkillSlot::get_remain_sp
                      (pSVar19,(int *)pSVar18,(int *)pSVar17,(int *)pSVar16,(int *)pSVar15);
            pSVar19 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
            local_60 = (void *)SkillSlot::get_skillslot_buf(pSVar19,0);
            pSVar19 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
            local_5c = (void *)SkillSlot::get_skillslot_buf(pSVar19,1);
            if ((local_60 != (void *)0x0) && (local_5c != (void *)0x0)) {
              memcpy(local_64 + 0xc,local_60,0x198);
              memcpy(local_64 + 0x1a8,local_5c,0x198);
            }
            local_58 = (void *)get_skill_command_buf(this);
            if (local_58 != (void *)0x0) {
              memcpy(local_64 + 0x348,local_58,200);
            }
            memset(this + 0x703db,0,200);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_a4);
            updateComboSkill(this);
            CUserCharacInfo::disableSaveSkill((CUserCharacInfo *)this);
            CStreamGuard::~CStreamGuard(local_a4);
          }
          cVar2 = CUserCharacInfo::isSavePvP((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1e2c);
            CStreamGuard::CStreamGuard(local_ac,pSVar13,true);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_ac);
                    /* try { // try from 08653810 to 086538bc has its CatchHandler @ 086538d8 */
            CStreamGuard::operator<<(pCVar14,0x25);
            iVar8 = GetUID(this);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_ac);
            CStreamGuard::operator<<(pCVar14,iVar8);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_ac);
            local_54 = CStreamGuard::GetInBuffer<SIG_SAVE_PVP>(pCVar14);
            memset(local_54,0,0x88);
            uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            *(undefined4 *)(local_54 + 0x84) = uVar9;
            pPVar20 = (PvpResultType *)CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
            PvpResultType::Set((PvpResultType *)local_54,pPVar20);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_ac);
            CUserCharacInfo::disableSavePvP((CUserCharacInfo *)this);
            CStreamGuard::~CStreamGuard(local_ac);
          }
          cVar2 = CUserCharacInfo::isSaveDungeonClear((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1e4e);
            CStreamGuard::CStreamGuard(local_b4,pSVar13,true);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_b4);
                    /* try { // try from 08653959 to 08653a8c has its CatchHandler @ 08653aa8 */
            CStreamGuard::operator<<(pCVar14,0x27);
            iVar8 = GetUID(this);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_b4);
            CStreamGuard::operator<<(pCVar14,iVar8);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_b4);
            local_50 = CStreamGuard::GetInBuffer<SIG_SAVE_DUNGEON_CLEAR>(pCVar14);
            memset(local_50,0,0x180c);
            uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            *(undefined4 *)local_50 = uVar9;
            uVar9 = get_acc_id(this);
            *(undefined4 *)(local_50 + 4) = uVar9;
            pSVar1 = local_50 + 0xc;
            this_03 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefR((CUserCharacInfo *)this)
            ;
            iVar8 = WongWork::CDungeonClear::toString(this_03,(char *)pSVar1,0x1800);
            if (iVar8 < 0) {
              uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
              uVar10 = get_acc_id(this);
              uVar11 = NumberToString(uVar10,0);
              cMyTrace::cMyTrace(local_7c,"void CUser::UpdateData()",0x1e5e,5);
              cMyTrace::operator()
                        (local_7c,"Quest buffer overflow (m_id: %s, charac_no: %d",uVar11,uVar9);
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_b4);
            CUserCharacInfo::disableSaveDungeonClear((CUserCharacInfo *)this);
            CStreamGuard::~CStreamGuard(local_b4);
          }
          cVar2 = CUserCharacInfo::isSaveBattleRecord((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            CUserCharacInfo::disableSaveBattleRecord((CUserCharacInfo *)this);
          }
          cVar2 = CUserCharacInfo::isSaveQuest((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            pSVar13 = (Stream *)
                      BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"user.cpp",0x1e8c);
            CStreamGuard::CStreamGuard(local_bc,pSVar13,true);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_bc);
                    /* try { // try from 08653b43 to 08653ce4 has its CatchHandler @ 08653d00 */
            CStreamGuard::operator<<(pCVar14,0x29);
            iVar8 = GetUID(this);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_bc);
            CStreamGuard::operator<<(pCVar14,iVar8);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_bc);
            local_4c = CStreamGuard::GetInBuffer<SIG_UPDATE_QUEST>(pCVar14);
            memset(local_4c,0,0x7601);
            iVar8 = getCurCharacQuestR(this);
            cVar2 = WongWork::CQuestClear::checkSaveFlag((CQuestClear *)(iVar8 + 4));
            if (cVar2 != '\0') {
              iVar8 = getCurCharacQuestR(this);
              __src = (void *)WongWork::CQuestClear::getClearedQuest((CQuestClear *)(iVar8 + 4));
              memcpy(local_4c + 0xa4,__src,30000);
              local_4c[0x75d4] = (SIG_UPDATE_QUEST)0x1;
            }
            uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            *(undefined4 *)local_4c = uVar9;
            for (local_48 = 0; iVar8 = local_48, local_48 < 0x14; local_48 = local_48 + 1) {
              iVar24 = getCurCharacQuestR(this);
              iVar25 = local_48;
              *(undefined4 *)(local_4c + iVar8 * 4 + 4) =
                   *(undefined4 *)(iVar24 + 8 + (local_48 + 0x1d4c) * 4);
              iVar8 = getCurCharacQuestR(this);
              *(undefined4 *)(local_4c + (iVar25 + 0x14) * 4 + 4) =
                   *(undefined4 *)(iVar8 + 8 + (local_48 + 0x1d60) * 4);
            }
            iVar8 = getCurCharacQuestR(this);
            *(undefined4 *)(local_4c + 0x75d5) = *(undefined4 *)(iVar8 + 0x75f0);
            iVar8 = getCurCharacQuestR(this);
            memcpy(local_4c + 0x75d9,(void *)(iVar8 + 0x75f4),0x28);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_bc);
            iVar8 = getCurCharacQuestW(this);
            WongWork::CQuestClear::resetSaveFlags((CQuestClear *)(iVar8 + 4));
            CUserCharacInfo::disableSaveQuest((CUserCharacInfo *)this);
            CStreamGuard::~CStreamGuard(local_bc);
          }
          pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          pCVar21 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar12);
          cVar2 = user_creature::CCreatureMgr::IsSaveCreatureItem(pCVar21);
          if (cVar2 != '\0') {
            pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
            pCVar21 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar12);
            user_creature::CCreatureMgr::SaveCreatureItem(pCVar21);
          }
          sVar6 = CUserCharacInfo::GetCurCharacEventItemCount((CUserCharacInfo *)this);
          if (sVar6 != 0) {
            local_42 = CUserCharacInfo::GetCurCharacEventItemCount((CUserCharacInfo *)this);
            uVar26 = (uint)local_42;
            uVar10 = get_acc_id(this);
            DB_UpdateItemCountValue::makeRequest(uVar10,uVar26);
            CUserCharacInfo::ResetCurCharacEventItemCount((CUserCharacInfo *)this);
          }
          cVar2 = isSaveInformNoticeFlag(this);
          if (cVar2 != '\0') {
            pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1f2b);
            CStreamGuard::CStreamGuard(local_c4,pSVar13,true);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
                    /* try { // try from 08653e05 to 08653ec0 has its CatchHandler @ 08653edc */
            CStreamGuard::operator<<(pCVar14,0x2f5);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
            CStreamGuard::operator<<(pCVar14,-1);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_c4);
            local_40 = CStreamGuard::GetInBuffer<InformNoticeFlagData>(pCVar14);
            memset(local_40,0,0x14);
            uVar9 = get_acc_id(this);
            *(undefined4 *)local_40 = uVar9;
            for (local_3c = 0; iVar8 = local_3c, local_3c < 0x10; local_3c = local_3c + 1) {
              IVar4 = (InformNoticeFlagData)getInformNoticeFlag(this,local_3c);
              local_40[iVar8 + 4] = IVar4;
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_c4);
            disableSaveInformNoticeFlag(this);
            CStreamGuard::~CStreamGuard(local_c4);
          }
          iVar8 = GetCurCharacUsedFatigueQuantity(this);
          if (iVar8 != 0) {
            uVar10 = GetCurCharacUsedFatigueQuantity(this);
            uVar26 = get_acc_id(this);
            DB_UpdateUserFatigueQuantity::makeRequest(uVar26,uVar10);
            ResetCurCharacUsedFatigueQuantity(this);
          }
          cVar2 = GetChangedGiftFatigueQuantity(this);
          if (cVar2 != '\0') {
            uVar10 = GetCurCharacUsedGiftFatigueQuantity(this);
            uVar26 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            uVar22 = get_acc_id(this);
            DB_UpdateUserGiftFatigueQuantity::makeRequest(uVar22,uVar26,uVar10);
            SetChangedGiftFatigueQuantity(this,false);
          }
          this_04 = (CDataManager *)G_CDataManager();
          this_05 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_04);
          cVar2 = EventClassify::CEventScriptMng::is_eventing(this_05,0x19b);
          if ((cVar2 != '\0') &&
             (cVar2 = CUserCharacInfo::getCurUseBringUpMaterialCount((CUserCharacInfo *)this),
             cVar2 != '\0')) {
            pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1f73);
            CStreamGuard::CStreamGuard(local_cc,pSVar13,true);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
                    /* try { // try from 08654021 to 086540c8 has its CatchHandler @ 086540e4 */
            CStreamGuard::operator<<(pCVar14,0x2ca);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
            CStreamGuard::operator<<(pCVar14,-1);
            pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_cc);
            local_38 = CStreamGuard::GetInBuffer<SIG_OBJECT_BRING_UP>(pCVar14);
            uVar9 = get_acc_id(this);
            *(undefined4 *)local_38 = uVar9;
            uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            *(undefined4 *)(local_38 + 4) = uVar9;
            iVar8 = G_CEnvironment();
            *(uint *)(local_38 + 8) = *(uint *)(iVar8 + 0x378) & 0xff;
            SVar5 = (SIG_OBJECT_BRING_UP)
                    CUserCharacInfo::getCurUseBringUpMaterialCount((CUserCharacInfo *)this);
            local_38[0xc] = SVar5;
            local_38[0xd] = (SIG_OBJECT_BRING_UP)0x0;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_cc);
            CUserCharacInfo::resetCurUseBringUpMaterialCount((CUserCharacInfo *)this);
            CStreamGuard::~CStreamGuard(local_cc);
          }
          sVar6 = CUserCharacInfo::GetCurCharacEventAddItemCount((CUserCharacInfo *)this);
          if (sVar6 != 0) {
            local_32 = CUserCharacInfo::GetCurCharacEventAddItemCount((CUserCharacInfo *)this);
            uVar26 = (uint)local_32;
            uVar10 = get_acc_id(this);
            DB_UpdateAddItemCountValue::makeRequest(uVar10,uVar26);
            CUserCharacInfo::ResetCurCharacEventAddItemCount((CUserCharacInfo *)this);
          }
          for (local_30 = 0x65; iVar8 = local_30, local_30 < 0xfa1; local_30 = local_30 + 1) {
            pCVar23 = (CHackAnalyzer *)getHackAnalyzer(this);
            iVar25 = WongWork::CHackAnalyzer::getServerHackCnt(pCVar23,iVar8);
            iVar8 = local_30;
            if (iVar25 != 0) {
              pCVar23 = (CHackAnalyzer *)getHackAnalyzer(this);
              iVar25 = WongWork::CHackAnalyzer::getServerHackCnt(pCVar23,iVar8);
              iVar24 = GetETC(this,(short)local_30);
              iVar8 = local_30;
              uVar10 = get_charac_no(this,-1);
              uVar26 = get_acc_id(this);
              WongWork::CHackAnalyzer::ReqDBSaveHackInfo(uVar26,uVar10,(ushort)iVar8,iVar24,iVar25);
              iVar8 = local_30;
              pCVar23 = (CHackAnalyzer *)getHackAnalyzer(this);
              WongWork::CHackAnalyzer::resetServerHackCnt(pCVar23,iVar8);
            }
          }
          uVar10 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
          if (499 < uVar10) {
            iVar8 = WongWork::CMCAPManager::getExposedCount((CMCAPManager *)(this + 0x8e3f0));
            iVar25 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
            uVar10 = get_charac_no(this,-1);
            uVar26 = get_acc_id(this);
            WongWork::CHackAnalyzer::ReqDBSaveHackInfo(uVar26,uVar10,0x329,iVar25,iVar8);
            WongWork::CMCAPManager::resetExposedCount((CMCAPManager *)(this + 0x8e3f0));
          }
          iVar8 = CUserCharacInfo::getCurCharacSchoolPoint((CUserCharacInfo *)this);
          if (iVar8 != 0) {
            iVar8 = GetUID(this);
            iVar25 = CUserCharacInfo::getCurCharacSchoolPoint((CUserCharacInfo *)this);
            uVar10 = get_acc_id(this);
            DB_UpdateSchoolPoint::makeRequest(uVar10,iVar25,iVar8);
            CUserCharacInfo::resetCurCharacSchoolPoint((CUserCharacInfo *)this);
          }
          cVar2 = CUserCharacInfo::isBloodBestRecordUpdate((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            UpdateBloodRecord(this);
          }
          iVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
          if ((iVar8 < 0x3c) ||
             ((cVar2 = CUserCharacInfo::IsSaveDemensionInoutValue((CUserCharacInfo *)this),
              cVar2 == '\0' &&
              (cVar2 = CUserCharacInfo::IsSaveBloodInoutValue((CUserCharacInfo *)this),
              cVar2 == '\0')))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            UpdateDimensionInout(this);
          }
          cVar2 = isUsedBreakAwayLuckPoint(this);
          if (cVar2 != '\0') {
            UpdateBreakAwayLuckPoint(this);
          }
          cVar2 = isBreakAwayDungeonClear(this);
          if (cVar2 != '\0') {
            UpdateBreakAwayDungeonClearCnt(this);
          }
          iVar8 = CUserCharacInfo::getCharacLinkBonusExp((CUserCharacInfo *)this);
          if ((iVar8 == 0) &&
             (iVar8 = CUserCharacInfo::getCharacLinkBonusGold((CUserCharacInfo *)this), iVar8 == 0))
          {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_2c = CUserCharacInfo::getCharacLinkBonusExp((CUserCharacInfo *)this);
            local_28 = CUserCharacInfo::getCharacLinkBonusGold((CUserCharacInfo *)this);
            cVar2 = CUserCharacInfo::getLinkCharacSlotIndex((CUserCharacInfo *)this);
            local_24 = getLinkCharacNo(this,cVar2);
            UpdateCharacLinkBonus(this,local_2c,local_28,local_24,2);
          }
          _updateNPCRelationship();
          charac_expand::CDataMgr::update((CDataMgr *)(this + 0x79744),this);
          sVar6 = CUserCharacInfo::GetCurConditionEventRewardStep((CUserCharacInfo *)this);
          sVar7 = CUserCharacInfo::GetCurConditionEventStep((CUserCharacInfo *)this);
          uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          _saveConditionEventInfo(this,uVar10,sVar7,sVar6);
          sVar6 = CUserCharacInfo::GetProperDungeonClearCount((CUserCharacInfo *)this);
          uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          _saveProperDungeonClearCount(this,uVar10,sVar6);
          cVar2 = CUserCharacInfo::isSaveCharacOption((CUserCharacInfo *)this);
          if (cVar2 != '\0') {
            _updateSaveOption(this);
          }
          cVar2 = IsExistAccountCargo(this);
          if (cVar2 != '\0') {
            local_20 = (CAccountCargo *)GetAccountCargo(this);
            cVar2 = CAccountCargo::IsAlter(local_20);
            if (cVar2 != '\0') {
              uVar10 = get_acc_id(this);
              iVar8 = GetUID(this);
              DB_SaveAccountCargo::makeRequest(iVar8,uVar10,local_20);
            }
          }
          this_06 = (Secu_GoldControl *)GetGoldControl(this);
          Secu_GoldControl::SavetoDB(this_06,true,true,false);
          SaveMercenaryData(this);
          updatePcRoomPlayTime(this);
          updateBlueMarbleEnterCount(this);
          updateBingoData(this);
        }
        else {
          uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar10 = get_acc_id(this);
          uVar11 = NumberToString(uVar10,0);
          cMyTrace::cMyTrace(local_8c,"void CUser::UpdateData()",0x1da1,5);
          cMyTrace::operator()
                    (local_8c,"Can not save character until loading done(m_id: %s, charac_no: %d",
                     uVar11,uVar9);
        }
      }
    }
  }
  return;
}
```
