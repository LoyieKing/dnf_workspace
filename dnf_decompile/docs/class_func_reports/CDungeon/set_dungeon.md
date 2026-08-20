# set_dungeon

`_ZN8CDungeon11set_dungeonER15STDungeonScript`

`CDungeon::set_dungeon(STDungeonScript&)`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834acc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834acc4  _ZN8CDungeon11set_dungeonER15STDungeonScript
#           CDungeon::set_dungeon(STDungeonScript&)
# range [0x0834acc4, 0x0834b987]
0834acc4 +0x000:  push   %ebp
0834acc5 +0x001:  mov    %esp,%ebp
0834acc7 +0x003:  push   %edi
0834acc8 +0x004:  push   %esi
0834acc9 +0x005:  push   %ebx
0834acca +0x006:  sub    $0x2bc,%esp
0834acd0 +0x00c:  mov    0xc(%ebp),%eax
0834acd3 +0x00f:  mov    0x18(%eax),%edx
0834acd6 +0x012:  mov    0x8(%ebp),%eax
0834acd9 +0x015:  mov    %edx,0x8(%eax)
0834acdc +0x018:  mov    0xc(%ebp),%eax
0834acdf +0x01b:  mov    0xac(%eax),%edx
0834ace5 +0x021:  mov    0x8(%ebp),%eax
0834ace8 +0x024:  mov    %edx,0x10(%eax)
0834aceb +0x027:  mov    0xc(%ebp),%eax
0834acee +0x02a:  mov    0x78(%eax),%edx
0834acf1 +0x02d:  mov    0x8(%ebp),%eax
0834acf4 +0x030:  mov    %edx,0xc(%eax)
0834acf7 +0x033:  mov    0xc(%ebp),%eax
0834acfa +0x036:  mov    0xb0(%eax),%edx
0834ad00 +0x03c:  mov    0x8(%ebp),%eax
0834ad03 +0x03f:  mov    %edx,0x14(%eax)
0834ad06 +0x042:  lea    -0x29c(%ebp),%ebx
0834ad0c +0x048:  mov    $0x0,%eax
0834ad11 +0x04d:  mov    $0x7d,%edx
0834ad16 +0x052:  mov    %ebx,%edi
0834ad18 +0x054:  mov    %edx,%ecx
0834ad1a +0x056:  rep stos %eax,%es:(%edi)
0834ad1c +0x058:  mov    0xc(%ebp),%eax
0834ad1f +0x05b:  add    $0x1c,%eax
0834ad22 +0x05e:  mov    %eax,(%esp)
0834ad25 +0x061:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834ad2a +0x066:  mov    %eax,0x4(%esp)
0834ad2e +0x06a:  lea    -0x29c(%ebp),%eax
0834ad34 +0x070:  mov    %eax,(%esp)
0834ad37 +0x073:  call   0807def0 <_init+0x7e8>
0834ad3c +0x078:  mov    0xc(%ebp),%eax
0834ad3f +0x07b:  add    $0x1c,%eax
0834ad42 +0x07e:  mov    %eax,(%esp)
0834ad45 +0x081:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834ad4a +0x086:  lea    -0x29c(%ebp),%edx
0834ad50 +0x08c:  mov    %edx,0x4(%esp)
0834ad54 +0x090:  mov    %eax,(%esp)
0834ad57 +0x093:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
0834ad5c +0x098:  xor    $0x1,%eax
0834ad5f +0x09b:  test   %al,%al
0834ad61 +0x09d:  je     0834add9 <+0x115>
0834ad63 +0x09f:  mov    0xc(%ebp),%eax
0834ad66 +0x0a2:  add    $0x1c,%eax
0834ad69 +0x0a5:  mov    %eax,(%esp)
0834ad6c +0x0a8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834ad71 +0x0ad:  mov    %eax,%edi
0834ad73 +0x0af:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0834ad78 +0x0b4:  mov    %eax,%esi
0834ad7a +0x0b6:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
0834ad7f +0x0bb:  mov    %eax,%ebx
0834ad81 +0x0bd:  movl   $0x5,0xc(%esp)
0834ad89 +0x0c5:  movl   $0x58a,0x8(%esp)
0834ad91 +0x0cd:  movl   $&_ZZN8CDungeon11set_dungeonER15STDungeonScriptE19__PRETTY_FUNCTION__,0x4(%esp)
0834ad99 +0x0d5:  lea    -0x88(%ebp),%eax
0834ad9f +0x0db:  mov    %eax,(%esp)
0834ada2 +0x0de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0834ada7 +0x0e3:  movl   $0x58a,0x18(%esp)
0834adaf +0x0eb:  movl   $&_ZZN8CDungeon11set_dungeonER15STDungeonScriptE19__PRETTY_FUNCTION__,0x14(%esp)
0834adb7 +0x0f3:  mov    %edi,0x10(%esp)
0834adbb +0x0f7:  mov    %esi,0xc(%esp)
0834adbf +0x0fb:  mov    %ebx,0x8(%esp)
0834adc3 +0x0ff:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0834adcb +0x107:  lea    -0x88(%ebp),%eax
0834add1 +0x10d:  mov    %eax,(%esp)
0834add4 +0x110:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0834add9 +0x115:  mov    0x8(%ebp),%eax
0834addc +0x118:  lea    0x18(%eax),%edx
0834addf +0x11b:  lea    -0x29c(%ebp),%eax
0834ade5 +0x121:  mov    %eax,0x4(%esp)
0834ade9 +0x125:  mov    %edx,(%esp)
0834adec +0x128:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0834adf1 +0x12d:  movl   $0x0,-0x24(%ebp)
0834adf8 +0x134:  jmp    0834ae1a <+0x156>
0834adfa +0x136:  mov    -0x24(%ebp),%ecx
0834adfd +0x139:  mov    -0x24(%ebp),%edx
0834ae00 +0x13c:  mov    0xc(%ebp),%eax
0834ae03 +0x13f:  add    $0x2c,%edx
0834ae06 +0x142:  mov    0x4(%eax,%edx,4),%edx
0834ae0a +0x146:  mov    0x8(%ebp),%eax
0834ae0d +0x149:  add    $0x1b8,%ecx
0834ae13 +0x14f:  mov    %edx,(%eax,%ecx,4)
0834ae16 +0x152:  addl   $0x1,-0x24(%ebp)
0834ae1a +0x156:  cmpl   $0x4,-0x24(%ebp)
0834ae1e +0x15a:  setle  %al
0834ae21 +0x15d:  test   %al,%al
0834ae23 +0x15f:  jne    0834adfa <+0x136>
0834ae25 +0x161:  mov    0xc(%ebp),%eax
0834ae28 +0x164:  mov    0x14(%eax),%edx
0834ae2b +0x167:  mov    0x8(%ebp),%eax
0834ae2e +0x16a:  mov    %edx,0x34(%eax)
0834ae31 +0x16d:  mov    0xc(%ebp),%eax
0834ae34 +0x170:  movzbl 0x304(%eax),%edx
0834ae3b +0x177:  mov    0x8(%ebp),%eax
0834ae3e +0x17a:  mov    %dl,0x38(%eax)
0834ae41 +0x17d:  mov    0xc(%ebp),%eax
0834ae44 +0x180:  movzbl 0x305(%eax),%edx
0834ae4b +0x187:  mov    0x8(%ebp),%eax
0834ae4e +0x18a:  mov    %dl,0x39(%eax)
0834ae51 +0x18d:  mov    0xc(%ebp),%eax
0834ae54 +0x190:  movzbl 0x306(%eax),%edx
0834ae5b +0x197:  mov    0x8(%ebp),%eax
0834ae5e +0x19a:  mov    %dl,0x3a(%eax)
0834ae61 +0x19d:  mov    0x8(%ebp),%eax
0834ae64 +0x1a0:  movzbl 0x38(%eax),%eax
0834ae68 +0x1a4:  test   %al,%al
0834ae6a +0x1a6:  je     0834aec4 <+0x200>
0834ae6c +0x1a8:  mov    0x8(%ebp),%eax
0834ae6f +0x1ab:  movzbl 0x39(%eax),%eax
0834ae73 +0x1af:  movsbl %al,%ebx
0834ae76 +0x1b2:  mov    0x8(%ebp),%eax
0834ae79 +0x1b5:  movzbl 0x38(%eax),%eax
0834ae7d +0x1b9:  movsbl %al,%eax
0834ae80 +0x1bc:  lea    -0x1(%eax),%esi
0834ae83 +0x1bf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834ae88 +0x1c4:  mov    %ebx,0x8(%esp)
0834ae8c +0x1c8:  mov    %esi,0x4(%esp)
0834ae90 +0x1cc:  mov    %eax,(%esp)
0834ae93 +0x1cf:  call   080eed82 <_GLOBAL__I__ZN25CDimensionActivationEventC2Ev+0x1d>  ; global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()+0x1d
0834ae98 +0x1d4:  mov    0x8(%ebp),%eax
0834ae9b +0x1d7:  movzbl 0x39(%eax),%eax
0834ae9f +0x1db:  movsbl %al,%ebx
0834aea2 +0x1de:  mov    0x8(%ebp),%eax
0834aea5 +0x1e1:  movzbl 0x38(%eax),%eax
0834aea9 +0x1e5:  movsbl %al,%eax
0834aeac +0x1e8:  lea    -0x1(%eax),%esi
0834aeaf +0x1eb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834aeb4 +0x1f0:  mov    %ebx,0x8(%esp)
0834aeb8 +0x1f4:  mov    %esi,0x4(%esp)
0834aebc +0x1f8:  mov    %eax,(%esp)
0834aebf +0x1fb:  call   08365e78 <_ZN12CDataManager27set_original_dimensionInoutEic>  ; CDataManager::set_original_dimensionInout(int, char)
0834aec4 +0x200:  mov    0xc(%ebp),%eax
0834aec7 +0x203:  movzbl 0x324(%eax),%edx
0834aece +0x20a:  mov    0x8(%ebp),%eax
0834aed1 +0x20d:  mov    %dl,0x3b(%eax)
0834aed4 +0x210:  mov    0xc(%ebp),%eax
0834aed7 +0x213:  movzbl 0x325(%eax),%edx
0834aede +0x21a:  mov    0x8(%ebp),%eax
0834aee1 +0x21d:  mov    %dl,0x3c(%eax)
0834aee4 +0x220:  mov    0x8(%ebp),%eax
0834aee7 +0x223:  mov    0x8(%eax),%eax
0834aeea +0x226:  cmp    $0x2aff,%eax
0834aeef +0x22b:  jne    0834af14 <+0x250>
0834aef1 +0x22d:  mov    0x8(%ebp),%eax
0834aef4 +0x230:  movzbl 0x3c(%eax),%eax
0834aef8 +0x234:  movsbl %al,%ebx
0834aefb +0x237:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834af00 +0x23c:  movl   $0x2,0x8(%esp)
0834af08 +0x244:  mov    %ebx,0x4(%esp)
0834af0c +0x248:  mov    %eax,(%esp)
0834af0f +0x24b:  call   08374c82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec4e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec4e
0834af14 +0x250:  mov    0x8(%ebp),%eax
0834af17 +0x253:  mov    0x8(%eax),%eax
0834af1a +0x256:  cmp    $0x2afe,%eax
0834af1f +0x25b:  jne    0834af44 <+0x280>
0834af21 +0x25d:  mov    0x8(%ebp),%eax
0834af24 +0x260:  movzbl 0x3c(%eax),%eax
0834af28 +0x264:  movsbl %al,%ebx
0834af2b +0x267:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834af30 +0x26c:  movl   $0x1,0x8(%esp)
0834af38 +0x274:  mov    %ebx,0x4(%esp)
0834af3c +0x278:  mov    %eax,(%esp)
0834af3f +0x27b:  call   08374c82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec4e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec4e
0834af44 +0x280:  mov    0xc(%ebp),%eax
0834af47 +0x283:  lea    0x170(%eax),%edx
0834af4d +0x289:  lea    -0x8c(%ebp),%eax
0834af53 +0x28f:  mov    %edx,0x4(%esp)
0834af57 +0x293:  mov    %eax,(%esp)
0834af5a +0x296:  call   0830f982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1567
0834af5f +0x29b:  sub    $0x4,%esp
0834af62 +0x29e:  mov    0xc(%ebp),%eax
0834af65 +0x2a1:  lea    0x170(%eax),%edx
0834af6b +0x2a7:  lea    -0x90(%ebp),%eax
0834af71 +0x2ad:  mov    %edx,0x4(%esp)
0834af75 +0x2b1:  mov    %eax,(%esp)
0834af78 +0x2b4:  call   0830f9a6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x158b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x158b
0834af7d +0x2b9:  sub    $0x4,%esp
0834af80 +0x2bc:  jmp    0834b001 <+0x33d>
0834af82 +0x2be:  lea    -0x8c(%ebp),%eax
0834af88 +0x2c4:  mov    %eax,(%esp)
0834af8b +0x2c7:  call   0830fa0e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15f3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15f3
0834af90 +0x2cc:  mov    %eax,-0x20(%ebp)
0834af93 +0x2cf:  mov    -0x20(%ebp),%eax
0834af96 +0x2d2:  mov    0x4c(%eax),%eax
0834af99 +0x2d5:  test   %eax,%eax
0834af9b +0x2d7:  je     0834afc1 <+0x2fd>
0834af9d +0x2d9:  cmp    $0x1,%eax
0834afa0 +0x2dc:  je     0834afdb <+0x317>
0834afa2 +0x2de:  cmp    $0xffffffff,%eax
0834afa5 +0x2e1:  jne    0834aff3 <+0x32f>
0834afa7 +0x2e3:  mov    0x8(%ebp),%eax
0834afaa +0x2e6:  lea    0x62c(%eax),%edx
0834afb0 +0x2ec:  mov    -0x20(%ebp),%eax
0834afb3 +0x2ef:  mov    %eax,0x4(%esp)
0834afb7 +0x2f3:  mov    %edx,(%esp)
0834afba +0x2f6:  call   08388d28 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x187c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x187c8
0834afbf +0x2fb:  jmp    0834aff3 <+0x32f>
0834afc1 +0x2fd:  mov    0x8(%ebp),%eax
0834afc4 +0x300:  lea    0x638(%eax),%edx
0834afca +0x306:  mov    -0x20(%ebp),%eax
0834afcd +0x309:  mov    %eax,0x4(%esp)
0834afd1 +0x30d:  mov    %edx,(%esp)
0834afd4 +0x310:  call   08388d28 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x187c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x187c8
0834afd9 +0x315:  jmp    0834aff3 <+0x32f>
0834afdb +0x317:  mov    0x8(%ebp),%eax
0834afde +0x31a:  lea    0x644(%eax),%edx
0834afe4 +0x320:  mov    -0x20(%ebp),%eax
0834afe7 +0x323:  mov    %eax,0x4(%esp)
0834afeb +0x327:  mov    %edx,(%esp)
0834afee +0x32a:  call   08388d28 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x187c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x187c8
0834aff3 +0x32f:  lea    -0x8c(%ebp),%eax
0834aff9 +0x335:  mov    %eax,(%esp)
0834affc +0x338:  call   0830f9f8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15dd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15dd
0834b001 +0x33d:  lea    -0x90(%ebp),%eax
0834b007 +0x343:  mov    %eax,0x4(%esp)
0834b00b +0x347:  lea    -0x8c(%ebp),%eax
0834b011 +0x34d:  mov    %eax,(%esp)
0834b014 +0x350:  call   0830f9cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15b1
0834b019 +0x355:  test   %al,%al
0834b01b +0x357:  jne    0834af82 <+0x2be>
0834b021 +0x35d:  movl   $0x0,-0x94(%ebp)
0834b02b +0x367:  mov    0x8(%ebp),%eax
0834b02e +0x36a:  add    $0x1c,%eax
0834b031 +0x36d:  mov    %eax,(%esp)
0834b034 +0x370:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0834b039 +0x375:  mov    0xc(%ebp),%eax
0834b03c +0x378:  lea    0xc8(%eax),%edx
0834b042 +0x37e:  lea    -0x98(%ebp),%eax
0834b048 +0x384:  mov    %edx,0x4(%esp)
0834b04c +0x388:  mov    %eax,(%esp)
0834b04f +0x38b:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0834b054 +0x390:  sub    $0x4,%esp
0834b057 +0x393:  lea    -0xa0(%ebp),%eax
0834b05d +0x399:  mov    %eax,(%esp)
0834b060 +0x39c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0834b065 +0x3a1:  jmp    0834b15f <+0x49b>
0834b06a +0x3a6:  lea    -0x98(%ebp),%eax
0834b070 +0x3ac:  mov    %eax,(%esp)
0834b073 +0x3af:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0834b078 +0x3b4:  mov    0x4(%eax),%edx
0834b07b +0x3b7:  mov    (%eax),%eax
0834b07d +0x3b9:  mov    %eax,-0x74(%ebp)
0834b080 +0x3bc:  mov    %edx,-0x70(%ebp)
0834b083 +0x3bf:  lea    -0x74(%ebp),%eax
0834b086 +0x3c2:  mov    %eax,0x4(%esp)
0834b08a +0x3c6:  lea    -0xa0(%ebp),%eax
0834b090 +0x3cc:  mov    %eax,(%esp)
0834b093 +0x3cf:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
0834b098 +0x3d4:  mov    -0xa0(%ebp),%eax
0834b09e +0x3da:  test   %eax,%eax
0834b0a0 +0x3dc:  je     0834b15e <+0x49a>
0834b0a6 +0x3e2:  mov    -0x9c(%ebp),%edx
0834b0ac +0x3e8:  mov    -0x94(%ebp),%eax
0834b0b2 +0x3ee:  lea    (%edx,%eax,1),%eax
0834b0b5 +0x3f1:  mov    %eax,-0x94(%ebp)
0834b0bb +0x3f7:  lea    -0xa0(%ebp),%eax
0834b0c1 +0x3fd:  mov    %eax,0x8(%esp)
0834b0c5 +0x401:  lea    -0x94(%ebp),%eax
0834b0cb +0x407:  mov    %eax,0x4(%esp)
0834b0cf +0x40b:  lea    -0x60(%ebp),%eax
0834b0d2 +0x40e:  mov    %eax,(%esp)
0834b0d5 +0x411:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
0834b0da +0x416:  mov    0x8(%ebp),%eax
0834b0dd +0x419:  lea    0x1c(%eax),%ecx
0834b0e0 +0x41c:  lea    -0x68(%ebp),%eax
0834b0e3 +0x41f:  lea    -0x60(%ebp),%edx
0834b0e6 +0x422:  mov    %edx,0x8(%esp)
0834b0ea +0x426:  mov    %ecx,0x4(%esp)
0834b0ee +0x42a:  mov    %eax,(%esp)
0834b0f1 +0x42d:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0834b0f6 +0x432:  sub    $0x4,%esp
0834b0f9 +0x435:  mov    -0x94(%ebp),%eax
0834b0ff +0x43b:  cmp    $0x64,%eax
0834b102 +0x43e:  jle    0834b13c <+0x478>
0834b104 +0x440:  mov    -0x94(%ebp),%eax
0834b10a +0x446:  mov    %eax,0x14(%esp)
0834b10e +0x44a:  movl   $"total_rate(%d) > 100",0x10(%esp)
0834b116 +0x452:  movl   $0x5e1,0xc(%esp)
0834b11e +0x45a:  movl   $&_ZZN8CDungeon11set_dungeonER15STDungeonScriptE19__PRETTY_FUNCTION__,0x8(%esp)
0834b126 +0x462:  movl   $"data_manager.cpp",0x4(%esp)
0834b12e +0x46a:  movl   $0x1,(%esp)
0834b135 +0x471:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834b13a +0x476:  jmp    0834b197 <+0x4d3>
0834b13c +0x478:  lea    -0x58(%ebp),%eax
0834b13f +0x47b:  movl   $0x0,0x8(%esp)
0834b147 +0x483:  lea    -0x98(%ebp),%edx
0834b14d +0x489:  mov    %edx,0x4(%esp)
0834b151 +0x48d:  mov    %eax,(%esp)
0834b154 +0x490:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0834b159 +0x495:  sub    $0x4,%esp
0834b15c +0x498:  jmp    0834b15f <+0x49b>
0834b15e +0x49a:  nop
0834b15f +0x49b:  mov    0xc(%ebp),%eax
0834b162 +0x49e:  lea    0xc8(%eax),%edx
0834b168 +0x4a4:  lea    -0x78(%ebp),%eax
0834b16b +0x4a7:  mov    %edx,0x4(%esp)
0834b16f +0x4ab:  mov    %eax,(%esp)
0834b172 +0x4ae:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0834b177 +0x4b3:  sub    $0x4,%esp
0834b17a +0x4b6:  lea    -0x78(%ebp),%eax
0834b17d +0x4b9:  mov    %eax,0x4(%esp)
0834b181 +0x4bd:  lea    -0x98(%ebp),%eax
0834b187 +0x4c3:  mov    %eax,(%esp)
0834b18a +0x4c6:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0834b18f +0x4cb:  test   %al,%al
0834b191 +0x4cd:  jne    0834b06a <+0x3a6>
0834b197 +0x4d3:  mov    0xc(%ebp),%eax
0834b19a +0x4d6:  lea    0xd4(%eax),%edx
0834b1a0 +0x4dc:  mov    0x8(%ebp),%eax
0834b1a3 +0x4df:  add    $0x40,%eax
0834b1a6 +0x4e2:  mov    %edx,0x4(%esp)
0834b1aa +0x4e6:  mov    %eax,(%esp)
0834b1ad +0x4e9:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834b1b2 +0x4ee:  mov    0xc(%ebp),%eax
0834b1b5 +0x4f1:  lea    0xe0(%eax),%edx
0834b1bb +0x4f7:  mov    0x8(%ebp),%eax
0834b1be +0x4fa:  add    $0x4c,%eax
0834b1c1 +0x4fd:  mov    %edx,0x4(%esp)
0834b1c5 +0x501:  mov    %eax,(%esp)
0834b1c8 +0x504:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834b1cd +0x509:  mov    0xc(%ebp),%eax
0834b1d0 +0x50c:  lea    0xec(%eax),%edx
0834b1d6 +0x512:  mov    0x8(%ebp),%eax
0834b1d9 +0x515:  add    $0x58,%eax
0834b1dc +0x518:  mov    %edx,0x4(%esp)
0834b1e0 +0x51c:  mov    %eax,(%esp)
0834b1e3 +0x51f:  call   08388dd0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18870>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18870
0834b1e8 +0x524:  mov    0x8(%ebp),%eax
0834b1eb +0x527:  lea    0x6f4(%eax),%edx
0834b1f1 +0x52d:  mov    0xc(%ebp),%eax
0834b1f4 +0x530:  add    $0x18c,%eax
0834b1f9 +0x535:  mov    %edx,0x4(%esp)
0834b1fd +0x539:  mov    %eax,(%esp)
0834b200 +0x53c:  call   0836a578 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4544>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4544
0834b205 +0x541:  mov    0x8(%ebp),%eax
0834b208 +0x544:  add    $0x7f4,%eax
0834b20d +0x549:  mov    0xc(%ebp),%edx
0834b210 +0x54c:  add    $0x7c,%edx
0834b213 +0x54f:  cmp    %edx,%eax
0834b215 +0x551:  je     0834b22b <+0x567>
0834b217 +0x553:  movl   $0x9,0x8(%esp)
0834b21f +0x55b:  mov    %edx,0x4(%esp)
0834b223 +0x55f:  mov    %eax,(%esp)
0834b226 +0x562:  call   0807d8a0 <_init+0x198>
0834b22b +0x567:  mov    0xc(%ebp),%eax
0834b22e +0x56a:  movzbl 0x88(%eax),%edx
0834b235 +0x571:  mov    0x8(%ebp),%eax
0834b238 +0x574:  mov    %dl,0x85c(%eax)
0834b23e +0x57a:  mov    0x8(%ebp),%eax
0834b241 +0x57d:  add    $0x860,%eax
0834b246 +0x582:  mov    0xc(%ebp),%edx
0834b249 +0x585:  add    $0x8c,%edx
0834b24f +0x58b:  cmp    %edx,%eax
0834b251 +0x58d:  je     0834b267 <+0x5a3>
0834b253 +0x58f:  movl   $0x9,0x8(%esp)
0834b25b +0x597:  mov    %edx,0x4(%esp)
0834b25f +0x59b:  mov    %eax,(%esp)
0834b262 +0x59e:  call   0807d8a0 <_init+0x198>
0834b267 +0x5a3:  mov    0xc(%ebp),%eax
0834b26a +0x5a6:  lea    0x98(%eax),%edx
0834b270 +0x5ac:  mov    0x8(%ebp),%eax
0834b273 +0x5af:  add    $0x86c,%eax
0834b278 +0x5b4:  mov    %edx,0x4(%esp)
0834b27c +0x5b8:  mov    %eax,(%esp)
0834b27f +0x5bb:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834b284 +0x5c0:  mov    0xc(%ebp),%eax
0834b287 +0x5c3:  movzbl 0x314(%eax),%edx
0834b28e +0x5ca:  mov    0x8(%ebp),%eax
0834b291 +0x5cd:  mov    %dl,0x878(%eax)
0834b297 +0x5d3:  mov    0xc(%ebp),%eax
0834b29a +0x5d6:  movzbl 0x315(%eax),%edx
0834b2a1 +0x5dd:  mov    0x8(%ebp),%eax
0834b2a4 +0x5e0:  mov    %dl,0x879(%eax)
0834b2aa +0x5e6:  mov    0xc(%ebp),%eax
0834b2ad +0x5e9:  movzbl 0x317(%eax),%edx
0834b2b4 +0x5f0:  mov    0x8(%ebp),%eax
0834b2b7 +0x5f3:  mov    %dl,0x87b(%eax)
0834b2bd +0x5f9:  mov    0xc(%ebp),%eax
0834b2c0 +0x5fc:  movzbl 0x316(%eax),%eax
0834b2c7 +0x603:  test   %al,%al
0834b2c9 +0x605:  je     0834b2d7 <+0x613>
0834b2cb +0x607:  mov    0x8(%ebp),%eax
0834b2ce +0x60a:  movb   $0x1,0x87a(%eax)
0834b2d5 +0x611:  jmp    0834b2e1 <+0x61d>
0834b2d7 +0x613:  mov    0x8(%ebp),%eax
0834b2da +0x616:  movb   $0x0,0x87a(%eax)
0834b2e1 +0x61d:  mov    0xc(%ebp),%eax
0834b2e4 +0x620:  mov    0xa4(%eax),%edx
0834b2ea +0x626:  mov    0x8(%ebp),%eax
0834b2ed +0x629:  mov    %edx,0x87c(%eax)
0834b2f3 +0x62f:  mov    0xc(%ebp),%eax
0834b2f6 +0x632:  mov    0x328(%eax),%edx
0834b2fc +0x638:  mov    0x8(%ebp),%eax
0834b2ff +0x63b:  mov    %edx,0x90c(%eax)
0834b305 +0x641:  mov    0xc(%ebp),%eax
0834b308 +0x644:  lea    0x32c(%eax),%edx
0834b30e +0x64a:  mov    0x8(%ebp),%eax
0834b311 +0x64d:  add    $0x910,%eax
0834b316 +0x652:  mov    %edx,0x4(%esp)
0834b31a +0x656:  mov    %eax,(%esp)
0834b31d +0x659:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0834b322 +0x65e:  mov    0x8(%ebp),%eax
0834b325 +0x661:  lea    0x880(%eax),%ecx
0834b32b +0x667:  mov    0xc(%ebp),%eax
0834b32e +0x66a:  add    $0x128,%eax
0834b333 +0x66f:  lea    0x14(%eax),%edx
0834b336 +0x672:  mov    0xc(%ebp),%eax
0834b339 +0x675:  add    $0x128,%eax
0834b33e +0x67a:  mov    %ecx,0x8(%esp)
0834b342 +0x67e:  mov    %edx,0x4(%esp)
0834b346 +0x682:  mov    %eax,(%esp)
0834b349 +0x685:  call   080cebf7 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3a44>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3a44
0834b34e +0x68a:  mov    0xc(%ebp),%eax
0834b351 +0x68d:  mov    0x13c(%eax),%edx
0834b357 +0x693:  mov    0x8(%ebp),%eax
0834b35a +0x696:  mov    %edx,0x894(%eax)
0834b360 +0x69c:  mov    0xc(%ebp),%eax
0834b363 +0x69f:  mov    0x168(%eax),%edx
0834b369 +0x6a5:  mov    0x8(%ebp),%eax
0834b36c +0x6a8:  mov    %edx,0x898(%eax)
0834b372 +0x6ae:  mov    0xc(%ebp),%eax
0834b375 +0x6b1:  movzbl 0x28c(%eax),%edx
0834b37c +0x6b8:  mov    0x8(%ebp),%eax
0834b37f +0x6bb:  mov    %dl,0x89c(%eax)
0834b385 +0x6c1:  mov    0xc(%ebp),%eax
0834b388 +0x6c4:  movzbl 0x140(%eax),%edx
0834b38f +0x6cb:  mov    0x8(%ebp),%eax
0834b392 +0x6ce:  mov    %dl,0x89d(%eax)
0834b398 +0x6d4:  mov    0xc(%ebp),%eax
0834b39b +0x6d7:  movzbl 0x28d(%eax),%edx
0834b3a2 +0x6de:  mov    0x8(%ebp),%eax
0834b3a5 +0x6e1:  mov    %dl,0x89e(%eax)
0834b3ab +0x6e7:  mov    0xc(%ebp),%eax
0834b3ae +0x6ea:  movzbl 0x28e(%eax),%edx
0834b3b5 +0x6f1:  mov    0x8(%ebp),%eax
0834b3b8 +0x6f4:  mov    %dl,0x89f(%eax)
0834b3be +0x6fa:  mov    0xc(%ebp),%eax
0834b3c1 +0x6fd:  movzbl 0x2ab(%eax),%edx
0834b3c8 +0x704:  mov    0x8(%ebp),%eax
0834b3cb +0x707:  mov    %dl,0x800(%eax)
0834b3d1 +0x70d:  mov    0xc(%ebp),%eax
0834b3d4 +0x710:  mov    0x2ac(%eax),%edx
0834b3da +0x716:  mov    0x8(%ebp),%eax
0834b3dd +0x719:  mov    %edx,0x804(%eax)
0834b3e3 +0x71f:  mov    0xc(%ebp),%eax
0834b3e6 +0x722:  lea    0x2b0(%eax),%edx
0834b3ec +0x728:  mov    0x8(%ebp),%eax
0834b3ef +0x72b:  add    $0x808,%eax
0834b3f4 +0x730:  movl   $0xc,0x8(%esp)
0834b3fc +0x738:  mov    %edx,0x4(%esp)
0834b400 +0x73c:  mov    %eax,(%esp)
0834b403 +0x73f:  call   0807d8a0 <_init+0x198>
0834b408 +0x744:  mov    0xc(%ebp),%eax
0834b40b +0x747:  lea    0x2bc(%eax),%edx
0834b411 +0x74d:  mov    0x8(%ebp),%eax
0834b414 +0x750:  add    $0x820,%eax
0834b419 +0x755:  movl   $0xc,0x8(%esp)
0834b421 +0x75d:  mov    %edx,0x4(%esp)
0834b425 +0x761:  mov    %eax,(%esp)
0834b428 +0x764:  call   0807d8a0 <_init+0x198>
0834b42d +0x769:  mov    0xc(%ebp),%eax
0834b430 +0x76c:  lea    0x2c8(%eax),%edx
0834b436 +0x772:  mov    0x8(%ebp),%eax
0834b439 +0x775:  add    $0x814,%eax
0834b43e +0x77a:  mov    %edx,0x4(%esp)
0834b442 +0x77e:  mov    %eax,(%esp)
0834b445 +0x781:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0834b44a +0x786:  mov    0xc(%ebp),%eax
0834b44d +0x789:  lea    0x2d4(%eax),%edx
0834b453 +0x78f:  mov    0x8(%ebp),%eax
0834b456 +0x792:  add    $0x82c,%eax
0834b45b +0x797:  mov    %edx,0x4(%esp)
0834b45f +0x79b:  mov    %eax,(%esp)
0834b462 +0x79e:  call   08376c9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x673c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x673c
0834b467 +0x7a3:  mov    0xc(%ebp),%eax
0834b46a +0x7a6:  lea    0x2f8(%eax),%edx
0834b470 +0x7ac:  mov    0x8(%ebp),%eax
0834b473 +0x7af:  add    $0x850,%eax
0834b478 +0x7b4:  mov    %edx,0x4(%esp)
0834b47c +0x7b8:  mov    %eax,(%esp)
0834b47f +0x7bb:  call   08376cde <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x677e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x677e
0834b484 +0x7c0:  mov    0x8(%ebp),%eax
0834b487 +0x7c3:  movb   $0x0,0x624(%eax)
0834b48e +0x7ca:  mov    0xc(%ebp),%eax
0834b491 +0x7cd:  mov    0x16c(%eax),%edx
0834b497 +0x7d3:  mov    0x8(%ebp),%eax
0834b49a +0x7d6:  mov    %edx,0x628(%eax)
0834b4a0 +0x7dc:  mov    0xc(%ebp),%eax
0834b4a3 +0x7df:  mov    0x338(%eax),%edx
0834b4a9 +0x7e5:  mov    0x8(%ebp),%eax
0834b4ac +0x7e8:  mov    %edx,0x650(%eax)
0834b4b2 +0x7ee:  mov    0xc(%ebp),%eax
0834b4b5 +0x7f1:  mov    0x358(%eax),%edx
0834b4bb +0x7f7:  mov    0x8(%ebp),%eax
0834b4be +0x7fa:  mov    %edx,0x670(%eax)
0834b4c4 +0x800:  mov    0xc(%ebp),%eax
0834b4c7 +0x803:  mov    0x368(%eax),%edx
0834b4cd +0x809:  mov    0x8(%ebp),%eax
0834b4d0 +0x80c:  mov    %edx,0x680(%eax)
0834b4d6 +0x812:  mov    0x8(%ebp),%eax
0834b4d9 +0x815:  mov    0x680(%eax),%eax
0834b4df +0x81b:  test   %eax,%eax
0834b4e1 +0x81d:  je     0834b57d <+0x8b9>
0834b4e7 +0x823:  mov    0x8(%ebp),%eax
0834b4ea +0x826:  mov    0x680(%eax),%eax
0834b4f0 +0x82c:  add    $0x1,%eax
0834b4f3 +0x82f:  mov    0x8(%ebp),%edx
0834b4f6 +0x832:  add    $0x674,%edx
0834b4fc +0x838:  mov    %eax,0x4(%esp)
0834b500 +0x83c:  mov    %edx,(%esp)
0834b503 +0x83f:  call   0817ee44 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x75>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x75
0834b508 +0x844:  movl   $0x0,-0x1c(%ebp)
0834b50f +0x84b:  jmp    0834b563 <+0x89f>
0834b511 +0x84d:  mov    0xc(%ebp),%eax
0834b514 +0x850:  lea    0x35c(%eax),%edx
0834b51a +0x856:  mov    -0x1c(%ebp),%eax
0834b51d +0x859:  mov    %eax,0x4(%esp)
0834b521 +0x85d:  mov    %edx,(%esp)
0834b524 +0x860:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
0834b529 +0x865:  mov    (%eax),%eax
0834b52b +0x867:  mov    0x8(%ebp),%edx
0834b52e +0x86a:  add    $0x674,%edx
0834b534 +0x870:  mov    %eax,0x4(%esp)
0834b538 +0x874:  mov    %edx,(%esp)
0834b53b +0x877:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0834b540 +0x87c:  mov    %eax,%ebx
0834b542 +0x87e:  mov    0xc(%ebp),%eax
0834b545 +0x881:  lea    0x35c(%eax),%edx
0834b54b +0x887:  mov    -0x1c(%ebp),%eax
0834b54e +0x88a:  mov    %eax,0x4(%esp)
0834b552 +0x88e:  mov    %edx,(%esp)
0834b555 +0x891:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
0834b55a +0x896:  mov    0x4(%eax),%eax
0834b55d +0x899:  mov    %eax,(%ebx)
0834b55f +0x89b:  addl   $0x1,-0x1c(%ebp)
0834b563 +0x89f:  mov    0xc(%ebp),%eax
0834b566 +0x8a2:  add    $0x35c,%eax
0834b56b +0x8a7:  mov    %eax,(%esp)
0834b56e +0x8aa:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834b573 +0x8af:  cmp    -0x1c(%ebp),%eax
0834b576 +0x8b2:  seta   %al
0834b579 +0x8b5:  test   %al,%al
0834b57b +0x8b7:  jne    0834b511 <+0x84d>
0834b57d +0x8b9:  mov    0xc(%ebp),%eax
0834b580 +0x8bc:  mov    0x33c(%eax),%edx
0834b586 +0x8c2:  mov    0x8(%ebp),%eax
0834b589 +0x8c5:  mov    %edx,0x654(%eax)
0834b58f +0x8cb:  mov    0x8(%ebp),%eax
0834b592 +0x8ce:  mov    0x654(%eax),%eax
0834b598 +0x8d4:  test   %eax,%eax
0834b59a +0x8d6:  je     0834b6f6 <+0xa32>
0834b5a0 +0x8dc:  mov    0x8(%ebp),%eax
0834b5a3 +0x8df:  add    $0x658,%eax
0834b5a8 +0x8e4:  mov    %eax,(%esp)
0834b5ab +0x8e7:  call   08382200 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11ca0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11ca0
0834b5b0 +0x8ec:  mov    0xc(%ebp),%eax
0834b5b3 +0x8ef:  lea    0x340(%eax),%edx
0834b5b9 +0x8f5:  lea    -0x54(%ebp),%eax
0834b5bc +0x8f8:  mov    %edx,0x4(%esp)
0834b5c0 +0x8fc:  mov    %eax,(%esp)
0834b5c3 +0x8ff:  call   0838952a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18fca>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18fca
0834b5c8 +0x904:  sub    $0x4,%esp
0834b5cb +0x907:  lea    -0x54(%ebp),%eax
0834b5ce +0x90a:  mov    %eax,0x4(%esp)
0834b5d2 +0x90e:  lea    -0xa4(%ebp),%eax
0834b5d8 +0x914:  mov    %eax,(%esp)
0834b5db +0x917:  call   08389550 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18ff0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18ff0
0834b5e0 +0x91c:  mov    0xc(%ebp),%eax
0834b5e3 +0x91f:  lea    0x340(%eax),%edx
0834b5e9 +0x925:  lea    -0x50(%ebp),%eax
0834b5ec +0x928:  mov    %edx,0x4(%esp)
0834b5f0 +0x92c:  mov    %eax,(%esp)
0834b5f3 +0x92f:  call   08389560 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19000>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19000
0834b5f8 +0x934:  sub    $0x4,%esp
0834b5fb +0x937:  lea    -0x50(%ebp),%eax
0834b5fe +0x93a:  mov    %eax,0x4(%esp)
0834b602 +0x93e:  lea    -0xa8(%ebp),%eax
0834b608 +0x944:  mov    %eax,(%esp)
0834b60b +0x947:  call   08389550 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18ff0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18ff0
0834b610 +0x94c:  jmp    0834b6d6 <+0xa12>
0834b615 +0x951:  lea    -0xa4(%ebp),%eax
0834b61b +0x957:  mov    %eax,(%esp)
0834b61e +0x95a:  call   08152d18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x264d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x264d
0834b623 +0x95f:  lea    0x4(%eax),%ebx
0834b626 +0x962:  lea    -0xa4(%ebp),%eax
0834b62c +0x968:  mov    %eax,(%esp)
0834b62f +0x96b:  call   08152d18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x264d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x264d
0834b634 +0x970:  mov    %eax,%edx
0834b636 +0x972:  lea    -0x34(%ebp),%eax
0834b639 +0x975:  mov    %ebx,0x8(%esp)
0834b63d +0x979:  mov    %edx,0x4(%esp)
0834b641 +0x97d:  mov    %eax,(%esp)
0834b644 +0x980:  call   083895b7 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19057>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19057
0834b649 +0x985:  sub    $0x4,%esp
0834b64c +0x988:  lea    -0x34(%ebp),%eax
0834b64f +0x98b:  mov    %eax,0x4(%esp)
0834b653 +0x98f:  lea    -0x44(%ebp),%eax
0834b656 +0x992:  mov    %eax,(%esp)
0834b659 +0x995:  call   083895fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1909c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1909c
0834b65e +0x99a:  mov    0x8(%ebp),%eax
0834b661 +0x99d:  lea    0x658(%eax),%ecx
0834b667 +0x9a3:  lea    -0x4c(%ebp),%eax
0834b66a +0x9a6:  lea    -0x44(%ebp),%edx
0834b66d +0x9a9:  mov    %edx,0x8(%esp)
0834b671 +0x9ad:  mov    %ecx,0x4(%esp)
0834b675 +0x9b1:  mov    %eax,(%esp)
0834b678 +0x9b4:  call   08389636 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x190d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x190d6
0834b67d +0x9b9:  sub    $0x4,%esp
0834b680 +0x9bc:  lea    -0x44(%ebp),%eax
0834b683 +0x9bf:  mov    %eax,(%esp)
0834b686 +0x9c2:  call   08376d12 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x67b2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x67b2
0834b68b +0x9c7:  jmp    0834b6bd <+0x9f9>
0834b68d +0x9c9:  mov    %edx,%ebx
0834b68f +0x9cb:  mov    %eax,%esi
0834b691 +0x9cd:  lea    -0x44(%ebp),%eax
0834b694 +0x9d0:  mov    %eax,(%esp)
0834b697 +0x9d3:  call   08376d12 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x67b2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x67b2
0834b69c +0x9d8:  mov    %esi,%eax
0834b69e +0x9da:  mov    %ebx,%edx
0834b6a0 +0x9dc:  jmp    0834b6a2 <+0x9de>
0834b6a2 +0x9de:  mov    %edx,%ebx
0834b6a4 +0x9e0:  mov    %eax,%esi
0834b6a6 +0x9e2:  lea    -0x34(%ebp),%eax
0834b6a9 +0x9e5:  mov    %eax,(%esp)
0834b6ac +0x9e8:  call   08376cfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x679c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x679c
0834b6b1 +0x9ed:  mov    %esi,%eax
0834b6b3 +0x9ef:  mov    %ebx,%edx
0834b6b5 +0x9f1:  mov    %eax,(%esp)
0834b6b8 +0x9f4:  call   08ae3750 <_Unwind_Resume>
0834b6bd +0x9f9:  lea    -0x34(%ebp),%eax
0834b6c0 +0x9fc:  mov    %eax,(%esp)
0834b6c3 +0x9ff:  call   08376cfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x679c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x679c
0834b6c8 +0xa04:  lea    -0xa4(%ebp),%eax
0834b6ce +0xa0a:  mov    %eax,(%esp)
0834b6d1 +0xa0d:  call   0838959a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1903a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1903a
0834b6d6 +0xa12:  lea    -0xa8(%ebp),%eax
0834b6dc +0xa18:  mov    %eax,0x4(%esp)
0834b6e0 +0xa1c:  lea    -0xa4(%ebp),%eax
0834b6e6 +0xa22:  mov    %eax,(%esp)
0834b6e9 +0xa25:  call   08389586 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19026>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19026
0834b6ee +0xa2a:  test   %al,%al
0834b6f0 +0xa2c:  jne    0834b615 <+0x951>
0834b6f6 +0xa32:  mov    0xc(%ebp),%eax
0834b6f9 +0xa35:  mov    0x3c4(%eax),%edx
0834b6ff +0xa3b:  mov    0x8(%ebp),%eax
0834b702 +0xa3e:  mov    %edx,0x8a0(%eax)
0834b708 +0xa44:  mov    0xc(%ebp),%eax
0834b70b +0xa47:  lea    0x3c8(%eax),%edx
0834b711 +0xa4d:  mov    0x8(%ebp),%eax
0834b714 +0xa50:  add    $0x8f0,%eax
0834b719 +0xa55:  mov    %edx,0x4(%esp)
0834b71d +0xa59:  mov    %eax,(%esp)
0834b720 +0xa5c:  call   08389662 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19102>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19102
0834b725 +0xa61:  mov    0xc(%ebp),%eax
0834b728 +0xa64:  mov    0x3d4(%eax),%edx
0834b72e +0xa6a:  mov    0x8(%ebp),%eax
0834b731 +0xa6d:  mov    %edx,0x684(%eax)
0834b737 +0xa73:  mov    0xc(%ebp),%eax
0834b73a +0xa76:  mov    0x3d8(%eax),%edx
0834b740 +0xa7c:  mov    0x8(%ebp),%eax
0834b743 +0xa7f:  mov    %edx,0x688(%eax)
0834b749 +0xa85:  mov    0xc(%ebp),%eax
0834b74c +0xa88:  mov    0x3dc(%eax),%edx
0834b752 +0xa8e:  mov    0x8(%ebp),%eax
0834b755 +0xa91:  mov    %edx,0x68c(%eax)
0834b75b +0xa97:  mov    0xc(%ebp),%eax
0834b75e +0xa9a:  lea    0x3e0(%eax),%edx
0834b764 +0xaa0:  mov    0x8(%ebp),%eax
0834b767 +0xaa3:  add    $0x690,%eax
0834b76c +0xaa8:  mov    %edx,0x4(%esp)
0834b770 +0xaac:  mov    %eax,(%esp)
0834b773 +0xaaf:  call   083898b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19350>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19350
0834b778 +0xab4:  mov    0xc(%ebp),%eax
0834b77b +0xab7:  mov    0x3ec(%eax),%edx
0834b781 +0xabd:  mov    0x8(%ebp),%eax
0834b784 +0xac0:  mov    %edx,0x69c(%eax)
0834b78a +0xac6:  mov    0xc(%ebp),%eax
0834b78d +0xac9:  mov    0x3f0(%eax),%edx
0834b793 +0xacf:  mov    0x8(%ebp),%eax
0834b796 +0xad2:  mov    %edx,0x6a0(%eax)
0834b79c +0xad8:  mov    0xc(%ebp),%eax
0834b79f +0xadb:  mov    0x3f4(%eax),%edx
0834b7a5 +0xae1:  mov    0x8(%ebp),%eax
0834b7a8 +0xae4:  mov    %edx,0x6a4(%eax)
0834b7ae +0xaea:  mov    0xc(%ebp),%eax
0834b7b1 +0xaed:  lea    0x3f8(%eax),%edx
0834b7b7 +0xaf3:  mov    0x8(%ebp),%eax
0834b7ba +0xaf6:  add    $0x6a8,%eax
0834b7bf +0xafb:  mov    %edx,0x4(%esp)
0834b7c3 +0xaff:  mov    %eax,(%esp)
0834b7c6 +0xb02:  call   08389b26 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x195c6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x195c6
0834b7cb +0xb07:  mov    0xc(%ebp),%eax
0834b7ce +0xb0a:  mov    0x380(%eax),%eax
0834b7d4 +0xb10:  cmp    $0x1,%eax
0834b7d7 +0xb13:  sete   %dl
0834b7da +0xb16:  mov    0x8(%ebp),%eax
0834b7dd +0xb19:  mov    %dl,0x6b4(%eax)
0834b7e3 +0xb1f:  mov    0xc(%ebp),%eax
0834b7e6 +0xb22:  mov    0x3b4(%eax),%eax
0834b7ec +0xb28:  cmp    $0x1,%eax
0834b7ef +0xb2b:  sete   %dl
0834b7f2 +0xb2e:  mov    0x8(%ebp),%eax
0834b7f5 +0xb31:  mov    %dl,0x6b5(%eax)
0834b7fb +0xb37:  mov    0xc(%ebp),%eax
0834b7fe +0xb3a:  mov    0x3b8(%eax),%eax
0834b804 +0xb40:  mov    %eax,%edx
0834b806 +0xb42:  mov    0x8(%ebp),%eax
0834b809 +0xb45:  mov    %edx,0x6b8(%eax)
0834b80f +0xb4b:  mov    0xc(%ebp),%eax
0834b812 +0xb4e:  lea    0x404(%eax),%edx
0834b818 +0xb54:  mov    0x8(%ebp),%eax
0834b81b +0xb57:  add    $0x900,%eax
0834b820 +0xb5c:  mov    %edx,0x4(%esp)
0834b824 +0xb60:  mov    %eax,(%esp)
0834b827 +0xb63:  call   0838034c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xfdec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xfdec
0834b82c +0xb68:  mov    0xc(%ebp),%eax
0834b82f +0xb6b:  movzbl 0x48c(%eax),%edx
0834b836 +0xb72:  mov    0x8(%ebp),%eax
0834b839 +0xb75:  mov    %dl,0x6c8(%eax)
0834b83f +0xb7b:  mov    0xc(%ebp),%eax
0834b842 +0xb7e:  movzbl 0x2a9(%eax),%eax
0834b849 +0xb85:  test   %al,%al
0834b84b +0xb87:  je     0834b857 <+0xb93>
0834b84d +0xb89:  mov    0x8(%ebp),%eax
0834b850 +0xb8c:  movl   $0x1,0x4(%eax)
0834b857 +0xb93:  mov    0xc(%ebp),%eax
0834b85a +0xb96:  movzbl 0x2aa(%eax),%edx
0834b861 +0xb9d:  mov    0x8(%ebp),%eax
0834b864 +0xba0:  mov    %dl,0x8fc(%eax)
0834b86a +0xba6:  mov    0xc(%ebp),%eax
0834b86d +0xba9:  movzbl 0x494(%eax),%edx
0834b874 +0xbb0:  mov    0x8(%ebp),%eax
0834b877 +0xbb3:  mov    %dl,0x8a8(%eax)
0834b87d +0xbb9:  mov    0xc(%ebp),%eax
0834b880 +0xbbc:  mov    0x498(%eax),%edx
0834b886 +0xbc2:  mov    0x8(%ebp),%eax
0834b889 +0xbc5:  mov    %edx,0x8a4(%eax)
0834b88f +0xbcb:  mov    0xc(%ebp),%eax
0834b892 +0xbce:  lea    0x4b4(%eax),%edx
0834b898 +0xbd4:  mov    0x8(%ebp),%eax
0834b89b +0xbd7:  add    $0x8c4,%eax
0834b8a0 +0xbdc:  mov    %edx,0x4(%esp)
0834b8a4 +0xbe0:  mov    %eax,(%esp)
0834b8a7 +0xbe3:  call   08376d28 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x67c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x67c8
0834b8ac +0xbe8:  mov    0xc(%ebp),%eax
0834b8af +0xbeb:  lea    0x49c(%eax),%edx
0834b8b5 +0xbf1:  mov    0x8(%ebp),%eax
0834b8b8 +0xbf4:  add    $0x8ac,%eax
0834b8bd +0xbf9:  mov    %edx,0x4(%esp)
0834b8c1 +0xbfd:  mov    %eax,(%esp)
0834b8c4 +0xc00:  call   0838a00e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19aae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19aae
0834b8c9 +0xc05:  mov    0xc(%ebp),%eax
0834b8cc +0xc08:  mov    0x4c4(%eax),%edx
0834b8d2 +0xc0e:  mov    0x8(%ebp),%eax
0834b8d5 +0xc11:  mov    %edx,0x8d4(%eax)
0834b8db +0xc17:  mov    0xc(%ebp),%eax
0834b8de +0xc1a:  lea    0x4c8(%eax),%edx
0834b8e4 +0xc20:  mov    0x8(%ebp),%eax
0834b8e7 +0xc23:  add    $0x8d8,%eax
0834b8ec +0xc28:  mov    %edx,0x4(%esp)
0834b8f0 +0xc2c:  mov    %eax,(%esp)
0834b8f3 +0xc2f:  call   0838a02c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19acc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19acc
0834b8f8 +0xc34:  mov    0xc(%ebp),%eax
0834b8fb +0xc37:  lea    0x4e4(%eax),%edx
0834b901 +0xc3d:  mov    0x8(%ebp),%eax
0834b904 +0xc40:  add    $0x91c,%eax
0834b909 +0xc45:  mov    %edx,0x4(%esp)
0834b90d +0xc49:  mov    %eax,(%esp)
0834b910 +0xc4c:  call   0838a04a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19aea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19aea
0834b915 +0xc51:  mov    0xc(%ebp),%eax
0834b918 +0xc54:  lea    0x308(%eax),%edx
0834b91e +0xc5a:  mov    0x8(%ebp),%eax
0834b921 +0xc5d:  add    $0x6bc,%eax
0834b926 +0xc62:  mov    %edx,0x4(%esp)
0834b92a +0xc66:  mov    %eax,(%esp)
0834b92d +0xc69:  call   0838a068 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19b08>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19b08
0834b932 +0xc6e:  mov    0xc(%ebp),%eax
0834b935 +0xc71:  movzbl 0x4e0(%eax),%edx
0834b93c +0xc78:  mov    0x8(%ebp),%eax
0834b93f +0xc7b:  mov    %dl,0x6c9(%eax)
0834b945 +0xc81:  mov    0xc(%ebp),%eax
0834b948 +0xc84:  mov    0x4fc(%eax),%edx
0834b94e +0xc8a:  mov    0x8(%ebp),%eax
0834b951 +0xc8d:  mov    %edx,0x6cc(%eax)
0834b957 +0xc93:  mov    0xc(%ebp),%eax
0834b95a +0xc96:  movzbl 0x504(%eax),%edx
0834b961 +0xc9d:  mov    0x8(%ebp),%eax
0834b964 +0xca0:  mov    %dl,0x6d0(%eax)
0834b96a +0xca6:  mov    0xc(%ebp),%eax
0834b96d +0xca9:  movzbl 0x505(%eax),%edx
0834b974 +0xcb0:  mov    0x8(%ebp),%eax
0834b977 +0xcb3:  mov    %dl,0x6d1(%eax)
0834b97d +0xcb9:  lea    -0xc(%ebp),%esp
0834b980 +0xcbc:  add    $0x0,%esp
0834b983 +0xcbf:  pop    %ebx
0834b984 +0xcc0:  pop    %esi
0834b985 +0xcc1:  pop    %edi
0834b986 +0xcc2:  pop    %ebp
0834b987 +0xcc3:  ret
```

## 反编译 C

```c
// CDungeon::set_dungeon @ 0x834acc4

