# dispatch_sig

`_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci`

`Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdateOneDayLethe` | `0x084d894c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d894c  _ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci
#           Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int)
# range [0x084d894c, 0x084d8e67]
084d894c +0x000:  push   %ebp
084d894d +0x001:  mov    %esp,%ebp
084d894f +0x003:  push   %esi
084d8950 +0x004:  push   %ebx
084d8951 +0x005:  sub    $0x50,%esp
084d8954 +0x008:  mov    0x10(%ebp),%eax
084d8957 +0x00b:  mov    %eax,-0x10(%ebp)
084d895a +0x00e:  mov    -0x10(%ebp),%eax
084d895d +0x011:  movzbl 0x4(%eax),%edx
084d8961 +0x015:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d8968 +0x01c:  cmp    %al,%dl
084d896a +0x01e:  jne    084d8ba8 <+0x25c>
084d8970 +0x024:  mov    -0x10(%ebp),%eax
084d8973 +0x027:  mov    (%eax),%eax
084d8975 +0x029:  test   %eax,%eax
084d8977 +0x02b:  je     084d8e5c <+0x510>
084d897d +0x031:  mov    0xc(%ebp),%eax
084d8980 +0x034:  mov    %eax,(%esp)
084d8983 +0x037:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d8988 +0x03c:  mov    %eax,%ebx
084d898a +0x03e:  movl   $0x0,0xc(%esp)
084d8992 +0x046:  movl   $0x3f8f,0x8(%esp)
084d899a +0x04e:  movl   $&_ZZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d89a2 +0x056:  lea    -0x30(%ebp),%eax
084d89a5 +0x059:  mov    %eax,(%esp)
084d89a8 +0x05c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d89ad +0x061:  mov    %ebx,0x8(%esp)
084d89b1 +0x065:  movl   $"ONE_DAY_LETHE : INTER_USE_LETHE, char(%s)",0x4(%esp)
084d89b9 +0x06d:  lea    -0x30(%ebp),%eax
084d89bc +0x070:  mov    %eax,(%esp)
084d89bf +0x073:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d89c4 +0x078:  mov    -0x10(%ebp),%eax
084d89c7 +0x07b:  movzbl 0x19e(%eax),%eax
084d89ce +0x082:  cmp    $0xff,%al
084d89d0 +0x084:  je     084d89e0 <+0x94>
084d89d2 +0x086:  mov    -0x10(%ebp),%eax
084d89d5 +0x089:  movzbl 0x19e(%eax),%eax
084d89dc +0x090:  test   %al,%al
084d89de +0x092:  jne    084d8a18 <+0xcc>
084d89e0 +0x094:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d89e7 +0x09b:  movzbl %al,%edx
084d89ea +0x09e:  mov    0xc(%ebp),%eax
084d89ed +0x0a1:  mov    %edx,0x4(%esp)
084d89f1 +0x0a5:  mov    %eax,(%esp)
084d89f4 +0x0a8:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
084d89f9 +0x0ad:  mov    -0x10(%ebp),%eax
084d89fc +0x0b0:  add    $0x5,%eax
084d89ff +0x0b3:  movl   $0x0,0x8(%esp)
084d8a07 +0x0bb:  mov    %eax,0x4(%esp)
084d8a0b +0x0bf:  mov    0xc(%ebp),%eax
084d8a0e +0x0c2:  mov    %eax,(%esp)
084d8a11 +0x0c5:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8a16 +0x0ca:  jmp    084d8a4e <+0x102>
084d8a18 +0x0cc:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d8a1f +0x0d3:  movzbl %al,%edx
084d8a22 +0x0d6:  mov    0xc(%ebp),%eax
084d8a25 +0x0d9:  mov    %edx,0x4(%esp)
084d8a29 +0x0dd:  mov    %eax,(%esp)
084d8a2c +0x0e0:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
084d8a31 +0x0e5:  mov    -0x10(%ebp),%eax
084d8a34 +0x0e8:  add    $0x5,%eax
084d8a37 +0x0eb:  movl   $0x1,0x8(%esp)
084d8a3f +0x0f3:  mov    %eax,0x4(%esp)
084d8a43 +0x0f7:  mov    0xc(%ebp),%eax
084d8a46 +0x0fa:  mov    %eax,(%esp)
084d8a49 +0x0fd:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8a4e +0x102:  lea    -0x3c(%ebp),%eax
084d8a51 +0x105:  mov    %eax,(%esp)
084d8a54 +0x108:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d8a59 +0x10d:  mov    0xc(%ebp),%eax
084d8a5c +0x110:  mov    %eax,(%esp)
084d8a5f +0x113:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
084d8a64 +0x118:  cmp    $0xffffffff,%eax
084d8a67 +0x11b:  sete   %al
084d8a6a +0x11e:  test   %al,%al
084d8a6c +0x120:  je     084d8aeb <+0x19f>
084d8a6e +0x122:  mov    -0x10(%ebp),%eax
084d8a71 +0x125:  movzbl 0x19e(%eax),%eax
084d8a78 +0x12c:  test   %al,%al
084d8a7a +0x12e:  jne    084d8b98 <+0x24c>
084d8a80 +0x134:  movl   $0xb4,0x8(%esp)
084d8a88 +0x13c:  movl   $0x0,0x4(%esp)
084d8a90 +0x144:  lea    -0x3c(%ebp),%eax
084d8a93 +0x147:  mov    %eax,(%esp)
084d8a96 +0x14a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d8a9b +0x14f:  movl   $0x2,0x4(%esp)
084d8aa3 +0x157:  lea    -0x3c(%ebp),%eax
084d8aa6 +0x15a:  mov    %eax,(%esp)
084d8aa9 +0x15d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d8aae +0x162:  movl   $0x1,0x4(%esp)
084d8ab6 +0x16a:  lea    -0x3c(%ebp),%eax
084d8ab9 +0x16d:  mov    %eax,(%esp)
084d8abc +0x170:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d8ac1 +0x175:  movl   $0x1,0x4(%esp)
084d8ac9 +0x17d:  lea    -0x3c(%ebp),%eax
084d8acc +0x180:  mov    %eax,(%esp)
084d8acf +0x183:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d8ad4 +0x188:  lea    -0x3c(%ebp),%eax
084d8ad7 +0x18b:  mov    %eax,0x4(%esp)
084d8adb +0x18f:  mov    0xc(%ebp),%eax
084d8ade +0x192:  mov    %eax,(%esp)
084d8ae1 +0x195:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d8ae6 +0x19a:  jmp    084d8b98 <+0x24c>
084d8aeb +0x19f:  movb   $0x0,-0x9(%ebp)
084d8aef +0x1a3:  mov    -0x10(%ebp),%eax
084d8af2 +0x1a6:  movzbl 0x19e(%eax),%eax
084d8af9 +0x1ad:  cmp    $0xff,%al
084d8afb +0x1af:  je     084d8b0b <+0x1bf>
084d8afd +0x1b1:  mov    -0x10(%ebp),%eax
084d8b00 +0x1b4:  movzbl 0x19e(%eax),%eax
084d8b07 +0x1bb:  test   %al,%al
084d8b09 +0x1bd:  jne    084d8b11 <+0x1c5>
084d8b0b +0x1bf:  movb   $0x1,-0x9(%ebp)
084d8b0f +0x1c3:  jmp    084d8b15 <+0x1c9>
084d8b11 +0x1c5:  movb   $0x2,-0x9(%ebp)
084d8b15 +0x1c9:  movl   $0xb4,0x8(%esp)
084d8b1d +0x1d1:  movl   $0x0,0x4(%esp)
084d8b25 +0x1d9:  lea    -0x3c(%ebp),%eax
084d8b28 +0x1dc:  mov    %eax,(%esp)
084d8b2b +0x1df:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d8b30 +0x1e4:  movl   $0x2,0x4(%esp)
084d8b38 +0x1ec:  lea    -0x3c(%ebp),%eax
084d8b3b +0x1ef:  mov    %eax,(%esp)
084d8b3e +0x1f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d8b43 +0x1f7:  movsbl -0x9(%ebp),%eax
084d8b47 +0x1fb:  mov    %eax,0x4(%esp)
084d8b4b +0x1ff:  lea    -0x3c(%ebp),%eax
084d8b4e +0x202:  mov    %eax,(%esp)
084d8b51 +0x205:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d8b56 +0x20a:  movl   $0x1,0x4(%esp)
084d8b5e +0x212:  lea    -0x3c(%ebp),%eax
084d8b61 +0x215:  mov    %eax,(%esp)
084d8b64 +0x218:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d8b69 +0x21d:  lea    -0x3c(%ebp),%eax
084d8b6c +0x220:  mov    %eax,0x4(%esp)
084d8b70 +0x224:  mov    0xc(%ebp),%eax
084d8b73 +0x227:  mov    %eax,(%esp)
084d8b76 +0x22a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d8b7b +0x22f:  jmp    084d8b98 <+0x24c>
084d8b7d +0x231:  mov    %edx,%ebx
084d8b7f +0x233:  mov    %eax,%esi
084d8b81 +0x235:  lea    -0x3c(%ebp),%eax
084d8b84 +0x238:  mov    %eax,(%esp)
084d8b87 +0x23b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d8b8c +0x240:  mov    %esi,%eax
084d8b8e +0x242:  mov    %ebx,%edx
084d8b90 +0x244:  mov    %eax,(%esp)
084d8b93 +0x247:  call   08ae3750 <_Unwind_Resume>
084d8b98 +0x24c:  lea    -0x3c(%ebp),%eax
084d8b9b +0x24f:  mov    %eax,(%esp)
084d8b9e +0x252:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d8ba3 +0x257:  jmp    084d8e5c <+0x510>
084d8ba8 +0x25c:  mov    -0x10(%ebp),%eax
084d8bab +0x25f:  movzbl 0x4(%eax),%edx
084d8baf +0x263:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d8bb6 +0x26a:  cmp    %al,%dl
084d8bb8 +0x26c:  jne    084d8cd0 <+0x384>
084d8bbe +0x272:  mov    -0x10(%ebp),%eax
084d8bc1 +0x275:  mov    (%eax),%eax
084d8bc3 +0x277:  test   %eax,%eax
084d8bc5 +0x279:  je     084d8e5b <+0x50f>
084d8bcb +0x27f:  mov    0xc(%ebp),%eax
084d8bce +0x282:  mov    %eax,(%esp)
084d8bd1 +0x285:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d8bd6 +0x28a:  mov    %eax,%ebx
084d8bd8 +0x28c:  movl   $0x0,0xc(%esp)
084d8be0 +0x294:  movl   $0x3fbd,0x8(%esp)
084d8be8 +0x29c:  movl   $&_ZZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d8bf0 +0x2a4:  lea    -0x20(%ebp),%eax
084d8bf3 +0x2a7:  mov    %eax,(%esp)
084d8bf6 +0x2aa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d8bfb +0x2af:  mov    %ebx,0x8(%esp)
084d8bff +0x2b3:  movl   $"ONE_DAY_LETHE : INTER_CONFIRM_SKILL_STATE, char(%s)",0x4(%esp)
084d8c07 +0x2bb:  lea    -0x20(%ebp),%eax
084d8c0a +0x2be:  mov    %eax,(%esp)
084d8c0d +0x2c1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d8c12 +0x2c6:  mov    0xc(%ebp),%eax
084d8c15 +0x2c9:  mov    %eax,(%esp)
084d8c18 +0x2cc:  call   086b0594 <_ZN8WongWork14CHandlePremium30handleRemoveOneDayLethePremiumEP5CUser>  ; WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*)
084d8c1d +0x2d1:  mov    -0x10(%ebp),%eax
084d8c20 +0x2d4:  movzbl 0x19e(%eax),%eax
084d8c27 +0x2db:  cmp    $0xff,%al
084d8c29 +0x2dd:  je     084d8c39 <+0x2ed>
084d8c2b +0x2df:  mov    -0x10(%ebp),%eax
084d8c2e +0x2e2:  movzbl 0x19e(%eax),%eax
084d8c35 +0x2e9:  test   %al,%al
084d8c37 +0x2eb:  jne    084d8c85 <+0x339>
084d8c39 +0x2ed:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d8c40 +0x2f4:  movzbl %al,%edx
084d8c43 +0x2f7:  mov    0xc(%ebp),%eax
084d8c46 +0x2fa:  mov    %edx,0x4(%esp)
084d8c4a +0x2fe:  mov    %eax,(%esp)
084d8c4d +0x301:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
084d8c52 +0x306:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%edx
084d8c59 +0x30d:  mov    -0x10(%ebp),%eax
084d8c5c +0x310:  mov    %dl,0x19d(%eax)
084d8c62 +0x316:  mov    -0x10(%ebp),%eax
084d8c65 +0x319:  add    $0x5,%eax
084d8c68 +0x31c:  movl   $0x0,0x8(%esp)
084d8c70 +0x324:  mov    %eax,0x4(%esp)
084d8c74 +0x328:  mov    0xc(%ebp),%eax
084d8c77 +0x32b:  mov    %eax,(%esp)
084d8c7a +0x32e:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8c7f +0x333:  nop
084d8c80 +0x334:  jmp    084d8e5c <+0x510>
084d8c85 +0x339:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d8c8c +0x340:  movzbl %al,%edx
084d8c8f +0x343:  mov    0xc(%ebp),%eax
084d8c92 +0x346:  mov    %edx,0x4(%esp)
084d8c96 +0x34a:  mov    %eax,(%esp)
084d8c99 +0x34d:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
084d8c9e +0x352:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%edx
084d8ca5 +0x359:  mov    -0x10(%ebp),%eax
084d8ca8 +0x35c:  mov    %dl,0x19d(%eax)
084d8cae +0x362:  mov    -0x10(%ebp),%eax
084d8cb1 +0x365:  add    $0x5,%eax
084d8cb4 +0x368:  movl   $0x1,0x8(%esp)
084d8cbc +0x370:  mov    %eax,0x4(%esp)
084d8cc0 +0x374:  mov    0xc(%ebp),%eax
084d8cc3 +0x377:  mov    %eax,(%esp)
084d8cc6 +0x37a:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8ccb +0x37f:  jmp    084d8e5c <+0x510>
084d8cd0 +0x384:  mov    -0x10(%ebp),%eax
084d8cd3 +0x387:  movzbl 0x4(%eax),%edx
084d8cd7 +0x38b:  movzbl &_ZN20CPremiumLetheManager16INIT_LETHE_SKILLE,%eax
084d8cde +0x392:  cmp    %al,%dl
084d8ce0 +0x394:  jne    084d8d99 <+0x44d>
084d8ce6 +0x39a:  mov    -0x10(%ebp),%eax
084d8ce9 +0x39d:  movzbl 0x19e(%eax),%eax
084d8cf0 +0x3a4:  cmp    $0xff,%al
084d8cf2 +0x3a6:  je     084d8d02 <+0x3b6>
084d8cf4 +0x3a8:  mov    -0x10(%ebp),%eax
084d8cf7 +0x3ab:  movzbl 0x19e(%eax),%eax
084d8cfe +0x3b2:  test   %al,%al
084d8d00 +0x3b4:  jne    084d8d4e <+0x402>
084d8d02 +0x3b6:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d8d09 +0x3bd:  movzbl %al,%edx
084d8d0c +0x3c0:  mov    0xc(%ebp),%eax
084d8d0f +0x3c3:  mov    %edx,0x4(%esp)
084d8d13 +0x3c7:  mov    %eax,(%esp)
084d8d16 +0x3ca:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
084d8d1b +0x3cf:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%edx
084d8d22 +0x3d6:  mov    -0x10(%ebp),%eax
084d8d25 +0x3d9:  mov    %dl,0x19d(%eax)
084d8d2b +0x3df:  mov    -0x10(%ebp),%eax
084d8d2e +0x3e2:  add    $0x5,%eax
084d8d31 +0x3e5:  movl   $0x0,0x8(%esp)
084d8d39 +0x3ed:  mov    %eax,0x4(%esp)
084d8d3d +0x3f1:  mov    0xc(%ebp),%eax
084d8d40 +0x3f4:  mov    %eax,(%esp)
084d8d43 +0x3f7:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8d48 +0x3fc:  nop
084d8d49 +0x3fd:  jmp    084d8e5c <+0x510>
084d8d4e +0x402:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d8d55 +0x409:  movzbl %al,%edx
084d8d58 +0x40c:  mov    0xc(%ebp),%eax
084d8d5b +0x40f:  mov    %edx,0x4(%esp)
084d8d5f +0x413:  mov    %eax,(%esp)
084d8d62 +0x416:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
084d8d67 +0x41b:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%edx
084d8d6e +0x422:  mov    -0x10(%ebp),%eax
084d8d71 +0x425:  mov    %dl,0x19d(%eax)
084d8d77 +0x42b:  mov    -0x10(%ebp),%eax
084d8d7a +0x42e:  add    $0x5,%eax
084d8d7d +0x431:  movl   $0x1,0x8(%esp)
084d8d85 +0x439:  mov    %eax,0x4(%esp)
084d8d89 +0x43d:  mov    0xc(%ebp),%eax
084d8d8c +0x440:  mov    %eax,(%esp)
084d8d8f +0x443:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8d94 +0x448:  jmp    084d8e5c <+0x510>
084d8d99 +0x44d:  mov    -0x10(%ebp),%eax
084d8d9c +0x450:  movzbl 0x4(%eax),%edx
084d8da0 +0x454:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d8da7 +0x45b:  cmp    %al,%dl
084d8da9 +0x45d:  jne    084d8e5c <+0x510>
084d8daf +0x463:  mov    -0x10(%ebp),%eax
084d8db2 +0x466:  movzbl 0x19e(%eax),%eax
084d8db9 +0x46d:  cmp    $0xff,%al
084d8dbb +0x46f:  je     084d8dcb <+0x47f>
084d8dbd +0x471:  mov    -0x10(%ebp),%eax
084d8dc0 +0x474:  movzbl 0x19e(%eax),%eax
084d8dc7 +0x47b:  test   %al,%al
084d8dc9 +0x47d:  jne    084d8e13 <+0x4c7>
084d8dcb +0x47f:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d8dd2 +0x486:  movzbl %al,%edx
084d8dd5 +0x489:  mov    0xc(%ebp),%eax
084d8dd8 +0x48c:  mov    %edx,0x4(%esp)
084d8ddc +0x490:  mov    %eax,(%esp)
084d8ddf +0x493:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
084d8de4 +0x498:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
084d8deb +0x49f:  mov    -0x10(%ebp),%eax
084d8dee +0x4a2:  mov    %dl,0x19d(%eax)
084d8df4 +0x4a8:  mov    -0x10(%ebp),%eax
084d8df7 +0x4ab:  add    $0x5,%eax
084d8dfa +0x4ae:  movl   $0x0,0x8(%esp)
084d8e02 +0x4b6:  mov    %eax,0x4(%esp)
084d8e06 +0x4ba:  mov    0xc(%ebp),%eax
084d8e09 +0x4bd:  mov    %eax,(%esp)
084d8e0c +0x4c0:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8e11 +0x4c5:  jmp    084d8e5c <+0x510>
084d8e13 +0x4c7:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d8e1a +0x4ce:  movzbl %al,%edx
084d8e1d +0x4d1:  mov    0xc(%ebp),%eax
084d8e20 +0x4d4:  mov    %edx,0x4(%esp)
084d8e24 +0x4d8:  mov    %eax,(%esp)
084d8e27 +0x4db:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
084d8e2c +0x4e0:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
084d8e33 +0x4e7:  mov    -0x10(%ebp),%eax
084d8e36 +0x4ea:  mov    %dl,0x19d(%eax)
084d8e3c +0x4f0:  mov    -0x10(%ebp),%eax
084d8e3f +0x4f3:  add    $0x5,%eax
084d8e42 +0x4f6:  movl   $0x1,0x8(%esp)
084d8e4a +0x4fe:  mov    %eax,0x4(%esp)
084d8e4e +0x502:  mov    0xc(%ebp),%eax
084d8e51 +0x505:  mov    %eax,(%esp)
084d8e54 +0x508:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d8e59 +0x50d:  jmp    084d8e5c <+0x510>
084d8e5b +0x50f:  nop
084d8e5c +0x510:  mov    $0x0,%eax
084d8e61 +0x515:  add    $0x50,%esp
084d8e64 +0x518:  pop    %ebx
084d8e65 +0x519:  pop    %esi
084d8e66 +0x51a:  pop    %ebp
084d8e67 +0x51b:  ret
```

