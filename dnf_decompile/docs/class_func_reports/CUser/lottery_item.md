# lottery_item

`_ZN5CUser12lottery_itemEi`

`CUser::lottery_item(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086733a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086733a2  _ZN5CUser12lottery_itemEi
#           CUser::lottery_item(int)
# range [0x086733a2, 0x08674967]
086733a2 +0x0000:  push   %ebp
086733a3 +0x0001:  mov    %esp,%ebp
086733a5 +0x0003:  push   %edi
086733a6 +0x0004:  push   %esi
086733a7 +0x0005:  push   %ebx
086733a8 +0x0006:  sub    $0x30c,%esp
086733ae +0x000c:  movl   $0x0,-0x5c(%ebp)
086733b5 +0x0013:  lea    -0x139(%ebp),%eax
086733bb +0x0019:  mov    %eax,(%esp)
086733be +0x001c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086733c3 +0x0021:  lea    -0x176(%ebp),%eax
086733c9 +0x0027:  mov    %eax,(%esp)
086733cc +0x002a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086733d1 +0x002f:  mov    0x8(%ebp),%eax
086733d4 +0x0032:  mov    %eax,(%esp)
086733d7 +0x0035:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086733dc +0x003a:  lea    -0x2b8(%ebp),%edx
086733e2 +0x0040:  mov    0xc(%ebp),%ecx
086733e5 +0x0043:  mov    %ecx,0xc(%esp)
086733e9 +0x0047:  movl   $0x1,0x8(%esp)
086733f1 +0x004f:  mov    %eax,0x4(%esp)
086733f5 +0x0053:  mov    %edx,(%esp)
086733f8 +0x0056:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086733fd +0x005b:  sub    $0x4,%esp
08673400 +0x005e:  mov    -0x2b8(%ebp),%eax
08673406 +0x0064:  mov    %eax,-0x176(%ebp)
0867340c +0x006a:  mov    -0x2b4(%ebp),%eax
08673412 +0x0070:  mov    %eax,-0x172(%ebp)
08673418 +0x0076:  mov    -0x2b0(%ebp),%eax
0867341e +0x007c:  mov    %eax,-0x16e(%ebp)
08673424 +0x0082:  mov    -0x2ac(%ebp),%eax
0867342a +0x0088:  mov    %eax,-0x16a(%ebp)
08673430 +0x008e:  mov    -0x2a8(%ebp),%eax
08673436 +0x0094:  mov    %eax,-0x166(%ebp)
0867343c +0x009a:  mov    -0x2a4(%ebp),%eax
08673442 +0x00a0:  mov    %eax,-0x162(%ebp)
08673448 +0x00a6:  mov    -0x2a0(%ebp),%eax
0867344e +0x00ac:  mov    %eax,-0x15e(%ebp)
08673454 +0x00b2:  mov    -0x29c(%ebp),%eax
0867345a +0x00b8:  mov    %eax,-0x15a(%ebp)
08673460 +0x00be:  mov    -0x298(%ebp),%eax
08673466 +0x00c4:  mov    %eax,-0x156(%ebp)
0867346c +0x00ca:  mov    -0x294(%ebp),%eax
08673472 +0x00d0:  mov    %eax,-0x152(%ebp)
08673478 +0x00d6:  mov    -0x290(%ebp),%eax
0867347e +0x00dc:  mov    %eax,-0x14e(%ebp)
08673484 +0x00e2:  mov    -0x28c(%ebp),%eax
0867348a +0x00e8:  mov    %eax,-0x14a(%ebp)
08673490 +0x00ee:  mov    -0x288(%ebp),%eax
08673496 +0x00f4:  mov    %eax,-0x146(%ebp)
0867349c +0x00fa:  mov    -0x284(%ebp),%eax
086734a2 +0x0100:  mov    %eax,-0x142(%ebp)
086734a8 +0x0106:  mov    -0x280(%ebp),%eax
086734ae +0x010c:  mov    %eax,-0x13e(%ebp)
086734b4 +0x0112:  movzbl -0x27c(%ebp),%eax
086734bb +0x0119:  mov    %al,-0x13a(%ebp)
086734c1 +0x011f:  mov    -0x174(%ebp),%eax
086734c7 +0x0125:  mov    %eax,%ebx
086734c9 +0x0127:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086734ce +0x012c:  mov    %ebx,0x4(%esp)
086734d2 +0x0130:  mov    %eax,(%esp)
086734d5 +0x0133:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086734da +0x0138:  mov    %eax,-0x58(%ebp)
086734dd +0x013b:  cmpl   $0x0,-0x58(%ebp)
086734e1 +0x013f:  je     0867350e <+0x16c>
086734e3 +0x0141:  mov    -0x58(%ebp),%eax
086734e6 +0x0144:  mov    %eax,(%esp)
086734e9 +0x0147:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
086734ee +0x014c:  mov    %eax,%ebx
086734f0 +0x014e:  mov    0x8(%ebp),%eax
086734f3 +0x0151:  mov    %eax,(%esp)
086734f6 +0x0154:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086734fb +0x0159:  cmp    %eax,%ebx
086734fd +0x015b:  setg   %al
08673500 +0x015e:  test   %al,%al
08673502 +0x0160:  je     08673518 <+0x176>
08673504 +0x0162:  mov    $0xe,%ebx
08673509 +0x0167:  jmp    0867495b <+0x15b9>
0867350e +0x016c:  mov    $0x15,%ebx
08673513 +0x0171:  jmp    0867495b <+0x15b9>
08673518 +0x0176:  movl   $0x0,-0x4c(%ebp)
0867351f +0x017d:  mov    -0x174(%ebp),%ebx
08673525 +0x0183:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867352a +0x0188:  mov    %ebx,0x4(%esp)
0867352e +0x018c:  mov    %eax,(%esp)
08673531 +0x018f:  call   0835fb5a <_ZNK12CDataManager21find_lottery_use_costEj>  ; CDataManager::find_lottery_use_cost(unsigned int) const
08673536 +0x0194:  mov    %eax,-0x4c(%ebp)
08673539 +0x0197:  cmpl   $0x0,-0x4c(%ebp)
0867353d +0x019b:  setne  %al
08673540 +0x019e:  test   %al,%al
08673542 +0x01a0:  je     0867356c <+0x1ca>
08673544 +0x01a2:  mov    0x8(%ebp),%eax
08673547 +0x01a5:  mov    %eax,(%esp)
0867354a +0x01a8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867354f +0x01ad:  mov    %eax,(%esp)
08673552 +0x01b0:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08673557 +0x01b5:  mov    %eax,-0x48(%ebp)
0867355a +0x01b8:  mov    -0x48(%ebp),%eax
0867355d +0x01bb:  cmp    -0x4c(%ebp),%eax
08673560 +0x01be:  jge    0867356c <+0x1ca>
08673562 +0x01c0:  mov    $0xa,%ebx
08673567 +0x01c5:  jmp    0867495b <+0x15b9>
0867356c +0x01ca:  lea    -0x139(%ebp),%esi
08673572 +0x01d0:  mov    -0x174(%ebp),%eax
08673578 +0x01d6:  mov    %eax,%ebx
0867357a +0x01d8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867357f +0x01dd:  mov    0xc(%eax),%eax
08673582 +0x01e0:  mov    %esi,0x8(%esp)
08673586 +0x01e4:  mov    %ebx,0x4(%esp)
0867358a +0x01e8:  mov    %eax,(%esp)
0867358d +0x01eb:  call   08512230 <_ZN9CItemList14get_lotto_itemEiPc>  ; CItemList::get_lotto_item(int, char*)
08673592 +0x01f0:  mov    -0x137(%ebp),%eax
08673598 +0x01f6:  test   %eax,%eax
0867359a +0x01f8:  jne    086738be <+0x51c>
086735a0 +0x01fe:  mov    -0x132(%ebp),%eax
086735a6 +0x0204:  test   %eax,%eax
086735a8 +0x0206:  jle    086738be <+0x51c>
086735ae +0x020c:  mov    -0x132(%ebp),%eax
086735b4 +0x0212:  mov    %eax,-0x44(%ebp)
086735b7 +0x0215:  movl   $0x7fffffff,-0x40(%ebp)
086735be +0x021c:  mov    0x8(%ebp),%eax
086735c1 +0x021f:  mov    %eax,(%esp)
086735c4 +0x0222:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
086735c9 +0x0227:  mov    %eax,%esi
086735cb +0x0229:  mov    0x8(%ebp),%eax
086735ce +0x022c:  mov    %eax,(%esp)
086735d1 +0x022f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086735d6 +0x0234:  mov    %eax,%ebx
086735d8 +0x0236:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086735dd +0x023b:  mov    %esi,0x8(%esp)
086735e1 +0x023f:  mov    %ebx,0x4(%esp)
086735e5 +0x0243:  mov    %eax,(%esp)
086735e8 +0x0246:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
086735ed +0x024b:  mov    %eax,-0x40(%ebp)
086735f0 +0x024e:  mov    0x8(%ebp),%eax
086735f3 +0x0251:  mov    %eax,(%esp)
086735f6 +0x0254:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086735fb +0x0259:  mov    %eax,(%esp)
086735fe +0x025c:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08673603 +0x0261:  mov    %eax,-0x3c(%ebp)
08673606 +0x0264:  mov    -0x44(%ebp),%eax
08673609 +0x0267:  mov    -0x3c(%ebp),%edx
0867360c +0x026a:  lea    (%edx,%eax,1),%eax
0867360f +0x026d:  cmp    -0x40(%ebp),%eax
08673612 +0x0270:  jle    08673693 <+0x2f1>
08673614 +0x0272:  mov    0x8(%ebp),%eax
08673617 +0x0275:  mov    %eax,(%esp)
0867361a +0x0278:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0867361f +0x027d:  mov    %eax,%esi
08673621 +0x027f:  mov    0x8(%ebp),%eax
08673624 +0x0282:  mov    %eax,(%esp)
08673627 +0x0285:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867362c +0x028a:  movl   $0x0,0x4(%esp)
08673634 +0x0292:  mov    %eax,(%esp)
08673637 +0x0295:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867363c +0x029a:  mov    %eax,%ebx
0867363e +0x029c:  movl   $0x4,0xc(%esp)
08673646 +0x02a4:  movl   $0x61b9,0x8(%esp)
0867364e +0x02ac:  movl   $&_ZZN5CUser12lottery_itemEiE19__PRETTY_FUNCTION__,0x4(%esp)
08673656 +0x02b4:  lea    -0xac(%ebp),%eax
0867365c +0x02ba:  mov    %eax,(%esp)
0867365f +0x02bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08673664 +0x02c2:  mov    -0x44(%ebp),%eax
08673667 +0x02c5:  mov    %eax,0x10(%esp)
0867366b +0x02c9:  mov    %esi,0xc(%esp)
0867366f +0x02cd:  mov    %ebx,0x8(%esp)
08673673 +0x02d1:  movl   $"lottery_gold_item:m_id(%s), char_no(%d), money(%d)",0x4(%esp)
0867367b +0x02d9:  lea    -0xac(%ebp),%eax
08673681 +0x02df:  mov    %eax,(%esp)
08673684 +0x02e2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08673689 +0x02e7:  mov    $0x16,%ebx
0867368e +0x02ec:  jmp    0867495b <+0x15b9>
08673693 +0x02f1:  mov    0x8(%ebp),%eax
08673696 +0x02f4:  mov    %eax,(%esp)
08673699 +0x02f7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867369e +0x02fc:  movl   $0x0,0x10(%esp)
086736a6 +0x0304:  movl   $0x1,0xc(%esp)
086736ae +0x030c:  movl   $0x17,0x8(%esp)
086736b6 +0x0314:  mov    -0x44(%ebp),%edx
086736b9 +0x0317:  mov    %edx,0x4(%esp)
086736bd +0x031b:  mov    %eax,(%esp)
086736c0 +0x031e:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
086736c5 +0x0323:  mov    %eax,-0x38(%ebp)
086736c8 +0x0326:  mov    -0x38(%ebp),%eax
086736cb +0x0329:  cmp    -0x44(%ebp),%eax
086736ce +0x032c:  jge    086736f1 <+0x34f>
086736d0 +0x032e:  mov    -0x38(%ebp),%edx
086736d3 +0x0331:  mov    -0x44(%ebp),%eax
086736d6 +0x0334:  mov    %edx,0xc(%esp)
086736da +0x0338:  mov    %eax,0x8(%esp)
086736de +0x033c:  movl   $0x0,0x4(%esp)
086736e6 +0x0344:  mov    0x8(%ebp),%eax
086736e9 +0x0347:  mov    %eax,(%esp)
086736ec +0x034a:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
086736f1 +0x034f:  mov    0x8(%ebp),%eax
086736f4 +0x0352:  mov    %eax,(%esp)
086736f7 +0x0355:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086736fc +0x035a:  movl   $0x1,0x14(%esp)
08673704 +0x0362:  movl   $0x3,0x10(%esp)
0867370c +0x036a:  movl   $0x1,0xc(%esp)
08673714 +0x0372:  mov    0xc(%ebp),%edx
08673717 +0x0375:  mov    %edx,0x8(%esp)
0867371b +0x0379:  movl   $0x1,0x4(%esp)
08673723 +0x0381:  mov    %eax,(%esp)
08673726 +0x0384:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867372b +0x0389:  xor    $0x1,%eax
0867372e +0x038c:  test   %al,%al
08673730 +0x038e:  je     0867373c <+0x39a>
08673732 +0x0390:  mov    $0x11,%ebx
08673737 +0x0395:  jmp    0867495b <+0x15b9>
0867373c +0x039a:  lea    -0xb8(%ebp),%eax
08673742 +0x03a0:  mov    %eax,(%esp)
08673745 +0x03a3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867374a +0x03a8:  movl   $0x1d,0x8(%esp)
08673752 +0x03b0:  movl   $0x1,0x4(%esp)
0867375a +0x03b8:  lea    -0xb8(%ebp),%eax
08673760 +0x03be:  mov    %eax,(%esp)
08673763 +0x03c1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08673768 +0x03c6:  movl   $0x1,0x4(%esp)
08673770 +0x03ce:  lea    -0xb8(%ebp),%eax
08673776 +0x03d4:  mov    %eax,(%esp)
08673779 +0x03d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867377e +0x03dc:  mov    0xc(%ebp),%eax
08673781 +0x03df:  mov    %eax,0x4(%esp)
08673785 +0x03e3:  lea    -0xb8(%ebp),%eax
0867378b +0x03e9:  mov    %eax,(%esp)
0867378e +0x03ec:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08673793 +0x03f1:  mov    -0x5c(%ebp),%eax
08673796 +0x03f4:  mov    %eax,0x4(%esp)
0867379a +0x03f8:  lea    -0xb8(%ebp),%eax
086737a0 +0x03fe:  mov    %eax,(%esp)
086737a3 +0x0401:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086737a8 +0x0406:  movl   $0x0,0x4(%esp)
086737b0 +0x040e:  lea    -0xb8(%ebp),%eax
086737b6 +0x0414:  mov    %eax,(%esp)
086737b9 +0x0417:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086737be +0x041c:  mov    -0x38(%ebp),%eax
086737c1 +0x041f:  mov    %eax,0x4(%esp)
086737c5 +0x0423:  lea    -0xb8(%ebp),%eax
086737cb +0x0429:  mov    %eax,(%esp)
086737ce +0x042c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086737d3 +0x0431:  movl   $0x0,0x4(%esp)
086737db +0x0439:  lea    -0xb8(%ebp),%eax
086737e1 +0x043f:  mov    %eax,(%esp)
086737e4 +0x0442:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086737e9 +0x0447:  movl   $0x0,0x4(%esp)
086737f1 +0x044f:  lea    -0xb8(%ebp),%eax
086737f7 +0x0455:  mov    %eax,(%esp)
086737fa +0x0458:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086737ff +0x045d:  movl   $0x0,0x4(%esp)
08673807 +0x0465:  lea    -0xb8(%ebp),%eax
0867380d +0x046b:  mov    %eax,(%esp)
08673810 +0x046e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08673815 +0x0473:  movl   $0x0,0x4(%esp)
0867381d +0x047b:  lea    -0xb8(%ebp),%eax
08673823 +0x0481:  mov    %eax,(%esp)
08673826 +0x0484:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867382b +0x0489:  movl   $&g_emptySlot,0x4(%esp)
08673833 +0x0491:  lea    -0xb8(%ebp),%eax
08673839 +0x0497:  mov    %eax,(%esp)
0867383c +0x049a:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08673841 +0x049f:  movl   $0x1,0x4(%esp)
08673849 +0x04a7:  lea    -0xb8(%ebp),%eax
0867384f +0x04ad:  mov    %eax,(%esp)
08673852 +0x04b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08673857 +0x04b5:  lea    -0xb8(%ebp),%eax
0867385d +0x04bb:  mov    %eax,0x4(%esp)
08673861 +0x04bf:  mov    0x8(%ebp),%eax
08673864 +0x04c2:  mov    %eax,(%esp)
08673867 +0x04c5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867386c +0x04ca:  mov    -0x174(%ebp),%eax
08673872 +0x04d0:  mov    -0x44(%ebp),%edx
08673875 +0x04d3:  mov    %edx,0x8(%esp)
08673879 +0x04d7:  mov    %eax,0x4(%esp)
0867387d +0x04db:  mov    0x8(%ebp),%eax
08673880 +0x04de:  mov    %eax,(%esp)
08673883 +0x04e1:  call   0868d1ec <_ZN5CUser35send_broadcast_lottery_gold_messageEmi>  ; CUser::send_broadcast_lottery_gold_message(unsigned long, int)
08673888 +0x04e6:  mov    $0x0,%ebx
0867388d +0x04eb:  lea    -0xb8(%ebp),%eax
08673893 +0x04f1:  mov    %eax,(%esp)
08673896 +0x04f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867389b +0x04f9:  jmp    0867495b <+0x15b9>
086738a0 +0x04fe:  mov    %edx,%ebx
086738a2 +0x0500:  mov    %eax,%esi
086738a4 +0x0502:  lea    -0xb8(%ebp),%eax
086738aa +0x0508:  mov    %eax,(%esp)
086738ad +0x050b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086738b2 +0x0510:  mov    %esi,%eax
086738b4 +0x0512:  mov    %ebx,%edx
086738b6 +0x0514:  mov    %eax,(%esp)
086738b9 +0x0517:  call   08ae3750 <_Unwind_Resume>
086738be +0x051c:  mov    -0x174(%ebp),%eax
086738c4 +0x0522:  mov    %eax,%ebx
086738c6 +0x0524:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086738cb +0x0529:  mov    %ebx,0x4(%esp)
086738cf +0x052d:  mov    %eax,(%esp)
086738d2 +0x0530:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086738d7 +0x0535:  mov    %eax,-0x54(%ebp)
086738da +0x0538:  mov    -0x137(%ebp),%eax
086738e0 +0x053e:  mov    %eax,%ebx
086738e2 +0x0540:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086738e7 +0x0545:  mov    %ebx,0x4(%esp)
086738eb +0x0549:  mov    %eax,(%esp)
086738ee +0x054c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086738f3 +0x0551:  mov    %eax,-0x50(%ebp)
086738f6 +0x0554:  cmpl   $0x0,-0x54(%ebp)
086738fa +0x0558:  je     08673ab1 <+0x70f>
08673900 +0x055e:  cmpl   $0x0,-0x50(%ebp)
08673904 +0x0562:  je     08673ab1 <+0x70f>
0867390a +0x0568:  mov    -0x54(%ebp),%eax
0867390d +0x056b:  mov    %eax,(%esp)
08673910 +0x056e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08673915 +0x0573:  test   %al,%al
08673917 +0x0575:  je     08673937 <+0x595>
08673919 +0x0577:  mov    -0x54(%ebp),%eax
0867391c +0x057a:  mov    (%eax),%eax
0867391e +0x057c:  add    $0xc,%eax
08673921 +0x057f:  mov    (%eax),%edx
08673923 +0x0581:  mov    -0x54(%ebp),%eax
08673926 +0x0584:  mov    %eax,(%esp)
08673929 +0x0587:  call   *%edx
0867392b +0x0589:  cmp    $0xd,%eax
0867392e +0x058c:  jne    08673937 <+0x595>
08673930 +0x058e:  mov    $0x1,%eax
08673935 +0x0593:  jmp    0867393c <+0x59a>
08673937 +0x0595:  mov    $0x0,%eax
0867393c +0x059a:  test   %al,%al
0867393e +0x059c:  je     08673ab1 <+0x70f>
08673944 +0x05a2:  movzbl -0x138(%ebp),%eax
0867394b +0x05a9:  cmp    $0x1,%al
0867394d +0x05ab:  jne    0867396d <+0x5cb>
0867394f +0x05ad:  mov    -0x50(%ebp),%eax
08673952 +0x05b0:  mov    (%eax),%eax
08673954 +0x05b2:  add    $0xc,%eax
08673957 +0x05b5:  mov    (%eax),%edx
08673959 +0x05b7:  mov    -0x50(%ebp),%eax
0867395c +0x05ba:  mov    %eax,(%esp)
0867395f +0x05bd:  call   *%edx
08673961 +0x05bf:  cmp    $0xb,%eax
08673964 +0x05c2:  je     0867396d <+0x5cb>
08673966 +0x05c4:  mov    $0x1,%eax
0867396b +0x05c9:  jmp    08673972 <+0x5d0>
0867396d +0x05cb:  mov    $0x0,%eax
08673972 +0x05d0:  test   %al,%al
08673974 +0x05d2:  je     08673ab1 <+0x70f>
0867397a +0x05d8:  movl   $0x0,-0x34(%ebp)
08673981 +0x05df:  movl   $0x2710,(%esp)
08673988 +0x05e6:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0867398d +0x05eb:  mov    %eax,-0x30(%ebp)
08673990 +0x05ee:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08673995 +0x05f3:  mov    0x598(%eax),%eax
0867399b +0x05f9:  cmp    -0x30(%ebp),%eax
0867399e +0x05fc:  seta   %al
086739a1 +0x05ff:  test   %al,%al
086739a3 +0x0601:  je     086739e7 <+0x645>
086739a5 +0x0603:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086739aa +0x0608:  mov    0x590(%eax),%ebx
086739b0 +0x060e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086739b5 +0x0613:  mov    0x59c(%eax),%eax
086739bb +0x0619:  mov    %eax,(%esp)
086739be +0x061c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086739c3 +0x0621:  mov    %eax,%ecx
086739c5 +0x0623:  mov    $0x10624dd3,%edx
086739ca +0x0628:  mov    %ecx,%eax
086739cc +0x062a:  imul   %edx
086739ce +0x062c:  sar    $0x6,%edx
086739d1 +0x062f:  mov    %ecx,%eax
086739d3 +0x0631:  sar    $0x1f,%eax
086739d6 +0x0634:  mov    %edx,%ecx
086739d8 +0x0636:  sub    %eax,%ecx
086739da +0x0638:  mov    %ecx,%eax
086739dc +0x063a:  lea    (%ebx,%eax,1),%eax
086739df +0x063d:  mov    %eax,-0x34(%ebp)
086739e2 +0x0640:  jmp    08673a86 <+0x6e4>
086739e7 +0x0645:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086739ec +0x064a:  mov    0x5a8(%eax),%ebx
086739f2 +0x0650:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086739f7 +0x0655:  mov    0x598(%eax),%eax
086739fd +0x065b:  lea    (%ebx,%eax,1),%eax
08673a00 +0x065e:  cmp    -0x30(%ebp),%eax
08673a03 +0x0661:  seta   %al
08673a06 +0x0664:  test   %al,%al
08673a08 +0x0666:  je     08673a49 <+0x6a7>
08673a0a +0x0668:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08673a0f +0x066d:  mov    0x5a0(%eax),%ebx
08673a15 +0x0673:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08673a1a +0x0678:  mov    0x5ac(%eax),%eax
08673a20 +0x067e:  mov    %eax,(%esp)
08673a23 +0x0681:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08673a28 +0x0686:  mov    %eax,%ecx
08673a2a +0x0688:  mov    $0x10624dd3,%edx
08673a2f +0x068d:  mov    %ecx,%eax
08673a31 +0x068f:  imul   %edx
08673a33 +0x0691:  sar    $0x6,%edx
08673a36 +0x0694:  mov    %ecx,%eax
08673a38 +0x0696:  sar    $0x1f,%eax
08673a3b +0x0699:  mov    %edx,%ecx
08673a3d +0x069b:  sub    %eax,%ecx
08673a3f +0x069d:  mov    %ecx,%eax
08673a41 +0x069f:  lea    (%ebx,%eax,1),%eax
08673a44 +0x06a2:  mov    %eax,-0x34(%ebp)
08673a47 +0x06a5:  jmp    08673a86 <+0x6e4>
08673a49 +0x06a7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08673a4e +0x06ac:  mov    0x5b0(%eax),%ebx
08673a54 +0x06b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08673a59 +0x06b7:  mov    0x5bc(%eax),%eax
08673a5f +0x06bd:  mov    %eax,(%esp)
08673a62 +0x06c0:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08673a67 +0x06c5:  mov    %eax,%ecx
08673a69 +0x06c7:  mov    $0x10624dd3,%edx
08673a6e +0x06cc:  mov    %ecx,%eax
08673a70 +0x06ce:  imul   %edx
08673a72 +0x06d0:  sar    $0x6,%edx
08673a75 +0x06d3:  mov    %ecx,%eax
08673a77 +0x06d5:  sar    $0x1f,%eax
08673a7a +0x06d8:  mov    %edx,%ecx
08673a7c +0x06da:  sub    %eax,%ecx
08673a7e +0x06dc:  mov    %ecx,%eax
08673a80 +0x06de:  lea    (%ebx,%eax,1),%eax
08673a83 +0x06e1:  mov    %eax,-0x34(%ebp)
08673a86 +0x06e4:  cmpl   $0x0,-0x34(%ebp)
08673a8a +0x06e8:  js     08673a92 <+0x6f0>
08673a8c +0x06ea:  cmpl   $0x1f,-0x34(%ebp)
08673a90 +0x06ee:  jle    08673a99 <+0x6f7>
08673a92 +0x06f0:  movl   $0x0,-0x34(%ebp)
08673a99 +0x06f7:  mov    -0x34(%ebp),%eax
08673a9c +0x06fa:  movzbl %al,%eax
08673a9f +0x06fd:  mov    %eax,0x4(%esp)
08673aa3 +0x0701:  lea    -0x139(%ebp),%eax
08673aa9 +0x0707:  mov    %eax,(%esp)
08673aac +0x070a:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08673ab1 +0x070f:  mov    -0x137(%ebp),%eax
08673ab7 +0x0715:  test   %eax,%eax
08673ab9 +0x0717:  je     08674956 <+0x15b4>
08673abf +0x071d:  mov    -0x137(%ebp),%eax
08673ac5 +0x0723:  cmp    $0xffffffff,%eax
08673ac8 +0x0726:  je     08674956 <+0x15b4>
08673ace +0x072c:  mov    0x8(%ebp),%eax
08673ad1 +0x072f:  mov    %eax,(%esp)
08673ad4 +0x0732:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673ad9 +0x0737:  mov    %eax,(%esp)
08673adc +0x073a:  call   08505038 <_ZNK10CInventory15QuickEmptyCountEv>  ; CInventory::QuickEmptyCount() const
08673ae1 +0x073f:  test   %eax,%eax
08673ae3 +0x0741:  setle  %al
08673ae6 +0x0744:  test   %al,%al
08673ae8 +0x0746:  je     08673be1 <+0x83f>
08673aee +0x074c:  mov    0x8(%ebp),%eax
08673af1 +0x074f:  mov    %eax,(%esp)
08673af4 +0x0752:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673af9 +0x0757:  movl   $0x1,0x8(%esp)
08673b01 +0x075f:  movl   $0x1,0x4(%esp)
08673b09 +0x0767:  mov    %eax,(%esp)
08673b0c +0x076a:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08673b11 +0x076f:  xor    $0x1,%eax
08673b14 +0x0772:  test   %al,%al
08673b16 +0x0774:  je     08673b22 <+0x780>
08673b18 +0x0776:  mov    $0x4,%ebx
08673b1d +0x077b:  jmp    0867495b <+0x15b9>
08673b22 +0x0780:  lea    -0x176(%ebp),%eax
08673b28 +0x0786:  mov    %eax,(%esp)
08673b2b +0x0789:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08673b30 +0x078e:  cmp    $0x1,%eax
08673b33 +0x0791:  jle    08673b66 <+0x7c4>
08673b35 +0x0793:  mov    0x8(%ebp),%eax
08673b38 +0x0796:  mov    %eax,(%esp)
08673b3b +0x0799:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673b40 +0x079e:  movl   $0x1,0x8(%esp)
08673b48 +0x07a6:  movl   $0x2,0x4(%esp)
08673b50 +0x07ae:  mov    %eax,(%esp)
08673b53 +0x07b1:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08673b58 +0x07b6:  xor    $0x1,%eax
08673b5b +0x07b9:  test   %al,%al
08673b5d +0x07bb:  je     08673b66 <+0x7c4>
08673b5f +0x07bd:  mov    $0x1,%eax
08673b64 +0x07c2:  jmp    08673b6b <+0x7c9>
08673b66 +0x07c4:  mov    $0x0,%eax
08673b6b +0x07c9:  test   %al,%al
08673b6d +0x07cb:  je     08673b79 <+0x7d7>
08673b6f +0x07cd:  mov    $0x4,%ebx
08673b74 +0x07d2:  jmp    0867495b <+0x15b9>
08673b79 +0x07d7:  mov    0x8(%ebp),%eax
08673b7c +0x07da:  mov    %eax,(%esp)
08673b7f +0x07dd:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673b84 +0x07e2:  movl   $0x1,0x8(%esp)
08673b8c +0x07ea:  movl   $0x3,0x4(%esp)
08673b94 +0x07f2:  mov    %eax,(%esp)
08673b97 +0x07f5:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08673b9c +0x07fa:  xor    $0x1,%eax
08673b9f +0x07fd:  test   %al,%al
08673ba1 +0x07ff:  je     08673bad <+0x80b>
08673ba3 +0x0801:  mov    $0x4,%ebx
08673ba8 +0x0806:  jmp    0867495b <+0x15b9>
08673bad +0x080b:  mov    0x8(%ebp),%eax
08673bb0 +0x080e:  mov    %eax,(%esp)
08673bb3 +0x0811:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673bb8 +0x0816:  movl   $0x1,0x8(%esp)
08673bc0 +0x081e:  movl   $0xa,0x4(%esp)
08673bc8 +0x0826:  mov    %eax,(%esp)
08673bcb +0x0829:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08673bd0 +0x082e:  xor    $0x1,%eax
08673bd3 +0x0831:  test   %al,%al
08673bd5 +0x0833:  je     08673be1 <+0x83f>
08673bd7 +0x0835:  mov    $0x4,%ebx
08673bdc +0x083a:  jmp    0867495b <+0x15b9>
08673be1 +0x083f:  mov    -0x174(%ebp),%eax
08673be7 +0x0845:  cmp    $0x28bfa1,%eax
08673bec +0x084a:  jne    08673cf4 <+0x952>
08673bf2 +0x0850:  lea    -0x1b3(%ebp),%eax
08673bf8 +0x0856:  mov    %eax,(%esp)
08673bfb +0x0859:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08673c00 +0x085e:  mov    0x8(%ebp),%eax
08673c03 +0x0861:  mov    %eax,(%esp)
08673c06 +0x0864:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673c0b +0x0869:  lea    -0x1b3(%ebp),%edx
08673c11 +0x086f:  mov    %edx,0x8(%esp)
08673c15 +0x0873:  movl   $0x28bf9d,0x4(%esp)
08673c1d +0x087b:  mov    %eax,(%esp)
08673c20 +0x087e:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08673c25 +0x0883:  lea    -0x1f0(%ebp),%eax
08673c2b +0x0889:  mov    %eax,(%esp)
08673c2e +0x088c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08673c33 +0x0891:  mov    0x8(%ebp),%eax
08673c36 +0x0894:  mov    %eax,(%esp)
08673c39 +0x0897:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673c3e +0x089c:  lea    -0x1f0(%ebp),%edx
08673c44 +0x08a2:  mov    %edx,0x8(%esp)
08673c48 +0x08a6:  movl   $0x28bf9e,0x4(%esp)
08673c50 +0x08ae:  mov    %eax,(%esp)
08673c53 +0x08b1:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08673c58 +0x08b6:  lea    -0x22d(%ebp),%eax
08673c5e +0x08bc:  mov    %eax,(%esp)
08673c61 +0x08bf:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08673c66 +0x08c4:  mov    0x8(%ebp),%eax
08673c69 +0x08c7:  mov    %eax,(%esp)
08673c6c +0x08ca:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673c71 +0x08cf:  lea    -0x22d(%ebp),%edx
08673c77 +0x08d5:  mov    %edx,0x8(%esp)
08673c7b +0x08d9:  movl   $0x28bf9f,0x4(%esp)
08673c83 +0x08e1:  mov    %eax,(%esp)
08673c86 +0x08e4:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08673c8b +0x08e9:  lea    -0x26a(%ebp),%eax
08673c91 +0x08ef:  mov    %eax,(%esp)
08673c94 +0x08f2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08673c99 +0x08f7:  mov    0x8(%ebp),%eax
08673c9c +0x08fa:  mov    %eax,(%esp)
08673c9f +0x08fd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673ca4 +0x0902:  lea    -0x26a(%ebp),%edx
08673caa +0x0908:  mov    %edx,0x8(%esp)
08673cae +0x090c:  movl   $0x28bfa0,0x4(%esp)
08673cb6 +0x0914:  mov    %eax,(%esp)
08673cb9 +0x0917:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08673cbe +0x091c:  mov    -0x1ac(%ebp),%eax
08673cc4 +0x0922:  cmp    $0x9,%eax
08673cc7 +0x0925:  jg     08673cea <+0x948>
08673cc9 +0x0927:  mov    -0x1e9(%ebp),%eax
08673ccf +0x092d:  cmp    $0x9,%eax
08673cd2 +0x0930:  jg     08673cea <+0x948>
08673cd4 +0x0932:  mov    -0x226(%ebp),%eax
08673cda +0x0938:  cmp    $0x9,%eax
08673cdd +0x093b:  jg     08673cea <+0x948>
08673cdf +0x093d:  mov    -0x263(%ebp),%eax
08673ce5 +0x0943:  cmp    $0x9,%eax
08673ce8 +0x0946:  jle    08673cf4 <+0x952>
08673cea +0x0948:  mov    $0x4,%ebx
08673cef +0x094d:  jmp    0867495b <+0x15b9>
08673cf4 +0x0952:  mov    -0x174(%ebp),%eax
08673cfa +0x0958:  cmp    $0x28becb,%eax
08673cff +0x095d:  je     08673d4c <+0x9aa>
08673d01 +0x095f:  mov    0x8(%ebp),%eax
08673d04 +0x0962:  mov    %eax,(%esp)
08673d07 +0x0965:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673d0c +0x096a:  movl   $0x1,0x14(%esp)
08673d14 +0x0972:  movl   $0x3,0x10(%esp)
08673d1c +0x097a:  movl   $0x1,0xc(%esp)
08673d24 +0x0982:  mov    0xc(%ebp),%edx
08673d27 +0x0985:  mov    %edx,0x8(%esp)
08673d2b +0x0989:  movl   $0x1,0x4(%esp)
08673d33 +0x0991:  mov    %eax,(%esp)
08673d36 +0x0994:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08673d3b +0x0999:  xor    $0x1,%eax
08673d3e +0x099c:  test   %al,%al
08673d40 +0x099e:  je     08673d4c <+0x9aa>
08673d42 +0x09a0:  mov    $0x11,%ebx
08673d47 +0x09a5:  jmp    0867495b <+0x15b9>
08673d4c +0x09aa:  movl   $0x0,-0x2c(%ebp)
08673d53 +0x09b1:  cmpl   $0x0,-0x50(%ebp)
08673d57 +0x09b5:  je     08673d76 <+0x9d4>
08673d59 +0x09b7:  mov    -0x50(%ebp),%eax
08673d5c +0x09ba:  mov    (%eax),%eax
08673d5e +0x09bc:  add    $0x10,%eax
08673d61 +0x09bf:  mov    (%eax),%edx
08673d63 +0x09c1:  mov    -0x50(%ebp),%eax
08673d66 +0x09c4:  mov    %eax,(%esp)
08673d69 +0x09c7:  call   *%edx
08673d6b +0x09c9:  test   %al,%al
08673d6d +0x09cb:  je     08673d76 <+0x9d4>
08673d6f +0x09cd:  mov    $0x1,%eax
08673d74 +0x09d2:  jmp    08673d7b <+0x9d9>
08673d76 +0x09d4:  mov    $0x0,%eax
08673d7b +0x09d9:  test   %al,%al
08673d7d +0x09db:  je     08673ea9 <+0xb07>
08673d83 +0x09e1:  mov    0x8(%ebp),%eax
08673d86 +0x09e4:  mov    %eax,(%esp)
08673d89 +0x09e7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08673d8e +0x09ec:  lea    -0xdc(%ebp),%edx
08673d94 +0x09f2:  mov    %edx,0x8(%esp)
08673d98 +0x09f6:  mov    %eax,0x4(%esp)
08673d9c +0x09fa:  movl   $0x1,(%esp)
08673da3 +0x0a01:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
08673da8 +0x0a06:  mov    %eax,%esi
08673daa +0x0a08:  mov    -0x50(%ebp),%eax
08673dad +0x0a0b:  mov    %eax,(%esp)
08673db0 +0x0a0e:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08673db5 +0x0a13:  mov    %eax,%ebx
08673db7 +0x0a15:  mov    -0x137(%ebp),%eax
08673dbd +0x0a1b:  mov    %eax,%edi
08673dbf +0x0a1d:  mov    0x8(%ebp),%eax
08673dc2 +0x0a20:  mov    %eax,(%esp)
08673dc5 +0x0a23:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673dca +0x0a28:  movl   $0x0,0x24(%esp)
08673dd2 +0x0a30:  movl   $0x0,0x20(%esp)
08673dda +0x0a38:  movl   $0x7,0x1c(%esp)
08673de2 +0x0a40:  mov    %esi,0x18(%esp)
08673de6 +0x0a44:  movl   $0xffffffff,0x14(%esp)
08673dee +0x0a4c:  movl   $0x0,0x10(%esp)
08673df6 +0x0a54:  movl   $0x0,0xc(%esp)
08673dfe +0x0a5c:  mov    %ebx,0x8(%esp)
08673e02 +0x0a60:  mov    %edi,0x4(%esp)
08673e06 +0x0a64:  mov    %eax,(%esp)
08673e09 +0x0a67:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
08673e0e +0x0a6c:  mov    %eax,-0x5c(%ebp)
08673e11 +0x0a6f:  cmpl   $0xffffffff,-0x5c(%ebp)
08673e15 +0x0a73:  jne    08673e21 <+0xa7f>
08673e17 +0x0a75:  mov    $0x4,%ebx
08673e1c +0x0a7a:  jmp    0867495b <+0x15b9>
08673e21 +0x0a7f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08673e28 +0x0a86:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08673e2d +0x0a8b:  mov    %eax,-0x24(%ebp)
08673e30 +0x0a8e:  mov    0x8(%ebp),%eax
08673e33 +0x0a91:  mov    %eax,(%esp)
08673e36 +0x0a94:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673e3b +0x0a99:  lea    -0x99(%ebp),%edx
08673e41 +0x0a9f:  mov    -0x5c(%ebp),%ecx
08673e44 +0x0aa2:  mov    %ecx,0xc(%esp)
08673e48 +0x0aa6:  movl   $0x2,0x8(%esp)
08673e50 +0x0aae:  mov    %eax,0x4(%esp)
08673e54 +0x0ab2:  mov    %edx,(%esp)
08673e57 +0x0ab5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08673e5c +0x0aba:  sub    $0x4,%esp
08673e5f +0x0abd:  mov    -0x92(%ebp),%ebx
08673e65 +0x0ac3:  mov    0x8(%ebp),%eax
08673e68 +0x0ac6:  mov    %eax,(%esp)
08673e6b +0x0ac9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08673e70 +0x0ace:  mov    %eax,(%esp)
08673e73 +0x0ad1:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08673e78 +0x0ad6:  mov    -0x24(%ebp),%edx
08673e7b +0x0ad9:  mov    %edx,0x8(%esp)
08673e7f +0x0add:  mov    %ebx,0x4(%esp)
08673e83 +0x0ae1:  mov    %eax,(%esp)
08673e86 +0x0ae4:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
08673e8b +0x0ae9:  mov    %eax,-0x2c(%ebp)
08673e8e +0x0aec:  movl   $0x0,0x4(%esp)
08673e96 +0x0af4:  lea    -0x139(%ebp),%eax
08673e9c +0x0afa:  mov    %eax,(%esp)
08673e9f +0x0afd:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08673ea4 +0x0b02:  jmp    086742c6 <+0xf24>
08673ea9 +0x0b07:  cmpl   $0x0,-0x50(%ebp)
08673ead +0x0b0b:  je     08673ee3 <+0xb41>
08673eaf +0x0b0d:  mov    -0x50(%ebp),%eax
08673eb2 +0x0b10:  mov    (%eax),%eax
08673eb4 +0x0b12:  add    $0x14,%eax
08673eb7 +0x0b15:  mov    (%eax),%edx
08673eb9 +0x0b17:  mov    -0x50(%ebp),%eax
08673ebc +0x0b1a:  mov    %eax,(%esp)
08673ebf +0x0b1d:  call   *%edx
08673ec1 +0x0b1f:  test   %al,%al
08673ec3 +0x0b21:  je     08673ee3 <+0xb41>
08673ec5 +0x0b23:  mov    -0x50(%ebp),%eax
08673ec8 +0x0b26:  mov    (%eax),%eax
08673eca +0x0b28:  add    $0xc,%eax
08673ecd +0x0b2b:  mov    (%eax),%edx
08673ecf +0x0b2d:  mov    -0x50(%ebp),%eax
08673ed2 +0x0b30:  mov    %eax,(%esp)
08673ed5 +0x0b33:  call   *%edx
08673ed7 +0x0b35:  cmp    $0x16,%eax
08673eda +0x0b38:  jne    08673ee3 <+0xb41>
08673edc +0x0b3a:  mov    $0x1,%eax
08673ee1 +0x0b3f:  jmp    08673ee8 <+0xb46>
08673ee3 +0x0b41:  mov    $0x0,%eax
08673ee8 +0x0b46:  test   %al,%al
08673eea +0x0b48:  je     08674062 <+0xcc0>
08673ef0 +0x0b4e:  movzbl -0x138(%ebp),%eax
08673ef7 +0x0b55:  cmp    $0x5,%al
08673ef9 +0x0b57:  jne    08674058 <+0xcb6>
08673eff +0x0b5d:  lea    -0x139(%ebp),%eax
08673f05 +0x0b63:  mov    %eax,(%esp)
08673f08 +0x0b66:  call   08336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>  ; user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
08673f0d +0x0b6b:  xor    $0x1,%eax
08673f10 +0x0b6e:  test   %al,%al
08673f12 +0x0b70:  je     08673f1e <+0xb7c>
08673f14 +0x0b72:  mov    $0x11,%ebx
08673f19 +0x0b77:  jmp    0867495b <+0x15b9>
08673f1e +0x0b7c:  mov    0x8(%ebp),%eax
08673f21 +0x0b7f:  mov    %eax,(%esp)
08673f24 +0x0b82:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08673f29 +0x0b87:  movl   $0x0,0x4c(%esp)
08673f31 +0x0b8f:  movl   $0x1,0x48(%esp)
08673f39 +0x0b97:  movl   $0x3,0x44(%esp)
08673f41 +0x0b9f:  mov    -0x139(%ebp),%edx
08673f47 +0x0ba5:  mov    %edx,0x4(%esp)
08673f4b +0x0ba9:  mov    -0x135(%ebp),%edx
08673f51 +0x0baf:  mov    %edx,0x8(%esp)
08673f55 +0x0bb3:  mov    -0x131(%ebp),%edx
08673f5b +0x0bb9:  mov    %edx,0xc(%esp)
08673f5f +0x0bbd:  mov    -0x12d(%ebp),%edx
08673f65 +0x0bc3:  mov    %edx,0x10(%esp)
08673f69 +0x0bc7:  mov    -0x129(%ebp),%edx
08673f6f +0x0bcd:  mov    %edx,0x14(%esp)
08673f73 +0x0bd1:  mov    -0x125(%ebp),%edx
08673f79 +0x0bd7:  mov    %edx,0x18(%esp)
08673f7d +0x0bdb:  mov    -0x121(%ebp),%edx
08673f83 +0x0be1:  mov    %edx,0x1c(%esp)
08673f87 +0x0be5:  mov    -0x11d(%ebp),%edx
08673f8d +0x0beb:  mov    %edx,0x20(%esp)
08673f91 +0x0bef:  mov    -0x119(%ebp),%edx
08673f97 +0x0bf5:  mov    %edx,0x24(%esp)
08673f9b +0x0bf9:  mov    -0x115(%ebp),%edx
08673fa1 +0x0bff:  mov    %edx,0x28(%esp)
08673fa5 +0x0c03:  mov    -0x111(%ebp),%edx
08673fab +0x0c09:  mov    %edx,0x2c(%esp)
08673faf +0x0c0d:  mov    -0x10d(%ebp),%edx
08673fb5 +0x0c13:  mov    %edx,0x30(%esp)
08673fb9 +0x0c17:  mov    -0x109(%ebp),%edx
08673fbf +0x0c1d:  mov    %edx,0x34(%esp)
08673fc3 +0x0c21:  mov    -0x105(%ebp),%edx
08673fc9 +0x0c27:  mov    %edx,0x38(%esp)
08673fcd +0x0c2b:  mov    -0x101(%ebp),%edx
08673fd3 +0x0c31:  mov    %edx,0x3c(%esp)
08673fd7 +0x0c35:  movzbl -0xfd(%ebp),%edx
08673fde +0x0c3c:  mov    %dl,0x40(%esp)
08673fe2 +0x0c40:  mov    %eax,(%esp)
08673fe5 +0x0c43:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08673fea +0x0c48:  mov    %eax,-0x5c(%ebp)
08673fed +0x0c4b:  cmpl   $0x0,-0x5c(%ebp)
08673ff1 +0x0c4f:  jns    08673ffd <+0xc5b>
08673ff3 +0x0c51:  mov    $0x4,%ebx
08673ff8 +0x0c56:  jmp    0867495b <+0x15b9>
08673ffd +0x0c5b:  mov    -0x50(%ebp),%eax
08674000 +0x0c5e:  mov    %eax,(%esp)
08674003 +0x0c61:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08674008 +0x0c66:  mov    %eax,%esi
0867400a +0x0c68:  mov    -0x50(%ebp),%eax
0867400d +0x0c6b:  mov    %eax,(%esp)
08674010 +0x0c6e:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08674015 +0x0c73:  mov    %eax,%ebx
08674017 +0x0c75:  mov    0x8(%ebp),%eax
0867401a +0x0c78:  mov    %eax,(%esp)
0867401d +0x0c7b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08674022 +0x0c80:  mov    %eax,(%esp)
08674025 +0x0c83:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0867402a +0x0c88:  mov    %esi,0x14(%esp)
0867402e +0x0c8c:  mov    %ebx,0x10(%esp)
08674032 +0x0c90:  movl   $0x19,0xc(%esp)
0867403a +0x0c98:  mov    -0x5c(%ebp),%edx
0867403d +0x0c9b:  mov    %edx,0x8(%esp)
08674041 +0x0c9f:  lea    -0x139(%ebp),%edx
08674047 +0x0ca5:  mov    %edx,0x4(%esp)
0867404b +0x0ca9:  mov    %eax,(%esp)
0867404e +0x0cac:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
08674053 +0x0cb1:  jmp    086742c6 <+0xf24>
08674058 +0x0cb6:  mov    $0x11,%ebx
0867405d +0x0cbb:  jmp    0867495b <+0x15b9>
08674062 +0x0cc0:  mov    -0x50(%ebp),%eax
08674065 +0x0cc3:  mov    (%eax),%eax
08674067 +0x0cc5:  add    $0x4c,%eax
0867406a +0x0cc8:  mov    (%eax),%edx
0867406c +0x0cca:  mov    -0x50(%ebp),%eax
0867406f +0x0ccd:  mov    %eax,(%esp)
08674072 +0x0cd0:  call   *%edx
08674074 +0x0cd2:  test   %al,%al
08674076 +0x0cd4:  je     08674109 <+0xd67>
0867407c +0x0cda:  mov    -0x50(%ebp),%eax
0867407f +0x0cdd:  mov    (%eax),%eax
08674081 +0x0cdf:  add    $0x50,%eax
08674084 +0x0ce2:  mov    (%eax),%edx
08674086 +0x0ce4:  mov    -0x50(%ebp),%eax
08674089 +0x0ce7:  mov    %eax,(%esp)
0867408c +0x0cea:  call   *%edx
0867408e +0x0cec:  mov    %eax,%edi
08674090 +0x0cee:  mov    -0x50(%ebp),%eax
08674093 +0x0cf1:  mov    %eax,(%esp)
08674096 +0x0cf4:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0867409b +0x0cf9:  mov    %eax,%esi
0867409d +0x0cfb:  mov    -0x50(%ebp),%eax
086740a0 +0x0cfe:  mov    %eax,(%esp)
086740a3 +0x0d01:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
086740a8 +0x0d06:  mov    %eax,%ebx
086740aa +0x0d08:  mov    -0x50(%ebp),%eax
086740ad +0x0d0b:  mov    %eax,(%esp)
086740b0 +0x0d0e:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
086740b5 +0x0d13:  mov    %eax,%edx
086740b7 +0x0d15:  mov    -0x137(%ebp),%eax
086740bd +0x0d1b:  mov    %eax,-0x2bc(%ebp)
086740c3 +0x0d21:  mov    &_ZN10GlobalData20g_randomOptionHandleE,%ecx
086740c9 +0x0d27:  lea    -0x139(%ebp),%eax
086740cf +0x0d2d:  add    $0x25,%eax
086740d2 +0x0d30:  mov    %eax,0x18(%esp)
086740d6 +0x0d34:  mov    %edi,0x14(%esp)
086740da +0x0d38:  mov    %esi,0x10(%esp)
086740de +0x0d3c:  mov    %ebx,0xc(%esp)
086740e2 +0x0d40:  mov    %edx,0x8(%esp)
086740e6 +0x0d44:  mov    -0x2bc(%ebp),%eax
086740ec +0x0d4a:  mov    %eax,0x4(%esp)
086740f0 +0x0d4e:  mov    %ecx,(%esp)
086740f3 +0x0d51:  call   085f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>  ; random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*)
086740f8 +0x0d56:  xor    $0x1,%eax
086740fb +0x0d59:  test   %al,%al
086740fd +0x0d5b:  je     08674109 <+0xd67>
086740ff +0x0d5d:  mov    $0x11,%ebx
08674104 +0x0d62:  jmp    0867495b <+0x15b9>
08674109 +0x0d67:  mov    0x8(%ebp),%eax
0867410c +0x0d6a:  mov    %eax,(%esp)
0867410f +0x0d6d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08674114 +0x0d72:  movl   $0x1,0x4c(%esp)
0867411c +0x0d7a:  movl   $0x1,0x48(%esp)
08674124 +0x0d82:  movl   $0x3,0x44(%esp)
0867412c +0x0d8a:  mov    -0x139(%ebp),%edx
08674132 +0x0d90:  mov    %edx,0x4(%esp)
08674136 +0x0d94:  mov    -0x135(%ebp),%edx
0867413c +0x0d9a:  mov    %edx,0x8(%esp)
08674140 +0x0d9e:  mov    -0x131(%ebp),%edx
08674146 +0x0da4:  mov    %edx,0xc(%esp)
0867414a +0x0da8:  mov    -0x12d(%ebp),%edx
08674150 +0x0dae:  mov    %edx,0x10(%esp)
08674154 +0x0db2:  mov    -0x129(%ebp),%edx
0867415a +0x0db8:  mov    %edx,0x14(%esp)
0867415e +0x0dbc:  mov    -0x125(%ebp),%edx
08674164 +0x0dc2:  mov    %edx,0x18(%esp)
08674168 +0x0dc6:  mov    -0x121(%ebp),%edx
0867416e +0x0dcc:  mov    %edx,0x1c(%esp)
08674172 +0x0dd0:  mov    -0x11d(%ebp),%edx
08674178 +0x0dd6:  mov    %edx,0x20(%esp)
0867417c +0x0dda:  mov    -0x119(%ebp),%edx
08674182 +0x0de0:  mov    %edx,0x24(%esp)
08674186 +0x0de4:  mov    -0x115(%ebp),%edx
0867418c +0x0dea:  mov    %edx,0x28(%esp)
08674190 +0x0dee:  mov    -0x111(%ebp),%edx
08674196 +0x0df4:  mov    %edx,0x2c(%esp)
0867419a +0x0df8:  mov    -0x10d(%ebp),%edx
086741a0 +0x0dfe:  mov    %edx,0x30(%esp)
086741a4 +0x0e02:  mov    -0x109(%ebp),%edx
086741aa +0x0e08:  mov    %edx,0x34(%esp)
086741ae +0x0e0c:  mov    -0x105(%ebp),%edx
086741b4 +0x0e12:  mov    %edx,0x38(%esp)
086741b8 +0x0e16:  mov    -0x101(%ebp),%edx
086741be +0x0e1c:  mov    %edx,0x3c(%esp)
086741c2 +0x0e20:  movzbl -0xfd(%ebp),%edx
086741c9 +0x0e27:  mov    %dl,0x40(%esp)
086741cd +0x0e2b:  mov    %eax,(%esp)
086741d0 +0x0e2e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086741d5 +0x0e33:  mov    %eax,-0x5c(%ebp)
086741d8 +0x0e36:  cmpl   $0xffffffff,-0x5c(%ebp)
086741dc +0x0e3a:  jne    086741e8 <+0xe46>
086741de +0x0e3c:  mov    $0x4,%ebx
086741e3 +0x0e41:  jmp    0867495b <+0x15b9>
086741e8 +0x0e46:  mov    -0x174(%ebp),%eax
086741ee +0x0e4c:  cmp    $0x28becb,%eax
086741f3 +0x0e51:  jne    08674240 <+0xe9e>
086741f5 +0x0e53:  mov    0x8(%ebp),%eax
086741f8 +0x0e56:  mov    %eax,(%esp)
086741fb +0x0e59:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08674200 +0x0e5e:  movl   $0x1,0x14(%esp)
08674208 +0x0e66:  movl   $0x3,0x10(%esp)
08674210 +0x0e6e:  movl   $0x1,0xc(%esp)
08674218 +0x0e76:  mov    0xc(%ebp),%edx
0867421b +0x0e79:  mov    %edx,0x8(%esp)
0867421f +0x0e7d:  movl   $0x1,0x4(%esp)
08674227 +0x0e85:  mov    %eax,(%esp)
0867422a +0x0e88:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867422f +0x0e8d:  xor    $0x1,%eax
08674232 +0x0e90:  test   %al,%al
08674234 +0x0e92:  je     08674240 <+0xe9e>
08674236 +0x0e94:  mov    $0x11,%ebx
0867423b +0x0e99:  jmp    0867495b <+0x15b9>
08674240 +0x0e9e:  lea    -0x139(%ebp),%eax
08674246 +0x0ea4:  mov    %eax,(%esp)
08674249 +0x0ea7:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0867424e +0x0eac:  mov    %eax,-0x2c(%ebp)
08674251 +0x0eaf:  cmpl   $0x0,-0x50(%ebp)
08674255 +0x0eb3:  je     086742c6 <+0xf24>
08674257 +0x0eb5:  movl   $0x0,-0xe0(%ebp)
08674261 +0x0ebf:  mov    -0x132(%ebp),%eax
08674267 +0x0ec5:  movswl %ax,%ebx
0867426a +0x0ec8:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
0867426f +0x0ecd:  lea    -0xe0(%ebp),%edx
08674275 +0x0ed3:  mov    %edx,0x14(%esp)
08674279 +0x0ed7:  movl   $0x0,0x10(%esp)
08674281 +0x0edf:  mov    %ebx,0xc(%esp)
08674285 +0x0ee3:  mov    -0x50(%ebp),%edx
08674288 +0x0ee6:  mov    %edx,0x8(%esp)
0867428c +0x0eea:  lea    -0x139(%ebp),%edx
08674292 +0x0ef0:  mov    %edx,0x4(%esp)
08674296 +0x0ef4:  mov    %eax,(%esp)
08674299 +0x0ef7:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
0867429e +0x0efc:  mov    -0xe0(%ebp),%eax
086742a4 +0x0f02:  mov    %eax,%ebx
086742a6 +0x0f04:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
086742ab +0x0f09:  mov    %ebx,0xc(%esp)
086742af +0x0f0d:  mov    0x8(%ebp),%edx
086742b2 +0x0f10:  mov    %edx,0x8(%esp)
086742b6 +0x0f14:  movl   $0x7,0x4(%esp)
086742be +0x0f1c:  mov    %eax,(%esp)
086742c1 +0x0f1f:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
086742c6 +0x0f24:  mov    -0x174(%ebp),%eax
086742cc +0x0f2a:  mov    %eax,0x4(%esp)
086742d0 +0x0f2e:  mov    0x8(%ebp),%eax
086742d3 +0x0f31:  mov    %eax,(%esp)
086742d6 +0x0f34:  call   08673342 <_ZN5CUser16IsOldLotteryItemEj>  ; CUser::IsOldLotteryItem(unsigned int)
086742db +0x0f39:  mov    %al,-0x25(%ebp)
086742de +0x0f3c:  cmpb   $0x0,-0x25(%ebp)
086742e2 +0x0f40:  je     08674307 <+0xf65>
086742e4 +0x0f42:  movl   $0x0,0xc(%esp)
086742ec +0x0f4a:  movl   $0x0,0x8(%esp)
086742f4 +0x0f52:  movl   $0x4,0x4(%esp)
086742fc +0x0f5a:  mov    0x8(%ebp),%eax
086742ff +0x0f5d:  mov    %eax,(%esp)
08674302 +0x0f60:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08674307 +0x0f65:  movl   $0x0,-0x20(%ebp)
0867430e +0x0f6c:  mov    -0x174(%ebp),%ebx
08674314 +0x0f72:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08674319 +0x0f77:  mov    %ebx,0x4(%esp)
0867431d +0x0f7b:  mov    %eax,(%esp)
08674320 +0x0f7e:  call   0835fb5a <_ZNK12CDataManager21find_lottery_use_costEj>  ; CDataManager::find_lottery_use_cost(unsigned int) const
08674325 +0x0f83:  mov    %eax,-0x20(%ebp)
08674328 +0x0f86:  cmpl   $0x0,-0x20(%ebp)
0867432c +0x0f8a:  setne  %al
0867432f +0x0f8d:  test   %al,%al
08674331 +0x0f8f:  je     0867444d <+0x10ab>
08674337 +0x0f95:  mov    -0x20(%ebp),%ebx
0867433a +0x0f98:  mov    0x8(%ebp),%eax
0867433d +0x0f9b:  mov    %eax,(%esp)
08674340 +0x0f9e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08674345 +0x0fa3:  movl   $0x1,0xc(%esp)
0867434d +0x0fab:  movl   $0x2d,0x8(%esp)
08674355 +0x0fb3:  mov    %ebx,0x4(%esp)
08674359 +0x0fb7:  mov    %eax,(%esp)
0867435c +0x0fba:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08674361 +0x0fbf:  lea    -0xec(%ebp),%eax
08674367 +0x0fc5:  mov    %eax,(%esp)
0867436a +0x0fc8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867436f +0x0fcd:  lea    -0xec(%ebp),%eax
08674375 +0x0fd3:  mov    %eax,(%esp)
08674378 +0x0fd6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0867437d +0x0fdb:  movl   $0xe,0x8(%esp)
08674385 +0x0fe3:  movl   $0x0,0x4(%esp)
0867438d +0x0feb:  lea    -0xec(%ebp),%eax
08674393 +0x0ff1:  mov    %eax,(%esp)
08674396 +0x0ff4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867439b +0x0ff9:  movl   $0x0,0x4(%esp)
086743a3 +0x1001:  lea    -0xec(%ebp),%eax
086743a9 +0x1007:  mov    %eax,(%esp)
086743ac +0x100a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086743b1 +0x100f:  movl   $0x1,0x4(%esp)
086743b9 +0x1017:  lea    -0xec(%ebp),%eax
086743bf +0x101d:  mov    %eax,(%esp)
086743c2 +0x1020:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086743c7 +0x1025:  mov    0x8(%ebp),%eax
086743ca +0x1028:  mov    %eax,(%esp)
086743cd +0x102b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086743d2 +0x1030:  lea    -0xec(%ebp),%edx
086743d8 +0x1036:  mov    %edx,0xc(%esp)
086743dc +0x103a:  movl   $0x0,0x8(%esp)
086743e4 +0x1042:  movl   $0x1,0x4(%esp)
086743ec +0x104a:  mov    %eax,(%esp)
086743ef +0x104d:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
086743f4 +0x1052:  movl   $0x1,0x4(%esp)
086743fc +0x105a:  lea    -0xec(%ebp),%eax
08674402 +0x1060:  mov    %eax,(%esp)
08674405 +0x1063:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867440a +0x1068:  lea    -0xec(%ebp),%eax
08674410 +0x106e:  mov    %eax,0x4(%esp)
08674414 +0x1072:  mov    0x8(%ebp),%eax
08674417 +0x1075:  mov    %eax,(%esp)
0867441a +0x1078:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867441f +0x107d:  jmp    0867443f <+0x109d>
08674421 +0x107f:  mov    %edx,%ebx
08674423 +0x1081:  mov    %eax,%esi
08674425 +0x1083:  lea    -0xec(%ebp),%eax
0867442b +0x1089:  mov    %eax,(%esp)
0867442e +0x108c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08674433 +0x1091:  mov    %esi,%eax
08674435 +0x1093:  mov    %ebx,%edx
08674437 +0x1095:  mov    %eax,(%esp)
0867443a +0x1098:  call   08ae3750 <_Unwind_Resume>
0867443f +0x109d:  lea    -0xec(%ebp),%eax
08674445 +0x10a3:  mov    %eax,(%esp)
08674448 +0x10a6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867444d +0x10ab:  lea    -0xc4(%ebp),%eax
08674453 +0x10b1:  mov    %eax,(%esp)
08674456 +0x10b4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867445b +0x10b9:  movl   $0x1d,0x8(%esp)
08674463 +0x10c1:  movl   $0x1,0x4(%esp)
0867446b +0x10c9:  lea    -0xc4(%ebp),%eax
08674471 +0x10cf:  mov    %eax,(%esp)
08674474 +0x10d2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08674479 +0x10d7:  movl   $0x1,0x4(%esp)
08674481 +0x10df:  lea    -0xc4(%ebp),%eax
08674487 +0x10e5:  mov    %eax,(%esp)
0867448a +0x10e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867448f +0x10ed:  mov    0xc(%ebp),%eax
08674492 +0x10f0:  mov    %eax,0x4(%esp)
08674496 +0x10f4:  lea    -0xc4(%ebp),%eax
0867449c +0x10fa:  mov    %eax,(%esp)
0867449f +0x10fd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086744a4 +0x1102:  mov    -0x5c(%ebp),%eax
086744a7 +0x1105:  mov    %eax,0x4(%esp)
086744ab +0x1109:  lea    -0xc4(%ebp),%eax
086744b1 +0x110f:  mov    %eax,(%esp)
086744b4 +0x1112:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086744b9 +0x1117:  mov    -0x137(%ebp),%eax
086744bf +0x111d:  mov    %eax,0x4(%esp)
086744c3 +0x1121:  lea    -0xc4(%ebp),%eax
086744c9 +0x1127:  mov    %eax,(%esp)
086744cc +0x112a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086744d1 +0x112f:  mov    -0x2c(%ebp),%eax
086744d4 +0x1132:  mov    %eax,0x4(%esp)
086744d8 +0x1136:  lea    -0xc4(%ebp),%eax
086744de +0x113c:  mov    %eax,(%esp)
086744e1 +0x113f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086744e6 +0x1144:  movzwl -0x12e(%ebp),%eax
086744ed +0x114b:  movzwl %ax,%eax
086744f0 +0x114e:  mov    %eax,0x4(%esp)
086744f4 +0x1152:  lea    -0xc4(%ebp),%eax
086744fa +0x1158:  mov    %eax,(%esp)
086744fd +0x115b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674502 +0x1160:  lea    -0x139(%ebp),%eax
08674508 +0x1166:  mov    %eax,(%esp)
0867450b +0x1169:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08674510 +0x116e:  movzbl %al,%eax
08674513 +0x1171:  mov    %eax,0x4(%esp)
08674517 +0x1175:  lea    -0xc4(%ebp),%eax
0867451d +0x117b:  mov    %eax,(%esp)
08674520 +0x117e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08674525 +0x1183:  lea    -0x139(%ebp),%eax
0867452b +0x1189:  add    $0x11,%eax
0867452e +0x118c:  mov    %eax,(%esp)
08674531 +0x118f:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08674536 +0x1194:  movzbl %al,%eax
08674539 +0x1197:  mov    %eax,0x4(%esp)
0867453d +0x119b:  lea    -0xc4(%ebp),%eax
08674543 +0x11a1:  mov    %eax,(%esp)
08674546 +0x11a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867454b +0x11a9:  lea    -0x139(%ebp),%eax
08674551 +0x11af:  add    $0x11,%eax
08674554 +0x11b2:  mov    %eax,(%esp)
08674557 +0x11b5:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0867455c +0x11ba:  movzwl %ax,%eax
0867455f +0x11bd:  mov    %eax,0x4(%esp)
08674563 +0x11c1:  lea    -0xc4(%ebp),%eax
08674569 +0x11c7:  mov    %eax,(%esp)
0867456c +0x11ca:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674571 +0x11cf:  lea    -0x139(%ebp),%eax
08674577 +0x11d5:  mov    %eax,(%esp)
0867457a +0x11d8:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0867457f +0x11dd:  test   %al,%al
08674581 +0x11df:  je     0867466d <+0x12cb>
08674587 +0x11e5:  movl   $0x1e,0x4(%esp)
0867458f +0x11ed:  lea    -0xc4(%ebp),%eax
08674595 +0x11f3:  mov    %eax,(%esp)
08674598 +0x11f6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867459d +0x11fb:  mov    -0x132(%ebp),%ebx
086745a3 +0x1201:  mov    0x8(%ebp),%eax
086745a6 +0x1204:  mov    %eax,(%esp)
086745a9 +0x1207:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086745ae +0x120c:  mov    %eax,(%esp)
086745b1 +0x120f:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
086745b6 +0x1214:  mov    %ebx,0x4(%esp)
086745ba +0x1218:  mov    %eax,(%esp)
086745bd +0x121b:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
086745c2 +0x1220:  movl   $0x1e,0x8(%esp)
086745ca +0x1228:  mov    %eax,0x4(%esp)
086745ce +0x122c:  lea    -0xc4(%ebp),%eax
086745d4 +0x1232:  mov    %eax,(%esp)
086745d7 +0x1235:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
086745dc +0x123a:  movl   $0x4,0x4(%esp)
086745e4 +0x1242:  lea    -0xc4(%ebp),%eax
086745ea +0x1248:  mov    %eax,(%esp)
086745ed +0x124b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086745f2 +0x1250:  mov    -0x132(%ebp),%ebx
086745f8 +0x1256:  mov    0x8(%ebp),%eax
086745fb +0x1259:  mov    %eax,(%esp)
086745fe +0x125c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08674603 +0x1261:  mov    %eax,(%esp)
08674606 +0x1264:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0867460b +0x1269:  mov    %ebx,0x4(%esp)
0867460f +0x126d:  mov    %eax,(%esp)
08674612 +0x1270:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
08674617 +0x1275:  mov    %eax,-0x1c(%ebp)
0867461a +0x1278:  cmpl   $0x0,-0x1c(%ebp)
0867461e +0x127c:  je     0867463f <+0x129d>
08674620 +0x127e:  mov    -0x1c(%ebp),%eax
08674623 +0x1281:  movl   $0x4,0x8(%esp)
0867462b +0x1289:  mov    %eax,0x4(%esp)
0867462f +0x128d:  lea    -0xc4(%ebp),%eax
08674635 +0x1293:  mov    %eax,(%esp)
08674638 +0x1296:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0867463d +0x129b:  jmp    0867466d <+0x12cb>
0867463f +0x129d:  lea    -0xf0(%ebp),%eax
08674645 +0x12a3:  mov    %eax,(%esp)
08674648 +0x12a6:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
0867464d +0x12ab:  lea    -0xf0(%ebp),%eax
08674653 +0x12b1:  movl   $0x4,0x8(%esp)
0867465b +0x12b9:  mov    %eax,0x4(%esp)
0867465f +0x12bd:  lea    -0xc4(%ebp),%eax
08674665 +0x12c3:  mov    %eax,(%esp)
08674668 +0x12c6:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0867466d +0x12cb:  lea    -0x139(%ebp),%eax
08674673 +0x12d1:  mov    %eax,0x4(%esp)
08674677 +0x12d5:  lea    -0xc4(%ebp),%eax
0867467d +0x12db:  mov    %eax,(%esp)
08674680 +0x12de:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08674685 +0x12e3:  movl   $0x1,0x4(%esp)
0867468d +0x12eb:  lea    -0xc4(%ebp),%eax
08674693 +0x12f1:  mov    %eax,(%esp)
08674696 +0x12f4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867469b +0x12f9:  lea    -0xc4(%ebp),%eax
086746a1 +0x12ff:  mov    %eax,0x4(%esp)
086746a5 +0x1303:  mov    0x8(%ebp),%eax
086746a8 +0x1306:  mov    %eax,(%esp)
086746ab +0x1309:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086746b0 +0x130e:  lea    -0x139(%ebp),%eax
086746b6 +0x1314:  mov    %eax,(%esp)
086746b9 +0x1317:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086746be +0x131c:  test   %al,%al
086746c0 +0x131e:  setne  %al
086746c3 +0x1321:  test   %al,%al
086746c5 +0x1323:  je     08674707 <+0x1365>
086746c7 +0x1325:  lea    -0x139(%ebp),%eax
086746cd +0x132b:  mov    %eax,(%esp)
086746d0 +0x132e:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086746d5 +0x1333:  movzbl %al,%edx
086746d8 +0x1336:  mov    -0x137(%ebp),%eax
086746de +0x133c:  mov    0x8(%ebp),%ecx
086746e1 +0x133f:  add    $0x79700,%ecx
086746e7 +0x1345:  movl   $0x1,0x10(%esp)
086746ef +0x134d:  mov    %edx,0xc(%esp)
086746f3 +0x1351:  movl   $0x0,0x8(%esp)
086746fb +0x1359:  mov    %eax,0x4(%esp)
086746ff +0x135d:  mov    %ecx,(%esp)
08674702 +0x1360:  call   08684ca0 <_ZN15cUserHistoryLog11UpgradeItemEiiib>  ; cUserHistoryLog::UpgradeItem(int, int, int, bool)
08674707 +0x1365:  cmpl   $0x0,-0x54(%ebp)
0867470b +0x1369:  je     08674923 <+0x1581>
08674711 +0x136f:  cmpl   $0x0,-0x50(%ebp)
08674715 +0x1373:  je     08674923 <+0x1581>
0867471b +0x1379:  mov    -0x54(%ebp),%eax
0867471e +0x137c:  mov    %eax,(%esp)
08674721 +0x137f:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08674726 +0x1384:  test   %al,%al
08674728 +0x1386:  je     08674748 <+0x13a6>
0867472a +0x1388:  mov    -0x54(%ebp),%eax
0867472d +0x138b:  mov    (%eax),%eax
0867472f +0x138d:  add    $0xc,%eax
08674732 +0x1390:  mov    (%eax),%edx
08674734 +0x1392:  mov    -0x54(%ebp),%eax
08674737 +0x1395:  mov    %eax,(%esp)
0867473a +0x1398:  call   *%edx
0867473c +0x139a:  cmp    $0xd,%eax
0867473f +0x139d:  jne    08674748 <+0x13a6>
08674741 +0x139f:  mov    $0x1,%eax
08674746 +0x13a4:  jmp    0867474d <+0x13ab>
08674748 +0x13a6:  mov    $0x0,%eax
0867474d +0x13ab:  test   %al,%al
0867474f +0x13ad:  je     08674923 <+0x1581>
08674755 +0x13b3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867475a +0x13b8:  mov    0x5c0(%eax),%ebx
08674760 +0x13be:  mov    -0x50(%ebp),%eax
08674763 +0x13c1:  mov    %eax,(%esp)
08674766 +0x13c4:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0867476b +0x13c9:  cmp    %eax,%ebx
0867476d +0x13cb:  jle    086747ca <+0x1428>
0867476f +0x13cd:  mov    -0x50(%ebp),%eax
08674772 +0x13d0:  mov    (%eax),%eax
08674774 +0x13d2:  add    $0x10,%eax
08674777 +0x13d5:  mov    (%eax),%edx
08674779 +0x13d7:  mov    -0x50(%ebp),%eax
0867477c +0x13da:  mov    %eax,(%esp)
0867477f +0x13dd:  call   *%edx
08674781 +0x13df:  test   %al,%al
08674783 +0x13e1:  je     086747aa <+0x1408>
08674785 +0x13e3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867478a +0x13e8:  mov    %eax,%ebx
0867478c +0x13ea:  mov    -0x50(%ebp),%eax
0867478f +0x13ed:  mov    (%eax),%eax
08674791 +0x13ef:  add    $0xc,%eax
08674794 +0x13f2:  mov    (%eax),%edx
08674796 +0x13f4:  mov    -0x50(%ebp),%eax
08674799 +0x13f7:  mov    %eax,(%esp)
0867479c +0x13fa:  call   *%edx
0867479e +0x13fc:  movzbl 0x5c4(%ebx,%eax,1),%eax
086747a6 +0x1404:  test   %al,%al
086747a8 +0x1406:  jne    086747ca <+0x1428>
086747aa +0x1408:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086747af +0x140d:  mov    0x5e0(%eax),%ebx
086747b5 +0x1413:  lea    -0x139(%ebp),%eax
086747bb +0x1419:  mov    %eax,(%esp)
086747be +0x141c:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086747c3 +0x1421:  movzbl %al,%eax
086747c6 +0x1424:  cmp    %eax,%ebx
086747c8 +0x1426:  jg     086747d1 <+0x142f>
086747ca +0x1428:  mov    $0x1,%eax
086747cf +0x142d:  jmp    086747d6 <+0x1434>
086747d1 +0x142f:  mov    $0x0,%eax
086747d6 +0x1434:  test   %al,%al
086747d8 +0x1436:  je     08674923 <+0x1581>
086747de +0x143c:  mov    0x8(%ebp),%eax
086747e1 +0x143f:  mov    %eax,(%esp)
086747e4 +0x1442:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
086747e9 +0x1447:  cmp    $0x1,%eax
086747ec +0x144a:  je     0867480e <+0x146c>
086747ee +0x144c:  mov    -0x50(%ebp),%eax
086747f1 +0x144f:  mov    (%eax),%eax
086747f3 +0x1451:  add    $0x4c,%eax
086747f6 +0x1454:  mov    (%eax),%edx
086747f8 +0x1456:  mov    -0x50(%ebp),%eax
086747fb +0x1459:  mov    %eax,(%esp)
086747fe +0x145c:  call   *%edx
08674800 +0x145e:  xor    $0x1,%eax
08674803 +0x1461:  test   %al,%al
08674805 +0x1463:  je     0867480e <+0x146c>
08674807 +0x1465:  mov    $0x1,%eax
0867480c +0x146a:  jmp    08674813 <+0x1471>
0867480e +0x146c:  mov    $0x0,%eax
08674813 +0x1471:  test   %al,%al
08674815 +0x1473:  je     08674923 <+0x1581>
0867481b +0x1479:  lea    -0xfc(%ebp),%eax
08674821 +0x147f:  mov    %eax,(%esp)
08674824 +0x1482:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08674829 +0x1487:  movl   $0x56,0x8(%esp)
08674831 +0x148f:  movl   $0x0,0x4(%esp)
08674839 +0x1497:  lea    -0xfc(%ebp),%eax
0867483f +0x149d:  mov    %eax,(%esp)
08674842 +0x14a0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08674847 +0x14a5:  movl   $0x2,0x4(%esp)
0867484f +0x14ad:  lea    -0xfc(%ebp),%eax
08674855 +0x14b3:  mov    %eax,(%esp)
08674858 +0x14b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867485d +0x14bb:  movl   $0x1,0x4(%esp)
08674865 +0x14c3:  lea    -0xfc(%ebp),%eax
0867486b +0x14c9:  mov    %eax,(%esp)
0867486e +0x14cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08674873 +0x14d1:  mov    0x8(%ebp),%eax
08674876 +0x14d4:  mov    %eax,(%esp)
08674879 +0x14d7:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0867487e +0x14dc:  movzwl %ax,%eax
08674881 +0x14df:  mov    %eax,0x4(%esp)
08674885 +0x14e3:  lea    -0xfc(%ebp),%eax
0867488b +0x14e9:  mov    %eax,(%esp)
0867488e +0x14ec:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674893 +0x14f1:  mov    -0x137(%ebp),%eax
08674899 +0x14f7:  mov    %eax,0x4(%esp)
0867489d +0x14fb:  lea    -0xfc(%ebp),%eax
086748a3 +0x1501:  mov    %eax,(%esp)
086748a6 +0x1504:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086748ab +0x1509:  lea    -0x139(%ebp),%eax
086748b1 +0x150f:  mov    %eax,(%esp)
086748b4 +0x1512:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086748b9 +0x1517:  movzbl %al,%eax
086748bc +0x151a:  mov    %eax,0x4(%esp)
086748c0 +0x151e:  lea    -0xfc(%ebp),%eax
086748c6 +0x1524:  mov    %eax,(%esp)
086748c9 +0x1527:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086748ce +0x152c:  movl   $0x1,0x4(%esp)
086748d6 +0x1534:  lea    -0xfc(%ebp),%eax
086748dc +0x153a:  mov    %eax,(%esp)
086748df +0x153d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086748e4 +0x1542:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086748e9 +0x1547:  lea    -0xfc(%ebp),%edx
086748ef +0x154d:  mov    %edx,0x4(%esp)
086748f3 +0x1551:  mov    %eax,(%esp)
086748f6 +0x1554:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086748fb +0x1559:  jmp    08674915 <+0x1573>
086748fd +0x155b:  mov    %edx,%ebx
086748ff +0x155d:  mov    %eax,%esi
08674901 +0x155f:  lea    -0xfc(%ebp),%eax
08674907 +0x1565:  mov    %eax,(%esp)
0867490a +0x1568:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867490f +0x156d:  mov    %esi,%eax
08674911 +0x156f:  mov    %ebx,%edx
08674913 +0x1571:  jmp    08674938 <+0x1596>
08674915 +0x1573:  lea    -0xfc(%ebp),%eax
0867491b +0x1579:  mov    %eax,(%esp)
0867491e +0x157c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08674923 +0x1581:  mov    $0x0,%ebx
08674928 +0x1586:  lea    -0xc4(%ebp),%eax
0867492e +0x158c:  mov    %eax,(%esp)
08674931 +0x158f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08674936 +0x1594:  jmp    0867495b <+0x15b9>
08674938 +0x1596:  mov    %edx,%ebx
0867493a +0x1598:  mov    %eax,%esi
0867493c +0x159a:  lea    -0xc4(%ebp),%eax
08674942 +0x15a0:  mov    %eax,(%esp)
08674945 +0x15a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867494a +0x15a8:  mov    %esi,%eax
0867494c +0x15aa:  mov    %ebx,%edx
0867494e +0x15ac:  mov    %eax,(%esp)
08674951 +0x15af:  call   08ae3750 <_Unwind_Resume>
08674956 +0x15b4:  mov    $0x11,%ebx
0867495b +0x15b9:  mov    %ebx,%eax
0867495d +0x15bb:  lea    -0xc(%ebp),%esp
08674960 +0x15be:  add    $0x0,%esp
08674963 +0x15c1:  pop    %ebx
08674964 +0x15c2:  pop    %esi
08674965 +0x15c3:  pop    %edi
08674966 +0x15c4:  pop    %ebp
08674967 +0x15c5:  ret
```

