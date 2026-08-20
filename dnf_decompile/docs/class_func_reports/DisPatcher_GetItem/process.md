# process

`_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetItem` | `0x081c35c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c35c0  _ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c35c0, 0x081c3ce7]
081c35c0 +0x000:  push   %ebp
081c35c1 +0x001:  mov    %esp,%ebp
081c35c3 +0x003:  push   %esi
081c35c4 +0x004:  push   %ebx
081c35c5 +0x005:  sub    $0x50,%esp
081c35c8 +0x008:  mov    0x14(%ebp),%eax
081c35cb +0x00b:  mov    %eax,-0x24(%ebp)
081c35ce +0x00e:  mov    0x10(%ebp),%eax
081c35d1 +0x011:  mov    %eax,0x8(%esp)
081c35d5 +0x015:  mov    0xc(%ebp),%eax
081c35d8 +0x018:  mov    %eax,0x4(%esp)
081c35dc +0x01c:  mov    0x8(%ebp),%eax
081c35df +0x01f:  mov    %eax,(%esp)
081c35e2 +0x022:  call   081c35ac <_ZN18DisPatcher_GetItem11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_GetItem::check_error(CUser*, MSG_BASE&)
081c35e7 +0x027:  mov    %eax,%edx
081c35e9 +0x029:  mov    -0x24(%ebp),%eax
081c35ec +0x02c:  mov    %edx,0x4(%eax)
081c35ef +0x02f:  mov    -0x24(%ebp),%eax
081c35f2 +0x032:  mov    0x4(%eax),%eax
081c35f5 +0x035:  test   %eax,%eax
081c35f7 +0x037:  jle    081c3603 <+0x43>
081c35f9 +0x039:  mov    $0x0,%eax
081c35fe +0x03e:  jmp    081c3ce1 <+0x721>
081c3603 +0x043:  mov    -0x24(%ebp),%eax
081c3606 +0x046:  mov    0x4(%eax),%eax
081c3609 +0x049:  test   %eax,%eax
081c360b +0x04b:  jns    081c363f <+0x7f>
081c360d +0x04d:  mov    0xc(%ebp),%eax
081c3610 +0x050:  mov    %eax,(%esp)
081c3613 +0x053:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c3618 +0x058:  mov    -0x24(%ebp),%edx
081c361b +0x05b:  mov    0x4(%edx),%edx
081c361e +0x05e:  mov    %eax,0xc(%esp)
081c3622 +0x062:  mov    %edx,0x8(%esp)
081c3626 +0x066:  movl   $&_ZZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c362e +0x06e:  movl   $0xe5c,(%esp)
081c3635 +0x075:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c363a +0x07a:  jmp    081c3ce1 <+0x721>
081c363f +0x07f:  mov    0x10(%ebp),%eax
081c3642 +0x082:  mov    %eax,-0x20(%ebp)
081c3645 +0x085:  mov    -0x20(%ebp),%eax
081c3648 +0x088:  movzbl 0x17(%eax),%eax
081c364c +0x08c:  xor    $0x1,%eax
081c364f +0x08f:  test   %al,%al
081c3651 +0x091:  je     081c368d <+0xcd>
081c3653 +0x093:  mov    0xc(%ebp),%eax
081c3656 +0x096:  mov    %eax,(%esp)
081c3659 +0x099:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c365e +0x09e:  movl   $0x0,0x14(%esp)
081c3666 +0x0a6:  movl   $0x0,0x10(%esp)
081c366e +0x0ae:  movl   $0x1,0xc(%esp)
081c3676 +0x0b6:  movl   $0x3bb,0x8(%esp)
081c367e +0x0be:  mov    0xc(%ebp),%edx
081c3681 +0x0c1:  mov    %edx,0x4(%esp)
081c3685 +0x0c5:  mov    %eax,(%esp)
081c3688 +0x0c8:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c368d +0x0cd:  mov    -0x20(%ebp),%eax
081c3690 +0x0d0:  movzwl 0x15(%eax),%ecx
081c3694 +0x0d4:  movzwl %cx,%eax
081c3697 +0x0d7:  imul   $0x2493,%eax,%eax
081c369d +0x0dd:  shr    $0x10,%eax
081c36a0 +0x0e0:  mov    %ecx,%edx
081c36a2 +0x0e2:  sub    %ax,%dx
081c36a5 +0x0e5:  shr    %dx
081c36a8 +0x0e8:  lea    (%edx,%eax,1),%eax
081c36ab +0x0eb:  mov    %eax,%edx
081c36ad +0x0ed:  shr    $0x2,%dx
081c36b1 +0x0f1:  mov    %edx,%eax
081c36b3 +0x0f3:  shl    $0x3,%eax
081c36b6 +0x0f6:  sub    %dx,%ax
081c36b9 +0x0f9:  mov    %ecx,%edx
081c36bb +0x0fb:  sub    %ax,%dx
081c36be +0x0fe:  test   %dx,%dx
081c36c1 +0x101:  je     081c3709 <+0x149>
081c36c3 +0x103:  mov    -0x20(%ebp),%eax
081c36c6 +0x106:  movzwl 0x13(%eax),%eax
081c36ca +0x10a:  movzwl %ax,%esi
081c36cd +0x10d:  mov    -0x20(%ebp),%eax
081c36d0 +0x110:  movzwl 0x11(%eax),%eax
081c36d4 +0x114:  movzwl %ax,%ebx
081c36d7 +0x117:  mov    0xc(%ebp),%eax
081c36da +0x11a:  mov    %eax,(%esp)
081c36dd +0x11d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c36e2 +0x122:  mov    %esi,0x14(%esp)
081c36e6 +0x126:  mov    %ebx,0x10(%esp)
081c36ea +0x12a:  movl   $0x1,0xc(%esp)
081c36f2 +0x132:  movl   $0x12f,0x8(%esp)
081c36fa +0x13a:  mov    0xc(%ebp),%edx
081c36fd +0x13d:  mov    %edx,0x4(%esp)
081c3701 +0x141:  mov    %eax,(%esp)
081c3704 +0x144:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c3709 +0x149:  mov    -0x20(%ebp),%eax
081c370c +0x14c:  movzwl 0x1c(%eax),%eax
081c3710 +0x150:  movzwl %ax,%edx
081c3713 +0x153:  mov    -0x20(%ebp),%eax
081c3716 +0x156:  movzwl 0x1a(%eax),%eax
081c371a +0x15a:  movzwl %ax,%eax
081c371d +0x15d:  mov    0xc(%ebp),%ecx
081c3720 +0x160:  add    $0x79700,%ecx
081c3726 +0x166:  mov    %edx,0x8(%esp)
081c372a +0x16a:  mov    %eax,0x4(%esp)
081c372e +0x16e:  mov    %ecx,(%esp)
081c3731 +0x171:  call   0822f084 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x472e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x472e
081c3736 +0x176:  mov    0xc(%ebp),%eax
081c3739 +0x179:  mov    %eax,(%esp)
081c373c +0x17c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3741 +0x181:  cmp    $0x5,%eax
081c3744 +0x184:  sete   %al
081c3747 +0x187:  test   %al,%al
081c3749 +0x189:  je     081c3b40 <+0x580>
081c374f +0x18f:  mov    0xc(%ebp),%eax
081c3752 +0x192:  mov    %eax,(%esp)
081c3755 +0x195:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c375a +0x19a:  mov    %eax,-0x1c(%ebp)
081c375d +0x19d:  cmpl   $0x0,-0x1c(%ebp)
081c3761 +0x1a1:  je     081c3cd2 <+0x712>
081c3767 +0x1a7:  mov    -0x20(%ebp),%eax
081c376a +0x1aa:  movzwl 0x1c(%eax),%eax
081c376e +0x1ae:  movzwl %ax,%esi
081c3771 +0x1b1:  mov    -0x20(%ebp),%eax
081c3774 +0x1b4:  movzwl 0x1a(%eax),%eax
081c3778 +0x1b8:  movzwl %ax,%ebx
081c377b +0x1bb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081c3782 +0x1c2:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
081c3787 +0x1c7:  movl   $0x5dc,0x10(%esp)
081c378f +0x1cf:  mov    %esi,0xc(%esp)
081c3793 +0x1d3:  mov    %ebx,0x8(%esp)
081c3797 +0x1d7:  mov    %eax,0x4(%esp)
081c379b +0x1db:  mov    0xc(%ebp),%eax
081c379e +0x1de:  mov    %eax,(%esp)
081c37a1 +0x1e1:  call   082302ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5956>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5956
081c37a6 +0x1e6:  test   %eax,%eax
081c37a8 +0x1e8:  setne  %al
081c37ab +0x1eb:  test   %al,%al
081c37ad +0x1ed:  je     081c3809 <+0x249>
081c37af +0x1ef:  mov    0xc(%ebp),%eax
081c37b2 +0x1f2:  movzwl 0x8e444(%eax),%eax
081c37b9 +0x1f9:  cmp    $0x1f4,%ax
081c37bd +0x1fd:  jg     081c37cf <+0x20f>
081c37bf +0x1ff:  mov    0xc(%ebp),%eax
081c37c2 +0x202:  movzwl 0x8e446(%eax),%eax
081c37c9 +0x209:  cmp    $0x1f4,%ax
081c37cd +0x20d:  jle    081c3809 <+0x249>
081c37cf +0x20f:  mov    0xc(%ebp),%eax
081c37d2 +0x212:  mov    %eax,(%esp)
081c37d5 +0x215:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c37da +0x21a:  movl   $0x0,0x14(%esp)
081c37e2 +0x222:  movl   $0x0,0x10(%esp)
081c37ea +0x22a:  movl   $0x1,0xc(%esp)
081c37f2 +0x232:  movl   $0x130,0x8(%esp)
081c37fa +0x23a:  mov    0xc(%ebp),%edx
081c37fd +0x23d:  mov    %edx,0x4(%esp)
081c3801 +0x241:  mov    %eax,(%esp)
081c3804 +0x244:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c3809 +0x249:  mov    -0x20(%ebp),%eax
081c380c +0x24c:  movzwl 0xd(%eax),%eax
081c3810 +0x250:  movzwl %ax,%ecx
081c3813 +0x253:  mov    -0x20(%ebp),%eax
081c3816 +0x256:  movzwl 0x1c(%eax),%eax
081c381a +0x25a:  movzwl %ax,%edx
081c381d +0x25d:  mov    -0x20(%ebp),%eax
081c3820 +0x260:  movzwl 0x1a(%eax),%eax
081c3824 +0x264:  movzwl %ax,%eax
081c3827 +0x267:  mov    %ecx,0xc(%esp)
081c382b +0x26b:  mov    %edx,0x8(%esp)
081c382f +0x26f:  mov    %eax,0x4(%esp)
081c3833 +0x273:  mov    0xc(%ebp),%eax
081c3836 +0x276:  mov    %eax,(%esp)
081c3839 +0x279:  call   0823066a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5d14>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5d14
081c383e +0x27e:  cmp    $0x2,%eax
081c3841 +0x281:  sete   %al
081c3844 +0x284:  test   %al,%al
081c3846 +0x286:  je     081c3882 <+0x2c2>
081c3848 +0x288:  mov    0xc(%ebp),%eax
081c384b +0x28b:  mov    %eax,(%esp)
081c384e +0x28e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c3853 +0x293:  movl   $0x0,0x14(%esp)
081c385b +0x29b:  movl   $0x0,0x10(%esp)
081c3863 +0x2a3:  movl   $0x1,0xc(%esp)
081c386b +0x2ab:  movl   $0x131,0x8(%esp)
081c3873 +0x2b3:  mov    0xc(%ebp),%edx
081c3876 +0x2b6:  mov    %edx,0x4(%esp)
081c387a +0x2ba:  mov    %eax,(%esp)
081c387d +0x2bd:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c3882 +0x2c2:  mov    -0x1c(%ebp),%eax
081c3885 +0x2c5:  mov    %eax,(%esp)
081c3888 +0x2c8:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
081c388d +0x2cd:  test   %al,%al
081c388f +0x2cf:  je     081c38a5 <+0x2e5>
081c3891 +0x2d1:  mov    -0x24(%ebp),%eax
081c3894 +0x2d4:  movl   $0xd8,0x4(%eax)
081c389b +0x2db:  mov    $0x0,%eax
081c38a0 +0x2e0:  jmp    081c3ce1 <+0x721>
081c38a5 +0x2e5:  movl   $0x0,-0x28(%ebp)
081c38ac +0x2ec:  movb   $0x0,-0x29(%ebp)
081c38b0 +0x2f0:  movb   $0x0,-0x2a(%ebp)
081c38b4 +0x2f4:  mov    -0x20(%ebp),%eax
081c38b7 +0x2f7:  movzbl 0x10(%eax),%eax
081c38bb +0x2fb:  movsbl %al,%ecx
081c38be +0x2fe:  mov    -0x20(%ebp),%eax
081c38c1 +0x301:  movzbl 0xf(%eax),%eax
081c38c5 +0x305:  cmp    $0x1,%al
081c38c7 +0x307:  sete   %al
081c38ca +0x30a:  movzbl %al,%edx
081c38cd +0x30d:  mov    -0x20(%ebp),%eax
081c38d0 +0x310:  movzwl 0xd(%eax),%eax
081c38d4 +0x314:  movzwl %ax,%eax
081c38d7 +0x317:  lea    -0x2a(%ebp),%ebx
081c38da +0x31a:  mov    %ebx,0x1c(%esp)
081c38de +0x31e:  lea    -0x29(%ebp),%ebx
081c38e1 +0x321:  mov    %ebx,0x18(%esp)
081c38e5 +0x325:  lea    -0x28(%ebp),%ebx
081c38e8 +0x328:  mov    %ebx,0x14(%esp)
081c38ec +0x32c:  mov    %ecx,0x10(%esp)
081c38f0 +0x330:  mov    %edx,0xc(%esp)
081c38f4 +0x334:  mov    %eax,0x8(%esp)
081c38f8 +0x338:  mov    0xc(%ebp),%eax
081c38fb +0x33b:  mov    %eax,0x4(%esp)
081c38ff +0x33f:  mov    -0x1c(%ebp),%eax
081c3902 +0x342:  mov    %eax,(%esp)
081c3905 +0x345:  call   085a3b98 <_ZN6CParty8get_itemEP5CUseribcRiRhRb>  ; CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)
081c390a +0x34a:  test   %al,%al
081c390c +0x34c:  je     081c3cd2 <+0x712>
081c3912 +0x352:  mov    -0x1c(%ebp),%eax
081c3915 +0x355:  mov    %eax,(%esp)
081c3918 +0x358:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
081c391d +0x35d:  test   %al,%al
081c391f +0x35f:  jne    081c3931 <+0x371>
081c3921 +0x361:  mov    -0x1c(%ebp),%eax
081c3924 +0x364:  mov    %eax,(%esp)
081c3927 +0x367:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
081c392c +0x36c:  cmp    $0x1,%eax
081c392f +0x36f:  jne    081c3938 <+0x378>
081c3931 +0x371:  mov    $0x1,%eax
081c3936 +0x376:  jmp    081c393d <+0x37d>
081c3938 +0x378:  mov    $0x0,%eax
081c393d +0x37d:  test   %al,%al
081c393f +0x37f:  je     081c39b1 <+0x3f1>
081c3941 +0x381:  mov    -0x20(%ebp),%eax
081c3944 +0x384:  movzwl 0x13(%eax),%eax
081c3948 +0x388:  movzwl %ax,%esi
081c394b +0x38b:  mov    -0x20(%ebp),%eax
081c394e +0x38e:  movzwl 0x11(%eax),%eax
081c3952 +0x392:  movzwl %ax,%ebx
081c3955 +0x395:  mov    0xc(%ebp),%eax
081c3958 +0x398:  mov    %eax,(%esp)
081c395b +0x39b:  call   0822fcb8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5362>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5362
081c3960 +0x3a0:  mov    %esi,0x8(%esp)
081c3964 +0x3a4:  mov    %ebx,0x4(%esp)
081c3968 +0x3a8:  mov    %eax,(%esp)
081c396b +0x3ab:  call   0889209d <_Z18checkGetItemPacketiii>  ; checkGetItemPacket(int, int, int)
081c3970 +0x3b0:  xor    $0x1,%eax
081c3973 +0x3b3:  test   %al,%al
081c3975 +0x3b5:  je     081c39b1 <+0x3f1>
081c3977 +0x3b7:  mov    0xc(%ebp),%eax
081c397a +0x3ba:  mov    %eax,(%esp)
081c397d +0x3bd:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c3982 +0x3c2:  movl   $0x0,0x14(%esp)
081c398a +0x3ca:  movl   $0x0,0x10(%esp)
081c3992 +0x3d2:  movl   $0x1,0xc(%esp)
081c399a +0x3da:  movl   $0x12e,0x8(%esp)
081c39a2 +0x3e2:  mov    0xc(%ebp),%edx
081c39a5 +0x3e5:  mov    %edx,0x4(%esp)
081c39a9 +0x3e9:  mov    %eax,(%esp)
081c39ac +0x3ec:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c39b1 +0x3f1:  mov    -0x1c(%ebp),%eax
081c39b4 +0x3f4:  add    $0xb24,%eax
081c39b9 +0x3f9:  mov    %eax,(%esp)
081c39bc +0x3fc:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
081c39c1 +0x401:  mov    %eax,-0x18(%ebp)
081c39c4 +0x404:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c39c9 +0x409:  mov    -0x18(%ebp),%edx
081c39cc +0x40c:  mov    %edx,0x4(%esp)
081c39d0 +0x410:  mov    %eax,(%esp)
081c39d3 +0x413:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
081c39d8 +0x418:  mov    %eax,-0x14(%ebp)
081c39db +0x41b:  cmpl   $0x0,-0x14(%ebp)
081c39df +0x41f:  je     081c3af0 <+0x530>
081c39e5 +0x425:  mov    -0x28(%ebp),%eax
081c39e8 +0x428:  cmp    $0xffffffff,%eax
081c39eb +0x42b:  je     081c3af0 <+0x530>
081c39f1 +0x431:  mov    -0x14(%ebp),%eax
081c39f4 +0x434:  movzbl 0x85c(%eax),%eax
081c39fb +0x43b:  test   %al,%al
081c39fd +0x43d:  je     081c3b25 <+0x565>
081c3a03 +0x443:  mov    -0x20(%ebp),%eax
081c3a06 +0x446:  movzbl 0x10(%eax),%eax
081c3a0a +0x44a:  cmp    $0x2,%al
081c3a0c +0x44c:  je     081c3a28 <+0x468>
081c3a0e +0x44e:  mov    -0x20(%ebp),%eax
081c3a11 +0x451:  movzbl 0x10(%eax),%eax
081c3a15 +0x455:  cmp    $0x3,%al
081c3a17 +0x457:  je     081c3a28 <+0x468>
081c3a19 +0x459:  mov    -0x20(%ebp),%eax
081c3a1c +0x45c:  movzbl 0x10(%eax),%eax
081c3a20 +0x460:  cmp    $0x4,%al
081c3a22 +0x462:  jne    081c3b28 <+0x568>
081c3a28 +0x468:  movzbl -0x2a(%ebp),%eax
081c3a2c +0x46c:  xor    $0x1,%eax
081c3a2f +0x46f:  test   %al,%al
081c3a31 +0x471:  je     081c3b2b <+0x56b>
081c3a37 +0x477:  lea    -0x38(%ebp),%eax
081c3a3a +0x47a:  mov    %eax,(%esp)
081c3a3d +0x47d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c3a42 +0x482:  movl   $0x56,0x8(%esp)
081c3a4a +0x48a:  movl   $0x0,0x4(%esp)
081c3a52 +0x492:  lea    -0x38(%ebp),%eax
081c3a55 +0x495:  mov    %eax,(%esp)
081c3a58 +0x498:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c3a5d +0x49d:  movl   $0x5,0x4(%esp)
081c3a65 +0x4a5:  lea    -0x38(%ebp),%eax
081c3a68 +0x4a8:  mov    %eax,(%esp)
081c3a6b +0x4ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c3a70 +0x4b0:  mov    0xc(%ebp),%eax
081c3a73 +0x4b3:  mov    %eax,(%esp)
081c3a76 +0x4b6:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081c3a7b +0x4bb:  movzwl %ax,%eax
081c3a7e +0x4be:  mov    %eax,0x4(%esp)
081c3a82 +0x4c2:  lea    -0x38(%ebp),%eax
081c3a85 +0x4c5:  mov    %eax,(%esp)
081c3a88 +0x4c8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c3a8d +0x4cd:  mov    -0x28(%ebp),%eax
081c3a90 +0x4d0:  mov    %eax,0x4(%esp)
081c3a94 +0x4d4:  lea    -0x38(%ebp),%eax
081c3a97 +0x4d7:  mov    %eax,(%esp)
081c3a9a +0x4da:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c3a9f +0x4df:  movl   $0x1,0x4(%esp)
081c3aa7 +0x4e7:  lea    -0x38(%ebp),%eax
081c3aaa +0x4ea:  mov    %eax,(%esp)
081c3aad +0x4ed:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c3ab2 +0x4f2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c3ab7 +0x4f7:  lea    -0x38(%ebp),%edx
081c3aba +0x4fa:  mov    %edx,0x4(%esp)
081c3abe +0x4fe:  mov    %eax,(%esp)
081c3ac1 +0x501:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081c3ac6 +0x506:  jmp    081c3ae3 <+0x523>
081c3ac8 +0x508:  mov    %edx,%ebx
081c3aca +0x50a:  mov    %eax,%esi
081c3acc +0x50c:  lea    -0x38(%ebp),%eax
081c3acf +0x50f:  mov    %eax,(%esp)
081c3ad2 +0x512:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c3ad7 +0x517:  mov    %esi,%eax
081c3ad9 +0x519:  mov    %ebx,%edx
081c3adb +0x51b:  mov    %eax,(%esp)
081c3ade +0x51e:  call   08ae3750 <_Unwind_Resume>
081c3ae3 +0x523:  lea    -0x38(%ebp),%eax
081c3ae6 +0x526:  mov    %eax,(%esp)
081c3ae9 +0x529:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c3aee +0x52e:  jmp    081c3b2c <+0x56c>
081c3af0 +0x530:  mov    -0x18(%ebp),%eax
081c3af3 +0x533:  mov    %eax,0x14(%esp)
081c3af7 +0x537:  movl   $"DisPatcher_GetItem::dispatch_sig G_CDataManager()->find_dungeon(%d) fail",0x10(%esp)
081c3aff +0x53f:  movl   $0xf14,0xc(%esp)
081c3b07 +0x547:  movl   $&_ZZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081c3b0f +0x54f:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c3b17 +0x557:  movl   $0x1,(%esp)
081c3b1e +0x55e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081c3b23 +0x563:  jmp    081c3b2c <+0x56c>
081c3b25 +0x565:  nop
081c3b26 +0x566:  jmp    081c3b2c <+0x56c>
081c3b28 +0x568:  nop
081c3b29 +0x569:  jmp    081c3b2c <+0x56c>
081c3b2b +0x56b:  nop
081c3b2c +0x56c:  mov    -0x24(%ebp),%eax
081c3b2f +0x56f:  movl   $0x0,0x4(%eax)
081c3b36 +0x576:  mov    $0x0,%eax
081c3b3b +0x57b:  jmp    081c3ce1 <+0x721>
081c3b40 +0x580:  mov    0xc(%ebp),%eax
081c3b43 +0x583:  mov    %eax,(%esp)
081c3b46 +0x586:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3b4b +0x58b:  cmp    $0xa,%eax
081c3b4e +0x58e:  sete   %al
081c3b51 +0x591:  test   %al,%al
081c3b53 +0x593:  je     081c3bca <+0x60a>
081c3b55 +0x595:  mov    0xc(%ebp),%eax
081c3b58 +0x598:  mov    %eax,(%esp)
081c3b5b +0x59b:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081c3b60 +0x5a0:  mov    %eax,-0x10(%ebp)
081c3b63 +0x5a3:  cmpl   $0x0,-0x10(%ebp)
081c3b67 +0x5a7:  je     081c3cd2 <+0x712>
081c3b6d +0x5ad:  mov    -0x20(%ebp),%eax
081c3b70 +0x5b0:  movzbl 0x10(%eax),%eax
081c3b74 +0x5b4:  movsbl %al,%ecx
081c3b77 +0x5b7:  mov    -0x20(%ebp),%eax
081c3b7a +0x5ba:  movzbl 0xf(%eax),%eax
081c3b7e +0x5be:  cmp    $0x1,%al
081c3b80 +0x5c0:  sete   %al
081c3b83 +0x5c3:  movzbl %al,%edx
081c3b86 +0x5c6:  mov    -0x20(%ebp),%eax
081c3b89 +0x5c9:  movzwl 0xd(%eax),%eax
081c3b8d +0x5cd:  movzwl %ax,%eax
081c3b90 +0x5d0:  mov    %ecx,0x10(%esp)
081c3b94 +0x5d4:  mov    %edx,0xc(%esp)
081c3b98 +0x5d8:  mov    %eax,0x8(%esp)
081c3b9c +0x5dc:  mov    0xc(%ebp),%eax
081c3b9f +0x5df:  mov    %eax,0x4(%esp)
081c3ba3 +0x5e3:  mov    -0x10(%ebp),%eax
081c3ba6 +0x5e6:  mov    %eax,(%esp)
081c3ba9 +0x5e9:  call   08464036 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc>  ; WongWork::CDeathTower::handlePickupItem(CUser*, int, bool, char)
081c3bae +0x5ee:  test   %al,%al
081c3bb0 +0x5f0:  je     081c3cd2 <+0x712>
081c3bb6 +0x5f6:  mov    -0x24(%ebp),%eax
081c3bb9 +0x5f9:  movl   $0x0,0x4(%eax)
081c3bc0 +0x600:  mov    $0x0,%eax
081c3bc5 +0x605:  jmp    081c3ce1 <+0x721>
081c3bca +0x60a:  mov    0xc(%ebp),%eax
081c3bcd +0x60d:  mov    %eax,(%esp)
081c3bd0 +0x610:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3bd5 +0x615:  cmp    $0xc,%eax
081c3bd8 +0x618:  sete   %al
081c3bdb +0x61b:  test   %al,%al
081c3bdd +0x61d:  je     081c3c1e <+0x65e>
081c3bdf +0x61f:  mov    -0x20(%ebp),%eax
081c3be2 +0x622:  movzbl 0x10(%eax),%eax
081c3be6 +0x626:  movsbl %al,%ecx
081c3be9 +0x629:  mov    -0x20(%ebp),%eax
081c3bec +0x62c:  movzbl 0xf(%eax),%eax
081c3bf0 +0x630:  cmp    $0x1,%al
081c3bf2 +0x632:  sete   %al
081c3bf5 +0x635:  movzbl %al,%edx
081c3bf8 +0x638:  mov    -0x20(%ebp),%eax
081c3bfb +0x63b:  movzwl 0xd(%eax),%eax
081c3bff +0x63f:  movzwl %ax,%eax
081c3c02 +0x642:  mov    %ecx,0xc(%esp)
081c3c06 +0x646:  mov    %edx,0x8(%esp)
081c3c0a +0x64a:  mov    %eax,0x4(%esp)
081c3c0e +0x64e:  mov    0xc(%ebp),%eax
081c3c11 +0x651:  mov    %eax,(%esp)
081c3c14 +0x654:  call   08146994 <_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc>  ; Global::CBossTowerFunc::GetItem(CUser*, int, bool, char)
081c3c19 +0x659:  jmp    081c3cd2 <+0x712>
081c3c1e +0x65e:  mov    0xc(%ebp),%eax
081c3c21 +0x661:  mov    %eax,(%esp)
081c3c24 +0x664:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3c29 +0x669:  cmp    $0x8,%eax
081c3c2c +0x66c:  sete   %al
081c3c2f +0x66f:  test   %al,%al
081c3c31 +0x671:  je     081c3cc1 <+0x701>
081c3c37 +0x677:  mov    0xc(%ebp),%eax
081c3c3a +0x67a:  mov    %eax,(%esp)
081c3c3d +0x67d:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
081c3c42 +0x682:  movswl %ax,%ebx
081c3c45 +0x685:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c3c4a +0x68a:  mov    %ebx,0x4(%esp)
081c3c4e +0x68e:  mov    %eax,(%esp)
081c3c51 +0x691:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
081c3c56 +0x696:  mov    %eax,-0xc(%ebp)
081c3c59 +0x699:  cmpl   $0x0,-0xc(%ebp)
081c3c5d +0x69d:  jne    081c3c8c <+0x6cc>
081c3c5f +0x69f:  mov    0xc(%ebp),%eax
081c3c62 +0x6a2:  mov    %eax,(%esp)
081c3c65 +0x6a5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c3c6a +0x6aa:  mov    %eax,0xc(%esp)
081c3c6e +0x6ae:  movl   $0x0,0x8(%esp)
081c3c76 +0x6b6:  movl   $&_ZZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c3c7e +0x6be:  movl   $0xf32,(%esp)
081c3c85 +0x6c5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3c8a +0x6ca:  jmp    081c3ce1 <+0x721>
081c3c8c +0x6cc:  mov    -0x20(%ebp),%eax
081c3c8f +0x6cf:  movzwl 0xd(%eax),%eax
081c3c93 +0x6d3:  movzwl %ax,%eax
081c3c96 +0x6d6:  mov    %eax,0x8(%esp)
081c3c9a +0x6da:  mov    0xc(%ebp),%eax
081c3c9d +0x6dd:  mov    %eax,0x4(%esp)
081c3ca1 +0x6e1:  mov    -0xc(%ebp),%eax
081c3ca4 +0x6e4:  mov    %eax,(%esp)
081c3ca7 +0x6e7:  call   086bea2e <_ZN7WarRoom13HandleGetItemEP5CUseri>  ; WarRoom::HandleGetItem(CUser*, int)
081c3cac +0x6ec:  test   %al,%al
081c3cae +0x6ee:  je     081c3cd2 <+0x712>
081c3cb0 +0x6f0:  mov    -0x24(%ebp),%eax
081c3cb3 +0x6f3:  movl   $0x0,0x4(%eax)
081c3cba +0x6fa:  mov    $0x0,%eax
081c3cbf +0x6ff:  jmp    081c3ce1 <+0x721>
081c3cc1 +0x701:  mov    -0x24(%ebp),%eax
081c3cc4 +0x704:  movl   $0x13,0x4(%eax)
081c3ccb +0x70b:  mov    $0x0,%eax
081c3cd0 +0x710:  jmp    081c3ce1 <+0x721>
081c3cd2 +0x712:  mov    -0x24(%ebp),%eax
081c3cd5 +0x715:  movl   $0x7fffffff,0x4(%eax)
081c3cdc +0x71c:  mov    $0x0,%eax
081c3ce1 +0x721:  add    $0x50,%esp
081c3ce4 +0x724:  pop    %ebx
081c3ce5 +0x725:  pop    %esi
081c3ce6 +0x726:  pop    %ebp
081c3ce7 +0x727:  ret
```

