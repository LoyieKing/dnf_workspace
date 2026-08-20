# dispatch_sig

`_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci`

`Inter_GuildBoardData::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildBoardData` | `0x084dee6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dee6a  _ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci
#           Inter_GuildBoardData::dispatch_sig(CUser*, char*, int)
# range [0x084dee6a, 0x084df2ab]
084dee6a +0x000:  push   %ebp
084dee6b +0x001:  mov    %esp,%ebp
084dee6d +0x003:  push   %edi
084dee6e +0x004:  push   %esi
084dee6f +0x005:  push   %ebx
084dee70 +0x006:  sub    $0x6c,%esp
084dee73 +0x009:  mov    0x10(%ebp),%eax
084dee76 +0x00c:  mov    %eax,-0x28(%ebp)
084dee79 +0x00f:  mov    0xc(%ebp),%eax
084dee7c +0x012:  mov    %eax,(%esp)
084dee7f +0x015:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dee84 +0x01a:  cmp    $0x2,%eax
084dee87 +0x01d:  setle  %al
084dee8a +0x020:  test   %al,%al
084dee8c +0x022:  je     084dee98 <+0x2e>
084dee8e +0x024:  mov    $0x0,%ebx
084dee93 +0x029:  jmp    084df2a1 <+0x437>
084dee98 +0x02e:  movl   $0xffffffff,0x4(%esp)
084deea0 +0x036:  mov    0xc(%ebp),%eax
084deea3 +0x039:  mov    %eax,(%esp)
084deea6 +0x03c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084deeab +0x041:  mov    %eax,%edx
084deead +0x043:  mov    -0x28(%ebp),%eax
084deeb0 +0x046:  mov    0x13(%eax),%eax
084deeb3 +0x049:  cmp    %eax,%edx
084deeb5 +0x04b:  setne  %al
084deeb8 +0x04e:  test   %al,%al
084deeba +0x050:  je     084deec6 <+0x5c>
084deebc +0x052:  mov    $0x0,%ebx
084deec1 +0x057:  jmp    084df2a1 <+0x437>
084deec6 +0x05c:  lea    -0x44(%ebp),%eax
084deec9 +0x05f:  mov    %eax,(%esp)
084deecc +0x062:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084deed1 +0x067:  mov    -0x28(%ebp),%eax
084deed4 +0x06a:  movzwl 0xc(%eax),%eax
084deed8 +0x06e:  movzwl %ax,%eax
084deedb +0x071:  cmp    $0x232a,%eax
084deee0 +0x076:  je     084deeeb <+0x81>
084deee2 +0x078:  cmp    $0x232e,%eax
084deee7 +0x07d:  je     084def08 <+0x9e>
084deee9 +0x07f:  jmp    084def23 <+0xb9>
084deeeb +0x081:  movl   $0x155,0x8(%esp)
084deef3 +0x089:  movl   $0x1,0x4(%esp)
084deefb +0x091:  lea    -0x44(%ebp),%eax
084deefe +0x094:  mov    %eax,(%esp)
084def01 +0x097:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084def06 +0x09c:  jmp    084def23 <+0xb9>
084def08 +0x09e:  movl   $0x156,0x8(%esp)
084def10 +0x0a6:  movl   $0x1,0x4(%esp)
084def18 +0x0ae:  lea    -0x44(%ebp),%eax
084def1b +0x0b1:  mov    %eax,(%esp)
084def1e +0x0b4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084def23 +0x0b9:  mov    -0x28(%ebp),%eax
084def26 +0x0bc:  movzwl 0xa(%eax),%eax
084def2a +0x0c0:  test   %ax,%ax
084def2d +0x0c3:  jne    084df223 <+0x3b9>
084def33 +0x0c9:  movl   $0x1,0x4(%esp)
084def3b +0x0d1:  lea    -0x44(%ebp),%eax
084def3e +0x0d4:  mov    %eax,(%esp)
084def41 +0x0d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084def46 +0x0dc:  mov    -0x28(%ebp),%eax
084def49 +0x0df:  movzbl 0xe(%eax),%eax
084def4d +0x0e3:  movzbl %al,%eax
084def50 +0x0e6:  mov    %eax,0x4(%esp)
084def54 +0x0ea:  lea    -0x44(%ebp),%eax
084def57 +0x0ed:  mov    %eax,(%esp)
084def5a +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084def5f +0x0f5:  mov    -0x28(%ebp),%eax
084def62 +0x0f8:  movzbl 0x17(%eax),%eax
084def66 +0x0fc:  movsbl %al,%eax
084def69 +0x0ff:  mov    %eax,0x4(%esp)
084def6d +0x103:  lea    -0x44(%ebp),%eax
084def70 +0x106:  mov    %eax,(%esp)
084def73 +0x109:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084def78 +0x10e:  movl   $0x0,-0x24(%ebp)
084def7f +0x115:  jmp    084df18a <+0x320>
084def84 +0x11a:  movb   $0x0,-0x1d(%ebp)
084def88 +0x11e:  mov    -0x24(%ebp),%eax
084def8b +0x121:  mov    -0x28(%ebp),%edx
084def8e +0x124:  imul   $0xa5,%eax,%eax
084def94 +0x12a:  lea    (%edx,%eax,1),%eax
084def97 +0x12d:  add    $0x9e,%eax
084def9c +0x132:  movzbl (%eax),%eax
084def9f +0x135:  cmp    $0x1,%al
084defa1 +0x137:  jne    084defa7 <+0x13d>
084defa3 +0x139:  movb   $0x1,-0x1d(%ebp)
084defa7 +0x13d:  movzbl -0x1d(%ebp),%eax
084defab +0x141:  mov    %eax,0x4(%esp)
084defaf +0x145:  lea    -0x44(%ebp),%eax
084defb2 +0x148:  mov    %eax,(%esp)
084defb5 +0x14b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084defba +0x150:  mov    -0x24(%ebp),%eax
084defbd +0x153:  mov    -0x28(%ebp),%edx
084defc0 +0x156:  imul   $0xa5,%eax,%eax
084defc6 +0x15c:  lea    (%edx,%eax,1),%eax
084defc9 +0x15f:  add    $0x9c,%eax
084defce +0x164:  movzbl (%eax),%eax
084defd1 +0x167:  movsbl %al,%eax
084defd4 +0x16a:  mov    %eax,0x4(%esp)
084defd8 +0x16e:  lea    -0x44(%ebp),%eax
084defdb +0x171:  mov    %eax,(%esp)
084defde +0x174:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084defe3 +0x179:  movl   $0xffffffff,0x4(%esp)
084defeb +0x181:  mov    0xc(%ebp),%eax
084defee +0x184:  mov    %eax,(%esp)
084deff1 +0x187:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084deff6 +0x18c:  mov    %eax,%edx
084deff8 +0x18e:  mov    -0x24(%ebp),%eax
084deffb +0x191:  mov    -0x28(%ebp),%ecx
084deffe +0x194:  imul   $0xa5,%eax,%eax
084df004 +0x19a:  lea    (%ecx,%eax,1),%eax
084df007 +0x19d:  add    $0x90,%eax
084df00c +0x1a2:  mov    0x8(%eax),%eax
084df00f +0x1a5:  cmp    %eax,%edx
084df011 +0x1a7:  sete   %al
084df014 +0x1aa:  test   %al,%al
084df016 +0x1ac:  je     084df02d <+0x1c3>
084df018 +0x1ae:  movl   $0x1,0x4(%esp)
084df020 +0x1b6:  lea    -0x44(%ebp),%eax
084df023 +0x1b9:  mov    %eax,(%esp)
084df026 +0x1bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084df02b +0x1c1:  jmp    084df040 <+0x1d6>
084df02d +0x1c3:  movl   $0x0,0x4(%esp)
084df035 +0x1cb:  lea    -0x44(%ebp),%eax
084df038 +0x1ce:  mov    %eax,(%esp)
084df03b +0x1d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084df040 +0x1d6:  mov    -0x24(%ebp),%eax
084df043 +0x1d9:  imul   $0xa5,%eax,%eax
084df049 +0x1df:  add    $0x90,%eax
084df04e +0x1e4:  add    -0x28(%ebp),%eax
084df051 +0x1e7:  add    $0xf,%eax
084df054 +0x1ea:  mov    %eax,(%esp)
084df057 +0x1ed:  call   0807e3b0 <_init+0xca8>
084df05c +0x1f2:  mov    %eax,0x4(%esp)
084df060 +0x1f6:  lea    -0x44(%ebp),%eax
084df063 +0x1f9:  mov    %eax,(%esp)
084df066 +0x1fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df06b +0x201:  mov    -0x24(%ebp),%eax
084df06e +0x204:  imul   $0xa5,%eax,%eax
084df074 +0x20a:  add    $0x90,%eax
084df079 +0x20f:  add    -0x28(%ebp),%eax
084df07c +0x212:  add    $0xf,%eax
084df07f +0x215:  mov    %eax,(%esp)
084df082 +0x218:  call   0807e3b0 <_init+0xca8>
084df087 +0x21d:  mov    -0x24(%ebp),%edx
084df08a +0x220:  imul   $0xa5,%edx,%edx
084df090 +0x226:  add    $0x90,%edx
084df096 +0x22c:  add    -0x28(%ebp),%edx
084df099 +0x22f:  add    $0xf,%edx
084df09c +0x232:  mov    %eax,0x8(%esp)
084df0a0 +0x236:  mov    %edx,0x4(%esp)
084df0a4 +0x23a:  lea    -0x44(%ebp),%eax
084df0a7 +0x23d:  mov    %eax,(%esp)
084df0aa +0x240:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084df0af +0x245:  mov    -0x24(%ebp),%eax
084df0b2 +0x248:  mov    -0x28(%ebp),%edx
084df0b5 +0x24b:  imul   $0xa5,%eax,%eax
084df0bb +0x251:  lea    (%edx,%eax,1),%eax
084df0be +0x254:  sub    $0xffffff80,%eax
084df0c1 +0x257:  mov    0x14(%eax),%eax
084df0c4 +0x25a:  mov    %eax,0x4(%esp)
084df0c8 +0x25e:  lea    -0x44(%ebp),%eax
084df0cb +0x261:  mov    %eax,(%esp)
084df0ce +0x264:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df0d3 +0x269:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084df0da +0x270:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084df0df +0x275:  mov    %eax,%edx
084df0e1 +0x277:  mov    -0x24(%ebp),%eax
084df0e4 +0x27a:  mov    -0x28(%ebp),%ecx
084df0e7 +0x27d:  imul   $0xa5,%eax,%eax
084df0ed +0x283:  lea    (%ecx,%eax,1),%eax
084df0f0 +0x286:  sub    $0xffffff80,%eax
084df0f3 +0x289:  mov    0x10(%eax),%eax
084df0f6 +0x28c:  mov    %edx,%ecx
084df0f8 +0x28e:  sub    %eax,%ecx
084df0fa +0x290:  mov    %ecx,%eax
084df0fc +0x292:  mov    %eax,-0x1c(%ebp)
084df0ff +0x295:  cmpl   $0x0,-0x1c(%ebp)
084df103 +0x299:  jns    084df10c <+0x2a2>
084df105 +0x29b:  movl   $0x0,-0x1c(%ebp)
084df10c +0x2a2:  mov    -0x1c(%ebp),%eax
084df10f +0x2a5:  mov    %eax,0x4(%esp)
084df113 +0x2a9:  lea    -0x44(%ebp),%eax
084df116 +0x2ac:  mov    %eax,(%esp)
084df119 +0x2af:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df11e +0x2b4:  mov    -0x24(%ebp),%eax
084df121 +0x2b7:  imul   $0xa5,%eax,%eax
084df127 +0x2bd:  add    $0x10,%eax
084df12a +0x2c0:  add    -0x28(%ebp),%eax
084df12d +0x2c3:  add    $0x8,%eax
084df130 +0x2c6:  mov    %eax,(%esp)
084df133 +0x2c9:  call   0807e3b0 <_init+0xca8>
084df138 +0x2ce:  mov    %eax,0x4(%esp)
084df13c +0x2d2:  lea    -0x44(%ebp),%eax
084df13f +0x2d5:  mov    %eax,(%esp)
084df142 +0x2d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df147 +0x2dd:  mov    -0x24(%ebp),%eax
084df14a +0x2e0:  imul   $0xa5,%eax,%eax
084df150 +0x2e6:  add    $0x10,%eax
084df153 +0x2e9:  add    -0x28(%ebp),%eax
084df156 +0x2ec:  add    $0x8,%eax
084df159 +0x2ef:  mov    %eax,(%esp)
084df15c +0x2f2:  call   0807e3b0 <_init+0xca8>
084df161 +0x2f7:  mov    -0x24(%ebp),%edx
084df164 +0x2fa:  imul   $0xa5,%edx,%edx
084df16a +0x300:  add    $0x10,%edx
084df16d +0x303:  add    -0x28(%ebp),%edx
084df170 +0x306:  add    $0x8,%edx
084df173 +0x309:  mov    %eax,0x8(%esp)
084df177 +0x30d:  mov    %edx,0x4(%esp)
084df17b +0x311:  lea    -0x44(%ebp),%eax
084df17e +0x314:  mov    %eax,(%esp)
084df181 +0x317:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084df186 +0x31c:  addl   $0x1,-0x24(%ebp)
084df18a +0x320:  mov    -0x28(%ebp),%eax
084df18d +0x323:  movzbl 0x17(%eax),%eax
084df191 +0x327:  movsbl %al,%eax
084df194 +0x32a:  cmp    -0x24(%ebp),%eax
084df197 +0x32d:  setg   %al
084df19a +0x330:  test   %al,%al
084df19c +0x332:  jne    084def84 <+0x11a>
084df1a2 +0x338:  mov    -0x28(%ebp),%eax
084df1a5 +0x33b:  movzbl 0x17(%eax),%eax
084df1a9 +0x33f:  movsbl %al,%eax
084df1ac +0x342:  mov    %eax,-0x4c(%ebp)
084df1af +0x345:  mov    -0x28(%ebp),%eax
084df1b2 +0x348:  movzbl 0xe(%eax),%eax
084df1b6 +0x34c:  movzbl %al,%edi
084df1b9 +0x34f:  mov    -0x28(%ebp),%eax
084df1bc +0x352:  movzwl 0xc(%eax),%eax
084df1c0 +0x356:  movzwl %ax,%esi
084df1c3 +0x359:  movl   $0xffffffff,0x4(%esp)
084df1cb +0x361:  mov    0xc(%ebp),%eax
084df1ce +0x364:  mov    %eax,(%esp)
084df1d1 +0x367:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084df1d6 +0x36c:  mov    %eax,%ebx
084df1d8 +0x36e:  movl   $0x0,0xc(%esp)
084df1e0 +0x376:  movl   $0x4b51,0x8(%esp)
084df1e8 +0x37e:  movl   $&_ZZN20Inter_GuildBoardData12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084df1f0 +0x386:  lea    -0x38(%ebp),%eax
084df1f3 +0x389:  mov    %eax,(%esp)
084df1f6 +0x38c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084df1fb +0x391:  mov    -0x4c(%ebp),%eax
084df1fe +0x394:  mov    %eax,0x14(%esp)
084df202 +0x398:  mov    %edi,0x10(%esp)
084df206 +0x39c:  mov    %esi,0xc(%esp)
084df20a +0x3a0:  mov    %ebx,0x8(%esp)
084df20e +0x3a4:  movl   $"GUILD_BOARD : CHARAC NO : %u, CODE : %u, TOTAL CNT : %u, CNT : %u : BOARD DATA SEND!!",0x4(%esp)
084df216 +0x3ac:  lea    -0x38(%ebp),%eax
084df219 +0x3af:  mov    %eax,(%esp)
084df21c +0x3b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084df221 +0x3b7:  jmp    084df24f <+0x3e5>
084df223 +0x3b9:  movl   $0x0,0x4(%esp)
084df22b +0x3c1:  lea    -0x44(%ebp),%eax
084df22e +0x3c4:  mov    %eax,(%esp)
084df231 +0x3c7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084df236 +0x3cc:  mov    -0x28(%ebp),%eax
084df239 +0x3cf:  movzwl 0xa(%eax),%eax
084df23d +0x3d3:  movzwl %ax,%eax
084df240 +0x3d6:  mov    %eax,0x4(%esp)
084df244 +0x3da:  lea    -0x44(%ebp),%eax
084df247 +0x3dd:  mov    %eax,(%esp)
084df24a +0x3e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084df24f +0x3e5:  movl   $0x1,0x4(%esp)
084df257 +0x3ed:  lea    -0x44(%ebp),%eax
084df25a +0x3f0:  mov    %eax,(%esp)
084df25d +0x3f3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084df262 +0x3f8:  lea    -0x44(%ebp),%eax
084df265 +0x3fb:  mov    %eax,0x4(%esp)
084df269 +0x3ff:  mov    0xc(%ebp),%eax
084df26c +0x402:  mov    %eax,(%esp)
084df26f +0x405:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084df274 +0x40a:  mov    $0x0,%ebx
084df279 +0x40f:  lea    -0x44(%ebp),%eax
084df27c +0x412:  mov    %eax,(%esp)
084df27f +0x415:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df284 +0x41a:  jmp    084df2a1 <+0x437>
084df286 +0x41c:  mov    %edx,%ebx
084df288 +0x41e:  mov    %eax,%esi
084df28a +0x420:  lea    -0x44(%ebp),%eax
084df28d +0x423:  mov    %eax,(%esp)
084df290 +0x426:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df295 +0x42b:  mov    %esi,%eax
084df297 +0x42d:  mov    %ebx,%edx
084df299 +0x42f:  mov    %eax,(%esp)
084df29c +0x432:  call   08ae3750 <_Unwind_Resume>
084df2a1 +0x437:  mov    %ebx,%eax
084df2a3 +0x439:  add    $0x6c,%esp
084df2a6 +0x43c:  pop    %ebx
084df2a7 +0x43d:  pop    %esi
084df2a8 +0x43e:  pop    %edi
084df2a9 +0x43f:  pop    %ebp
084df2aa +0x440:  ret
084df2ab +0x441:  nop
```

