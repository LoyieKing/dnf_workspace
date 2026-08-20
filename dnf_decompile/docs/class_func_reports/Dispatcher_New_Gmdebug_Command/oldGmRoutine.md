# oldGmRoutine

`_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE`

`Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_New_Gmdebug_Command` | `0x0820bf2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820bf2c  _ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE
#           Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&)
# range [0x0820bf2c, 0x082134a7]
0820bf2c +0x0000:  push   %ebp
0820bf2d +0x0001:  mov    %esp,%ebp
0820bf2f +0x0003:  push   %edi
0820bf30 +0x0004:  push   %esi
0820bf31 +0x0005:  push   %ebx
0820bf32 +0x0006:  sub    $0xb7c,%esp
0820bf38 +0x000c:  lea    -0x250(%ebp),%eax
0820bf3e +0x0012:  mov    %eax,(%esp)
0820bf41 +0x0015:  call   08233412 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8abc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8abc
0820bf46 +0x001a:  lea    -0x25c(%ebp),%eax
0820bf4c +0x0020:  mov    %eax,(%esp)
0820bf4f +0x0023:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820bf54 +0x0028:  movb   $0x1,-0x12d(%ebp)
0820bf5b +0x002f:  movl   $0x0,0x4(%esp)
0820bf63 +0x0037:  mov    0x14(%ebp),%eax
0820bf66 +0x003a:  mov    %eax,(%esp)
0820bf69 +0x003d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820bf6e +0x0042:  movl   $"lawless",0x4(%esp)
0820bf76 +0x004a:  mov    %eax,(%esp)
0820bf79 +0x004d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820bf7e +0x0052:  test   %al,%al
0820bf80 +0x0054:  je     0820c0a0 <+0x174>
0820bf86 +0x005a:  movl   $0x1,0x4(%esp)
0820bf8e +0x0062:  mov    0x14(%ebp),%eax
0820bf91 +0x0065:  mov    %eax,(%esp)
0820bf94 +0x0068:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820bf99 +0x006d:  mov    %eax,(%esp)
0820bf9c +0x0070:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820bfa1 +0x0075:  mov    %eax,(%esp)
0820bfa4 +0x0078:  call   0807e6f0 <_init+0xfe8>
0820bfa9 +0x007d:  mov    %eax,-0x12c(%ebp)
0820bfaf +0x0083:  cmpl   $0x0,-0x12c(%ebp)
0820bfb6 +0x008a:  jle    08213440 <+0x7514>
0820bfbc +0x0090:  cmpl   $0x270f,-0x12c(%ebp)
0820bfc6 +0x009a:  jg     08213440 <+0x7514>
0820bfcc +0x00a0:  movl   $0x1,0x4(%esp)
0820bfd4 +0x00a8:  mov    0x14(%ebp),%eax
0820bfd7 +0x00ab:  mov    %eax,(%esp)
0820bfda +0x00ae:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820bfdf +0x00b3:  mov    %eax,(%esp)
0820bfe2 +0x00b6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820bfe7 +0x00bb:  mov    %eax,(%esp)
0820bfea +0x00be:  call   0807e6f0 <_init+0xfe8>
0820bfef +0x00c3:  mov    0xc(%ebp),%edx
0820bff2 +0x00c6:  mov    %eax,0x4(%esp)
0820bff6 +0x00ca:  mov    %edx,(%esp)
0820bff9 +0x00cd:  call   0822f718 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4dc2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4dc2
0820bffe +0x00d2:  movl   $0x0,0xc(%esp)
0820c006 +0x00da:  movl   $0x2,0x8(%esp)
0820c00e +0x00e2:  movl   $0x0,0x4(%esp)
0820c016 +0x00ea:  mov    0xc(%ebp),%eax
0820c019 +0x00ed:  mov    %eax,(%esp)
0820c01c +0x00f0:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0820c021 +0x00f5:  movl   $0xb3,0x8(%esp)
0820c029 +0x00fd:  movl   $0x1,0x4(%esp)
0820c031 +0x0105:  lea    -0x25c(%ebp),%eax
0820c037 +0x010b:  mov    %eax,(%esp)
0820c03a +0x010e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c03f +0x0113:  movl   $0x1,0x4(%esp)
0820c047 +0x011b:  lea    -0x25c(%ebp),%eax
0820c04d +0x0121:  mov    %eax,(%esp)
0820c050 +0x0124:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c055 +0x0129:  movl   $0x64,0x4(%esp)
0820c05d +0x0131:  lea    -0x25c(%ebp),%eax
0820c063 +0x0137:  mov    %eax,(%esp)
0820c066 +0x013a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c06b +0x013f:  movl   $0x1,0x4(%esp)
0820c073 +0x0147:  lea    -0x25c(%ebp),%eax
0820c079 +0x014d:  mov    %eax,(%esp)
0820c07c +0x0150:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c081 +0x0155:  lea    -0x25c(%ebp),%eax
0820c087 +0x015b:  mov    %eax,0x4(%esp)
0820c08b +0x015f:  mov    0xc(%ebp),%eax
0820c08e +0x0162:  mov    %eax,(%esp)
0820c091 +0x0165:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c096 +0x016a:  mov    $0x0,%ebx
0820c09b +0x016f:  jmp    0821345f <+0x7533>
0820c0a0 +0x0174:  movl   $0x0,0x4(%esp)
0820c0a8 +0x017c:  mov    0x14(%ebp),%eax
0820c0ab +0x017f:  mov    %eax,(%esp)
0820c0ae +0x0182:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c0b3 +0x0187:  movl   $"bal",0x4(%esp)
0820c0bb +0x018f:  mov    %eax,(%esp)
0820c0be +0x0192:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c0c3 +0x0197:  test   %al,%al
0820c0c5 +0x0199:  je     0820c1ea <+0x2be>
0820c0cb +0x019f:  movl   $0x1,0x4(%esp)
0820c0d3 +0x01a7:  mov    0x14(%ebp),%eax
0820c0d6 +0x01aa:  mov    %eax,(%esp)
0820c0d9 +0x01ad:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c0de +0x01b2:  mov    %eax,(%esp)
0820c0e1 +0x01b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c0e6 +0x01ba:  mov    %eax,(%esp)
0820c0e9 +0x01bd:  call   0807e6f0 <_init+0xfe8>
0820c0ee +0x01c2:  mov    %eax,-0x128(%ebp)
0820c0f4 +0x01c8:  cmpl   $0x0,-0x128(%ebp)
0820c0fb +0x01cf:  jle    08213440 <+0x7514>
0820c101 +0x01d5:  cmpl   $0x270f,-0x128(%ebp)
0820c10b +0x01df:  jg     08213440 <+0x7514>
0820c111 +0x01e5:  movl   $0x1,0x4(%esp)
0820c119 +0x01ed:  mov    0x14(%ebp),%eax
0820c11c +0x01f0:  mov    %eax,(%esp)
0820c11f +0x01f3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c124 +0x01f8:  mov    %eax,(%esp)
0820c127 +0x01fb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c12c +0x0200:  mov    %eax,(%esp)
0820c12f +0x0203:  call   0807e6f0 <_init+0xfe8>
0820c134 +0x0208:  imul   $0x64,%eax,%eax
0820c137 +0x020b:  mov    %eax,%edx
0820c139 +0x020d:  mov    0xc(%ebp),%eax
0820c13c +0x0210:  mov    %edx,0x4(%esp)
0820c140 +0x0214:  mov    %eax,(%esp)
0820c143 +0x0217:  call   0822f362 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a0c
0820c148 +0x021c:  movl   $0x0,0xc(%esp)
0820c150 +0x0224:  movl   $0x2,0x8(%esp)
0820c158 +0x022c:  movl   $0x0,0x4(%esp)
0820c160 +0x0234:  mov    0xc(%ebp),%eax
0820c163 +0x0237:  mov    %eax,(%esp)
0820c166 +0x023a:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0820c16b +0x023f:  movl   $0xb3,0x8(%esp)
0820c173 +0x0247:  movl   $0x1,0x4(%esp)
0820c17b +0x024f:  lea    -0x25c(%ebp),%eax
0820c181 +0x0255:  mov    %eax,(%esp)
0820c184 +0x0258:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c189 +0x025d:  movl   $0x1,0x4(%esp)
0820c191 +0x0265:  lea    -0x25c(%ebp),%eax
0820c197 +0x026b:  mov    %eax,(%esp)
0820c19a +0x026e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c19f +0x0273:  movl   $0x65,0x4(%esp)
0820c1a7 +0x027b:  lea    -0x25c(%ebp),%eax
0820c1ad +0x0281:  mov    %eax,(%esp)
0820c1b0 +0x0284:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c1b5 +0x0289:  movl   $0x1,0x4(%esp)
0820c1bd +0x0291:  lea    -0x25c(%ebp),%eax
0820c1c3 +0x0297:  mov    %eax,(%esp)
0820c1c6 +0x029a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c1cb +0x029f:  lea    -0x25c(%ebp),%eax
0820c1d1 +0x02a5:  mov    %eax,0x4(%esp)
0820c1d5 +0x02a9:  mov    0xc(%ebp),%eax
0820c1d8 +0x02ac:  mov    %eax,(%esp)
0820c1db +0x02af:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c1e0 +0x02b4:  mov    $0x0,%ebx
0820c1e5 +0x02b9:  jmp    0821345f <+0x7533>
0820c1ea +0x02be:  movl   $0x0,0x4(%esp)
0820c1f2 +0x02c6:  mov    0x14(%ebp),%eax
0820c1f5 +0x02c9:  mov    %eax,(%esp)
0820c1f8 +0x02cc:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c1fd +0x02d1:  movl   $"questclear2",0x4(%esp)
0820c205 +0x02d9:  mov    %eax,(%esp)
0820c208 +0x02dc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c20d +0x02e1:  test   %al,%al
0820c20f +0x02e3:  jne    0820c238 <+0x30c>
0820c211 +0x02e5:  movl   $0x0,0x4(%esp)
0820c219 +0x02ed:  mov    0x14(%ebp),%eax
0820c21c +0x02f0:  mov    %eax,(%esp)
0820c21f +0x02f3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c224 +0x02f8:  movl   $"q",0x4(%esp)
0820c22c +0x0300:  mov    %eax,(%esp)
0820c22f +0x0303:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c234 +0x0308:  test   %al,%al
0820c236 +0x030a:  je     0820c23f <+0x313>
0820c238 +0x030c:  mov    $0x1,%eax
0820c23d +0x0311:  jmp    0820c244 <+0x318>
0820c23f +0x0313:  mov    $0x0,%eax
0820c244 +0x0318:  test   %al,%al
0820c246 +0x031a:  je     0820c3a7 <+0x47b>
0820c24c +0x0320:  movl   $0x1,0x4(%esp)
0820c254 +0x0328:  mov    0x14(%ebp),%eax
0820c257 +0x032b:  mov    %eax,(%esp)
0820c25a +0x032e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c25f +0x0333:  movl   $"on",0x4(%esp)
0820c267 +0x033b:  mov    %eax,(%esp)
0820c26a +0x033e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c26f +0x0343:  test   %al,%al
0820c271 +0x0345:  jne    08213440 <+0x7514>
0820c277 +0x034b:  movl   $0x1,0x4(%esp)
0820c27f +0x0353:  mov    0x14(%ebp),%eax
0820c282 +0x0356:  mov    %eax,(%esp)
0820c285 +0x0359:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c28a +0x035e:  movl   $"off",0x4(%esp)
0820c292 +0x0366:  mov    %eax,(%esp)
0820c295 +0x0369:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c29a +0x036e:  test   %al,%al
0820c29c +0x0370:  jne    08213440 <+0x7514>
0820c2a2 +0x0376:  movl   $0x1,0x4(%esp)
0820c2aa +0x037e:  mov    0x14(%ebp),%eax
0820c2ad +0x0381:  mov    %eax,(%esp)
0820c2b0 +0x0384:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c2b5 +0x0389:  mov    %eax,(%esp)
0820c2b8 +0x038c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c2bd +0x0391:  mov    %eax,(%esp)
0820c2c0 +0x0394:  call   0807e6f0 <_init+0xfe8>
0820c2c5 +0x0399:  mov    %eax,-0x124(%ebp)
0820c2cb +0x039f:  cmpl   $0x0,-0x124(%ebp)
0820c2d2 +0x03a6:  jle    08213440 <+0x7514>
0820c2d8 +0x03ac:  cmpl   $&_ZL14gUnicodeBuffer+0xe173,-0x124(%ebp)
0820c2e2 +0x03b6:  jg     08213440 <+0x7514>
0820c2e8 +0x03bc:  movl   $0x1,0x4(%esp)
0820c2f0 +0x03c4:  mov    0xc(%ebp),%eax
0820c2f3 +0x03c7:  mov    %eax,(%esp)
0820c2f6 +0x03ca:  call   0822fc8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5338>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5338
0820c2fb +0x03cf:  movl   $0x0,0x10(%esp)
0820c303 +0x03d7:  movl   $0x0,0xc(%esp)
0820c30b +0x03df:  mov    -0x124(%ebp),%eax
0820c311 +0x03e5:  mov    %eax,0x8(%esp)
0820c315 +0x03e9:  movl   $0x23,0x4(%esp)
0820c31d +0x03f1:  mov    0xc(%ebp),%eax
0820c320 +0x03f4:  mov    %eax,(%esp)
0820c323 +0x03f7:  call   0866da8a <_ZN5CUser12quest_actionEiiii>  ; CUser::quest_action(int, int, int, int)
0820c328 +0x03fc:  movl   $0xb3,0x8(%esp)
0820c330 +0x0404:  movl   $0x1,0x4(%esp)
0820c338 +0x040c:  lea    -0x25c(%ebp),%eax
0820c33e +0x0412:  mov    %eax,(%esp)
0820c341 +0x0415:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c346 +0x041a:  movl   $0x1,0x4(%esp)
0820c34e +0x0422:  lea    -0x25c(%ebp),%eax
0820c354 +0x0428:  mov    %eax,(%esp)
0820c357 +0x042b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c35c +0x0430:  movl   $0x66,0x4(%esp)
0820c364 +0x0438:  lea    -0x25c(%ebp),%eax
0820c36a +0x043e:  mov    %eax,(%esp)
0820c36d +0x0441:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c372 +0x0446:  movl   $0x1,0x4(%esp)
0820c37a +0x044e:  lea    -0x25c(%ebp),%eax
0820c380 +0x0454:  mov    %eax,(%esp)
0820c383 +0x0457:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c388 +0x045c:  lea    -0x25c(%ebp),%eax
0820c38e +0x0462:  mov    %eax,0x4(%esp)
0820c392 +0x0466:  mov    0xc(%ebp),%eax
0820c395 +0x0469:  mov    %eax,(%esp)
0820c398 +0x046c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c39d +0x0471:  mov    $0x0,%ebx
0820c3a2 +0x0476:  jmp    0821345f <+0x7533>
0820c3a7 +0x047b:  movl   $0x0,0x4(%esp)
0820c3af +0x0483:  mov    0x14(%ebp),%eax
0820c3b2 +0x0486:  mov    %eax,(%esp)
0820c3b5 +0x0489:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c3ba +0x048e:  movl   $"guild",0x4(%esp)
0820c3c2 +0x0496:  mov    %eax,(%esp)
0820c3c5 +0x0499:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c3ca +0x049e:  test   %al,%al
0820c3cc +0x04a0:  je     0820c509 <+0x5dd>
0820c3d2 +0x04a6:  movl   $0x1,0x4(%esp)
0820c3da +0x04ae:  mov    0x14(%ebp),%eax
0820c3dd +0x04b1:  mov    %eax,(%esp)
0820c3e0 +0x04b4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c3e5 +0x04b9:  movl   $"exp",0x4(%esp)
0820c3ed +0x04c1:  mov    %eax,(%esp)
0820c3f0 +0x04c4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c3f5 +0x04c9:  test   %al,%al
0820c3f7 +0x04cb:  je     08213440 <+0x7514>
0820c3fd +0x04d1:  movl   $0x2,0x4(%esp)
0820c405 +0x04d9:  mov    0x14(%ebp),%eax
0820c408 +0x04dc:  mov    %eax,(%esp)
0820c40b +0x04df:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c410 +0x04e4:  mov    %eax,(%esp)
0820c413 +0x04e7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c418 +0x04ec:  mov    %eax,(%esp)
0820c41b +0x04ef:  call   0807e6f0 <_init+0xfe8>
0820c420 +0x04f4:  mov    %eax,-0x120(%ebp)
0820c426 +0x04fa:  cmpl   $0x0,-0x120(%ebp)
0820c42d +0x0501:  jle    08213440 <+0x7514>
0820c433 +0x0507:  cmpl   $0x270f,-0x120(%ebp)
0820c43d +0x0511:  jg     08213440 <+0x7514>
0820c443 +0x0517:  movl   $0x2,0x4(%esp)
0820c44b +0x051f:  mov    0x14(%ebp),%eax
0820c44e +0x0522:  mov    %eax,(%esp)
0820c451 +0x0525:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c456 +0x052a:  mov    %eax,(%esp)
0820c459 +0x052d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c45e +0x0532:  mov    %eax,(%esp)
0820c461 +0x0535:  call   0807e6f0 <_init+0xfe8>
0820c466 +0x053a:  mov    0xc(%ebp),%edx
0820c469 +0x053d:  mov    %eax,0x4(%esp)
0820c46d +0x0541:  mov    %edx,(%esp)
0820c470 +0x0544:  call   08645db4 <_ZN15CUserCharacInfo13set_guild_expEi>  ; CUserCharacInfo::set_guild_exp(int)
0820c475 +0x0549:  mov    0xc(%ebp),%eax
0820c478 +0x054c:  movb   $0x1,0x796d9(%eax)
0820c47f +0x0553:  mov    0xc(%ebp),%eax
0820c482 +0x0556:  mov    %eax,(%esp)
0820c485 +0x0559:  call   08652f0c <_ZN5CUser14WorkPerFiveMinEv>  ; CUser::WorkPerFiveMin()
0820c48a +0x055e:  movl   $0xb3,0x8(%esp)
0820c492 +0x0566:  movl   $0x1,0x4(%esp)
0820c49a +0x056e:  lea    -0x25c(%ebp),%eax
0820c4a0 +0x0574:  mov    %eax,(%esp)
0820c4a3 +0x0577:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c4a8 +0x057c:  movl   $0x1,0x4(%esp)
0820c4b0 +0x0584:  lea    -0x25c(%ebp),%eax
0820c4b6 +0x058a:  mov    %eax,(%esp)
0820c4b9 +0x058d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c4be +0x0592:  movl   $0x67,0x4(%esp)
0820c4c6 +0x059a:  lea    -0x25c(%ebp),%eax
0820c4cc +0x05a0:  mov    %eax,(%esp)
0820c4cf +0x05a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c4d4 +0x05a8:  movl   $0x1,0x4(%esp)
0820c4dc +0x05b0:  lea    -0x25c(%ebp),%eax
0820c4e2 +0x05b6:  mov    %eax,(%esp)
0820c4e5 +0x05b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c4ea +0x05be:  lea    -0x25c(%ebp),%eax
0820c4f0 +0x05c4:  mov    %eax,0x4(%esp)
0820c4f4 +0x05c8:  mov    0xc(%ebp),%eax
0820c4f7 +0x05cb:  mov    %eax,(%esp)
0820c4fa +0x05ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c4ff +0x05d3:  mov    $0x0,%ebx
0820c504 +0x05d8:  jmp    0821345f <+0x7533>
0820c509 +0x05dd:  movl   $0x0,0x4(%esp)
0820c511 +0x05e5:  mov    0x14(%ebp),%eax
0820c514 +0x05e8:  mov    %eax,(%esp)
0820c517 +0x05eb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c51c +0x05f0:  movl   $"troublemaker",0x4(%esp)
0820c524 +0x05f8:  mov    %eax,(%esp)
0820c527 +0x05fb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c52c +0x0600:  test   %al,%al
0820c52e +0x0602:  je     0820c6f4 <+0x7c8>
0820c534 +0x0608:  movl   $0x1,0x4(%esp)
0820c53c +0x0610:  mov    0x14(%ebp),%eax
0820c53f +0x0613:  mov    %eax,(%esp)
0820c542 +0x0616:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c547 +0x061b:  movl   $"on",0x4(%esp)
0820c54f +0x0623:  mov    %eax,(%esp)
0820c552 +0x0626:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c557 +0x062b:  test   %al,%al
0820c559 +0x062d:  je     0820c614 <+0x6e8>
0820c55f +0x0633:  mov    0xc(%ebp),%eax
0820c562 +0x0636:  movl   $0x64,0x4(%esp)
0820c56a +0x063e:  mov    %eax,(%esp)
0820c56d +0x0641:  call   0822f6b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d5e
0820c572 +0x0646:  movl   $0x0,0xc(%esp)
0820c57a +0x064e:  movl   $0x2,0x8(%esp)
0820c582 +0x0656:  movl   $0x0,0x4(%esp)
0820c58a +0x065e:  mov    0xc(%ebp),%eax
0820c58d +0x0661:  mov    %eax,(%esp)
0820c590 +0x0664:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0820c595 +0x0669:  movl   $0xb3,0x8(%esp)
0820c59d +0x0671:  movl   $0x1,0x4(%esp)
0820c5a5 +0x0679:  lea    -0x25c(%ebp),%eax
0820c5ab +0x067f:  mov    %eax,(%esp)
0820c5ae +0x0682:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c5b3 +0x0687:  movl   $0x1,0x4(%esp)
0820c5bb +0x068f:  lea    -0x25c(%ebp),%eax
0820c5c1 +0x0695:  mov    %eax,(%esp)
0820c5c4 +0x0698:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c5c9 +0x069d:  movl   $0x68,0x4(%esp)
0820c5d1 +0x06a5:  lea    -0x25c(%ebp),%eax
0820c5d7 +0x06ab:  mov    %eax,(%esp)
0820c5da +0x06ae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c5df +0x06b3:  movl   $0x1,0x4(%esp)
0820c5e7 +0x06bb:  lea    -0x25c(%ebp),%eax
0820c5ed +0x06c1:  mov    %eax,(%esp)
0820c5f0 +0x06c4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c5f5 +0x06c9:  lea    -0x25c(%ebp),%eax
0820c5fb +0x06cf:  mov    %eax,0x4(%esp)
0820c5ff +0x06d3:  mov    0xc(%ebp),%eax
0820c602 +0x06d6:  mov    %eax,(%esp)
0820c605 +0x06d9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c60a +0x06de:  mov    $0x0,%ebx
0820c60f +0x06e3:  jmp    0821345f <+0x7533>
0820c614 +0x06e8:  movl   $0x1,0x4(%esp)
0820c61c +0x06f0:  mov    0x14(%ebp),%eax
0820c61f +0x06f3:  mov    %eax,(%esp)
0820c622 +0x06f6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c627 +0x06fb:  movl   $"off",0x4(%esp)
0820c62f +0x0703:  mov    %eax,(%esp)
0820c632 +0x0706:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c637 +0x070b:  test   %al,%al
0820c639 +0x070d:  je     08213440 <+0x7514>
0820c63f +0x0713:  mov    0xc(%ebp),%eax
0820c642 +0x0716:  movl   $0x0,0x4(%esp)
0820c64a +0x071e:  mov    %eax,(%esp)
0820c64d +0x0721:  call   0822f6b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d5e
0820c652 +0x0726:  movl   $0x0,0xc(%esp)
0820c65a +0x072e:  movl   $0x2,0x8(%esp)
0820c662 +0x0736:  movl   $0x0,0x4(%esp)
0820c66a +0x073e:  mov    0xc(%ebp),%eax
0820c66d +0x0741:  mov    %eax,(%esp)
0820c670 +0x0744:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0820c675 +0x0749:  movl   $0xb3,0x8(%esp)
0820c67d +0x0751:  movl   $0x1,0x4(%esp)
0820c685 +0x0759:  lea    -0x25c(%ebp),%eax
0820c68b +0x075f:  mov    %eax,(%esp)
0820c68e +0x0762:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c693 +0x0767:  movl   $0x1,0x4(%esp)
0820c69b +0x076f:  lea    -0x25c(%ebp),%eax
0820c6a1 +0x0775:  mov    %eax,(%esp)
0820c6a4 +0x0778:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c6a9 +0x077d:  movl   $0x68,0x4(%esp)
0820c6b1 +0x0785:  lea    -0x25c(%ebp),%eax
0820c6b7 +0x078b:  mov    %eax,(%esp)
0820c6ba +0x078e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c6bf +0x0793:  movl   $0x1,0x4(%esp)
0820c6c7 +0x079b:  lea    -0x25c(%ebp),%eax
0820c6cd +0x07a1:  mov    %eax,(%esp)
0820c6d0 +0x07a4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c6d5 +0x07a9:  lea    -0x25c(%ebp),%eax
0820c6db +0x07af:  mov    %eax,0x4(%esp)
0820c6df +0x07b3:  mov    0xc(%ebp),%eax
0820c6e2 +0x07b6:  mov    %eax,(%esp)
0820c6e5 +0x07b9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c6ea +0x07be:  mov    $0x0,%ebx
0820c6ef +0x07c3:  jmp    0821345f <+0x7533>
0820c6f4 +0x07c8:  movl   $0x0,0x4(%esp)
0820c6fc +0x07d0:  mov    0x14(%ebp),%eax
0820c6ff +0x07d3:  mov    %eax,(%esp)
0820c702 +0x07d6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c707 +0x07db:  movl   $"fatigue",0x4(%esp)
0820c70f +0x07e3:  mov    %eax,(%esp)
0820c712 +0x07e6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c717 +0x07eb:  test   %al,%al
0820c719 +0x07ed:  je     0820c8b7 <+0x98b>
0820c71f +0x07f3:  movl   $0x1,0x4(%esp)
0820c727 +0x07fb:  mov    0x14(%ebp),%eax
0820c72a +0x07fe:  mov    %eax,(%esp)
0820c72d +0x0801:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c732 +0x0806:  movl   $"set",0x4(%esp)
0820c73a +0x080e:  mov    %eax,(%esp)
0820c73d +0x0811:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c742 +0x0816:  test   %al,%al
0820c744 +0x0818:  je     0820c83f <+0x913>
0820c74a +0x081e:  movl   $0x2,0x4(%esp)
0820c752 +0x0826:  mov    0x14(%ebp),%eax
0820c755 +0x0829:  mov    %eax,(%esp)
0820c758 +0x082c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c75d +0x0831:  mov    %eax,(%esp)
0820c760 +0x0834:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c765 +0x0839:  mov    %eax,(%esp)
0820c768 +0x083c:  call   0807e6f0 <_init+0xfe8>
0820c76d +0x0841:  mov    %eax,-0x11c(%ebp)
0820c773 +0x0847:  cmpl   $0x0,-0x11c(%ebp)
0820c77a +0x084e:  js     08213440 <+0x7514>
0820c780 +0x0854:  cmpl   $0x270f,-0x11c(%ebp)
0820c78a +0x085e:  jg     08213440 <+0x7514>
0820c790 +0x0864:  mov    0xc(%ebp),%eax
0820c793 +0x0867:  mov    %eax,(%esp)
0820c796 +0x086a:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
0820c79b +0x086f:  movzwl %ax,%eax
0820c79e +0x0872:  mov    %eax,%edx
0820c7a0 +0x0874:  sub    -0x11c(%ebp),%edx
0820c7a6 +0x087a:  mov    0xc(%ebp),%eax
0820c7a9 +0x087d:  mov    %edx,0x4(%esp)
0820c7ad +0x0881:  mov    %eax,(%esp)
0820c7b0 +0x0884:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0820c7b5 +0x0889:  mov    0xc(%ebp),%eax
0820c7b8 +0x088c:  mov    %eax,(%esp)
0820c7bb +0x088f:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0820c7c0 +0x0894:  movl   $0xb3,0x8(%esp)
0820c7c8 +0x089c:  movl   $0x1,0x4(%esp)
0820c7d0 +0x08a4:  lea    -0x25c(%ebp),%eax
0820c7d6 +0x08aa:  mov    %eax,(%esp)
0820c7d9 +0x08ad:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c7de +0x08b2:  movl   $0x1,0x4(%esp)
0820c7e6 +0x08ba:  lea    -0x25c(%ebp),%eax
0820c7ec +0x08c0:  mov    %eax,(%esp)
0820c7ef +0x08c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c7f4 +0x08c8:  movl   $0x69,0x4(%esp)
0820c7fc +0x08d0:  lea    -0x25c(%ebp),%eax
0820c802 +0x08d6:  mov    %eax,(%esp)
0820c805 +0x08d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820c80a +0x08de:  movl   $0x1,0x4(%esp)
0820c812 +0x08e6:  lea    -0x25c(%ebp),%eax
0820c818 +0x08ec:  mov    %eax,(%esp)
0820c81b +0x08ef:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820c820 +0x08f4:  lea    -0x25c(%ebp),%eax
0820c826 +0x08fa:  mov    %eax,0x4(%esp)
0820c82a +0x08fe:  mov    0xc(%ebp),%eax
0820c82d +0x0901:  mov    %eax,(%esp)
0820c830 +0x0904:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820c835 +0x0909:  mov    $0x0,%ebx
0820c83a +0x090e:  jmp    0821345f <+0x7533>
0820c83f +0x0913:  movl   $0x1,0x4(%esp)
0820c847 +0x091b:  mov    0x14(%ebp),%eax
0820c84a +0x091e:  mov    %eax,(%esp)
0820c84d +0x0921:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c852 +0x0926:  mov    %eax,(%esp)
0820c855 +0x0929:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820c85a +0x092e:  mov    %eax,(%esp)
0820c85d +0x0931:  call   0807e6f0 <_init+0xfe8>
0820c862 +0x0936:  mov    %eax,-0x118(%ebp)
0820c868 +0x093c:  cmpl   $0x0,-0x118(%ebp)
0820c86f +0x0943:  js     08213440 <+0x7514>
0820c875 +0x0949:  cmpl   $0x270f,-0x118(%ebp)
0820c87f +0x0953:  jg     08213440 <+0x7514>
0820c885 +0x0959:  cmpl   $0x0,-0x118(%ebp)
0820c88c +0x0960:  jle    08213440 <+0x7514>
0820c892 +0x0966:  mov    -0x118(%ebp),%eax
0820c898 +0x096c:  mov    %eax,0x4(%esp)
0820c89c +0x0970:  mov    0xc(%ebp),%eax
0820c89f +0x0973:  mov    %eax,(%esp)
0820c8a2 +0x0976:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
0820c8a7 +0x097b:  mov    0xc(%ebp),%eax
0820c8aa +0x097e:  mov    %eax,(%esp)
0820c8ad +0x0981:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0820c8b2 +0x0986:  jmp    08213440 <+0x7514>
0820c8b7 +0x098b:  movl   $0x0,0x4(%esp)
0820c8bf +0x0993:  mov    0x14(%ebp),%eax
0820c8c2 +0x0996:  mov    %eax,(%esp)
0820c8c5 +0x0999:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c8ca +0x099e:  movl   $"show",0x4(%esp)
0820c8d2 +0x09a6:  mov    %eax,(%esp)
0820c8d5 +0x09a9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c8da +0x09ae:  test   %al,%al
0820c8dc +0x09b0:  je     0820cb15 <+0xbe9>
0820c8e2 +0x09b6:  movl   $0x1,0x4(%esp)
0820c8ea +0x09be:  mov    0x14(%ebp),%eax
0820c8ed +0x09c1:  mov    %eax,(%esp)
0820c8f0 +0x09c4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820c8f5 +0x09c9:  movl   $"lp",0x4(%esp)
0820c8fd +0x09d1:  mov    %eax,(%esp)
0820c900 +0x09d4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820c905 +0x09d9:  test   %al,%al
0820c907 +0x09db:  je     08213440 <+0x7514>
0820c90d +0x09e1:  mov    0xc(%ebp),%eax
0820c910 +0x09e4:  mov    %eax,(%esp)
0820c913 +0x09e7:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
0820c918 +0x09ec:  mov    %eax,-0x114(%ebp)
0820c91e +0x09f2:  lea    -0x24a(%ebp),%eax
0820c924 +0x09f8:  mov    %eax,(%esp)
0820c927 +0x09fb:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0820c92c +0x0a00:  lea    -0x24a(%ebp),%eax
0820c932 +0x0a06:  mov    %eax,0x8(%esp)
0820c936 +0x0a0a:  movl   $"remained luck point : ",0x4(%esp)
0820c93e +0x0a12:  lea    -0x260(%ebp),%eax
0820c944 +0x0a18:  mov    %eax,(%esp)
0820c947 +0x0a1b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0820c94c +0x0a20:  jmp    0820c969 <+0xa3d>
0820c94e +0x0a22:  mov    %edx,%ebx
0820c950 +0x0a24:  mov    %eax,%esi
0820c952 +0x0a26:  lea    -0x24a(%ebp),%eax
0820c958 +0x0a2c:  mov    %eax,(%esp)
0820c95b +0x0a2f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820c960 +0x0a34:  mov    %esi,%eax
0820c962 +0x0a36:  mov    %ebx,%edx
0820c964 +0x0a38:  jmp    08213447 <+0x751b>
0820c969 +0x0a3d:  lea    -0x24a(%ebp),%eax
0820c96f +0x0a43:  mov    %eax,(%esp)
0820c972 +0x0a46:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820c977 +0x0a4b:  lea    -0x668(%ebp),%edx
0820c97d +0x0a51:  mov    $0x0,%eax
0820c982 +0x0a56:  mov    $0x3f,%ecx
0820c987 +0x0a5b:  mov    %edx,%edi
0820c989 +0x0a5d:  rep stos %eax,%es:(%edi)
0820c98b +0x0a5f:  mov    %edi,%edx
0820c98d +0x0a61:  mov    %ax,(%edx)
0820c990 +0x0a64:  add    $0x2,%edx
0820c993 +0x0a67:  mov    %al,(%edx)
0820c995 +0x0a69:  add    $0x1,%edx
0820c998 +0x0a6c:  mov    -0x114(%ebp),%eax
0820c99e +0x0a72:  mov    %eax,0x8(%esp)
0820c9a2 +0x0a76:  movl   $"(%d) ",0x4(%esp)
0820c9aa +0x0a7e:  lea    -0x668(%ebp),%eax
0820c9b0 +0x0a84:  mov    %eax,(%esp)
0820c9b3 +0x0a87:  call   0807e440 <_init+0xd38>
0820c9b8 +0x0a8c:  lea    -0x668(%ebp),%eax
0820c9be +0x0a92:  mov    %eax,0x4(%esp)
0820c9c2 +0x0a96:  lea    -0x260(%ebp),%eax
0820c9c8 +0x0a9c:  mov    %eax,(%esp)
0820c9cb +0x0a9f:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0820c9d0 +0x0aa4:  lea    -0x26c(%ebp),%eax
0820c9d6 +0x0aaa:  mov    %eax,(%esp)
0820c9d9 +0x0aad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820c9de +0x0ab2:  movl   $0xc,0x8(%esp)
0820c9e6 +0x0aba:  movl   $0x0,0x4(%esp)
0820c9ee +0x0ac2:  lea    -0x26c(%ebp),%eax
0820c9f4 +0x0ac8:  mov    %eax,(%esp)
0820c9f7 +0x0acb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820c9fc +0x0ad0:  movl   $0x0,0x4(%esp)
0820ca04 +0x0ad8:  lea    -0x26c(%ebp),%eax
0820ca0a +0x0ade:  mov    %eax,(%esp)
0820ca0d +0x0ae1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820ca12 +0x0ae6:  movl   $0x0,0x4(%esp)
0820ca1a +0x0aee:  lea    -0x26c(%ebp),%eax
0820ca20 +0x0af4:  mov    %eax,(%esp)
0820ca23 +0x0af7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0820ca28 +0x0afc:  movl   $0x0,0x4(%esp)
0820ca30 +0x0b04:  lea    -0x26c(%ebp),%eax
0820ca36 +0x0b0a:  mov    %eax,(%esp)
0820ca39 +0x0b0d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820ca3e +0x0b12:  lea    -0x260(%ebp),%eax
0820ca44 +0x0b18:  mov    %eax,(%esp)
0820ca47 +0x0b1b:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820ca4c +0x0b20:  mov    %eax,0x4(%esp)
0820ca50 +0x0b24:  lea    -0x26c(%ebp),%eax
0820ca56 +0x0b2a:  mov    %eax,(%esp)
0820ca59 +0x0b2d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0820ca5e +0x0b32:  lea    -0x260(%ebp),%eax
0820ca64 +0x0b38:  mov    %eax,(%esp)
0820ca67 +0x0b3b:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820ca6c +0x0b40:  mov    %eax,%ebx
0820ca6e +0x0b42:  lea    -0x260(%ebp),%eax
0820ca74 +0x0b48:  mov    %eax,(%esp)
0820ca77 +0x0b4b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ca7c +0x0b50:  mov    %ebx,0x8(%esp)
0820ca80 +0x0b54:  mov    %eax,0x4(%esp)
0820ca84 +0x0b58:  lea    -0x26c(%ebp),%eax
0820ca8a +0x0b5e:  mov    %eax,(%esp)
0820ca8d +0x0b61:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0820ca92 +0x0b66:  movl   $0x1,0x4(%esp)
0820ca9a +0x0b6e:  lea    -0x26c(%ebp),%eax
0820caa0 +0x0b74:  mov    %eax,(%esp)
0820caa3 +0x0b77:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820caa8 +0x0b7c:  lea    -0x26c(%ebp),%eax
0820caae +0x0b82:  mov    %eax,0x4(%esp)
0820cab2 +0x0b86:  mov    0xc(%ebp),%eax
0820cab5 +0x0b89:  mov    %eax,(%esp)
0820cab8 +0x0b8c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820cabd +0x0b91:  jmp    0820cad7 <+0xbab>
0820cabf +0x0b93:  mov    %edx,%ebx
0820cac1 +0x0b95:  mov    %eax,%esi
0820cac3 +0x0b97:  lea    -0x26c(%ebp),%eax
0820cac9 +0x0b9d:  mov    %eax,(%esp)
0820cacc +0x0ba0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820cad1 +0x0ba5:  mov    %esi,%eax
0820cad3 +0x0ba7:  mov    %ebx,%edx
0820cad5 +0x0ba9:  jmp    0820cae7 <+0xbbb>
0820cad7 +0x0bab:  lea    -0x26c(%ebp),%eax
0820cadd +0x0bb1:  mov    %eax,(%esp)
0820cae0 +0x0bb4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820cae5 +0x0bb9:  jmp    0820cb02 <+0xbd6>
0820cae7 +0x0bbb:  mov    %edx,%ebx
0820cae9 +0x0bbd:  mov    %eax,%esi
0820caeb +0x0bbf:  lea    -0x260(%ebp),%eax
0820caf1 +0x0bc5:  mov    %eax,(%esp)
0820caf4 +0x0bc8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820caf9 +0x0bcd:  mov    %esi,%eax
0820cafb +0x0bcf:  mov    %ebx,%edx
0820cafd +0x0bd1:  jmp    08213447 <+0x751b>
0820cb02 +0x0bd6:  lea    -0x260(%ebp),%eax
0820cb08 +0x0bdc:  mov    %eax,(%esp)
0820cb0b +0x0bdf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820cb10 +0x0be4:  jmp    08213440 <+0x7514>
0820cb15 +0x0be9:  movl   $0x0,0x4(%esp)
0820cb1d +0x0bf1:  mov    0x14(%ebp),%eax
0820cb20 +0x0bf4:  mov    %eax,(%esp)
0820cb23 +0x0bf7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cb28 +0x0bfc:  movl   $"max",0x4(%esp)
0820cb30 +0x0c04:  mov    %eax,(%esp)
0820cb33 +0x0c07:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cb38 +0x0c0c:  test   %al,%al
0820cb3a +0x0c0e:  je     0820cd27 <+0xdfb>
0820cb40 +0x0c14:  movl   $0x1,0x4(%esp)
0820cb48 +0x0c1c:  mov    0x14(%ebp),%eax
0820cb4b +0x0c1f:  mov    %eax,(%esp)
0820cb4e +0x0c22:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cb53 +0x0c27:  movl   $"lp",0x4(%esp)
0820cb5b +0x0c2f:  mov    %eax,(%esp)
0820cb5e +0x0c32:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cb63 +0x0c37:  test   %al,%al
0820cb65 +0x0c39:  je     08213440 <+0x7514>
0820cb6b +0x0c3f:  mov    0xc(%ebp),%eax
0820cb6e +0x0c42:  movl   $&_ZL14gUnicodeBuffer+0xe174,0x4(%esp)
0820cb76 +0x0c4a:  mov    %eax,(%esp)
0820cb79 +0x0c4d:  call   0822f84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ef4
0820cb7e +0x0c52:  mov    0xc(%ebp),%eax
0820cb81 +0x0c55:  mov    %eax,(%esp)
0820cb84 +0x0c58:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0820cb89 +0x0c5d:  lea    -0x249(%ebp),%eax
0820cb8f +0x0c63:  mov    %eax,(%esp)
0820cb92 +0x0c66:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0820cb97 +0x0c6b:  lea    -0x249(%ebp),%eax
0820cb9d +0x0c71:  mov    %eax,0x8(%esp)
0820cba1 +0x0c75:  movl   $"100000 luck point!!",0x4(%esp)
0820cba9 +0x0c7d:  lea    -0x270(%ebp),%eax
0820cbaf +0x0c83:  mov    %eax,(%esp)
0820cbb2 +0x0c86:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0820cbb7 +0x0c8b:  jmp    0820cbd4 <+0xca8>
0820cbb9 +0x0c8d:  mov    %edx,%ebx
0820cbbb +0x0c8f:  mov    %eax,%esi
0820cbbd +0x0c91:  lea    -0x249(%ebp),%eax
0820cbc3 +0x0c97:  mov    %eax,(%esp)
0820cbc6 +0x0c9a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820cbcb +0x0c9f:  mov    %esi,%eax
0820cbcd +0x0ca1:  mov    %ebx,%edx
0820cbcf +0x0ca3:  jmp    08213447 <+0x751b>
0820cbd4 +0x0ca8:  lea    -0x249(%ebp),%eax
0820cbda +0x0cae:  mov    %eax,(%esp)
0820cbdd +0x0cb1:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820cbe2 +0x0cb6:  lea    -0x27c(%ebp),%eax
0820cbe8 +0x0cbc:  mov    %eax,(%esp)
0820cbeb +0x0cbf:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820cbf0 +0x0cc4:  movl   $0xc,0x8(%esp)
0820cbf8 +0x0ccc:  movl   $0x0,0x4(%esp)
0820cc00 +0x0cd4:  lea    -0x27c(%ebp),%eax
0820cc06 +0x0cda:  mov    %eax,(%esp)
0820cc09 +0x0cdd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820cc0e +0x0ce2:  movl   $0x0,0x4(%esp)
0820cc16 +0x0cea:  lea    -0x27c(%ebp),%eax
0820cc1c +0x0cf0:  mov    %eax,(%esp)
0820cc1f +0x0cf3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820cc24 +0x0cf8:  movl   $0x0,0x4(%esp)
0820cc2c +0x0d00:  lea    -0x27c(%ebp),%eax
0820cc32 +0x0d06:  mov    %eax,(%esp)
0820cc35 +0x0d09:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0820cc3a +0x0d0e:  movl   $0x0,0x4(%esp)
0820cc42 +0x0d16:  lea    -0x27c(%ebp),%eax
0820cc48 +0x0d1c:  mov    %eax,(%esp)
0820cc4b +0x0d1f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820cc50 +0x0d24:  lea    -0x270(%ebp),%eax
0820cc56 +0x0d2a:  mov    %eax,(%esp)
0820cc59 +0x0d2d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820cc5e +0x0d32:  mov    %eax,0x4(%esp)
0820cc62 +0x0d36:  lea    -0x27c(%ebp),%eax
0820cc68 +0x0d3c:  mov    %eax,(%esp)
0820cc6b +0x0d3f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0820cc70 +0x0d44:  lea    -0x270(%ebp),%eax
0820cc76 +0x0d4a:  mov    %eax,(%esp)
0820cc79 +0x0d4d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820cc7e +0x0d52:  mov    %eax,%ebx
0820cc80 +0x0d54:  lea    -0x270(%ebp),%eax
0820cc86 +0x0d5a:  mov    %eax,(%esp)
0820cc89 +0x0d5d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820cc8e +0x0d62:  mov    %ebx,0x8(%esp)
0820cc92 +0x0d66:  mov    %eax,0x4(%esp)
0820cc96 +0x0d6a:  lea    -0x27c(%ebp),%eax
0820cc9c +0x0d70:  mov    %eax,(%esp)
0820cc9f +0x0d73:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0820cca4 +0x0d78:  movl   $0x1,0x4(%esp)
0820ccac +0x0d80:  lea    -0x27c(%ebp),%eax
0820ccb2 +0x0d86:  mov    %eax,(%esp)
0820ccb5 +0x0d89:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820ccba +0x0d8e:  lea    -0x27c(%ebp),%eax
0820ccc0 +0x0d94:  mov    %eax,0x4(%esp)
0820ccc4 +0x0d98:  mov    0xc(%ebp),%eax
0820ccc7 +0x0d9b:  mov    %eax,(%esp)
0820ccca +0x0d9e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820cccf +0x0da3:  jmp    0820cce9 <+0xdbd>
0820ccd1 +0x0da5:  mov    %edx,%ebx
0820ccd3 +0x0da7:  mov    %eax,%esi
0820ccd5 +0x0da9:  lea    -0x27c(%ebp),%eax
0820ccdb +0x0daf:  mov    %eax,(%esp)
0820ccde +0x0db2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820cce3 +0x0db7:  mov    %esi,%eax
0820cce5 +0x0db9:  mov    %ebx,%edx
0820cce7 +0x0dbb:  jmp    0820ccf9 <+0xdcd>
0820cce9 +0x0dbd:  lea    -0x27c(%ebp),%eax
0820ccef +0x0dc3:  mov    %eax,(%esp)
0820ccf2 +0x0dc6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820ccf7 +0x0dcb:  jmp    0820cd14 <+0xde8>
0820ccf9 +0x0dcd:  mov    %edx,%ebx
0820ccfb +0x0dcf:  mov    %eax,%esi
0820ccfd +0x0dd1:  lea    -0x270(%ebp),%eax
0820cd03 +0x0dd7:  mov    %eax,(%esp)
0820cd06 +0x0dda:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820cd0b +0x0ddf:  mov    %esi,%eax
0820cd0d +0x0de1:  mov    %ebx,%edx
0820cd0f +0x0de3:  jmp    08213447 <+0x751b>
0820cd14 +0x0de8:  lea    -0x270(%ebp),%eax
0820cd1a +0x0dee:  mov    %eax,(%esp)
0820cd1d +0x0df1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820cd22 +0x0df6:  jmp    08213440 <+0x7514>
0820cd27 +0x0dfb:  movl   $0x0,0x4(%esp)
0820cd2f +0x0e03:  mov    0x14(%ebp),%eax
0820cd32 +0x0e06:  mov    %eax,(%esp)
0820cd35 +0x0e09:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cd3a +0x0e0e:  movl   $"item",0x4(%esp)
0820cd42 +0x0e16:  mov    %eax,(%esp)
0820cd45 +0x0e19:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cd4a +0x0e1e:  test   %al,%al
0820cd4c +0x0e20:  je     0820cda9 <+0xe7d>
0820cd4e +0x0e22:  movl   $0x1,0x4(%esp)
0820cd56 +0x0e2a:  mov    0x14(%ebp),%eax
0820cd59 +0x0e2d:  mov    %eax,(%esp)
0820cd5c +0x0e30:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cd61 +0x0e35:  mov    %eax,(%esp)
0820cd64 +0x0e38:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820cd69 +0x0e3d:  mov    %eax,(%esp)
0820cd6c +0x0e40:  call   0807e6f0 <_init+0xfe8>
0820cd71 +0x0e45:  mov    %eax,-0x110(%ebp)
0820cd77 +0x0e4b:  mov    -0x110(%ebp),%eax
0820cd7d +0x0e51:  movl   $0x64,0xc(%esp)
0820cd85 +0x0e59:  mov    %eax,0x8(%esp)
0820cd89 +0x0e5d:  mov    0xc(%ebp),%eax
0820cd8c +0x0e60:  mov    %eax,0x4(%esp)
0820cd90 +0x0e64:  lea    -0x250(%ebp),%eax
0820cd96 +0x0e6a:  mov    %eax,(%esp)
0820cd99 +0x0e6d:  call   0858ec9c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi>  ; DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, unsigned long, int)
0820cd9e +0x0e72:  mov    %al,-0x109(%ebp)
0820cda4 +0x0e78:  jmp    08213440 <+0x7514>
0820cda9 +0x0e7d:  movl   $0x0,0x4(%esp)
0820cdb1 +0x0e85:  mov    0x14(%ebp),%eax
0820cdb4 +0x0e88:  mov    %eax,(%esp)
0820cdb7 +0x0e8b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cdbc +0x0e90:  movl   $"show",0x4(%esp)
0820cdc4 +0x0e98:  mov    %eax,(%esp)
0820cdc7 +0x0e9b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cdcc +0x0ea0:  test   %al,%al
0820cdce +0x0ea2:  je     0820cdfa <+0xece>
0820cdd0 +0x0ea4:  lea    -0x404(%ebp),%eax
0820cdd6 +0x0eaa:  mov    %eax,0x8(%esp)
0820cdda +0x0eae:  mov    0xc(%ebp),%eax
0820cddd +0x0eb1:  mov    %eax,0x4(%esp)
0820cde1 +0x0eb5:  lea    -0x250(%ebp),%eax
0820cde7 +0x0ebb:  mov    %eax,(%esp)
0820cdea +0x0ebe:  call   085906ac <_ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&)
0820cdef +0x0ec3:  mov    %al,-0x12d(%ebp)
0820cdf5 +0x0ec9:  jmp    08213440 <+0x7514>
0820cdfa +0x0ece:  movl   $0x0,0x4(%esp)
0820ce02 +0x0ed6:  mov    0x14(%ebp),%eax
0820ce05 +0x0ed9:  mov    %eax,(%esp)
0820ce08 +0x0edc:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ce0d +0x0ee1:  movl   $"hide",0x4(%esp)
0820ce15 +0x0ee9:  mov    %eax,(%esp)
0820ce18 +0x0eec:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ce1d +0x0ef1:  test   %al,%al
0820ce1f +0x0ef3:  je     0820ce4b <+0xf1f>
0820ce21 +0x0ef5:  lea    -0x434(%ebp),%eax
0820ce27 +0x0efb:  mov    %eax,0x8(%esp)
0820ce2b +0x0eff:  mov    0xc(%ebp),%eax
0820ce2e +0x0f02:  mov    %eax,0x4(%esp)
0820ce32 +0x0f06:  lea    -0x250(%ebp),%eax
0820ce38 +0x0f0c:  mov    %eax,(%esp)
0820ce3b +0x0f0f:  call   0859058a <_ZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&)
0820ce40 +0x0f14:  mov    %al,-0x12d(%ebp)
0820ce46 +0x0f1a:  jmp    08213440 <+0x7514>
0820ce4b +0x0f1f:  movl   $0x0,0x4(%esp)
0820ce53 +0x0f27:  mov    0x14(%ebp),%eax
0820ce56 +0x0f2a:  mov    %eax,(%esp)
0820ce59 +0x0f2d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ce5e +0x0f32:  movl   $"dirty",0x4(%esp)
0820ce66 +0x0f3a:  mov    %eax,(%esp)
0820ce69 +0x0f3d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ce6e +0x0f42:  test   %al,%al
0820ce70 +0x0f44:  je     0820cea9 <+0xf7d>
0820ce72 +0x0f46:  movl   $0x1,0x4(%esp)
0820ce7a +0x0f4e:  mov    0x14(%ebp),%eax
0820ce7d +0x0f51:  mov    %eax,(%esp)
0820ce80 +0x0f54:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ce85 +0x0f59:  mov    %eax,(%esp)
0820ce88 +0x0f5c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ce8d +0x0f61:  mov    %eax,0x8(%esp)
0820ce91 +0x0f65:  movl   $0x1f,0x4(%esp)
0820ce99 +0x0f6d:  mov    0xc(%ebp),%eax
0820ce9c +0x0f70:  mov    %eax,(%esp)
0820ce9f +0x0f73:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820cea4 +0x0f78:  jmp    08213440 <+0x7514>
0820cea9 +0x0f7d:  movl   $0x0,0x4(%esp)
0820ceb1 +0x0f85:  mov    0x14(%ebp),%eax
0820ceb4 +0x0f88:  mov    %eax,(%esp)
0820ceb7 +0x0f8b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cebc +0x0f90:  movl   $"avatar",0x4(%esp)
0820cec4 +0x0f98:  mov    %eax,(%esp)
0820cec7 +0x0f9b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cecc +0x0fa0:  test   %al,%al
0820cece +0x0fa2:  je     0820cf79 <+0x104d>
0820ced4 +0x0fa8:  movl   $0x1,0x4(%esp)
0820cedc +0x0fb0:  mov    0x14(%ebp),%eax
0820cedf +0x0fb3:  mov    %eax,(%esp)
0820cee2 +0x0fb6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cee7 +0x0fbb:  mov    %eax,(%esp)
0820ceea +0x0fbe:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ceef +0x0fc3:  mov    %eax,(%esp)
0820cef2 +0x0fc6:  call   0807e6f0 <_init+0xfe8>
0820cef7 +0x0fcb:  mov    %eax,-0x456(%ebp)
0820cefd +0x0fd1:  movl   $0x2,0x4(%esp)
0820cf05 +0x0fd9:  mov    0x14(%ebp),%eax
0820cf08 +0x0fdc:  mov    %eax,(%esp)
0820cf0b +0x0fdf:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cf10 +0x0fe4:  mov    %eax,(%esp)
0820cf13 +0x0fe7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820cf18 +0x0fec:  mov    %eax,(%esp)
0820cf1b +0x0fef:  call   0807e6f0 <_init+0xfe8>
0820cf20 +0x0ff4:  mov    %al,-0x451(%ebp)
0820cf26 +0x0ffa:  movl   $0x3,0x4(%esp)
0820cf2e +0x1002:  mov    0x14(%ebp),%eax
0820cf31 +0x1005:  mov    %eax,(%esp)
0820cf34 +0x1008:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cf39 +0x100d:  mov    %eax,(%esp)
0820cf3c +0x1010:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820cf41 +0x1015:  mov    %eax,(%esp)
0820cf44 +0x1018:  call   0807e6f0 <_init+0xfe8>
0820cf49 +0x101d:  mov    %al,-0x452(%ebp)
0820cf4f +0x1023:  lea    -0x464(%ebp),%eax
0820cf55 +0x1029:  mov    %eax,0x8(%esp)
0820cf59 +0x102d:  mov    0xc(%ebp),%eax
0820cf5c +0x1030:  mov    %eax,0x4(%esp)
0820cf60 +0x1034:  lea    -0x250(%ebp),%eax
0820cf66 +0x103a:  mov    %eax,(%esp)
0820cf69 +0x103d:  call   0858f7b6 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&)
0820cf6e +0x1042:  mov    %al,-0x12d(%ebp)
0820cf74 +0x1048:  jmp    08213440 <+0x7514>
0820cf79 +0x104d:  movl   $0x0,0x4(%esp)
0820cf81 +0x1055:  mov    0x14(%ebp),%eax
0820cf84 +0x1058:  mov    %eax,(%esp)
0820cf87 +0x105b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cf8c +0x1060:  movl   $"combo",0x4(%esp)
0820cf94 +0x1068:  mov    %eax,(%esp)
0820cf97 +0x106b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cf9c +0x1070:  test   %al,%al
0820cf9e +0x1072:  jne    08213440 <+0x7514>
0820cfa4 +0x1078:  movl   $0x0,0x4(%esp)
0820cfac +0x1080:  mov    0x14(%ebp),%eax
0820cfaf +0x1083:  mov    %eax,(%esp)
0820cfb2 +0x1086:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cfb7 +0x108b:  movl   $"coin",0x4(%esp)
0820cfbf +0x1093:  mov    %eax,(%esp)
0820cfc2 +0x1096:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820cfc7 +0x109b:  test   %al,%al
0820cfc9 +0x109d:  je     0820d0b3 <+0x1187>
0820cfcf +0x10a3:  movl   $0x1,0x4(%esp)
0820cfd7 +0x10ab:  mov    0x14(%ebp),%eax
0820cfda +0x10ae:  mov    %eax,(%esp)
0820cfdd +0x10b1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820cfe2 +0x10b6:  mov    %eax,(%esp)
0820cfe5 +0x10b9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820cfea +0x10be:  mov    %eax,(%esp)
0820cfed +0x10c1:  call   0807e6f0 <_init+0xfe8>
0820cff2 +0x10c6:  mov    %eax,-0x108(%ebp)
0820cff8 +0x10cc:  mov    0xc(%ebp),%eax
0820cffb +0x10cf:  mov    %eax,(%esp)
0820cffe +0x10d2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0820d003 +0x10d7:  mov    %eax,(%esp)
0820d006 +0x10da:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
0820d00b +0x10df:  mov    -0x108(%ebp),%edx
0820d011 +0x10e5:  sub    %edx,%eax
0820d013 +0x10e7:  mov    %eax,-0x104(%ebp)
0820d019 +0x10ed:  cmpl   $0x0,-0x104(%ebp)
0820d020 +0x10f4:  jns    0820d02c <+0x1100>
0820d022 +0x10f6:  movl   $0x0,-0x104(%ebp)
0820d02c +0x1100:  mov    -0x104(%ebp),%ebx
0820d032 +0x1106:  mov    0xc(%ebp),%eax
0820d035 +0x1109:  mov    %eax,(%esp)
0820d038 +0x110c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0820d03d +0x1111:  mov    %ebx,0x4(%esp)
0820d041 +0x1115:  mov    %eax,(%esp)
0820d044 +0x1118:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
0820d049 +0x111d:  cmpl   $0x0,-0x108(%ebp)
0820d050 +0x1124:  jne    0820d0a3 <+0x1177>
0820d052 +0x1126:  mov    0xc(%ebp),%eax
0820d055 +0x1129:  mov    %eax,(%esp)
0820d058 +0x112c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0820d05d +0x1131:  movl   $0x0,0x4(%esp)
0820d065 +0x1139:  mov    %eax,(%esp)
0820d068 +0x113c:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
0820d06d +0x1141:  mov    0xc(%ebp),%eax
0820d070 +0x1144:  mov    %eax,(%esp)
0820d073 +0x1147:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0820d078 +0x114c:  movl   $0x0,0x4(%esp)
0820d080 +0x1154:  mov    %eax,(%esp)
0820d083 +0x1157:  call   081ac73a <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x46>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x46
0820d088 +0x115c:  mov    0xc(%ebp),%eax
0820d08b +0x115f:  mov    %eax,(%esp)
0820d08e +0x1162:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0820d093 +0x1167:  movl   $0x0,0x4(%esp)
0820d09b +0x116f:  mov    %eax,(%esp)
0820d09e +0x1172:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
0820d0a3 +0x1177:  mov    0xc(%ebp),%eax
0820d0a6 +0x117a:  mov    %eax,(%esp)
0820d0a9 +0x117d:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
0820d0ae +0x1182:  jmp    08213440 <+0x7514>
0820d0b3 +0x1187:  movl   $0x0,0x4(%esp)
0820d0bb +0x118f:  mov    0x14(%ebp),%eax
0820d0be +0x1192:  mov    %eax,(%esp)
0820d0c1 +0x1195:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d0c6 +0x119a:  movl   $"use",0x4(%esp)
0820d0ce +0x11a2:  mov    %eax,(%esp)
0820d0d1 +0x11a5:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d0d6 +0x11aa:  test   %al,%al
0820d0d8 +0x11ac:  je     0820d1e4 <+0x12b8>
0820d0de +0x11b2:  movl   $0x1,0x4(%esp)
0820d0e6 +0x11ba:  mov    0x14(%ebp),%eax
0820d0e9 +0x11bd:  mov    %eax,(%esp)
0820d0ec +0x11c0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d0f1 +0x11c5:  movl   $"item",0x4(%esp)
0820d0f9 +0x11cd:  mov    %eax,(%esp)
0820d0fc +0x11d0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d101 +0x11d5:  test   %al,%al
0820d103 +0x11d7:  je     08213440 <+0x7514>
0820d109 +0x11dd:  movl   $0x2,0x4(%esp)
0820d111 +0x11e5:  mov    0x14(%ebp),%eax
0820d114 +0x11e8:  mov    %eax,(%esp)
0820d117 +0x11eb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d11c +0x11f0:  mov    %eax,(%esp)
0820d11f +0x11f3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d124 +0x11f8:  mov    %eax,(%esp)
0820d127 +0x11fb:  call   0807e6f0 <_init+0xfe8>
0820d12c +0x1200:  mov    %eax,-0x100(%ebp)
0820d132 +0x1206:  movl   $0x3,0x4(%esp)
0820d13a +0x120e:  mov    0x14(%ebp),%eax
0820d13d +0x1211:  mov    %eax,(%esp)
0820d140 +0x1214:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d145 +0x1219:  mov    %eax,(%esp)
0820d148 +0x121c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d14d +0x1221:  mov    %eax,(%esp)
0820d150 +0x1224:  call   0807e6f0 <_init+0xfe8>
0820d155 +0x1229:  mov    %eax,-0xfc(%ebp)
0820d15b +0x122f:  cmpl   $0x0,-0x100(%ebp)
0820d162 +0x1236:  jle    0820d16d <+0x1241>
0820d164 +0x1238:  cmpl   $0x6,-0x100(%ebp)
0820d16b +0x123f:  jle    0820d177 <+0x124b>
0820d16d +0x1241:  mov    $0x0,%ebx
0820d172 +0x1246:  jmp    0821345f <+0x7533>
0820d177 +0x124b:  addl   $0x2,-0x100(%ebp)
0820d17e +0x1252:  movl   $0x0,-0xf8(%ebp)
0820d188 +0x125c:  jmp    0820d1a7 <+0x127b>
0820d18a +0x125e:  mov    -0x100(%ebp),%eax
0820d190 +0x1264:  cwtl
0820d191 +0x1265:  mov    %eax,0x4(%esp)
0820d195 +0x1269:  mov    0xc(%ebp),%eax
0820d198 +0x126c:  mov    %eax,(%esp)
0820d19b +0x126f:  call   086657fc <_ZN5CUser15increase_statusEs>  ; CUser::increase_status(short)
0820d1a0 +0x1274:  addl   $0x1,-0xf8(%ebp)
0820d1a7 +0x127b:  mov    -0xf8(%ebp),%eax
0820d1ad +0x1281:  cmp    -0xfc(%ebp),%eax
0820d1b3 +0x1287:  setl   %al
0820d1b6 +0x128a:  test   %al,%al
0820d1b8 +0x128c:  jne    0820d18a <+0x125e>
0820d1ba +0x128e:  mov    -0x100(%ebp),%eax
0820d1c0 +0x1294:  mov    %eax,0xc(%esp)
0820d1c4 +0x1298:  movl   $0x0,0x8(%esp)
0820d1cc +0x12a0:  movl   $0x1,0x4(%esp)
0820d1d4 +0x12a8:  mov    0xc(%ebp),%eax
0820d1d7 +0x12ab:  mov    %eax,(%esp)
0820d1da +0x12ae:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0820d1df +0x12b3:  jmp    08213440 <+0x7514>
0820d1e4 +0x12b8:  movl   $0x0,0x4(%esp)
0820d1ec +0x12c0:  mov    0x14(%ebp),%eax
0820d1ef +0x12c3:  mov    %eax,(%esp)
0820d1f2 +0x12c6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d1f7 +0x12cb:  movl   $"npcfav",0x4(%esp)
0820d1ff +0x12d3:  mov    %eax,(%esp)
0820d202 +0x12d6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d207 +0x12db:  test   %al,%al
0820d209 +0x12dd:  je     0820d29d <+0x1371>
0820d20f +0x12e3:  lea    -0x668(%ebp),%ebx
0820d215 +0x12e9:  mov    $0x0,%eax
0820d21a +0x12ee:  mov    $0x40,%edx
0820d21f +0x12f3:  mov    %ebx,%edi
0820d221 +0x12f5:  mov    %edx,%ecx
0820d223 +0x12f7:  rep stos %eax,%es:(%edi)
0820d225 +0x12f9:  movl   $0x2,0x4(%esp)
0820d22d +0x1301:  mov    0x14(%ebp),%eax
0820d230 +0x1304:  mov    %eax,(%esp)
0820d233 +0x1307:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d238 +0x130c:  mov    %eax,(%esp)
0820d23b +0x130f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d240 +0x1314:  mov    %eax,%ebx
0820d242 +0x1316:  movl   $0x1,0x4(%esp)
0820d24a +0x131e:  mov    0x14(%ebp),%eax
0820d24d +0x1321:  mov    %eax,(%esp)
0820d250 +0x1324:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d255 +0x1329:  mov    %eax,(%esp)
0820d258 +0x132c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d25d +0x1331:  mov    %ebx,0xc(%esp)
0820d261 +0x1335:  mov    %eax,0x8(%esp)
0820d265 +0x1339:  movl   $"%s %s",0x4(%esp)
0820d26d +0x1341:  lea    -0x668(%ebp),%eax
0820d273 +0x1347:  mov    %eax,(%esp)
0820d276 +0x134a:  call   0807e440 <_init+0xd38>
0820d27b +0x134f:  lea    -0x668(%ebp),%eax
0820d281 +0x1355:  mov    %eax,0x8(%esp)
0820d285 +0x1359:  movl   $0x24,0x4(%esp)
0820d28d +0x1361:  mov    0xc(%ebp),%eax
0820d290 +0x1364:  mov    %eax,(%esp)
0820d293 +0x1367:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d298 +0x136c:  jmp    08213440 <+0x7514>
0820d29d +0x1371:  movl   $0x0,0x4(%esp)
0820d2a5 +0x1379:  mov    0x14(%ebp),%eax
0820d2a8 +0x137c:  mov    %eax,(%esp)
0820d2ab +0x137f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d2b0 +0x1384:  movl   $"favterm",0x4(%esp)
0820d2b8 +0x138c:  mov    %eax,(%esp)
0820d2bb +0x138f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d2c0 +0x1394:  test   %al,%al
0820d2c2 +0x1396:  je     0820d356 <+0x142a>
0820d2c8 +0x139c:  lea    -0x668(%ebp),%ebx
0820d2ce +0x13a2:  mov    $0x0,%eax
0820d2d3 +0x13a7:  mov    $0x40,%edx
0820d2d8 +0x13ac:  mov    %ebx,%edi
0820d2da +0x13ae:  mov    %edx,%ecx
0820d2dc +0x13b0:  rep stos %eax,%es:(%edi)
0820d2de +0x13b2:  movl   $0x2,0x4(%esp)
0820d2e6 +0x13ba:  mov    0x14(%ebp),%eax
0820d2e9 +0x13bd:  mov    %eax,(%esp)
0820d2ec +0x13c0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d2f1 +0x13c5:  mov    %eax,(%esp)
0820d2f4 +0x13c8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d2f9 +0x13cd:  mov    %eax,%ebx
0820d2fb +0x13cf:  movl   $0x1,0x4(%esp)
0820d303 +0x13d7:  mov    0x14(%ebp),%eax
0820d306 +0x13da:  mov    %eax,(%esp)
0820d309 +0x13dd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d30e +0x13e2:  mov    %eax,(%esp)
0820d311 +0x13e5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d316 +0x13ea:  mov    %ebx,0xc(%esp)
0820d31a +0x13ee:  mov    %eax,0x8(%esp)
0820d31e +0x13f2:  movl   $"%s %s",0x4(%esp)
0820d326 +0x13fa:  lea    -0x668(%ebp),%eax
0820d32c +0x1400:  mov    %eax,(%esp)
0820d32f +0x1403:  call   0807e440 <_init+0xd38>
0820d334 +0x1408:  lea    -0x668(%ebp),%eax
0820d33a +0x140e:  mov    %eax,0x8(%esp)
0820d33e +0x1412:  movl   $0x23,0x4(%esp)
0820d346 +0x141a:  mov    0xc(%ebp),%eax
0820d349 +0x141d:  mov    %eax,(%esp)
0820d34c +0x1420:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d351 +0x1425:  jmp    08213440 <+0x7514>
0820d356 +0x142a:  movl   $0x0,0x4(%esp)
0820d35e +0x1432:  mov    0x14(%ebp),%eax
0820d361 +0x1435:  mov    %eax,(%esp)
0820d364 +0x1438:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d369 +0x143d:  movl   $"sumhell",0x4(%esp)
0820d371 +0x1445:  mov    %eax,(%esp)
0820d374 +0x1448:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d379 +0x144d:  test   %al,%al
0820d37b +0x144f:  je     0820d3b4 <+0x1488>
0820d37d +0x1451:  movl   $0x1,0x4(%esp)
0820d385 +0x1459:  mov    0x14(%ebp),%eax
0820d388 +0x145c:  mov    %eax,(%esp)
0820d38b +0x145f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d390 +0x1464:  mov    %eax,(%esp)
0820d393 +0x1467:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d398 +0x146c:  mov    %eax,0x8(%esp)
0820d39c +0x1470:  movl   $0x15,0x4(%esp)
0820d3a4 +0x1478:  mov    0xc(%ebp),%eax
0820d3a7 +0x147b:  mov    %eax,(%esp)
0820d3aa +0x147e:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d3af +0x1483:  jmp    08213440 <+0x7514>
0820d3b4 +0x1488:  movl   $0x0,0x4(%esp)
0820d3bc +0x1490:  mov    0x14(%ebp),%eax
0820d3bf +0x1493:  mov    %eax,(%esp)
0820d3c2 +0x1496:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d3c7 +0x149b:  movl   $"sdale",0x4(%esp)
0820d3cf +0x14a3:  mov    %eax,(%esp)
0820d3d2 +0x14a6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d3d7 +0x14ab:  test   %al,%al
0820d3d9 +0x14ad:  je     0820d412 <+0x14e6>
0820d3db +0x14af:  movl   $0x1,0x4(%esp)
0820d3e3 +0x14b7:  mov    0x14(%ebp),%eax
0820d3e6 +0x14ba:  mov    %eax,(%esp)
0820d3e9 +0x14bd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d3ee +0x14c2:  mov    %eax,(%esp)
0820d3f1 +0x14c5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d3f6 +0x14ca:  mov    %eax,0x8(%esp)
0820d3fa +0x14ce:  movl   $0x1c,0x4(%esp)
0820d402 +0x14d6:  mov    0xc(%ebp),%eax
0820d405 +0x14d9:  mov    %eax,(%esp)
0820d408 +0x14dc:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d40d +0x14e1:  jmp    08213440 <+0x7514>
0820d412 +0x14e6:  movl   $0x0,0x4(%esp)
0820d41a +0x14ee:  mov    0x14(%ebp),%eax
0820d41d +0x14f1:  mov    %eax,(%esp)
0820d420 +0x14f4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d425 +0x14f9:  movl   $"mdt",0x4(%esp)
0820d42d +0x1501:  mov    %eax,(%esp)
0820d430 +0x1504:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d435 +0x1509:  test   %al,%al
0820d437 +0x150b:  jne    0820d4d9 <+0x15ad>
0820d43d +0x1511:  movl   $0x0,0x4(%esp)
0820d445 +0x1519:  mov    0x14(%ebp),%eax
0820d448 +0x151c:  mov    %eax,(%esp)
0820d44b +0x151f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d450 +0x1524:  movl   $"monsterdroptest",0x4(%esp)
0820d458 +0x152c:  mov    %eax,(%esp)
0820d45b +0x152f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d460 +0x1534:  test   %al,%al
0820d462 +0x1536:  jne    0820d4d9 <+0x15ad>
0820d464 +0x1538:  movl   $0x0,0x4(%esp)
0820d46c +0x1540:  mov    0x14(%ebp),%eax
0820d46f +0x1543:  mov    %eax,(%esp)
0820d472 +0x1546:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d477 +0x154b:  movl   $"startmdt",0x4(%esp)
0820d47f +0x1553:  mov    %eax,(%esp)
0820d482 +0x1556:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d487 +0x155b:  test   %al,%al
0820d489 +0x155d:  jne    0820d4d9 <+0x15ad>
0820d48b +0x155f:  movl   $0x0,0x4(%esp)
0820d493 +0x1567:  mov    0x14(%ebp),%eax
0820d496 +0x156a:  mov    %eax,(%esp)
0820d499 +0x156d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d49e +0x1572:  movl   $"endmdt",0x4(%esp)
0820d4a6 +0x157a:  mov    %eax,(%esp)
0820d4a9 +0x157d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d4ae +0x1582:  test   %al,%al
0820d4b0 +0x1584:  jne    0820d4d9 <+0x15ad>
0820d4b2 +0x1586:  movl   $0x0,0x4(%esp)
0820d4ba +0x158e:  mov    0x14(%ebp),%eax
0820d4bd +0x1591:  mov    %eax,(%esp)
0820d4c0 +0x1594:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d4c5 +0x1599:  movl   $"goldmdt",0x4(%esp)
0820d4cd +0x15a1:  mov    %eax,(%esp)
0820d4d0 +0x15a4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d4d5 +0x15a9:  test   %al,%al
0820d4d7 +0x15ab:  je     0820d4e0 <+0x15b4>
0820d4d9 +0x15ad:  mov    $0x1,%eax
0820d4de +0x15b2:  jmp    0820d4e5 <+0x15b9>
0820d4e0 +0x15b4:  mov    $0x0,%eax
0820d4e5 +0x15b9:  test   %al,%al
0820d4e7 +0x15bb:  je     0820d6a5 <+0x1779>
0820d4ed +0x15c1:  lea    -0x668(%ebp),%edx
0820d4f3 +0x15c7:  mov    $0x0,%eax
0820d4f8 +0x15cc:  mov    $0x3f,%ecx
0820d4fd +0x15d1:  mov    %edx,%edi
0820d4ff +0x15d3:  rep stos %eax,%es:(%edi)
0820d501 +0x15d5:  mov    %edi,%edx
0820d503 +0x15d7:  mov    %ax,(%edx)
0820d506 +0x15da:  add    $0x2,%edx
0820d509 +0x15dd:  mov    %al,(%edx)
0820d50b +0x15df:  add    $0x1,%edx
0820d50e +0x15e2:  movl   $0x0,0x4(%esp)
0820d516 +0x15ea:  mov    0x14(%ebp),%eax
0820d519 +0x15ed:  mov    %eax,(%esp)
0820d51c +0x15f0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d521 +0x15f5:  movl   $"startmdt",0x4(%esp)
0820d529 +0x15fd:  mov    %eax,(%esp)
0820d52c +0x1600:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d531 +0x1605:  test   %al,%al
0820d533 +0x1607:  je     0820d577 <+0x164b>
0820d535 +0x1609:  movl   $0x1,0x4(%esp)
0820d53d +0x1611:  mov    0x14(%ebp),%eax
0820d540 +0x1614:  mov    %eax,(%esp)
0820d543 +0x1617:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d548 +0x161c:  mov    %eax,(%esp)
0820d54b +0x161f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d550 +0x1624:  mov    %eax,0xc(%esp)
0820d554 +0x1628:  movl   $0x1,0x8(%esp)
0820d55c +0x1630:  movl   $"%d %s",0x4(%esp)
0820d564 +0x1638:  lea    -0x668(%ebp),%eax
0820d56a +0x163e:  mov    %eax,(%esp)
0820d56d +0x1641:  call   0807e440 <_init+0xd38>
0820d572 +0x1646:  jmp    0820d683 <+0x1757>
0820d577 +0x164b:  movl   $0x0,0x4(%esp)
0820d57f +0x1653:  mov    0x14(%ebp),%eax
0820d582 +0x1656:  mov    %eax,(%esp)
0820d585 +0x1659:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d58a +0x165e:  movl   $"endmdt",0x4(%esp)
0820d592 +0x1666:  mov    %eax,(%esp)
0820d595 +0x1669:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d59a +0x166e:  test   %al,%al
0820d59c +0x1670:  je     0820d5e0 <+0x16b4>
0820d59e +0x1672:  movl   $0x1,0x4(%esp)
0820d5a6 +0x167a:  mov    0x14(%ebp),%eax
0820d5a9 +0x167d:  mov    %eax,(%esp)
0820d5ac +0x1680:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d5b1 +0x1685:  mov    %eax,(%esp)
0820d5b4 +0x1688:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d5b9 +0x168d:  mov    %eax,0xc(%esp)
0820d5bd +0x1691:  movl   $0x2,0x8(%esp)
0820d5c5 +0x1699:  movl   $"%d %s",0x4(%esp)
0820d5cd +0x16a1:  lea    -0x668(%ebp),%eax
0820d5d3 +0x16a7:  mov    %eax,(%esp)
0820d5d6 +0x16aa:  call   0807e440 <_init+0xd38>
0820d5db +0x16af:  jmp    0820d683 <+0x1757>
0820d5e0 +0x16b4:  movl   $0x0,0x4(%esp)
0820d5e8 +0x16bc:  mov    0x14(%ebp),%eax
0820d5eb +0x16bf:  mov    %eax,(%esp)
0820d5ee +0x16c2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d5f3 +0x16c7:  movl   $"goldmdt",0x4(%esp)
0820d5fb +0x16cf:  mov    %eax,(%esp)
0820d5fe +0x16d2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d603 +0x16d7:  test   %al,%al
0820d605 +0x16d9:  je     0820d646 <+0x171a>
0820d607 +0x16db:  movl   $0x1,0x4(%esp)
0820d60f +0x16e3:  mov    0x14(%ebp),%eax
0820d612 +0x16e6:  mov    %eax,(%esp)
0820d615 +0x16e9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d61a +0x16ee:  mov    %eax,(%esp)
0820d61d +0x16f1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d622 +0x16f6:  mov    %eax,0xc(%esp)
0820d626 +0x16fa:  movl   $0x3,0x8(%esp)
0820d62e +0x1702:  movl   $"%d %s",0x4(%esp)
0820d636 +0x170a:  lea    -0x668(%ebp),%eax
0820d63c +0x1710:  mov    %eax,(%esp)
0820d63f +0x1713:  call   0807e440 <_init+0xd38>
0820d644 +0x1718:  jmp    0820d683 <+0x1757>
0820d646 +0x171a:  movl   $0x1,0x4(%esp)
0820d64e +0x1722:  mov    0x14(%ebp),%eax
0820d651 +0x1725:  mov    %eax,(%esp)
0820d654 +0x1728:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d659 +0x172d:  mov    %eax,(%esp)
0820d65c +0x1730:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d661 +0x1735:  mov    %eax,0xc(%esp)
0820d665 +0x1739:  movl   $0x0,0x8(%esp)
0820d66d +0x1741:  movl   $"%d %s",0x4(%esp)
0820d675 +0x1749:  lea    -0x668(%ebp),%eax
0820d67b +0x174f:  mov    %eax,(%esp)
0820d67e +0x1752:  call   0807e440 <_init+0xd38>
0820d683 +0x1757:  lea    -0x668(%ebp),%eax
0820d689 +0x175d:  mov    %eax,0x8(%esp)
0820d68d +0x1761:  movl   $0x4b,0x4(%esp)
0820d695 +0x1769:  mov    0xc(%ebp),%eax
0820d698 +0x176c:  mov    %eax,(%esp)
0820d69b +0x176f:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d6a0 +0x1774:  jmp    08213440 <+0x7514>
0820d6a5 +0x1779:  movl   $0x0,0x4(%esp)
0820d6ad +0x1781:  mov    0x14(%ebp),%eax
0820d6b0 +0x1784:  mov    %eax,(%esp)
0820d6b3 +0x1787:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d6b8 +0x178c:  movl   $"cli",0x4(%esp)
0820d6c0 +0x1794:  mov    %eax,(%esp)
0820d6c3 +0x1797:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d6c8 +0x179c:  test   %al,%al
0820d6ca +0x179e:  jne    0820d6f3 <+0x17c7>
0820d6cc +0x17a0:  movl   $0x0,0x4(%esp)
0820d6d4 +0x17a8:  mov    0x14(%ebp),%eax
0820d6d7 +0x17ab:  mov    %eax,(%esp)
0820d6da +0x17ae:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d6df +0x17b3:  movl   $"checklottoitem",0x4(%esp)
0820d6e7 +0x17bb:  mov    %eax,(%esp)
0820d6ea +0x17be:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d6ef +0x17c3:  test   %al,%al
0820d6f1 +0x17c5:  je     0820d6fa <+0x17ce>
0820d6f3 +0x17c7:  mov    $0x1,%eax
0820d6f8 +0x17cc:  jmp    0820d6ff <+0x17d3>
0820d6fa +0x17ce:  mov    $0x0,%eax
0820d6ff +0x17d3:  test   %al,%al
0820d701 +0x17d5:  je     0820d826 <+0x18fa>
0820d707 +0x17db:  lea    -0x668(%ebp),%edx
0820d70d +0x17e1:  mov    $0x0,%eax
0820d712 +0x17e6:  mov    $0x3f,%ecx
0820d717 +0x17eb:  mov    %edx,%edi
0820d719 +0x17ed:  rep stos %eax,%es:(%edi)
0820d71b +0x17ef:  mov    %edi,%edx
0820d71d +0x17f1:  mov    %ax,(%edx)
0820d720 +0x17f4:  add    $0x2,%edx
0820d723 +0x17f7:  mov    %al,(%edx)
0820d725 +0x17f9:  add    $0x1,%edx
0820d728 +0x17fc:  movl   $0x1,0x4(%esp)
0820d730 +0x1804:  mov    0x14(%ebp),%eax
0820d733 +0x1807:  mov    %eax,(%esp)
0820d736 +0x180a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d73b +0x180f:  movl   $"ven",0x4(%esp)
0820d743 +0x1817:  mov    %eax,(%esp)
0820d746 +0x181a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d74b +0x181f:  test   %al,%al
0820d74d +0x1821:  je     0820d7ae <+0x1882>
0820d74f +0x1823:  movl   $0x2,0x4(%esp)
0820d757 +0x182b:  mov    0x14(%ebp),%eax
0820d75a +0x182e:  mov    %eax,(%esp)
0820d75d +0x1831:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d762 +0x1836:  mov    %eax,(%esp)
0820d765 +0x1839:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d76a +0x183e:  mov    %eax,0xc(%esp)
0820d76e +0x1842:  movl   $0x1,0x8(%esp)
0820d776 +0x184a:  movl   $"%d %s",0x4(%esp)
0820d77e +0x1852:  lea    -0x668(%ebp),%eax
0820d784 +0x1858:  mov    %eax,(%esp)
0820d787 +0x185b:  call   0807e440 <_init+0xd38>
0820d78c +0x1860:  lea    -0x668(%ebp),%eax
0820d792 +0x1866:  mov    %eax,0x8(%esp)
0820d796 +0x186a:  movl   $0x4d,0x4(%esp)
0820d79e +0x1872:  mov    0xc(%ebp),%eax
0820d7a1 +0x1875:  mov    %eax,(%esp)
0820d7a4 +0x1878:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d7a9 +0x187d:  jmp    08213440 <+0x7514>
0820d7ae +0x1882:  movl   $0x2,0x4(%esp)
0820d7b6 +0x188a:  mov    0x14(%ebp),%eax
0820d7b9 +0x188d:  mov    %eax,(%esp)
0820d7bc +0x1890:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d7c1 +0x1895:  mov    %eax,(%esp)
0820d7c4 +0x1898:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d7c9 +0x189d:  mov    %eax,%ebx
0820d7cb +0x189f:  movl   $0x1,0x4(%esp)
0820d7d3 +0x18a7:  mov    0x14(%ebp),%eax
0820d7d6 +0x18aa:  mov    %eax,(%esp)
0820d7d9 +0x18ad:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d7de +0x18b2:  mov    %eax,(%esp)
0820d7e1 +0x18b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d7e6 +0x18ba:  mov    %ebx,0xc(%esp)
0820d7ea +0x18be:  mov    %eax,0x8(%esp)
0820d7ee +0x18c2:  movl   $"%s %s",0x4(%esp)
0820d7f6 +0x18ca:  lea    -0x668(%ebp),%eax
0820d7fc +0x18d0:  mov    %eax,(%esp)
0820d7ff +0x18d3:  call   0807e440 <_init+0xd38>
0820d804 +0x18d8:  lea    -0x668(%ebp),%eax
0820d80a +0x18de:  mov    %eax,0x8(%esp)
0820d80e +0x18e2:  movl   $0x4c,0x4(%esp)
0820d816 +0x18ea:  mov    0xc(%ebp),%eax
0820d819 +0x18ed:  mov    %eax,(%esp)
0820d81c +0x18f0:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d821 +0x18f5:  jmp    08213440 <+0x7514>
0820d826 +0x18fa:  movl   $0x0,0x4(%esp)
0820d82e +0x1902:  mov    0x14(%ebp),%eax
0820d831 +0x1905:  mov    %eax,(%esp)
0820d834 +0x1908:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d839 +0x190d:  movl   $"cbind",0x4(%esp)
0820d841 +0x1915:  mov    %eax,(%esp)
0820d844 +0x1918:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d849 +0x191d:  test   %al,%al
0820d84b +0x191f:  jne    0820d874 <+0x1948>
0820d84d +0x1921:  movl   $0x0,0x4(%esp)
0820d855 +0x1929:  mov    0x14(%ebp),%eax
0820d858 +0x192c:  mov    %eax,(%esp)
0820d85b +0x192f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d860 +0x1934:  movl   $"checkbind",0x4(%esp)
0820d868 +0x193c:  mov    %eax,(%esp)
0820d86b +0x193f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d870 +0x1944:  test   %al,%al
0820d872 +0x1946:  je     0820d87b <+0x194f>
0820d874 +0x1948:  mov    $0x1,%eax
0820d879 +0x194d:  jmp    0820d880 <+0x1954>
0820d87b +0x194f:  mov    $0x0,%eax
0820d880 +0x1954:  test   %al,%al
0820d882 +0x1956:  je     0820d8bb <+0x198f>
0820d884 +0x1958:  movl   $0x1,0x4(%esp)
0820d88c +0x1960:  mov    0x14(%ebp),%eax
0820d88f +0x1963:  mov    %eax,(%esp)
0820d892 +0x1966:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d897 +0x196b:  mov    %eax,(%esp)
0820d89a +0x196e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d89f +0x1973:  mov    %eax,0x8(%esp)
0820d8a3 +0x1977:  movl   $0x4e,0x4(%esp)
0820d8ab +0x197f:  mov    0xc(%ebp),%eax
0820d8ae +0x1982:  mov    %eax,(%esp)
0820d8b1 +0x1985:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d8b6 +0x198a:  jmp    08213440 <+0x7514>
0820d8bb +0x198f:  movl   $0x0,0x4(%esp)
0820d8c3 +0x1997:  mov    0x14(%ebp),%eax
0820d8c6 +0x199a:  mov    %eax,(%esp)
0820d8c9 +0x199d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d8ce +0x19a2:  mov    %eax,0x4(%esp)
0820d8d2 +0x19a6:  movl   $"oneadayitem",(%esp)
0820d8d9 +0x19ad:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820d8de +0x19b2:  test   %al,%al
0820d8e0 +0x19b4:  je     0820d919 <+0x19ed>
0820d8e2 +0x19b6:  movl   $0x1,0x4(%esp)
0820d8ea +0x19be:  mov    0x14(%ebp),%eax
0820d8ed +0x19c1:  mov    %eax,(%esp)
0820d8f0 +0x19c4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d8f5 +0x19c9:  mov    %eax,(%esp)
0820d8f8 +0x19cc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d8fd +0x19d1:  mov    %eax,0x8(%esp)
0820d901 +0x19d5:  movl   $0x52,0x4(%esp)
0820d909 +0x19dd:  mov    0xc(%ebp),%eax
0820d90c +0x19e0:  mov    %eax,(%esp)
0820d90f +0x19e3:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d914 +0x19e8:  jmp    08213440 <+0x7514>
0820d919 +0x19ed:  movl   $0x0,0x4(%esp)
0820d921 +0x19f5:  mov    0x14(%ebp),%eax
0820d924 +0x19f8:  mov    %eax,(%esp)
0820d927 +0x19fb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d92c +0x1a00:  mov    %eax,0x4(%esp)
0820d930 +0x1a04:  movl   $"craneDay",(%esp)
0820d937 +0x1a0b:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820d93c +0x1a10:  test   %al,%al
0820d93e +0x1a12:  je     0820d977 <+0x1a4b>
0820d940 +0x1a14:  movl   $0x1,0x4(%esp)
0820d948 +0x1a1c:  mov    0x14(%ebp),%eax
0820d94b +0x1a1f:  mov    %eax,(%esp)
0820d94e +0x1a22:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d953 +0x1a27:  mov    %eax,(%esp)
0820d956 +0x1a2a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d95b +0x1a2f:  mov    %eax,0x8(%esp)
0820d95f +0x1a33:  movl   $0x79,0x4(%esp)
0820d967 +0x1a3b:  mov    0xc(%ebp),%eax
0820d96a +0x1a3e:  mov    %eax,(%esp)
0820d96d +0x1a41:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d972 +0x1a46:  jmp    08213440 <+0x7514>
0820d977 +0x1a4b:  movl   $0x0,0x4(%esp)
0820d97f +0x1a53:  mov    0x14(%ebp),%eax
0820d982 +0x1a56:  mov    %eax,(%esp)
0820d985 +0x1a59:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d98a +0x1a5e:  movl   $"cinven",0x4(%esp)
0820d992 +0x1a66:  mov    %eax,(%esp)
0820d995 +0x1a69:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d99a +0x1a6e:  test   %al,%al
0820d99c +0x1a70:  je     0820d9d5 <+0x1aa9>
0820d99e +0x1a72:  movl   $0x1,0x4(%esp)
0820d9a6 +0x1a7a:  mov    0x14(%ebp),%eax
0820d9a9 +0x1a7d:  mov    %eax,(%esp)
0820d9ac +0x1a80:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d9b1 +0x1a85:  mov    %eax,(%esp)
0820d9b4 +0x1a88:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820d9b9 +0x1a8d:  mov    %eax,0x8(%esp)
0820d9bd +0x1a91:  movl   $0x46,0x4(%esp)
0820d9c5 +0x1a99:  mov    0xc(%ebp),%eax
0820d9c8 +0x1a9c:  mov    %eax,(%esp)
0820d9cb +0x1a9f:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820d9d0 +0x1aa4:  jmp    08213440 <+0x7514>
0820d9d5 +0x1aa9:  movl   $0x0,0x4(%esp)
0820d9dd +0x1ab1:  mov    0x14(%ebp),%eax
0820d9e0 +0x1ab4:  mov    %eax,(%esp)
0820d9e3 +0x1ab7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820d9e8 +0x1abc:  movl   $"pickup",0x4(%esp)
0820d9f0 +0x1ac4:  mov    %eax,(%esp)
0820d9f3 +0x1ac7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820d9f8 +0x1acc:  test   %al,%al
0820d9fa +0x1ace:  je     0820da8e <+0x1b62>
0820da00 +0x1ad4:  lea    -0x668(%ebp),%ebx
0820da06 +0x1ada:  mov    $0x0,%eax
0820da0b +0x1adf:  mov    $0x40,%edx
0820da10 +0x1ae4:  mov    %ebx,%edi
0820da12 +0x1ae6:  mov    %edx,%ecx
0820da14 +0x1ae8:  rep stos %eax,%es:(%edi)
0820da16 +0x1aea:  movl   $0x2,0x4(%esp)
0820da1e +0x1af2:  mov    0x14(%ebp),%eax
0820da21 +0x1af5:  mov    %eax,(%esp)
0820da24 +0x1af8:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820da29 +0x1afd:  mov    %eax,(%esp)
0820da2c +0x1b00:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820da31 +0x1b05:  mov    %eax,%ebx
0820da33 +0x1b07:  movl   $0x1,0x4(%esp)
0820da3b +0x1b0f:  mov    0x14(%ebp),%eax
0820da3e +0x1b12:  mov    %eax,(%esp)
0820da41 +0x1b15:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820da46 +0x1b1a:  mov    %eax,(%esp)
0820da49 +0x1b1d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820da4e +0x1b22:  mov    %ebx,0xc(%esp)
0820da52 +0x1b26:  mov    %eax,0x8(%esp)
0820da56 +0x1b2a:  movl   $"%s %s",0x4(%esp)
0820da5e +0x1b32:  lea    -0x668(%ebp),%eax
0820da64 +0x1b38:  mov    %eax,(%esp)
0820da67 +0x1b3b:  call   0807e440 <_init+0xd38>
0820da6c +0x1b40:  lea    -0x668(%ebp),%eax
0820da72 +0x1b46:  mov    %eax,0x8(%esp)
0820da76 +0x1b4a:  movl   $0x47,0x4(%esp)
0820da7e +0x1b52:  mov    0xc(%ebp),%eax
0820da81 +0x1b55:  mov    %eax,(%esp)
0820da84 +0x1b58:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820da89 +0x1b5d:  jmp    08213440 <+0x7514>
0820da8e +0x1b62:  movl   $0x0,0x4(%esp)
0820da96 +0x1b6a:  mov    0x14(%ebp),%eax
0820da99 +0x1b6d:  mov    %eax,(%esp)
0820da9c +0x1b70:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820daa1 +0x1b75:  movl   $"refund",0x4(%esp)
0820daa9 +0x1b7d:  mov    %eax,(%esp)
0820daac +0x1b80:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dab1 +0x1b85:  test   %al,%al
0820dab3 +0x1b87:  je     0820db47 <+0x1c1b>
0820dab9 +0x1b8d:  lea    -0x668(%ebp),%ebx
0820dabf +0x1b93:  mov    $0x0,%eax
0820dac4 +0x1b98:  mov    $0x40,%edx
0820dac9 +0x1b9d:  mov    %ebx,%edi
0820dacb +0x1b9f:  mov    %edx,%ecx
0820dacd +0x1ba1:  rep stos %eax,%es:(%edi)
0820dacf +0x1ba3:  movl   $0x2,0x4(%esp)
0820dad7 +0x1bab:  mov    0x14(%ebp),%eax
0820dada +0x1bae:  mov    %eax,(%esp)
0820dadd +0x1bb1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dae2 +0x1bb6:  mov    %eax,(%esp)
0820dae5 +0x1bb9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820daea +0x1bbe:  mov    %eax,%ebx
0820daec +0x1bc0:  movl   $0x1,0x4(%esp)
0820daf4 +0x1bc8:  mov    0x14(%ebp),%eax
0820daf7 +0x1bcb:  mov    %eax,(%esp)
0820dafa +0x1bce:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820daff +0x1bd3:  mov    %eax,(%esp)
0820db02 +0x1bd6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820db07 +0x1bdb:  mov    %ebx,0xc(%esp)
0820db0b +0x1bdf:  mov    %eax,0x8(%esp)
0820db0f +0x1be3:  movl   $"%s %s",0x4(%esp)
0820db17 +0x1beb:  lea    -0x668(%ebp),%eax
0820db1d +0x1bf1:  mov    %eax,(%esp)
0820db20 +0x1bf4:  call   0807e440 <_init+0xd38>
0820db25 +0x1bf9:  lea    -0x668(%ebp),%eax
0820db2b +0x1bff:  mov    %eax,0x8(%esp)
0820db2f +0x1c03:  movl   $0x48,0x4(%esp)
0820db37 +0x1c0b:  mov    0xc(%ebp),%eax
0820db3a +0x1c0e:  mov    %eax,(%esp)
0820db3d +0x1c11:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820db42 +0x1c16:  jmp    08213440 <+0x7514>
0820db47 +0x1c1b:  movl   $0x0,0x4(%esp)
0820db4f +0x1c23:  mov    0x14(%ebp),%eax
0820db52 +0x1c26:  mov    %eax,(%esp)
0820db55 +0x1c29:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820db5a +0x1c2e:  movl   $"tb",0x4(%esp)
0820db62 +0x1c36:  mov    %eax,(%esp)
0820db65 +0x1c39:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820db6a +0x1c3e:  test   %al,%al
0820db6c +0x1c40:  je     0820dc90 <+0x1d64>
0820db72 +0x1c46:  movl   $0x1,0x4(%esp)
0820db7a +0x1c4e:  mov    0x14(%ebp),%eax
0820db7d +0x1c51:  mov    %eax,(%esp)
0820db80 +0x1c54:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820db85 +0x1c59:  movl   $"reset",0x4(%esp)
0820db8d +0x1c61:  mov    %eax,(%esp)
0820db90 +0x1c64:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820db95 +0x1c69:  test   %al,%al
0820db97 +0x1c6b:  je     0820dbd0 <+0x1ca4>
0820db99 +0x1c6d:  movl   $0x1,0x4(%esp)
0820dba1 +0x1c75:  mov    0x14(%ebp),%eax
0820dba4 +0x1c78:  mov    %eax,(%esp)
0820dba7 +0x1c7b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dbac +0x1c80:  mov    %eax,(%esp)
0820dbaf +0x1c83:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820dbb4 +0x1c88:  mov    %eax,0x8(%esp)
0820dbb8 +0x1c8c:  movl   $0x5d,0x4(%esp)
0820dbc0 +0x1c94:  mov    0xc(%ebp),%eax
0820dbc3 +0x1c97:  mov    %eax,(%esp)
0820dbc6 +0x1c9a:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820dbcb +0x1c9f:  jmp    08213440 <+0x7514>
0820dbd0 +0x1ca4:  movl   $0x1,0x4(%esp)
0820dbd8 +0x1cac:  mov    0x14(%ebp),%eax
0820dbdb +0x1caf:  mov    %eax,(%esp)
0820dbde +0x1cb2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dbe3 +0x1cb7:  movl   $"adjust",0x4(%esp)
0820dbeb +0x1cbf:  mov    %eax,(%esp)
0820dbee +0x1cc2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dbf3 +0x1cc7:  test   %al,%al
0820dbf5 +0x1cc9:  je     0820dc2e <+0x1d02>
0820dbf7 +0x1ccb:  movl   $0x1,0x4(%esp)
0820dbff +0x1cd3:  mov    0x14(%ebp),%eax
0820dc02 +0x1cd6:  mov    %eax,(%esp)
0820dc05 +0x1cd9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dc0a +0x1cde:  mov    %eax,(%esp)
0820dc0d +0x1ce1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820dc12 +0x1ce6:  mov    %eax,0x8(%esp)
0820dc16 +0x1cea:  movl   $0x5e,0x4(%esp)
0820dc1e +0x1cf2:  mov    0xc(%ebp),%eax
0820dc21 +0x1cf5:  mov    %eax,(%esp)
0820dc24 +0x1cf8:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820dc29 +0x1cfd:  jmp    08213440 <+0x7514>
0820dc2e +0x1d02:  movl   $0x1,0x4(%esp)
0820dc36 +0x1d0a:  mov    0x14(%ebp),%eax
0820dc39 +0x1d0d:  mov    %eax,(%esp)
0820dc3c +0x1d10:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dc41 +0x1d15:  movl   $"no",0x4(%esp)
0820dc49 +0x1d1d:  mov    %eax,(%esp)
0820dc4c +0x1d20:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dc51 +0x1d25:  test   %al,%al
0820dc53 +0x1d27:  je     08213440 <+0x7514>
0820dc59 +0x1d2d:  movl   $0x1,0x4(%esp)
0820dc61 +0x1d35:  mov    0x14(%ebp),%eax
0820dc64 +0x1d38:  mov    %eax,(%esp)
0820dc67 +0x1d3b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dc6c +0x1d40:  mov    %eax,(%esp)
0820dc6f +0x1d43:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820dc74 +0x1d48:  mov    %eax,0x8(%esp)
0820dc78 +0x1d4c:  movl   $0x5f,0x4(%esp)
0820dc80 +0x1d54:  mov    0xc(%ebp),%eax
0820dc83 +0x1d57:  mov    %eax,(%esp)
0820dc86 +0x1d5a:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820dc8b +0x1d5f:  jmp    08213440 <+0x7514>
0820dc90 +0x1d64:  movl   $0x0,0x4(%esp)
0820dc98 +0x1d6c:  mov    0x14(%ebp),%eax
0820dc9b +0x1d6f:  mov    %eax,(%esp)
0820dc9e +0x1d72:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dca3 +0x1d77:  movl   $"achieve",0x4(%esp)
0820dcab +0x1d7f:  mov    %eax,(%esp)
0820dcae +0x1d82:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dcb3 +0x1d87:  test   %al,%al
0820dcb5 +0x1d89:  jne    0820dcde <+0x1db2>
0820dcb7 +0x1d8b:  movl   $0x0,0x4(%esp)
0820dcbf +0x1d93:  mov    0x14(%ebp),%eax
0820dcc2 +0x1d96:  mov    %eax,(%esp)
0820dcc5 +0x1d99:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dcca +0x1d9e:  movl   $"ac",0x4(%esp)
0820dcd2 +0x1da6:  mov    %eax,(%esp)
0820dcd5 +0x1da9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dcda +0x1dae:  test   %al,%al
0820dcdc +0x1db0:  je     0820dce5 <+0x1db9>
0820dcde +0x1db2:  mov    $0x1,%eax
0820dce3 +0x1db7:  jmp    0820dcea <+0x1dbe>
0820dce5 +0x1db9:  mov    $0x0,%eax
0820dcea +0x1dbe:  test   %al,%al
0820dcec +0x1dc0:  je     0820decc <+0x1fa0>
0820dcf2 +0x1dc6:  movl   $0x1,0x4(%esp)
0820dcfa +0x1dce:  mov    0x14(%ebp),%eax
0820dcfd +0x1dd1:  mov    %eax,(%esp)
0820dd00 +0x1dd4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dd05 +0x1dd9:  movl   $"reset",0x4(%esp)
0820dd0d +0x1de1:  mov    %eax,(%esp)
0820dd10 +0x1de4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dd15 +0x1de9:  test   %al,%al
0820dd17 +0x1deb:  je     0820dd50 <+0x1e24>
0820dd19 +0x1ded:  movl   $0x1,0x4(%esp)
0820dd21 +0x1df5:  mov    0x14(%ebp),%eax
0820dd24 +0x1df8:  mov    %eax,(%esp)
0820dd27 +0x1dfb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dd2c +0x1e00:  mov    %eax,(%esp)
0820dd2f +0x1e03:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820dd34 +0x1e08:  mov    %eax,0x8(%esp)
0820dd38 +0x1e0c:  movl   $0x60,0x4(%esp)
0820dd40 +0x1e14:  mov    0xc(%ebp),%eax
0820dd43 +0x1e17:  mov    %eax,(%esp)
0820dd46 +0x1e1a:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820dd4b +0x1e1f:  jmp    08213440 <+0x7514>
0820dd50 +0x1e24:  movl   $0x1,0x4(%esp)
0820dd58 +0x1e2c:  mov    0x14(%ebp),%eax
0820dd5b +0x1e2f:  mov    %eax,(%esp)
0820dd5e +0x1e32:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dd63 +0x1e37:  movl   $"report",0x4(%esp)
0820dd6b +0x1e3f:  mov    %eax,(%esp)
0820dd6e +0x1e42:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820dd73 +0x1e47:  test   %al,%al
0820dd75 +0x1e49:  je     0820ddae <+0x1e82>
0820dd77 +0x1e4b:  movl   $0x1,0x4(%esp)
0820dd7f +0x1e53:  mov    0x14(%ebp),%eax
0820dd82 +0x1e56:  mov    %eax,(%esp)
0820dd85 +0x1e59:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dd8a +0x1e5e:  mov    %eax,(%esp)
0820dd8d +0x1e61:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820dd92 +0x1e66:  mov    %eax,0x8(%esp)
0820dd96 +0x1e6a:  movl   $0x61,0x4(%esp)
0820dd9e +0x1e72:  mov    0xc(%ebp),%eax
0820dda1 +0x1e75:  mov    %eax,(%esp)
0820dda4 +0x1e78:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820dda9 +0x1e7d:  jmp    08213440 <+0x7514>
0820ddae +0x1e82:  movl   $0x1,0x4(%esp)
0820ddb6 +0x1e8a:  mov    0x14(%ebp),%eax
0820ddb9 +0x1e8d:  mov    %eax,(%esp)
0820ddbc +0x1e90:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ddc1 +0x1e95:  movl   $"clear",0x4(%esp)
0820ddc9 +0x1e9d:  mov    %eax,(%esp)
0820ddcc +0x1ea0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ddd1 +0x1ea5:  test   %al,%al
0820ddd3 +0x1ea7:  je     0820de0c <+0x1ee0>
0820ddd5 +0x1ea9:  movl   $0x2,0x4(%esp)
0820dddd +0x1eb1:  mov    0x14(%ebp),%eax
0820dde0 +0x1eb4:  mov    %eax,(%esp)
0820dde3 +0x1eb7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dde8 +0x1ebc:  mov    %eax,(%esp)
0820ddeb +0x1ebf:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ddf0 +0x1ec4:  mov    %eax,0x8(%esp)
0820ddf4 +0x1ec8:  movl   $0x62,0x4(%esp)
0820ddfc +0x1ed0:  mov    0xc(%ebp),%eax
0820ddff +0x1ed3:  mov    %eax,(%esp)
0820de02 +0x1ed6:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820de07 +0x1edb:  jmp    08213440 <+0x7514>
0820de0c +0x1ee0:  movl   $0x1,0x4(%esp)
0820de14 +0x1ee8:  mov    0x14(%ebp),%eax
0820de17 +0x1eeb:  mov    %eax,(%esp)
0820de1a +0x1eee:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820de1f +0x1ef3:  movl   $"all",0x4(%esp)
0820de27 +0x1efb:  mov    %eax,(%esp)
0820de2a +0x1efe:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820de2f +0x1f03:  test   %al,%al
0820de31 +0x1f05:  je     0820de6a <+0x1f3e>
0820de33 +0x1f07:  movl   $0x1,0x4(%esp)
0820de3b +0x1f0f:  mov    0x14(%ebp),%eax
0820de3e +0x1f12:  mov    %eax,(%esp)
0820de41 +0x1f15:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820de46 +0x1f1a:  mov    %eax,(%esp)
0820de49 +0x1f1d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820de4e +0x1f22:  mov    %eax,0x8(%esp)
0820de52 +0x1f26:  movl   $0x63,0x4(%esp)
0820de5a +0x1f2e:  mov    0xc(%ebp),%eax
0820de5d +0x1f31:  mov    %eax,(%esp)
0820de60 +0x1f34:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820de65 +0x1f39:  jmp    08213440 <+0x7514>
0820de6a +0x1f3e:  movl   $0x1,0x4(%esp)
0820de72 +0x1f46:  mov    0x14(%ebp),%eax
0820de75 +0x1f49:  mov    %eax,(%esp)
0820de78 +0x1f4c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820de7d +0x1f51:  movl   $"no",0x4(%esp)
0820de85 +0x1f59:  mov    %eax,(%esp)
0820de88 +0x1f5c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820de8d +0x1f61:  test   %al,%al
0820de8f +0x1f63:  je     08213440 <+0x7514>
0820de95 +0x1f69:  movl   $0x1,0x4(%esp)
0820de9d +0x1f71:  mov    0x14(%ebp),%eax
0820dea0 +0x1f74:  mov    %eax,(%esp)
0820dea3 +0x1f77:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dea8 +0x1f7c:  mov    %eax,(%esp)
0820deab +0x1f7f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820deb0 +0x1f84:  mov    %eax,0x8(%esp)
0820deb4 +0x1f88:  movl   $0x64,0x4(%esp)
0820debc +0x1f90:  mov    0xc(%ebp),%eax
0820debf +0x1f93:  mov    %eax,(%esp)
0820dec2 +0x1f96:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820dec7 +0x1f9b:  jmp    08213440 <+0x7514>
0820decc +0x1fa0:  movl   $0x0,0x4(%esp)
0820ded4 +0x1fa8:  mov    0x14(%ebp),%eax
0820ded7 +0x1fab:  mov    %eax,(%esp)
0820deda +0x1fae:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dedf +0x1fb3:  movl   $"power",0x4(%esp)
0820dee7 +0x1fbb:  mov    %eax,(%esp)
0820deea +0x1fbe:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820deef +0x1fc3:  test   %al,%al
0820def1 +0x1fc5:  je     0820e07f <+0x2153>
0820def7 +0x1fcb:  movl   $0x1,0x4(%esp)
0820deff +0x1fd3:  mov    0x14(%ebp),%eax
0820df02 +0x1fd6:  mov    %eax,(%esp)
0820df05 +0x1fd9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820df0a +0x1fde:  movl   $"userpoint",0x4(%esp)
0820df12 +0x1fe6:  mov    %eax,(%esp)
0820df15 +0x1fe9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820df1a +0x1fee:  test   %al,%al
0820df1c +0x1ff0:  je     0820df71 <+0x2045>
0820df1e +0x1ff2:  movl   $0x2,0x4(%esp)
0820df26 +0x1ffa:  mov    0x14(%ebp),%eax
0820df29 +0x1ffd:  mov    %eax,(%esp)
0820df2c +0x2000:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820df31 +0x2005:  mov    %eax,(%esp)
0820df34 +0x2008:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820df39 +0x200d:  mov    %eax,(%esp)
0820df3c +0x2010:  call   0807e6f0 <_init+0xfe8>
0820df41 +0x2015:  mov    %eax,-0x486(%ebp)
0820df47 +0x201b:  lea    -0x494(%ebp),%eax
0820df4d +0x2021:  mov    %eax,0x8(%esp)
0820df51 +0x2025:  mov    0xc(%ebp),%eax
0820df54 +0x2028:  mov    %eax,0x4(%esp)
0820df58 +0x202c:  lea    -0x250(%ebp),%eax
0820df5e +0x2032:  mov    %eax,(%esp)
0820df61 +0x2035:  call   0858fee8 <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)
0820df66 +0x203a:  mov    %al,-0x12d(%ebp)
0820df6c +0x2040:  jmp    08213440 <+0x7514>
0820df71 +0x2045:  movl   $0x1,0x4(%esp)
0820df79 +0x204d:  mov    0x14(%ebp),%eax
0820df7c +0x2050:  mov    %eax,(%esp)
0820df7f +0x2053:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820df84 +0x2058:  movl   $"guildpoint",0x4(%esp)
0820df8c +0x2060:  mov    %eax,(%esp)
0820df8f +0x2063:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820df94 +0x2068:  test   %al,%al
0820df96 +0x206a:  je     0820e01d <+0x20f1>
0820df9c +0x2070:  movl   $0x2,0x4(%esp)
0820dfa4 +0x2078:  mov    0x14(%ebp),%eax
0820dfa7 +0x207b:  mov    %eax,(%esp)
0820dfaa +0x207e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820dfaf +0x2083:  mov    %eax,(%esp)
0820dfb2 +0x2086:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820dfb7 +0x208b:  mov    %eax,(%esp)
0820dfba +0x208e:  call   0807e6f0 <_init+0xfe8>
0820dfbf +0x2093:  mov    %eax,-0x55a(%ebp)
0820dfc5 +0x2099:  mov    -0x55a(%ebp),%eax
0820dfcb +0x209f:  mov    %eax,%edi
0820dfcd +0x20a1:  mov    0xc(%ebp),%eax
0820dfd0 +0x20a4:  mov    %eax,(%esp)
0820dfd3 +0x20a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0820dfd8 +0x20ac:  mov    %eax,%esi
0820dfda +0x20ae:  mov    0xc(%ebp),%eax
0820dfdd +0x20b1:  mov    %eax,(%esp)
0820dfe0 +0x20b4:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0820dfe5 +0x20b9:  mov    %eax,%ebx
0820dfe7 +0x20bb:  mov    0xc(%ebp),%eax
0820dfea +0x20be:  mov    %eax,(%esp)
0820dfed +0x20c1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0820dff2 +0x20c6:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0820dff8 +0x20cc:  mov    %eax,0x4(%esp)
0820dffc +0x20d0:  mov    %edx,(%esp)
0820dfff +0x20d3:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0820e004 +0x20d8:  mov    %edi,0xc(%esp)
0820e008 +0x20dc:  mov    %esi,0x8(%esp)
0820e00c +0x20e0:  mov    %ebx,0x4(%esp)
0820e010 +0x20e4:  mov    %eax,(%esp)
0820e013 +0x20e7:  call   0846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>  ; CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int)
0820e018 +0x20ec:  jmp    08213440 <+0x7514>
0820e01d +0x20f1:  movl   $0x1,0x4(%esp)
0820e025 +0x20f9:  mov    0x14(%ebp),%eax
0820e028 +0x20fc:  mov    %eax,(%esp)
0820e02b +0x20ff:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e030 +0x2104:  movl   $"win",0x4(%esp)
0820e038 +0x210c:  mov    %eax,(%esp)
0820e03b +0x210f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e040 +0x2114:  test   %al,%al
0820e042 +0x2116:  je     08213440 <+0x7514>
0820e048 +0x211c:  movl   $0x2,0x4(%esp)
0820e050 +0x2124:  mov    0x14(%ebp),%eax
0820e053 +0x2127:  mov    %eax,(%esp)
0820e056 +0x212a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e05b +0x212f:  mov    %eax,(%esp)
0820e05e +0x2132:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e063 +0x2137:  mov    %eax,0x8(%esp)
0820e067 +0x213b:  movl   $0x2b,0x4(%esp)
0820e06f +0x2143:  mov    0xc(%ebp),%eax
0820e072 +0x2146:  mov    %eax,(%esp)
0820e075 +0x2149:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e07a +0x214e:  jmp    08213440 <+0x7514>
0820e07f +0x2153:  movl   $0x0,0x4(%esp)
0820e087 +0x215b:  mov    0x14(%ebp),%eax
0820e08a +0x215e:  mov    %eax,(%esp)
0820e08d +0x2161:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e092 +0x2166:  movl   $"townatk",0x4(%esp)
0820e09a +0x216e:  mov    %eax,(%esp)
0820e09d +0x2171:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e0a2 +0x2176:  test   %al,%al
0820e0a4 +0x2178:  je     0820e19e <+0x2272>
0820e0aa +0x217e:  movl   $0x1,0x4(%esp)
0820e0b2 +0x2186:  mov    0x14(%ebp),%eax
0820e0b5 +0x2189:  mov    %eax,(%esp)
0820e0b8 +0x218c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e0bd +0x2191:  movl   $"success",0x4(%esp)
0820e0c5 +0x2199:  mov    %eax,(%esp)
0820e0c8 +0x219c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e0cd +0x21a1:  test   %al,%al
0820e0cf +0x21a3:  je     0820e0e9 <+0x21bd>
0820e0d1 +0x21a5:  movl   $0x1,0x4(%esp)
0820e0d9 +0x21ad:  mov    0xc(%ebp),%eax
0820e0dc +0x21b0:  mov    %eax,(%esp)
0820e0df +0x21b3:  call   0820bb68 <_Z28SendVillageAttackedGMCommandP5CUseri>  ; SendVillageAttackedGMCommand(CUser*, int)
0820e0e4 +0x21b8:  jmp    08213440 <+0x7514>
0820e0e9 +0x21bd:  movl   $0x1,0x4(%esp)
0820e0f1 +0x21c5:  mov    0x14(%ebp),%eax
0820e0f4 +0x21c8:  mov    %eax,(%esp)
0820e0f7 +0x21cb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e0fc +0x21d0:  movl   $"fail",0x4(%esp)
0820e104 +0x21d8:  mov    %eax,(%esp)
0820e107 +0x21db:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e10c +0x21e0:  test   %al,%al
0820e10e +0x21e2:  je     0820e128 <+0x21fc>
0820e110 +0x21e4:  movl   $0x2,0x4(%esp)
0820e118 +0x21ec:  mov    0xc(%ebp),%eax
0820e11b +0x21ef:  mov    %eax,(%esp)
0820e11e +0x21f2:  call   0820bb68 <_Z28SendVillageAttackedGMCommandP5CUseri>  ; SendVillageAttackedGMCommand(CUser*, int)
0820e123 +0x21f7:  jmp    08213440 <+0x7514>
0820e128 +0x21fc:  movl   $0x1,0x4(%esp)
0820e130 +0x2204:  mov    0x14(%ebp),%eax
0820e133 +0x2207:  mov    %eax,(%esp)
0820e136 +0x220a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e13b +0x220f:  movl   $"end",0x4(%esp)
0820e143 +0x2217:  mov    %eax,(%esp)
0820e146 +0x221a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e14b +0x221f:  test   %al,%al
0820e14d +0x2221:  je     0820e167 <+0x223b>
0820e14f +0x2223:  movl   $0x3,0x4(%esp)
0820e157 +0x222b:  mov    0xc(%ebp),%eax
0820e15a +0x222e:  mov    %eax,(%esp)
0820e15d +0x2231:  call   0820bb68 <_Z28SendVillageAttackedGMCommandP5CUseri>  ; SendVillageAttackedGMCommand(CUser*, int)
0820e162 +0x2236:  jmp    08213440 <+0x7514>
0820e167 +0x223b:  movl   $0x1,0x4(%esp)
0820e16f +0x2243:  mov    0x14(%ebp),%eax
0820e172 +0x2246:  mov    %eax,(%esp)
0820e175 +0x2249:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e17a +0x224e:  mov    %eax,(%esp)
0820e17d +0x2251:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e182 +0x2256:  mov    %eax,0x8(%esp)
0820e186 +0x225a:  movl   $0x1e,0x4(%esp)
0820e18e +0x2262:  mov    0xc(%ebp),%eax
0820e191 +0x2265:  mov    %eax,(%esp)
0820e194 +0x2268:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e199 +0x226d:  jmp    08213440 <+0x7514>
0820e19e +0x2272:  movl   $0x0,0x4(%esp)
0820e1a6 +0x227a:  mov    0x14(%ebp),%eax
0820e1a9 +0x227d:  mov    %eax,(%esp)
0820e1ac +0x2280:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e1b1 +0x2285:  movl   $"rec",0x4(%esp)
0820e1b9 +0x228d:  mov    %eax,(%esp)
0820e1bc +0x2290:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e1c1 +0x2295:  test   %al,%al
0820e1c3 +0x2297:  je     0820e2e7 <+0x23bb>
0820e1c9 +0x229d:  movl   $0x1,0x4(%esp)
0820e1d1 +0x22a5:  mov    0x14(%ebp),%eax
0820e1d4 +0x22a8:  mov    %eax,(%esp)
0820e1d7 +0x22ab:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e1dc +0x22b0:  movl   $"start",0x4(%esp)
0820e1e4 +0x22b8:  mov    %eax,(%esp)
0820e1e7 +0x22bb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e1ec +0x22c0:  test   %al,%al
0820e1ee +0x22c2:  je     0820e227 <+0x22fb>
0820e1f0 +0x22c4:  movl   $0x1,0x4(%esp)
0820e1f8 +0x22cc:  mov    0x14(%ebp),%eax
0820e1fb +0x22cf:  mov    %eax,(%esp)
0820e1fe +0x22d2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e203 +0x22d7:  mov    %eax,(%esp)
0820e206 +0x22da:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e20b +0x22df:  mov    %eax,0x8(%esp)
0820e20f +0x22e3:  movl   $0x12,0x4(%esp)
0820e217 +0x22eb:  mov    0xc(%ebp),%eax
0820e21a +0x22ee:  mov    %eax,(%esp)
0820e21d +0x22f1:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e222 +0x22f6:  jmp    08213440 <+0x7514>
0820e227 +0x22fb:  movl   $0x1,0x4(%esp)
0820e22f +0x2303:  mov    0x14(%ebp),%eax
0820e232 +0x2306:  mov    %eax,(%esp)
0820e235 +0x2309:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e23a +0x230e:  movl   $"stop",0x4(%esp)
0820e242 +0x2316:  mov    %eax,(%esp)
0820e245 +0x2319:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e24a +0x231e:  test   %al,%al
0820e24c +0x2320:  je     0820e285 <+0x2359>
0820e24e +0x2322:  movl   $0x1,0x4(%esp)
0820e256 +0x232a:  mov    0x14(%ebp),%eax
0820e259 +0x232d:  mov    %eax,(%esp)
0820e25c +0x2330:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e261 +0x2335:  mov    %eax,(%esp)
0820e264 +0x2338:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e269 +0x233d:  mov    %eax,0x8(%esp)
0820e26d +0x2341:  movl   $0x13,0x4(%esp)
0820e275 +0x2349:  mov    0xc(%ebp),%eax
0820e278 +0x234c:  mov    %eax,(%esp)
0820e27b +0x234f:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e280 +0x2354:  jmp    08213440 <+0x7514>
0820e285 +0x2359:  movl   $0x1,0x4(%esp)
0820e28d +0x2361:  mov    0x14(%ebp),%eax
0820e290 +0x2364:  mov    %eax,(%esp)
0820e293 +0x2367:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e298 +0x236c:  movl   $"run",0x4(%esp)
0820e2a0 +0x2374:  mov    %eax,(%esp)
0820e2a3 +0x2377:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e2a8 +0x237c:  test   %al,%al
0820e2aa +0x237e:  je     08213440 <+0x7514>
0820e2b0 +0x2384:  movl   $0x1,0x4(%esp)
0820e2b8 +0x238c:  mov    0x14(%ebp),%eax
0820e2bb +0x238f:  mov    %eax,(%esp)
0820e2be +0x2392:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e2c3 +0x2397:  mov    %eax,(%esp)
0820e2c6 +0x239a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e2cb +0x239f:  mov    %eax,0x8(%esp)
0820e2cf +0x23a3:  movl   $0x14,0x4(%esp)
0820e2d7 +0x23ab:  mov    0xc(%ebp),%eax
0820e2da +0x23ae:  mov    %eax,(%esp)
0820e2dd +0x23b1:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e2e2 +0x23b6:  jmp    08213440 <+0x7514>
0820e2e7 +0x23bb:  movl   $0x0,0x4(%esp)
0820e2ef +0x23c3:  mov    0x14(%ebp),%eax
0820e2f2 +0x23c6:  mov    %eax,(%esp)
0820e2f5 +0x23c9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e2fa +0x23ce:  movl   $"spd",0x4(%esp)
0820e302 +0x23d6:  mov    %eax,(%esp)
0820e305 +0x23d9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e30a +0x23de:  test   %al,%al
0820e30c +0x23e0:  je     0820e345 <+0x2419>
0820e30e +0x23e2:  movl   $0x1,0x4(%esp)
0820e316 +0x23ea:  mov    0x14(%ebp),%eax
0820e319 +0x23ed:  mov    %eax,(%esp)
0820e31c +0x23f0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e321 +0x23f5:  mov    %eax,(%esp)
0820e324 +0x23f8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e329 +0x23fd:  mov    %eax,0x8(%esp)
0820e32d +0x2401:  movl   $0x9,0x4(%esp)
0820e335 +0x2409:  mov    0xc(%ebp),%eax
0820e338 +0x240c:  mov    %eax,(%esp)
0820e33b +0x240f:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e340 +0x2414:  jmp    08213440 <+0x7514>
0820e345 +0x2419:  movl   $0x0,0x4(%esp)
0820e34d +0x2421:  mov    0x14(%ebp),%eax
0820e350 +0x2424:  mov    %eax,(%esp)
0820e353 +0x2427:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e358 +0x242c:  movl   $"durable",0x4(%esp)
0820e360 +0x2434:  mov    %eax,(%esp)
0820e363 +0x2437:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e368 +0x243c:  test   %al,%al
0820e36a +0x243e:  je     0820e3fe <+0x24d2>
0820e370 +0x2444:  lea    -0x668(%ebp),%ebx
0820e376 +0x244a:  mov    $0x0,%eax
0820e37b +0x244f:  mov    $0x40,%edx
0820e380 +0x2454:  mov    %ebx,%edi
0820e382 +0x2456:  mov    %edx,%ecx
0820e384 +0x2458:  rep stos %eax,%es:(%edi)
0820e386 +0x245a:  movl   $0x2,0x4(%esp)
0820e38e +0x2462:  mov    0x14(%ebp),%eax
0820e391 +0x2465:  mov    %eax,(%esp)
0820e394 +0x2468:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e399 +0x246d:  mov    %eax,(%esp)
0820e39c +0x2470:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e3a1 +0x2475:  mov    %eax,%ebx
0820e3a3 +0x2477:  movl   $0x1,0x4(%esp)
0820e3ab +0x247f:  mov    0x14(%ebp),%eax
0820e3ae +0x2482:  mov    %eax,(%esp)
0820e3b1 +0x2485:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e3b6 +0x248a:  mov    %eax,(%esp)
0820e3b9 +0x248d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e3be +0x2492:  mov    %ebx,0xc(%esp)
0820e3c2 +0x2496:  mov    %eax,0x8(%esp)
0820e3c6 +0x249a:  movl   $"%s %s",0x4(%esp)
0820e3ce +0x24a2:  lea    -0x668(%ebp),%eax
0820e3d4 +0x24a8:  mov    %eax,(%esp)
0820e3d7 +0x24ab:  call   0807e440 <_init+0xd38>
0820e3dc +0x24b0:  lea    -0x668(%ebp),%eax
0820e3e2 +0x24b6:  mov    %eax,0x8(%esp)
0820e3e6 +0x24ba:  movl   $0x29,0x4(%esp)
0820e3ee +0x24c2:  mov    0xc(%ebp),%eax
0820e3f1 +0x24c5:  mov    %eax,(%esp)
0820e3f4 +0x24c8:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e3f9 +0x24cd:  jmp    08213440 <+0x7514>
0820e3fe +0x24d2:  movl   $0x0,0x4(%esp)
0820e406 +0x24da:  mov    0x14(%ebp),%eax
0820e409 +0x24dd:  mov    %eax,(%esp)
0820e40c +0x24e0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e411 +0x24e5:  movl   $"sep",0x4(%esp)
0820e419 +0x24ed:  mov    %eax,(%esp)
0820e41c +0x24f0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e421 +0x24f5:  test   %al,%al
0820e423 +0x24f7:  je     0820e7f0 <+0x28c4>
0820e429 +0x24fd:  movl   $0x1,0x4(%esp)
0820e431 +0x2505:  mov    0x14(%ebp),%eax
0820e434 +0x2508:  mov    %eax,(%esp)
0820e437 +0x250b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e43c +0x2510:  movl   $"upgrade",0x4(%esp)
0820e444 +0x2518:  mov    %eax,(%esp)
0820e447 +0x251b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e44c +0x2520:  test   %al,%al
0820e44e +0x2522:  jne    0820e477 <+0x254b>
0820e450 +0x2524:  movl   $0x1,0x4(%esp)
0820e458 +0x252c:  mov    0x14(%ebp),%eax
0820e45b +0x252f:  mov    %eax,(%esp)
0820e45e +0x2532:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e463 +0x2537:  movl   $"up",0x4(%esp)
0820e46b +0x253f:  mov    %eax,(%esp)
0820e46e +0x2542:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e473 +0x2547:  test   %al,%al
0820e475 +0x2549:  je     0820e47e <+0x2552>
0820e477 +0x254b:  mov    $0x1,%eax
0820e47c +0x2550:  jmp    0820e483 <+0x2557>
0820e47e +0x2552:  mov    $0x0,%eax
0820e483 +0x2557:  test   %al,%al
0820e485 +0x2559:  je     08213440 <+0x7514>
0820e48b +0x255f:  lea    -0x288(%ebp),%eax
0820e491 +0x2565:  mov    %eax,(%esp)
0820e494 +0x2568:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820e499 +0x256d:  lea    -0x668(%ebp),%edx
0820e49f +0x2573:  mov    $0x0,%eax
0820e4a4 +0x2578:  mov    $0x3f,%ecx
0820e4a9 +0x257d:  mov    %edx,%edi
0820e4ab +0x257f:  rep stos %eax,%es:(%edi)
0820e4ad +0x2581:  mov    %edi,%edx
0820e4af +0x2583:  mov    %ax,(%edx)
0820e4b2 +0x2586:  add    $0x2,%edx
0820e4b5 +0x2589:  mov    %al,(%edx)
0820e4b7 +0x258b:  add    $0x1,%edx
0820e4ba +0x258e:  movl   $0x2,0x4(%esp)
0820e4c2 +0x2596:  mov    0x14(%ebp),%eax
0820e4c5 +0x2599:  mov    %eax,(%esp)
0820e4c8 +0x259c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e4cd +0x25a1:  movl   $"success",0x4(%esp)
0820e4d5 +0x25a9:  mov    %eax,(%esp)
0820e4d8 +0x25ac:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e4dd +0x25b1:  test   %al,%al
0820e4df +0x25b3:  jne    0820e508 <+0x25dc>
0820e4e1 +0x25b5:  movl   $0x2,0x4(%esp)
0820e4e9 +0x25bd:  mov    0x14(%ebp),%eax
0820e4ec +0x25c0:  mov    %eax,(%esp)
0820e4ef +0x25c3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e4f4 +0x25c8:  movl   $"s",0x4(%esp)
0820e4fc +0x25d0:  mov    %eax,(%esp)
0820e4ff +0x25d3:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e504 +0x25d8:  test   %al,%al
0820e506 +0x25da:  je     0820e50f <+0x25e3>
0820e508 +0x25dc:  mov    $0x1,%eax
0820e50d +0x25e1:  jmp    0820e514 <+0x25e8>
0820e50f +0x25e3:  mov    $0x0,%eax
0820e514 +0x25e8:  test   %al,%al
0820e516 +0x25ea:  je     0820e5d5 <+0x26a9>
0820e51c +0x25f0:  mov    0xc(%ebp),%eax
0820e51f +0x25f3:  mov    %eax,(%esp)
0820e522 +0x25f6:  call   0811eda6 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xa1>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xa1
0820e527 +0x25fb:  test   %al,%al
0820e529 +0x25fd:  sete   %al
0820e52c +0x2600:  test   %al,%al
0820e52e +0x2602:  je     0820e58c <+0x2660>
0820e530 +0x2604:  movl   $0x6b6f,-0x28d(%ebp)
0820e53a +0x260e:  movb   $0x0,-0x289(%ebp)
0820e541 +0x2615:  mov    0xc(%ebp),%eax
0820e544 +0x2618:  movl   $0x1,0x4(%esp)
0820e54c +0x2620:  mov    %eax,(%esp)
0820e54f +0x2623:  call   0822fa2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50d6
0820e554 +0x2628:  mov    0xc(%ebp),%eax
0820e557 +0x262b:  movl   $0x0,0x4(%esp)
0820e55f +0x2633:  mov    %eax,(%esp)
0820e562 +0x2636:  call   0822fa54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50fe
0820e567 +0x263b:  lea    -0x28d(%ebp),%eax
0820e56d +0x2641:  mov    %eax,0x8(%esp)
0820e571 +0x2645:  movl   $"sep upgrade success - %s",0x4(%esp)
0820e579 +0x264d:  lea    -0x668(%ebp),%eax
0820e57f +0x2653:  mov    %eax,(%esp)
0820e582 +0x2656:  call   0807e440 <_init+0xd38>
0820e587 +0x265b:  jmp    0820e6e8 <+0x27bc>
0820e58c +0x2660:  movl   $0x646e65,-0x292(%ebp)
0820e596 +0x266a:  movb   $0x0,-0x28e(%ebp)
0820e59d +0x2671:  mov    0xc(%ebp),%eax
0820e5a0 +0x2674:  movl   $0x0,0x4(%esp)
0820e5a8 +0x267c:  mov    %eax,(%esp)
0820e5ab +0x267f:  call   0822fa2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50d6
0820e5b0 +0x2684:  lea    -0x292(%ebp),%eax
0820e5b6 +0x268a:  mov    %eax,0x8(%esp)
0820e5ba +0x268e:  movl   $"sep upgrade success - %s",0x4(%esp)
0820e5c2 +0x2696:  lea    -0x668(%ebp),%eax
0820e5c8 +0x269c:  mov    %eax,(%esp)
0820e5cb +0x269f:  call   0807e440 <_init+0xd38>
0820e5d0 +0x26a4:  jmp    0820e6e8 <+0x27bc>
0820e5d5 +0x26a9:  movl   $0x2,0x4(%esp)
0820e5dd +0x26b1:  mov    0x14(%ebp),%eax
0820e5e0 +0x26b4:  mov    %eax,(%esp)
0820e5e3 +0x26b7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e5e8 +0x26bc:  movl   $"fail",0x4(%esp)
0820e5f0 +0x26c4:  mov    %eax,(%esp)
0820e5f3 +0x26c7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e5f8 +0x26cc:  test   %al,%al
0820e5fa +0x26ce:  jne    0820e623 <+0x26f7>
0820e5fc +0x26d0:  movl   $0x2,0x4(%esp)
0820e604 +0x26d8:  mov    0x14(%ebp),%eax
0820e607 +0x26db:  mov    %eax,(%esp)
0820e60a +0x26de:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e60f +0x26e3:  movl   $"f",0x4(%esp)
0820e617 +0x26eb:  mov    %eax,(%esp)
0820e61a +0x26ee:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e61f +0x26f3:  test   %al,%al
0820e621 +0x26f5:  je     0820e62a <+0x26fe>
0820e623 +0x26f7:  mov    $0x1,%eax
0820e628 +0x26fc:  jmp    0820e62f <+0x2703>
0820e62a +0x26fe:  mov    $0x0,%eax
0820e62f +0x2703:  test   %al,%al
0820e631 +0x2705:  je     0820e6e8 <+0x27bc>
0820e637 +0x270b:  mov    0xc(%ebp),%eax
0820e63a +0x270e:  mov    %eax,(%esp)
0820e63d +0x2711:  call   0811edca <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xc5>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xc5
0820e642 +0x2716:  test   %al,%al
0820e644 +0x2718:  sete   %al
0820e647 +0x271b:  test   %al,%al
0820e649 +0x271d:  je     0820e6a4 <+0x2778>
0820e64b +0x271f:  movl   $0x6b6f,-0x297(%ebp)
0820e655 +0x2729:  movb   $0x0,-0x293(%ebp)
0820e65c +0x2730:  mov    0xc(%ebp),%eax
0820e65f +0x2733:  movl   $0x0,0x4(%esp)
0820e667 +0x273b:  mov    %eax,(%esp)
0820e66a +0x273e:  call   0822fa2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50d6
0820e66f +0x2743:  mov    0xc(%ebp),%eax
0820e672 +0x2746:  movl   $0x1,0x4(%esp)
0820e67a +0x274e:  mov    %eax,(%esp)
0820e67d +0x2751:  call   0822fa54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50fe
0820e682 +0x2756:  lea    -0x297(%ebp),%eax
0820e688 +0x275c:  mov    %eax,0x8(%esp)
0820e68c +0x2760:  movl   $"sep upgrade fail - %s",0x4(%esp)
0820e694 +0x2768:  lea    -0x668(%ebp),%eax
0820e69a +0x276e:  mov    %eax,(%esp)
0820e69d +0x2771:  call   0807e440 <_init+0xd38>
0820e6a2 +0x2776:  jmp    0820e6e8 <+0x27bc>
0820e6a4 +0x2778:  movl   $0x646e65,-0x29c(%ebp)
0820e6ae +0x2782:  movb   $0x0,-0x298(%ebp)
0820e6b5 +0x2789:  mov    0xc(%ebp),%eax
0820e6b8 +0x278c:  movl   $0x0,0x4(%esp)
0820e6c0 +0x2794:  mov    %eax,(%esp)
0820e6c3 +0x2797:  call   0822fa54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50fe
0820e6c8 +0x279c:  lea    -0x29c(%ebp),%eax
0820e6ce +0x27a2:  mov    %eax,0x8(%esp)
0820e6d2 +0x27a6:  movl   $"sep upgrade fail - %s",0x4(%esp)
0820e6da +0x27ae:  lea    -0x668(%ebp),%eax
0820e6e0 +0x27b4:  mov    %eax,(%esp)
0820e6e3 +0x27b7:  call   0807e440 <_init+0xd38>
0820e6e8 +0x27bc:  movl   $0xc,0x8(%esp)
0820e6f0 +0x27c4:  movl   $0x0,0x4(%esp)
0820e6f8 +0x27cc:  lea    -0x288(%ebp),%eax
0820e6fe +0x27d2:  mov    %eax,(%esp)
0820e701 +0x27d5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820e706 +0x27da:  movl   $0x0,0x4(%esp)
0820e70e +0x27e2:  lea    -0x288(%ebp),%eax
0820e714 +0x27e8:  mov    %eax,(%esp)
0820e717 +0x27eb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820e71c +0x27f0:  movl   $0x0,0x4(%esp)
0820e724 +0x27f8:  lea    -0x288(%ebp),%eax
0820e72a +0x27fe:  mov    %eax,(%esp)
0820e72d +0x2801:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0820e732 +0x2806:  movl   $0x0,0x4(%esp)
0820e73a +0x280e:  lea    -0x288(%ebp),%eax
0820e740 +0x2814:  mov    %eax,(%esp)
0820e743 +0x2817:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820e748 +0x281c:  lea    -0x668(%ebp),%eax
0820e74e +0x2822:  mov    %eax,(%esp)
0820e751 +0x2825:  call   0807e3b0 <_init+0xca8>
0820e756 +0x282a:  mov    %eax,0x4(%esp)
0820e75a +0x282e:  lea    -0x288(%ebp),%eax
0820e760 +0x2834:  mov    %eax,(%esp)
0820e763 +0x2837:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0820e768 +0x283c:  lea    -0x668(%ebp),%eax
0820e76e +0x2842:  mov    %eax,(%esp)
0820e771 +0x2845:  call   0807e3b0 <_init+0xca8>
0820e776 +0x284a:  mov    %eax,0x8(%esp)
0820e77a +0x284e:  lea    -0x668(%ebp),%eax
0820e780 +0x2854:  mov    %eax,0x4(%esp)
0820e784 +0x2858:  lea    -0x288(%ebp),%eax
0820e78a +0x285e:  mov    %eax,(%esp)
0820e78d +0x2861:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0820e792 +0x2866:  movl   $0x1,0x4(%esp)
0820e79a +0x286e:  lea    -0x288(%ebp),%eax
0820e7a0 +0x2874:  mov    %eax,(%esp)
0820e7a3 +0x2877:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820e7a8 +0x287c:  lea    -0x288(%ebp),%eax
0820e7ae +0x2882:  mov    %eax,0x4(%esp)
0820e7b2 +0x2886:  mov    0xc(%ebp),%eax
0820e7b5 +0x2889:  mov    %eax,(%esp)
0820e7b8 +0x288c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820e7bd +0x2891:  mov    $0x0,%ebx
0820e7c2 +0x2896:  lea    -0x288(%ebp),%eax
0820e7c8 +0x289c:  mov    %eax,(%esp)
0820e7cb +0x289f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820e7d0 +0x28a4:  jmp    0821345f <+0x7533>
0820e7d5 +0x28a9:  mov    %edx,%ebx
0820e7d7 +0x28ab:  mov    %eax,%esi
0820e7d9 +0x28ad:  lea    -0x288(%ebp),%eax
0820e7df +0x28b3:  mov    %eax,(%esp)
0820e7e2 +0x28b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820e7e7 +0x28bb:  mov    %esi,%eax
0820e7e9 +0x28bd:  mov    %ebx,%edx
0820e7eb +0x28bf:  jmp    08213447 <+0x751b>
0820e7f0 +0x28c4:  movl   $0x0,0x4(%esp)
0820e7f8 +0x28cc:  mov    0x14(%ebp),%eax
0820e7fb +0x28cf:  mov    %eax,(%esp)
0820e7fe +0x28d2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e803 +0x28d7:  movl   $"initstat",0x4(%esp)
0820e80b +0x28df:  mov    %eax,(%esp)
0820e80e +0x28e2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e813 +0x28e7:  test   %al,%al
0820e815 +0x28e9:  je     0820e84e <+0x2922>
0820e817 +0x28eb:  movl   $0x1,0x4(%esp)
0820e81f +0x28f3:  mov    0x14(%ebp),%eax
0820e822 +0x28f6:  mov    %eax,(%esp)
0820e825 +0x28f9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e82a +0x28fe:  mov    %eax,(%esp)
0820e82d +0x2901:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e832 +0x2906:  mov    %eax,0x8(%esp)
0820e836 +0x290a:  movl   $0x3f,0x4(%esp)
0820e83e +0x2912:  mov    0xc(%ebp),%eax
0820e841 +0x2915:  mov    %eax,(%esp)
0820e844 +0x2918:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e849 +0x291d:  jmp    08213440 <+0x7514>
0820e84e +0x2922:  movl   $0x0,0x4(%esp)
0820e856 +0x292a:  mov    0x14(%ebp),%eax
0820e859 +0x292d:  mov    %eax,(%esp)
0820e85c +0x2930:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e861 +0x2935:  movl   $"guilddebug",0x4(%esp)
0820e869 +0x293d:  mov    %eax,(%esp)
0820e86c +0x2940:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e871 +0x2945:  test   %al,%al
0820e873 +0x2947:  je     0820e8ac <+0x2980>
0820e875 +0x2949:  movl   $0x1,0x4(%esp)
0820e87d +0x2951:  mov    0x14(%ebp),%eax
0820e880 +0x2954:  mov    %eax,(%esp)
0820e883 +0x2957:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e888 +0x295c:  mov    %eax,(%esp)
0820e88b +0x295f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e890 +0x2964:  mov    %eax,0x8(%esp)
0820e894 +0x2968:  movl   $0x42,0x4(%esp)
0820e89c +0x2970:  mov    0xc(%ebp),%eax
0820e89f +0x2973:  mov    %eax,(%esp)
0820e8a2 +0x2976:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e8a7 +0x297b:  jmp    08213440 <+0x7514>
0820e8ac +0x2980:  movl   $0x0,0x4(%esp)
0820e8b4 +0x2988:  mov    0x14(%ebp),%eax
0820e8b7 +0x298b:  mov    %eax,(%esp)
0820e8ba +0x298e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e8bf +0x2993:  movl   $"delguild",0x4(%esp)
0820e8c7 +0x299b:  mov    %eax,(%esp)
0820e8ca +0x299e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e8cf +0x29a3:  test   %al,%al
0820e8d1 +0x29a5:  je     0820e90a <+0x29de>
0820e8d3 +0x29a7:  movl   $0x1,0x4(%esp)
0820e8db +0x29af:  mov    0x14(%ebp),%eax
0820e8de +0x29b2:  mov    %eax,(%esp)
0820e8e1 +0x29b5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e8e6 +0x29ba:  mov    %eax,(%esp)
0820e8e9 +0x29bd:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e8ee +0x29c2:  mov    %eax,0x8(%esp)
0820e8f2 +0x29c6:  movl   $0x2c,0x4(%esp)
0820e8fa +0x29ce:  mov    0xc(%ebp),%eax
0820e8fd +0x29d1:  mov    %eax,(%esp)
0820e900 +0x29d4:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e905 +0x29d9:  jmp    08213440 <+0x7514>
0820e90a +0x29de:  movl   $0x0,0x4(%esp)
0820e912 +0x29e6:  mov    0x14(%ebp),%eax
0820e915 +0x29e9:  mov    %eax,(%esp)
0820e918 +0x29ec:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e91d +0x29f1:  movl   $"changename",0x4(%esp)
0820e925 +0x29f9:  mov    %eax,(%esp)
0820e928 +0x29fc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e92d +0x2a01:  test   %al,%al
0820e92f +0x2a03:  je     0820e968 <+0x2a3c>
0820e931 +0x2a05:  movl   $0x1,0x4(%esp)
0820e939 +0x2a0d:  mov    0x14(%ebp),%eax
0820e93c +0x2a10:  mov    %eax,(%esp)
0820e93f +0x2a13:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e944 +0x2a18:  mov    %eax,(%esp)
0820e947 +0x2a1b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e94c +0x2a20:  mov    %eax,0x8(%esp)
0820e950 +0x2a24:  movl   $0x2d,0x4(%esp)
0820e958 +0x2a2c:  mov    0xc(%ebp),%eax
0820e95b +0x2a2f:  mov    %eax,(%esp)
0820e95e +0x2a32:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820e963 +0x2a37:  jmp    08213440 <+0x7514>
0820e968 +0x2a3c:  movl   $0x0,0x4(%esp)
0820e970 +0x2a44:  mov    0x14(%ebp),%eax
0820e973 +0x2a47:  mov    %eax,(%esp)
0820e976 +0x2a4a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e97b +0x2a4f:  movl   $"startevent",0x4(%esp)
0820e983 +0x2a57:  mov    %eax,(%esp)
0820e986 +0x2a5a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820e98b +0x2a5f:  test   %al,%al
0820e98d +0x2a61:  je     0820ea42 <+0x2b16>
0820e993 +0x2a67:  lea    -0x668(%ebp),%ebx
0820e999 +0x2a6d:  mov    $0x0,%eax
0820e99e +0x2a72:  mov    $0x40,%edx
0820e9a3 +0x2a77:  mov    %ebx,%edi
0820e9a5 +0x2a79:  mov    %edx,%ecx
0820e9a7 +0x2a7b:  rep stos %eax,%es:(%edi)
0820e9a9 +0x2a7d:  movl   $0x3,0x4(%esp)
0820e9b1 +0x2a85:  mov    0x14(%ebp),%eax
0820e9b4 +0x2a88:  mov    %eax,(%esp)
0820e9b7 +0x2a8b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e9bc +0x2a90:  mov    %eax,(%esp)
0820e9bf +0x2a93:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e9c4 +0x2a98:  mov    %eax,%esi
0820e9c6 +0x2a9a:  movl   $0x2,0x4(%esp)
0820e9ce +0x2aa2:  mov    0x14(%ebp),%eax
0820e9d1 +0x2aa5:  mov    %eax,(%esp)
0820e9d4 +0x2aa8:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e9d9 +0x2aad:  mov    %eax,(%esp)
0820e9dc +0x2ab0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e9e1 +0x2ab5:  mov    %eax,%ebx
0820e9e3 +0x2ab7:  movl   $0x1,0x4(%esp)
0820e9eb +0x2abf:  mov    0x14(%ebp),%eax
0820e9ee +0x2ac2:  mov    %eax,(%esp)
0820e9f1 +0x2ac5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820e9f6 +0x2aca:  mov    %eax,(%esp)
0820e9f9 +0x2acd:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820e9fe +0x2ad2:  mov    %esi,0x10(%esp)
0820ea02 +0x2ad6:  mov    %ebx,0xc(%esp)
0820ea06 +0x2ada:  mov    %eax,0x8(%esp)
0820ea0a +0x2ade:  movl   $"%s %s %s",0x4(%esp)
0820ea12 +0x2ae6:  lea    -0x668(%ebp),%eax
0820ea18 +0x2aec:  mov    %eax,(%esp)
0820ea1b +0x2aef:  call   0807e440 <_init+0xd38>
0820ea20 +0x2af4:  lea    -0x668(%ebp),%eax
0820ea26 +0x2afa:  mov    %eax,0x8(%esp)
0820ea2a +0x2afe:  movl   $0x2e,0x4(%esp)
0820ea32 +0x2b06:  mov    0xc(%ebp),%eax
0820ea35 +0x2b09:  mov    %eax,(%esp)
0820ea38 +0x2b0c:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ea3d +0x2b11:  jmp    08213440 <+0x7514>
0820ea42 +0x2b16:  movl   $0x0,0x4(%esp)
0820ea4a +0x2b1e:  mov    0x14(%ebp),%eax
0820ea4d +0x2b21:  mov    %eax,(%esp)
0820ea50 +0x2b24:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ea55 +0x2b29:  movl   $"endevent",0x4(%esp)
0820ea5d +0x2b31:  mov    %eax,(%esp)
0820ea60 +0x2b34:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ea65 +0x2b39:  test   %al,%al
0820ea67 +0x2b3b:  je     0820eaa0 <+0x2b74>
0820ea69 +0x2b3d:  movl   $0x1,0x4(%esp)
0820ea71 +0x2b45:  mov    0x14(%ebp),%eax
0820ea74 +0x2b48:  mov    %eax,(%esp)
0820ea77 +0x2b4b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ea7c +0x2b50:  mov    %eax,(%esp)
0820ea7f +0x2b53:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ea84 +0x2b58:  mov    %eax,0x8(%esp)
0820ea88 +0x2b5c:  movl   $0x2f,0x4(%esp)
0820ea90 +0x2b64:  mov    0xc(%ebp),%eax
0820ea93 +0x2b67:  mov    %eax,(%esp)
0820ea96 +0x2b6a:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ea9b +0x2b6f:  jmp    08213440 <+0x7514>
0820eaa0 +0x2b74:  movl   $0x0,0x4(%esp)
0820eaa8 +0x2b7c:  mov    0x14(%ebp),%eax
0820eaab +0x2b7f:  mov    %eax,(%esp)
0820eaae +0x2b82:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eab3 +0x2b87:  movl   $"shopcheck",0x4(%esp)
0820eabb +0x2b8f:  mov    %eax,(%esp)
0820eabe +0x2b92:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820eac3 +0x2b97:  test   %al,%al
0820eac5 +0x2b99:  je     0820eafe <+0x2bd2>
0820eac7 +0x2b9b:  movl   $0x1,0x4(%esp)
0820eacf +0x2ba3:  mov    0x14(%ebp),%eax
0820ead2 +0x2ba6:  mov    %eax,(%esp)
0820ead5 +0x2ba9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eada +0x2bae:  mov    %eax,(%esp)
0820eadd +0x2bb1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820eae2 +0x2bb6:  mov    %eax,0x8(%esp)
0820eae6 +0x2bba:  movl   $0x30,0x4(%esp)
0820eaee +0x2bc2:  mov    0xc(%ebp),%eax
0820eaf1 +0x2bc5:  mov    %eax,(%esp)
0820eaf4 +0x2bc8:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820eaf9 +0x2bcd:  jmp    08213440 <+0x7514>
0820eafe +0x2bd2:  movl   $0x0,0x4(%esp)
0820eb06 +0x2bda:  mov    0x14(%ebp),%eax
0820eb09 +0x2bdd:  mov    %eax,(%esp)
0820eb0c +0x2be0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eb11 +0x2be5:  movl   $"shopnpc",0x4(%esp)
0820eb19 +0x2bed:  mov    %eax,(%esp)
0820eb1c +0x2bf0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820eb21 +0x2bf5:  test   %al,%al
0820eb23 +0x2bf7:  je     0820eb5c <+0x2c30>
0820eb25 +0x2bf9:  movl   $0x1,0x4(%esp)
0820eb2d +0x2c01:  mov    0x14(%ebp),%eax
0820eb30 +0x2c04:  mov    %eax,(%esp)
0820eb33 +0x2c07:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eb38 +0x2c0c:  mov    %eax,(%esp)
0820eb3b +0x2c0f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820eb40 +0x2c14:  mov    %eax,0x8(%esp)
0820eb44 +0x2c18:  movl   $0x31,0x4(%esp)
0820eb4c +0x2c20:  mov    0xc(%ebp),%eax
0820eb4f +0x2c23:  mov    %eax,(%esp)
0820eb52 +0x2c26:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820eb57 +0x2c2b:  jmp    08213440 <+0x7514>
0820eb5c +0x2c30:  movl   $0x0,0x4(%esp)
0820eb64 +0x2c38:  mov    0x14(%ebp),%eax
0820eb67 +0x2c3b:  mov    %eax,(%esp)
0820eb6a +0x2c3e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eb6f +0x2c43:  movl   $"cargo",0x4(%esp)
0820eb77 +0x2c4b:  mov    %eax,(%esp)
0820eb7a +0x2c4e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820eb7f +0x2c53:  test   %al,%al
0820eb81 +0x2c55:  je     0820ebe5 <+0x2cb9>
0820eb83 +0x2c57:  movl   $0x1,0x4(%esp)
0820eb8b +0x2c5f:  mov    0x14(%ebp),%eax
0820eb8e +0x2c62:  mov    %eax,(%esp)
0820eb91 +0x2c65:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eb96 +0x2c6a:  movl   $"delete",0x4(%esp)
0820eb9e +0x2c72:  mov    %eax,(%esp)
0820eba1 +0x2c75:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820eba6 +0x2c7a:  test   %al,%al
0820eba8 +0x2c7c:  je     08213440 <+0x7514>
0820ebae +0x2c82:  movl   $0x1,0x4(%esp)
0820ebb6 +0x2c8a:  mov    0x14(%ebp),%eax
0820ebb9 +0x2c8d:  mov    %eax,(%esp)
0820ebbc +0x2c90:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ebc1 +0x2c95:  mov    %eax,(%esp)
0820ebc4 +0x2c98:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ebc9 +0x2c9d:  mov    %eax,0x8(%esp)
0820ebcd +0x2ca1:  movl   $0x36,0x4(%esp)
0820ebd5 +0x2ca9:  mov    0xc(%ebp),%eax
0820ebd8 +0x2cac:  mov    %eax,(%esp)
0820ebdb +0x2caf:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ebe0 +0x2cb4:  jmp    08213440 <+0x7514>
0820ebe5 +0x2cb9:  movl   $0x0,0x4(%esp)
0820ebed +0x2cc1:  mov    0x14(%ebp),%eax
0820ebf0 +0x2cc4:  mov    %eax,(%esp)
0820ebf3 +0x2cc7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ebf8 +0x2ccc:  movl   $"guildfund",0x4(%esp)
0820ec00 +0x2cd4:  mov    %eax,(%esp)
0820ec03 +0x2cd7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ec08 +0x2cdc:  test   %al,%al
0820ec0a +0x2cde:  je     0820ec43 <+0x2d17>
0820ec0c +0x2ce0:  movl   $0x1,0x4(%esp)
0820ec14 +0x2ce8:  mov    0x14(%ebp),%eax
0820ec17 +0x2ceb:  mov    %eax,(%esp)
0820ec1a +0x2cee:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ec1f +0x2cf3:  mov    %eax,(%esp)
0820ec22 +0x2cf6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ec27 +0x2cfb:  mov    %eax,0x8(%esp)
0820ec2b +0x2cff:  movl   $0x41,0x4(%esp)
0820ec33 +0x2d07:  mov    0xc(%ebp),%eax
0820ec36 +0x2d0a:  mov    %eax,(%esp)
0820ec39 +0x2d0d:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ec3e +0x2d12:  jmp    08213440 <+0x7514>
0820ec43 +0x2d17:  movl   $0x0,0x4(%esp)
0820ec4b +0x2d1f:  mov    0x14(%ebp),%eax
0820ec4e +0x2d22:  mov    %eax,(%esp)
0820ec51 +0x2d25:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ec56 +0x2d2a:  movl   $"dropitem",0x4(%esp)
0820ec5e +0x2d32:  mov    %eax,(%esp)
0820ec61 +0x2d35:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ec66 +0x2d3a:  test   %al,%al
0820ec68 +0x2d3c:  je     0820eca1 <+0x2d75>
0820ec6a +0x2d3e:  movl   $0x1,0x4(%esp)
0820ec72 +0x2d46:  mov    0x14(%ebp),%eax
0820ec75 +0x2d49:  mov    %eax,(%esp)
0820ec78 +0x2d4c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ec7d +0x2d51:  mov    %eax,(%esp)
0820ec80 +0x2d54:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ec85 +0x2d59:  mov    %eax,0x8(%esp)
0820ec89 +0x2d5d:  movl   $0x34,0x4(%esp)
0820ec91 +0x2d65:  mov    0xc(%ebp),%eax
0820ec94 +0x2d68:  mov    %eax,(%esp)
0820ec97 +0x2d6b:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ec9c +0x2d70:  jmp    08213440 <+0x7514>
0820eca1 +0x2d75:  movl   $0x0,0x4(%esp)
0820eca9 +0x2d7d:  mov    0x14(%ebp),%eax
0820ecac +0x2d80:  mov    %eax,(%esp)
0820ecaf +0x2d83:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ecb4 +0x2d88:  movl   $"premiumdelete",0x4(%esp)
0820ecbc +0x2d90:  mov    %eax,(%esp)
0820ecbf +0x2d93:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ecc4 +0x2d98:  test   %al,%al
0820ecc6 +0x2d9a:  jne    0820ecef <+0x2dc3>
0820ecc8 +0x2d9c:  movl   $0x0,0x4(%esp)
0820ecd0 +0x2da4:  mov    0x14(%ebp),%eax
0820ecd3 +0x2da7:  mov    %eax,(%esp)
0820ecd6 +0x2daa:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ecdb +0x2daf:  movl   $"pd",0x4(%esp)
0820ece3 +0x2db7:  mov    %eax,(%esp)
0820ece6 +0x2dba:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820eceb +0x2dbf:  test   %al,%al
0820eced +0x2dc1:  je     0820ecf6 <+0x2dca>
0820ecef +0x2dc3:  mov    $0x1,%eax
0820ecf4 +0x2dc8:  jmp    0820ecfb <+0x2dcf>
0820ecf6 +0x2dca:  mov    $0x0,%eax
0820ecfb +0x2dcf:  test   %al,%al
0820ecfd +0x2dd1:  je     0820ed36 <+0x2e0a>
0820ecff +0x2dd3:  movl   $0x1,0x4(%esp)
0820ed07 +0x2ddb:  mov    0x14(%ebp),%eax
0820ed0a +0x2dde:  mov    %eax,(%esp)
0820ed0d +0x2de1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ed12 +0x2de6:  mov    %eax,(%esp)
0820ed15 +0x2de9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ed1a +0x2dee:  mov    %eax,0x8(%esp)
0820ed1e +0x2df2:  movl   $0x3c,0x4(%esp)
0820ed26 +0x2dfa:  mov    0xc(%ebp),%eax
0820ed29 +0x2dfd:  mov    %eax,(%esp)
0820ed2c +0x2e00:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ed31 +0x2e05:  jmp    08213440 <+0x7514>
0820ed36 +0x2e0a:  movl   $0x0,0x4(%esp)
0820ed3e +0x2e12:  mov    0x14(%ebp),%eax
0820ed41 +0x2e15:  mov    %eax,(%esp)
0820ed44 +0x2e18:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ed49 +0x2e1d:  movl   $"mailitem",0x4(%esp)
0820ed51 +0x2e25:  mov    %eax,(%esp)
0820ed54 +0x2e28:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ed59 +0x2e2d:  test   %al,%al
0820ed5b +0x2e2f:  je     0820ed94 <+0x2e68>
0820ed5d +0x2e31:  movl   $0x1,0x4(%esp)
0820ed65 +0x2e39:  mov    0x14(%ebp),%eax
0820ed68 +0x2e3c:  mov    %eax,(%esp)
0820ed6b +0x2e3f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ed70 +0x2e44:  mov    %eax,(%esp)
0820ed73 +0x2e47:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ed78 +0x2e4c:  mov    %eax,0x8(%esp)
0820ed7c +0x2e50:  movl   $0x3d,0x4(%esp)
0820ed84 +0x2e58:  mov    0xc(%ebp),%eax
0820ed87 +0x2e5b:  mov    %eax,(%esp)
0820ed8a +0x2e5e:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ed8f +0x2e63:  jmp    08213440 <+0x7514>
0820ed94 +0x2e68:  movl   $0x0,0x4(%esp)
0820ed9c +0x2e70:  mov    0x14(%ebp),%eax
0820ed9f +0x2e73:  mov    %eax,(%esp)
0820eda2 +0x2e76:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eda7 +0x2e7b:  movl   $"ci",0x4(%esp)
0820edaf +0x2e83:  mov    %eax,(%esp)
0820edb2 +0x2e86:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820edb7 +0x2e8b:  test   %al,%al
0820edb9 +0x2e8d:  je     0820ee7f <+0x2f53>
0820edbf +0x2e93:  movl   $0x1,0x4(%esp)
0820edc7 +0x2e9b:  mov    0x14(%ebp),%eax
0820edca +0x2e9e:  mov    %eax,(%esp)
0820edcd +0x2ea1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820edd2 +0x2ea6:  movl   $"true",0x4(%esp)
0820edda +0x2eae:  mov    %eax,(%esp)
0820eddd +0x2eb1:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ede2 +0x2eb6:  test   %al,%al
0820ede4 +0x2eb8:  je     0820ee1d <+0x2ef1>
0820ede6 +0x2eba:  movl   $0x2,0x4(%esp)
0820edee +0x2ec2:  mov    0x14(%ebp),%eax
0820edf1 +0x2ec5:  mov    %eax,(%esp)
0820edf4 +0x2ec8:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820edf9 +0x2ecd:  mov    %eax,(%esp)
0820edfc +0x2ed0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ee01 +0x2ed5:  mov    %eax,0x8(%esp)
0820ee05 +0x2ed9:  movl   $0x6d,0x4(%esp)
0820ee0d +0x2ee1:  mov    0xc(%ebp),%eax
0820ee10 +0x2ee4:  mov    %eax,(%esp)
0820ee13 +0x2ee7:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ee18 +0x2eec:  jmp    08213440 <+0x7514>
0820ee1d +0x2ef1:  movl   $0x1,0x4(%esp)
0820ee25 +0x2ef9:  mov    0x14(%ebp),%eax
0820ee28 +0x2efc:  mov    %eax,(%esp)
0820ee2b +0x2eff:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ee30 +0x2f04:  movl   $"false",0x4(%esp)
0820ee38 +0x2f0c:  mov    %eax,(%esp)
0820ee3b +0x2f0f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ee40 +0x2f14:  test   %al,%al
0820ee42 +0x2f16:  je     08213440 <+0x7514>
0820ee48 +0x2f1c:  movl   $0x1,0x4(%esp)
0820ee50 +0x2f24:  mov    0x14(%ebp),%eax
0820ee53 +0x2f27:  mov    %eax,(%esp)
0820ee56 +0x2f2a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ee5b +0x2f2f:  mov    %eax,(%esp)
0820ee5e +0x2f32:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ee63 +0x2f37:  mov    %eax,0x8(%esp)
0820ee67 +0x2f3b:  movl   $0x6d,0x4(%esp)
0820ee6f +0x2f43:  mov    0xc(%ebp),%eax
0820ee72 +0x2f46:  mov    %eax,(%esp)
0820ee75 +0x2f49:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ee7a +0x2f4e:  jmp    08213440 <+0x7514>
0820ee7f +0x2f53:  movl   $0x0,0x4(%esp)
0820ee87 +0x2f5b:  mov    0x14(%ebp),%eax
0820ee8a +0x2f5e:  mov    %eax,(%esp)
0820ee8d +0x2f61:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ee92 +0x2f66:  movl   $"ritemclear",0x4(%esp)
0820ee9a +0x2f6e:  mov    %eax,(%esp)
0820ee9d +0x2f71:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820eea2 +0x2f76:  test   %al,%al
0820eea4 +0x2f78:  je     0820eedd <+0x2fb1>
0820eea6 +0x2f7a:  movl   $0x1,0x4(%esp)
0820eeae +0x2f82:  mov    0x14(%ebp),%eax
0820eeb1 +0x2f85:  mov    %eax,(%esp)
0820eeb4 +0x2f88:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eeb9 +0x2f8d:  mov    %eax,(%esp)
0820eebc +0x2f90:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820eec1 +0x2f95:  mov    %eax,0x8(%esp)
0820eec5 +0x2f99:  movl   $0x76,0x4(%esp)
0820eecd +0x2fa1:  mov    0xc(%ebp),%eax
0820eed0 +0x2fa4:  mov    %eax,(%esp)
0820eed3 +0x2fa7:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820eed8 +0x2fac:  jmp    08213440 <+0x7514>
0820eedd +0x2fb1:  movl   $0x0,0x4(%esp)
0820eee5 +0x2fb9:  mov    0x14(%ebp),%eax
0820eee8 +0x2fbc:  mov    %eax,(%esp)
0820eeeb +0x2fbf:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820eef0 +0x2fc4:  movl   $"difficulty",0x4(%esp)
0820eef8 +0x2fcc:  mov    %eax,(%esp)
0820eefb +0x2fcf:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ef00 +0x2fd4:  test   %al,%al
0820ef02 +0x2fd6:  je     0820ef3b <+0x300f>
0820ef04 +0x2fd8:  movl   $0x1,0x4(%esp)
0820ef0c +0x2fe0:  mov    0x14(%ebp),%eax
0820ef0f +0x2fe3:  mov    %eax,(%esp)
0820ef12 +0x2fe6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ef17 +0x2feb:  mov    %eax,(%esp)
0820ef1a +0x2fee:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ef1f +0x2ff3:  mov    %eax,0x8(%esp)
0820ef23 +0x2ff7:  movl   $0x78,0x4(%esp)
0820ef2b +0x2fff:  mov    0xc(%ebp),%eax
0820ef2e +0x3002:  mov    %eax,(%esp)
0820ef31 +0x3005:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820ef36 +0x300a:  jmp    08213440 <+0x7514>
0820ef3b +0x300f:  movl   $0x0,0x4(%esp)
0820ef43 +0x3017:  mov    0x14(%ebp),%eax
0820ef46 +0x301a:  mov    %eax,(%esp)
0820ef49 +0x301d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ef4e +0x3022:  movl   $"bluemarble",0x4(%esp)
0820ef56 +0x302a:  mov    %eax,(%esp)
0820ef59 +0x302d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ef5e +0x3032:  test   %al,%al
0820ef60 +0x3034:  je     0820eff4 <+0x30c8>
0820ef66 +0x303a:  lea    -0x668(%ebp),%ebx
0820ef6c +0x3040:  mov    $0x0,%eax
0820ef71 +0x3045:  mov    $0x40,%edx
0820ef76 +0x304a:  mov    %ebx,%edi
0820ef78 +0x304c:  mov    %edx,%ecx
0820ef7a +0x304e:  rep stos %eax,%es:(%edi)
0820ef7c +0x3050:  movl   $0x2,0x4(%esp)
0820ef84 +0x3058:  mov    0x14(%ebp),%eax
0820ef87 +0x305b:  mov    %eax,(%esp)
0820ef8a +0x305e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ef8f +0x3063:  mov    %eax,(%esp)
0820ef92 +0x3066:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ef97 +0x306b:  mov    %eax,%ebx
0820ef99 +0x306d:  movl   $0x1,0x4(%esp)
0820efa1 +0x3075:  mov    0x14(%ebp),%eax
0820efa4 +0x3078:  mov    %eax,(%esp)
0820efa7 +0x307b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820efac +0x3080:  mov    %eax,(%esp)
0820efaf +0x3083:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820efb4 +0x3088:  mov    %ebx,0xc(%esp)
0820efb8 +0x308c:  mov    %eax,0x8(%esp)
0820efbc +0x3090:  movl   $"%s %s",0x4(%esp)
0820efc4 +0x3098:  lea    -0x668(%ebp),%eax
0820efca +0x309e:  mov    %eax,(%esp)
0820efcd +0x30a1:  call   0807e440 <_init+0xd38>
0820efd2 +0x30a6:  lea    -0x668(%ebp),%eax
0820efd8 +0x30ac:  mov    %eax,0x8(%esp)
0820efdc +0x30b0:  movl   $0x7d,0x4(%esp)
0820efe4 +0x30b8:  mov    0xc(%ebp),%eax
0820efe7 +0x30bb:  mov    %eax,(%esp)
0820efea +0x30be:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
0820efef +0x30c3:  jmp    08213440 <+0x7514>
0820eff4 +0x30c8:  movl   $0x0,0x4(%esp)
0820effc +0x30d0:  mov    0x14(%ebp),%eax
0820efff +0x30d3:  mov    %eax,(%esp)
0820f002 +0x30d6:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f007 +0x30db:  movl   $"ulti",0x4(%esp)
0820f00f +0x30e3:  mov    %eax,(%esp)
0820f012 +0x30e6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f017 +0x30eb:  test   %al,%al
0820f019 +0x30ed:  je     0820f217 <+0x32eb>
0820f01f +0x30f3:  movl   $0x1,0x4(%esp)
0820f027 +0x30fb:  mov    0x14(%ebp),%eax
0820f02a +0x30fe:  mov    %eax,(%esp)
0820f02d +0x3101:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f032 +0x3106:  movl   $"max",0x4(%esp)
0820f03a +0x310e:  mov    %eax,(%esp)
0820f03d +0x3111:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f042 +0x3116:  test   %al,%al
0820f044 +0x3118:  je     08213440 <+0x7514>
0820f04a +0x311e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0820f04f +0x3123:  movl   $0x2,0x4(%esp)
0820f057 +0x312b:  mov    %eax,(%esp)
0820f05a +0x312e:  call   0822b638 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce2
0820f05f +0x3133:  movsbl %al,%edx
0820f062 +0x3136:  mov    0xc(%ebp),%eax
0820f065 +0x3139:  mov    %edx,0x8(%esp)
0820f069 +0x313d:  movl   $0x2,0x4(%esp)
0820f071 +0x3145:  mov    %eax,(%esp)
0820f074 +0x3148:  call   0822f1cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4876>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4876
0820f079 +0x314d:  lea    -0x248(%ebp),%eax
0820f07f +0x3153:  mov    %eax,(%esp)
0820f082 +0x3156:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0820f087 +0x315b:  lea    -0x248(%ebp),%eax
0820f08d +0x3161:  mov    %eax,0x8(%esp)
0820f091 +0x3165:  movl   $"Add ultimate inout max count!!",0x4(%esp)
0820f099 +0x316d:  lea    -0x2a0(%ebp),%eax
0820f09f +0x3173:  mov    %eax,(%esp)
0820f0a2 +0x3176:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0820f0a7 +0x317b:  jmp    0820f0c4 <+0x3198>
0820f0a9 +0x317d:  mov    %edx,%ebx
0820f0ab +0x317f:  mov    %eax,%esi
0820f0ad +0x3181:  lea    -0x248(%ebp),%eax
0820f0b3 +0x3187:  mov    %eax,(%esp)
0820f0b6 +0x318a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820f0bb +0x318f:  mov    %esi,%eax
0820f0bd +0x3191:  mov    %ebx,%edx
0820f0bf +0x3193:  jmp    08213447 <+0x751b>
0820f0c4 +0x3198:  lea    -0x248(%ebp),%eax
0820f0ca +0x319e:  mov    %eax,(%esp)
0820f0cd +0x31a1:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820f0d2 +0x31a6:  lea    -0x2ac(%ebp),%eax
0820f0d8 +0x31ac:  mov    %eax,(%esp)
0820f0db +0x31af:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820f0e0 +0x31b4:  movl   $0xc,0x8(%esp)
0820f0e8 +0x31bc:  movl   $0x0,0x4(%esp)
0820f0f0 +0x31c4:  lea    -0x2ac(%ebp),%eax
0820f0f6 +0x31ca:  mov    %eax,(%esp)
0820f0f9 +0x31cd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820f0fe +0x31d2:  movl   $0x0,0x4(%esp)
0820f106 +0x31da:  lea    -0x2ac(%ebp),%eax
0820f10c +0x31e0:  mov    %eax,(%esp)
0820f10f +0x31e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820f114 +0x31e8:  movl   $0x0,0x4(%esp)
0820f11c +0x31f0:  lea    -0x2ac(%ebp),%eax
0820f122 +0x31f6:  mov    %eax,(%esp)
0820f125 +0x31f9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0820f12a +0x31fe:  movl   $0x0,0x4(%esp)
0820f132 +0x3206:  lea    -0x2ac(%ebp),%eax
0820f138 +0x320c:  mov    %eax,(%esp)
0820f13b +0x320f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820f140 +0x3214:  lea    -0x2a0(%ebp),%eax
0820f146 +0x321a:  mov    %eax,(%esp)
0820f149 +0x321d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820f14e +0x3222:  mov    %eax,0x4(%esp)
0820f152 +0x3226:  lea    -0x2ac(%ebp),%eax
0820f158 +0x322c:  mov    %eax,(%esp)
0820f15b +0x322f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0820f160 +0x3234:  lea    -0x2a0(%ebp),%eax
0820f166 +0x323a:  mov    %eax,(%esp)
0820f169 +0x323d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820f16e +0x3242:  mov    %eax,%ebx
0820f170 +0x3244:  lea    -0x2a0(%ebp),%eax
0820f176 +0x324a:  mov    %eax,(%esp)
0820f179 +0x324d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820f17e +0x3252:  mov    %ebx,0x8(%esp)
0820f182 +0x3256:  mov    %eax,0x4(%esp)
0820f186 +0x325a:  lea    -0x2ac(%ebp),%eax
0820f18c +0x3260:  mov    %eax,(%esp)
0820f18f +0x3263:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0820f194 +0x3268:  movl   $0x1,0x4(%esp)
0820f19c +0x3270:  lea    -0x2ac(%ebp),%eax
0820f1a2 +0x3276:  mov    %eax,(%esp)
0820f1a5 +0x3279:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820f1aa +0x327e:  lea    -0x2ac(%ebp),%eax
0820f1b0 +0x3284:  mov    %eax,0x4(%esp)
0820f1b4 +0x3288:  mov    0xc(%ebp),%eax
0820f1b7 +0x328b:  mov    %eax,(%esp)
0820f1ba +0x328e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820f1bf +0x3293:  jmp    0820f1d9 <+0x32ad>
0820f1c1 +0x3295:  mov    %edx,%ebx
0820f1c3 +0x3297:  mov    %eax,%esi
0820f1c5 +0x3299:  lea    -0x2ac(%ebp),%eax
0820f1cb +0x329f:  mov    %eax,(%esp)
0820f1ce +0x32a2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820f1d3 +0x32a7:  mov    %esi,%eax
0820f1d5 +0x32a9:  mov    %ebx,%edx
0820f1d7 +0x32ab:  jmp    0820f1e9 <+0x32bd>
0820f1d9 +0x32ad:  lea    -0x2ac(%ebp),%eax
0820f1df +0x32b3:  mov    %eax,(%esp)
0820f1e2 +0x32b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820f1e7 +0x32bb:  jmp    0820f204 <+0x32d8>
0820f1e9 +0x32bd:  mov    %edx,%ebx
0820f1eb +0x32bf:  mov    %eax,%esi
0820f1ed +0x32c1:  lea    -0x2a0(%ebp),%eax
0820f1f3 +0x32c7:  mov    %eax,(%esp)
0820f1f6 +0x32ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820f1fb +0x32cf:  mov    %esi,%eax
0820f1fd +0x32d1:  mov    %ebx,%edx
0820f1ff +0x32d3:  jmp    08213447 <+0x751b>
0820f204 +0x32d8:  lea    -0x2a0(%ebp),%eax
0820f20a +0x32de:  mov    %eax,(%esp)
0820f20d +0x32e1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820f212 +0x32e6:  jmp    08213440 <+0x7514>
0820f217 +0x32eb:  movl   $0x0,0x4(%esp)
0820f21f +0x32f3:  mov    0x14(%ebp),%eax
0820f222 +0x32f6:  mov    %eax,(%esp)
0820f225 +0x32f9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f22a +0x32fe:  movl   $"dimen",0x4(%esp)
0820f232 +0x3306:  mov    %eax,(%esp)
0820f235 +0x3309:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f23a +0x330e:  test   %al,%al
0820f23c +0x3310:  je     0820f462 <+0x3536>
0820f242 +0x3316:  movl   $0x1,0x4(%esp)
0820f24a +0x331e:  mov    0x14(%ebp),%eax
0820f24d +0x3321:  mov    %eax,(%esp)
0820f250 +0x3324:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f255 +0x3329:  movl   $"max",0x4(%esp)
0820f25d +0x3331:  mov    %eax,(%esp)
0820f260 +0x3334:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f265 +0x3339:  test   %al,%al
0820f267 +0x333b:  je     08213440 <+0x7514>
0820f26d +0x3341:  movl   $0x0,-0xf4(%ebp)
0820f277 +0x334b:  jmp    0820f2b6 <+0x338a>
0820f279 +0x334d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0820f27e +0x3352:  mov    -0xf4(%ebp),%edx
0820f284 +0x3358:  mov    %edx,0x4(%esp)
0820f288 +0x335c:  mov    %eax,(%esp)
0820f28b +0x335f:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
0820f290 +0x3364:  movsbl %al,%ecx
0820f293 +0x3367:  mov    -0xf4(%ebp),%eax
0820f299 +0x336d:  movsbl %al,%edx
0820f29c +0x3370:  mov    0xc(%ebp),%eax
0820f29f +0x3373:  mov    %ecx,0x8(%esp)
0820f2a3 +0x3377:  mov    %edx,0x4(%esp)
0820f2a7 +0x337b:  mov    %eax,(%esp)
0820f2aa +0x337e:  call   0822f184 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x482e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x482e
0820f2af +0x3383:  addl   $0x1,-0xf4(%ebp)
0820f2b6 +0x338a:  cmpl   $0x5,-0xf4(%ebp)
0820f2bd +0x3391:  setle  %al
0820f2c0 +0x3394:  test   %al,%al
0820f2c2 +0x3396:  jne    0820f279 <+0x334d>
0820f2c4 +0x3398:  lea    -0x247(%ebp),%eax
0820f2ca +0x339e:  mov    %eax,(%esp)
0820f2cd +0x33a1:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0820f2d2 +0x33a6:  lea    -0x247(%ebp),%eax
0820f2d8 +0x33ac:  mov    %eax,0x8(%esp)
0820f2dc +0x33b0:  movl   $"Add dimension inout max count!!",0x4(%esp)
0820f2e4 +0x33b8:  lea    -0x2b0(%ebp),%eax
0820f2ea +0x33be:  mov    %eax,(%esp)
0820f2ed +0x33c1:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0820f2f2 +0x33c6:  jmp    0820f30f <+0x33e3>
0820f2f4 +0x33c8:  mov    %edx,%ebx
0820f2f6 +0x33ca:  mov    %eax,%esi
0820f2f8 +0x33cc:  lea    -0x247(%ebp),%eax
0820f2fe +0x33d2:  mov    %eax,(%esp)
0820f301 +0x33d5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820f306 +0x33da:  mov    %esi,%eax
0820f308 +0x33dc:  mov    %ebx,%edx
0820f30a +0x33de:  jmp    08213447 <+0x751b>
0820f30f +0x33e3:  lea    -0x247(%ebp),%eax
0820f315 +0x33e9:  mov    %eax,(%esp)
0820f318 +0x33ec:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820f31d +0x33f1:  lea    -0x2bc(%ebp),%eax
0820f323 +0x33f7:  mov    %eax,(%esp)
0820f326 +0x33fa:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820f32b +0x33ff:  movl   $0xc,0x8(%esp)
0820f333 +0x3407:  movl   $0x0,0x4(%esp)
0820f33b +0x340f:  lea    -0x2bc(%ebp),%eax
0820f341 +0x3415:  mov    %eax,(%esp)
0820f344 +0x3418:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820f349 +0x341d:  movl   $0x0,0x4(%esp)
0820f351 +0x3425:  lea    -0x2bc(%ebp),%eax
0820f357 +0x342b:  mov    %eax,(%esp)
0820f35a +0x342e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820f35f +0x3433:  movl   $0x0,0x4(%esp)
0820f367 +0x343b:  lea    -0x2bc(%ebp),%eax
0820f36d +0x3441:  mov    %eax,(%esp)
0820f370 +0x3444:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0820f375 +0x3449:  movl   $0x0,0x4(%esp)
0820f37d +0x3451:  lea    -0x2bc(%ebp),%eax
0820f383 +0x3457:  mov    %eax,(%esp)
0820f386 +0x345a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820f38b +0x345f:  lea    -0x2b0(%ebp),%eax
0820f391 +0x3465:  mov    %eax,(%esp)
0820f394 +0x3468:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820f399 +0x346d:  mov    %eax,0x4(%esp)
0820f39d +0x3471:  lea    -0x2bc(%ebp),%eax
0820f3a3 +0x3477:  mov    %eax,(%esp)
0820f3a6 +0x347a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0820f3ab +0x347f:  lea    -0x2b0(%ebp),%eax
0820f3b1 +0x3485:  mov    %eax,(%esp)
0820f3b4 +0x3488:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0820f3b9 +0x348d:  mov    %eax,%ebx
0820f3bb +0x348f:  lea    -0x2b0(%ebp),%eax
0820f3c1 +0x3495:  mov    %eax,(%esp)
0820f3c4 +0x3498:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820f3c9 +0x349d:  mov    %ebx,0x8(%esp)
0820f3cd +0x34a1:  mov    %eax,0x4(%esp)
0820f3d1 +0x34a5:  lea    -0x2bc(%ebp),%eax
0820f3d7 +0x34ab:  mov    %eax,(%esp)
0820f3da +0x34ae:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0820f3df +0x34b3:  movl   $0x1,0x4(%esp)
0820f3e7 +0x34bb:  lea    -0x2bc(%ebp),%eax
0820f3ed +0x34c1:  mov    %eax,(%esp)
0820f3f0 +0x34c4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820f3f5 +0x34c9:  lea    -0x2bc(%ebp),%eax
0820f3fb +0x34cf:  mov    %eax,0x4(%esp)
0820f3ff +0x34d3:  mov    0xc(%ebp),%eax
0820f402 +0x34d6:  mov    %eax,(%esp)
0820f405 +0x34d9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820f40a +0x34de:  jmp    0820f424 <+0x34f8>
0820f40c +0x34e0:  mov    %edx,%ebx
0820f40e +0x34e2:  mov    %eax,%esi
0820f410 +0x34e4:  lea    -0x2bc(%ebp),%eax
0820f416 +0x34ea:  mov    %eax,(%esp)
0820f419 +0x34ed:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820f41e +0x34f2:  mov    %esi,%eax
0820f420 +0x34f4:  mov    %ebx,%edx
0820f422 +0x34f6:  jmp    0820f434 <+0x3508>
0820f424 +0x34f8:  lea    -0x2bc(%ebp),%eax
0820f42a +0x34fe:  mov    %eax,(%esp)
0820f42d +0x3501:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820f432 +0x3506:  jmp    0820f44f <+0x3523>
0820f434 +0x3508:  mov    %edx,%ebx
0820f436 +0x350a:  mov    %eax,%esi
0820f438 +0x350c:  lea    -0x2b0(%ebp),%eax
0820f43e +0x3512:  mov    %eax,(%esp)
0820f441 +0x3515:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820f446 +0x351a:  mov    %esi,%eax
0820f448 +0x351c:  mov    %ebx,%edx
0820f44a +0x351e:  jmp    08213447 <+0x751b>
0820f44f +0x3523:  lea    -0x2b0(%ebp),%eax
0820f455 +0x3529:  mov    %eax,(%esp)
0820f458 +0x352c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820f45d +0x3531:  jmp    08213440 <+0x7514>
0820f462 +0x3536:  movl   $0x0,0x4(%esp)
0820f46a +0x353e:  mov    0x14(%ebp),%eax
0820f46d +0x3541:  mov    %eax,(%esp)
0820f470 +0x3544:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f475 +0x3549:  movl   $"dontsend",0x4(%esp)
0820f47d +0x3551:  mov    %eax,(%esp)
0820f480 +0x3554:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f485 +0x3559:  test   %al,%al
0820f487 +0x355b:  je     0820f50f <+0x35e3>
0820f48d +0x3561:  movl   $0x1,0x4(%esp)
0820f495 +0x3569:  mov    0x14(%ebp),%eax
0820f498 +0x356c:  mov    %eax,(%esp)
0820f49b +0x356f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f4a0 +0x3574:  movl   $"on",0x4(%esp)
0820f4a8 +0x357c:  mov    %eax,(%esp)
0820f4ab +0x357f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f4b0 +0x3584:  test   %al,%al
0820f4b2 +0x3586:  je     0820f4cc <+0x35a0>
0820f4b4 +0x3588:  movl   $0x1,0x4(%esp)
0820f4bc +0x3590:  mov    0xc(%ebp),%eax
0820f4bf +0x3593:  mov    %eax,(%esp)
0820f4c2 +0x3596:  call   082301fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58a4
0820f4c7 +0x359b:  jmp    08213440 <+0x7514>
0820f4cc +0x35a0:  movl   $0x1,0x4(%esp)
0820f4d4 +0x35a8:  mov    0x14(%ebp),%eax
0820f4d7 +0x35ab:  mov    %eax,(%esp)
0820f4da +0x35ae:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f4df +0x35b3:  movl   $"off",0x4(%esp)
0820f4e7 +0x35bb:  mov    %eax,(%esp)
0820f4ea +0x35be:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f4ef +0x35c3:  test   %al,%al
0820f4f1 +0x35c5:  je     08213440 <+0x7514>
0820f4f7 +0x35cb:  movl   $0x0,0x4(%esp)
0820f4ff +0x35d3:  mov    0xc(%ebp),%eax
0820f502 +0x35d6:  mov    %eax,(%esp)
0820f505 +0x35d9:  call   082301fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58a4
0820f50a +0x35de:  jmp    08213440 <+0x7514>
0820f50f +0x35e3:  movl   $0x0,0x4(%esp)
0820f517 +0x35eb:  mov    0x14(%ebp),%eax
0820f51a +0x35ee:  mov    %eax,(%esp)
0820f51d +0x35f1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f522 +0x35f6:  movl   $"pvpskilllevel",0x4(%esp)
0820f52a +0x35fe:  mov    %eax,(%esp)
0820f52d +0x3601:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f532 +0x3606:  test   %al,%al
0820f534 +0x3608:  je     0820f602 <+0x36d6>
0820f53a +0x360e:  movl   $0x1,0x4(%esp)
0820f542 +0x3616:  mov    0x14(%ebp),%eax
0820f545 +0x3619:  mov    %eax,(%esp)
0820f548 +0x361c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f54d +0x3621:  mov    %eax,(%esp)
0820f550 +0x3624:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820f555 +0x3629:  mov    %eax,(%esp)
0820f558 +0x362c:  call   0807e6f0 <_init+0xfe8>
0820f55d +0x3631:  mov    %eax,-0xf0(%ebp)
0820f563 +0x3637:  cmpl   $0x25,-0xf0(%ebp)
0820f56a +0x363e:  jle    0820f576 <+0x364a>
0820f56c +0x3640:  mov    $0x0,%ebx
0820f571 +0x3645:  jmp    0821345f <+0x7533>
0820f576 +0x364a:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0820f57b +0x364f:  mov    -0xf0(%ebp),%edx
0820f581 +0x3655:  mov    %edx,0x4(%esp)
0820f585 +0x3659:  mov    %eax,(%esp)
0820f588 +0x365c:  call   085d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>  ; RefPvpGrade::GetPvpNextRankPoint(int) const
0820f58d +0x3661:  mov    %eax,-0xec(%ebp)
0820f593 +0x3667:  mov    0xc(%ebp),%eax
0820f596 +0x366a:  mov    %eax,(%esp)
0820f599 +0x366d:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0820f59e +0x3672:  mov    -0xec(%ebp),%edx
0820f5a4 +0x3678:  mov    %edx,0x8(%eax)
0820f5a7 +0x367b:  mov    0xc(%ebp),%eax
0820f5aa +0x367e:  mov    %eax,(%esp)
0820f5ad +0x3681:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0820f5b2 +0x3686:  mov    -0xf0(%ebp),%edx
0820f5b8 +0x368c:  mov    %edx,0x14(%eax)
0820f5bb +0x368f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0820f5c0 +0x3694:  mov    0xc(%ebp),%edx
0820f5c3 +0x3697:  mov    %edx,0x4(%esp)
0820f5c7 +0x369b:  mov    %eax,(%esp)
0820f5ca +0x369e:  call   086c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>  ; GameWorld::send_AllBasicInfo(CUser*)
0820f5cf +0x36a3:  movl   $0x3,0xc(%esp)
0820f5d7 +0x36ab:  movl   $0x0,0x8(%esp)
0820f5df +0x36b3:  movl   $0x0,0x4(%esp)
0820f5e7 +0x36bb:  mov    0xc(%ebp),%eax
0820f5ea +0x36be:  mov    %eax,(%esp)
0820f5ed +0x36c1:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
0820f5f2 +0x36c6:  mov    0xc(%ebp),%eax
0820f5f5 +0x36c9:  mov    %eax,(%esp)
0820f5f8 +0x36cc:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0820f5fd +0x36d1:  jmp    08213440 <+0x7514>
0820f602 +0x36d6:  movl   $0x0,0x4(%esp)
0820f60a +0x36de:  mov    0x14(%ebp),%eax
0820f60d +0x36e1:  mov    %eax,(%esp)
0820f610 +0x36e4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f615 +0x36e9:  movl   $"lethe",0x4(%esp)
0820f61d +0x36f1:  mov    %eax,(%esp)
0820f620 +0x36f4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f625 +0x36f9:  test   %al,%al
0820f627 +0x36fb:  je     0820f6eb <+0x37bf>
0820f62d +0x3701:  mov    0xc(%ebp),%eax
0820f630 +0x3704:  mov    %eax,(%esp)
0820f633 +0x3707:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0820f638 +0x370c:  mov    %eax,(%esp)
0820f63b +0x370f:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
0820f640 +0x3714:  mov    0xc(%ebp),%eax
0820f643 +0x3717:  mov    %eax,(%esp)
0820f646 +0x371a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0820f64b +0x371f:  mov    0xc(%ebp),%edx
0820f64e +0x3722:  mov    %edx,0x4(%esp)
0820f652 +0x3726:  mov    %eax,(%esp)
0820f655 +0x3729:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0820f65a +0x372e:  lea    -0x568(%ebp),%eax
0820f660 +0x3734:  mov    %eax,(%esp)
0820f663 +0x3737:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
0820f668 +0x373c:  movl   $0x0,0xc(%esp)
0820f670 +0x3744:  movl   $0x0,0x8(%esp)
0820f678 +0x374c:  mov    0xc(%ebp),%eax
0820f67b +0x374f:  mov    %eax,0x4(%esp)
0820f67f +0x3753:  lea    -0x568(%ebp),%eax
0820f685 +0x3759:  mov    %eax,(%esp)
0820f688 +0x375c:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
0820f68d +0x3761:  movl   $0x3,0xc(%esp)
0820f695 +0x3769:  movl   $0x0,0x8(%esp)
0820f69d +0x3771:  movl   $0x0,0x4(%esp)
0820f6a5 +0x3779:  mov    0xc(%ebp),%eax
0820f6a8 +0x377c:  mov    %eax,(%esp)
0820f6ab +0x377f:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
0820f6b0 +0x3784:  mov    0xc(%ebp),%eax
0820f6b3 +0x3787:  mov    %eax,(%esp)
0820f6b6 +0x378a:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0820f6bb +0x378f:  jmp    0820f6d8 <+0x37ac>
0820f6bd +0x3791:  mov    %edx,%ebx
0820f6bf +0x3793:  mov    %eax,%esi
0820f6c1 +0x3795:  lea    -0x568(%ebp),%eax
0820f6c7 +0x379b:  mov    %eax,(%esp)
0820f6ca +0x379e:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0820f6cf +0x37a3:  mov    %esi,%eax
0820f6d1 +0x37a5:  mov    %ebx,%edx
0820f6d3 +0x37a7:  jmp    08213447 <+0x751b>
0820f6d8 +0x37ac:  lea    -0x568(%ebp),%eax
0820f6de +0x37b2:  mov    %eax,(%esp)
0820f6e1 +0x37b5:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0820f6e6 +0x37ba:  jmp    08213440 <+0x7514>
0820f6eb +0x37bf:  movl   $0x0,0x4(%esp)
0820f6f3 +0x37c7:  mov    0x14(%ebp),%eax
0820f6f6 +0x37ca:  mov    %eax,(%esp)
0820f6f9 +0x37cd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f6fe +0x37d2:  movl   $"rematch",0x4(%esp)
0820f706 +0x37da:  mov    %eax,(%esp)
0820f709 +0x37dd:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820f70e +0x37e2:  test   %al,%al
0820f710 +0x37e4:  je     0820f79f <+0x3873>
0820f716 +0x37ea:  mov    0xc(%ebp),%eax
0820f719 +0x37ed:  mov    %eax,(%esp)
0820f71c +0x37f0:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0820f721 +0x37f5:  mov    %eax,-0xe8(%ebp)
0820f727 +0x37fb:  cmpl   $0x0,-0xe8(%ebp)
0820f72e +0x3802:  je     08213440 <+0x7514>
0820f734 +0x3808:  mov    -0xe8(%ebp),%eax
0820f73a +0x380e:  mov    0x6e4(%eax),%eax
0820f740 +0x3814:  test   %eax,%eax
0820f742 +0x3816:  je     08213440 <+0x7514>
0820f748 +0x381c:  mov    -0xe8(%ebp),%eax
0820f74e +0x3822:  mov    0x6e4(%eax),%eax
0820f754 +0x3828:  mov    (%eax),%eax
0820f756 +0x382a:  add    $0x68,%eax
0820f759 +0x382d:  mov    (%eax),%ebx
0820f75b +0x382f:  movl   $0x1,0x4(%esp)
0820f763 +0x3837:  mov    0x14(%ebp),%eax
0820f766 +0x383a:  mov    %eax,(%esp)
0820f769 +0x383d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f76e +0x3842:  mov    %eax,(%esp)
0820f771 +0x3845:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820f776 +0x384a:  mov    %eax,(%esp)
0820f779 +0x384d:  call   0807e6f0 <_init+0xfe8>
0820f77e +0x3852:  mov    -0xe8(%ebp),%edx
0820f784 +0x3858:  mov    0x6e4(%edx),%edx
0820f78a +0x385e:  mov    %eax,0x8(%esp)
0820f78e +0x3862:  mov    0xc(%ebp),%eax
0820f791 +0x3865:  mov    %eax,0x4(%esp)
0820f795 +0x3869:  mov    %edx,(%esp)
0820f798 +0x386c:  call   *%ebx
0820f79a +0x386e:  jmp    08213440 <+0x7514>
0820f79f +0x3873:  movl   $0x0,0x4(%esp)
0820f7a7 +0x387b:  mov    0x14(%ebp),%eax
0820f7aa +0x387e:  mov    %eax,(%esp)
0820f7ad +0x3881:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f7b2 +0x3886:  mov    %eax,0x4(%esp)
0820f7b6 +0x388a:  movl   $"wjfakd",(%esp)
0820f7bd +0x3891:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820f7c2 +0x3896:  test   %al,%al
0820f7c4 +0x3898:  je     0820f893 <+0x3967>
0820f7ca +0x389e:  movl   $0x1,0x4(%esp)
0820f7d2 +0x38a6:  mov    0x14(%ebp),%eax
0820f7d5 +0x38a9:  mov    %eax,(%esp)
0820f7d8 +0x38ac:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f7dd +0x38b1:  mov    %eax,(%esp)
0820f7e0 +0x38b4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820f7e5 +0x38b9:  mov    %eax,(%esp)
0820f7e8 +0x38bc:  call   0807e6f0 <_init+0xfe8>
0820f7ed +0x38c1:  movzwl %ax,%eax
0820f7f0 +0x38c4:  mov    %eax,0x4(%esp)
0820f7f4 +0x38c8:  lea    -0x2be(%ebp),%eax
0820f7fa +0x38ce:  mov    %eax,(%esp)
0820f7fd +0x38d1:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
0820f802 +0x38d6:  movl   $0xd,0x4(%esp)
0820f80a +0x38de:  mov    0xc(%ebp),%eax
0820f80d +0x38e1:  mov    %eax,(%esp)
0820f810 +0x38e4:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0820f815 +0x38e9:  mov    %eax,-0xe4(%ebp)
0820f81b +0x38ef:  lea    -0x2be(%ebp),%eax
0820f821 +0x38f5:  mov    %eax,0x4(%esp)
0820f825 +0x38f9:  mov    -0xe4(%ebp),%eax
0820f82b +0x38ff:  mov    %eax,(%esp)
0820f82e +0x3902:  call   086438fc <_ZN13TOD_UserState13setEnterLayerERK9TOD_Layer>  ; TOD_UserState::setEnterLayer(TOD_Layer const&)
0820f833 +0x3907:  lea    -0x246(%ebp),%eax
0820f839 +0x390d:  mov    -0xe4(%ebp),%edx
0820f83f +0x3913:  mov    %edx,0x4(%esp)
0820f843 +0x3917:  mov    %eax,(%esp)
0820f846 +0x391a:  call   0864383e <_ZNK13TOD_UserState18getTodayEnterLayerEv>  ; TOD_UserState::getTodayEnterLayer() const
0820f84b +0x391f:  sub    $0x4,%esp
0820f84e +0x3922:  lea    -0x246(%ebp),%eax
0820f854 +0x3928:  mov    %eax,(%esp)
0820f857 +0x392b:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
0820f85c +0x3930:  movzwl %ax,%eax
0820f85f +0x3933:  mov    %eax,0x8(%esp)
0820f863 +0x3937:  movl   $"set Enter Layer : %d",0x4(%esp)
0820f86b +0x393f:  lea    -0x668(%ebp),%eax
0820f871 +0x3945:  mov    %eax,(%esp)
0820f874 +0x3948:  call   0807e440 <_init+0xd38>
0820f879 +0x394d:  lea    -0x668(%ebp),%eax
0820f87f +0x3953:  mov    %eax,0x4(%esp)
0820f883 +0x3957:  mov    0xc(%ebp),%eax
0820f886 +0x395a:  mov    %eax,(%esp)
0820f889 +0x395d:  call   08644366 <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc>  ; TowerOfDespairMgr::SendMessageToCUser(CUser*, char*)
0820f88e +0x3962:  jmp    08213440 <+0x7514>
0820f893 +0x3967:  movl   $0x0,0x4(%esp)
0820f89b +0x396f:  mov    0x14(%ebp),%eax
0820f89e +0x3972:  mov    %eax,(%esp)
0820f8a1 +0x3975:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f8a6 +0x397a:  mov    %eax,0x4(%esp)
0820f8aa +0x397e:  movl   $"wjfakd2",(%esp)
0820f8b1 +0x3985:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820f8b6 +0x398a:  test   %al,%al
0820f8b8 +0x398c:  je     0820fac0 <+0x3b94>
0820f8be +0x3992:  movl   $0x1,0x4(%esp)
0820f8c6 +0x399a:  mov    0x14(%ebp),%eax
0820f8c9 +0x399d:  mov    %eax,(%esp)
0820f8cc +0x39a0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f8d1 +0x39a5:  mov    %eax,0x4(%esp)
0820f8d5 +0x39a9:  movl   $"reload",(%esp)
0820f8dc +0x39b0:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820f8e1 +0x39b5:  test   %al,%al
0820f8e3 +0x39b7:  je     0820f9ab <+0x3a7f>
0820f8e9 +0x39bd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0820f8ee +0x39c2:  movl   $0xb719,0x8(%esp)
0820f8f6 +0x39ca:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
0820f8fe +0x39d2:  mov    %eax,(%esp)
0820f901 +0x39d5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0820f906 +0x39da:  movl   $0x1,0x8(%esp)
0820f90e +0x39e2:  mov    %eax,0x4(%esp)
0820f912 +0x39e6:  lea    -0x2c8(%ebp),%eax
0820f918 +0x39ec:  mov    %eax,(%esp)
0820f91b +0x39ef:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0820f920 +0x39f4:  lea    -0x2c8(%ebp),%eax
0820f926 +0x39fa:  mov    %eax,(%esp)
0820f929 +0x39fd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0820f92e +0x3a02:  movl   $0x277,0x4(%esp)
0820f936 +0x3a0a:  mov    %eax,(%esp)
0820f939 +0x3a0d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0820f93e +0x3a12:  lea    -0x2c8(%ebp),%eax
0820f944 +0x3a18:  mov    %eax,(%esp)
0820f947 +0x3a1b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0820f94c +0x3a20:  movl   $0xffffffff,0x4(%esp)
0820f954 +0x3a28:  mov    %eax,(%esp)
0820f957 +0x3a2b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0820f95c +0x3a30:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0820f961 +0x3a35:  lea    -0x2c8(%ebp),%edx
0820f967 +0x3a3b:  mov    %edx,0x8(%esp)
0820f96b +0x3a3f:  movl   $0x2,0x4(%esp)
0820f973 +0x3a47:  mov    %eax,(%esp)
0820f976 +0x3a4a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0820f97b +0x3a4f:  jmp    0820f998 <+0x3a6c>
0820f97d +0x3a51:  mov    %edx,%ebx
0820f97f +0x3a53:  mov    %eax,%esi
0820f981 +0x3a55:  lea    -0x2c8(%ebp),%eax
0820f987 +0x3a5b:  mov    %eax,(%esp)
0820f98a +0x3a5e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0820f98f +0x3a63:  mov    %esi,%eax
0820f991 +0x3a65:  mov    %ebx,%edx
0820f993 +0x3a67:  jmp    08213447 <+0x751b>
0820f998 +0x3a6c:  lea    -0x2c8(%ebp),%eax
0820f99e +0x3a72:  mov    %eax,(%esp)
0820f9a1 +0x3a75:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0820f9a6 +0x3a7a:  jmp    08213440 <+0x7514>
0820f9ab +0x3a7f:  movl   $0x1,0x4(%esp)
0820f9b3 +0x3a87:  mov    0x14(%ebp),%eax
0820f9b6 +0x3a8a:  mov    %eax,(%esp)
0820f9b9 +0x3a8d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820f9be +0x3a92:  mov    %eax,0x4(%esp)
0820f9c2 +0x3a96:  movl   $"randomselect",(%esp)
0820f9c9 +0x3a9d:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820f9ce +0x3aa2:  test   %al,%al
0820f9d0 +0x3aa4:  je     0820fa98 <+0x3b6c>
0820f9d6 +0x3aaa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0820f9db +0x3aaf:  movl   $0xb720,0x8(%esp)
0820f9e3 +0x3ab7:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
0820f9eb +0x3abf:  mov    %eax,(%esp)
0820f9ee +0x3ac2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0820f9f3 +0x3ac7:  movl   $0x1,0x8(%esp)
0820f9fb +0x3acf:  mov    %eax,0x4(%esp)
0820f9ff +0x3ad3:  lea    -0x2d0(%ebp),%eax
0820fa05 +0x3ad9:  mov    %eax,(%esp)
0820fa08 +0x3adc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0820fa0d +0x3ae1:  lea    -0x2d0(%ebp),%eax
0820fa13 +0x3ae7:  mov    %eax,(%esp)
0820fa16 +0x3aea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0820fa1b +0x3aef:  movl   $0x275,0x4(%esp)
0820fa23 +0x3af7:  mov    %eax,(%esp)
0820fa26 +0x3afa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0820fa2b +0x3aff:  lea    -0x2d0(%ebp),%eax
0820fa31 +0x3b05:  mov    %eax,(%esp)
0820fa34 +0x3b08:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0820fa39 +0x3b0d:  movl   $0xffffffff,0x4(%esp)
0820fa41 +0x3b15:  mov    %eax,(%esp)
0820fa44 +0x3b18:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0820fa49 +0x3b1d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0820fa4e +0x3b22:  lea    -0x2d0(%ebp),%edx
0820fa54 +0x3b28:  mov    %edx,0x8(%esp)
0820fa58 +0x3b2c:  movl   $0x2,0x4(%esp)
0820fa60 +0x3b34:  mov    %eax,(%esp)
0820fa63 +0x3b37:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0820fa68 +0x3b3c:  jmp    0820fa85 <+0x3b59>
0820fa6a +0x3b3e:  mov    %edx,%ebx
0820fa6c +0x3b40:  mov    %eax,%esi
0820fa6e +0x3b42:  lea    -0x2d0(%ebp),%eax
0820fa74 +0x3b48:  mov    %eax,(%esp)
0820fa77 +0x3b4b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0820fa7c +0x3b50:  mov    %esi,%eax
0820fa7e +0x3b52:  mov    %ebx,%edx
0820fa80 +0x3b54:  jmp    08213447 <+0x751b>
0820fa85 +0x3b59:  lea    -0x2d0(%ebp),%eax
0820fa8b +0x3b5f:  mov    %eax,(%esp)
0820fa8e +0x3b62:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0820fa93 +0x3b67:  jmp    08213440 <+0x7514>
0820fa98 +0x3b6c:  movl   $0x1,0x4(%esp)
0820faa0 +0x3b74:  mov    0x14(%ebp),%eax
0820faa3 +0x3b77:  mov    %eax,(%esp)
0820faa6 +0x3b7a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820faab +0x3b7f:  mov    %eax,0x4(%esp)
0820faaf +0x3b83:  movl   $"layerinfo",(%esp)
0820fab6 +0x3b8a:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fabb +0x3b8f:  jmp    08213440 <+0x7514>
0820fac0 +0x3b94:  movl   $0x0,0x4(%esp)
0820fac8 +0x3b9c:  mov    0x14(%ebp),%eax
0820facb +0x3b9f:  mov    %eax,(%esp)
0820face +0x3ba2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fad3 +0x3ba7:  mov    %eax,0x4(%esp)
0820fad7 +0x3bab:  movl   $"mission",(%esp)
0820fade +0x3bb2:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fae3 +0x3bb7:  test   %al,%al
0820fae5 +0x3bb9:  je     0820fb52 <+0x3c26>
0820fae7 +0x3bbb:  movl   $0x2,0x4(%esp)
0820faef +0x3bc3:  mov    0x14(%ebp),%eax
0820faf2 +0x3bc6:  mov    %eax,(%esp)
0820faf5 +0x3bc9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fafa +0x3bce:  mov    %eax,(%esp)
0820fafd +0x3bd1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fb02 +0x3bd6:  mov    %eax,(%esp)
0820fb05 +0x3bd9:  call   0807e6f0 <_init+0xfe8>
0820fb0a +0x3bde:  mov    %eax,%ebx
0820fb0c +0x3be0:  movl   $0x1,0x4(%esp)
0820fb14 +0x3be8:  mov    0x14(%ebp),%eax
0820fb17 +0x3beb:  mov    %eax,(%esp)
0820fb1a +0x3bee:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fb1f +0x3bf3:  mov    %eax,(%esp)
0820fb22 +0x3bf6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fb27 +0x3bfb:  mov    %eax,(%esp)
0820fb2a +0x3bfe:  call   0807e6f0 <_init+0xfe8>
0820fb2f +0x3c03:  mov    %ebx,0x8(%esp)
0820fb33 +0x3c07:  mov    %eax,0x4(%esp)
0820fb37 +0x3c0b:  mov    0xc(%ebp),%eax
0820fb3a +0x3c0e:  mov    %eax,(%esp)
0820fb3d +0x3c11:  call   08662558 <_ZN5CUser19SetMissionParameterEii>  ; CUser::SetMissionParameter(int, int)
0820fb42 +0x3c16:  mov    0xc(%ebp),%eax
0820fb45 +0x3c19:  mov    %eax,(%esp)
0820fb48 +0x3c1c:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
0820fb4d +0x3c21:  jmp    08213440 <+0x7514>
0820fb52 +0x3c26:  movl   $0x0,0x4(%esp)
0820fb5a +0x3c2e:  mov    0x14(%ebp),%eax
0820fb5d +0x3c31:  mov    %eax,(%esp)
0820fb60 +0x3c34:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fb65 +0x3c39:  mov    %eax,0x4(%esp)
0820fb69 +0x3c3d:  movl   $"newdailymission",(%esp)
0820fb70 +0x3c44:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fb75 +0x3c49:  test   %al,%al
0820fb77 +0x3c4b:  je     0820fb94 <+0x3c68>
0820fb79 +0x3c4d:  mov    0xc(%ebp),%eax
0820fb7c +0x3c50:  mov    %eax,(%esp)
0820fb7f +0x3c53:  call   0866259e <_ZN5CUser17ResetDailyMissionEv>  ; CUser::ResetDailyMission()
0820fb84 +0x3c58:  mov    0xc(%ebp),%eax
0820fb87 +0x3c5b:  mov    %eax,(%esp)
0820fb8a +0x3c5e:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
0820fb8f +0x3c63:  jmp    08213440 <+0x7514>
0820fb94 +0x3c68:  movl   $0x0,0x4(%esp)
0820fb9c +0x3c70:  mov    0x14(%ebp),%eax
0820fb9f +0x3c73:  mov    %eax,(%esp)
0820fba2 +0x3c76:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fba7 +0x3c7b:  mov    %eax,0x4(%esp)
0820fbab +0x3c7f:  movl   $"clearmission",(%esp)
0820fbb2 +0x3c86:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fbb7 +0x3c8b:  test   %al,%al
0820fbb9 +0x3c8d:  je     0820fc09 <+0x3cdd>
0820fbbb +0x3c8f:  movl   $0x1,0x4(%esp)
0820fbc3 +0x3c97:  mov    0x14(%ebp),%eax
0820fbc6 +0x3c9a:  mov    %eax,(%esp)
0820fbc9 +0x3c9d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fbce +0x3ca2:  mov    %eax,(%esp)
0820fbd1 +0x3ca5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fbd6 +0x3caa:  mov    %eax,(%esp)
0820fbd9 +0x3cad:  call   0807e6f0 <_init+0xfe8>
0820fbde +0x3cb2:  cwtl
0820fbdf +0x3cb3:  mov    %eax,0x4(%esp)
0820fbe3 +0x3cb7:  mov    0xc(%ebp),%eax
0820fbe6 +0x3cba:  mov    %eax,(%esp)
0820fbe9 +0x3cbd:  call   08662606 <_ZN5CUser12ClearMissionEs>  ; CUser::ClearMission(short)
0820fbee +0x3cc2:  mov    0xc(%ebp),%eax
0820fbf1 +0x3cc5:  mov    %eax,(%esp)
0820fbf4 +0x3cc8:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
0820fbf9 +0x3ccd:  mov    0xc(%ebp),%eax
0820fbfc +0x3cd0:  mov    %eax,(%esp)
0820fbff +0x3cd3:  call   0865cd52 <_ZN5CUser15send_pvp_recordEv>  ; CUser::send_pvp_record()
0820fc04 +0x3cd8:  jmp    08213440 <+0x7514>
0820fc09 +0x3cdd:  movl   $0x0,0x4(%esp)
0820fc11 +0x3ce5:  mov    0x14(%ebp),%eax
0820fc14 +0x3ce8:  mov    %eax,(%esp)
0820fc17 +0x3ceb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fc1c +0x3cf0:  mov    %eax,0x4(%esp)
0820fc20 +0x3cf4:  movl   $"clearmissionkind",(%esp)
0820fc27 +0x3cfb:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fc2c +0x3d00:  test   %al,%al
0820fc2e +0x3d02:  je     0820fc7e <+0x3d52>
0820fc30 +0x3d04:  movl   $0x1,0x4(%esp)
0820fc38 +0x3d0c:  mov    0x14(%ebp),%eax
0820fc3b +0x3d0f:  mov    %eax,(%esp)
0820fc3e +0x3d12:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fc43 +0x3d17:  mov    %eax,(%esp)
0820fc46 +0x3d1a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fc4b +0x3d1f:  mov    %eax,(%esp)
0820fc4e +0x3d22:  call   0807e6f0 <_init+0xfe8>
0820fc53 +0x3d27:  cwtl
0820fc54 +0x3d28:  mov    %eax,0x4(%esp)
0820fc58 +0x3d2c:  mov    0xc(%ebp),%eax
0820fc5b +0x3d2f:  mov    %eax,(%esp)
0820fc5e +0x3d32:  call   086626a0 <_ZN5CUser16ClearMissionKindEs>  ; CUser::ClearMissionKind(short)
0820fc63 +0x3d37:  mov    0xc(%ebp),%eax
0820fc66 +0x3d3a:  mov    %eax,(%esp)
0820fc69 +0x3d3d:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
0820fc6e +0x3d42:  mov    0xc(%ebp),%eax
0820fc71 +0x3d45:  mov    %eax,(%esp)
0820fc74 +0x3d48:  call   0865cd52 <_ZN5CUser15send_pvp_recordEv>  ; CUser::send_pvp_record()
0820fc79 +0x3d4d:  jmp    08213440 <+0x7514>
0820fc7e +0x3d52:  movl   $0x0,0x4(%esp)
0820fc86 +0x3d5a:  mov    0x14(%ebp),%eax
0820fc89 +0x3d5d:  mov    %eax,(%esp)
0820fc8c +0x3d60:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fc91 +0x3d65:  mov    %eax,0x4(%esp)
0820fc95 +0x3d69:  movl   $"resetmissionlist",(%esp)
0820fc9c +0x3d70:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fca1 +0x3d75:  test   %al,%al
0820fca3 +0x3d77:  je     0820fcc0 <+0x3d94>
0820fca5 +0x3d79:  mov    0xc(%ebp),%eax
0820fca8 +0x3d7c:  mov    %eax,(%esp)
0820fcab +0x3d7f:  call   0866265a <_ZN5CUser16ResetMissionListEv>  ; CUser::ResetMissionList()
0820fcb0 +0x3d84:  mov    0xc(%ebp),%eax
0820fcb3 +0x3d87:  mov    %eax,(%esp)
0820fcb6 +0x3d8a:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
0820fcbb +0x3d8f:  jmp    08213440 <+0x7514>
0820fcc0 +0x3d94:  movl   $0x0,0x4(%esp)
0820fcc8 +0x3d9c:  mov    0x14(%ebp),%eax
0820fccb +0x3d9f:  mov    %eax,(%esp)
0820fcce +0x3da2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fcd3 +0x3da7:  mov    %eax,0x4(%esp)
0820fcd7 +0x3dab:  movl   $"resetdaily",(%esp)
0820fcde +0x3db2:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fce3 +0x3db7:  test   %al,%al
0820fce5 +0x3db9:  je     0820fd13 <+0x3de7>
0820fce7 +0x3dbb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0820fcec +0x3dc0:  mov    %eax,(%esp)
0820fcef +0x3dc3:  call   086cc3ec <_ZN9GameWorld15ResetAllFatigueEv>  ; GameWorld::ResetAllFatigue()
0820fcf4 +0x3dc8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0820fcf9 +0x3dcd:  mov    %eax,(%esp)
0820fcfc +0x3dd0:  call   086cd010 <_ZN9GameWorld18ReselectDailyQuestEv>  ; GameWorld::ReselectDailyQuest()
0820fd01 +0x3dd5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0820fd06 +0x3dda:  mov    %eax,(%esp)
0820fd09 +0x3ddd:  call   086ccdce <_ZN9GameWorld12AddDailyItemEv>  ; GameWorld::AddDailyItem()
0820fd0e +0x3de2:  jmp    08213440 <+0x7514>
0820fd13 +0x3de7:  movl   $0x0,0x4(%esp)
0820fd1b +0x3def:  mov    0x14(%ebp),%eax
0820fd1e +0x3df2:  mov    %eax,(%esp)
0820fd21 +0x3df5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fd26 +0x3dfa:  mov    %eax,0x4(%esp)
0820fd2a +0x3dfe:  movl   $"combomission",(%esp)
0820fd31 +0x3e05:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fd36 +0x3e0a:  test   %al,%al
0820fd38 +0x3e0c:  je     0820fdac <+0x3e80>
0820fd3a +0x3e0e:  movl   $0x1,0x4(%esp)
0820fd42 +0x3e16:  mov    0x14(%ebp),%eax
0820fd45 +0x3e19:  mov    %eax,(%esp)
0820fd48 +0x3e1c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fd4d +0x3e21:  mov    %eax,(%esp)
0820fd50 +0x3e24:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fd55 +0x3e29:  mov    %eax,(%esp)
0820fd58 +0x3e2c:  call   0807e6f0 <_init+0xfe8>
0820fd5d +0x3e31:  mov    %ax,-0xe0(%ebp)
0820fd64 +0x3e38:  mov    0xc(%ebp),%eax
0820fd67 +0x3e3b:  mov    %eax,(%esp)
0820fd6a +0x3e3e:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0820fd6f +0x3e43:  test   %al,%al
0820fd71 +0x3e45:  jne    0820fd7a <+0x3e4e>
0820fd73 +0x3e47:  mov    $0x1f,%eax
0820fd78 +0x3e4c:  jmp    0820fd7f <+0x3e53>
0820fd7a +0x3e4e:  mov    $0x20,%eax
0820fd7f +0x3e53:  mov    %ax,-0xde(%ebp)
0820fd86 +0x3e5a:  movswl -0xe0(%ebp),%edx
0820fd8d +0x3e61:  movswl -0xde(%ebp),%eax
0820fd94 +0x3e68:  mov    %edx,0x8(%esp)
0820fd98 +0x3e6c:  mov    %eax,0x4(%esp)
0820fd9c +0x3e70:  mov    0xc(%ebp),%eax
0820fd9f +0x3e73:  mov    %eax,(%esp)
0820fda2 +0x3e76:  call   0866280a <_ZN5CUser19Update_ComboMissionEis>  ; CUser::Update_ComboMission(int, short)
0820fda7 +0x3e7b:  jmp    08213440 <+0x7514>
0820fdac +0x3e80:  movl   $0x0,0x4(%esp)
0820fdb4 +0x3e88:  mov    0x14(%ebp),%eax
0820fdb7 +0x3e8b:  mov    %eax,(%esp)
0820fdba +0x3e8e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fdbf +0x3e93:  mov    %eax,0x4(%esp)
0820fdc3 +0x3e97:  movl   $"roiregen",(%esp)
0820fdca +0x3e9e:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
0820fdcf +0x3ea3:  test   %al,%al
0820fdd1 +0x3ea5:  jne    08213440 <+0x7514>
0820fdd7 +0x3eab:  movl   $0x0,0x4(%esp)
0820fddf +0x3eb3:  mov    0x14(%ebp),%eax
0820fde2 +0x3eb6:  mov    %eax,(%esp)
0820fde5 +0x3eb9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fdea +0x3ebe:  movl   $"qp",0x4(%esp)
0820fdf2 +0x3ec6:  mov    %eax,(%esp)
0820fdf5 +0x3ec9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820fdfa +0x3ece:  test   %al,%al
0820fdfc +0x3ed0:  je     0820fe41 <+0x3f15>
0820fdfe +0x3ed2:  movl   $0x1,0x4(%esp)
0820fe06 +0x3eda:  mov    0x14(%ebp),%eax
0820fe09 +0x3edd:  mov    %eax,(%esp)
0820fe0c +0x3ee0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fe11 +0x3ee5:  mov    %eax,(%esp)
0820fe14 +0x3ee8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fe19 +0x3eed:  mov    %eax,(%esp)
0820fe1c +0x3ef0:  call   0807e6f0 <_init+0xfe8>
0820fe21 +0x3ef5:  mov    %eax,-0xdc(%ebp)
0820fe27 +0x3efb:  mov    -0xdc(%ebp),%eax
0820fe2d +0x3f01:  mov    %eax,0x4(%esp)
0820fe31 +0x3f05:  mov    0xc(%ebp),%eax
0820fe34 +0x3f08:  mov    %eax,(%esp)
0820fe37 +0x3f0b:  call   0868acfe <_ZN5CUser13setQuestPointEi>  ; CUser::setQuestPoint(int)
0820fe3c +0x3f10:  jmp    08213440 <+0x7514>
0820fe41 +0x3f15:  movl   $0x0,0x4(%esp)
0820fe49 +0x3f1d:  mov    0x14(%ebp),%eax
0820fe4c +0x3f20:  mov    %eax,(%esp)
0820fe4f +0x3f23:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fe54 +0x3f28:  movl   $"registauction",0x4(%esp)
0820fe5c +0x3f30:  mov    %eax,(%esp)
0820fe5f +0x3f33:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820fe64 +0x3f38:  test   %al,%al
0820fe66 +0x3f3a:  je     0820fe90 <+0x3f64>
0820fe68 +0x3f3c:  lea    -0x2d8(%ebp),%eax
0820fe6e +0x3f42:  mov    %eax,(%esp)
0820fe71 +0x3f45:  call   0822cb70 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x221a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x221a
0820fe76 +0x3f4a:  mov    0xc(%ebp),%eax
0820fe79 +0x3f4d:  mov    %eax,0x4(%esp)
0820fe7d +0x3f51:  lea    -0x2d8(%ebp),%eax
0820fe83 +0x3f57:  mov    %eax,(%esp)
0820fe86 +0x3f5a:  call   085f3f94 <_ZN13random_option27CRandomOptionItemHandleTest19test_regist_auctionEP5CUser>  ; random_option::CRandomOptionItemHandleTest::test_regist_auction(CUser*)
0820fe8b +0x3f5f:  jmp    08213440 <+0x7514>
0820fe90 +0x3f64:  movl   $0x0,0x4(%esp)
0820fe98 +0x3f6c:  mov    0x14(%ebp),%eax
0820fe9b +0x3f6f:  mov    %eax,(%esp)
0820fe9e +0x3f72:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fea3 +0x3f77:  movl   $"burningstage",0x4(%esp)
0820feab +0x3f7f:  mov    %eax,(%esp)
0820feae +0x3f82:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820feb3 +0x3f87:  test   %al,%al
0820feb5 +0x3f89:  je     0820ff44 <+0x4018>
0820febb +0x3f8f:  movl   $0x1,0x4(%esp)
0820fec3 +0x3f97:  mov    0x14(%ebp),%eax
0820fec6 +0x3f9a:  mov    %eax,(%esp)
0820fec9 +0x3f9d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820fece +0x3fa2:  mov    %eax,(%esp)
0820fed1 +0x3fa5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820fed6 +0x3faa:  mov    %eax,(%esp)
0820fed9 +0x3fad:  call   0807e6f0 <_init+0xfe8>
0820fede +0x3fb2:  mov    %eax,-0xd8(%ebp)
0820fee4 +0x3fb8:  mov    -0xd8(%ebp),%ebx
0820feea +0x3fbe:  movl   $0x7,0x4(%esp)
0820fef2 +0x3fc6:  mov    0xc(%ebp),%eax
0820fef5 +0x3fc9:  mov    %eax,(%esp)
0820fef8 +0x3fcc:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0820fefd +0x3fd1:  mov    %ebx,0x4(%esp)
0820ff01 +0x3fd5:  mov    %eax,(%esp)
0820ff04 +0x3fd8:  call   08234fae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa658>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa658
0820ff09 +0x3fdd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0820ff0e +0x3fe2:  movzwl 0x49e0(%eax),%eax
0820ff15 +0x3fe9:  movzwl %ax,%eax
0820ff18 +0x3fec:  sub    -0xd8(%ebp),%eax
0820ff1e +0x3ff2:  mov    %eax,%ebx
0820ff20 +0x3ff4:  movl   $0x7,0x4(%esp)
0820ff28 +0x3ffc:  mov    0xc(%ebp),%eax
0820ff2b +0x3fff:  mov    %eax,(%esp)
0820ff2e +0x4002:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0820ff33 +0x4007:  mov    %ebx,0x4(%esp)
0820ff37 +0x400b:  mov    %eax,(%esp)
0820ff3a +0x400e:  call   08234f92 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa63c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa63c
0820ff3f +0x4013:  jmp    08213440 <+0x7514>
0820ff44 +0x4018:  movl   $0x0,0x4(%esp)
0820ff4c +0x4020:  mov    0x14(%ebp),%eax
0820ff4f +0x4023:  mov    %eax,(%esp)
0820ff52 +0x4026:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ff57 +0x402b:  movl   $"randitem",0x4(%esp)
0820ff5f +0x4033:  mov    %eax,(%esp)
0820ff62 +0x4036:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ff67 +0x403b:  test   %al,%al
0820ff69 +0x403d:  je     082102a2 <+0x4376>
0820ff6f +0x4043:  movl   $0x1,0x4(%esp)
0820ff77 +0x404b:  mov    0x14(%ebp),%eax
0820ff7a +0x404e:  mov    %eax,(%esp)
0820ff7d +0x4051:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ff82 +0x4056:  movl   $"",0x4(%esp)
0820ff8a +0x405e:  mov    %eax,(%esp)
0820ff8d +0x4061:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0820ff92 +0x4066:  test   %al,%al
0820ff94 +0x4068:  je     0820ffa0 <+0x4074>
0820ff96 +0x406a:  mov    $0x0,%ebx
0820ff9b +0x406f:  jmp    0821345f <+0x7533>
0820ffa0 +0x4074:  movl   $0x1,0x4(%esp)
0820ffa8 +0x407c:  mov    0x14(%ebp),%eax
0820ffab +0x407f:  mov    %eax,(%esp)
0820ffae +0x4082:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820ffb3 +0x4087:  mov    %eax,(%esp)
0820ffb6 +0x408a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0820ffbb +0x408f:  mov    %eax,(%esp)
0820ffbe +0x4092:  call   0807e6f0 <_init+0xfe8>
0820ffc3 +0x4097:  mov    %eax,-0xd4(%ebp)
0820ffc9 +0x409d:  lea    -0x4d1(%ebp),%eax
0820ffcf +0x40a3:  mov    %eax,(%esp)
0820ffd2 +0x40a6:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0820ffd7 +0x40ab:  mov    -0xd4(%ebp),%eax
0820ffdd +0x40b1:  mov    %eax,-0x4cf(%ebp)
0820ffe3 +0x40b7:  mov    -0x4cf(%ebp),%eax
0820ffe9 +0x40bd:  mov    %eax,%ebx
0820ffeb +0x40bf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0820fff0 +0x40c4:  mov    %ebx,0x4(%esp)
0820fff4 +0x40c8:  mov    %eax,(%esp)
0820fff7 +0x40cb:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0820fffc +0x40d0:  mov    %eax,-0xd0(%ebp)
08210002 +0x40d6:  cmpl   $0x0,-0xd0(%ebp)
08210009 +0x40dd:  jne    08210015 <+0x40e9>
0821000b +0x40df:  mov    $0x0,%ebx
08210010 +0x40e4:  jmp    0821345f <+0x7533>
08210015 +0x40e9:  mov    -0xd0(%ebp),%eax
0821001b +0x40ef:  mov    (%eax),%eax
0821001d +0x40f1:  add    $0x8,%eax
08210020 +0x40f4:  mov    (%eax),%edx
08210022 +0x40f6:  lea    -0x4d1(%ebp),%eax
08210028 +0x40fc:  mov    %eax,0x4(%esp)
0821002c +0x4100:  mov    -0xd0(%ebp),%eax
08210032 +0x4106:  mov    %eax,(%esp)
08210035 +0x4109:  call   *%edx
08210037 +0x410b:  movl   $0x2,-0xcc(%ebp)
08210041 +0x4115:  movl   $0x0,-0xc4(%ebp)
0821004b +0x411f:  jmp    08210181 <+0x4255>
08210050 +0x4124:  mov    -0xcc(%ebp),%eax
08210056 +0x412a:  mov    %eax,0x4(%esp)
0821005a +0x412e:  mov    0x14(%ebp),%eax
0821005d +0x4131:  mov    %eax,(%esp)
08210060 +0x4134:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210065 +0x4139:  movl   $"",0x4(%esp)
0821006d +0x4141:  mov    %eax,(%esp)
08210070 +0x4144:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08210075 +0x4149:  test   %al,%al
08210077 +0x414b:  jne    08210195 <+0x4269>
0821007d +0x4151:  mov    -0xcc(%ebp),%eax
08210083 +0x4157:  add    $0x1,%eax
08210086 +0x415a:  mov    %eax,0x4(%esp)
0821008a +0x415e:  mov    0x14(%ebp),%eax
0821008d +0x4161:  mov    %eax,(%esp)
08210090 +0x4164:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210095 +0x4169:  movl   $"",0x4(%esp)
0821009d +0x4171:  mov    %eax,(%esp)
082100a0 +0x4174:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082100a5 +0x4179:  test   %al,%al
082100a7 +0x417b:  jne    08210198 <+0x426c>
082100ad +0x4181:  mov    -0xc4(%ebp),%ebx
082100b3 +0x4187:  mov    -0xcc(%ebp),%eax
082100b9 +0x418d:  mov    %eax,0x4(%esp)
082100bd +0x4191:  mov    0x14(%ebp),%eax
082100c0 +0x4194:  mov    %eax,(%esp)
082100c3 +0x4197:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082100c8 +0x419c:  mov    %eax,(%esp)
082100cb +0x419f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082100d0 +0x41a4:  mov    %eax,(%esp)
082100d3 +0x41a7:  call   0807e6f0 <_init+0xfe8>
082100d8 +0x41ac:  mov    %eax,%edx
082100da +0x41ae:  mov    %ebx,%eax
082100dc +0x41b0:  add    %eax,%eax
082100de +0x41b2:  add    %ebx,%eax
082100e0 +0x41b4:  lea    -0x18(%ebp),%ecx
082100e3 +0x41b7:  lea    (%ecx,%eax,1),%eax
082100e6 +0x41ba:  sub    $0x494,%eax
082100eb +0x41bf:  mov    %dl,(%eax)
082100ed +0x41c1:  mov    -0xc4(%ebp),%ebx
082100f3 +0x41c7:  mov    -0xcc(%ebp),%eax
082100f9 +0x41cd:  add    $0x1,%eax
082100fc +0x41d0:  mov    %eax,0x4(%esp)
08210100 +0x41d4:  mov    0x14(%ebp),%eax
08210103 +0x41d7:  mov    %eax,(%esp)
08210106 +0x41da:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821010b +0x41df:  mov    %eax,(%esp)
0821010e +0x41e2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08210113 +0x41e7:  mov    %eax,(%esp)
08210116 +0x41ea:  call   0807e6f0 <_init+0xfe8>
0821011b +0x41ef:  mov    %eax,%edx
0821011d +0x41f1:  mov    %ebx,%eax
0821011f +0x41f3:  add    %eax,%eax
08210121 +0x41f5:  add    %ebx,%eax
08210123 +0x41f7:  lea    -0x18(%ebp),%edi
08210126 +0x41fa:  lea    (%edi,%eax,1),%eax
08210129 +0x41fd:  sub    $0x493,%eax
0821012e +0x4202:  mov    %dl,(%eax)
08210130 +0x4204:  mov    -0xc4(%ebp),%ebx
08210136 +0x420a:  mov    -0xcc(%ebp),%eax
0821013c +0x4210:  add    $0x1,%eax
0821013f +0x4213:  mov    %eax,0x4(%esp)
08210143 +0x4217:  mov    0x14(%ebp),%eax
08210146 +0x421a:  mov    %eax,(%esp)
08210149 +0x421d:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821014e +0x4222:  mov    %eax,(%esp)
08210151 +0x4225:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08210156 +0x422a:  mov    %eax,(%esp)
08210159 +0x422d:  call   0807e6f0 <_init+0xfe8>
0821015e +0x4232:  mov    %eax,%edx
08210160 +0x4234:  mov    %ebx,%eax
08210162 +0x4236:  add    %eax,%eax
08210164 +0x4238:  add    %ebx,%eax
08210166 +0x423a:  lea    -0x18(%ebp),%ecx
08210169 +0x423d:  lea    (%ecx,%eax,1),%eax
0821016c +0x4240:  sub    $0x492,%eax
08210171 +0x4245:  mov    %dl,(%eax)
08210173 +0x4247:  addl   $0x2,-0xcc(%ebp)
0821017a +0x424e:  addl   $0x1,-0xc4(%ebp)
08210181 +0x4255:  cmpl   $0x2,-0xc4(%ebp)
08210188 +0x425c:  setle  %al
0821018b +0x425f:  test   %al,%al
0821018d +0x4261:  jne    08210050 <+0x4124>
08210193 +0x4267:  jmp    08210199 <+0x426d>
08210195 +0x4269:  nop
08210196 +0x426a:  jmp    08210199 <+0x426d>
08210198 +0x426c:  nop
08210199 +0x426d:  mov    0xc(%ebp),%eax
0821019c +0x4270:  mov    %eax,(%esp)
0821019f +0x4273:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082101a4 +0x4278:  movl   $0x1,0x4c(%esp)
082101ac +0x4280:  movl   $0x1,0x48(%esp)
082101b4 +0x4288:  movl   $0x6,0x44(%esp)
082101bc +0x4290:  mov    -0x4d1(%ebp),%edx
082101c2 +0x4296:  mov    %edx,0x4(%esp)
082101c6 +0x429a:  mov    -0x4cd(%ebp),%edx
082101cc +0x42a0:  mov    %edx,0x8(%esp)
082101d0 +0x42a4:  mov    -0x4c9(%ebp),%edx
082101d6 +0x42aa:  mov    %edx,0xc(%esp)
082101da +0x42ae:  mov    -0x4c5(%ebp),%edx
082101e0 +0x42b4:  mov    %edx,0x10(%esp)
082101e4 +0x42b8:  mov    -0x4c1(%ebp),%edx
082101ea +0x42be:  mov    %edx,0x14(%esp)
082101ee +0x42c2:  mov    -0x4bd(%ebp),%edx
082101f4 +0x42c8:  mov    %edx,0x18(%esp)
082101f8 +0x42cc:  mov    -0x4b9(%ebp),%edx
082101fe +0x42d2:  mov    %edx,0x1c(%esp)
08210202 +0x42d6:  mov    -0x4b5(%ebp),%edx
08210208 +0x42dc:  mov    %edx,0x20(%esp)
0821020c +0x42e0:  mov    -0x4b1(%ebp),%edx
08210212 +0x42e6:  mov    %edx,0x24(%esp)
08210216 +0x42ea:  mov    -0x4ad(%ebp),%edx
0821021c +0x42f0:  mov    %edx,0x28(%esp)
08210220 +0x42f4:  mov    -0x4a9(%ebp),%edx
08210226 +0x42fa:  mov    %edx,0x2c(%esp)
0821022a +0x42fe:  mov    -0x4a5(%ebp),%edx
08210230 +0x4304:  mov    %edx,0x30(%esp)
08210234 +0x4308:  mov    -0x4a1(%ebp),%edx
0821023a +0x430e:  mov    %edx,0x34(%esp)
0821023e +0x4312:  mov    -0x49d(%ebp),%edx
08210244 +0x4318:  mov    %edx,0x38(%esp)
08210248 +0x431c:  mov    -0x499(%ebp),%edx
0821024e +0x4322:  mov    %edx,0x3c(%esp)
08210252 +0x4326:  movzbl -0x495(%ebp),%edx
08210259 +0x432d:  mov    %dl,0x40(%esp)
0821025d +0x4331:  mov    %eax,(%esp)
08210260 +0x4334:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08210265 +0x4339:  mov    %eax,-0xc8(%ebp)
0821026b +0x433f:  cmpl   $0x0,-0xc8(%ebp)
08210272 +0x4346:  js     08213440 <+0x7514>
08210278 +0x434c:  mov    -0xc8(%ebp),%eax
0821027e +0x4352:  mov    %eax,0xc(%esp)
08210282 +0x4356:  movl   $0x0,0x8(%esp)
0821028a +0x435e:  movl   $0x1,0x4(%esp)
08210292 +0x4366:  mov    0xc(%ebp),%eax
08210295 +0x4369:  mov    %eax,(%esp)
08210298 +0x436c:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0821029d +0x4371:  jmp    08213440 <+0x7514>
082102a2 +0x4376:  movl   $0x0,0x4(%esp)
082102aa +0x437e:  mov    0x14(%ebp),%eax
082102ad +0x4381:  mov    %eax,(%esp)
082102b0 +0x4384:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082102b5 +0x4389:  movl   $"insertitem",0x4(%esp)
082102bd +0x4391:  mov    %eax,(%esp)
082102c0 +0x4394:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082102c5 +0x4399:  test   %al,%al
082102c7 +0x439b:  je     0821080f <+0x48e3>
082102cd +0x43a1:  lea    -0x2dc(%ebp),%eax
082102d3 +0x43a7:  mov    %eax,(%esp)
082102d6 +0x43aa:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
082102db +0x43af:  movl   $0x1,-0xb0(%ebp)
082102e5 +0x43b9:  jmp    0821036b <+0x443f>
082102ea +0x43be:  mov    -0xb0(%ebp),%eax
082102f0 +0x43c4:  mov    %eax,0x4(%esp)
082102f4 +0x43c8:  mov    0x14(%ebp),%eax
082102f7 +0x43cb:  mov    %eax,(%esp)
082102fa +0x43ce:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082102ff +0x43d3:  mov    %eax,(%esp)
08210302 +0x43d6:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08210307 +0x43db:  test   %eax,%eax
08210309 +0x43dd:  sete   %al
0821030c +0x43e0:  test   %al,%al
0821030e +0x43e2:  jne    0821037f <+0x4453>
08210310 +0x43e4:  lea    -0x2dc(%ebp),%eax
08210316 +0x43ea:  mov    %eax,(%esp)
08210319 +0x43ed:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0821031e +0x43f2:  test   %eax,%eax
08210320 +0x43f4:  setne  %al
08210323 +0x43f7:  test   %al,%al
08210325 +0x43f9:  je     0821033d <+0x4411>
08210327 +0x43fb:  movl   $" ",0x4(%esp)
0821032f +0x4403:  lea    -0x2dc(%ebp),%eax
08210335 +0x4409:  mov    %eax,(%esp)
08210338 +0x440c:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0821033d +0x4411:  mov    -0xb0(%ebp),%eax
08210343 +0x4417:  mov    %eax,0x4(%esp)
08210347 +0x441b:  mov    0x14(%ebp),%eax
0821034a +0x441e:  mov    %eax,(%esp)
0821034d +0x4421:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210352 +0x4426:  mov    %eax,0x4(%esp)
08210356 +0x442a:  lea    -0x2dc(%ebp),%eax
0821035c +0x4430:  mov    %eax,(%esp)
0821035f +0x4433:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08210364 +0x4438:  addl   $0x1,-0xb0(%ebp)
0821036b +0x443f:  cmpl   $0x9,-0xb0(%ebp)
08210372 +0x4446:  setle  %al
08210375 +0x4449:  test   %al,%al
08210377 +0x444b:  jne    082102ea <+0x43be>
0821037d +0x4451:  jmp    08210380 <+0x4454>
0821037f +0x4453:  nop
08210380 +0x4454:  lea    -0x2dc(%ebp),%eax
08210386 +0x445a:  mov    %eax,(%esp)
08210389 +0x445d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821038e +0x4462:  mov    %eax,%esi
08210390 +0x4464:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08210395 +0x4469:  mov    %esi,0x4(%esp)
08210399 +0x446d:  mov    %eax,(%esp)
0821039c +0x4470:  call   0835fa68 <_ZNK12CDataManager9find_itemEPKc>  ; CDataManager::find_item(char const*) const
082103a1 +0x4475:  mov    %eax,-0xc0(%ebp)
082103a7 +0x447b:  cmpl   $0x0,-0xc0(%ebp)
082103ae +0x4482:  jne    0821051a <+0x45ee>
082103b4 +0x4488:  lea    -0x668(%ebp),%edx
082103ba +0x448e:  mov    $0x0,%eax
082103bf +0x4493:  mov    $0x3f,%ecx
082103c4 +0x4498:  mov    %edx,%edi
082103c6 +0x449a:  rep stos %eax,%es:(%edi)
082103c8 +0x449c:  mov    %edi,%edx
082103ca +0x449e:  mov    %ax,(%edx)
082103cd +0x44a1:  add    $0x2,%edx
082103d0 +0x44a4:  mov    %al,(%edx)
082103d2 +0x44a6:  add    $0x1,%edx
082103d5 +0x44a9:  lea    -0x2dc(%ebp),%eax
082103db +0x44af:  mov    %eax,(%esp)
082103de +0x44b2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082103e3 +0x44b7:  mov    %eax,0x8(%esp)
082103e7 +0x44bb:  movl   $"cannot find item (%s) ",0x4(%esp)
082103ef +0x44c3:  lea    -0x668(%ebp),%eax
082103f5 +0x44c9:  mov    %eax,(%esp)
082103f8 +0x44cc:  call   0807e440 <_init+0xd38>
082103fd +0x44d1:  lea    -0x2ec(%ebp),%eax
08210403 +0x44d7:  mov    %eax,(%esp)
08210406 +0x44da:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821040b +0x44df:  movl   $0xc,0x8(%esp)
08210413 +0x44e7:  movl   $0x0,0x4(%esp)
0821041b +0x44ef:  lea    -0x2ec(%ebp),%eax
08210421 +0x44f5:  mov    %eax,(%esp)
08210424 +0x44f8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08210429 +0x44fd:  movl   $0x0,0x4(%esp)
08210431 +0x4505:  lea    -0x2ec(%ebp),%eax
08210437 +0x450b:  mov    %eax,(%esp)
0821043a +0x450e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821043f +0x4513:  movl   $0x0,0x4(%esp)
08210447 +0x451b:  lea    -0x2ec(%ebp),%eax
0821044d +0x4521:  mov    %eax,(%esp)
08210450 +0x4524:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08210455 +0x4529:  movl   $0x0,0x4(%esp)
0821045d +0x4531:  lea    -0x2ec(%ebp),%eax
08210463 +0x4537:  mov    %eax,(%esp)
08210466 +0x453a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821046b +0x453f:  lea    -0x668(%ebp),%eax
08210471 +0x4545:  mov    %eax,(%esp)
08210474 +0x4548:  call   0807e3b0 <_init+0xca8>
08210479 +0x454d:  mov    %eax,0x4(%esp)
0821047d +0x4551:  lea    -0x2ec(%ebp),%eax
08210483 +0x4557:  mov    %eax,(%esp)
08210486 +0x455a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821048b +0x455f:  lea    -0x668(%ebp),%eax
08210491 +0x4565:  mov    %eax,(%esp)
08210494 +0x4568:  call   0807e3b0 <_init+0xca8>
08210499 +0x456d:  mov    %eax,0x8(%esp)
0821049d +0x4571:  lea    -0x668(%ebp),%eax
082104a3 +0x4577:  mov    %eax,0x4(%esp)
082104a7 +0x457b:  lea    -0x2ec(%ebp),%eax
082104ad +0x4581:  mov    %eax,(%esp)
082104b0 +0x4584:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
082104b5 +0x4589:  movl   $0x1,0x4(%esp)
082104bd +0x4591:  lea    -0x2ec(%ebp),%eax
082104c3 +0x4597:  mov    %eax,(%esp)
082104c6 +0x459a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082104cb +0x459f:  lea    -0x2ec(%ebp),%eax
082104d1 +0x45a5:  mov    %eax,0x4(%esp)
082104d5 +0x45a9:  mov    0xc(%ebp),%eax
082104d8 +0x45ac:  mov    %eax,(%esp)
082104db +0x45af:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082104e0 +0x45b4:  mov    $0x0,%ebx
082104e5 +0x45b9:  lea    -0x2ec(%ebp),%eax
082104eb +0x45bf:  mov    %eax,(%esp)
082104ee +0x45c2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082104f3 +0x45c7:  jmp    08210510 <+0x45e4>
082104f5 +0x45c9:  mov    %edx,%ebx
082104f7 +0x45cb:  mov    %eax,%esi
082104f9 +0x45cd:  lea    -0x2ec(%ebp),%eax
082104ff +0x45d3:  mov    %eax,(%esp)
08210502 +0x45d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08210507 +0x45db:  mov    %esi,%eax
08210509 +0x45dd:  mov    %ebx,%edx
0821050b +0x45df:  jmp    082107d9 <+0x48ad>
08210510 +0x45e4:  mov    $0x0,%esi
08210515 +0x45e9:  jmp    082107f4 <+0x48c8>
0821051a +0x45ee:  lea    -0x668(%ebp),%edx
08210520 +0x45f4:  mov    $0x0,%eax
08210525 +0x45f9:  mov    $0x3f,%ecx
0821052a +0x45fe:  mov    %edx,%edi
0821052c +0x4600:  rep stos %eax,%es:(%edi)
0821052e +0x4602:  mov    %edi,%edx
08210530 +0x4604:  mov    %ax,(%edx)
08210533 +0x4607:  add    $0x2,%edx
08210536 +0x460a:  mov    %al,(%edx)
08210538 +0x460c:  add    $0x1,%edx
0821053b +0x460f:  mov    -0xc0(%ebp),%eax
08210541 +0x4615:  mov    %eax,(%esp)
08210544 +0x4618:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08210549 +0x461d:  mov    %eax,0x8(%esp)
0821054d +0x4621:  movl   $"item_index(%d) ",0x4(%esp)
08210555 +0x4629:  lea    -0x668(%ebp),%eax
0821055b +0x462f:  mov    %eax,(%esp)
0821055e +0x4632:  call   0807e440 <_init+0xd38>
08210563 +0x4637:  lea    -0x2f8(%ebp),%eax
08210569 +0x463d:  mov    %eax,(%esp)
0821056c +0x4640:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08210571 +0x4645:  movl   $0xc,0x8(%esp)
08210579 +0x464d:  movl   $0x0,0x4(%esp)
08210581 +0x4655:  lea    -0x2f8(%ebp),%eax
08210587 +0x465b:  mov    %eax,(%esp)
0821058a +0x465e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821058f +0x4663:  movl   $0x0,0x4(%esp)
08210597 +0x466b:  lea    -0x2f8(%ebp),%eax
0821059d +0x4671:  mov    %eax,(%esp)
082105a0 +0x4674:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082105a5 +0x4679:  movl   $0x0,0x4(%esp)
082105ad +0x4681:  lea    -0x2f8(%ebp),%eax
082105b3 +0x4687:  mov    %eax,(%esp)
082105b6 +0x468a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082105bb +0x468f:  movl   $0x0,0x4(%esp)
082105c3 +0x4697:  lea    -0x2f8(%ebp),%eax
082105c9 +0x469d:  mov    %eax,(%esp)
082105cc +0x46a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082105d1 +0x46a5:  lea    -0x668(%ebp),%eax
082105d7 +0x46ab:  mov    %eax,(%esp)
082105da +0x46ae:  call   0807e3b0 <_init+0xca8>
082105df +0x46b3:  mov    %eax,0x4(%esp)
082105e3 +0x46b7:  lea    -0x2f8(%ebp),%eax
082105e9 +0x46bd:  mov    %eax,(%esp)
082105ec +0x46c0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082105f1 +0x46c5:  lea    -0x668(%ebp),%eax
082105f7 +0x46cb:  mov    %eax,(%esp)
082105fa +0x46ce:  call   0807e3b0 <_init+0xca8>
082105ff +0x46d3:  mov    %eax,0x8(%esp)
08210603 +0x46d7:  lea    -0x668(%ebp),%eax
08210609 +0x46dd:  mov    %eax,0x4(%esp)
0821060d +0x46e1:  lea    -0x2f8(%ebp),%eax
08210613 +0x46e7:  mov    %eax,(%esp)
08210616 +0x46ea:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0821061b +0x46ef:  movl   $0x1,0x4(%esp)
08210623 +0x46f7:  lea    -0x2f8(%ebp),%eax
08210629 +0x46fd:  mov    %eax,(%esp)
0821062c +0x4700:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08210631 +0x4705:  lea    -0x2f8(%ebp),%eax
08210637 +0x470b:  mov    %eax,0x4(%esp)
0821063b +0x470f:  mov    0xc(%ebp),%eax
0821063e +0x4712:  mov    %eax,(%esp)
08210641 +0x4715:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08210646 +0x471a:  jmp    08210663 <+0x4737>
08210648 +0x471c:  mov    %edx,%ebx
0821064a +0x471e:  mov    %eax,%esi
0821064c +0x4720:  lea    -0x2f8(%ebp),%eax
08210652 +0x4726:  mov    %eax,(%esp)
08210655 +0x4729:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821065a +0x472e:  mov    %esi,%eax
0821065c +0x4730:  mov    %ebx,%edx
0821065e +0x4732:  jmp    082107d9 <+0x48ad>
08210663 +0x4737:  lea    -0x2f8(%ebp),%eax
08210669 +0x473d:  mov    %eax,(%esp)
0821066c +0x4740:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08210671 +0x4745:  mov    -0xc0(%ebp),%eax
08210677 +0x474b:  mov    %eax,(%esp)
0821067a +0x474e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0821067f +0x4753:  mov    %eax,-0xbc(%ebp)
08210685 +0x4759:  movl   $0x64,-0xb8(%ebp)
0821068f +0x4763:  cmpl   $0x0,-0xc0(%ebp)
08210696 +0x476a:  je     082106d9 <+0x47ad>
08210698 +0x476c:  mov    -0xc0(%ebp),%eax
0821069e +0x4772:  mov    %eax,(%esp)
082106a1 +0x4775:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
082106a6 +0x477a:  test   %al,%al
082106a8 +0x477c:  je     082106d9 <+0x47ad>
082106aa +0x477e:  mov    -0xc0(%ebp),%eax
082106b0 +0x4784:  mov    %eax,(%esp)
082106b3 +0x4787:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
082106b8 +0x478c:  cmp    -0xb8(%ebp),%eax
082106be +0x4792:  setl   %al
082106c1 +0x4795:  test   %al,%al
082106c3 +0x4797:  je     082106d9 <+0x47ad>
082106c5 +0x4799:  mov    -0xc0(%ebp),%eax
082106cb +0x479f:  mov    %eax,(%esp)
082106ce +0x47a2:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
082106d3 +0x47a7:  mov    %eax,-0xb8(%ebp)
082106d9 +0x47ad:  mov    -0xbc(%ebp),%eax
082106df +0x47b3:  movl   $0x0,0x14(%esp)
082106e7 +0x47bb:  lea    -0x2e0(%ebp),%edx
082106ed +0x47c1:  mov    %edx,0x10(%esp)
082106f1 +0x47c5:  movl   $0x6,0xc(%esp)
082106f9 +0x47cd:  mov    -0xb8(%ebp),%edx
082106ff +0x47d3:  mov    %edx,0x8(%esp)
08210703 +0x47d7:  mov    %eax,0x4(%esp)
08210707 +0x47db:  mov    0xc(%ebp),%eax
0821070a +0x47de:  mov    %eax,(%esp)
0821070d +0x47e1:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
08210712 +0x47e6:  mov    %eax,-0xb4(%ebp)
08210718 +0x47ec:  cmpl   $0x0,-0xb4(%ebp)
0821071f +0x47f3:  js     082107c6 <+0x489a>
08210725 +0x47f9:  mov    0xc(%ebp),%eax
08210728 +0x47fc:  mov    %eax,(%esp)
0821072b +0x47ff:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08210730 +0x4804:  mov    %eax,%edi
08210732 +0x4806:  mov    0xc(%ebp),%eax
08210735 +0x4809:  mov    %eax,(%esp)
08210738 +0x480c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821073d +0x4811:  movl   $0x0,0x4(%esp)
08210745 +0x4819:  mov    %eax,(%esp)
08210748 +0x481c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0821074d +0x4821:  mov    %eax,%esi
0821074f +0x4823:  movl   $0x0,0xc(%esp)
08210757 +0x482b:  movl   $0xb916,0x8(%esp)
0821075f +0x4833:  movl   $&_ZZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEEE19__PRETTY_FUNCTION__,0x4(%esp)
08210767 +0x483b:  lea    -0x244(%ebp),%eax
0821076d +0x4841:  mov    %eax,(%esp)
08210770 +0x4844:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08210775 +0x4849:  mov    -0xb4(%ebp),%eax
0821077b +0x484f:  mov    %eax,0x10(%esp)
0821077f +0x4853:  mov    %edi,0xc(%esp)
08210783 +0x4857:  mov    %esi,0x8(%esp)
08210787 +0x485b:  movl   $"%s:'%s' GM Mode Add Item(%d).",0x4(%esp)
0821078f +0x4863:  lea    -0x244(%ebp),%eax
08210795 +0x4869:  mov    %eax,(%esp)
08210798 +0x486c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821079d +0x4871:  mov    -0x2e0(%ebp),%eax
082107a3 +0x4877:  mov    -0xb4(%ebp),%edx
082107a9 +0x487d:  mov    %edx,0xc(%esp)
082107ad +0x4881:  mov    %eax,0x8(%esp)
082107b1 +0x4885:  movl   $0x1,0x4(%esp)
082107b9 +0x488d:  mov    0xc(%ebp),%eax
082107bc +0x4890:  mov    %eax,(%esp)
082107bf +0x4893:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
082107c4 +0x4898:  jmp    082107d2 <+0x48a6>
082107c6 +0x489a:  mov    $0x0,%ebx
082107cb +0x489f:  mov    $0x0,%esi
082107d0 +0x48a4:  jmp    082107f4 <+0x48c8>
082107d2 +0x48a6:  mov    $0x1,%esi
082107d7 +0x48ab:  jmp    082107f4 <+0x48c8>
082107d9 +0x48ad:  mov    %edx,%ebx
082107db +0x48af:  mov    %eax,%esi
082107dd +0x48b1:  lea    -0x2dc(%ebp),%eax
082107e3 +0x48b7:  mov    %eax,(%esp)
082107e6 +0x48ba:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082107eb +0x48bf:  mov    %esi,%eax
082107ed +0x48c1:  mov    %ebx,%edx
082107ef +0x48c3:  jmp    08213447 <+0x751b>
082107f4 +0x48c8:  lea    -0x2dc(%ebp),%eax
082107fa +0x48ce:  mov    %eax,(%esp)
082107fd +0x48d1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08210802 +0x48d6:  test   %esi,%esi
08210804 +0x48d8:  je     0821345f <+0x7533>
0821080a +0x48de:  jmp    08213440 <+0x7514>
0821080f +0x48e3:  movl   $0x0,0x4(%esp)
08210817 +0x48eb:  mov    0x14(%ebp),%eax
0821081a +0x48ee:  mov    %eax,(%esp)
0821081d +0x48f1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210822 +0x48f6:  movl   $"itemskill",0x4(%esp)
0821082a +0x48fe:  mov    %eax,(%esp)
0821082d +0x4901:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08210832 +0x4906:  test   %al,%al
08210834 +0x4908:  je     082108c7 <+0x499b>
0821083a +0x490e:  movl   $0x1,0x4(%esp)
08210842 +0x4916:  mov    0x14(%ebp),%eax
08210845 +0x4919:  mov    %eax,(%esp)
08210848 +0x491c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821084d +0x4921:  mov    %eax,(%esp)
08210850 +0x4924:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08210855 +0x4929:  mov    %eax,(%esp)
08210858 +0x492c:  call   0807e6f0 <_init+0xfe8>
0821085d +0x4931:  mov    %eax,-0xac(%ebp)
08210863 +0x4937:  movl   $0x2,0x4(%esp)
0821086b +0x493f:  mov    0x14(%ebp),%eax
0821086e +0x4942:  mov    %eax,(%esp)
08210871 +0x4945:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210876 +0x494a:  mov    %eax,(%esp)
08210879 +0x494d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821087e +0x4952:  mov    %eax,(%esp)
08210881 +0x4955:  call   0807e6f0 <_init+0xfe8>
08210886 +0x495a:  mov    %eax,-0xa8(%ebp)
0821088c +0x4960:  movl   $0xa,0x4(%esp)
08210894 +0x4968:  mov    0xc(%ebp),%eax
08210897 +0x496b:  mov    %eax,(%esp)
0821089a +0x496e:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0821089f +0x4973:  mov    0xc(%ebp),%edx
082108a2 +0x4976:  mov    %edx,0xc(%esp)
082108a6 +0x497a:  mov    -0xa8(%ebp),%edx
082108ac +0x4980:  mov    %edx,0x8(%esp)
082108b0 +0x4984:  mov    -0xac(%ebp),%edx
082108b6 +0x498a:  mov    %edx,0x4(%esp)
082108ba +0x498e:  mov    %eax,(%esp)
082108bd +0x4991:  call   08545d24 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser>  ; CItemMakingSkill::SetItemMakingSkillPoint(int, int, CUser*)
082108c2 +0x4996:  jmp    08213440 <+0x7514>
082108c7 +0x499b:  movl   $0x0,0x4(%esp)
082108cf +0x49a3:  mov    0x14(%ebp),%eax
082108d2 +0x49a6:  mov    %eax,(%esp)
082108d5 +0x49a9:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082108da +0x49ae:  movl   $"multimail",0x4(%esp)
082108e2 +0x49b6:  mov    %eax,(%esp)
082108e5 +0x49b9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082108ea +0x49be:  test   %al,%al
082108ec +0x49c0:  je     0821102f <+0x5103>
082108f2 +0x49c6:  movl   $0x1,0x4(%esp)
082108fa +0x49ce:  mov    0x14(%ebp),%eax
082108fd +0x49d1:  mov    %eax,(%esp)
08210900 +0x49d4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210905 +0x49d9:  movl   $"stack",0x4(%esp)
0821090d +0x49e1:  mov    %eax,(%esp)
08210910 +0x49e4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08210915 +0x49e9:  test   %al,%al
08210917 +0x49eb:  je     08210bc6 <+0x4c9a>
0821091d +0x49f1:  movl   $"multimail test",-0xa4(%ebp)
08210927 +0x49fb:  movl   $"stackable item test",-0xa0(%ebp)
08210931 +0x4a05:  lea    -0x304(%ebp),%eax
08210937 +0x4a0b:  mov    %eax,(%esp)
0821093a +0x4a0e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0821093f +0x4a13:  lea    -0x304(%ebp),%eax
08210945 +0x4a19:  mov    %eax,(%esp)
08210948 +0x4a1c:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0821094d +0x4a21:  movl   $0x5,-0x22c(%ebp)
08210957 +0x4a2b:  movl   $0xbdd,-0x228(%ebp)
08210961 +0x4a35:  lea    -0x234(%ebp),%eax
08210967 +0x4a3b:  lea    -0x22c(%ebp),%edx
0821096d +0x4a41:  mov    %edx,0x8(%esp)
08210971 +0x4a45:  lea    -0x228(%ebp),%edx
08210977 +0x4a4b:  mov    %edx,0x4(%esp)
0821097b +0x4a4f:  mov    %eax,(%esp)
0821097e +0x4a52:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210983 +0x4a57:  sub    $0x4,%esp
08210986 +0x4a5a:  lea    -0x234(%ebp),%eax
0821098c +0x4a60:  mov    %eax,0x4(%esp)
08210990 +0x4a64:  lea    -0x304(%ebp),%eax
08210996 +0x4a6a:  mov    %eax,(%esp)
08210999 +0x4a6d:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0821099e +0x4a72:  movl   $0x4,-0x21c(%ebp)
082109a8 +0x4a7c:  movl   $0xbda,-0x218(%ebp)
082109b2 +0x4a86:  lea    -0x224(%ebp),%eax
082109b8 +0x4a8c:  lea    -0x21c(%ebp),%edx
082109be +0x4a92:  mov    %edx,0x8(%esp)
082109c2 +0x4a96:  lea    -0x218(%ebp),%edx
082109c8 +0x4a9c:  mov    %edx,0x4(%esp)
082109cc +0x4aa0:  mov    %eax,(%esp)
082109cf +0x4aa3:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
082109d4 +0x4aa8:  sub    $0x4,%esp
082109d7 +0x4aab:  lea    -0x224(%ebp),%eax
082109dd +0x4ab1:  mov    %eax,0x4(%esp)
082109e1 +0x4ab5:  lea    -0x304(%ebp),%eax
082109e7 +0x4abb:  mov    %eax,(%esp)
082109ea +0x4abe:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
082109ef +0x4ac3:  movl   $0x3,-0x20c(%ebp)
082109f9 +0x4acd:  movl   $0xbd9,-0x208(%ebp)
08210a03 +0x4ad7:  lea    -0x214(%ebp),%eax
08210a09 +0x4add:  lea    -0x20c(%ebp),%edx
08210a0f +0x4ae3:  mov    %edx,0x8(%esp)
08210a13 +0x4ae7:  lea    -0x208(%ebp),%edx
08210a19 +0x4aed:  mov    %edx,0x4(%esp)
08210a1d +0x4af1:  mov    %eax,(%esp)
08210a20 +0x4af4:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210a25 +0x4af9:  sub    $0x4,%esp
08210a28 +0x4afc:  lea    -0x214(%ebp),%eax
08210a2e +0x4b02:  mov    %eax,0x4(%esp)
08210a32 +0x4b06:  lea    -0x304(%ebp),%eax
08210a38 +0x4b0c:  mov    %eax,(%esp)
08210a3b +0x4b0f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210a40 +0x4b14:  movl   $0x2,-0x1fc(%ebp)
08210a4a +0x4b1e:  movl   $0xbdb,-0x1f8(%ebp)
08210a54 +0x4b28:  lea    -0x204(%ebp),%eax
08210a5a +0x4b2e:  lea    -0x1fc(%ebp),%edx
08210a60 +0x4b34:  mov    %edx,0x8(%esp)
08210a64 +0x4b38:  lea    -0x1f8(%ebp),%edx
08210a6a +0x4b3e:  mov    %edx,0x4(%esp)
08210a6e +0x4b42:  mov    %eax,(%esp)
08210a71 +0x4b45:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210a76 +0x4b4a:  sub    $0x4,%esp
08210a79 +0x4b4d:  lea    -0x204(%ebp),%eax
08210a7f +0x4b53:  mov    %eax,0x4(%esp)
08210a83 +0x4b57:  lea    -0x304(%ebp),%eax
08210a89 +0x4b5d:  mov    %eax,(%esp)
08210a8c +0x4b60:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210a91 +0x4b65:  movl   $0x1,-0x1ec(%ebp)
08210a9b +0x4b6f:  movl   $0xbdc,-0x1e8(%ebp)
08210aa5 +0x4b79:  lea    -0x1f4(%ebp),%eax
08210aab +0x4b7f:  lea    -0x1ec(%ebp),%edx
08210ab1 +0x4b85:  mov    %edx,0x8(%esp)
08210ab5 +0x4b89:  lea    -0x1e8(%ebp),%edx
08210abb +0x4b8f:  mov    %edx,0x4(%esp)
08210abf +0x4b93:  mov    %eax,(%esp)
08210ac2 +0x4b96:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210ac7 +0x4b9b:  sub    $0x4,%esp
08210aca +0x4b9e:  lea    -0x1f4(%ebp),%eax
08210ad0 +0x4ba4:  mov    %eax,0x4(%esp)
08210ad4 +0x4ba8:  lea    -0x304(%ebp),%eax
08210ada +0x4bae:  mov    %eax,(%esp)
08210add +0x4bb1:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210ae2 +0x4bb6:  lea    -0x8ca(%ebp),%eax
08210ae8 +0x4bbc:  mov    %eax,%ebx
08210aea +0x4bbe:  mov    $0x9,%esi
08210aef +0x4bc3:  jmp    08210aff <+0x4bd3>
08210af1 +0x4bc5:  mov    %ebx,(%esp)
08210af4 +0x4bc8:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08210af9 +0x4bcd:  add    $0x3d,%ebx
08210afc +0x4bd0:  sub    $0x1,%esi
08210aff +0x4bd3:  cmp    $0xffffffff,%esi
08210b02 +0x4bd6:  setne  %al
08210b05 +0x4bd9:  test   %al,%al
08210b07 +0x4bdb:  jne    08210af1 <+0x4bc5>
08210b09 +0x4bdd:  movl   $0xa,0x8(%esp)
08210b11 +0x4be5:  lea    -0x8ca(%ebp),%eax
08210b17 +0x4beb:  mov    %eax,0x4(%esp)
08210b1b +0x4bef:  lea    -0x304(%ebp),%eax
08210b21 +0x4bf5:  mov    %eax,(%esp)
08210b24 +0x4bf8:  call   08556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>  ; WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)
08210b29 +0x4bfd:  mov    -0xa0(%ebp),%eax
08210b2f +0x4c03:  mov    %eax,(%esp)
08210b32 +0x4c06:  call   0807e3b0 <_init+0xca8>
08210b37 +0x4c0b:  mov    %eax,%ebx
08210b39 +0x4c0d:  mov    0xc(%ebp),%eax
08210b3c +0x4c10:  mov    %eax,(%esp)
08210b3f +0x4c13:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08210b44 +0x4c18:  movl   $0x0,0x24(%esp)
08210b4c +0x4c20:  movl   $0x63,0x20(%esp)
08210b54 +0x4c28:  movl   $0x0,0x1c(%esp)
08210b5c +0x4c30:  mov    %ebx,0x18(%esp)
08210b60 +0x4c34:  mov    -0xa0(%ebp),%edx
08210b66 +0x4c3a:  mov    %edx,0x14(%esp)
08210b6a +0x4c3e:  mov    %eax,0x10(%esp)
08210b6e +0x4c42:  movl   $0x3e8,0xc(%esp)
08210b76 +0x4c4a:  movl   $0x5,0x8(%esp)
08210b7e +0x4c52:  lea    -0x8ca(%ebp),%eax
08210b84 +0x4c58:  mov    %eax,0x4(%esp)
08210b88 +0x4c5c:  mov    -0xa4(%ebp),%eax
08210b8e +0x4c62:  mov    %eax,(%esp)
08210b91 +0x4c65:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
08210b96 +0x4c6a:  jmp    08210bb3 <+0x4c87>
08210b98 +0x4c6c:  mov    %edx,%ebx
08210b9a +0x4c6e:  mov    %eax,%esi
08210b9c +0x4c70:  lea    -0x304(%ebp),%eax
08210ba2 +0x4c76:  mov    %eax,(%esp)
08210ba5 +0x4c79:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08210baa +0x4c7e:  mov    %esi,%eax
08210bac +0x4c80:  mov    %ebx,%edx
08210bae +0x4c82:  jmp    08213447 <+0x751b>
08210bb3 +0x4c87:  lea    -0x304(%ebp),%eax
08210bb9 +0x4c8d:  mov    %eax,(%esp)
08210bbc +0x4c90:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08210bc1 +0x4c95:  jmp    08213440 <+0x7514>
08210bc6 +0x4c9a:  movl   $0x1,0x4(%esp)
08210bce +0x4ca2:  mov    0x14(%ebp),%eax
08210bd1 +0x4ca5:  mov    %eax,(%esp)
08210bd4 +0x4ca8:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08210bd9 +0x4cad:  movl   $"equip",0x4(%esp)
08210be1 +0x4cb5:  mov    %eax,(%esp)
08210be4 +0x4cb8:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08210be9 +0x4cbd:  test   %al,%al
08210beb +0x4cbf:  je     08213440 <+0x7514>
08210bf1 +0x4cc5:  movl   $"multimail test",-0x9c(%ebp)
08210bfb +0x4ccf:  movl   $"equip item test",-0x98(%ebp)
08210c05 +0x4cd9:  lea    -0x310(%ebp),%eax
08210c0b +0x4cdf:  mov    %eax,(%esp)
08210c0e +0x4ce2:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08210c13 +0x4ce7:  lea    -0x310(%ebp),%eax
08210c19 +0x4ced:  mov    %eax,(%esp)
08210c1c +0x4cf0:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08210c21 +0x4cf5:  movl   $0x5,-0x1dc(%ebp)
08210c2b +0x4cff:  movl   $0x2710,-0x1d8(%ebp)
08210c35 +0x4d09:  lea    -0x1e4(%ebp),%eax
08210c3b +0x4d0f:  lea    -0x1dc(%ebp),%edx
08210c41 +0x4d15:  mov    %edx,0x8(%esp)
08210c45 +0x4d19:  lea    -0x1d8(%ebp),%edx
08210c4b +0x4d1f:  mov    %edx,0x4(%esp)
08210c4f +0x4d23:  mov    %eax,(%esp)
08210c52 +0x4d26:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210c57 +0x4d2b:  sub    $0x4,%esp
08210c5a +0x4d2e:  lea    -0x1e4(%ebp),%eax
08210c60 +0x4d34:  mov    %eax,0x4(%esp)
08210c64 +0x4d38:  lea    -0x310(%ebp),%eax
08210c6a +0x4d3e:  mov    %eax,(%esp)
08210c6d +0x4d41:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210c72 +0x4d46:  movl   $0x5,-0x1cc(%ebp)
08210c7c +0x4d50:  movl   $0x2711,-0x1c8(%ebp)
08210c86 +0x4d5a:  lea    -0x1d4(%ebp),%eax
08210c8c +0x4d60:  lea    -0x1cc(%ebp),%edx
08210c92 +0x4d66:  mov    %edx,0x8(%esp)
08210c96 +0x4d6a:  lea    -0x1c8(%ebp),%edx
08210c9c +0x4d70:  mov    %edx,0x4(%esp)
08210ca0 +0x4d74:  mov    %eax,(%esp)
08210ca3 +0x4d77:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210ca8 +0x4d7c:  sub    $0x4,%esp
08210cab +0x4d7f:  lea    -0x1d4(%ebp),%eax
08210cb1 +0x4d85:  mov    %eax,0x4(%esp)
08210cb5 +0x4d89:  lea    -0x310(%ebp),%eax
08210cbb +0x4d8f:  mov    %eax,(%esp)
08210cbe +0x4d92:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210cc3 +0x4d97:  movl   $0x5,-0x1bc(%ebp)
08210ccd +0x4da1:  movl   $0x2712,-0x1b8(%ebp)
08210cd7 +0x4dab:  lea    -0x1c4(%ebp),%eax
08210cdd +0x4db1:  lea    -0x1bc(%ebp),%edx
08210ce3 +0x4db7:  mov    %edx,0x8(%esp)
08210ce7 +0x4dbb:  lea    -0x1b8(%ebp),%edx
08210ced +0x4dc1:  mov    %edx,0x4(%esp)
08210cf1 +0x4dc5:  mov    %eax,(%esp)
08210cf4 +0x4dc8:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210cf9 +0x4dcd:  sub    $0x4,%esp
08210cfc +0x4dd0:  lea    -0x1c4(%ebp),%eax
08210d02 +0x4dd6:  mov    %eax,0x4(%esp)
08210d06 +0x4dda:  lea    -0x310(%ebp),%eax
08210d0c +0x4de0:  mov    %eax,(%esp)
08210d0f +0x4de3:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210d14 +0x4de8:  movl   $0x5,-0x1ac(%ebp)
08210d1e +0x4df2:  movl   $0x2713,-0x1a8(%ebp)
08210d28 +0x4dfc:  lea    -0x1b4(%ebp),%eax
08210d2e +0x4e02:  lea    -0x1ac(%ebp),%edx
08210d34 +0x4e08:  mov    %edx,0x8(%esp)
08210d38 +0x4e0c:  lea    -0x1a8(%ebp),%edx
08210d3e +0x4e12:  mov    %edx,0x4(%esp)
08210d42 +0x4e16:  mov    %eax,(%esp)
08210d45 +0x4e19:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210d4a +0x4e1e:  sub    $0x4,%esp
08210d4d +0x4e21:  lea    -0x1b4(%ebp),%eax
08210d53 +0x4e27:  mov    %eax,0x4(%esp)
08210d57 +0x4e2b:  lea    -0x310(%ebp),%eax
08210d5d +0x4e31:  mov    %eax,(%esp)
08210d60 +0x4e34:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210d65 +0x4e39:  movl   $0x5,-0x19c(%ebp)
08210d6f +0x4e43:  movl   $0x2714,-0x198(%ebp)
08210d79 +0x4e4d:  lea    -0x1a4(%ebp),%eax
08210d7f +0x4e53:  lea    -0x19c(%ebp),%edx
08210d85 +0x4e59:  mov    %edx,0x8(%esp)
08210d89 +0x4e5d:  lea    -0x198(%ebp),%edx
08210d8f +0x4e63:  mov    %edx,0x4(%esp)
08210d93 +0x4e67:  mov    %eax,(%esp)
08210d96 +0x4e6a:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210d9b +0x4e6f:  sub    $0x4,%esp
08210d9e +0x4e72:  lea    -0x1a4(%ebp),%eax
08210da4 +0x4e78:  mov    %eax,0x4(%esp)
08210da8 +0x4e7c:  lea    -0x310(%ebp),%eax
08210dae +0x4e82:  mov    %eax,(%esp)
08210db1 +0x4e85:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210db6 +0x4e8a:  movl   $0x5,-0x18c(%ebp)
08210dc0 +0x4e94:  movl   $0x2715,-0x188(%ebp)
08210dca +0x4e9e:  lea    -0x194(%ebp),%eax
08210dd0 +0x4ea4:  lea    -0x18c(%ebp),%edx
08210dd6 +0x4eaa:  mov    %edx,0x8(%esp)
08210dda +0x4eae:  lea    -0x188(%ebp),%edx
08210de0 +0x4eb4:  mov    %edx,0x4(%esp)
08210de4 +0x4eb8:  mov    %eax,(%esp)
08210de7 +0x4ebb:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210dec +0x4ec0:  sub    $0x4,%esp
08210def +0x4ec3:  lea    -0x194(%ebp),%eax
08210df5 +0x4ec9:  mov    %eax,0x4(%esp)
08210df9 +0x4ecd:  lea    -0x310(%ebp),%eax
08210dff +0x4ed3:  mov    %eax,(%esp)
08210e02 +0x4ed6:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210e07 +0x4edb:  movl   $0x5,-0x17c(%ebp)
08210e11 +0x4ee5:  movl   $0x2716,-0x178(%ebp)
08210e1b +0x4eef:  lea    -0x184(%ebp),%eax
08210e21 +0x4ef5:  lea    -0x17c(%ebp),%edx
08210e27 +0x4efb:  mov    %edx,0x8(%esp)
08210e2b +0x4eff:  lea    -0x178(%ebp),%edx
08210e31 +0x4f05:  mov    %edx,0x4(%esp)
08210e35 +0x4f09:  mov    %eax,(%esp)
08210e38 +0x4f0c:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210e3d +0x4f11:  sub    $0x4,%esp
08210e40 +0x4f14:  lea    -0x184(%ebp),%eax
08210e46 +0x4f1a:  mov    %eax,0x4(%esp)
08210e4a +0x4f1e:  lea    -0x310(%ebp),%eax
08210e50 +0x4f24:  mov    %eax,(%esp)
08210e53 +0x4f27:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210e58 +0x4f2c:  movl   $0x5,-0x16c(%ebp)
08210e62 +0x4f36:  movl   $0x2717,-0x168(%ebp)
08210e6c +0x4f40:  lea    -0x174(%ebp),%eax
08210e72 +0x4f46:  lea    -0x16c(%ebp),%edx
08210e78 +0x4f4c:  mov    %edx,0x8(%esp)
08210e7c +0x4f50:  lea    -0x168(%ebp),%edx
08210e82 +0x4f56:  mov    %edx,0x4(%esp)
08210e86 +0x4f5a:  mov    %eax,(%esp)
08210e89 +0x4f5d:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210e8e +0x4f62:  sub    $0x4,%esp
08210e91 +0x4f65:  lea    -0x174(%ebp),%eax
08210e97 +0x4f6b:  mov    %eax,0x4(%esp)
08210e9b +0x4f6f:  lea    -0x310(%ebp),%eax
08210ea1 +0x4f75:  mov    %eax,(%esp)
08210ea4 +0x4f78:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210ea9 +0x4f7d:  movl   $0x5,-0x15c(%ebp)
08210eb3 +0x4f87:  movl   $0x2718,-0x158(%ebp)
08210ebd +0x4f91:  lea    -0x164(%ebp),%eax
08210ec3 +0x4f97:  lea    -0x15c(%ebp),%edx
08210ec9 +0x4f9d:  mov    %edx,0x8(%esp)
08210ecd +0x4fa1:  lea    -0x158(%ebp),%edx
08210ed3 +0x4fa7:  mov    %edx,0x4(%esp)
08210ed7 +0x4fab:  mov    %eax,(%esp)
08210eda +0x4fae:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210edf +0x4fb3:  sub    $0x4,%esp
08210ee2 +0x4fb6:  lea    -0x164(%ebp),%eax
08210ee8 +0x4fbc:  mov    %eax,0x4(%esp)
08210eec +0x4fc0:  lea    -0x310(%ebp),%eax
08210ef2 +0x4fc6:  mov    %eax,(%esp)
08210ef5 +0x4fc9:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210efa +0x4fce:  movl   $0x5,-0x14c(%ebp)
08210f04 +0x4fd8:  movl   $0x2719,-0x148(%ebp)
08210f0e +0x4fe2:  lea    -0x154(%ebp),%eax
08210f14 +0x4fe8:  lea    -0x14c(%ebp),%edx
08210f1a +0x4fee:  mov    %edx,0x8(%esp)
08210f1e +0x4ff2:  lea    -0x148(%ebp),%edx
08210f24 +0x4ff8:  mov    %edx,0x4(%esp)
08210f28 +0x4ffc:  mov    %eax,(%esp)
08210f2b +0x4fff:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08210f30 +0x5004:  sub    $0x4,%esp
08210f33 +0x5007:  lea    -0x154(%ebp),%eax
08210f39 +0x500d:  mov    %eax,0x4(%esp)
08210f3d +0x5011:  lea    -0x310(%ebp),%eax
08210f43 +0x5017:  mov    %eax,(%esp)
08210f46 +0x501a:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08210f4b +0x501f:  lea    -0xb2c(%ebp),%eax
08210f51 +0x5025:  mov    %eax,%ebx
08210f53 +0x5027:  mov    $0x9,%esi
08210f58 +0x502c:  jmp    08210f68 <+0x503c>
08210f5a +0x502e:  mov    %ebx,(%esp)
08210f5d +0x5031:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08210f62 +0x5036:  add    $0x3d,%ebx
08210f65 +0x5039:  sub    $0x1,%esi
08210f68 +0x503c:  cmp    $0xffffffff,%esi
08210f6b +0x503f:  setne  %al
08210f6e +0x5042:  test   %al,%al
08210f70 +0x5044:  jne    08210f5a <+0x502e>
08210f72 +0x5046:  movl   $0xa,0x8(%esp)
08210f7a +0x504e:  lea    -0xb2c(%ebp),%eax
08210f80 +0x5054:  mov    %eax,0x4(%esp)
08210f84 +0x5058:  lea    -0x310(%ebp),%eax
08210f8a +0x505e:  mov    %eax,(%esp)
08210f8d +0x5061:  call   08556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>  ; WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)
08210f92 +0x5066:  mov    -0x98(%ebp),%eax
08210f98 +0x506c:  mov    %eax,(%esp)
08210f9b +0x506f:  call   0807e3b0 <_init+0xca8>
08210fa0 +0x5074:  mov    %eax,%ebx
08210fa2 +0x5076:  mov    0xc(%ebp),%eax
08210fa5 +0x5079:  mov    %eax,(%esp)
08210fa8 +0x507c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08210fad +0x5081:  movl   $0x0,0x24(%esp)
08210fb5 +0x5089:  movl   $0x63,0x20(%esp)
08210fbd +0x5091:  movl   $0x0,0x1c(%esp)
08210fc5 +0x5099:  mov    %ebx,0x18(%esp)
08210fc9 +0x509d:  mov    -0x98(%ebp),%edx
08210fcf +0x50a3:  mov    %edx,0x14(%esp)
08210fd3 +0x50a7:  mov    %eax,0x10(%esp)
08210fd7 +0x50ab:  movl   $0x270f,0xc(%esp)
08210fdf +0x50b3:  movl   $0xa,0x8(%esp)
08210fe7 +0x50bb:  lea    -0xb2c(%ebp),%eax
08210fed +0x50c1:  mov    %eax,0x4(%esp)
08210ff1 +0x50c5:  mov    -0x9c(%ebp),%eax
08210ff7 +0x50cb:  mov    %eax,(%esp)
08210ffa +0x50ce:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
08210fff +0x50d3:  jmp    0821101c <+0x50f0>
08211001 +0x50d5:  mov    %edx,%ebx
08211003 +0x50d7:  mov    %eax,%esi
08211005 +0x50d9:  lea    -0x310(%ebp),%eax
0821100b +0x50df:  mov    %eax,(%esp)
0821100e +0x50e2:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08211013 +0x50e7:  mov    %esi,%eax
08211015 +0x50e9:  mov    %ebx,%edx
08211017 +0x50eb:  jmp    08213447 <+0x751b>
0821101c +0x50f0:  lea    -0x310(%ebp),%eax
08211022 +0x50f6:  mov    %eax,(%esp)
08211025 +0x50f9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0821102a +0x50fe:  jmp    08213440 <+0x7514>
0821102f +0x5103:  movl   $0x0,0x4(%esp)
08211037 +0x510b:  mov    0x14(%ebp),%eax
0821103a +0x510e:  mov    %eax,(%esp)
0821103d +0x5111:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211042 +0x5116:  movl   $"statistic",0x4(%esp)
0821104a +0x511e:  mov    %eax,(%esp)
0821104d +0x5121:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211052 +0x5126:  test   %al,%al
08211054 +0x5128:  je     08211093 <+0x5167>
08211056 +0x512a:  movl   $0x1,0x4(%esp)
0821105e +0x5132:  mov    0x14(%ebp),%eax
08211061 +0x5135:  mov    %eax,(%esp)
08211064 +0x5138:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211069 +0x513d:  movl   $"gold",0x4(%esp)
08211071 +0x5145:  mov    %eax,(%esp)
08211074 +0x5148:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211079 +0x514d:  test   %al,%al
0821107b +0x514f:  je     08213440 <+0x7514>
08211081 +0x5155:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
08211086 +0x515a:  mov    %eax,(%esp)
08211089 +0x515d:  call   0860dccc <_ZN21CCirculationStatistic26InsertCirculationStatisticEv>  ; CCirculationStatistic::InsertCirculationStatistic()
0821108e +0x5162:  jmp    08213440 <+0x7514>
08211093 +0x5167:  movl   $0x0,0x4(%esp)
0821109b +0x516f:  mov    0x14(%ebp),%eax
0821109e +0x5172:  mov    %eax,(%esp)
082110a1 +0x5175:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082110a6 +0x517a:  mov    %eax,0x4(%esp)
082110aa +0x517e:  movl   $"ingameday",(%esp)
082110b1 +0x5185:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
082110b6 +0x518a:  test   %al,%al
082110b8 +0x518c:  jne    082110e1 <+0x51b5>
082110ba +0x518e:  movl   $0x0,0x4(%esp)
082110c2 +0x5196:  mov    0x14(%ebp),%eax
082110c5 +0x5199:  mov    %eax,(%esp)
082110c8 +0x519c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082110cd +0x51a1:  mov    %eax,0x4(%esp)
082110d1 +0x51a5:  movl   $"day",(%esp)
082110d8 +0x51ac:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
082110dd +0x51b1:  test   %al,%al
082110df +0x51b3:  je     082110e8 <+0x51bc>
082110e1 +0x51b5:  mov    $0x1,%eax
082110e6 +0x51ba:  jmp    082110ed <+0x51c1>
082110e8 +0x51bc:  mov    $0x0,%eax
082110ed +0x51c1:  test   %al,%al
082110ef +0x51c3:  je     08211128 <+0x51fc>
082110f1 +0x51c5:  movl   $0x1,0x4(%esp)
082110f9 +0x51cd:  mov    0x14(%ebp),%eax
082110fc +0x51d0:  mov    %eax,(%esp)
082110ff +0x51d3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211104 +0x51d8:  mov    %eax,(%esp)
08211107 +0x51db:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821110c +0x51e0:  mov    %eax,0x8(%esp)
08211110 +0x51e4:  movl   $0x66,0x4(%esp)
08211118 +0x51ec:  mov    0xc(%ebp),%eax
0821111b +0x51ef:  mov    %eax,(%esp)
0821111e +0x51f2:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
08211123 +0x51f7:  jmp    08213440 <+0x7514>
08211128 +0x51fc:  movl   $0x0,0x4(%esp)
08211130 +0x5204:  mov    0x14(%ebp),%eax
08211133 +0x5207:  mov    %eax,(%esp)
08211136 +0x520a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821113b +0x520f:  movl   $"setinven",0x4(%esp)
08211143 +0x5217:  mov    %eax,(%esp)
08211146 +0x521a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821114b +0x521f:  test   %al,%al
0821114d +0x5221:  je     082112b8 <+0x538c>
08211153 +0x5227:  movl   $0x1,0x4(%esp)
0821115b +0x522f:  mov    0x14(%ebp),%eax
0821115e +0x5232:  mov    %eax,(%esp)
08211161 +0x5235:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211166 +0x523a:  mov    %eax,(%esp)
08211169 +0x523d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821116e +0x5242:  mov    %eax,(%esp)
08211171 +0x5245:  call   0807e6f0 <_init+0xfe8>
08211176 +0x524a:  mov    %eax,-0x94(%ebp)
0821117c +0x5250:  mov    0xc(%ebp),%eax
0821117f +0x5253:  mov    %eax,(%esp)
08211182 +0x5256:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08211187 +0x525b:  mov    %eax,(%esp)
0821118a +0x525e:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
0821118f +0x5263:  mov    0xc(%ebp),%edx
08211192 +0x5266:  lea    0x79700(%edx),%ecx
08211198 +0x526c:  movl   $0x2,0xc(%esp)
082111a0 +0x5274:  mov    -0x94(%ebp),%edx
082111a6 +0x527a:  mov    %edx,0x8(%esp)
082111aa +0x527e:  mov    %eax,0x4(%esp)
082111ae +0x5282:  mov    %ecx,(%esp)
082111b1 +0x5285:  call   08683cbc <_ZN15cUserHistoryLog15ExpandInventoryEiii>  ; cUserHistoryLog::ExpandInventory(int, int, int)
082111b6 +0x528a:  mov    0xc(%ebp),%eax
082111b9 +0x528d:  mov    %eax,(%esp)
082111bc +0x5290:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082111c1 +0x5295:  mov    -0x94(%ebp),%edx
082111c7 +0x529b:  mov    %edx,0x4(%esp)
082111cb +0x529f:  mov    %eax,(%esp)
082111ce +0x52a2:  call   0822d6ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d98
082111d3 +0x52a7:  mov    0xc(%ebp),%eax
082111d6 +0x52aa:  mov    %eax,(%esp)
082111d9 +0x52ad:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082111de +0x52b2:  mov    %eax,(%esp)
082111e1 +0x52b5:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
082111e6 +0x52ba:  mov    %eax,%edi
082111e8 +0x52bc:  mov    0xc(%ebp),%eax
082111eb +0x52bf:  mov    %eax,(%esp)
082111ee +0x52c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082111f3 +0x52c7:  mov    %eax,%esi
082111f5 +0x52c9:  mov    0xc(%ebp),%eax
082111f8 +0x52cc:  mov    %eax,(%esp)
082111fb +0x52cf:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08211200 +0x52d4:  mov    %eax,%ebx
08211202 +0x52d6:  mov    0xc(%ebp),%eax
08211205 +0x52d9:  mov    %eax,(%esp)
08211208 +0x52dc:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821120d +0x52e1:  mov    %edi,0xc(%esp)
08211211 +0x52e5:  mov    %esi,0x8(%esp)
08211215 +0x52e9:  mov    %ebx,0x4(%esp)
08211219 +0x52ed:  mov    %eax,(%esp)
0821121c +0x52f0:  call   08444d12 <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji>  ; DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int)
08211221 +0x52f5:  lea    -0x25c(%ebp),%eax
08211227 +0x52fb:  mov    %eax,(%esp)
0821122a +0x52fe:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0821122f +0x5303:  movl   $0x42,0x8(%esp)
08211237 +0x530b:  movl   $0x0,0x4(%esp)
0821123f +0x5313:  lea    -0x25c(%ebp),%eax
08211245 +0x5319:  mov    %eax,(%esp)
08211248 +0x531c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821124d +0x5321:  movl   $0xb,0x4(%esp)
08211255 +0x5329:  lea    -0x25c(%ebp),%eax
0821125b +0x532f:  mov    %eax,(%esp)
0821125e +0x5332:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08211263 +0x5337:  mov    0xc(%ebp),%eax
08211266 +0x533a:  mov    %eax,(%esp)
08211269 +0x533d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821126e +0x5342:  mov    %eax,(%esp)
08211271 +0x5345:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
08211276 +0x534a:  mov    %eax,0x4(%esp)
0821127a +0x534e:  lea    -0x25c(%ebp),%eax
08211280 +0x5354:  mov    %eax,(%esp)
08211283 +0x5357:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08211288 +0x535c:  movl   $0x1,0x4(%esp)
08211290 +0x5364:  lea    -0x25c(%ebp),%eax
08211296 +0x536a:  mov    %eax,(%esp)
08211299 +0x536d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821129e +0x5372:  lea    -0x25c(%ebp),%eax
082112a4 +0x5378:  mov    %eax,0x4(%esp)
082112a8 +0x537c:  mov    0xc(%ebp),%eax
082112ab +0x537f:  mov    %eax,(%esp)
082112ae +0x5382:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082112b3 +0x5387:  jmp    08213440 <+0x7514>
082112b8 +0x538c:  movl   $0x0,0x4(%esp)
082112c0 +0x5394:  mov    0x14(%ebp),%eax
082112c3 +0x5397:  mov    %eax,(%esp)
082112c6 +0x539a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082112cb +0x539f:  movl   $"itemseed",0x4(%esp)
082112d3 +0x53a7:  mov    %eax,(%esp)
082112d6 +0x53aa:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082112db +0x53af:  test   %al,%al
082112dd +0x53b1:  je     08211651 <+0x5725>
082112e3 +0x53b7:  movl   $0x1,0x4(%esp)
082112eb +0x53bf:  mov    0x14(%ebp),%eax
082112ee +0x53c2:  mov    %eax,(%esp)
082112f1 +0x53c5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082112f6 +0x53ca:  mov    %eax,(%esp)
082112f9 +0x53cd:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082112fe +0x53d2:  mov    %eax,(%esp)
08211301 +0x53d5:  call   0807e6f0 <_init+0xfe8>
08211306 +0x53da:  mov    %eax,%ebx
08211308 +0x53dc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821130d +0x53e1:  mov    %ebx,0x4(%esp)
08211311 +0x53e5:  mov    %eax,(%esp)
08211314 +0x53e8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08211319 +0x53ed:  mov    %eax,-0x90(%ebp)
0821131f +0x53f3:  cmpl   $0x0,-0x90(%ebp)
08211326 +0x53fa:  jne    08211498 <+0x556c>
0821132c +0x5400:  lea    -0x668(%ebp),%edx
08211332 +0x5406:  mov    $0x0,%eax
08211337 +0x540b:  mov    $0x3f,%ecx
0821133c +0x5410:  mov    %edx,%edi
0821133e +0x5412:  rep stos %eax,%es:(%edi)
08211340 +0x5414:  mov    %edi,%edx
08211342 +0x5416:  mov    %ax,(%edx)
08211345 +0x5419:  add    $0x2,%edx
08211348 +0x541c:  mov    %al,(%edx)
0821134a +0x541e:  add    $0x1,%edx
0821134d +0x5421:  movl   $0x1,0x4(%esp)
08211355 +0x5429:  mov    0x14(%ebp),%eax
08211358 +0x542c:  mov    %eax,(%esp)
0821135b +0x542f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211360 +0x5434:  mov    %eax,(%esp)
08211363 +0x5437:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08211368 +0x543c:  mov    %eax,0x8(%esp)
0821136c +0x5440:  movl   $"cannot find item (%s) ",0x4(%esp)
08211374 +0x5448:  lea    -0x668(%ebp),%eax
0821137a +0x544e:  mov    %eax,(%esp)
0821137d +0x5451:  call   0807e440 <_init+0xd38>
08211382 +0x5456:  lea    -0x320(%ebp),%eax
08211388 +0x545c:  mov    %eax,(%esp)
0821138b +0x545f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08211390 +0x5464:  movl   $0xc,0x8(%esp)
08211398 +0x546c:  movl   $0x0,0x4(%esp)
082113a0 +0x5474:  lea    -0x320(%ebp),%eax
082113a6 +0x547a:  mov    %eax,(%esp)
082113a9 +0x547d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082113ae +0x5482:  movl   $0x0,0x4(%esp)
082113b6 +0x548a:  lea    -0x320(%ebp),%eax
082113bc +0x5490:  mov    %eax,(%esp)
082113bf +0x5493:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082113c4 +0x5498:  movl   $0x0,0x4(%esp)
082113cc +0x54a0:  lea    -0x320(%ebp),%eax
082113d2 +0x54a6:  mov    %eax,(%esp)
082113d5 +0x54a9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082113da +0x54ae:  movl   $0x0,0x4(%esp)
082113e2 +0x54b6:  lea    -0x320(%ebp),%eax
082113e8 +0x54bc:  mov    %eax,(%esp)
082113eb +0x54bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082113f0 +0x54c4:  lea    -0x668(%ebp),%eax
082113f6 +0x54ca:  mov    %eax,(%esp)
082113f9 +0x54cd:  call   0807e3b0 <_init+0xca8>
082113fe +0x54d2:  mov    %eax,0x4(%esp)
08211402 +0x54d6:  lea    -0x320(%ebp),%eax
08211408 +0x54dc:  mov    %eax,(%esp)
0821140b +0x54df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08211410 +0x54e4:  lea    -0x668(%ebp),%eax
08211416 +0x54ea:  mov    %eax,(%esp)
08211419 +0x54ed:  call   0807e3b0 <_init+0xca8>
0821141e +0x54f2:  mov    %eax,0x8(%esp)
08211422 +0x54f6:  lea    -0x668(%ebp),%eax
08211428 +0x54fc:  mov    %eax,0x4(%esp)
0821142c +0x5500:  lea    -0x320(%ebp),%eax
08211432 +0x5506:  mov    %eax,(%esp)
08211435 +0x5509:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0821143a +0x550e:  movl   $0x1,0x4(%esp)
08211442 +0x5516:  lea    -0x320(%ebp),%eax
08211448 +0x551c:  mov    %eax,(%esp)
0821144b +0x551f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08211450 +0x5524:  lea    -0x320(%ebp),%eax
08211456 +0x552a:  mov    %eax,0x4(%esp)
0821145a +0x552e:  mov    0xc(%ebp),%eax
0821145d +0x5531:  mov    %eax,(%esp)
08211460 +0x5534:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08211465 +0x5539:  mov    $0x0,%ebx
0821146a +0x553e:  lea    -0x320(%ebp),%eax
08211470 +0x5544:  mov    %eax,(%esp)
08211473 +0x5547:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08211478 +0x554c:  jmp    0821345f <+0x7533>
0821147d +0x5551:  mov    %edx,%ebx
0821147f +0x5553:  mov    %eax,%esi
08211481 +0x5555:  lea    -0x320(%ebp),%eax
08211487 +0x555b:  mov    %eax,(%esp)
0821148a +0x555e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821148f +0x5563:  mov    %esi,%eax
08211491 +0x5565:  mov    %ebx,%edx
08211493 +0x5567:  jmp    08213447 <+0x751b>
08211498 +0x556c:  mov    -0x90(%ebp),%eax
0821149e +0x5572:  mov    %eax,(%esp)
082114a1 +0x5575:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
082114a6 +0x557a:  mov    %eax,-0x8c(%ebp)
082114ac +0x5580:  movl   $0x64,-0x88(%ebp)
082114b6 +0x558a:  cmpl   $0x0,-0x90(%ebp)
082114bd +0x5591:  je     08211500 <+0x55d4>
082114bf +0x5593:  mov    -0x90(%ebp),%eax
082114c5 +0x5599:  mov    %eax,(%esp)
082114c8 +0x559c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
082114cd +0x55a1:  test   %al,%al
082114cf +0x55a3:  je     08211500 <+0x55d4>
082114d1 +0x55a5:  mov    -0x90(%ebp),%eax
082114d7 +0x55ab:  mov    %eax,(%esp)
082114da +0x55ae:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
082114df +0x55b3:  cmp    -0x88(%ebp),%eax
082114e5 +0x55b9:  setl   %al
082114e8 +0x55bc:  test   %al,%al
082114ea +0x55be:  je     08211500 <+0x55d4>
082114ec +0x55c0:  mov    -0x90(%ebp),%eax
082114f2 +0x55c6:  mov    %eax,(%esp)
082114f5 +0x55c9:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
082114fa +0x55ce:  mov    %eax,-0x88(%ebp)
08211500 +0x55d4:  mov    -0x8c(%ebp),%eax
08211506 +0x55da:  movl   $0x0,0x14(%esp)
0821150e +0x55e2:  lea    -0x314(%ebp),%edx
08211514 +0x55e8:  mov    %edx,0x10(%esp)
08211518 +0x55ec:  movl   $0x6,0xc(%esp)
08211520 +0x55f4:  mov    -0x88(%ebp),%edx
08211526 +0x55fa:  mov    %edx,0x8(%esp)
0821152a +0x55fe:  mov    %eax,0x4(%esp)
0821152e +0x5602:  mov    0xc(%ebp),%eax
08211531 +0x5605:  mov    %eax,(%esp)
08211534 +0x5608:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
08211539 +0x560d:  mov    %eax,-0x84(%ebp)
0821153f +0x5613:  cmpl   $0x0,-0x84(%ebp)
08211546 +0x561a:  js     08211647 <+0x571b>
0821154c +0x5620:  mov    0xc(%ebp),%eax
0821154f +0x5623:  mov    %eax,(%esp)
08211552 +0x5626:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
08211557 +0x562b:  mov    -0x84(%ebp),%edx
0821155d +0x5631:  mov    %edx,0x8(%esp)
08211561 +0x5635:  movl   $0x1,0x4(%esp)
08211569 +0x563d:  mov    %eax,(%esp)
0821156c +0x5640:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08211571 +0x5645:  mov    %eax,-0x80(%ebp)
08211574 +0x5648:  cmpl   $0x0,-0x80(%ebp)
08211578 +0x564c:  je     082115a3 <+0x5677>
0821157a +0x564e:  movl   $0x2,0x4(%esp)
08211582 +0x5656:  mov    0x14(%ebp),%eax
08211585 +0x5659:  mov    %eax,(%esp)
08211588 +0x565c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821158d +0x5661:  mov    %eax,(%esp)
08211590 +0x5664:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08211595 +0x5669:  mov    %eax,(%esp)
08211598 +0x566c:  call   0807e6f0 <_init+0xfe8>
0821159d +0x5671:  mov    -0x80(%ebp),%edx
082115a0 +0x5674:  mov    %eax,0x7(%edx)
082115a3 +0x5677:  mov    0xc(%ebp),%eax
082115a6 +0x567a:  mov    %eax,(%esp)
082115a9 +0x567d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082115ae +0x5682:  mov    %eax,%esi
082115b0 +0x5684:  mov    0xc(%ebp),%eax
082115b3 +0x5687:  mov    %eax,(%esp)
082115b6 +0x568a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082115bb +0x568f:  movl   $0x0,0x4(%esp)
082115c3 +0x5697:  mov    %eax,(%esp)
082115c6 +0x569a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082115cb +0x569f:  mov    %eax,%ebx
082115cd +0x56a1:  movl   $0x0,0xc(%esp)
082115d5 +0x56a9:  movl   $0xb9fb,0x8(%esp)
082115dd +0x56b1:  movl   $&_ZZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEEE19__PRETTY_FUNCTION__,0x4(%esp)
082115e5 +0x56b9:  lea    -0x144(%ebp),%eax
082115eb +0x56bf:  mov    %eax,(%esp)
082115ee +0x56c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082115f3 +0x56c7:  mov    -0x84(%ebp),%eax
082115f9 +0x56cd:  mov    %eax,0x10(%esp)
082115fd +0x56d1:  mov    %esi,0xc(%esp)
08211601 +0x56d5:  mov    %ebx,0x8(%esp)
08211605 +0x56d9:  movl   $"%s:'%s' GM Mode Add Item(%d).",0x4(%esp)
0821160d +0x56e1:  lea    -0x144(%ebp),%eax
08211613 +0x56e7:  mov    %eax,(%esp)
08211616 +0x56ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821161b +0x56ef:  mov    -0x314(%ebp),%eax
08211621 +0x56f5:  mov    -0x84(%ebp),%edx
08211627 +0x56fb:  mov    %edx,0xc(%esp)
0821162b +0x56ff:  mov    %eax,0x8(%esp)
0821162f +0x5703:  movl   $0x1,0x4(%esp)
08211637 +0x570b:  mov    0xc(%ebp),%eax
0821163a +0x570e:  mov    %eax,(%esp)
0821163d +0x5711:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08211642 +0x5716:  jmp    08213440 <+0x7514>
08211647 +0x571b:  mov    $0x0,%ebx
0821164c +0x5720:  jmp    0821345f <+0x7533>
08211651 +0x5725:  movl   $0x0,0x4(%esp)
08211659 +0x572d:  mov    0x14(%ebp),%eax
0821165c +0x5730:  mov    %eax,(%esp)
0821165f +0x5733:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211664 +0x5738:  movl   $"moveavatar",0x4(%esp)
0821166c +0x5740:  mov    %eax,(%esp)
0821166f +0x5743:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211674 +0x5748:  test   %al,%al
08211676 +0x574a:  jne    0821169f <+0x5773>
08211678 +0x574c:  movl   $0x0,0x4(%esp)
08211680 +0x5754:  mov    0x14(%ebp),%eax
08211683 +0x5757:  mov    %eax,(%esp)
08211686 +0x575a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821168b +0x575f:  movl   $"mva",0x4(%esp)
08211693 +0x5767:  mov    %eax,(%esp)
08211696 +0x576a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821169b +0x576f:  test   %al,%al
0821169d +0x5771:  je     082116a6 <+0x577a>
0821169f +0x5773:  mov    $0x1,%eax
082116a4 +0x5778:  jmp    082116ab <+0x577f>
082116a6 +0x577a:  mov    $0x0,%eax
082116ab +0x577f:  test   %al,%al
082116ad +0x5781:  je     0821189f <+0x5973>
082116b3 +0x5787:  call   0823453e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9be8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9be8
082116b8 +0x578c:  movl   $0x13,0x4(%esp)
082116c0 +0x5794:  mov    %eax,(%esp)
082116c3 +0x5797:  call   08231f2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x75d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x75d8
082116c8 +0x579c:  mov    %eax,-0x7c(%ebp)
082116cb +0x579f:  cmpl   $0x0,-0x7c(%ebp)
082116cf +0x57a3:  jne    082116db <+0x57af>
082116d1 +0x57a5:  mov    $0x0,%ebx
082116d6 +0x57aa:  jmp    0821345f <+0x7533>
082116db +0x57af:  lea    -0x32c(%ebp),%eax
082116e1 +0x57b5:  mov    %eax,(%esp)
082116e4 +0x57b8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082116e9 +0x57bd:  movl   $0x13,0x8(%esp)
082116f1 +0x57c5:  movl   $0x1,0x4(%esp)
082116f9 +0x57cd:  lea    -0x32c(%ebp),%eax
082116ff +0x57d3:  mov    %eax,(%esp)
08211702 +0x57d6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08211707 +0x57db:  movl   $0x1,0x4(%esp)
0821170f +0x57e3:  lea    -0x32c(%ebp),%eax
08211715 +0x57e9:  mov    %eax,(%esp)
08211718 +0x57ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821171d +0x57f1:  movl   $0x0,0x4(%esp)
08211725 +0x57f9:  lea    -0x32c(%ebp),%eax
0821172b +0x57ff:  mov    %eax,(%esp)
0821172e +0x5802:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08211733 +0x5807:  movl   $0x0,0x4(%esp)
0821173b +0x580f:  lea    -0x32c(%ebp),%eax
08211741 +0x5815:  mov    %eax,(%esp)
08211744 +0x5818:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08211749 +0x581d:  movl   $0x1,0x4(%esp)
08211751 +0x5825:  lea    -0x32c(%ebp),%eax
08211757 +0x582b:  mov    %eax,(%esp)
0821175a +0x582e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821175f +0x5833:  movl   $0x3,0x4(%esp)
08211767 +0x583b:  lea    -0x32c(%ebp),%eax
0821176d +0x5841:  mov    %eax,(%esp)
08211770 +0x5844:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08211775 +0x5849:  movl   $0x1,0x4(%esp)
0821177d +0x5851:  lea    -0x32c(%ebp),%eax
08211783 +0x5857:  mov    %eax,(%esp)
08211786 +0x585a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821178b +0x585f:  movl   $0x9b07,0x4(%esp)
08211793 +0x5867:  lea    -0x32c(%ebp),%eax
08211799 +0x586d:  mov    %eax,(%esp)
0821179c +0x5870:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082117a1 +0x5875:  movl   $0x0,0x4(%esp)
082117a9 +0x587d:  lea    -0x32c(%ebp),%eax
082117af +0x5883:  mov    %eax,(%esp)
082117b2 +0x5886:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082117b7 +0x588b:  movl   $0x0,0x4(%esp)
082117bf +0x5893:  lea    -0x32c(%ebp),%eax
082117c5 +0x5899:  mov    %eax,(%esp)
082117c8 +0x589c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082117cd +0x58a1:  movl   $0x0,0x4(%esp)
082117d5 +0x58a9:  lea    -0x32c(%ebp),%eax
082117db +0x58af:  mov    %eax,(%esp)
082117de +0x58b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082117e3 +0x58b7:  movl   $0x0,0x4(%esp)
082117eb +0x58bf:  lea    -0x32c(%ebp),%eax
082117f1 +0x58c5:  mov    %eax,(%esp)
082117f4 +0x58c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082117f9 +0x58cd:  movl   $0x0,0x4(%esp)
08211801 +0x58d5:  lea    -0x32c(%ebp),%eax
08211807 +0x58db:  mov    %eax,(%esp)
0821180a +0x58de:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821180f +0x58e3:  movl   $0xf,0x4(%esp)
08211817 +0x58eb:  lea    -0x32c(%ebp),%eax
0821181d +0x58f1:  mov    %eax,(%esp)
08211820 +0x58f4:  call   0822b7b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe5a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe5a
08211825 +0x58f9:  mov    -0x7c(%ebp),%eax
08211828 +0x58fc:  mov    (%eax),%eax
0821182a +0x58fe:  mov    (%eax),%esi
0821182c +0x5900:  lea    -0x32c(%ebp),%eax
08211832 +0x5906:  mov    %eax,(%esp)
08211835 +0x5909:  call   0822b766 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe10
0821183a +0x590e:  mov    %eax,0x8(%esp)
0821183e +0x5912:  mov    0xc(%ebp),%eax
08211841 +0x5915:  mov    %eax,0x4(%esp)
08211845 +0x5919:  mov    -0x7c(%ebp),%eax
08211848 +0x591c:  mov    %eax,(%esp)
0821184b +0x591f:  call   *%esi
0821184d +0x5921:  test   %eax,%eax
0821184f +0x5923:  setne  %al
08211852 +0x5926:  test   %al,%al
08211854 +0x5928:  je     08211862 <+0x5936>
08211856 +0x592a:  mov    $0x0,%ebx
0821185b +0x592f:  mov    $0x0,%esi
08211860 +0x5934:  jmp    08211884 <+0x5958>
08211862 +0x5936:  mov    $0x1,%esi
08211867 +0x593b:  jmp    08211884 <+0x5958>
08211869 +0x593d:  mov    %edx,%ebx
0821186b +0x593f:  mov    %eax,%esi
0821186d +0x5941:  lea    -0x32c(%ebp),%eax
08211873 +0x5947:  mov    %eax,(%esp)
08211876 +0x594a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821187b +0x594f:  mov    %esi,%eax
0821187d +0x5951:  mov    %ebx,%edx
0821187f +0x5953:  jmp    08213447 <+0x751b>
08211884 +0x5958:  lea    -0x32c(%ebp),%eax
0821188a +0x595e:  mov    %eax,(%esp)
0821188d +0x5961:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08211892 +0x5966:  test   %esi,%esi
08211894 +0x5968:  je     0821345f <+0x7533>
0821189a +0x596e:  jmp    08213440 <+0x7514>
0821189f +0x5973:  movl   $0x0,0x4(%esp)
082118a7 +0x597b:  mov    0x14(%ebp),%eax
082118aa +0x597e:  mov    %eax,(%esp)
082118ad +0x5981:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082118b2 +0x5986:  movl   $"quickon",0x4(%esp)
082118ba +0x598e:  mov    %eax,(%esp)
082118bd +0x5991:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082118c2 +0x5996:  test   %al,%al
082118c4 +0x5998:  jne    082118ed <+0x59c1>
082118c6 +0x599a:  movl   $0x0,0x4(%esp)
082118ce +0x59a2:  mov    0x14(%ebp),%eax
082118d1 +0x59a5:  mov    %eax,(%esp)
082118d4 +0x59a8:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082118d9 +0x59ad:  movl   $"qon",0x4(%esp)
082118e1 +0x59b5:  mov    %eax,(%esp)
082118e4 +0x59b8:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082118e9 +0x59bd:  test   %al,%al
082118eb +0x59bf:  je     082118f4 <+0x59c8>
082118ed +0x59c1:  mov    $0x1,%eax
082118f2 +0x59c6:  jmp    082118f9 <+0x59cd>
082118f4 +0x59c8:  mov    $0x0,%eax
082118f9 +0x59cd:  test   %al,%al
082118fb +0x59cf:  je     08211968 <+0x5a3c>
082118fd +0x59d1:  mov    0xc(%ebp),%eax
08211900 +0x59d4:  mov    %eax,(%esp)
08211903 +0x59d7:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08211908 +0x59dc:  mov    %eax,-0x78(%ebp)
0821190b +0x59df:  cmpl   $0x0,-0x78(%ebp)
0821190f +0x59e3:  je     08211928 <+0x59fc>
08211911 +0x59e5:  mov    -0x78(%ebp),%eax
08211914 +0x59e8:  mov    %eax,(%esp)
08211917 +0x59eb:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0821191c +0x59f0:  cmp    $0x1,%eax
0821191f +0x59f3:  jle    08211928 <+0x59fc>
08211921 +0x59f5:  mov    $0x1,%eax
08211926 +0x59fa:  jmp    0821192d <+0x5a01>
08211928 +0x59fc:  mov    $0x0,%eax
0821192d +0x5a01:  test   %al,%al
0821192f +0x5a03:  je     08213440 <+0x7514>
08211935 +0x5a09:  movl   $0x0,0x8(%esp)
0821193d +0x5a11:  movl   $0x1,0x4(%esp)
08211945 +0x5a19:  mov    -0x78(%ebp),%eax
08211948 +0x5a1c:  mov    %eax,(%esp)
0821194b +0x5a1f:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
08211950 +0x5a24:  movl   $0x1,0x4(%esp)
08211958 +0x5a2c:  mov    -0x78(%ebp),%eax
0821195b +0x5a2f:  mov    %eax,(%esp)
0821195e +0x5a32:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
08211963 +0x5a37:  jmp    08213440 <+0x7514>
08211968 +0x5a3c:  movl   $0x0,0x4(%esp)
08211970 +0x5a44:  mov    0x14(%ebp),%eax
08211973 +0x5a47:  mov    %eax,(%esp)
08211976 +0x5a4a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821197b +0x5a4f:  movl   $"quickoff",0x4(%esp)
08211983 +0x5a57:  mov    %eax,(%esp)
08211986 +0x5a5a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821198b +0x5a5f:  test   %al,%al
0821198d +0x5a61:  jne    082119b6 <+0x5a8a>
0821198f +0x5a63:  movl   $0x0,0x4(%esp)
08211997 +0x5a6b:  mov    0x14(%ebp),%eax
0821199a +0x5a6e:  mov    %eax,(%esp)
0821199d +0x5a71:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082119a2 +0x5a76:  movl   $"qoff",0x4(%esp)
082119aa +0x5a7e:  mov    %eax,(%esp)
082119ad +0x5a81:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082119b2 +0x5a86:  test   %al,%al
082119b4 +0x5a88:  je     082119bd <+0x5a91>
082119b6 +0x5a8a:  mov    $0x1,%eax
082119bb +0x5a8f:  jmp    082119c2 <+0x5a96>
082119bd +0x5a91:  mov    $0x0,%eax
082119c2 +0x5a96:  test   %al,%al
082119c4 +0x5a98:  je     08211a31 <+0x5b05>
082119c6 +0x5a9a:  mov    0xc(%ebp),%eax
082119c9 +0x5a9d:  mov    %eax,(%esp)
082119cc +0x5aa0:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082119d1 +0x5aa5:  mov    %eax,-0x74(%ebp)
082119d4 +0x5aa8:  cmpl   $0x0,-0x74(%ebp)
082119d8 +0x5aac:  je     082119f1 <+0x5ac5>
082119da +0x5aae:  mov    -0x74(%ebp),%eax
082119dd +0x5ab1:  mov    %eax,(%esp)
082119e0 +0x5ab4:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082119e5 +0x5ab9:  cmp    $0x1,%eax
082119e8 +0x5abc:  jle    082119f1 <+0x5ac5>
082119ea +0x5abe:  mov    $0x1,%eax
082119ef +0x5ac3:  jmp    082119f6 <+0x5aca>
082119f1 +0x5ac5:  mov    $0x0,%eax
082119f6 +0x5aca:  test   %al,%al
082119f8 +0x5acc:  je     08213440 <+0x7514>
082119fe +0x5ad2:  movl   $0x0,0x8(%esp)
08211a06 +0x5ada:  movl   $0x0,0x4(%esp)
08211a0e +0x5ae2:  mov    -0x74(%ebp),%eax
08211a11 +0x5ae5:  mov    %eax,(%esp)
08211a14 +0x5ae8:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
08211a19 +0x5aed:  movl   $0x0,0x4(%esp)
08211a21 +0x5af5:  mov    -0x74(%ebp),%eax
08211a24 +0x5af8:  mov    %eax,(%esp)
08211a27 +0x5afb:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
08211a2c +0x5b00:  jmp    08213440 <+0x7514>
08211a31 +0x5b05:  movl   $0x0,0x4(%esp)
08211a39 +0x5b0d:  mov    0x14(%ebp),%eax
08211a3c +0x5b10:  mov    %eax,(%esp)
08211a3f +0x5b13:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211a44 +0x5b18:  movl   $"quickreward",0x4(%esp)
08211a4c +0x5b20:  mov    %eax,(%esp)
08211a4f +0x5b23:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211a54 +0x5b28:  test   %al,%al
08211a56 +0x5b2a:  jne    08211a7f <+0x5b53>
08211a58 +0x5b2c:  movl   $0x0,0x4(%esp)
08211a60 +0x5b34:  mov    0x14(%ebp),%eax
08211a63 +0x5b37:  mov    %eax,(%esp)
08211a66 +0x5b3a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211a6b +0x5b3f:  movl   $"qr",0x4(%esp)
08211a73 +0x5b47:  mov    %eax,(%esp)
08211a76 +0x5b4a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211a7b +0x5b4f:  test   %al,%al
08211a7d +0x5b51:  je     08211a86 <+0x5b5a>
08211a7f +0x5b53:  mov    $0x1,%eax
08211a84 +0x5b58:  jmp    08211a8b <+0x5b5f>
08211a86 +0x5b5a:  mov    $0x0,%eax
08211a8b +0x5b5f:  test   %al,%al
08211a8d +0x5b61:  je     08211c6a <+0x5d3e>
08211a93 +0x5b67:  movl   $0x1,0x4(%esp)
08211a9b +0x5b6f:  mov    0x14(%ebp),%eax
08211a9e +0x5b72:  mov    %eax,(%esp)
08211aa1 +0x5b75:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211aa6 +0x5b7a:  mov    %eax,(%esp)
08211aa9 +0x5b7d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08211aae +0x5b82:  mov    %eax,(%esp)
08211ab1 +0x5b85:  call   0807e6f0 <_init+0xfe8>
08211ab6 +0x5b8a:  mov    %eax,-0x70(%ebp)
08211ab9 +0x5b8d:  cmpl   $0x0,-0x70(%ebp)
08211abd +0x5b91:  js     08211ac5 <+0x5b99>
08211abf +0x5b93:  cmpl   $0xa,-0x70(%ebp)
08211ac3 +0x5b97:  jle    08211acf <+0x5ba3>
08211ac5 +0x5b99:  mov    $0x0,%ebx
08211aca +0x5b9e:  jmp    0821345f <+0x7533>
08211acf +0x5ba3:  mov    0xc(%ebp),%eax
08211ad2 +0x5ba6:  mov    %eax,(%esp)
08211ad5 +0x5ba9:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08211ada +0x5bae:  mov    %eax,-0x6c(%ebp)
08211add +0x5bb1:  cmpl   $0x0,-0x6c(%ebp)
08211ae1 +0x5bb5:  je     08211afa <+0x5bce>
08211ae3 +0x5bb7:  mov    -0x6c(%ebp),%eax
08211ae6 +0x5bba:  mov    %eax,(%esp)
08211ae9 +0x5bbd:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08211aee +0x5bc2:  cmp    $0x1,%eax
08211af1 +0x5bc5:  jle    08211afa <+0x5bce>
08211af3 +0x5bc7:  mov    $0x1,%eax
08211af8 +0x5bcc:  jmp    08211aff <+0x5bd3>
08211afa +0x5bce:  mov    $0x0,%eax
08211aff +0x5bd3:  test   %al,%al
08211b01 +0x5bd5:  je     08213440 <+0x7514>
08211b07 +0x5bdb:  mov    -0x70(%ebp),%eax
08211b0a +0x5bde:  mov    %eax,0x4(%esp)
08211b0e +0x5be2:  mov    -0x6c(%ebp),%eax
08211b11 +0x5be5:  mov    %eax,(%esp)
08211b14 +0x5be8:  call   0822d962 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x300c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x300c
08211b19 +0x5bed:  lea    -0x668(%ebp),%edx
08211b1f +0x5bf3:  mov    $0x0,%eax
08211b24 +0x5bf8:  mov    $0x3f,%ecx
08211b29 +0x5bfd:  mov    %edx,%edi
08211b2b +0x5bff:  rep stos %eax,%es:(%edi)
08211b2d +0x5c01:  mov    %edi,%edx
08211b2f +0x5c03:  mov    %ax,(%edx)
08211b32 +0x5c06:  add    $0x2,%edx
08211b35 +0x5c09:  mov    %al,(%edx)
08211b37 +0x5c0b:  add    $0x1,%edx
08211b3a +0x5c0e:  mov    -0x70(%ebp),%eax
08211b3d +0x5c11:  mov    %eax,0x8(%esp)
08211b41 +0x5c15:  movl   $"GM QUICK PARTY RANDOM BUFF (%d) TYPE!!",0x4(%esp)
08211b49 +0x5c1d:  lea    -0x668(%ebp),%eax
08211b4f +0x5c23:  mov    %eax,(%esp)
08211b52 +0x5c26:  call   0807e440 <_init+0xd38>
08211b57 +0x5c2b:  lea    -0x338(%ebp),%eax
08211b5d +0x5c31:  mov    %eax,(%esp)
08211b60 +0x5c34:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08211b65 +0x5c39:  movl   $0xc,0x8(%esp)
08211b6d +0x5c41:  movl   $0x0,0x4(%esp)
08211b75 +0x5c49:  lea    -0x338(%ebp),%eax
08211b7b +0x5c4f:  mov    %eax,(%esp)
08211b7e +0x5c52:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08211b83 +0x5c57:  movl   $0x0,0x4(%esp)
08211b8b +0x5c5f:  lea    -0x338(%ebp),%eax
08211b91 +0x5c65:  mov    %eax,(%esp)
08211b94 +0x5c68:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08211b99 +0x5c6d:  movl   $0x0,0x4(%esp)
08211ba1 +0x5c75:  lea    -0x338(%ebp),%eax
08211ba7 +0x5c7b:  mov    %eax,(%esp)
08211baa +0x5c7e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08211baf +0x5c83:  movl   $0x0,0x4(%esp)
08211bb7 +0x5c8b:  lea    -0x338(%ebp),%eax
08211bbd +0x5c91:  mov    %eax,(%esp)
08211bc0 +0x5c94:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08211bc5 +0x5c99:  lea    -0x668(%ebp),%eax
08211bcb +0x5c9f:  mov    %eax,(%esp)
08211bce +0x5ca2:  call   0807e3b0 <_init+0xca8>
08211bd3 +0x5ca7:  mov    %eax,0x4(%esp)
08211bd7 +0x5cab:  lea    -0x338(%ebp),%eax
08211bdd +0x5cb1:  mov    %eax,(%esp)
08211be0 +0x5cb4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08211be5 +0x5cb9:  lea    -0x668(%ebp),%eax
08211beb +0x5cbf:  mov    %eax,(%esp)
08211bee +0x5cc2:  call   0807e3b0 <_init+0xca8>
08211bf3 +0x5cc7:  mov    %eax,0x8(%esp)
08211bf7 +0x5ccb:  lea    -0x668(%ebp),%eax
08211bfd +0x5cd1:  mov    %eax,0x4(%esp)
08211c01 +0x5cd5:  lea    -0x338(%ebp),%eax
08211c07 +0x5cdb:  mov    %eax,(%esp)
08211c0a +0x5cde:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08211c0f +0x5ce3:  movl   $0x1,0x4(%esp)
08211c17 +0x5ceb:  lea    -0x338(%ebp),%eax
08211c1d +0x5cf1:  mov    %eax,(%esp)
08211c20 +0x5cf4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08211c25 +0x5cf9:  lea    -0x338(%ebp),%eax
08211c2b +0x5cff:  mov    %eax,0x4(%esp)
08211c2f +0x5d03:  mov    -0x6c(%ebp),%eax
08211c32 +0x5d06:  mov    %eax,(%esp)
08211c35 +0x5d09:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08211c3a +0x5d0e:  jmp    08211c57 <+0x5d2b>
08211c3c +0x5d10:  mov    %edx,%ebx
08211c3e +0x5d12:  mov    %eax,%esi
08211c40 +0x5d14:  lea    -0x338(%ebp),%eax
08211c46 +0x5d1a:  mov    %eax,(%esp)
08211c49 +0x5d1d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08211c4e +0x5d22:  mov    %esi,%eax
08211c50 +0x5d24:  mov    %ebx,%edx
08211c52 +0x5d26:  jmp    08213447 <+0x751b>
08211c57 +0x5d2b:  lea    -0x338(%ebp),%eax
08211c5d +0x5d31:  mov    %eax,(%esp)
08211c60 +0x5d34:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08211c65 +0x5d39:  jmp    08213440 <+0x7514>
08211c6a +0x5d3e:  movl   $0x0,0x4(%esp)
08211c72 +0x5d46:  mov    0x14(%ebp),%eax
08211c75 +0x5d49:  mov    %eax,(%esp)
08211c78 +0x5d4c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211c7d +0x5d51:  movl   $"hellvalue",0x4(%esp)
08211c85 +0x5d59:  mov    %eax,(%esp)
08211c88 +0x5d5c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211c8d +0x5d61:  test   %al,%al
08211c8f +0x5d63:  jne    08211cb8 <+0x5d8c>
08211c91 +0x5d65:  movl   $0x0,0x4(%esp)
08211c99 +0x5d6d:  mov    0x14(%ebp),%eax
08211c9c +0x5d70:  mov    %eax,(%esp)
08211c9f +0x5d73:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211ca4 +0x5d78:  movl   $"hv",0x4(%esp)
08211cac +0x5d80:  mov    %eax,(%esp)
08211caf +0x5d83:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211cb4 +0x5d88:  test   %al,%al
08211cb6 +0x5d8a:  je     08211cbf <+0x5d93>
08211cb8 +0x5d8c:  mov    $0x1,%eax
08211cbd +0x5d91:  jmp    08211cc4 <+0x5d98>
08211cbf +0x5d93:  mov    $0x0,%eax
08211cc4 +0x5d98:  test   %al,%al
08211cc6 +0x5d9a:  je     08211ec1 <+0x5f95>
08211ccc +0x5da0:  movl   $0x1,0x4(%esp)
08211cd4 +0x5da8:  mov    0x14(%ebp),%eax
08211cd7 +0x5dab:  mov    %eax,(%esp)
08211cda +0x5dae:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211cdf +0x5db3:  mov    %eax,(%esp)
08211ce2 +0x5db6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08211ce7 +0x5dbb:  mov    %eax,(%esp)
08211cea +0x5dbe:  call   0807e6f0 <_init+0xfe8>
08211cef +0x5dc3:  mov    %eax,-0x68(%ebp)
08211cf2 +0x5dc6:  cmpl   $0x0,-0x68(%ebp)
08211cf6 +0x5dca:  js     08211cfe <+0x5dd2>
08211cf8 +0x5dcc:  cmpl   $0x64,-0x68(%ebp)
08211cfc +0x5dd0:  jle    08211d08 <+0x5ddc>
08211cfe +0x5dd2:  mov    $0x0,%ebx
08211d03 +0x5dd7:  jmp    0821345f <+0x7533>
08211d08 +0x5ddc:  mov    0xc(%ebp),%eax
08211d0b +0x5ddf:  mov    %eax,(%esp)
08211d0e +0x5de2:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08211d13 +0x5de7:  mov    %eax,-0x64(%ebp)
08211d16 +0x5dea:  cmpl   $0x0,-0x64(%ebp)
08211d1a +0x5dee:  je     08211d33 <+0x5e07>
08211d1c +0x5df0:  mov    -0x64(%ebp),%eax
08211d1f +0x5df3:  mov    %eax,(%esp)
08211d22 +0x5df6:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08211d27 +0x5dfb:  cmp    $0x1,%eax
08211d2a +0x5dfe:  jle    08211d33 <+0x5e07>
08211d2c +0x5e00:  mov    $0x1,%eax
08211d31 +0x5e05:  jmp    08211d38 <+0x5e0c>
08211d33 +0x5e07:  mov    $0x0,%eax
08211d38 +0x5e0c:  test   %al,%al
08211d3a +0x5e0e:  je     08213440 <+0x7514>
08211d40 +0x5e14:  mov    -0x64(%ebp),%eax
08211d43 +0x5e17:  lea    0x32c(%eax),%edx
08211d49 +0x5e1d:  mov    -0x68(%ebp),%eax
08211d4c +0x5e20:  mov    %eax,0x4(%esp)
08211d50 +0x5e24:  mov    %edx,(%esp)
08211d53 +0x5e27:  call   0822d7b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e5c
08211d58 +0x5e2c:  mov    -0x64(%ebp),%eax
08211d5b +0x5e2f:  mov    %eax,(%esp)
08211d5e +0x5e32:  call   085b697c <_ZN6CParty20send_hellParty_valueEv>  ; CParty::send_hellParty_value()
08211d63 +0x5e37:  lea    -0x668(%ebp),%edx
08211d69 +0x5e3d:  mov    $0x0,%eax
08211d6e +0x5e42:  mov    $0x3f,%ecx
08211d73 +0x5e47:  mov    %edx,%edi
08211d75 +0x5e49:  rep stos %eax,%es:(%edi)
08211d77 +0x5e4b:  mov    %edi,%edx
08211d79 +0x5e4d:  mov    %ax,(%edx)
08211d7c +0x5e50:  add    $0x2,%edx
08211d7f +0x5e53:  mov    %al,(%edx)
08211d81 +0x5e55:  add    $0x1,%edx
08211d84 +0x5e58:  mov    -0x64(%ebp),%eax
08211d87 +0x5e5b:  add    $0x32c,%eax
08211d8c +0x5e60:  mov    %eax,(%esp)
08211d8f +0x5e63:  call   0822d7c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e6e
08211d94 +0x5e68:  mov    %eax,0x8(%esp)
08211d98 +0x5e6c:  movl   $"HELL PARTY VALUE (%d)",0x4(%esp)
08211da0 +0x5e74:  lea    -0x668(%ebp),%eax
08211da6 +0x5e7a:  mov    %eax,(%esp)
08211da9 +0x5e7d:  call   0807e440 <_init+0xd38>
08211dae +0x5e82:  lea    -0x344(%ebp),%eax
08211db4 +0x5e88:  mov    %eax,(%esp)
08211db7 +0x5e8b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08211dbc +0x5e90:  movl   $0xc,0x8(%esp)
08211dc4 +0x5e98:  movl   $0x0,0x4(%esp)
08211dcc +0x5ea0:  lea    -0x344(%ebp),%eax
08211dd2 +0x5ea6:  mov    %eax,(%esp)
08211dd5 +0x5ea9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08211dda +0x5eae:  movl   $0x0,0x4(%esp)
08211de2 +0x5eb6:  lea    -0x344(%ebp),%eax
08211de8 +0x5ebc:  mov    %eax,(%esp)
08211deb +0x5ebf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08211df0 +0x5ec4:  movl   $0x0,0x4(%esp)
08211df8 +0x5ecc:  lea    -0x344(%ebp),%eax
08211dfe +0x5ed2:  mov    %eax,(%esp)
08211e01 +0x5ed5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08211e06 +0x5eda:  movl   $0x0,0x4(%esp)
08211e0e +0x5ee2:  lea    -0x344(%ebp),%eax
08211e14 +0x5ee8:  mov    %eax,(%esp)
08211e17 +0x5eeb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08211e1c +0x5ef0:  lea    -0x668(%ebp),%eax
08211e22 +0x5ef6:  mov    %eax,(%esp)
08211e25 +0x5ef9:  call   0807e3b0 <_init+0xca8>
08211e2a +0x5efe:  mov    %eax,0x4(%esp)
08211e2e +0x5f02:  lea    -0x344(%ebp),%eax
08211e34 +0x5f08:  mov    %eax,(%esp)
08211e37 +0x5f0b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08211e3c +0x5f10:  lea    -0x668(%ebp),%eax
08211e42 +0x5f16:  mov    %eax,(%esp)
08211e45 +0x5f19:  call   0807e3b0 <_init+0xca8>
08211e4a +0x5f1e:  mov    %eax,0x8(%esp)
08211e4e +0x5f22:  lea    -0x668(%ebp),%eax
08211e54 +0x5f28:  mov    %eax,0x4(%esp)
08211e58 +0x5f2c:  lea    -0x344(%ebp),%eax
08211e5e +0x5f32:  mov    %eax,(%esp)
08211e61 +0x5f35:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08211e66 +0x5f3a:  movl   $0x1,0x4(%esp)
08211e6e +0x5f42:  lea    -0x344(%ebp),%eax
08211e74 +0x5f48:  mov    %eax,(%esp)
08211e77 +0x5f4b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08211e7c +0x5f50:  lea    -0x344(%ebp),%eax
08211e82 +0x5f56:  mov    %eax,0x4(%esp)
08211e86 +0x5f5a:  mov    -0x64(%ebp),%eax
08211e89 +0x5f5d:  mov    %eax,(%esp)
08211e8c +0x5f60:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08211e91 +0x5f65:  jmp    08211eae <+0x5f82>
08211e93 +0x5f67:  mov    %edx,%ebx
08211e95 +0x5f69:  mov    %eax,%esi
08211e97 +0x5f6b:  lea    -0x344(%ebp),%eax
08211e9d +0x5f71:  mov    %eax,(%esp)
08211ea0 +0x5f74:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08211ea5 +0x5f79:  mov    %esi,%eax
08211ea7 +0x5f7b:  mov    %ebx,%edx
08211ea9 +0x5f7d:  jmp    08213447 <+0x751b>
08211eae +0x5f82:  lea    -0x344(%ebp),%eax
08211eb4 +0x5f88:  mov    %eax,(%esp)
08211eb7 +0x5f8b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08211ebc +0x5f90:  jmp    08213440 <+0x7514>
08211ec1 +0x5f95:  movl   $0x0,0x4(%esp)
08211ec9 +0x5f9d:  mov    0x14(%ebp),%eax
08211ecc +0x5fa0:  mov    %eax,(%esp)
08211ecf +0x5fa3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211ed4 +0x5fa8:  movl   $"statisticlog",0x4(%esp)
08211edc +0x5fb0:  mov    %eax,(%esp)
08211edf +0x5fb3:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211ee4 +0x5fb8:  test   %al,%al
08211ee6 +0x5fba:  jne    08211f0f <+0x5fe3>
08211ee8 +0x5fbc:  movl   $0x0,0x4(%esp)
08211ef0 +0x5fc4:  mov    0x14(%ebp),%eax
08211ef3 +0x5fc7:  mov    %eax,(%esp)
08211ef6 +0x5fca:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211efb +0x5fcf:  movl   $"sl",0x4(%esp)
08211f03 +0x5fd7:  mov    %eax,(%esp)
08211f06 +0x5fda:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211f0b +0x5fdf:  test   %al,%al
08211f0d +0x5fe1:  je     08211f16 <+0x5fea>
08211f0f +0x5fe3:  mov    $0x1,%eax
08211f14 +0x5fe8:  jmp    08211f1b <+0x5fef>
08211f16 +0x5fea:  mov    $0x0,%eax
08211f1b +0x5fef:  test   %al,%al
08211f1d +0x5ff1:  je     08211f7a <+0x604e>
08211f1f +0x5ff3:  lea    -0x352(%ebp),%eax
08211f25 +0x5ff9:  mov    %eax,(%esp)
08211f28 +0x5ffc:  call   0822c4a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1b4c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1b4c
08211f2d +0x6001:  mov    0xc(%ebp),%eax
08211f30 +0x6004:  mov    %eax,(%esp)
08211f33 +0x6007:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08211f38 +0x600c:  mov    %eax,-0x348(%ebp)
08211f3e +0x6012:  lea    -0x352(%ebp),%ebx
08211f44 +0x6018:  mov    0xc(%ebp),%eax
08211f47 +0x601b:  mov    %eax,(%esp)
08211f4a +0x601e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08211f4f +0x6023:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
08211f55 +0x6029:  mov    %eax,0x4(%esp)
08211f59 +0x602d:  mov    %edx,(%esp)
08211f5c +0x6030:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08211f61 +0x6035:  movl   $0xe,0x8(%esp)
08211f69 +0x603d:  mov    %ebx,0x4(%esp)
08211f6d +0x6041:  mov    %eax,(%esp)
08211f70 +0x6044:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08211f75 +0x6049:  jmp    08213440 <+0x7514>
08211f7a +0x604e:  movl   $0x0,0x4(%esp)
08211f82 +0x6056:  mov    0x14(%ebp),%eax
08211f85 +0x6059:  mov    %eax,(%esp)
08211f88 +0x605c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211f8d +0x6061:  movl   $"itemdrop",0x4(%esp)
08211f95 +0x6069:  mov    %eax,(%esp)
08211f98 +0x606c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211f9d +0x6071:  test   %al,%al
08211f9f +0x6073:  je     08211fd8 <+0x60ac>
08211fa1 +0x6075:  movl   $0x1,0x4(%esp)
08211fa9 +0x607d:  mov    0x14(%ebp),%eax
08211fac +0x6080:  mov    %eax,(%esp)
08211faf +0x6083:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211fb4 +0x6088:  mov    %eax,(%esp)
08211fb7 +0x608b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08211fbc +0x6090:  mov    %eax,0x8(%esp)
08211fc0 +0x6094:  movl   $0x6f,0x4(%esp)
08211fc8 +0x609c:  mov    0xc(%ebp),%eax
08211fcb +0x609f:  mov    %eax,(%esp)
08211fce +0x60a2:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
08211fd3 +0x60a7:  jmp    08213440 <+0x7514>
08211fd8 +0x60ac:  movl   $0x0,0x4(%esp)
08211fe0 +0x60b4:  mov    0x14(%ebp),%eax
08211fe3 +0x60b7:  mov    %eax,(%esp)
08211fe6 +0x60ba:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08211feb +0x60bf:  movl   $"upcard",0x4(%esp)
08211ff3 +0x60c7:  mov    %eax,(%esp)
08211ff6 +0x60ca:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08211ffb +0x60cf:  test   %al,%al
08211ffd +0x60d1:  je     08212036 <+0x610a>
08211fff +0x60d3:  movl   $0x1,0x4(%esp)
08212007 +0x60db:  mov    0x14(%ebp),%eax
0821200a +0x60de:  mov    %eax,(%esp)
0821200d +0x60e1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212012 +0x60e6:  mov    %eax,(%esp)
08212015 +0x60e9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821201a +0x60ee:  mov    %eax,0x8(%esp)
0821201e +0x60f2:  movl   $0x70,0x4(%esp)
08212026 +0x60fa:  mov    0xc(%ebp),%eax
08212029 +0x60fd:  mov    %eax,(%esp)
0821202c +0x6100:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
08212031 +0x6105:  jmp    08213440 <+0x7514>
08212036 +0x610a:  movl   $0x0,0x4(%esp)
0821203e +0x6112:  mov    0x14(%ebp),%eax
08212041 +0x6115:  mov    %eax,(%esp)
08212044 +0x6118:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212049 +0x611d:  movl   $"inde",0x4(%esp)
08212051 +0x6125:  mov    %eax,(%esp)
08212054 +0x6128:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212059 +0x612d:  test   %al,%al
0821205b +0x612f:  je     082120b2 <+0x6186>
0821205d +0x6131:  movl   $0x1,0x4(%esp)
08212065 +0x6139:  mov    0x14(%ebp),%eax
08212068 +0x613c:  mov    %eax,(%esp)
0821206b +0x613f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212070 +0x6144:  movl   $"item",0x4(%esp)
08212078 +0x614c:  mov    %eax,(%esp)
0821207b +0x614f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212080 +0x6154:  test   %al,%al
08212082 +0x6156:  je     082120b2 <+0x6186>
08212084 +0x6158:  movl   $0x2,0x4(%esp)
0821208c +0x6160:  mov    0x14(%ebp),%eax
0821208f +0x6163:  mov    %eax,(%esp)
08212092 +0x6166:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212097 +0x616b:  movl   $"drop",0x4(%esp)
0821209f +0x6173:  mov    %eax,(%esp)
082120a2 +0x6176:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082120a7 +0x617b:  test   %al,%al
082120a9 +0x617d:  je     082120b2 <+0x6186>
082120ab +0x617f:  mov    $0x1,%eax
082120b0 +0x6184:  jmp    082120b7 <+0x618b>
082120b2 +0x6186:  mov    $0x0,%eax
082120b7 +0x618b:  test   %al,%al
082120b9 +0x618d:  je     08212162 <+0x6236>
082120bf +0x6193:  lea    -0x358(%ebp),%eax
082120c5 +0x6199:  mov    %eax,(%esp)
082120c8 +0x619c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
082120cd +0x61a1:  mov    0xc(%ebp),%eax
082120d0 +0x61a4:  mov    %eax,(%esp)
082120d3 +0x61a7:  call   0868f716 <_ZN5CUser16getForceDropFlagEv>  ; CUser::getForceDropFlag()
082120d8 +0x61ac:  xor    $0x1,%eax
082120db +0x61af:  test   %al,%al
082120dd +0x61b1:  je     082120f7 <+0x61cb>
082120df +0x61b3:  movl   $"on",0x4(%esp)
082120e7 +0x61bb:  lea    -0x358(%ebp),%eax
082120ed +0x61c1:  mov    %eax,(%esp)
082120f0 +0x61c4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
082120f5 +0x61c9:  jmp    0821210d <+0x61e1>
082120f7 +0x61cb:  movl   $"off",0x4(%esp)
082120ff +0x61d3:  lea    -0x358(%ebp),%eax
08212105 +0x61d9:  mov    %eax,(%esp)
08212108 +0x61dc:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0821210d +0x61e1:  lea    -0x358(%ebp),%eax
08212113 +0x61e7:  mov    %eax,(%esp)
08212116 +0x61ea:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821211b +0x61ef:  mov    %eax,0x8(%esp)
0821211f +0x61f3:  movl   $0x77,0x4(%esp)
08212127 +0x61fb:  mov    0xc(%ebp),%eax
0821212a +0x61fe:  mov    %eax,(%esp)
0821212d +0x6201:  call   0820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>  ; DoUserDefineCommand(CUser*, int, char const*)
08212132 +0x6206:  jmp    0821214f <+0x6223>
08212134 +0x6208:  mov    %edx,%ebx
08212136 +0x620a:  mov    %eax,%esi
08212138 +0x620c:  lea    -0x358(%ebp),%eax
0821213e +0x6212:  mov    %eax,(%esp)
08212141 +0x6215:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08212146 +0x621a:  mov    %esi,%eax
08212148 +0x621c:  mov    %ebx,%edx
0821214a +0x621e:  jmp    08213447 <+0x751b>
0821214f +0x6223:  lea    -0x358(%ebp),%eax
08212155 +0x6229:  mov    %eax,(%esp)
08212158 +0x622c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0821215d +0x6231:  jmp    08213440 <+0x7514>
08212162 +0x6236:  movl   $0x0,0x4(%esp)
0821216a +0x623e:  mov    0x14(%ebp),%eax
0821216d +0x6241:  mov    %eax,(%esp)
08212170 +0x6244:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212175 +0x6249:  movl   $"timegate",0x4(%esp)
0821217d +0x6251:  mov    %eax,(%esp)
08212180 +0x6254:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212185 +0x6259:  test   %al,%al
08212187 +0x625b:  jne    082121b0 <+0x6284>
08212189 +0x625d:  movl   $0x0,0x4(%esp)
08212191 +0x6265:  mov    0x14(%ebp),%eax
08212194 +0x6268:  mov    %eax,(%esp)
08212197 +0x626b:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821219c +0x6270:  movl   $"tg",0x4(%esp)
082121a4 +0x6278:  mov    %eax,(%esp)
082121a7 +0x627b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082121ac +0x6280:  test   %al,%al
082121ae +0x6282:  je     082121b7 <+0x628b>
082121b0 +0x6284:  mov    $0x1,%eax
082121b5 +0x6289:  jmp    082121bc <+0x6290>
082121b7 +0x628b:  mov    $0x0,%eax
082121bc +0x6290:  test   %al,%al
082121be +0x6292:  je     08212260 <+0x6334>
082121c4 +0x6298:  lea    -0x36f(%ebp),%eax
082121ca +0x629e:  mov    %eax,(%esp)
082121cd +0x62a1:  call   0822c7c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1e6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1e6a
082121d2 +0x62a6:  movl   $0x1,0x4(%esp)
082121da +0x62ae:  mov    0x14(%ebp),%eax
082121dd +0x62b1:  mov    %eax,(%esp)
082121e0 +0x62b4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082121e5 +0x62b9:  mov    %eax,(%esp)
082121e8 +0x62bc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082121ed +0x62c1:  mov    %eax,(%esp)
082121f0 +0x62c4:  call   0807e6f0 <_init+0xfe8>
082121f5 +0x62c9:  mov    %eax,-0x364(%ebp)
082121fb +0x62cf:  movl   $0x2,0x4(%esp)
08212203 +0x62d7:  mov    0x14(%ebp),%eax
08212206 +0x62da:  mov    %eax,(%esp)
08212209 +0x62dd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821220e +0x62e2:  mov    %eax,(%esp)
08212211 +0x62e5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212216 +0x62ea:  mov    %eax,(%esp)
08212219 +0x62ed:  call   0807e6f0 <_init+0xfe8>
0821221e +0x62f2:  mov    %eax,-0x360(%ebp)
08212224 +0x62f8:  lea    -0x36f(%ebp),%ebx
0821222a +0x62fe:  mov    0xc(%ebp),%eax
0821222d +0x6301:  mov    %eax,(%esp)
08212230 +0x6304:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08212235 +0x6309:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
0821223b +0x630f:  mov    %eax,0x4(%esp)
0821223f +0x6313:  mov    %edx,(%esp)
08212242 +0x6316:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08212247 +0x631b:  movl   $0x17,0x8(%esp)
0821224f +0x6323:  mov    %ebx,0x4(%esp)
08212253 +0x6327:  mov    %eax,(%esp)
08212256 +0x632a:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
0821225b +0x632f:  jmp    08213440 <+0x7514>
08212260 +0x6334:  movl   $0x0,0x4(%esp)
08212268 +0x633c:  mov    0x14(%ebp),%eax
0821226b +0x633f:  mov    %eax,(%esp)
0821226e +0x6342:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212273 +0x6347:  movl   $"bossdifficult",0x4(%esp)
0821227b +0x634f:  mov    %eax,(%esp)
0821227e +0x6352:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212283 +0x6357:  test   %al,%al
08212285 +0x6359:  je     082122d3 <+0x63a7>
08212287 +0x635b:  movl   $0x1,0x4(%esp)
0821228f +0x6363:  mov    0x14(%ebp),%eax
08212292 +0x6366:  mov    %eax,(%esp)
08212295 +0x6369:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821229a +0x636e:  mov    %eax,(%esp)
0821229d +0x6371:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082122a2 +0x6376:  mov    %eax,(%esp)
082122a5 +0x6379:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
082122aa +0x637e:  mov    %al,-0x5d(%ebp)
082122ad +0x6381:  cmpb   $0x0,-0x5d(%ebp)
082122b1 +0x6385:  jle    08213440 <+0x7514>
082122b7 +0x638b:  cmpb   $0x4,-0x5d(%ebp)
082122bb +0x638f:  jg     08213440 <+0x7514>
082122c1 +0x6395:  mov    0xc(%ebp),%eax
082122c4 +0x6398:  movzbl -0x5d(%ebp),%edx
082122c8 +0x639c:  mov    %dl,0x796cc(%eax)
082122ce +0x63a2:  jmp    08213440 <+0x7514>
082122d3 +0x63a7:  movl   $0x0,0x4(%esp)
082122db +0x63af:  mov    0x14(%ebp),%eax
082122de +0x63b2:  mov    %eax,(%esp)
082122e1 +0x63b5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082122e6 +0x63ba:  movl   $"bossmap",0x4(%esp)
082122ee +0x63c2:  mov    %eax,(%esp)
082122f1 +0x63c5:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082122f6 +0x63ca:  test   %al,%al
082122f8 +0x63cc:  je     08212331 <+0x6405>
082122fa +0x63ce:  movl   $0x1,0x4(%esp)
08212302 +0x63d6:  mov    0x14(%ebp),%eax
08212305 +0x63d9:  mov    %eax,(%esp)
08212308 +0x63dc:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821230d +0x63e1:  mov    %eax,(%esp)
08212310 +0x63e4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212315 +0x63e9:  mov    %eax,(%esp)
08212318 +0x63ec:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
0821231d +0x63f1:  mov    %eax,-0x5c(%ebp)
08212320 +0x63f4:  mov    -0x5c(%ebp),%edx
08212323 +0x63f7:  mov    0xc(%ebp),%eax
08212326 +0x63fa:  mov    %edx,0x796d0(%eax)
0821232c +0x6400:  jmp    08213440 <+0x7514>
08212331 +0x6405:  movl   $0x0,0x4(%esp)
08212339 +0x640d:  mov    0x14(%ebp),%eax
0821233c +0x6410:  mov    %eax,(%esp)
0821233f +0x6413:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212344 +0x6418:  movl   $"reset",0x4(%esp)
0821234c +0x6420:  mov    %eax,(%esp)
0821234f +0x6423:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212354 +0x6428:  test   %al,%al
08212356 +0x642a:  je     082123ca <+0x649e>
08212358 +0x642c:  movl   $0x1,0x4(%esp)
08212360 +0x6434:  mov    0x14(%ebp),%eax
08212363 +0x6437:  mov    %eax,(%esp)
08212366 +0x643a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821236b +0x643f:  movl   $"fatigue",0x4(%esp)
08212373 +0x6447:  mov    %eax,(%esp)
08212376 +0x644a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821237b +0x644f:  test   %al,%al
0821237d +0x6451:  je     08213440 <+0x7514>
08212383 +0x6457:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08212388 +0x645c:  movl   $0x0,0x18(%esp)
08212390 +0x6464:  movl   $0x0,0x14(%esp)
08212398 +0x646c:  movl   $0x3,0x10(%esp)
082123a0 +0x6474:  movl   $0x50,0xc(%esp)
082123a8 +0x647c:  movl   $0x0,0x8(%esp)
082123b0 +0x6484:  movl   $0x2,0x4(%esp)
082123b8 +0x648c:  mov    %eax,(%esp)
082123bb +0x648f:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
082123c0 +0x6494:  mov    $0x0,%ebx
082123c5 +0x6499:  jmp    0821345f <+0x7533>
082123ca +0x649e:  movl   $0x0,0x4(%esp)
082123d2 +0x64a6:  mov    0x14(%ebp),%eax
082123d5 +0x64a9:  mov    %eax,(%esp)
082123d8 +0x64ac:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082123dd +0x64b1:  movl   $"apply_effect",0x4(%esp)
082123e5 +0x64b9:  mov    %eax,(%esp)
082123e8 +0x64bc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082123ed +0x64c1:  test   %al,%al
082123ef +0x64c3:  je     082124bd <+0x6591>
082123f5 +0x64c9:  movl   $0x1,0x4(%esp)
082123fd +0x64d1:  mov    0x14(%ebp),%eax
08212400 +0x64d4:  mov    %eax,(%esp)
08212403 +0x64d7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212408 +0x64dc:  mov    %eax,(%esp)
0821240b +0x64df:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212410 +0x64e4:  mov    %eax,(%esp)
08212413 +0x64e7:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
08212418 +0x64ec:  mov    %eax,-0x58(%ebp)
0821241b +0x64ef:  movl   $0x2,0x4(%esp)
08212423 +0x64f7:  mov    0x14(%ebp),%eax
08212426 +0x64fa:  mov    %eax,(%esp)
08212429 +0x64fd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821242e +0x6502:  mov    %eax,(%esp)
08212431 +0x6505:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212436 +0x650a:  mov    %eax,(%esp)
08212439 +0x650d:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
0821243e +0x6512:  mov    %eax,-0x54(%ebp)
08212441 +0x6515:  cmpl   $0x0,-0x58(%ebp)
08212445 +0x6519:  jns    08212451 <+0x6525>
08212447 +0x651b:  mov    $0x0,%ebx
0821244c +0x6520:  jmp    0821345f <+0x7533>
08212451 +0x6525:  lea    -0x37b(%ebp),%eax
08212457 +0x652b:  mov    %eax,(%esp)
0821245a +0x652e:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
0821245f +0x6533:  cmpl   $0x0,-0x54(%ebp)
08212463 +0x6537:  je     0821246c <+0x6540>
08212465 +0x6539:  mov    $0x1,%eax
0821246a +0x653e:  jmp    08212471 <+0x6545>
0821246c +0x6540:  mov    $0x0,%eax
08212471 +0x6545:  mov    %ax,-0x37b(%ebp)
08212478 +0x654c:  mov    -0x54(%ebp),%eax
0821247b +0x654f:  mov    %eax,-0x379(%ebp)
08212481 +0x6555:  mov    -0x58(%ebp),%edx
08212484 +0x6558:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
08212489 +0x655d:  mov    %edx,0x4(%esp)
0821248d +0x6561:  mov    %eax,(%esp)
08212490 +0x6564:  call   081a93d4 <_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD>  ; ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD)
08212495 +0x6569:  mov    -0x58(%ebp),%edx
08212498 +0x656c:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
0821249d +0x6571:  lea    -0x37b(%ebp),%ecx
082124a3 +0x6577:  mov    %ecx,0x8(%esp)
082124a7 +0x657b:  mov    %edx,0x4(%esp)
082124ab +0x657f:  mov    %eax,(%esp)
082124ae +0x6582:  call   081a936e <_ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>  ; ARAD::Arad_ServerStateManager::insertState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&)
082124b3 +0x6587:  mov    $0x0,%ebx
082124b8 +0x658c:  jmp    0821345f <+0x7533>
082124bd +0x6591:  movl   $0x0,0x4(%esp)
082124c5 +0x6599:  mov    0x14(%ebp),%eax
082124c8 +0x659c:  mov    %eax,(%esp)
082124cb +0x659f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082124d0 +0x65a4:  movl   $"open",0x4(%esp)
082124d8 +0x65ac:  mov    %eax,(%esp)
082124db +0x65af:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082124e0 +0x65b4:  test   %al,%al
082124e2 +0x65b6:  je     08212597 <+0x666b>
082124e8 +0x65bc:  movl   $0x1,0x4(%esp)
082124f0 +0x65c4:  mov    0x14(%ebp),%eax
082124f3 +0x65c7:  mov    %eax,(%esp)
082124f6 +0x65ca:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082124fb +0x65cf:  movl   $"sd",0x4(%esp)
08212503 +0x65d7:  mov    %eax,(%esp)
08212506 +0x65da:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821250b +0x65df:  test   %al,%al
0821250d +0x65e1:  je     08212521 <+0x65f5>
0821250f +0x65e3:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
08212514 +0x65e8:  mov    %eax,(%esp)
08212517 +0x65eb:  call   081267bc <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv>  ; CDailyScheduleManager::GM_OpenSouthernDale()
0821251c +0x65f0:  jmp    08213440 <+0x7514>
08212521 +0x65f5:  movl   $0x1,0x4(%esp)
08212529 +0x65fd:  mov    0x14(%ebp),%eax
0821252c +0x6600:  mov    %eax,(%esp)
0821252f +0x6603:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212534 +0x6608:  movl   $"boss",0x4(%esp)
0821253c +0x6610:  mov    %eax,(%esp)
0821253f +0x6613:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212544 +0x6618:  test   %al,%al
08212546 +0x661a:  je     0821255a <+0x662e>
08212548 +0x661c:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0821254d +0x6621:  mov    %eax,(%esp)
08212550 +0x6624:  call   08126cb8 <_ZN21CDailyScheduleManager16GM_OpenBossTowerEv>  ; CDailyScheduleManager::GM_OpenBossTower()
08212555 +0x6629:  jmp    08213440 <+0x7514>
0821255a +0x662e:  movl   $0x1,0x4(%esp)
08212562 +0x6636:  mov    0x14(%ebp),%eax
08212565 +0x6639:  mov    %eax,(%esp)
08212568 +0x663c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821256d +0x6641:  movl   $"aa",0x4(%esp)
08212575 +0x6649:  mov    %eax,(%esp)
08212578 +0x664c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821257d +0x6651:  test   %al,%al
0821257f +0x6653:  je     08213440 <+0x7514>
08212585 +0x6659:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0821258a +0x665e:  mov    %eax,(%esp)
0821258d +0x6661:  call   08126d60 <_ZN21CDailyScheduleManager19GM_OpenAdvanceAltarEv>  ; CDailyScheduleManager::GM_OpenAdvanceAltar()
08212592 +0x6666:  jmp    08213440 <+0x7514>
08212597 +0x666b:  movl   $0x0,0x4(%esp)
0821259f +0x6673:  mov    0x14(%ebp),%eax
082125a2 +0x6676:  mov    %eax,(%esp)
082125a5 +0x6679:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082125aa +0x667e:  movl   $"close",0x4(%esp)
082125b2 +0x6686:  mov    %eax,(%esp)
082125b5 +0x6689:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082125ba +0x668e:  test   %al,%al
082125bc +0x6690:  je     08212671 <+0x6745>
082125c2 +0x6696:  movl   $0x1,0x4(%esp)
082125ca +0x669e:  mov    0x14(%ebp),%eax
082125cd +0x66a1:  mov    %eax,(%esp)
082125d0 +0x66a4:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082125d5 +0x66a9:  movl   $"sd",0x4(%esp)
082125dd +0x66b1:  mov    %eax,(%esp)
082125e0 +0x66b4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082125e5 +0x66b9:  test   %al,%al
082125e7 +0x66bb:  je     082125fb <+0x66cf>
082125e9 +0x66bd:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
082125ee +0x66c2:  mov    %eax,(%esp)
082125f1 +0x66c5:  call   08126ad2 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv>  ; CDailyScheduleManager::GM_CloseSouthernDale()
082125f6 +0x66ca:  jmp    08213440 <+0x7514>
082125fb +0x66cf:  movl   $0x1,0x4(%esp)
08212603 +0x66d7:  mov    0x14(%ebp),%eax
08212606 +0x66da:  mov    %eax,(%esp)
08212609 +0x66dd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821260e +0x66e2:  movl   $"boss",0x4(%esp)
08212616 +0x66ea:  mov    %eax,(%esp)
08212619 +0x66ed:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821261e +0x66f2:  test   %al,%al
08212620 +0x66f4:  je     08212634 <+0x6708>
08212622 +0x66f6:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
08212627 +0x66fb:  mov    %eax,(%esp)
0821262a +0x66fe:  call   08126d0c <_ZN21CDailyScheduleManager17GM_CloseBossTowerEv>  ; CDailyScheduleManager::GM_CloseBossTower()
0821262f +0x6703:  jmp    08213440 <+0x7514>
08212634 +0x6708:  movl   $0x1,0x4(%esp)
0821263c +0x6710:  mov    0x14(%ebp),%eax
0821263f +0x6713:  mov    %eax,(%esp)
08212642 +0x6716:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212647 +0x671b:  movl   $"aa",0x4(%esp)
0821264f +0x6723:  mov    %eax,(%esp)
08212652 +0x6726:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212657 +0x672b:  test   %al,%al
08212659 +0x672d:  je     08213440 <+0x7514>
0821265f +0x6733:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
08212664 +0x6738:  mov    %eax,(%esp)
08212667 +0x673b:  call   08126d90 <_ZN21CDailyScheduleManager20GM_CloseAdvanceAltarEv>  ; CDailyScheduleManager::GM_CloseAdvanceAltar()
0821266c +0x6740:  jmp    08213440 <+0x7514>
08212671 +0x6745:  movl   $0x0,0x4(%esp)
08212679 +0x674d:  mov    0x14(%ebp),%eax
0821267c +0x6750:  mov    %eax,(%esp)
0821267f +0x6753:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212684 +0x6758:  movl   $"ap",0x4(%esp)
0821268c +0x6760:  mov    %eax,(%esp)
0821268f +0x6763:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212694 +0x6768:  test   %al,%al
08212696 +0x676a:  je     0821286d <+0x6941>
0821269c +0x6770:  movl   $0x1,0x4(%esp)
082126a4 +0x6778:  mov    0x14(%ebp),%eax
082126a7 +0x677b:  mov    %eax,(%esp)
082126aa +0x677e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082126af +0x6783:  movl   $"set",0x4(%esp)
082126b7 +0x678b:  mov    %eax,(%esp)
082126ba +0x678e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082126bf +0x6793:  test   %al,%al
082126c1 +0x6795:  je     08212700 <+0x67d4>
082126c3 +0x6797:  movl   $0x2,0x4(%esp)
082126cb +0x679f:  mov    0x14(%ebp),%eax
082126ce +0x67a2:  mov    %eax,(%esp)
082126d1 +0x67a5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082126d6 +0x67aa:  mov    %eax,(%esp)
082126d9 +0x67ad:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082126de +0x67b2:  mov    %eax,(%esp)
082126e1 +0x67b5:  call   0807e6f0 <_init+0xfe8>
082126e6 +0x67ba:  mov    %eax,-0x50(%ebp)
082126e9 +0x67bd:  mov    -0x50(%ebp),%eax
082126ec +0x67c0:  mov    %eax,0x4(%esp)
082126f0 +0x67c4:  mov    0xc(%ebp),%eax
082126f3 +0x67c7:  mov    %eax,(%esp)
082126f6 +0x67ca:  call   081225ee <_ZN8APSystem9CUserProc6GM_SetEP5CUserj>  ; APSystem::CUserProc::GM_Set(CUser*, unsigned int)
082126fb +0x67cf:  jmp    08213440 <+0x7514>
08212700 +0x67d4:  movl   $0x1,0x4(%esp)
08212708 +0x67dc:  mov    0x14(%ebp),%eax
0821270b +0x67df:  mov    %eax,(%esp)
0821270e +0x67e2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212713 +0x67e7:  movl   $"reset",0x4(%esp)
0821271b +0x67ef:  mov    %eax,(%esp)
0821271e +0x67f2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212723 +0x67f7:  test   %al,%al
08212725 +0x67f9:  je     08212737 <+0x680b>
08212727 +0x67fb:  mov    0xc(%ebp),%eax
0821272a +0x67fe:  mov    %eax,(%esp)
0821272d +0x6801:  call   081225d2 <_ZN8APSystem9CUserProc8GM_ResetEP5CUser>  ; APSystem::CUserProc::GM_Reset(CUser*)
08212732 +0x6806:  jmp    08213440 <+0x7514>
08212737 +0x680b:  movl   $0x1,0x4(%esp)
0821273f +0x6813:  mov    0x14(%ebp),%eax
08212742 +0x6816:  mov    %eax,(%esp)
08212745 +0x6819:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821274a +0x681e:  movl   $"gmmode",0x4(%esp)
08212752 +0x6826:  mov    %eax,(%esp)
08212755 +0x6829:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821275a +0x682e:  test   %al,%al
0821275c +0x6830:  je     0821276a <+0x683e>
0821275e +0x6832:  movb   $0x1,&_ZN8APSystem19CActionPointManager7_IsGMOnE
08212765 +0x6839:  jmp    08213440 <+0x7514>
0821276a +0x683e:  movl   $0x1,0x4(%esp)
08212772 +0x6846:  mov    0x14(%ebp),%eax
08212775 +0x6849:  mov    %eax,(%esp)
08212778 +0x684c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821277d +0x6851:  movl   $"realmode",0x4(%esp)
08212785 +0x6859:  mov    %eax,(%esp)
08212788 +0x685c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821278d +0x6861:  test   %al,%al
0821278f +0x6863:  je     082127a4 <+0x6878>
08212791 +0x6865:  movb   $0x0,&_ZN8APSystem19CActionPointManager7_IsGMOnE
08212798 +0x686c:  movb   $0x0,&_ZN8APSystem19CActionPointManager10_gmWeekdayE
0821279f +0x6873:  jmp    08213440 <+0x7514>
082127a4 +0x6878:  movl   $0x1,0x4(%esp)
082127ac +0x6880:  mov    0x14(%ebp),%eax
082127af +0x6883:  mov    %eax,(%esp)
082127b2 +0x6886:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082127b7 +0x688b:  movl   $"week",0x4(%esp)
082127bf +0x6893:  mov    %eax,(%esp)
082127c2 +0x6896:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082127c7 +0x689b:  test   %al,%al
082127c9 +0x689d:  je     08213440 <+0x7514>
082127cf +0x68a3:  movl   $0x2,0x4(%esp)
082127d7 +0x68ab:  mov    0x14(%ebp),%eax
082127da +0x68ae:  mov    %eax,(%esp)
082127dd +0x68b1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082127e2 +0x68b6:  mov    %eax,(%esp)
082127e5 +0x68b9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082127ea +0x68be:  mov    %eax,(%esp)
082127ed +0x68c1:  call   0807e6f0 <_init+0xfe8>
082127f2 +0x68c6:  mov    %eax,-0x4c(%ebp)
082127f5 +0x68c9:  movl   $0x7,-0x48(%ebp)
082127fc +0x68d0:  cmpl   $0x7,-0x4c(%ebp)
08212800 +0x68d4:  ja     0821284f <+0x6923>
08212802 +0x68d6:  mov    -0x4c(%ebp),%eax
08212805 +0x68d9:  shl    $0x2,%eax
08212808 +0x68dc:  mov    &data#910705ef(.rodata)(%eax),%eax
0821280e +0x68e2:  jmp    *%eax
08212810 +0x68e4:  movl   $0x1,-0x48(%ebp)
08212817 +0x68eb:  jmp    08212859 <+0x692d>
08212819 +0x68ed:  movl   $0x2,-0x48(%ebp)
08212820 +0x68f4:  jmp    08212859 <+0x692d>
08212822 +0x68f6:  movl   $0x3,-0x48(%ebp)
08212829 +0x68fd:  jmp    08212859 <+0x692d>
0821282b +0x68ff:  movl   $0x4,-0x48(%ebp)
08212832 +0x6906:  jmp    08212859 <+0x692d>
08212834 +0x6908:  movl   $0x5,-0x48(%ebp)
0821283b +0x690f:  jmp    08212859 <+0x692d>
0821283d +0x6911:  movl   $0x6,-0x48(%ebp)
08212844 +0x6918:  jmp    08212859 <+0x692d>
08212846 +0x691a:  movl   $0x0,-0x48(%ebp)
0821284d +0x6921:  jmp    08212859 <+0x692d>
0821284f +0x6923:  mov    $0x0,%ebx
08212854 +0x6928:  jmp    0821345f <+0x7533>
08212859 +0x692d:  movb   $0x1,&_ZN8APSystem19CActionPointManager10_gmWeekdayE
08212860 +0x6934:  mov    -0x48(%ebp),%eax
08212863 +0x6937:  mov    %eax,&_ZN8APSystem19CActionPointManager10_gmWeekdayE+0x4
08212868 +0x693c:  jmp    08213440 <+0x7514>
0821286d +0x6941:  movl   $0x0,0x4(%esp)
08212875 +0x6949:  mov    0x14(%ebp),%eax
08212878 +0x694c:  mov    %eax,(%esp)
0821287b +0x694f:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212880 +0x6954:  movl   $"pcroom",0x4(%esp)
08212888 +0x695c:  mov    %eax,(%esp)
0821288b +0x695f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212890 +0x6964:  test   %al,%al
08212892 +0x6966:  je     082129e9 <+0x6abd>
08212898 +0x696c:  lea    -0x39a(%ebp),%eax
0821289e +0x6972:  mov    %eax,(%esp)
082128a1 +0x6975:  call   0822be14 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x14be>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x14be
082128a6 +0x697a:  movl   $0x1,-0x388(%ebp)
082128b0 +0x6984:  movb   $0x1,-0x380(%ebp)
082128b7 +0x698b:  movb   $0xb,-0x37f(%ebp)
082128be +0x6992:  movl   $0x0,(%esp)
082128c5 +0x6999:  call   0807d750 <_init+0x48>
082128ca +0x699e:  add    $0x93a80,%eax
082128cf +0x69a3:  mov    %eax,-0x384(%ebp)
082128d5 +0x69a9:  mov    0xc(%ebp),%eax
082128d8 +0x69ac:  mov    %eax,(%esp)
082128db +0x69af:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082128e0 +0x69b4:  mov    %eax,-0x390(%ebp)
082128e6 +0x69ba:  mov    0xc(%ebp),%eax
082128e9 +0x69bd:  mov    %eax,(%esp)
082128ec +0x69c0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082128f1 +0x69c5:  mov    %eax,-0x38c(%ebp)
082128f7 +0x69cb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082128fc +0x69d0:  movl   $0xbc0a,0x8(%esp)
08212904 +0x69d8:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
0821290c +0x69e0:  mov    %eax,(%esp)
0821290f +0x69e3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08212914 +0x69e8:  movl   $0x1,0x8(%esp)
0821291c +0x69f0:  mov    %eax,0x4(%esp)
08212920 +0x69f4:  lea    -0x3a4(%ebp),%eax
08212926 +0x69fa:  mov    %eax,(%esp)
08212929 +0x69fd:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0821292e +0x6a02:  lea    -0x3a4(%ebp),%eax
08212934 +0x6a08:  mov    %eax,(%esp)
08212937 +0x6a0b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0821293c +0x6a10:  movl   $0x17e,0x4(%esp)
08212944 +0x6a18:  mov    %eax,(%esp)
08212947 +0x6a1b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0821294c +0x6a20:  mov    -0x390(%ebp),%ebx
08212952 +0x6a26:  lea    -0x3a4(%ebp),%eax
08212958 +0x6a2c:  mov    %eax,(%esp)
0821295b +0x6a2f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08212960 +0x6a34:  mov    %ebx,0x4(%esp)
08212964 +0x6a38:  mov    %eax,(%esp)
08212967 +0x6a3b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0821296c +0x6a40:  movzwl -0x398(%ebp),%eax
08212973 +0x6a47:  movzwl %ax,%ebx
08212976 +0x6a4a:  lea    -0x3a4(%ebp),%eax
0821297c +0x6a50:  mov    %eax,(%esp)
0821297f +0x6a53:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08212984 +0x6a58:  mov    %ebx,0x8(%esp)
08212988 +0x6a5c:  lea    -0x39a(%ebp),%edx
0821298e +0x6a62:  mov    %edx,0x4(%esp)
08212992 +0x6a66:  mov    %eax,(%esp)
08212995 +0x6a69:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0821299a +0x6a6e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0821299f +0x6a73:  lea    -0x3a4(%ebp),%edx
082129a5 +0x6a79:  mov    %edx,0x8(%esp)
082129a9 +0x6a7d:  movl   $0x1,0x4(%esp)
082129b1 +0x6a85:  mov    %eax,(%esp)
082129b4 +0x6a88:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082129b9 +0x6a8d:  jmp    082129d6 <+0x6aaa>
082129bb +0x6a8f:  mov    %edx,%ebx
082129bd +0x6a91:  mov    %eax,%esi
082129bf +0x6a93:  lea    -0x3a4(%ebp),%eax
082129c5 +0x6a99:  mov    %eax,(%esp)
082129c8 +0x6a9c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082129cd +0x6aa1:  mov    %esi,%eax
082129cf +0x6aa3:  mov    %ebx,%edx
082129d1 +0x6aa5:  jmp    08213447 <+0x751b>
082129d6 +0x6aaa:  lea    -0x3a4(%ebp),%eax
082129dc +0x6ab0:  mov    %eax,(%esp)
082129df +0x6ab3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082129e4 +0x6ab8:  jmp    08213440 <+0x7514>
082129e9 +0x6abd:  movl   $0x0,0x4(%esp)
082129f1 +0x6ac5:  mov    0x14(%ebp),%eax
082129f4 +0x6ac8:  mov    %eax,(%esp)
082129f7 +0x6acb:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082129fc +0x6ad0:  movl   $"avatarcoin",0x4(%esp)
08212a04 +0x6ad8:  mov    %eax,(%esp)
08212a07 +0x6adb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212a0c +0x6ae0:  test   %al,%al
08212a0e +0x6ae2:  je     08212a8c <+0x6b60>
08212a10 +0x6ae4:  movl   $0x1,0x4(%esp)
08212a18 +0x6aec:  mov    0x14(%ebp),%eax
08212a1b +0x6aef:  mov    %eax,(%esp)
08212a1e +0x6af2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212a23 +0x6af7:  mov    %eax,(%esp)
08212a26 +0x6afa:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212a2b +0x6aff:  mov    %eax,(%esp)
08212a2e +0x6b02:  call   0807e6f0 <_init+0xfe8>
08212a33 +0x6b07:  mov    %eax,-0x44(%ebp)
08212a36 +0x6b0a:  mov    0xc(%ebp),%eax
08212a39 +0x6b0d:  mov    %eax,(%esp)
08212a3c +0x6b10:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08212a41 +0x6b15:  add    $0x658,%eax
08212a46 +0x6b1a:  mov    %eax,(%esp)
08212a49 +0x6b1d:  call   0817fef0 <_ZNK10AvatarCoin3GetEv>  ; AvatarCoin::Get() const
08212a4e +0x6b22:  add    %eax,-0x44(%ebp)
08212a51 +0x6b25:  mov    0xc(%ebp),%eax
08212a54 +0x6b28:  mov    %eax,(%esp)
08212a57 +0x6b2b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08212a5c +0x6b30:  lea    0x658(%eax),%edx
08212a62 +0x6b36:  mov    -0x44(%ebp),%eax
08212a65 +0x6b39:  mov    %eax,0x4(%esp)
08212a69 +0x6b3d:  mov    %edx,(%esp)
08212a6c +0x6b40:  call   0817fee2 <_ZN10AvatarCoin3SetEj>  ; AvatarCoin::Set(unsigned int)
08212a71 +0x6b45:  mov    0xc(%ebp),%eax
08212a74 +0x6b48:  mov    %eax,(%esp)
08212a77 +0x6b4b:  call   081800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>  ; AvatarCoin::SaveToDB(CUser*)
08212a7c +0x6b50:  mov    0xc(%ebp),%eax
08212a7f +0x6b53:  mov    %eax,(%esp)
08212a82 +0x6b56:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
08212a87 +0x6b5b:  jmp    08213440 <+0x7514>
08212a8c +0x6b60:  movl   $0x0,0x4(%esp)
08212a94 +0x6b68:  mov    0x14(%ebp),%eax
08212a97 +0x6b6b:  mov    %eax,(%esp)
08212a9a +0x6b6e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212a9f +0x6b73:  movl   $"avr",0x4(%esp)
08212aa7 +0x6b7b:  mov    %eax,(%esp)
08212aaa +0x6b7e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212aaf +0x6b83:  test   %al,%al
08212ab1 +0x6b85:  je     08212c2e <+0x6d02>
08212ab7 +0x6b8b:  movl   $0x1,0x4(%esp)
08212abf +0x6b93:  mov    0x14(%ebp),%eax
08212ac2 +0x6b96:  mov    %eax,(%esp)
08212ac5 +0x6b99:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212aca +0x6b9e:  movl   $"sorneh",0x4(%esp)
08212ad2 +0x6ba6:  mov    %eax,(%esp)
08212ad5 +0x6ba9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212ada +0x6bae:  test   %al,%al
08212adc +0x6bb0:  je     08212b4c <+0x6c20>
08212ade +0x6bb2:  movl   $0x2,0x4(%esp)
08212ae6 +0x6bba:  mov    0x14(%ebp),%eax
08212ae9 +0x6bbd:  mov    %eax,(%esp)
08212aec +0x6bc0:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212af1 +0x6bc5:  mov    %eax,(%esp)
08212af4 +0x6bc8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212af9 +0x6bcd:  mov    %eax,(%esp)
08212afc +0x6bd0:  call   0807e6f0 <_init+0xfe8>
08212b01 +0x6bd5:  mov    %ax,-0x40(%ebp)
08212b05 +0x6bd9:  movl   $0x3,0x4(%esp)
08212b0d +0x6be1:  mov    0x14(%ebp),%eax
08212b10 +0x6be4:  mov    %eax,(%esp)
08212b13 +0x6be7:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212b18 +0x6bec:  mov    %eax,(%esp)
08212b1b +0x6bef:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212b20 +0x6bf4:  mov    %eax,(%esp)
08212b23 +0x6bf7:  call   0807e6f0 <_init+0xfe8>
08212b28 +0x6bfc:  mov    %ax,-0x3e(%ebp)
08212b2c +0x6c00:  movswl -0x3e(%ebp),%edx
08212b30 +0x6c04:  movswl -0x40(%ebp),%eax
08212b34 +0x6c08:  mov    %edx,0x8(%esp)
08212b38 +0x6c0c:  mov    %eax,0x4(%esp)
08212b3c +0x6c10:  mov    0xc(%ebp),%eax
08212b3f +0x6c13:  mov    %eax,(%esp)
08212b42 +0x6c16:  call   081911b6 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss>  ; AvatarRechargeServer::GmReduceEndurance(CUser*, short, short)
08212b47 +0x6c1b:  jmp    08213440 <+0x7514>
08212b4c +0x6c20:  movl   $0x1,0x4(%esp)
08212b54 +0x6c28:  mov    0x14(%ebp),%eax
08212b57 +0x6c2b:  mov    %eax,(%esp)
08212b5a +0x6c2e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212b5f +0x6c33:  movl   $"ghkrfbf",0x4(%esp)
08212b67 +0x6c3b:  mov    %eax,(%esp)
08212b6a +0x6c3e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212b6f +0x6c43:  test   %al,%al
08212b71 +0x6c45:  je     08213440 <+0x7514>
08212b77 +0x6c4b:  movl   $0x2,0x4(%esp)
08212b7f +0x6c53:  mov    0x14(%ebp),%eax
08212b82 +0x6c56:  mov    %eax,(%esp)
08212b85 +0x6c59:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212b8a +0x6c5e:  movl   $"on",0x4(%esp)
08212b92 +0x6c66:  mov    %eax,(%esp)
08212b95 +0x6c69:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212b9a +0x6c6e:  test   %al,%al
08212b9c +0x6c70:  je     08212be3 <+0x6cb7>
08212b9e +0x6c72:  movl   $0x3,0x4(%esp)
08212ba6 +0x6c7a:  mov    0x14(%ebp),%eax
08212ba9 +0x6c7d:  mov    %eax,(%esp)
08212bac +0x6c80:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212bb1 +0x6c85:  mov    %eax,(%esp)
08212bb4 +0x6c88:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212bb9 +0x6c8d:  mov    %eax,(%esp)
08212bbc +0x6c90:  call   0807e6f0 <_init+0xfe8>
08212bc1 +0x6c95:  mov    %eax,-0x3c(%ebp)
08212bc4 +0x6c98:  mov    -0x3c(%ebp),%eax
08212bc7 +0x6c9b:  mov    %eax,0x8(%esp)
08212bcb +0x6c9f:  movl   $0x1,0x4(%esp)
08212bd3 +0x6ca7:  mov    0xc(%ebp),%eax
08212bd6 +0x6caa:  mov    %eax,(%esp)
08212bd9 +0x6cad:  call   08191318 <_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi>  ; AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser*, bool, int)
08212bde +0x6cb2:  jmp    08213440 <+0x7514>
08212be3 +0x6cb7:  movl   $0x2,0x4(%esp)
08212beb +0x6cbf:  mov    0x14(%ebp),%eax
08212bee +0x6cc2:  mov    %eax,(%esp)
08212bf1 +0x6cc5:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212bf6 +0x6cca:  movl   $"off",0x4(%esp)
08212bfe +0x6cd2:  mov    %eax,(%esp)
08212c01 +0x6cd5:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212c06 +0x6cda:  test   %al,%al
08212c08 +0x6cdc:  je     08213440 <+0x7514>
08212c0e +0x6ce2:  movl   $0x0,0x8(%esp)
08212c16 +0x6cea:  movl   $0x0,0x4(%esp)
08212c1e +0x6cf2:  mov    0xc(%ebp),%eax
08212c21 +0x6cf5:  mov    %eax,(%esp)
08212c24 +0x6cf8:  call   08191318 <_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi>  ; AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser*, bool, int)
08212c29 +0x6cfd:  jmp    08213440 <+0x7514>
08212c2e +0x6d02:  movl   $0x0,0x4(%esp)
08212c36 +0x6d0a:  mov    0x14(%ebp),%eax
08212c39 +0x6d0d:  mov    %eax,(%esp)
08212c3c +0x6d10:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212c41 +0x6d15:  movl   $"startva",0x4(%esp)
08212c49 +0x6d1d:  mov    %eax,(%esp)
08212c4c +0x6d20:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212c51 +0x6d25:  test   %al,%al
08212c53 +0x6d27:  je     08212d2f <+0x6e03>
08212c59 +0x6d2d:  cmpl   $0x0,0xc(%ebp)
08212c5d +0x6d31:  je     08213440 <+0x7514>
08212c63 +0x6d37:  lea    -0x3bb(%ebp),%eax
08212c69 +0x6d3d:  mov    %eax,(%esp)
08212c6c +0x6d40:  call   0822c3c2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1a6c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1a6c
08212c71 +0x6d45:  movb   $0x1,-0x3b1(%ebp)
08212c78 +0x6d4c:  movl   $0x1,0x4(%esp)
08212c80 +0x6d54:  mov    0x14(%ebp),%eax
08212c83 +0x6d57:  mov    %eax,(%esp)
08212c86 +0x6d5a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212c8b +0x6d5f:  mov    %eax,(%esp)
08212c8e +0x6d62:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212c93 +0x6d67:  mov    %eax,(%esp)
08212c96 +0x6d6a:  call   0807e6f0 <_init+0xfe8>
08212c9b +0x6d6f:  mov    %eax,-0x3b0(%ebp)
08212ca1 +0x6d75:  movl   $0x2,0x4(%esp)
08212ca9 +0x6d7d:  mov    0x14(%ebp),%eax
08212cac +0x6d80:  mov    %eax,(%esp)
08212caf +0x6d83:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212cb4 +0x6d88:  mov    %eax,(%esp)
08212cb7 +0x6d8b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212cbc +0x6d90:  mov    %eax,(%esp)
08212cbf +0x6d93:  call   0807e6f0 <_init+0xfe8>
08212cc4 +0x6d98:  mov    %eax,-0x3ac(%ebp)
08212cca +0x6d9e:  movl   $0x3,0x4(%esp)
08212cd2 +0x6da6:  mov    0x14(%ebp),%eax
08212cd5 +0x6da9:  mov    %eax,(%esp)
08212cd8 +0x6dac:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212cdd +0x6db1:  mov    %eax,(%esp)
08212ce0 +0x6db4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212ce5 +0x6db9:  mov    %eax,(%esp)
08212ce8 +0x6dbc:  call   0807e6f0 <_init+0xfe8>
08212ced +0x6dc1:  mov    %eax,-0x3a8(%ebp)
08212cf3 +0x6dc7:  lea    -0x3bb(%ebp),%ebx
08212cf9 +0x6dcd:  mov    0xc(%ebp),%eax
08212cfc +0x6dd0:  mov    %eax,(%esp)
08212cff +0x6dd3:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08212d04 +0x6dd8:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08212d0a +0x6dde:  mov    %eax,0x4(%esp)
08212d0e +0x6de2:  mov    %edx,(%esp)
08212d11 +0x6de5:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08212d16 +0x6dea:  movl   $0x17,0x8(%esp)
08212d1e +0x6df2:  mov    %ebx,0x4(%esp)
08212d22 +0x6df6:  mov    %eax,(%esp)
08212d25 +0x6df9:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08212d2a +0x6dfe:  jmp    08213440 <+0x7514>
08212d2f +0x6e03:  movl   $0x0,0x4(%esp)
08212d37 +0x6e0b:  mov    0x14(%ebp),%eax
08212d3a +0x6e0e:  mov    %eax,(%esp)
08212d3d +0x6e11:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212d42 +0x6e16:  movl   $"SetAvengerReady",0x4(%esp)
08212d4a +0x6e1e:  mov    %eax,(%esp)
08212d4d +0x6e21:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212d52 +0x6e26:  test   %al,%al
08212d54 +0x6e28:  je     08212e28 <+0x6efc>
08212d5a +0x6e2e:  movl   $0x1,0x4(%esp)
08212d62 +0x6e36:  mov    0x14(%ebp),%eax
08212d65 +0x6e39:  mov    %eax,(%esp)
08212d68 +0x6e3c:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212d6d +0x6e41:  mov    %eax,(%esp)
08212d70 +0x6e44:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212d75 +0x6e49:  mov    %eax,(%esp)
08212d78 +0x6e4c:  call   0807e6f0 <_init+0xfe8>
08212d7d +0x6e51:  mov    %eax,%ebx
08212d7f +0x6e53:  lea    -0x12e(%ebp),%eax
08212d85 +0x6e59:  mov    %eax,(%esp)
08212d88 +0x6e5c:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08212d8d +0x6e61:  lea    -0x12e(%ebp),%eax
08212d93 +0x6e67:  mov    %eax,0x8(%esp)
08212d97 +0x6e6b:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
08212d9f +0x6e73:  lea    -0x134(%ebp),%eax
08212da5 +0x6e79:  mov    %eax,(%esp)
08212da8 +0x6e7c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08212dad +0x6e81:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
08212db2 +0x6e86:  lea    -0x134(%ebp),%edx
08212db8 +0x6e8c:  mov    %edx,0x4(%esp)
08212dbc +0x6e90:  mov    %eax,(%esp)
08212dbf +0x6e93:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08212dc4 +0x6e98:  mov    %ebx,0x4(%esp)
08212dc8 +0x6e9c:  mov    %eax,(%esp)
08212dcb +0x6e9f:  call   0819589e <_ZN4ARAD27Arad_EventPeriodDataManager18setCreatePeriod_GMEi>  ; ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(int)
08212dd0 +0x6ea4:  jmp    08212dea <+0x6ebe>
08212dd2 +0x6ea6:  mov    %edx,%ebx
08212dd4 +0x6ea8:  mov    %eax,%esi
08212dd6 +0x6eaa:  lea    -0x134(%ebp),%eax
08212ddc +0x6eb0:  mov    %eax,(%esp)
08212ddf +0x6eb3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08212de4 +0x6eb8:  mov    %esi,%eax
08212de6 +0x6eba:  mov    %ebx,%edx
08212de8 +0x6ebc:  jmp    08212dfa <+0x6ece>
08212dea +0x6ebe:  lea    -0x134(%ebp),%eax
08212df0 +0x6ec4:  mov    %eax,(%esp)
08212df3 +0x6ec7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08212df8 +0x6ecc:  jmp    08212e15 <+0x6ee9>
08212dfa +0x6ece:  mov    %edx,%ebx
08212dfc +0x6ed0:  mov    %eax,%esi
08212dfe +0x6ed2:  lea    -0x12e(%ebp),%eax
08212e04 +0x6ed8:  mov    %eax,(%esp)
08212e07 +0x6edb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08212e0c +0x6ee0:  mov    %esi,%eax
08212e0e +0x6ee2:  mov    %ebx,%edx
08212e10 +0x6ee4:  jmp    08213447 <+0x751b>
08212e15 +0x6ee9:  lea    -0x12e(%ebp),%eax
08212e1b +0x6eef:  mov    %eax,(%esp)
08212e1e +0x6ef2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08212e23 +0x6ef7:  jmp    08213440 <+0x7514>
08212e28 +0x6efc:  movl   $0x0,0x4(%esp)
08212e30 +0x6f04:  mov    0x14(%ebp),%eax
08212e33 +0x6f07:  mov    %eax,(%esp)
08212e36 +0x6f0a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212e3b +0x6f0f:  movl   $"SetCreateTime",0x4(%esp)
08212e43 +0x6f17:  mov    %eax,(%esp)
08212e46 +0x6f1a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08212e4b +0x6f1f:  test   %al,%al
08212e4d +0x6f21:  je     0821309e <+0x7172>
08212e53 +0x6f27:  mov    0x14(%ebp),%eax
08212e56 +0x6f2a:  mov    %eax,(%esp)
08212e59 +0x6f2d:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
08212e5e +0x6f32:  cmp    $0x4,%eax
08212e61 +0x6f35:  setbe  %al
08212e64 +0x6f38:  test   %al,%al
08212e66 +0x6f3a:  je     08212e72 <+0x6f46>
08212e68 +0x6f3c:  mov    $0x0,%ebx
08212e6d +0x6f41:  jmp    0821345f <+0x7533>
08212e72 +0x6f46:  movw   $0x0,-0x36(%ebp)
08212e78 +0x6f4c:  movl   $0x0,-0x3c4(%ebp)
08212e82 +0x6f56:  movl   $0x0,-0x3c0(%ebp)
08212e8c +0x6f60:  movswl -0x36(%ebp),%ebx
08212e90 +0x6f64:  movswl -0x36(%ebp),%eax
08212e94 +0x6f68:  add    $0x1,%eax
08212e97 +0x6f6b:  mov    %eax,0x4(%esp)
08212e9b +0x6f6f:  mov    0x14(%ebp),%eax
08212e9e +0x6f72:  mov    %eax,(%esp)
08212ea1 +0x6f75:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212ea6 +0x6f7a:  mov    %eax,(%esp)
08212ea9 +0x6f7d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212eae +0x6f82:  mov    %eax,(%esp)
08212eb1 +0x6f85:  call   0807e6f0 <_init+0xfe8>
08212eb6 +0x6f8a:  mov    %ax,-0x3c4(%ebp,%ebx,2)
08212ebe +0x6f92:  addw   $0x1,-0x36(%ebp)
08212ec3 +0x6f97:  movswl -0x36(%ebp),%ebx
08212ec7 +0x6f9b:  movswl -0x36(%ebp),%eax
08212ecb +0x6f9f:  add    $0x1,%eax
08212ece +0x6fa2:  mov    %eax,0x4(%esp)
08212ed2 +0x6fa6:  mov    0x14(%ebp),%eax
08212ed5 +0x6fa9:  mov    %eax,(%esp)
08212ed8 +0x6fac:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212edd +0x6fb1:  mov    %eax,(%esp)
08212ee0 +0x6fb4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212ee5 +0x6fb9:  mov    %eax,(%esp)
08212ee8 +0x6fbc:  call   0807e6f0 <_init+0xfe8>
08212eed +0x6fc1:  mov    %ax,-0x3c4(%ebp,%ebx,2)
08212ef5 +0x6fc9:  addw   $0x1,-0x36(%ebp)
08212efa +0x6fce:  movswl -0x36(%ebp),%ebx
08212efe +0x6fd2:  movswl -0x36(%ebp),%eax
08212f02 +0x6fd6:  add    $0x1,%eax
08212f05 +0x6fd9:  mov    %eax,0x4(%esp)
08212f09 +0x6fdd:  mov    0x14(%ebp),%eax
08212f0c +0x6fe0:  mov    %eax,(%esp)
08212f0f +0x6fe3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212f14 +0x6fe8:  mov    %eax,(%esp)
08212f17 +0x6feb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212f1c +0x6ff0:  mov    %eax,(%esp)
08212f1f +0x6ff3:  call   0807e6f0 <_init+0xfe8>
08212f24 +0x6ff8:  mov    %ax,-0x3c4(%ebp,%ebx,2)
08212f2c +0x7000:  addw   $0x1,-0x36(%ebp)
08212f31 +0x7005:  movswl -0x36(%ebp),%ebx
08212f35 +0x7009:  movswl -0x36(%ebp),%eax
08212f39 +0x700d:  add    $0x1,%eax
08212f3c +0x7010:  mov    %eax,0x4(%esp)
08212f40 +0x7014:  mov    0x14(%ebp),%eax
08212f43 +0x7017:  mov    %eax,(%esp)
08212f46 +0x701a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08212f4b +0x701f:  mov    %eax,(%esp)
08212f4e +0x7022:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08212f53 +0x7027:  mov    %eax,(%esp)
08212f56 +0x702a:  call   0807e6f0 <_init+0xfe8>
08212f5b +0x702f:  mov    %ax,-0x3c4(%ebp,%ebx,2)
08212f63 +0x7037:  addw   $0x1,-0x36(%ebp)
08212f68 +0x703c:  lea    -0x3c4(%ebp),%eax
08212f6e +0x7042:  mov    %eax,(%esp)
08212f71 +0x7045:  call   081979c0 <_ZN4ARAD10uint32TimeEPs>  ; ARAD::uint32Time(short*)
08212f76 +0x704a:  mov    %eax,%edx
08212f78 +0x704c:  mov    0xc(%ebp),%eax
08212f7b +0x704f:  mov    %edx,0x4(%esp)
08212f7f +0x7053:  mov    %eax,(%esp)
08212f82 +0x7056:  call   0822f21c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48c6
08212f87 +0x705b:  lea    -0x3cc(%ebp),%eax
08212f8d +0x7061:  mov    %eax,(%esp)
08212f90 +0x7064:  call   0822ee3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44e6
08212f95 +0x7069:  mov    0xc(%ebp),%eax
08212f98 +0x706c:  mov    %eax,(%esp)
08212f9b +0x706f:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
08212fa0 +0x7074:  mov    %eax,%ebx
08212fa2 +0x7076:  movl   $0xffffffff,0x4(%esp)
08212faa +0x707e:  mov    0xc(%ebp),%eax
08212fad +0x7081:  mov    %eax,(%esp)
08212fb0 +0x7084:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08212fb5 +0x7089:  mov    %ebx,0x8(%esp)
08212fb9 +0x708d:  mov    %eax,0x4(%esp)
08212fbd +0x7091:  lea    -0x3cc(%ebp),%eax
08212fc3 +0x7097:  mov    %eax,(%esp)
08212fc6 +0x709a:  call   0822ee74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x451e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x451e
08212fcb +0x709f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08212fd0 +0x70a4:  movl   $0xbc83,0x8(%esp)
08212fd8 +0x70ac:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08212fe0 +0x70b4:  mov    %eax,(%esp)
08212fe3 +0x70b7:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08212fe8 +0x70bc:  movl   $0x1,0x8(%esp)
08212ff0 +0x70c4:  mov    %eax,0x4(%esp)
08212ff4 +0x70c8:  lea    -0x3d4(%ebp),%eax
08212ffa +0x70ce:  mov    %eax,(%esp)
08212ffd +0x70d1:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08213002 +0x70d6:  mov    0xc(%ebp),%eax
08213005 +0x70d9:  mov    %eax,(%esp)
08213008 +0x70dc:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0821300d +0x70e1:  mov    %eax,0x8(%esp)
08213011 +0x70e5:  movl   $0x24,0x4(%esp)
08213019 +0x70ed:  lea    -0x3d4(%ebp),%eax
0821301f +0x70f3:  mov    %eax,(%esp)
08213022 +0x70f6:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08213027 +0x70fb:  lea    -0x3d4(%ebp),%eax
0821302d +0x7101:  mov    %eax,(%esp)
08213030 +0x7104:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08213035 +0x7109:  movl   $0x8,0x8(%esp)
0821303d +0x7111:  lea    -0x3cc(%ebp),%edx
08213043 +0x7117:  mov    %edx,0x4(%esp)
08213047 +0x711b:  mov    %eax,(%esp)
0821304a +0x711e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0821304f +0x7123:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08213054 +0x7128:  lea    -0x3d4(%ebp),%edx
0821305a +0x712e:  mov    %edx,0x8(%esp)
0821305e +0x7132:  movl   $0x2,0x4(%esp)
08213066 +0x713a:  mov    %eax,(%esp)
08213069 +0x713d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0821306e +0x7142:  jmp    0821308b <+0x715f>
08213070 +0x7144:  mov    %edx,%ebx
08213072 +0x7146:  mov    %eax,%esi
08213074 +0x7148:  lea    -0x3d4(%ebp),%eax
0821307a +0x714e:  mov    %eax,(%esp)
0821307d +0x7151:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08213082 +0x7156:  mov    %esi,%eax
08213084 +0x7158:  mov    %ebx,%edx
08213086 +0x715a:  jmp    08213447 <+0x751b>
0821308b +0x715f:  lea    -0x3d4(%ebp),%eax
08213091 +0x7165:  mov    %eax,(%esp)
08213094 +0x7168:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08213099 +0x716d:  jmp    08213440 <+0x7514>
0821309e +0x7172:  movl   $0x0,0x4(%esp)
082130a6 +0x717a:  mov    0x14(%ebp),%eax
082130a9 +0x717d:  mov    %eax,(%esp)
082130ac +0x7180:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082130b1 +0x7185:  movl   $"aa",0x4(%esp)
082130b9 +0x718d:  mov    %eax,(%esp)
082130bc +0x7190:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082130c1 +0x7195:  test   %al,%al
082130c3 +0x7197:  je     082132ea <+0x73be>
082130c9 +0x719d:  movl   $0x1,0x4(%esp)
082130d1 +0x71a5:  mov    0x14(%ebp),%eax
082130d4 +0x71a8:  mov    %eax,(%esp)
082130d7 +0x71ab:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082130dc +0x71b0:  movl   $"time",0x4(%esp)
082130e4 +0x71b8:  mov    %eax,(%esp)
082130e7 +0x71bb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082130ec +0x71c0:  test   %al,%al
082130ee +0x71c2:  je     08213137 <+0x720b>
082130f0 +0x71c4:  movl   $0x2,0x4(%esp)
082130f8 +0x71cc:  mov    0x14(%ebp),%eax
082130fb +0x71cf:  mov    %eax,(%esp)
082130fe +0x71d2:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213103 +0x71d7:  mov    %eax,(%esp)
08213106 +0x71da:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821310b +0x71df:  mov    %eax,(%esp)
0821310e +0x71e2:  call   0807e6f0 <_init+0xfe8>
08213113 +0x71e7:  mov    %eax,-0x34(%ebp)
08213116 +0x71ea:  cmpl   $0x0,-0x34(%ebp)
0821311a +0x71ee:  jle    08213440 <+0x7514>
08213120 +0x71f4:  cmpl   $0x32,-0x34(%ebp)
08213124 +0x71f8:  jg     08213440 <+0x7514>
0821312a +0x71fe:  mov    -0x34(%ebp),%eax
0821312d +0x7201:  mov    %eax,&_ZN12advancealtar7Manager12gmTimeSpeed_E
08213132 +0x7206:  jmp    08213440 <+0x7514>
08213137 +0x720b:  movl   $0x1,0x4(%esp)
0821313f +0x7213:  mov    0x14(%ebp),%eax
08213142 +0x7216:  mov    %eax,(%esp)
08213145 +0x7219:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821314a +0x721e:  movl   $"star",0x4(%esp)
08213152 +0x7226:  mov    %eax,(%esp)
08213155 +0x7229:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821315a +0x722e:  test   %al,%al
0821315c +0x7230:  je     082131b8 <+0x728c>
0821315e +0x7232:  movl   $0x2,0x4(%esp)
08213166 +0x723a:  mov    0x14(%ebp),%eax
08213169 +0x723d:  mov    %eax,(%esp)
0821316c +0x7240:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213171 +0x7245:  mov    %eax,(%esp)
08213174 +0x7248:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08213179 +0x724d:  mov    %eax,(%esp)
0821317c +0x7250:  call   0807e6f0 <_init+0xfe8>
08213181 +0x7255:  mov    %eax,-0x30(%ebp)
08213184 +0x7258:  cmpl   $0x0,-0x30(%ebp)
08213188 +0x725c:  js     08213440 <+0x7514>
0821318e +0x7262:  cmpl   $0x3e7,-0x30(%ebp)
08213195 +0x7269:  jg     08213440 <+0x7514>
0821319b +0x726f:  mov    0xc(%ebp),%eax
0821319e +0x7272:  lea    0x8df60(%eax),%edx
082131a4 +0x7278:  mov    -0x30(%ebp),%eax
082131a7 +0x727b:  mov    %eax,0x4(%esp)
082131ab +0x727f:  mov    %edx,(%esp)
082131ae +0x7282:  call   08133720 <_ZN12advancealtar25CharacAdvanceAltarManager9gmSetStarEi>  ; advancealtar::CharacAdvanceAltarManager::gmSetStar(int)
082131b3 +0x7287:  jmp    08213440 <+0x7514>
082131b8 +0x728c:  movl   $0x1,0x4(%esp)
082131c0 +0x7294:  mov    0x14(%ebp),%eax
082131c3 +0x7297:  mov    %eax,(%esp)
082131c6 +0x729a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082131cb +0x729f:  movl   $"ticket",0x4(%esp)
082131d3 +0x72a7:  mov    %eax,(%esp)
082131d6 +0x72aa:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082131db +0x72af:  test   %al,%al
082131dd +0x72b1:  je     08213236 <+0x730a>
082131df +0x72b3:  movl   $0x2,0x4(%esp)
082131e7 +0x72bb:  mov    0x14(%ebp),%eax
082131ea +0x72be:  mov    %eax,(%esp)
082131ed +0x72c1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082131f2 +0x72c6:  mov    %eax,(%esp)
082131f5 +0x72c9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082131fa +0x72ce:  mov    %eax,(%esp)
082131fd +0x72d1:  call   0807e6f0 <_init+0xfe8>
08213202 +0x72d6:  mov    %eax,-0x2c(%ebp)
08213205 +0x72d9:  cmpl   $0x0,-0x2c(%ebp)
08213209 +0x72dd:  js     08213440 <+0x7514>
0821320f +0x72e3:  cmpl   $0x63,-0x2c(%ebp)
08213213 +0x72e7:  jg     08213440 <+0x7514>
08213219 +0x72ed:  mov    0xc(%ebp),%eax
0821321c +0x72f0:  lea    0x8df60(%eax),%edx
08213222 +0x72f6:  mov    -0x2c(%ebp),%eax
08213225 +0x72f9:  mov    %eax,0x4(%esp)
08213229 +0x72fd:  mov    %edx,(%esp)
0821322c +0x7300:  call   0813375c <_ZN12advancealtar25CharacAdvanceAltarManager11gmSetTicketEi>  ; advancealtar::CharacAdvanceAltarManager::gmSetTicket(int)
08213231 +0x7305:  jmp    08213440 <+0x7514>
08213236 +0x730a:  movl   $0x1,0x4(%esp)
0821323e +0x7312:  mov    0x14(%ebp),%eax
08213241 +0x7315:  mov    %eax,(%esp)
08213244 +0x7318:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213249 +0x731d:  movl   $"reset",0x4(%esp)
08213251 +0x7325:  mov    %eax,(%esp)
08213254 +0x7328:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08213259 +0x732d:  test   %al,%al
0821325b +0x732f:  je     08213440 <+0x7514>
08213261 +0x7335:  movl   $0x2,0x4(%esp)
08213269 +0x733d:  mov    0x14(%ebp),%eax
0821326c +0x7340:  mov    %eax,(%esp)
0821326f +0x7343:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213274 +0x7348:  movl   $"star",0x4(%esp)
0821327c +0x7350:  mov    %eax,(%esp)
0821327f +0x7353:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08213284 +0x7358:  test   %al,%al
08213286 +0x735a:  je     08213440 <+0x7514>
0821328c +0x7360:  movl   $0x3,0x4(%esp)
08213294 +0x7368:  mov    0x14(%ebp),%eax
08213297 +0x736b:  mov    %eax,(%esp)
0821329a +0x736e:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0821329f +0x7373:  mov    %eax,(%esp)
082132a2 +0x7376:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082132a7 +0x737b:  mov    %eax,(%esp)
082132aa +0x737e:  call   0807e6f0 <_init+0xfe8>
082132af +0x7383:  mov    %eax,-0x28(%ebp)
082132b2 +0x7386:  cmpl   $0x0,-0x28(%ebp)
082132b6 +0x738a:  js     08213440 <+0x7514>
082132bc +0x7390:  cmpl   $0x1,-0x28(%ebp)
082132c0 +0x7394:  jg     08213440 <+0x7514>
082132c6 +0x739a:  mov    -0x28(%ebp),%eax
082132c9 +0x739d:  mov    0xc(%ebp),%edx
082132cc +0x73a0:  add    $0x8df60,%edx
082132d2 +0x73a6:  mov    %eax,0x8(%esp)
082132d6 +0x73aa:  mov    0xc(%ebp),%eax
082132d9 +0x73ad:  mov    %eax,0x4(%esp)
082132dd +0x73b1:  mov    %edx,(%esp)
082132e0 +0x73b4:  call   081333b2 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE>  ; advancealtar::CharacAdvanceAltarManager::resetStar(CUser*, CMDPacketStruct::ResetStarType::T)
082132e5 +0x73b9:  jmp    08213440 <+0x7514>
082132ea +0x73be:  movl   $0x0,0x4(%esp)
082132f2 +0x73c6:  mov    0x14(%ebp),%eax
082132f5 +0x73c9:  mov    %eax,(%esp)
082132f8 +0x73cc:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082132fd +0x73d1:  movl   $"SetRewardLast",0x4(%esp)
08213305 +0x73d9:  mov    %eax,(%esp)
08213308 +0x73dc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0821330d +0x73e1:  test   %al,%al
0821330f +0x73e3:  je     0821335e <+0x7432>
08213311 +0x73e5:  movl   $0x1,0x4(%esp)
08213319 +0x73ed:  mov    0x14(%ebp),%eax
0821331c +0x73f0:  mov    %eax,(%esp)
0821331f +0x73f3:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213324 +0x73f8:  mov    %eax,(%esp)
08213327 +0x73fb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0821332c +0x7400:  mov    %eax,(%esp)
0821332f +0x7403:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
08213334 +0x7408:  mov    %eax,-0x24(%ebp)
08213337 +0x740b:  mov    -0x24(%ebp),%ebx
0821333a +0x740e:  mov    0xc(%ebp),%eax
0821333d +0x7411:  mov    %eax,(%esp)
08213340 +0x7414:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08213345 +0x7419:  movl   $0x1,0x8(%esp)
0821334d +0x7421:  mov    %ebx,0x4(%esp)
08213351 +0x7425:  mov    %eax,(%esp)
08213354 +0x7428:  call   08128152 <_ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii>  ; CLocalChina_DB_LastDay_BreakAway::makeRequest(unsigned int, int, int)
08213359 +0x742d:  jmp    08213440 <+0x7514>
0821335e +0x7432:  movl   $0x0,0x4(%esp)
08213366 +0x743a:  mov    0x14(%ebp),%eax
08213369 +0x743d:  mov    %eax,(%esp)
0821336c +0x7440:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213371 +0x7445:  movl   $"SetQuestLast",0x4(%esp)
08213379 +0x744d:  mov    %eax,(%esp)
0821337c +0x7450:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08213381 +0x7455:  test   %al,%al
08213383 +0x7457:  je     082133cf <+0x74a3>
08213385 +0x7459:  movl   $0x1,0x4(%esp)
0821338d +0x7461:  mov    0x14(%ebp),%eax
08213390 +0x7464:  mov    %eax,(%esp)
08213393 +0x7467:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213398 +0x746c:  mov    %eax,(%esp)
0821339b +0x746f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082133a0 +0x7474:  mov    %eax,(%esp)
082133a3 +0x7477:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
082133a8 +0x747c:  mov    %eax,-0x20(%ebp)
082133ab +0x747f:  mov    -0x20(%ebp),%ebx
082133ae +0x7482:  mov    0xc(%ebp),%eax
082133b1 +0x7485:  mov    %eax,(%esp)
082133b4 +0x7488:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082133b9 +0x748d:  movl   $0x0,0x8(%esp)
082133c1 +0x7495:  mov    %ebx,0x4(%esp)
082133c5 +0x7499:  mov    %eax,(%esp)
082133c8 +0x749c:  call   08128152 <_ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii>  ; CLocalChina_DB_LastDay_BreakAway::makeRequest(unsigned int, int, int)
082133cd +0x74a1:  jmp    08213440 <+0x7514>
082133cf +0x74a3:  movl   $0x0,0x4(%esp)
082133d7 +0x74ab:  mov    0x14(%ebp),%eax
082133da +0x74ae:  mov    %eax,(%esp)
082133dd +0x74b1:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
082133e2 +0x74b6:  movl   $"SetBreak",0x4(%esp)
082133ea +0x74be:  mov    %eax,(%esp)
082133ed +0x74c1:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082133f2 +0x74c6:  test   %al,%al
082133f4 +0x74c8:  je     08213440 <+0x7514>
082133f6 +0x74ca:  movl   $0x1,0x4(%esp)
082133fe +0x74d2:  mov    0x14(%ebp),%eax
08213401 +0x74d5:  mov    %eax,(%esp)
08213404 +0x74d8:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08213409 +0x74dd:  mov    %eax,(%esp)
0821340c +0x74e0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08213411 +0x74e5:  mov    %eax,(%esp)
08213414 +0x74e8:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
08213419 +0x74ed:  mov    %eax,-0x1c(%ebp)
0821341c +0x74f0:  mov    0xc(%ebp),%eax
0821341f +0x74f3:  mov    %eax,(%esp)
08213422 +0x74f6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08213427 +0x74fb:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%edx
0821342d +0x7501:  mov    -0x1c(%ebp),%ecx
08213430 +0x7504:  mov    %ecx,0x8(%esp)
08213434 +0x7508:  mov    %eax,0x4(%esp)
08213438 +0x750c:  mov    %edx,(%esp)
0821343b +0x750f:  call   0831ca5a <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj>  ; break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList(unsigned int, unsigned int)
08213440 +0x7514:  mov    $0x0,%ebx
08213445 +0x7519:  jmp    0821345f <+0x7533>
08213447 +0x751b:  mov    %edx,%ebx
08213449 +0x751d:  mov    %eax,%esi
0821344b +0x751f:  lea    -0x25c(%ebp),%eax
08213451 +0x7525:  mov    %eax,(%esp)
08213454 +0x7528:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08213459 +0x752d:  mov    %esi,%eax
0821345b +0x752f:  mov    %ebx,%edx
0821345d +0x7531:  jmp    0821346f <+0x7543>
0821345f +0x7533:  lea    -0x25c(%ebp),%eax
08213465 +0x7539:  mov    %eax,(%esp)
08213468 +0x753c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821346d +0x7541:  jmp    0821348d <+0x7561>
0821346f +0x7543:  mov    %edx,%ebx
08213471 +0x7545:  mov    %eax,%esi
08213473 +0x7547:  lea    -0x250(%ebp),%eax
08213479 +0x754d:  mov    %eax,(%esp)
0821347c +0x7550:  call   0823342e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8ad8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8ad8
08213481 +0x7555:  mov    %esi,%eax
08213483 +0x7557:  mov    %ebx,%edx
08213485 +0x7559:  mov    %eax,(%esp)
08213488 +0x755c:  call   08ae3750 <_Unwind_Resume>
0821348d +0x7561:  lea    -0x250(%ebp),%eax
08213493 +0x7567:  mov    %eax,(%esp)
08213496 +0x756a:  call   0823342e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8ad8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8ad8
0821349b +0x756f:  mov    %ebx,%eax
0821349d +0x7571:  lea    -0xc(%ebp),%esp
082134a0 +0x7574:  add    $0x0,%esp
082134a3 +0x7577:  pop    %ebx
082134a4 +0x7578:  pop    %esi
082134a5 +0x7579:  pop    %edi
082134a6 +0x757a:  pop    %ebp
082134a7 +0x757b:  ret
```

## 反编译 C

```c
// Dispatcher_New_Gmdebug_Command::oldGmRoutine @ 0x820bf2c

/* Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, std::vector<std::string,
   std::allocator<std::string > >&) */

undefined4 __thiscall
Dispatcher_New_Gmdebug_Command::oldGmRoutine
          (Dispatcher_New_Gmdebug_Command *this,CUser *param_1,PacketBuf *param_2,vector *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  string *psVar4;
  string *psVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  CInventory *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  CGuildServerProxy *this_00;
  size_t sVar13;
  undefined4 uVar14;
  CDataManager *pCVar15;
  GameWorld *pGVar16;
  SkillSlot *pSVar17;
  Stream *pSVar18;
  CStreamGuard *pCVar19;
  int iVar20;
  CFairPvPScore *pCVar21;
  CItemMakingSkill *this_01;
  undefined4 uVar22;
  PacketDispatcher *this_02;
  CStatisticServerProxy *this_03;
  CMonitorServerProxy *pCVar23;
  TimerQueue *pTVar24;
  time_t tVar25;
  Arad_DataManager *this_04;
  Arad_EventPeriodDataManager *this_05;
  long lVar26;
  undefined4 unaff_EBX;
  Inven_Item *pIVar27;
  byte bVar28;
  Inven_Item local_b30 [610];
  Inven_Item local_8ce [610];
  char local_66c [256];
  CSkillChanger local_56c [14];
  int local_55e;
  undefined2 local_4d5;
  undefined2 uStack_4d3;
  undefined2 uStack_4d1;
  undefined2 uStack_4cf;
  undefined4 local_4cd;
  undefined4 local_4c9;
  undefined4 local_4c5;
  undefined4 local_4c1;
  undefined4 local_4bd;
  undefined4 local_4b9;
  undefined4 local_4b5;
  undefined4 local_4b1;
  undefined4 local_4ad;
  undefined4 local_4a9;
  undefined4 local_4a5;
  undefined4 local_4a1;
  undefined4 local_49d;
  undefined1 local_499;
  MSG_DEBUG_COMMAND local_498 [14];
  int local_48a;
  MSG_DEBUG_COMMAND local_468 [14];
  int local_45a;
  undefined1 local_456;
  undefined1 local_455;
  CStreamGuard local_3d8 [8];
  SigSetCharacCreateTime local_3d0 [8];
  undefined4 local_3c8;
  undefined4 local_3c4;
  Packet_Game_Monitor_GM_Village_Attacked local_3bf [10];
  undefined1 local_3b5;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  CStreamGuard local_3a8 [10];
  Packet_Pcroom_Response local_39e [2];
  ushort local_39c;
  int local_394;
  undefined4 local_390;
  undefined4 local_38c;
  int local_388;
  undefined1 local_384;
  undefined1 local_383;
  ushort local_37f;
  int local_37d;
  Packet_CollectItemsGm local_373 [11];
  int local_368;
  int local_364;
  string local_35c [6];
  StatisticsGmCmdPacket local_356 [10];
  undefined4 local_34c;
  PacketGuard local_348 [12];
  PacketGuard local_33c [12];
  PacketGuard local_330 [12];
  PacketGuard local_324 [12];
  undefined4 local_318;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_314 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_308 [12];
  PacketGuard local_2fc [12];
  PacketGuard local_2f0 [12];
  undefined4 local_2e4;
  string local_2e0 [4];
  CRandomOptionItemHandleTest local_2dc [8];
  CStreamGuard local_2d4 [8];
  CStreamGuard local_2cc [10];
  TOD_Layer local_2c2 [2];
  PacketGuard local_2c0 [12];
  string local_2b4 [4];
  PacketGuard local_2b0 [12];
  string local_2a4 [4];
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined4 local_29b;
  undefined1 local_297;
  undefined4 local_296;
  undefined1 local_292;
  undefined4 local_291;
  undefined1 local_28d;
  PacketGuard local_28c [12];
  PacketGuard local_280 [12];
  string local_274 [4];
  PacketGuard local_270 [12];
  string local_264 [4];
  PacketGuard local_260 [12];
  DisPatcher_DebugCommand local_254 [6];
  allocator<char> local_24e;
  allocator<char> local_24d;
  allocator<char> local_24c;
  allocator<char> local_24b;
  TOD_Layer local_24a [2];
  cMyTrace local_248 [16];
  int local_238 [2];
  undefined4 local_230;
  int local_22c;
  int local_228 [2];
  undefined4 local_220;
  int local_21c;
  int local_218 [2];
  undefined4 local_210;
  int local_20c;
  int local_208 [2];
  undefined4 local_200;
  int local_1fc;
  int local_1f8 [2];
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8 [2];
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8 [2];
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8 [2];
  undefined4 local_1c0;
  int local_1bc;
  int local_1b8 [2];
  undefined4 local_1b0;
  int local_1ac;
  int local_1a8 [2];
  undefined4 local_1a0;
  int local_19c;
  int local_198 [2];
  undefined4 local_190;
  int local_18c;
  int local_188 [2];
  undefined4 local_180;
  int local_17c;
  int local_178 [2];
  undefined4 local_170;
  int local_16c;
  int local_168 [2];
  undefined4 local_160;
  int local_15c;
  int local_158 [2];
  undefined4 local_150;
  int local_14c;
  cMyTrace local_148 [16];
  string local_138 [6];
  allocator<char> local_132;
  undefined1 local_131;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  ulong local_114;
  undefined1 local_10d;
  int local_10c;
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  TOD_UserState *local_e8;
  short local_e4;
  short local_e2;
  int local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  CItem *local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  int local_98;
  CItem *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 *local_80;
  CParty *local_7c;
  CParty *local_78;
  int local_74;
  CParty *local_70;
  int local_6c;
  CParty *local_68;
  CUser local_61;
  undefined4 local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  short local_44;
  short local_42;
  int local_40;
  short local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar28 = 0;
  DisPatcher_DebugCommand::DisPatcher_DebugCommand(local_254);
                    /* try { // try from 0820bf4f to 0820bf53 has its CatchHandler @ 0821346f */
  PacketGuard::PacketGuard(local_260);
  local_131 = 1;
  psVar4 = (string *)
           std::vector<std::string,std::allocator<std::string>>::operator[]
                     ((vector<std::string,std::allocator<std::string>> *)param_3,0);
                    /* try { // try from 0820bf79 to 0820c904 has its CatchHandler @ 08213447 */
  bVar2 = std::operator==(psVar4,"lawless");
  if (bVar2) {
    psVar5 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)param_3,1);
    pcVar6 = (char *)std::string::c_str(psVar5);
    local_130 = atoi(pcVar6);
    if ((0 < local_130) && (local_130 < 10000)) {
      psVar5 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)param_3,1);
      pcVar6 = (char *)std::string::c_str(psVar5);
      iVar7 = atoi(pcVar6);
      CUserCharacInfo::SetCurCharacChaosPoint((CUserCharacInfo *)param_1,iVar7);
      CUser::SendNotiPacket(param_1,0,2,0);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,100);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
      CUser::Send(param_1,local_260);
      unaff_EBX = 0;
      goto LAB_0821345f;
    }
  }
  else {
    psVar4 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)param_3,0);
    bVar2 = std::operator==(psVar4,"bal");
    if (bVar2) {
      psVar5 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)param_3,1);
      pcVar6 = (char *)std::string::c_str(psVar5);
      local_12c = atoi(pcVar6);
      if ((0 < local_12c) && (local_12c < 10000)) {
        psVar5 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,1);
        pcVar6 = (char *)std::string::c_str(psVar5);
        iVar7 = atoi(pcVar6);
        CUserCharacInfo::setCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)param_1,iVar7 * 100);
        CUser::SendNotiPacket(param_1,0,2,0);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x65);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
        CUser::Send(param_1,local_260);
        unaff_EBX = 0;
        goto LAB_0821345f;
      }
    }
    else {
      psVar4 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)param_3,0);
      bVar2 = std::operator==(psVar4,"questclear2");
      if (bVar2) {
LAB_0820c238:
        bVar2 = true;
      }
      else {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,0);
        bVar2 = std::operator==(psVar4,"q");
        if (bVar2) goto LAB_0820c238;
        bVar2 = false;
      }
      if (bVar2) {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,1);
        bVar2 = std::operator==(psVar4,"on");
        if (!bVar2) {
          psVar4 = (string *)
                   std::vector<std::string,std::allocator<std::string>>::operator[]
                             ((vector<std::string,std::allocator<std::string>> *)param_3,1);
          bVar2 = std::operator==(psVar4,"off");
          if (!bVar2) {
            psVar5 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,1);
            pcVar6 = (char *)std::string::c_str(psVar5);
            local_128 = atoi(pcVar6);
            if ((0 < local_128) && (local_128 < 100000)) {
              CUser::setGmQuestFlag(param_1,true);
              CUser::quest_action(param_1,0x23,local_128,0,0);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x66);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
          }
        }
      }
      else {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,0);
        bVar2 = std::operator==(psVar4,"guild");
        if (bVar2) {
          psVar4 = (string *)
                   std::vector<std::string,std::allocator<std::string>>::operator[]
                             ((vector<std::string,std::allocator<std::string>> *)param_3,1);
          bVar2 = std::operator==(psVar4,"exp");
          if (bVar2) {
            psVar5 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,2);
            pcVar6 = (char *)std::string::c_str(psVar5);
            local_124 = atoi(pcVar6);
            if ((0 < local_124) && (local_124 < 10000)) {
              psVar5 = (string *)
                       std::vector<std::string,std::allocator<std::string>>::operator[]
                                 ((vector<std::string,std::allocator<std::string>> *)param_3,2);
              pcVar6 = (char *)std::string::c_str(psVar5);
              iVar7 = atoi(pcVar6);
              CUserCharacInfo::set_guild_exp((CUserCharacInfo *)param_1,iVar7);
              param_1[0x796d9] = (CUser)0x1;
              CUser::WorkPerFiveMin(param_1);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x67);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
          }
        }
        else {
          psVar4 = (string *)
                   std::vector<std::string,std::allocator<std::string>>::operator[]
                             ((vector<std::string,std::allocator<std::string>> *)param_3,0);
          bVar2 = std::operator==(psVar4,"troublemaker");
          if (bVar2) {
            psVar4 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,1);
            bVar2 = std::operator==(psVar4,"on");
            if (bVar2) {
              CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_1,100);
              CUser::SendNotiPacket(param_1,0,2,0);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x68);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
            psVar4 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,1);
            bVar2 = std::operator==(psVar4,"off");
            if (bVar2) {
              CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_1,0);
              CUser::SendNotiPacket(param_1,0,2,0);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x68);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
          }
          else {
            psVar4 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,0);
            bVar2 = std::operator==(psVar4,"fatigue");
            if (bVar2) {
              psVar4 = (string *)
                       std::vector<std::string,std::allocator<std::string>>::operator[]
                                 ((vector<std::string,std::allocator<std::string>> *)param_3,1);
              bVar2 = std::operator==(psVar4,"set");
              if (bVar2) {
                psVar5 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,2);
                pcVar6 = (char *)std::string::c_str(psVar5);
                local_120 = atoi(pcVar6);
                if ((-1 < local_120) && (local_120 < 10000)) {
                  uVar8 = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)param_1);
                  CUserCharacInfo::setCurCharacFatigue
                            ((CUserCharacInfo *)param_1,(uVar8 & 0xffff) - local_120);
                  CUser::SendFatigue(param_1);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x69);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
                  CUser::Send(param_1,local_260);
                  unaff_EBX = 0;
                  goto LAB_0821345f;
                }
              }
              else {
                psVar5 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,1);
                pcVar6 = (char *)std::string::c_str(psVar5);
                local_11c = atoi(pcVar6);
                if (((-1 < local_11c) && (local_11c < 10000)) && (0 < local_11c)) {
                  CUser::FatigueUp(param_1,local_11c);
                  CUser::SendFatigue(param_1);
                }
              }
            }
            else {
              psVar4 = (string *)
                       std::vector<std::string,std::allocator<std::string>>::operator[]
                                 ((vector<std::string,std::allocator<std::string>> *)param_3,0);
              bVar2 = std::operator==(psVar4,"show");
              if (bVar2) {
                psVar4 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,1);
                bVar2 = std::operator==(psVar4,"lp");
                if (bVar2) {
                  local_118 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)param_1);
                  std::allocator<char>::allocator();
                    /* try { // try from 0820c947 to 0820c94b has its CatchHandler @ 0820c94e */
                  std::string::string(local_264,"remained luck point : ",(allocator *)&local_24e);
                  std::allocator<char>::~allocator(&local_24e);
                  pcVar6 = local_66c;
                  for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                    pcVar6[0] = '\0';
                    pcVar6[1] = '\0';
                    pcVar6[2] = '\0';
                    pcVar6[3] = '\0';
                    pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                  }
                  pcVar6[0] = '\0';
                  pcVar6[1] = '\0';
                  pcVar6[2] = '\0';
                  sprintf(local_66c,"(%d) ",local_118);
                    /* try { // try from 0820c9cb to 0820c9dd has its CatchHandler @ 0820cae7 */
                  std::string::operator+=(local_264,local_66c);
                  PacketGuard::PacketGuard(local_270);
                    /* try { // try from 0820c9f7 to 0820cabc has its CatchHandler @ 0820cabf */
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_270,0,0xc);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_270,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_270,0);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_270,0);
                  iVar7 = std::string::size(local_264);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_270,iVar7);
                  iVar7 = std::string::size(local_264);
                  pcVar6 = (char *)std::string::c_str(local_264);
                  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_270,pcVar6,iVar7);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_270,true);
                  CUser::Send(param_1,local_270);
                    /* try { // try from 0820cae0 to 0820cae4 has its CatchHandler @ 0820cae7 */
                  PacketGuard::~PacketGuard(local_270);
                    /* try { // try from 0820cb0b to 0820cb7d has its CatchHandler @ 08213447 */
                  std::string::~string(local_264);
                }
              }
              else {
                psVar4 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,0);
                bVar2 = std::operator==(psVar4,"max");
                if (bVar2) {
                  psVar4 = (string *)
                           std::vector<std::string,std::allocator<std::string>>::operator[]
                                     ((vector<std::string,std::allocator<std::string>> *)param_3,1);
                  bVar2 = std::operator==(psVar4,"lp");
                  if (bVar2) {
                    CUserCharacInfo::IncCurCharacLuckPoint((CUserCharacInfo *)param_1,100000);
                    CUserCharacInfo::enableSaveCharacStat((CUserCharacInfo *)param_1);
                    std::allocator<char>::allocator();
                    /* try { // try from 0820cbb2 to 0820cbb6 has its CatchHandler @ 0820cbb9 */
                    std::string::string(local_274,"100000 luck point!!",(allocator *)&local_24d);
                    std::allocator<char>::~allocator(&local_24d);
                    /* try { // try from 0820cbeb to 0820cbef has its CatchHandler @ 0820ccf9 */
                    PacketGuard::PacketGuard(local_280);
                    /* try { // try from 0820cc09 to 0820ccce has its CatchHandler @ 0820ccd1 */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_280,0,0xc);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_280,0);
                    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_280,0);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_280,0);
                    iVar7 = std::string::size(local_274);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_280,iVar7);
                    iVar7 = std::string::size(local_274);
                    pcVar6 = (char *)std::string::c_str(local_274);
                    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_280,pcVar6,iVar7);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_280,true);
                    CUser::Send(param_1,local_280);
                    /* try { // try from 0820ccf2 to 0820ccf6 has its CatchHandler @ 0820ccf9 */
                    PacketGuard::~PacketGuard(local_280);
                    /* try { // try from 0820cd1d to 0820e498 has its CatchHandler @ 08213447 */
                    std::string::~string(local_274);
                  }
                }
                else {
                  psVar4 = (string *)
                           std::vector<std::string,std::allocator<std::string>>::operator[]
                                     ((vector<std::string,std::allocator<std::string>> *)param_3,0);
                  bVar2 = std::operator==(psVar4,"item");
                  if (bVar2) {
                    psVar5 = (string *)
                             std::vector<std::string,std::allocator<std::string>>::operator[]
                                       ((vector<std::string,std::allocator<std::string>> *)param_3,1
                                       );
                    pcVar6 = (char *)std::string::c_str(psVar5);
                    local_114 = atoi(pcVar6);
                    local_10d = DisPatcher_DebugCommand::_debugCommandAddItem
                                          (local_254,param_1,local_114,100);
                  }
                  else {
                    psVar4 = (string *)
                             std::vector<std::string,std::allocator<std::string>>::operator[]
                                       ((vector<std::string,std::allocator<std::string>> *)param_3,0
                                       );
                    bVar2 = std::operator==(psVar4,"show");
                    if (bVar2) {
                      local_131 = DisPatcher_DebugCommand::_debugCommandVisible
                                            ((CUser *)local_254,(MSG_DEBUG_COMMAND *)param_1);
                    }
                    else {
                      psVar4 = (string *)
                               std::vector<std::string,std::allocator<std::string>>::operator[]
                                         ((vector<std::string,std::allocator<std::string>> *)param_3
                                          ,0);
                      bVar2 = std::operator==(psVar4,"hide");
                      if (bVar2) {
                        local_131 = DisPatcher_DebugCommand::_debugCommandInvisible
                                              ((CUser *)local_254,(MSG_DEBUG_COMMAND *)param_1);
                      }
                      else {
                        psVar4 = (string *)
                                 std::vector<std::string,std::allocator<std::string>>::operator[]
                                           ((vector<std::string,std::allocator<std::string>> *)
                                            param_3,0);
                        bVar2 = std::operator==(psVar4,"dirty");
                        if (bVar2) {
                          psVar5 = (string *)
                                   std::vector<std::string,std::allocator<std::string>>::operator[]
                                             ((vector<std::string,std::allocator<std::string>> *)
                                              param_3,1);
                          pcVar6 = (char *)std::string::c_str(psVar5);
                          DoUserDefineCommand(param_1,0x1f,pcVar6);
                        }
                        else {
                          psVar4 = (string *)
                                   std::vector<std::string,std::allocator<std::string>>::operator[]
                                             ((vector<std::string,std::allocator<std::string>> *)
                                              param_3,0);
                          bVar2 = std::operator==(psVar4,"avatar");
                          if (bVar2) {
                            psVar5 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,1);
                            pcVar6 = (char *)std::string::c_str(psVar5);
                            local_45a = atoi(pcVar6);
                            psVar5 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,2);
                            pcVar6 = (char *)std::string::c_str(psVar5);
                            iVar7 = atoi(pcVar6);
                            local_455 = (undefined1)iVar7;
                            psVar5 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,3);
                            pcVar6 = (char *)std::string::c_str(psVar5);
                            iVar7 = atoi(pcVar6);
                            local_456 = (undefined1)iVar7;
                            local_131 = DisPatcher_DebugCommand::_debugCommandAddAvatar
                                                  (local_254,param_1,local_468);
                          }
                          else {
                            psVar4 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,0);
                            bVar2 = std::operator==(psVar4,"combo");
                            if (!bVar2) {
                              psVar4 = (string *)
                                       std::vector<std::string,std::allocator<std::string>>::
                                       operator[]((vector<std::string,std::allocator<std::string>> *
                                                  )param_3,0);
                              bVar2 = std::operator==(psVar4,"coin");
                              if (bVar2) {
                                psVar5 = (string *)
                                         std::vector<std::string,std::allocator<std::string>>::
                                         operator[]((vector<std::string,std::allocator<std::string>>
                                                     *)param_3,1);
                                pcVar6 = (char *)std::string::c_str(psVar5);
                                local_10c = atoi(pcVar6);
                                pCVar9 = (CInventory *)
                                         CUserCharacInfo::getCurCharacInvenR
                                                   ((CUserCharacInfo *)param_1);
                                iVar7 = CInventory::GetCoin(pCVar9);
                                local_108 = iVar7 - local_10c;
                                if ((int)local_108 < 0) {
                                  local_108 = 0;
                                }
                                uVar8 = local_108;
                                pCVar9 = (CInventory *)
                                         CUserCharacInfo::getCurCharacInvenW
                                                   ((CUserCharacInfo *)param_1);
                                CInventory::SetCoin(pCVar9,uVar8);
                                if (local_10c == 0) {
                                  pCVar9 = (CInventory *)
                                           CUserCharacInfo::getCurCharacInvenW
                                                     ((CUserCharacInfo *)param_1);
                                  CInventory::SetCoin(pCVar9,0);
                                  pCVar9 = (CInventory *)
                                           CUserCharacInfo::getCurCharacInvenW
                                                     ((CUserCharacInfo *)param_1);
                                  CInventory::SetPayCoin(pCVar9,0);
                                  pCVar9 = (CInventory *)
                                           CUserCharacInfo::getCurCharacInvenW
                                                     ((CUserCharacInfo *)param_1);
                                  CInventory::SetEventCoin(pCVar9,0);
                                }
                                CUser::SendCoin(param_1);
                              }
                              else {
                                psVar4 = (string *)
                                         std::vector<std::string,std::allocator<std::string>>::
                                         operator[]((vector<std::string,std::allocator<std::string>>
                                                     *)param_3,0);
                                bVar2 = std::operator==(psVar4,"use");
                                if (bVar2) {
                                  psVar4 = (string *)
                                           std::vector<std::string,std::allocator<std::string>>::
                                           operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                  bVar2 = std::operator==(psVar4,"item");
                                  if (bVar2) {
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                    pcVar6 = (char *)std::string::c_str(psVar5);
                                    local_104 = atoi(pcVar6);
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                    pcVar6 = (char *)std::string::c_str(psVar5);
                                    local_100 = atoi(pcVar6);
                                    if ((local_104 < 1) || (6 < local_104)) {
                                      unaff_EBX = 0;
                                      goto LAB_0821345f;
                                    }
                                    local_104 = local_104 + 2;
                                    for (local_fc = 0; local_fc < local_100; local_fc = local_fc + 1
                                        ) {
                                      CUser::increase_status(param_1,(short)local_104);
                                    }
                                    CUser::SendUpdateItemList(param_1,1,0,local_104);
                                  }
                                }
                                else {
                                  psVar4 = (string *)
                                           std::vector<std::string,std::allocator<std::string>>::
                                           operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                  bVar2 = std::operator==(psVar4,"npcfav");
                                  if (bVar2) {
                                    pcVar6 = local_66c;
                                    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                                      pcVar6[0] = '\0';
                                      pcVar6[1] = '\0';
                                      pcVar6[2] = '\0';
                                      pcVar6[3] = '\0';
                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                    }
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                    uVar10 = std::string::c_str(psVar5);
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                    uVar11 = std::string::c_str(psVar5);
                                    sprintf(local_66c,"%s %s",uVar11,uVar10);
                                    DoUserDefineCommand(param_1,0x24,local_66c);
                                  }
                                  else {
                                    psVar4 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                    bVar2 = std::operator==(psVar4,"favterm");
                                    if (bVar2) {
                                      pcVar6 = local_66c;
                                      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                                        pcVar6[0] = '\0';
                                        pcVar6[1] = '\0';
                                        pcVar6[2] = '\0';
                                        pcVar6[3] = '\0';
                                        pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                      }
                                      psVar5 = (string *)
                                               std::vector<std::string,std::allocator<std::string>>
                                               ::operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                      uVar10 = std::string::c_str(psVar5);
                                      psVar5 = (string *)
                                               std::vector<std::string,std::allocator<std::string>>
                                               ::operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                      uVar11 = std::string::c_str(psVar5);
                                      sprintf(local_66c,"%s %s",uVar11,uVar10);
                                      DoUserDefineCommand(param_1,0x23,local_66c);
                                    }
                                    else {
                                      psVar4 = (string *)
                                               std::vector<std::string,std::allocator<std::string>>
                                               ::operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                      bVar2 = std::operator==(psVar4,"sumhell");
                                      if (bVar2) {
                                        psVar5 = (string *)
                                                 std::
                                                 vector<std::string,std::allocator<std::string>>::
                                                 operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                        pcVar6 = (char *)std::string::c_str(psVar5);
                                        DoUserDefineCommand(param_1,0x15,pcVar6);
                                      }
                                      else {
                                        psVar4 = (string *)
                                                 std::
                                                 vector<std::string,std::allocator<std::string>>::
                                                 operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                        bVar2 = std::operator==(psVar4,"sdale");
                                        if (bVar2) {
                                          psVar5 = (string *)
                                                   std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                          pcVar6 = (char *)std::string::c_str(psVar5);
                                          DoUserDefineCommand(param_1,0x1c,pcVar6);
                                        }
                                        else {
                                          psVar4 = (string *)
                                                   std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                          bVar2 = std::operator==(psVar4,"mdt");
                                          if (bVar2) {
LAB_0820d4d9:
                                            bVar2 = true;
                                          }
                                          else {
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"monsterdroptest");
                                            if (bVar2) goto LAB_0820d4d9;
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"startmdt");
                                            if (bVar2) goto LAB_0820d4d9;
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"endmdt");
                                            if (bVar2) goto LAB_0820d4d9;
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"goldmdt");
                                            if (bVar2) goto LAB_0820d4d9;
                                            bVar2 = false;
                                          }
                                          if (bVar2) {
                                            pcVar6 = local_66c;
                                            for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                                              pcVar6[0] = '\0';
                                              pcVar6[1] = '\0';
                                              pcVar6[2] = '\0';
                                              pcVar6[3] = '\0';
                                              pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                            }
                                            pcVar6[0] = '\0';
                                            pcVar6[1] = '\0';
                                            pcVar6[2] = '\0';
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"startmdt");
                                            if (bVar2) {
                                              psVar5 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                              uVar10 = std::string::c_str(psVar5);
                                              sprintf(local_66c,"%d %s",1,uVar10);
                                            }
                                            else {
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                              bVar2 = std::operator==(psVar4,"endmdt");
                                              if (bVar2) {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                uVar10 = std::string::c_str(psVar5);
                                                sprintf(local_66c,"%d %s",2,uVar10);
                                              }
                                              else {
                                                psVar4 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                bVar2 = std::operator==(psVar4,"goldmdt");
                                                if (bVar2) {
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%d %s",3,uVar10);
                                                }
                                                else {
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%d %s",0,uVar10);
                                                }
                                              }
                                            }
                                            DoUserDefineCommand(param_1,0x4b,local_66c);
                                          }
                                          else {
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"cli");
                                            if (bVar2) {
LAB_0820d6f3:
                                              bVar2 = true;
                                            }
                                            else {
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                              bVar2 = std::operator==(psVar4,"checklottoitem");
                                              if (bVar2) goto LAB_0820d6f3;
                                              bVar2 = false;
                                            }
                                            if (bVar2) {
                                              pcVar6 = local_66c;
                                              for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                                                pcVar6[0] = '\0';
                                                pcVar6[1] = '\0';
                                                pcVar6[2] = '\0';
                                                pcVar6[3] = '\0';
                                                pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                              }
                                              pcVar6[0] = '\0';
                                              pcVar6[1] = '\0';
                                              pcVar6[2] = '\0';
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                              bVar2 = std::operator==(psVar4,"ven");
                                              if (bVar2) {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                uVar10 = std::string::c_str(psVar5);
                                                sprintf(local_66c,"%d %s",1,uVar10);
                                                DoUserDefineCommand(param_1,0x4d,local_66c);
                                              }
                                              else {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                uVar10 = std::string::c_str(psVar5);
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                uVar11 = std::string::c_str(psVar5);
                                                sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                DoUserDefineCommand(param_1,0x4c,local_66c);
                                              }
                                            }
                                            else {
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                              bVar2 = std::operator==(psVar4,"cbind");
                                              if (bVar2) {
LAB_0820d874:
                                                bVar2 = true;
                                              }
                                              else {
                                                psVar4 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                bVar2 = std::operator==(psVar4,"checkbind");
                                                if (bVar2) goto LAB_0820d874;
                                                bVar2 = false;
                                              }
                                              if (bVar2) {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                pcVar6 = (char *)std::string::c_str(psVar5);
                                                DoUserDefineCommand(param_1,0x4e,pcVar6);
                                              }
                                              else {
                                                psVar4 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                bVar2 = std::operator==("oneadayitem",psVar4);
                                                if (bVar2) {
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x52,pcVar6);
                                                }
                                                else {
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("craneDay",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x79,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"cinven");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x46,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pickup");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x47,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"refund");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x48,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"tb");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x5d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"adjust");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x5e,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"no");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x5f,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"achieve");
                                                  if (bVar2) {
LAB_0820dcde:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ac");
                                                  if (bVar2) goto LAB_0820dcde;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x60,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"report");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x61,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"clear");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x62,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"all");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,99,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"no");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,100,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"power");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"userpoint");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_48a = atoi(pcVar6);
                                                  local_131 = DisPatcher_DebugCommand::
                                                              _debugCommandUserPowerwarPointUp
                                                                        (local_254,param_1,local_498
                                                                        );
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"guildpoint");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_55e = iVar7;
                                                  uVar8 = CUserCharacInfo::getCurCharacNo
                                                                    ((CUserCharacInfo *)param_1);
                                                  uVar12 = CUserCharacInfo::get_charac_guildkey
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar10 = CUser::GetServerGroup(param_1);
                                                  this_00 = (CGuildServerProxy *)
                                                            CServerProxyMgr<CGuildServerProxy>::
                                                            GetServerProxy(GlobalData::
                                                                           s_guild_proxy_mgr,uVar10)
                                                  ;
                                                  CGuildServerProxy::
                                                  SendIncreaseDecreasePowerWarPoint
                                                            (this_00,uVar12,uVar8,iVar7);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"win");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2b,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"townatk");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"success");
                                                  if (bVar2) {
                                                    SendVillageAttackedGMCommand(param_1,1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"fail");
                                                  if (bVar2) {
                                                    SendVillageAttackedGMCommand(param_1,2);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"end");
                                                  if (bVar2) {
                                                    SendVillageAttackedGMCommand(param_1,3);
                                                  }
                                                  else {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x1e,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"rec");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"start");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x12,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"stop");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x13,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"run");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x14,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"spd");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,9,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"durable");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x29,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"sep");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"upgrade");
                                                  if (bVar2) {
LAB_0820e477:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"up");
                                                  if (bVar2) goto LAB_0820e477;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    PacketGuard::PacketGuard(local_28c);
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                    /* try { // try from 0820e4d8 to 0820e7bc has its CatchHandler @ 0820e7d5 */
                                                  bVar2 = std::operator==(psVar4,"success");
                                                  if (bVar2) {
LAB_0820e508:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"s");
                                                  if (bVar2) goto LAB_0820e508;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    cVar3 = CUserCharacInfo::
                                                            getUpgradeSeparateTrueFlag
                                                                      ((CUserCharacInfo *)param_1);
                                                    if (cVar3 == '\0') {
                                                      local_291 = 0x6b6f;
                                                      local_28d = 0;
                                                      CUserCharacInfo::setUpgradeSeparateTrueFlag
                                                                ((CUserCharacInfo *)param_1,'\x01');
                                                      CUserCharacInfo::setUpgradeSeparateFalseFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      sprintf(local_66c,"sep upgrade success - %s",
                                                              &local_291);
                                                    }
                                                    else {
                                                      local_296 = 0x646e65;
                                                      local_292 = 0;
                                                      CUserCharacInfo::setUpgradeSeparateTrueFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      sprintf(local_66c,"sep upgrade success - %s",
                                                              &local_296);
                                                    }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"fail");
                                                  if (bVar2) {
LAB_0820e623:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"f");
                                                  if (bVar2) goto LAB_0820e623;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    cVar3 = CUserCharacInfo::
                                                            getUpgradeSeparateFlaseFlag
                                                                      ((CUserCharacInfo *)param_1);
                                                    if (cVar3 == '\0') {
                                                      local_29b = 0x6b6f;
                                                      local_297 = 0;
                                                      CUserCharacInfo::setUpgradeSeparateTrueFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      CUserCharacInfo::setUpgradeSeparateFalseFlag
                                                                ((CUserCharacInfo *)param_1,'\x01');
                                                      sprintf(local_66c,"sep upgrade fail - %s",
                                                              &local_29b);
                                                    }
                                                    else {
                                                      local_2a0 = 0x646e65;
                                                      local_29c = 0;
                                                      CUserCharacInfo::setUpgradeSeparateFalseFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      sprintf(local_66c,"sep upgrade fail - %s",
                                                              &local_2a0);
                                                    }
                                                  }
                                                  }
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_28c,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_28c,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_28c,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_28c,0);
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_28c,sVar13)
                                                  ;
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_28c,
                                                             local_66c,sVar13);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_28c,true);
                                                  CUser::Send(param_1,local_28c);
                                                  unaff_EBX = 0;
                    /* try { // try from 0820e7cb to 0820e7cf has its CatchHandler @ 08213447 */
                                                  PacketGuard::~PacketGuard(local_28c);
                                                  goto LAB_0821345f;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                    /* try { // try from 0820e80e to 0820f04e has its CatchHandler @ 08213447 */
                                                  bVar2 = std::operator==(psVar4,"initstat");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x3f,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"guilddebug");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x42,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"delguild");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2c,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"changename");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"startevent");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar14 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s %s",uVar14,uVar11,uVar10)
                                                  ;
                                                  DoUserDefineCommand(param_1,0x2e,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"endevent");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2f,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"shopcheck");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x30,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"shopnpc");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x31,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"cargo");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"delete");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x36,pcVar6);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"guildfund");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x41,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"dropitem");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x34,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"premiumdelete");
                                                  if (bVar2) {
LAB_0820ecef:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pd");
                                                  if (bVar2) goto LAB_0820ecef;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x3c,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"mailitem");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x3d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ci");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"true");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x6d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"false");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x6d,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ritemclear");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x76,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"difficulty");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x78,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"bluemarble");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x7d,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ulti");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"max");
                                                  if (bVar2) {
                                                    pCVar15 = (CDataManager *)G_CDataManager();
                                                    cVar3 = CDataManager::get_limit_inout_count
                                                                      (pCVar15,2);
                                                    CUserCharacInfo::setUltimateInoutValue
                                                              ((CUserCharacInfo *)param_1,'\x02',
                                                               cVar3);
                                                    std::allocator<char>::allocator();
                    /* try { // try from 0820f0a2 to 0820f0a6 has its CatchHandler @ 0820f0a9 */
                                                    std::string::string(local_2a4,
                                                                                                                                                
                                                  "Add ultimate inout max count!!",
                                                  (allocator *)&local_24c);
                                                  std::allocator<char>::~allocator(&local_24c);
                    /* try { // try from 0820f0db to 0820f0df has its CatchHandler @ 0820f1e9 */
                                                  PacketGuard::PacketGuard(local_2b0);
                    /* try { // try from 0820f0f9 to 0820f1be has its CatchHandler @ 0820f1c1 */
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_2b0,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2b0,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_2b0,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2b0,0);
                                                  iVar7 = std::string::size(local_2a4);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_2b0,iVar7);
                                                  iVar7 = std::string::size(local_2a4);
                                                  pcVar6 = (char *)std::string::c_str(local_2a4);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_2b0,pcVar6,
                                                             iVar7);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_2b0,true);
                                                  CUser::Send(param_1,local_2b0);
                    /* try { // try from 0820f1e2 to 0820f1e6 has its CatchHandler @ 0820f1e9 */
                                                  PacketGuard::~PacketGuard(local_2b0);
                    /* try { // try from 0820f20d to 0820f27d has its CatchHandler @ 08213447 */
                                                  std::string::~string(local_2a4);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"dimen");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"max");
                                                  if (bVar2) {
                                                    for (local_f8 = 0; local_f8 < 6;
                                                        local_f8 = local_f8 + 1) {
                                                      pCVar15 = (CDataManager *)G_CDataManager();
                                                      cVar3 = CDataManager::get_dimensionInout
                                                                        (pCVar15,local_f8);
                                                      CUserCharacInfo::setDemensionInoutValue
                                                                ((CUserCharacInfo *)param_1,
                                                                 (char)local_f8,cVar3);
                                                    }
                                                    std::allocator<char>::allocator();
                    /* try { // try from 0820f2ed to 0820f2f1 has its CatchHandler @ 0820f2f4 */
                                                    std::string::string(local_2b4,
                                                                                                                                                
                                                  "Add dimension inout max count!!",
                                                  (allocator *)&local_24b);
                                                  std::allocator<char>::~allocator(&local_24b);
                    /* try { // try from 0820f326 to 0820f32a has its CatchHandler @ 0820f434 */
                                                  PacketGuard::PacketGuard(local_2c0);
                    /* try { // try from 0820f344 to 0820f409 has its CatchHandler @ 0820f40c */
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_2c0,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2c0,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_2c0,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2c0,0);
                                                  iVar7 = std::string::size(local_2b4);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_2c0,iVar7);
                                                  iVar7 = std::string::size(local_2b4);
                                                  pcVar6 = (char *)std::string::c_str(local_2b4);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_2c0,pcVar6,
                                                             iVar7);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_2c0,true);
                                                  CUser::Send(param_1,local_2c0);
                    /* try { // try from 0820f42d to 0820f431 has its CatchHandler @ 0820f434 */
                                                  PacketGuard::~PacketGuard(local_2c0);
                    /* try { // try from 0820f458 to 0820f63f has its CatchHandler @ 08213447 */
                                                  std::string::~string(local_2b4);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"dontsend");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"on");
                                                  if (bVar2) {
                                                    CUser::SetDebugCommand(param_1,1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"off");
                                                  if (bVar2) {
                                                    CUser::SetDebugCommand(param_1,0);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pvpskilllevel");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_f4 = atoi(pcVar6);
                                                  if (0x25 < local_f4) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_f0 = RefPvpGrade::GetPvpNextRankPoint
                                                                       (GlobalData::s_ref_pvp_grade,
                                                                        local_f4);
                                                  iVar7 = CUserCharacInfo::getPVPResultW
                                                                    ((CUserCharacInfo *)param_1);
                                                  *(undefined4 *)(iVar7 + 8) = local_f0;
                                                  iVar7 = CUserCharacInfo::getPVPResultW
                                                                    ((CUserCharacInfo *)param_1);
                                                  *(int *)(iVar7 + 0x14) = local_f4;
                                                  pGVar16 = (GameWorld *)G_GameWorld();
                                                  GameWorld::send_AllBasicInfo(pGVar16,param_1);
                                                  CUser::givePvPSkillTree(param_1,0,false,3);
                                                  CUser::send_skill_info(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"lethe");
                                                  if (bVar2) {
                                                    pSVar17 = (SkillSlot *)
                                                              CUserCharacInfo::getCurCharacSkillW
                                                                        ((CUserCharacInfo *)param_1)
                                                    ;
                                                    SkillSlot::clear_all_skills_both(pSVar17);
                                                    pSVar17 = (SkillSlot *)
                                                              CUserCharacInfo::getCurCharacSkillW
                                                                        ((CUserCharacInfo *)param_1)
                                                    ;
                                                    SkillSlot::set_parent(pSVar17,param_1);
                                                    WongWork::CSkillChanger::CSkillChanger
                                                              (local_56c);
                    /* try { // try from 0820f688 to 0820f6ba has its CatchHandler @ 0820f6bd */
                                                    WongWork::CSkillChanger::SkillInitialize
                                                              (local_56c,param_1,0,false);
                                                    CUser::givePvPSkillTree(param_1,0,false,3);
                                                    CUser::send_skill_info(param_1);
                                                    WongWork::CSkillChanger::~CSkillChanger
                                                              (local_56c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                    /* try { // try from 0820f709 to 0820f905 has its CatchHandler @ 08213447 */
                                                  bVar2 = std::operator==(psVar4,"rematch");
                                                  if (bVar2) {
                                                    local_ec = CUser::GetPVPRoom(param_1);
                                                    if ((local_ec != 0) &&
                                                       (*(int *)(local_ec + 0x6e4) != 0)) {
                                                      pcVar1 = *(code **)(**(int **)(local_ec +
                                                                                    0x6e4) + 0x68);
                                                      psVar5 = (string *)
                                                               std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  (*pcVar1)(*(undefined4 *)(local_ec + 0x6e4),
                                                            param_1,iVar7);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("wjfakd",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  TOD_Layer::TOD_Layer(local_2c2,(ushort)iVar7);
                                                  local_e8 = (TOD_UserState *)
                                                             CUser::GetCharacExpandData(param_1,0xd)
                                                  ;
                                                  TOD_UserState::setEnterLayer(local_e8,local_2c2);
                                                  TOD_UserState::getTodayEnterLayer();
                                                  uVar8 = TOD_Layer::GetLayer(local_24a);
                                                  sprintf(local_66c,"set Enter Layer : %d",
                                                          uVar8 & 0xffff);
                                                  TowerOfDespairMgr::SendMessageToCUser
                                                            (param_1,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("wjfakd2",psVar4);
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==("reload",psVar4);
                                                  if (bVar2) {
                                                    pSVar18 = (Stream *)
                                                              StreamPool::Acquire(GlobalData::
                                                                                  s_stream_pool,
                                                                                                                                                                    
                                                  "PacketDispatcher_Impl_1.cpp",0xb719);
                                                  CStreamGuard::CStreamGuard(local_2cc,pSVar18,true)
                                                  ;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2cc);
                    /* try { // try from 0820f939 to 0820f97a has its CatchHandler @ 0820f97d */
                                                  CStreamGuard::operator<<(pCVar19,0x277);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2cc);
                                                  CStreamGuard::operator<<(pCVar19,-1);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,
                                                                   local_2cc);
                    /* try { // try from 0820f9a1 to 0820f9f2 has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_2cc);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==("randomselect",psVar4);
                                                  if (bVar2) {
                                                    pSVar18 = (Stream *)
                                                              StreamPool::Acquire(GlobalData::
                                                                                  s_stream_pool,
                                                                                                                                                                    
                                                  "PacketDispatcher_Impl_1.cpp",0xb720);
                                                  CStreamGuard::CStreamGuard(local_2d4,pSVar18,true)
                                                  ;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2d4);
                    /* try { // try from 0820fa26 to 0820fa67 has its CatchHandler @ 0820fa6a */
                                                  CStreamGuard::operator<<(pCVar19,0x275);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2d4);
                                                  CStreamGuard::operator<<(pCVar19,-1);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,
                                                                   local_2d4);
                    /* try { // try from 0820fa8e to 082102da has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_2d4);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  std::operator==("layerinfo",psVar4);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("mission",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  CUser::SetMissionParameter(param_1,iVar20,iVar7);
                                                  CUser::send_MissionList(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("newdailymission",psVar4);
                                                  if (bVar2) {
                                                    CUser::ResetDailyMission(param_1);
                                                    CUser::send_MissionList(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("clearmission",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  CUser::ClearMission(param_1,(short)iVar7);
                                                  CUser::send_MissionList(param_1);
                                                  CUser::send_pvp_record(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("clearmissionkind",psVar4)
                                                  ;
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  CUser::ClearMissionKind(param_1,(short)iVar7);
                                                  CUser::send_MissionList(param_1);
                                                  CUser::send_pvp_record(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("resetmissionlist",psVar4)
                                                  ;
                                                  if (bVar2) {
                                                    CUser::ResetMissionList(param_1);
                                                    CUser::send_MissionList(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("resetdaily",psVar4);
                                                  if (bVar2) {
                                                    pGVar16 = (GameWorld *)G_GameWorld();
                                                    GameWorld::ResetAllFatigue(pGVar16);
                                                    G_GameWorld();
                                                    GameWorld::ReselectDailyQuest();
                                                    G_GameWorld();
                                                    GameWorld::AddDailyItem();
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("combomission",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_e4 = (short)iVar7;
                                                  cVar3 = CUserCharacInfo::getCurCharacGrowType
                                                                    ((CUserCharacInfo *)param_1);
                                                  if (cVar3 == '\0') {
                                                    local_e2 = 0x1f;
                                                  }
                                                  else {
                                                    local_e2 = 0x20;
                                                  }
                                                  CUser::Update_ComboMission
                                                            (param_1,(int)local_e2,local_e4);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("roiregen",psVar4);
                                                  if (!bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qp");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_e0 = atoi(pcVar6);
                                                  CUser::setQuestPoint(param_1,local_e0);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"registauction");
                                                  if (bVar2) {
                                                    random_option::CRandomOptionItemHandleTest::
                                                    CRandomOptionItemHandleTest(local_2dc);
                                                    random_option::CRandomOptionItemHandleTest::
                                                    test_regist_auction((CUser *)local_2dc);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"burningstage");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_dc = iVar7;
                                                  pCVar21 = (CFairPvPScore *)
                                                            CUser::GetCharacExpandData(param_1,7);
                                                  fair_pvp::CFairPvPScore::SetRemainBonusCount
                                                            (pCVar21,iVar7);
                                                  iVar7 = G_CDataManager();
                                                  iVar7 = (uint)*(ushort *)(iVar7 + 0x49e0) -
                                                          local_dc;
                                                  pCVar21 = (CFairPvPScore *)
                                                            CUser::GetCharacExpandData(param_1,7);
                                                  fair_pvp::CFairPvPScore::SetDailyPlayCount
                                                            (pCVar21,iVar7);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"randitem");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"");
                                                  if (bVar2) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_d8 = atoi(pcVar6);
                                                  Inven_Item::Inven_Item((Inven_Item *)&local_4d5);
                                                  iVar7 = local_d8;
                                                  uStack_4d3 = (undefined2)local_d8;
                                                  uStack_4d1 = (undefined2)((uint)local_d8 >> 0x10);
                                                  pCVar15 = (CDataManager *)G_CDataManager();
                                                  local_d4 = (int *)CDataManager::find_item
                                                                              (pCVar15,iVar7);
                                                  if (local_d4 == (int *)0x0) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  (**(code **)(*local_d4 + 8))(local_d4,&local_4d5);
                                                  local_d0 = 2;
                                                  for (local_c8 = 0; local_c8 < 3;
                                                      local_c8 = local_c8 + 1) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0);
                                                  bVar2 = std::operator==(psVar4,"");
                                                  if (bVar2) break;
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0 + 1);
                                                  bVar2 = std::operator==(psVar4,"");
                                                  iVar7 = local_c8;
                                                  if (bVar2) break;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  *(char *)((int)&local_4b1 + iVar7 * 3 + 1) =
                                                       (char)iVar20;
                                                  iVar7 = local_c8;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0 + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  *(char *)((int)&local_4b1 + iVar7 * 3 + 2) =
                                                       (char)iVar20;
                                                  iVar7 = local_c8;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0 + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  *(char *)((int)&local_4b1 + iVar7 * 3 + 3) =
                                                       (char)iVar20;
                                                  local_d0 = local_d0 + 2;
                                                  }
                                                  uVar10 = CUserCharacInfo::getCurCharacInvenW
                                                                     ((CUserCharacInfo *)param_1);
                                                  local_cc = CInventory::insertItemIntoInventory
                                                                       (uVar10,CONCAT22(uStack_4d3,
                                                                                        local_4d5),
                                                                        CONCAT22(uStack_4cf,
                                                                                 uStack_4d1),
                                                                        local_4cd,local_4c9,
                                                                        local_4c5,local_4c1,
                                                                        local_4bd,local_4b9,
                                                                        local_4b5,local_4b1,
                                                                        local_4ad,local_4a9,
                                                                        local_4a5,local_4a1,
                                                                        local_49d,local_499,6,1,1);
                                                  if (-1 < local_cc) {
                                                    CUser::SendUpdateItemList(param_1,1,0,local_cc);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"insertitem");
                                                  if (bVar2) {
                                                    std::string::string(local_2e0);
                                                    for (local_b4 = 1; (int)local_b4 < 10;
                                                        local_b4 = local_b4 + 1) {
                                                      psVar5 = (string *)
                                                               std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_b4);
                    /* try { // try from 08210302 to 0821040a has its CatchHandler @ 082107d9 */
                                                  iVar7 = std::string::length(psVar5);
                                                  if (iVar7 == 0) break;
                                                  iVar7 = std::string::length(local_2e0);
                                                  if (iVar7 != 0) {
                                                    std::string::operator+=(local_2e0," ");
                                                  }
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_b4);
                                                  std::string::operator+=(local_2e0,psVar5);
                                                  }
                                                  pcVar6 = (char *)std::string::c_str(local_2e0);
                                                  pCVar15 = (CDataManager *)G_CDataManager();
                                                  local_c4 = (CItem *)CDataManager::find_item
                                                                                (pCVar15,pcVar6);
                                                  if (local_c4 == (CItem *)0x0) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    uVar10 = std::string::c_str(local_2e0);
                                                    sprintf(local_66c,"cannot find item (%s) ",
                                                            uVar10);
                                                    PacketGuard::PacketGuard(local_2f0);
                    /* try { // try from 08210424 to 082104df has its CatchHandler @ 082104f5 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_2f0,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2f0,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_2f0,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2f0,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_2f0,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_2f0,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_2f0,true)
                                                    ;
                                                    CUser::Send(param_1,local_2f0);
                                                    unaff_EBX = 0;
                    /* try { // try from 082104ee to 082104f2 has its CatchHandler @ 082107d9 */
                                                    PacketGuard::~PacketGuard(local_2f0);
                                                    bVar2 = false;
                                                  }
                                                  else {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    uVar10 = CItem::get_index(local_c4);
                                                    sprintf(local_66c,"item_index(%d) ",uVar10);
                    /* try { // try from 0821056c to 08210570 has its CatchHandler @ 082107d9 */
                                                    PacketGuard::PacketGuard(local_2fc);
                    /* try { // try from 0821058a to 08210645 has its CatchHandler @ 08210648 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_2fc,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2fc,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_2fc,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2fc,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_2fc,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_2fc,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_2fc,true)
                                                    ;
                                                    CUser::Send(param_1,local_2fc);
                    /* try { // try from 0821066c to 082107c3 has its CatchHandler @ 082107d9 */
                                                    PacketGuard::~PacketGuard(local_2fc);
                                                    local_c0 = CItem::get_index(local_c4);
                                                    local_bc = 100;
                                                    if (((local_c4 != (CItem *)0x0) &&
                                                        (cVar3 = CItem::is_stackable(local_c4),
                                                        cVar3 != '\0')) &&
                                                       (iVar7 = CStackableItem::getStackableLimit
                                                                          ((CStackableItem *)
                                                                           local_c4),
                                                       iVar7 < local_bc)) {
                                                      local_bc = CStackableItem::getStackableLimit
                                                                           ((CStackableItem *)
                                                                            local_c4);
                                                    }
                                                    local_b8 = CUser::AddItem(param_1,local_c0,
                                                                              local_bc,6,&local_2e4,
                                                                              0);
                                                    if (local_b8 < 0) {
                                                      unaff_EBX = 0;
                                                      bVar2 = false;
                                                    }
                                                    else {
                                                      uVar10 = CUserCharacInfo::getCurCharacName
                                                                         ((CUserCharacInfo *)param_1
                                                                         );
                                                      uVar8 = CUser::get_acc_id(param_1);
                                                      uVar11 = NumberToString(uVar8,0);
                                                      cMyTrace::cMyTrace(local_248,
                                                                                                                                                  
                                                  "int Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, StrVector&)"
                                                  ,0xb916,0);
                                                  cMyTrace::operator()
                                                            (local_248,
                                                             "%s:\'%s\' GM Mode Add Item(%d).",
                                                             uVar11,uVar10,local_b8);
                                                  CUser::SendUpdateItemList
                                                            (param_1,1,local_2e4,local_b8);
                                                  bVar2 = true;
                                                  }
                                                  }
                    /* try { // try from 082107fd to 0821093e has its CatchHandler @ 08213447 */
                                                  std::string::~string(local_2e0);
                                                  bVar2 = !bVar2;
joined_r0x08211894:
                                                  if (bVar2) goto LAB_0821345f;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"itemskill");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_b0 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_ac = atoi(pcVar6);
                                                  this_01 = (CItemMakingSkill *)
                                                            CUser::GetCharacExpandData(param_1,10);
                                                  CItemMakingSkill::SetItemMakingSkillPoint
                                                            (this_01,local_b0,local_ac,param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"multimail");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"stack");
                                                  if (bVar2) {
                                                    local_a8 = "multimail test";
                                                    local_a4 = "stackable item test";
                                                    std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::vector(local_308);
                    /* try { // try from 08210948 to 08210b95 has its CatchHandler @ 08210b98 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::clear(local_308);
                                                  local_230 = 5;
                                                  local_22c = 0xbdd;
                                                  std::make_pair<int,int>(local_238,&local_22c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_238);
                                                  local_220 = 4;
                                                  local_21c = 0xbda;
                                                  std::make_pair<int,int>(local_228,&local_21c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_228);
                                                  local_210 = 3;
                                                  local_20c = 0xbd9;
                                                  std::make_pair<int,int>(local_218,&local_20c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_218);
                                                  local_200 = 2;
                                                  local_1fc = 0xbdb;
                                                  std::make_pair<int,int>(local_208,&local_1fc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_208);
                                                  local_1f0 = 1;
                                                  local_1ec = 0xbdc;
                                                  std::make_pair<int,int>(local_1f8,&local_1ec);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_1f8);
                                                  pIVar27 = local_8ce;
                                                  for (iVar7 = 9; iVar7 != -1; iVar7 = iVar7 + -1) {
                                                    Inven_Item::Inven_Item(pIVar27);
                                                    pIVar27 = pIVar27 + 0x3d;
                                                  }
                                                  WongWork::CMailBoxHelper::
                                                  MakeSystemMultiMailPostal
                                                            ((vector *)local_308,local_8ce,10);
                                                  sVar13 = strlen(local_a4);
                                                  uVar10 = CUserCharacInfo::getCurCharacNo
                                                                     ((CUserCharacInfo *)param_1);
                                                  WongWork::CMailBoxHelper::
                                                  ReqDBSendNewSystemMultiMail
                                                            (local_a8,local_8ce,5,1000,uVar10,
                                                             local_a4,sVar13,0,99,0);
                    /* try { // try from 08210bbc to 08210c12 has its CatchHandler @ 08213447 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::~vector(local_308);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"equip");
                                                  if (bVar2) {
                                                    local_a0 = "multimail test";
                                                    local_9c = "equip item test";
                                                    std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::vector(local_314);
                    /* try { // try from 08210c1c to 08210ffe has its CatchHandler @ 08211001 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::clear(local_314);
                                                  local_1e0 = 5;
                                                  local_1dc = 10000;
                                                  std::make_pair<int,int>(local_1e8,&local_1dc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1e8);
                                                  local_1d0 = 5;
                                                  local_1cc = 0x2711;
                                                  std::make_pair<int,int>(local_1d8,&local_1cc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1d8);
                                                  local_1c0 = 5;
                                                  local_1bc = 0x2712;
                                                  std::make_pair<int,int>(local_1c8,&local_1bc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1c8);
                                                  local_1b0 = 5;
                                                  local_1ac = 0x2713;
                                                  std::make_pair<int,int>(local_1b8,&local_1ac);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1b8);
                                                  local_1a0 = 5;
                                                  local_19c = 0x2714;
                                                  std::make_pair<int,int>(local_1a8,&local_19c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1a8);
                                                  local_190 = 5;
                                                  local_18c = 0x2715;
                                                  std::make_pair<int,int>(local_198,&local_18c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_198);
                                                  local_180 = 5;
                                                  local_17c = 0x2716;
                                                  std::make_pair<int,int>(local_188,&local_17c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_188);
                                                  local_170 = 5;
                                                  local_16c = 0x2717;
                                                  std::make_pair<int,int>(local_178,&local_16c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_178);
                                                  local_160 = 5;
                                                  local_15c = 0x2718;
                                                  std::make_pair<int,int>(local_168,&local_15c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_168);
                                                  local_150 = 5;
                                                  local_14c = 0x2719;
                                                  std::make_pair<int,int>(local_158,&local_14c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_158);
                                                  pIVar27 = local_b30;
                                                  for (iVar7 = 9; iVar7 != -1; iVar7 = iVar7 + -1) {
                                                    Inven_Item::Inven_Item(pIVar27);
                                                    pIVar27 = pIVar27 + 0x3d;
                                                  }
                                                  WongWork::CMailBoxHelper::
                                                  MakeSystemMultiMailPostal
                                                            ((vector *)local_314,local_b30,10);
                                                  sVar13 = strlen(local_9c);
                                                  uVar10 = CUserCharacInfo::getCurCharacNo
                                                                     ((CUserCharacInfo *)param_1);
                                                  WongWork::CMailBoxHelper::
                                                  ReqDBSendNewSystemMultiMail
                                                            (local_a0,local_b30,10,9999,uVar10,
                                                             local_9c,sVar13,0,99,0);
                    /* try { // try from 08211025 to 0821138f has its CatchHandler @ 08213447 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::~vector(local_314);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"statistic");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"gold");
                                                  if (bVar2) {
                                                    GetInstanceCirculationStatistic();
                                                    CCirculationStatistic::
                                                    InsertCirculationStatistic();
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("ingameday",psVar4);
                                                  if (bVar2) {
LAB_082110e1:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("day",psVar4);
                                                  if (bVar2) goto LAB_082110e1;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x66,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"setinven");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_98 = atoi(pcVar6);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  iVar7 = CInventory::get_inventory_capacity(pCVar9)
                                                  ;
                                                  cUserHistoryLog::ExpandInventory
                                                            ((cUserHistoryLog *)(param_1 + 0x79700),
                                                             iVar7,local_98,2);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  CInventory::set_inventory_capacity
                                                            (pCVar9,local_98);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar10 = CInventory::get_inventory_capacity
                                                                     (pCVar9);
                                                  uVar11 = CUserCharacInfo::getCurCharacNo
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar14 = CUser::GetUID(param_1);
                                                  uVar22 = CUser::GetServerGroup(param_1);
                                                  DB_UpdateInventoryCapacity::makeRequest
                                                            (uVar22,uVar14,uVar11,uVar10);
                                                  InterfacePacketBuf::clear
                                                            ((InterfacePacketBuf *)local_260);
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_260,0,0x42)
                                                  ;
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_260,0xb);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  iVar7 = CInventory::get_inventory_capacity(pCVar9)
                                                  ;
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_260,iVar7);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_260,true);
                                                  CUser::Send(param_1,local_260);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"itemseed");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  pCVar15 = (CDataManager *)G_CDataManager();
                                                  local_94 = (CItem *)CDataManager::find_item
                                                                                (pCVar15,iVar7);
                                                  if (local_94 == (CItem *)0x0) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"cannot find item (%s) ",uVar10)
                                                  ;
                                                  PacketGuard::PacketGuard(local_324);
                    /* try { // try from 082113a9 to 08211464 has its CatchHandler @ 0821147d */
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_324,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_324,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_324,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_324,0);
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_324,sVar13)
                                                  ;
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_324,
                                                             local_66c,sVar13);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_324,true);
                                                  CUser::Send(param_1,local_324);
                                                  unaff_EBX = 0;
                    /* try { // try from 08211473 to 08211477 has its CatchHandler @ 08213447 */
                                                  PacketGuard::~PacketGuard(local_324);
                                                  goto LAB_0821345f;
                                                  }
                                                  local_90 = CItem::get_index(local_94);
                                                  local_8c = 100;
                                                  if (((local_94 != (CItem *)0x0) &&
                                                      (cVar3 = CItem::is_stackable(local_94),
                                                      cVar3 != '\0')) &&
                                                     (iVar7 = CStackableItem::getStackableLimit
                                                                        ((CStackableItem *)local_94)
                                                     , iVar7 < local_8c)) {
                                                    local_8c = CStackableItem::getStackableLimit
                                                                         ((CStackableItem *)local_94
                                                                         );
                                                  }
                    /* try { // try from 08211534 to 082116e8 has its CatchHandler @ 08213447 */
                                                  local_88 = CUser::AddItem(param_1,local_90,
                                                                            local_8c,6,&local_318,0)
                                                  ;
                                                  if (local_88 < 0) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenRefW
                                                                     ((CUserCharacInfo *)param_1);
                                                  local_84 = CInventory::GetInvenRef
                                                                       (pCVar9,1,local_88);
                                                  if (local_84 != 0) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(int *)(local_84 + 7) = iVar7;
                                                  }
                                                  uVar10 = CUserCharacInfo::getCurCharacName
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  uVar11 = NumberToString(uVar8,0);
                                                  cMyTrace::cMyTrace(local_148,
                                                                                                                                          
                                                  "int Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, StrVector&)"
                                                  ,0xb9fb,0);
                                                  cMyTrace::operator()
                                                            (local_148,
                                                             "%s:\'%s\' GM Mode Add Item(%d).",
                                                             uVar11,uVar10,local_88);
                                                  CUser::SendUpdateItemList
                                                            (param_1,1,local_318,local_88);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"moveavatar");
                                                  if (bVar2) {
LAB_0821169f:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"mva");
                                                  if (bVar2) goto LAB_0821169f;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    this_02 = (PacketDispatcher *)
                                                              G_PacketDispatcher();
                                                    local_80 = (undefined4 *)
                                                               PacketDispatcher::getDispatcher
                                                                         (this_02,0x13);
                                                    if (local_80 == (undefined4 *)0x0) {
                                                      unaff_EBX = 0;
                                                      goto LAB_0821345f;
                                                    }
                                                    PacketGuard::PacketGuard(local_330);
                    /* try { // try from 08211702 to 0821184c has its CatchHandler @ 08211869 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_330,1,
                                                               0x13);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,1);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,1);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,3);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_330,1);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,
                                                               0x9b07);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_330,false
                                                              );
                                                    InterfacePacketBuf::set_index
                                                              ((InterfacePacketBuf *)local_330,0xf);
                                                    pcVar1 = *(code **)*local_80;
                                                    uVar10 = InterfacePacketBuf::get
                                                                       ((InterfacePacketBuf *)
                                                                        local_330);
                                                    iVar7 = (*pcVar1)(local_80,param_1,uVar10);
                                                    bVar2 = iVar7 != 0;
                                                    if (bVar2) {
                                                      unaff_EBX = 0;
                                                    }
                    /* try { // try from 0821188d to 08211b64 has its CatchHandler @ 08213447 */
                                                    PacketGuard::~PacketGuard(local_330);
                                                    goto joined_r0x08211894;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"quickon");
                                                  if (bVar2) {
LAB_082118ed:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qon");
                                                  if (bVar2) goto LAB_082118ed;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    local_7c = (CParty *)CUser::GetParty(param_1);
                                                    if ((local_7c == (CParty *)0x0) ||
                                                       (iVar7 = CParty::get_member_count(local_7c),
                                                       iVar7 < 2)) {
                                                      bVar2 = false;
                                                    }
                                                    else {
                                                      bVar2 = true;
                                                    }
                                                    if (bVar2) {
                                                      CParty::send_quick_party_matching_result
                                                                (local_7c,true,(CUser *)0x0);
                                                      CParty::set_quick_party(local_7c,true);
                                                    }
                                                    goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"quickoff");
                                                  if (bVar2) {
LAB_082119b6:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qoff");
                                                  if (bVar2) goto LAB_082119b6;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    local_78 = (CParty *)CUser::GetParty(param_1);
                                                    if ((local_78 == (CParty *)0x0) ||
                                                       (iVar7 = CParty::get_member_count(local_78),
                                                       iVar7 < 2)) {
                                                      bVar2 = false;
                                                    }
                                                    else {
                                                      bVar2 = true;
                                                    }
                                                    if (bVar2) {
                                                      CParty::send_quick_party_matching_result
                                                                (local_78,false,(CUser *)0x0);
                                                      CParty::set_quick_party(local_78,false);
                                                    }
                                                    goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"quickreward");
                                                  if (bVar2) {
LAB_08211a7f:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qr");
                                                  if (bVar2) goto LAB_08211a7f;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_74 = atoi(pcVar6);
                                                  if ((local_74 < 0) || (10 < local_74)) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_70 = (CParty *)CUser::GetParty(param_1);
                                                  if ((local_70 == (CParty *)0x0) ||
                                                     (iVar7 = CParty::get_member_count(local_70),
                                                     iVar7 < 2)) {
                                                    bVar2 = false;
                                                  }
                                                  else {
                                                    bVar2 = true;
                                                  }
                                                  if (bVar2) {
                                                    CParty::set_gm_random_buff_type
                                                              (local_70,local_74);
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    sprintf(local_66c,
                                                            "GM QUICK PARTY RANDOM BUFF (%d) TYPE!!"
                                                            ,local_74);
                                                    PacketGuard::PacketGuard(local_33c);
                    /* try { // try from 08211b7e to 08211c39 has its CatchHandler @ 08211c3c */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_33c,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_33c,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_33c,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_33c,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_33c,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_33c,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_33c,true)
                                                    ;
                                                    CParty::send_to_party(local_70,local_33c);
                    /* try { // try from 08211c60 to 08211dbb has its CatchHandler @ 08213447 */
                                                    PacketGuard::~PacketGuard(local_33c);
                                                  }
                                                  goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"hellvalue");
                                                  if (bVar2) {
LAB_08211cb8:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"hv");
                                                  if (bVar2) goto LAB_08211cb8;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_6c = atoi(pcVar6);
                                                  if ((local_6c < 0) || (100 < local_6c)) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_68 = (CParty *)CUser::GetParty(param_1);
                                                  if ((local_68 == (CParty *)0x0) ||
                                                     (iVar7 = CParty::get_member_count(local_68),
                                                     iVar7 < 2)) {
                                                    bVar2 = false;
                                                  }
                                                  else {
                                                    bVar2 = true;
                                                  }
                                                  if (bVar2) {
                                                    BattleData::SetHellPartyValueTotal
                                                              ((BattleData *)(local_68 + 0x32c),
                                                               local_6c);
                                                    CParty::send_hellParty_value(local_68);
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    uVar10 = BattleData::GetHellPartyValueTotal
                                                                       ((BattleData *)
                                                                        (local_68 + 0x32c));
                                                    sprintf(local_66c,"HELL PARTY VALUE (%d)",uVar10
                                                           );
                                                    PacketGuard::PacketGuard(local_348);
                    /* try { // try from 08211dd5 to 08211e90 has its CatchHandler @ 08211e93 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_348,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_348,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_348,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_348,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_348,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_348,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_348,true)
                                                    ;
                                                    CParty::send_to_party(local_68,local_348);
                    /* try { // try from 08211eb7 to 082120cc has its CatchHandler @ 08213447 */
                                                    PacketGuard::~PacketGuard(local_348);
                                                  }
                                                  goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"statisticlog");
                                                  if (bVar2) {
LAB_08211f0f:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"sl");
                                                  if (bVar2) goto LAB_08211f0f;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    StatisticsGmCmdPacket::StatisticsGmCmdPacket
                                                              (local_356);
                                                    local_34c = CUserCharacInfo::getCurCharacNo
                                                                          ((CUserCharacInfo *)
                                                                           param_1);
                                                    uVar10 = CUser::GetServerGroup(param_1);
                                                    this_03 = (CStatisticServerProxy *)
                                                              CServerProxyMgr<CStatisticServerProxy>
                                                              ::GetServerProxy(GlobalData::
                                                                               s_statistic_proxy_mgr
                                                                               ,uVar10);
                                                    CStatisticServerProxy::SendPacket
                                                              (this_03,(char *)local_356,0xe);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"itemdrop");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x6f,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"upcard");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x70,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"inde");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"item");
                                                  if (!bVar2) goto LAB_082120b2;
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"drop");
                                                  if (!bVar2) goto LAB_082120b2;
                                                  bVar2 = true;
                                                  }
                                                  else {
LAB_082120b2:
                                                    bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    std::string::string(local_35c);
                    /* try { // try from 082120d3 to 08212131 has its CatchHandler @ 08212134 */
                                                    cVar3 = CUser::getForceDropFlag(param_1);
                                                    if (cVar3 == '\x01') {
                                                      std::string::operator=(local_35c,"off");
                                                    }
                                                    else {
                                                      std::string::operator=(local_35c,"on");
                                                    }
                                                    pcVar6 = (char *)std::string::c_str(local_35c);
                                                    DoUserDefineCommand(param_1,0x77,pcVar6);
                    /* try { // try from 08212158 to 08212913 has its CatchHandler @ 08213447 */
                                                    std::string::~string(local_35c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"timegate");
                                                  if (bVar2) {
LAB_082121b0:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"tg");
                                                  if (bVar2) goto LAB_082121b0;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    Packet_CollectItemsGm::Packet_CollectItemsGm
                                                              (local_373);
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_368 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_364 = atoi(pcVar6);
                                                  uVar10 = CUser::GetServerGroup(param_1);
                                                  pCVar23 = (CMonitorServerProxy *)
                                                            CServerProxyMgr<CMonitorServerProxy>::
                                                            GetServerProxy(GlobalData::
                                                                           s_monitor_proxy_mgr,
                                                                           uVar10);
                                                  CMonitorServerProxy::SendTcpPacket
                                                            (pCVar23,(char *)local_373,0x17);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"bossdifficult");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_61 = (CUser)StringToNumber(pcVar6);
                                                  if (('\0' < (char)local_61) &&
                                                     ((char)local_61 < '\x05')) {
                                                    param_1[0x796cc] = local_61;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"bossmap");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_60 = StringToNumber(pcVar6);
                                                  *(undefined4 *)(param_1 + 0x796d0) = local_60;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"fatigue");
                                                  if (bVar2) {
                                                    pTVar24 = (TimerQueue *)G_TimerQueue();
                                                    TimerQueue::InsertTimer(pTVar24,2,0,0x50,3,0,0);
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"apply_effect");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_5c = StringToNumber(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_58 = StringToNumber(pcVar6);
                                                  if (local_5c < 0) {
                                                    unaff_EBX = 0;
                                                  }
                                                  else {
                                                    AradServerStateMessage::AradServerStateMessage
                                                              ((AradServerStateMessage *)&local_37f)
                                                    ;
                                                    local_37f = (ushort)(local_58 != 0);
                                                    local_37d = local_58;
                                                    ARAD::Arad_ServerStateManager::deleteState
                                                              (GlobalData::s_serverStateManager_,
                                                               local_5c);
                                                    ARAD::Arad_ServerStateManager::insertState
                                                              (GlobalData::s_serverStateManager_,
                                                               local_5c,&local_37f);
                                                    unaff_EBX = 0;
                                                  }
                                                  goto LAB_0821345f;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"open");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"sd");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_OpenSouthernDale
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"boss");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_OpenBossTower
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"aa");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_OpenAdvanceAltar
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"close");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"sd");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_CloseSouthernDale
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"boss");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_CloseBossTower
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"aa");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_CloseAdvanceAltar
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ap");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"set");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_54 = atoi(pcVar6);
                                                  APSystem::CUserProc::GM_Set(param_1,local_54);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    APSystem::CUserProc::GM_Reset(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"gmmode");
                                                  if (bVar2) {
                                                    APSystem::CActionPointManager::_IsGMOn = 1;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"realmode");
                                                  if (bVar2) {
                                                    APSystem::CActionPointManager::_IsGMOn = 0;
                                                    APSystem::CActionPointManager::_gmWeekday = 0;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"week");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_50 = atoi(pcVar6);
                                                  local_4c = 7;
                                                  switch(local_50) {
                                                  default:
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  case 1:
                                                    local_4c = 1;
                                                    break;
                                                  case 2:
                                                    local_4c = 2;
                                                    break;
                                                  case 3:
                                                    local_4c = 3;
                                                    break;
                                                  case 4:
                                                    local_4c = 4;
                                                    break;
                                                  case 5:
                                                    local_4c = 5;
                                                    break;
                                                  case 6:
                                                    local_4c = 6;
                                                    break;
                                                  case 7:
                                                    local_4c = 0;
                                                  }
                                                  APSystem::CActionPointManager::_gmWeekday = 1;
                                                  DAT_09370090 = local_4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pcroom");
                                                  if (bVar2) {
                                                    Packet_Pcroom_Response::Packet_Pcroom_Response
                                                              (local_39e);
                                                    local_38c = 1;
                                                    local_384 = 1;
                                                    local_383 = 0xb;
                                                    tVar25 = time((time_t *)0x0);
                                                    local_388 = tVar25 + 0x93a80;
                                                    local_394 = CUser::GetUID(param_1);
                                                    local_390 = CUser::get_acc_id(param_1);
                                                    pSVar18 = (Stream *)
                                                              StreamPool::Acquire(GlobalData::
                                                                                  s_stream_pool,
                                                                                                                                                                    
                                                  "PacketDispatcher_Impl_1.cpp",0xbc0a);
                                                  CStreamGuard::CStreamGuard(local_3a8,pSVar18,true)
                                                  ;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_3a8);
                    /* try { // try from 08212947 to 082129b8 has its CatchHandler @ 082129bb */
                                                  CStreamGuard::operator<<(pCVar19,0x17e);
                                                  iVar7 = local_394;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_3a8);
                                                  CStreamGuard::operator<<(pCVar19,iVar7);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator->(local_3a8);
                                                  CStreamGuard::put_binary
                                                            (pCVar19,local_39e,(uint)local_39c);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,
                                                                   local_3a8);
                    /* try { // try from 082129df to 08212d74 has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_3a8);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"avatarcoin");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_48 = atoi(pcVar6);
                                                  iVar7 = CUserCharacInfo::getCurCharacInvenR
                                                                    ((CUserCharacInfo *)param_1);
                                                  iVar7 = AvatarCoin::Get((AvatarCoin *)
                                                                          (iVar7 + 0x658));
                                                  local_48 = local_48 + iVar7;
                                                  iVar7 = CUserCharacInfo::getCurCharacInvenW
                                                                    ((CUserCharacInfo *)param_1);
                                                  AvatarCoin::Set((AvatarCoin *)(iVar7 + 0x658),
                                                                  local_48);
                                                  AvatarCoin::SaveToDB(param_1);
                                                  AvatarCoin::SendSyncPacket(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"avr");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"sorneh");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_44 = (short)iVar7;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_42 = (short)iVar7;
                                                  AvatarRechargeServer::GmReduceEndurance
                                                            (param_1,local_44,local_42);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"ghkrfbf");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"on");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_40 = atoi(pcVar6);
                                                  AvatarRechargeServer::GmChangeEnduranceReduceRate
                                                            (param_1,true,local_40);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"off");
                                                  if (bVar2) {
                                                    AvatarRechargeServer::
                                                    GmChangeEnduranceReduceRate(param_1,false,0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"startva");
                                                  if (bVar2) {
                                                    if (param_1 != (CUser *)0x0) {
                                                      Packet_Game_Monitor_GM_Village_Attacked::
                                                      Packet_Game_Monitor_GM_Village_Attacked
                                                                (local_3bf);
                                                      local_3b5 = 1;
                                                      psVar5 = (string *)
                                                               std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_3b4 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_3b0 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_3ac = atoi(pcVar6);
                                                  uVar10 = CUser::GetServerGroup(param_1);
                                                  pCVar23 = (CMonitorServerProxy *)
                                                            CServerProxyMgr<CMonitorServerProxy>::
                                                            GetServerProxy(GlobalData::
                                                                           s_monitor_proxy_mgr,
                                                                           uVar10);
                                                  CMonitorServerProxy::SendTcpPacket
                                                            (pCVar23,(char *)local_3bf,0x17);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetAvengerReady");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  std::allocator<char>::allocator();
                    /* try { // try from 08212da8 to 08212dac has its CatchHandler @ 08212dfa */
                                                  std::string::string(local_138,
                                                                      "Arad_EventPeriodDataManager",
                                                                      (allocator *)&local_132);
                    /* try { // try from 08212dad to 08212dcf has its CatchHandler @ 08212dd2 */
                                                  this_04 = (Arad_DataManager *)
                                                            ARAD::Singleton<ARAD::Arad_DataManager>
                                                            ::Get();
                                                  this_05 = (Arad_EventPeriodDataManager *)
                                                            ARAD::Arad_DataManager::findGameScript
                                                                      (this_04,(string)local_138);
                                                  ARAD::Arad_EventPeriodDataManager::
                                                  setCreatePeriod_GM(this_05,iVar7);
                    /* try { // try from 08212df3 to 08212df7 has its CatchHandler @ 08212dfa */
                                                  std::string::~string(local_138);
                                                  std::allocator<char>::~allocator(&local_132);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                    /* try { // try from 08212e46 to 08212fe7 has its CatchHandler @ 08213447 */
                                                  bVar2 = std::operator==(psVar4,"SetCreateTime");
                                                  if (bVar2) {
                                                    uVar8 = std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  size((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3);
                                                  if (uVar8 < 5) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_3a = 0;
                                                  local_3c8 = 0;
                                                  local_3c4 = 0;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                    /* WARNING: Ignoring partial resolution of indirect */
                                                  local_3c8._0_2_ = (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  iVar20 = (int)local_3a;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,(int)local_3a + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(short *)((int)&local_3c8 + iVar20 * 2) =
                                                       (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  iVar20 = (int)local_3a;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,(int)local_3a + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(short *)((int)&local_3c8 + iVar20 * 2) =
                                                       (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  iVar20 = (int)local_3a;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,(int)local_3a + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(short *)((int)&local_3c8 + iVar20 * 2) =
                                                       (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  lVar26 = ARAD::uint32Time((short *)&local_3c8);
                                                  CUserCharacInfo::set_charac_createtime
                                                            ((CUserCharacInfo *)param_1,lVar26);
                                                  arad::SigSetCharacCreateTime::
                                                  SigSetCharacCreateTime(local_3d0);
                                                  uVar8 = CUserCharacInfo::getCurCharacCreateTime
                                                                    ((CUserCharacInfo *)param_1);
                                                  uVar12 = CUser::get_charac_no(param_1,-1);
                                                  arad::SigSetCharacCreateTime::set
                                                            (local_3d0,uVar12,uVar8);
                                                  pSVar18 = (Stream *)
                                                            StreamPool::Acquire(GlobalData::
                                                                                s_stream_pool,
                                                                                                                                                                
                                                  "PacketDispatcher_Impl_1.cpp",0xbc83);
                                                  CStreamGuard::CStreamGuard(local_3d8,pSVar18,true)
                                                  ;
                                                  uVar10 = CUser::GetUID(param_1);
                    /* try { // try from 08213022 to 0821306d has its CatchHandler @ 08213070 */
                                                  ARAD::DISPATCHER::make_internal_stream_jpn
                                                            (local_3d8,0x24,uVar10);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator->(local_3d8);
                                                  CStreamGuard::put_binary(pCVar19,local_3d0,8);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,
                                                                   local_3d8);
                    /* try { // try from 08213094 to 0821343f has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_3d8);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"aa");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"time");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_38 = atoi(pcVar6);
                                                  if ((0 < local_38) && (local_38 < 0x33)) {
                                                    advancealtar::Manager::gmTimeSpeed_ = local_38;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"star");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_34 = atoi(pcVar6);
                                                  if ((-1 < local_34) && (local_34 < 1000)) {
                                                    advancealtar::CharacAdvanceAltarManager::
                                                    gmSetStar((CharacAdvanceAltarManager *)
                                                              (param_1 + 0x8df60),local_34);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"ticket");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_30 = atoi(pcVar6);
                                                  if ((-1 < local_30) && (local_30 < 100)) {
                                                    advancealtar::CharacAdvanceAltarManager::
                                                    gmSetTicket((CharacAdvanceAltarManager *)
                                                                (param_1 + 0x8df60),local_30);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"star");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_2c = atoi(pcVar6);
                                                  if ((-1 < local_2c) && (local_2c < 2)) {
                                                    advancealtar::CharacAdvanceAltarManager::
                                                    resetStar((CharacAdvanceAltarManager *)
                                                              (param_1 + 0x8df60),param_1,local_2c);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetRewardLast");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = StringToNumber(pcVar6);
                                                  local_28 = iVar7;
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  CLocalChina_DB_LastDay_BreakAway::makeRequest
                                                            (uVar8,iVar7,1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetQuestLast");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = StringToNumber(pcVar6);
                                                  local_24 = iVar7;
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  CLocalChina_DB_LastDay_BreakAway::makeRequest
                                                            (uVar8,iVar7,0);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetBreak");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_20 = StringToNumber(pcVar6);
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  break_away_prevent::CBreakAwayPreventSystem::
                                                  GM_UpdateUvList(GlobalData::s_BreakAwaySys,uVar8,
                                                                  local_20);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_08213440:
  unaff_EBX = 0;
LAB_0821345f:
                    /* try { // try from 08213468 to 0821346c has its CatchHandler @ 0821346f */
  PacketGuard::~PacketGuard(local_260);
  DisPatcher_DebugCommand::~DisPatcher_DebugCommand(local_254);
  return unaff_EBX;
}
```