## 反编译 C

```c
// Inter_UpdateOneDayLethe::dispatch_sig @ 0x84d894c

/* Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateOneDayLethe::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  char local_d;
  
  local_14 = param_3;
  if (*(uchar *)(param_3 + 4) == CPremiumLetheManager::USE_LETHE_STATE) {
    if (*(int *)param_3 != 0) {
      uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int)",
                         0x3f8f,0);
      cMyTrace::operator()(local_34,"ONE_DAY_LETHE : INTER_USE_LETHE, char(%s)",uVar1);
      if ((*(char *)(local_14 + 0x19e) == -1) || (*(char *)(local_14 + 0x19e) == '\0')) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
      }
      else {
        CUserCharacInfo::SetOneDayLetheFlag2ND
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
      }
      PacketGuard::PacketGuard(local_40);
      iVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_2);
      if (iVar2 == -1) {
        if (*(char *)(local_14 + 0x19e) == '\0') {
                    /* try { // try from 084d8a96 to 084d8b7a has its CatchHandler @ 084d8b7d */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xb4);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
          CUser::Send((CUser *)param_2,local_40);
        }
      }
      else {
        if ((*(char *)(local_14 + 0x19e) == -1) || (*(char *)(local_14 + 0x19e) == '\0')) {
          local_d = '\x01';
        }
        else {
          local_d = '\x02';
        }
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xb4);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)local_d);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
        CUser::Send((CUser *)param_2,local_40);
      }
      PacketGuard::~PacketGuard(local_40);
    }
  }
  else if (*(char *)(param_3 + 4) == CPremiumLetheManager::SKILL_CONFIRM_STATE) {
    if (*(int *)param_3 != 0) {
      uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int)",
                         0x3fbd,0);
      cMyTrace::operator()(local_24,"ONE_DAY_LETHE : INTER_CONFIRM_SKILL_STATE, char(%s)",uVar1);
      WongWork::CHandlePremium::handleRemoveOneDayLethePremium((CUser *)param_2);
      if ((*(char *)(local_14 + 0x19e) == -1) || (*(char *)(local_14 + 0x19e) == '\0')) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        *(char *)(local_14 + 0x19d) = CPremiumLetheManager::SKILL_CONFIRM_STATE;
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
      }
      else {
        CUserCharacInfo::SetOneDayLetheFlag2ND
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        *(char *)(local_14 + 0x19d) = CPremiumLetheManager::SKILL_CONFIRM_STATE;
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
      }
    }
  }
  else if (*(char *)(param_3 + 4) == CPremiumLetheManager::INIT_LETHE_SKILL) {
    if ((*(char *)(param_3 + 0x19e) == -1) || (*(char *)(param_3 + 0x19e) == '\0')) {
      CUserCharacInfo::SetOneDayLetheFlag
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
    }
    else {
      CUserCharacInfo::SetOneDayLetheFlag2ND
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
    }
  }
  else if (*(uchar *)(param_3 + 4) == CPremiumLetheManager::NOT_USE_LETHE_STATE) {
    if ((*(char *)(param_3 + 0x19e) == -1) || (*(char *)(param_3 + 0x19e) == '\0')) {
      CUserCharacInfo::SetOneDayLetheFlag
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
    }
    else {
      CUserCharacInfo::SetOneDayLetheFlag2ND
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
    }
  }
  return 0;
}
```