## 反编译 C

```c
// DisPatcher_GetItem::process @ 0x81c35c0

/* DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_GetItem::process
          (DisPatcher_GetItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  CHackAnalyzer *pCVar9;
  int iVar10;
  GameWorld *this_00;
  PacketGuard local_3c [14];
  bool local_2e;
  uchar local_2d;
  int local_2c;
  ParamBase *local_28;
  MSG_BASE *local_24;
  CParty *local_20;
  undefined4 local_1c;
  int local_18;
  CDeathTower *local_14;
  WarRoom *local_10;
  
  local_28 = param_3;
  uVar7 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_28 + 4) = uVar7;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar8 = CUser::get_acc_id(param_1);
      uVar7 = LineFunc(0xe5c,
                       "virtual int DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_28 + 4),uVar8);
    }
    else {
      local_24 = param_2;
      if (param_2[0x17] != (MSG_BASE)0x1) {
        pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x3bb,1,0,0);
      }
      uVar1 = *(ushort *)(local_24 + 0x15);
      if ((ushort)(uVar1 + ((ushort)((uint)((ushort)(uVar1 - (short)((uint)uVar1 * 0x2493 >> 0x10))
                                           >> 1) + ((uint)uVar1 * 0x2493 >> 0x10)) >> 2) * -7) != 0)
      {
        uVar2 = *(undefined2 *)(local_24 + 0x13);
        uVar3 = *(undefined2 *)(local_24 + 0x11);
        pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x12f,1,uVar3,uVar2);
      }
      cUserHistoryLog::SetItemXYPos
                ((cUserHistoryLog *)(param_1 + 0x79700),*(ushort *)(local_24 + 0x1a),
                 *(ushort *)(local_24 + 0x1c));
      iVar10 = CUser::get_state(param_1);
      if (iVar10 == 5) {
        local_20 = (CParty *)CUser::GetParty(param_1);
        if (local_20 != (CParty *)0x0) {
          uVar1 = *(ushort *)(local_24 + 0x1c);
          uVar4 = *(ushort *)(local_24 + 0x1a);
          uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          iVar10 = CUser::GetItemTimeChecker(param_1,uVar8,uVar4,uVar1,0x5dc);
          if ((iVar10 != 0) &&
             ((500 < *(short *)(param_1 + 0x8e444) || (500 < *(short *)(param_1 + 0x8e446))))) {
            pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x130,1,0,0);
          }
          iVar10 = CUser::GetItemSerialChecker
                             (param_1,*(ushort *)(local_24 + 0x1a),*(ushort *)(local_24 + 0x1c),
                              (uint)*(ushort *)(local_24 + 0xd));
          if (iVar10 == 2) {
            pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x131,1,0,0);
          }
          cVar6 = CParty::IsRoutingState(local_20);
          if (cVar6 != '\0') {
            *(undefined4 *)(local_28 + 4) = 0xd8;
            return 0;
          }
          local_2c = 0;
          local_2d = '\0';
          local_2e = false;
          cVar6 = CParty::get_item(local_20,param_1,(uint)*(ushort *)(local_24 + 0xd),
                                   local_24[0xf] == (MSG_BASE)0x1,(char)local_24[0x10],&local_2c,
                                   &local_2d,&local_2e);
          if (cVar6 != '\0') {
            cVar6 = CParty::IsAutoCreated(local_20);
            if ((cVar6 == '\0') && (iVar10 = CParty::get_member_count(local_20), iVar10 != 1)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uVar1 = *(ushort *)(local_24 + 0x13);
              uVar4 = *(ushort *)(local_24 + 0x11);
              iVar10 = CUser::getBackupSeed(param_1);
              cVar6 = checkGetItemPacket(iVar10,(uint)uVar4,(uint)uVar1);
              if (cVar6 != '\x01') {
                pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x12e,1,0,0);
              }
            }
            local_1c = CBattle_Field::get_dungeon_index((CBattle_Field *)(local_20 + 0xb24));
            iVar10 = G_CDataManager();
            local_18 = CDataManager::find_dungeon(iVar10);
            if ((local_18 == 0) || (local_2c == -1)) {
              LogManager::logFormat
                        (1,"PacketDispatcher_Impl_1.cpp",
                         "virtual int DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)",
                         0xf14,
                         "DisPatcher_GetItem::dispatch_sig G_CDataManager()->find_dungeon(%d) fail",
                         local_1c);
            }
            else if (((*(char *)(local_18 + 0x85c) != '\0') &&
                     (((local_24[0x10] == (MSG_BASE)0x2 || (local_24[0x10] == (MSG_BASE)0x3)) ||
                      (local_24[0x10] == (MSG_BASE)0x4)))) && (local_2e != true)) {
              PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081c3a58 to 081c3ac5 has its CatchHandler @ 081c3ac8 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x56);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,5);
              uVar8 = CUser::get_unique_id(param_1);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,uVar8 & 0xffff);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_2c);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
              this_00 = (GameWorld *)G_GameWorld();
              GameWorld::send_all(this_00,local_3c);
              PacketGuard::~PacketGuard(local_3c);
            }
            *(undefined4 *)(local_28 + 4) = 0;
            return 0;
          }
        }
      }
      else {
        iVar10 = CUser::get_state(param_1);
        if (iVar10 == 10) {
          local_14 = (CDeathTower *)CUser::getDeathTower(param_1);
          if ((local_14 != (CDeathTower *)0x0) &&
             (cVar6 = WongWork::CDeathTower::handlePickupItem
                                (local_14,param_1,(uint)*(ushort *)(local_24 + 0xd),
                                 local_24[0xf] == (MSG_BASE)0x1,(char)local_24[0x10]), cVar6 != '\0'
             )) {
            *(undefined4 *)(local_28 + 4) = 0;
            return 0;
          }
        }
        else {
          iVar10 = CUser::get_state(param_1);
          if (iVar10 == 0xc) {
            Global::CBossTowerFunc::GetItem
                      (param_1,(uint)*(ushort *)(local_24 + 0xd),local_24[0xf] == (MSG_BASE)0x1,
                       (char)local_24[0x10]);
          }
          else {
            iVar10 = CUser::get_state(param_1);
            if (iVar10 != 8) {
              *(undefined4 *)(local_28 + 4) = 0x13;
              return 0;
            }
            CUser::GetWarRoomIndex(param_1);
            iVar10 = G_CGameManager();
            local_10 = (WarRoom *)CGameManager::GetWarRoom(iVar10);
            if (local_10 == (WarRoom *)0x0) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar7 = LineFunc(0xf32,
                               "virtual int DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar7;
            }
            cVar6 = WarRoom::HandleGetItem(local_10,param_1,(uint)*(ushort *)(local_24 + 0xd));
            if (cVar6 != '\0') {
              *(undefined4 *)(local_28 + 4) = 0;
              return 0;
            }
          }
        }
      }
      *(undefined4 *)(local_28 + 4) = 0x7fffffff;
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
