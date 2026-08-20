# dispatch_sig

`_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci`

`Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultAskRegistedItemNum` | `0x084d5930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d5930  _ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci
#           Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser*, char*, int)
# range [0x084d5930, 0x084d6ad5]
084d5930 +0x0000:  push   %ebp
084d5931 +0x0001:  mov    %esp,%ebp
084d5933 +0x0003:  push   %ebx
084d5934 +0x0004:  sub    $0x1e4,%esp
084d593a +0x000a:  cmpl   $0x0,0xc(%ebp)
084d593e +0x000e:  jne    084d594a <+0x1a>
084d5940 +0x0010:  mov    $0x0,%eax
084d5945 +0x0015:  jmp    084d6ad1 <+0x11a1>
084d594a +0x001a:  mov    0x10(%ebp),%eax
084d594d +0x001d:  mov    %eax,-0x68(%ebp)
084d5950 +0x0020:  mov    -0x68(%ebp),%eax
084d5953 +0x0023:  mov    0x4(%eax),%eax
084d5956 +0x0026:  mov    %eax,%ebx
084d5958 +0x0028:  mov    0xc(%ebp),%eax
084d595b +0x002b:  mov    %eax,(%esp)
084d595e +0x002e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d5963 +0x0033:  cmp    %eax,%ebx
084d5965 +0x0035:  setne  %al
084d5968 +0x0038:  test   %al,%al
084d596a +0x003a:  je     084d5976 <+0x46>
084d596c +0x003c:  mov    $0x0,%eax
084d5971 +0x0041:  jmp    084d6ad1 <+0x11a1>
084d5976 +0x0046:  movl   $0x0,-0x38(%ebp)
084d597d +0x004d:  jmp    084d59f4 <+0xc4>
084d597f +0x004f:  mov    -0x38(%ebp),%eax
084d5982 +0x0052:  mov    &_ZL6gmList(,%eax,4),%eax
084d5989 +0x0059:  mov    %eax,%ebx
084d598b +0x005b:  mov    0xc(%ebp),%eax
084d598e +0x005e:  mov    %eax,(%esp)
084d5991 +0x0061:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d5996 +0x0066:  cmp    %eax,%ebx
084d5998 +0x0068:  sete   %al
084d599b +0x006b:  test   %al,%al
084d599d +0x006d:  je     084d59f0 <+0xc0>
084d599f +0x006f:  mov    0xc(%ebp),%eax
084d59a2 +0x0072:  mov    %eax,(%esp)
084d59a5 +0x0075:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d59aa +0x007a:  mov    %eax,%ebx
084d59ac +0x007c:  movl   $0x0,0xc(%esp)
084d59b4 +0x0084:  movl   $0x37a3,0x8(%esp)
084d59bc +0x008c:  movl   $&_ZZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d59c4 +0x0094:  lea    -0x78(%ebp),%eax
084d59c7 +0x0097:  mov    %eax,(%esp)
084d59ca +0x009a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d59cf +0x009f:  mov    %ebx,0xc(%esp)
084d59d3 +0x00a3:  movl   $"ACK AuctionResultAskRegistedItemNum",0x8(%esp)
084d59db +0x00ab:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d59e3 +0x00b3:  lea    -0x78(%ebp),%eax
084d59e6 +0x00b6:  mov    %eax,(%esp)
084d59e9 +0x00b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d59ee +0x00be:  jmp    084d59ff <+0xcf>
084d59f0 +0x00c0:  addl   $0x1,-0x38(%ebp)
084d59f4 +0x00c4:  cmpl   $0x4,-0x38(%ebp)
084d59f8 +0x00c8:  setle  %al
084d59fb +0x00cb:  test   %al,%al
084d59fd +0x00cd:  jne    084d597f <+0x4f>
084d59ff +0x00cf:  mov    -0x68(%ebp),%eax
084d5a02 +0x00d2:  movzwl 0x8(%eax),%eax
084d5a06 +0x00d6:  mov    %ax,-0x62(%ebp)
084d5a0a +0x00da:  mov    -0x68(%ebp),%eax
084d5a0d +0x00dd:  mov    (%eax),%eax
084d5a0f +0x00df:  mov    %eax,-0x60(%ebp)
084d5a12 +0x00e2:  cmpw   $0xffff,-0x62(%ebp)
084d5a17 +0x00e7:  jne    084d5a47 <+0x117>
084d5a19 +0x00e9:  mov    -0x68(%ebp),%eax
084d5a1c +0x00ec:  mov    (%eax),%eax
084d5a1e +0x00ee:  mov    %eax,0xc(%esp)
084d5a22 +0x00f2:  movl   $0x9e,0x8(%esp)
084d5a2a +0x00fa:  movl   $0xba,0x4(%esp)
084d5a32 +0x0102:  mov    0xc(%ebp),%eax
084d5a35 +0x0105:  mov    %eax,(%esp)
084d5a38 +0x0108:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5a3d +0x010d:  mov    $0x0,%eax
084d5a42 +0x0112:  jmp    084d6ad1 <+0x11a1>
084d5a47 +0x0117:  cmpw   $0xfffe,-0x62(%ebp)
084d5a4c +0x011c:  jne    084d5a7c <+0x14c>
084d5a4e +0x011e:  mov    -0x68(%ebp),%eax
084d5a51 +0x0121:  mov    (%eax),%eax
084d5a53 +0x0123:  mov    %eax,0xc(%esp)
084d5a57 +0x0127:  movl   $0x91,0x8(%esp)
084d5a5f +0x012f:  movl   $0xba,0x4(%esp)
084d5a67 +0x0137:  mov    0xc(%ebp),%eax
084d5a6a +0x013a:  mov    %eax,(%esp)
084d5a6d +0x013d:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5a72 +0x0142:  mov    $0x0,%eax
084d5a77 +0x0147:  jmp    084d6ad1 <+0x11a1>
084d5a7c +0x014c:  movl   $0x1d,0x4(%esp)
084d5a84 +0x0154:  mov    0xc(%ebp),%eax
084d5a87 +0x0157:  mov    %eax,(%esp)
084d5a8a +0x015a:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d5a8f +0x015f:  test   %al,%al
084d5a91 +0x0161:  je     084d5aeb <+0x1bb>
084d5a93 +0x0163:  movl   $0x0,-0x34(%ebp)
084d5a9a +0x016a:  cmpl   $0x1,-0x60(%ebp)
084d5a9e +0x016e:  jne    084d5aa9 <+0x179>
084d5aa0 +0x0170:  movl   $0xa,-0x34(%ebp)
084d5aa7 +0x0177:  jmp    084d5ab0 <+0x180>
084d5aa9 +0x0179:  movl   $0x1e,-0x34(%ebp)
084d5ab0 +0x0180:  movswl -0x62(%ebp),%eax
084d5ab4 +0x0184:  cmp    -0x34(%ebp),%eax
084d5ab7 +0x0187:  jl     084d5b3f <+0x20f>
084d5abd +0x018d:  mov    -0x68(%ebp),%eax
084d5ac0 +0x0190:  mov    (%eax),%eax
084d5ac2 +0x0192:  mov    %eax,0xc(%esp)
084d5ac6 +0x0196:  movl   $0x97,0x8(%esp)
084d5ace +0x019e:  movl   $0xba,0x4(%esp)
084d5ad6 +0x01a6:  mov    0xc(%ebp),%eax
084d5ad9 +0x01a9:  mov    %eax,(%esp)
084d5adc +0x01ac:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5ae1 +0x01b1:  mov    $0x0,%eax
084d5ae6 +0x01b6:  jmp    084d6ad1 <+0x11a1>
084d5aeb +0x01bb:  movl   $0x0,-0x30(%ebp)
084d5af2 +0x01c2:  cmpl   $0x1,-0x60(%ebp)
084d5af6 +0x01c6:  jne    084d5b01 <+0x1d1>
084d5af8 +0x01c8:  movl   $0x3,-0x30(%ebp)
084d5aff +0x01cf:  jmp    084d5b08 <+0x1d8>
084d5b01 +0x01d1:  movl   $0xa,-0x30(%ebp)
084d5b08 +0x01d8:  movswl -0x62(%ebp),%eax
084d5b0c +0x01dc:  cmp    -0x30(%ebp),%eax
084d5b0f +0x01df:  jl     084d5b3f <+0x20f>
084d5b11 +0x01e1:  mov    -0x68(%ebp),%eax
084d5b14 +0x01e4:  mov    (%eax),%eax
084d5b16 +0x01e6:  mov    %eax,0xc(%esp)
084d5b1a +0x01ea:  movl   $0x97,0x8(%esp)
084d5b22 +0x01f2:  movl   $0xba,0x4(%esp)
084d5b2a +0x01fa:  mov    0xc(%ebp),%eax
084d5b2d +0x01fd:  mov    %eax,(%esp)
084d5b30 +0x0200:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5b35 +0x0205:  mov    $0x0,%eax
084d5b3a +0x020a:  jmp    084d6ad1 <+0x11a1>
084d5b3f +0x020f:  movl   $0x0,-0x5c(%ebp)
084d5b46 +0x0216:  cmpl   $0x1,-0x60(%ebp)
084d5b4a +0x021a:  jne    084d5b55 <+0x225>
084d5b4c +0x021c:  movl   $0x0,-0x5c(%ebp)
084d5b53 +0x0223:  jmp    084d5b5c <+0x22c>
084d5b55 +0x0225:  movl   $0x2710,-0x5c(%ebp)
084d5b5c +0x022c:  mov    0xc(%ebp),%eax
084d5b5f +0x022f:  mov    %eax,(%esp)
084d5b62 +0x0232:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
084d5b67 +0x0237:  cmp    -0x5c(%ebp),%eax
084d5b6a +0x023a:  setl   %al
084d5b6d +0x023d:  test   %al,%al
084d5b6f +0x023f:  je     084d5b9f <+0x26f>
084d5b71 +0x0241:  mov    -0x68(%ebp),%eax
084d5b74 +0x0244:  mov    (%eax),%eax
084d5b76 +0x0246:  mov    %eax,0xc(%esp)
084d5b7a +0x024a:  movl   $0x90,0x8(%esp)
084d5b82 +0x0252:  movl   $0xba,0x4(%esp)
084d5b8a +0x025a:  mov    0xc(%ebp),%eax
084d5b8d +0x025d:  mov    %eax,(%esp)
084d5b90 +0x0260:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5b95 +0x0265:  mov    $0x0,%eax
084d5b9a +0x026a:  jmp    084d6ad1 <+0x11a1>
084d5b9f +0x026f:  movl   $0xf4240,-0x58(%ebp)
084d5ba6 +0x0276:  movl   $0x0,-0x54(%ebp)
084d5bad +0x027d:  mov    -0x68(%ebp),%eax
084d5bb0 +0x0280:  mov    0xd(%eax),%eax
084d5bb3 +0x0283:  cmp    $0x28d287,%eax
084d5bb8 +0x0288:  jbe    084d5c08 <+0x2d8>
084d5bba +0x028a:  mov    -0x68(%ebp),%eax
084d5bbd +0x028d:  mov    0xd(%eax),%eax
084d5bc0 +0x0290:  cmp    $0x28d299,%eax
084d5bc5 +0x0295:  ja     084d5c08 <+0x2d8>
084d5bc7 +0x0297:  mov    -0x68(%ebp),%eax
084d5bca +0x029a:  mov    (%eax),%eax
084d5bcc +0x029c:  cmp    $0x1,%eax
084d5bcf +0x029f:  jne    084d5c08 <+0x2d8>
084d5bd1 +0x02a1:  mov    -0x68(%ebp),%eax
084d5bd4 +0x02a4:  mov    0xd(%eax),%eax
084d5bd7 +0x02a7:  cmp    $0x28d291,%eax
084d5bdc +0x02ac:  ja     084d5bf4 <+0x2c4>
084d5bde +0x02ae:  mov    -0x68(%ebp),%eax
084d5be1 +0x02b1:  mov    0xd(%eax),%eax
084d5be4 +0x02b4:  imul   $0xf4240,%eax,%eax
084d5bea +0x02ba:  add    $0x199b9040,%eax
084d5bef +0x02bf:  mov    %eax,-0x54(%ebp)
084d5bf2 +0x02c2:  jmp    084d5c08 <+0x2d8>
084d5bf4 +0x02c4:  mov    -0x68(%ebp),%eax
084d5bf7 +0x02c7:  mov    0xd(%eax),%eax
084d5bfa +0x02ca:  imul   $0x989680,%eax,%eax
084d5c00 +0x02d0:  sub    $0x549a800,%eax
084d5c05 +0x02d5:  mov    %eax,-0x54(%ebp)
084d5c08 +0x02d8:  mov    -0x68(%ebp),%eax
084d5c0b +0x02db:  movzbl 0xa(%eax),%eax
084d5c0f +0x02df:  mov    %al,-0x4f(%ebp)
084d5c12 +0x02e2:  mov    -0x68(%ebp),%eax
084d5c15 +0x02e5:  movzwl 0xb(%eax),%eax
084d5c19 +0x02e9:  mov    %ax,-0x4e(%ebp)
084d5c1d +0x02ed:  mov    -0x68(%ebp),%eax
084d5c20 +0x02f0:  mov    0xd(%eax),%eax
084d5c23 +0x02f3:  mov    %eax,-0x4c(%ebp)
084d5c26 +0x02f6:  mov    -0x68(%ebp),%eax
084d5c29 +0x02f9:  mov    0x11(%eax),%eax
084d5c2c +0x02fc:  mov    %eax,-0x48(%ebp)
084d5c2f +0x02ff:  lea    -0x17b(%ebp),%eax
084d5c35 +0x0305:  mov    %eax,(%esp)
084d5c38 +0x0308:  call   084e9a12 <_GLOBAL__I__Z7getUserj+0x9c4>  ; global constructors keyed to getUser(unsigned int)+0x9c4
084d5c3d +0x030d:  mov    0xc(%ebp),%eax
084d5c40 +0x0310:  mov    %eax,(%esp)
084d5c43 +0x0313:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084d5c48 +0x0318:  mov    %eax,-0x169(%ebp)
084d5c4e +0x031e:  mov    0xc(%ebp),%eax
084d5c51 +0x0321:  mov    %eax,(%esp)
084d5c54 +0x0324:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d5c59 +0x0329:  mov    %eax,-0x165(%ebp)
084d5c5f +0x032f:  mov    0xc(%ebp),%eax
084d5c62 +0x0332:  mov    %eax,(%esp)
084d5c65 +0x0335:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d5c6a +0x033a:  add    $0x4,%eax
084d5c6d +0x033d:  movl   $0xd,0x8(%esp)
084d5c75 +0x0345:  mov    %eax,0x4(%esp)
084d5c79 +0x0349:  lea    -0x17b(%ebp),%eax
084d5c7f +0x034f:  add    $0x1a,%eax
084d5c82 +0x0352:  mov    %eax,(%esp)
084d5c85 +0x0355:  call   0807d8d0 <_init+0x1c8>
084d5c8a +0x035a:  movb   $0x0,-0x154(%ebp)
084d5c91 +0x0361:  movl   $0x1d,0x4(%esp)
084d5c99 +0x0369:  mov    0xc(%ebp),%eax
084d5c9c +0x036c:  mov    %eax,(%esp)
084d5c9f +0x036f:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d5ca4 +0x0374:  mov    %al,-0x154(%ebp)
084d5caa +0x037a:  mov    -0x68(%ebp),%eax
084d5cad +0x037d:  mov    0x15(%eax),%eax
084d5cb0 +0x0380:  mov    %eax,-0x153(%ebp)
084d5cb6 +0x0386:  mov    -0x68(%ebp),%eax
084d5cb9 +0x0389:  mov    0x19(%eax),%eax
084d5cbc +0x038c:  mov    %eax,-0x14f(%ebp)
084d5cc2 +0x0392:  mov    0xc(%ebp),%eax
084d5cc5 +0x0395:  mov    %eax,(%esp)
084d5cc8 +0x0398:  call   082f0960 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6e4
084d5ccd +0x039d:  mov    %eax,-0xf4(%ebp)
084d5cd3 +0x03a3:  mov    -0x68(%ebp),%eax
084d5cd6 +0x03a6:  mov    0x1d(%eax),%eax
084d5cd9 +0x03a9:  mov    %eax,-0xe6(%ebp)
084d5cdf +0x03af:  mov    -0x68(%ebp),%eax
084d5ce2 +0x03b2:  mov    0x21(%eax),%edx
084d5ce5 +0x03b5:  mov    %edx,-0xe2(%ebp)
084d5ceb +0x03bb:  mov    0x25(%eax),%edx
084d5cee +0x03be:  mov    %edx,-0xde(%ebp)
084d5cf4 +0x03c4:  mov    0x29(%eax),%eax
084d5cf7 +0x03c7:  mov    %eax,-0xda(%ebp)
084d5cfd +0x03cd:  mov    0xc(%ebp),%eax
084d5d00 +0x03d0:  mov    %eax,(%esp)
084d5d03 +0x03d3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084d5d08 +0x03d8:  mov    %eax,-0x44(%ebp)
084d5d0b +0x03db:  movl   $0x6,-0x40(%ebp)
084d5d12 +0x03e2:  lea    -0xb6(%ebp),%eax
084d5d18 +0x03e8:  mov    %eax,(%esp)
084d5d1b +0x03eb:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084d5d20 +0x03f0:  cmpl   $0x0,-0x4c(%ebp)
084d5d24 +0x03f4:  je     084d67be <+0xe8e>
084d5d2a +0x03fa:  movzbl -0x4f(%ebp),%eax
084d5d2e +0x03fe:  cmp    $0x1,%eax
084d5d31 +0x0401:  je     084d5d45 <+0x415>
084d5d33 +0x0403:  cmp    $0x7,%eax
084d5d36 +0x0406:  je     084d5d4e <+0x41e>
084d5d38 +0x0408:  test   %eax,%eax
084d5d3a +0x040a:  jne    084d5d57 <+0x427>
084d5d3c +0x040c:  movl   $0x1,-0x40(%ebp)
084d5d43 +0x0413:  jmp    084d5d85 <+0x455>
084d5d45 +0x0415:  movl   $0x2,-0x40(%ebp)
084d5d4c +0x041c:  jmp    084d5d85 <+0x455>
084d5d4e +0x041e:  movl   $0x3,-0x40(%ebp)
084d5d55 +0x0425:  jmp    084d5d85 <+0x455>
084d5d57 +0x0427:  mov    -0x68(%ebp),%eax
084d5d5a +0x042a:  mov    (%eax),%eax
084d5d5c +0x042c:  mov    %eax,0xc(%esp)
084d5d60 +0x0430:  movl   $0x91,0x8(%esp)
084d5d68 +0x0438:  movl   $0xba,0x4(%esp)
084d5d70 +0x0440:  mov    0xc(%ebp),%eax
084d5d73 +0x0443:  mov    %eax,(%esp)
084d5d76 +0x0446:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5d7b +0x044b:  mov    $0x0,%eax
084d5d80 +0x0450:  jmp    084d6ad1 <+0x11a1>
084d5d85 +0x0455:  mov    -0x68(%ebp),%eax
084d5d88 +0x0458:  mov    0xd(%eax),%eax
084d5d8b +0x045b:  cmp    $0x28d287,%eax
084d5d90 +0x0460:  jbe    084d5f23 <+0x5f3>
084d5d96 +0x0466:  mov    -0x68(%ebp),%eax
084d5d99 +0x0469:  mov    0xd(%eax),%eax
084d5d9c +0x046c:  cmp    $0x28d299,%eax
084d5da1 +0x0471:  ja     084d5f23 <+0x5f3>
084d5da7 +0x0477:  mov    -0x68(%ebp),%eax
084d5daa +0x047a:  mov    (%eax),%eax
084d5dac +0x047c:  cmp    $0x1,%eax
084d5daf +0x047f:  je     084d5ddf <+0x4af>
084d5db1 +0x0481:  mov    -0x68(%ebp),%eax
084d5db4 +0x0484:  mov    (%eax),%eax
084d5db6 +0x0486:  mov    %eax,0xc(%esp)
084d5dba +0x048a:  movl   $0x93,0x8(%esp)
084d5dc2 +0x0492:  movl   $0xba,0x4(%esp)
084d5dca +0x049a:  mov    0xc(%ebp),%eax
084d5dcd +0x049d:  mov    %eax,(%esp)
084d5dd0 +0x04a0:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5dd5 +0x04a5:  mov    $0x0,%eax
084d5dda +0x04aa:  jmp    084d6ad1 <+0x11a1>
084d5ddf +0x04af:  movl   $0x1,0xc(%esp)
084d5de7 +0x04b7:  movl   $0x26,0x8(%esp)
084d5def +0x04bf:  mov    -0x54(%ebp),%eax
084d5df2 +0x04c2:  mov    %eax,0x4(%esp)
084d5df6 +0x04c6:  mov    -0x44(%ebp),%eax
084d5df9 +0x04c9:  mov    %eax,(%esp)
084d5dfc +0x04cc:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
084d5e01 +0x04d1:  xor    $0x1,%eax
084d5e04 +0x04d4:  test   %al,%al
084d5e06 +0x04d6:  je     084d5e36 <+0x506>
084d5e08 +0x04d8:  mov    -0x68(%ebp),%eax
084d5e0b +0x04db:  mov    (%eax),%eax
084d5e0d +0x04dd:  mov    %eax,0xc(%esp)
084d5e11 +0x04e1:  movl   $0x93,0x8(%esp)
084d5e19 +0x04e9:  movl   $0xba,0x4(%esp)
084d5e21 +0x04f1:  mov    0xc(%ebp),%eax
084d5e24 +0x04f4:  mov    %eax,(%esp)
084d5e27 +0x04f7:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d5e2c +0x04fc:  mov    $0x0,%eax
084d5e31 +0x0501:  jmp    084d6ad1 <+0x11a1>
084d5e36 +0x0506:  mov    0xc(%ebp),%eax
084d5e39 +0x0509:  mov    %eax,(%esp)
084d5e3c +0x050c:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
084d5e41 +0x0511:  movl   $0x0,0xc(%esp)
084d5e49 +0x0519:  movl   $0x0,0x8(%esp)
084d5e51 +0x0521:  movl   $0x1,0x4(%esp)
084d5e59 +0x0529:  mov    0xc(%ebp),%eax
084d5e5c +0x052c:  mov    %eax,(%esp)
084d5e5f +0x052f:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
084d5e64 +0x0534:  movl   $0x12,0x4(%esp)
084d5e6c +0x053c:  lea    -0x17b(%ebp),%eax
084d5e72 +0x0542:  mov    %eax,(%esp)
084d5e75 +0x0545:  call   0822e4ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b58
084d5e7a +0x054a:  mov    -0x68(%ebp),%eax
084d5e7d +0x054d:  mov    0x11(%eax),%eax
084d5e80 +0x0550:  mov    %eax,-0x145(%ebp)
084d5e86 +0x0556:  lea    -0x17b(%ebp),%eax
084d5e8c +0x055c:  add    $0x65,%eax
084d5e8f +0x055f:  mov    %eax,(%esp)
084d5e92 +0x0562:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
084d5e97 +0x0567:  movb   $0x0,-0x14b(%ebp)
084d5e9e +0x056e:  mov    -0x68(%ebp),%eax
084d5ea1 +0x0571:  mov    0xd(%eax),%eax
084d5ea4 +0x0574:  mov    %eax,-0x14a(%ebp)
084d5eaa +0x057a:  movw   $0x0,-0x141(%ebp)
084d5eb3 +0x0583:  movl   $0x0,-0x13f(%ebp)
084d5ebd +0x058d:  mov    -0x68(%ebp),%eax
084d5ec0 +0x0590:  mov    (%eax),%eax
084d5ec2 +0x0592:  cmp    $0x1,%eax
084d5ec5 +0x0595:  jne    084d5f02 <+0x5d2>
084d5ec7 +0x0597:  mov    0xc(%ebp),%eax
084d5eca +0x059a:  mov    %eax,(%esp)
084d5ecd +0x059d:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084d5ed2 +0x05a2:  mov    %eax,(%esp)
084d5ed5 +0x05a5:  call   0807e3b0 <_init+0xca8>
084d5eda +0x05aa:  mov    %eax,%ebx
084d5edc +0x05ac:  mov    0xc(%ebp),%eax
084d5edf +0x05af:  mov    %eax,(%esp)
084d5ee2 +0x05b2:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084d5ee7 +0x05b7:  mov    %ebx,0x8(%esp)
084d5eeb +0x05bb:  mov    %eax,0x4(%esp)
084d5eef +0x05bf:  lea    -0x17b(%ebp),%eax
084d5ef5 +0x05c5:  add    $0xa5,%eax
084d5efa +0x05ca:  mov    %eax,(%esp)
084d5efd +0x05cd:  call   0807d8d0 <_init+0x1c8>
084d5f02 +0x05d2:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
084d5f07 +0x05d7:  lea    -0x17b(%ebp),%edx
084d5f0d +0x05dd:  mov    %edx,0x4(%esp)
084d5f11 +0x05e1:  mov    %eax,(%esp)
084d5f14 +0x05e4:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
084d5f19 +0x05e9:  mov    $0x0,%eax
084d5f1e +0x05ee:  jmp    084d6ad1 <+0x11a1>
084d5f23 +0x05f3:  movzwl -0x4e(%ebp),%edx
084d5f27 +0x05f7:  lea    -0x1c8(%ebp),%eax
084d5f2d +0x05fd:  mov    %edx,0xc(%esp)
084d5f31 +0x0601:  mov    -0x40(%ebp),%edx
084d5f34 +0x0604:  mov    %edx,0x8(%esp)
084d5f38 +0x0608:  mov    -0x44(%ebp),%edx
084d5f3b +0x060b:  mov    %edx,0x4(%esp)
084d5f3f +0x060f:  mov    %eax,(%esp)
084d5f42 +0x0612:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084d5f47 +0x0617:  sub    $0x4,%esp
084d5f4a +0x061a:  mov    -0x1c8(%ebp),%eax
084d5f50 +0x0620:  mov    %eax,-0xb6(%ebp)
084d5f56 +0x0626:  mov    -0x1c4(%ebp),%eax
084d5f5c +0x062c:  mov    %eax,-0xb2(%ebp)
084d5f62 +0x0632:  mov    -0x1c0(%ebp),%eax
084d5f68 +0x0638:  mov    %eax,-0xae(%ebp)
084d5f6e +0x063e:  mov    -0x1bc(%ebp),%eax
084d5f74 +0x0644:  mov    %eax,-0xaa(%ebp)
084d5f7a +0x064a:  mov    -0x1b8(%ebp),%eax
084d5f80 +0x0650:  mov    %eax,-0xa6(%ebp)
084d5f86 +0x0656:  mov    -0x1b4(%ebp),%eax
084d5f8c +0x065c:  mov    %eax,-0xa2(%ebp)
084d5f92 +0x0662:  mov    -0x1b0(%ebp),%eax
084d5f98 +0x0668:  mov    %eax,-0x9e(%ebp)
084d5f9e +0x066e:  mov    -0x1ac(%ebp),%eax
084d5fa4 +0x0674:  mov    %eax,-0x9a(%ebp)
084d5faa +0x067a:  mov    -0x1a8(%ebp),%eax
084d5fb0 +0x0680:  mov    %eax,-0x96(%ebp)
084d5fb6 +0x0686:  mov    -0x1a4(%ebp),%eax
084d5fbc +0x068c:  mov    %eax,-0x92(%ebp)
084d5fc2 +0x0692:  mov    -0x1a0(%ebp),%eax
084d5fc8 +0x0698:  mov    %eax,-0x8e(%ebp)
084d5fce +0x069e:  mov    -0x19c(%ebp),%eax
084d5fd4 +0x06a4:  mov    %eax,-0x8a(%ebp)
084d5fda +0x06aa:  mov    -0x198(%ebp),%eax
084d5fe0 +0x06b0:  mov    %eax,-0x86(%ebp)
084d5fe6 +0x06b6:  mov    -0x194(%ebp),%eax
084d5fec +0x06bc:  mov    %eax,-0x82(%ebp)
084d5ff2 +0x06c2:  mov    -0x190(%ebp),%eax
084d5ff8 +0x06c8:  mov    %eax,-0x7e(%ebp)
084d5ffb +0x06cb:  movzbl -0x18c(%ebp),%eax
084d6002 +0x06d2:  mov    %al,-0x7a(%ebp)
084d6005 +0x06d5:  mov    -0xb4(%ebp),%eax
084d600b +0x06db:  cmp    -0x4c(%ebp),%eax
084d600e +0x06de:  jne    084d601d <+0x6ed>
084d6010 +0x06e0:  mov    -0xb4(%ebp),%eax
084d6016 +0x06e6:  cmp    $0x10ec,%eax
084d601b +0x06eb:  jne    084d604b <+0x71b>
084d601d +0x06ed:  mov    -0x68(%ebp),%eax
084d6020 +0x06f0:  mov    (%eax),%eax
084d6022 +0x06f2:  mov    %eax,0xc(%esp)
084d6026 +0x06f6:  movl   $0x91,0x8(%esp)
084d602e +0x06fe:  movl   $0xba,0x4(%esp)
084d6036 +0x0706:  mov    0xc(%ebp),%eax
084d6039 +0x0709:  mov    %eax,(%esp)
084d603c +0x070c:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6041 +0x0711:  mov    $0x0,%eax
084d6046 +0x0716:  jmp    084d6ad1 <+0x11a1>
084d604b +0x071b:  movzwl -0x4e(%ebp),%eax
084d604f +0x071f:  mov    %eax,0x8(%esp)
084d6053 +0x0723:  mov    -0x40(%ebp),%eax
084d6056 +0x0726:  mov    %eax,0x4(%esp)
084d605a +0x072a:  mov    0xc(%ebp),%eax
084d605d +0x072d:  mov    %eax,(%esp)
084d6060 +0x0730:  call   08120242 <_Z32IsTradeLimitAttachTypeItemByUserR5CUserii>  ; IsTradeLimitAttachTypeItemByUser(CUser&, int, int)
084d6065 +0x0735:  test   %al,%al
084d6067 +0x0737:  je     084d60be <+0x78e>
084d6069 +0x0739:  movb   $0x1,-0x79(%ebp)
084d606d +0x073d:  movzwl -0x4e(%ebp),%eax
084d6071 +0x0741:  lea    -0x79(%ebp),%edx
084d6074 +0x0744:  mov    %edx,0xc(%esp)
084d6078 +0x0748:  mov    %eax,0x8(%esp)
084d607c +0x074c:  mov    -0x40(%ebp),%eax
084d607f +0x074f:  mov    %eax,0x4(%esp)
084d6083 +0x0753:  mov    0xc(%ebp),%eax
084d6086 +0x0756:  mov    %eax,(%esp)
084d6089 +0x0759:  call   0812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>  ; CheckItemTradeLimitCountToMoveByUser(CUser&, int, int, bool&)
084d608e +0x075e:  movzbl -0x79(%ebp),%eax
084d6092 +0x0762:  xor    $0x1,%eax
084d6095 +0x0765:  test   %al,%al
084d6097 +0x0767:  je     084d60be <+0x78e>
084d6099 +0x0769:  movl   $0x72,0x8(%esp)
084d60a1 +0x0771:  movl   $0xba,0x4(%esp)
084d60a9 +0x0779:  mov    0xc(%ebp),%eax
084d60ac +0x077c:  mov    %eax,(%esp)
084d60af +0x077f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d60b4 +0x0784:  mov    $0x0,%eax
084d60b9 +0x0789:  jmp    084d6ad1 <+0x11a1>
084d60be +0x078e:  lea    -0xb6(%ebp),%eax
084d60c4 +0x0794:  mov    %eax,(%esp)
084d60c7 +0x0797:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
084d60cc +0x079c:  xor    $0x1,%eax
084d60cf +0x079f:  test   %al,%al
084d60d1 +0x07a1:  je     084d610c <+0x7dc>
084d60d3 +0x07a3:  mov    -0xaf(%ebp),%eax
084d60d9 +0x07a9:  cmp    -0x48(%ebp),%eax
084d60dc +0x07ac:  jge    084d610c <+0x7dc>
084d60de +0x07ae:  mov    -0x68(%ebp),%eax
084d60e1 +0x07b1:  mov    (%eax),%eax
084d60e3 +0x07b3:  mov    %eax,0xc(%esp)
084d60e7 +0x07b7:  movl   $0x92,0x8(%esp)
084d60ef +0x07bf:  movl   $0xba,0x4(%esp)
084d60f7 +0x07c7:  mov    0xc(%ebp),%eax
084d60fa +0x07ca:  mov    %eax,(%esp)
084d60fd +0x07cd:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6102 +0x07d2:  mov    $0x0,%eax
084d6107 +0x07d7:  jmp    084d6ad1 <+0x11a1>
084d610c +0x07dc:  mov    -0xb4(%ebp),%eax
084d6112 +0x07e2:  mov    %eax,%ebx
084d6114 +0x07e4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d6119 +0x07e9:  mov    %ebx,0x4(%esp)
084d611d +0x07ed:  mov    %eax,(%esp)
084d6120 +0x07f0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084d6125 +0x07f5:  mov    %eax,-0x2c(%ebp)
084d6128 +0x07f8:  cmpl   $0x0,-0x2c(%ebp)
084d612c +0x07fc:  je     084d6140 <+0x810>
084d612e +0x07fe:  mov    -0x2c(%ebp),%eax
084d6131 +0x0801:  mov    %eax,(%esp)
084d6134 +0x0804:  call   0828b5b4 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x29>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x29
084d6139 +0x0809:  xor    $0x1,%eax
084d613c +0x080c:  test   %al,%al
084d613e +0x080e:  je     084d6147 <+0x817>
084d6140 +0x0810:  mov    $0x1,%eax
084d6145 +0x0815:  jmp    084d614c <+0x81c>
084d6147 +0x0817:  mov    $0x0,%eax
084d614c +0x081c:  test   %al,%al
084d614e +0x081e:  je     084d617e <+0x84e>
084d6150 +0x0820:  mov    -0x68(%ebp),%eax
084d6153 +0x0823:  mov    (%eax),%eax
084d6155 +0x0825:  mov    %eax,0xc(%esp)
084d6159 +0x0829:  movl   $0x91,0x8(%esp)
084d6161 +0x0831:  movl   $0xba,0x4(%esp)
084d6169 +0x0839:  mov    0xc(%ebp),%eax
084d616c +0x083c:  mov    %eax,(%esp)
084d616f +0x083f:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6174 +0x0844:  mov    $0x0,%eax
084d6179 +0x0849:  jmp    084d6ad1 <+0x11a1>
084d617e +0x084e:  mov    -0x2c(%ebp),%eax
084d6181 +0x0851:  mov    (%eax),%eax
084d6183 +0x0853:  add    $0x10,%eax
084d6186 +0x0856:  mov    (%eax),%edx
084d6188 +0x0858:  mov    -0x2c(%ebp),%eax
084d618b +0x085b:  mov    %eax,(%esp)
084d618e +0x085e:  call   *%edx
084d6190 +0x0860:  xor    $0x1,%eax
084d6193 +0x0863:  test   %al,%al
084d6195 +0x0865:  je     084d628a <+0x95a>
084d619b +0x086b:  mov    -0x2c(%ebp),%eax
084d619e +0x086e:  mov    %eax,(%esp)
084d61a1 +0x0871:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
084d61a6 +0x0876:  test   %eax,%eax
084d61a8 +0x0878:  jne    084d61b9 <+0x889>
084d61aa +0x087a:  mov    -0x2c(%ebp),%eax
084d61ad +0x087d:  mov    %eax,(%esp)
084d61b0 +0x0880:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
084d61b5 +0x0885:  test   %eax,%eax
084d61b7 +0x0887:  je     084d61c0 <+0x890>
084d61b9 +0x0889:  mov    $0x1,%eax
084d61be +0x088e:  jmp    084d61c5 <+0x895>
084d61c0 +0x0890:  mov    $0x0,%eax
084d61c5 +0x0895:  test   %al,%al
084d61c7 +0x0897:  je     084d6307 <+0x9d7>
084d61cd +0x089d:  mov    -0x2c(%ebp),%eax
084d61d0 +0x08a0:  mov    %eax,(%esp)
084d61d3 +0x08a3:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
084d61d8 +0x08a8:  test   %eax,%eax
084d61da +0x08aa:  jne    084d61f2 <+0x8c2>
084d61dc +0x08ac:  mov    -0x2c(%ebp),%eax
084d61df +0x08af:  mov    %eax,(%esp)
084d61e2 +0x08b2:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
084d61e7 +0x08b7:  test   %eax,%eax
084d61e9 +0x08b9:  jne    084d61f2 <+0x8c2>
084d61eb +0x08bb:  mov    $0x1,%eax
084d61f0 +0x08c0:  jmp    084d61f7 <+0x8c7>
084d61f2 +0x08c2:  mov    $0x0,%eax
084d61f7 +0x08c7:  test   %al,%al
084d61f9 +0x08c9:  je     084d6229 <+0x8f9>
084d61fb +0x08cb:  mov    -0x68(%ebp),%eax
084d61fe +0x08ce:  mov    (%eax),%eax
084d6200 +0x08d0:  mov    %eax,0xc(%esp)
084d6204 +0x08d4:  movl   $0x91,0x8(%esp)
084d620c +0x08dc:  movl   $0xba,0x4(%esp)
084d6214 +0x08e4:  mov    0xc(%ebp),%eax
084d6217 +0x08e7:  mov    %eax,(%esp)
084d621a +0x08ea:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d621f +0x08ef:  mov    $0x0,%eax
084d6224 +0x08f4:  jmp    084d6ad1 <+0x11a1>
084d6229 +0x08f9:  movzwl -0xab(%ebp),%eax
084d6230 +0x0900:  movzwl %ax,%eax
084d6233 +0x0903:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
084d6239 +0x0909:  add    $0x44a54a80,%eax
084d623e +0x090e:  mov    %eax,-0x24(%ebp)
084d6241 +0x0911:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084d6248 +0x0918:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084d624d +0x091d:  mov    %eax,-0x20(%ebp)
084d6250 +0x0920:  mov    -0x24(%ebp),%eax
084d6253 +0x0923:  cmp    -0x20(%ebp),%eax
084d6256 +0x0926:  jg     084d6307 <+0x9d7>
084d625c +0x092c:  mov    -0x68(%ebp),%eax
084d625f +0x092f:  mov    (%eax),%eax
084d6261 +0x0931:  mov    %eax,0xc(%esp)
084d6265 +0x0935:  movl   $0x91,0x8(%esp)
084d626d +0x093d:  movl   $0xba,0x4(%esp)
084d6275 +0x0945:  mov    0xc(%ebp),%eax
084d6278 +0x0948:  mov    %eax,(%esp)
084d627b +0x094b:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6280 +0x0950:  mov    $0x0,%eax
084d6285 +0x0955:  jmp    084d6ad1 <+0x11a1>
084d628a +0x095a:  mov    -0xaf(%ebp),%ebx
084d6290 +0x0960:  mov    0xc(%ebp),%eax
084d6293 +0x0963:  mov    %eax,(%esp)
084d6296 +0x0966:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084d629b +0x096b:  mov    %eax,(%esp)
084d629e +0x096e:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
084d62a3 +0x0973:  mov    %ebx,0x4(%esp)
084d62a7 +0x0977:  mov    %eax,(%esp)
084d62aa +0x097a:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
084d62af +0x097f:  mov    %eax,-0x1c(%ebp)
084d62b2 +0x0982:  cmpl   $0x0,-0x1c(%ebp)
084d62b6 +0x0986:  je     084d62d0 <+0x9a0>
084d62b8 +0x0988:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084d62bf +0x098f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084d62c4 +0x0994:  cmp    -0x1c(%ebp),%eax
084d62c7 +0x0997:  jle    084d62d0 <+0x9a0>
084d62c9 +0x0999:  mov    $0x1,%eax
084d62ce +0x099e:  jmp    084d62d5 <+0x9a5>
084d62d0 +0x09a0:  mov    $0x0,%eax
084d62d5 +0x09a5:  test   %al,%al
084d62d7 +0x09a7:  je     084d6307 <+0x9d7>
084d62d9 +0x09a9:  mov    -0x68(%ebp),%eax
084d62dc +0x09ac:  mov    (%eax),%eax
084d62de +0x09ae:  mov    %eax,0xc(%esp)
084d62e2 +0x09b2:  movl   $0x91,0x8(%esp)
084d62ea +0x09ba:  movl   $0xba,0x4(%esp)
084d62f2 +0x09c2:  mov    0xc(%ebp),%eax
084d62f5 +0x09c5:  mov    %eax,(%esp)
084d62f8 +0x09c8:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d62fd +0x09cd:  mov    $0x0,%eax
084d6302 +0x09d2:  jmp    084d6ad1 <+0x11a1>
084d6307 +0x09d7:  movzbl -0xb5(%ebp),%eax
084d630e +0x09de:  cmp    $0x5,%al
084d6310 +0x09e0:  jne    084d6366 <+0xa36>
084d6312 +0x09e2:  mov    -0xaf(%ebp),%ebx
084d6318 +0x09e8:  mov    -0x44(%ebp),%eax
084d631b +0x09eb:  mov    %eax,(%esp)
084d631e +0x09ee:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
084d6323 +0x09f3:  mov    %ebx,0x4(%esp)
084d6327 +0x09f7:  mov    %eax,(%esp)
084d632a +0x09fa:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
084d632f +0x09ff:  test   %eax,%eax
084d6331 +0x0a01:  sete   %al
084d6334 +0x0a04:  test   %al,%al
084d6336 +0x0a06:  je     084d6366 <+0xa36>
084d6338 +0x0a08:  mov    -0x68(%ebp),%eax
084d633b +0x0a0b:  mov    (%eax),%eax
084d633d +0x0a0d:  mov    %eax,0xc(%esp)
084d6341 +0x0a11:  movl   $0x91,0x8(%esp)
084d6349 +0x0a19:  movl   $0xba,0x4(%esp)
084d6351 +0x0a21:  mov    0xc(%ebp),%eax
084d6354 +0x0a24:  mov    %eax,(%esp)
084d6357 +0x0a27:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d635c +0x0a2c:  mov    $0x0,%eax
084d6361 +0x0a31:  jmp    084d6ad1 <+0x11a1>
084d6366 +0x0a36:  movzbl -0x154(%ebp),%eax
084d636d +0x0a3d:  test   %al,%al
084d636f +0x0a3f:  jne    084d63a2 <+0xa72>
084d6371 +0x0a41:  mov    -0x2c(%ebp),%eax
084d6374 +0x0a44:  mov    %eax,(%esp)
084d6377 +0x0a47:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
084d637c +0x0a4c:  test   %eax,%eax
084d637e +0x0a4e:  je     084d63a2 <+0xa72>
084d6380 +0x0a50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d6385 +0x0a55:  mov    -0x4c(%ebp),%edx
084d6388 +0x0a58:  mov    %edx,0x4(%esp)
084d638c +0x0a5c:  mov    %eax,(%esp)
084d638f +0x0a5f:  call   084e92a4 <_GLOBAL__I__Z7getUserj+0x256>  ; global constructors keyed to getUser(unsigned int)+0x256
084d6394 +0x0a64:  xor    $0x1,%eax
084d6397 +0x0a67:  test   %al,%al
084d6399 +0x0a69:  je     084d63a2 <+0xa72>
084d639b +0x0a6b:  mov    $0x1,%eax
084d63a0 +0x0a70:  jmp    084d63a7 <+0xa77>
084d63a2 +0x0a72:  mov    $0x0,%eax
084d63a7 +0x0a77:  test   %al,%al
084d63a9 +0x0a79:  je     084d63d9 <+0xaa9>
084d63ab +0x0a7b:  mov    -0x68(%ebp),%eax
084d63ae +0x0a7e:  mov    (%eax),%eax
084d63b0 +0x0a80:  mov    %eax,0xc(%esp)
084d63b4 +0x0a84:  movl   $0x95,0x8(%esp)
084d63bc +0x0a8c:  movl   $0xba,0x4(%esp)
084d63c4 +0x0a94:  mov    0xc(%ebp),%eax
084d63c7 +0x0a97:  mov    %eax,(%esp)
084d63ca +0x0a9a:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d63cf +0x0a9f:  mov    $0x0,%eax
084d63d4 +0x0aa4:  jmp    084d6ad1 <+0x11a1>
084d63d9 +0x0aa9:  mov    -0x2c(%ebp),%eax
084d63dc +0x0aac:  mov    %eax,(%esp)
084d63df +0x0aaf:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
084d63e4 +0x0ab4:  mov    %eax,-0x28(%ebp)
084d63e7 +0x0ab7:  mov    -0x28(%ebp),%eax
084d63ea +0x0aba:  cmp    $0x5,%eax
084d63ed +0x0abd:  ja     084d6462 <+0xb32>
084d63ef +0x0abf:  mov    &data#8602fb2e(.rodata)(,%eax,4),%eax
084d63f6 +0x0ac6:  jmp    *%eax
084d63f8 +0x0ac8:  mov    -0x68(%ebp),%eax
084d63fb +0x0acb:  mov    (%eax),%eax
084d63fd +0x0acd:  mov    %eax,0xc(%esp)
084d6401 +0x0ad1:  movl   $0x91,0x8(%esp)
084d6409 +0x0ad9:  movl   $0xba,0x4(%esp)
084d6411 +0x0ae1:  mov    0xc(%ebp),%eax
084d6414 +0x0ae4:  mov    %eax,(%esp)
084d6417 +0x0ae7:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d641c +0x0aec:  mov    $0x0,%eax
084d6421 +0x0af1:  jmp    084d6ad1 <+0x11a1>
084d6426 +0x0af6:  movzbl -0xb6(%ebp),%eax
084d642d +0x0afd:  xor    $0x1,%eax
084d6430 +0x0b00:  test   %al,%al
084d6432 +0x0b02:  je     084d6462 <+0xb32>
084d6434 +0x0b04:  mov    -0x68(%ebp),%eax
084d6437 +0x0b07:  mov    (%eax),%eax
084d6439 +0x0b09:  mov    %eax,0xc(%esp)
084d643d +0x0b0d:  movl   $0x91,0x8(%esp)
084d6445 +0x0b15:  movl   $0xba,0x4(%esp)
084d644d +0x0b1d:  mov    0xc(%ebp),%eax
084d6450 +0x0b20:  mov    %eax,(%esp)
084d6453 +0x0b23:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6458 +0x0b28:  mov    $0x0,%eax
084d645d +0x0b2d:  jmp    084d6ad1 <+0x11a1>
084d6462 +0x0b32:  lea    -0xb6(%ebp),%eax
084d6468 +0x0b38:  add    $0x33,%eax
084d646b +0x0b3b:  mov    %eax,(%esp)
084d646e +0x0b3e:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
084d6473 +0x0b43:  test   %al,%al
084d6475 +0x0b45:  setne  %al
084d6478 +0x0b48:  test   %al,%al
084d647a +0x0b4a:  je     084d64a1 <+0xb71>
084d647c +0x0b4c:  movl   $0x91,0x8(%esp)
084d6484 +0x0b54:  movl   $0xba,0x4(%esp)
084d648c +0x0b5c:  mov    0xc(%ebp),%eax
084d648f +0x0b5f:  mov    %eax,(%esp)
084d6492 +0x0b62:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d6497 +0x0b67:  mov    $0x0,%eax
084d649c +0x0b6c:  jmp    084d6ad1 <+0x11a1>
084d64a1 +0x0b71:  mov    -0x2c(%ebp),%eax
084d64a4 +0x0b74:  mov    (%eax),%eax
084d64a6 +0x0b76:  add    $0x10,%eax
084d64a9 +0x0b79:  mov    (%eax),%edx
084d64ab +0x0b7b:  mov    -0x2c(%ebp),%eax
084d64ae +0x0b7e:  mov    %eax,(%esp)
084d64b1 +0x0b81:  call   *%edx
084d64b3 +0x0b83:  test   %al,%al
084d64b5 +0x0b85:  je     084d655a <+0xc2a>
084d64bb +0x0b8b:  mov    -0x44(%ebp),%eax
084d64be +0x0b8e:  mov    %eax,(%esp)
084d64c1 +0x0b91:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
084d64c6 +0x0b96:  mov    -0xaf(%ebp),%eax
084d64cc +0x0b9c:  mov    %eax,(%esp)
084d64cf +0x0b9f:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
084d64d4 +0x0ba4:  test   %al,%al
084d64d6 +0x0ba6:  je     084d6506 <+0xbd6>
084d64d8 +0x0ba8:  mov    -0x68(%ebp),%eax
084d64db +0x0bab:  mov    (%eax),%eax
084d64dd +0x0bad:  mov    %eax,0xc(%esp)
084d64e1 +0x0bb1:  movl   $0x91,0x8(%esp)
084d64e9 +0x0bb9:  movl   $0xba,0x4(%esp)
084d64f1 +0x0bc1:  mov    0xc(%ebp),%eax
084d64f4 +0x0bc4:  mov    %eax,(%esp)
084d64f7 +0x0bc7:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d64fc +0x0bcc:  mov    $0x0,%eax
084d6501 +0x0bd1:  jmp    084d6ad1 <+0x11a1>
084d6506 +0x0bd6:  mov    -0xaf(%ebp),%ebx
084d650c +0x0bdc:  mov    -0x44(%ebp),%eax
084d650f +0x0bdf:  mov    %eax,(%esp)
084d6512 +0x0be2:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
084d6517 +0x0be7:  mov    %ebx,0x4(%esp)
084d651b +0x0beb:  mov    %eax,(%esp)
084d651e +0x0bee:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
084d6523 +0x0bf3:  test   %eax,%eax
084d6525 +0x0bf5:  setne  %al
084d6528 +0x0bf8:  test   %al,%al
084d652a +0x0bfa:  je     084d655a <+0xc2a>
084d652c +0x0bfc:  mov    -0x68(%ebp),%eax
084d652f +0x0bff:  mov    (%eax),%eax
084d6531 +0x0c01:  mov    %eax,0xc(%esp)
084d6535 +0x0c05:  movl   $0x91,0x8(%esp)
084d653d +0x0c0d:  movl   $0xba,0x4(%esp)
084d6545 +0x0c15:  mov    0xc(%ebp),%eax
084d6548 +0x0c18:  mov    %eax,(%esp)
084d654b +0x0c1b:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6550 +0x0c20:  mov    $0x0,%eax
084d6555 +0x0c25:  jmp    084d6ad1 <+0x11a1>
084d655a +0x0c2a:  lea    -0xb6(%ebp),%eax
084d6560 +0x0c30:  mov    %eax,(%esp)
084d6563 +0x0c33:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
084d6568 +0x0c38:  xor    $0x1,%eax
084d656b +0x0c3b:  test   %al,%al
084d656d +0x0c3d:  je     084d657a <+0xc4a>
084d656f +0x0c3f:  mov    -0x48(%ebp),%eax
084d6572 +0x0c42:  mov    %eax,-0x145(%ebp)
084d6578 +0x0c48:  jmp    084d6586 <+0xc56>
084d657a +0x0c4a:  mov    -0xaf(%ebp),%eax
084d6580 +0x0c50:  mov    %eax,-0x145(%ebp)
084d6586 +0x0c56:  lea    -0xb6(%ebp),%eax
084d658c +0x0c5c:  mov    %eax,(%esp)
084d658f +0x0c5f:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084d6594 +0x0c64:  mov    %al,-0x146(%ebp)
084d659a +0x0c6a:  lea    -0x17b(%ebp),%eax
084d65a0 +0x0c70:  add    $0x65,%eax
084d65a3 +0x0c73:  mov    %eax,(%esp)
084d65a6 +0x0c76:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
084d65ab +0x0c7b:  mov    -0x2c(%ebp),%eax
084d65ae +0x0c7e:  mov    (%eax),%eax
084d65b0 +0x0c80:  add    $0x10,%eax
084d65b3 +0x0c83:  mov    (%eax),%edx
084d65b5 +0x0c85:  mov    -0x2c(%ebp),%eax
084d65b8 +0x0c88:  mov    %eax,(%esp)
084d65bb +0x0c8b:  call   *%edx
084d65bd +0x0c8d:  test   %al,%al
084d65bf +0x0c8f:  je     084d667b <+0xd4b>
084d65c5 +0x0c95:  mov    -0xaf(%ebp),%ebx
084d65cb +0x0c9b:  mov    -0x44(%ebp),%eax
084d65ce +0x0c9e:  mov    %eax,(%esp)
084d65d1 +0x0ca1:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
084d65d6 +0x0ca6:  mov    %ebx,0x4(%esp)
084d65da +0x0caa:  mov    %eax,(%esp)
084d65dd +0x0cad:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
084d65e2 +0x0cb2:  movl   $0x1e,0x8(%esp)
084d65ea +0x0cba:  mov    %eax,0x4(%esp)
084d65ee +0x0cbe:  lea    -0x17b(%ebp),%eax
084d65f4 +0x0cc4:  add    $0x65,%eax
084d65f7 +0x0cc7:  mov    %eax,(%esp)
084d65fa +0x0cca:  call   0807d8a0 <_init+0x198>
084d65ff +0x0ccf:  mov    -0xaf(%ebp),%ebx
084d6605 +0x0cd5:  mov    -0x44(%ebp),%eax
084d6608 +0x0cd8:  mov    %eax,(%esp)
084d660b +0x0cdb:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
084d6610 +0x0ce0:  mov    %ebx,0x4(%esp)
084d6614 +0x0ce4:  mov    %eax,(%esp)
084d6617 +0x0ce7:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
084d661c +0x0cec:  mov    %eax,-0x18(%ebp)
084d661f +0x0cef:  cmpl   $0x0,-0x18(%ebp)
084d6623 +0x0cf3:  je     084d6649 <+0xd19>
084d6625 +0x0cf5:  movl   $0x4,0x8(%esp)
084d662d +0x0cfd:  mov    -0x18(%ebp),%eax
084d6630 +0x0d00:  mov    %eax,0x4(%esp)
084d6634 +0x0d04:  lea    -0x17b(%ebp),%eax
084d663a +0x0d0a:  add    $0x83,%eax
084d663f +0x0d0f:  mov    %eax,(%esp)
084d6642 +0x0d12:  call   0807d8a0 <_init+0x198>
084d6647 +0x0d17:  jmp    084d665c <+0xd2c>
084d6649 +0x0d19:  lea    -0x17b(%ebp),%eax
084d664f +0x0d1f:  add    $0x83,%eax
084d6654 +0x0d24:  mov    %eax,(%esp)
084d6657 +0x0d27:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084d665c +0x0d2c:  movzwl -0x116(%ebp),%eax
084d6663 +0x0d33:  test   %ax,%ax
084d6666 +0x0d36:  je     084d667b <+0xd4b>
084d6668 +0x0d38:  movzbl -0x146(%ebp),%eax
084d666f +0x0d3f:  and    $0xffffffe0,%eax
084d6672 +0x0d42:  or     $0x1,%eax
084d6675 +0x0d45:  mov    %al,-0x146(%ebp)
084d667b +0x0d4b:  movzbl -0xb6(%ebp),%eax
084d6682 +0x0d52:  mov    %al,-0x14b(%ebp)
084d6688 +0x0d58:  mov    -0xb4(%ebp),%eax
084d668e +0x0d5e:  mov    %eax,-0x14a(%ebp)
084d6694 +0x0d64:  movzwl -0xab(%ebp),%eax
084d669b +0x0d6b:  mov    %ax,-0x141(%ebp)
084d66a2 +0x0d72:  mov    -0xa9(%ebp),%eax
084d66a8 +0x0d78:  mov    %eax,-0x13f(%ebp)
084d66ae +0x0d7e:  lea    -0x17b(%ebp),%eax
084d66b4 +0x0d84:  add    $0x41,%eax
084d66b7 +0x0d87:  mov    %eax,0x8(%esp)
084d66bb +0x0d8b:  lea    -0x17b(%ebp),%eax
084d66c1 +0x0d91:  add    $0x40,%eax
084d66c4 +0x0d94:  mov    %eax,0x4(%esp)
084d66c8 +0x0d98:  lea    -0xb6(%ebp),%eax
084d66ce +0x0d9e:  add    $0x11,%eax
084d66d1 +0x0da1:  mov    %eax,(%esp)
084d66d4 +0x0da4:  call   0844d490 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa6
084d66d9 +0x0da9:  mov    -0xa1(%ebp),%eax
084d66df +0x0daf:  mov    %eax,-0x138(%ebp)
084d66e5 +0x0db5:  mov    -0x9d(%ebp),%eax
084d66eb +0x0dbb:  mov    %eax,-0x134(%ebp)
084d66f1 +0x0dc1:  movzwl -0x99(%ebp),%eax
084d66f8 +0x0dc8:  mov    %ax,-0x130(%ebp)
084d66ff +0x0dcf:  mov    -0x91(%ebp),%eax
084d6705 +0x0dd5:  mov    %eax,-0x12e(%ebp)
084d670b +0x0ddb:  mov    -0x8d(%ebp),%eax
084d6711 +0x0de1:  mov    %eax,-0x12a(%ebp)
084d6717 +0x0de7:  mov    -0x89(%ebp),%eax
084d671d +0x0ded:  mov    %eax,-0x126(%ebp)
084d6723 +0x0df3:  movzwl -0x85(%ebp),%eax
084d672a +0x0dfa:  mov    %ax,-0x122(%ebp)
084d6731 +0x0e01:  lea    -0xb6(%ebp),%eax
084d6737 +0x0e07:  add    $0x33,%eax
084d673a +0x0e0a:  mov    %eax,(%esp)
084d673d +0x0e0d:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084d6742 +0x0e12:  movzbl %al,%eax
084d6745 +0x0e15:  mov    %eax,0x4(%esp)
084d6749 +0x0e19:  lea    -0x17b(%ebp),%eax
084d674f +0x0e1f:  add    $0x5b,%eax
084d6752 +0x0e22:  mov    %eax,(%esp)
084d6755 +0x0e25:  call   084e906a <_GLOBAL__I__Z7getUserj+0x1c>  ; global constructors keyed to getUser(unsigned int)+0x1c
084d675a +0x0e2a:  mov    -0x2c(%ebp),%eax
084d675d +0x0e2d:  mov    (%eax),%eax
084d675f +0x0e2f:  add    $0x4c,%eax
084d6762 +0x0e32:  mov    (%eax),%edx
084d6764 +0x0e34:  mov    -0x2c(%ebp),%eax
084d6767 +0x0e37:  mov    %eax,(%esp)
084d676a +0x0e3a:  call   *%edx
084d676c +0x0e3c:  test   %al,%al
084d676e +0x0e3e:  je     084d67ab <+0xe7b>
084d6770 +0x0e40:  movl   $0x0,-0x14(%ebp)
084d6777 +0x0e47:  jmp    084d67a0 <+0xe70>
084d6779 +0x0e49:  mov    -0x14(%ebp),%eax
084d677c +0x0e4c:  add    $0x48,%eax
084d677f +0x0e4f:  movzwl -0x172(%ebp,%eax,2),%eax
084d6787 +0x0e57:  test   %ax,%ax
084d678a +0x0e5a:  jne    084d679c <+0xe6c>
084d678c +0x0e5c:  mov    -0x14(%ebp),%eax
084d678f +0x0e5f:  add    $0x48,%eax
084d6792 +0x0e62:  movw   $0x7530,-0x172(%ebp,%eax,2)
084d679c +0x0e6c:  addl   $0x1,-0x14(%ebp)
084d67a0 +0x0e70:  cmpl   $0x2,-0x14(%ebp)
084d67a4 +0x0e74:  setle  %al
084d67a7 +0x0e77:  test   %al,%al
084d67a9 +0x0e79:  jne    084d6779 <+0xe49>
084d67ab +0x0e7b:  lea    -0x17b(%ebp),%eax
084d67b1 +0x0e81:  add    $0x99,%eax
084d67b6 +0x0e86:  mov    %eax,(%esp)
084d67b9 +0x0e89:  call   0822ac30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da
084d67be +0x0e8e:  mov    -0x68(%ebp),%eax
084d67c1 +0x0e91:  mov    (%eax),%eax
084d67c3 +0x0e93:  cmp    $0x1,%eax
084d67c6 +0x0e96:  jne    084d67cf <+0xe9f>
084d67c8 +0x0e98:  mov    $0x0,%eax
084d67cd +0x0e9d:  jmp    084d67d4 <+0xea4>
084d67cf +0x0e9f:  mov    $0x2710,%eax
084d67d4 +0x0ea4:  mov    %eax,-0x3c(%ebp)
084d67d7 +0x0ea7:  movl   $0x1,0xc(%esp)
084d67df +0x0eaf:  movl   $0x19,0x8(%esp)
084d67e7 +0x0eb7:  mov    -0x3c(%ebp),%eax
084d67ea +0x0eba:  mov    %eax,0x4(%esp)
084d67ee +0x0ebe:  mov    -0x44(%ebp),%eax
084d67f1 +0x0ec1:  mov    %eax,(%esp)
084d67f4 +0x0ec4:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
084d67f9 +0x0ec9:  xor    $0x1,%eax
084d67fc +0x0ecc:  test   %al,%al
084d67fe +0x0ece:  je     084d682e <+0xefe>
084d6800 +0x0ed0:  mov    -0x68(%ebp),%eax
084d6803 +0x0ed3:  mov    (%eax),%eax
084d6805 +0x0ed5:  mov    %eax,0xc(%esp)
084d6809 +0x0ed9:  movl   $0x93,0x8(%esp)
084d6811 +0x0ee1:  movl   $0xba,0x4(%esp)
084d6819 +0x0ee9:  mov    0xc(%ebp),%eax
084d681c +0x0eec:  mov    %eax,(%esp)
084d681f +0x0eef:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d6824 +0x0ef4:  mov    $0x0,%eax
084d6829 +0x0ef9:  jmp    084d6ad1 <+0x11a1>
084d682e +0x0efe:  mov    -0xb4(%ebp),%eax
084d6834 +0x0f04:  test   %eax,%eax
084d6836 +0x0f06:  je     084d6a6f <+0x113f>
084d683c +0x0f0c:  movzbl -0xb5(%ebp),%eax
084d6843 +0x0f13:  cmp    $0x8,%al
084d6845 +0x0f15:  jne    084d696a <+0x103a>
084d684b +0x0f1b:  movzwl -0x4e(%ebp),%eax
084d684f +0x0f1f:  movl   $0x1,0x14(%esp)
084d6857 +0x0f27:  movl   $0x5,0x10(%esp)
084d685f +0x0f2f:  movl   $0x1,0xc(%esp)
084d6867 +0x0f37:  mov    %eax,0x8(%esp)
084d686b +0x0f3b:  movl   $0x2,0x4(%esp)
084d6873 +0x0f43:  mov    -0x44(%ebp),%eax
084d6876 +0x0f46:  mov    %eax,(%esp)
084d6879 +0x0f49:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084d687e +0x0f4e:  xor    $0x1,%eax
084d6881 +0x0f51:  test   %al,%al
084d6883 +0x0f53:  je     084d6910 <+0xfe0>
084d6889 +0x0f59:  mov    -0x68(%ebp),%eax
084d688c +0x0f5c:  mov    (%eax),%eax
084d688e +0x0f5e:  mov    %eax,0xc(%esp)
084d6892 +0x0f62:  movl   $0x94,0x8(%esp)
084d689a +0x0f6a:  movl   $0xba,0x4(%esp)
084d68a2 +0x0f72:  mov    0xc(%ebp),%eax
084d68a5 +0x0f75:  mov    %eax,(%esp)
084d68a8 +0x0f78:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d68ad +0x0f7d:  movl   $0x0,0x10(%esp)
084d68b5 +0x0f85:  movl   $0x1,0xc(%esp)
084d68bd +0x0f8d:  movl   $0x13,0x8(%esp)
084d68c5 +0x0f95:  movl   $0x2710,0x4(%esp)
084d68cd +0x0f9d:  mov    -0x44(%ebp),%eax
084d68d0 +0x0fa0:  mov    %eax,(%esp)
084d68d3 +0x0fa3:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084d68d8 +0x0fa8:  mov    %eax,-0x10(%ebp)
084d68db +0x0fab:  cmpl   $0x270f,-0x10(%ebp)
084d68e2 +0x0fb2:  jg     084d6906 <+0xfd6>
084d68e4 +0x0fb4:  mov    -0x10(%ebp),%eax
084d68e7 +0x0fb7:  mov    %eax,0xc(%esp)
084d68eb +0x0fbb:  movl   $0x2710,0x8(%esp)
084d68f3 +0x0fc3:  movl   $0x0,0x4(%esp)
084d68fb +0x0fcb:  mov    0xc(%ebp),%eax
084d68fe +0x0fce:  mov    %eax,(%esp)
084d6901 +0x0fd1:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
084d6906 +0x0fd6:  mov    $0x0,%eax
084d690b +0x0fdb:  jmp    084d6ad1 <+0x11a1>
084d6910 +0x0fe0:  movzwl -0x4e(%ebp),%eax
084d6914 +0x0fe4:  lea    0xa(%eax),%edx
084d6917 +0x0fe7:  mov    -0xaf(%ebp),%eax
084d691d +0x0fed:  movl   $0x0,0x14(%esp)
084d6925 +0x0ff5:  mov    %edx,0x10(%esp)
084d6929 +0x0ff9:  movl   $0x4,0xc(%esp)
084d6931 +0x1001:  mov    %eax,0x8(%esp)
084d6935 +0x1005:  movl   $0x36,0x4(%esp)
084d693d +0x100d:  mov    -0x44(%ebp),%eax
084d6940 +0x1010:  mov    %eax,(%esp)
084d6943 +0x1013:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
084d6948 +0x1018:  mov    -0xaf(%ebp),%ebx
084d694e +0x101e:  mov    -0x44(%ebp),%eax
084d6951 +0x1021:  mov    %eax,(%esp)
084d6954 +0x1024:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
084d6959 +0x1029:  mov    %ebx,0x4(%esp)
084d695d +0x102d:  mov    %eax,(%esp)
084d6960 +0x1030:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
084d6965 +0x1035:  jmp    084d6a30 <+0x1100>
084d696a +0x103a:  mov    -0x145(%ebp),%ecx
084d6970 +0x1040:  movzwl -0x4e(%ebp),%edx
084d6974 +0x1044:  mov    -0x40(%ebp),%eax
084d6977 +0x1047:  movl   $0x1,0x14(%esp)
084d697f +0x104f:  movl   $0x19,0x10(%esp)
084d6987 +0x1057:  mov    %ecx,0xc(%esp)
084d698b +0x105b:  mov    %edx,0x8(%esp)
084d698f +0x105f:  mov    %eax,0x4(%esp)
084d6993 +0x1063:  mov    -0x44(%ebp),%eax
084d6996 +0x1066:  mov    %eax,(%esp)
084d6999 +0x1069:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084d699e +0x106e:  xor    $0x1,%eax
084d69a1 +0x1071:  test   %al,%al
084d69a3 +0x1073:  je     084d6a30 <+0x1100>
084d69a9 +0x1079:  mov    -0x68(%ebp),%eax
084d69ac +0x107c:  mov    (%eax),%eax
084d69ae +0x107e:  mov    %eax,0xc(%esp)
084d69b2 +0x1082:  movl   $0x94,0x8(%esp)
084d69ba +0x108a:  movl   $0xba,0x4(%esp)
084d69c2 +0x1092:  mov    0xc(%ebp),%eax
084d69c5 +0x1095:  mov    %eax,(%esp)
084d69c8 +0x1098:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084d69cd +0x109d:  movl   $0x0,0x10(%esp)
084d69d5 +0x10a5:  movl   $0x1,0xc(%esp)
084d69dd +0x10ad:  movl   $0x13,0x8(%esp)
084d69e5 +0x10b5:  movl   $0x2710,0x4(%esp)
084d69ed +0x10bd:  mov    -0x44(%ebp),%eax
084d69f0 +0x10c0:  mov    %eax,(%esp)
084d69f3 +0x10c3:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084d69f8 +0x10c8:  mov    %eax,-0xc(%ebp)
084d69fb +0x10cb:  cmpl   $0x270f,-0xc(%ebp)
084d6a02 +0x10d2:  jg     084d6a26 <+0x10f6>
084d6a04 +0x10d4:  mov    -0xc(%ebp),%eax
084d6a07 +0x10d7:  mov    %eax,0xc(%esp)
084d6a0b +0x10db:  movl   $0x2710,0x8(%esp)
084d6a13 +0x10e3:  movl   $0x0,0x4(%esp)
084d6a1b +0x10eb:  mov    0xc(%ebp),%eax
084d6a1e +0x10ee:  mov    %eax,(%esp)
084d6a21 +0x10f1:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
084d6a26 +0x10f6:  mov    $0x0,%eax
084d6a2b +0x10fb:  jmp    084d6ad1 <+0x11a1>
084d6a30 +0x1100:  lea    -0xb6(%ebp),%eax
084d6a36 +0x1106:  mov    %eax,(%esp)
084d6a39 +0x1109:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
084d6a3e +0x110e:  test   %al,%al
084d6a40 +0x1110:  je     084d6a6f <+0x113f>
084d6a42 +0x1112:  movzwl -0x4e(%ebp),%ebx
084d6a46 +0x1116:  mov    -0x44(%ebp),%eax
084d6a49 +0x1119:  mov    %eax,(%esp)
084d6a4c +0x111c:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
084d6a51 +0x1121:  movl   $0x19,0xc(%esp)
084d6a59 +0x1129:  mov    %ebx,0x8(%esp)
084d6a5d +0x112d:  lea    -0xb6(%ebp),%edx
084d6a63 +0x1133:  mov    %edx,0x4(%esp)
084d6a67 +0x1137:  mov    %eax,(%esp)
084d6a6a +0x113a:  call   0833b09c <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii>  ; user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int)
084d6a6f +0x113f:  mov    0xc(%ebp),%eax
084d6a72 +0x1142:  mov    %eax,(%esp)
084d6a75 +0x1145:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
084d6a7a +0x114a:  mov    0xc(%ebp),%eax
084d6a7d +0x114d:  mov    %eax,(%esp)
084d6a80 +0x1150:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084d6a85 +0x1155:  mov    %eax,(%esp)
084d6a88 +0x1158:  call   0807e3b0 <_init+0xca8>
084d6a8d +0x115d:  mov    %eax,%ebx
084d6a8f +0x115f:  mov    0xc(%ebp),%eax
084d6a92 +0x1162:  mov    %eax,(%esp)
084d6a95 +0x1165:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084d6a9a +0x116a:  mov    %ebx,0x8(%esp)
084d6a9e +0x116e:  mov    %eax,0x4(%esp)
084d6aa2 +0x1172:  lea    -0x17b(%ebp),%eax
084d6aa8 +0x1178:  add    $0xa5,%eax
084d6aad +0x117d:  mov    %eax,(%esp)
084d6ab0 +0x1180:  call   0807d8d0 <_init+0x1c8>
084d6ab5 +0x1185:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
084d6aba +0x118a:  lea    -0x17b(%ebp),%edx
084d6ac0 +0x1190:  mov    %edx,0x4(%esp)
084d6ac4 +0x1194:  mov    %eax,(%esp)
084d6ac7 +0x1197:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
084d6acc +0x119c:  mov    $0x0,%eax
084d6ad1 +0x11a1:  mov    -0x4(%ebp),%ebx
084d6ad4 +0x11a4:  leave
084d6ad5 +0x11a5:  ret
```

