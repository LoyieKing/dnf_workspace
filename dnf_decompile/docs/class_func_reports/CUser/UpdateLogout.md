# UpdateLogout

`_ZN5CUser12UpdateLogoutEb`

`CUser::UpdateLogout(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086554aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086554aa  _ZN5CUser12UpdateLogoutEb
#           CUser::UpdateLogout(bool)
# range [0x086554aa, 0x08655bcd]
086554aa +0x000:  push   %ebp
086554ab +0x001:  mov    %esp,%ebp
086554ad +0x003:  push   %edi
086554ae +0x004:  push   %esi
086554af +0x005:  push   %ebx
086554b0 +0x006:  sub    $0xcc,%esp
086554b6 +0x00c:  mov    0xc(%ebp),%eax
086554b9 +0x00f:  mov    %al,-0xac(%ebp)
086554bf +0x015:  mov    0x8(%ebp),%eax
086554c2 +0x018:  mov    %eax,(%esp)
086554c5 +0x01b:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
086554ca +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086554cf +0x025:  movl   $0x2260,0x8(%esp)
086554d7 +0x02d:  movl   $"user.cpp",0x4(%esp)
086554df +0x035:  mov    %eax,(%esp)
086554e2 +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086554e7 +0x03d:  movl   $0x1,0x8(%esp)
086554ef +0x045:  mov    %eax,0x4(%esp)
086554f3 +0x049:  lea    -0x50(%ebp),%eax
086554f6 +0x04c:  mov    %eax,(%esp)
086554f9 +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086554fe +0x054:  lea    -0x50(%ebp),%eax
08655501 +0x057:  mov    %eax,(%esp)
08655504 +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08655509 +0x05f:  movl   $0x2c,0x4(%esp)
08655511 +0x067:  mov    %eax,(%esp)
08655514 +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08655519 +0x06f:  mov    0x8(%ebp),%eax
0865551c +0x072:  mov    %eax,(%esp)
0865551f +0x075:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08655524 +0x07a:  mov    %eax,%ebx
08655526 +0x07c:  lea    -0x50(%ebp),%eax
08655529 +0x07f:  mov    %eax,(%esp)
0865552c +0x082:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08655531 +0x087:  mov    %ebx,0x4(%esp)
08655535 +0x08b:  mov    %eax,(%esp)
08655538 +0x08e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865553d +0x093:  lea    -0x50(%ebp),%eax
08655540 +0x096:  mov    %eax,(%esp)
08655543 +0x099:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08655548 +0x09e:  mov    %eax,(%esp)
0865554b +0x0a1:  call   0869ac86 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x74db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x74db
08655550 +0x0a6:  mov    %eax,-0x28(%ebp)
08655553 +0x0a9:  movl   $0x8b,0x8(%esp)
0865555b +0x0b1:  movl   $0x0,0x4(%esp)
08655563 +0x0b9:  mov    -0x28(%ebp),%eax
08655566 +0x0bc:  mov    %eax,(%esp)
08655569 +0x0bf:  call   0807dcc0 <_init+0x5b8>
0865556e +0x0c4:  mov    0x8(%ebp),%eax
08655571 +0x0c7:  mov    0x704ac(%eax),%edx
08655577 +0x0cd:  mov    -0x28(%ebp),%eax
0865557a +0x0d0:  mov    %edx,(%eax)
0865557c +0x0d2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08655581 +0x0d7:  mov    %eax,(%esp)
08655584 +0x0da:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08655589 +0x0df:  test   %al,%al
0865558b +0x0e1:  je     086555b3 <+0x109>
0865558d +0x0e3:  mov    0x8(%ebp),%eax
08655590 +0x0e6:  mov    %eax,(%esp)
08655593 +0x0e9:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08655598 +0x0ee:  mov    %eax,%ebx
0865559a +0x0f0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0865559f +0x0f5:  mov    %ebx,0x4(%esp)
086555a3 +0x0f9:  mov    %eax,(%esp)
086555a6 +0x0fc:  call   08234524 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bce
086555ab +0x101:  mov    -0x28(%ebp),%edx
086555ae +0x104:  mov    %eax,0x8(%edx)
086555b1 +0x107:  jmp    086555c6 <+0x11c>
086555b3 +0x109:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086555b8 +0x10e:  mov    %eax,(%esp)
086555bb +0x111:  call   0844dc6e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x884>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x884
086555c0 +0x116:  mov    -0x28(%ebp),%edx
086555c3 +0x119:  mov    %eax,0x8(%edx)
086555c6 +0x11c:  mov    0x8(%ebp),%eax
086555c9 +0x11f:  mov    %eax,(%esp)
086555cc +0x122:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086555d1 +0x127:  test   %eax,%eax
086555d3 +0x129:  setne  %al
086555d6 +0x12c:  test   %al,%al
086555d8 +0x12e:  je     086555ff <+0x155>
086555da +0x130:  mov    0x8(%ebp),%eax
086555dd +0x133:  mov    %eax,(%esp)
086555e0 +0x136:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086555e5 +0x13b:  mov    -0x28(%ebp),%edx
086555e8 +0x13e:  mov    %eax,0x4(%edx)
086555eb +0x141:  mov    0x8(%ebp),%eax
086555ee +0x144:  mov    %eax,(%esp)
086555f1 +0x147:  call   08696306 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b5b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b5b
086555f6 +0x14c:  mov    %eax,%edx
086555f8 +0x14e:  mov    -0x28(%ebp),%eax
086555fb +0x151:  mov    %dx,0xc(%eax)
086555ff +0x155:  mov    0x8(%ebp),%eax
08655602 +0x158:  mov    %eax,(%esp)
08655605 +0x15b:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0865560a +0x160:  mov    %eax,(%esp)
0865560d +0x163:  call   084b92ea <_ZN8XNuclear6CHades11Send_LogoutEv>  ; XNuclear::CHades::Send_Logout()
08655612 +0x168:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08655619 +0x16f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0865561e +0x174:  mov    %eax,-0x24(%ebp)
08655621 +0x177:  mov    -0x28(%ebp),%eax
08655624 +0x17a:  movb   $0x0,0x12(%eax)
08655628 +0x17e:  mov    0x8(%ebp),%eax
0865562b +0x181:  mov    %eax,(%esp)
0865562e +0x184:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08655633 +0x189:  cmp    $0x1,%eax
08655636 +0x18c:  setg   %al
08655639 +0x18f:  test   %al,%al
0865563b +0x191:  je     08655791 <+0x2e7>
08655641 +0x197:  mov    -0x28(%ebp),%eax
08655644 +0x19a:  movb   $0x1,0x12(%eax)
08655648 +0x19e:  mov    0x8(%ebp),%eax
0865564b +0x1a1:  mov    0x71ba4(%eax),%eax
08655651 +0x1a7:  mov    -0x24(%ebp),%edx
08655654 +0x1aa:  sub    %eax,%edx
08655656 +0x1ac:  mov    -0x28(%ebp),%eax
08655659 +0x1af:  mov    %edx,0x13(%eax)
0865565c +0x1b2:  mov    0x8(%ebp),%eax
0865565f +0x1b5:  mov    0x8d10c(%eax),%edx
08655665 +0x1bb:  mov    -0x28(%ebp),%eax
08655668 +0x1be:  mov    %edx,0x17(%eax)
0865566b +0x1c1:  mov    0x8(%ebp),%eax
0865566e +0x1c4:  mov    0x703a4(%eax),%edx
08655674 +0x1ca:  mov    -0x28(%ebp),%eax
08655677 +0x1cd:  mov    %edx,0x1b(%eax)
0865567a +0x1d0:  mov    0x8(%ebp),%eax
0865567d +0x1d3:  movzwl 0x79642(%eax),%edx
08655684 +0x1da:  mov    -0x28(%ebp),%eax
08655687 +0x1dd:  mov    %dx,0x1f(%eax)
0865568b +0x1e1:  mov    0x8(%ebp),%eax
0865568e +0x1e4:  movzbl 0x8d0df(%eax),%edx
08655695 +0x1eb:  mov    -0x28(%ebp),%eax
08655698 +0x1ee:  mov    %dl,0x21(%eax)
0865569b +0x1f1:  mov    -0x28(%ebp),%eax
0865569e +0x1f4:  mov    %eax,0x4(%esp)
086556a2 +0x1f8:  mov    0x8(%ebp),%eax
086556a5 +0x1fb:  mov    %eax,(%esp)
086556a8 +0x1fe:  call   08655327 <_Z20SetUserManagerToolIPP5CUserP17SIG_UPDATE_LOGOUT>  ; SetUserManagerToolIP(CUser*, SIG_UPDATE_LOGOUT*)
086556ad +0x203:  lea    -0x9d(%ebp),%edx
086556b3 +0x209:  mov    $0x41,%ebx
086556b8 +0x20e:  mov    $0x0,%eax
086556bd +0x213:  mov    %edx,%ecx
086556bf +0x215:  and    $0x1,%ecx
086556c2 +0x218:  test   %ecx,%ecx
086556c4 +0x21a:  je     086556ce <+0x224>
086556c6 +0x21c:  mov    %al,(%edx)
086556c8 +0x21e:  add    $0x1,%edx
086556cb +0x221:  sub    $0x1,%ebx
086556ce +0x224:  mov    %edx,%ecx
086556d0 +0x226:  and    $0x2,%ecx
086556d3 +0x229:  test   %ecx,%ecx
086556d5 +0x22b:  je     086556e0 <+0x236>
086556d7 +0x22d:  mov    %ax,(%edx)
086556da +0x230:  add    $0x2,%edx
086556dd +0x233:  sub    $0x2,%ebx
086556e0 +0x236:  mov    %ebx,%ecx
086556e2 +0x238:  shr    $0x2,%ecx
086556e5 +0x23b:  mov    %edx,%edi
086556e7 +0x23d:  rep stos %eax,%es:(%edi)
086556e9 +0x23f:  mov    %edi,%edx
086556eb +0x241:  mov    %ebx,%ecx
086556ed +0x243:  and    $0x2,%ecx
086556f0 +0x246:  test   %ecx,%ecx
086556f2 +0x248:  je     086556fa <+0x250>
086556f4 +0x24a:  mov    %ax,(%edx)
086556f7 +0x24d:  add    $0x2,%edx
086556fa +0x250:  mov    %ebx,%ecx
086556fc +0x252:  and    $0x1,%ecx
086556ff +0x255:  test   %ecx,%ecx
08655701 +0x257:  je     08655708 <+0x25e>
08655703 +0x259:  mov    %al,(%edx)
08655705 +0x25b:  add    $0x1,%edx
08655708 +0x25e:  mov    0x8(%ebp),%eax
0865570b +0x261:  add    $0xe0,%eax
08655710 +0x266:  mov    %eax,(%esp)
08655713 +0x269:  call   08288050 <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x102>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x102
08655718 +0x26e:  movl   $0x41,0x8(%esp)
08655720 +0x276:  mov    %eax,0x4(%esp)
08655724 +0x27a:  lea    -0x9d(%ebp),%eax
0865572a +0x280:  mov    %eax,(%esp)
0865572d +0x283:  call   0807d8a0 <_init+0x198>
08655732 +0x288:  mov    -0x28(%ebp),%eax
08655735 +0x28b:  lea    0x47(%eax),%edx
08655738 +0x28e:  movl   $0x41,0x8(%esp)
08655740 +0x296:  lea    -0x9d(%ebp),%eax
08655746 +0x29c:  mov    %eax,0x4(%esp)
0865574a +0x2a0:  mov    %edx,(%esp)
0865574d +0x2a3:  call   0807d8d0 <_init+0x1c8>
08655752 +0x2a8:  mov    0x8(%ebp),%eax
08655755 +0x2ab:  mov    %eax,(%esp)
08655758 +0x2ae:  call   0869723a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a8f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a8f
0865575d +0x2b3:  mov    -0x28(%ebp),%edx
08655760 +0x2b6:  mov    %al,0x88(%edx)
08655766 +0x2bc:  mov    0x8(%ebp),%eax
08655769 +0x2bf:  mov    %eax,(%esp)
0865576c +0x2c2:  call   0869722a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a7f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a7f
08655771 +0x2c7:  mov    0x8(%ebp),%eax
08655774 +0x2ca:  mov    %eax,(%esp)
08655777 +0x2cd:  call   084ec824 <_GLOBAL__I__Z7getUserj+0x37d6>  ; global constructors keyed to getUser(unsigned int)+0x37d6
0865577c +0x2d2:  mov    -0x28(%ebp),%edx
0865577f +0x2d5:  mov    %ax,0x89(%edx)
08655786 +0x2dc:  mov    0x8(%ebp),%eax
08655789 +0x2df:  mov    %eax,(%esp)
0865578c +0x2e2:  call   084ec812 <_GLOBAL__I__Z7getUserj+0x37c4>  ; global constructors keyed to getUser(unsigned int)+0x37c4
08655791 +0x2e7:  mov    0x8(%ebp),%eax
08655794 +0x2ea:  mov    0x71ba4(%eax),%edi
0865579a +0x2f0:  mov    -0x28(%ebp),%eax
0865579d +0x2f3:  mov    0x13(%eax),%esi
086557a0 +0x2f6:  mov    0x8(%ebp),%eax
086557a3 +0x2f9:  mov    %eax,(%esp)
086557a6 +0x2fc:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086557ab +0x301:  movzwl %ax,%ebx
086557ae +0x304:  movl   $0x0,0xc(%esp)
086557b6 +0x30c:  movl   $0x22e0,0x8(%esp)
086557be +0x314:  movl   $&_ZZN5CUser12UpdateLogoutEbE19__PRETTY_FUNCTION__,0x4(%esp)
086557c6 +0x31c:  lea    -0x48(%ebp),%eax
086557c9 +0x31f:  mov    %eax,(%esp)
086557cc +0x322:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086557d1 +0x327:  mov    -0x24(%ebp),%eax
086557d4 +0x32a:  mov    %eax,0x14(%esp)
086557d8 +0x32e:  mov    %edi,0x10(%esp)
086557dc +0x332:  mov    %esi,0xc(%esp)
086557e0 +0x336:  mov    %ebx,0x8(%esp)
086557e4 +0x33a:  movl   $"trace mid:%d playTime:%d login_time:%d now_time:%d",0x4(%esp)
086557ec +0x342:  lea    -0x48(%ebp),%eax
086557ef +0x345:  mov    %eax,(%esp)
086557f2 +0x348:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086557f7 +0x34d:  mov    0x8(%ebp),%eax
086557fa +0x350:  mov    -0x24(%ebp),%edx
086557fd +0x353:  mov    %edx,0x71ba4(%eax)
08655803 +0x359:  mov    0x8(%ebp),%eax
08655806 +0x35c:  mov    0x71ba4(%eax),%edi
0865580c +0x362:  mov    -0x28(%ebp),%eax
0865580f +0x365:  mov    0x13(%eax),%esi
08655812 +0x368:  mov    0x8(%ebp),%eax
08655815 +0x36b:  mov    %eax,(%esp)
08655818 +0x36e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0865581d +0x373:  movzwl %ax,%ebx
08655820 +0x376:  movl   $0x0,0xc(%esp)
08655828 +0x37e:  movl   $0x22e2,0x8(%esp)
08655830 +0x386:  movl   $&_ZZN5CUser12UpdateLogoutEbE19__PRETTY_FUNCTION__,0x4(%esp)
08655838 +0x38e:  lea    -0x38(%ebp),%eax
0865583b +0x391:  mov    %eax,(%esp)
0865583e +0x394:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08655843 +0x399:  mov    -0x24(%ebp),%eax
08655846 +0x39c:  mov    %eax,0x14(%esp)
0865584a +0x3a0:  mov    %edi,0x10(%esp)
0865584e +0x3a4:  mov    %esi,0xc(%esp)
08655852 +0x3a8:  mov    %ebx,0x8(%esp)
08655856 +0x3ac:  movl   $"trace mid:%d playTime:%d login_time:%d now_time:%d",0x4(%esp)
0865585e +0x3b4:  lea    -0x38(%ebp),%eax
08655861 +0x3b7:  mov    %eax,(%esp)
08655864 +0x3ba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08655869 +0x3bf:  mov    0x8(%ebp),%eax
0865586c +0x3c2:  mov    0x704ac(%eax),%eax
08655872 +0x3c8:  test   %eax,%eax
08655874 +0x3ca:  jne    08655899 <+0x3ef>
08655876 +0x3cc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865587b +0x3d1:  mov    %eax,(%esp)
0865587e +0x3d4:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08655883 +0x3d9:  test   %al,%al
08655885 +0x3db:  jne    08655899 <+0x3ef>
08655887 +0x3dd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865588c +0x3e2:  mov    %eax,(%esp)
0865588f +0x3e5:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08655894 +0x3ea:  cmp    $0x7,%eax
08655897 +0x3ed:  jne    086558a0 <+0x3f6>
08655899 +0x3ef:  mov    $0x1,%eax
0865589e +0x3f4:  jmp    086558a5 <+0x3fb>
086558a0 +0x3f6:  mov    $0x0,%eax
086558a5 +0x3fb:  test   %al,%al
086558a7 +0x3fd:  je     086558c7 <+0x41d>
086558a9 +0x3ff:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086558ae +0x404:  lea    -0x50(%ebp),%edx
086558b1 +0x407:  mov    %edx,0x8(%esp)
086558b5 +0x40b:  movl   $0x2,0x4(%esp)
086558bd +0x413:  mov    %eax,(%esp)
086558c0 +0x416:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086558c5 +0x41b:  jmp    086558db <+0x431>
086558c7 +0x41d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086558cc +0x422:  lea    -0x50(%ebp),%edx
086558cf +0x425:  mov    %edx,0x4(%esp)
086558d3 +0x429:  mov    %eax,(%esp)
086558d6 +0x42c:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
086558db +0x431:  mov    0x8(%ebp),%eax
086558de +0x434:  add    $0xe0,%eax
086558e3 +0x439:  mov    %eax,(%esp)
086558e6 +0x43c:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
086558eb +0x441:  movzbl (%eax),%eax
086558ee +0x444:  test   %al,%al
086558f0 +0x446:  je     08655908 <+0x45e>
086558f2 +0x448:  mov    0x8(%ebp),%eax
086558f5 +0x44b:  mov    %eax,(%esp)
086558f8 +0x44e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086558fd +0x453:  test   %eax,%eax
086558ff +0x455:  je     08655908 <+0x45e>
08655901 +0x457:  mov    $0x1,%eax
08655906 +0x45c:  jmp    0865590d <+0x463>
08655908 +0x45e:  mov    $0x0,%eax
0865590d +0x463:  test   %al,%al
0865590f +0x465:  je     086559d5 <+0x52b>
08655915 +0x46b:  mov    0x8(%ebp),%eax
08655918 +0x46e:  mov    %eax,(%esp)
0865591b +0x471:  call   08696922 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3177>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3177
08655920 +0x476:  test   %eax,%eax
08655922 +0x478:  setg   %al
08655925 +0x47b:  test   %al,%al
08655927 +0x47d:  je     086559d5 <+0x52b>
0865592d +0x483:  mov    0x8(%ebp),%eax
08655930 +0x486:  mov    %eax,(%esp)
08655933 +0x489:  call   084ecb0a <_GLOBAL__I__Z7getUserj+0x3abc>  ; global constructors keyed to getUser(unsigned int)+0x3abc
08655938 +0x48e:  movzbl %al,%eax
0865593b +0x491:  mov    %eax,-0xb4(%ebp)
08655941 +0x497:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08655948 +0x49e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0865594d +0x4a3:  mov    %eax,%ebx
0865594f +0x4a5:  mov    0x8(%ebp),%eax
08655952 +0x4a8:  mov    %eax,(%esp)
08655955 +0x4ab:  call   08696922 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3177>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3177
0865595a +0x4b0:  mov    %ebx,%edx
0865595c +0x4b2:  sub    %eax,%edx
0865595e +0x4b4:  mov    %edx,-0xb0(%ebp)
08655964 +0x4ba:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08655969 +0x4bf:  mov    0x1b0(%eax),%edi
0865596f +0x4c5:  mov    0x8(%ebp),%eax
08655972 +0x4c8:  add    $0xe0,%eax
08655977 +0x4cd:  mov    %eax,(%esp)
0865597a +0x4d0:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
0865597f +0x4d5:  movzwl %ax,%esi
08655982 +0x4d8:  mov    0x8(%ebp),%eax
08655985 +0x4db:  add    $0xe0,%eax
0865598a +0x4e0:  mov    %eax,(%esp)
0865598d +0x4e3:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
08655992 +0x4e8:  mov    %eax,%ebx
08655994 +0x4ea:  mov    0x8(%ebp),%eax
08655997 +0x4ed:  mov    %eax,(%esp)
0865599a +0x4f0:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
0865599f +0x4f5:  mov    %eax,%edx
086559a1 +0x4f7:  mov    0x8(%ebp),%eax
086559a4 +0x4fa:  add    $0x79700,%eax
086559a9 +0x4ff:  mov    -0xb4(%ebp),%ecx
086559af +0x505:  mov    %ecx,0x18(%esp)
086559b3 +0x509:  mov    -0xb0(%ebp),%ecx
086559b9 +0x50f:  mov    %ecx,0x14(%esp)
086559bd +0x513:  mov    %edi,0x10(%esp)
086559c1 +0x517:  mov    %esi,0xc(%esp)
086559c5 +0x51b:  mov    %ebx,0x8(%esp)
086559c9 +0x51f:  mov    %edx,0x4(%esp)
086559cd +0x523:  mov    %eax,(%esp)
086559d0 +0x526:  call   086840c4 <_ZN15cUserHistoryLog6LogoutEPKcS1_iiih>  ; cUserHistoryLog::Logout(char const*, char const*, int, int, int, unsigned char)
086559d5 +0x52b:  mov    0x8(%ebp),%eax
086559d8 +0x52e:  mov    %eax,(%esp)
086559db +0x531:  call   08689494 <_ZNK5CUser17DBUpdateDBLogItemEv>  ; CUser::DBUpdateDBLogItem() const
086559e0 +0x536:  mov    0x8(%ebp),%eax
086559e3 +0x539:  mov    %eax,(%esp)
086559e6 +0x53c:  call   08697262 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ab7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ab7
086559eb +0x541:  mov    0x8(%ebp),%eax
086559ee +0x544:  mov    %eax,(%esp)
086559f1 +0x547:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086559f6 +0x54c:  mov    %eax,-0x20(%ebp)
086559f9 +0x54f:  mov    0x8(%ebp),%eax
086559fc +0x552:  mov    %eax,(%esp)
086559ff +0x555:  call   084ec216 <_GLOBAL__I__Z7getUserj+0x31c8>  ; global constructors keyed to getUser(unsigned int)+0x31c8
08655a04 +0x55a:  mov    %al,-0x1a(%ebp)
08655a07 +0x55d:  mov    0x8(%ebp),%eax
08655a0a +0x560:  mov    %eax,(%esp)
08655a0d +0x563:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
08655a12 +0x568:  mov    %al,-0x19(%ebp)
08655a15 +0x56b:  mov    0x8(%ebp),%eax
08655a18 +0x56e:  mov    %eax,(%esp)
08655a1b +0x571:  call   08696976 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x31cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x31cb
08655a20 +0x576:  test   %al,%al
08655a22 +0x578:  je     08655a3f <+0x595>
08655a24 +0x57a:  movzbl -0x19(%ebp),%edx
08655a28 +0x57e:  movzbl -0x1a(%ebp),%eax
08655a2c +0x582:  mov    %edx,0x8(%esp)
08655a30 +0x586:  mov    %eax,0x4(%esp)
08655a34 +0x58a:  mov    -0x20(%ebp),%eax
08655a37 +0x58d:  mov    %eax,(%esp)
08655a3a +0x590:  call   0843f232 <_ZN20DB_UpdateRevengeData11makeRequestEjhh>  ; DB_UpdateRevengeData::makeRequest(unsigned int, unsigned char, unsigned char)
08655a3f +0x595:  mov    0x8(%ebp),%eax
08655a42 +0x598:  mov    %eax,(%esp)
08655a45 +0x59b:  call   08697598 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ded>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ded
08655a4a +0x5a0:  test   %al,%al
08655a4c +0x5a2:  je     08655a8e <+0x5e4>
08655a4e +0x5a4:  mov    0x8(%ebp),%eax
08655a51 +0x5a7:  mov    %eax,(%esp)
08655a54 +0x5aa:  call   081bc130 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ca>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ca
08655a59 +0x5af:  mov    %eax,%esi
08655a5b +0x5b1:  mov    0x8(%ebp),%eax
08655a5e +0x5b4:  mov    %eax,(%esp)
08655a61 +0x5b7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08655a66 +0x5bc:  mov    %eax,%ebx
08655a68 +0x5be:  mov    0x8(%ebp),%eax
08655a6b +0x5c1:  mov    %eax,(%esp)
08655a6e +0x5c4:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08655a73 +0x5c9:  mov    %esi,0x8(%esp)
08655a77 +0x5cd:  mov    %ebx,0x4(%esp)
08655a7b +0x5d1:  mov    %eax,(%esp)
08655a7e +0x5d4:  call   08442966 <_ZN26DB_UpdateOntimeLastRecvIdx11makeRequestEiji>  ; DB_UpdateOntimeLastRecvIdx::makeRequest(int, unsigned int, int)
08655a83 +0x5d9:  mov    0x8(%ebp),%eax
08655a86 +0x5dc:  mov    %eax,(%esp)
08655a89 +0x5df:  call   08697588 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ddd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ddd
08655a8e +0x5e4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08655a93 +0x5e9:  mov    %eax,(%esp)
08655a96 +0x5ec:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08655a9b +0x5f1:  movl   $0x56,0x4(%esp)
08655aa3 +0x5f9:  mov    %eax,(%esp)
08655aa6 +0x5fc:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08655aab +0x601:  test   %al,%al
08655aad +0x603:  je     08655af2 <+0x648>
08655aaf +0x605:  mov    0x8(%ebp),%eax
08655ab2 +0x608:  mov    %eax,(%esp)
08655ab5 +0x60b:  call   086975b6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3e0b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3e0b
08655aba +0x610:  test   %eax,%eax
08655abc +0x612:  setne  %al
08655abf +0x615:  test   %al,%al
08655ac1 +0x617:  je     08655af2 <+0x648>
08655ac3 +0x619:  mov    0x8(%ebp),%eax
08655ac6 +0x61c:  mov    %eax,(%esp)
08655ac9 +0x61f:  call   086975a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3dfd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3dfd
08655ace +0x624:  mov    %eax,%ebx
08655ad0 +0x626:  mov    0x8(%ebp),%eax
08655ad3 +0x629:  mov    %eax,(%esp)
08655ad6 +0x62c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08655adb +0x631:  mov    %ebx,0x4(%esp)
08655adf +0x635:  mov    %eax,(%esp)
08655ae2 +0x638:  call   084447d6 <_ZN26DB_UpdateFatigueAttendance11makeRequestEjRKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE>  ; DB_UpdateFatigueAttendance::makeRequest(unsigned int, std::map<unsigned char, short, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, short> > > const&)
08655ae7 +0x63d:  mov    0x8(%ebp),%eax
08655aea +0x640:  mov    %eax,(%esp)
08655aed +0x643:  call   0868d476 <_ZN5CUser25reset_server_fatigue_dataEv>  ; CUser::reset_server_fatigue_data()
08655af2 +0x648:  mov    0x8(%ebp),%eax
08655af5 +0x64b:  mov    %eax,(%esp)
08655af8 +0x64e:  call   0868d750 <_ZN5CUser26reset_ingame_event_historyEv>  ; CUser::reset_ingame_event_history()
08655afd +0x653:  movzbl -0xac(%ebp),%eax
08655b04 +0x65a:  xor    $0x1,%eax
08655b07 +0x65d:  test   %al,%al
08655b09 +0x65f:  je     08655b8f <+0x6e5>
08655b0f +0x665:  lea    -0x5c(%ebp),%eax
08655b12 +0x668:  mov    %eax,(%esp)
08655b15 +0x66b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08655b1a +0x670:  movl   $0x3,0x8(%esp)
08655b22 +0x678:  movl   $0x1,0x4(%esp)
08655b2a +0x680:  lea    -0x5c(%ebp),%eax
08655b2d +0x683:  mov    %eax,(%esp)
08655b30 +0x686:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08655b35 +0x68b:  movl   $0x1,0x4(%esp)
08655b3d +0x693:  lea    -0x5c(%ebp),%eax
08655b40 +0x696:  mov    %eax,(%esp)
08655b43 +0x699:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08655b48 +0x69e:  movl   $0x1,0x4(%esp)
08655b50 +0x6a6:  lea    -0x5c(%ebp),%eax
08655b53 +0x6a9:  mov    %eax,(%esp)
08655b56 +0x6ac:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08655b5b +0x6b1:  lea    -0x5c(%ebp),%eax
08655b5e +0x6b4:  mov    %eax,0x4(%esp)
08655b62 +0x6b8:  mov    0x8(%ebp),%eax
08655b65 +0x6bb:  mov    %eax,(%esp)
08655b68 +0x6be:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08655b6d +0x6c3:  jmp    08655b84 <+0x6da>
08655b6f +0x6c5:  mov    %edx,%ebx
08655b71 +0x6c7:  mov    %eax,%esi
08655b73 +0x6c9:  lea    -0x5c(%ebp),%eax
08655b76 +0x6cc:  mov    %eax,(%esp)
08655b79 +0x6cf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08655b7e +0x6d4:  mov    %esi,%eax
08655b80 +0x6d6:  mov    %ebx,%edx
08655b82 +0x6d8:  jmp    08655b9c <+0x6f2>
08655b84 +0x6da:  lea    -0x5c(%ebp),%eax
08655b87 +0x6dd:  mov    %eax,(%esp)
08655b8a +0x6e0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08655b8f +0x6e5:  mov    0x8(%ebp),%eax
08655b92 +0x6e8:  mov    %eax,(%esp)
08655b95 +0x6eb:  call   080e0da4 <_ZN19CerashopAddRestrict7Manager20ClearBuyRestrictItemEP5CUser>  ; CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*)
08655b9a +0x6f0:  jmp    08655bb7 <+0x70d>
08655b9c +0x6f2:  mov    %edx,%ebx
08655b9e +0x6f4:  mov    %eax,%esi
08655ba0 +0x6f6:  lea    -0x50(%ebp),%eax
08655ba3 +0x6f9:  mov    %eax,(%esp)
08655ba6 +0x6fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08655bab +0x701:  mov    %esi,%eax
08655bad +0x703:  mov    %ebx,%edx
08655baf +0x705:  mov    %eax,(%esp)
08655bb2 +0x708:  call   08ae3750 <_Unwind_Resume>
08655bb7 +0x70d:  lea    -0x50(%ebp),%eax
08655bba +0x710:  mov    %eax,(%esp)
08655bbd +0x713:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08655bc2 +0x718:  add    $0xcc,%esp
08655bc8 +0x71e:  pop    %ebx
08655bc9 +0x71f:  pop    %esi
08655bca +0x720:  pop    %edi
08655bcb +0x721:  pop    %ebp
08655bcc +0x722:  ret
08655bcd +0x723:  nop
```

