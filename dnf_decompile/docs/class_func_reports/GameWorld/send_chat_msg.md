# send_chat_msg

`_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET`

`GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c975e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c975e  _ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET
#           GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)
# range [0x086c975e, 0x086cab91]
086c975e +0x0000:  push   %ebp
086c975f +0x0001:  mov    %esp,%ebp
086c9761 +0x0003:  push   %edi
086c9762 +0x0004:  push   %esi
086c9763 +0x0005:  push   %ebx
086c9764 +0x0006:  sub    $0x21c,%esp
086c976a +0x000c:  mov    0x10(%ebp),%edx
086c976d +0x000f:  mov    0x14(%ebp),%eax
086c9770 +0x0012:  mov    %dl,-0x1ec(%ebp)
086c9776 +0x0018:  mov    %ax,-0x1f0(%ebp)
086c977d +0x001f:  movsbl -0x1ec(%ebp),%eax
086c9784 +0x0026:  cmp    $0x1e,%eax
086c9787 +0x0029:  ja     086c97cd <+0x6f>
086c9789 +0x002b:  mov    $0x1,%edx
086c978e +0x0030:  mov    %edx,%ebx
086c9790 +0x0032:  mov    %eax,%ecx
086c9792 +0x0034:  shl    %cl,%ebx
086c9794 +0x0036:  mov    %ebx,%eax
086c9796 +0x0038:  and    $0x7fff0411,%eax
086c979b +0x003d:  test   %eax,%eax
086c979d +0x003f:  je     086c97cd <+0x6f>
086c979f +0x0041:  cmpl   $0x0,0xc(%ebp)
086c97a3 +0x0045:  je     086c97cd <+0x6f>
086c97a5 +0x0047:  movl   $0x0,0xc(%esp)
086c97ad +0x004f:  movl   $0x1,0x8(%esp)
086c97b5 +0x0057:  movl   $0x18,0x4(%esp)
086c97bd +0x005f:  mov    0xc(%ebp),%eax
086c97c0 +0x0062:  mov    %eax,(%esp)
086c97c3 +0x0065:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086c97c8 +0x006a:  jmp    086cab87 <+0x1429>
086c97cd +0x006f:  cmpb   $0x0,-0x1ec(%ebp)
086c97d4 +0x0076:  je     086c990f <+0x1b1>
086c97da +0x007c:  lea    -0x79(%ebp),%eax
086c97dd +0x007f:  mov    %eax,(%esp)
086c97e0 +0x0082:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086c97e5 +0x0087:  lea    -0x79(%ebp),%eax
086c97e8 +0x008a:  mov    %eax,0x8(%esp)
086c97ec +0x008e:  mov    0x1c(%ebp),%eax
086c97ef +0x0091:  mov    %eax,0x4(%esp)
086c97f3 +0x0095:  lea    -0x8c(%ebp),%eax
086c97f9 +0x009b:  mov    %eax,(%esp)
086c97fc +0x009e:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086c9801 +0x00a3:  jmp    086c981e <+0xc0>
086c9803 +0x00a5:  mov    %edx,%ebx
086c9805 +0x00a7:  mov    %eax,%esi
086c9807 +0x00a9:  lea    -0x79(%ebp),%eax
086c980a +0x00ac:  mov    %eax,(%esp)
086c980d +0x00af:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086c9812 +0x00b4:  mov    %esi,%eax
086c9814 +0x00b6:  mov    %ebx,%edx
086c9816 +0x00b8:  mov    %eax,(%esp)
086c9819 +0x00bb:  call   08ae3750 <_Unwind_Resume>
086c981e +0x00c0:  lea    -0x79(%ebp),%eax
086c9821 +0x00c3:  mov    %eax,(%esp)
086c9824 +0x00c6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086c9829 +0x00cb:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
086c982e +0x00d0:  lea    -0x90(%ebp),%edx
086c9834 +0x00d6:  lea    -0x8c(%ebp),%ecx
086c983a +0x00dc:  mov    %ecx,0x8(%esp)
086c983e +0x00e0:  mov    %eax,0x4(%esp)
086c9842 +0x00e4:  mov    %edx,(%esp)
086c9845 +0x00e7:  call   0862e46c <_ZN16CSyncSlangFilter6FilterERKSs>  ; CSyncSlangFilter::Filter(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086c984a +0x00ec:  sub    $0x4,%esp
086c984d +0x00ef:  lea    -0x90(%ebp),%eax
086c9853 +0x00f5:  mov    %eax,(%esp)
086c9856 +0x00f8:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
086c985b +0x00fd:  test   %eax,%eax
086c985d +0x00ff:  sete   %al
086c9860 +0x0102:  test   %al,%al
086c9862 +0x0104:  je     086c986b <+0x10d>
086c9864 +0x0106:  mov    $0x0,%ebx
086c9869 +0x010b:  jmp    086c98bb <+0x15d>
086c986b +0x010d:  lea    -0x90(%ebp),%eax
086c9871 +0x0113:  mov    %eax,(%esp)
086c9874 +0x0116:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
086c9879 +0x011b:  mov    %eax,%ebx
086c987b +0x011d:  lea    -0x90(%ebp),%eax
086c9881 +0x0123:  mov    %eax,(%esp)
086c9884 +0x0126:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086c9889 +0x012b:  mov    %ebx,0x8(%esp)
086c988d +0x012f:  mov    %eax,0x4(%esp)
086c9891 +0x0133:  mov    0x1c(%ebp),%eax
086c9894 +0x0136:  mov    %eax,(%esp)
086c9897 +0x0139:  call   0807d8d0 <_init+0x1c8>
086c989c +0x013e:  mov    $0x1,%ebx
086c98a1 +0x0143:  jmp    086c98bb <+0x15d>
086c98a3 +0x0145:  mov    %edx,%ebx
086c98a5 +0x0147:  mov    %eax,%esi
086c98a7 +0x0149:  lea    -0x90(%ebp),%eax
086c98ad +0x014f:  mov    %eax,(%esp)
086c98b0 +0x0152:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086c98b5 +0x0157:  mov    %esi,%eax
086c98b7 +0x0159:  mov    %ebx,%edx
086c98b9 +0x015b:  jmp    086c98db <+0x17d>
086c98bb +0x015d:  lea    -0x90(%ebp),%eax
086c98c1 +0x0163:  mov    %eax,(%esp)
086c98c4 +0x0166:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086c98c9 +0x016b:  test   %ebx,%ebx
086c98cb +0x016d:  jne    086c98d4 <+0x176>
086c98cd +0x016f:  mov    $0x0,%ebx
086c98d2 +0x0174:  jmp    086c98f9 <+0x19b>
086c98d4 +0x0176:  mov    $0x1,%ebx
086c98d9 +0x017b:  jmp    086c98f9 <+0x19b>
086c98db +0x017d:  mov    %edx,%ebx
086c98dd +0x017f:  mov    %eax,%esi
086c98df +0x0181:  lea    -0x8c(%ebp),%eax
086c98e5 +0x0187:  mov    %eax,(%esp)
086c98e8 +0x018a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086c98ed +0x018f:  mov    %esi,%eax
086c98ef +0x0191:  mov    %ebx,%edx
086c98f1 +0x0193:  mov    %eax,(%esp)
086c98f4 +0x0196:  call   08ae3750 <_Unwind_Resume>
086c98f9 +0x019b:  lea    -0x8c(%ebp),%eax
086c98ff +0x01a1:  mov    %eax,(%esp)
086c9902 +0x01a4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086c9907 +0x01a9:  test   %ebx,%ebx
086c9909 +0x01ab:  je     086cab87 <+0x1429>
086c990f +0x01b1:  lea    -0x88(%ebp),%eax
086c9915 +0x01b7:  mov    %eax,(%esp)
086c9918 +0x01ba:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c991d +0x01bf:  cmpl   $0x0,0xc(%ebp)
086c9921 +0x01c3:  je     086c9a84 <+0x326>
086c9927 +0x01c9:  mov    0xc(%ebp),%eax
086c992a +0x01cc:  mov    %eax,(%esp)
086c992d +0x01cf:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9932 +0x01d4:  mov    %eax,0x4(%esp)
086c9936 +0x01d8:  mov    0x8(%ebp),%eax
086c9939 +0x01db:  mov    %eax,(%esp)
086c993c +0x01de:  call   086cd908 <_ZN9GameWorld15IsForbiddenChatEPKc>  ; GameWorld::IsForbiddenChat(char const*)
086c9941 +0x01e3:  test   %al,%al
086c9943 +0x01e5:  je     086c9a84 <+0x326>
086c9949 +0x01eb:  mov    0xc(%ebp),%eax
086c994c +0x01ee:  mov    %eax,(%esp)
086c994f +0x01f1:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9954 +0x01f6:  mov    %eax,0x4(%esp)
086c9958 +0x01fa:  mov    0x8(%ebp),%eax
086c995b +0x01fd:  mov    %eax,(%esp)
086c995e +0x0200:  call   086ce73c <_ZN9GameWorld26GetLeftTimeOfForbiddenChatEPKc>  ; GameWorld::GetLeftTimeOfForbiddenChat(char const*)
086c9963 +0x0205:  mov    %eax,-0x50(%ebp)
086c9966 +0x0208:  cmpl   $0x0,-0x50(%ebp)
086c996a +0x020c:  je     086c9a65 <+0x307>
086c9970 +0x0212:  movl   $0xc,0x8(%esp)
086c9978 +0x021a:  movl   $0x0,0x4(%esp)
086c9980 +0x0222:  lea    -0x88(%ebp),%eax
086c9986 +0x0228:  mov    %eax,(%esp)
086c9989 +0x022b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c998e +0x0230:  movl   $0xa,0x4(%esp)
086c9996 +0x0238:  lea    -0x88(%ebp),%eax
086c999c +0x023e:  mov    %eax,(%esp)
086c999f +0x0241:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c99a4 +0x0246:  movl   $0x0,0x4(%esp)
086c99ac +0x024e:  lea    -0x88(%ebp),%eax
086c99b2 +0x0254:  mov    %eax,(%esp)
086c99b5 +0x0257:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c99ba +0x025c:  mov    0xc(%ebp),%eax
086c99bd +0x025f:  mov    %eax,(%esp)
086c99c0 +0x0262:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c99c5 +0x0267:  mov    %eax,%ebx
086c99c7 +0x0269:  movl   $0x0,0xc(%esp)
086c99cf +0x0271:  movl   $0xdf3,0x8(%esp)
086c99d7 +0x0279:  movl   $&_ZZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x4(%esp)
086c99df +0x0281:  lea    -0x78(%ebp),%eax
086c99e2 +0x0284:  mov    %eax,(%esp)
086c99e5 +0x0287:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c99ea +0x028c:  mov    -0x50(%ebp),%eax
086c99ed +0x028f:  mov    %eax,0xc(%esp)
086c99f1 +0x0293:  mov    %ebx,0x8(%esp)
086c99f5 +0x0297:  movl   $"%s is forbidden to chat for %d msec.\n",0x4(%esp)
086c99fd +0x029f:  lea    -0x78(%ebp),%eax
086c9a00 +0x02a2:  mov    %eax,(%esp)
086c9a03 +0x02a5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c9a08 +0x02aa:  mov    -0x50(%ebp),%eax
086c9a0b +0x02ad:  mov    %eax,-0x1fc(%ebp)
086c9a11 +0x02b3:  mov    $0x45e7b273,%edx
086c9a16 +0x02b8:  mov    -0x1fc(%ebp),%eax
086c9a1c +0x02be:  mul    %edx
086c9a1e +0x02c0:  mov    %edx,%eax
086c9a20 +0x02c2:  shr    $0xe,%eax
086c9a23 +0x02c5:  mov    %eax,0x4(%esp)
086c9a27 +0x02c9:  lea    -0x88(%ebp),%eax
086c9a2d +0x02cf:  mov    %eax,(%esp)
086c9a30 +0x02d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9a35 +0x02d7:  movl   $0x1,0x4(%esp)
086c9a3d +0x02df:  lea    -0x88(%ebp),%eax
086c9a43 +0x02e5:  mov    %eax,(%esp)
086c9a46 +0x02e8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c9a4b +0x02ed:  lea    -0x88(%ebp),%eax
086c9a51 +0x02f3:  mov    %eax,0x4(%esp)
086c9a55 +0x02f7:  mov    0xc(%ebp),%eax
086c9a58 +0x02fa:  mov    %eax,(%esp)
086c9a5b +0x02fd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c9a60 +0x0302:  jmp    086cab79 <+0x141b>
086c9a65 +0x0307:  mov    0xc(%ebp),%eax
086c9a68 +0x030a:  mov    %eax,(%esp)
086c9a6b +0x030d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9a70 +0x0312:  mov    %eax,0x4(%esp)
086c9a74 +0x0316:  mov    0x8(%ebp),%eax
086c9a77 +0x0319:  mov    %eax,(%esp)
086c9a7a +0x031c:  call   086cdc60 <_ZN9GameWorld10EnableChatEPKc>  ; GameWorld::EnableChat(char const*)
086c9a7f +0x0321:  jmp    086cab79 <+0x141b>
086c9a84 +0x0326:  movsbl -0x1ec(%ebp),%eax
086c9a8b +0x032d:  mov    0x1c(%ebp),%edx
086c9a8e +0x0330:  mov    %edx,0xc(%esp)
086c9a92 +0x0334:  mov    %eax,0x8(%esp)
086c9a96 +0x0338:  mov    0xc(%ebp),%eax
086c9a99 +0x033b:  mov    %eax,0x4(%esp)
086c9a9d +0x033f:  mov    0x8(%ebp),%eax
086c9aa0 +0x0342:  mov    %eax,(%esp)
086c9aa3 +0x0345:  call   086c9638 <_ZN9GameWorld15WriteLogChatMsgEP5CUsercPc>  ; GameWorld::WriteLogChatMsg(CUser*, char, char*)
086c9aa8 +0x034a:  movsbl -0x1ec(%ebp),%eax
086c9aaf +0x0351:  cmp    $0x28,%eax
086c9ab2 +0x0354:  ja     086cab79 <+0x141b>
086c9ab8 +0x035a:  mov    &data#fe849695(.rodata)(,%eax,4),%eax
086c9abf +0x0361:  jmp    *%eax
086c9ac1 +0x0363:  cmpl   $0x0,0xc(%ebp)
086c9ac5 +0x0367:  je     086c9adf <+0x381>
086c9ac7 +0x0369:  mov    0xc(%ebp),%eax
086c9aca +0x036c:  mov    %eax,(%esp)
086c9acd +0x036f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c9ad2 +0x0374:  mov    $0x1,%eax
086c9ad7 +0x0379:  test   %al,%al
086c9ad9 +0x037b:  jne    086cab79 <+0x141b>
086c9adf +0x0381:  movsbl -0x1ec(%ebp),%eax
086c9ae6 +0x0388:  mov    0x2c(%ebp),%edx
086c9ae9 +0x038b:  mov    %edx,0x18(%esp)
086c9aed +0x038f:  mov    %eax,0x14(%esp)
086c9af1 +0x0393:  mov    0x20(%ebp),%eax
086c9af4 +0x0396:  mov    %eax,0x10(%esp)
086c9af8 +0x039a:  mov    0x1c(%ebp),%eax
086c9afb +0x039d:  mov    %eax,0xc(%esp)
086c9aff +0x03a1:  mov    0xc(%ebp),%eax
086c9b02 +0x03a4:  mov    %eax,0x8(%esp)
086c9b06 +0x03a8:  lea    -0x88(%ebp),%eax
086c9b0c +0x03ae:  mov    %eax,0x4(%esp)
086c9b10 +0x03b2:  mov    0x8(%ebp),%eax
086c9b13 +0x03b5:  mov    %eax,(%esp)
086c9b16 +0x03b8:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086c9b1b +0x03bd:  lea    -0x88(%ebp),%eax
086c9b21 +0x03c3:  mov    %eax,0x4(%esp)
086c9b25 +0x03c7:  mov    0x8(%ebp),%eax
086c9b28 +0x03ca:  mov    %eax,(%esp)
086c9b2b +0x03cd:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086c9b30 +0x03d2:  jmp    086cab79 <+0x141b>
086c9b35 +0x03d7:  movzwl -0x1f0(%ebp),%eax
086c9b3c +0x03de:  mov    %eax,0x4(%esp)
086c9b40 +0x03e2:  mov    0x8(%ebp),%eax
086c9b43 +0x03e5:  mov    %eax,(%esp)
086c9b46 +0x03e8:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
086c9b4b +0x03ed:  mov    %eax,-0x4c(%ebp)
086c9b4e +0x03f0:  cmpl   $0x0,-0x4c(%ebp)
086c9b52 +0x03f4:  je     086ca0b9 <+0x95b>
086c9b58 +0x03fa:  lea    -0x9c(%ebp),%eax
086c9b5e +0x0400:  mov    %eax,(%esp)
086c9b61 +0x0403:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c9b66 +0x0408:  movl   $0xffffffff,0x4(%esp)
086c9b6e +0x0410:  mov    0xc(%ebp),%eax
086c9b71 +0x0413:  mov    %eax,(%esp)
086c9b74 +0x0416:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086c9b79 +0x041b:  mov    %eax,0x4(%esp)
086c9b7d +0x041f:  mov    -0x4c(%ebp),%eax
086c9b80 +0x0422:  mov    %eax,(%esp)
086c9b83 +0x0425:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
086c9b88 +0x042a:  test   %al,%al
086c9b8a +0x042c:  jne    086c9bb2 <+0x454>
086c9b8c +0x042e:  movl   $0xffffffff,0x4(%esp)
086c9b94 +0x0436:  mov    -0x4c(%ebp),%eax
086c9b97 +0x0439:  mov    %eax,(%esp)
086c9b9a +0x043c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086c9b9f +0x0441:  mov    %eax,0x4(%esp)
086c9ba3 +0x0445:  mov    0xc(%ebp),%eax
086c9ba6 +0x0448:  mov    %eax,(%esp)
086c9ba9 +0x044b:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
086c9bae +0x0450:  test   %al,%al
086c9bb0 +0x0452:  je     086c9bb9 <+0x45b>
086c9bb2 +0x0454:  mov    $0x1,%eax
086c9bb7 +0x0459:  jmp    086c9bbe <+0x460>
086c9bb9 +0x045b:  mov    $0x0,%eax
086c9bbe +0x0460:  test   %al,%al
086c9bc0 +0x0462:  je     086c9cde <+0x580>
086c9bc6 +0x0468:  movl   $0x41,0x8(%esp)
086c9bce +0x0470:  movl   $0x0,0x4(%esp)
086c9bd6 +0x0478:  lea    -0x9c(%ebp),%eax
086c9bdc +0x047e:  mov    %eax,(%esp)
086c9bdf +0x0481:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c9be4 +0x0486:  movsbl -0x1ec(%ebp),%eax
086c9beb +0x048d:  mov    %eax,0x4(%esp)
086c9bef +0x0491:  lea    -0x9c(%ebp),%eax
086c9bf5 +0x0497:  mov    %eax,(%esp)
086c9bf8 +0x049a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9bfd +0x049f:  movl   $0x4d,0x4(%esp)
086c9c05 +0x04a7:  lea    -0x9c(%ebp),%eax
086c9c0b +0x04ad:  mov    %eax,(%esp)
086c9c0e +0x04b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9c13 +0x04b5:  mov    -0x4c(%ebp),%eax
086c9c16 +0x04b8:  mov    %eax,(%esp)
086c9c19 +0x04bb:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9c1e +0x04c0:  mov    %eax,(%esp)
086c9c21 +0x04c3:  call   0807e3b0 <_init+0xca8>
086c9c26 +0x04c8:  mov    %eax,-0x44(%ebp)
086c9c29 +0x04cb:  mov    -0x44(%ebp),%eax
086c9c2c +0x04ce:  mov    %eax,0x4(%esp)
086c9c30 +0x04d2:  lea    -0x9c(%ebp),%eax
086c9c36 +0x04d8:  mov    %eax,(%esp)
086c9c39 +0x04db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9c3e +0x04e0:  mov    -0x4c(%ebp),%eax
086c9c41 +0x04e3:  mov    %eax,(%esp)
086c9c44 +0x04e6:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9c49 +0x04eb:  mov    -0x44(%ebp),%edx
086c9c4c +0x04ee:  mov    %edx,0x8(%esp)
086c9c50 +0x04f2:  mov    %eax,0x4(%esp)
086c9c54 +0x04f6:  lea    -0x9c(%ebp),%eax
086c9c5a +0x04fc:  mov    %eax,(%esp)
086c9c5d +0x04ff:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086c9c62 +0x0504:  movl   $0x0,0x4(%esp)
086c9c6a +0x050c:  lea    -0x9c(%ebp),%eax
086c9c70 +0x0512:  mov    %eax,(%esp)
086c9c73 +0x0515:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9c78 +0x051a:  mov    0x20(%ebp),%eax
086c9c7b +0x051d:  mov    %eax,0x4(%esp)
086c9c7f +0x0521:  lea    -0x9c(%ebp),%eax
086c9c85 +0x0527:  mov    %eax,(%esp)
086c9c88 +0x052a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9c8d +0x052f:  mov    0x20(%ebp),%eax
086c9c90 +0x0532:  mov    %eax,0x8(%esp)
086c9c94 +0x0536:  mov    0x1c(%ebp),%eax
086c9c97 +0x0539:  mov    %eax,0x4(%esp)
086c9c9b +0x053d:  lea    -0x9c(%ebp),%eax
086c9ca1 +0x0543:  mov    %eax,(%esp)
086c9ca4 +0x0546:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086c9ca9 +0x054b:  movl   $0x1,0x4(%esp)
086c9cb1 +0x0553:  lea    -0x9c(%ebp),%eax
086c9cb7 +0x0559:  mov    %eax,(%esp)
086c9cba +0x055c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c9cbf +0x0561:  lea    -0x9c(%ebp),%eax
086c9cc5 +0x0567:  mov    %eax,0x4(%esp)
086c9cc9 +0x056b:  mov    0xc(%ebp),%eax
086c9ccc +0x056e:  mov    %eax,(%esp)
086c9ccf +0x0571:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c9cd4 +0x0576:  mov    $0x0,%ebx
086c9cd9 +0x057b:  jmp    086ca0a4 <+0x946>
086c9cde +0x0580:  mov    -0x4c(%ebp),%eax
086c9ce1 +0x0583:  mov    %eax,(%esp)
086c9ce4 +0x0586:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c9ce9 +0x058b:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
086c9cef +0x0591:  mov    %eax,0x4(%esp)
086c9cf3 +0x0595:  mov    %edx,(%esp)
086c9cf6 +0x0598:  call   0829948c <_ZN11CGM_Manager4IsGmEj>  ; CGM_Manager::IsGm(unsigned int)
086c9cfb +0x059d:  test   %al,%al
086c9cfd +0x059f:  je     086c9e1b <+0x6bd>
086c9d03 +0x05a5:  movl   $0x41,0x8(%esp)
086c9d0b +0x05ad:  movl   $0x0,0x4(%esp)
086c9d13 +0x05b5:  lea    -0x9c(%ebp),%eax
086c9d19 +0x05bb:  mov    %eax,(%esp)
086c9d1c +0x05be:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c9d21 +0x05c3:  movsbl -0x1ec(%ebp),%eax
086c9d28 +0x05ca:  mov    %eax,0x4(%esp)
086c9d2c +0x05ce:  lea    -0x9c(%ebp),%eax
086c9d32 +0x05d4:  mov    %eax,(%esp)
086c9d35 +0x05d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9d3a +0x05dc:  movl   $0x5a,0x4(%esp)
086c9d42 +0x05e4:  lea    -0x9c(%ebp),%eax
086c9d48 +0x05ea:  mov    %eax,(%esp)
086c9d4b +0x05ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9d50 +0x05f2:  mov    -0x4c(%ebp),%eax
086c9d53 +0x05f5:  mov    %eax,(%esp)
086c9d56 +0x05f8:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9d5b +0x05fd:  mov    %eax,(%esp)
086c9d5e +0x0600:  call   0807e3b0 <_init+0xca8>
086c9d63 +0x0605:  mov    %eax,-0x40(%ebp)
086c9d66 +0x0608:  mov    -0x40(%ebp),%eax
086c9d69 +0x060b:  mov    %eax,0x4(%esp)
086c9d6d +0x060f:  lea    -0x9c(%ebp),%eax
086c9d73 +0x0615:  mov    %eax,(%esp)
086c9d76 +0x0618:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9d7b +0x061d:  mov    -0x4c(%ebp),%eax
086c9d7e +0x0620:  mov    %eax,(%esp)
086c9d81 +0x0623:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9d86 +0x0628:  mov    -0x40(%ebp),%edx
086c9d89 +0x062b:  mov    %edx,0x8(%esp)
086c9d8d +0x062f:  mov    %eax,0x4(%esp)
086c9d91 +0x0633:  lea    -0x9c(%ebp),%eax
086c9d97 +0x0639:  mov    %eax,(%esp)
086c9d9a +0x063c:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086c9d9f +0x0641:  movl   $0x0,0x4(%esp)
086c9da7 +0x0649:  lea    -0x9c(%ebp),%eax
086c9dad +0x064f:  mov    %eax,(%esp)
086c9db0 +0x0652:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9db5 +0x0657:  mov    0x20(%ebp),%eax
086c9db8 +0x065a:  mov    %eax,0x4(%esp)
086c9dbc +0x065e:  lea    -0x9c(%ebp),%eax
086c9dc2 +0x0664:  mov    %eax,(%esp)
086c9dc5 +0x0667:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9dca +0x066c:  mov    0x20(%ebp),%eax
086c9dcd +0x066f:  mov    %eax,0x8(%esp)
086c9dd1 +0x0673:  mov    0x1c(%ebp),%eax
086c9dd4 +0x0676:  mov    %eax,0x4(%esp)
086c9dd8 +0x067a:  lea    -0x9c(%ebp),%eax
086c9dde +0x0680:  mov    %eax,(%esp)
086c9de1 +0x0683:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086c9de6 +0x0688:  movl   $0x1,0x4(%esp)
086c9dee +0x0690:  lea    -0x9c(%ebp),%eax
086c9df4 +0x0696:  mov    %eax,(%esp)
086c9df7 +0x0699:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c9dfc +0x069e:  lea    -0x9c(%ebp),%eax
086c9e02 +0x06a4:  mov    %eax,0x4(%esp)
086c9e06 +0x06a8:  mov    0xc(%ebp),%eax
086c9e09 +0x06ab:  mov    %eax,(%esp)
086c9e0c +0x06ae:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c9e11 +0x06b3:  mov    $0x0,%ebx
086c9e16 +0x06b8:  jmp    086ca0a4 <+0x946>
086c9e1b +0x06bd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086c9e20 +0x06c2:  mov    %eax,(%esp)
086c9e23 +0x06c5:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
086c9e28 +0x06ca:  test   %al,%al
086c9e2a +0x06cc:  je     086c9e4f <+0x6f1>
086c9e2c +0x06ce:  mov    0xc(%ebp),%eax
086c9e2f +0x06d1:  mov    %eax,(%esp)
086c9e32 +0x06d4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086c9e37 +0x06d9:  mov    %eax,%ebx
086c9e39 +0x06db:  mov    -0x4c(%ebp),%eax
086c9e3c +0x06de:  mov    %eax,(%esp)
086c9e3f +0x06e1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086c9e44 +0x06e6:  cmp    %eax,%ebx
086c9e46 +0x06e8:  je     086c9e4f <+0x6f1>
086c9e48 +0x06ea:  mov    $0x1,%eax
086c9e4d +0x06ef:  jmp    086c9e54 <+0x6f6>
086c9e4f +0x06f1:  mov    $0x0,%eax
086c9e54 +0x06f6:  test   %al,%al
086c9e56 +0x06f8:  je     086c9f74 <+0x816>
086c9e5c +0x06fe:  movl   $0x41,0x8(%esp)
086c9e64 +0x0706:  movl   $0x0,0x4(%esp)
086c9e6c +0x070e:  lea    -0x9c(%ebp),%eax
086c9e72 +0x0714:  mov    %eax,(%esp)
086c9e75 +0x0717:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c9e7a +0x071c:  movsbl -0x1ec(%ebp),%eax
086c9e81 +0x0723:  mov    %eax,0x4(%esp)
086c9e85 +0x0727:  lea    -0x9c(%ebp),%eax
086c9e8b +0x072d:  mov    %eax,(%esp)
086c9e8e +0x0730:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9e93 +0x0735:  movl   $0x15,0x4(%esp)
086c9e9b +0x073d:  lea    -0x9c(%ebp),%eax
086c9ea1 +0x0743:  mov    %eax,(%esp)
086c9ea4 +0x0746:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9ea9 +0x074b:  mov    -0x4c(%ebp),%eax
086c9eac +0x074e:  mov    %eax,(%esp)
086c9eaf +0x0751:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9eb4 +0x0756:  mov    %eax,(%esp)
086c9eb7 +0x0759:  call   0807e3b0 <_init+0xca8>
086c9ebc +0x075e:  mov    %eax,-0x3c(%ebp)
086c9ebf +0x0761:  mov    -0x3c(%ebp),%eax
086c9ec2 +0x0764:  mov    %eax,0x4(%esp)
086c9ec6 +0x0768:  lea    -0x9c(%ebp),%eax
086c9ecc +0x076e:  mov    %eax,(%esp)
086c9ecf +0x0771:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9ed4 +0x0776:  mov    -0x4c(%ebp),%eax
086c9ed7 +0x0779:  mov    %eax,(%esp)
086c9eda +0x077c:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9edf +0x0781:  mov    -0x3c(%ebp),%edx
086c9ee2 +0x0784:  mov    %edx,0x8(%esp)
086c9ee6 +0x0788:  mov    %eax,0x4(%esp)
086c9eea +0x078c:  lea    -0x9c(%ebp),%eax
086c9ef0 +0x0792:  mov    %eax,(%esp)
086c9ef3 +0x0795:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086c9ef8 +0x079a:  movl   $0x0,0x4(%esp)
086c9f00 +0x07a2:  lea    -0x9c(%ebp),%eax
086c9f06 +0x07a8:  mov    %eax,(%esp)
086c9f09 +0x07ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9f0e +0x07b0:  mov    0x20(%ebp),%eax
086c9f11 +0x07b3:  mov    %eax,0x4(%esp)
086c9f15 +0x07b7:  lea    -0x9c(%ebp),%eax
086c9f1b +0x07bd:  mov    %eax,(%esp)
086c9f1e +0x07c0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9f23 +0x07c5:  mov    0x20(%ebp),%eax
086c9f26 +0x07c8:  mov    %eax,0x8(%esp)
086c9f2a +0x07cc:  mov    0x1c(%ebp),%eax
086c9f2d +0x07cf:  mov    %eax,0x4(%esp)
086c9f31 +0x07d3:  lea    -0x9c(%ebp),%eax
086c9f37 +0x07d9:  mov    %eax,(%esp)
086c9f3a +0x07dc:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086c9f3f +0x07e1:  movl   $0x1,0x4(%esp)
086c9f47 +0x07e9:  lea    -0x9c(%ebp),%eax
086c9f4d +0x07ef:  mov    %eax,(%esp)
086c9f50 +0x07f2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c9f55 +0x07f7:  lea    -0x9c(%ebp),%eax
086c9f5b +0x07fd:  mov    %eax,0x4(%esp)
086c9f5f +0x0801:  mov    0xc(%ebp),%eax
086c9f62 +0x0804:  mov    %eax,(%esp)
086c9f65 +0x0807:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c9f6a +0x080c:  mov    $0x0,%ebx
086c9f6f +0x0811:  jmp    086ca0a4 <+0x946>
086c9f74 +0x0816:  movl   $0x41,0x8(%esp)
086c9f7c +0x081e:  movl   $0x0,0x4(%esp)
086c9f84 +0x0826:  lea    -0x9c(%ebp),%eax
086c9f8a +0x082c:  mov    %eax,(%esp)
086c9f8d +0x082f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c9f92 +0x0834:  movsbl -0x1ec(%ebp),%eax
086c9f99 +0x083b:  mov    %eax,0x4(%esp)
086c9f9d +0x083f:  lea    -0x9c(%ebp),%eax
086c9fa3 +0x0845:  mov    %eax,(%esp)
086c9fa6 +0x0848:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9fab +0x084d:  movl   $0x0,0x4(%esp)
086c9fb3 +0x0855:  lea    -0x9c(%ebp),%eax
086c9fb9 +0x085b:  mov    %eax,(%esp)
086c9fbc +0x085e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9fc1 +0x0863:  mov    0xc(%ebp),%eax
086c9fc4 +0x0866:  mov    %eax,(%esp)
086c9fc7 +0x0869:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9fcc +0x086e:  mov    %eax,(%esp)
086c9fcf +0x0871:  call   0807e3b0 <_init+0xca8>
086c9fd4 +0x0876:  mov    %eax,-0x48(%ebp)
086c9fd7 +0x0879:  mov    -0x48(%ebp),%eax
086c9fda +0x087c:  mov    %eax,0x4(%esp)
086c9fde +0x0880:  lea    -0x9c(%ebp),%eax
086c9fe4 +0x0886:  mov    %eax,(%esp)
086c9fe7 +0x0889:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9fec +0x088e:  mov    0xc(%ebp),%eax
086c9fef +0x0891:  mov    %eax,(%esp)
086c9ff2 +0x0894:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c9ff7 +0x0899:  mov    -0x48(%ebp),%edx
086c9ffa +0x089c:  mov    %edx,0x8(%esp)
086c9ffe +0x08a0:  mov    %eax,0x4(%esp)
086ca002 +0x08a4:  lea    -0x9c(%ebp),%eax
086ca008 +0x08aa:  mov    %eax,(%esp)
086ca00b +0x08ad:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086ca010 +0x08b2:  movl   $0x0,0x4(%esp)
086ca018 +0x08ba:  lea    -0x9c(%ebp),%eax
086ca01e +0x08c0:  mov    %eax,(%esp)
086ca021 +0x08c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086ca026 +0x08c8:  mov    0x20(%ebp),%eax
086ca029 +0x08cb:  mov    %eax,0x4(%esp)
086ca02d +0x08cf:  lea    -0x9c(%ebp),%eax
086ca033 +0x08d5:  mov    %eax,(%esp)
086ca036 +0x08d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086ca03b +0x08dd:  mov    0x20(%ebp),%eax
086ca03e +0x08e0:  mov    %eax,0x8(%esp)
086ca042 +0x08e4:  mov    0x1c(%ebp),%eax
086ca045 +0x08e7:  mov    %eax,0x4(%esp)
086ca049 +0x08eb:  lea    -0x9c(%ebp),%eax
086ca04f +0x08f1:  mov    %eax,(%esp)
086ca052 +0x08f4:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086ca057 +0x08f9:  movl   $0x1,0x4(%esp)
086ca05f +0x0901:  lea    -0x9c(%ebp),%eax
086ca065 +0x0907:  mov    %eax,(%esp)
086ca068 +0x090a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086ca06d +0x090f:  lea    -0x9c(%ebp),%eax
086ca073 +0x0915:  mov    %eax,0x4(%esp)
086ca077 +0x0919:  mov    -0x4c(%ebp),%eax
086ca07a +0x091c:  mov    %eax,(%esp)
086ca07d +0x091f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086ca082 +0x0924:  mov    $0x1,%ebx
086ca087 +0x0929:  jmp    086ca0a4 <+0x946>
086ca089 +0x092b:  mov    %edx,%ebx
086ca08b +0x092d:  mov    %eax,%esi
086ca08d +0x092f:  lea    -0x9c(%ebp),%eax
086ca093 +0x0935:  mov    %eax,(%esp)
086ca096 +0x0938:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086ca09b +0x093d:  mov    %esi,%eax
086ca09d +0x093f:  mov    %ebx,%edx
086ca09f +0x0941:  jmp    086cab54 <+0x13f6>
086ca0a4 +0x0946:  lea    -0x9c(%ebp),%eax
086ca0aa +0x094c:  mov    %eax,(%esp)
086ca0ad +0x094f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086ca0b2 +0x0954:  test   %ebx,%ebx
086ca0b4 +0x0956:  jmp    086cab79 <+0x141b>
086ca0b9 +0x095b:  lea    -0x1e3(%ebp),%eax
086ca0bf +0x0961:  mov    %eax,(%esp)
086ca0c2 +0x0964:  call   0822b8e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xf90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xf90
086ca0c7 +0x0969:  mov    0xc(%ebp),%eax
086ca0ca +0x096c:  mov    %eax,(%esp)
086ca0cd +0x096f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086ca0d2 +0x0974:  mov    %eax,-0x1d0(%ebp)
086ca0d8 +0x097a:  mov    0x18(%ebp),%eax
086ca0db +0x097d:  mov    %eax,-0x1cc(%ebp)
086ca0e1 +0x0983:  mov    0x20(%ebp),%eax
086ca0e4 +0x0986:  mov    %al,-0x1a9(%ebp)
086ca0ea +0x098c:  mov    0x20(%ebp),%eax
086ca0ed +0x098f:  mov    %eax,0x8(%esp)
086ca0f1 +0x0993:  mov    0x1c(%ebp),%eax
086ca0f4 +0x0996:  mov    %eax,0x4(%esp)
086ca0f8 +0x099a:  lea    -0x1e3(%ebp),%eax
086ca0fe +0x09a0:  add    $0x3b,%eax
086ca101 +0x09a3:  mov    %eax,(%esp)
086ca104 +0x09a6:  call   0807d8a0 <_init+0x198>
086ca109 +0x09ab:  mov    0x28(%ebp),%eax
086ca10c +0x09ae:  mov    %al,-0x1c8(%ebp)
086ca112 +0x09b4:  mov    0x28(%ebp),%eax
086ca115 +0x09b7:  mov    %eax,0x8(%esp)
086ca119 +0x09bb:  mov    0x24(%ebp),%eax
086ca11c +0x09be:  mov    %eax,0x4(%esp)
086ca120 +0x09c2:  lea    -0x1e3(%ebp),%eax
086ca126 +0x09c8:  add    $0x1c,%eax
086ca129 +0x09cb:  mov    %eax,(%esp)
086ca12c +0x09ce:  call   0807d8a0 <_init+0x198>
086ca131 +0x09d3:  movsbl -0x1ec(%ebp),%eax
086ca138 +0x09da:  mov    %eax,-0x1d9(%ebp)
086ca13e +0x09e0:  mov    0x20(%ebp),%eax
086ca141 +0x09e3:  add    $0x3b,%eax
086ca144 +0x09e6:  mov    %ax,-0x1e1(%ebp)
086ca14b +0x09ed:  movzwl -0x1e1(%ebp),%eax
086ca152 +0x09f4:  movzwl %ax,%eax
086ca155 +0x09f7:  mov    %eax,-0x38(%ebp)
086ca158 +0x09fa:  lea    -0x1e3(%ebp),%ebx
086ca15e +0x0a00:  mov    0xc(%ebp),%eax
086ca161 +0x0a03:  mov    %eax,(%esp)
086ca164 +0x0a06:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086ca169 +0x0a0b:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086ca16f +0x0a11:  mov    %eax,0x4(%esp)
086ca173 +0x0a15:  mov    %edx,(%esp)
086ca176 +0x0a18:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086ca17b +0x0a1d:  mov    -0x38(%ebp),%edx
086ca17e +0x0a20:  mov    %edx,0x8(%esp)
086ca182 +0x0a24:  mov    %ebx,0x4(%esp)
086ca186 +0x0a28:  mov    %eax,(%esp)
086ca189 +0x0a2b:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
086ca18e +0x0a30:  jmp    086cab79 <+0x141b>
086ca193 +0x0a35:  cmpl   $0x0,0xc(%ebp)
086ca197 +0x0a39:  je     086cab79 <+0x141b>
086ca19d +0x0a3f:  movsbl -0x1ec(%ebp),%eax
086ca1a4 +0x0a46:  mov    0x2c(%ebp),%edx
086ca1a7 +0x0a49:  mov    %edx,0x18(%esp)
086ca1ab +0x0a4d:  mov    %eax,0x14(%esp)
086ca1af +0x0a51:  mov    0x20(%ebp),%eax
086ca1b2 +0x0a54:  mov    %eax,0x10(%esp)
086ca1b6 +0x0a58:  mov    0x1c(%ebp),%eax
086ca1b9 +0x0a5b:  mov    %eax,0xc(%esp)
086ca1bd +0x0a5f:  mov    0xc(%ebp),%eax
086ca1c0 +0x0a62:  mov    %eax,0x8(%esp)
086ca1c4 +0x0a66:  lea    -0x88(%ebp),%eax
086ca1ca +0x0a6c:  mov    %eax,0x4(%esp)
086ca1ce +0x0a70:  mov    0x8(%ebp),%eax
086ca1d1 +0x0a73:  mov    %eax,(%esp)
086ca1d4 +0x0a76:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086ca1d9 +0x0a7b:  mov    0xc(%ebp),%eax
086ca1dc +0x0a7e:  mov    %eax,(%esp)
086ca1df +0x0a81:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086ca1e4 +0x0a86:  mov    %eax,-0x34(%ebp)
086ca1e7 +0x0a89:  cmpl   $0x0,-0x34(%ebp)
086ca1eb +0x0a8d:  je     086cab72 <+0x1414>
086ca1f1 +0x0a93:  lea    -0x88(%ebp),%eax
086ca1f7 +0x0a99:  mov    %eax,0x4(%esp)
086ca1fb +0x0a9d:  mov    -0x34(%ebp),%eax
086ca1fe +0x0aa0:  mov    %eax,(%esp)
086ca201 +0x0aa3:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
086ca206 +0x0aa8:  jmp    086cab79 <+0x141b>
086ca20b +0x0aad:  movl   $0x0,-0x30(%ebp)
086ca212 +0x0ab4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086ca217 +0x0ab9:  mov    0xc(%ebp),%edx
086ca21a +0x0abc:  mov    %edx,0x4(%esp)
086ca21e +0x0ac0:  mov    %eax,(%esp)
086ca221 +0x0ac3:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086ca226 +0x0ac8:  mov    %eax,-0x30(%ebp)
086ca229 +0x0acb:  cmpl   $0x0,-0x30(%ebp)
086ca22d +0x0acf:  sete   %al
086ca230 +0x0ad2:  test   %al,%al
086ca232 +0x0ad4:  je     086ca26f <+0xb11>
086ca234 +0x0ad6:  movl   $0x5,0xc(%esp)
086ca23c +0x0ade:  movl   $0xf1d,0x8(%esp)
086ca244 +0x0ae6:  movl   $&_ZZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x4(%esp)
086ca24c +0x0aee:  lea    -0x68(%ebp),%eax
086ca24f +0x0af1:  mov    %eax,(%esp)
086ca252 +0x0af4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ca257 +0x0af9:  movl   $"getUserVillage() call failed",0x4(%esp)
086ca25f +0x0b01:  lea    -0x68(%ebp),%eax
086ca262 +0x0b04:  mov    %eax,(%esp)
086ca265 +0x0b07:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ca26a +0x0b0c:  jmp    086cab79 <+0x141b>
086ca26f +0x0b11:  mov    -0x30(%ebp),%eax
086ca272 +0x0b14:  mov    %eax,(%esp)
086ca275 +0x0b17:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
086ca27a +0x0b1c:  mov    %eax,%ebx
086ca27c +0x0b1e:  movl   $0x0,0x4(%esp)
086ca284 +0x0b26:  mov    0xc(%ebp),%eax
086ca287 +0x0b29:  mov    %eax,(%esp)
086ca28a +0x0b2c:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086ca28f +0x0b31:  cmp    %eax,%ebx
086ca291 +0x0b33:  je     086ca2b5 <+0xb57>
086ca293 +0x0b35:  mov    0xc(%ebp),%eax
086ca296 +0x0b38:  mov    %eax,(%esp)
086ca299 +0x0b3b:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086ca29e +0x0b40:  cmp    $0x8,%al
086ca2a0 +0x0b42:  je     086ca2b5 <+0xb57>
086ca2a2 +0x0b44:  cmpl   $0x72,0x2c(%ebp)
086ca2a6 +0x0b48:  je     086ca2b5 <+0xb57>
086ca2a8 +0x0b4a:  cmpl   $0x77,0x2c(%ebp)
086ca2ac +0x0b4e:  je     086ca2b5 <+0xb57>
086ca2ae +0x0b50:  mov    $0x1,%eax
086ca2b3 +0x0b55:  jmp    086ca2ba <+0xb5c>
086ca2b5 +0x0b57:  mov    $0x0,%eax
086ca2ba +0x0b5c:  test   %al,%al
086ca2bc +0x0b5e:  je     086ca3de <+0xc80>
086ca2c2 +0x0b64:  mov    0xc(%ebp),%eax
086ca2c5 +0x0b67:  mov    %eax,(%esp)
086ca2c8 +0x0b6a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086ca2cd +0x0b6f:  mov    %eax,%ebx
086ca2cf +0x0b71:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ca2d4 +0x0b76:  add    $0x68,%eax
086ca2d7 +0x0b79:  mov    %ebx,0x4(%esp)
086ca2db +0x0b7d:  mov    %eax,(%esp)
086ca2de +0x0b80:  call   086d17ec <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d
086ca2e3 +0x0b85:  mov    %eax,%ebx
086ca2e5 +0x0b87:  lea    -0x51(%ebp),%eax
086ca2e8 +0x0b8a:  mov    %eax,(%esp)
086ca2eb +0x0b8d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ca2f0 +0x0b92:  lea    -0x51(%ebp),%eax
086ca2f3 +0x0b95:  mov    %eax,0x8(%esp)
086ca2f7 +0x0b99:  mov    0x1c(%ebp),%eax
086ca2fa +0x0b9c:  mov    %eax,0x4(%esp)
086ca2fe +0x0ba0:  lea    -0x58(%ebp),%eax
086ca301 +0x0ba3:  mov    %eax,(%esp)
086ca304 +0x0ba6:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ca309 +0x0bab:  lea    -0x58(%ebp),%eax
086ca30c +0x0bae:  mov    %eax,0x4(%esp)
086ca310 +0x0bb2:  mov    0xc(%ebp),%eax
086ca313 +0x0bb5:  mov    %eax,(%esp)
086ca316 +0x0bb8:  call   086887c4 <_ZN5CUser20isDuplicationMessageERKSs>  ; CUser::isDuplicationMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086ca31b +0x0bbd:  test   %al,%al
086ca31d +0x0bbf:  je     086ca331 <+0xbd3>
086ca31f +0x0bc1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ca324 +0x0bc6:  add    $0x68,%eax
086ca327 +0x0bc9:  mov    %eax,(%esp)
086ca32a +0x0bcc:  call   086d18ba <_GLOBAL__I_MAX_VILLAGE_NUM+0xeb>  ; global constructors keyed to MAX_VILLAGE_NUM+0xeb
086ca32f +0x0bd1:  jmp    086ca336 <+0xbd8>
086ca331 +0x0bd3:  mov    $0x1,%eax
086ca336 +0x0bd8:  imul   %ebx,%eax
086ca339 +0x0bdb:  mov    %eax,0x4(%esp)
086ca33d +0x0bdf:  mov    0xc(%ebp),%eax
086ca340 +0x0be2:  mov    %eax,(%esp)
086ca343 +0x0be5:  call   086d208e <_GLOBAL__I_MAX_VILLAGE_NUM+0x8bf>  ; global constructors keyed to MAX_VILLAGE_NUM+0x8bf
086ca348 +0x0bea:  lea    -0x58(%ebp),%eax
086ca34b +0x0bed:  mov    %eax,(%esp)
086ca34e +0x0bf0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ca353 +0x0bf5:  jmp    086ca382 <+0xc24>
086ca355 +0x0bf7:  mov    %edx,%ebx
086ca357 +0x0bf9:  mov    %eax,%esi
086ca359 +0x0bfb:  lea    -0x58(%ebp),%eax
086ca35c +0x0bfe:  mov    %eax,(%esp)
086ca35f +0x0c01:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ca364 +0x0c06:  mov    %esi,%eax
086ca366 +0x0c08:  mov    %ebx,%edx
086ca368 +0x0c0a:  jmp    086ca36a <+0xc0c>
086ca36a +0x0c0c:  mov    %edx,%ebx
086ca36c +0x0c0e:  mov    %eax,%esi
086ca36e +0x0c10:  lea    -0x51(%ebp),%eax
086ca371 +0x0c13:  mov    %eax,(%esp)
086ca374 +0x0c16:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ca379 +0x0c1b:  mov    %esi,%eax
086ca37b +0x0c1d:  mov    %ebx,%edx
086ca37d +0x0c1f:  jmp    086cab54 <+0x13f6>
086ca382 +0x0c24:  lea    -0x51(%ebp),%eax
086ca385 +0x0c27:  mov    %eax,(%esp)
086ca388 +0x0c2a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ca38d +0x0c2f:  mov    0xc(%ebp),%eax
086ca390 +0x0c32:  mov    %eax,(%esp)
086ca393 +0x0c35:  call   086d20aa <_GLOBAL__I_MAX_VILLAGE_NUM+0x8db>  ; global constructors keyed to MAX_VILLAGE_NUM+0x8db
086ca398 +0x0c3a:  mov    %eax,%ebx
086ca39a +0x0c3c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ca39f +0x0c41:  add    $0x68,%eax
086ca3a2 +0x0c44:  mov    %eax,(%esp)
086ca3a5 +0x0c47:  call   086d18ac <_GLOBAL__I_MAX_VILLAGE_NUM+0xdd>  ; global constructors keyed to MAX_VILLAGE_NUM+0xdd
086ca3aa +0x0c4c:  cmp    %eax,%ebx
086ca3ac +0x0c4e:  setg   %al
086ca3af +0x0c51:  test   %al,%al
086ca3b1 +0x0c53:  je     086ca3de <+0xc80>
086ca3b3 +0x0c55:  movl   $0x0,0x4(%esp)
086ca3bb +0x0c5d:  mov    0xc(%ebp),%eax
086ca3be +0x0c60:  mov    %eax,(%esp)
086ca3c1 +0x0c63:  call   08469a5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x13f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x13f
086ca3c6 +0x0c68:  movl   $0x0,0x4(%esp)
086ca3ce +0x0c70:  mov    0xc(%ebp),%eax
086ca3d1 +0x0c73:  mov    %eax,(%esp)
086ca3d4 +0x0c76:  call   086802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>  ; CUser::reqHumanCertify4ClearMap(bool)
086ca3d9 +0x0c7b:  jmp    086cab79 <+0x141b>
086ca3de +0x0c80:  cmpl   $0x0,0xc(%ebp)
086ca3e2 +0x0c84:  je     086cab79 <+0x141b>
086ca3e8 +0x0c8a:  movsbl -0x1ec(%ebp),%eax
086ca3ef +0x0c91:  mov    0x2c(%ebp),%edx
086ca3f2 +0x0c94:  mov    %edx,0x18(%esp)
086ca3f6 +0x0c98:  mov    %eax,0x14(%esp)
086ca3fa +0x0c9c:  mov    0x20(%ebp),%eax
086ca3fd +0x0c9f:  mov    %eax,0x10(%esp)
086ca401 +0x0ca3:  mov    0x1c(%ebp),%eax
086ca404 +0x0ca6:  mov    %eax,0xc(%esp)
086ca408 +0x0caa:  mov    0xc(%ebp),%eax
086ca40b +0x0cad:  mov    %eax,0x8(%esp)
086ca40f +0x0cb1:  lea    -0x88(%ebp),%eax
086ca415 +0x0cb7:  mov    %eax,0x4(%esp)
086ca419 +0x0cbb:  mov    0x8(%ebp),%eax
086ca41c +0x0cbe:  mov    %eax,(%esp)
086ca41f +0x0cc1:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086ca424 +0x0cc6:  movl   $0x0,0x4(%esp)
086ca42c +0x0cce:  mov    0xc(%ebp),%eax
086ca42f +0x0cd1:  mov    %eax,(%esp)
086ca432 +0x0cd4:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086ca437 +0x0cd9:  mov    %eax,%ebx
086ca439 +0x0cdb:  mov    0xc(%ebp),%eax
086ca43c +0x0cde:  mov    %eax,(%esp)
086ca43f +0x0ce1:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086ca444 +0x0ce6:  movsbl %al,%eax
086ca447 +0x0ce9:  lea    -0x88(%ebp),%edx
086ca44d +0x0cef:  mov    %edx,0xc(%esp)
086ca451 +0x0cf3:  mov    %ebx,0x8(%esp)
086ca455 +0x0cf7:  mov    %eax,0x4(%esp)
086ca459 +0x0cfb:  mov    0x8(%ebp),%eax
086ca45c +0x0cfe:  mov    %eax,(%esp)
086ca45f +0x0d01:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
086ca464 +0x0d06:  jmp    086cab79 <+0x141b>
086ca469 +0x0d0b:  movsbl -0x1ec(%ebp),%eax
086ca470 +0x0d12:  mov    0x2c(%ebp),%edx
086ca473 +0x0d15:  mov    %edx,0x18(%esp)
086ca477 +0x0d19:  mov    %eax,0x14(%esp)
086ca47b +0x0d1d:  mov    0x20(%ebp),%eax
086ca47e +0x0d20:  mov    %eax,0x10(%esp)
086ca482 +0x0d24:  mov    0x1c(%ebp),%eax
086ca485 +0x0d27:  mov    %eax,0xc(%esp)
086ca489 +0x0d2b:  mov    0xc(%ebp),%eax
086ca48c +0x0d2e:  mov    %eax,0x8(%esp)
086ca490 +0x0d32:  lea    -0x88(%ebp),%eax
086ca496 +0x0d38:  mov    %eax,0x4(%esp)
086ca49a +0x0d3c:  mov    0x8(%ebp),%eax
086ca49d +0x0d3f:  mov    %eax,(%esp)
086ca4a0 +0x0d42:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086ca4a5 +0x0d47:  lea    -0x88(%ebp),%eax
086ca4ab +0x0d4d:  mov    %eax,0x4(%esp)
086ca4af +0x0d51:  mov    0x8(%ebp),%eax
086ca4b2 +0x0d54:  mov    %eax,(%esp)
086ca4b5 +0x0d57:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086ca4ba +0x0d5c:  jmp    086cab79 <+0x141b>
086ca4bf +0x0d61:  cmpl   $0x0,0xc(%ebp)
086ca4c3 +0x0d65:  je     086cab79 <+0x141b>
086ca4c9 +0x0d6b:  movsbl -0x1ec(%ebp),%eax
086ca4d0 +0x0d72:  mov    0x2c(%ebp),%edx
086ca4d3 +0x0d75:  mov    %edx,0x18(%esp)
086ca4d7 +0x0d79:  mov    %eax,0x14(%esp)
086ca4db +0x0d7d:  mov    0x20(%ebp),%eax
086ca4de +0x0d80:  mov    %eax,0x10(%esp)
086ca4e2 +0x0d84:  mov    0x1c(%ebp),%eax
086ca4e5 +0x0d87:  mov    %eax,0xc(%esp)
086ca4e9 +0x0d8b:  mov    0xc(%ebp),%eax
086ca4ec +0x0d8e:  mov    %eax,0x8(%esp)
086ca4f0 +0x0d92:  lea    -0x88(%ebp),%eax
086ca4f6 +0x0d98:  mov    %eax,0x4(%esp)
086ca4fa +0x0d9c:  mov    0x8(%ebp),%eax
086ca4fd +0x0d9f:  mov    %eax,(%esp)
086ca500 +0x0da2:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086ca505 +0x0da7:  mov    0xc(%ebp),%eax
086ca508 +0x0daa:  mov    %eax,(%esp)
086ca50b +0x0dad:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
086ca510 +0x0db2:  test   %eax,%eax
086ca512 +0x0db4:  setne  %al
086ca515 +0x0db7:  test   %al,%al
086ca517 +0x0db9:  je     086ca544 <+0xde6>
086ca519 +0x0dbb:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086ca51e +0x0dc0:  lea    -0x88(%ebp),%edx
086ca524 +0x0dc6:  mov    %edx,0xc(%esp)
086ca528 +0x0dca:  movl   $0x0,0x8(%esp)
086ca530 +0x0dd2:  mov    0xc(%ebp),%edx
086ca533 +0x0dd5:  mov    %edx,0x4(%esp)
086ca537 +0x0dd9:  mov    %eax,(%esp)
086ca53a +0x0ddc:  call   082efb54 <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard>  ; pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)
086ca53f +0x0de1:  jmp    086cab79 <+0x141b>
086ca544 +0x0de6:  mov    0xc(%ebp),%eax
086ca547 +0x0de9:  mov    %eax,(%esp)
086ca54a +0x0dec:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
086ca54f +0x0df1:  movswl %ax,%ebx
086ca552 +0x0df4:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086ca557 +0x0df9:  movl   $0x0,0xc(%esp)
086ca55f +0x0e01:  mov    0xc(%ebp),%edx
086ca562 +0x0e04:  mov    %edx,0x8(%esp)
086ca566 +0x0e08:  mov    %ebx,0x4(%esp)
086ca56a +0x0e0c:  mov    %eax,(%esp)
086ca56d +0x0e0f:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
086ca572 +0x0e14:  mov    %eax,-0x2c(%ebp)
086ca575 +0x0e17:  cmpl   $0x0,-0x2c(%ebp)
086ca579 +0x0e1b:  je     086cab75 <+0x1417>
086ca57f +0x0e21:  lea    -0x88(%ebp),%eax
086ca585 +0x0e27:  mov    %eax,0x4(%esp)
086ca589 +0x0e2b:  mov    -0x2c(%ebp),%eax
086ca58c +0x0e2e:  mov    %eax,(%esp)
086ca58f +0x0e31:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
086ca594 +0x0e36:  jmp    086cab79 <+0x141b>
086ca599 +0x0e3b:  cmpl   $0x0,0xc(%ebp)
086ca59d +0x0e3f:  je     086cab79 <+0x141b>
086ca5a3 +0x0e45:  movsbl -0x1ec(%ebp),%eax
086ca5aa +0x0e4c:  mov    0x2c(%ebp),%edx
086ca5ad +0x0e4f:  mov    %edx,0x18(%esp)
086ca5b1 +0x0e53:  mov    %eax,0x14(%esp)
086ca5b5 +0x0e57:  mov    0x20(%ebp),%eax
086ca5b8 +0x0e5a:  mov    %eax,0x10(%esp)
086ca5bc +0x0e5e:  mov    0x1c(%ebp),%eax
086ca5bf +0x0e61:  mov    %eax,0xc(%esp)
086ca5c3 +0x0e65:  mov    0xc(%ebp),%eax
086ca5c6 +0x0e68:  mov    %eax,0x8(%esp)
086ca5ca +0x0e6c:  lea    -0x88(%ebp),%eax
086ca5d0 +0x0e72:  mov    %eax,0x4(%esp)
086ca5d4 +0x0e76:  mov    0x8(%ebp),%eax
086ca5d7 +0x0e79:  mov    %eax,(%esp)
086ca5da +0x0e7c:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086ca5df +0x0e81:  mov    0xc(%ebp),%eax
086ca5e2 +0x0e84:  mov    %eax,(%esp)
086ca5e5 +0x0e87:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
086ca5ea +0x0e8c:  test   %eax,%eax
086ca5ec +0x0e8e:  setne  %al
086ca5ef +0x0e91:  test   %al,%al
086ca5f1 +0x0e93:  je     086ca61e <+0xec0>
086ca5f3 +0x0e95:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086ca5f8 +0x0e9a:  lea    -0x88(%ebp),%edx
086ca5fe +0x0ea0:  mov    %edx,0xc(%esp)
086ca602 +0x0ea4:  movl   $0x1,0x8(%esp)
086ca60a +0x0eac:  mov    0xc(%ebp),%edx
086ca60d +0x0eaf:  mov    %edx,0x4(%esp)
086ca611 +0x0eb3:  mov    %eax,(%esp)
086ca614 +0x0eb6:  call   082efb54 <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard>  ; pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)
086ca619 +0x0ebb:  jmp    086cab79 <+0x141b>
086ca61e +0x0ec0:  mov    0xc(%ebp),%eax
086ca621 +0x0ec3:  mov    %eax,(%esp)
086ca624 +0x0ec6:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
086ca629 +0x0ecb:  movswl %ax,%ebx
086ca62c +0x0ece:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086ca631 +0x0ed3:  movl   $0x0,0xc(%esp)
086ca639 +0x0edb:  mov    0xc(%ebp),%edx
086ca63c +0x0ede:  mov    %edx,0x8(%esp)
086ca640 +0x0ee2:  mov    %ebx,0x4(%esp)
086ca644 +0x0ee6:  mov    %eax,(%esp)
086ca647 +0x0ee9:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
086ca64c +0x0eee:  mov    %eax,-0x28(%ebp)
086ca64f +0x0ef1:  cmpl   $0x0,-0x28(%ebp)
086ca653 +0x0ef5:  je     086cab78 <+0x141a>
086ca659 +0x0efb:  mov    0xc(%ebp),%eax
086ca65c +0x0efe:  mov    %eax,0x8(%esp)
086ca660 +0x0f02:  lea    -0x88(%ebp),%eax
086ca666 +0x0f08:  mov    %eax,0x4(%esp)
086ca66a +0x0f0c:  mov    -0x28(%ebp),%eax
086ca66d +0x0f0f:  mov    %eax,(%esp)
086ca670 +0x0f12:  call   085dbe64 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser>  ; PvP_Room::send_to_pvp_team(PacketGuard&, CUser*)
086ca675 +0x0f17:  jmp    086cab79 <+0x141b>
086ca67a +0x0f1c:  mov    0xc(%ebp),%eax
086ca67d +0x0f1f:  mov    %eax,(%esp)
086ca680 +0x0f22:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086ca685 +0x0f27:  test   %eax,%eax
086ca687 +0x0f29:  je     086ca69f <+0xf41>
086ca689 +0x0f2b:  mov    0xc(%ebp),%eax
086ca68c +0x0f2e:  mov    %eax,(%esp)
086ca68f +0x0f31:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086ca694 +0x0f36:  test   %eax,%eax
086ca696 +0x0f38:  je     086ca69f <+0xf41>
086ca698 +0x0f3a:  mov    $0x1,%eax
086ca69d +0x0f3f:  jmp    086ca6a4 <+0xf46>
086ca69f +0x0f41:  mov    $0x0,%eax
086ca6a4 +0x0f46:  test   %al,%al
086ca6a6 +0x0f48:  je     086ca759 <+0xffb>
086ca6ac +0x0f4e:  lea    -0x1e3(%ebp),%eax
086ca6b2 +0x0f54:  mov    %eax,(%esp)
086ca6b5 +0x0f57:  call   086d1904 <_GLOBAL__I_MAX_VILLAGE_NUM+0x135>  ; global constructors keyed to MAX_VILLAGE_NUM+0x135
086ca6ba +0x0f5c:  mov    0xc(%ebp),%eax
086ca6bd +0x0f5f:  mov    %eax,(%esp)
086ca6c0 +0x0f62:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086ca6c5 +0x0f67:  mov    %eax,-0x1d9(%ebp)
086ca6cb +0x0f6d:  mov    0xc(%ebp),%eax
086ca6ce +0x0f70:  mov    %eax,(%esp)
086ca6d1 +0x0f73:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086ca6d6 +0x0f78:  mov    %eax,-0x1d5(%ebp)
086ca6dc +0x0f7e:  mov    0x20(%ebp),%eax
086ca6df +0x0f81:  mov    %al,-0x1d1(%ebp)
086ca6e5 +0x0f87:  mov    0x20(%ebp),%eax
086ca6e8 +0x0f8a:  mov    %eax,0x8(%esp)
086ca6ec +0x0f8e:  mov    0x1c(%ebp),%eax
086ca6ef +0x0f91:  mov    %eax,0x4(%esp)
086ca6f3 +0x0f95:  lea    -0x1e3(%ebp),%eax
086ca6f9 +0x0f9b:  add    $0x13,%eax
086ca6fc +0x0f9e:  mov    %eax,(%esp)
086ca6ff +0x0fa1:  call   0807d8a0 <_init+0x198>
086ca704 +0x0fa6:  mov    0x20(%ebp),%eax
086ca707 +0x0fa9:  add    $0x13,%eax
086ca70a +0x0fac:  mov    %ax,-0x1e1(%ebp)
086ca711 +0x0fb3:  movzwl -0x1e1(%ebp),%eax
086ca718 +0x0fba:  movzwl %ax,%eax
086ca71b +0x0fbd:  mov    %eax,-0x24(%ebp)
086ca71e +0x0fc0:  lea    -0x1e3(%ebp),%ebx
086ca724 +0x0fc6:  mov    0xc(%ebp),%eax
086ca727 +0x0fc9:  mov    %eax,(%esp)
086ca72a +0x0fcc:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086ca72f +0x0fd1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
086ca735 +0x0fd7:  mov    %eax,0x4(%esp)
086ca739 +0x0fdb:  mov    %edx,(%esp)
086ca73c +0x0fde:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
086ca741 +0x0fe3:  mov    -0x24(%ebp),%edx
086ca744 +0x0fe6:  mov    %edx,0x8(%esp)
086ca748 +0x0fea:  mov    %ebx,0x4(%esp)
086ca74c +0x0fee:  mov    %eax,(%esp)
086ca74f +0x0ff1:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
086ca754 +0x0ff6:  jmp    086cab79 <+0x141b>
086ca759 +0x0ffb:  mov    0xc(%ebp),%eax
086ca75c +0x0ffe:  mov    %eax,(%esp)
086ca75f +0x1001:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086ca764 +0x1006:  mov    %eax,%ebx
086ca766 +0x1008:  mov    0xc(%ebp),%eax
086ca769 +0x100b:  mov    %eax,(%esp)
086ca76c +0x100e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086ca771 +0x1013:  mov    %ebx,0x18(%esp)
086ca775 +0x1017:  mov    %eax,0x14(%esp)
086ca779 +0x101b:  movl   $"GUILD_CHAT_ERROR : charac no == %d || guild key == %d ",0x10(%esp)
086ca781 +0x1023:  movl   $0xf8c,0xc(%esp)
086ca789 +0x102b:  movl   $&_ZZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x8(%esp)
086ca791 +0x1033:  movl   $"world.cpp",0x4(%esp)
086ca799 +0x103b:  movl   $0x1,(%esp)
086ca7a0 +0x1042:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086ca7a5 +0x1047:  jmp    086cab79 <+0x141b>
086ca7aa +0x104c:  mov    0xc(%ebp),%eax
086ca7ad +0x104f:  mov    %eax,(%esp)
086ca7b0 +0x1052:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086ca7b5 +0x1057:  test   %eax,%eax
086ca7b7 +0x1059:  je     086ca7cf <+0x1071>
086ca7b9 +0x105b:  mov    0xc(%ebp),%eax
086ca7bc +0x105e:  mov    %eax,(%esp)
086ca7bf +0x1061:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086ca7c4 +0x1066:  test   %eax,%eax
086ca7c6 +0x1068:  je     086ca7cf <+0x1071>
086ca7c8 +0x106a:  mov    $0x1,%eax
086ca7cd +0x106f:  jmp    086ca7d4 <+0x1076>
086ca7cf +0x1071:  mov    $0x0,%eax
086ca7d4 +0x1076:  test   %al,%al
086ca7d6 +0x1078:  je     086ca878 <+0x111a>
086ca7dc +0x107e:  lea    -0x1e3(%ebp),%eax
086ca7e2 +0x1084:  mov    %eax,(%esp)
086ca7e5 +0x1087:  call   086d1a48 <_GLOBAL__I_MAX_VILLAGE_NUM+0x279>  ; global constructors keyed to MAX_VILLAGE_NUM+0x279
086ca7ea +0x108c:  mov    0xc(%ebp),%eax
086ca7ed +0x108f:  mov    %eax,(%esp)
086ca7f0 +0x1092:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086ca7f5 +0x1097:  mov    %eax,-0x1d9(%ebp)
086ca7fb +0x109d:  mov    0x20(%ebp),%eax
086ca7fe +0x10a0:  mov    %al,-0x1d5(%ebp)
086ca804 +0x10a6:  mov    0x20(%ebp),%eax
086ca807 +0x10a9:  mov    %eax,0x8(%esp)
086ca80b +0x10ad:  mov    0x1c(%ebp),%eax
086ca80e +0x10b0:  mov    %eax,0x4(%esp)
086ca812 +0x10b4:  lea    -0x1e3(%ebp),%eax
086ca818 +0x10ba:  add    $0xf,%eax
086ca81b +0x10bd:  mov    %eax,(%esp)
086ca81e +0x10c0:  call   0807d8a0 <_init+0x198>
086ca823 +0x10c5:  mov    0x20(%ebp),%eax
086ca826 +0x10c8:  add    $0xf,%eax
086ca829 +0x10cb:  mov    %ax,-0x1e1(%ebp)
086ca830 +0x10d2:  movzwl -0x1e1(%ebp),%eax
086ca837 +0x10d9:  movzwl %ax,%eax
086ca83a +0x10dc:  mov    %eax,-0x20(%ebp)
086ca83d +0x10df:  lea    -0x1e3(%ebp),%ebx
086ca843 +0x10e5:  mov    0xc(%ebp),%eax
086ca846 +0x10e8:  mov    %eax,(%esp)
086ca849 +0x10eb:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086ca84e +0x10f0:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086ca854 +0x10f6:  mov    %eax,0x4(%esp)
086ca858 +0x10fa:  mov    %edx,(%esp)
086ca85b +0x10fd:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086ca860 +0x1102:  mov    -0x20(%ebp),%edx
086ca863 +0x1105:  mov    %edx,0x8(%esp)
086ca867 +0x1109:  mov    %ebx,0x4(%esp)
086ca86b +0x110d:  mov    %eax,(%esp)
086ca86e +0x1110:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
086ca873 +0x1115:  jmp    086cab79 <+0x141b>
086ca878 +0x111a:  mov    0xc(%ebp),%eax
086ca87b +0x111d:  mov    %eax,(%esp)
086ca87e +0x1120:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
086ca883 +0x1125:  mov    %eax,0x14(%esp)
086ca887 +0x1129:  movl   $"MEMBER_CHAT_ERROR : member key == %d ",0x10(%esp)
086ca88f +0x1131:  movl   $0xfa3,0xc(%esp)
086ca897 +0x1139:  movl   $&_ZZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKETE19__PRETTY_FUNCTION__,0x8(%esp)
086ca89f +0x1141:  movl   $"world.cpp",0x4(%esp)
086ca8a7 +0x1149:  movl   $0x1,(%esp)
086ca8ae +0x1150:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086ca8b3 +0x1155:  jmp    086cab79 <+0x141b>
086ca8b8 +0x115a:  lea    -0x1e3(%ebp),%eax
086ca8be +0x1160:  mov    %eax,(%esp)
086ca8c1 +0x1163:  call   086d1960 <_GLOBAL__I_MAX_VILLAGE_NUM+0x191>  ; global constructors keyed to MAX_VILLAGE_NUM+0x191
086ca8c6 +0x1168:  movzbl -0x1ec(%ebp),%eax
086ca8cd +0x116f:  movzbl %al,%eax
086ca8d0 +0x1172:  mov    %eax,-0x1f4(%ebp)
086ca8d6 +0x1178:  mov    0x20(%ebp),%eax
086ca8d9 +0x117b:  movzbl %al,%edi
086ca8dc +0x117e:  mov    0xc(%ebp),%eax
086ca8df +0x1181:  mov    %eax,(%esp)
086ca8e2 +0x1184:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086ca8e7 +0x1189:  mov    %eax,%ebx
086ca8e9 +0x118b:  mov    0xc(%ebp),%eax
086ca8ec +0x118e:  mov    %eax,(%esp)
086ca8ef +0x1191:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086ca8f4 +0x1196:  movzwl %ax,%esi
086ca8f7 +0x1199:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086ca8fc +0x119e:  mov    %eax,(%esp)
086ca8ff +0x11a1:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086ca904 +0x11a6:  movzbl %al,%eax
086ca907 +0x11a9:  mov    -0x1f4(%ebp),%edx
086ca90d +0x11af:  mov    %edx,0x18(%esp)
086ca911 +0x11b3:  mov    0x1c(%ebp),%edx
086ca914 +0x11b6:  mov    %edx,0x14(%esp)
086ca918 +0x11ba:  mov    %edi,0x10(%esp)
086ca91c +0x11be:  mov    %ebx,0xc(%esp)
086ca920 +0x11c2:  mov    %esi,0x8(%esp)
086ca924 +0x11c6:  mov    %eax,0x4(%esp)
086ca928 +0x11ca:  lea    -0x1e3(%ebp),%eax
086ca92e +0x11d0:  mov    %eax,(%esp)
086ca931 +0x11d3:  call   086d19b0 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1e1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1e1
086ca936 +0x11d8:  mov    0x20(%ebp),%eax
086ca939 +0x11db:  add    $0x2e,%eax
086ca93c +0x11de:  mov    %eax,%esi
086ca93e +0x11e0:  lea    -0x1e3(%ebp),%ebx
086ca944 +0x11e6:  mov    0xc(%ebp),%eax
086ca947 +0x11e9:  mov    %eax,(%esp)
086ca94a +0x11ec:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086ca94f +0x11f1:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
086ca955 +0x11f7:  mov    %eax,0x4(%esp)
086ca959 +0x11fb:  mov    %edx,(%esp)
086ca95c +0x11fe:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086ca961 +0x1203:  mov    %esi,0x8(%esp)
086ca965 +0x1207:  mov    %ebx,0x4(%esp)
086ca969 +0x120b:  mov    %eax,(%esp)
086ca96c +0x120e:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
086ca971 +0x1213:  jmp    086cab79 <+0x141b>
086ca976 +0x1218:  lea    -0xa8(%ebp),%eax
086ca97c +0x121e:  mov    %eax,(%esp)
086ca97f +0x1221:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086ca984 +0x1226:  movl   $0x76,0x8(%esp)
086ca98c +0x122e:  movl   $0x0,0x4(%esp)
086ca994 +0x1236:  lea    -0xa8(%ebp),%eax
086ca99a +0x123c:  mov    %eax,(%esp)
086ca99d +0x123f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086ca9a2 +0x1244:  movsbl -0x1ec(%ebp),%eax
086ca9a9 +0x124b:  mov    %eax,0x4(%esp)
086ca9ad +0x124f:  lea    -0xa8(%ebp),%eax
086ca9b3 +0x1255:  mov    %eax,(%esp)
086ca9b6 +0x1258:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086ca9bb +0x125d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086ca9c0 +0x1262:  mov    %eax,(%esp)
086ca9c3 +0x1265:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086ca9c8 +0x126a:  mov    %eax,0x4(%esp)
086ca9cc +0x126e:  lea    -0xa8(%ebp),%eax
086ca9d2 +0x1274:  mov    %eax,(%esp)
086ca9d5 +0x1277:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086ca9da +0x127c:  mov    0xc(%ebp),%eax
086ca9dd +0x127f:  mov    %eax,(%esp)
086ca9e0 +0x1282:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086ca9e5 +0x1287:  movzwl %ax,%eax
086ca9e8 +0x128a:  mov    %eax,0x4(%esp)
086ca9ec +0x128e:  lea    -0xa8(%ebp),%eax
086ca9f2 +0x1294:  mov    %eax,(%esp)
086ca9f5 +0x1297:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086ca9fa +0x129c:  mov    0xc(%ebp),%eax
086ca9fd +0x129f:  mov    %eax,(%esp)
086caa00 +0x12a2:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086caa05 +0x12a7:  mov    %eax,(%esp)
086caa08 +0x12aa:  call   0807e3b0 <_init+0xca8>
086caa0d +0x12af:  mov    %eax,0x4(%esp)
086caa11 +0x12b3:  lea    -0xa8(%ebp),%eax
086caa17 +0x12b9:  mov    %eax,(%esp)
086caa1a +0x12bc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086caa1f +0x12c1:  mov    0xc(%ebp),%eax
086caa22 +0x12c4:  mov    %eax,(%esp)
086caa25 +0x12c7:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086caa2a +0x12cc:  mov    %eax,(%esp)
086caa2d +0x12cf:  call   0807e3b0 <_init+0xca8>
086caa32 +0x12d4:  mov    %eax,%ebx
086caa34 +0x12d6:  mov    0xc(%ebp),%eax
086caa37 +0x12d9:  mov    %eax,(%esp)
086caa3a +0x12dc:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086caa3f +0x12e1:  mov    %ebx,0x8(%esp)
086caa43 +0x12e5:  mov    %eax,0x4(%esp)
086caa47 +0x12e9:  lea    -0xa8(%ebp),%eax
086caa4d +0x12ef:  mov    %eax,(%esp)
086caa50 +0x12f2:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
086caa55 +0x12f7:  mov    0x20(%ebp),%eax
086caa58 +0x12fa:  mov    %eax,0x4(%esp)
086caa5c +0x12fe:  lea    -0xa8(%ebp),%eax
086caa62 +0x1304:  mov    %eax,(%esp)
086caa65 +0x1307:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086caa6a +0x130c:  mov    0x20(%ebp),%eax
086caa6d +0x130f:  mov    %eax,0x8(%esp)
086caa71 +0x1313:  mov    0x1c(%ebp),%eax
086caa74 +0x1316:  mov    %eax,0x4(%esp)
086caa78 +0x131a:  lea    -0xa8(%ebp),%eax
086caa7e +0x1320:  mov    %eax,(%esp)
086caa81 +0x1323:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086caa86 +0x1328:  movl   $0x1,0x4(%esp)
086caa8e +0x1330:  lea    -0xa8(%ebp),%eax
086caa94 +0x1336:  mov    %eax,(%esp)
086caa97 +0x1339:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086caa9c +0x133e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086caaa1 +0x1343:  lea    -0xa8(%ebp),%edx
086caaa7 +0x1349:  mov    %edx,0x4(%esp)
086caaab +0x134d:  mov    %eax,(%esp)
086caaae +0x1350:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086caab3 +0x1355:  jmp    086caad0 <+0x1372>
086caab5 +0x1357:  mov    %edx,%ebx
086caab7 +0x1359:  mov    %eax,%esi
086caab9 +0x135b:  lea    -0xa8(%ebp),%eax
086caabf +0x1361:  mov    %eax,(%esp)
086caac2 +0x1364:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086caac7 +0x1369:  mov    %esi,%eax
086caac9 +0x136b:  mov    %ebx,%edx
086caacb +0x136d:  jmp    086cab54 <+0x13f6>
086caad0 +0x1372:  lea    -0xa8(%ebp),%eax
086caad6 +0x1378:  mov    %eax,(%esp)
086caad9 +0x137b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086caade +0x1380:  jmp    086cab79 <+0x141b>
086caae3 +0x1385:  cmpl   $0x0,0xc(%ebp)
086caae7 +0x1389:  je     086cab79 <+0x141b>
086caaed +0x138f:  movsbl -0x1ec(%ebp),%eax
086caaf4 +0x1396:  mov    0x2c(%ebp),%edx
086caaf7 +0x1399:  mov    %edx,0x18(%esp)
086caafb +0x139d:  mov    %eax,0x14(%esp)
086caaff +0x13a1:  mov    0x20(%ebp),%eax
086cab02 +0x13a4:  mov    %eax,0x10(%esp)
086cab06 +0x13a8:  mov    0x1c(%ebp),%eax
086cab09 +0x13ab:  mov    %eax,0xc(%esp)
086cab0d +0x13af:  mov    0xc(%ebp),%eax
086cab10 +0x13b2:  mov    %eax,0x8(%esp)
086cab14 +0x13b6:  lea    -0x88(%ebp),%eax
086cab1a +0x13bc:  mov    %eax,0x4(%esp)
086cab1e +0x13c0:  mov    0x8(%ebp),%eax
086cab21 +0x13c3:  mov    %eax,(%esp)
086cab24 +0x13c6:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
086cab29 +0x13cb:  mov    0xc(%ebp),%eax
086cab2c +0x13ce:  mov    %eax,(%esp)
086cab2f +0x13d1:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
086cab34 +0x13d6:  mov    %eax,-0x1c(%ebp)
086cab37 +0x13d9:  cmpl   $0x0,-0x1c(%ebp)
086cab3b +0x13dd:  je     086cab79 <+0x141b>
086cab3d +0x13df:  lea    -0x88(%ebp),%eax
086cab43 +0x13e5:  mov    %eax,0x4(%esp)
086cab47 +0x13e9:  mov    -0x1c(%ebp),%eax
086cab4a +0x13ec:  mov    %eax,(%esp)
086cab4d +0x13ef:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
086cab52 +0x13f4:  jmp    086cab79 <+0x141b>
086cab54 +0x13f6:  mov    %edx,%ebx
086cab56 +0x13f8:  mov    %eax,%esi
086cab58 +0x13fa:  lea    -0x88(%ebp),%eax
086cab5e +0x1400:  mov    %eax,(%esp)
086cab61 +0x1403:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cab66 +0x1408:  mov    %esi,%eax
086cab68 +0x140a:  mov    %ebx,%edx
086cab6a +0x140c:  mov    %eax,(%esp)
086cab6d +0x140f:  call   08ae3750 <_Unwind_Resume>
086cab72 +0x1414:  nop
086cab73 +0x1415:  jmp    086cab79 <+0x141b>
086cab75 +0x1417:  nop
086cab76 +0x1418:  jmp    086cab79 <+0x141b>
086cab78 +0x141a:  nop
086cab79 +0x141b:  lea    -0x88(%ebp),%eax
086cab7f +0x1421:  mov    %eax,(%esp)
086cab82 +0x1424:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cab87 +0x1429:  lea    -0xc(%ebp),%esp
086cab8a +0x142c:  add    $0x0,%esp
086cab8d +0x142f:  pop    %ebx
086cab8e +0x1430:  pop    %esi
086cab8f +0x1431:  pop    %edi
086cab90 +0x1432:  pop    %ebp
086cab91 +0x1433:  ret
```