/* CDungeon::set_dungeon(STDungeonScript&) */

void __thiscall CDungeon::set_dungeon(CDungeon *this,STDungeonScript *param_1)

{
  CDungeon CVar1;
  CDungeon CVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CDataManager *pCVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  vector *pvVar13;
  int iVar14;
  char local_2a0 [500];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
  local_ac [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
  local_a8 [4];
  int local_a4;
  int local_a0;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_9c [4];
  int local_98;
  __normal_iterator local_94 [4];
  __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>> local_90 [4];
  cMyTrace local_8c [16];
  __normal_iterator local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  pair local_6c [8];
  pair<int_const,int> local_64 [8];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_5c [4];
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  local_58 [4];
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  local_54 [4];
  pair local_50 [8];
  pair<int_const,std::vector<RandomList,std::allocator<RandomList>>> local_48 [16];
  pair<int,std::vector<RandomList,std::allocator<RandomList>>> local_38 [16];
  int local_28;
  MazeScript *local_24;
  uint local_20;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0xb0);
  pcVar5 = local_2a0;
  for (iVar14 = 0x7d; iVar14 != 0; iVar14 = iVar14 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  pcVar5 = (char *)std::string::c_str((string *)(param_1 + 0x1c));
  strcpy(local_2a0,pcVar5);
  pcVar5 = (char *)std::string::c_str((string *)(param_1 + 0x1c));
  cVar3 = CodePage::script2Database(pcVar5,local_2a0);
  if (cVar3 != '\x01') {
    uVar6 = std::string::c_str((string *)(param_1 + 0x1c));
    uVar7 = CodePage::database();
    uVar8 = CodePage::script();
    cMyTrace::cMyTrace(local_8c,"void CDungeon::set_dungeon(STDungeonScript&)",0x58a,5);
    cMyTrace::operator()
              (local_8c,"Error!!! %s->%s [%s][%s][%d]",uVar8,uVar7,uVar6,
               "void CDungeon::set_dungeon(STDungeonScript&)",0x58a);
  }
  std::string::operator=((string *)(this + 0x18),local_2a0);
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    *(undefined4 *)(this + (local_28 + 0x1b8) * 4) =
         *(undefined4 *)(param_1 + (local_28 + 0x2c) * 4 + 4);
  }
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x14);
  this[0x38] = *(CDungeon *)(param_1 + 0x304);
  this[0x39] = *(CDungeon *)(param_1 + 0x305);
  this[0x3a] = *(CDungeon *)(param_1 + 0x306);
  if (this[0x38] != (CDungeon)0x0) {
    CVar1 = this[0x39];
    CVar2 = this[0x38];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_dimensionInout(pCVar9,(char)CVar2 + -1,(char)CVar1);
    CVar1 = this[0x39];
    CVar2 = this[0x38];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_original_dimensionInout(pCVar9,(char)CVar2 + -1,(char)CVar1);
  }
  this[0x3b] = *(CDungeon *)(param_1 + 0x324);
  this[0x3c] = *(CDungeon *)(param_1 + 0x325);
  if (*(int *)(this + 8) == 0x2aff) {
    CVar1 = this[0x3c];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_limit_inout_count(pCVar9,(int)(char)CVar1,2);
  }
  if (*(int *)(this + 8) == 0x2afe) {
    CVar1 = this[0x3c];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_limit_inout_count(pCVar9,(int)(char)CVar1,1);
  }
  std::vector<MazeScript,std::allocator<MazeScript>>::begin();
  std::vector<MazeScript,std::allocator<MazeScript>>::end();
  while( true ) {
    bVar4 = __gnu_cxx::operator!=(local_90,local_94);
    if (!bVar4) break;
    local_24 = (MazeScript *)
               __gnu_cxx::
               __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>::
               operator*(local_90);
    iVar14 = *(int *)(local_24 + 0x4c);
    if (iVar14 == 0) {
      std::vector<MazeScript,std::allocator<MazeScript>>::push_back
                ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x638),local_24);
    }
    else if (iVar14 == 1) {
      std::vector<MazeScript,std::allocator<MazeScript>>::push_back
                ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x644),local_24);
    }
    else if (iVar14 == -1) {
      std::vector<MazeScript,std::allocator<MazeScript>>::push_back
                ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_24);
    }
    __gnu_cxx::__normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>::
    operator++(local_90);
  }
  local_98 = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::pair<int,int>::pair((pair<int,int> *)&local_a4);
  do {
    do {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar4 = __gnu_cxx::operator!=(local_9c,local_7c);
      if (!bVar4) {
LAB_0834b197:
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x40),
                   (vector *)(param_1 + 0xd4));
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x4c),
                   (vector *)(param_1 + 0xe0));
        std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::operator=
                  ((vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>> *)
                   (this + 0x58),(vector *)(param_1 + 0xec));
        STWarRoomData::copy((STWarRoomData *)(param_1 + 0x18c),(STWarRoomData *)(this + 0x6f4));
        if (this + 0x7f4 != (CDungeon *)(param_1 + 0x7c)) {
          memcpy(this + 0x7f4,(CDungeon *)(param_1 + 0x7c),9);
        }
        this[0x85c] = *(CDungeon *)(param_1 + 0x88);
        if (this + 0x860 != (CDungeon *)(param_1 + 0x8c)) {
          memcpy(this + 0x860,(CDungeon *)(param_1 + 0x8c),9);
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x86c),
                   (vector *)(param_1 + 0x98));
        this[0x878] = *(CDungeon *)(param_1 + 0x314);
        this[0x879] = *(CDungeon *)(param_1 + 0x315);
        this[0x87b] = *(CDungeon *)(param_1 + 0x317);
        if (param_1[0x316] == (STDungeonScript)0x0) {
          this[0x87a] = (CDungeon)0x0;
        }
        else {
          this[0x87a] = (CDungeon)0x1;
        }
        *(undefined4 *)(this + 0x87c) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(this + 0x90c) = *(undefined4 *)(param_1 + 0x328);
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x910),(vector *)(param_1 + 0x32c));
        std::copy<int*,int*>
                  ((int *)(param_1 + 0x128),(int *)(param_1 + 0x13c),(int *)(this + 0x880));
        *(undefined4 *)(this + 0x894) = *(undefined4 *)(param_1 + 0x13c);
        *(undefined4 *)(this + 0x898) = *(undefined4 *)(param_1 + 0x168);
        this[0x89c] = *(CDungeon *)(param_1 + 0x28c);
        this[0x89d] = *(CDungeon *)(param_1 + 0x140);
        this[0x89e] = *(CDungeon *)(param_1 + 0x28d);
        this[0x89f] = *(CDungeon *)(param_1 + 0x28e);
        this[0x800] = *(CDungeon *)(param_1 + 0x2ab);
        *(undefined4 *)(this + 0x804) = *(undefined4 *)(param_1 + 0x2ac);
        memcpy(this + 0x808,param_1 + 0x2b0,0xc);
        memcpy(this + 0x820,param_1 + 700,0xc);
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x814),(vector *)(param_1 + 0x2c8));
        advancealtar::ClearRewardData::operator=
                  ((ClearRewardData *)(this + 0x82c),(ClearRewardData *)(param_1 + 0x2d4));
        advancealtar::SurvivalRewardData::operator=
                  ((SurvivalRewardData *)(this + 0x850),(SurvivalRewardData *)(param_1 + 0x2f8));
        this[0x624] = (CDungeon)0x0;
        *(undefined4 *)(this + 0x628) = *(undefined4 *)(param_1 + 0x16c);
        *(undefined4 *)(this + 0x650) = *(undefined4 *)(param_1 + 0x338);
        *(undefined4 *)(this + 0x670) = *(undefined4 *)(param_1 + 0x358);
        *(undefined4 *)(this + 0x680) = *(undefined4 *)(param_1 + 0x368);
        if (*(int *)(this + 0x680) != 0) {
          std::vector<int,std::allocator<int>>::reserve
                    ((vector<int,std::allocator<int>> *)(this + 0x674),*(int *)(this + 0x680) + 1);
          local_20 = 0;
          while( true ) {
            uVar12 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (param_1 + 0x35c));
            if (uVar12 <= local_20) break;
            puVar10 = (uint *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                          *)(param_1 + 0x35c),local_20);
            puVar11 = (undefined4 *)
                      std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x674),*puVar10);
            iVar14 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (param_1 + 0x35c),local_20);
            *puVar11 = *(undefined4 *)(iVar14 + 4);
            local_20 = local_20 + 1;
          }
        }
        *(undefined4 *)(this + 0x654) = *(undefined4 *)(param_1 + 0x33c);
        if (*(int *)(this + 0x654) != 0) {
          std::
          map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
          ::clear((map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
                   *)(this + 0x658));
          std::
          map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
          ::begin(local_58);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
          ::_Rb_tree_const_iterator(local_a8,(_Rb_tree_iterator *)local_58);
          std::
          map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
          ::end(local_54);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
          ::_Rb_tree_const_iterator(local_ac,(_Rb_tree_iterator *)local_54);
          while( true ) {
            cVar3 = std::
                    _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                    ::operator!=(local_a8,(_Rb_tree_const_iterator *)local_ac);
            if (cVar3 == '\0') break;
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
            ::operator->(local_a8);
            pvVar13 = (vector *)
                      std::
                      _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                      ::operator->(local_a8);
            std::make_pair<int_const&,std::vector<RandomList,std::allocator<RandomList>>const&>
                      ((int *)local_38,pvVar13);
                    /* try { // try from 0834b659 to 0834b65d has its CatchHandler @ 0834b6a2 */
            std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>::
            pair<int,std::vector<RandomList,std::allocator<RandomList>>>(local_48,local_38);
                    /* try { // try from 0834b678 to 0834b67c has its CatchHandler @ 0834b68d */
            std::
            map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
            ::insert(local_50);
                    /* try { // try from 0834b686 to 0834b68a has its CatchHandler @ 0834b6a2 */
            std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>::~pair(local_48)
            ;
            std::pair<int,std::vector<RandomList,std::allocator<RandomList>>>::~pair(local_38);
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
            ::operator++(local_a8);
          }
        }
        *(undefined4 *)(this + 0x8a0) = *(undefined4 *)(param_1 + 0x3c4);
        std::vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>>::operator=
                  ((vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>> *)
                   (this + 0x8f0),(vector *)(param_1 + 0x3c8));
        *(undefined4 *)(this + 0x684) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(this + 0x688) = *(undefined4 *)(param_1 + 0x3d8);
        *(undefined4 *)(this + 0x68c) = *(undefined4 *)(param_1 + 0x3dc);
        std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>::operator=
                  ((vector<stEventMonster_t,std::allocator<stEventMonster_t>> *)(this + 0x690),
                   (vector *)(param_1 + 0x3e0));
        *(undefined4 *)(this + 0x69c) = *(undefined4 *)(param_1 + 0x3ec);
        *(undefined4 *)(this + 0x6a0) = *(undefined4 *)(param_1 + 0x3f0);
        *(undefined4 *)(this + 0x6a4) = *(undefined4 *)(param_1 + 0x3f4);
        std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>::operator=
                  ((vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>> *)
                   (this + 0x6a8),(vector *)(param_1 + 0x3f8));
        this[0x6b4] = (CDungeon)(*(int *)(param_1 + 0x380) == 1);
        this[0x6b5] = (CDungeon)(*(int *)(param_1 + 0x3b4) == 1);
        *(undefined4 *)(this + 0x6b8) = *(undefined4 *)(param_1 + 0x3b8);
        std::
        vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
        ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                     *)(this + 0x900),(vector *)(param_1 + 0x404));
        this[0x6c8] = *(CDungeon *)(param_1 + 0x48c);
        if (param_1[0x2a9] != (STDungeonScript)0x0) {
          *(undefined4 *)(this + 4) = 1;
        }
        this[0x8fc] = *(CDungeon *)(param_1 + 0x2aa);
        this[0x8a8] = *(CDungeon *)(param_1 + 0x494);
        *(undefined4 *)(this + 0x8a4) = *(undefined4 *)(param_1 + 0x498);
        TournamentRewardItemRate::operator=
                  ((TournamentRewardItemRate *)(this + 0x8c4),
                   (TournamentRewardItemRate *)(param_1 + 0x4b4));
        std::
        map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
        ::operator=((map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
                     *)(this + 0x8ac),(map *)(param_1 + 0x49c));
        *(undefined4 *)(this + 0x8d4) = *(undefined4 *)(param_1 + 0x4c4);
        std::
        map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
        ::operator=((map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
                     *)(this + 0x8d8),(map *)(param_1 + 0x4c8));
        std::
        map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
        ::operator=((map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
                     *)(this + 0x91c),(map *)(param_1 + 0x4e4));
        std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::swap
                  ((vector<DimensionPartyCount,std::allocator<DimensionPartyCount>> *)(this + 0x6bc)
                   ,(vector *)(param_1 + 0x308));
        this[0x6c9] = *(CDungeon *)(param_1 + 0x4e0);
        *(undefined4 *)(this + 0x6cc) = *(undefined4 *)(param_1 + 0x4fc);
        this[0x6d0] = *(CDungeon *)(param_1 + 0x504);
        this[0x6d1] = *(CDungeon *)(param_1 + 0x505);
        return;
      }
      puVar11 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_9c);
      local_74 = puVar11[1];
      local_78 = *puVar11;
      std::pair<int,int>::operator=((pair<int,int> *)&local_a4,(pair *)&local_78);
    } while (local_a4 == 0);
    local_98 = local_a0 + local_98;
    std::pair<int_const,int>::pair<int&,int&>(local_64,&local_98,&local_a4);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_6c);
    if (100 < local_98) {
      LogManager::logFormat
                (1,"data_manager.cpp","void CDungeon::set_dungeon(STDungeonScript&)",0x5e1,
                 "total_rate(%d) > 100",local_98);
      goto LAB_0834b197;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_5c,(int)local_9c);
  } while( true );
}
```
