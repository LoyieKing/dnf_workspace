# MakeItemPacket

`_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard`

`CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fc6bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fc6bc  _ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard
#           CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
# range [0x084fc6bc, 0x084fd6d1]
084fc6bc +0x0000:  push   %ebp
084fc6bd +0x0001:  mov    %esp,%ebp
084fc6bf +0x0003:  push   %esi
084fc6c0 +0x0004:  push   %ebx
084fc6c1 +0x0005:  add    $0xffffff80,%esp
084fc6c4 +0x0008:  mov    0xc(%ebp),%eax
084fc6c7 +0x000b:  cmp    $0x1,%eax
084fc6ca +0x000e:  je     084fc6f5 <+0x39>
084fc6cc +0x0010:  cmp    $0x1,%eax
084fc6cf +0x0013:  jg     084fc6de <+0x22>
084fc6d1 +0x0015:  test   %eax,%eax
084fc6d3 +0x0017:  je     084fd29c <+0xbe0>
084fc6d9 +0x001d:  jmp    084fd6be <+0x1002>
084fc6de +0x0022:  cmp    $0x2,%eax
084fc6e1 +0x0025:  je     084fcd93 <+0x6d7>
084fc6e7 +0x002b:  cmp    $0x3,%eax
084fc6ea +0x002e:  je     084fd063 <+0x9a7>
084fc6f0 +0x0034:  jmp    084fd6be <+0x1002>
084fc6f5 +0x0039:  mov    0x14(%ebp),%eax
084fc6f8 +0x003c:  mov    0x10(%ebp),%edx
084fc6fb +0x003f:  mov    %edx,0x4(%esp)
084fc6ff +0x0043:  mov    %eax,(%esp)
084fc702 +0x0046:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc707 +0x004b:  cmpl   $0x0,0x10(%ebp)
084fc70b +0x004f:  jne    084fc7d6 <+0x11a>
084fc711 +0x0055:  mov    0x14(%ebp),%eax
084fc714 +0x0058:  movl   $0x0,0x4(%esp)
084fc71c +0x0060:  mov    %eax,(%esp)
084fc71f +0x0063:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc724 +0x0068:  mov    0x8(%ebp),%eax
084fc727 +0x006b:  mov    0x4(%eax),%edx
084fc72a +0x006e:  mov    0x14(%ebp),%eax
084fc72d +0x0071:  mov    %edx,0x4(%esp)
084fc731 +0x0075:  mov    %eax,(%esp)
084fc734 +0x0078:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc739 +0x007d:  mov    0x14(%ebp),%eax
084fc73c +0x0080:  movl   $0x0,0x4(%esp)
084fc744 +0x0088:  mov    %eax,(%esp)
084fc747 +0x008b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc74c +0x0090:  mov    0x14(%ebp),%eax
084fc74f +0x0093:  movl   $0x0,0x4(%esp)
084fc757 +0x009b:  mov    %eax,(%esp)
084fc75a +0x009e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc75f +0x00a3:  mov    0x14(%ebp),%eax
084fc762 +0x00a6:  movl   $0x0,0x4(%esp)
084fc76a +0x00ae:  mov    %eax,(%esp)
084fc76d +0x00b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc772 +0x00b6:  mov    0x14(%ebp),%eax
084fc775 +0x00b9:  movl   $0x0,0x4(%esp)
084fc77d +0x00c1:  mov    %eax,(%esp)
084fc780 +0x00c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc785 +0x00c9:  mov    0x14(%ebp),%eax
084fc788 +0x00cc:  movl   $0x0,0x4(%esp)
084fc790 +0x00d4:  mov    %eax,(%esp)
084fc793 +0x00d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc798 +0x00dc:  mov    0x14(%ebp),%eax
084fc79b +0x00df:  movl   $0x0,0x4(%esp)
084fc7a3 +0x00e7:  mov    %eax,(%esp)
084fc7a6 +0x00ea:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc7ab +0x00ef:  mov    0x14(%ebp),%eax
084fc7ae +0x00f2:  movl   $0x0,0x4(%esp)
084fc7b6 +0x00fa:  mov    %eax,(%esp)
084fc7b9 +0x00fd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc7be +0x0102:  mov    0x14(%ebp),%eax
084fc7c1 +0x0105:  movl   $&g_emptySlot,0x4(%esp)
084fc7c9 +0x010d:  mov    %eax,(%esp)
084fc7cc +0x0110:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fc7d1 +0x0115:  jmp    084fd6c5 <+0x1009>
084fc7d6 +0x011a:  cmpl   $0x1,0x10(%ebp)
084fc7da +0x011e:  jne    084fc8b8 <+0x1fc>
084fc7e0 +0x0124:  mov    0x14(%ebp),%eax
084fc7e3 +0x0127:  movl   $0x1,0x4(%esp)
084fc7eb +0x012f:  mov    %eax,(%esp)
084fc7ee +0x0132:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc7f3 +0x0137:  mov    0x8(%ebp),%eax
084fc7f6 +0x013a:  mov    0x8(%eax),%edx
084fc7f9 +0x013d:  mov    0x8(%ebp),%eax
084fc7fc +0x0140:  mov    0xc(%eax),%eax
084fc7ff +0x0143:  add    %eax,%edx
084fc801 +0x0145:  mov    0x8(%ebp),%eax
084fc804 +0x0148:  mov    0x10(%eax),%eax
084fc807 +0x014b:  lea    (%edx,%eax,1),%eax
084fc80a +0x014e:  mov    %eax,%edx
084fc80c +0x0150:  mov    0x14(%ebp),%eax
084fc80f +0x0153:  mov    %edx,0x4(%esp)
084fc813 +0x0157:  mov    %eax,(%esp)
084fc816 +0x015a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc81b +0x015f:  mov    0x14(%ebp),%eax
084fc81e +0x0162:  movl   $0x0,0x4(%esp)
084fc826 +0x016a:  mov    %eax,(%esp)
084fc829 +0x016d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc82e +0x0172:  mov    0x14(%ebp),%eax
084fc831 +0x0175:  movl   $0x0,0x4(%esp)
084fc839 +0x017d:  mov    %eax,(%esp)
084fc83c +0x0180:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc841 +0x0185:  mov    0x14(%ebp),%eax
084fc844 +0x0188:  movl   $0x0,0x4(%esp)
084fc84c +0x0190:  mov    %eax,(%esp)
084fc84f +0x0193:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc854 +0x0198:  mov    0x14(%ebp),%eax
084fc857 +0x019b:  movl   $0x0,0x4(%esp)
084fc85f +0x01a3:  mov    %eax,(%esp)
084fc862 +0x01a6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc867 +0x01ab:  mov    0x14(%ebp),%eax
084fc86a +0x01ae:  movl   $0x0,0x4(%esp)
084fc872 +0x01b6:  mov    %eax,(%esp)
084fc875 +0x01b9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc87a +0x01be:  mov    0x14(%ebp),%eax
084fc87d +0x01c1:  movl   $0x0,0x4(%esp)
084fc885 +0x01c9:  mov    %eax,(%esp)
084fc888 +0x01cc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc88d +0x01d1:  mov    0x14(%ebp),%eax
084fc890 +0x01d4:  movl   $0x0,0x4(%esp)
084fc898 +0x01dc:  mov    %eax,(%esp)
084fc89b +0x01df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc8a0 +0x01e4:  mov    0x14(%ebp),%eax
084fc8a3 +0x01e7:  movl   $&g_emptySlot,0x4(%esp)
084fc8ab +0x01ef:  mov    %eax,(%esp)
084fc8ae +0x01f2:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fc8b3 +0x01f7:  jmp    084fd6c5 <+0x1009>
084fc8b8 +0x01fc:  cmpl   $0x2,0x10(%ebp)
084fc8bc +0x0200:  jne    084fc990 <+0x2d4>
084fc8c2 +0x0206:  mov    0x14(%ebp),%eax
084fc8c5 +0x0209:  movl   $0x2,0x4(%esp)
084fc8cd +0x0211:  mov    %eax,(%esp)
084fc8d0 +0x0214:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc8d5 +0x0219:  mov    0x8(%ebp),%eax
084fc8d8 +0x021c:  mov    (%eax),%eax
084fc8da +0x021e:  mov    %eax,(%esp)
084fc8dd +0x0221:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
084fc8e2 +0x0226:  mov    %eax,%edx
084fc8e4 +0x0228:  mov    0x14(%ebp),%eax
084fc8e7 +0x022b:  mov    %edx,0x4(%esp)
084fc8eb +0x022f:  mov    %eax,(%esp)
084fc8ee +0x0232:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc8f3 +0x0237:  mov    0x14(%ebp),%eax
084fc8f6 +0x023a:  movl   $0x0,0x4(%esp)
084fc8fe +0x0242:  mov    %eax,(%esp)
084fc901 +0x0245:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc906 +0x024a:  mov    0x14(%ebp),%eax
084fc909 +0x024d:  movl   $0x0,0x4(%esp)
084fc911 +0x0255:  mov    %eax,(%esp)
084fc914 +0x0258:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc919 +0x025d:  mov    0x14(%ebp),%eax
084fc91c +0x0260:  movl   $0x0,0x4(%esp)
084fc924 +0x0268:  mov    %eax,(%esp)
084fc927 +0x026b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc92c +0x0270:  mov    0x14(%ebp),%eax
084fc92f +0x0273:  movl   $0x0,0x4(%esp)
084fc937 +0x027b:  mov    %eax,(%esp)
084fc93a +0x027e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc93f +0x0283:  mov    0x14(%ebp),%eax
084fc942 +0x0286:  movl   $0x0,0x4(%esp)
084fc94a +0x028e:  mov    %eax,(%esp)
084fc94d +0x0291:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc952 +0x0296:  mov    0x14(%ebp),%eax
084fc955 +0x0299:  movl   $0x0,0x4(%esp)
084fc95d +0x02a1:  mov    %eax,(%esp)
084fc960 +0x02a4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fc965 +0x02a9:  mov    0x14(%ebp),%eax
084fc968 +0x02ac:  movl   $0x0,0x4(%esp)
084fc970 +0x02b4:  mov    %eax,(%esp)
084fc973 +0x02b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fc978 +0x02bc:  mov    0x14(%ebp),%eax
084fc97b +0x02bf:  movl   $&g_emptySlot,0x4(%esp)
084fc983 +0x02c7:  mov    %eax,(%esp)
084fc986 +0x02ca:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fc98b +0x02cf:  jmp    084fd6c5 <+0x1009>
084fc990 +0x02d4:  mov    0x8(%ebp),%eax
084fc993 +0x02d7:  mov    0x650(%eax),%edx
084fc999 +0x02dd:  mov    0x10(%ebp),%eax
084fc99c +0x02e0:  imul   $0x3d,%eax,%eax
084fc99f +0x02e3:  lea    (%edx,%eax,1),%eax
084fc9a2 +0x02e6:  mov    0x2(%eax),%eax
084fc9a5 +0x02e9:  test   %eax,%eax
084fc9a7 +0x02eb:  je     084fcb84 <+0x4c8>
084fc9ad +0x02f1:  mov    0x8(%ebp),%eax
084fc9b0 +0x02f4:  mov    0x650(%eax),%edx
084fc9b6 +0x02fa:  mov    0x10(%ebp),%eax
084fc9b9 +0x02fd:  imul   $0x3d,%eax,%eax
084fc9bc +0x0300:  lea    (%edx,%eax,1),%eax
084fc9bf +0x0303:  mov    0x2(%eax),%eax
084fc9c2 +0x0306:  mov    %eax,%edx
084fc9c4 +0x0308:  mov    0x14(%ebp),%eax
084fc9c7 +0x030b:  mov    %edx,0x4(%esp)
084fc9cb +0x030f:  mov    %eax,(%esp)
084fc9ce +0x0312:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc9d3 +0x0317:  mov    0x8(%ebp),%eax
084fc9d6 +0x031a:  mov    0x650(%eax),%edx
084fc9dc +0x0320:  mov    0x10(%ebp),%eax
084fc9df +0x0323:  imul   $0x3d,%eax,%eax
084fc9e2 +0x0326:  lea    (%edx,%eax,1),%eax
084fc9e5 +0x0329:  mov    0x7(%eax),%edx
084fc9e8 +0x032c:  mov    0x14(%ebp),%eax
084fc9eb +0x032f:  mov    %edx,0x4(%esp)
084fc9ef +0x0333:  mov    %eax,(%esp)
084fc9f2 +0x0336:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fc9f7 +0x033b:  mov    0x8(%ebp),%eax
084fc9fa +0x033e:  mov    0x650(%eax),%edx
084fca00 +0x0344:  mov    0x10(%ebp),%eax
084fca03 +0x0347:  imul   $0x3d,%eax,%eax
084fca06 +0x034a:  add    %eax,%edx
084fca08 +0x034c:  mov    0x10(%ebp),%eax
084fca0b +0x034f:  mov    %eax,0x8(%esp)
084fca0f +0x0353:  mov    0xc(%ebp),%eax
084fca12 +0x0356:  mov    %eax,0x4(%esp)
084fca16 +0x035a:  mov    %edx,(%esp)
084fca19 +0x035d:  call   084fc651 <_Z24GetIntegratedPvPItemAttrRK10Inven_Item10INVEN_TYPEi>  ; GetIntegratedPvPItemAttr(Inven_Item const&, INVEN_TYPE, int)
084fca1e +0x0362:  movzbl %al,%edx
084fca21 +0x0365:  mov    0x14(%ebp),%eax
084fca24 +0x0368:  mov    %edx,0x4(%esp)
084fca28 +0x036c:  mov    %eax,(%esp)
084fca2b +0x036f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fca30 +0x0374:  mov    0x8(%ebp),%eax
084fca33 +0x0377:  mov    0x650(%eax),%edx
084fca39 +0x037d:  mov    0x10(%ebp),%eax
084fca3c +0x0380:  imul   $0x3d,%eax,%eax
084fca3f +0x0383:  lea    (%edx,%eax,1),%eax
084fca42 +0x0386:  movzwl 0xb(%eax),%eax
084fca46 +0x038a:  movzwl %ax,%edx
084fca49 +0x038d:  mov    0x14(%ebp),%eax
084fca4c +0x0390:  mov    %edx,0x4(%esp)
084fca50 +0x0394:  mov    %eax,(%esp)
084fca53 +0x0397:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fca58 +0x039c:  mov    0x8(%ebp),%eax
084fca5b +0x039f:  mov    0x650(%eax),%edx
084fca61 +0x03a5:  mov    0x10(%ebp),%eax
084fca64 +0x03a8:  imul   $0x3d,%eax,%eax
084fca67 +0x03ab:  lea    (%edx,%eax,1),%eax
084fca6a +0x03ae:  movzbl (%eax),%eax
084fca6d +0x03b1:  movzbl %al,%edx
084fca70 +0x03b4:  mov    0x14(%ebp),%eax
084fca73 +0x03b7:  mov    %edx,0x4(%esp)
084fca77 +0x03bb:  mov    %eax,(%esp)
084fca7a +0x03be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fca7f +0x03c3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fca84 +0x03c8:  mov    %eax,(%esp)
084fca87 +0x03cb:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
084fca8c +0x03d0:  test   %al,%al
084fca8e +0x03d2:  je     084fcaa5 <+0x3e9>
084fca90 +0x03d4:  mov    0x14(%ebp),%eax
084fca93 +0x03d7:  movl   $0x0,0x4(%esp)
084fca9b +0x03df:  mov    %eax,(%esp)
084fca9e +0x03e2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcaa3 +0x03e7:  jmp    084fcacb <+0x40f>
084fcaa5 +0x03e9:  mov    0x8(%ebp),%eax
084fcaa8 +0x03ec:  mov    0x650(%eax),%edx
084fcaae +0x03f2:  mov    0x10(%ebp),%eax
084fcab1 +0x03f5:  imul   $0x3d,%eax,%eax
084fcab4 +0x03f8:  lea    (%edx,%eax,1),%eax
084fcab7 +0x03fb:  mov    0xd(%eax),%eax
084fcaba +0x03fe:  mov    %eax,%edx
084fcabc +0x0400:  mov    0x14(%ebp),%eax
084fcabf +0x0403:  mov    %edx,0x4(%esp)
084fcac3 +0x0407:  mov    %eax,(%esp)
084fcac6 +0x040a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcacb +0x040f:  mov    0x8(%ebp),%eax
084fcace +0x0412:  mov    0x650(%eax),%edx
084fcad4 +0x0418:  mov    0x10(%ebp),%eax
084fcad7 +0x041b:  imul   $0x3d,%eax,%eax
084fcada +0x041e:  lea    (%edx,%eax,1),%eax
084fcadd +0x0421:  add    $0x11,%eax
084fcae0 +0x0424:  mov    %eax,(%esp)
084fcae3 +0x0427:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fcae8 +0x042c:  movzbl %al,%edx
084fcaeb +0x042f:  mov    0x14(%ebp),%eax
084fcaee +0x0432:  mov    %edx,0x4(%esp)
084fcaf2 +0x0436:  mov    %eax,(%esp)
084fcaf5 +0x0439:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fcafa +0x043e:  mov    0x8(%ebp),%eax
084fcafd +0x0441:  mov    0x650(%eax),%edx
084fcb03 +0x0447:  mov    0x10(%ebp),%eax
084fcb06 +0x044a:  imul   $0x3d,%eax,%eax
084fcb09 +0x044d:  lea    (%edx,%eax,1),%eax
084fcb0c +0x0450:  add    $0x11,%eax
084fcb0f +0x0453:  mov    %eax,(%esp)
084fcb12 +0x0456:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084fcb17 +0x045b:  movzwl %ax,%edx
084fcb1a +0x045e:  mov    0x14(%ebp),%eax
084fcb1d +0x0461:  mov    %edx,0x4(%esp)
084fcb21 +0x0465:  mov    %eax,(%esp)
084fcb24 +0x0468:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fcb29 +0x046d:  mov    0x8(%ebp),%eax
084fcb2c +0x0470:  mov    0x650(%eax),%edx
084fcb32 +0x0476:  mov    0x10(%ebp),%eax
084fcb35 +0x0479:  imul   $0x3d,%eax,%eax
084fcb38 +0x047c:  lea    (%edx,%eax,1),%esi
084fcb3b +0x047f:  mov    0x8(%ebp),%eax
084fcb3e +0x0482:  mov    (%eax),%ebx
084fcb40 +0x0484:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084fcb45 +0x0489:  mov    0x20(%eax),%eax
084fcb48 +0x048c:  mov    0x14(%ebp),%edx
084fcb4b +0x048f:  mov    %edx,0xc(%esp)
084fcb4f +0x0493:  mov    %esi,0x8(%esp)
084fcb53 +0x0497:  mov    %ebx,0x4(%esp)
084fcb57 +0x049b:  mov    %eax,(%esp)
084fcb5a +0x049e:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
084fcb5f +0x04a3:  mov    0x8(%ebp),%eax
084fcb62 +0x04a6:  mov    0x650(%eax),%edx
084fcb68 +0x04ac:  mov    0x10(%ebp),%eax
084fcb6b +0x04af:  imul   $0x3d,%eax,%eax
084fcb6e +0x04b2:  add    %eax,%edx
084fcb70 +0x04b4:  mov    0x14(%ebp),%eax
084fcb73 +0x04b7:  mov    %edx,0x4(%esp)
084fcb77 +0x04bb:  mov    %eax,(%esp)
084fcb7a +0x04be:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fcb7f +0x04c3:  jmp    084fd6c5 <+0x1009>
084fcb84 +0x04c8:  mov    0x8(%ebp),%eax
084fcb87 +0x04cb:  mov    0x650(%eax),%edx
084fcb8d +0x04d1:  mov    0x10(%ebp),%eax
084fcb90 +0x04d4:  imul   $0x3d,%eax,%eax
084fcb93 +0x04d7:  lea    (%edx,%eax,1),%eax
084fcb96 +0x04da:  mov    0x2(%eax),%eax
084fcb99 +0x04dd:  test   %eax,%eax
084fcb9b +0x04df:  jne    084fcd43 <+0x687>
084fcba1 +0x04e5:  mov    0x14(%ebp),%eax
084fcba4 +0x04e8:  movl   $0xffffffff,0x4(%esp)
084fcbac +0x04f0:  mov    %eax,(%esp)
084fcbaf +0x04f3:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
084fcbb4 +0x04f8:  mov    0x8(%ebp),%eax
084fcbb7 +0x04fb:  mov    0x650(%eax),%edx
084fcbbd +0x0501:  mov    0x10(%ebp),%eax
084fcbc0 +0x0504:  imul   $0x3d,%eax,%eax
084fcbc3 +0x0507:  lea    (%edx,%eax,1),%eax
084fcbc6 +0x050a:  mov    0x7(%eax),%edx
084fcbc9 +0x050d:  mov    0x14(%ebp),%eax
084fcbcc +0x0510:  mov    %edx,0x4(%esp)
084fcbd0 +0x0514:  mov    %eax,(%esp)
084fcbd3 +0x0517:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcbd8 +0x051c:  mov    0x8(%ebp),%eax
084fcbdb +0x051f:  mov    0x650(%eax),%edx
084fcbe1 +0x0525:  mov    0x10(%ebp),%eax
084fcbe4 +0x0528:  imul   $0x3d,%eax,%eax
084fcbe7 +0x052b:  add    %eax,%edx
084fcbe9 +0x052d:  mov    0x10(%ebp),%eax
084fcbec +0x0530:  mov    %eax,0x8(%esp)
084fcbf0 +0x0534:  movl   $0x1,0x4(%esp)
084fcbf8 +0x053c:  mov    %edx,(%esp)
084fcbfb +0x053f:  call   084fc651 <_Z24GetIntegratedPvPItemAttrRK10Inven_Item10INVEN_TYPEi>  ; GetIntegratedPvPItemAttr(Inven_Item const&, INVEN_TYPE, int)
084fcc00 +0x0544:  movzbl %al,%edx
084fcc03 +0x0547:  mov    0x14(%ebp),%eax
084fcc06 +0x054a:  mov    %edx,0x4(%esp)
084fcc0a +0x054e:  mov    %eax,(%esp)
084fcc0d +0x0551:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fcc12 +0x0556:  mov    0x8(%ebp),%eax
084fcc15 +0x0559:  mov    0x650(%eax),%edx
084fcc1b +0x055f:  mov    0x10(%ebp),%eax
084fcc1e +0x0562:  imul   $0x3d,%eax,%eax
084fcc21 +0x0565:  lea    (%edx,%eax,1),%eax
084fcc24 +0x0568:  movzwl 0xb(%eax),%eax
084fcc28 +0x056c:  movzwl %ax,%edx
084fcc2b +0x056f:  mov    0x14(%ebp),%eax
084fcc2e +0x0572:  mov    %edx,0x4(%esp)
084fcc32 +0x0576:  mov    %eax,(%esp)
084fcc35 +0x0579:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fcc3a +0x057e:  mov    0x8(%ebp),%eax
084fcc3d +0x0581:  mov    0x650(%eax),%edx
084fcc43 +0x0587:  mov    0x10(%ebp),%eax
084fcc46 +0x058a:  imul   $0x3d,%eax,%eax
084fcc49 +0x058d:  lea    (%edx,%eax,1),%eax
084fcc4c +0x0590:  movzbl (%eax),%eax
084fcc4f +0x0593:  movzbl %al,%edx
084fcc52 +0x0596:  mov    0x14(%ebp),%eax
084fcc55 +0x0599:  mov    %edx,0x4(%esp)
084fcc59 +0x059d:  mov    %eax,(%esp)
084fcc5c +0x05a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fcc61 +0x05a5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fcc66 +0x05aa:  mov    %eax,(%esp)
084fcc69 +0x05ad:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
084fcc6e +0x05b2:  test   %al,%al
084fcc70 +0x05b4:  je     084fcc87 <+0x5cb>
084fcc72 +0x05b6:  mov    0x14(%ebp),%eax
084fcc75 +0x05b9:  movl   $0x0,0x4(%esp)
084fcc7d +0x05c1:  mov    %eax,(%esp)
084fcc80 +0x05c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcc85 +0x05c9:  jmp    084fccad <+0x5f1>
084fcc87 +0x05cb:  mov    0x8(%ebp),%eax
084fcc8a +0x05ce:  mov    0x650(%eax),%edx
084fcc90 +0x05d4:  mov    0x10(%ebp),%eax
084fcc93 +0x05d7:  imul   $0x3d,%eax,%eax
084fcc96 +0x05da:  lea    (%edx,%eax,1),%eax
084fcc99 +0x05dd:  mov    0xd(%eax),%eax
084fcc9c +0x05e0:  mov    %eax,%edx
084fcc9e +0x05e2:  mov    0x14(%ebp),%eax
084fcca1 +0x05e5:  mov    %edx,0x4(%esp)
084fcca5 +0x05e9:  mov    %eax,(%esp)
084fcca8 +0x05ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fccad +0x05f1:  mov    0x8(%ebp),%eax
084fccb0 +0x05f4:  mov    0x650(%eax),%edx
084fccb6 +0x05fa:  mov    0x10(%ebp),%eax
084fccb9 +0x05fd:  imul   $0x3d,%eax,%eax
084fccbc +0x0600:  lea    (%edx,%eax,1),%eax
084fccbf +0x0603:  add    $0x11,%eax
084fccc2 +0x0606:  mov    %eax,(%esp)
084fccc5 +0x0609:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fccca +0x060e:  movzbl %al,%edx
084fcccd +0x0611:  mov    0x14(%ebp),%eax
084fccd0 +0x0614:  mov    %edx,0x4(%esp)
084fccd4 +0x0618:  mov    %eax,(%esp)
084fccd7 +0x061b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fccdc +0x0620:  mov    0x8(%ebp),%eax
084fccdf +0x0623:  mov    0x650(%eax),%edx
084fcce5 +0x0629:  mov    0x10(%ebp),%eax
084fcce8 +0x062c:  imul   $0x3d,%eax,%eax
084fcceb +0x062f:  lea    (%edx,%eax,1),%eax
084fccee +0x0632:  add    $0x11,%eax
084fccf1 +0x0635:  mov    %eax,(%esp)
084fccf4 +0x0638:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084fccf9 +0x063d:  movzwl %ax,%edx
084fccfc +0x0640:  mov    0x14(%ebp),%eax
084fccff +0x0643:  mov    %edx,0x4(%esp)
084fcd03 +0x0647:  mov    %eax,(%esp)
084fcd06 +0x064a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fcd0b +0x064f:  mov    0x14(%ebp),%eax
084fcd0e +0x0652:  movl   $0x0,0x4(%esp)
084fcd16 +0x065a:  mov    %eax,(%esp)
084fcd19 +0x065d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fcd1e +0x0662:  mov    0x8(%ebp),%eax
084fcd21 +0x0665:  mov    0x650(%eax),%edx
084fcd27 +0x066b:  mov    0x10(%ebp),%eax
084fcd2a +0x066e:  imul   $0x3d,%eax,%eax
084fcd2d +0x0671:  add    %eax,%edx
084fcd2f +0x0673:  mov    0x14(%ebp),%eax
084fcd32 +0x0676:  mov    %edx,0x4(%esp)
084fcd36 +0x067a:  mov    %eax,(%esp)
084fcd39 +0x067d:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fcd3e +0x0682:  jmp    084fd6c5 <+0x1009>
084fcd43 +0x0687:  movl   $0x5,0xc(%esp)
084fcd4b +0x068f:  movl   $0x758,0x8(%esp)
084fcd53 +0x0697:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
084fcd5b +0x069f:  lea    -0x68(%ebp),%eax
084fcd5e +0x06a2:  mov    %eax,(%esp)
084fcd61 +0x06a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fcd66 +0x06aa:  movl   $0x758,0xc(%esp)
084fcd6e +0x06b2:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
084fcd76 +0x06ba:  movl   $"[%s][%d]",0x4(%esp)
084fcd7e +0x06c2:  lea    -0x68(%ebp),%eax
084fcd81 +0x06c5:  mov    %eax,(%esp)
084fcd84 +0x06c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fcd89 +0x06cd:  mov    $0x0,%eax
084fcd8e +0x06d2:  jmp    084fd6ca <+0x100e>
084fcd93 +0x06d7:  mov    0x8(%ebp),%eax
084fcd96 +0x06da:  mov    0x654(%eax),%edx
084fcd9c +0x06e0:  mov    0x10(%ebp),%eax
084fcd9f +0x06e3:  imul   $0x3d,%eax,%eax
084fcda2 +0x06e6:  lea    (%edx,%eax,1),%eax
084fcda5 +0x06e9:  mov    0x2(%eax),%eax
084fcda8 +0x06ec:  test   %eax,%eax
084fcdaa +0x06ee:  je     084fd013 <+0x957>
084fcdb0 +0x06f4:  movl   $0x0,-0x28(%ebp)
084fcdb7 +0x06fb:  mov    0x14(%ebp),%eax
084fcdba +0x06fe:  mov    0x10(%ebp),%edx
084fcdbd +0x0701:  mov    %edx,0x4(%esp)
084fcdc1 +0x0705:  mov    %eax,(%esp)
084fcdc4 +0x0708:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fcdc9 +0x070d:  mov    0x8(%ebp),%eax
084fcdcc +0x0710:  mov    0x654(%eax),%edx
084fcdd2 +0x0716:  mov    0x10(%ebp),%eax
084fcdd5 +0x0719:  imul   $0x3d,%eax,%eax
084fcdd8 +0x071c:  lea    (%edx,%eax,1),%eax
084fcddb +0x071f:  mov    0x2(%eax),%eax
084fcdde +0x0722:  mov    %eax,%edx
084fcde0 +0x0724:  mov    0x14(%ebp),%eax
084fcde3 +0x0727:  mov    %edx,0x4(%esp)
084fcde7 +0x072b:  mov    %eax,(%esp)
084fcdea +0x072e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcdef +0x0733:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fcdf4 +0x0738:  mov    %eax,-0x28(%ebp)
084fcdf7 +0x073b:  mov    0x8(%ebp),%eax
084fcdfa +0x073e:  mov    0x654(%eax),%edx
084fce00 +0x0744:  mov    0x10(%ebp),%eax
084fce03 +0x0747:  imul   $0x3d,%eax,%eax
084fce06 +0x074a:  lea    (%edx,%eax,1),%eax
084fce09 +0x074d:  mov    0x7(%eax),%eax
084fce0c +0x0750:  mov    0x8(%ebp),%edx
084fce0f +0x0753:  lea    0x734(%edx),%ecx
084fce15 +0x0759:  mov    -0x28(%ebp),%edx
084fce18 +0x075c:  mov    %edx,0x8(%esp)
084fce1c +0x0760:  mov    %eax,0x4(%esp)
084fce20 +0x0764:  mov    %ecx,(%esp)
084fce23 +0x0767:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
084fce28 +0x076c:  mov    0x14(%ebp),%edx
084fce2b +0x076f:  mov    %eax,0x4(%esp)
084fce2f +0x0773:  mov    %edx,(%esp)
084fce32 +0x0776:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fce37 +0x077b:  mov    0x8(%ebp),%eax
084fce3a +0x077e:  mov    0x654(%eax),%edx
084fce40 +0x0784:  mov    0x10(%ebp),%eax
084fce43 +0x0787:  imul   $0x3d,%eax,%eax
084fce46 +0x078a:  lea    (%edx,%eax,1),%eax
084fce49 +0x078d:  mov    %eax,(%esp)
084fce4c +0x0790:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fce51 +0x0795:  movzbl %al,%edx
084fce54 +0x0798:  mov    0x14(%ebp),%eax
084fce57 +0x079b:  mov    %edx,0x4(%esp)
084fce5b +0x079f:  mov    %eax,(%esp)
084fce5e +0x07a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fce63 +0x07a7:  mov    0x8(%ebp),%eax
084fce66 +0x07aa:  mov    0x654(%eax),%edx
084fce6c +0x07b0:  mov    0x10(%ebp),%eax
084fce6f +0x07b3:  imul   $0x3d,%eax,%eax
084fce72 +0x07b6:  lea    (%edx,%eax,1),%eax
084fce75 +0x07b9:  movzwl 0xb(%eax),%eax
084fce79 +0x07bd:  movzwl %ax,%edx
084fce7c +0x07c0:  mov    0x14(%ebp),%eax
084fce7f +0x07c3:  mov    %edx,0x4(%esp)
084fce83 +0x07c7:  mov    %eax,(%esp)
084fce86 +0x07ca:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fce8b +0x07cf:  mov    0x8(%ebp),%eax
084fce8e +0x07d2:  mov    0x654(%eax),%edx
084fce94 +0x07d8:  mov    0x10(%ebp),%eax
084fce97 +0x07db:  imul   $0x3d,%eax,%eax
084fce9a +0x07de:  lea    (%edx,%eax,1),%eax
084fce9d +0x07e1:  movzbl (%eax),%eax
084fcea0 +0x07e4:  movzbl %al,%edx
084fcea3 +0x07e7:  mov    0x14(%ebp),%eax
084fcea6 +0x07ea:  mov    %edx,0x4(%esp)
084fceaa +0x07ee:  mov    %eax,(%esp)
084fcead +0x07f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fceb2 +0x07f6:  mov    0x8(%ebp),%eax
084fceb5 +0x07f9:  mov    0x654(%eax),%edx
084fcebb +0x07ff:  mov    0x10(%ebp),%eax
084fcebe +0x0802:  imul   $0x3d,%eax,%eax
084fcec1 +0x0805:  lea    (%edx,%eax,1),%eax
084fcec4 +0x0808:  mov    0xd(%eax),%eax
084fcec7 +0x080b:  mov    %eax,%edx
084fcec9 +0x080d:  mov    0x14(%ebp),%eax
084fcecc +0x0810:  mov    %edx,0x4(%esp)
084fced0 +0x0814:  mov    %eax,(%esp)
084fced3 +0x0817:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fced8 +0x081c:  mov    0x14(%ebp),%eax
084fcedb +0x081f:  movl   $0x0,0x4(%esp)
084fcee3 +0x0827:  mov    %eax,(%esp)
084fcee6 +0x082a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fceeb +0x082f:  mov    0x14(%ebp),%eax
084fceee +0x0832:  movl   $0x0,0x4(%esp)
084fcef6 +0x083a:  mov    %eax,(%esp)
084fcef9 +0x083d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fcefe +0x0842:  mov    0x14(%ebp),%eax
084fcf01 +0x0845:  movl   $0x1e,0x4(%esp)
084fcf09 +0x084d:  mov    %eax,(%esp)
084fcf0c +0x0850:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcf11 +0x0855:  mov    0x8(%ebp),%eax
084fcf14 +0x0858:  mov    0x654(%eax),%edx
084fcf1a +0x085e:  mov    0x10(%ebp),%eax
084fcf1d +0x0861:  imul   $0x3d,%eax,%eax
084fcf20 +0x0864:  lea    (%edx,%eax,1),%eax
084fcf23 +0x0867:  mov    0x7(%eax),%eax
084fcf26 +0x086a:  mov    0x8(%ebp),%edx
084fcf29 +0x086d:  add    $0x734,%edx
084fcf2f +0x0873:  mov    %eax,0x4(%esp)
084fcf33 +0x0877:  mov    %edx,(%esp)
084fcf36 +0x087a:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
084fcf3b +0x087f:  mov    %eax,%edx
084fcf3d +0x0881:  mov    0x14(%ebp),%eax
084fcf40 +0x0884:  movl   $0x1e,0x8(%esp)
084fcf48 +0x088c:  mov    %edx,0x4(%esp)
084fcf4c +0x0890:  mov    %eax,(%esp)
084fcf4f +0x0893:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fcf54 +0x0898:  mov    0x8(%ebp),%eax
084fcf57 +0x089b:  mov    0x654(%eax),%edx
084fcf5d +0x08a1:  mov    0x10(%ebp),%eax
084fcf60 +0x08a4:  imul   $0x3d,%eax,%eax
084fcf63 +0x08a7:  lea    (%edx,%eax,1),%eax
084fcf66 +0x08aa:  mov    0x7(%eax),%eax
084fcf69 +0x08ad:  mov    0x8(%ebp),%edx
084fcf6c +0x08b0:  add    $0x734,%edx
084fcf72 +0x08b6:  mov    %eax,0x4(%esp)
084fcf76 +0x08ba:  mov    %edx,(%esp)
084fcf79 +0x08bd:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
084fcf7e +0x08c2:  mov    %eax,-0x24(%ebp)
084fcf81 +0x08c5:  mov    0x14(%ebp),%eax
084fcf84 +0x08c8:  movl   $0x4,0x4(%esp)
084fcf8c +0x08d0:  mov    %eax,(%esp)
084fcf8f +0x08d3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fcf94 +0x08d8:  cmpl   $0x0,-0x24(%ebp)
084fcf98 +0x08dc:  je     084fcfb6 <+0x8fa>
084fcf9a +0x08de:  mov    -0x24(%ebp),%edx
084fcf9d +0x08e1:  mov    0x14(%ebp),%eax
084fcfa0 +0x08e4:  movl   $0x4,0x8(%esp)
084fcfa8 +0x08ec:  mov    %edx,0x4(%esp)
084fcfac +0x08f0:  mov    %eax,(%esp)
084fcfaf +0x08f3:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fcfb4 +0x08f8:  jmp    084fcfdb <+0x91f>
084fcfb6 +0x08fa:  lea    -0x6c(%ebp),%eax
084fcfb9 +0x08fd:  mov    %eax,(%esp)
084fcfbc +0x0900:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fcfc1 +0x0905:  lea    -0x6c(%ebp),%edx
084fcfc4 +0x0908:  mov    0x14(%ebp),%eax
084fcfc7 +0x090b:  movl   $0x4,0x8(%esp)
084fcfcf +0x0913:  mov    %edx,0x4(%esp)
084fcfd3 +0x0917:  mov    %eax,(%esp)
084fcfd6 +0x091a:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fcfdb +0x091f:  mov    0x14(%ebp),%eax
084fcfde +0x0922:  movl   $0x0,0x4(%esp)
084fcfe6 +0x092a:  mov    %eax,(%esp)
084fcfe9 +0x092d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fcfee +0x0932:  mov    0x8(%ebp),%eax
084fcff1 +0x0935:  mov    0x654(%eax),%edx
084fcff7 +0x093b:  mov    0x10(%ebp),%eax
084fcffa +0x093e:  imul   $0x3d,%eax,%eax
084fcffd +0x0941:  add    %eax,%edx
084fcfff +0x0943:  mov    0x14(%ebp),%eax
084fd002 +0x0946:  mov    %edx,0x4(%esp)
084fd006 +0x094a:  mov    %eax,(%esp)
084fd009 +0x094d:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fd00e +0x0952:  jmp    084fd6c5 <+0x1009>
084fd013 +0x0957:  movl   $0x5,0xc(%esp)
084fd01b +0x095f:  movl   $0x7a0,0x8(%esp)
084fd023 +0x0967:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
084fd02b +0x096f:  lea    -0x58(%ebp),%eax
084fd02e +0x0972:  mov    %eax,(%esp)
084fd031 +0x0975:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fd036 +0x097a:  movl   $0x7a0,0xc(%esp)
084fd03e +0x0982:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
084fd046 +0x098a:  movl   $"[%s][%d]",0x4(%esp)
084fd04e +0x0992:  lea    -0x58(%ebp),%eax
084fd051 +0x0995:  mov    %eax,(%esp)
084fd054 +0x0998:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fd059 +0x099d:  mov    $0x0,%eax
084fd05e +0x09a2:  jmp    084fd6ca <+0x100e>
084fd063 +0x09a7:  mov    0x8(%ebp),%eax
084fd066 +0x09aa:  mov    0x6e4(%eax),%edx
084fd06c +0x09b0:  mov    0x10(%ebp),%eax
084fd06f +0x09b3:  imul   $0x3d,%eax,%eax
084fd072 +0x09b6:  lea    (%edx,%eax,1),%eax
084fd075 +0x09b9:  mov    0x2(%eax),%eax
084fd078 +0x09bc:  test   %eax,%eax
084fd07a +0x09be:  je     084fd24c <+0xb90>
084fd080 +0x09c4:  mov    0x14(%ebp),%eax
084fd083 +0x09c7:  mov    0x10(%ebp),%edx
084fd086 +0x09ca:  mov    %edx,0x4(%esp)
084fd08a +0x09ce:  mov    %eax,(%esp)
084fd08d +0x09d1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd092 +0x09d6:  mov    0x8(%ebp),%eax
084fd095 +0x09d9:  mov    0x6e4(%eax),%edx
084fd09b +0x09df:  mov    0x10(%ebp),%eax
084fd09e +0x09e2:  imul   $0x3d,%eax,%eax
084fd0a1 +0x09e5:  lea    (%edx,%eax,1),%eax
084fd0a4 +0x09e8:  mov    0x2(%eax),%eax
084fd0a7 +0x09eb:  mov    %eax,%edx
084fd0a9 +0x09ed:  mov    0x14(%ebp),%eax
084fd0ac +0x09f0:  mov    %edx,0x4(%esp)
084fd0b0 +0x09f4:  mov    %eax,(%esp)
084fd0b3 +0x09f7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd0b8 +0x09fc:  mov    0x8(%ebp),%eax
084fd0bb +0x09ff:  mov    0x6e4(%eax),%edx
084fd0c1 +0x0a05:  mov    0x10(%ebp),%eax
084fd0c4 +0x0a08:  imul   $0x3d,%eax,%eax
084fd0c7 +0x0a0b:  lea    (%edx,%eax,1),%eax
084fd0ca +0x0a0e:  mov    0x7(%eax),%edx
084fd0cd +0x0a11:  mov    0x14(%ebp),%eax
084fd0d0 +0x0a14:  mov    %edx,0x4(%esp)
084fd0d4 +0x0a18:  mov    %eax,(%esp)
084fd0d7 +0x0a1b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd0dc +0x0a20:  mov    0x8(%ebp),%eax
084fd0df +0x0a23:  mov    0x6e4(%eax),%edx
084fd0e5 +0x0a29:  mov    0x10(%ebp),%eax
084fd0e8 +0x0a2c:  imul   $0x3d,%eax,%eax
084fd0eb +0x0a2f:  lea    (%edx,%eax,1),%eax
084fd0ee +0x0a32:  mov    %eax,(%esp)
084fd0f1 +0x0a35:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fd0f6 +0x0a3a:  movzbl %al,%edx
084fd0f9 +0x0a3d:  mov    0x14(%ebp),%eax
084fd0fc +0x0a40:  mov    %edx,0x4(%esp)
084fd100 +0x0a44:  mov    %eax,(%esp)
084fd103 +0x0a47:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd108 +0x0a4c:  mov    0x8(%ebp),%eax
084fd10b +0x0a4f:  mov    0x6e4(%eax),%edx
084fd111 +0x0a55:  mov    0x10(%ebp),%eax
084fd114 +0x0a58:  imul   $0x3d,%eax,%eax
084fd117 +0x0a5b:  lea    (%edx,%eax,1),%eax
084fd11a +0x0a5e:  movzwl 0xb(%eax),%eax
084fd11e +0x0a62:  movzwl %ax,%edx
084fd121 +0x0a65:  mov    0x14(%ebp),%eax
084fd124 +0x0a68:  mov    %edx,0x4(%esp)
084fd128 +0x0a6c:  mov    %eax,(%esp)
084fd12b +0x0a6f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd130 +0x0a74:  mov    0x8(%ebp),%eax
084fd133 +0x0a77:  mov    0x6e4(%eax),%edx
084fd139 +0x0a7d:  mov    0x10(%ebp),%eax
084fd13c +0x0a80:  imul   $0x3d,%eax,%eax
084fd13f +0x0a83:  lea    (%edx,%eax,1),%eax
084fd142 +0x0a86:  movzbl (%eax),%eax
084fd145 +0x0a89:  movzbl %al,%edx
084fd148 +0x0a8c:  mov    0x14(%ebp),%eax
084fd14b +0x0a8f:  mov    %edx,0x4(%esp)
084fd14f +0x0a93:  mov    %eax,(%esp)
084fd152 +0x0a96:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd157 +0x0a9b:  mov    0x8(%ebp),%eax
084fd15a +0x0a9e:  mov    0x6e4(%eax),%edx
084fd160 +0x0aa4:  mov    0x10(%ebp),%eax
084fd163 +0x0aa7:  imul   $0x3d,%eax,%eax
084fd166 +0x0aaa:  lea    (%edx,%eax,1),%eax
084fd169 +0x0aad:  mov    0xd(%eax),%eax
084fd16c +0x0ab0:  mov    %eax,%edx
084fd16e +0x0ab2:  mov    0x14(%ebp),%eax
084fd171 +0x0ab5:  mov    %edx,0x4(%esp)
084fd175 +0x0ab9:  mov    %eax,(%esp)
084fd178 +0x0abc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd17d +0x0ac1:  mov    0x14(%ebp),%eax
084fd180 +0x0ac4:  movl   $0x0,0x4(%esp)
084fd188 +0x0acc:  mov    %eax,(%esp)
084fd18b +0x0acf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd190 +0x0ad4:  mov    0x14(%ebp),%eax
084fd193 +0x0ad7:  movl   $0x0,0x4(%esp)
084fd19b +0x0adf:  mov    %eax,(%esp)
084fd19e +0x0ae2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd1a3 +0x0ae7:  mov    0x8(%ebp),%eax
084fd1a6 +0x0aea:  mov    0x6e4(%eax),%edx
084fd1ac +0x0af0:  mov    0x10(%ebp),%eax
084fd1af +0x0af3:  imul   $0x3d,%eax,%eax
084fd1b2 +0x0af6:  lea    (%edx,%eax,1),%eax
084fd1b5 +0x0af9:  movzbl 0x1(%eax),%eax
084fd1b9 +0x0afd:  cmp    $0x5,%al
084fd1bb +0x0aff:  jne    084fd214 <+0xb58>
084fd1bd +0x0b01:  movl   $0x0,-0x20(%ebp)
084fd1c4 +0x0b08:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fd1c9 +0x0b0d:  mov    %eax,-0x20(%ebp)
084fd1cc +0x0b10:  mov    0x8(%ebp),%eax
084fd1cf +0x0b13:  mov    0x6e4(%eax),%edx
084fd1d5 +0x0b19:  mov    0x10(%ebp),%eax
084fd1d8 +0x0b1c:  imul   $0x3d,%eax,%eax
084fd1db +0x0b1f:  lea    (%edx,%eax,1),%eax
084fd1de +0x0b22:  mov    0x7(%eax),%ebx
084fd1e1 +0x0b25:  mov    0x8(%ebp),%eax
084fd1e4 +0x0b28:  mov    %eax,(%esp)
084fd1e7 +0x0b2b:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
084fd1ec +0x0b30:  mov    -0x20(%ebp),%edx
084fd1ef +0x0b33:  mov    %edx,0x8(%esp)
084fd1f3 +0x0b37:  mov    %ebx,0x4(%esp)
084fd1f7 +0x0b3b:  mov    %eax,(%esp)
084fd1fa +0x0b3e:  call   0833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>  ; user_creature::CCreatureMgr::GetRemainDate(int, int) const
084fd1ff +0x0b43:  mov    %eax,-0x1c(%ebp)
084fd202 +0x0b46:  mov    0x14(%ebp),%eax
084fd205 +0x0b49:  mov    -0x1c(%ebp),%edx
084fd208 +0x0b4c:  mov    %edx,0x4(%esp)
084fd20c +0x0b50:  mov    %eax,(%esp)
084fd20f +0x0b53:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd214 +0x0b58:  mov    0x14(%ebp),%eax
084fd217 +0x0b5b:  movl   $0x0,0x4(%esp)
084fd21f +0x0b63:  mov    %eax,(%esp)
084fd222 +0x0b66:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd227 +0x0b6b:  mov    0x8(%ebp),%eax
084fd22a +0x0b6e:  mov    0x6e4(%eax),%edx
084fd230 +0x0b74:  mov    0x10(%ebp),%eax
084fd233 +0x0b77:  imul   $0x3d,%eax,%eax
084fd236 +0x0b7a:  add    %eax,%edx
084fd238 +0x0b7c:  mov    0x14(%ebp),%eax
084fd23b +0x0b7f:  mov    %edx,0x4(%esp)
084fd23f +0x0b83:  mov    %eax,(%esp)
084fd242 +0x0b86:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fd247 +0x0b8b:  jmp    084fd6c5 <+0x1009>
084fd24c +0x0b90:  movl   $0x5,0xc(%esp)
084fd254 +0x0b98:  movl   $0x801,0x8(%esp)
084fd25c +0x0ba0:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
084fd264 +0x0ba8:  lea    -0x48(%ebp),%eax
084fd267 +0x0bab:  mov    %eax,(%esp)
084fd26a +0x0bae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fd26f +0x0bb3:  movl   $0x801,0xc(%esp)
084fd277 +0x0bbb:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
084fd27f +0x0bc3:  movl   $"[%s][%d]",0x4(%esp)
084fd287 +0x0bcb:  lea    -0x48(%ebp),%eax
084fd28a +0x0bce:  mov    %eax,(%esp)
084fd28d +0x0bd1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fd292 +0x0bd6:  mov    $0x0,%eax
084fd297 +0x0bdb:  jmp    084fd6ca <+0x100e>
084fd29c +0x0be0:  mov    0x10(%ebp),%eax
084fd29f +0x0be3:  mov    0x8(%ebp),%edx
084fd2a2 +0x0be6:  imul   $0x3d,%eax,%eax
084fd2a5 +0x0be9:  lea    (%edx,%eax,1),%eax
084fd2a8 +0x0bec:  add    $0x10,%eax
084fd2ab +0x0bef:  mov    0xe(%eax),%eax
084fd2ae +0x0bf2:  test   %eax,%eax
084fd2b0 +0x0bf4:  je     084fd671 <+0xfb5>
084fd2b6 +0x0bfa:  mov    0x14(%ebp),%eax
084fd2b9 +0x0bfd:  mov    0x10(%ebp),%edx
084fd2bc +0x0c00:  mov    %edx,0x4(%esp)
084fd2c0 +0x0c04:  mov    %eax,(%esp)
084fd2c3 +0x0c07:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd2c8 +0x0c0c:  mov    0x10(%ebp),%eax
084fd2cb +0x0c0f:  mov    0x8(%ebp),%edx
084fd2ce +0x0c12:  imul   $0x3d,%eax,%eax
084fd2d1 +0x0c15:  lea    (%edx,%eax,1),%eax
084fd2d4 +0x0c18:  add    $0x10,%eax
084fd2d7 +0x0c1b:  mov    0xe(%eax),%eax
084fd2da +0x0c1e:  mov    %eax,%edx
084fd2dc +0x0c20:  mov    0x14(%ebp),%eax
084fd2df +0x0c23:  mov    %edx,0x4(%esp)
084fd2e3 +0x0c27:  mov    %eax,(%esp)
084fd2e6 +0x0c2a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd2eb +0x0c2f:  mov    0x10(%ebp),%eax
084fd2ee +0x0c32:  mov    0x8(%ebp),%edx
084fd2f1 +0x0c35:  imul   $0x3d,%eax,%eax
084fd2f4 +0x0c38:  lea    (%edx,%eax,1),%eax
084fd2f7 +0x0c3b:  add    $0x10,%eax
084fd2fa +0x0c3e:  mov    0x13(%eax),%edx
084fd2fd +0x0c41:  mov    0x14(%ebp),%eax
084fd300 +0x0c44:  mov    %edx,0x4(%esp)
084fd304 +0x0c48:  mov    %eax,(%esp)
084fd307 +0x0c4b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd30c +0x0c50:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fd311 +0x0c55:  mov    %eax,(%esp)
084fd314 +0x0c58:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084fd319 +0x0c5d:  test   %al,%al
084fd31b +0x0c5f:  je     084fd335 <+0xc79>
084fd31d +0x0c61:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084fd322 +0x0c66:  mov    %eax,(%esp)
084fd325 +0x0c69:  call   084e930a <_GLOBAL__I__Z7getUserj+0x2bc>  ; global constructors keyed to getUser(unsigned int)+0x2bc
084fd32a +0x0c6e:  test   %eax,%eax
084fd32c +0x0c70:  jne    084fd335 <+0xc79>
084fd32e +0x0c72:  mov    $0x1,%eax
084fd333 +0x0c77:  jmp    084fd33a <+0xc7e>
084fd335 +0x0c79:  mov    $0x0,%eax
084fd33a +0x0c7e:  test   %al,%al
084fd33c +0x0c80:  je     084fd3af <+0xcf3>
084fd33e +0x0c82:  movb   $0x0,-0x15(%ebp)
084fd342 +0x0c86:  cmpl   $0x15,0x10(%ebp)
084fd346 +0x0c8a:  ja     084fd380 <+0xcc4>
084fd348 +0x0c8c:  mov    0x10(%ebp),%eax
084fd34b +0x0c8f:  mov    $0x1,%edx
084fd350 +0x0c94:  mov    %edx,%ebx
084fd352 +0x0c96:  mov    %eax,%ecx
084fd354 +0x0c98:  shl    %cl,%ebx
084fd356 +0x0c9a:  mov    %ebx,%eax
084fd358 +0x0c9c:  and    $0x3ff400,%eax
084fd35d +0x0ca1:  test   %eax,%eax
084fd35f +0x0ca3:  je     084fd380 <+0xcc4>
084fd361 +0x0ca5:  mov    0x10(%ebp),%eax
084fd364 +0x0ca8:  imul   $0x3d,%eax,%eax
084fd367 +0x0cab:  add    $0x10,%eax
084fd36a +0x0cae:  add    0x8(%ebp),%eax
084fd36d +0x0cb1:  add    $0xc,%eax
084fd370 +0x0cb4:  mov    %eax,(%esp)
084fd373 +0x0cb7:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
084fd378 +0x0cbc:  shl    $0x5,%eax
084fd37b +0x0cbf:  mov    %al,-0x15(%ebp)
084fd37e +0x0cc2:  jmp    084fd39a <+0xcde>
084fd380 +0x0cc4:  mov    0x10(%ebp),%eax
084fd383 +0x0cc7:  imul   $0x3d,%eax,%eax
084fd386 +0x0cca:  add    $0x10,%eax
084fd389 +0x0ccd:  add    0x8(%ebp),%eax
084fd38c +0x0cd0:  add    $0xc,%eax
084fd38f +0x0cd3:  mov    %eax,(%esp)
084fd392 +0x0cd6:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fd397 +0x0cdb:  mov    %al,-0x15(%ebp)
084fd39a +0x0cde:  movzbl -0x15(%ebp),%edx
084fd39e +0x0ce2:  mov    0x14(%ebp),%eax
084fd3a1 +0x0ce5:  mov    %edx,0x4(%esp)
084fd3a5 +0x0ce9:  mov    %eax,(%esp)
084fd3a8 +0x0cec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd3ad +0x0cf1:  jmp    084fd3d8 <+0xd1c>
084fd3af +0x0cf3:  mov    0x10(%ebp),%eax
084fd3b2 +0x0cf6:  imul   $0x3d,%eax,%eax
084fd3b5 +0x0cf9:  add    $0x10,%eax
084fd3b8 +0x0cfc:  add    0x8(%ebp),%eax
084fd3bb +0x0cff:  add    $0xc,%eax
084fd3be +0x0d02:  mov    %eax,(%esp)
084fd3c1 +0x0d05:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fd3c6 +0x0d0a:  movzbl %al,%edx
084fd3c9 +0x0d0d:  mov    0x14(%ebp),%eax
084fd3cc +0x0d10:  mov    %edx,0x4(%esp)
084fd3d0 +0x0d14:  mov    %eax,(%esp)
084fd3d3 +0x0d17:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd3d8 +0x0d1c:  mov    0x10(%ebp),%eax
084fd3db +0x0d1f:  mov    0x8(%ebp),%edx
084fd3de +0x0d22:  imul   $0x3d,%eax,%eax
084fd3e1 +0x0d25:  lea    (%edx,%eax,1),%eax
084fd3e4 +0x0d28:  add    $0x10,%eax
084fd3e7 +0x0d2b:  movzwl 0x17(%eax),%eax
084fd3eb +0x0d2f:  movzwl %ax,%edx
084fd3ee +0x0d32:  mov    0x14(%ebp),%eax
084fd3f1 +0x0d35:  mov    %edx,0x4(%esp)
084fd3f5 +0x0d39:  mov    %eax,(%esp)
084fd3f8 +0x0d3c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd3fd +0x0d41:  mov    0x10(%ebp),%eax
084fd400 +0x0d44:  mov    0x8(%ebp),%edx
084fd403 +0x0d47:  imul   $0x3d,%eax,%eax
084fd406 +0x0d4a:  lea    (%edx,%eax,1),%eax
084fd409 +0x0d4d:  add    $0x10,%eax
084fd40c +0x0d50:  movzbl 0xc(%eax),%eax
084fd410 +0x0d54:  movzbl %al,%edx
084fd413 +0x0d57:  mov    0x14(%ebp),%eax
084fd416 +0x0d5a:  mov    %edx,0x4(%esp)
084fd41a +0x0d5e:  mov    %eax,(%esp)
084fd41d +0x0d61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd422 +0x0d66:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fd427 +0x0d6b:  mov    %eax,(%esp)
084fd42a +0x0d6e:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
084fd42f +0x0d73:  test   %al,%al
084fd431 +0x0d75:  je     084fd448 <+0xd8c>
084fd433 +0x0d77:  mov    0x14(%ebp),%eax
084fd436 +0x0d7a:  movl   $0x0,0x4(%esp)
084fd43e +0x0d82:  mov    %eax,(%esp)
084fd441 +0x0d85:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd446 +0x0d8a:  jmp    084fd46b <+0xdaf>
084fd448 +0x0d8c:  mov    0x10(%ebp),%eax
084fd44b +0x0d8f:  mov    0x8(%ebp),%edx
084fd44e +0x0d92:  imul   $0x3d,%eax,%eax
084fd451 +0x0d95:  lea    (%edx,%eax,1),%eax
084fd454 +0x0d98:  add    $0x10,%eax
084fd457 +0x0d9b:  mov    0x19(%eax),%eax
084fd45a +0x0d9e:  mov    %eax,%edx
084fd45c +0x0da0:  mov    0x14(%ebp),%eax
084fd45f +0x0da3:  mov    %edx,0x4(%esp)
084fd463 +0x0da7:  mov    %eax,(%esp)
084fd466 +0x0daa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd46b +0x0daf:  mov    0x10(%ebp),%eax
084fd46e +0x0db2:  imul   $0x3d,%eax,%eax
084fd471 +0x0db5:  add    $0x20,%eax
084fd474 +0x0db8:  add    0x8(%ebp),%eax
084fd477 +0x0dbb:  add    $0xd,%eax
084fd47a +0x0dbe:  mov    %eax,(%esp)
084fd47d +0x0dc1:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fd482 +0x0dc6:  movzbl %al,%edx
084fd485 +0x0dc9:  mov    0x14(%ebp),%eax
084fd488 +0x0dcc:  mov    %edx,0x4(%esp)
084fd48c +0x0dd0:  mov    %eax,(%esp)
084fd48f +0x0dd3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fd494 +0x0dd8:  mov    0x10(%ebp),%eax
084fd497 +0x0ddb:  imul   $0x3d,%eax,%eax
084fd49a +0x0dde:  add    $0x20,%eax
084fd49d +0x0de1:  add    0x8(%ebp),%eax
084fd4a0 +0x0de4:  add    $0xd,%eax
084fd4a3 +0x0de7:  mov    %eax,(%esp)
084fd4a6 +0x0dea:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084fd4ab +0x0def:  movzwl %ax,%edx
084fd4ae +0x0df2:  mov    0x14(%ebp),%eax
084fd4b1 +0x0df5:  mov    %edx,0x4(%esp)
084fd4b5 +0x0df9:  mov    %eax,(%esp)
084fd4b8 +0x0dfc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd4bd +0x0e01:  mov    0x10(%ebp),%eax
084fd4c0 +0x0e04:  imul   $0x3d,%eax,%eax
084fd4c3 +0x0e07:  add    $0x10,%eax
084fd4c6 +0x0e0a:  add    0x8(%ebp),%eax
084fd4c9 +0x0e0d:  add    $0xc,%eax
084fd4cc +0x0e10:  mov    %eax,(%esp)
084fd4cf +0x0e13:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
084fd4d4 +0x0e18:  test   %al,%al
084fd4d6 +0x0e1a:  je     084fd5b3 <+0xef7>
084fd4dc +0x0e20:  mov    0x14(%ebp),%eax
084fd4df +0x0e23:  movl   $0x1e,0x4(%esp)
084fd4e7 +0x0e2b:  mov    %eax,(%esp)
084fd4ea +0x0e2e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd4ef +0x0e33:  mov    0x10(%ebp),%eax
084fd4f2 +0x0e36:  mov    0x8(%ebp),%edx
084fd4f5 +0x0e39:  imul   $0x3d,%eax,%eax
084fd4f8 +0x0e3c:  lea    (%edx,%eax,1),%eax
084fd4fb +0x0e3f:  add    $0x10,%eax
084fd4fe +0x0e42:  mov    0x13(%eax),%eax
084fd501 +0x0e45:  mov    0x8(%ebp),%edx
084fd504 +0x0e48:  add    $0x734,%edx
084fd50a +0x0e4e:  mov    %eax,0x4(%esp)
084fd50e +0x0e52:  mov    %edx,(%esp)
084fd511 +0x0e55:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
084fd516 +0x0e5a:  mov    %eax,%edx
084fd518 +0x0e5c:  mov    0x14(%ebp),%eax
084fd51b +0x0e5f:  movl   $0x1e,0x8(%esp)
084fd523 +0x0e67:  mov    %edx,0x4(%esp)
084fd527 +0x0e6b:  mov    %eax,(%esp)
084fd52a +0x0e6e:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fd52f +0x0e73:  mov    0x10(%ebp),%eax
084fd532 +0x0e76:  mov    0x8(%ebp),%edx
084fd535 +0x0e79:  imul   $0x3d,%eax,%eax
084fd538 +0x0e7c:  lea    (%edx,%eax,1),%eax
084fd53b +0x0e7f:  add    $0x10,%eax
084fd53e +0x0e82:  mov    0x13(%eax),%eax
084fd541 +0x0e85:  mov    0x8(%ebp),%edx
084fd544 +0x0e88:  add    $0x734,%edx
084fd54a +0x0e8e:  mov    %eax,0x4(%esp)
084fd54e +0x0e92:  mov    %edx,(%esp)
084fd551 +0x0e95:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
084fd556 +0x0e9a:  mov    %eax,-0x14(%ebp)
084fd559 +0x0e9d:  mov    0x14(%ebp),%eax
084fd55c +0x0ea0:  movl   $0x4,0x4(%esp)
084fd564 +0x0ea8:  mov    %eax,(%esp)
084fd567 +0x0eab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd56c +0x0eb0:  cmpl   $0x0,-0x14(%ebp)
084fd570 +0x0eb4:  je     084fd58e <+0xed2>
084fd572 +0x0eb6:  mov    -0x14(%ebp),%edx
084fd575 +0x0eb9:  mov    0x14(%ebp),%eax
084fd578 +0x0ebc:  movl   $0x4,0x8(%esp)
084fd580 +0x0ec4:  mov    %edx,0x4(%esp)
084fd584 +0x0ec8:  mov    %eax,(%esp)
084fd587 +0x0ecb:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fd58c +0x0ed0:  jmp    084fd5b3 <+0xef7>
084fd58e +0x0ed2:  lea    -0x70(%ebp),%eax
084fd591 +0x0ed5:  mov    %eax,(%esp)
084fd594 +0x0ed8:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fd599 +0x0edd:  lea    -0x70(%ebp),%edx
084fd59c +0x0ee0:  mov    0x14(%ebp),%eax
084fd59f +0x0ee3:  movl   $0x4,0x8(%esp)
084fd5a7 +0x0eeb:  mov    %edx,0x4(%esp)
084fd5ab +0x0eef:  mov    %eax,(%esp)
084fd5ae +0x0ef2:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fd5b3 +0x0ef7:  mov    0x10(%ebp),%eax
084fd5b6 +0x0efa:  mov    0x8(%ebp),%edx
084fd5b9 +0x0efd:  imul   $0x3d,%eax,%eax
084fd5bc +0x0f00:  lea    (%edx,%eax,1),%eax
084fd5bf +0x0f03:  add    $0x10,%eax
084fd5c2 +0x0f06:  movzbl 0xd(%eax),%eax
084fd5c6 +0x0f0a:  cmp    $0x5,%al
084fd5c8 +0x0f0c:  jne    084fd61e <+0xf62>
084fd5ca +0x0f0e:  movl   $0x0,-0x10(%ebp)
084fd5d1 +0x0f15:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fd5d6 +0x0f1a:  mov    %eax,-0x10(%ebp)
084fd5d9 +0x0f1d:  mov    0x10(%ebp),%eax
084fd5dc +0x0f20:  mov    0x8(%ebp),%edx
084fd5df +0x0f23:  imul   $0x3d,%eax,%eax
084fd5e2 +0x0f26:  lea    (%edx,%eax,1),%eax
084fd5e5 +0x0f29:  add    $0x10,%eax
084fd5e8 +0x0f2c:  mov    0x13(%eax),%ebx
084fd5eb +0x0f2f:  mov    0x8(%ebp),%eax
084fd5ee +0x0f32:  mov    %eax,(%esp)
084fd5f1 +0x0f35:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
084fd5f6 +0x0f3a:  mov    -0x10(%ebp),%edx
084fd5f9 +0x0f3d:  mov    %edx,0x8(%esp)
084fd5fd +0x0f41:  mov    %ebx,0x4(%esp)
084fd601 +0x0f45:  mov    %eax,(%esp)
084fd604 +0x0f48:  call   0833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>  ; user_creature::CCreatureMgr::GetRemainDate(int, int) const
084fd609 +0x0f4d:  mov    %eax,-0xc(%ebp)
084fd60c +0x0f50:  mov    0x14(%ebp),%eax
084fd60f +0x0f53:  mov    -0xc(%ebp),%edx
084fd612 +0x0f56:  mov    %edx,0x4(%esp)
084fd616 +0x0f5a:  mov    %eax,(%esp)
084fd619 +0x0f5d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd61e +0x0f62:  mov    0x10(%ebp),%eax
084fd621 +0x0f65:  imul   $0x3d,%eax,%eax
084fd624 +0x0f68:  add    $0x10,%eax
084fd627 +0x0f6b:  add    0x8(%ebp),%eax
084fd62a +0x0f6e:  lea    0xc(%eax),%esi
084fd62d +0x0f71:  mov    0x8(%ebp),%eax
084fd630 +0x0f74:  mov    (%eax),%ebx
084fd632 +0x0f76:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084fd637 +0x0f7b:  mov    0x20(%eax),%eax
084fd63a +0x0f7e:  mov    0x14(%ebp),%edx
084fd63d +0x0f81:  mov    %edx,0xc(%esp)
084fd641 +0x0f85:  mov    %esi,0x8(%esp)
084fd645 +0x0f89:  mov    %ebx,0x4(%esp)
084fd649 +0x0f8d:  mov    %eax,(%esp)
084fd64c +0x0f90:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
084fd651 +0x0f95:  mov    0x10(%ebp),%eax
084fd654 +0x0f98:  imul   $0x3d,%eax,%eax
084fd657 +0x0f9b:  add    $0x10,%eax
084fd65a +0x0f9e:  add    0x8(%ebp),%eax
084fd65d +0x0fa1:  lea    0xc(%eax),%edx
084fd660 +0x0fa4:  mov    0x14(%ebp),%eax
084fd663 +0x0fa7:  mov    %edx,0x4(%esp)
084fd667 +0x0fab:  mov    %eax,(%esp)
084fd66a +0x0fae:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084fd66f +0x0fb3:  jmp    084fd6c5 <+0x1009>
084fd671 +0x0fb5:  movl   $0x5,0xc(%esp)
084fd679 +0x0fbd:  movl   $0x884,0x8(%esp)
084fd681 +0x0fc5:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
084fd689 +0x0fcd:  lea    -0x38(%ebp),%eax
084fd68c +0x0fd0:  mov    %eax,(%esp)
084fd68f +0x0fd3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084fd694 +0x0fd8:  movl   $0x884,0xc(%esp)
084fd69c +0x0fe0:  movl   $&_ZZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
084fd6a4 +0x0fe8:  movl   $"[%s][%d]",0x4(%esp)
084fd6ac +0x0ff0:  lea    -0x38(%ebp),%eax
084fd6af +0x0ff3:  mov    %eax,(%esp)
084fd6b2 +0x0ff6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084fd6b7 +0x0ffb:  mov    $0x0,%eax
084fd6bc +0x1000:  jmp    084fd6ca <+0x100e>
084fd6be +0x1002:  mov    $0x0,%eax
084fd6c3 +0x1007:  jmp    084fd6ca <+0x100e>
084fd6c5 +0x1009:  mov    $0x1,%eax
084fd6ca +0x100e:  sub    $0xffffff80,%esp
084fd6cd +0x1011:  pop    %ebx
084fd6ce +0x1012:  pop    %esi
084fd6cf +0x1013:  pop    %ebp
084fd6d0 +0x1014:  ret
084fd6d1 +0x1015:  nop
```