## 反编译 C

```c
// CUser::UpdateLogout @ 0x86554aa

/* CUser::UpdateLogout(bool) */

void __thiscall CUser::UpdateLogout(CUser *this,bool param_1)

{
  undefined4 uVar1;
  char cVar2;
  SIG_UPDATE_LOGOUT SVar3;
  uchar uVar4;
  undefined2 uVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  int iVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  CEnvironment *pCVar11;
  CHades *this_00;
  void *__src;
  int iVar12;
  int iVar13;
  char *pcVar14;
  CDataManager *this_01;
  CEventScriptMng *this_02;
  map *pmVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  bool bVar19;
  byte bVar20;
  char local_a1;
  char local_a0 [64];
  PacketGuard local_60 [12];
  CStreamGuard local_54 [8];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  SIG_UPDATE_LOGOUT *local_2c;
  int local_28;
  uint local_24;
  uchar local_1e;
  uchar local_1d;
  
  bVar20 = 0;
  UpdateCharacView(this);
  pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x2260);
  CStreamGuard::CStreamGuard(local_54,pSVar6,true);
  pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_54);
                    /* try { // try from 08655514 to 08655b19 has its CatchHandler @ 08655b9c */
  CStreamGuard::operator<<(pCVar7,0x2c);
  iVar8 = GetUID(this);
  pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_54);
  CStreamGuard::operator<<(pCVar7,iVar8);
  pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_54);
  local_2c = CStreamGuard::GetInBuffer<SIG_UPDATE_LOGOUT>(pCVar7);
  memset(local_2c,0,0x8b);
  *(undefined4 *)local_2c = *(undefined4 *)(this + 0x704ac);
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
  if (cVar2 == '\0') {
    pCVar11 = (CEnvironment *)G_CEnvironment();
    uVar10 = CEnvironment::get_gc_no(pCVar11);
    *(undefined4 *)(local_2c + 8) = uVar10;
  }
  else {
    uVar10 = GetServerGroup(this);
    pCVar11 = (CEnvironment *)G_CEnvironment();
    uVar10 = CEnvironment::get_gc_no_hardcode(pCVar11,uVar10);
    *(undefined4 *)(local_2c + 8) = uVar10;
  }
  iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar8 != 0) {
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    *(undefined4 *)(local_2c + 4) = uVar10;
    uVar5 = CUserCharacInfo::GetFatigue((CUserCharacInfo *)this);
    *(undefined2 *)(local_2c + 0xc) = uVar5;
  }
  this_00 = (CHades *)getHades(this);
  XNuclear::CHades::Send_Logout(this_00);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c[0x12] = (SIG_UPDATE_LOGOUT)0x0;
  iVar8 = get_state(this);
  if (1 < iVar8) {
    local_2c[0x12] = (SIG_UPDATE_LOGOUT)0x1;
    *(int *)(local_2c + 0x13) = local_28 - *(int *)(this + 0x71ba4);
    *(undefined4 *)(local_2c + 0x17) = *(undefined4 *)(this + 0x8d10c);
    *(undefined4 *)(local_2c + 0x1b) = *(undefined4 *)(this + 0x703a4);
    *(undefined2 *)(local_2c + 0x1f) = *(undefined2 *)(this + 0x79642);
    *(CUser *)(local_2c + 0x21) = this[0x8d0df];
    SetUserManagerToolIP(this,local_2c);
    pcVar17 = &local_a1;
    uVar18 = 0x41;
    bVar19 = ((uint)pcVar17 & 1) != 0;
    if (bVar19) {
      local_a1 = '\0';
      pcVar17 = local_a0;
      uVar18 = 0x40;
    }
    if (((uint)pcVar17 & 2) != 0) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17 = pcVar17 + 2;
      uVar18 = uVar18 - 2;
    }
    for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17[2] = '\0';
      pcVar17[3] = '\0';
      pcVar17 = pcVar17 + ((uint)bVar20 * -2 + 1) * 4;
    }
    if ((uVar18 & 2) != 0) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17 = pcVar17 + 2;
    }
    if (!bVar19) {
      *pcVar17 = '\0';
    }
    __src = (void *)CNetwork<4096,450000>::get_mac_addr((CNetwork<4096,450000> *)(this + 0xe0));
    memcpy(&local_a1,__src,0x41);
    strncpy((char *)(local_2c + 0x47),&local_a1,0x41);
    SVar3 = (SIG_UPDATE_LOGOUT)IsEnableSaveMemberBonusFatigue(this);
    local_2c[0x88] = SVar3;
    DisableSaveMemberBonusFatigue(this);
    uVar5 = getAccountMemberBonusFatigue(this);
    *(undefined2 *)(local_2c + 0x89) = uVar5;
    resetAccountMemberBonusFatigue(this);
  }
  uVar10 = *(undefined4 *)(this + 0x71ba4);
  uVar1 = *(undefined4 *)(local_2c + 0x13);
  uVar18 = get_unique_id(this);
  cMyTrace::cMyTrace(local_4c,"void CUser::UpdateLogout(bool)",0x22e0,0);
  cMyTrace::operator()
            (local_4c,"trace mid:%d playTime:%d login_time:%d now_time:%d",uVar18 & 0xffff,uVar1,
             uVar10,local_28);
  *(int *)(this + 0x71ba4) = local_28;
  uVar10 = *(undefined4 *)(this + 0x71ba4);
  uVar1 = *(undefined4 *)(local_2c + 0x13);
  uVar18 = get_unique_id(this);
  cMyTrace::cMyTrace(local_3c,"void CUser::UpdateLogout(bool)",0x22e2,0);
  cMyTrace::operator()
            (local_3c,"trace mid:%d playTime:%d login_time:%d now_time:%d",uVar18 & 0xffff,uVar1,
             uVar10,local_28);
  if (*(int *)(this + 0x704ac) == 0) {
    pGVar9 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
    if (cVar2 != '\0') goto LAB_08655899;
    pGVar9 = (GameWorld *)G_GameWorld();
    iVar8 = GameWorld::GetChannelType(pGVar9);
    if (iVar8 == 7) goto LAB_08655899;
    bVar19 = false;
  }
  else {
LAB_08655899:
    bVar19 = true;
  }
  if (bVar19) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_54);
  }
  else {
    StreamPool::Free(GlobalData::s_stream_pool,local_54);
  }
  pcVar17 = (char *)CNetwork<4096,450000>::get_str_ip((CNetwork<4096,450000> *)(this + 0xe0));
  if (*pcVar17 != '\0') {
    iVar8 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    if (iVar8 != 0) {
      bVar19 = true;
      goto LAB_0865590d;
    }
  }
  bVar19 = false;
LAB_0865590d:
  if (bVar19) {
    iVar8 = CUserCharacInfo::GetCharacStartPlayTick((CUserCharacInfo *)this);
    if (0 < iVar8) {
      uVar4 = GetLogInOutState(this);
      iVar12 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar13 = CUserCharacInfo::GetCharacStartPlayTick((CUserCharacInfo *)this);
      iVar8 = G_CEnvironment();
      iVar8 = *(int *)(iVar8 + 0x1b0);
      uVar18 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(this + 0xe0));
      pcVar17 = (char *)CNetwork<4096,450000>::get_str_ip((CNetwork<4096,450000> *)(this + 0xe0));
      pcVar14 = (char *)getWebAddress(this);
      cUserHistoryLog::Logout
                ((cUserHistoryLog *)(this + 0x79700),pcVar14,pcVar17,uVar18 & 0xffff,iVar8,
                 iVar12 - iVar13,uVar4);
    }
  }
  DBUpdateDBLogItem(this);
  ResetDBLogItem(this);
  local_24 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  local_1e = CUserCharacInfo::GetCurVillageAttackCount((CUserCharacInfo *)this);
  local_1d = CUserCharacInfo::GetCurRevengeDungeonCount((CUserCharacInfo *)this);
  cVar2 = CUserCharacInfo::IsVillageAttackDBUpdate((CUserCharacInfo *)this);
  if (cVar2 != '\0') {
    DB_UpdateRevengeData::makeRequest(local_24,local_1e,local_1d);
  }
  cVar2 = is_update_ontime_last_recv_idx(this);
  if (cVar2 != '\0') {
    iVar8 = get_ontime_last_recv_idx(this);
    uVar18 = get_acc_id(this);
    iVar12 = GetUID(this);
    DB_UpdateOntimeLastRecvIdx::makeRequest(iVar12,uVar18,iVar8);
    reset_update_ontime_last_recv_idx(this);
  }
  this_01 = (CDataManager *)G_CDataManager();
  this_02 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_01);
  cVar2 = EventClassify::CEventScriptMng::is_eventing(this_02,0x56);
  if (cVar2 != '\0') {
    iVar8 = get_server_fatigue_day_size(this);
    if (iVar8 != 0) {
      pmVar15 = (map *)get_server_fatigue_day_data(this);
      uVar18 = get_acc_id(this);
      DB_UpdateFatigueAttendance::makeRequest(uVar18,pmVar15);
      reset_server_fatigue_data(this);
    }
  }
  reset_ingame_event_history(this);
  if (!param_1) {
    PacketGuard::PacketGuard(local_60);
                    /* try { // try from 08655b30 to 08655b6c has its CatchHandler @ 08655b6f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    Send(this,local_60);
                    /* try { // try from 08655b8a to 08655b99 has its CatchHandler @ 08655b9c */
    PacketGuard::~PacketGuard(local_60);
  }
  CerashopAddRestrict::Manager::ClearBuyRestrictItem(this);
  CStreamGuard::~CStreamGuard(local_54);
  return;
}
```
