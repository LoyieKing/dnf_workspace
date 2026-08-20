# AradfromString

`_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc`

`WongWork::CDungeonClear::AradfromString(CUser*, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDungeonClear` | `0x08483fae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483fae  _ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc
#           WongWork::CDungeonClear::AradfromString(CUser*, char const*)
# range [0x08483fae, 0x084843f9]
08483fae +0x000:  push   %ebp
08483faf +0x001:  mov    %esp,%ebp
08483fb1 +0x003:  push   %esi
08483fb2 +0x004:  push   %ebx
08483fb3 +0x005:  sub    $0xe0,%esp
08483fb9 +0x00b:  movl   $0x0,0xc(%esp)
08483fc1 +0x013:  movl   $0x0,0x8(%esp)
08483fc9 +0x01b:  movl   $",",0x4(%esp)
08483fd1 +0x023:  lea    -0x70(%ebp),%eax
08483fd4 +0x026:  mov    %eax,(%esp)
08483fd7 +0x029:  call   080d02ae <_GLOBAL__I__ZN10BingoEventC2Ev+0x50fb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x50fb
08483fdc +0x02e:  lea    -0x59(%ebp),%eax
08483fdf +0x031:  mov    %eax,(%esp)
08483fe2 +0x034:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08483fe7 +0x039:  lea    -0x59(%ebp),%eax
08483fea +0x03c:  mov    %eax,0x8(%esp)
08483fee +0x040:  mov    0x10(%ebp),%eax
08483ff1 +0x043:  mov    %eax,0x4(%esp)
08483ff5 +0x047:  lea    -0x74(%ebp),%eax
08483ff8 +0x04a:  mov    %eax,(%esp)
08483ffb +0x04d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08484000 +0x052:  jmp    0848401a <+0x6c>
08484002 +0x054:  mov    %edx,%ebx
08484004 +0x056:  mov    %eax,%esi
08484006 +0x058:  lea    -0x59(%ebp),%eax
08484009 +0x05b:  mov    %eax,(%esp)
0848400c +0x05e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08484011 +0x063:  mov    %esi,%eax
08484013 +0x065:  mov    %ebx,%edx
08484015 +0x067:  jmp    084843c8 <+0x41a>
0848401a +0x06c:  lea    -0x59(%ebp),%eax
0848401d +0x06f:  mov    %eax,(%esp)
08484020 +0x072:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08484025 +0x077:  lea    -0x70(%ebp),%eax
08484028 +0x07a:  mov    %eax,0x8(%esp)
0848402c +0x07e:  lea    -0x74(%ebp),%eax
0848402f +0x081:  mov    %eax,0x4(%esp)
08484033 +0x085:  lea    -0x90(%ebp),%eax
08484039 +0x08b:  mov    %eax,(%esp)
0848403c +0x08e:  call   080d037a <_GLOBAL__I__ZN10BingoEventC2Ev+0x51c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x51c7
08484041 +0x093:  lea    -0x9c(%ebp),%eax
08484047 +0x099:  mov    %eax,(%esp)
0848404a +0x09c:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0848404f +0x0a1:  lea    -0xcc(%ebp),%eax
08484055 +0x0a7:  lea    -0x90(%ebp),%edx
0848405b +0x0ad:  mov    %edx,0x4(%esp)
0848405f +0x0b1:  mov    %eax,(%esp)
08484062 +0x0b4:  call   080d03c4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5211>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5211
08484067 +0x0b9:  sub    $0x4,%esp
0848406a +0x0bc:  jmp    084842d0 <+0x322>
0848406f +0x0c1:  lea    -0x2f(%ebp),%eax
08484072 +0x0c4:  mov    %eax,(%esp)
08484075 +0x0c7:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0848407a +0x0cc:  lea    -0x2f(%ebp),%eax
0848407d +0x0cf:  mov    %eax,0x8(%esp)
08484081 +0x0d3:  movl   $"|",0x4(%esp)
08484089 +0x0db:  lea    -0x34(%ebp),%eax
0848408c +0x0de:  mov    %eax,(%esp)
0848408f +0x0e1:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08484094 +0x0e6:  lea    -0xcc(%ebp),%eax
0848409a +0x0ec:  mov    %eax,(%esp)
0848409d +0x0ef:  call   080d0500 <_GLOBAL__I__ZN10BingoEventC2Ev+0x534d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x534d
084840a2 +0x0f4:  lea    -0x34(%ebp),%edx
084840a5 +0x0f7:  mov    %edx,0x8(%esp)
084840a9 +0x0fb:  lea    -0x9c(%ebp),%edx
084840af +0x101:  mov    %edx,0x4(%esp)
084840b3 +0x105:  mov    %eax,(%esp)
084840b6 +0x108:  call   08483e98 <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_>  ; WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
084840bb +0x10d:  jmp    084840d2 <+0x124>
084840bd +0x10f:  mov    %edx,%ebx
084840bf +0x111:  mov    %eax,%esi
084840c1 +0x113:  lea    -0x34(%ebp),%eax
084840c4 +0x116:  mov    %eax,(%esp)
084840c7 +0x119:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084840cc +0x11e:  mov    %esi,%eax
084840ce +0x120:  mov    %ebx,%edx
084840d0 +0x122:  jmp    084840df <+0x131>
084840d2 +0x124:  lea    -0x34(%ebp),%eax
084840d5 +0x127:  mov    %eax,(%esp)
084840d8 +0x12a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084840dd +0x12f:  jmp    084840f7 <+0x149>
084840df +0x131:  mov    %edx,%ebx
084840e1 +0x133:  mov    %eax,%esi
084840e3 +0x135:  lea    -0x2f(%ebp),%eax
084840e6 +0x138:  mov    %eax,(%esp)
084840e9 +0x13b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084840ee +0x140:  mov    %esi,%eax
084840f0 +0x142:  mov    %ebx,%edx
084840f2 +0x144:  jmp    0848432b <+0x37d>
084840f7 +0x149:  lea    -0x2f(%ebp),%eax
084840fa +0x14c:  mov    %eax,(%esp)
084840fd +0x14f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08484102 +0x154:  movl   $0x0,0x4(%esp)
0848410a +0x15c:  lea    -0x9c(%ebp),%eax
08484110 +0x162:  mov    %eax,(%esp)
08484113 +0x165:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08484118 +0x16a:  mov    %eax,(%esp)
0848411b +0x16d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08484120 +0x172:  mov    %eax,(%esp)
08484123 +0x175:  call   0807e6f0 <_init+0xfe8>
08484128 +0x17a:  mov    %eax,-0xa0(%ebp)
0848412e +0x180:  movl   $0x1,0x4(%esp)
08484136 +0x188:  lea    -0x9c(%ebp),%eax
0848413c +0x18e:  mov    %eax,(%esp)
0848413f +0x191:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08484144 +0x196:  mov    %eax,(%esp)
08484147 +0x199:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0848414c +0x19e:  mov    %eax,(%esp)
0848414f +0x1a1:  call   0807e6f0 <_init+0xfe8>
08484154 +0x1a6:  mov    %eax,-0xa4(%ebp)
0848415a +0x1ac:  mov    -0xa4(%ebp),%eax
08484160 +0x1b2:  cmp    $0x4,%eax
08484163 +0x1b5:  jne    0848416f <+0x1c1>
08484165 +0x1b7:  movl   $0x3,-0xa4(%ebp)
0848416f +0x1c1:  mov    -0xa0(%ebp),%ebx
08484175 +0x1c7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0848417a +0x1cc:  mov    %ebx,0x4(%esp)
0848417e +0x1d0:  mov    %eax,(%esp)
08484181 +0x1d3:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08484186 +0x1d8:  mov    %eax,-0x14(%ebp)
08484189 +0x1db:  movb   $0x0,-0xd(%ebp)
0848418d +0x1df:  movl   $0x0,-0xc(%ebp)
08484194 +0x1e6:  cmpl   $0x0,-0x14(%ebp)
08484198 +0x1ea:  je     084841a8 <+0x1fa>
0848419a +0x1ec:  mov    -0x14(%ebp),%eax
0848419d +0x1ef:  mov    %eax,(%esp)
084841a0 +0x1f2:  call   08484854 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x1d>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1d
084841a5 +0x1f7:  mov    %eax,-0xc(%ebp)
084841a8 +0x1fa:  cmpl   $0x0,-0xc(%ebp)
084841ac +0x1fe:  je     084841de <+0x230>
084841ae +0x200:  mov    -0xc(%ebp),%ebx
084841b1 +0x203:  mov    0xc(%ebp),%eax
084841b4 +0x206:  mov    %eax,(%esp)
084841b7 +0x209:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084841bc +0x20e:  add    $0x4,%eax
084841bf +0x211:  mov    %ebx,0x4(%esp)
084841c3 +0x215:  mov    %eax,(%esp)
084841c6 +0x218:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
084841cb +0x21d:  mov    %al,-0xd(%ebp)
084841ce +0x220:  cmpb   $0x0,-0xd(%ebp)
084841d2 +0x224:  je     084841de <+0x230>
084841d4 +0x226:  movl   $0x3,-0xa4(%ebp)
084841de +0x230:  mov    -0xa0(%ebp),%eax
084841e4 +0x236:  mov    %ax,-0x2e(%ebp)
084841e8 +0x23a:  mov    0x8(%ebp),%edx
084841eb +0x23d:  lea    -0xa8(%ebp),%eax
084841f1 +0x243:  lea    -0x2e(%ebp),%ecx
084841f4 +0x246:  mov    %ecx,0x8(%esp)
084841f8 +0x24a:  mov    %edx,0x4(%esp)
084841fc +0x24e:  mov    %eax,(%esp)
084841ff +0x251:  call   08387cae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1774e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1774e
08484204 +0x256:  sub    $0x4,%esp
08484207 +0x259:  mov    0x8(%ebp),%edx
0848420a +0x25c:  lea    -0x2c(%ebp),%eax
0848420d +0x25f:  mov    %edx,0x4(%esp)
08484211 +0x263:  mov    %eax,(%esp)
08484214 +0x266:  call   08387cda <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1777a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1777a
08484219 +0x26b:  sub    $0x4,%esp
0848421c +0x26e:  lea    -0x2c(%ebp),%eax
0848421f +0x271:  mov    %eax,0x4(%esp)
08484223 +0x275:  lea    -0xa8(%ebp),%eax
08484229 +0x27b:  mov    %eax,(%esp)
0848422c +0x27e:  call   08387d00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x177a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x177a0
08484231 +0x283:  test   %al,%al
08484233 +0x285:  je     08484287 <+0x2d9>
08484235 +0x287:  lea    -0x1c(%ebp),%eax
08484238 +0x28a:  lea    -0xa4(%ebp),%edx
0848423e +0x290:  mov    %edx,0x8(%esp)
08484242 +0x294:  lea    -0xa0(%ebp),%edx
08484248 +0x29a:  mov    %edx,0x4(%esp)
0848424c +0x29e:  mov    %eax,(%esp)
0848424f +0x2a1:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08484254 +0x2a6:  sub    $0x4,%esp
08484257 +0x2a9:  lea    -0x1c(%ebp),%eax
0848425a +0x2ac:  mov    %eax,0x4(%esp)
0848425e +0x2b0:  lea    -0x20(%ebp),%eax
08484261 +0x2b3:  mov    %eax,(%esp)
08484264 +0x2b6:  call   08484894 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x5d>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x5d
08484269 +0x2bb:  mov    0x8(%ebp),%edx
0848426c +0x2be:  lea    -0x28(%ebp),%eax
0848426f +0x2c1:  lea    -0x20(%ebp),%ecx
08484272 +0x2c4:  mov    %ecx,0x8(%esp)
08484276 +0x2c8:  mov    %edx,0x4(%esp)
0848427a +0x2cc:  mov    %eax,(%esp)
0848427d +0x2cf:  call   08387d86 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17826>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17826
08484282 +0x2d4:  sub    $0x4,%esp
08484285 +0x2d7:  jmp    084842c2 <+0x314>
08484287 +0x2d9:  lea    -0xa8(%ebp),%eax
0848428d +0x2df:  mov    %eax,(%esp)
08484290 +0x2e2:  call   08387db2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17852>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17852
08484295 +0x2e7:  movzbl 0x2(%eax),%eax
08484299 +0x2eb:  movsbl %al,%edx
0848429c +0x2ee:  mov    -0xa4(%ebp),%eax
084842a2 +0x2f4:  cmp    %eax,%edx
084842a4 +0x2f6:  setl   %al
084842a7 +0x2f9:  test   %al,%al
084842a9 +0x2fb:  je     084842c2 <+0x314>
084842ab +0x2fd:  lea    -0xa8(%ebp),%eax
084842b1 +0x303:  mov    %eax,(%esp)
084842b4 +0x306:  call   08387db2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17852>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17852
084842b9 +0x30b:  mov    -0xa4(%ebp),%edx
084842bf +0x311:  mov    %dl,0x2(%eax)
084842c2 +0x314:  lea    -0xcc(%ebp),%eax
084842c8 +0x31a:  mov    %eax,(%esp)
084842cb +0x31d:  call   080d04da <_GLOBAL__I__ZN10BingoEventC2Ev+0x5327>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5327
084842d0 +0x322:  lea    -0x58(%ebp),%eax
084842d3 +0x325:  lea    -0x90(%ebp),%edx
084842d9 +0x32b:  mov    %edx,0x4(%esp)
084842dd +0x32f:  mov    %eax,(%esp)
084842e0 +0x332:  call   080d043e <_GLOBAL__I__ZN10BingoEventC2Ev+0x528b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x528b
084842e5 +0x337:  sub    $0x4,%esp
084842e8 +0x33a:  lea    -0x58(%ebp),%edx
084842eb +0x33d:  lea    -0xcc(%ebp),%eax
084842f1 +0x343:  mov    %edx,0x4(%esp)
084842f5 +0x347:  mov    %eax,(%esp)
084842f8 +0x34a:  call   080d04b8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5305>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5305
084842fd +0x34f:  mov    %eax,%ebx
084842ff +0x351:  lea    -0x58(%ebp),%eax
08484302 +0x354:  mov    %eax,(%esp)
08484305 +0x357:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
0848430a +0x35c:  jmp    08484321 <+0x373>
0848430c +0x35e:  mov    %edx,%ebx
0848430e +0x360:  mov    %eax,%esi
08484310 +0x362:  lea    -0x58(%ebp),%eax
08484313 +0x365:  mov    %eax,(%esp)
08484316 +0x368:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
0848431b +0x36d:  mov    %esi,%eax
0848431d +0x36f:  mov    %ebx,%edx
0848431f +0x371:  jmp    0848432b <+0x37d>
08484321 +0x373:  test   %bl,%bl
08484323 +0x375:  jne    0848406f <+0xc1>
08484329 +0x37b:  jmp    08484343 <+0x395>
0848432b +0x37d:  mov    %edx,%ebx
0848432d +0x37f:  mov    %eax,%esi
0848432f +0x381:  lea    -0xcc(%ebp),%eax
08484335 +0x387:  mov    %eax,(%esp)
08484338 +0x38a:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
0848433d +0x38f:  mov    %esi,%eax
0848433f +0x391:  mov    %ebx,%edx
08484341 +0x393:  jmp    08484366 <+0x3b8>
08484343 +0x395:  lea    -0xcc(%ebp),%eax
08484349 +0x39b:  mov    %eax,(%esp)
0848434c +0x39e:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08484351 +0x3a3:  mov    $0x1,%ebx
08484356 +0x3a8:  lea    -0x9c(%ebp),%eax
0848435c +0x3ae:  mov    %eax,(%esp)
0848435f +0x3b1:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08484364 +0x3b6:  jmp    08484396 <+0x3e8>
08484366 +0x3b8:  mov    %edx,%ebx
08484368 +0x3ba:  mov    %eax,%esi
0848436a +0x3bc:  lea    -0x9c(%ebp),%eax
08484370 +0x3c2:  mov    %eax,(%esp)
08484373 +0x3c5:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08484378 +0x3ca:  mov    %esi,%eax
0848437a +0x3cc:  mov    %ebx,%edx
0848437c +0x3ce:  jmp    0848437e <+0x3d0>
0848437e +0x3d0:  mov    %edx,%ebx
08484380 +0x3d2:  mov    %eax,%esi
08484382 +0x3d4:  lea    -0x90(%ebp),%eax
08484388 +0x3da:  mov    %eax,(%esp)
0848438b +0x3dd:  call   080ce0a4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2ef1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2ef1
08484390 +0x3e2:  mov    %esi,%eax
08484392 +0x3e4:  mov    %ebx,%edx
08484394 +0x3e6:  jmp    084843a6 <+0x3f8>
08484396 +0x3e8:  lea    -0x90(%ebp),%eax
0848439c +0x3ee:  mov    %eax,(%esp)
0848439f +0x3f1:  call   080ce0a4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2ef1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2ef1
084843a4 +0x3f6:  jmp    084843bb <+0x40d>
084843a6 +0x3f8:  mov    %edx,%ebx
084843a8 +0x3fa:  mov    %eax,%esi
084843aa +0x3fc:  lea    -0x74(%ebp),%eax
084843ad +0x3ff:  mov    %eax,(%esp)
084843b0 +0x402:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084843b5 +0x407:  mov    %esi,%eax
084843b7 +0x409:  mov    %ebx,%edx
084843b9 +0x40b:  jmp    084843c8 <+0x41a>
084843bb +0x40d:  lea    -0x74(%ebp),%eax
084843be +0x410:  mov    %eax,(%esp)
084843c1 +0x413:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084843c6 +0x418:  jmp    084843e3 <+0x435>
084843c8 +0x41a:  mov    %edx,%ebx
084843ca +0x41c:  mov    %eax,%esi
084843cc +0x41e:  lea    -0x70(%ebp),%eax
084843cf +0x421:  mov    %eax,(%esp)
084843d2 +0x424:  call   080ce05e <_GLOBAL__I__ZN10BingoEventC2Ev+0x2eab>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2eab
084843d7 +0x429:  mov    %esi,%eax
084843d9 +0x42b:  mov    %ebx,%edx
084843db +0x42d:  mov    %eax,(%esp)
084843de +0x430:  call   08ae3750 <_Unwind_Resume>
084843e3 +0x435:  lea    -0x70(%ebp),%eax
084843e6 +0x438:  mov    %eax,(%esp)
084843e9 +0x43b:  call   080ce05e <_GLOBAL__I__ZN10BingoEventC2Ev+0x2eab>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2eab
084843ee +0x440:  mov    %ebx,%eax
084843f0 +0x442:  lea    -0x8(%ebp),%esp
084843f3 +0x445:  add    $0x0,%esp
084843f6 +0x448:  pop    %ebx
084843f7 +0x449:  pop    %esi
084843f8 +0x44a:  pop    %ebp
084843f9 +0x44b:  ret
```

