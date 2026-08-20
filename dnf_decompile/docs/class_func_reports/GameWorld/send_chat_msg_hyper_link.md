# send_chat_msg_hyper_link

`_ZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET`

`GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cfa10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cfa10  _ZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET
#           GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
# range [0x086cfa10, 0x086d0ea3]
086cfa10 +0x0000:  push   %ebp
086cfa11 +0x0001:  mov    %esp,%ebp
086cfa13 +0x0003:  push   %edi
086cfa14 +0x0004:  push   %esi
086cfa15 +0x0005:  push   %ebx
086cfa16 +0x0006:  sub    $0xa5c,%esp
086cfa1c +0x000c:  mov    0x10(%ebp),%eax
086cfa1f +0x000f:  movzbl 0xd(%eax),%eax
086cfa23 +0x0013:  movzbl %al,%eax
086cfa26 +0x0016:  cmp    $0x1e,%eax
086cfa29 +0x0019:  ja     086cfa6f <+0x5f>
086cfa2b +0x001b:  mov    $0x1,%edx
086cfa30 +0x0020:  mov    %edx,%ebx
086cfa32 +0x0022:  mov    %eax,%ecx
086cfa34 +0x0024:  shl    %cl,%ebx
086cfa36 +0x0026:  mov    %ebx,%eax
086cfa38 +0x0028:  and    $0x7fff0411,%eax
086cfa3d +0x002d:  test   %eax,%eax
086cfa3f +0x002f:  je     086cfa6f <+0x5f>
086cfa41 +0x0031:  cmpl   $0x0,0xc(%ebp)
086cfa45 +0x0035:  je     086cfa6f <+0x5f>
086cfa47 +0x0037:  movl   $0x0,0xc(%esp)
086cfa4f +0x003f:  movl   $0x1,0x8(%esp)
086cfa57 +0x0047:  movl   $0x18,0x4(%esp)
086cfa5f +0x004f:  mov    0xc(%ebp),%eax
086cfa62 +0x0052:  mov    %eax,(%esp)
086cfa65 +0x0055:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086cfa6a +0x005a:  jmp    086d0e98 <+0x1488>
086cfa6f +0x005f:  mov    0x10(%ebp),%eax
086cfa72 +0x0062:  movzbl 0xd(%eax),%eax
086cfa76 +0x0066:  test   %al,%al
086cfa78 +0x0068:  je     086cfbb9 <+0x1a9>
086cfa7e +0x006e:  lea    -0x7d(%ebp),%eax
086cfa81 +0x0071:  mov    %eax,(%esp)
086cfa84 +0x0074:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cfa89 +0x0079:  mov    0x10(%ebp),%eax
086cfa8c +0x007c:  lea    0x18(%eax),%edx
086cfa8f +0x007f:  lea    -0x7d(%ebp),%eax
086cfa92 +0x0082:  mov    %eax,0x8(%esp)
086cfa96 +0x0086:  mov    %edx,0x4(%esp)
086cfa9a +0x008a:  lea    -0x90(%ebp),%eax
086cfaa0 +0x0090:  mov    %eax,(%esp)
086cfaa3 +0x0093:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cfaa8 +0x0098:  jmp    086cfac5 <+0xb5>
086cfaaa +0x009a:  mov    %edx,%ebx
086cfaac +0x009c:  mov    %eax,%esi
086cfaae +0x009e:  lea    -0x7d(%ebp),%eax
086cfab1 +0x00a1:  mov    %eax,(%esp)
086cfab4 +0x00a4:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cfab9 +0x00a9:  mov    %esi,%eax
086cfabb +0x00ab:  mov    %ebx,%edx
086cfabd +0x00ad:  mov    %eax,(%esp)
086cfac0 +0x00b0:  call   08ae3750 <_Unwind_Resume>
086cfac5 +0x00b5:  lea    -0x7d(%ebp),%eax
086cfac8 +0x00b8:  mov    %eax,(%esp)
086cfacb +0x00bb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cfad0 +0x00c0:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
086cfad5 +0x00c5:  lea    -0x94(%ebp),%edx
086cfadb +0x00cb:  lea    -0x90(%ebp),%ecx
086cfae1 +0x00d1:  mov    %ecx,0x8(%esp)
086cfae5 +0x00d5:  mov    %eax,0x4(%esp)
086cfae9 +0x00d9:  mov    %edx,(%esp)
086cfaec +0x00dc:  call   0862e46c <_ZN16CSyncSlangFilter6FilterERKSs>  ; CSyncSlangFilter::Filter(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086cfaf1 +0x00e1:  sub    $0x4,%esp
086cfaf4 +0x00e4:  lea    -0x94(%ebp),%eax
086cfafa +0x00ea:  mov    %eax,(%esp)
086cfafd +0x00ed:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
086cfb02 +0x00f2:  test   %eax,%eax
086cfb04 +0x00f4:  sete   %al
086cfb07 +0x00f7:  test   %al,%al
086cfb09 +0x00f9:  je     086cfb12 <+0x102>
086cfb0b +0x00fb:  mov    $0x0,%ebx
086cfb10 +0x0100:  jmp    086cfb65 <+0x155>
086cfb12 +0x0102:  lea    -0x94(%ebp),%eax
086cfb18 +0x0108:  mov    %eax,(%esp)
086cfb1b +0x010b:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
086cfb20 +0x0110:  mov    %eax,%ebx
086cfb22 +0x0112:  lea    -0x94(%ebp),%eax
086cfb28 +0x0118:  mov    %eax,(%esp)
086cfb2b +0x011b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086cfb30 +0x0120:  mov    0x10(%ebp),%edx
086cfb33 +0x0123:  add    $0x18,%edx
086cfb36 +0x0126:  mov    %ebx,0x8(%esp)
086cfb3a +0x012a:  mov    %eax,0x4(%esp)
086cfb3e +0x012e:  mov    %edx,(%esp)
086cfb41 +0x0131:  call   0807d8d0 <_init+0x1c8>
086cfb46 +0x0136:  mov    $0x1,%ebx
086cfb4b +0x013b:  jmp    086cfb65 <+0x155>
086cfb4d +0x013d:  mov    %edx,%ebx
086cfb4f +0x013f:  mov    %eax,%esi
086cfb51 +0x0141:  lea    -0x94(%ebp),%eax
086cfb57 +0x0147:  mov    %eax,(%esp)
086cfb5a +0x014a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cfb5f +0x014f:  mov    %esi,%eax
086cfb61 +0x0151:  mov    %ebx,%edx
086cfb63 +0x0153:  jmp    086cfb85 <+0x175>
086cfb65 +0x0155:  lea    -0x94(%ebp),%eax
086cfb6b +0x015b:  mov    %eax,(%esp)
086cfb6e +0x015e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cfb73 +0x0163:  test   %ebx,%ebx
086cfb75 +0x0165:  jne    086cfb7e <+0x16e>
086cfb77 +0x0167:  mov    $0x0,%ebx
086cfb7c +0x016c:  jmp    086cfba3 <+0x193>
086cfb7e +0x016e:  mov    $0x1,%ebx
086cfb83 +0x0173:  jmp    086cfba3 <+0x193>
086cfb85 +0x0175:  mov    %edx,%ebx
086cfb87 +0x0177:  mov    %eax,%esi
086cfb89 +0x0179:  lea    -0x90(%ebp),%eax
086cfb8f +0x017f:  mov    %eax,(%esp)
086cfb92 +0x0182:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cfb97 +0x0187:  mov    %esi,%eax
086cfb99 +0x0189:  mov    %ebx,%edx
086cfb9b +0x018b:  mov    %eax,(%esp)
086cfb9e +0x018e:  call   08ae3750 <_Unwind_Resume>
086cfba3 +0x0193:  lea    -0x90(%ebp),%eax
086cfba9 +0x0199:  mov    %eax,(%esp)
086cfbac +0x019c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cfbb1 +0x01a1:  test   %ebx,%ebx
086cfbb3 +0x01a3:  je     086d0e98 <+0x1488>
086cfbb9 +0x01a9:  lea    -0x8c(%ebp),%eax
086cfbbf +0x01af:  mov    %eax,(%esp)
086cfbc2 +0x01b2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086cfbc7 +0x01b7:  mov    0x10(%ebp),%eax
086cfbca +0x01ba:  lea    0x18(%eax),%edx
086cfbcd +0x01bd:  mov    0x10(%ebp),%eax
086cfbd0 +0x01c0:  movzbl 0xd(%eax),%eax
086cfbd4 +0x01c4:  movsbl %al,%eax
086cfbd7 +0x01c7:  mov    %edx,0xc(%esp)
086cfbdb +0x01cb:  mov    %eax,0x8(%esp)
086cfbdf +0x01cf:  mov    0xc(%ebp),%eax
086cfbe2 +0x01d2:  mov    %eax,0x4(%esp)
086cfbe6 +0x01d6:  mov    0x8(%ebp),%eax
086cfbe9 +0x01d9:  mov    %eax,(%esp)
086cfbec +0x01dc:  call   086c9638 <_ZN9GameWorld15WriteLogChatMsgEP5CUsercPc>  ; GameWorld::WriteLogChatMsg(CUser*, char, char*)
086cfbf1 +0x01e1:  mov    0x10(%ebp),%eax
086cfbf4 +0x01e4:  movzbl 0xd(%eax),%eax
086cfbf8 +0x01e8:  movzbl %al,%eax
086cfbfb +0x01eb:  cmp    $0x28,%eax
086cfbfe +0x01ee:  ja     086d0e77 <+0x1467>
086cfc04 +0x01f4:  mov    &data#146697e7(.rodata)(,%eax,4),%eax
086cfc0b +0x01fb:  jmp    *%eax
086cfc0d +0x01fd:  mov    0x10(%ebp),%eax
086cfc10 +0x0200:  movzwl 0xe(%eax),%eax
086cfc14 +0x0204:  movzwl %ax,%eax
086cfc17 +0x0207:  mov    %eax,0x4(%esp)
086cfc1b +0x020b:  mov    0x8(%ebp),%eax
086cfc1e +0x020e:  mov    %eax,(%esp)
086cfc21 +0x0211:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
086cfc26 +0x0216:  mov    %eax,-0x64(%ebp)
086cfc29 +0x0219:  cmpl   $0x0,-0x64(%ebp)
086cfc2d +0x021d:  je     086d01c5 <+0x7b5>
086cfc33 +0x0223:  lea    -0xa0(%ebp),%eax
086cfc39 +0x0229:  mov    %eax,(%esp)
086cfc3c +0x022c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086cfc41 +0x0231:  movl   $0xffffffff,0x4(%esp)
086cfc49 +0x0239:  mov    0xc(%ebp),%eax
086cfc4c +0x023c:  mov    %eax,(%esp)
086cfc4f +0x023f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086cfc54 +0x0244:  mov    %eax,0x4(%esp)
086cfc58 +0x0248:  mov    -0x64(%ebp),%eax
086cfc5b +0x024b:  mov    %eax,(%esp)
086cfc5e +0x024e:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
086cfc63 +0x0253:  test   %al,%al
086cfc65 +0x0255:  jne    086cfc8d <+0x27d>
086cfc67 +0x0257:  movl   $0xffffffff,0x4(%esp)
086cfc6f +0x025f:  mov    -0x64(%ebp),%eax
086cfc72 +0x0262:  mov    %eax,(%esp)
086cfc75 +0x0265:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086cfc7a +0x026a:  mov    %eax,0x4(%esp)
086cfc7e +0x026e:  mov    0xc(%ebp),%eax
086cfc81 +0x0271:  mov    %eax,(%esp)
086cfc84 +0x0274:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
086cfc89 +0x0279:  test   %al,%al
086cfc8b +0x027b:  je     086cfc94 <+0x284>
086cfc8d +0x027d:  mov    $0x1,%eax
086cfc92 +0x0282:  jmp    086cfc99 <+0x289>
086cfc94 +0x0284:  mov    $0x0,%eax
086cfc99 +0x0289:  test   %al,%al
086cfc9b +0x028b:  je     086cfe33 <+0x423>
086cfca1 +0x0291:  movl   $0x173,0x8(%esp)
086cfca9 +0x0299:  movl   $0x0,0x4(%esp)
086cfcb1 +0x02a1:  lea    -0xa0(%ebp),%eax
086cfcb7 +0x02a7:  mov    %eax,(%esp)
086cfcba +0x02aa:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086cfcbf +0x02af:  mov    0x10(%ebp),%eax
086cfcc2 +0x02b2:  movzbl 0xd(%eax),%eax
086cfcc6 +0x02b6:  movzbl %al,%eax
086cfcc9 +0x02b9:  mov    %eax,0x4(%esp)
086cfccd +0x02bd:  lea    -0xa0(%ebp),%eax
086cfcd3 +0x02c3:  mov    %eax,(%esp)
086cfcd6 +0x02c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cfcdb +0x02cb:  movl   $0x4d,0x4(%esp)
086cfce3 +0x02d3:  lea    -0xa0(%ebp),%eax
086cfce9 +0x02d9:  mov    %eax,(%esp)
086cfcec +0x02dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cfcf1 +0x02e1:  mov    -0x64(%ebp),%eax
086cfcf4 +0x02e4:  mov    %eax,(%esp)
086cfcf7 +0x02e7:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086cfcfc +0x02ec:  mov    %eax,(%esp)
086cfcff +0x02ef:  call   0807e3b0 <_init+0xca8>
086cfd04 +0x02f4:  mov    %eax,-0x5c(%ebp)
086cfd07 +0x02f7:  mov    -0x5c(%ebp),%eax
086cfd0a +0x02fa:  mov    %eax,0x4(%esp)
086cfd0e +0x02fe:  lea    -0xa0(%ebp),%eax
086cfd14 +0x0304:  mov    %eax,(%esp)
086cfd17 +0x0307:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086cfd1c +0x030c:  mov    -0x64(%ebp),%eax
086cfd1f +0x030f:  mov    %eax,(%esp)
086cfd22 +0x0312:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086cfd27 +0x0317:  mov    -0x5c(%ebp),%edx
086cfd2a +0x031a:  mov    %edx,0x8(%esp)
086cfd2e +0x031e:  mov    %eax,0x4(%esp)
086cfd32 +0x0322:  lea    -0xa0(%ebp),%eax
086cfd38 +0x0328:  mov    %eax,(%esp)
086cfd3b +0x032b:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086cfd40 +0x0330:  movl   $0x0,0x4(%esp)
086cfd48 +0x0338:  lea    -0xa0(%ebp),%eax
086cfd4e +0x033e:  mov    %eax,(%esp)
086cfd51 +0x0341:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cfd56 +0x0346:  mov    0x10(%ebp),%eax
086cfd59 +0x0349:  mov    0x14(%eax),%eax
086cfd5c +0x034c:  mov    %eax,0x4(%esp)
086cfd60 +0x0350:  lea    -0xa0(%ebp),%eax
086cfd66 +0x0356:  mov    %eax,(%esp)
086cfd69 +0x0359:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086cfd6e +0x035e:  mov    0x10(%ebp),%eax
086cfd71 +0x0361:  mov    0x14(%eax),%eax
086cfd74 +0x0364:  mov    0x10(%ebp),%edx
086cfd77 +0x0367:  add    $0x18,%edx
086cfd7a +0x036a:  mov    %eax,0x8(%esp)
086cfd7e +0x036e:  mov    %edx,0x4(%esp)
086cfd82 +0x0372:  lea    -0xa0(%ebp),%eax
086cfd88 +0x0378:  mov    %eax,(%esp)
086cfd8b +0x037b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086cfd90 +0x0380:  mov    0x10(%ebp),%eax
086cfd93 +0x0383:  movzbl 0x13b(%eax),%eax
086cfd9a +0x038a:  movzbl %al,%eax
086cfd9d +0x038d:  mov    %eax,0x4(%esp)
086cfda1 +0x0391:  lea    -0xa0(%ebp),%eax
086cfda7 +0x0397:  mov    %eax,(%esp)
086cfdaa +0x039a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cfdaf +0x039f:  movl   $0x0,-0x58(%ebp)
086cfdb6 +0x03a6:  jmp    086cfde7 <+0x3d7>
086cfdb8 +0x03a8:  mov    -0x58(%ebp),%eax
086cfdbb +0x03ab:  imul   $0x68,%eax,%eax
086cfdbe +0x03ae:  add    $0x130,%eax
086cfdc3 +0x03b3:  add    0x10(%ebp),%eax
086cfdc6 +0x03b6:  add    $0xc,%eax
086cfdc9 +0x03b9:  movl   $0x68,0x8(%esp)
086cfdd1 +0x03c1:  mov    %eax,0x4(%esp)
086cfdd5 +0x03c5:  lea    -0xa0(%ebp),%eax
086cfddb +0x03cb:  mov    %eax,(%esp)
086cfdde +0x03ce:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086cfde3 +0x03d3:  addl   $0x1,-0x58(%ebp)
086cfde7 +0x03d7:  mov    0x10(%ebp),%eax
086cfdea +0x03da:  movzbl 0x13b(%eax),%eax
086cfdf1 +0x03e1:  movzbl %al,%eax
086cfdf4 +0x03e4:  cmp    -0x58(%ebp),%eax
086cfdf7 +0x03e7:  setg   %al
086cfdfa +0x03ea:  test   %al,%al
086cfdfc +0x03ec:  jne    086cfdb8 <+0x3a8>
086cfdfe +0x03ee:  movl   $0x1,0x4(%esp)
086cfe06 +0x03f6:  lea    -0xa0(%ebp),%eax
086cfe0c +0x03fc:  mov    %eax,(%esp)
086cfe0f +0x03ff:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086cfe14 +0x0404:  lea    -0xa0(%ebp),%eax
086cfe1a +0x040a:  mov    %eax,0x4(%esp)
086cfe1e +0x040e:  mov    0xc(%ebp),%eax
086cfe21 +0x0411:  mov    %eax,(%esp)
086cfe24 +0x0414:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086cfe29 +0x0419:  mov    $0x0,%ebx
086cfe2e +0x041e:  jmp    086d01b0 <+0x7a0>
086cfe33 +0x0423:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086cfe38 +0x0428:  mov    %eax,(%esp)
086cfe3b +0x042b:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
086cfe40 +0x0430:  test   %al,%al
086cfe42 +0x0432:  je     086cfe67 <+0x457>
086cfe44 +0x0434:  mov    0xc(%ebp),%eax
086cfe47 +0x0437:  mov    %eax,(%esp)
086cfe4a +0x043a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086cfe4f +0x043f:  mov    %eax,%ebx
086cfe51 +0x0441:  mov    -0x64(%ebp),%eax
086cfe54 +0x0444:  mov    %eax,(%esp)
086cfe57 +0x0447:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086cfe5c +0x044c:  cmp    %eax,%ebx
086cfe5e +0x044e:  je     086cfe67 <+0x457>
086cfe60 +0x0450:  mov    $0x1,%eax
086cfe65 +0x0455:  jmp    086cfe6c <+0x45c>
086cfe67 +0x0457:  mov    $0x0,%eax
086cfe6c +0x045c:  test   %al,%al
086cfe6e +0x045e:  je     086d0006 <+0x5f6>
086cfe74 +0x0464:  movl   $0x173,0x8(%esp)
086cfe7c +0x046c:  movl   $0x0,0x4(%esp)
086cfe84 +0x0474:  lea    -0xa0(%ebp),%eax
086cfe8a +0x047a:  mov    %eax,(%esp)
086cfe8d +0x047d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086cfe92 +0x0482:  mov    0x10(%ebp),%eax
086cfe95 +0x0485:  movzbl 0xd(%eax),%eax
086cfe99 +0x0489:  movzbl %al,%eax
086cfe9c +0x048c:  mov    %eax,0x4(%esp)
086cfea0 +0x0490:  lea    -0xa0(%ebp),%eax
086cfea6 +0x0496:  mov    %eax,(%esp)
086cfea9 +0x0499:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cfeae +0x049e:  movl   $0x15,0x4(%esp)
086cfeb6 +0x04a6:  lea    -0xa0(%ebp),%eax
086cfebc +0x04ac:  mov    %eax,(%esp)
086cfebf +0x04af:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cfec4 +0x04b4:  mov    -0x64(%ebp),%eax
086cfec7 +0x04b7:  mov    %eax,(%esp)
086cfeca +0x04ba:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086cfecf +0x04bf:  mov    %eax,(%esp)
086cfed2 +0x04c2:  call   0807e3b0 <_init+0xca8>
086cfed7 +0x04c7:  mov    %eax,-0x54(%ebp)
086cfeda +0x04ca:  mov    -0x54(%ebp),%eax
086cfedd +0x04cd:  mov    %eax,0x4(%esp)
086cfee1 +0x04d1:  lea    -0xa0(%ebp),%eax
086cfee7 +0x04d7:  mov    %eax,(%esp)
086cfeea +0x04da:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086cfeef +0x04df:  mov    -0x64(%ebp),%eax
086cfef2 +0x04e2:  mov    %eax,(%esp)
086cfef5 +0x04e5:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086cfefa +0x04ea:  mov    -0x54(%ebp),%edx
086cfefd +0x04ed:  mov    %edx,0x8(%esp)
086cff01 +0x04f1:  mov    %eax,0x4(%esp)
086cff05 +0x04f5:  lea    -0xa0(%ebp),%eax
086cff0b +0x04fb:  mov    %eax,(%esp)
086cff0e +0x04fe:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086cff13 +0x0503:  movl   $0x0,0x4(%esp)
086cff1b +0x050b:  lea    -0xa0(%ebp),%eax
086cff21 +0x0511:  mov    %eax,(%esp)
086cff24 +0x0514:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cff29 +0x0519:  mov    0x10(%ebp),%eax
086cff2c +0x051c:  mov    0x14(%eax),%eax
086cff2f +0x051f:  mov    %eax,0x4(%esp)
086cff33 +0x0523:  lea    -0xa0(%ebp),%eax
086cff39 +0x0529:  mov    %eax,(%esp)
086cff3c +0x052c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086cff41 +0x0531:  mov    0x10(%ebp),%eax
086cff44 +0x0534:  mov    0x14(%eax),%eax
086cff47 +0x0537:  mov    0x10(%ebp),%edx
086cff4a +0x053a:  add    $0x18,%edx
086cff4d +0x053d:  mov    %eax,0x8(%esp)
086cff51 +0x0541:  mov    %edx,0x4(%esp)
086cff55 +0x0545:  lea    -0xa0(%ebp),%eax
086cff5b +0x054b:  mov    %eax,(%esp)
086cff5e +0x054e:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086cff63 +0x0553:  mov    0x10(%ebp),%eax
086cff66 +0x0556:  movzbl 0x13b(%eax),%eax
086cff6d +0x055d:  movzbl %al,%eax
086cff70 +0x0560:  mov    %eax,0x4(%esp)
086cff74 +0x0564:  lea    -0xa0(%ebp),%eax
086cff7a +0x056a:  mov    %eax,(%esp)
086cff7d +0x056d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cff82 +0x0572:  movl   $0x0,-0x50(%ebp)
086cff89 +0x0579:  jmp    086cffba <+0x5aa>
086cff8b +0x057b:  mov    -0x50(%ebp),%eax
086cff8e +0x057e:  imul   $0x68,%eax,%eax
086cff91 +0x0581:  add    $0x130,%eax
086cff96 +0x0586:  add    0x10(%ebp),%eax
086cff99 +0x0589:  add    $0xc,%eax
086cff9c +0x058c:  movl   $0x68,0x8(%esp)
086cffa4 +0x0594:  mov    %eax,0x4(%esp)
086cffa8 +0x0598:  lea    -0xa0(%ebp),%eax
086cffae +0x059e:  mov    %eax,(%esp)
086cffb1 +0x05a1:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086cffb6 +0x05a6:  addl   $0x1,-0x50(%ebp)
086cffba +0x05aa:  mov    0x10(%ebp),%eax
086cffbd +0x05ad:  movzbl 0x13b(%eax),%eax
086cffc4 +0x05b4:  movzbl %al,%eax
086cffc7 +0x05b7:  cmp    -0x50(%ebp),%eax
086cffca +0x05ba:  setg   %al
086cffcd +0x05bd:  test   %al,%al
086cffcf +0x05bf:  jne    086cff8b <+0x57b>
086cffd1 +0x05c1:  movl   $0x1,0x4(%esp)
086cffd9 +0x05c9:  lea    -0xa0(%ebp),%eax
086cffdf +0x05cf:  mov    %eax,(%esp)
086cffe2 +0x05d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086cffe7 +0x05d7:  lea    -0xa0(%ebp),%eax
086cffed +0x05dd:  mov    %eax,0x4(%esp)
086cfff1 +0x05e1:  mov    0xc(%ebp),%eax
086cfff4 +0x05e4:  mov    %eax,(%esp)
086cfff7 +0x05e7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086cfffc +0x05ec:  mov    $0x0,%ebx
086d0001 +0x05f1:  jmp    086d01b0 <+0x7a0>
086d0006 +0x05f6:  movl   $0x173,0x8(%esp)
086d000e +0x05fe:  movl   $0x0,0x4(%esp)
086d0016 +0x0606:  lea    -0xa0(%ebp),%eax
086d001c +0x060c:  mov    %eax,(%esp)
086d001f +0x060f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086d0024 +0x0614:  mov    0x10(%ebp),%eax
086d0027 +0x0617:  movzbl 0xd(%eax),%eax
086d002b +0x061b:  movzbl %al,%eax
086d002e +0x061e:  mov    %eax,0x4(%esp)
086d0032 +0x0622:  lea    -0xa0(%ebp),%eax
086d0038 +0x0628:  mov    %eax,(%esp)
086d003b +0x062b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0040 +0x0630:  movl   $0x0,0x4(%esp)
086d0048 +0x0638:  lea    -0xa0(%ebp),%eax
086d004e +0x063e:  mov    %eax,(%esp)
086d0051 +0x0641:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0056 +0x0646:  mov    0xc(%ebp),%eax
086d0059 +0x0649:  mov    %eax,(%esp)
086d005c +0x064c:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086d0061 +0x0651:  mov    %eax,(%esp)
086d0064 +0x0654:  call   0807e3b0 <_init+0xca8>
086d0069 +0x0659:  mov    %eax,-0x60(%ebp)
086d006c +0x065c:  mov    -0x60(%ebp),%eax
086d006f +0x065f:  mov    %eax,0x4(%esp)
086d0073 +0x0663:  lea    -0xa0(%ebp),%eax
086d0079 +0x0669:  mov    %eax,(%esp)
086d007c +0x066c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086d0081 +0x0671:  mov    0xc(%ebp),%eax
086d0084 +0x0674:  mov    %eax,(%esp)
086d0087 +0x0677:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086d008c +0x067c:  mov    -0x60(%ebp),%edx
086d008f +0x067f:  mov    %edx,0x8(%esp)
086d0093 +0x0683:  mov    %eax,0x4(%esp)
086d0097 +0x0687:  lea    -0xa0(%ebp),%eax
086d009d +0x068d:  mov    %eax,(%esp)
086d00a0 +0x0690:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086d00a5 +0x0695:  movl   $0x0,0x4(%esp)
086d00ad +0x069d:  lea    -0xa0(%ebp),%eax
086d00b3 +0x06a3:  mov    %eax,(%esp)
086d00b6 +0x06a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d00bb +0x06ab:  mov    0x10(%ebp),%eax
086d00be +0x06ae:  mov    0x14(%eax),%eax
086d00c1 +0x06b1:  mov    %eax,0x4(%esp)
086d00c5 +0x06b5:  lea    -0xa0(%ebp),%eax
086d00cb +0x06bb:  mov    %eax,(%esp)
086d00ce +0x06be:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086d00d3 +0x06c3:  mov    0x10(%ebp),%eax
086d00d6 +0x06c6:  mov    0x14(%eax),%eax
086d00d9 +0x06c9:  mov    0x10(%ebp),%edx
086d00dc +0x06cc:  add    $0x18,%edx
086d00df +0x06cf:  mov    %eax,0x8(%esp)
086d00e3 +0x06d3:  mov    %edx,0x4(%esp)
086d00e7 +0x06d7:  lea    -0xa0(%ebp),%eax
086d00ed +0x06dd:  mov    %eax,(%esp)
086d00f0 +0x06e0:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086d00f5 +0x06e5:  mov    0x10(%ebp),%eax
086d00f8 +0x06e8:  movzbl 0x13b(%eax),%eax
086d00ff +0x06ef:  movzbl %al,%eax
086d0102 +0x06f2:  mov    %eax,0x4(%esp)
086d0106 +0x06f6:  lea    -0xa0(%ebp),%eax
086d010c +0x06fc:  mov    %eax,(%esp)
086d010f +0x06ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0114 +0x0704:  movl   $0x0,-0x4c(%ebp)
086d011b +0x070b:  jmp    086d014c <+0x73c>
086d011d +0x070d:  mov    -0x4c(%ebp),%eax
086d0120 +0x0710:  imul   $0x68,%eax,%eax
086d0123 +0x0713:  add    $0x130,%eax
086d0128 +0x0718:  add    0x10(%ebp),%eax
086d012b +0x071b:  add    $0xc,%eax
086d012e +0x071e:  movl   $0x68,0x8(%esp)
086d0136 +0x0726:  mov    %eax,0x4(%esp)
086d013a +0x072a:  lea    -0xa0(%ebp),%eax
086d0140 +0x0730:  mov    %eax,(%esp)
086d0143 +0x0733:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086d0148 +0x0738:  addl   $0x1,-0x4c(%ebp)
086d014c +0x073c:  mov    0x10(%ebp),%eax
086d014f +0x073f:  movzbl 0x13b(%eax),%eax
086d0156 +0x0746:  movzbl %al,%eax
086d0159 +0x0749:  cmp    -0x4c(%ebp),%eax
086d015c +0x074c:  setg   %al
086d015f +0x074f:  test   %al,%al
086d0161 +0x0751:  jne    086d011d <+0x70d>
086d0163 +0x0753:  movl   $0x1,0x4(%esp)
086d016b +0x075b:  lea    -0xa0(%ebp),%eax
086d0171 +0x0761:  mov    %eax,(%esp)
086d0174 +0x0764:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086d0179 +0x0769:  lea    -0xa0(%ebp),%eax
086d017f +0x076f:  mov    %eax,0x4(%esp)
086d0183 +0x0773:  mov    -0x64(%ebp),%eax
086d0186 +0x0776:  mov    %eax,(%esp)
086d0189 +0x0779:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086d018e +0x077e:  mov    $0x1,%ebx
086d0193 +0x0783:  jmp    086d01b0 <+0x7a0>
086d0195 +0x0785:  mov    %edx,%ebx
086d0197 +0x0787:  mov    %eax,%esi
086d0199 +0x0789:  lea    -0xa0(%ebp),%eax
086d019f +0x078f:  mov    %eax,(%esp)
086d01a2 +0x0792:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086d01a7 +0x0797:  mov    %esi,%eax
086d01a9 +0x0799:  mov    %ebx,%edx
086d01ab +0x079b:  jmp    086d0e59 <+0x1449>
086d01b0 +0x07a0:  lea    -0xa0(%ebp),%eax
086d01b6 +0x07a6:  mov    %eax,(%esp)
086d01b9 +0x07a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086d01be +0x07ae:  test   %ebx,%ebx
086d01c0 +0x07b0:  jmp    086d0e8a <+0x147a>
086d01c5 +0x07b5:  lea    -0xa1b(%ebp),%eax
086d01cb +0x07bb:  mov    %eax,(%esp)
086d01ce +0x07be:  call   0822c3e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1a90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1a90
086d01d3 +0x07c3:  mov    0xc(%ebp),%eax
086d01d6 +0x07c6:  mov    %eax,(%esp)
086d01d9 +0x07c9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086d01de +0x07ce:  mov    %eax,-0xa08(%ebp)
086d01e4 +0x07d4:  mov    0x10(%ebp),%eax
086d01e7 +0x07d7:  mov    0x10(%eax),%eax
086d01ea +0x07da:  mov    %eax,-0xa04(%ebp)
086d01f0 +0x07e0:  mov    0x10(%ebp),%eax
086d01f3 +0x07e3:  mov    0x14(%eax),%eax
086d01f6 +0x07e6:  mov    %al,-0x8a8(%ebp)
086d01fc +0x07ec:  mov    0x10(%ebp),%eax
086d01ff +0x07ef:  mov    0x14(%eax),%eax
086d0202 +0x07f2:  mov    0x10(%ebp),%edx
086d0205 +0x07f5:  add    $0x18,%edx
086d0208 +0x07f8:  mov    %eax,0x8(%esp)
086d020c +0x07fc:  mov    %edx,0x4(%esp)
086d0210 +0x0800:  lea    -0xa1b(%ebp),%eax
086d0216 +0x0806:  add    $0x174,%eax
086d021b +0x080b:  mov    %eax,(%esp)
086d021e +0x080e:  call   0807d8a0 <_init+0x198>
086d0223 +0x0813:  mov    0x10(%ebp),%eax
086d0226 +0x0816:  mov    0x118(%eax),%eax
086d022c +0x081c:  mov    %al,-0xa00(%ebp)
086d0232 +0x0822:  mov    0x10(%ebp),%eax
086d0235 +0x0825:  mov    0x118(%eax),%eax
086d023b +0x082b:  mov    0x10(%ebp),%edx
086d023e +0x082e:  add    $0x11c,%edx
086d0244 +0x0834:  mov    %eax,0x8(%esp)
086d0248 +0x0838:  mov    %edx,0x4(%esp)
086d024c +0x083c:  lea    -0xa1b(%ebp),%eax
086d0252 +0x0842:  add    $0x1c,%eax
086d0255 +0x0845:  mov    %eax,(%esp)
086d0258 +0x0848:  call   0807d8a0 <_init+0x198>
086d025d +0x084d:  mov    0x10(%ebp),%eax
086d0260 +0x0850:  movzbl 0xd(%eax),%eax
086d0264 +0x0854:  movzbl %al,%eax
086d0267 +0x0857:  mov    %eax,-0xa11(%ebp)
086d026d +0x085d:  mov    0x10(%ebp),%eax
086d0270 +0x0860:  movzbl 0x13b(%eax),%eax
086d0277 +0x0867:  mov    %al,-0x9e1(%ebp)
086d027d +0x086d:  movl   $0x0,-0x44(%ebp)
086d0284 +0x0874:  jmp    086d02c3 <+0x8b3>
086d0286 +0x0876:  mov    -0x44(%ebp),%eax
086d0289 +0x0879:  imul   $0x68,%eax,%eax
086d028c +0x087c:  add    $0x130,%eax
086d0291 +0x0881:  add    0x10(%ebp),%eax
086d0294 +0x0884:  lea    0xc(%eax),%edx
086d0297 +0x0887:  mov    -0x44(%ebp),%ecx
086d029a +0x088a:  lea    -0xa1b(%ebp),%eax
086d02a0 +0x0890:  imul   $0x68,%ecx,%ecx
086d02a3 +0x0893:  add    $0x30,%ecx
086d02a6 +0x0896:  add    %ecx,%eax
086d02a8 +0x0898:  add    $0xb,%eax
086d02ab +0x089b:  movl   $0x68,0x8(%esp)
086d02b3 +0x08a3:  mov    %edx,0x4(%esp)
086d02b7 +0x08a7:  mov    %eax,(%esp)
086d02ba +0x08aa:  call   0807d8a0 <_init+0x198>
086d02bf +0x08af:  addl   $0x1,-0x44(%ebp)
086d02c3 +0x08b3:  mov    0x10(%ebp),%eax
086d02c6 +0x08b6:  movzbl 0x13b(%eax),%eax
086d02cd +0x08bd:  movzbl %al,%eax
086d02d0 +0x08c0:  cmp    -0x44(%ebp),%eax
086d02d3 +0x08c3:  setg   %al
086d02d6 +0x08c6:  test   %al,%al
086d02d8 +0x08c8:  jne    086d0286 <+0x876>
086d02da +0x08ca:  mov    0x10(%ebp),%eax
086d02dd +0x08cd:  mov    0x14(%eax),%eax
086d02e0 +0x08d0:  add    $0x174,%ax
086d02e4 +0x08d4:  mov    %ax,-0xa19(%ebp)
086d02eb +0x08db:  movzwl -0xa19(%ebp),%eax
086d02f2 +0x08e2:  movzwl %ax,%eax
086d02f5 +0x08e5:  mov    %eax,-0x48(%ebp)
086d02f8 +0x08e8:  lea    -0xa1b(%ebp),%ebx
086d02fe +0x08ee:  mov    0xc(%ebp),%eax
086d0301 +0x08f1:  mov    %eax,(%esp)
086d0304 +0x08f4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086d0309 +0x08f9:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086d030f +0x08ff:  mov    %eax,0x4(%esp)
086d0313 +0x0903:  mov    %edx,(%esp)
086d0316 +0x0906:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086d031b +0x090b:  mov    -0x48(%ebp),%edx
086d031e +0x090e:  mov    %edx,0x8(%esp)
086d0322 +0x0912:  mov    %ebx,0x4(%esp)
086d0326 +0x0916:  mov    %eax,(%esp)
086d0329 +0x0919:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
086d032e +0x091e:  jmp    086d0e8a <+0x147a>
086d0333 +0x0923:  cmpl   $0x0,0xc(%ebp)
086d0337 +0x0927:  je     086d0e8a <+0x147a>
086d033d +0x092d:  mov    0x14(%ebp),%eax
086d0340 +0x0930:  mov    %eax,0x10(%esp)
086d0344 +0x0934:  mov    0x10(%ebp),%eax
086d0347 +0x0937:  mov    %eax,0xc(%esp)
086d034b +0x093b:  mov    0xc(%ebp),%eax
086d034e +0x093e:  mov    %eax,0x8(%esp)
086d0352 +0x0942:  lea    -0x8c(%ebp),%eax
086d0358 +0x0948:  mov    %eax,0x4(%esp)
086d035c +0x094c:  mov    0x8(%ebp),%eax
086d035f +0x094f:  mov    %eax,(%esp)
086d0362 +0x0952:  call   086d0ea4 <_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
086d0367 +0x0957:  mov    0xc(%ebp),%eax
086d036a +0x095a:  mov    %eax,(%esp)
086d036d +0x095d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086d0372 +0x0962:  mov    %eax,-0x40(%ebp)
086d0375 +0x0965:  cmpl   $0x0,-0x40(%ebp)
086d0379 +0x0969:  je     086d0e7d <+0x146d>
086d037f +0x096f:  lea    -0x8c(%ebp),%eax
086d0385 +0x0975:  mov    %eax,0x4(%esp)
086d0389 +0x0979:  mov    -0x40(%ebp),%eax
086d038c +0x097c:  mov    %eax,(%esp)
086d038f +0x097f:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
086d0394 +0x0984:  jmp    086d0e8a <+0x147a>
086d0399 +0x0989:  movl   $0x0,-0x3c(%ebp)
086d03a0 +0x0990:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086d03a5 +0x0995:  mov    0xc(%ebp),%edx
086d03a8 +0x0998:  mov    %edx,0x4(%esp)
086d03ac +0x099c:  mov    %eax,(%esp)
086d03af +0x099f:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086d03b4 +0x09a4:  mov    %eax,-0x3c(%ebp)
086d03b7 +0x09a7:  cmpl   $0x0,-0x3c(%ebp)
086d03bb +0x09ab:  sete   %al
086d03be +0x09ae:  test   %al,%al
086d03c0 +0x09b0:  je     086d03fd <+0x9ed>
086d03c2 +0x09b2:  movl   $0x5,0xc(%esp)
086d03ca +0x09ba:  movl   $0x1934,0x8(%esp)
086d03d2 +0x09c2:  movl   $&_ZZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x4(%esp)
086d03da +0x09ca:  lea    -0x7c(%ebp),%eax
086d03dd +0x09cd:  mov    %eax,(%esp)
086d03e0 +0x09d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086d03e5 +0x09d5:  movl   $"getUserVillage() call failed",0x4(%esp)
086d03ed +0x09dd:  lea    -0x7c(%ebp),%eax
086d03f0 +0x09e0:  mov    %eax,(%esp)
086d03f3 +0x09e3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086d03f8 +0x09e8:  jmp    086d0e8a <+0x147a>
086d03fd +0x09ed:  mov    -0x3c(%ebp),%eax
086d0400 +0x09f0:  mov    %eax,(%esp)
086d0403 +0x09f3:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
086d0408 +0x09f8:  mov    %eax,%ebx
086d040a +0x09fa:  movl   $0x0,0x4(%esp)
086d0412 +0x0a02:  mov    0xc(%ebp),%eax
086d0415 +0x0a05:  mov    %eax,(%esp)
086d0418 +0x0a08:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086d041d +0x0a0d:  cmp    %eax,%ebx
086d041f +0x0a0f:  je     086d043d <+0xa2d>
086d0421 +0x0a11:  mov    0xc(%ebp),%eax
086d0424 +0x0a14:  mov    %eax,(%esp)
086d0427 +0x0a17:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086d042c +0x0a1c:  cmp    $0x8,%al
086d042e +0x0a1e:  je     086d043d <+0xa2d>
086d0430 +0x0a20:  cmpl   $0x72,0x14(%ebp)
086d0434 +0x0a24:  je     086d043d <+0xa2d>
086d0436 +0x0a26:  mov    $0x1,%eax
086d043b +0x0a2b:  jmp    086d0442 <+0xa32>
086d043d +0x0a2d:  mov    $0x0,%eax
086d0442 +0x0a32:  test   %al,%al
086d0444 +0x0a34:  je     086d0569 <+0xb59>
086d044a +0x0a3a:  mov    0xc(%ebp),%eax
086d044d +0x0a3d:  mov    %eax,(%esp)
086d0450 +0x0a40:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086d0455 +0x0a45:  mov    %eax,%ebx
086d0457 +0x0a47:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086d045c +0x0a4c:  add    $0x68,%eax
086d045f +0x0a4f:  mov    %ebx,0x4(%esp)
086d0463 +0x0a53:  mov    %eax,(%esp)
086d0466 +0x0a56:  call   086d17ec <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d
086d046b +0x0a5b:  mov    %eax,%ebx
086d046d +0x0a5d:  lea    -0x65(%ebp),%eax
086d0470 +0x0a60:  mov    %eax,(%esp)
086d0473 +0x0a63:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086d0478 +0x0a68:  mov    0x10(%ebp),%eax
086d047b +0x0a6b:  lea    0x18(%eax),%edx
086d047e +0x0a6e:  lea    -0x65(%ebp),%eax
086d0481 +0x0a71:  mov    %eax,0x8(%esp)
086d0485 +0x0a75:  mov    %edx,0x4(%esp)
086d0489 +0x0a79:  lea    -0x6c(%ebp),%eax
086d048c +0x0a7c:  mov    %eax,(%esp)
086d048f +0x0a7f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d0494 +0x0a84:  lea    -0x6c(%ebp),%eax
086d0497 +0x0a87:  mov    %eax,0x4(%esp)
086d049b +0x0a8b:  mov    0xc(%ebp),%eax
086d049e +0x0a8e:  mov    %eax,(%esp)
086d04a1 +0x0a91:  call   086887c4 <_ZN5CUser20isDuplicationMessageERKSs>  ; CUser::isDuplicationMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d04a6 +0x0a96:  test   %al,%al
086d04a8 +0x0a98:  je     086d04bc <+0xaac>
086d04aa +0x0a9a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086d04af +0x0a9f:  add    $0x68,%eax
086d04b2 +0x0aa2:  mov    %eax,(%esp)
086d04b5 +0x0aa5:  call   086d18ba <_GLOBAL__I_MAX_VILLAGE_NUM+0xeb>  ; global constructors keyed to MAX_VILLAGE_NUM+0xeb
086d04ba +0x0aaa:  jmp    086d04c1 <+0xab1>
086d04bc +0x0aac:  mov    $0x1,%eax
086d04c1 +0x0ab1:  imul   %ebx,%eax
086d04c4 +0x0ab4:  mov    %eax,0x4(%esp)
086d04c8 +0x0ab8:  mov    0xc(%ebp),%eax
086d04cb +0x0abb:  mov    %eax,(%esp)
086d04ce +0x0abe:  call   086d208e <_GLOBAL__I_MAX_VILLAGE_NUM+0x8bf>  ; global constructors keyed to MAX_VILLAGE_NUM+0x8bf
086d04d3 +0x0ac3:  lea    -0x6c(%ebp),%eax
086d04d6 +0x0ac6:  mov    %eax,(%esp)
086d04d9 +0x0ac9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d04de +0x0ace:  jmp    086d050d <+0xafd>
086d04e0 +0x0ad0:  mov    %edx,%ebx
086d04e2 +0x0ad2:  mov    %eax,%esi
086d04e4 +0x0ad4:  lea    -0x6c(%ebp),%eax
086d04e7 +0x0ad7:  mov    %eax,(%esp)
086d04ea +0x0ada:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d04ef +0x0adf:  mov    %esi,%eax
086d04f1 +0x0ae1:  mov    %ebx,%edx
086d04f3 +0x0ae3:  jmp    086d04f5 <+0xae5>
086d04f5 +0x0ae5:  mov    %edx,%ebx
086d04f7 +0x0ae7:  mov    %eax,%esi
086d04f9 +0x0ae9:  lea    -0x65(%ebp),%eax
086d04fc +0x0aec:  mov    %eax,(%esp)
086d04ff +0x0aef:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086d0504 +0x0af4:  mov    %esi,%eax
086d0506 +0x0af6:  mov    %ebx,%edx
086d0508 +0x0af8:  jmp    086d0e59 <+0x1449>
086d050d +0x0afd:  lea    -0x65(%ebp),%eax
086d0510 +0x0b00:  mov    %eax,(%esp)
086d0513 +0x0b03:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086d0518 +0x0b08:  mov    0xc(%ebp),%eax
086d051b +0x0b0b:  mov    %eax,(%esp)
086d051e +0x0b0e:  call   086d20aa <_GLOBAL__I_MAX_VILLAGE_NUM+0x8db>  ; global constructors keyed to MAX_VILLAGE_NUM+0x8db
086d0523 +0x0b13:  mov    %eax,%ebx
086d0525 +0x0b15:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086d052a +0x0b1a:  add    $0x68,%eax
086d052d +0x0b1d:  mov    %eax,(%esp)
086d0530 +0x0b20:  call   086d18ac <_GLOBAL__I_MAX_VILLAGE_NUM+0xdd>  ; global constructors keyed to MAX_VILLAGE_NUM+0xdd
086d0535 +0x0b25:  cmp    %eax,%ebx
086d0537 +0x0b27:  setg   %al
086d053a +0x0b2a:  test   %al,%al
086d053c +0x0b2c:  je     086d0569 <+0xb59>
086d053e +0x0b2e:  movl   $0x0,0x4(%esp)
086d0546 +0x0b36:  mov    0xc(%ebp),%eax
086d0549 +0x0b39:  mov    %eax,(%esp)
086d054c +0x0b3c:  call   08469a5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x13f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x13f
086d0551 +0x0b41:  movl   $0x0,0x4(%esp)
086d0559 +0x0b49:  mov    0xc(%ebp),%eax
086d055c +0x0b4c:  mov    %eax,(%esp)
086d055f +0x0b4f:  call   086802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>  ; CUser::reqHumanCertify4ClearMap(bool)
086d0564 +0x0b54:  jmp    086d0e8a <+0x147a>
086d0569 +0x0b59:  cmpl   $0x0,0xc(%ebp)
086d056d +0x0b5d:  je     086d0e8a <+0x147a>
086d0573 +0x0b63:  mov    0x14(%ebp),%eax
086d0576 +0x0b66:  mov    %eax,0x10(%esp)
086d057a +0x0b6a:  mov    0x10(%ebp),%eax
086d057d +0x0b6d:  mov    %eax,0xc(%esp)
086d0581 +0x0b71:  mov    0xc(%ebp),%eax
086d0584 +0x0b74:  mov    %eax,0x8(%esp)
086d0588 +0x0b78:  lea    -0x8c(%ebp),%eax
086d058e +0x0b7e:  mov    %eax,0x4(%esp)
086d0592 +0x0b82:  mov    0x8(%ebp),%eax
086d0595 +0x0b85:  mov    %eax,(%esp)
086d0598 +0x0b88:  call   086d0ea4 <_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
086d059d +0x0b8d:  movl   $0x0,0x4(%esp)
086d05a5 +0x0b95:  mov    0xc(%ebp),%eax
086d05a8 +0x0b98:  mov    %eax,(%esp)
086d05ab +0x0b9b:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086d05b0 +0x0ba0:  mov    %eax,%ebx
086d05b2 +0x0ba2:  mov    0xc(%ebp),%eax
086d05b5 +0x0ba5:  mov    %eax,(%esp)
086d05b8 +0x0ba8:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086d05bd +0x0bad:  movsbl %al,%eax
086d05c0 +0x0bb0:  lea    -0x8c(%ebp),%edx
086d05c6 +0x0bb6:  mov    %edx,0xc(%esp)
086d05ca +0x0bba:  mov    %ebx,0x8(%esp)
086d05ce +0x0bbe:  mov    %eax,0x4(%esp)
086d05d2 +0x0bc2:  mov    0x8(%ebp),%eax
086d05d5 +0x0bc5:  mov    %eax,(%esp)
086d05d8 +0x0bc8:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
086d05dd +0x0bcd:  jmp    086d0e8a <+0x147a>
086d05e2 +0x0bd2:  mov    0x14(%ebp),%eax
086d05e5 +0x0bd5:  mov    %eax,0x10(%esp)
086d05e9 +0x0bd9:  mov    0x10(%ebp),%eax
086d05ec +0x0bdc:  mov    %eax,0xc(%esp)
086d05f0 +0x0be0:  mov    0xc(%ebp),%eax
086d05f3 +0x0be3:  mov    %eax,0x8(%esp)
086d05f7 +0x0be7:  lea    -0x8c(%ebp),%eax
086d05fd +0x0bed:  mov    %eax,0x4(%esp)
086d0601 +0x0bf1:  mov    0x8(%ebp),%eax
086d0604 +0x0bf4:  mov    %eax,(%esp)
086d0607 +0x0bf7:  call   086d0ea4 <_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
086d060c +0x0bfc:  lea    -0x8c(%ebp),%eax
086d0612 +0x0c02:  mov    %eax,0x4(%esp)
086d0616 +0x0c06:  mov    0x8(%ebp),%eax
086d0619 +0x0c09:  mov    %eax,(%esp)
086d061c +0x0c0c:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086d0621 +0x0c11:  jmp    086d0e8a <+0x147a>
086d0626 +0x0c16:  cmpl   $0x0,0xc(%ebp)
086d062a +0x0c1a:  je     086d0e8a <+0x147a>
086d0630 +0x0c20:  mov    0x14(%ebp),%eax
086d0633 +0x0c23:  mov    %eax,0x10(%esp)
086d0637 +0x0c27:  mov    0x10(%ebp),%eax
086d063a +0x0c2a:  mov    %eax,0xc(%esp)
086d063e +0x0c2e:  mov    0xc(%ebp),%eax
086d0641 +0x0c31:  mov    %eax,0x8(%esp)
086d0645 +0x0c35:  lea    -0x8c(%ebp),%eax
086d064b +0x0c3b:  mov    %eax,0x4(%esp)
086d064f +0x0c3f:  mov    0x8(%ebp),%eax
086d0652 +0x0c42:  mov    %eax,(%esp)
086d0655 +0x0c45:  call   086d0ea4 <_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
086d065a +0x0c4a:  mov    0xc(%ebp),%eax
086d065d +0x0c4d:  mov    %eax,(%esp)
086d0660 +0x0c50:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
086d0665 +0x0c55:  test   %eax,%eax
086d0667 +0x0c57:  setne  %al
086d066a +0x0c5a:  test   %al,%al
086d066c +0x0c5c:  je     086d0699 <+0xc89>
086d066e +0x0c5e:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086d0673 +0x0c63:  lea    -0x8c(%ebp),%edx
086d0679 +0x0c69:  mov    %edx,0xc(%esp)
086d067d +0x0c6d:  movl   $0x0,0x8(%esp)
086d0685 +0x0c75:  mov    0xc(%ebp),%edx
086d0688 +0x0c78:  mov    %edx,0x4(%esp)
086d068c +0x0c7c:  mov    %eax,(%esp)
086d068f +0x0c7f:  call   082efb54 <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard>  ; pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)
086d0694 +0x0c84:  jmp    086d0e8a <+0x147a>
086d0699 +0x0c89:  mov    0xc(%ebp),%eax
086d069c +0x0c8c:  mov    %eax,(%esp)
086d069f +0x0c8f:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
086d06a4 +0x0c94:  movswl %ax,%ebx
086d06a7 +0x0c97:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086d06ac +0x0c9c:  movl   $0x0,0xc(%esp)
086d06b4 +0x0ca4:  mov    0xc(%ebp),%edx
086d06b7 +0x0ca7:  mov    %edx,0x8(%esp)
086d06bb +0x0cab:  mov    %ebx,0x4(%esp)
086d06bf +0x0caf:  mov    %eax,(%esp)
086d06c2 +0x0cb2:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
086d06c7 +0x0cb7:  mov    %eax,-0x38(%ebp)
086d06ca +0x0cba:  cmpl   $0x0,-0x38(%ebp)
086d06ce +0x0cbe:  je     086d0e80 <+0x1470>
086d06d4 +0x0cc4:  lea    -0x8c(%ebp),%eax
086d06da +0x0cca:  mov    %eax,0x4(%esp)
086d06de +0x0cce:  mov    -0x38(%ebp),%eax
086d06e1 +0x0cd1:  mov    %eax,(%esp)
086d06e4 +0x0cd4:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
086d06e9 +0x0cd9:  jmp    086d0e8a <+0x147a>
086d06ee +0x0cde:  cmpl   $0x0,0xc(%ebp)
086d06f2 +0x0ce2:  je     086d0e8a <+0x147a>
086d06f8 +0x0ce8:  mov    0x14(%ebp),%eax
086d06fb +0x0ceb:  mov    %eax,0x10(%esp)
086d06ff +0x0cef:  mov    0x10(%ebp),%eax
086d0702 +0x0cf2:  mov    %eax,0xc(%esp)
086d0706 +0x0cf6:  mov    0xc(%ebp),%eax
086d0709 +0x0cf9:  mov    %eax,0x8(%esp)
086d070d +0x0cfd:  lea    -0x8c(%ebp),%eax
086d0713 +0x0d03:  mov    %eax,0x4(%esp)
086d0717 +0x0d07:  mov    0x8(%ebp),%eax
086d071a +0x0d0a:  mov    %eax,(%esp)
086d071d +0x0d0d:  call   086d0ea4 <_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
086d0722 +0x0d12:  mov    0xc(%ebp),%eax
086d0725 +0x0d15:  mov    %eax,(%esp)
086d0728 +0x0d18:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
086d072d +0x0d1d:  test   %eax,%eax
086d072f +0x0d1f:  setne  %al
086d0732 +0x0d22:  test   %al,%al
086d0734 +0x0d24:  je     086d0761 <+0xd51>
086d0736 +0x0d26:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086d073b +0x0d2b:  lea    -0x8c(%ebp),%edx
086d0741 +0x0d31:  mov    %edx,0xc(%esp)
086d0745 +0x0d35:  movl   $0x1,0x8(%esp)
086d074d +0x0d3d:  mov    0xc(%ebp),%edx
086d0750 +0x0d40:  mov    %edx,0x4(%esp)
086d0754 +0x0d44:  mov    %eax,(%esp)
086d0757 +0x0d47:  call   082efb54 <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard>  ; pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)
086d075c +0x0d4c:  jmp    086d0e8a <+0x147a>
086d0761 +0x0d51:  mov    0xc(%ebp),%eax
086d0764 +0x0d54:  mov    %eax,(%esp)
086d0767 +0x0d57:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
086d076c +0x0d5c:  movswl %ax,%ebx
086d076f +0x0d5f:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086d0774 +0x0d64:  movl   $0x0,0xc(%esp)
086d077c +0x0d6c:  mov    0xc(%ebp),%edx
086d077f +0x0d6f:  mov    %edx,0x8(%esp)
086d0783 +0x0d73:  mov    %ebx,0x4(%esp)
086d0787 +0x0d77:  mov    %eax,(%esp)
086d078a +0x0d7a:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
086d078f +0x0d7f:  mov    %eax,-0x34(%ebp)
086d0792 +0x0d82:  cmpl   $0x0,-0x34(%ebp)
086d0796 +0x0d86:  je     086d0e83 <+0x1473>
086d079c +0x0d8c:  mov    0xc(%ebp),%eax
086d079f +0x0d8f:  mov    %eax,0x8(%esp)
086d07a3 +0x0d93:  lea    -0x8c(%ebp),%eax
086d07a9 +0x0d99:  mov    %eax,0x4(%esp)
086d07ad +0x0d9d:  mov    -0x34(%ebp),%eax
086d07b0 +0x0da0:  mov    %eax,(%esp)
086d07b3 +0x0da3:  call   085dbe64 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser>  ; PvP_Room::send_to_pvp_team(PacketGuard&, CUser*)
086d07b8 +0x0da8:  jmp    086d0e8a <+0x147a>
086d07bd +0x0dad:  mov    0xc(%ebp),%eax
086d07c0 +0x0db0:  mov    %eax,(%esp)
086d07c3 +0x0db3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086d07c8 +0x0db8:  test   %eax,%eax
086d07ca +0x0dba:  je     086d07e2 <+0xdd2>
086d07cc +0x0dbc:  mov    0xc(%ebp),%eax
086d07cf +0x0dbf:  mov    %eax,(%esp)
086d07d2 +0x0dc2:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086d07d7 +0x0dc7:  test   %eax,%eax
086d07d9 +0x0dc9:  je     086d07e2 <+0xdd2>
086d07db +0x0dcb:  mov    $0x1,%eax
086d07e0 +0x0dd0:  jmp    086d07e7 <+0xdd7>
086d07e2 +0x0dd2:  mov    $0x0,%eax
086d07e7 +0x0dd7:  test   %al,%al
086d07e9 +0x0dd9:  je     086d0918 <+0xf08>
086d07ef +0x0ddf:  lea    -0x540(%ebp),%eax
086d07f5 +0x0de5:  mov    %eax,(%esp)
086d07f8 +0x0de8:  call   086d1a9a <_GLOBAL__I_MAX_VILLAGE_NUM+0x2cb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2cb
086d07fd +0x0ded:  mov    0xc(%ebp),%eax
086d0800 +0x0df0:  mov    %eax,(%esp)
086d0803 +0x0df3:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086d0808 +0x0df8:  mov    %eax,-0x536(%ebp)
086d080e +0x0dfe:  mov    0xc(%ebp),%eax
086d0811 +0x0e01:  mov    %eax,(%esp)
086d0814 +0x0e04:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086d0819 +0x0e09:  mov    %eax,-0x532(%ebp)
086d081f +0x0e0f:  mov    0x10(%ebp),%eax
086d0822 +0x0e12:  mov    0x14(%eax),%eax
086d0825 +0x0e15:  mov    %al,-0x3f5(%ebp)
086d082b +0x0e1b:  mov    0x10(%ebp),%eax
086d082e +0x0e1e:  mov    0x14(%eax),%eax
086d0831 +0x0e21:  mov    0x10(%ebp),%edx
086d0834 +0x0e24:  add    $0x18,%edx
086d0837 +0x0e27:  mov    %eax,0x8(%esp)
086d083b +0x0e2b:  mov    %edx,0x4(%esp)
086d083f +0x0e2f:  lea    -0x540(%ebp),%eax
086d0845 +0x0e35:  add    $0x14c,%eax
086d084a +0x0e3a:  mov    %eax,(%esp)
086d084d +0x0e3d:  call   0807d8a0 <_init+0x198>
086d0852 +0x0e42:  mov    0x10(%ebp),%eax
086d0855 +0x0e45:  movzbl 0x13b(%eax),%eax
086d085c +0x0e4c:  mov    %al,-0x52e(%ebp)
086d0862 +0x0e52:  movl   $0x0,-0x2c(%ebp)
086d0869 +0x0e59:  jmp    086d08a8 <+0xe98>
086d086b +0x0e5b:  mov    -0x2c(%ebp),%eax
086d086e +0x0e5e:  imul   $0x68,%eax,%eax
086d0871 +0x0e61:  add    $0x130,%eax
086d0876 +0x0e66:  add    0x10(%ebp),%eax
086d0879 +0x0e69:  lea    0xc(%eax),%edx
086d087c +0x0e6c:  mov    -0x2c(%ebp),%ecx
086d087f +0x0e6f:  lea    -0x540(%ebp),%eax
086d0885 +0x0e75:  imul   $0x68,%ecx,%ecx
086d0888 +0x0e78:  add    $0x10,%ecx
086d088b +0x0e7b:  add    %ecx,%eax
086d088d +0x0e7d:  add    $0x3,%eax
086d0890 +0x0e80:  movl   $0x68,0x8(%esp)
086d0898 +0x0e88:  mov    %edx,0x4(%esp)
086d089c +0x0e8c:  mov    %eax,(%esp)
086d089f +0x0e8f:  call   0807d8a0 <_init+0x198>
086d08a4 +0x0e94:  addl   $0x1,-0x2c(%ebp)
086d08a8 +0x0e98:  mov    0x10(%ebp),%eax
086d08ab +0x0e9b:  movzbl 0x13b(%eax),%eax
086d08b2 +0x0ea2:  movzbl %al,%eax
086d08b5 +0x0ea5:  cmp    -0x2c(%ebp),%eax
086d08b8 +0x0ea8:  setg   %al
086d08bb +0x0eab:  test   %al,%al
086d08bd +0x0ead:  jne    086d086b <+0xe5b>
086d08bf +0x0eaf:  mov    0x10(%ebp),%eax
086d08c2 +0x0eb2:  mov    0x14(%eax),%eax
086d08c5 +0x0eb5:  add    $0x14c,%ax
086d08c9 +0x0eb9:  mov    %ax,-0x53e(%ebp)
086d08d0 +0x0ec0:  movzwl -0x53e(%ebp),%eax
086d08d7 +0x0ec7:  movzwl %ax,%eax
086d08da +0x0eca:  mov    %eax,-0x30(%ebp)
086d08dd +0x0ecd:  lea    -0x540(%ebp),%ebx
086d08e3 +0x0ed3:  mov    0xc(%ebp),%eax
086d08e6 +0x0ed6:  mov    %eax,(%esp)
086d08e9 +0x0ed9:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086d08ee +0x0ede:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
086d08f4 +0x0ee4:  mov    %eax,0x4(%esp)
086d08f8 +0x0ee8:  mov    %edx,(%esp)
086d08fb +0x0eeb:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
086d0900 +0x0ef0:  mov    -0x30(%ebp),%edx
086d0903 +0x0ef3:  mov    %edx,0x8(%esp)
086d0907 +0x0ef7:  mov    %ebx,0x4(%esp)
086d090b +0x0efb:  mov    %eax,(%esp)
086d090e +0x0efe:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
086d0913 +0x0f03:  jmp    086d0e8a <+0x147a>
086d0918 +0x0f08:  mov    0xc(%ebp),%eax
086d091b +0x0f0b:  mov    %eax,(%esp)
086d091e +0x0f0e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086d0923 +0x0f13:  mov    %eax,%ebx
086d0925 +0x0f15:  mov    0xc(%ebp),%eax
086d0928 +0x0f18:  mov    %eax,(%esp)
086d092b +0x0f1b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086d0930 +0x0f20:  mov    %ebx,0x18(%esp)
086d0934 +0x0f24:  mov    %eax,0x14(%esp)
086d0938 +0x0f28:  movl   $"GUILD_CHAT_HYPER_LINK_ERROR : charac no == %d || guild key == %d ",0x10(%esp)
086d0940 +0x0f30:  movl   $0x19b8,0xc(%esp)
086d0948 +0x0f38:  movl   $&_ZZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x8(%esp)
086d0950 +0x0f40:  movl   $"world.cpp",0x4(%esp)
086d0958 +0x0f48:  movl   $0x1,(%esp)
086d095f +0x0f4f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086d0964 +0x0f54:  jmp    086d0e8a <+0x147a>
086d0969 +0x0f59:  mov    0xc(%ebp),%eax
086d096c +0x0f5c:  mov    %eax,(%esp)
086d096f +0x0f5f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086d0974 +0x0f64:  test   %eax,%eax
086d0976 +0x0f66:  je     086d098e <+0xf7e>
086d0978 +0x0f68:  mov    0xc(%ebp),%eax
086d097b +0x0f6b:  mov    %eax,(%esp)
086d097e +0x0f6e:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086d0983 +0x0f73:  test   %eax,%eax
086d0985 +0x0f75:  je     086d098e <+0xf7e>
086d0987 +0x0f77:  mov    $0x1,%eax
086d098c +0x0f7c:  jmp    086d0993 <+0xf83>
086d098e +0x0f7e:  mov    $0x0,%eax
086d0993 +0x0f83:  test   %al,%al
086d0995 +0x0f85:  je     086d0ab1 <+0x10a1>
086d099b +0x0f8b:  lea    -0x2f4(%ebp),%eax
086d09a1 +0x0f91:  mov    %eax,(%esp)
086d09a4 +0x0f94:  call   086d1c9c <_GLOBAL__I_MAX_VILLAGE_NUM+0x4cd>  ; global constructors keyed to MAX_VILLAGE_NUM+0x4cd
086d09a9 +0x0f99:  mov    0xc(%ebp),%eax
086d09ac +0x0f9c:  mov    %eax,(%esp)
086d09af +0x0f9f:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086d09b4 +0x0fa4:  mov    %eax,-0x2ea(%ebp)
086d09ba +0x0faa:  mov    0x10(%ebp),%eax
086d09bd +0x0fad:  mov    0x14(%eax),%eax
086d09c0 +0x0fb0:  mov    %al,-0x1ad(%ebp)
086d09c6 +0x0fb6:  mov    0x10(%ebp),%eax
086d09c9 +0x0fb9:  mov    0x14(%eax),%eax
086d09cc +0x0fbc:  mov    0x10(%ebp),%edx
086d09cf +0x0fbf:  add    $0x18,%edx
086d09d2 +0x0fc2:  mov    %eax,0x8(%esp)
086d09d6 +0x0fc6:  mov    %edx,0x4(%esp)
086d09da +0x0fca:  lea    -0x2f4(%ebp),%eax
086d09e0 +0x0fd0:  add    $0x148,%eax
086d09e5 +0x0fd5:  mov    %eax,(%esp)
086d09e8 +0x0fd8:  call   0807d8a0 <_init+0x198>
086d09ed +0x0fdd:  mov    0x10(%ebp),%eax
086d09f0 +0x0fe0:  movzbl 0x13b(%eax),%eax
086d09f7 +0x0fe7:  mov    %al,-0x2e6(%ebp)
086d09fd +0x0fed:  movl   $0x0,-0x24(%ebp)
086d0a04 +0x0ff4:  jmp    086d0a41 <+0x1031>
086d0a06 +0x0ff6:  mov    -0x24(%ebp),%eax
086d0a09 +0x0ff9:  imul   $0x68,%eax,%eax
086d0a0c +0x0ffc:  add    $0x130,%eax
086d0a11 +0x1001:  add    0x10(%ebp),%eax
086d0a14 +0x1004:  lea    0xc(%eax),%edx
086d0a17 +0x1007:  mov    -0x24(%ebp),%eax
086d0a1a +0x100a:  lea    -0x2f4(%ebp),%ecx
086d0a20 +0x1010:  imul   $0x68,%eax,%eax
086d0a23 +0x1013:  lea    (%ecx,%eax,1),%eax
086d0a26 +0x1016:  add    $0xf,%eax
086d0a29 +0x1019:  movl   $0x68,0x8(%esp)
086d0a31 +0x1021:  mov    %edx,0x4(%esp)
086d0a35 +0x1025:  mov    %eax,(%esp)
086d0a38 +0x1028:  call   0807d8a0 <_init+0x198>
086d0a3d +0x102d:  addl   $0x1,-0x24(%ebp)
086d0a41 +0x1031:  mov    0x10(%ebp),%eax
086d0a44 +0x1034:  movzbl 0x13b(%eax),%eax
086d0a4b +0x103b:  movzbl %al,%eax
086d0a4e +0x103e:  cmp    -0x24(%ebp),%eax
086d0a51 +0x1041:  setg   %al
086d0a54 +0x1044:  test   %al,%al
086d0a56 +0x1046:  jne    086d0a06 <+0xff6>
086d0a58 +0x1048:  mov    0x10(%ebp),%eax
086d0a5b +0x104b:  mov    0x14(%eax),%eax
086d0a5e +0x104e:  add    $0x148,%ax
086d0a62 +0x1052:  mov    %ax,-0x2f2(%ebp)
086d0a69 +0x1059:  movzwl -0x2f2(%ebp),%eax
086d0a70 +0x1060:  movzwl %ax,%eax
086d0a73 +0x1063:  mov    %eax,-0x28(%ebp)
086d0a76 +0x1066:  lea    -0x2f4(%ebp),%ebx
086d0a7c +0x106c:  mov    0xc(%ebp),%eax
086d0a7f +0x106f:  mov    %eax,(%esp)
086d0a82 +0x1072:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086d0a87 +0x1077:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086d0a8d +0x107d:  mov    %eax,0x4(%esp)
086d0a91 +0x1081:  mov    %edx,(%esp)
086d0a94 +0x1084:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086d0a99 +0x1089:  mov    -0x28(%ebp),%edx
086d0a9c +0x108c:  mov    %edx,0x8(%esp)
086d0aa0 +0x1090:  mov    %ebx,0x4(%esp)
086d0aa4 +0x1094:  mov    %eax,(%esp)
086d0aa7 +0x1097:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
086d0aac +0x109c:  jmp    086d0e8a <+0x147a>
086d0ab1 +0x10a1:  mov    0xc(%ebp),%eax
086d0ab4 +0x10a4:  mov    %eax,(%esp)
086d0ab7 +0x10a7:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086d0abc +0x10ac:  mov    %eax,0x14(%esp)
086d0ac0 +0x10b0:  movl   $"MEMBER_CHAT_HYPER_LINK_ERROR : member key == %d ",0x10(%esp)
086d0ac8 +0x10b8:  movl   $0x19d6,0xc(%esp)
086d0ad0 +0x10c0:  movl   $&_ZZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x8(%esp)
086d0ad8 +0x10c8:  movl   $"world.cpp",0x4(%esp)
086d0ae0 +0x10d0:  movl   $0x1,(%esp)
086d0ae7 +0x10d7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086d0aec +0x10dc:  jmp    086d0e8a <+0x147a>
086d0af1 +0x10e1:  mov    0xc(%ebp),%eax
086d0af4 +0x10e4:  mov    %eax,(%esp)
086d0af7 +0x10e7:  call   082f0960 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6e4
086d0afc +0x10ec:  cmp    $0x12c,%eax
086d0b01 +0x10f1:  seta   %al
086d0b04 +0x10f4:  test   %al,%al
086d0b06 +0x10f6:  jne    086d0e86 <+0x1476>
086d0b0c +0x10fc:  lea    -0x7a7(%ebp),%eax
086d0b12 +0x1102:  mov    %eax,(%esp)
086d0b15 +0x1105:  call   086d1b20 <_GLOBAL__I_MAX_VILLAGE_NUM+0x351>  ; global constructors keyed to MAX_VILLAGE_NUM+0x351
086d0b1a +0x110a:  mov    0x10(%ebp),%eax
086d0b1d +0x110d:  add    $0x13c,%eax
086d0b22 +0x1112:  mov    %eax,-0xa38(%ebp)
086d0b28 +0x1118:  mov    0x10(%ebp),%eax
086d0b2b +0x111b:  movzbl 0x13b(%eax),%eax
086d0b32 +0x1122:  movzbl %al,%eax
086d0b35 +0x1125:  mov    %eax,-0xa34(%ebp)
086d0b3b +0x112b:  mov    0x10(%ebp),%eax
086d0b3e +0x112e:  movzbl 0xd(%eax),%eax
086d0b42 +0x1132:  movzbl %al,%eax
086d0b45 +0x1135:  mov    %eax,-0xa30(%ebp)
086d0b4b +0x113b:  mov    0x10(%ebp),%eax
086d0b4e +0x113e:  add    $0x18,%eax
086d0b51 +0x1141:  mov    %eax,-0xa2c(%ebp)
086d0b57 +0x1147:  mov    0x10(%ebp),%eax
086d0b5a +0x114a:  mov    0x14(%eax),%eax
086d0b5d +0x114d:  movzbl %al,%edi
086d0b60 +0x1150:  mov    0xc(%ebp),%eax
086d0b63 +0x1153:  mov    %eax,(%esp)
086d0b66 +0x1156:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086d0b6b +0x115b:  mov    %eax,%esi
086d0b6d +0x115d:  mov    0xc(%ebp),%eax
086d0b70 +0x1160:  mov    %eax,(%esp)
086d0b73 +0x1163:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086d0b78 +0x1168:  movzwl %ax,%ebx
086d0b7b +0x116b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086d0b80 +0x1170:  mov    %eax,(%esp)
086d0b83 +0x1173:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086d0b88 +0x1178:  movzbl %al,%eax
086d0b8b +0x117b:  mov    -0xa38(%ebp),%edx
086d0b91 +0x1181:  mov    %edx,0x20(%esp)
086d0b95 +0x1185:  mov    -0xa34(%ebp),%ecx
086d0b9b +0x118b:  mov    %ecx,0x1c(%esp)
086d0b9f +0x118f:  mov    -0xa30(%ebp),%edx
086d0ba5 +0x1195:  mov    %edx,0x18(%esp)
086d0ba9 +0x1199:  mov    -0xa2c(%ebp),%ecx
086d0baf +0x119f:  mov    %ecx,0x14(%esp)
086d0bb3 +0x11a3:  mov    %edi,0x10(%esp)
086d0bb7 +0x11a7:  mov    %esi,0xc(%esp)
086d0bbb +0x11ab:  mov    %ebx,0x8(%esp)
086d0bbf +0x11af:  mov    %eax,0x4(%esp)
086d0bc3 +0x11b3:  lea    -0x7a7(%ebp),%eax
086d0bc9 +0x11b9:  mov    %eax,(%esp)
086d0bcc +0x11bc:  call   086d1b9a <_GLOBAL__I_MAX_VILLAGE_NUM+0x3cb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x3cb
086d0bd1 +0x11c1:  mov    0x10(%ebp),%eax
086d0bd4 +0x11c4:  mov    0x14(%eax),%eax
086d0bd7 +0x11c7:  add    $0x167,%eax
086d0bdc +0x11cc:  mov    %eax,%esi
086d0bde +0x11ce:  lea    -0x7a7(%ebp),%ebx
086d0be4 +0x11d4:  mov    0xc(%ebp),%eax
086d0be7 +0x11d7:  mov    %eax,(%esp)
086d0bea +0x11da:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086d0bef +0x11df:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086d0bf5 +0x11e5:  mov    %eax,0x4(%esp)
086d0bf9 +0x11e9:  mov    %edx,(%esp)
086d0bfc +0x11ec:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086d0c01 +0x11f1:  mov    %esi,0x8(%esp)
086d0c05 +0x11f5:  mov    %ebx,0x4(%esp)
086d0c09 +0x11f9:  mov    %eax,(%esp)
086d0c0c +0x11fc:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
086d0c11 +0x1201:  jmp    086d0e8a <+0x147a>
086d0c16 +0x1206:  lea    -0xac(%ebp),%eax
086d0c1c +0x120c:  mov    %eax,(%esp)
086d0c1f +0x120f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086d0c24 +0x1214:  movl   $0x174,0x8(%esp)
086d0c2c +0x121c:  movl   $0x0,0x4(%esp)
086d0c34 +0x1224:  lea    -0xac(%ebp),%eax
086d0c3a +0x122a:  mov    %eax,(%esp)
086d0c3d +0x122d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086d0c42 +0x1232:  mov    0x10(%ebp),%eax
086d0c45 +0x1235:  movzbl 0xd(%eax),%eax
086d0c49 +0x1239:  movzbl %al,%eax
086d0c4c +0x123c:  mov    %eax,0x4(%esp)
086d0c50 +0x1240:  lea    -0xac(%ebp),%eax
086d0c56 +0x1246:  mov    %eax,(%esp)
086d0c59 +0x1249:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0c5e +0x124e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086d0c63 +0x1253:  mov    %eax,(%esp)
086d0c66 +0x1256:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086d0c6b +0x125b:  mov    %eax,0x4(%esp)
086d0c6f +0x125f:  lea    -0xac(%ebp),%eax
086d0c75 +0x1265:  mov    %eax,(%esp)
086d0c78 +0x1268:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0c7d +0x126d:  mov    0xc(%ebp),%eax
086d0c80 +0x1270:  mov    %eax,(%esp)
086d0c83 +0x1273:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086d0c88 +0x1278:  movzwl %ax,%eax
086d0c8b +0x127b:  mov    %eax,0x4(%esp)
086d0c8f +0x127f:  lea    -0xac(%ebp),%eax
086d0c95 +0x1285:  mov    %eax,(%esp)
086d0c98 +0x1288:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086d0c9d +0x128d:  mov    0xc(%ebp),%eax
086d0ca0 +0x1290:  mov    %eax,(%esp)
086d0ca3 +0x1293:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086d0ca8 +0x1298:  mov    %eax,(%esp)
086d0cab +0x129b:  call   0807e3b0 <_init+0xca8>
086d0cb0 +0x12a0:  mov    %eax,0x4(%esp)
086d0cb4 +0x12a4:  lea    -0xac(%ebp),%eax
086d0cba +0x12aa:  mov    %eax,(%esp)
086d0cbd +0x12ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086d0cc2 +0x12b2:  mov    0xc(%ebp),%eax
086d0cc5 +0x12b5:  mov    %eax,(%esp)
086d0cc8 +0x12b8:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086d0ccd +0x12bd:  mov    %eax,(%esp)
086d0cd0 +0x12c0:  call   0807e3b0 <_init+0xca8>
086d0cd5 +0x12c5:  mov    %eax,%ebx
086d0cd7 +0x12c7:  mov    0xc(%ebp),%eax
086d0cda +0x12ca:  mov    %eax,(%esp)
086d0cdd +0x12cd:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086d0ce2 +0x12d2:  mov    %ebx,0x8(%esp)
086d0ce6 +0x12d6:  mov    %eax,0x4(%esp)
086d0cea +0x12da:  lea    -0xac(%ebp),%eax
086d0cf0 +0x12e0:  mov    %eax,(%esp)
086d0cf3 +0x12e3:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086d0cf8 +0x12e8:  mov    0x10(%ebp),%eax
086d0cfb +0x12eb:  mov    0x14(%eax),%eax
086d0cfe +0x12ee:  mov    %eax,0x4(%esp)
086d0d02 +0x12f2:  lea    -0xac(%ebp),%eax
086d0d08 +0x12f8:  mov    %eax,(%esp)
086d0d0b +0x12fb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086d0d10 +0x1300:  mov    0x10(%ebp),%eax
086d0d13 +0x1303:  mov    0x14(%eax),%eax
086d0d16 +0x1306:  mov    0x10(%ebp),%edx
086d0d19 +0x1309:  add    $0x18,%edx
086d0d1c +0x130c:  mov    %eax,0x8(%esp)
086d0d20 +0x1310:  mov    %edx,0x4(%esp)
086d0d24 +0x1314:  lea    -0xac(%ebp),%eax
086d0d2a +0x131a:  mov    %eax,(%esp)
086d0d2d +0x131d:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086d0d32 +0x1322:  mov    0x10(%ebp),%eax
086d0d35 +0x1325:  movzbl 0x13b(%eax),%eax
086d0d3c +0x132c:  movzbl %al,%eax
086d0d3f +0x132f:  mov    %eax,0x4(%esp)
086d0d43 +0x1333:  lea    -0xac(%ebp),%eax
086d0d49 +0x1339:  mov    %eax,(%esp)
086d0d4c +0x133c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0d51 +0x1341:  movl   $0x0,-0x20(%ebp)
086d0d58 +0x1348:  jmp    086d0d89 <+0x1379>
086d0d5a +0x134a:  mov    -0x20(%ebp),%eax
086d0d5d +0x134d:  imul   $0x68,%eax,%eax
086d0d60 +0x1350:  add    $0x130,%eax
086d0d65 +0x1355:  add    0x10(%ebp),%eax
086d0d68 +0x1358:  add    $0xc,%eax
086d0d6b +0x135b:  movl   $0x68,0x8(%esp)
086d0d73 +0x1363:  mov    %eax,0x4(%esp)
086d0d77 +0x1367:  lea    -0xac(%ebp),%eax
086d0d7d +0x136d:  mov    %eax,(%esp)
086d0d80 +0x1370:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086d0d85 +0x1375:  addl   $0x1,-0x20(%ebp)
086d0d89 +0x1379:  mov    0x10(%ebp),%eax
086d0d8c +0x137c:  movzbl 0x13b(%eax),%eax
086d0d93 +0x1383:  movzbl %al,%eax
086d0d96 +0x1386:  cmp    -0x20(%ebp),%eax
086d0d99 +0x1389:  setg   %al
086d0d9c +0x138c:  test   %al,%al
086d0d9e +0x138e:  jne    086d0d5a <+0x134a>
086d0da0 +0x1390:  movl   $0x1,0x4(%esp)
086d0da8 +0x1398:  lea    -0xac(%ebp),%eax
086d0dae +0x139e:  mov    %eax,(%esp)
086d0db1 +0x13a1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086d0db6 +0x13a6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086d0dbb +0x13ab:  lea    -0xac(%ebp),%edx
086d0dc1 +0x13b1:  mov    %edx,0x4(%esp)
086d0dc5 +0x13b5:  mov    %eax,(%esp)
086d0dc8 +0x13b8:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086d0dcd +0x13bd:  jmp    086d0de7 <+0x13d7>
086d0dcf +0x13bf:  mov    %edx,%ebx
086d0dd1 +0x13c1:  mov    %eax,%esi
086d0dd3 +0x13c3:  lea    -0xac(%ebp),%eax
086d0dd9 +0x13c9:  mov    %eax,(%esp)
086d0ddc +0x13cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086d0de1 +0x13d1:  mov    %esi,%eax
086d0de3 +0x13d3:  mov    %ebx,%edx
086d0de5 +0x13d5:  jmp    086d0e59 <+0x1449>
086d0de7 +0x13d7:  lea    -0xac(%ebp),%eax
086d0ded +0x13dd:  mov    %eax,(%esp)
086d0df0 +0x13e0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086d0df5 +0x13e5:  jmp    086d0e8a <+0x147a>
086d0dfa +0x13ea:  cmpl   $0x0,0xc(%ebp)
086d0dfe +0x13ee:  je     086d0e8a <+0x147a>
086d0e04 +0x13f4:  mov    0x14(%ebp),%eax
086d0e07 +0x13f7:  mov    %eax,0x10(%esp)
086d0e0b +0x13fb:  mov    0x10(%ebp),%eax
086d0e0e +0x13fe:  mov    %eax,0xc(%esp)
086d0e12 +0x1402:  mov    0xc(%ebp),%eax
086d0e15 +0x1405:  mov    %eax,0x8(%esp)
086d0e19 +0x1409:  lea    -0x8c(%ebp),%eax
086d0e1f +0x140f:  mov    %eax,0x4(%esp)
086d0e23 +0x1413:  mov    0x8(%ebp),%eax
086d0e26 +0x1416:  mov    %eax,(%esp)
086d0e29 +0x1419:  call   086d0ea4 <_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
086d0e2e +0x141e:  mov    0xc(%ebp),%eax
086d0e31 +0x1421:  mov    %eax,(%esp)
086d0e34 +0x1424:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
086d0e39 +0x1429:  mov    %eax,-0x1c(%ebp)
086d0e3c +0x142c:  cmpl   $0x0,-0x1c(%ebp)
086d0e40 +0x1430:  je     086d0e89 <+0x1479>
086d0e42 +0x1432:  lea    -0x8c(%ebp),%eax
086d0e48 +0x1438:  mov    %eax,0x4(%esp)
086d0e4c +0x143c:  mov    -0x1c(%ebp),%eax
086d0e4f +0x143f:  mov    %eax,(%esp)
086d0e52 +0x1442:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
086d0e57 +0x1447:  jmp    086d0e8a <+0x147a>
086d0e59 +0x1449:  mov    %edx,%ebx
086d0e5b +0x144b:  mov    %eax,%esi
086d0e5d +0x144d:  lea    -0x8c(%ebp),%eax
086d0e63 +0x1453:  mov    %eax,(%esp)
086d0e66 +0x1456:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086d0e6b +0x145b:  mov    %esi,%eax
086d0e6d +0x145d:  mov    %ebx,%edx
086d0e6f +0x145f:  mov    %eax,(%esp)
086d0e72 +0x1462:  call   08ae3750 <_Unwind_Resume>
086d0e77 +0x1467:  nop
086d0e78 +0x1468:  jmp    086d0e8a <+0x147a>
086d0e7a +0x146a:  nop
086d0e7b +0x146b:  jmp    086d0e8a <+0x147a>
086d0e7d +0x146d:  nop
086d0e7e +0x146e:  jmp    086d0e8a <+0x147a>
086d0e80 +0x1470:  nop
086d0e81 +0x1471:  jmp    086d0e8a <+0x147a>
086d0e83 +0x1473:  nop
086d0e84 +0x1474:  jmp    086d0e8a <+0x147a>
086d0e86 +0x1476:  nop
086d0e87 +0x1477:  jmp    086d0e8a <+0x147a>
086d0e89 +0x1479:  nop
086d0e8a +0x147a:  lea    -0x8c(%ebp),%eax
086d0e90 +0x1480:  mov    %eax,(%esp)
086d0e93 +0x1483:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086d0e98 +0x1488:  lea    -0xc(%ebp),%esp
086d0e9b +0x148b:  add    $0x0,%esp
086d0e9e +0x148e:  pop    %ebx
086d0e9f +0x148f:  pop    %esi
086d0ea0 +0x1490:  pop    %edi
086d0ea1 +0x1491:  pop    %ebp
086d0ea2 +0x1492:  ret
086d0ea3 +0x1493:  nop
```

