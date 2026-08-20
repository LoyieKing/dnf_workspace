# dispatch_sig

`_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InvestItemAmplifyOption` | `0x082194f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082194f4  _ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)
# range [0x082194f4, 0x0821a411]
082194f4 +0x000:  push   %ebp
082194f5 +0x001:  mov    %esp,%ebp
082194f7 +0x003:  push   %edi
082194f8 +0x004:  push   %esi
082194f9 +0x005:  push   %ebx
082194fa +0x006:  sub    $0x1ec,%esp
08219500 +0x00c:  mov    0xc(%ebp),%eax
08219503 +0x00f:  mov    %eax,(%esp)
08219506 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821950b +0x017:  cmp    $0x3,%eax
0821950e +0x01a:  setne  %al
08219511 +0x01d:  test   %al,%al
08219513 +0x01f:  je     08219540 <+0x4c>
08219515 +0x021:  movl   $0x0,0xc(%esp)
0821951d +0x029:  movl   $0x0,0x8(%esp)
08219525 +0x031:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821952d +0x039:  movl   $0xcc82,(%esp)
08219534 +0x040:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08219539 +0x045:  mov    %eax,%ebx
0821953b +0x047:  jmp    0821a405 <+0xf11>
08219540 +0x04c:  movb   $0x0,-0x31(%ebp)
08219544 +0x050:  movw   $0x0,-0x34(%ebp)
0821954a +0x056:  movl   $0x0,-0x38(%ebp)
08219551 +0x05d:  movw   $0x0,-0x3a(%ebp)
08219557 +0x063:  movl   $0x0,-0x40(%ebp)
0821955e +0x06a:  lea    -0x31(%ebp),%eax
08219561 +0x06d:  mov    %eax,0x4(%esp)
08219565 +0x071:  mov    0x10(%ebp),%eax
08219568 +0x074:  mov    %eax,(%esp)
0821956b +0x077:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08219570 +0x07c:  xor    $0x1,%eax
08219573 +0x07f:  test   %al,%al
08219575 +0x081:  je     082195a2 <+0xae>
08219577 +0x083:  movl   $0x0,0xc(%esp)
0821957f +0x08b:  movl   $0x0,0x8(%esp)
08219587 +0x093:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821958f +0x09b:  movl   $0xcc89,(%esp)
08219596 +0x0a2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821959b +0x0a7:  mov    %eax,%ebx
0821959d +0x0a9:  jmp    0821a405 <+0xf11>
082195a2 +0x0ae:  lea    -0x34(%ebp),%eax
082195a5 +0x0b1:  mov    %eax,0x4(%esp)
082195a9 +0x0b5:  mov    0x10(%ebp),%eax
082195ac +0x0b8:  mov    %eax,(%esp)
082195af +0x0bb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082195b4 +0x0c0:  xor    $0x1,%eax
082195b7 +0x0c3:  test   %al,%al
082195b9 +0x0c5:  je     082195e6 <+0xf2>
082195bb +0x0c7:  movl   $0x0,0xc(%esp)
082195c3 +0x0cf:  movl   $0x0,0x8(%esp)
082195cb +0x0d7:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082195d3 +0x0df:  movl   $0xcc8a,(%esp)
082195da +0x0e6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082195df +0x0eb:  mov    %eax,%ebx
082195e1 +0x0ed:  jmp    0821a405 <+0xf11>
082195e6 +0x0f2:  lea    -0x38(%ebp),%eax
082195e9 +0x0f5:  mov    %eax,0x4(%esp)
082195ed +0x0f9:  mov    0x10(%ebp),%eax
082195f0 +0x0fc:  mov    %eax,(%esp)
082195f3 +0x0ff:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
082195f8 +0x104:  xor    $0x1,%eax
082195fb +0x107:  test   %al,%al
082195fd +0x109:  je     0821962a <+0x136>
082195ff +0x10b:  movl   $0x0,0xc(%esp)
08219607 +0x113:  movl   $0x0,0x8(%esp)
0821960f +0x11b:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08219617 +0x123:  movl   $0xcc8b,(%esp)
0821961e +0x12a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08219623 +0x12f:  mov    %eax,%ebx
08219625 +0x131:  jmp    0821a405 <+0xf11>
0821962a +0x136:  lea    -0x3a(%ebp),%eax
0821962d +0x139:  mov    %eax,0x4(%esp)
08219631 +0x13d:  mov    0x10(%ebp),%eax
08219634 +0x140:  mov    %eax,(%esp)
08219637 +0x143:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821963c +0x148:  xor    $0x1,%eax
0821963f +0x14b:  test   %al,%al
08219641 +0x14d:  je     0821966e <+0x17a>
08219643 +0x14f:  movl   $0x0,0xc(%esp)
0821964b +0x157:  movl   $0x0,0x8(%esp)
08219653 +0x15f:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821965b +0x167:  movl   $0xcc8c,(%esp)
08219662 +0x16e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08219667 +0x173:  mov    %eax,%ebx
08219669 +0x175:  jmp    0821a405 <+0xf11>
0821966e +0x17a:  lea    -0x40(%ebp),%eax
08219671 +0x17d:  mov    %eax,0x4(%esp)
08219675 +0x181:  mov    0x10(%ebp),%eax
08219678 +0x184:  mov    %eax,(%esp)
0821967b +0x187:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
08219680 +0x18c:  xor    $0x1,%eax
08219683 +0x18f:  test   %al,%al
08219685 +0x191:  je     082196b2 <+0x1be>
08219687 +0x193:  movl   $0x0,0xc(%esp)
0821968f +0x19b:  movl   $0x0,0x8(%esp)
08219697 +0x1a3:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821969f +0x1ab:  movl   $0xcc8d,(%esp)
082196a6 +0x1b2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082196ab +0x1b7:  mov    %eax,%ebx
082196ad +0x1b9:  jmp    0821a405 <+0xf11>
082196b2 +0x1be:  movl   $0x80,-0x30(%ebp)
082196b9 +0x1c5:  movl   $0x0,-0x44(%ebp)
082196c0 +0x1cc:  lea    -0x15b(%ebp),%edx
082196c6 +0x1d2:  mov    $0x81,%ebx
082196cb +0x1d7:  mov    $0x0,%eax
082196d0 +0x1dc:  mov    %edx,%ecx
082196d2 +0x1de:  and    $0x1,%ecx
082196d5 +0x1e1:  test   %ecx,%ecx
082196d7 +0x1e3:  je     082196e1 <+0x1ed>
082196d9 +0x1e5:  mov    %al,(%edx)
082196db +0x1e7:  add    $0x1,%edx
082196de +0x1ea:  sub    $0x1,%ebx
082196e1 +0x1ed:  mov    %edx,%ecx
082196e3 +0x1ef:  and    $0x2,%ecx
082196e6 +0x1f2:  test   %ecx,%ecx
082196e8 +0x1f4:  je     082196f3 <+0x1ff>
082196ea +0x1f6:  mov    %ax,(%edx)
082196ed +0x1f9:  add    $0x2,%edx
082196f0 +0x1fc:  sub    $0x2,%ebx
082196f3 +0x1ff:  mov    %ebx,%ecx
082196f5 +0x201:  shr    $0x2,%ecx
082196f8 +0x204:  mov    %edx,%edi
082196fa +0x206:  rep stos %eax,%es:(%edi)
082196fc +0x208:  mov    %edi,%edx
082196fe +0x20a:  mov    %ebx,%ecx
08219700 +0x20c:  and    $0x2,%ecx
08219703 +0x20f:  test   %ecx,%ecx
08219705 +0x211:  je     0821970d <+0x219>
08219707 +0x213:  mov    %ax,(%edx)
0821970a +0x216:  add    $0x2,%edx
0821970d +0x219:  mov    %ebx,%ecx
0821970f +0x21b:  and    $0x1,%ecx
08219712 +0x21e:  test   %ecx,%ecx
08219714 +0x220:  je     0821971b <+0x227>
08219716 +0x222:  mov    %al,(%edx)
08219718 +0x224:  add    $0x1,%edx
0821971b +0x227:  movb   $0x0,-0x45(%ebp)
0821971f +0x22b:  lea    -0x45(%ebp),%eax
08219722 +0x22e:  mov    %eax,0x4(%esp)
08219726 +0x232:  mov    0x10(%ebp),%eax
08219729 +0x235:  mov    %eax,(%esp)
0821972c +0x238:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08219731 +0x23d:  xor    $0x1,%eax
08219734 +0x240:  test   %al,%al
08219736 +0x242:  je     08219763 <+0x26f>
08219738 +0x244:  movl   $0x0,0xc(%esp)
08219740 +0x24c:  movl   $0x0,0x8(%esp)
08219748 +0x254:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08219750 +0x25c:  movl   $0xcc97,(%esp)
08219757 +0x263:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821975c +0x268:  mov    %eax,%ebx
0821975e +0x26a:  jmp    0821a405 <+0xf11>
08219763 +0x26f:  movzbl -0x45(%ebp),%eax
08219767 +0x273:  cmp    $0x4,%al
08219769 +0x275:  jbe    08219796 <+0x2a2>
0821976b +0x277:  movl   $0x0,0xc(%esp)
08219773 +0x27f:  movl   $0x0,0x8(%esp)
0821977b +0x287:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08219783 +0x28f:  movl   $0xcc99,(%esp)
0821978a +0x296:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821978f +0x29b:  mov    %eax,%ebx
08219791 +0x29d:  jmp    0821a405 <+0xf11>
08219796 +0x2a2:  movzbl -0x31(%ebp),%eax
0821979a +0x2a6:  cmp    $0x2,%al
0821979c +0x2a8:  jne    0821983c <+0x348>
082197a2 +0x2ae:  lea    -0x44(%ebp),%eax
082197a5 +0x2b1:  mov    %eax,0x4(%esp)
082197a9 +0x2b5:  mov    0x10(%ebp),%eax
082197ac +0x2b8:  mov    %eax,(%esp)
082197af +0x2bb:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082197b4 +0x2c0:  xor    $0x1,%eax
082197b7 +0x2c3:  test   %al,%al
082197b9 +0x2c5:  je     082197e6 <+0x2f2>
082197bb +0x2c7:  movl   $0x0,0xc(%esp)
082197c3 +0x2cf:  movl   $0x0,0x8(%esp)
082197cb +0x2d7:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082197d3 +0x2df:  movl   $0xcca0,(%esp)
082197da +0x2e6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082197df +0x2eb:  mov    %eax,%ebx
082197e1 +0x2ed:  jmp    0821a405 <+0xf11>
082197e6 +0x2f2:  mov    -0x44(%ebp),%eax
082197e9 +0x2f5:  mov    %eax,0xc(%esp)
082197ed +0x2f9:  movl   $0x81,0x8(%esp)
082197f5 +0x301:  lea    -0x15b(%ebp),%eax
082197fb +0x307:  mov    %eax,0x4(%esp)
082197ff +0x30b:  mov    0x10(%ebp),%eax
08219802 +0x30e:  mov    %eax,(%esp)
08219805 +0x311:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0821980a +0x316:  xor    $0x1,%eax
0821980d +0x319:  test   %al,%al
0821980f +0x31b:  je     0821983c <+0x348>
08219811 +0x31d:  movl   $0x0,0xc(%esp)
08219819 +0x325:  movl   $0x0,0x8(%esp)
08219821 +0x32d:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08219829 +0x335:  movl   $0xcca1,(%esp)
08219830 +0x33c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08219835 +0x341:  mov    %eax,%ebx
08219837 +0x343:  jmp    0821a405 <+0xf11>
0821983c +0x348:  movzbl -0x31(%ebp),%eax
08219840 +0x34c:  cmp    $0x2,%al
08219842 +0x34e:  jbe    0821986f <+0x37b>
08219844 +0x350:  movl   $0x0,0xc(%esp)
0821984c +0x358:  movl   $0x0,0x8(%esp)
08219854 +0x360:  movl   $&_ZZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821985c +0x368:  movl   $0xcca6,(%esp)
08219863 +0x36f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08219868 +0x374:  mov    %eax,%ebx
0821986a +0x376:  jmp    0821a405 <+0xf11>
0821986f +0x37b:  lea    -0x9d(%ebp),%eax
08219875 +0x381:  mov    %eax,(%esp)
08219878 +0x384:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821987d +0x389:  lea    -0xda(%ebp),%eax
08219883 +0x38f:  mov    %eax,(%esp)
08219886 +0x392:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821988b +0x397:  lea    -0x50(%ebp),%eax
0821988e +0x39a:  mov    %eax,(%esp)
08219891 +0x39d:  call   0822aea6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x550>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x550
08219896 +0x3a2:  movl   $0x0,-0x54(%ebp)
0821989d +0x3a9:  mov    -0x38(%ebp),%eax
082198a0 +0x3ac:  mov    %eax,%ebx
082198a2 +0x3ae:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082198a7 +0x3b3:  mov    %ebx,0x4(%esp)
082198ab +0x3b7:  mov    %eax,(%esp)
082198ae +0x3ba:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082198b3 +0x3bf:  mov    %eax,-0x2c(%ebp)
082198b6 +0x3c2:  movzwl -0x34(%ebp),%eax
082198ba +0x3c6:  movzwl %ax,%eax
082198bd +0x3c9:  mov    %eax,0x8(%esp)
082198c1 +0x3cd:  movl   $0x1,0x4(%esp)
082198c9 +0x3d5:  mov    0xc(%ebp),%eax
082198cc +0x3d8:  mov    %eax,(%esp)
082198cf +0x3db:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
082198d4 +0x3e0:  test   %al,%al
082198d6 +0x3e2:  je     08219904 <+0x410>
082198d8 +0x3e4:  movl   $0x4,(%esp)
082198df +0x3eb:  call   08725800 <__cxa_allocate_exception>
082198e4 +0x3f0:  mov    %eax,%edx
082198e6 +0x3f2:  movl   $0xd5,(%edx)
082198ec +0x3f8:  movl   $0x0,0x8(%esp)
082198f4 +0x400:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082198fc +0x408:  mov    %eax,(%esp)
082198ff +0x40b:  call   08724c50 <__cxa_throw>
08219904 +0x410:  cmpl   $0x0,-0x2c(%ebp)
08219908 +0x414:  jne    08219936 <+0x442>
0821990a +0x416:  movl   $0x4,(%esp)
08219911 +0x41d:  call   08725800 <__cxa_allocate_exception>
08219916 +0x422:  mov    %eax,%edx
08219918 +0x424:  movl   $0x11,(%edx)
0821991e +0x42a:  movl   $0x0,0x8(%esp)
08219926 +0x432:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821992e +0x43a:  mov    %eax,(%esp)
08219931 +0x43d:  call   08724c50 <__cxa_throw>
08219936 +0x442:  movzwl -0x34(%ebp),%eax
0821993a +0x446:  movzwl %ax,%ebx
0821993d +0x449:  mov    0xc(%ebp),%eax
08219940 +0x44c:  mov    %eax,(%esp)
08219943 +0x44f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08219948 +0x454:  lea    -0x1a8(%ebp),%edx
0821994e +0x45a:  mov    %ebx,0xc(%esp)
08219952 +0x45e:  movl   $0x1,0x8(%esp)
0821995a +0x466:  mov    %eax,0x4(%esp)
0821995e +0x46a:  mov    %edx,(%esp)
08219961 +0x46d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08219966 +0x472:  sub    $0x4,%esp
08219969 +0x475:  mov    -0x1a8(%ebp),%eax
0821996f +0x47b:  mov    %eax,-0x9d(%ebp)
08219975 +0x481:  mov    -0x1a4(%ebp),%eax
0821997b +0x487:  mov    %eax,-0x99(%ebp)
08219981 +0x48d:  mov    -0x1a0(%ebp),%eax
08219987 +0x493:  mov    %eax,-0x95(%ebp)
0821998d +0x499:  mov    -0x19c(%ebp),%eax
08219993 +0x49f:  mov    %eax,-0x91(%ebp)
08219999 +0x4a5:  mov    -0x198(%ebp),%eax
0821999f +0x4ab:  mov    %eax,-0x8d(%ebp)
082199a5 +0x4b1:  mov    -0x194(%ebp),%eax
082199ab +0x4b7:  mov    %eax,-0x89(%ebp)
082199b1 +0x4bd:  mov    -0x190(%ebp),%eax
082199b7 +0x4c3:  mov    %eax,-0x85(%ebp)
082199bd +0x4c9:  mov    -0x18c(%ebp),%eax
082199c3 +0x4cf:  mov    %eax,-0x81(%ebp)
082199c9 +0x4d5:  mov    -0x188(%ebp),%eax
082199cf +0x4db:  mov    %eax,-0x7d(%ebp)
082199d2 +0x4de:  mov    -0x184(%ebp),%eax
082199d8 +0x4e4:  mov    %eax,-0x79(%ebp)
082199db +0x4e7:  mov    -0x180(%ebp),%eax
082199e1 +0x4ed:  mov    %eax,-0x75(%ebp)
082199e4 +0x4f0:  mov    -0x17c(%ebp),%eax
082199ea +0x4f6:  mov    %eax,-0x71(%ebp)
082199ed +0x4f9:  mov    -0x178(%ebp),%eax
082199f3 +0x4ff:  mov    %eax,-0x6d(%ebp)
082199f6 +0x502:  mov    -0x174(%ebp),%eax
082199fc +0x508:  mov    %eax,-0x69(%ebp)
082199ff +0x50b:  mov    -0x170(%ebp),%eax
08219a05 +0x511:  mov    %eax,-0x65(%ebp)
08219a08 +0x514:  movzbl -0x16c(%ebp),%eax
08219a0f +0x51b:  mov    %al,-0x61(%ebp)
08219a12 +0x51e:  mov    -0x9b(%ebp),%edx
08219a18 +0x524:  mov    -0x38(%ebp),%eax
08219a1b +0x527:  cmp    %eax,%edx
08219a1d +0x529:  je     08219a4b <+0x557>
08219a1f +0x52b:  movl   $0x4,(%esp)
08219a26 +0x532:  call   08725800 <__cxa_allocate_exception>
08219a2b +0x537:  mov    %eax,%edx
08219a2d +0x539:  movl   $0x11,(%edx)
08219a33 +0x53f:  movl   $0x0,0x8(%esp)
08219a3b +0x547:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219a43 +0x54f:  mov    %eax,(%esp)
08219a46 +0x552:  call   08724c50 <__cxa_throw>
08219a4b +0x557:  movzwl -0x3a(%ebp),%eax
08219a4f +0x55b:  movzwl %ax,%ebx
08219a52 +0x55e:  mov    0xc(%ebp),%eax
08219a55 +0x561:  mov    %eax,(%esp)
08219a58 +0x564:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08219a5d +0x569:  lea    -0x1a8(%ebp),%edx
08219a63 +0x56f:  mov    %ebx,0xc(%esp)
08219a67 +0x573:  movl   $0x1,0x8(%esp)
08219a6f +0x57b:  mov    %eax,0x4(%esp)
08219a73 +0x57f:  mov    %edx,(%esp)
08219a76 +0x582:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08219a7b +0x587:  sub    $0x4,%esp
08219a7e +0x58a:  mov    -0x1a8(%ebp),%eax
08219a84 +0x590:  mov    %eax,-0xda(%ebp)
08219a8a +0x596:  mov    -0x1a4(%ebp),%eax
08219a90 +0x59c:  mov    %eax,-0xd6(%ebp)
08219a96 +0x5a2:  mov    -0x1a0(%ebp),%eax
08219a9c +0x5a8:  mov    %eax,-0xd2(%ebp)
08219aa2 +0x5ae:  mov    -0x19c(%ebp),%eax
08219aa8 +0x5b4:  mov    %eax,-0xce(%ebp)
08219aae +0x5ba:  mov    -0x198(%ebp),%eax
08219ab4 +0x5c0:  mov    %eax,-0xca(%ebp)
08219aba +0x5c6:  mov    -0x194(%ebp),%eax
08219ac0 +0x5cc:  mov    %eax,-0xc6(%ebp)
08219ac6 +0x5d2:  mov    -0x190(%ebp),%eax
08219acc +0x5d8:  mov    %eax,-0xc2(%ebp)
08219ad2 +0x5de:  mov    -0x18c(%ebp),%eax
08219ad8 +0x5e4:  mov    %eax,-0xbe(%ebp)
08219ade +0x5ea:  mov    -0x188(%ebp),%eax
08219ae4 +0x5f0:  mov    %eax,-0xba(%ebp)
08219aea +0x5f6:  mov    -0x184(%ebp),%eax
08219af0 +0x5fc:  mov    %eax,-0xb6(%ebp)
08219af6 +0x602:  mov    -0x180(%ebp),%eax
08219afc +0x608:  mov    %eax,-0xb2(%ebp)
08219b02 +0x60e:  mov    -0x17c(%ebp),%eax
08219b08 +0x614:  mov    %eax,-0xae(%ebp)
08219b0e +0x61a:  mov    -0x178(%ebp),%eax
08219b14 +0x620:  mov    %eax,-0xaa(%ebp)
08219b1a +0x626:  mov    -0x174(%ebp),%eax
08219b20 +0x62c:  mov    %eax,-0xa6(%ebp)
08219b26 +0x632:  mov    -0x170(%ebp),%eax
08219b2c +0x638:  mov    %eax,-0xa2(%ebp)
08219b32 +0x63e:  movzbl -0x16c(%ebp),%eax
08219b39 +0x645:  mov    %al,-0x9e(%ebp)
08219b3f +0x64b:  mov    -0xd8(%ebp),%edx
08219b45 +0x651:  mov    -0x40(%ebp),%eax
08219b48 +0x654:  cmp    %eax,%edx
08219b4a +0x656:  je     08219b78 <+0x684>
08219b4c +0x658:  movl   $0x4,(%esp)
08219b53 +0x65f:  call   08725800 <__cxa_allocate_exception>
08219b58 +0x664:  mov    %eax,%edx
08219b5a +0x666:  movl   $0x11,(%edx)
08219b60 +0x66c:  movl   $0x0,0x8(%esp)
08219b68 +0x674:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219b70 +0x67c:  mov    %eax,(%esp)
08219b73 +0x67f:  call   08724c50 <__cxa_throw>
08219b78 +0x684:  mov    0xc(%ebp),%eax
08219b7b +0x687:  mov    %eax,(%esp)
08219b7e +0x68a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08219b83 +0x68f:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%edx
08219b89 +0x695:  mov    %eax,0xc(%esp)
08219b8d +0x699:  lea    -0x9d(%ebp),%eax
08219b93 +0x69f:  mov    %eax,0x8(%esp)
08219b97 +0x6a3:  mov    -0x2c(%ebp),%eax
08219b9a +0x6a6:  mov    %eax,0x4(%esp)
08219b9e +0x6aa:  mov    %edx,(%esp)
08219ba1 +0x6ad:  call   08234980 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa02a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa02a
08219ba6 +0x6b2:  xor    $0x1,%eax
08219ba9 +0x6b5:  test   %al,%al
08219bab +0x6b7:  je     08219bd9 <+0x6e5>
08219bad +0x6b9:  movl   $0x4,(%esp)
08219bb4 +0x6c0:  call   08725800 <__cxa_allocate_exception>
08219bb9 +0x6c5:  mov    %eax,%edx
08219bbb +0x6c7:  movl   $0x8,(%edx)
08219bc1 +0x6cd:  movl   $0x0,0x8(%esp)
08219bc9 +0x6d5:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219bd1 +0x6dd:  mov    %eax,(%esp)
08219bd4 +0x6e0:  call   08724c50 <__cxa_throw>
08219bd9 +0x6e5:  mov    -0x40(%ebp),%eax
08219bdc +0x6e8:  mov    %eax,%ebx
08219bde +0x6ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08219be3 +0x6ef:  mov    %ebx,0x4(%esp)
08219be7 +0x6f3:  mov    %eax,(%esp)
08219bea +0x6f6:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08219bef +0x6fb:  mov    %eax,-0x28(%ebp)
08219bf2 +0x6fe:  cmpl   $0x0,-0x28(%ebp)
08219bf6 +0x702:  jne    08219c24 <+0x730>
08219bf8 +0x704:  movl   $0x4,(%esp)
08219bff +0x70b:  call   08725800 <__cxa_allocate_exception>
08219c04 +0x710:  mov    %eax,%edx
08219c06 +0x712:  movl   $0x11,(%edx)
08219c0c +0x718:  movl   $0x0,0x8(%esp)
08219c14 +0x720:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219c1c +0x728:  mov    %eax,(%esp)
08219c1f +0x72b:  call   08724c50 <__cxa_throw>
08219c24 +0x730:  mov    -0x28(%ebp),%eax
08219c27 +0x733:  mov    %eax,0x4(%esp)
08219c2b +0x737:  mov    -0x2c(%ebp),%eax
08219c2e +0x73a:  mov    %eax,(%esp)
08219c31 +0x73d:  call   0822c8ea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f94>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f94
08219c36 +0x742:  xor    $0x1,%eax
08219c39 +0x745:  test   %al,%al
08219c3b +0x747:  je     08219c69 <+0x775>
08219c3d +0x749:  movl   $0x4,(%esp)
08219c44 +0x750:  call   08725800 <__cxa_allocate_exception>
08219c49 +0x755:  mov    %eax,%edx
08219c4b +0x757:  movl   $0x8,(%edx)
08219c51 +0x75d:  movl   $0x0,0x8(%esp)
08219c59 +0x765:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219c61 +0x76d:  mov    %eax,(%esp)
08219c64 +0x770:  call   08724c50 <__cxa_throw>
08219c69 +0x775:  mov    -0x2c(%ebp),%eax
08219c6c +0x778:  mov    %eax,0x4(%esp)
08219c70 +0x77c:  mov    -0x28(%ebp),%eax
08219c73 +0x77f:  mov    %eax,(%esp)
08219c76 +0x782:  call   0822c8ea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f94>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f94
08219c7b +0x787:  xor    $0x1,%eax
08219c7e +0x78a:  test   %al,%al
08219c80 +0x78c:  je     08219cae <+0x7ba>
08219c82 +0x78e:  movl   $0x4,(%esp)
08219c89 +0x795:  call   08725800 <__cxa_allocate_exception>
08219c8e +0x79a:  mov    %eax,%edx
08219c90 +0x79c:  movl   $0x8,(%edx)
08219c96 +0x7a2:  movl   $0x0,0x8(%esp)
08219c9e +0x7aa:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219ca6 +0x7b2:  mov    %eax,(%esp)
08219ca9 +0x7b5:  call   08724c50 <__cxa_throw>
08219cae +0x7ba:  mov    -0x40(%ebp),%ecx
08219cb1 +0x7bd:  movzbl -0x31(%ebp),%eax
08219cb5 +0x7c1:  movzbl %al,%edx
08219cb8 +0x7c4:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08219cbd +0x7c9:  lea    -0x50(%ebp),%ebx
08219cc0 +0x7cc:  mov    %ebx,0xc(%esp)
08219cc4 +0x7d0:  mov    %ecx,0x8(%esp)
08219cc8 +0x7d4:  mov    %edx,0x4(%esp)
08219ccc +0x7d8:  mov    %eax,(%esp)
08219ccf +0x7db:  call   08234d5e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa408>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa408
08219cd4 +0x7e0:  xor    $0x1,%eax
08219cd7 +0x7e3:  test   %al,%al
08219cd9 +0x7e5:  je     08219d07 <+0x813>
08219cdb +0x7e7:  movl   $0x4,(%esp)
08219ce2 +0x7ee:  call   08725800 <__cxa_allocate_exception>
08219ce7 +0x7f3:  mov    %eax,%edx
08219ce9 +0x7f5:  movl   $0x11,(%edx)
08219cef +0x7fb:  movl   $0x0,0x8(%esp)
08219cf7 +0x803:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219cff +0x80b:  mov    %eax,(%esp)
08219d02 +0x80e:  call   08724c50 <__cxa_throw>
08219d07 +0x813:  mov    -0x50(%ebp),%eax
08219d0a +0x816:  cmp    $0x5,%eax
08219d0d +0x819:  jne    08219d43 <+0x84f>
08219d0f +0x81b:  movzbl -0x45(%ebp),%eax
08219d13 +0x81f:  test   %al,%al
08219d15 +0x821:  jne    08219d43 <+0x84f>
08219d17 +0x823:  movl   $0x4,(%esp)
08219d1e +0x82a:  call   08725800 <__cxa_allocate_exception>
08219d23 +0x82f:  mov    %eax,%edx
08219d25 +0x831:  movl   $0x11,(%edx)
08219d2b +0x837:  movl   $0x0,0x8(%esp)
08219d33 +0x83f:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219d3b +0x847:  mov    %eax,(%esp)
08219d3e +0x84a:  call   08724c50 <__cxa_throw>
08219d43 +0x84f:  movzbl -0x45(%ebp),%eax
08219d47 +0x853:  test   %al,%al
08219d49 +0x855:  je     08219d89 <+0x895>
08219d4b +0x857:  mov    -0x50(%ebp),%eax
08219d4e +0x85a:  cmp    $0x5,%eax
08219d51 +0x85d:  je     08219d7f <+0x88b>
08219d53 +0x85f:  movl   $0x4,(%esp)
08219d5a +0x866:  call   08725800 <__cxa_allocate_exception>
08219d5f +0x86b:  mov    %eax,%edx
08219d61 +0x86d:  movl   $0x11,(%edx)
08219d67 +0x873:  movl   $0x0,0x8(%esp)
08219d6f +0x87b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219d77 +0x883:  mov    %eax,(%esp)
08219d7a +0x886:  call   08724c50 <__cxa_throw>
08219d7f +0x88b:  movzbl -0x45(%ebp),%eax
08219d83 +0x88f:  movzbl %al,%eax
08219d86 +0x892:  mov    %eax,-0x50(%ebp)
08219d89 +0x895:  mov    -0x50(%ebp),%eax
08219d8c +0x898:  test   %eax,%eax
08219d8e +0x89a:  je     08219d9d <+0x8a9>
08219d90 +0x89c:  mov    -0xd3(%ebp),%edx
08219d96 +0x8a2:  mov    -0x4c(%ebp),%eax
08219d99 +0x8a5:  cmp    %eax,%edx
08219d9b +0x8a7:  jge    08219dc9 <+0x8d5>
08219d9d +0x8a9:  movl   $0x4,(%esp)
08219da4 +0x8b0:  call   08725800 <__cxa_allocate_exception>
08219da9 +0x8b5:  mov    %eax,%edx
08219dab +0x8b7:  movl   $0x11,(%edx)
08219db1 +0x8bd:  movl   $0x0,0x8(%esp)
08219db9 +0x8c5:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219dc1 +0x8cd:  mov    %eax,(%esp)
08219dc4 +0x8d0:  call   08724c50 <__cxa_throw>
08219dc9 +0x8d5:  mov    -0x50(%ebp),%eax
08219dcc +0x8d8:  mov    %eax,%ebx
08219dce +0x8da:  lea    -0x9d(%ebp),%eax
08219dd4 +0x8e0:  add    $0x11,%eax
08219dd7 +0x8e3:  mov    %eax,(%esp)
08219dda +0x8e6:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08219ddf +0x8eb:  movzbl %al,%eax
08219de2 +0x8ee:  cmp    %eax,%ebx
08219de4 +0x8f0:  sete   %al
08219de7 +0x8f3:  test   %al,%al
08219de9 +0x8f5:  je     08219e17 <+0x923>
08219deb +0x8f7:  movl   $0x4,(%esp)
08219df2 +0x8fe:  call   08725800 <__cxa_allocate_exception>
08219df7 +0x903:  mov    %eax,%edx
08219df9 +0x905:  movl   $0x17,(%edx)
08219dff +0x90b:  movl   $0x0,0x8(%esp)
08219e07 +0x913:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219e0f +0x91b:  mov    %eax,(%esp)
08219e12 +0x91e:  call   08724c50 <__cxa_throw>
08219e17 +0x923:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08219e1c +0x928:  mov    %eax,(%esp)
08219e1f +0x92b:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08219e24 +0x930:  test   %al,%al
08219e26 +0x932:  jne    08219e39 <+0x945>
08219e28 +0x934:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08219e2d +0x939:  mov    %eax,(%esp)
08219e30 +0x93c:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08219e35 +0x941:  test   %al,%al
08219e37 +0x943:  je     08219e40 <+0x94c>
08219e39 +0x945:  mov    $0x1,%eax
08219e3e +0x94a:  jmp    08219e45 <+0x951>
08219e40 +0x94c:  mov    $0x0,%eax
08219e45 +0x951:  test   %al,%al
08219e47 +0x953:  je     08219e75 <+0x981>
08219e49 +0x955:  movl   $0x4,(%esp)
08219e50 +0x95c:  call   08725800 <__cxa_allocate_exception>
08219e55 +0x961:  mov    %eax,%edx
08219e57 +0x963:  movl   $0x13,(%edx)
08219e5d +0x969:  movl   $0x0,0x8(%esp)
08219e65 +0x971:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219e6d +0x979:  mov    %eax,(%esp)
08219e70 +0x97c:  call   08724c50 <__cxa_throw>
08219e75 +0x981:  movl   $0x0,-0x24(%ebp)
08219e7c +0x988:  movzbl -0x31(%ebp),%eax
08219e80 +0x98c:  movzbl %al,%edx
08219e83 +0x98f:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08219e88 +0x994:  mov    %edx,0x8(%esp)
08219e8c +0x998:  lea    -0x9d(%ebp),%edx
08219e92 +0x99e:  mov    %edx,0x4(%esp)
08219e96 +0x9a2:  mov    %eax,(%esp)
08219e99 +0x9a5:  call   08234c3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa2e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa2e6
08219e9e +0x9aa:  mov    %eax,-0x24(%ebp)
08219ea1 +0x9ad:  cmpl   $0x0,-0x24(%ebp)
08219ea5 +0x9b1:  setne  %al
08219ea8 +0x9b4:  test   %al,%al
08219eaa +0x9b6:  je     08219ed7 <+0x9e3>
08219eac +0x9b8:  movl   $0x4,(%esp)
08219eb3 +0x9bf:  call   08725800 <__cxa_allocate_exception>
08219eb8 +0x9c4:  mov    %eax,%edx
08219eba +0x9c6:  mov    -0x24(%ebp),%ecx
08219ebd +0x9c9:  mov    %ecx,(%edx)
08219ebf +0x9cb:  movl   $0x0,0x8(%esp)
08219ec7 +0x9d3:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219ecf +0x9db:  mov    %eax,(%esp)
08219ed2 +0x9de:  call   08724c50 <__cxa_throw>
08219ed7 +0x9e3:  movzbl -0x31(%ebp),%eax
08219edb +0x9e7:  cmp    $0x2,%al
08219edd +0x9e9:  jne    08219f7b <+0xa87>
08219ee3 +0x9ef:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08219ee8 +0x9f4:  mov    0x20(%eax),%eax
08219eeb +0x9f7:  lea    -0x54(%ebp),%edx
08219eee +0x9fa:  mov    %edx,0x10(%esp)
08219ef2 +0x9fe:  lea    -0xda(%ebp),%edx
08219ef8 +0xa04:  mov    %edx,0xc(%esp)
08219efc +0xa08:  lea    -0x9d(%ebp),%edx
08219f02 +0xa0e:  mov    %edx,0x8(%esp)
08219f06 +0xa12:  mov    0xc(%ebp),%edx
08219f09 +0xa15:  mov    %edx,0x4(%esp)
08219f0d +0xa19:  mov    %eax,(%esp)
08219f10 +0xa1c:  call   0854af38 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri>  ; WongWork::CItemUpgrade::enableAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int&)
08219f15 +0xa21:  mov    %eax,-0x24(%ebp)
08219f18 +0xa24:  cmpl   $0x15,-0x24(%ebp)
08219f1c +0xa28:  jne    08219f4a <+0xa56>
08219f1e +0xa2a:  movl   $0x4,(%esp)
08219f25 +0xa31:  call   08725800 <__cxa_allocate_exception>
08219f2a +0xa36:  mov    %eax,%edx
08219f2c +0xa38:  movl   $0xcb,(%edx)
08219f32 +0xa3e:  movl   $0x0,0x8(%esp)
08219f3a +0xa46:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219f42 +0xa4e:  mov    %eax,(%esp)
08219f45 +0xa51:  call   08724c50 <__cxa_throw>
08219f4a +0xa56:  cmpl   $0x0,-0x24(%ebp)
08219f4e +0xa5a:  je     08219f7b <+0xa87>
08219f50 +0xa5c:  movl   $0x4,(%esp)
08219f57 +0xa63:  call   08725800 <__cxa_allocate_exception>
08219f5c +0xa68:  mov    %eax,%edx
08219f5e +0xa6a:  mov    -0x24(%ebp),%ecx
08219f61 +0xa6d:  mov    %ecx,(%edx)
08219f63 +0xa6f:  movl   $0x0,0x8(%esp)
08219f6b +0xa77:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219f73 +0xa7f:  mov    %eax,(%esp)
08219f76 +0xa82:  call   08724c50 <__cxa_throw>
08219f7b +0xa87:  mov    -0x4c(%ebp),%eax
08219f7e +0xa8a:  mov    %eax,%esi
08219f80 +0xa8c:  movzwl -0x3a(%ebp),%eax
08219f84 +0xa90:  movzwl %ax,%ebx
08219f87 +0xa93:  mov    0xc(%ebp),%eax
08219f8a +0xa96:  mov    %eax,(%esp)
08219f8d +0xa99:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08219f92 +0xa9e:  movl   $0x1,0x14(%esp)
08219f9a +0xaa6:  movl   $0x3,0x10(%esp)
08219fa2 +0xaae:  mov    %esi,0xc(%esp)
08219fa6 +0xab2:  mov    %ebx,0x8(%esp)
08219faa +0xab6:  movl   $0x1,0x4(%esp)
08219fb2 +0xabe:  mov    %eax,(%esp)
08219fb5 +0xac1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08219fba +0xac6:  xor    $0x1,%eax
08219fbd +0xac9:  test   %al,%al
08219fbf +0xacb:  je     08219fed <+0xaf9>
08219fc1 +0xacd:  movl   $0x4,(%esp)
08219fc8 +0xad4:  call   08725800 <__cxa_allocate_exception>
08219fcd +0xad9:  mov    %eax,%edx
08219fcf +0xadb:  movl   $0x16,(%edx)
08219fd5 +0xae1:  movl   $0x0,0x8(%esp)
08219fdd +0xae9:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08219fe5 +0xaf1:  mov    %eax,(%esp)
08219fe8 +0xaf4:  call   08724c50 <__cxa_throw>
08219fed +0xaf9:  mov    -0x9b(%ebp),%eax
08219ff3 +0xaff:  mov    %eax,%edx
08219ff5 +0xb01:  mov    -0xd8(%ebp),%eax
08219ffb +0xb07:  mov    0xc(%ebp),%ecx
08219ffe +0xb0a:  add    $0x79700,%ecx
0821a004 +0xb10:  movl   $0x2,0xc(%esp)
0821a00c +0xb18:  mov    %edx,0x8(%esp)
0821a010 +0xb1c:  mov    %eax,0x4(%esp)
0821a014 +0xb20:  mov    %ecx,(%esp)
0821a017 +0xb23:  call   08686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>  ; cUserHistoryLog::apply_Item(int, int, eApplyItemReason)
0821a01c +0xb28:  jmp    0821a079 <+0xb85>
0821a01e +0xb2a:  cmp    $0x1,%edx
0821a021 +0xb2d:  je     0821a02b <+0xb37>
0821a023 +0xb2f:  mov    %eax,(%esp)
0821a026 +0xb32:  call   08ae3750 <_Unwind_Resume>
0821a02b +0xb37:  mov    %eax,(%esp)
0821a02e +0xb3a:  call   08725ce0 <__cxa_begin_catch>
0821a033 +0xb3f:  mov    (%eax),%eax
0821a035 +0xb41:  mov    %eax,-0x20(%ebp)
0821a038 +0xb44:  mov    -0x20(%ebp),%eax
0821a03b +0xb47:  movzbl %al,%eax
0821a03e +0xb4a:  mov    %eax,0x8(%esp)
0821a042 +0xb4e:  movl   $0xd0,0x4(%esp)
0821a04a +0xb56:  mov    0xc(%ebp),%eax
0821a04d +0xb59:  mov    %eax,(%esp)
0821a050 +0xb5c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a055 +0xb61:  mov    $0x0,%ebx
0821a05a +0xb66:  call   08725c30 <__cxa_end_catch>
0821a05f +0xb6b:  jmp    0821a405 <+0xf11>
0821a064 +0xb70:  mov    %edx,%ebx
0821a066 +0xb72:  mov    %eax,%esi
0821a068 +0xb74:  call   08725c30 <__cxa_end_catch>
0821a06d +0xb79:  mov    %esi,%eax
0821a06f +0xb7b:  mov    %ebx,%edx
0821a071 +0xb7d:  mov    %eax,(%esp)
0821a074 +0xb80:  call   08ae3750 <_Unwind_Resume>
0821a079 +0xb85:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
0821a07e +0xb8a:  lea    -0x50(%ebp),%edx
0821a081 +0xb8d:  mov    %edx,0xc(%esp)
0821a085 +0xb91:  lea    -0x9d(%ebp),%edx
0821a08b +0xb97:  mov    %edx,0x8(%esp)
0821a08f +0xb9b:  mov    -0x2c(%ebp),%edx
0821a092 +0xb9e:  mov    %edx,0x4(%esp)
0821a096 +0xba2:  mov    %eax,(%esp)
0821a099 +0xba5:  call   08234b30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa1da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa1da
0821a09e +0xbaa:  movzbl -0x31(%ebp),%eax
0821a0a2 +0xbae:  cmp    $0x2,%al
0821a0a4 +0xbb0:  jne    0821a112 <+0xc1e>
0821a0a6 +0xbb2:  mov    -0x54(%ebp),%ebx
0821a0a9 +0xbb5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821a0ae +0xbba:  mov    0x20(%eax),%eax
0821a0b1 +0xbbd:  lea    -0x15b(%ebp),%edx
0821a0b7 +0xbc3:  mov    %edx,0x14(%esp)
0821a0bb +0xbc7:  mov    %ebx,0x10(%esp)
0821a0bf +0xbcb:  lea    -0xda(%ebp),%edx
0821a0c5 +0xbd1:  mov    %edx,0xc(%esp)
0821a0c9 +0xbd5:  lea    -0x9d(%ebp),%edx
0821a0cf +0xbdb:  mov    %edx,0x8(%esp)
0821a0d3 +0xbdf:  mov    0xc(%ebp),%edx
0821a0d6 +0xbe2:  mov    %edx,0x4(%esp)
0821a0da +0xbe6:  mov    %eax,(%esp)
0821a0dd +0xbe9:  call   0854ac8a <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc>  ; WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, char const*)
0821a0e2 +0xbee:  mov    %eax,-0x1c(%ebp)
0821a0e5 +0xbf1:  cmpl   $0x0,-0x1c(%ebp)
0821a0e9 +0xbf5:  je     0821a112 <+0xc1e>
0821a0eb +0xbf7:  mov    -0x1c(%ebp),%eax
0821a0ee +0xbfa:  movzbl %al,%eax
0821a0f1 +0xbfd:  mov    %eax,0x8(%esp)
0821a0f5 +0xc01:  movl   $0xd0,0x4(%esp)
0821a0fd +0xc09:  mov    0xc(%ebp),%eax
0821a100 +0xc0c:  mov    %eax,(%esp)
0821a103 +0xc0f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a108 +0xc14:  mov    $0x0,%ebx
0821a10d +0xc19:  jmp    0821a405 <+0xf11>
0821a112 +0xc1e:  movzwl -0x34(%ebp),%eax
0821a116 +0xc22:  movzwl %ax,%ebx
0821a119 +0xc25:  mov    0xc(%ebp),%eax
0821a11c +0xc28:  mov    %eax,(%esp)
0821a11f +0xc2b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821a124 +0xc30:  mov    -0x9d(%ebp),%edx
0821a12a +0xc36:  mov    %edx,0xc(%esp)
0821a12e +0xc3a:  mov    -0x99(%ebp),%edx
0821a134 +0xc40:  mov    %edx,0x10(%esp)
0821a138 +0xc44:  mov    -0x95(%ebp),%edx
0821a13e +0xc4a:  mov    %edx,0x14(%esp)
0821a142 +0xc4e:  mov    -0x91(%ebp),%edx
0821a148 +0xc54:  mov    %edx,0x18(%esp)
0821a14c +0xc58:  mov    -0x8d(%ebp),%edx
0821a152 +0xc5e:  mov    %edx,0x1c(%esp)
0821a156 +0xc62:  mov    -0x89(%ebp),%edx
0821a15c +0xc68:  mov    %edx,0x20(%esp)
0821a160 +0xc6c:  mov    -0x85(%ebp),%edx
0821a166 +0xc72:  mov    %edx,0x24(%esp)
0821a16a +0xc76:  mov    -0x81(%ebp),%edx
0821a170 +0xc7c:  mov    %edx,0x28(%esp)
0821a174 +0xc80:  mov    -0x7d(%ebp),%edx
0821a177 +0xc83:  mov    %edx,0x2c(%esp)
0821a17b +0xc87:  mov    -0x79(%ebp),%edx
0821a17e +0xc8a:  mov    %edx,0x30(%esp)
0821a182 +0xc8e:  mov    -0x75(%ebp),%edx
0821a185 +0xc91:  mov    %edx,0x34(%esp)
0821a189 +0xc95:  mov    -0x71(%ebp),%edx
0821a18c +0xc98:  mov    %edx,0x38(%esp)
0821a190 +0xc9c:  mov    -0x6d(%ebp),%edx
0821a193 +0xc9f:  mov    %edx,0x3c(%esp)
0821a197 +0xca3:  mov    -0x69(%ebp),%edx
0821a19a +0xca6:  mov    %edx,0x40(%esp)
0821a19e +0xcaa:  mov    -0x65(%ebp),%edx
0821a1a1 +0xcad:  mov    %edx,0x44(%esp)
0821a1a5 +0xcb1:  movzbl -0x61(%ebp),%edx
0821a1a9 +0xcb5:  mov    %dl,0x48(%esp)
0821a1ad +0xcb9:  mov    %ebx,0x8(%esp)
0821a1b1 +0xcbd:  movl   $0x1,0x4(%esp)
0821a1b9 +0xcc5:  mov    %eax,(%esp)
0821a1bc +0xcc8:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0821a1c1 +0xccd:  movzwl -0x3a(%ebp),%eax
0821a1c5 +0xcd1:  movzwl %ax,%ebx
0821a1c8 +0xcd4:  mov    0xc(%ebp),%eax
0821a1cb +0xcd7:  mov    %eax,(%esp)
0821a1ce +0xcda:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821a1d3 +0xcdf:  lea    -0x1a8(%ebp),%edx
0821a1d9 +0xce5:  mov    %ebx,0xc(%esp)
0821a1dd +0xce9:  movl   $0x1,0x8(%esp)
0821a1e5 +0xcf1:  mov    %eax,0x4(%esp)
0821a1e9 +0xcf5:  mov    %edx,(%esp)
0821a1ec +0xcf8:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0821a1f1 +0xcfd:  sub    $0x4,%esp
0821a1f4 +0xd00:  mov    -0x1a8(%ebp),%eax
0821a1fa +0xd06:  mov    %eax,-0xda(%ebp)
0821a200 +0xd0c:  mov    -0x1a4(%ebp),%eax
0821a206 +0xd12:  mov    %eax,-0xd6(%ebp)
0821a20c +0xd18:  mov    -0x1a0(%ebp),%eax
0821a212 +0xd1e:  mov    %eax,-0xd2(%ebp)
0821a218 +0xd24:  mov    -0x19c(%ebp),%eax
0821a21e +0xd2a:  mov    %eax,-0xce(%ebp)
0821a224 +0xd30:  mov    -0x198(%ebp),%eax
0821a22a +0xd36:  mov    %eax,-0xca(%ebp)
0821a230 +0xd3c:  mov    -0x194(%ebp),%eax
0821a236 +0xd42:  mov    %eax,-0xc6(%ebp)
0821a23c +0xd48:  mov    -0x190(%ebp),%eax
0821a242 +0xd4e:  mov    %eax,-0xc2(%ebp)
0821a248 +0xd54:  mov    -0x18c(%ebp),%eax
0821a24e +0xd5a:  mov    %eax,-0xbe(%ebp)
0821a254 +0xd60:  mov    -0x188(%ebp),%eax
0821a25a +0xd66:  mov    %eax,-0xba(%ebp)
0821a260 +0xd6c:  mov    -0x184(%ebp),%eax
0821a266 +0xd72:  mov    %eax,-0xb6(%ebp)
0821a26c +0xd78:  mov    -0x180(%ebp),%eax
0821a272 +0xd7e:  mov    %eax,-0xb2(%ebp)
0821a278 +0xd84:  mov    -0x17c(%ebp),%eax
0821a27e +0xd8a:  mov    %eax,-0xae(%ebp)
0821a284 +0xd90:  mov    -0x178(%ebp),%eax
0821a28a +0xd96:  mov    %eax,-0xaa(%ebp)
0821a290 +0xd9c:  mov    -0x174(%ebp),%eax
0821a296 +0xda2:  mov    %eax,-0xa6(%ebp)
0821a29c +0xda8:  mov    -0x170(%ebp),%eax
0821a2a2 +0xdae:  mov    %eax,-0xa2(%ebp)
0821a2a8 +0xdb4:  movzbl -0x16c(%ebp),%eax
0821a2af +0xdbb:  mov    %al,-0x9e(%ebp)
0821a2b5 +0xdc1:  lea    -0x60(%ebp),%eax
0821a2b8 +0xdc4:  mov    %eax,(%esp)
0821a2bb +0xdc7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821a2c0 +0xdcc:  movl   $0xd0,0x8(%esp)
0821a2c8 +0xdd4:  movl   $0x1,0x4(%esp)
0821a2d0 +0xddc:  lea    -0x60(%ebp),%eax
0821a2d3 +0xddf:  mov    %eax,(%esp)
0821a2d6 +0xde2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821a2db +0xde7:  movl   $0x1,0x4(%esp)
0821a2e3 +0xdef:  lea    -0x60(%ebp),%eax
0821a2e6 +0xdf2:  mov    %eax,(%esp)
0821a2e9 +0xdf5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821a2ee +0xdfa:  movzbl -0x31(%ebp),%eax
0821a2f2 +0xdfe:  movzbl %al,%eax
0821a2f5 +0xe01:  mov    %eax,0x4(%esp)
0821a2f9 +0xe05:  lea    -0x60(%ebp),%eax
0821a2fc +0xe08:  mov    %eax,(%esp)
0821a2ff +0xe0b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821a304 +0xe10:  movzwl -0x3a(%ebp),%eax
0821a308 +0xe14:  movzwl %ax,%eax
0821a30b +0xe17:  mov    %eax,0x4(%esp)
0821a30f +0xe1b:  lea    -0x60(%ebp),%eax
0821a312 +0xe1e:  mov    %eax,(%esp)
0821a315 +0xe21:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821a31a +0xe26:  mov    -0xd3(%ebp),%eax
0821a320 +0xe2c:  mov    %eax,0x4(%esp)
0821a324 +0xe30:  lea    -0x60(%ebp),%eax
0821a327 +0xe33:  mov    %eax,(%esp)
0821a32a +0xe36:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821a32f +0xe3b:  movzwl -0x34(%ebp),%eax
0821a333 +0xe3f:  movzwl %ax,%eax
0821a336 +0xe42:  mov    %eax,0x4(%esp)
0821a33a +0xe46:  lea    -0x60(%ebp),%eax
0821a33d +0xe49:  mov    %eax,(%esp)
0821a340 +0xe4c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821a345 +0xe51:  lea    -0x9d(%ebp),%eax
0821a34b +0xe57:  add    $0x11,%eax
0821a34e +0xe5a:  mov    %eax,(%esp)
0821a351 +0xe5d:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0821a356 +0xe62:  movzbl %al,%eax
0821a359 +0xe65:  mov    %eax,0x4(%esp)
0821a35d +0xe69:  lea    -0x60(%ebp),%eax
0821a360 +0xe6c:  mov    %eax,(%esp)
0821a363 +0xe6f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821a368 +0xe74:  lea    -0x9d(%ebp),%eax
0821a36e +0xe7a:  add    $0x11,%eax
0821a371 +0xe7d:  mov    %eax,(%esp)
0821a374 +0xe80:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0821a379 +0xe85:  movzwl %ax,%eax
0821a37c +0xe88:  mov    %eax,0x4(%esp)
0821a380 +0xe8c:  lea    -0x60(%ebp),%eax
0821a383 +0xe8f:  mov    %eax,(%esp)
0821a386 +0xe92:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821a38b +0xe97:  movzbl -0x31(%ebp),%eax
0821a38f +0xe9b:  cmp    $0x2,%al
0821a391 +0xe9d:  jne    0821a3b3 <+0xebf>
0821a393 +0xe9f:  lea    -0x9d(%ebp),%eax
0821a399 +0xea5:  mov    %eax,(%esp)
0821a39c +0xea8:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0821a3a1 +0xead:  movsbl %al,%eax
0821a3a4 +0xeb0:  mov    %eax,0x4(%esp)
0821a3a8 +0xeb4:  lea    -0x60(%ebp),%eax
0821a3ab +0xeb7:  mov    %eax,(%esp)
0821a3ae +0xeba:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821a3b3 +0xebf:  movl   $0x1,0x4(%esp)
0821a3bb +0xec7:  lea    -0x60(%ebp),%eax
0821a3be +0xeca:  mov    %eax,(%esp)
0821a3c1 +0xecd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821a3c6 +0xed2:  lea    -0x60(%ebp),%eax
0821a3c9 +0xed5:  mov    %eax,0x4(%esp)
0821a3cd +0xed9:  mov    0xc(%ebp),%eax
0821a3d0 +0xedc:  mov    %eax,(%esp)
0821a3d3 +0xedf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821a3d8 +0xee4:  mov    $0x0,%ebx
0821a3dd +0xee9:  lea    -0x60(%ebp),%eax
0821a3e0 +0xeec:  mov    %eax,(%esp)
0821a3e3 +0xeef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821a3e8 +0xef4:  jmp    0821a405 <+0xf11>
0821a3ea +0xef6:  mov    %edx,%ebx
0821a3ec +0xef8:  mov    %eax,%esi
0821a3ee +0xefa:  lea    -0x60(%ebp),%eax
0821a3f1 +0xefd:  mov    %eax,(%esp)
0821a3f4 +0xf00:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821a3f9 +0xf05:  mov    %esi,%eax
0821a3fb +0xf07:  mov    %ebx,%edx
0821a3fd +0xf09:  mov    %eax,(%esp)
0821a400 +0xf0c:  call   08ae3750 <_Unwind_Resume>
0821a405 +0xf11:  mov    %ebx,%eax
0821a407 +0xf13:  lea    -0xc(%ebp),%esp
0821a40a +0xf16:  add    $0x0,%esp
0821a40d +0xf19:  pop    %ebx
0821a40e +0xf1a:  pop    %esi
0821a40f +0xf1b:  pop    %edi
0821a410 +0xf1c:  pop    %ebp
0821a411 +0xf1d:  ret
```