## 反编译 C

```c
// Inter_GuildBoardData::dispatch_sig @ 0x84dee6a

/* Inter_GuildBoardData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildBoardData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  
  local_2c = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar4) &&
     (iVar4 = CUser::get_charac_no((CUser *)param_2,-1), iVar4 == *(int *)(local_2c + 0x13))) {
    PacketGuard::PacketGuard(local_48);
    if (*(short *)(local_2c + 0xc) == 0x232a) {
                    /* try { // try from 084def01 to 084df273 has its CatchHandler @ 084df286 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x155);
    }
    else if (*(short *)(local_2c + 0xc) == 0x232e) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x156);
    }
    if (*(short *)(local_2c + 10) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)*(byte *)(local_2c + 0xe));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(int)*(char *)(local_2c + 0x17));
      for (local_28 = 0; local_28 < *(char *)(local_2c + 0x17); local_28 = local_28 + 1) {
        local_21 = *(char *)(local_2c + local_28 * 0xa5 + 0x9e) == '\x01';
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)(byte)local_21);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_48,(int)*(char *)(local_2c + local_28 * 0xa5 + 0x9c))
        ;
        iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
        if (iVar4 == *(int *)(local_2c + local_28 * 0xa5 + 0x98)) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
        }
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x9f));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,sVar5);
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x9f));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_48,(char *)(local_28 * 0xa5 + local_2c + 0x9f),sVar5)
        ;
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_48,*(int *)(local_2c + local_28 * 0xa5 + 0x94));
        local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20 = local_20 - *(int *)(local_2c + local_28 * 0xa5 + 0x90);
        if (local_20 < 0) {
          local_20 = 0;
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_20);
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x18));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,sVar5);
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x18));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_48,(char *)(local_28 * 0xa5 + local_2c + 0x18),sVar5)
        ;
      }
      cVar1 = *(char *)(local_2c + 0x17);
      bVar2 = *(byte *)(local_2c + 0xe);
      uVar3 = *(ushort *)(local_2c + 0xc);
      uVar6 = CUser::get_charac_no((CUser *)param_2,-1);
      cMyTrace::cMyTrace(local_3c,
                         "virtual int Inter_GuildBoardData::dispatch_sig(CUser*, char*, int)",0x4b51
                         ,0);
      cMyTrace::operator()
                (local_3c,
                 "GUILD_BOARD : CHARAC NO : %u, CODE : %u, TOTAL CNT : %u, CNT : %u : BOARD DATA SEND!!"
                 ,uVar6,(uint)uVar3,(uint)bVar2,(int)cVar1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,(uint)*(ushort *)(local_2c + 10))
      ;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send((CUser *)param_2,local_48);
    PacketGuard::~PacketGuard(local_48);
  }
  return 0;
}
```
