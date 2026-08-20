# dispatch_sig

`_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci`

`Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallMemberList` | `0x084cddac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cddac  _ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci
#           Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int)
# range [0x084cddac, 0x084ce163]
084cddac +0x000:  push   %ebp
084cddad +0x001:  mov    %esp,%ebp
084cddaf +0x003:  push   %esi
084cddb0 +0x004:  push   %ebx
084cddb1 +0x005:  sub    $0x50,%esp
084cddb4 +0x008:  mov    0xc(%ebp),%eax
084cddb7 +0x00b:  mov    %eax,(%esp)
084cddba +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cddbf +0x013:  test   %eax,%eax
084cddc1 +0x015:  sete   %al
084cddc4 +0x018:  test   %al,%al
084cddc6 +0x01a:  je     084cddd2 <+0x26>
084cddc8 +0x01c:  mov    $0x0,%ebx
084cddcd +0x021:  jmp    084ce15a <+0x3ae>
084cddd2 +0x026:  mov    0xc(%ebp),%eax
084cddd5 +0x029:  mov    %eax,(%esp)
084cddd8 +0x02c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
084cdddd +0x031:  test   %eax,%eax
084cdddf +0x033:  sete   %al
084cdde2 +0x036:  test   %al,%al
084cdde4 +0x038:  je     084cde33 <+0x87>
084cdde6 +0x03a:  movl   $0xffffffff,0x4(%esp)
084cddee +0x042:  mov    0xc(%ebp),%eax
084cddf1 +0x045:  mov    %eax,(%esp)
084cddf4 +0x048:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cddf9 +0x04d:  mov    %eax,0x14(%esp)
084cddfd +0x051:  movl   $"MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)",0x10(%esp)
084cde05 +0x059:  movl   $0x298c,0xc(%esp)
084cde0d +0x061:  movl   $&_ZZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cde15 +0x069:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cde1d +0x071:  movl   $0x1,(%esp)
084cde24 +0x078:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cde29 +0x07d:  mov    $0x0,%ebx
084cde2e +0x082:  jmp    084ce15a <+0x3ae>
084cde33 +0x087:  mov    0x10(%ebp),%eax
084cde36 +0x08a:  mov    %eax,-0x20(%ebp)
084cde39 +0x08d:  movl   $0xffffffff,0x4(%esp)
084cde41 +0x095:  mov    0xc(%ebp),%eax
084cde44 +0x098:  mov    %eax,(%esp)
084cde47 +0x09b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cde4c +0x0a0:  mov    %eax,%edx
084cde4e +0x0a2:  mov    -0x20(%ebp),%eax
084cde51 +0x0a5:  mov    0xe(%eax),%eax
084cde54 +0x0a8:  cmp    %eax,%edx
084cde56 +0x0aa:  setne  %al
084cde59 +0x0ad:  test   %al,%al
084cde5b +0x0af:  je     084cdeb4 <+0x108>
084cde5d +0x0b1:  mov    -0x20(%ebp),%eax
084cde60 +0x0b4:  mov    0xe(%eax),%ebx
084cde63 +0x0b7:  movl   $0xffffffff,0x4(%esp)
084cde6b +0x0bf:  mov    0xc(%ebp),%eax
084cde6e +0x0c2:  mov    %eax,(%esp)
084cde71 +0x0c5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cde76 +0x0ca:  mov    %ebx,0x18(%esp)
084cde7a +0x0ce:  mov    %eax,0x14(%esp)
084cde7e +0x0d2:  movl   $"MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cde86 +0x0da:  movl   $0x2993,0xc(%esp)
084cde8e +0x0e2:  movl   $&_ZZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cde96 +0x0ea:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cde9e +0x0f2:  movl   $0x1,(%esp)
084cdea5 +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cdeaa +0x0fe:  mov    $0x0,%ebx
084cdeaf +0x103:  jmp    084ce15a <+0x3ae>
084cdeb4 +0x108:  lea    -0x2c(%ebp),%eax
084cdeb7 +0x10b:  mov    %eax,(%esp)
084cdeba +0x10e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cdebf +0x113:  movl   $0x52,0x8(%esp)
084cdec7 +0x11b:  movl   $0x1,0x4(%esp)
084cdecf +0x123:  lea    -0x2c(%ebp),%eax
084cded2 +0x126:  mov    %eax,(%esp)
084cded5 +0x129:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cdeda +0x12e:  movl   $0x1,0x4(%esp)
084cdee2 +0x136:  lea    -0x2c(%ebp),%eax
084cdee5 +0x139:  mov    %eax,(%esp)
084cdee8 +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cdeed +0x141:  mov    -0x20(%ebp),%eax
084cdef0 +0x144:  add    $0x12,%eax
084cdef3 +0x147:  mov    %eax,-0x1c(%ebp)
084cdef6 +0x14a:  mov    -0x1c(%ebp),%eax
084cdef9 +0x14d:  movzbl (%eax),%eax
084cdefc +0x150:  movzbl %al,%eax
084cdeff +0x153:  mov    %eax,0x4(%esp)
084cdf03 +0x157:  lea    -0x2c(%ebp),%eax
084cdf06 +0x15a:  mov    %eax,(%esp)
084cdf09 +0x15d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cdf0e +0x162:  mov    -0x1c(%ebp),%eax
084cdf11 +0x165:  movzbl 0x1(%eax),%eax
084cdf15 +0x169:  movzbl %al,%eax
084cdf18 +0x16c:  mov    %eax,0x4(%esp)
084cdf1c +0x170:  lea    -0x2c(%ebp),%eax
084cdf1f +0x173:  mov    %eax,(%esp)
084cdf22 +0x176:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cdf27 +0x17b:  mov    -0x1c(%ebp),%eax
084cdf2a +0x17e:  add    $0x2,%eax
084cdf2d +0x181:  mov    %eax,(%esp)
084cdf30 +0x184:  call   0807e3b0 <_init+0xca8>
084cdf35 +0x189:  mov    %eax,-0x18(%ebp)
084cdf38 +0x18c:  mov    -0x18(%ebp),%eax
084cdf3b +0x18f:  mov    %eax,0x4(%esp)
084cdf3f +0x193:  lea    -0x2c(%ebp),%eax
084cdf42 +0x196:  mov    %eax,(%esp)
084cdf45 +0x199:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cdf4a +0x19e:  mov    -0x1c(%ebp),%eax
084cdf4d +0x1a1:  lea    0x2(%eax),%edx
084cdf50 +0x1a4:  mov    -0x18(%ebp),%eax
084cdf53 +0x1a7:  mov    %eax,0x8(%esp)
084cdf57 +0x1ab:  mov    %edx,0x4(%esp)
084cdf5b +0x1af:  lea    -0x2c(%ebp),%eax
084cdf5e +0x1b2:  mov    %eax,(%esp)
084cdf61 +0x1b5:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cdf66 +0x1ba:  mov    -0x1c(%ebp),%eax
084cdf69 +0x1bd:  movzbl 0x20(%eax),%eax
084cdf6d +0x1c1:  movsbl %al,%eax
084cdf70 +0x1c4:  mov    %eax,0x4(%esp)
084cdf74 +0x1c8:  lea    -0x2c(%ebp),%eax
084cdf77 +0x1cb:  mov    %eax,(%esp)
084cdf7a +0x1ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cdf7f +0x1d3:  mov    -0x1c(%ebp),%eax
084cdf82 +0x1d6:  movzbl 0x21(%eax),%eax
084cdf86 +0x1da:  movzbl %al,%eax
084cdf89 +0x1dd:  mov    %eax,0x4(%esp)
084cdf8d +0x1e1:  lea    -0x2c(%ebp),%eax
084cdf90 +0x1e4:  mov    %eax,(%esp)
084cdf93 +0x1e7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cdf98 +0x1ec:  mov    -0x1c(%ebp),%eax
084cdf9b +0x1ef:  mov    0x22(%eax),%eax
084cdf9e +0x1f2:  mov    %eax,0x4(%esp)
084cdfa2 +0x1f6:  lea    -0x2c(%ebp),%eax
084cdfa5 +0x1f9:  mov    %eax,(%esp)
084cdfa8 +0x1fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cdfad +0x201:  mov    -0x1c(%ebp),%eax
084cdfb0 +0x204:  mov    0x26(%eax),%eax
084cdfb3 +0x207:  mov    %eax,0x4(%esp)
084cdfb7 +0x20b:  lea    -0x2c(%ebp),%eax
084cdfba +0x20e:  mov    %eax,(%esp)
084cdfbd +0x211:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cdfc2 +0x216:  mov    -0x1c(%ebp),%eax
084cdfc5 +0x219:  add    $0x2b,%eax
084cdfc8 +0x21c:  mov    %eax,-0x14(%ebp)
084cdfcb +0x21f:  mov    -0x1c(%ebp),%eax
084cdfce +0x222:  movzbl 0x2a(%eax),%eax
084cdfd2 +0x226:  movzbl %al,%eax
084cdfd5 +0x229:  mov    %eax,0x4(%esp)
084cdfd9 +0x22d:  lea    -0x2c(%ebp),%eax
084cdfdc +0x230:  mov    %eax,(%esp)
084cdfdf +0x233:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cdfe4 +0x238:  movl   $0x0,-0x10(%ebp)
084cdfeb +0x23f:  jmp    084ce0f0 <+0x344>
084cdff0 +0x244:  mov    -0x10(%ebp),%eax
084cdff3 +0x247:  imul   $0x2a,%eax,%eax
084cdff6 +0x24a:  add    -0x14(%ebp),%eax
084cdff9 +0x24d:  movzbl (%eax),%eax
084cdffc +0x250:  movzbl %al,%eax
084cdfff +0x253:  mov    %eax,0x4(%esp)
084ce003 +0x257:  lea    -0x2c(%ebp),%eax
084ce006 +0x25a:  mov    %eax,(%esp)
084ce009 +0x25d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ce00e +0x262:  mov    -0x10(%ebp),%eax
084ce011 +0x265:  imul   $0x2a,%eax,%eax
084ce014 +0x268:  add    -0x14(%ebp),%eax
084ce017 +0x26b:  movzbl 0x1(%eax),%eax
084ce01b +0x26f:  movzbl %al,%eax
084ce01e +0x272:  mov    %eax,0x4(%esp)
084ce022 +0x276:  lea    -0x2c(%ebp),%eax
084ce025 +0x279:  mov    %eax,(%esp)
084ce028 +0x27c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ce02d +0x281:  mov    -0x10(%ebp),%eax
084ce030 +0x284:  imul   $0x2a,%eax,%eax
084ce033 +0x287:  add    -0x14(%ebp),%eax
084ce036 +0x28a:  add    $0x2,%eax
084ce039 +0x28d:  mov    %eax,(%esp)
084ce03c +0x290:  call   0807e3b0 <_init+0xca8>
084ce041 +0x295:  mov    %eax,-0xc(%ebp)
084ce044 +0x298:  mov    -0xc(%ebp),%eax
084ce047 +0x29b:  mov    %eax,0x4(%esp)
084ce04b +0x29f:  lea    -0x2c(%ebp),%eax
084ce04e +0x2a2:  mov    %eax,(%esp)
084ce051 +0x2a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce056 +0x2aa:  mov    -0x10(%ebp),%eax
084ce059 +0x2ad:  imul   $0x2a,%eax,%eax
084ce05c +0x2b0:  add    -0x14(%ebp),%eax
084ce05f +0x2b3:  lea    0x2(%eax),%edx
084ce062 +0x2b6:  mov    -0xc(%ebp),%eax
084ce065 +0x2b9:  mov    %eax,0x8(%esp)
084ce069 +0x2bd:  mov    %edx,0x4(%esp)
084ce06d +0x2c1:  lea    -0x2c(%ebp),%eax
084ce070 +0x2c4:  mov    %eax,(%esp)
084ce073 +0x2c7:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ce078 +0x2cc:  mov    -0x10(%ebp),%eax
084ce07b +0x2cf:  imul   $0x2a,%eax,%eax
084ce07e +0x2d2:  add    -0x14(%ebp),%eax
084ce081 +0x2d5:  movzbl 0x20(%eax),%eax
084ce085 +0x2d9:  movsbl %al,%eax
084ce088 +0x2dc:  mov    %eax,0x4(%esp)
084ce08c +0x2e0:  lea    -0x2c(%ebp),%eax
084ce08f +0x2e3:  mov    %eax,(%esp)
084ce092 +0x2e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ce097 +0x2eb:  mov    -0x10(%ebp),%eax
084ce09a +0x2ee:  imul   $0x2a,%eax,%eax
084ce09d +0x2f1:  add    -0x14(%ebp),%eax
084ce0a0 +0x2f4:  movzbl 0x21(%eax),%eax
084ce0a4 +0x2f8:  movzbl %al,%eax
084ce0a7 +0x2fb:  mov    %eax,0x4(%esp)
084ce0ab +0x2ff:  lea    -0x2c(%ebp),%eax
084ce0ae +0x302:  mov    %eax,(%esp)
084ce0b1 +0x305:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ce0b6 +0x30a:  mov    -0x10(%ebp),%eax
084ce0b9 +0x30d:  imul   $0x2a,%eax,%eax
084ce0bc +0x310:  add    -0x14(%ebp),%eax
084ce0bf +0x313:  mov    0x22(%eax),%eax
084ce0c2 +0x316:  mov    %eax,0x4(%esp)
084ce0c6 +0x31a:  lea    -0x2c(%ebp),%eax
084ce0c9 +0x31d:  mov    %eax,(%esp)
084ce0cc +0x320:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce0d1 +0x325:  mov    -0x10(%ebp),%eax
084ce0d4 +0x328:  imul   $0x2a,%eax,%eax
084ce0d7 +0x32b:  add    -0x14(%ebp),%eax
084ce0da +0x32e:  mov    0x26(%eax),%eax
084ce0dd +0x331:  mov    %eax,0x4(%esp)
084ce0e1 +0x335:  lea    -0x2c(%ebp),%eax
084ce0e4 +0x338:  mov    %eax,(%esp)
084ce0e7 +0x33b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce0ec +0x340:  addl   $0x1,-0x10(%ebp)
084ce0f0 +0x344:  mov    -0x1c(%ebp),%eax
084ce0f3 +0x347:  movzbl 0x2a(%eax),%eax
084ce0f7 +0x34b:  movzbl %al,%eax
084ce0fa +0x34e:  cmp    -0x10(%ebp),%eax
084ce0fd +0x351:  setg   %al
084ce100 +0x354:  test   %al,%al
084ce102 +0x356:  jne    084cdff0 <+0x244>
084ce108 +0x35c:  movl   $0x1,0x4(%esp)
084ce110 +0x364:  lea    -0x2c(%ebp),%eax
084ce113 +0x367:  mov    %eax,(%esp)
084ce116 +0x36a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ce11b +0x36f:  lea    -0x2c(%ebp),%eax
084ce11e +0x372:  mov    %eax,0x4(%esp)
084ce122 +0x376:  mov    0xc(%ebp),%eax
084ce125 +0x379:  mov    %eax,(%esp)
084ce128 +0x37c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ce12d +0x381:  mov    $0x0,%ebx
084ce132 +0x386:  lea    -0x2c(%ebp),%eax
084ce135 +0x389:  mov    %eax,(%esp)
084ce138 +0x38c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ce13d +0x391:  jmp    084ce15a <+0x3ae>
084ce13f +0x393:  mov    %edx,%ebx
084ce141 +0x395:  mov    %eax,%esi
084ce143 +0x397:  lea    -0x2c(%ebp),%eax
084ce146 +0x39a:  mov    %eax,(%esp)
084ce149 +0x39d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ce14e +0x3a2:  mov    %esi,%eax
084ce150 +0x3a4:  mov    %ebx,%edx
084ce152 +0x3a6:  mov    %eax,(%esp)
084ce155 +0x3a9:  call   08ae3750 <_Unwind_Resume>
084ce15a +0x3ae:  mov    %ebx,%eax
084ce15c +0x3b0:  add    $0x50,%esp
084ce15f +0x3b3:  pop    %ebx
084ce160 +0x3b4:  pop    %esi
084ce161 +0x3b5:  pop    %ebp
084ce162 +0x3b6:  ret
084ce163 +0x3b7:  nop
```