## 反编译 C

```c
// GameWorld::send_chat_msg_hyper_link @ 0x86cfa10

/* GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET) */

void __thiscall
GameWorld::send_chat_msg_hyper_link(GameWorld *this,CUser *param_1,int param_2,int param_4)

{
  uchar uVar1;
  uchar uVar2;
  bool bVar3;
  char cVar4;
  uchar uVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  GameWorld *pGVar11;
  int iVar12;
  CAssaultMgr *pCVar13;
  CGameManager *pCVar14;
  CGuildServerProxy *this_00;
  undefined4 uVar15;
  uint uVar16;
  CEnvironment *pCVar17;
  undefined4 uVar18;
  CMonitorServerProxy *pCVar19;
  Packet_Monitor_Other_Channel_Chat_Hyper_Link local_a1f [2];
  ushort local_a1d;
  uint local_a15;
  undefined4 local_a0c;
  undefined4 local_a08;
  undefined1 local_a04;
  undefined1 auStack_a03 [30];
  undefined1 local_9e5;
  undefined1 auStack_9e4 [312];
  undefined1 local_8ac;
  undefined1 auStack_8ab [256];
  Packet_Monitor_MegaPhone_Hyper_Link local_7ab [615];
  Packet_Monitor_Guild_Chat_Hyper_Link local_544 [2];
  ushort local_542;
  undefined4 local_53a;
  undefined4 local_536;
  undefined1 local_532;
  undefined1 auStack_531 [312];
  undefined1 local_3f9;
  undefined1 auStack_3f8 [256];
  Packet_Monitor_Member_Chat_Hyper_Link local_2f8 [2];
  ushort local_2f6;
  undefined4 local_2ee;
  undefined1 local_2ea;
  undefined1 auStack_2e9 [312];
  undefined1 local_1b1;
  undefined1 auStack_1b0 [256];
  PacketGuard local_b0 [12];
  PacketGuard local_a4 [12];
  string local_98;
  string local_94 [4];
  PacketGuard local_90 [15];
  allocator<char> local_81;
  cMyTrace local_80 [16];
  string local_70;
  allocator<char> local_69;
  CUser *local_68;
  size_t local_64;
  size_t local_60;
  int local_5c;
  size_t local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  CParty *local_44;
  Village *local_40;
  PvP_Room *local_3c;
  PvP_Room *local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  BlueMarble *local_20;
  
  if (((*(byte *)(param_2 + 0xd) < 0x1f) &&
      ((1 << (*(byte *)(param_2 + 0xd) & 0x1f) & 0x7fff0411U) != 0)) && (param_1 != (CUser *)0x0)) {
    CUser::DisConnSig(param_1,0x18,1,0);
    return;
  }
  if (*(char *)(param_2 + 0xd) != '\0') {
    std::allocator<char>::allocator();
                    /* try { // try from 086cfaa3 to 086cfaa7 has its CatchHandler @ 086cfaaa */
    std::string::string(local_94,(char *)(param_2 + 0x18),(allocator *)&local_81);
    std::allocator<char>::~allocator(&local_81);
                    /* try { // try from 086cfad0 to 086cfaf0 has its CatchHandler @ 086cfb85 */
    CSyncSlangFilter::GetInstance();
    CSyncSlangFilter::Filter(&local_98);
                    /* try { // try from 086cfafd to 086cfb2f has its CatchHandler @ 086cfb4d */
    iVar8 = std::string::size((string *)&local_98);
    if (iVar8 != 0) {
      sVar9 = std::string::size((string *)&local_98);
      pcVar10 = (char *)std::string::c_str((string *)&local_98);
      strncpy((char *)(param_2 + 0x18),pcVar10,sVar9);
    }
                    /* try { // try from 086cfb6e to 086cfb72 has its CatchHandler @ 086cfb85 */
    std::string::~string((string *)&local_98);
    std::string::~string(local_94);
    if (iVar8 == 0) {
      return;
    }
  }
  PacketGuard::PacketGuard(local_90);
                    /* try { // try from 086cfbec to 086cfc40 has its CatchHandler @ 086d0e59 */
  WriteLogChatMsg(this,param_1,*(char *)(param_2 + 0xd),(char *)(param_2 + 0x18));
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
  case 7:
  case 10:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x24:
  case 0x25:
  case 0x26:
    break;
  case 1:
    local_68 = (CUser *)find_from_world(this,*(ushort *)(param_2 + 0xe));
    if (local_68 == (CUser *)0x0) {
      Packet_Monitor_Other_Channel_Chat_Hyper_Link::Packet_Monitor_Other_Channel_Chat_Hyper_Link
                (local_a1f);
      local_a0c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_a08 = *(undefined4 *)(param_2 + 0x10);
      local_8ac = (undefined1)*(undefined4 *)(param_2 + 0x14);
      memcpy(auStack_8ab,(void *)(param_2 + 0x18),*(size_t *)(param_2 + 0x14));
      local_a04 = (undefined1)*(undefined4 *)(param_2 + 0x118);
      memcpy(auStack_a03,(void *)(param_2 + 0x11c),*(size_t *)(param_2 + 0x118));
      local_a15 = (uint)*(byte *)(param_2 + 0xd);
      local_9e5 = *(undefined1 *)(param_2 + 0x13b);
      for (local_48 = 0; local_48 < (int)(uint)*(byte *)(param_2 + 0x13b); local_48 = local_48 + 1)
      {
        memcpy(auStack_9e4 + local_48 * 0x68,(void *)(local_48 * 0x68 + param_2 + 0x13c),0x68);
      }
      local_a1d = (short)*(undefined4 *)(param_2 + 0x14) + 0x174;
      local_4c = (uint)local_a1d;
      uVar18 = CUser::GetServerGroup(param_1);
      pCVar19 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar18);
      CMonitorServerProxy::SendPacket(pCVar19,(char *)local_a1f,local_4c);
      break;
    }
    PacketGuard::PacketGuard(local_a4);
                    /* try { // try from 086cfc4f to 086d018d has its CatchHandler @ 086d0195 */
    uVar16 = CUser::get_charac_no(param_1,-1);
    cVar4 = CUser::isBlackUser(local_68,uVar16);
    if (cVar4 == '\0') {
      uVar16 = CUser::get_charac_no(local_68,-1);
      cVar4 = CUser::isBlackUser(param_1,uVar16);
      if (cVar4 != '\0') goto LAB_086cfc8d;
      bVar3 = false;
    }
    else {
LAB_086cfc8d:
      bVar3 = true;
    }
    if (bVar3) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a4,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,(uint)*(byte *)(param_2 + 0xd));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0x4d);
      pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_68);
      local_60 = strlen(pcVar10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,local_60);
      pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_68);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a4,pcVar10,local_60);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,*(int *)(param_2 + 0x14));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_a4,(char *)(param_2 + 0x18),*(int *)(param_2 + 0x14));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,(uint)*(byte *)(param_2 + 0x13b));
      for (local_5c = 0; local_5c < (int)(uint)*(byte *)(param_2 + 0x13b); local_5c = local_5c + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_a4,(char *)(local_5c * 0x68 + param_2 + 0x13c),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a4,true);
      CUser::Send(param_1,local_a4);
    }
    else {
      pGVar11 = (GameWorld *)G_GameWorld();
      cVar4 = IsIntegratedPvPBaseChannel(pGVar11);
      if (cVar4 == '\0') {
LAB_086cfe67:
        bVar3 = false;
      }
      else {
        iVar8 = CUser::GetServerGroup(param_1);
        iVar12 = CUser::GetServerGroup(local_68);
        if (iVar8 == iVar12) goto LAB_086cfe67;
        bVar3 = true;
      }
      if (bVar3) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a4,0,0x173);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,(uint)*(byte *)(param_2 + 0xd));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0x15);
        pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_68);
        local_58 = strlen(pcVar10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,local_58);
        pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_68);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a4,pcVar10,local_58);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,*(int *)(param_2 + 0x14));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_a4,(char *)(param_2 + 0x18),*(int *)(param_2 + 0x14))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_a4,(uint)*(byte *)(param_2 + 0x13b));
        for (local_54 = 0; local_54 < (int)(uint)*(byte *)(param_2 + 0x13b); local_54 = local_54 + 1
            ) {
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_a4,(char *)(local_54 * 0x68 + param_2 + 0x13c),0x68
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a4,true);
        CUser::Send(param_1,local_a4);
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a4,0,0x173);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,(uint)*(byte *)(param_2 + 0xd));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0);
        pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        local_64 = strlen(pcVar10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,local_64);
        pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a4,pcVar10,local_64);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,*(int *)(param_2 + 0x14));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_a4,(char *)(param_2 + 0x18),*(int *)(param_2 + 0x14))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_a4,(uint)*(byte *)(param_2 + 0x13b));
        for (local_50 = 0; local_50 < (int)(uint)*(byte *)(param_2 + 0x13b); local_50 = local_50 + 1
            ) {
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_a4,(char *)(local_50 * 0x68 + param_2 + 0x13c),0x68
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a4,true);
        CUser::Send(local_68,local_a4);
      }
    }
                    /* try { // try from 086d01b9 to 086d046a has its CatchHandler @ 086d0e59 */
    PacketGuard::~PacketGuard(local_a4);
    break;
  case 2:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg_hyper_link(this,local_90,param_1,param_2,param_4);
      local_44 = (CParty *)CUser::GetParty(param_1);
      if (local_44 != (CParty *)0x0) {
        CParty::send_to_party(local_44,local_90);
      }
    }
    break;
  case 3:
  case 0x27:
    local_40 = (Village *)0x0;
    pGVar11 = (GameWorld *)G_GameWorld();
    local_40 = (Village *)getUserVillage(pGVar11,param_1);
    if (local_40 == (Village *)0x0) {
      cMyTrace::cMyTrace(local_80,
                         "void GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)"
                         ,0x1934,5);
      cMyTrace::operator()(local_80,"getUserVillage() call failed");
      break;
    }
    iVar8 = Village::get_gate_area(local_40);
    iVar12 = CUser::get_area(param_1,false);
    if (((iVar8 == iVar12) ||
        (cVar4 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar4 == '\b')) ||
       (param_4 == 0x72)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar12 = G_CDataManager();
      iVar8 = ServerParameterScript::GetCleanChattingCount
                        ((ServerParameterScript *)(iVar12 + 0x68),iVar8);
      std::allocator<char>::allocator();
                    /* try { // try from 086d048f to 086d0493 has its CatchHandler @ 086d04f5 */
      std::string::string((string *)&local_70,(char *)(param_2 + 0x18),(allocator *)&local_69);
                    /* try { // try from 086d04a1 to 086d04ae has its CatchHandler @ 086d04e0 */
      cVar4 = CUser::isDuplicationMessage(param_1,&local_70);
      if (cVar4 == '\0') {
        iVar12 = 1;
      }
      else {
        iVar12 = G_CDataManager();
        iVar12 = ServerParameterScript::GetPaneltyDupMessage
                           ((ServerParameterScript *)(iVar12 + 0x68));
      }
      CUser::incChattingMessageCount(param_1,iVar12 * iVar8);
                    /* try { // try from 086d04d9 to 086d04dd has its CatchHandler @ 086d04f5 */
      std::string::~string((string *)&local_70);
      std::allocator<char>::~allocator(&local_69);
      iVar8 = CUser::getChattingMessageCount(param_1);
                    /* try { // try from 086d0525 to 086d0c23 has its CatchHandler @ 086d0e59 */
      iVar12 = G_CDataManager();
      iVar12 = ServerParameterScript::GetMaxCleanChattingCount
                         ((ServerParameterScript *)(iVar12 + 0x68));
      if (iVar12 < iVar8) {
        CUser::setChattingMessageCount(param_1,0);
        CUser::reqHumanCertify4ClearMap(param_1,false);
        break;
      }
    }
  case 0x22:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg_hyper_link(this,local_90,param_1,param_2,param_4);
      iVar8 = CUser::get_area(param_1,false);
      cVar4 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      send_to_area(this,(int)cVar4,iVar8,local_90);
    }
    break;
  case 4:
    make_packet_chat_msg_hyper_link(this,local_90,param_1,param_2,param_4);
    send_all(this,local_90);
    break;
  case 5:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg_hyper_link(this,local_90,param_1,param_2,param_4);
      iVar8 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
      if (iVar8 == 0) {
        sVar6 = CUser::GetPvpIndex(param_1);
        pCVar14 = (CGameManager *)G_CGameManager();
        local_3c = (PvP_Room *)CGameManager::GetPvp(pCVar14,(int)sVar6,param_1,0);
        if (local_3c != (PvP_Room *)0x0) {
          PvP_Room::send_to_pvp(local_3c,local_90);
        }
      }
      else {
        pCVar13 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
        pvp_assault::CAssaultMgr::SendPacket(pCVar13,param_1,false,local_90);
      }
    }
    break;
  case 6:
    iVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if ((iVar8 == 0) ||
       (iVar8 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1), iVar8 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      Packet_Monitor_Guild_Chat_Hyper_Link::Packet_Monitor_Guild_Chat_Hyper_Link(local_544);
      local_53a = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_536 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_3f9 = (undefined1)*(undefined4 *)(param_2 + 0x14);
      memcpy(auStack_3f8,(void *)(param_2 + 0x18),*(size_t *)(param_2 + 0x14));
      local_532 = *(undefined1 *)(param_2 + 0x13b);
      for (local_30 = 0; local_30 < (int)(uint)*(byte *)(param_2 + 0x13b); local_30 = local_30 + 1)
      {
        memcpy(auStack_531 + local_30 * 0x68,(void *)(local_30 * 0x68 + param_2 + 0x13c),0x68);
      }
      local_542 = (short)*(undefined4 *)(param_2 + 0x14) + 0x14c;
      local_34 = (uint)local_542;
      uVar18 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar18);
      CGuildServerProxy::SendPacket(this_00,(char *)local_544,local_34);
    }
    else {
      uVar18 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar15 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"world.cpp",
                 "void GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)"
                 ,0x19b8,"GUILD_CHAT_HYPER_LINK_ERROR : charac no == %d || guild key == %d ",uVar15,
                 uVar18);
    }
    break;
  case 8:
    iVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if ((iVar8 == 0) ||
       (iVar8 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1), iVar8 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      Packet_Monitor_Member_Chat_Hyper_Link::Packet_Monitor_Member_Chat_Hyper_Link(local_2f8);
      local_2ee = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
      local_1b1 = (undefined1)*(undefined4 *)(param_2 + 0x14);
      memcpy(auStack_1b0,(void *)(param_2 + 0x18),*(size_t *)(param_2 + 0x14));
      local_2ea = *(undefined1 *)(param_2 + 0x13b);
      for (local_28 = 0; local_28 < (int)(uint)*(byte *)(param_2 + 0x13b); local_28 = local_28 + 1)
      {
        memcpy(auStack_2e9 + local_28 * 0x68,(void *)(local_28 * 0x68 + param_2 + 0x13c),0x68);
      }
      local_2f6 = (short)*(undefined4 *)(param_2 + 0x14) + 0x148;
      local_2c = (uint)local_2f6;
      uVar18 = CUser::GetServerGroup(param_1);
      pCVar19 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar18);
      CMonitorServerProxy::SendPacket(pCVar19,(char *)local_2f8,local_2c);
    }
    else {
      uVar18 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"world.cpp",
                 "void GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)"
                 ,0x19d6,"MEMBER_CHAT_HYPER_LINK_ERROR : member key == %d ",uVar18);
    }
    break;
  case 9:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg_hyper_link(this,local_90,param_1,param_2,param_4);
      iVar8 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
      if (iVar8 == 0) {
        sVar6 = CUser::GetPvpIndex(param_1);
        pCVar14 = (CGameManager *)G_CGameManager();
        local_38 = (PvP_Room *)CGameManager::GetPvp(pCVar14,(int)sVar6,param_1,0);
        if (local_38 != (PvP_Room *)0x0) {
          PvP_Room::send_to_pvp_team(local_38,local_90,param_1);
        }
      }
      else {
        pCVar13 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
        pvp_assault::CAssaultMgr::SendPacket(pCVar13,param_1,true,local_90);
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0x23:
    uVar16 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)param_1);
    if (uVar16 < 0x12d) {
      Packet_Monitor_MegaPhone_Hyper_Link::Packet_Monitor_MegaPhone_Hyper_Link(local_7ab);
      uVar1 = *(uchar *)(param_2 + 0x13b);
      uVar2 = *(uchar *)(param_2 + 0xd);
      uVar18 = *(undefined4 *)(param_2 + 0x14);
      pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar7 = CUser::get_unique_id(param_1);
      pCVar17 = (CEnvironment *)G_CEnvironment();
      uVar5 = CEnvironment::get_channel_no(pCVar17);
      Packet_Monitor_MegaPhone_Hyper_Link::set
                (local_7ab,uVar5,uVar7,pcVar10,(uchar)uVar18,(char *)(param_2 + 0x18),uVar2,uVar1,
                 (hyperlink_item_info *)(param_2 + 0x13c));
      iVar8 = *(int *)(param_2 + 0x14);
      uVar18 = CUser::GetServerGroup(param_1);
      pCVar19 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar18);
      CMonitorServerProxy::SendPacket(pCVar19,(char *)local_7ab,iVar8 + 0x167);
    }
    break;
  case 0xd:
  case 0xf:
    PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 086d0c3d to 086d0dcc has its CatchHandler @ 086d0dcf */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,0,0x174);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)*(byte *)(param_2 + 0xd));
    pCVar17 = (CEnvironment *)G_CEnvironment();
    iVar8 = CEnvironment::get_channel_no(pCVar17);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar8);
    uVar16 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,uVar16 & 0xffff);
    pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sVar9 = strlen(pcVar10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,sVar9);
    pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sVar9 = strlen(pcVar10);
    pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_b0,pcVar10,sVar9);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,*(int *)(param_2 + 0x14));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_b0,(char *)(param_2 + 0x18),*(int *)(param_2 + 0x14));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)*(byte *)(param_2 + 0x13b));
    for (local_24 = 0; local_24 < (int)(uint)*(byte *)(param_2 + 0x13b); local_24 = local_24 + 1) {
      InterfacePacketBuf::put_binary
                ((InterfacePacketBuf *)local_b0,(char *)(local_24 * 0x68 + param_2 + 0x13c),0x68);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
    pGVar11 = (GameWorld *)G_GameWorld();
    send_all(pGVar11,local_b0);
                    /* try { // try from 086d0df0 to 086d0e56 has its CatchHandler @ 086d0e59 */
    PacketGuard::~PacketGuard(local_b0);
    break;
  case 0x28:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg_hyper_link(this,local_90,param_1,param_2,param_4);
      local_20 = (BlueMarble *)CUser::getBlueMarble(param_1);
      if (local_20 != (BlueMarble *)0x0) {
        BlueMarble::sendToBlueMarble(local_20,local_90);
      }
    }
  }
  PacketGuard::~PacketGuard(local_90);
  return;
}
```