## 反编译 C

```c
// CUser::lottery_item @ 0x86733a2

/* CUser::lottery_item(int) */

undefined4 __thiscall CUser::lottery_item(CUser *this,int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  CDataManager *pCVar5;
  int iVar6;
  uint uVar7;
  CInventory *pCVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  CAvatarItemMgr *pCVar13;
  CCreatureMgr *this_00;
  undefined4 uVar14;
  Store *this_01;
  CValueStatistic *pCVar15;
  GameWorld *this_02;
  undefined1 local_2bc [8];
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_280;
  Inven_Item local_26e [7];
  int local_267;
  Inven_Item local_231 [7];
  int local_22a;
  Inven_Item local_1f4 [7];
  int local_1ed;
  Inven_Item local_1b7 [7];
  int local_1b0;
  undefined2 local_17a;
  undefined2 uStack_178;
  undefined2 local_176;
  undefined2 uStack_174;
  undefined4 local_172;
  undefined4 local_16e;
  undefined4 local_16a;
  undefined4 local_166;
  undefined4 local_162;
  undefined4 local_15e;
  undefined4 local_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined1 local_13e;
  Inven_Item local_13d;
  char cStack_13c;
  undefined2 uStack_13b;
  undefined2 uStack_139;
  undefined1 uStack_137;
  int iStack_136;
  undefined1 local_132;
  undefined4 uStack_131;
  undefined4 local_12d;
  undefined4 local_129;
  undefined4 local_125;
  undefined4 local_121;
  undefined4 local_11d;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  undefined4 local_105;
  undefined1 local_101;
  PacketGuard local_100 [12];
  stAvatarExpansionInfo_t local_f4 [4];
  PacketGuard local_f0 [12];
  int local_e4;
  undefined1 local_e0 [24];
  PacketGuard local_c8 [12];
  PacketGuard local_bc [12];
  cMyTrace local_b0 [19];
  undefined1 local_9d [7];
  int local_96;
  int local_60;
  CItem *local_5c;
  CItem *local_58;
  CItem *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  char *local_20;
  
  local_60 = 0;
  Inven_Item::Inven_Item(&local_13d);
  Inven_Item::Inven_Item((Inven_Item *)&local_17a);
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenSlot((int)local_2bc,iVar4);
  local_17a = (undefined2)local_2bc._0_4_;
  uStack_178 = SUB42(local_2bc._0_4_,2);
  local_176 = (undefined2)local_2bc._4_4_;
  uStack_174 = SUB42(local_2bc._4_4_,2);
  local_172 = local_2b4;
  local_16e = local_2b0;
  local_16a = local_2ac;
  local_166 = local_2a8;
  local_162 = local_2a4;
  local_15e = local_2a0;
  local_15a = local_29c;
  local_156 = local_298;
  local_152 = local_294;
  local_14e = local_290;
  local_14a = local_28c;
  local_146 = local_288;
  local_142 = local_284;
  local_13e = local_280;
  iVar4 = CONCAT22(local_176,uStack_178);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_5c = (CItem *)CDataManager::find_item(pCVar5,iVar4);
  if (local_5c == (CItem *)0x0) {
    return 0x15;
  }
  iVar4 = CItem::getUsableLevel(local_5c);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar6 < iVar4) {
    return 0xe;
  }
  local_50 = 0;
  uVar7 = G_CDataManager();
  local_50 = CDataManager::find_lottery_use_cost(uVar7);
  if (local_50 != 0) {
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    local_4c = CInventory::get_money(pCVar8);
    if (local_4c < local_50) {
      return 10;
    }
  }
  iVar4 = CONCAT22(local_176,uStack_178);
  iVar6 = G_CDataManager();
  CItemList::get_lotto_item(*(CItemList **)(iVar6 + 0xc),iVar4,(char *)&local_13d);
  if ((CONCAT22(uStack_139,uStack_13b) == 0) && (0 < iStack_136)) {
    local_48 = iStack_136;
    local_44 = 0x7fffffff;
    pcVar9 = (char *)get_acc_name(this);
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_44 = CDataManager::GetMoneyLimitPerLevel(pCVar5,iVar4,pcVar9);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    local_40 = CInventory::get_money(pCVar8);
    if (local_44 < local_40 + local_48) {
      uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar7 = get_acc_id(this);
      uVar11 = NumberToString(uVar7,0);
      cMyTrace::cMyTrace(local_b0,"int CUser::lottery_item(int)",0x61b9,4);
      cMyTrace::operator()
                (local_b0,"lottery_gold_item:m_id(%s), char_no(%d), money(%d)",uVar11,uVar10,
                 local_48);
      return 0x16;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_3c = CInventory::gain_money(pCVar8,local_48,0x17,1,0);
    if (local_3c < local_48) {
      SendMoneyFullReason(this,0,local_48,local_3c);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    cVar2 = CInventory::delete_item(pCVar8,1,param_1,1,3,1);
    if (cVar2 != '\x01') {
      return 0x11;
    }
    PacketGuard::PacketGuard(local_bc);
                    /* try { // try from 08673763 to 08673887 has its CatchHandler @ 086738a0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0x1d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_bc,param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_bc,local_60);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_bc,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_bc,local_3c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_bc,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_bc,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_bc,(Inven_Item *)g_emptySlot);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
    Send(this,local_bc);
    send_broadcast_lottery_gold_message(this,CONCAT22(local_176,uStack_178),local_48);
    PacketGuard::~PacketGuard(local_bc);
    return 0;
  }
  iVar4 = CONCAT22(local_176,uStack_178);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_58 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
  iVar4 = CONCAT22(uStack_139,uStack_13b);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_54 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
  if ((local_58 != (CItem *)0x0) && (local_54 != (CItem *)0x0)) {
    cVar2 = CItem::is_stackable(local_58);
    if ((cVar2 == '\0') || (iVar4 = (**(code **)(*(int *)local_58 + 0xc))(local_58), iVar4 != 0xd))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((cStack_13c == '\x01') &&
         (iVar4 = (**(code **)(*(int *)local_54 + 0xc))(local_54), iVar4 != 0xb)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_38 = 0;
        local_34 = get_rand_int(10000);
        iVar4 = G_CDataManager();
        if (local_34 < *(uint *)(iVar4 + 0x598)) {
          iVar4 = G_CDataManager();
          iVar4 = *(int *)(iVar4 + 0x590);
          iVar6 = G_CDataManager();
          iVar6 = get_rand_int(*(int *)(iVar6 + 0x59c));
          local_38 = iVar4 + iVar6 / 1000;
        }
        else {
          iVar4 = G_CDataManager();
          iVar4 = *(int *)(iVar4 + 0x5a8);
          iVar6 = G_CDataManager();
          if (local_34 < (uint)(iVar4 + *(int *)(iVar6 + 0x598))) {
            iVar4 = G_CDataManager();
            iVar4 = *(int *)(iVar4 + 0x5a0);
            iVar6 = G_CDataManager();
            iVar6 = get_rand_int(*(int *)(iVar6 + 0x5ac));
            local_38 = iVar4 + iVar6 / 1000;
          }
          else {
            iVar4 = G_CDataManager();
            iVar4 = *(int *)(iVar4 + 0x5b0);
            iVar6 = G_CDataManager();
            iVar6 = get_rand_int(*(int *)(iVar6 + 0x5bc));
            local_38 = iVar4 + iVar6 / 1000;
          }
        }
        if ((local_38 < 0) || (0x1f < local_38)) {
          local_38 = 0;
        }
        Inven_Item::SetUpgrade(&local_13d,(uchar)local_38);
      }
    }
  }
  if ((CONCAT22(uStack_139,uStack_13b) == 0) || (CONCAT22(uStack_139,uStack_13b) == -1)) {
    return 0x11;
  }
  pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  iVar4 = CInventory::QuickEmptyCount(pCVar8);
  if (iVar4 < 1) {
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar2 = CInventory::check_empty_count(pCVar8,1,1);
    if (cVar2 != '\x01') {
      return 4;
    }
    iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_17a);
    if (iVar4 < 2) {
LAB_08673b66:
      bVar1 = false;
    }
    else {
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      cVar2 = CInventory::check_empty_count(pCVar8,2,1);
      if (cVar2 == '\x01') goto LAB_08673b66;
      bVar1 = true;
    }
    if (bVar1) {
      return 4;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar2 = CInventory::check_empty_count(pCVar8,3,1);
    if (cVar2 != '\x01') {
      return 4;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar2 = CInventory::check_empty_count(pCVar8,10,1);
    if (cVar2 != '\x01') {
      return 4;
    }
  }
  if (CONCAT22(local_176,uStack_178) == 0x28bfa1) {
    Inven_Item::Inven_Item(local_1b7);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::GetInvenData(pCVar8,0x28bf9d,local_1b7);
    Inven_Item::Inven_Item(local_1f4);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::GetInvenData(pCVar8,0x28bf9e,local_1f4);
    Inven_Item::Inven_Item(local_231);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::GetInvenData(pCVar8,0x28bf9f,local_231);
    Inven_Item::Inven_Item(local_26e);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::GetInvenData(pCVar8,0x28bfa0,local_26e);
    if ((((9 < local_1b0) || (9 < local_1ed)) || (9 < local_22a)) || (9 < local_267)) {
      return 4;
    }
  }
  if (CONCAT22(local_176,uStack_178) != 0x28becb) {
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    cVar2 = CInventory::delete_item(pCVar8,1,param_1,1,3,1);
    if (cVar2 != '\x01') {
      return 0x11;
    }
  }
  local_30 = 0;
  if ((local_54 == (CItem *)0x0) ||
     (cVar2 = (**(code **)(*(int *)local_54 + 0x10))(local_54), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar11 = WongWork::CGenUniqueNo::genIPGNo(1,uVar10,local_e0);
    uVar12 = CItem::getUsablePeriod(local_54);
    uVar10 = CONCAT22(uStack_139,uStack_13b);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_60 = CInventory::AddAvatarItem(pCVar8,uVar10,uVar12,0,0,0xffffffff,uVar11,7,0,0);
    if (local_60 == -1) {
      return 4;
    }
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetInvenSlot((int)local_9d,iVar4);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar13 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    local_30 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar13,local_96,local_28);
    Inven_Item::SetUpgrade(&local_13d,'\0');
  }
  else {
    if (((local_54 == (CItem *)0x0) ||
        (cVar2 = (**(code **)(*(int *)local_54 + 0x14))(local_54), cVar2 == '\0')) ||
       (iVar4 = (**(code **)(*(int *)local_54 + 0xc))(local_54), iVar4 != 0x16)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (cStack_13c != '\x05') {
        return 0x11;
      }
      cVar2 = user_creature::CCreatureItemConverter::SetEggItem(&local_13d);
      if (cVar2 != '\x01') {
        return 0x11;
      }
      uVar10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_60 = CInventory::insertItemIntoInventory
                           (uVar10,CONCAT22(uStack_13b,CONCAT11(cStack_13c,local_13d)),
                            CONCAT13((undefined1)iStack_136,CONCAT12(uStack_137,uStack_139)),
                            CONCAT13(local_132,iStack_136._1_3_),uStack_131,local_12d,local_129,
                            local_125,local_121,local_11d,local_119,local_115,local_111,local_10d,
                            local_109,local_105,local_101,3,1,0);
      if (local_60 < 0) {
        return 4;
      }
      iVar4 = CItem::getExpirationDate(local_54);
      iVar6 = CItem::getUsablePeriod(local_54);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
      user_creature::CCreatureMgr::InsertCreatureItem(this_00,&local_13d,local_60,0x19,iVar6,iVar4);
    }
    else {
      cVar2 = (**(code **)(*(int *)local_54 + 0x4c))(local_54);
      if (cVar2 != '\0') {
        uVar10 = (**(code **)(*(int *)local_54 + 0x50))(local_54);
        uVar11 = CItem::getItemGroupName(local_54);
        uVar12 = CItem::getUsableLevel(local_54);
        uVar14 = CItem::get_rarity(local_54);
        cVar2 = random_option::CRandomOptionItemHandle::give_option
                          (GlobalData::g_randomOptionHandle,CONCAT22(uStack_139,uStack_13b),uVar14,
                           uVar12,uVar11,uVar10,(int)&local_119 + 1);
        if (cVar2 != '\x01') {
          return 0x11;
        }
      }
      uVar10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_60 = CInventory::insertItemIntoInventory
                           (uVar10,CONCAT22(uStack_13b,CONCAT11(cStack_13c,local_13d)),
                            CONCAT13((undefined1)iStack_136,CONCAT12(uStack_137,uStack_139)),
                            CONCAT13(local_132,iStack_136._1_3_),uStack_131,local_12d,local_129,
                            local_125,local_121,local_11d,local_119,local_115,local_111,local_10d,
                            local_109,local_105,local_101,3,1,1);
      if (local_60 == -1) {
        return 4;
      }
      if (CONCAT22(local_176,uStack_178) == 0x28becb) {
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        cVar2 = CInventory::delete_item(pCVar8,1,param_1,1,3,1);
        if (cVar2 != '\x01') {
          return 0x11;
        }
      }
      local_30 = Inven_Item::get_add_info(&local_13d);
      if (local_54 != (CItem *)0x0) {
        local_e4 = 0;
        sVar3 = (short)iStack_136;
        this_01 = (Store *)G_Store();
        Store::GetSellItemPrice(this_01,&local_13d,local_54,sVar3,false,&local_e4);
        iVar4 = local_e4;
        pCVar15 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar15,7,this,iVar4);
      }
    }
  }
  local_29 = IsOldLotteryItem(this,CONCAT22(local_176,uStack_178));
  if (local_29 != '\0') {
    APSystem::CUserProc::ClearActionAndSendtoUser(this,4,0,0);
  }
  local_24 = 0;
  uVar7 = G_CDataManager();
  iVar4 = CDataManager::find_lottery_use_cost(uVar7);
  local_24 = iVar4;
  if (iVar4 != 0) {
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::use_money(pCVar8,iVar4,0x2d,1);
    PacketGuard::PacketGuard(local_f0);
                    /* try { // try from 08674378 to 0867441e has its CatchHandler @ 08674421 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_f0);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_f0,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f0,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f0,1);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::MakeItemPacket(pCVar8,1,0,local_f0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_f0,true);
    Send(this,local_f0);
    PacketGuard::~PacketGuard(local_f0);
  }
  PacketGuard::PacketGuard(local_c8);
                    /* try { // try from 08674474 to 08674828 has its CatchHandler @ 08674938 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c8,1,0x1d);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c8,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c8,param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c8,local_60);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c8,CONCAT22(uStack_139,uStack_13b));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c8,local_30);
  InterfacePacketBuf::put_short
            ((InterfacePacketBuf *)local_c8,(uint)CONCAT11((undefined1)uStack_131,local_132));
  uVar7 = Inven_Item::GetItemAttr(&local_13d);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c8,uVar7 & 0xff);
  uVar7 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_12d + 1));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c8,uVar7 & 0xff);
  uVar7 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_12d + 1));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c8,uVar7 & 0xffff);
  cVar2 = Inven_Item::isAvatarItemType(&local_13d);
  if (cVar2 != '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c8,0x1e);
    iVar4 = iStack_136;
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar13 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    pcVar9 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar13,iVar4);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_c8,pcVar9,0x1e);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c8,4);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    pCVar13 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    local_20 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar13,iStack_136);
    if (local_20 == (char *)0x0) {
      stAvatarExpansionInfo_t::init(local_f4);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_c8,(char *)local_f4,4);
    }
    else {
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_c8,local_20,4);
    }
  }
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_c8,&local_13d);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c8,true);
  Send(this,local_c8);
  cVar2 = Inven_Item::GetUpgrade(&local_13d);
  if (cVar2 != '\0') {
    uVar7 = Inven_Item::GetUpgrade(&local_13d);
    cUserHistoryLog::UpgradeItem
              ((cUserHistoryLog *)(this + 0x79700),CONCAT22(uStack_139,uStack_13b),0,uVar7 & 0xff,
               true);
  }
  if ((local_58 == (CItem *)0x0) || (local_54 == (CItem *)0x0)) goto LAB_08674923;
  cVar2 = CItem::is_stackable(local_58);
  if ((cVar2 == '\0') || (iVar4 = (**(code **)(*(int *)local_58 + 0xc))(local_58), iVar4 != 0xd)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_08674923;
  iVar4 = G_CDataManager();
  iVar4 = *(int *)(iVar4 + 0x5c0);
  iVar6 = CItem::get_rarity(local_54);
  if (iVar6 < iVar4) {
    cVar2 = (**(code **)(*(int *)local_54 + 0x10))(local_54);
    if (cVar2 != '\0') {
      iVar4 = G_CDataManager();
      iVar6 = (**(code **)(*(int *)local_54 + 0xc))(local_54);
      if (*(char *)(iVar4 + 0x5c4 + iVar6) != '\0') goto LAB_086747ca;
    }
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x5e0);
    uVar7 = Inven_Item::GetUpgrade(&local_13d);
    if (iVar4 <= (int)(uVar7 & 0xff)) goto LAB_086747ca;
    bVar1 = false;
  }
  else {
LAB_086747ca:
    bVar1 = true;
  }
  if (bVar1) {
    iVar4 = getMoveSpace(this);
    if ((iVar4 == 1) || (cVar2 = (**(code **)(*(int *)local_54 + 0x4c))(local_54), cVar2 == '\x01'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_100);
                    /* try { // try from 08674842 to 086748fa has its CatchHandler @ 086748fd */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_100,0,0x56);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,1);
      uVar7 = get_unique_id(this);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_100,uVar7 & 0xffff);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_100,CONCAT22(uStack_139,uStack_13b));
      uVar7 = Inven_Item::GetUpgrade(&local_13d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,uVar7 & 0xff);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_100,true);
      this_02 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_02,local_100);
                    /* try { // try from 0867491e to 08674922 has its CatchHandler @ 08674938 */
      PacketGuard::~PacketGuard(local_100);
    }
  }
LAB_08674923:
  PacketGuard::~PacketGuard(local_c8);
  return 0;
}
```