## 反编译 C

```c
// GameWorld::send_chat_msg @ 0x86c975e

/* GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int,
   ENUM_NOTIPACKET) */

void __thiscall
GameWorld::send_chat_msg
          (GameWorld *this,CUser *param_1,byte param_2,ushort param_3,undefined4 param_4,
          char *param_5,size_t param_6,void *param_7,size_t param_8,int param_10)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  uchar uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  GameWorld *pGVar12;
  int iVar13;
  CMonitorServerProxy *pCVar14;
  CAssaultMgr *pCVar15;
  CGameManager *pCVar16;
  CGuildServerProxy *this_00;
  undefined4 uVar17;
  CEnvironment *pCVar18;
  Packet_Monitor_Other_Channel_Chat local_1e7 [2];
  ushort local_1e5;
  int local_1dd;
  undefined4 local_1d9;
  uchar local_1d5;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined1 auStack_1cb [30];
  uchar local_1ad;
  undefined1 auStack_1ac [256];
  PacketGuard local_ac [12];
  PacketGuard local_a0 [12];
  string local_94;
  string local_90 [4];
  PacketGuard local_8c [15];
  allocator<char> local_7d;
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  string local_5c;
  allocator<char> local_55;
  uint local_54;
  CUser *local_50;
  size_t local_4c;
  size_t local_48;
  size_t local_44;
  size_t local_40;
  uint local_3c;
  CParty *local_38;
  Village *local_34;
  PvP_Room *local_30;
  PvP_Room *local_2c;
  uint local_28;
  uint local_24;
  BlueMarble *local_20;
  
  if (((param_2 < 0x1f) && ((1 << (param_2 & 0x1f) & 0x7fff0411U) != 0)) &&
     (param_1 != (CUser *)0x0)) {
    CUser::DisConnSig(param_1,0x18,1,0);
    return;
  }
  if (param_2 != 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 086c97fc to 086c9800 has its CatchHandler @ 086c9803 */
    std::string::string(local_90,param_5,(allocator *)&local_7d);
    std::allocator<char>::~allocator(&local_7d);
                    /* try { // try from 086c9829 to 086c9849 has its CatchHandler @ 086c98db */
    CSyncSlangFilter::GetInstance();
    CSyncSlangFilter::Filter(&local_94);
                    /* try { // try from 086c9856 to 086c9888 has its CatchHandler @ 086c98a3 */
    iVar7 = std::string::size((string *)&local_94);
    if (iVar7 != 0) {
      sVar8 = std::string::size((string *)&local_94);
      pcVar9 = (char *)std::string::c_str((string *)&local_94);
      strncpy(param_5,pcVar9,sVar8);
    }
                    /* try { // try from 086c98c4 to 086c98c8 has its CatchHandler @ 086c98db */
    std::string::~string((string *)&local_94);
    std::string::~string(local_90);
    if (iVar7 == 0) {
      return;
    }
  }
  PacketGuard::PacketGuard(local_8c);
  if (param_1 != (CUser *)0x0) {
    pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                    /* try { // try from 086c993c to 086c9b65 has its CatchHandler @ 086cab54 */
    cVar2 = IsForbiddenChat(this,pcVar9);
    if (cVar2 != '\0') {
      pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      local_54 = GetLeftTimeOfForbiddenChat(this,pcVar9);
      if (local_54 == 0) {
        pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        EnableChat(this,pcVar9);
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,0,0xc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_8c,10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_8c,0);
        uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_7c,
                           "void GameWorld::send_chat_msg(CUser*, char, short unsigned int, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)"
                           ,0xdf3,0);
        cMyTrace::operator()(local_7c,"%s is forbidden to chat for %d msec.\n",uVar10,local_54);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_8c,local_54 / 60000);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
        CUser::Send(param_1,local_8c);
      }
      goto switchD_086c9abf_caseD_7;
    }
  }
  WriteLogChatMsg(this,param_1,param_2,param_5);
  uVar3 = (uchar)param_6;
  sVar5 = (short)param_6;
  switch(param_2) {
  case 0:
    if (param_1 == (CUser *)0x0) {
      make_packet_chat_msg(this,local_8c,0,param_5,param_6,(int)(char)param_2,param_10);
      send_all(this,local_8c);
    }
    else {
      CUser::get_acc_id(param_1);
    }
    break;
  case 1:
  case 0x21:
    local_50 = (CUser *)find_from_world(this,param_3);
    if (local_50 == (CUser *)0x0) {
      Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat(local_1e7);
      local_1d4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_1d0 = param_4;
      local_1ad = uVar3;
      memcpy(auStack_1ac,param_5,param_6);
      local_1cc = (undefined1)param_8;
      memcpy(auStack_1cb,param_7,param_8);
      local_1dd = (int)(char)param_2;
      local_1e5 = sVar5 + 0x3b;
      local_3c = (uint)local_1e5;
      uVar10 = CUser::GetServerGroup(param_1);
      pCVar14 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar10);
      CMonitorServerProxy::SendPacket(pCVar14,(char *)local_1e7,local_3c);
      break;
    }
    PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 086c9b74 to 086ca081 has its CatchHandler @ 086ca089 */
    uVar11 = CUser::get_charac_no(param_1,-1);
    cVar2 = CUser::isBlackUser(local_50,uVar11);
    if (cVar2 == '\0') {
      uVar11 = CUser::get_charac_no(local_50,-1);
      cVar2 = CUser::isBlackUser(param_1,uVar11);
      if (cVar2 != '\0') goto LAB_086c9bb2;
      bVar1 = false;
    }
    else {
LAB_086c9bb2:
      bVar1 = true;
    }
    if (bVar1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,(int)(char)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0x4d);
      pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_50);
      local_48 = strlen(pcVar9);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_48);
      pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_50);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,pcVar9,local_48);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,param_6);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,param_5,param_6);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
      CUser::Send(param_1,local_a0);
    }
    else {
      CUser::get_acc_id(local_50);
      cVar2 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
      if (cVar2 == '\0') {
        pGVar12 = (GameWorld *)G_GameWorld();
        cVar2 = IsIntegratedPvPBaseChannel(pGVar12);
        if (cVar2 == '\0') {
LAB_086c9e4f:
          bVar1 = false;
        }
        else {
          iVar7 = CUser::GetServerGroup(param_1);
          iVar13 = CUser::GetServerGroup(local_50);
          if (iVar7 == iVar13) goto LAB_086c9e4f;
          bVar1 = true;
        }
        if (bVar1) {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,0,0x41);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,(int)(char)param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0x15);
          pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_50);
          local_40 = strlen(pcVar9);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_40);
          pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_50);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,pcVar9,local_40);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,param_6);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,param_5,param_6);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
          CUser::Send(param_1,local_a0);
        }
        else {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,0,0x41);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,(int)(char)param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
          pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
          local_4c = strlen(pcVar9);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_4c);
          pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,pcVar9,local_4c);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,param_6);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,param_5,param_6);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
          CUser::Send(local_50,local_a0);
        }
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,0,0x41);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,(int)(char)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0x5a);
        pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_50);
        local_44 = strlen(pcVar9);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_44);
        pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_50);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,pcVar9,local_44);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,param_6);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_a0,param_5,param_6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
        CUser::Send(param_1,local_a0);
      }
    }
                    /* try { // try from 086ca0ad to 086ca2e2 has its CatchHandler @ 086cab54 */
    PacketGuard::~PacketGuard(local_a0);
    break;
  case 2:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg(this,local_8c,param_1,param_5,param_6,(int)(char)param_2,param_10);
      local_38 = (CParty *)CUser::GetParty(param_1);
      if (local_38 != (CParty *)0x0) {
        CParty::send_to_party(local_38,local_8c);
      }
    }
    break;
  case 3:
    local_34 = (Village *)0x0;
    pGVar12 = (GameWorld *)G_GameWorld();
    local_34 = (Village *)getUserVillage(pGVar12,param_1);
    if (local_34 == (Village *)0x0) {
      cMyTrace::cMyTrace(local_6c,
                         "void GameWorld::send_chat_msg(CUser*, char, short unsigned int, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)"
                         ,0xf1d,5);
      cMyTrace::operator()(local_6c,"getUserVillage() call failed");
      break;
    }
    iVar7 = Village::get_gate_area(local_34);
    iVar13 = CUser::get_area(param_1,false);
    if ((((iVar7 == iVar13) ||
         (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 == '\b')) ||
        (param_10 == 0x72)) || (param_10 == 0x77)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar13 = G_CDataManager();
      iVar7 = ServerParameterScript::GetCleanChattingCount
                        ((ServerParameterScript *)(iVar13 + 0x68),iVar7);
      std::allocator<char>::allocator();
                    /* try { // try from 086ca304 to 086ca308 has its CatchHandler @ 086ca36a */
      std::string::string((string *)&local_5c,param_5,(allocator *)&local_55);
                    /* try { // try from 086ca316 to 086ca323 has its CatchHandler @ 086ca355 */
      cVar2 = CUser::isDuplicationMessage(param_1,&local_5c);
      if (cVar2 == '\0') {
        iVar13 = 1;
      }
      else {
        iVar13 = G_CDataManager();
        iVar13 = ServerParameterScript::GetPaneltyDupMessage
                           ((ServerParameterScript *)(iVar13 + 0x68));
      }
      CUser::incChattingMessageCount(param_1,iVar13 * iVar7);
                    /* try { // try from 086ca34e to 086ca352 has its CatchHandler @ 086ca36a */
      std::string::~string((string *)&local_5c);
      std::allocator<char>::~allocator(&local_55);
      iVar7 = CUser::getChattingMessageCount(param_1);
                    /* try { // try from 086ca39a to 086ca983 has its CatchHandler @ 086cab54 */
      iVar13 = G_CDataManager();
      iVar13 = ServerParameterScript::GetMaxCleanChattingCount
                         ((ServerParameterScript *)(iVar13 + 0x68));
      if (iVar13 < iVar7) {
        CUser::setChattingMessageCount(param_1,0);
        CUser::reqHumanCertify4ClearMap(param_1,false);
        break;
      }
    }
  case 0x22:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg(this,local_8c,param_1,param_5,param_6,(int)(char)param_2,param_10);
      iVar7 = CUser::get_area(param_1,false);
      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      send_to_area(this,(int)cVar2,iVar7,local_8c);
    }
    break;
  case 4:
    make_packet_chat_msg(this,local_8c,param_1,param_5,param_6,(int)(char)param_2,param_10);
    send_all(this,local_8c);
    break;
  case 5:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg(this,local_8c,param_1,param_5,param_6,(int)(char)param_2,param_10);
      iVar7 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
      if (iVar7 == 0) {
        sVar5 = CUser::GetPvpIndex(param_1);
        pCVar16 = (CGameManager *)G_CGameManager();
        local_30 = (PvP_Room *)CGameManager::GetPvp(pCVar16,(int)sVar5,param_1,0);
        if (local_30 != (PvP_Room *)0x0) {
          PvP_Room::send_to_pvp(local_30,local_8c);
        }
      }
      else {
        pCVar15 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
        pvp_assault::CAssaultMgr::SendPacket(pCVar15,param_1,false,local_8c);
      }
    }
    break;
  case 6:
    iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if ((iVar7 == 0) ||
       (iVar7 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1), iVar7 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      Packet_Monitor_Guild_Chat::Packet_Monitor_Guild_Chat((Packet_Monitor_Guild_Chat *)local_1e7);
      local_1dd = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_1d9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_1d5 = uVar3;
      memcpy(&local_1d4,param_5,param_6);
      local_1e5 = sVar5 + 0x13;
      local_28 = (uint)local_1e5;
      uVar10 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar10);
      CGuildServerProxy::SendPacket(this_00,(char *)local_1e7,local_28);
    }
    else {
      uVar10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar17 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"world.cpp",
                 "void GameWorld::send_chat_msg(CUser*, char, short unsigned int, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)"
                 ,0xf8c,"GUILD_CHAT_ERROR : charac no == %d || guild key == %d ",uVar17,uVar10);
    }
    break;
  case 8:
    iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if ((iVar7 == 0) ||
       (iVar7 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1), iVar7 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      Packet_Monitor_Member_Chat::Packet_Monitor_Member_Chat
                ((Packet_Monitor_Member_Chat *)local_1e7);
      local_1dd = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
      local_1d9 = CONCAT31(local_1d9._1_3_,uVar3);
      memcpy((void *)((int)&local_1d9 + 1),param_5,param_6);
      local_1e5 = sVar5 + 0xf;
      local_24 = (uint)local_1e5;
      uVar10 = CUser::GetServerGroup(param_1);
      pCVar14 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar10);
      CMonitorServerProxy::SendPacket(pCVar14,(char *)local_1e7,local_24);
    }
    else {
      uVar10 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"world.cpp",
                 "void GameWorld::send_chat_msg(CUser*, char, short unsigned int, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)"
                 ,0xfa3,"MEMBER_CHAT_ERROR : member key == %d ",uVar10);
    }
    break;
  case 9:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg(this,local_8c,param_1,param_5,param_6,(int)(char)param_2,param_10);
      iVar7 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
      if (iVar7 == 0) {
        sVar5 = CUser::GetPvpIndex(param_1);
        pCVar16 = (CGameManager *)G_CGameManager();
        local_2c = (PvP_Room *)CGameManager::GetPvp(pCVar16,(int)sVar5,param_1,0);
        if (local_2c != (PvP_Room *)0x0) {
          PvP_Room::send_to_pvp_team(local_2c,local_8c,param_1);
        }
      }
      else {
        pCVar15 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
        pvp_assault::CAssaultMgr::SendPacket(pCVar15,param_1,true,local_8c);
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xe:
    Packet_Monitor_MegaPhone::Packet_Monitor_MegaPhone((Packet_Monitor_MegaPhone *)local_1e7);
    pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar6 = CUser::get_unique_id(param_1);
    pCVar18 = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_channel_no(pCVar18);
    Packet_Monitor_MegaPhone::set
              ((Packet_Monitor_MegaPhone *)local_1e7,uVar4,uVar6,pcVar9,uVar3,param_5,param_2);
    uVar10 = CUser::GetServerGroup(param_1);
    pCVar14 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar10);
    CMonitorServerProxy::SendPacket(pCVar14,(char *)local_1e7,param_6 + 0x2e);
    break;
  case 0xd:
  case 0xf:
    PacketGuard::PacketGuard(local_ac);
                    /* try { // try from 086ca99d to 086caab2 has its CatchHandler @ 086caab5 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ac,0,0x76);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,(int)(char)param_2);
    pCVar18 = (CEnvironment *)G_CEnvironment();
    iVar7 = CEnvironment::get_channel_no(pCVar18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,iVar7);
    uVar11 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_ac,uVar11 & 0xffff);
    pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sVar8 = strlen(pcVar9);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_ac,sVar8);
    pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sVar8 = strlen(pcVar9);
    pcVar9 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_ac,pcVar9,sVar8);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_ac,param_6);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_ac,param_5,param_6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ac,true);
    pGVar12 = (GameWorld *)G_GameWorld();
    send_all(pGVar12,local_ac);
                    /* try { // try from 086caad9 to 086cab51 has its CatchHandler @ 086cab54 */
    PacketGuard::~PacketGuard(local_ac);
    break;
  case 0x28:
    if (param_1 != (CUser *)0x0) {
      make_packet_chat_msg(this,local_8c,param_1,param_5,param_6,(int)(char)param_2,param_10);
      local_20 = (BlueMarble *)CUser::getBlueMarble(param_1);
      if (local_20 != (BlueMarble *)0x0) {
        BlueMarble::sendToBlueMarble(local_20,local_8c);
      }
    }
  }
switchD_086c9abf_caseD_7:
  PacketGuard::~PacketGuard(local_8c);
  return;
}
```
