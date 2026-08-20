# dispatch_sig

`_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SendMess` | `0x081f3540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f3540  _ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f3540, 0x081f4409]
081f3540 +0x000:  push   %ebp
081f3541 +0x001:  mov    %esp,%ebp
081f3543 +0x003:  push   %edi
081f3544 +0x004:  push   %esi
081f3545 +0x005:  push   %ebx
081f3546 +0x006:  sub    $0x31c,%esp
081f354c +0x00c:  mov    0xc(%ebp),%eax
081f354f +0x00f:  mov    %eax,(%esp)
081f3552 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f3557 +0x017:  cmp    $0x2,%eax
081f355a +0x01a:  setle  %al
081f355d +0x01d:  test   %al,%al
081f355f +0x01f:  je     081f356b <+0x2b>
081f3561 +0x021:  mov    $0x0,%ebx
081f3566 +0x026:  jmp    081f43fd <+0xebd>
081f356b +0x02b:  lea    -0x1a3(%ebp),%eax
081f3571 +0x031:  add    $0xd,%eax
081f3574 +0x034:  mov    %eax,0x4(%esp)
081f3578 +0x038:  mov    0x10(%ebp),%eax
081f357b +0x03b:  mov    %eax,(%esp)
081f357e +0x03e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f3583 +0x043:  xor    $0x1,%eax
081f3586 +0x046:  test   %al,%al
081f3588 +0x048:  je     081f35b5 <+0x75>
081f358a +0x04a:  movl   $0x0,0xc(%esp)
081f3592 +0x052:  movl   $0x0,0x8(%esp)
081f359a +0x05a:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f35a2 +0x062:  movl   $0x7ef5,(%esp)
081f35a9 +0x069:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f35ae +0x06e:  mov    %eax,%ebx
081f35b0 +0x070:  jmp    081f43fd <+0xebd>
081f35b5 +0x075:  lea    -0x1a3(%ebp),%eax
081f35bb +0x07b:  add    $0xe,%eax
081f35be +0x07e:  mov    %eax,0x4(%esp)
081f35c2 +0x082:  mov    0x10(%ebp),%eax
081f35c5 +0x085:  mov    %eax,(%esp)
081f35c8 +0x088:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081f35cd +0x08d:  xor    $0x1,%eax
081f35d0 +0x090:  test   %al,%al
081f35d2 +0x092:  je     081f35ff <+0xbf>
081f35d4 +0x094:  movl   $0x0,0xc(%esp)
081f35dc +0x09c:  movl   $0x0,0x8(%esp)
081f35e4 +0x0a4:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f35ec +0x0ac:  movl   $0x7ef6,(%esp)
081f35f3 +0x0b3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f35f8 +0x0b8:  mov    %eax,%ebx
081f35fa +0x0ba:  jmp    081f43fd <+0xebd>
081f35ff +0x0bf:  lea    -0x1a3(%ebp),%eax
081f3605 +0x0c5:  add    $0x10,%eax
081f3608 +0x0c8:  mov    %eax,0x4(%esp)
081f360c +0x0cc:  mov    0x10(%ebp),%eax
081f360f +0x0cf:  mov    %eax,(%esp)
081f3612 +0x0d2:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f3617 +0x0d7:  xor    $0x1,%eax
081f361a +0x0da:  test   %al,%al
081f361c +0x0dc:  je     081f3649 <+0x109>
081f361e +0x0de:  movl   $0x0,0xc(%esp)
081f3626 +0x0e6:  movl   $0x0,0x8(%esp)
081f362e +0x0ee:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3636 +0x0f6:  movl   $0x7ef7,(%esp)
081f363d +0x0fd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f3642 +0x102:  mov    %eax,%ebx
081f3644 +0x104:  jmp    081f43fd <+0xebd>
081f3649 +0x109:  lea    -0x1a3(%ebp),%eax
081f364f +0x10f:  add    $0x36,%eax
081f3652 +0x112:  mov    %eax,0x4(%esp)
081f3656 +0x116:  mov    0x10(%ebp),%eax
081f3659 +0x119:  mov    %eax,(%esp)
081f365c +0x11c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f3661 +0x121:  xor    $0x1,%eax
081f3664 +0x124:  test   %al,%al
081f3666 +0x126:  je     081f3693 <+0x153>
081f3668 +0x128:  movl   $0x0,0xc(%esp)
081f3670 +0x130:  movl   $0x0,0x8(%esp)
081f3678 +0x138:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3680 +0x140:  movl   $0x7ef8,(%esp)
081f3687 +0x147:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f368c +0x14c:  mov    %eax,%ebx
081f368e +0x14e:  jmp    081f43fd <+0xebd>
081f3693 +0x153:  mov    -0x16d(%ebp),%eax
081f3699 +0x159:  mov    %eax,0xc(%esp)
081f369d +0x15d:  movl   $0x100,0x8(%esp)
081f36a5 +0x165:  lea    -0x1a3(%ebp),%eax
081f36ab +0x16b:  add    $0x3a,%eax
081f36ae +0x16e:  mov    %eax,0x4(%esp)
081f36b2 +0x172:  mov    0x10(%ebp),%eax
081f36b5 +0x175:  mov    %eax,(%esp)
081f36b8 +0x178:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081f36bd +0x17d:  xor    $0x1,%eax
081f36c0 +0x180:  test   %al,%al
081f36c2 +0x182:  je     081f36ef <+0x1af>
081f36c4 +0x184:  movl   $0x0,0xc(%esp)
081f36cc +0x18c:  movl   $0x0,0x8(%esp)
081f36d4 +0x194:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f36dc +0x19c:  movl   $0x7ef9,(%esp)
081f36e3 +0x1a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f36e8 +0x1a8:  mov    %eax,%ebx
081f36ea +0x1aa:  jmp    081f43fd <+0xebd>
081f36ef +0x1af:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f36f4 +0x1b4:  lea    -0x1a3(%ebp),%edx
081f36fa +0x1ba:  add    $0x3a,%edx
081f36fd +0x1bd:  mov    %edx,0x8(%esp)
081f3701 +0x1c1:  mov    0xc(%ebp),%edx
081f3704 +0x1c4:  mov    %edx,0x4(%esp)
081f3708 +0x1c8:  mov    %eax,(%esp)
081f370b +0x1cb:  call   0835fba2 <_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc>  ; CDataManager::rewriteUsableEmoticon(CUser const&, char*)
081f3710 +0x1d0:  mov    0xc(%ebp),%eax
081f3713 +0x1d3:  mov    %eax,(%esp)
081f3716 +0x1d6:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081f371b +0x1db:  test   %al,%al
081f371d +0x1dd:  je     081f374f <+0x20f>
081f371f +0x1df:  movzbl -0x196(%ebp),%eax
081f3726 +0x1e6:  movsbl %al,%eax
081f3729 +0x1e9:  cmp    $0x8,%eax
081f372c +0x1ec:  ja     081f3744 <+0x204>
081f372e +0x1ee:  mov    $0x1,%edx
081f3733 +0x1f3:  mov    %edx,%ebx
081f3735 +0x1f5:  mov    %eax,%ecx
081f3737 +0x1f7:  shl    %cl,%ebx
081f3739 +0x1f9:  mov    %ebx,%eax
081f373b +0x1fb:  and    $0x144,%eax
081f3740 +0x200:  test   %eax,%eax
081f3742 +0x202:  jne    081f374e <+0x20e>
081f3744 +0x204:  mov    $0x0,%ebx
081f3749 +0x209:  jmp    081f43fd <+0xebd>
081f374e +0x20e:  nop
081f374f +0x20f:  movzbl -0x196(%ebp),%eax
081f3756 +0x216:  cmp    $0x24,%al
081f3758 +0x218:  je     081f3774 <+0x234>
081f375a +0x21a:  movzbl -0x196(%ebp),%eax
081f3761 +0x221:  cmp    $0x25,%al
081f3763 +0x223:  je     081f3774 <+0x234>
081f3765 +0x225:  movzbl -0x196(%ebp),%eax
081f376c +0x22c:  cmp    $0x26,%al
081f376e +0x22e:  jne    081f3995 <+0x455>
081f3774 +0x234:  lea    -0x1a3(%ebp),%eax
081f377a +0x23a:  add    $0x14,%eax
081f377d +0x23d:  mov    %eax,0x4(%esp)
081f3781 +0x241:  mov    0x10(%ebp),%eax
081f3784 +0x244:  mov    %eax,(%esp)
081f3787 +0x247:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f378c +0x24c:  xor    $0x1,%eax
081f378f +0x24f:  test   %al,%al
081f3791 +0x251:  je     081f37be <+0x27e>
081f3793 +0x253:  movl   $0x0,0xc(%esp)
081f379b +0x25b:  movl   $0x0,0x8(%esp)
081f37a3 +0x263:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f37ab +0x26b:  movl   $0x7f4b,(%esp)
081f37b2 +0x272:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f37b7 +0x277:  mov    %eax,%ebx
081f37b9 +0x279:  jmp    081f43fd <+0xebd>
081f37be +0x27e:  mov    -0x18f(%ebp),%eax
081f37c4 +0x284:  mov    %eax,0xc(%esp)
081f37c8 +0x288:  movl   $0x1e,0x8(%esp)
081f37d0 +0x290:  lea    -0x1a3(%ebp),%eax
081f37d6 +0x296:  add    $0x18,%eax
081f37d9 +0x299:  mov    %eax,0x4(%esp)
081f37dd +0x29d:  mov    0x10(%ebp),%eax
081f37e0 +0x2a0:  mov    %eax,(%esp)
081f37e3 +0x2a3:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081f37e8 +0x2a8:  xor    $0x1,%eax
081f37eb +0x2ab:  test   %al,%al
081f37ed +0x2ad:  je     081f381a <+0x2da>
081f37ef +0x2af:  movl   $0x0,0xc(%esp)
081f37f7 +0x2b7:  movl   $0x0,0x8(%esp)
081f37ff +0x2bf:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3807 +0x2c7:  movl   $0x7f4d,(%esp)
081f380e +0x2ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f3813 +0x2d3:  mov    %eax,%ebx
081f3815 +0x2d5:  jmp    081f43fd <+0xebd>
081f381a +0x2da:  lea    -0x1a3(%ebp),%eax
081f3820 +0x2e0:  add    $0x13a,%eax
081f3825 +0x2e5:  mov    %eax,0x4(%esp)
081f3829 +0x2e9:  mov    0x10(%ebp),%eax
081f382c +0x2ec:  mov    %eax,(%esp)
081f382f +0x2ef:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f3834 +0x2f4:  xor    $0x1,%eax
081f3837 +0x2f7:  test   %al,%al
081f3839 +0x2f9:  je     081f3866 <+0x326>
081f383b +0x2fb:  movl   $0x0,0xc(%esp)
081f3843 +0x303:  movl   $0x0,0x8(%esp)
081f384b +0x30b:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3853 +0x313:  movl   $0x7f4f,(%esp)
081f385a +0x31a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f385f +0x31f:  mov    %eax,%ebx
081f3861 +0x321:  jmp    081f43fd <+0xebd>
081f3866 +0x326:  lea    -0x2de(%ebp),%eax
081f386c +0x32c:  mov    %eax,(%esp)
081f386f +0x32f:  call   0822b8e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xf90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xf90
081f3874 +0x334:  movzbl -0x196(%ebp),%eax
081f387b +0x33b:  cmp    $0x24,%al
081f387d +0x33d:  jne    081f388b <+0x34b>
081f387f +0x33f:  movl   $0x7,-0x2d4(%ebp)
081f3889 +0x349:  jmp    081f38ac <+0x36c>
081f388b +0x34b:  movzbl -0x196(%ebp),%eax
081f3892 +0x352:  cmp    $0x25,%al
081f3894 +0x354:  jne    081f38a2 <+0x362>
081f3896 +0x356:  movl   $0x21,-0x2d4(%ebp)
081f38a0 +0x360:  jmp    081f38ac <+0x36c>
081f38a2 +0x362:  movl   $0x1,-0x2d4(%ebp)
081f38ac +0x36c:  mov    0xc(%ebp),%eax
081f38af +0x36f:  mov    %eax,(%esp)
081f38b2 +0x372:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081f38b7 +0x377:  mov    %eax,-0x2d0(%ebp)
081f38bd +0x37d:  mov    0xc(%ebp),%eax
081f38c0 +0x380:  mov    %eax,(%esp)
081f38c3 +0x383:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081f38c8 +0x388:  mov    %eax,-0x2cb(%ebp)
081f38ce +0x38e:  movzbl -0x69(%ebp),%eax
081f38d2 +0x392:  mov    %al,-0x2cc(%ebp)
081f38d8 +0x398:  mov    -0x193(%ebp),%eax
081f38de +0x39e:  mov    %eax,-0x2c7(%ebp)
081f38e4 +0x3a4:  mov    -0x18f(%ebp),%eax
081f38ea +0x3aa:  mov    %al,-0x2c3(%ebp)
081f38f0 +0x3b0:  mov    -0x16d(%ebp),%eax
081f38f6 +0x3b6:  mov    %al,-0x2a4(%ebp)
081f38fc +0x3bc:  mov    -0x18f(%ebp),%eax
081f3902 +0x3c2:  mov    %eax,0x8(%esp)
081f3906 +0x3c6:  lea    -0x1a3(%ebp),%eax
081f390c +0x3cc:  add    $0x18,%eax
081f390f +0x3cf:  mov    %eax,0x4(%esp)
081f3913 +0x3d3:  lea    -0x2de(%ebp),%eax
081f3919 +0x3d9:  add    $0x1c,%eax
081f391c +0x3dc:  mov    %eax,(%esp)
081f391f +0x3df:  call   0807d8a0 <_init+0x198>
081f3924 +0x3e4:  mov    -0x16d(%ebp),%eax
081f392a +0x3ea:  mov    %eax,0x8(%esp)
081f392e +0x3ee:  lea    -0x1a3(%ebp),%eax
081f3934 +0x3f4:  add    $0x3a,%eax
081f3937 +0x3f7:  mov    %eax,0x4(%esp)
081f393b +0x3fb:  lea    -0x2de(%ebp),%eax
081f3941 +0x401:  add    $0x3b,%eax
081f3944 +0x404:  mov    %eax,(%esp)
081f3947 +0x407:  call   0807d8a0 <_init+0x198>
081f394c +0x40c:  movzbl -0x2a4(%ebp),%eax
081f3953 +0x413:  movzbl %al,%eax
081f3956 +0x416:  add    $0x3b,%eax
081f3959 +0x419:  mov    %ax,-0x2dc(%ebp)
081f3960 +0x420:  movzwl -0x2dc(%ebp),%eax
081f3967 +0x427:  movzwl %ax,%eax
081f396a +0x42a:  mov    %eax,-0x5c(%ebp)
081f396d +0x42d:  lea    -0x2de(%ebp),%edx
081f3973 +0x433:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
081f3978 +0x438:  mov    -0x5c(%ebp),%ecx
081f397b +0x43b:  mov    %ecx,0x8(%esp)
081f397f +0x43f:  mov    %edx,0x4(%esp)
081f3983 +0x443:  mov    %eax,(%esp)
081f3986 +0x446:  call   0846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>  ; CCommunityServerProxy::SendTcpPacket(char*, int)
081f398b +0x44b:  mov    $0x0,%ebx
081f3990 +0x450:  jmp    081f43fd <+0xebd>
081f3995 +0x455:  movzbl -0x196(%ebp),%eax
081f399c +0x45c:  cmp    $0x7,%al
081f399e +0x45e:  je     081f39ba <+0x47a>
081f39a0 +0x460:  movzbl -0x196(%ebp),%eax
081f39a7 +0x467:  cmp    $0x1,%al
081f39a9 +0x469:  je     081f39ba <+0x47a>
081f39ab +0x46b:  movzbl -0x196(%ebp),%eax
081f39b2 +0x472:  cmp    $0x21,%al
081f39b4 +0x474:  jne    081f3ca8 <+0x768>
081f39ba +0x47a:  lea    -0x1a3(%ebp),%eax
081f39c0 +0x480:  add    $0x14,%eax
081f39c3 +0x483:  mov    %eax,0x4(%esp)
081f39c7 +0x487:  mov    0x10(%ebp),%eax
081f39ca +0x48a:  mov    %eax,(%esp)
081f39cd +0x48d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f39d2 +0x492:  xor    $0x1,%eax
081f39d5 +0x495:  test   %al,%al
081f39d7 +0x497:  je     081f3a04 <+0x4c4>
081f39d9 +0x499:  movl   $0x0,0xc(%esp)
081f39e1 +0x4a1:  movl   $0x0,0x8(%esp)
081f39e9 +0x4a9:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f39f1 +0x4b1:  movl   $0x7f71,(%esp)
081f39f8 +0x4b8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f39fd +0x4bd:  mov    %eax,%ebx
081f39ff +0x4bf:  jmp    081f43fd <+0xebd>
081f3a04 +0x4c4:  mov    -0x18f(%ebp),%eax
081f3a0a +0x4ca:  mov    %eax,0xc(%esp)
081f3a0e +0x4ce:  movl   $0x1e,0x8(%esp)
081f3a16 +0x4d6:  lea    -0x1a3(%ebp),%eax
081f3a1c +0x4dc:  add    $0x18,%eax
081f3a1f +0x4df:  mov    %eax,0x4(%esp)
081f3a23 +0x4e3:  mov    0x10(%ebp),%eax
081f3a26 +0x4e6:  mov    %eax,(%esp)
081f3a29 +0x4e9:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081f3a2e +0x4ee:  xor    $0x1,%eax
081f3a31 +0x4f1:  test   %al,%al
081f3a33 +0x4f3:  je     081f3a60 <+0x520>
081f3a35 +0x4f5:  movl   $0x0,0xc(%esp)
081f3a3d +0x4fd:  movl   $0x0,0x8(%esp)
081f3a45 +0x505:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3a4d +0x50d:  movl   $0x7f73,(%esp)
081f3a54 +0x514:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f3a59 +0x519:  mov    %eax,%ebx
081f3a5b +0x51b:  jmp    081f43fd <+0xebd>
081f3a60 +0x520:  movb   $0x0,-0x5e(%ebp)
081f3a64 +0x524:  lea    -0x5e(%ebp),%eax
081f3a67 +0x527:  mov    %eax,0x4(%esp)
081f3a6b +0x52b:  mov    0x10(%ebp),%eax
081f3a6e +0x52e:  mov    %eax,(%esp)
081f3a71 +0x531:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081f3a76 +0x536:  xor    $0x1,%eax
081f3a79 +0x539:  test   %al,%al
081f3a7b +0x53b:  je     081f3aa8 <+0x568>
081f3a7d +0x53d:  movl   $0x0,0xc(%esp)
081f3a85 +0x545:  movl   $0x0,0x8(%esp)
081f3a8d +0x54d:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3a95 +0x555:  movl   $0x7f78,(%esp)
081f3a9c +0x55c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f3aa1 +0x561:  mov    %eax,%ebx
081f3aa3 +0x563:  jmp    081f43fd <+0xebd>
081f3aa8 +0x568:  movzbl -0x196(%ebp),%eax
081f3aaf +0x56f:  cmp    $0x7,%al
081f3ab1 +0x571:  jne    081f431a <+0xdda>
081f3ab7 +0x577:  lea    -0x2de(%ebp),%eax
081f3abd +0x57d:  mov    %eax,(%esp)
081f3ac0 +0x580:  call   0822b8e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xf90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xf90
081f3ac5 +0x585:  mov    0xc(%ebp),%eax
081f3ac8 +0x588:  mov    %eax,(%esp)
081f3acb +0x58b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081f3ad0 +0x590:  mov    %eax,-0x2cb(%ebp)
081f3ad6 +0x596:  mov    -0x18f(%ebp),%eax
081f3adc +0x59c:  mov    %al,-0x2c3(%ebp)
081f3ae2 +0x5a2:  mov    -0x18f(%ebp),%eax
081f3ae8 +0x5a8:  mov    %eax,0x8(%esp)
081f3aec +0x5ac:  lea    -0x1a3(%ebp),%eax
081f3af2 +0x5b2:  add    $0x18,%eax
081f3af5 +0x5b5:  mov    %eax,0x4(%esp)
081f3af9 +0x5b9:  lea    -0x2de(%ebp),%eax
081f3aff +0x5bf:  add    $0x1c,%eax
081f3b02 +0x5c2:  mov    %eax,(%esp)
081f3b05 +0x5c5:  call   0807d8a0 <_init+0x198>
081f3b0a +0x5ca:  mov    -0x16d(%ebp),%eax
081f3b10 +0x5d0:  mov    %al,-0x2a4(%ebp)
081f3b16 +0x5d6:  mov    -0x16d(%ebp),%eax
081f3b1c +0x5dc:  mov    %eax,0x8(%esp)
081f3b20 +0x5e0:  lea    -0x1a3(%ebp),%eax
081f3b26 +0x5e6:  add    $0x3a,%eax
081f3b29 +0x5e9:  mov    %eax,0x4(%esp)
081f3b2d +0x5ed:  lea    -0x2de(%ebp),%eax
081f3b33 +0x5f3:  add    $0x3b,%eax
081f3b36 +0x5f6:  mov    %eax,(%esp)
081f3b39 +0x5f9:  call   0807d8a0 <_init+0x198>
081f3b3e +0x5fe:  lea    -0x5d(%ebp),%eax
081f3b41 +0x601:  mov    %eax,(%esp)
081f3b44 +0x604:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081f3b49 +0x609:  lea    -0x5d(%ebp),%eax
081f3b4c +0x60c:  mov    %eax,0x8(%esp)
081f3b50 +0x610:  lea    -0x2de(%ebp),%eax
081f3b56 +0x616:  add    $0x3b,%eax
081f3b59 +0x619:  mov    %eax,0x4(%esp)
081f3b5d +0x61d:  lea    -0x64(%ebp),%eax
081f3b60 +0x620:  mov    %eax,(%esp)
081f3b63 +0x623:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081f3b68 +0x628:  jmp    081f3b85 <+0x645>
081f3b6a +0x62a:  mov    %edx,%ebx
081f3b6c +0x62c:  mov    %eax,%esi
081f3b6e +0x62e:  lea    -0x5d(%ebp),%eax
081f3b71 +0x631:  mov    %eax,(%esp)
081f3b74 +0x634:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081f3b79 +0x639:  mov    %esi,%eax
081f3b7b +0x63b:  mov    %ebx,%edx
081f3b7d +0x63d:  mov    %eax,(%esp)
081f3b80 +0x640:  call   08ae3750 <_Unwind_Resume>
081f3b85 +0x645:  lea    -0x5d(%ebp),%eax
081f3b88 +0x648:  mov    %eax,(%esp)
081f3b8b +0x64b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081f3b90 +0x650:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081f3b95 +0x655:  lea    -0x68(%ebp),%edx
081f3b98 +0x658:  lea    -0x64(%ebp),%ecx
081f3b9b +0x65b:  mov    %ecx,0x8(%esp)
081f3b9f +0x65f:  mov    %eax,0x4(%esp)
081f3ba3 +0x663:  mov    %edx,(%esp)
081f3ba6 +0x666:  call   0862e46c <_ZN16CSyncSlangFilter6FilterERKSs>  ; CSyncSlangFilter::Filter(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081f3bab +0x66b:  sub    $0x4,%esp
081f3bae +0x66e:  lea    -0x68(%ebp),%eax
081f3bb1 +0x671:  mov    %eax,(%esp)
081f3bb4 +0x674:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081f3bb9 +0x679:  test   %eax,%eax
081f3bbb +0x67b:  sete   %al
081f3bbe +0x67e:  test   %al,%al
081f3bc0 +0x680:  je     081f3bcc <+0x68c>
081f3bc2 +0x682:  mov    $0x0,%ebx
081f3bc7 +0x687:  jmp    081f3c70 <+0x730>
081f3bcc +0x68c:  lea    -0x68(%ebp),%eax
081f3bcf +0x68f:  mov    %eax,(%esp)
081f3bd2 +0x692:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081f3bd7 +0x697:  mov    %eax,%ebx
081f3bd9 +0x699:  lea    -0x68(%ebp),%eax
081f3bdc +0x69c:  mov    %eax,(%esp)
081f3bdf +0x69f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081f3be4 +0x6a4:  mov    %ebx,0x8(%esp)
081f3be8 +0x6a8:  mov    %eax,0x4(%esp)
081f3bec +0x6ac:  lea    -0x2de(%ebp),%eax
081f3bf2 +0x6b2:  add    $0x3b,%eax
081f3bf5 +0x6b5:  mov    %eax,(%esp)
081f3bf8 +0x6b8:  call   0807d8d0 <_init+0x1c8>
081f3bfd +0x6bd:  movzbl -0x2a4(%ebp),%eax
081f3c04 +0x6c4:  movzbl %al,%eax
081f3c07 +0x6c7:  add    $0x3b,%eax
081f3c0a +0x6ca:  mov    %ax,-0x2dc(%ebp)
081f3c11 +0x6d1:  movzwl -0x2dc(%ebp),%eax
081f3c18 +0x6d8:  movzwl %ax,%eax
081f3c1b +0x6db:  mov    %eax,-0x58(%ebp)
081f3c1e +0x6de:  lea    -0x2de(%ebp),%ebx
081f3c24 +0x6e4:  mov    0xc(%ebp),%eax
081f3c27 +0x6e7:  mov    %eax,(%esp)
081f3c2a +0x6ea:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081f3c2f +0x6ef:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081f3c35 +0x6f5:  mov    %eax,0x4(%esp)
081f3c39 +0x6f9:  mov    %edx,(%esp)
081f3c3c +0x6fc:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081f3c41 +0x701:  mov    -0x58(%ebp),%edx
081f3c44 +0x704:  mov    %edx,0x8(%esp)
081f3c48 +0x708:  mov    %ebx,0x4(%esp)
081f3c4c +0x70c:  mov    %eax,(%esp)
081f3c4f +0x70f:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081f3c54 +0x714:  mov    $0x0,%ebx
081f3c59 +0x719:  jmp    081f3c70 <+0x730>
081f3c5b +0x71b:  mov    %edx,%ebx
081f3c5d +0x71d:  mov    %eax,%esi
081f3c5f +0x71f:  lea    -0x68(%ebp),%eax
081f3c62 +0x722:  mov    %eax,(%esp)
081f3c65 +0x725:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081f3c6a +0x72a:  mov    %esi,%eax
081f3c6c +0x72c:  mov    %ebx,%edx
081f3c6e +0x72e:  jmp    081f3c7d <+0x73d>
081f3c70 +0x730:  lea    -0x68(%ebp),%eax
081f3c73 +0x733:  mov    %eax,(%esp)
081f3c76 +0x736:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081f3c7b +0x73b:  jmp    081f3c98 <+0x758>
081f3c7d +0x73d:  mov    %edx,%ebx
081f3c7f +0x73f:  mov    %eax,%esi
081f3c81 +0x741:  lea    -0x64(%ebp),%eax
081f3c84 +0x744:  mov    %eax,(%esp)
081f3c87 +0x747:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081f3c8c +0x74c:  mov    %esi,%eax
081f3c8e +0x74e:  mov    %ebx,%edx
081f3c90 +0x750:  mov    %eax,(%esp)
081f3c93 +0x753:  call   08ae3750 <_Unwind_Resume>
081f3c98 +0x758:  lea    -0x64(%ebp),%eax
081f3c9b +0x75b:  mov    %eax,(%esp)
081f3c9e +0x75e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081f3ca3 +0x763:  jmp    081f43fd <+0xebd>
081f3ca8 +0x768:  movzbl -0x196(%ebp),%eax
081f3caf +0x76f:  cmp    $0xb,%al
081f3cb1 +0x771:  je     081f3ccd <+0x78d>
081f3cb3 +0x773:  movzbl -0x196(%ebp),%eax
081f3cba +0x77a:  cmp    $0xc,%al
081f3cbc +0x77c:  je     081f3ccd <+0x78d>
081f3cbe +0x77e:  movzbl -0x196(%ebp),%eax
081f3cc5 +0x785:  cmp    $0x23,%al
081f3cc7 +0x787:  jne    081f3e6b <+0x92b>
081f3ccd +0x78d:  movzwl -0x195(%ebp),%eax
081f3cd4 +0x794:  movzwl %ax,%eax
081f3cd7 +0x797:  mov    %eax,-0x54(%ebp)
081f3cda +0x79a:  mov    -0x193(%ebp),%eax
081f3ce0 +0x7a0:  mov    %eax,-0x50(%ebp)
081f3ce3 +0x7a3:  mov    -0x54(%ebp),%eax
081f3ce6 +0x7a6:  mov    %eax,(%esp)
081f3ce9 +0x7a9:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f3cee +0x7ae:  mov    %eax,%ebx
081f3cf0 +0x7b0:  mov    0xc(%ebp),%eax
081f3cf3 +0x7b3:  mov    %eax,(%esp)
081f3cf6 +0x7b6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f3cfb +0x7bb:  mov    -0x50(%ebp),%edx
081f3cfe +0x7be:  mov    %edx,0x8(%esp)
081f3d02 +0x7c2:  mov    %ebx,0x4(%esp)
081f3d06 +0x7c6:  mov    %eax,(%esp)
081f3d09 +0x7c9:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f3d0e +0x7ce:  mov    %eax,-0x4c(%ebp)
081f3d11 +0x7d1:  cmpl   $0x0,-0x4c(%ebp)
081f3d15 +0x7d5:  je     081f3d56 <+0x816>
081f3d17 +0x7d7:  mov    -0x4c(%ebp),%eax
081f3d1a +0x7da:  mov    0x2(%eax),%eax
081f3d1d +0x7dd:  cmp    $0x24,%eax
081f3d20 +0x7e0:  je     081f3d7b <+0x83b>
081f3d22 +0x7e2:  mov    -0x4c(%ebp),%eax
081f3d25 +0x7e5:  mov    0x2(%eax),%eax
081f3d28 +0x7e8:  cmp    $0x382,%eax
081f3d2d +0x7ed:  je     081f3d7b <+0x83b>
081f3d2f +0x7ef:  mov    -0x4c(%ebp),%eax
081f3d32 +0x7f2:  mov    0x2(%eax),%eax
081f3d35 +0x7f5:  cmp    $0x28d150,%eax
081f3d3a +0x7fa:  je     081f3d7b <+0x83b>
081f3d3c +0x7fc:  mov    -0x4c(%ebp),%eax
081f3d3f +0x7ff:  mov    0x2(%eax),%eax
081f3d42 +0x802:  cmp    $0x292090dd,%eax
081f3d47 +0x807:  je     081f3d7b <+0x83b>
081f3d49 +0x809:  mov    -0x4c(%ebp),%eax
081f3d4c +0x80c:  mov    0x2(%eax),%eax
081f3d4f +0x80f:  cmp    $0x29209138,%eax
081f3d54 +0x814:  je     081f3d7b <+0x83b>
081f3d56 +0x816:  movl   $0x11,0x8(%esp)
081f3d5e +0x81e:  movl   $0x11,0x4(%esp)
081f3d66 +0x826:  mov    0xc(%ebp),%eax
081f3d69 +0x829:  mov    %eax,(%esp)
081f3d6c +0x82c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3d71 +0x831:  mov    $0x0,%ebx
081f3d76 +0x836:  jmp    081f43fd <+0xebd>
081f3d7b +0x83b:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f3d80 +0x840:  movl   $0x24,0x8(%esp)
081f3d88 +0x848:  mov    0xc(%ebp),%edx
081f3d8b +0x84b:  mov    %edx,0x4(%esp)
081f3d8f +0x84f:  mov    %eax,(%esp)
081f3d92 +0x852:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081f3d97 +0x857:  mov    %eax,-0x48(%ebp)
081f3d9a +0x85a:  cmpl   $0x0,-0x48(%ebp)
081f3d9e +0x85e:  je     081f3dc7 <+0x887>
081f3da0 +0x860:  mov    -0x48(%ebp),%eax
081f3da3 +0x863:  movzbl %al,%eax
081f3da6 +0x866:  mov    %eax,0x8(%esp)
081f3daa +0x86a:  movl   $0x11,0x4(%esp)
081f3db2 +0x872:  mov    0xc(%ebp),%eax
081f3db5 +0x875:  mov    %eax,(%esp)
081f3db8 +0x878:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3dbd +0x87d:  mov    $0x0,%ebx
081f3dc2 +0x882:  jmp    081f43fd <+0xebd>
081f3dc7 +0x887:  mov    -0x54(%ebp),%eax
081f3dca +0x88a:  mov    %eax,(%esp)
081f3dcd +0x88d:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f3dd2 +0x892:  mov    -0x50(%ebp),%edx
081f3dd5 +0x895:  mov    %edx,0x8(%esp)
081f3dd9 +0x899:  mov    %eax,0x4(%esp)
081f3ddd +0x89d:  mov    0xc(%ebp),%eax
081f3de0 +0x8a0:  mov    %eax,(%esp)
081f3de3 +0x8a3:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081f3de8 +0x8a8:  test   %al,%al
081f3dea +0x8aa:  je     081f3e11 <+0x8d1>
081f3dec +0x8ac:  movl   $0xd5,0x8(%esp)
081f3df4 +0x8b4:  movl   $0x11,0x4(%esp)
081f3dfc +0x8bc:  mov    0xc(%ebp),%eax
081f3dff +0x8bf:  mov    %eax,(%esp)
081f3e02 +0x8c2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3e07 +0x8c7:  mov    $0x0,%ebx
081f3e0c +0x8cc:  jmp    081f43fd <+0xebd>
081f3e11 +0x8d1:  mov    -0x50(%ebp),%eax
081f3e14 +0x8d4:  cwtl
081f3e15 +0x8d5:  movl   $0xffffffff,0x10(%esp)
081f3e1d +0x8dd:  movl   $0xffffffff,0xc(%esp)
081f3e25 +0x8e5:  mov    -0x54(%ebp),%edx
081f3e28 +0x8e8:  mov    %edx,0x8(%esp)
081f3e2c +0x8ec:  mov    %eax,0x4(%esp)
081f3e30 +0x8f0:  mov    0xc(%ebp),%eax
081f3e33 +0x8f3:  mov    %eax,(%esp)
081f3e36 +0x8f6:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081f3e3b +0x8fb:  xor    $0x1,%eax
081f3e3e +0x8fe:  test   %al,%al
081f3e40 +0x900:  je     081f431d <+0xddd>
081f3e46 +0x906:  movl   $0x11,0x8(%esp)
081f3e4e +0x90e:  movl   $0x11,0x4(%esp)
081f3e56 +0x916:  mov    0xc(%ebp),%eax
081f3e59 +0x919:  mov    %eax,(%esp)
081f3e5c +0x91c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3e61 +0x921:  mov    $0x0,%ebx
081f3e66 +0x926:  jmp    081f43fd <+0xebd>
081f3e6b +0x92b:  movzbl -0x196(%ebp),%eax
081f3e72 +0x932:  cmp    $0xd,%al
081f3e74 +0x934:  je     081f3e85 <+0x945>
081f3e76 +0x936:  movzbl -0x196(%ebp),%eax
081f3e7d +0x93d:  cmp    $0xf,%al
081f3e7f +0x93f:  jne    081f4043 <+0xb03>
081f3e85 +0x945:  movzwl -0x195(%ebp),%eax
081f3e8c +0x94c:  movzwl %ax,%eax
081f3e8f +0x94f:  mov    %eax,-0x44(%ebp)
081f3e92 +0x952:  mov    -0x193(%ebp),%eax
081f3e98 +0x958:  mov    %eax,-0x40(%ebp)
081f3e9b +0x95b:  mov    -0x44(%ebp),%eax
081f3e9e +0x95e:  mov    %eax,(%esp)
081f3ea1 +0x961:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f3ea6 +0x966:  mov    %eax,%ebx
081f3ea8 +0x968:  mov    0xc(%ebp),%eax
081f3eab +0x96b:  mov    %eax,(%esp)
081f3eae +0x96e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f3eb3 +0x973:  mov    -0x40(%ebp),%edx
081f3eb6 +0x976:  mov    %edx,0x8(%esp)
081f3eba +0x97a:  mov    %ebx,0x4(%esp)
081f3ebe +0x97e:  mov    %eax,(%esp)
081f3ec1 +0x981:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f3ec6 +0x986:  mov    %eax,-0x3c(%ebp)
081f3ec9 +0x989:  cmpl   $0x0,-0x3c(%ebp)
081f3ecd +0x98d:  jne    081f3efa <+0x9ba>
081f3ecf +0x98f:  movl   $0x0,0xc(%esp)
081f3ed7 +0x997:  movl   $0x0,0x8(%esp)
081f3edf +0x99f:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3ee7 +0x9a7:  movl   $0x8020,(%esp)
081f3eee +0x9ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f3ef3 +0x9b3:  mov    %eax,%ebx
081f3ef5 +0x9b5:  jmp    081f43fd <+0xebd>
081f3efa +0x9ba:  mov    -0x3c(%ebp),%eax
081f3efd +0x9bd:  mov    0x2(%eax),%eax
081f3f00 +0x9c0:  cmp    $0x25,%eax
081f3f03 +0x9c3:  jne    081f3f10 <+0x9d0>
081f3f05 +0x9c5:  movzbl -0x196(%ebp),%eax
081f3f0c +0x9cc:  cmp    $0xd,%al
081f3f0e +0x9ce:  je     081f3f53 <+0xa13>
081f3f10 +0x9d0:  mov    -0x3c(%ebp),%eax
081f3f13 +0x9d3:  mov    0x2(%eax),%eax
081f3f16 +0x9d6:  cmp    $0x28992f,%eax
081f3f1b +0x9db:  jne    081f3f28 <+0x9e8>
081f3f1d +0x9dd:  movzbl -0x196(%ebp),%eax
081f3f24 +0x9e4:  cmp    $0xf,%al
081f3f26 +0x9e6:  je     081f3f53 <+0xa13>
081f3f28 +0x9e8:  movl   $0x0,0xc(%esp)
081f3f30 +0x9f0:  movl   $0x0,0x8(%esp)
081f3f38 +0x9f8:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f3f40 +0xa00:  movl   $0x8025,(%esp)
081f3f47 +0xa07:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f3f4c +0xa0c:  mov    %eax,%ebx
081f3f4e +0xa0e:  jmp    081f43fd <+0xebd>
081f3f53 +0xa13:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f3f58 +0xa18:  movl   $0x24,0x8(%esp)
081f3f60 +0xa20:  mov    0xc(%ebp),%edx
081f3f63 +0xa23:  mov    %edx,0x4(%esp)
081f3f67 +0xa27:  mov    %eax,(%esp)
081f3f6a +0xa2a:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081f3f6f +0xa2f:  mov    %eax,-0x38(%ebp)
081f3f72 +0xa32:  cmpl   $0x0,-0x38(%ebp)
081f3f76 +0xa36:  je     081f3f9f <+0xa5f>
081f3f78 +0xa38:  mov    -0x38(%ebp),%eax
081f3f7b +0xa3b:  movzbl %al,%eax
081f3f7e +0xa3e:  mov    %eax,0x8(%esp)
081f3f82 +0xa42:  movl   $0x11,0x4(%esp)
081f3f8a +0xa4a:  mov    0xc(%ebp),%eax
081f3f8d +0xa4d:  mov    %eax,(%esp)
081f3f90 +0xa50:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3f95 +0xa55:  mov    $0x0,%ebx
081f3f9a +0xa5a:  jmp    081f43fd <+0xebd>
081f3f9f +0xa5f:  mov    -0x44(%ebp),%eax
081f3fa2 +0xa62:  mov    %eax,(%esp)
081f3fa5 +0xa65:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f3faa +0xa6a:  mov    -0x40(%ebp),%edx
081f3fad +0xa6d:  mov    %edx,0x8(%esp)
081f3fb1 +0xa71:  mov    %eax,0x4(%esp)
081f3fb5 +0xa75:  mov    0xc(%ebp),%eax
081f3fb8 +0xa78:  mov    %eax,(%esp)
081f3fbb +0xa7b:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081f3fc0 +0xa80:  test   %al,%al
081f3fc2 +0xa82:  je     081f3fe9 <+0xaa9>
081f3fc4 +0xa84:  movl   $0xd5,0x8(%esp)
081f3fcc +0xa8c:  movl   $0x11,0x4(%esp)
081f3fd4 +0xa94:  mov    0xc(%ebp),%eax
081f3fd7 +0xa97:  mov    %eax,(%esp)
081f3fda +0xa9a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f3fdf +0xa9f:  mov    $0x0,%ebx
081f3fe4 +0xaa4:  jmp    081f43fd <+0xebd>
081f3fe9 +0xaa9:  mov    -0x40(%ebp),%eax
081f3fec +0xaac:  cwtl
081f3fed +0xaad:  movl   $0xffffffff,0x10(%esp)
081f3ff5 +0xab5:  movl   $0xffffffff,0xc(%esp)
081f3ffd +0xabd:  mov    -0x44(%ebp),%edx
081f4000 +0xac0:  mov    %edx,0x8(%esp)
081f4004 +0xac4:  mov    %eax,0x4(%esp)
081f4008 +0xac8:  mov    0xc(%ebp),%eax
081f400b +0xacb:  mov    %eax,(%esp)
081f400e +0xace:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081f4013 +0xad3:  xor    $0x1,%eax
081f4016 +0xad6:  test   %al,%al
081f4018 +0xad8:  je     081f4320 <+0xde0>
081f401e +0xade:  movl   $0x11,0x8(%esp)
081f4026 +0xae6:  movl   $0x11,0x4(%esp)
081f402e +0xaee:  mov    0xc(%ebp),%eax
081f4031 +0xaf1:  mov    %eax,(%esp)
081f4034 +0xaf4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f4039 +0xaf9:  mov    $0x0,%ebx
081f403e +0xafe:  jmp    081f43fd <+0xebd>
081f4043 +0xb03:  movzbl -0x196(%ebp),%eax
081f404a +0xb0a:  cmp    $0xe,%al
081f404c +0xb0c:  jne    081f417d <+0xc3d>
081f4052 +0xb12:  movzwl -0x195(%ebp),%eax
081f4059 +0xb19:  movzwl %ax,%eax
081f405c +0xb1c:  mov    %eax,-0x34(%ebp)
081f405f +0xb1f:  mov    -0x193(%ebp),%eax
081f4065 +0xb25:  mov    %eax,-0x30(%ebp)
081f4068 +0xb28:  mov    -0x34(%ebp),%eax
081f406b +0xb2b:  mov    %eax,(%esp)
081f406e +0xb2e:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f4073 +0xb33:  mov    %eax,%ebx
081f4075 +0xb35:  mov    0xc(%ebp),%eax
081f4078 +0xb38:  mov    %eax,(%esp)
081f407b +0xb3b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f4080 +0xb40:  mov    -0x30(%ebp),%edx
081f4083 +0xb43:  mov    %edx,0x8(%esp)
081f4087 +0xb47:  mov    %ebx,0x4(%esp)
081f408b +0xb4b:  mov    %eax,(%esp)
081f408e +0xb4e:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f4093 +0xb53:  mov    %eax,-0x2c(%ebp)
081f4096 +0xb56:  cmpl   $0x0,-0x2c(%ebp)
081f409a +0xb5a:  je     081f40a9 <+0xb69>
081f409c +0xb5c:  mov    -0x2c(%ebp),%eax
081f409f +0xb5f:  mov    0x2(%eax),%eax
081f40a2 +0xb62:  cmp    $0x460,%eax
081f40a7 +0xb67:  je     081f40d4 <+0xb94>
081f40a9 +0xb69:  movl   $0x0,0xc(%esp)
081f40b1 +0xb71:  movl   $0x0,0x8(%esp)
081f40b9 +0xb79:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f40c1 +0xb81:  movl   $0x8053,(%esp)
081f40c8 +0xb88:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f40cd +0xb8d:  mov    %eax,%ebx
081f40cf +0xb8f:  jmp    081f43fd <+0xebd>
081f40d4 +0xb94:  mov    0xc(%ebp),%eax
081f40d7 +0xb97:  mov    %eax,(%esp)
081f40da +0xb9a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081f40df +0xb9f:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081f40e5 +0xba5:  mov    %eax,0x4(%esp)
081f40e9 +0xba9:  mov    %edx,(%esp)
081f40ec +0xbac:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081f40f1 +0xbb1:  xor    $0x1,%eax
081f40f4 +0xbb4:  test   %al,%al
081f40f6 +0xbb6:  je     081f4123 <+0xbe3>
081f40f8 +0xbb8:  movl   $0x0,0xc(%esp)
081f4100 +0xbc0:  movl   $0x0,0x8(%esp)
081f4108 +0xbc8:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4110 +0xbd0:  movl   $0x8057,(%esp)
081f4117 +0xbd7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f411c +0xbdc:  mov    %eax,%ebx
081f411e +0xbde:  jmp    081f43fd <+0xebd>
081f4123 +0xbe3:  mov    -0x30(%ebp),%eax
081f4126 +0xbe6:  cwtl
081f4127 +0xbe7:  movl   $0xffffffff,0x10(%esp)
081f412f +0xbef:  movl   $0xffffffff,0xc(%esp)
081f4137 +0xbf7:  mov    -0x34(%ebp),%edx
081f413a +0xbfa:  mov    %edx,0x8(%esp)
081f413e +0xbfe:  mov    %eax,0x4(%esp)
081f4142 +0xc02:  mov    0xc(%ebp),%eax
081f4145 +0xc05:  mov    %eax,(%esp)
081f4148 +0xc08:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081f414d +0xc0d:  xor    $0x1,%eax
081f4150 +0xc10:  test   %al,%al
081f4152 +0xc12:  je     081f4321 <+0xde1>
081f4158 +0xc18:  movl   $0x11,0x8(%esp)
081f4160 +0xc20:  movl   $0x11,0x4(%esp)
081f4168 +0xc28:  mov    0xc(%ebp),%eax
081f416b +0xc2b:  mov    %eax,(%esp)
081f416e +0xc2e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f4173 +0xc33:  mov    $0x0,%ebx
081f4178 +0xc38:  jmp    081f43fd <+0xebd>
081f417d +0xc3d:  movzbl -0x196(%ebp),%eax
081f4184 +0xc44:  cmp    $0x22,%al
081f4186 +0xc46:  jne    081f4321 <+0xde1>
081f418c +0xc4c:  movzwl -0x195(%ebp),%eax
081f4193 +0xc53:  movzwl %ax,%eax
081f4196 +0xc56:  mov    %eax,-0x28(%ebp)
081f4199 +0xc59:  mov    -0x193(%ebp),%eax
081f419f +0xc5f:  mov    %eax,-0x24(%ebp)
081f41a2 +0xc62:  mov    0xc(%ebp),%eax
081f41a5 +0xc65:  mov    %eax,(%esp)
081f41a8 +0xc68:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f41ad +0xc6d:  cmp    $0x3,%eax
081f41b0 +0xc70:  setne  %al
081f41b3 +0xc73:  test   %al,%al
081f41b5 +0xc75:  je     081f41c1 <+0xc81>
081f41b7 +0xc77:  mov    $0x0,%ebx
081f41bc +0xc7c:  jmp    081f43fd <+0xebd>
081f41c1 +0xc81:  mov    -0x28(%ebp),%eax
081f41c4 +0xc84:  mov    %eax,(%esp)
081f41c7 +0xc87:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f41cc +0xc8c:  mov    %eax,%ebx
081f41ce +0xc8e:  mov    0xc(%ebp),%eax
081f41d1 +0xc91:  mov    %eax,(%esp)
081f41d4 +0xc94:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f41d9 +0xc99:  mov    -0x24(%ebp),%edx
081f41dc +0xc9c:  mov    %edx,0x8(%esp)
081f41e0 +0xca0:  mov    %ebx,0x4(%esp)
081f41e4 +0xca4:  mov    %eax,(%esp)
081f41e7 +0xca7:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f41ec +0xcac:  mov    %eax,-0x20(%ebp)
081f41ef +0xcaf:  cmpl   $0x0,-0x20(%ebp)
081f41f3 +0xcb3:  je     081f4202 <+0xcc2>
081f41f5 +0xcb5:  mov    -0x20(%ebp),%eax
081f41f8 +0xcb8:  mov    0x2(%eax),%eax
081f41fb +0xcbb:  cmp    $0x1d9e,%eax
081f4200 +0xcc0:  je     081f422d <+0xced>
081f4202 +0xcc2:  movl   $0x0,0xc(%esp)
081f420a +0xcca:  movl   $0x0,0x8(%esp)
081f4212 +0xcd2:  movl   $&_ZZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f421a +0xcda:  movl   $0x806a,(%esp)
081f4221 +0xce1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4226 +0xce6:  mov    %eax,%ebx
081f4228 +0xce8:  jmp    081f43fd <+0xebd>
081f422d +0xced:  mov    -0x20(%ebp),%eax
081f4230 +0xcf0:  mov    0x2(%eax),%eax
081f4233 +0xcf3:  mov    %eax,%ebx
081f4235 +0xcf5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f423a +0xcfa:  mov    %ebx,0x4(%esp)
081f423e +0xcfe:  mov    %eax,(%esp)
081f4241 +0xd01:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081f4246 +0xd06:  mov    %eax,-0x1c(%ebp)
081f4249 +0xd09:  cmpl   $0x0,-0x1c(%ebp)
081f424d +0xd0d:  jne    081f4274 <+0xd34>
081f424f +0xd0f:  movl   $0x11,0x8(%esp)
081f4257 +0xd17:  movl   $0x11,0x4(%esp)
081f425f +0xd1f:  mov    0xc(%ebp),%eax
081f4262 +0xd22:  mov    %eax,(%esp)
081f4265 +0xd25:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f426a +0xd2a:  mov    $0x0,%ebx
081f426f +0xd2f:  jmp    081f43fd <+0xebd>
081f4274 +0xd34:  mov    -0x1c(%ebp),%eax
081f4277 +0xd37:  mov    %eax,(%esp)
081f427a +0xd3a:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081f427f +0xd3f:  xor    $0x1,%eax
081f4282 +0xd42:  test   %al,%al
081f4284 +0xd44:  je     081f42ab <+0xd6b>
081f4286 +0xd46:  movl   $0x11,0x8(%esp)
081f428e +0xd4e:  movl   $0x11,0x4(%esp)
081f4296 +0xd56:  mov    0xc(%ebp),%eax
081f4299 +0xd59:  mov    %eax,(%esp)
081f429c +0xd5c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f42a1 +0xd61:  mov    $0x0,%ebx
081f42a6 +0xd66:  jmp    081f43fd <+0xebd>
081f42ab +0xd6b:  mov    -0x28(%ebp),%eax
081f42ae +0xd6e:  mov    %eax,(%esp)
081f42b1 +0xd71:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f42b6 +0xd76:  mov    %eax,%ebx
081f42b8 +0xd78:  mov    0xc(%ebp),%eax
081f42bb +0xd7b:  mov    %eax,(%esp)
081f42be +0xd7e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081f42c3 +0xd83:  movl   $0x1,0x14(%esp)
081f42cb +0xd8b:  movl   $0x3,0x10(%esp)
081f42d3 +0xd93:  movl   $0x1,0xc(%esp)
081f42db +0xd9b:  mov    -0x24(%ebp),%edx
081f42de +0xd9e:  mov    %edx,0x8(%esp)
081f42e2 +0xda2:  mov    %ebx,0x4(%esp)
081f42e6 +0xda6:  mov    %eax,(%esp)
081f42e9 +0xda9:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081f42ee +0xdae:  xor    $0x1,%eax
081f42f1 +0xdb1:  test   %al,%al
081f42f3 +0xdb3:  je     081f4321 <+0xde1>
081f42f5 +0xdb5:  movl   $0x11,0x8(%esp)
081f42fd +0xdbd:  movl   $0x11,0x4(%esp)
081f4305 +0xdc5:  mov    0xc(%ebp),%eax
081f4308 +0xdc8:  mov    %eax,(%esp)
081f430b +0xdcb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f4310 +0xdd0:  mov    $0x0,%ebx
081f4315 +0xdd5:  jmp    081f43fd <+0xebd>
081f431a +0xdda:  nop
081f431b +0xddb:  jmp    081f4321 <+0xde1>
081f431d +0xddd:  nop
081f431e +0xdde:  jmp    081f4321 <+0xde1>
081f4320 +0xde0:  nop
081f4321 +0xde1:  mov    0xc(%ebp),%eax
081f4324 +0xde4:  mov    %eax,(%esp)
081f4327 +0xde7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081f432c +0xdec:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081f4332 +0xdf2:  mov    %eax,0x4(%esp)
081f4336 +0xdf6:  mov    %edx,(%esp)
081f4339 +0xdf9:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081f433e +0xdfe:  test   %al,%al
081f4340 +0xe00:  je     081f4370 <+0xe30>
081f4342 +0xe02:  movzbl -0x196(%ebp),%eax
081f4349 +0xe09:  movsbl %al,%ebx
081f434c +0xe0c:  mov    0xc(%ebp),%eax
081f434f +0xe0f:  mov    %eax,(%esp)
081f4352 +0xe12:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081f4357 +0xe17:  lea    -0x1a3(%ebp),%edx
081f435d +0xe1d:  add    $0x3a,%edx
081f4360 +0xe20:  mov    %edx,0x8(%esp)
081f4364 +0xe24:  mov    %ebx,0x4(%esp)
081f4368 +0xe28:  mov    %eax,(%esp)
081f436b +0xe2b:  call   0843c6aa <_ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc>  ; DB_InsertPoliceSaveChatting::makeRequest(unsigned int, char, char*)
081f4370 +0xe30:  mov    -0x18f(%ebp),%eax
081f4376 +0xe36:  mov    %eax,-0x2f0(%ebp)
081f437c +0xe3c:  mov    -0x16d(%ebp),%edx
081f4382 +0xe42:  mov    %edx,-0x2ec(%ebp)
081f4388 +0xe48:  mov    -0x193(%ebp),%edi
081f438e +0xe4e:  movzwl -0x195(%ebp),%eax
081f4395 +0xe55:  movzwl %ax,%esi
081f4398 +0xe58:  movzbl -0x196(%ebp),%eax
081f439f +0xe5f:  movsbl %al,%ebx
081f43a2 +0xe62:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f43a7 +0xe67:  movl   $0xc,0x24(%esp)
081f43af +0xe6f:  mov    -0x2f0(%ebp),%ecx
081f43b5 +0xe75:  mov    %ecx,0x20(%esp)
081f43b9 +0xe79:  lea    -0x1a3(%ebp),%edx
081f43bf +0xe7f:  add    $0x18,%edx
081f43c2 +0xe82:  mov    %edx,0x1c(%esp)
081f43c6 +0xe86:  mov    -0x2ec(%ebp),%edx
081f43cc +0xe8c:  mov    %edx,0x18(%esp)
081f43d0 +0xe90:  lea    -0x1a3(%ebp),%edx
081f43d6 +0xe96:  add    $0x3a,%edx
081f43d9 +0xe99:  mov    %edx,0x14(%esp)
081f43dd +0xe9d:  mov    %edi,0x10(%esp)
081f43e1 +0xea1:  mov    %esi,0xc(%esp)
081f43e5 +0xea5:  mov    %ebx,0x8(%esp)
081f43e9 +0xea9:  mov    0xc(%ebp),%edx
081f43ec +0xeac:  mov    %edx,0x4(%esp)
081f43f0 +0xeb0:  mov    %eax,(%esp)
081f43f3 +0xeb3:  call   086c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>  ; GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)
081f43f8 +0xeb8:  mov    $0x0,%ebx
081f43fd +0xebd:  mov    %ebx,%eax
081f43ff +0xebf:  lea    -0xc(%ebp),%esp
081f4402 +0xec2:  add    $0x0,%esp
081f4405 +0xec5:  pop    %ebx
081f4406 +0xec6:  pop    %esi
081f4407 +0xec7:  pop    %edi
081f4408 +0xec8:  pop    %ebp
081f4409 +0xec9:  ret
```

