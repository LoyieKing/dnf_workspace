# dispatch_sig

`_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildInfo` | `0x084cb726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cb726  _ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser*, char*, int)
# range [0x084cb726, 0x084cbb93]
084cb726 +0x000:  push   %ebp
084cb727 +0x001:  mov    %esp,%ebp
084cb729 +0x003:  push   %esi
084cb72a +0x004:  push   %ebx
084cb72b +0x005:  sub    $0x50,%esp
084cb72e +0x008:  mov    0xc(%ebp),%eax
084cb731 +0x00b:  mov    %eax,(%esp)
084cb734 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cb739 +0x013:  test   %eax,%eax
084cb73b +0x015:  sete   %al
084cb73e +0x018:  test   %al,%al
084cb740 +0x01a:  je     084cb74c <+0x26>
084cb742 +0x01c:  mov    $0x0,%ebx
084cb747 +0x021:  jmp    084cbb8b <+0x465>
084cb74c +0x026:  mov    0x10(%ebp),%eax
084cb74f +0x029:  mov    %eax,-0x1c(%ebp)
084cb752 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cb75a +0x034:  mov    0xc(%ebp),%eax
084cb75d +0x037:  mov    %eax,(%esp)
084cb760 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb765 +0x03f:  mov    %eax,%edx
084cb767 +0x041:  mov    -0x1c(%ebp),%eax
084cb76a +0x044:  mov    0xe(%eax),%eax
084cb76d +0x047:  cmp    %eax,%edx
084cb76f +0x049:  setne  %al
084cb772 +0x04c:  test   %al,%al
084cb774 +0x04e:  je     084cb7cd <+0xa7>
084cb776 +0x050:  mov    -0x1c(%ebp),%eax
084cb779 +0x053:  mov    0xe(%eax),%ebx
084cb77c +0x056:  movl   $0xffffffff,0x4(%esp)
084cb784 +0x05e:  mov    0xc(%ebp),%eax
084cb787 +0x061:  mov    %eax,(%esp)
084cb78a +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb78f +0x069:  mov    %ebx,0x18(%esp)
084cb793 +0x06d:  mov    %eax,0x14(%esp)
084cb797 +0x071:  movl   $"Inter_MonitorNoticeGuildInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cb79f +0x079:  movl   $0x2613,0xc(%esp)
084cb7a7 +0x081:  movl   $&_ZZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cb7af +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cb7b7 +0x091:  movl   $0x1,(%esp)
084cb7be +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cb7c3 +0x09d:  mov    $0x0,%ebx
084cb7c8 +0x0a2:  jmp    084cbb8b <+0x465>
084cb7cd +0x0a7:  mov    -0x1c(%ebp),%eax
084cb7d0 +0x0aa:  add    $0x16,%eax
084cb7d3 +0x0ad:  mov    %eax,0x4(%esp)
084cb7d7 +0x0b1:  mov    0xc(%ebp),%eax
084cb7da +0x0b4:  mov    %eax,(%esp)
084cb7dd +0x0b7:  call   084ece3c <_GLOBAL__I__Z7getUserj+0x3dee>  ; global constructors keyed to getUser(unsigned int)+0x3dee
084cb7e2 +0x0bc:  lea    -0x28(%ebp),%eax
084cb7e5 +0x0bf:  mov    %eax,(%esp)
084cb7e8 +0x0c2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cb7ed +0x0c7:  movl   $0x46,0x8(%esp)
084cb7f5 +0x0cf:  movl   $0x0,0x4(%esp)
084cb7fd +0x0d7:  lea    -0x28(%ebp),%eax
084cb800 +0x0da:  mov    %eax,(%esp)
084cb803 +0x0dd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cb808 +0x0e2:  mov    -0x1c(%ebp),%eax
084cb80b +0x0e5:  add    $0x16,%eax
084cb80e +0x0e8:  mov    %eax,(%esp)
084cb811 +0x0eb:  call   0807e3b0 <_init+0xca8>
084cb816 +0x0f0:  mov    %eax,-0x18(%ebp)
084cb819 +0x0f3:  mov    -0x18(%ebp),%eax
084cb81c +0x0f6:  mov    %eax,0x4(%esp)
084cb820 +0x0fa:  lea    -0x28(%ebp),%eax
084cb823 +0x0fd:  mov    %eax,(%esp)
084cb826 +0x100:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb82b +0x105:  mov    -0x1c(%ebp),%eax
084cb82e +0x108:  lea    0x16(%eax),%edx
084cb831 +0x10b:  mov    -0x18(%ebp),%eax
084cb834 +0x10e:  mov    %eax,0x8(%esp)
084cb838 +0x112:  mov    %edx,0x4(%esp)
084cb83c +0x116:  lea    -0x28(%ebp),%eax
084cb83f +0x119:  mov    %eax,(%esp)
084cb842 +0x11c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb847 +0x121:  movl   $0xffffffff,0x4(%esp)
084cb84f +0x129:  mov    0xc(%ebp),%eax
084cb852 +0x12c:  mov    %eax,(%esp)
084cb855 +0x12f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb85a +0x134:  mov    %eax,%edx
084cb85c +0x136:  mov    -0x1c(%ebp),%eax
084cb85f +0x139:  mov    0x2d(%eax),%eax
084cb862 +0x13c:  cmp    %eax,%edx
084cb864 +0x13e:  sete   %al
084cb867 +0x141:  test   %al,%al
084cb869 +0x143:  je     084cb880 <+0x15a>
084cb86b +0x145:  movl   $0x1,0x4(%esp)
084cb873 +0x14d:  lea    -0x28(%ebp),%eax
084cb876 +0x150:  mov    %eax,(%esp)
084cb879 +0x153:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb87e +0x158:  jmp    084cb893 <+0x16d>
084cb880 +0x15a:  movl   $0x0,0x4(%esp)
084cb888 +0x162:  lea    -0x28(%ebp),%eax
084cb88b +0x165:  mov    %eax,(%esp)
084cb88e +0x168:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb893 +0x16d:  mov    -0x1c(%ebp),%eax
084cb896 +0x170:  movzbl 0x31(%eax),%eax
084cb89a +0x174:  movzbl %al,%eax
084cb89d +0x177:  mov    %eax,0x4(%esp)
084cb8a1 +0x17b:  lea    -0x28(%ebp),%eax
084cb8a4 +0x17e:  mov    %eax,(%esp)
084cb8a7 +0x181:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb8ac +0x186:  mov    -0x1c(%ebp),%eax
084cb8af +0x189:  movzbl 0x32(%eax),%eax
084cb8b3 +0x18d:  shr    %al
084cb8b5 +0x18f:  and    $0x1,%eax
084cb8b8 +0x192:  movzbl %al,%eax
084cb8bb +0x195:  mov    %eax,0x4(%esp)
084cb8bf +0x199:  lea    -0x28(%ebp),%eax
084cb8c2 +0x19c:  mov    %eax,(%esp)
084cb8c5 +0x19f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb8ca +0x1a4:  mov    -0x1c(%ebp),%eax
084cb8cd +0x1a7:  movzwl 0x38(%eax),%eax
084cb8d1 +0x1ab:  movzwl %ax,%eax
084cb8d4 +0x1ae:  mov    %eax,0x4(%esp)
084cb8d8 +0x1b2:  lea    -0x28(%ebp),%eax
084cb8db +0x1b5:  mov    %eax,(%esp)
084cb8de +0x1b8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cb8e3 +0x1bd:  mov    0xc(%ebp),%eax
084cb8e6 +0x1c0:  mov    %eax,(%esp)
084cb8e9 +0x1c3:  call   0822f56c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c16
084cb8ee +0x1c8:  movzbl %al,%eax
084cb8f1 +0x1cb:  mov    %eax,0x4(%esp)
084cb8f5 +0x1cf:  lea    -0x28(%ebp),%eax
084cb8f8 +0x1d2:  mov    %eax,(%esp)
084cb8fb +0x1d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb900 +0x1da:  mov    -0x1c(%ebp),%eax
084cb903 +0x1dd:  mov    0x3a(%eax),%eax
084cb906 +0x1e0:  mov    %eax,0x4(%esp)
084cb90a +0x1e4:  lea    -0x28(%ebp),%eax
084cb90d +0x1e7:  mov    %eax,(%esp)
084cb910 +0x1ea:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb915 +0x1ef:  mov    -0x1c(%ebp),%eax
084cb918 +0x1f2:  movzbl 0x3e(%eax),%eax
084cb91c +0x1f6:  movzbl %al,%eax
084cb91f +0x1f9:  mov    %eax,0x4(%esp)
084cb923 +0x1fd:  lea    -0x28(%ebp),%eax
084cb926 +0x200:  mov    %eax,(%esp)
084cb929 +0x203:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb92e +0x208:  mov    -0x1c(%ebp),%eax
084cb931 +0x20b:  mov    0x3f(%eax),%eax
084cb934 +0x20e:  mov    %eax,0x4(%esp)
084cb938 +0x212:  lea    -0x28(%ebp),%eax
084cb93b +0x215:  mov    %eax,(%esp)
084cb93e +0x218:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb943 +0x21d:  mov    -0x1c(%ebp),%eax
084cb946 +0x220:  movzwl 0x58(%eax),%eax
084cb94a +0x224:  movzwl %ax,%eax
084cb94d +0x227:  mov    %eax,0x4(%esp)
084cb951 +0x22b:  lea    -0x28(%ebp),%eax
084cb954 +0x22e:  mov    %eax,(%esp)
084cb957 +0x231:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cb95c +0x236:  lea    -0x28(%ebp),%eax
084cb95f +0x239:  mov    %eax,(%esp)
084cb962 +0x23c:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084cb967 +0x241:  mov    %eax,-0x2c(%ebp)
084cb96a +0x244:  movl   $0x0,-0x14(%ebp)
084cb971 +0x24b:  movl   $0x0,0x4(%esp)
084cb979 +0x253:  lea    -0x28(%ebp),%eax
084cb97c +0x256:  mov    %eax,(%esp)
084cb97f +0x259:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb984 +0x25e:  movl   $0x0,-0xc(%ebp)
084cb98b +0x265:  jmp    084cba30 <+0x30a>
084cb990 +0x26a:  mov    0xc(%ebp),%eax
084cb993 +0x26d:  mov    %eax,(%esp)
084cb996 +0x270:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
084cb99b +0x275:  test   %al,%al
084cb99d +0x277:  je     084cb9d2 <+0x2ac>
084cb99f +0x279:  mov    0xc(%ebp),%eax
084cb9a2 +0x27c:  mov    %eax,(%esp)
084cb9a5 +0x27f:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
084cb9aa +0x284:  test   %al,%al
084cb9ac +0x286:  je     084cb9d2 <+0x2ac>
084cb9ae +0x288:  mov    -0xc(%ebp),%edx
084cb9b1 +0x28b:  mov    -0x1c(%ebp),%ecx
084cb9b4 +0x28e:  mov    %edx,%eax
084cb9b6 +0x290:  shl    $0x2,%eax
084cb9b9 +0x293:  add    %edx,%eax
084cb9bb +0x295:  lea    (%ecx,%eax,1),%eax
084cb9be +0x298:  add    $0x50,%eax
084cb9c1 +0x29b:  mov    0xb(%eax),%eax
084cb9c4 +0x29e:  cmp    $0xc7,%eax
084cb9c9 +0x2a3:  jle    084cb9d2 <+0x2ac>
084cb9cb +0x2a5:  mov    $0x1,%eax
084cb9d0 +0x2aa:  jmp    084cb9d7 <+0x2b1>
084cb9d2 +0x2ac:  mov    $0x0,%eax
084cb9d7 +0x2b1:  test   %al,%al
084cb9d9 +0x2b3:  je     084cba2c <+0x306>
084cb9db +0x2b5:  mov    -0xc(%ebp),%edx
084cb9de +0x2b8:  mov    -0x1c(%ebp),%ecx
084cb9e1 +0x2bb:  mov    %edx,%eax
084cb9e3 +0x2bd:  shl    $0x2,%eax
084cb9e6 +0x2c0:  add    %edx,%eax
084cb9e8 +0x2c2:  lea    (%ecx,%eax,1),%eax
084cb9eb +0x2c5:  add    $0x50,%eax
084cb9ee +0x2c8:  mov    0xb(%eax),%eax
084cb9f1 +0x2cb:  mov    %eax,0x4(%esp)
084cb9f5 +0x2cf:  lea    -0x28(%ebp),%eax
084cb9f8 +0x2d2:  mov    %eax,(%esp)
084cb9fb +0x2d5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cba00 +0x2da:  mov    -0xc(%ebp),%edx
084cba03 +0x2dd:  mov    -0x1c(%ebp),%ecx
084cba06 +0x2e0:  mov    %edx,%eax
084cba08 +0x2e2:  shl    $0x2,%eax
084cba0b +0x2e5:  add    %edx,%eax
084cba0d +0x2e7:  lea    (%ecx,%eax,1),%eax
084cba10 +0x2ea:  add    $0x5f,%eax
084cba13 +0x2ed:  movzbl (%eax),%eax
084cba16 +0x2f0:  movsbl %al,%eax
084cba19 +0x2f3:  mov    %eax,0x4(%esp)
084cba1d +0x2f7:  lea    -0x28(%ebp),%eax
084cba20 +0x2fa:  mov    %eax,(%esp)
084cba23 +0x2fd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cba28 +0x302:  addl   $0x1,-0x14(%ebp)
084cba2c +0x306:  addl   $0x1,-0xc(%ebp)
084cba30 +0x30a:  mov    -0x1c(%ebp),%eax
084cba33 +0x30d:  movzbl 0x5a(%eax),%eax
084cba37 +0x311:  movzbl %al,%eax
084cba3a +0x314:  cmp    -0xc(%ebp),%eax
084cba3d +0x317:  setg   %al
084cba40 +0x31a:  test   %al,%al
084cba42 +0x31c:  jne    084cb990 <+0x26a>
084cba48 +0x322:  mov    -0x14(%ebp),%eax
084cba4b +0x325:  mov    %eax,0x8(%esp)
084cba4f +0x329:  lea    -0x2c(%ebp),%eax
084cba52 +0x32c:  mov    %eax,0x4(%esp)
084cba56 +0x330:  lea    -0x28(%ebp),%eax
084cba59 +0x333:  mov    %eax,(%esp)
084cba5c +0x336:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084cba61 +0x33b:  mov    -0x1c(%ebp),%eax
084cba64 +0x33e:  add    $0xd4,%eax
084cba69 +0x343:  mov    %eax,(%esp)
084cba6c +0x346:  call   0807e3b0 <_init+0xca8>
084cba71 +0x34b:  mov    %eax,-0x10(%ebp)
084cba74 +0x34e:  mov    -0x10(%ebp),%eax
084cba77 +0x351:  mov    %eax,0x4(%esp)
084cba7b +0x355:  lea    -0x28(%ebp),%eax
084cba7e +0x358:  mov    %eax,(%esp)
084cba81 +0x35b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cba86 +0x360:  mov    -0x1c(%ebp),%eax
084cba89 +0x363:  lea    0xd4(%eax),%edx
084cba8f +0x369:  mov    -0x10(%ebp),%eax
084cba92 +0x36c:  mov    %eax,0x8(%esp)
084cba96 +0x370:  mov    %edx,0x4(%esp)
084cba9a +0x374:  lea    -0x28(%ebp),%eax
084cba9d +0x377:  mov    %eax,(%esp)
084cbaa0 +0x37a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cbaa5 +0x37f:  mov    -0x1c(%ebp),%eax
084cbaa8 +0x382:  movzbl 0xab(%eax),%eax
084cbaaf +0x389:  movzbl %al,%eax
084cbab2 +0x38c:  mov    %eax,0x4(%esp)
084cbab6 +0x390:  lea    -0x28(%ebp),%eax
084cbab9 +0x393:  mov    %eax,(%esp)
084cbabc +0x396:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cbac1 +0x39b:  mov    -0x1c(%ebp),%eax
084cbac4 +0x39e:  movzbl 0xb5(%eax),%eax
084cbacb +0x3a5:  movzbl %al,%eax
084cbace +0x3a8:  mov    %eax,0x4(%esp)
084cbad2 +0x3ac:  lea    -0x28(%ebp),%eax
084cbad5 +0x3af:  mov    %eax,(%esp)
084cbad8 +0x3b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cbadd +0x3b7:  mov    -0x1c(%ebp),%eax
084cbae0 +0x3ba:  mov    0xb6(%eax),%eax
084cbae6 +0x3c0:  mov    %eax,0x4(%esp)
084cbaea +0x3c4:  lea    -0x28(%ebp),%eax
084cbaed +0x3c7:  mov    %eax,(%esp)
084cbaf0 +0x3ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cbaf5 +0x3cf:  mov    -0x1c(%ebp),%eax
084cbaf8 +0x3d2:  add    $0xba,%eax
084cbafd +0x3d7:  mov    %eax,(%esp)
084cbb00 +0x3da:  call   0807e3b0 <_init+0xca8>
084cbb05 +0x3df:  mov    %eax,-0x18(%ebp)
084cbb08 +0x3e2:  mov    -0x18(%ebp),%eax
084cbb0b +0x3e5:  mov    %eax,0x4(%esp)
084cbb0f +0x3e9:  lea    -0x28(%ebp),%eax
084cbb12 +0x3ec:  mov    %eax,(%esp)
084cbb15 +0x3ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cbb1a +0x3f4:  mov    -0x1c(%ebp),%eax
084cbb1d +0x3f7:  lea    0xba(%eax),%edx
084cbb23 +0x3fd:  mov    -0x18(%ebp),%eax
084cbb26 +0x400:  mov    %eax,0x8(%esp)
084cbb2a +0x404:  mov    %edx,0x4(%esp)
084cbb2e +0x408:  lea    -0x28(%ebp),%eax
084cbb31 +0x40b:  mov    %eax,(%esp)
084cbb34 +0x40e:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cbb39 +0x413:  movl   $0x1,0x4(%esp)
084cbb41 +0x41b:  lea    -0x28(%ebp),%eax
084cbb44 +0x41e:  mov    %eax,(%esp)
084cbb47 +0x421:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cbb4c +0x426:  lea    -0x28(%ebp),%eax
084cbb4f +0x429:  mov    %eax,0x4(%esp)
084cbb53 +0x42d:  mov    0xc(%ebp),%eax
084cbb56 +0x430:  mov    %eax,(%esp)
084cbb59 +0x433:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cbb5e +0x438:  mov    $0x0,%ebx
084cbb63 +0x43d:  lea    -0x28(%ebp),%eax
084cbb66 +0x440:  mov    %eax,(%esp)
084cbb69 +0x443:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbb6e +0x448:  jmp    084cbb8b <+0x465>
084cbb70 +0x44a:  mov    %edx,%ebx
084cbb72 +0x44c:  mov    %eax,%esi
084cbb74 +0x44e:  lea    -0x28(%ebp),%eax
084cbb77 +0x451:  mov    %eax,(%esp)
084cbb7a +0x454:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbb7f +0x459:  mov    %esi,%eax
084cbb81 +0x45b:  mov    %ebx,%edx
084cbb83 +0x45d:  mov    %eax,(%esp)
084cbb86 +0x460:  call   08ae3750 <_Unwind_Resume>
084cbb8b +0x465:  mov    %ebx,%eax
084cbb8d +0x467:  add    $0x50,%esp
084cbb90 +0x46a:  pop    %ebx
084cbb91 +0x46b:  pop    %esi
084cbb92 +0x46c:  pop    %ebp
084cbb93 +0x46d:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildInfo::dispatch_sig @ 0x84cb726

/* Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_30;
  PacketGuard local_2c [12];
  int local_20;
  size_t local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 != 0) {
    local_20 = param_3;
    iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar4 == *(int *)(local_20 + 0xe)) {
      CUser::SetGuildDBInfo((CUser *)param_2,(STGuildDBInfoOnly *)(local_20 + 0x16));
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084cb803 to 084cbb5d has its CatchHandler @ 084cbb70 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x46);
      local_1c = strlen((char *)(local_20 + 0x16));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0x16),local_1c)
      ;
      iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar4 == *(int *)(local_20 + 0x2d)) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0x31));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_2c,(uint)(*(byte *)(local_20 + 0x32) >> 1 & 1));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_2c,(uint)*(ushort *)(local_20 + 0x38));
      uVar6 = CUserCharacInfo::get_guild_create_right((CUserCharacInfo *)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar6 & 0xff);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0x3a));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0x3e));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0x3f));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_2c,(uint)*(ushort *)(local_20 + 0x58));
      local_30 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2c);
      local_18 = 0;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_20 + 0x5a); local_10 = local_10 + 1)
      {
        cVar3 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)param_2);
        if (((cVar3 == '\0') ||
            (cVar3 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)param_2), cVar3 == '\0'
            )) || (*(int *)(local_20 + local_10 * 5 + 0x5b) < 200)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2c,*(int *)(local_20 + local_10 * 5 + 0x5b));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_2c,(int)*(char *)(local_20 + local_10 * 5 + 0x5f));
          local_18 = local_18 + 1;
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,&local_30,local_18);
      local_14 = strlen((char *)(local_20 + 0xd4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0xd4),local_14)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0xab));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0xb5));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0xb6));
      local_1c = strlen((char *)(local_20 + 0xba));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0xba),local_1c)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      uVar1 = *(undefined4 *)(local_20 + 0xe);
      uVar5 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser*, char*, int)",0x2613
                 ,
                 "Inter_MonitorNoticeGuildInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar5,uVar1);
    }
  }
  return 0;
}
```