## 反编译 C

```c
// Dispatcher_InvestItemAmplifyOption::dispatch_sig @ 0x82194f4

/* Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_InvestItemAmplifyOption::dispatch_sig
          (Dispatcher_InvestItemAmplifyOption *this,CUser *param_1,PacketBuf *param_2)

{
  ulong uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  undefined4 *puVar7;
  CItem *pCVar8;
  GameWorld *pGVar9;
  int *piVar10;
  CInventory *pCVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  byte bVar17;
  undefined1 local_1ac [8];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  char local_15f;
  char local_15e [128];
  undefined2 local_de;
  undefined2 uStack_dc;
  undefined2 local_da;
  undefined1 uStack_d8;
  int iStack_d7;
  undefined1 uStack_d3;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined2 local_a1;
  undefined2 uStack_9f;
  undefined2 local_9d;
  undefined2 uStack_9b;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined1 local_65;
  PacketGuard local_64 [12];
  int local_58;
  uint local_54;
  int local_50;
  byte local_49;
  uint local_48;
  ulong local_44;
  ushort local_3e;
  ulong local_3c;
  ushort local_38;
  byte local_35 [5];
  CItem *local_30;
  CItem *local_2c;
  int local_28;
  uint local_20;
  
  bVar17 = 0;
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    uVar5 = LineFunc(0xcc82,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  local_35[0] = 0;
  local_38 = 0;
  local_3c = 0;
  local_3e = 0;
  local_44 = 0;
  cVar3 = PacketBuf::get_byte(param_2,local_35);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc89,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_38);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8a,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_item_idx(param_2,&local_3c);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8b,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_3e);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8c,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_item_idx(param_2,&local_44);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8d,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  local_35[1] = 0x80;
  local_35[2] = 0;
  local_35[3] = 0;
  local_35[4] = 0;
  local_48 = 0;
  pcVar14 = &local_15f;
  uVar15 = 0x81;
  bVar16 = ((uint)pcVar14 & 1) != 0;
  if (bVar16) {
    local_15f = '\0';
    pcVar14 = local_15e;
    uVar15 = 0x80;
  }
  if (((uint)pcVar14 & 2) != 0) {
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14 = pcVar14 + 2;
    uVar15 = uVar15 - 2;
  }
  for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14 = pcVar14 + ((uint)bVar17 * -2 + 1) * 4;
  }
  if ((uVar15 & 2) != 0) {
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14 = pcVar14 + 2;
  }
  if (!bVar16) {
    *pcVar14 = '\0';
  }
  local_49 = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_49);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc97,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  if (4 < local_49) {
    uVar5 = LineFunc(0xcc99,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  if (local_35[0] == 2) {
    cVar3 = PacketBuf::get_int(param_2,&local_48);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0xcca0,
                       "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar3 = PacketBuf::get_str(param_2,&local_15f,0x81,local_48);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0xcca1,
                       "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
  }
  if (2 < local_35[0]) {
    uVar5 = LineFunc(0xcca6,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_a1);
  Inven_Item::Inven_Item((Inven_Item *)&local_de);
  stInvestAmplifyOption_t::stInvestAmplifyOption_t((stInvestAmplifyOption_t *)&local_54);
  uVar1 = local_3c;
  local_58 = 0;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_30 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
                    /* try { // try from 082198cf to 0821a01b has its CatchHandler @ 0821a01e */
  cVar3 = CUser::CheckItemLock(param_1,1,(uint)local_38);
  if (cVar3 != '\0') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0xd5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if (local_30 == (CItem *)0x0) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_38;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_1ac,iVar4);
  local_a1 = (undefined2)local_1ac._0_4_;
  uStack_9f = SUB42(local_1ac._0_4_,2);
  local_9d = (undefined2)local_1ac._4_4_;
  uStack_9b = SUB42(local_1ac._4_4_,2);
  local_99 = local_1a4;
  local_95 = local_1a0;
  local_91 = local_19c;
  local_8d = local_198;
  local_89 = local_194;
  local_85 = local_190;
  local_81 = local_18c;
  local_7d = local_188;
  local_79 = local_184;
  local_75 = local_180;
  local_71 = local_17c;
  local_6d = local_178;
  local_69 = local_174;
  local_65 = local_170;
  if (CONCAT22(local_9d,uStack_9f) != local_3c) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_3e;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_1ac,iVar4);
  local_de = (undefined2)local_1ac._0_4_;
  uStack_dc = SUB42(local_1ac._0_4_,2);
  local_da = (undefined2)local_1ac._4_4_;
  uStack_d8 = SUB41(local_1ac._4_4_,2);
  iStack_d7._1_3_ = (undefined3)local_1a4;
  iStack_d7 = CONCAT31(iStack_d7._1_3_,SUB41(local_1ac._4_4_,3));
  uStack_d3 = (undefined1)((uint)local_1a4 >> 0x18);
  local_d2 = local_1a0;
  local_ce = local_19c;
  local_ca = local_198;
  local_c6 = local_194;
  local_c2 = local_190;
  local_be = local_18c;
  local_ba = local_188;
  local_b6 = local_184;
  local_b2 = local_180;
  local_ae = local_17c;
  local_aa = local_178;
  local_a6 = local_174;
  local_a2 = local_170;
  if (CONCAT22(local_da,uStack_dc) != local_44) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar3 = CItemAmplifier::checkInvestableItem
                    (GlobalData::s_itemAmplifier_,local_30,(Inven_Item *)&local_a1,iVar4);
  uVar1 = local_44;
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  pCVar8 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
  local_2c = pCVar8;
  if (pCVar8 == (CItem *)0x0) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = CItem::IsEnableWorld(local_30);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,pCVar8);
    *puVar7 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  pCVar8 = local_30;
  cVar3 = CItem::IsEnableWorld(local_2c);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,pCVar8);
    *puVar7 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = CItemAmplifier::getInvestMaterialInfo
                    (GlobalData::s_itemAmplifier_,local_35[0],local_44,&local_54);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if ((local_54 == 5) && (local_49 == 0)) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if (local_49 != 0) {
    if (local_54 != 5) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    local_54 = (uint)local_49;
  }
  uVar15 = local_54;
  if ((local_54 == 0) || (iStack_d7 < local_50)) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  uVar13 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_91 + 1));
  if (uVar15 == (uVar13 & 0xff)) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPVPChannel(pGVar9);
  if (cVar3 == '\0') {
    pGVar9 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
    if (cVar3 == '\0') {
      bVar16 = false;
      goto LAB_08219e45;
    }
  }
  bVar16 = true;
LAB_08219e45:
  if (bVar16) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  local_28 = 0;
  local_28 = CItemAmplifier::enableInvestAmplifyOption
                       (GlobalData::s_itemAmplifier_,&local_a1,local_35[0]);
  if (local_28 != 0) {
    piVar10 = (int *)__cxa_allocate_exception(4);
    *piVar10 = local_28;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar10,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = 0;
  if (local_35[0] == 2) {
    iVar4 = G_CDataManager();
    local_28 = WongWork::CItemUpgrade::enableAmplifyRandomUpgrade
                         (*(CItemUpgrade **)(iVar4 + 0x20),param_1,(Inven_Item *)&local_a1,
                          (Inven_Item *)&local_de,&local_58);
    if (local_28 == 0x15) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0xcb;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = local_28;
    if (local_28 != 0) {
      piVar10 = (int *)__cxa_allocate_exception(4);
      *piVar10 = local_28;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar10,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_28 = iVar4;
  uVar2 = local_3e;
  pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar3 = CInventory::delete_item(pCVar11,1,uVar2,local_50,3,1);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  cUserHistoryLog::apply_Item
            ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_da,uStack_dc),
             CONCAT22(local_9d,uStack_9f),2);
  CItemAmplifier::investAmplifyOption
            (GlobalData::s_itemAmplifier_,local_30,(Inven_Item *)&local_a1,
             (stInvestAmplifyOption_t *)&local_54);
  iVar4 = local_58;
  if (local_35[0] == 2) {
    iVar12 = G_CDataManager();
    local_20 = WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade
                         (*(CItemUpgrade **)(iVar12 + 0x20),param_1,(Inven_Item *)&local_a1,
                          (Inven_Item *)&local_de,iVar4,&local_15f);
    if (local_20 != 0) {
      CUser::SendCmdErrorPacket(param_1,0xd0,local_20 & 0xff);
      return 0;
    }
  }
  uVar2 = local_38;
  uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::update_item
            (uVar5,1,uVar2,CONCAT22(uStack_9f,local_a1),CONCAT22(uStack_9b,local_9d),local_99,
             local_95,local_91,local_8d,local_89,local_85,local_81,local_7d,local_79,local_75,
             local_71,local_6d,local_69,local_65);
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_1ac,iVar4);
  local_de = (undefined2)local_1ac._0_4_;
  uStack_dc = SUB42(local_1ac._0_4_,2);
  local_da = (undefined2)local_1ac._4_4_;
  uStack_d8 = SUB41(local_1ac._4_4_,2);
  iStack_d7._1_3_ = (undefined3)local_1a4;
  iStack_d7 = CONCAT31(iStack_d7._1_3_,SUB41(local_1ac._4_4_,3));
  uStack_d3 = (undefined1)((uint)local_1a4 >> 0x18);
  local_d2 = local_1a0;
  local_ce = local_19c;
  local_ca = local_198;
  local_c6 = local_194;
  local_c2 = local_190;
  local_be = local_18c;
  local_ba = local_188;
  local_b6 = local_184;
  local_b2 = local_180;
  local_ae = local_17c;
  local_aa = local_178;
  local_a6 = local_174;
  local_a2 = local_170;
  PacketGuard::PacketGuard(local_64);
                    /* try { // try from 0821a2d6 to 0821a3d7 has its CatchHandler @ 0821a3ea */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0xd0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,(uint)local_35[0]);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(uint)local_3e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,iStack_d7);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(uint)local_38);
  uVar15 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_91 + 1));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,uVar15 & 0xff);
  uVar15 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_91 + 1));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,uVar15 & 0xffff);
  if (local_35[0] == 2) {
    cVar3 = Inven_Item::GetUpgrade((Inven_Item *)&local_a1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,(int)cVar3);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
  CUser::Send(param_1,local_64);
  PacketGuard::~PacketGuard(local_64);
  return 0;
}
```