## 反编译 C

```c
// Inter_AuctionResultAskRegistedItemNum::dispatch_sig @ 0x84d5930

/* Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  CDataManager *this;
  CInventory *this_00;
  int iVar9;
  uint uVar10;
  CAvatarItemMgr *pCVar11;
  void *__src;
  CCreatureMgr *this_01;
  undefined1 local_1cc [12];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190;
  PCK_AUCTION_REGIST_ITEM_GA local_17f [9];
  short asStack_176 [4];
  undefined4 local_16d;
  undefined4 local_169;
  char acStack_165 [13];
  char local_158;
  undefined4 local_157;
  undefined4 local_153;
  Inven_Item local_14f;
  undefined4 local_14e;
  byte local_14a;
  int local_149;
  undefined2 local_145;
  undefined4 local_143;
  uchar uStack_13f;
  ushort uStack_13e;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined2 local_126;
  UpgradeSeparateInfo aUStack_124 [10];
  short local_11a [15];
  stAvatarExpansionInfo_t asStack_fc [4];
  undefined4 local_f8;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  char acStack_da [32];
  Inven_Item local_ba;
  char cStack_b9;
  undefined2 uStack_b8;
  undefined2 local_b6;
  undefined1 uStack_b4;
  int iStack_b3;
  undefined1 uStack_af;
  undefined4 uStack_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined1 local_9e;
  undefined2 uStack_9d;
  undefined1 uStack_9b;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined1 local_8a;
  undefined2 uStack_89;
  UpgradeSeparateInfo UStack_87;
  undefined4 local_86;
  undefined4 local_82;
  undefined1 local_7e;
  bool local_7d;
  cMyTrace local_7c [16];
  int *local_6c;
  short local_66;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  char local_53;
  ushort local_52;
  int local_50;
  int local_4c;
  CInventory *local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  CItem *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_6c = (int *)param_3;
  iVar6 = *(int *)(param_3 + 4);
  iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  if (iVar6 != iVar4) {
    return 0;
  }
  for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
    iVar6 = *(int *)(gmList + local_3c * 4);
    iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar6 == iVar4) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_7c,
                         "virtual int Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser*, char*, int)"
                         ,0x37a3,0);
      cMyTrace::operator()
                (local_7c,"Trace Auction Delay, %s(%d)","ACK AuctionResultAskRegistedItemNum",uVar5)
      ;
      break;
    }
  }
  local_66 = (short)local_6c[2];
  local_64 = *local_6c;
  if (local_66 == -1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x9e,*local_6c);
    return 0;
  }
  if (local_66 == -2) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  }
  cVar2 = CUser::isAffectedPremium((CUser *)param_2,0x1d);
  if (cVar2 == '\0') {
    if (local_64 == 1) {
      local_34 = 3;
    }
    else {
      local_34 = 10;
    }
    if (local_34 <= local_66) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x97,*local_6c);
      return 0;
    }
  }
  else {
    if (local_64 == 1) {
      local_38 = 10;
    }
    else {
      local_38 = 0x1e;
    }
    if (local_38 <= local_66) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x97,*local_6c);
      return 0;
    }
  }
  if (local_64 == 1) {
    local_60 = 0;
  }
  else {
    local_60 = 10000;
  }
  iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
  if (iVar6 < local_60) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x90,*local_6c);
    return 0;
  }
  local_5c = 1000000;
  local_58 = 0;
  if (((0x28d287 < *(uint *)((int)local_6c + 0xd)) && (*(uint *)((int)local_6c + 0xd) < 0x28d29a))
     && (*local_6c == 1)) {
    if (*(uint *)((int)local_6c + 0xd) < 0x28d292) {
      local_58 = *(int *)((int)local_6c + 0xd) * 1000000 + 0x199b9040;
    }
    else {
      local_58 = *(int *)((int)local_6c + 0xd) * 10000000 + -0x549a800;
    }
  }
  local_53 = *(char *)((int)local_6c + 10);
  local_52 = *(ushort *)((int)local_6c + 0xb);
  local_50 = *(int *)((int)local_6c + 0xd);
  local_4c = *(int *)((int)local_6c + 0x11);
  PCK_AUCTION_REGIST_ITEM_GA::PCK_AUCTION_REGIST_ITEM_GA(local_17f);
  local_16d = CUser::GetUID((CUser *)param_2);
  local_169 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  strncpy(acStack_165,(char *)(iVar6 + 4),0xd);
  local_158 = 0;
  local_158 = CUser::isAffectedPremium((CUser *)param_2,0x1d);
  local_157 = *(undefined4 *)((int)local_6c + 0x15);
  local_153 = *(undefined4 *)((int)local_6c + 0x19);
  local_f8 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)param_2);
  local_ea = *(undefined4 *)((int)local_6c + 0x1d);
  local_e6 = *(undefined4 *)((int)local_6c + 0x21);
  local_e2 = *(undefined4 *)((int)local_6c + 0x25);
  local_de = *(undefined4 *)((int)local_6c + 0x29);
  local_48 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
  local_44 = 6;
  Inven_Item::Inven_Item(&local_ba);
  if (local_50 == 0) goto LAB_084d67be;
  if (local_53 == '\x01') {
    local_44 = 2;
  }
  else if (local_53 == '\a') {
    local_44 = 3;
  }
  else {
    if (local_53 != '\0') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
    local_44 = 1;
  }
  if ((0x28d287 < *(uint *)((int)local_6c + 0xd)) && (*(uint *)((int)local_6c + 0xd) < 0x28d29a)) {
    if (*local_6c != 1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x93,*local_6c);
      return 0;
    }
    cVar2 = CInventory::use_money(local_48,local_58,0x26,1);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x93,*local_6c);
      return 0;
    }
    CUser::SaveInventory((CUser *)param_2);
    CUser::SendUpdateItemList((CUser *)param_2,1,0,0);
    nsl::PACKET_HEADER::setCategory((PACKET_HEADER *)local_17f,0x12);
    local_149 = *(undefined4 *)((int)local_6c + 0x11);
    stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)local_11a);
    local_14f = (Inven_Item)0x0;
    local_14e = *(undefined4 *)((int)local_6c + 0xd);
    local_145 = 0;
    local_143 = 0;
    if (*local_6c == 1) {
      pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
      sVar8 = strlen(pcVar7);
      pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
      strncpy(acStack_da,pcVar7,sVar8);
    }
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_17f)
    ;
    return 0;
  }
  CInventory::GetInvenSlot((int)local_1cc,(int)local_48);
  local_ba = SUB41(local_1cc._0_4_,0);
  cStack_b9 = SUB41(local_1cc._0_4_,1);
  uStack_b8 = SUB42(local_1cc._0_4_,2);
  local_b6 = (undefined2)local_1cc._4_4_;
  uStack_b4 = SUB41(local_1cc._4_4_,2);
  iStack_b3._1_3_ = (undefined3)local_1cc._8_4_;
  iStack_b3 = CONCAT31(iStack_b3._1_3_,SUB41(local_1cc._4_4_,3));
  uStack_af = SUB41(local_1cc._8_4_,3);
  uStack_ae = local_1c0;
  local_aa = local_1bc;
  local_a6 = local_1b8;
  local_a2 = local_1b4;
  local_9e = (undefined1)local_1b0;
  uStack_9d = (undefined2)((uint)local_1b0 >> 8);
  uStack_9b = (undefined1)((uint)local_1b0 >> 0x18);
  local_9a = local_1ac;
  local_96 = local_1a8;
  local_92 = local_1a4;
  local_8e = local_1a0;
  local_8a = (undefined1)local_19c;
  uStack_89 = (undefined2)((uint)local_19c >> 8);
  UStack_87 = SUB41((uint)local_19c >> 0x18,0);
  local_86 = local_198;
  local_82 = local_194;
  local_7e = local_190;
  if ((CONCAT22(local_b6,uStack_b8) != local_50) || (CONCAT22(local_b6,uStack_b8) == 0x10ec)) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  }
  cVar2 = IsTradeLimitAttachTypeItemByUser((CUser *)param_2,local_44,(uint)local_52);
  if (cVar2 != '\0') {
    local_7d = true;
    CheckItemTradeLimitCountToMoveByUser((CUser *)param_2,local_44,(uint)local_52,&local_7d);
    if (local_7d != true) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x72);
      return 0;
    }
  }
  cVar2 = Inven_Item::isEquipableItemType(&local_ba);
  if ((cVar2 != '\x01') && (iStack_b3 < local_4c)) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x92,*local_6c);
    return 0;
  }
  iVar6 = CONCAT22(local_b6,uStack_b8);
  this = (CDataManager *)G_CDataManager();
  local_30 = (CItem *)CDataManager::find_item(this,iVar6);
  if ((local_30 == (CItem *)0x0) || (cVar2 = CItem::isPackagable(local_30), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  }
  cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30);
  iVar4 = iStack_b3;
  if (cVar2 == '\x01') {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
    local_20 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar11,iVar4);
    if ((local_20 == 0) ||
       (iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), iVar6 <= local_20)
       ) {
      bVar1 = false;
      iVar6 = iVar4;
    }
    else {
      bVar1 = true;
      iVar6 = iVar4;
    }
    if (bVar1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  else {
    iVar4 = CItem::getUsablePeriod(local_30);
    if ((iVar4 == 0) && (iVar4 = CItem::getExpirationDate(local_30), iVar4 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = CItem::getUsablePeriod(local_30);
      if ((iVar4 == 0) && (iVar4 = CItem::getExpirationDate(local_30), iVar4 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
        return 0;
      }
      local_28 = (uint)CONCAT11((undefined1)uStack_ae,uStack_af) * 0x15180 + 0x44a54a80;
      local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (local_28 <= local_24) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
        return 0;
      }
    }
  }
  iVar4 = iStack_b3;
  if (cStack_b9 == '\x05') {
    iVar6 = CInventory::GetCreatureMgrR(local_48);
    iVar9 = user_creature::CCreatureMgr::FindCreatureItem(iVar6);
    iVar6 = iVar4;
    if (iVar9 == 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  if ((local_158 == '\0') && (iVar4 = CItem::GetCashPrice(local_30), iVar4 != 0)) {
    uVar10 = G_CDataManager();
    iVar6 = local_50;
    cVar2 = CDataManager::is_AuctionRegFreeCeraItem(uVar10);
    if (cVar2 == '\x01') goto LAB_084d63a2;
    bVar1 = true;
  }
  else {
LAB_084d63a2:
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x95,*local_6c);
    return 0;
  }
  local_2c = CItem::GetAttachType(local_30);
  switch(local_2c) {
  case 1:
  case 2:
  case 5:
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  case 3:
    if (local_ba != (Inven_Item)0x1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  cVar2 = UpgradeSeparateInfo::IsTradeRestriction(&UStack_87);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91);
    return 0;
  }
  cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30,iVar6);
  if (cVar2 != '\0') {
    CInventory::GetAvatarItemMgrR(local_48);
    cVar2 = WongWork::CAvatarItemMgr::IsTempKey(iStack_b3);
    iVar6 = iStack_b3;
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_48);
    iVar6 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar11,iVar6);
    if (iVar6 != 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  cVar2 = Inven_Item::isEquipableItemType(&local_ba);
  if (cVar2 == '\x01') {
    local_149 = iStack_b3;
  }
  else {
    local_149 = local_4c;
  }
  local_14a = Inven_Item::GetItemAttr(&local_ba);
  stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)local_11a);
  cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30);
  iVar6 = iStack_b3;
  if (cVar2 != '\0') {
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_48);
    __src = (void *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar11,iVar6);
    memcpy(local_11a,__src,0x1e);
    iVar6 = iStack_b3;
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_48);
    local_1c = (void *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar11,iVar6);
    if (local_1c == (void *)0x0) {
      stAvatarExpansionInfo_t::init(asStack_fc);
    }
    else {
      memcpy(asStack_fc,local_1c,4);
    }
    if (local_11a[0] != 0) {
      local_14a = local_14a & 0xe0 | 1;
    }
  }
  local_14f = local_ba;
  local_14e = CONCAT22(local_b6,uStack_b8);
  local_145 = CONCAT11((undefined1)uStack_ae,uStack_af);
  local_143 = CONCAT13((undefined1)local_aa,uStack_ae._1_3_);
  stAmplifyOption_t::getValues((stAmplifyOption_t *)((int)&local_aa + 1),&uStack_13f,&uStack_13e);
  local_13c = CONCAT13((undefined1)local_a2,local_a6._1_3_);
  local_138 = CONCAT13(local_9e,local_a2._1_3_);
  local_134 = uStack_9d;
  local_132 = CONCAT13((undefined1)local_92,local_96._1_3_);
  local_12e = CONCAT13((undefined1)local_8e,local_92._1_3_);
  local_12a = CONCAT13(local_8a,local_8e._1_3_);
  local_126 = uStack_89;
  uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate(&UStack_87);
  UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_124,uVar3);
  cVar2 = (**(code **)(*(int *)local_30 + 0x4c))(local_30);
  if (cVar2 != '\0') {
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      if (asStack_176[local_18 + 0x48] == 0) {
        asStack_176[local_18 + 0x48] = 30000;
      }
    }
  }
  ROI_Category::_sort((ROI_Category *)&local_e6);
LAB_084d67be:
  if (*local_6c == 1) {
    local_40 = 0;
  }
  else {
    local_40 = 10000;
  }
  cVar2 = CInventory::use_money(local_48,local_40,0x19,1);
  if (cVar2 == '\x01') {
    if (CONCAT22(local_b6,uStack_b8) != 0) {
      if (cStack_b9 == '\b') {
        cVar2 = CInventory::delete_item(local_48,2,local_52,1,5,1);
        if (cVar2 != '\x01') {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x94,*local_6c);
          local_14 = CInventory::gain_money(local_48,10000,0x13,1,0);
          if (9999 < local_14) {
            return 0;
          }
          CUser::SendMoneyFullReason((CUser *)param_2,0,10000,local_14);
          return 0;
        }
        CInventory::SendAvatarEvent(local_48,0x36,iStack_b3,4,local_52 + 10,0);
        iVar6 = CInventory::GetAvatarItemMgrW(local_48);
        WongWork::CAvatarItemMgr::UnRegistItem(iVar6);
      }
      else {
        cVar2 = CInventory::delete_item(local_48,local_44,local_52,local_149,0x19,1);
        if (cVar2 != '\x01') {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x94,*local_6c);
          local_10 = CInventory::gain_money(local_48,10000,0x13,1,0);
          if (9999 < local_10) {
            return 0;
          }
          CUser::SendMoneyFullReason((CUser *)param_2,0,10000,local_10);
          return 0;
        }
      }
      cVar2 = Inven_Item::IsCreatureItemType(&local_ba);
      if (cVar2 != '\0') {
        uVar10 = (uint)local_52;
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(local_48);
        user_creature::CCreatureMgr::AuctionRegist(this_01,&local_ba,uVar10,0x19);
      }
    }
    CUser::SaveInventory((CUser *)param_2);
    pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
    sVar8 = strlen(pcVar7);
    pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
    strncpy(acStack_da,pcVar7,sVar8);
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_17f);
    return 0;
  }
  CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x93,*local_6c);
  return 0;
}
```