## 反编译 C

```c
// DisPatcher_SendMess::dispatch_sig @ 0x81f3540

/* DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SendMess::dispatch_sig(DisPatcher_SendMess *this,CUser *param_1,PacketBuf *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  size_t __n;
  char *__src;
  CMonitorServerProxy *this_00;
  CInventory *pCVar5;
  uint uVar6;
  GameWorld *pGVar7;
  undefined4 uVar8;
  Packet_Monitor_Other_Channel_Chat local_2e2 [2];
  ushort local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  char local_2d0;
  undefined4 local_2cf;
  uint local_2cb;
  undefined1 local_2c7;
  undefined1 auStack_2c6 [30];
  byte local_2a8;
  char acStack_2a7 [269];
  byte local_19a;
  ushort local_199;
  uint local_197;
  size_t local_193;
  char acStack_18f [30];
  size_t local_171;
  char acStack_16d [256];
  char local_6d;
  string local_6c;
  string local_68 [6];
  uchar local_62;
  allocator<char> local_61;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  CItem *local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar8 = 0;
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,(char *)&local_19a);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_short(param_2,&local_199);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_int(param_2,&local_197);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_2,(int *)&local_171);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_str(param_2,acStack_16d,0x100,local_171);
            if (cVar2 == '\x01') {
              pCVar4 = (CDataManager *)G_CDataManager();
              CDataManager::rewriteUsableEmoticon(pCVar4,param_1,acStack_16d);
              cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
              if ((cVar2 == '\0') || ((local_19a < 9 && ((1 << (local_19a & 0x1f) & 0x144U) != 0))))
              {
                if ((local_19a == 0x24) || ((local_19a == 0x25 || (local_19a == 0x26)))) {
                  cVar2 = PacketBuf::get_int(param_2,(int *)&local_193);
                  if (cVar2 == '\x01') {
                    cVar2 = PacketBuf::get_str(param_2,acStack_18f,0x1e,local_193);
                    if (cVar2 == '\x01') {
                      cVar2 = PacketBuf::get_byte(param_2,&local_6d);
                      if (cVar2 == '\x01') {
                        Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat
                                  (local_2e2);
                        if (local_19a == 0x24) {
                          local_2d8 = 7;
                        }
                        else if (local_19a == 0x25) {
                          local_2d8 = 0x21;
                        }
                        else {
                          local_2d8 = 1;
                        }
                        local_2d4 = CUser::get_acc_id(param_1);
                        local_2cf = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                        local_2d0 = local_6d;
                        local_2cb = local_197;
                        local_2c7 = (undefined1)local_193;
                        local_2a8 = (byte)local_171;
                        memcpy(auStack_2c6,acStack_18f,local_193);
                        memcpy(acStack_2a7,acStack_16d,local_171);
                        local_2e0 = local_2a8 + 0x3b;
                        local_60 = (uint)local_2e0;
                        CCommunityServerProxy::SendTcpPacket
                                  (GlobalData::s_community_proxy,(char *)local_2e2,local_60);
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = LineFunc(0x7f4f,
                                         "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar8 = LineFunc(0x7f4d,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar8 = LineFunc(0x7f4b,
                                     "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  if (((local_19a == 7) || (local_19a == 1)) || (local_19a == 0x21)) {
                    cVar2 = PacketBuf::get_int(param_2,(int *)&local_193);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x7f71,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    cVar2 = PacketBuf::get_str(param_2,acStack_18f,0x1e,local_193);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x7f73,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    local_62 = '\0';
                    cVar2 = PacketBuf::get_byte(param_2,&local_62);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x7f78,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    if (local_19a == 7) {
                      Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat
                                (local_2e2);
                      local_2cf = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      local_2c7 = (undefined1)local_193;
                      memcpy(auStack_2c6,acStack_18f,local_193);
                      local_2a8 = (byte)local_171;
                      memcpy(acStack_2a7,acStack_16d,local_171);
                      std::allocator<char>::allocator();
                    /* try { // try from 081f3b63 to 081f3b67 has its CatchHandler @ 081f3b6a */
                      std::string::string(local_68,acStack_2a7,(allocator *)&local_61);
                      std::allocator<char>::~allocator(&local_61);
                    /* try { // try from 081f3b90 to 081f3baa has its CatchHandler @ 081f3c7d */
                      CSyncSlangFilter::GetInstance();
                      CSyncSlangFilter::Filter(&local_6c);
                    /* try { // try from 081f3bb4 to 081f3c53 has its CatchHandler @ 081f3c5b */
                      iVar3 = std::string::size((string *)&local_6c);
                      if (iVar3 != 0) {
                        __n = std::string::size((string *)&local_6c);
                        __src = (char *)std::string::c_str((string *)&local_6c);
                        strncpy(acStack_2a7,__src,__n);
                        local_2e0 = local_2a8 + 0x3b;
                        local_5c = (uint)local_2e0;
                        uVar8 = CUser::GetServerGroup(param_1);
                        this_00 = (CMonitorServerProxy *)
                                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                            (GlobalData::s_monitor_proxy_mgr,uVar8);
                        CMonitorServerProxy::SendPacket(this_00,(char *)local_2e2,local_5c);
                      }
                    /* try { // try from 081f3c76 to 081f3c7a has its CatchHandler @ 081f3c7d */
                      std::string::~string((string *)&local_6c);
                      std::string::~string(local_68);
                      return 0;
                    }
                  }
                  else if (((local_19a == 0xb) || (local_19a == 0xc)) || (local_19a == 0x23)) {
                    local_58 = (uint)local_199;
                    local_54 = local_197;
                    iVar3 = GetInvenTypeFromItemSpace(local_58);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_50 = CInventory::GetInvenRef(pCVar5,iVar3,local_54);
                    if ((local_50 == 0) ||
                       (((*(int *)(local_50 + 2) != 0x24 && (*(int *)(local_50 + 2) != 0x382)) &&
                        ((*(int *)(local_50 + 2) != 0x28d150 &&
                         ((*(int *)(local_50 + 2) != 0x292090dd &&
                          (*(int *)(local_50 + 2) != 0x29209138)))))))) {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                    local_4c = CSecu_ProtectionField::Check
                                         (GlobalData::s_pSecuProtectionField,param_1,0x24);
                    if (local_4c != 0) {
                      CUser::SendCmdErrorPacket(param_1,0x11,local_4c & 0xff);
                      return 0;
                    }
                    iVar3 = GetInvenTypeFromItemSpace(local_58);
                    cVar2 = CUser::CheckItemLock(param_1,iVar3,local_54);
                    if (cVar2 != '\0') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0xd5);
                      return 0;
                    }
                    cVar2 = CUser::use_stackable(param_1,(short)local_54,local_58,-1,-1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  else if ((local_19a == 0xd) || (local_19a == 0xf)) {
                    local_48 = (uint)local_199;
                    local_44 = local_197;
                    iVar3 = GetInvenTypeFromItemSpace(local_48);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_40 = CInventory::GetInvenRef(pCVar5,iVar3,local_44);
                    if (local_40 == 0) {
                      uVar8 = LineFunc(0x8020,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    if (((*(int *)(local_40 + 2) != 0x25) || (local_19a != 0xd)) &&
                       ((*(int *)(local_40 + 2) != 0x28992f || (local_19a != 0xf)))) {
                      uVar8 = LineFunc(0x8025,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    local_3c = CSecu_ProtectionField::Check
                                         (GlobalData::s_pSecuProtectionField,param_1,0x24);
                    if (local_3c != 0) {
                      CUser::SendCmdErrorPacket(param_1,0x11,local_3c & 0xff);
                      return 0;
                    }
                    iVar3 = GetInvenTypeFromItemSpace(local_48);
                    cVar2 = CUser::CheckItemLock(param_1,iVar3,local_44);
                    if (cVar2 != '\0') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0xd5);
                      return 0;
                    }
                    cVar2 = CUser::use_stackable(param_1,(short)local_44,local_48,-1,-1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  else if (local_19a == 0xe) {
                    local_38 = (uint)local_199;
                    local_34 = local_197;
                    iVar3 = GetInvenTypeFromItemSpace(local_38);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_30 = CInventory::GetInvenRef(pCVar5,iVar3,local_34);
                    if ((local_30 == 0) || (*(int *)(local_30 + 2) != 0x460)) {
                      uVar8 = LineFunc(0x8053,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    uVar6 = CUser::get_acc_id(param_1);
                    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x8057,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    cVar2 = CUser::use_stackable(param_1,(short)local_34,local_38,-1,-1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  else if (local_19a == 0x22) {
                    local_2c = (uint)local_199;
                    local_28 = local_197;
                    iVar3 = CUser::get_state(param_1);
                    if (iVar3 != 3) {
                      return 0;
                    }
                    iVar3 = GetInvenTypeFromItemSpace(local_2c);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_24 = CInventory::GetInvenRef(pCVar5,iVar3,local_28);
                    if ((local_24 == 0) || (*(int *)(local_24 + 2) != 0x1d9e)) {
                      uVar8 = LineFunc(0x806a,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    iVar3 = *(int *)(local_24 + 2);
                    pCVar4 = (CDataManager *)G_CDataManager();
                    local_20 = (CItem *)CDataManager::find_item(pCVar4,iVar3);
                    if (local_20 == (CItem *)0x0) {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                    cVar2 = CItem::is_stackable(local_20);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                    uVar8 = GetInvenTypeFromItemSpace(local_2c);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    cVar2 = CInventory::delete_item(pCVar5,uVar8,local_28,1,3,1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  uVar6 = CUser::get_acc_id(param_1);
                  cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
                  bVar1 = local_19a;
                  if (cVar2 != '\0') {
                    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                    DB_InsertPoliceSaveChatting::makeRequest(uVar6,bVar1,acStack_16d);
                  }
                  pGVar7 = (GameWorld *)G_GameWorld();
                  GameWorld::send_chat_msg
                            (pGVar7,param_1,(int)(char)local_19a,local_199,local_197,acStack_16d,
                             local_171,acStack_18f,local_193,0xc);
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              uVar8 = LineFunc(0x7ef9,
                               "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0
                               ,0);
            }
          }
          else {
            uVar8 = LineFunc(0x7ef8,
                             "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0,0
                            );
          }
        }
        else {
          uVar8 = LineFunc(0x7ef7,
                           "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0,0);
        }
      }
      else {
        uVar8 = LineFunc(0x7ef6,"virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar8 = LineFunc(0x7ef5,"virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar8;
}
```