## 反编译 C

```c
// Inter_MonitorCallMemberList::dispatch_sig @ 0x84cddac

/* Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallMemberList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  int local_24;
  byte *local_20;
  size_t local_1c;
  byte *local_18;
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int)",0x298c,
                 "MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_24 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_24 + 0xe)) {
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084cded5 to 084ce12c has its CatchHandler @ 084ce13f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x52);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
        local_20 = (byte *)(local_24 + 0x12);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*local_20);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_20[1]);
        local_1c = strlen((char *)(local_20 + 2));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_1c);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_30,(char *)(local_20 + 2),local_1c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)(char)local_20[0x20]);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_20[0x21]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_20 + 0x22));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_20 + 0x26));
        local_18 = local_20 + 0x2b;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_20[0x2a]);
        for (local_14 = 0; local_14 < (int)(uint)local_20[0x2a]; local_14 = local_14 + 1) {
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(uint)local_18[local_14 * 0x2a]);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(uint)local_18[local_14 * 0x2a + 1]);
          local_10 = strlen((char *)(local_18 + local_14 * 0x2a + 2));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_30,(char *)(local_18 + local_14 * 0x2a + 2),
                     local_10);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(int)(char)local_18[local_14 * 0x2a + 0x20]);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(uint)local_18[local_14 * 0x2a + 0x21]);
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_30,*(int *)(local_18 + local_14 * 0x2a + 0x22));
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_30,*(int *)(local_18 + local_14 * 0x2a + 0x26));
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CUser::Send((CUser *)param_2,local_30);
        PacketGuard::~PacketGuard(local_30);
      }
      else {
        uVar2 = *(undefined4 *)(local_24 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int)",
                   0x2993,
                   "MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}
```