## 反编译 C

```c
// WongWork::CDungeonClear::AradfromString @ 0x8483fae

/* WongWork::CDungeonClear::AradfromString(CUser*, char const*) */

undefined4 __thiscall
WongWork::CDungeonClear::AradfromString(CDungeonClear *this,CUser *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  string *psVar3;
  string *psVar4;
  char *pcVar5;
  int iVar6;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  local_d0 [36];
  _Rb_tree_iterator<std::pair<short_const,char>> local_ac [4];
  int local_a8;
  int local_a4;
  vector<std::string,std::allocator<std::string>> local_a0 [12];
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  local_94 [28];
  string local_78;
  char_separator<char,std::char_traits<char>> local_74 [23];
  allocator<char> local_5d;
  iterator_facade local_5c [36];
  string local_38;
  allocator<char> local_33;
  undefined2 local_32;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_30 [4];
  pair local_2c [8];
  pair<short_const,char> local_24 [4];
  int local_20 [2];
  CDungeon *local_18;
  char local_11;
  uint local_10;
  
  boost::char_separator<char,std::char_traits<char>>::char_separator(local_74,&DAT_08c73820,0,0);
  std::allocator<char>::allocator();
                    /* try { // try from 08483ffb to 08483fff has its CatchHandler @ 08484002 */
  std::string::string((string *)&local_78,param_2,(allocator *)&local_5d);
  std::allocator<char>::~allocator(&local_5d);
                    /* try { // try from 0848403c to 08484040 has its CatchHandler @ 084843a6 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::tokenizer<std::string>(local_94,&local_78,(char_separator *)local_74);
                    /* try { // try from 0848404a to 0848404e has its CatchHandler @ 0848437e */
  std::vector<std::string,std::allocator<std::string>>::vector(local_a0);
                    /* try { // try from 08484062 to 08484066 has its CatchHandler @ 08484366 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::begin();
  while( true ) {
    boost::
    tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
    ::end();
                    /* try { // try from 084842f8 to 084842fc has its CatchHandler @ 0848430c */
    cVar2 = boost::operator!=((iterator_facade *)local_d0,local_5c);
                    /* try { // try from 08484305 to 08484309 has its CatchHandler @ 0848432b */
    boost::
    token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
    ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                       *)local_5c);
    if (cVar2 == '\0') break;
    std::allocator<char>::allocator();
                    /* try { // try from 0848408f to 08484093 has its CatchHandler @ 084840df */
    std::string::string((string *)&local_38,"|",(allocator *)&local_33);
                    /* try { // try from 0848409d to 084840ba has its CatchHandler @ 084840bd */
    psVar3 = (string *)
             boost::
             iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
             ::operator*(local_d0);
    arad_parsing(psVar3,(vector *)local_a0,&local_38);
                    /* try { // try from 084840d8 to 084840dc has its CatchHandler @ 084840df */
    std::string::~string((string *)&local_38);
    std::allocator<char>::~allocator(&local_33);
    psVar4 = (string *)std::vector<std::string,std::allocator<std::string>>::operator[](local_a0,0);
                    /* try { // try from 0848411b to 084842e4 has its CatchHandler @ 0848432b */
    pcVar5 = (char *)std::string::c_str(psVar4);
    local_a4 = atoi(pcVar5);
    psVar4 = (string *)std::vector<std::string,std::allocator<std::string>>::operator[](local_a0,1);
    pcVar5 = (char *)std::string::c_str(psVar4);
    local_a8 = atoi(pcVar5);
    if (local_a8 == 4) {
      local_a8 = 3;
    }
    iVar6 = G_CDataManager();
    local_18 = (CDungeon *)CDataManager::find_dungeon(iVar6);
    local_11 = '\0';
    local_10 = 0;
    if (local_18 != (CDungeon *)0x0) {
      local_10 = CDungeon::getHeroesRequiredQuest(local_18);
    }
    uVar1 = local_10;
    if (local_10 != 0) {
      iVar6 = CUser::getCurCharacQuestR(param_1);
      local_11 = CQuestClear::isClearedQuest((CQuestClear *)(iVar6 + 4),uVar1);
      if (local_11 != '\0') {
        local_a8 = 3;
      }
    }
    local_32 = (undefined2)local_a4;
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::find
              ((short *)local_ac);
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_30)
    ;
    cVar2 = std::_Rb_tree_iterator<std::pair<short_const,char>>::operator==
                      (local_ac,(_Rb_tree_iterator *)local_30);
    if (cVar2 == '\0') {
      iVar6 = std::_Rb_tree_iterator<std::pair<short_const,char>>::operator->(local_ac);
      if (*(char *)(iVar6 + 2) < local_a8) {
        iVar6 = std::_Rb_tree_iterator<std::pair<short_const,char>>::operator->(local_ac);
        *(char *)(iVar6 + 2) = (char)local_a8;
      }
    }
    else {
      std::make_pair<int&,int&>(local_20,&local_a4);
      std::pair<short_const,char>::pair<int,int>(local_24,(pair *)local_20);
      std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::insert
                (local_2c);
    }
    boost::
    iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
    ::operator++(local_d0);
  }
                    /* try { // try from 0848434c to 08484350 has its CatchHandler @ 08484366 */
  boost::
  token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                     *)local_d0);
                    /* try { // try from 0848435f to 08484363 has its CatchHandler @ 0848437e */
  std::vector<std::string,std::allocator<std::string>>::~vector(local_a0);
                    /* try { // try from 0848439f to 084843a3 has its CatchHandler @ 084843a6 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~tokenizer(local_94);
                    /* try { // try from 084843c1 to 084843c5 has its CatchHandler @ 084843c8 */
  std::string::~string((string *)&local_78);
  boost::char_separator<char,std::char_traits<char>>::~char_separator(local_74);
  return 1;
}
```