## 反编译 C

```c
// CInventory::MakeItemPacket @ 0x84fc6bc

/* CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const */

undefined4 __thiscall
CInventory::MakeItemPacket(CInventory *this,int param_2,uint param_3,InterfacePacketBuf *param_4)

{
  CUser *pCVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *pGVar5;
  CDataManager *this_00;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  CCreatureMgr *pCVar9;
  stAvatarExpansionInfo_t local_74 [4];
  stAvatarExpansionInfo_t local_70 [4];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  char *local_28;
  int local_24;
  int local_20;
  byte local_19;
  char *local_18;
  int local_14;
  int local_10;
  
  if (param_2 == 1) {
    InterfacePacketBuf::put_short(param_4,param_3);
    if (param_3 == 0) {
      InterfacePacketBuf::put_int(param_4,0);
      InterfacePacketBuf::put_int(param_4,*(int *)(this + 4));
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_short(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_int(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_short(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_packet(param_4,(Inven_Item *)g_emptySlot);
      return 1;
    }
    if (param_3 == 1) {
      InterfacePacketBuf::put_int(param_4,1);
      InterfacePacketBuf::put_int
                (param_4,*(int *)(this + 8) + *(int *)(this + 0xc) + *(int *)(this + 0x10));
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_short(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_int(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_short(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_packet(param_4,(Inven_Item *)g_emptySlot);
      return 1;
    }
    if (param_3 == 2) {
      InterfacePacketBuf::put_int(param_4,2);
      iVar6 = CUserCharacInfo::GetWinPoint(*(CUserCharacInfo **)this);
      InterfacePacketBuf::put_int(param_4,iVar6);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_short(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_int(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_short(param_4,0);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_packet(param_4,(Inven_Item *)g_emptySlot);
      return 1;
    }
    if (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2) != 0) {
      InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2));
      InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7));
      uVar7 = GetIntegratedPvPItemAttr(*(int *)(this + 0x650) + param_3 * 0x3d,1,param_3);
      InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
      InterfacePacketBuf::put_short
                (param_4,(uint)*(ushort *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0xb));
      InterfacePacketBuf::put_byte(param_4,(uint)*(byte *)(*(int *)(this + 0x650) + param_3 * 0x3d))
      ;
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsEnchantRevisionChannel(pGVar5);
      if (cVar3 == '\0') {
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0xd))
        ;
      }
      else {
        InterfacePacketBuf::put_int(param_4,0);
      }
      uVar7 = stAmplifyOption_t::getAbilityType
                        ((stAmplifyOption_t *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0x11));
      InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
      uVar7 = stAmplifyOption_t::getAbilityValue
                        ((stAmplifyOption_t *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0x11));
      InterfacePacketBuf::put_short(param_4,uVar7 & 0xffff);
      iVar6 = *(int *)(this + 0x650);
      pCVar1 = *(CUser **)this;
      iVar4 = G_CDataManager();
      WongWork::CItemUpgrade::make3rdChroniclePacket
                (*(CItemUpgrade **)(iVar4 + 0x20),pCVar1,(Inven_Item *)(iVar6 + param_3 * 0x3d),
                 (PacketGuard *)param_4);
      InterfacePacketBuf::put_packet
                (param_4,(Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d));
      return 1;
    }
    if (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2) == 0) {
      InterfacePacketBuf::put_item_idx(param_4,0xffffffff);
      InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7));
      uVar7 = GetIntegratedPvPItemAttr(*(int *)(this + 0x650) + param_3 * 0x3d,1,param_3);
      InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
      InterfacePacketBuf::put_short
                (param_4,(uint)*(ushort *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0xb));
      InterfacePacketBuf::put_byte(param_4,(uint)*(byte *)(*(int *)(this + 0x650) + param_3 * 0x3d))
      ;
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsEnchantRevisionChannel(pGVar5);
      if (cVar3 == '\0') {
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0xd))
        ;
      }
      else {
        InterfacePacketBuf::put_int(param_4,0);
      }
      uVar7 = stAmplifyOption_t::getAbilityType
                        ((stAmplifyOption_t *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0x11));
      InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
      uVar7 = stAmplifyOption_t::getAbilityValue
                        ((stAmplifyOption_t *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0x11));
      InterfacePacketBuf::put_short(param_4,uVar7 & 0xffff);
      InterfacePacketBuf::put_byte(param_4,0);
      InterfacePacketBuf::put_packet
                (param_4,(Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d));
      return 1;
    }
    cMyTrace::cMyTrace(local_6c,
                       "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",0x758,
                       5);
    cMyTrace::operator()
              (local_6c,"[%s][%d]",
               "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",0x758);
    return 0;
  }
  if (1 < param_2) {
    if (param_2 == 2) {
      if (*(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 2) != 0) {
        local_2c = 0;
        InterfacePacketBuf::put_short(param_4,param_3);
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 2));
        local_2c = OS_API::GetDateTimeTick();
        iVar6 = WongWork::CAvatarItemMgr::GetRemainDate
                          ((CAvatarItemMgr *)(this + 0x734),
                           *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7),local_2c);
        InterfacePacketBuf::put_int(param_4,iVar6);
        uVar7 = Inven_Item::GetItemAttr((Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d));
        InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
        InterfacePacketBuf::put_short
                  (param_4,(uint)*(ushort *)(*(int *)(this + 0x654) + param_3 * 0x3d + 0xb));
        InterfacePacketBuf::put_byte
                  (param_4,(uint)*(byte *)(*(int *)(this + 0x654) + param_3 * 0x3d));
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 0xd))
        ;
        InterfacePacketBuf::put_byte(param_4,0);
        InterfacePacketBuf::put_short(param_4,0);
        InterfacePacketBuf::put_int(param_4,0x1e);
        pcVar8 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData
                                   ((CAvatarItemMgr *)(this + 0x734),
                                    *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7));
        InterfacePacketBuf::put_binary(param_4,pcVar8,0x1e);
        local_28 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo
                                     ((CAvatarItemMgr *)(this + 0x734),
                                      *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7));
        InterfacePacketBuf::put_int(param_4,4);
        if (local_28 == (char *)0x0) {
          stAvatarExpansionInfo_t::init(local_70);
          InterfacePacketBuf::put_binary(param_4,(char *)local_70,4);
        }
        else {
          InterfacePacketBuf::put_binary(param_4,local_28,4);
        }
        InterfacePacketBuf::put_byte(param_4,0);
        InterfacePacketBuf::put_packet
                  (param_4,(Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d));
        return 1;
      }
      cMyTrace::cMyTrace(local_5c,
                         "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",
                         0x7a0,5);
      cMyTrace::operator()
                (local_5c,"[%s][%d]",
                 "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",0x7a0);
      return 0;
    }
    if (param_2 == 3) {
      if (*(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 2) != 0) {
        InterfacePacketBuf::put_short(param_4,param_3);
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 2));
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7));
        uVar7 = Inven_Item::GetItemAttr((Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d));
        InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
        InterfacePacketBuf::put_short
                  (param_4,(uint)*(ushort *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 0xb));
        InterfacePacketBuf::put_byte
                  (param_4,(uint)*(byte *)(*(int *)(this + 0x6e4) + param_3 * 0x3d));
        InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 0xd))
        ;
        InterfacePacketBuf::put_byte(param_4,0);
        InterfacePacketBuf::put_short(param_4,0);
        if (*(char *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 1) == '\x05') {
          local_24 = 0;
          local_24 = OS_API::GetDateTimeTick();
          iVar6 = *(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7);
          pCVar9 = (CCreatureMgr *)GetCreatureMgrR(this);
          local_20 = user_creature::CCreatureMgr::GetRemainDate(pCVar9,iVar6,local_24);
          InterfacePacketBuf::put_int(param_4,local_20);
        }
        InterfacePacketBuf::put_byte(param_4,0);
        InterfacePacketBuf::put_packet
                  (param_4,(Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d));
        return 1;
      }
      cMyTrace::cMyTrace(local_4c,
                         "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",
                         0x801,5);
      cMyTrace::operator()
                (local_4c,"[%s][%d]",
                 "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",0x801);
      return 0;
    }
    return 0;
  }
  if (param_2 != 0) {
    return 0;
  }
  if (*(int *)(this + param_3 * 0x3d + 0x1e) == 0) {
    cMyTrace::cMyTrace(local_3c,
                       "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",0x884,
                       5);
    cMyTrace::operator()
              (local_3c,"[%s][%d]",
               "bool CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const",0x884);
    return 0;
  }
  InterfacePacketBuf::put_short(param_4,param_3);
  InterfacePacketBuf::put_int(param_4,*(int *)(this + param_3 * 0x3d + 0x1e));
  InterfacePacketBuf::put_int(param_4,*(int *)(this + param_3 * 0x3d + 0x23));
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar3 != '\0') {
    this_00 = (CDataManager *)G_CDataManager();
    iVar6 = CDataManager::GetUpgradeRevisionPvPChannel(this_00);
    if (iVar6 == 0) {
      bVar2 = true;
      goto LAB_084fd33a;
    }
  }
  bVar2 = false;
LAB_084fd33a:
  if (bVar2) {
    local_19 = 0;
    if ((param_3 < 0x16) && ((1 << ((byte)param_3 & 0x1f) & 0x3ff400U) != 0)) {
      cVar3 = Inven_Item::GetReSealCount((Inven_Item *)(this + param_3 * 0x3d + 0x1c));
      local_19 = cVar3 << 5;
    }
    else {
      local_19 = Inven_Item::GetItemAttr((Inven_Item *)(this + param_3 * 0x3d + 0x1c));
    }
    InterfacePacketBuf::put_byte(param_4,(uint)local_19);
  }
  else {
    uVar7 = Inven_Item::GetItemAttr((Inven_Item *)(this + param_3 * 0x3d + 0x1c));
    InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
  }
  InterfacePacketBuf::put_short(param_4,(uint)*(ushort *)(this + param_3 * 0x3d + 0x27));
  InterfacePacketBuf::put_byte(param_4,(uint)(byte)this[param_3 * 0x3d + 0x1c]);
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsEnchantRevisionChannel(pGVar5);
  if (cVar3 == '\0') {
    InterfacePacketBuf::put_int(param_4,*(int *)(this + param_3 * 0x3d + 0x29));
  }
  else {
    InterfacePacketBuf::put_int(param_4,0);
  }
  uVar7 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + param_3 * 0x3d + 0x2d));
  InterfacePacketBuf::put_byte(param_4,uVar7 & 0xff);
  uVar7 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + param_3 * 0x3d + 0x2d));
  InterfacePacketBuf::put_short(param_4,uVar7 & 0xffff);
  cVar3 = Inven_Item::isAvatarItemType((Inven_Item *)(this + param_3 * 0x3d + 0x1c));
  if (cVar3 != '\0') {
    InterfacePacketBuf::put_int(param_4,0x1e);
    pcVar8 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData
                               ((CAvatarItemMgr *)(this + 0x734),
                                *(int *)(this + param_3 * 0x3d + 0x23));
    InterfacePacketBuf::put_binary(param_4,pcVar8,0x1e);
    local_18 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo
                                 ((CAvatarItemMgr *)(this + 0x734),
                                  *(int *)(this + param_3 * 0x3d + 0x23));
    InterfacePacketBuf::put_int(param_4,4);
    if (local_18 == (char *)0x0) {
      stAvatarExpansionInfo_t::init(local_74);
      InterfacePacketBuf::put_binary(param_4,(char *)local_74,4);
    }
    else {
      InterfacePacketBuf::put_binary(param_4,local_18,4);
    }
  }
  if (this[param_3 * 0x3d + 0x1d] == (CInventory)0x5) {
    local_14 = 0;
    local_14 = OS_API::GetDateTimeTick();
    iVar6 = *(int *)(this + param_3 * 0x3d + 0x23);
    pCVar9 = (CCreatureMgr *)GetCreatureMgrR(this);
    local_10 = user_creature::CCreatureMgr::GetRemainDate(pCVar9,iVar6,local_14);
    InterfacePacketBuf::put_int(param_4,local_10);
  }
  pCVar1 = *(CUser **)this;
  iVar6 = G_CDataManager();
  WongWork::CItemUpgrade::make3rdChroniclePacket
            (*(CItemUpgrade **)(iVar6 + 0x20),pCVar1,(Inven_Item *)(this + param_3 * 0x3d + 0x1c),
             (PacketGuard *)param_4);
  InterfacePacketBuf::put_packet(param_4,(Inven_Item *)(this + param_3 * 0x3d + 0x1c));
  return 1;
}
```
