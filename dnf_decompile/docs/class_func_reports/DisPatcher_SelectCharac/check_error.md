# check_error

`_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c686e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c686e  _ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)
# range [0x081c686e, 0x081c6c21]
081c686e +0x000:  push   %ebp
081c686f +0x001:  mov    %esp,%ebp
081c6871 +0x003:  push   %esi
081c6872 +0x004:  push   %ebx
081c6873 +0x005:  sub    $0x40,%esp
081c6876 +0x008:  mov    0xc(%ebp),%eax
081c6879 +0x00b:  mov    %eax,(%esp)
081c687c +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c6881 +0x013:  cmp    $0x2,%eax
081c6884 +0x016:  setne  %al
081c6887 +0x019:  test   %al,%al
081c6889 +0x01b:  je     081c6895 <+0x27>
081c688b +0x01d:  mov    $0x7fffffff,%ebx
081c6890 +0x022:  jmp    081c6c18 <+0x3aa>
081c6895 +0x027:  mov    0xc(%ebp),%eax
081c6898 +0x02a:  mov    %eax,(%esp)
081c689b +0x02d:  call   0864aae6 <_ZN5CUser20isLockedCreateCharacEv>  ; CUser::isLockedCreateCharac()
081c68a0 +0x032:  test   %al,%al
081c68a2 +0x034:  je     081c68ae <+0x40>
081c68a4 +0x036:  mov    $0x13,%ebx
081c68a9 +0x03b:  jmp    081c6c18 <+0x3aa>
081c68ae +0x040:  mov    0xc(%ebp),%eax
081c68b1 +0x043:  mov    %eax,(%esp)
081c68b4 +0x046:  call   0823021a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58c4
081c68b9 +0x04b:  xor    $0x1,%eax
081c68bc +0x04e:  test   %al,%al
081c68be +0x050:  je     081c68ca <+0x5c>
081c68c0 +0x052:  mov    $0x7fffffff,%ebx
081c68c5 +0x057:  jmp    081c6c18 <+0x3aa>
081c68ca +0x05c:  mov    0x10(%ebp),%eax
081c68cd +0x05f:  mov    %eax,-0xc(%ebp)
081c68d0 +0x062:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c68d5 +0x067:  mov    %eax,(%esp)
081c68d8 +0x06a:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081c68dd +0x06f:  cmp    $0xe,%eax
081c68e0 +0x072:  sete   %al
081c68e3 +0x075:  test   %al,%al
081c68e5 +0x077:  je     081c6923 <+0xb5>
081c68e7 +0x079:  mov    0xc(%ebp),%eax
081c68ea +0x07c:  mov    %eax,(%esp)
081c68ed +0x07f:  call   0822fcaa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5354>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5354
081c68f2 +0x084:  mov    %eax,0x4(%esp)
081c68f6 +0x088:  mov    0xc(%ebp),%eax
081c68f9 +0x08b:  mov    %eax,(%esp)
081c68fc +0x08e:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
081c6901 +0x093:  mov    %eax,%edx
081c6903 +0x095:  mov    -0xc(%ebp),%eax
081c6906 +0x098:  mov    %dl,0xd(%eax)
081c6909 +0x09b:  mov    -0xc(%ebp),%eax
081c690c +0x09e:  movzbl 0xd(%eax),%eax
081c6910 +0x0a2:  cmp    $0xff,%al
081c6912 +0x0a4:  sete   %al
081c6915 +0x0a7:  test   %al,%al
081c6917 +0x0a9:  je     081c6923 <+0xb5>
081c6919 +0x0ab:  mov    $0xffffffff,%ebx
081c691e +0x0b0:  jmp    081c6c18 <+0x3aa>
081c6923 +0x0b5:  mov    -0xc(%ebp),%eax
081c6926 +0x0b8:  mov    %eax,0x8(%esp)
081c692a +0x0bc:  mov    0xc(%ebp),%eax
081c692d +0x0bf:  mov    %eax,0x4(%esp)
081c6931 +0x0c3:  mov    0x8(%ebp),%eax
081c6934 +0x0c6:  mov    %eax,(%esp)
081c6937 +0x0c9:  call   081c6c22 <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::checkPvpEnterCharacter(CUser*, MSG_CHARAC_SELECT&)
081c693c +0x0ce:  xor    $0x1,%eax
081c693f +0x0d1:  test   %al,%al
081c6941 +0x0d3:  je     081c694d <+0xdf>
081c6943 +0x0d5:  mov    $0xffffffff,%ebx
081c6948 +0x0da:  jmp    081c6c18 <+0x3aa>
081c694d +0x0df:  mov    -0xc(%ebp),%eax
081c6950 +0x0e2:  movzbl 0xd(%eax),%eax
081c6954 +0x0e6:  cmp    $0x23,%al
081c6956 +0x0e8:  jg     081c6963 <+0xf5>
081c6958 +0x0ea:  mov    -0xc(%ebp),%eax
081c695b +0x0ed:  movzbl 0xd(%eax),%eax
081c695f +0x0f1:  test   %al,%al
081c6961 +0x0f3:  jns    081c69b1 <+0x143>
081c6963 +0x0f5:  mov    -0xc(%ebp),%eax
081c6966 +0x0f8:  movzbl 0xd(%eax),%eax
081c696a +0x0fc:  movsbl %al,%ebx
081c696d +0x0ff:  movl   $0x5,0xc(%esp)
081c6975 +0x107:  movl   $0x16c4,0x8(%esp)
081c697d +0x10f:  movl   $&_ZZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c6985 +0x117:  lea    -0x30(%ebp),%eax
081c6988 +0x11a:  mov    %eax,(%esp)
081c698b +0x11d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c6990 +0x122:  mov    %ebx,0x8(%esp)
081c6994 +0x126:  movl   $"pUser->SelectCharac() fail, %d out of range",0x4(%esp)
081c699c +0x12e:  lea    -0x30(%ebp),%eax
081c699f +0x131:  mov    %eax,(%esp)
081c69a2 +0x134:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c69a7 +0x139:  mov    $0x4,%ebx
081c69ac +0x13e:  jmp    081c6c18 <+0x3aa>
081c69b1 +0x143:  mov    0xc(%ebp),%eax
081c69b4 +0x146:  add    $0x796e8,%eax
081c69b9 +0x14b:  mov    %eax,(%esp)
081c69bc +0x14e:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
081c69c1 +0x153:  mov    -0xc(%ebp),%edx
081c69c4 +0x156:  movzbl 0xd(%edx),%edx
081c69c8 +0x15a:  movzbl %dl,%edx
081c69cb +0x15d:  cmp    %edx,%eax
081c69cd +0x15f:  setbe  %al
081c69d0 +0x162:  test   %al,%al
081c69d2 +0x164:  je     081c69de <+0x170>
081c69d4 +0x166:  mov    $0xfffffffe,%ebx
081c69d9 +0x16b:  jmp    081c6c18 <+0x3aa>
081c69de +0x170:  lea    -0x1d(%ebp),%eax
081c69e1 +0x173:  mov    %eax,(%esp)
081c69e4 +0x176:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081c69e9 +0x17b:  mov    -0xc(%ebp),%eax
081c69ec +0x17e:  movzbl 0xd(%eax),%eax
081c69f0 +0x182:  movsbl %al,%eax
081c69f3 +0x185:  mov    0xc(%ebp),%edx
081c69f6 +0x188:  add    $0x796e8,%edx
081c69fc +0x18e:  mov    %eax,0x4(%esp)
081c6a00 +0x192:  mov    %edx,(%esp)
081c6a03 +0x195:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c6a08 +0x19a:  add    $0x4,%eax
081c6a0b +0x19d:  lea    -0x1d(%ebp),%edx
081c6a0e +0x1a0:  mov    %edx,0x8(%esp)
081c6a12 +0x1a4:  mov    %eax,0x4(%esp)
081c6a16 +0x1a8:  lea    -0x34(%ebp),%eax
081c6a19 +0x1ab:  mov    %eax,(%esp)
081c6a1c +0x1ae:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081c6a21 +0x1b3:  jmp    081c6a3e <+0x1d0>
081c6a23 +0x1b5:  mov    %edx,%ebx
081c6a25 +0x1b7:  mov    %eax,%esi
081c6a27 +0x1b9:  lea    -0x1d(%ebp),%eax
081c6a2a +0x1bc:  mov    %eax,(%esp)
081c6a2d +0x1bf:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081c6a32 +0x1c4:  mov    %esi,%eax
081c6a34 +0x1c6:  mov    %ebx,%edx
081c6a36 +0x1c8:  mov    %eax,(%esp)
081c6a39 +0x1cb:  call   08ae3750 <_Unwind_Resume>
081c6a3e +0x1d0:  lea    -0x1d(%ebp),%eax
081c6a41 +0x1d3:  mov    %eax,(%esp)
081c6a44 +0x1d6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081c6a49 +0x1db:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081c6a4e +0x1e0:  lea    -0x34(%ebp),%edx
081c6a51 +0x1e3:  mov    %edx,0x4(%esp)
081c6a55 +0x1e7:  mov    %eax,(%esp)
081c6a58 +0x1ea:  call   0862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>  ; CSyncSlangFilter::HasSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081c6a5d +0x1ef:  test   %al,%al
081c6a5f +0x1f1:  jne    081c6a79 <+0x20b>
081c6a61 +0x1f3:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081c6a66 +0x1f8:  lea    -0x34(%ebp),%edx
081c6a69 +0x1fb:  mov    %edx,0x4(%esp)
081c6a6d +0x1ff:  mov    %eax,(%esp)
081c6a70 +0x202:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081c6a75 +0x207:  test   %al,%al
081c6a77 +0x209:  je     081c6a80 <+0x212>
081c6a79 +0x20b:  mov    $0x1,%eax
081c6a7e +0x210:  jmp    081c6a85 <+0x217>
081c6a80 +0x212:  mov    $0x0,%eax
081c6a85 +0x217:  test   %al,%al
081c6a87 +0x219:  je     081c6a93 <+0x225>
081c6a89 +0x21b:  mov    $0x9f,%ebx
081c6a8e +0x220:  jmp    081c6c0d <+0x39f>
081c6a93 +0x225:  mov    0xc(%ebp),%eax
081c6a96 +0x228:  mov    %eax,(%esp)
081c6a99 +0x22b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c6a9e +0x230:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081c6aa4 +0x236:  mov    %eax,0x4(%esp)
081c6aa8 +0x23a:  mov    %edx,(%esp)
081c6aab +0x23d:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081c6ab0 +0x242:  movzbl %al,%ebx
081c6ab3 +0x245:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c6ab8 +0x24a:  mov    %ebx,0x4(%esp)
081c6abc +0x24e:  mov    %eax,(%esp)
081c6abf +0x251:  call   0822b668 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd12>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd12
081c6ac4 +0x256:  mov    -0xc(%ebp),%eax
081c6ac7 +0x259:  movzbl 0xd(%eax),%eax
081c6acb +0x25d:  movsbl %al,%eax
081c6ace +0x260:  mov    0xc(%ebp),%edx
081c6ad1 +0x263:  add    $0x796e8,%edx
081c6ad7 +0x269:  mov    %eax,0x4(%esp)
081c6adb +0x26d:  mov    %edx,(%esp)
081c6ade +0x270:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c6ae3 +0x275:  add    $0x4,%eax
081c6ae6 +0x278:  mov    %eax,(%esp)
081c6ae9 +0x27b:  call   0807e3b0 <_init+0xca8>
081c6aee +0x280:  mov    %eax,%esi
081c6af0 +0x282:  mov    -0xc(%ebp),%eax
081c6af3 +0x285:  movzbl 0xd(%eax),%eax
081c6af7 +0x289:  movsbl %al,%eax
081c6afa +0x28c:  mov    0xc(%ebp),%edx
081c6afd +0x28f:  add    $0x796e8,%edx
081c6b03 +0x295:  mov    %eax,0x4(%esp)
081c6b07 +0x299:  mov    %edx,(%esp)
081c6b0a +0x29c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c6b0f +0x2a1:  add    $0x4,%eax
081c6b12 +0x2a4:  mov    %eax,%ebx
081c6b14 +0x2a6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c6b19 +0x2ab:  mov    %esi,0x8(%esp)
081c6b1d +0x2af:  mov    %ebx,0x4(%esp)
081c6b21 +0x2b3:  mov    %eax,(%esp)
081c6b24 +0x2b6:  call   0836360c <_ZN12CDataManager26hasPreventPrefixCharacNameEPKci>  ; CDataManager::hasPreventPrefixCharacName(char const*, int)
081c6b29 +0x2bb:  test   %al,%al
081c6b2b +0x2bd:  je     081c6b37 <+0x2c9>
081c6b2d +0x2bf:  mov    $0x8,%ebx
081c6b32 +0x2c4:  jmp    081c6c0d <+0x39f>
081c6b37 +0x2c9:  mov    -0xc(%ebp),%eax
081c6b3a +0x2cc:  movzbl 0xd(%eax),%eax
081c6b3e +0x2d0:  movsbl %al,%eax
081c6b41 +0x2d3:  mov    %eax,0x4(%esp)
081c6b45 +0x2d7:  mov    0xc(%ebp),%eax
081c6b48 +0x2da:  mov    %eax,(%esp)
081c6b4b +0x2dd:  call   0864aaf6 <_ZN5CUser17checkSelectCharacEi>  ; CUser::checkSelectCharac(int)
081c6b50 +0x2e2:  xor    $0x1,%eax
081c6b53 +0x2e5:  test   %al,%al
081c6b55 +0x2e7:  je     081c6b61 <+0x2f3>
081c6b57 +0x2e9:  mov    $0xfffffffd,%ebx
081c6b5c +0x2ee:  jmp    081c6c0d <+0x39f>
081c6b61 +0x2f3:  mov    0xc(%ebp),%eax
081c6b64 +0x2f6:  mov    %eax,(%esp)
081c6b67 +0x2f9:  call   0864aa78 <_ZN5CUser20isLockedDeleteCharacEv>  ; CUser::isLockedDeleteCharac()
081c6b6c +0x2fe:  test   %al,%al
081c6b6e +0x300:  je     081c6bd2 <+0x364>
081c6b70 +0x302:  mov    -0xc(%ebp),%eax
081c6b73 +0x305:  movzbl 0xd(%eax),%eax
081c6b77 +0x309:  movsbl %al,%eax
081c6b7a +0x30c:  mov    0xc(%ebp),%edx
081c6b7d +0x30f:  add    $0x796e8,%edx
081c6b83 +0x315:  mov    %eax,0x4(%esp)
081c6b87 +0x319:  mov    %edx,(%esp)
081c6b8a +0x31c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c6b8f +0x321:  mov    (%eax),%ebx
081c6b91 +0x323:  movl   $0x0,0xc(%esp)
081c6b99 +0x32b:  movl   $0x171c,0x8(%esp)
081c6ba1 +0x333:  movl   $&_ZZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c6ba9 +0x33b:  lea    -0x1c(%ebp),%eax
081c6bac +0x33e:  mov    %eax,(%esp)
081c6baf +0x341:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081c6bb4 +0x346:  mov    %ebx,0x8(%esp)
081c6bb8 +0x34a:  movl   $"select_charac error during delete charac_no(%d)",0x4(%esp)
081c6bc0 +0x352:  lea    -0x1c(%ebp),%eax
081c6bc3 +0x355:  mov    %eax,(%esp)
081c6bc6 +0x358:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081c6bcb +0x35d:  mov    $0x7fffffff,%ebx
081c6bd0 +0x362:  jmp    081c6c0d <+0x39f>
081c6bd2 +0x364:  mov    0xc(%ebp),%eax
081c6bd5 +0x367:  mov    %eax,(%esp)
081c6bd8 +0x36a:  call   0864a9ac <_ZN5CUser13lock4DataLoadEv>  ; CUser::lock4DataLoad()
081c6bdd +0x36f:  xor    $0x1,%eax
081c6be0 +0x372:  test   %al,%al
081c6be2 +0x374:  je     081c6beb <+0x37d>
081c6be4 +0x376:  mov    $0xfffffffc,%ebx
081c6be9 +0x37b:  jmp    081c6c0d <+0x39f>
081c6beb +0x37d:  mov    $0x0,%ebx
081c6bf0 +0x382:  jmp    081c6c0d <+0x39f>
081c6bf2 +0x384:  mov    %edx,%ebx
081c6bf4 +0x386:  mov    %eax,%esi
081c6bf6 +0x388:  lea    -0x34(%ebp),%eax
081c6bf9 +0x38b:  mov    %eax,(%esp)
081c6bfc +0x38e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081c6c01 +0x393:  mov    %esi,%eax
081c6c03 +0x395:  mov    %ebx,%edx
081c6c05 +0x397:  mov    %eax,(%esp)
081c6c08 +0x39a:  call   08ae3750 <_Unwind_Resume>
081c6c0d +0x39f:  lea    -0x34(%ebp),%eax
081c6c10 +0x3a2:  mov    %eax,(%esp)
081c6c13 +0x3a5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081c6c18 +0x3aa:  mov    %ebx,%eax
081c6c1a +0x3ac:  add    $0x40,%esp
081c6c1d +0x3af:  pop    %ebx
081c6c1e +0x3b0:  pop    %esi
081c6c1f +0x3b1:  pop    %ebp
081c6c20 +0x3b2:  ret
081c6c21 +0x3b3:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::check_error @ 0x81c686e

/* DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SelectCharac::check_error(DisPatcher_SelectCharac *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_CHARAC_SELECT MVar1;
  char cVar2;
  MSG_BASE MVar3;
  bool bVar4;
  int iVar5;
  GameWorld *this_00;
  uint uVar6;
  CSyncSlangFilter *pCVar7;
  CDataManager *this_01;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  string local_38;
  cMyTrace local_34 [19];
  allocator<char> local_21;
  cMyTrace local_20 [16];
  MSG_BASE *local_10;
  
  iVar5 = CUser::get_state(param_1);
  if (iVar5 != 2) {
    return 0x7fffffff;
  }
  cVar2 = CUser::isLockedCreateCharac(param_1);
  if (cVar2 != '\0') {
    return 0x13;
  }
  cVar2 = CUser::isHumanCertified(param_1);
  if (cVar2 != '\x01') {
    return 0x7fffffff;
  }
  local_10 = param_2;
  this_00 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(this_00);
  if (iVar5 == 0xe) {
    uVar6 = CUser::getOnlinePreliminaryCharacNo(param_1);
    MVar3 = (MSG_BASE)CUser::get_charac_idx(param_1,uVar6);
    local_10[0xd] = MVar3;
    if (local_10[0xd] == (MSG_BASE)0xff) {
      return 0xffffffff;
    }
  }
  cVar2 = checkPvpEnterCharacter(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  if (cVar2 != '\x01') {
    return 0xffffffff;
  }
  if (('#' < (char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd)) ||
     ((char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd) < '\0')) {
    MVar1 = *(MSG_CHARAC_SELECT *)(local_10 + 0xd);
    cMyTrace::cMyTrace(local_34,"int DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)",0x16c4
                       ,5);
    cMyTrace::operator()(local_34,"pUser->SelectCharac() fail, %d out of range",(int)(char)MVar1);
    return 4;
  }
  uVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8));
  if (uVar6 <= (byte)*(MSG_CHARAC_SELECT *)(local_10 + 0xd)) {
    return 0xfffffffe;
  }
  std::allocator<char>::allocator();
  iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                     (int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
                    /* try { // try from 081c6a1c to 081c6a20 has its CatchHandler @ 081c6a23 */
  std::string::string((string *)&local_38,(char *)(iVar5 + 4),(allocator *)&local_21);
  std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 081c6a49 to 081c6bdc has its CatchHandler @ 081c6bf2 */
  pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar2 = CSyncSlangFilter::HasSlangName(pCVar7,&local_38);
  if (cVar2 == '\0') {
    pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar2 = CSyncSlangFilter::HasSlang(pCVar7,&local_38);
    if (cVar2 == '\0') {
      bVar4 = false;
      goto LAB_081c6a85;
    }
  }
  bVar4 = true;
LAB_081c6a85:
  if (bVar4) {
    uVar10 = 0x9f;
  }
  else {
    uVar6 = CUser::get_acc_id(param_1);
    bVar4 = (bool)WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
    this_01 = (CDataManager *)G_CDataManager();
    CDataManager::setCharacNameFilterPass(this_01,bVar4);
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
    strlen((char *)(iVar5 + 4));
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
    pcVar8 = (char *)G_CDataManager();
    cVar2 = CDataManager::hasPreventPrefixCharacName(pcVar8,iVar5 + 4);
    if (cVar2 == '\0') {
      cVar2 = CUser::checkSelectCharac(param_1,(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
      if (cVar2 == '\x01') {
        cVar2 = CUser::isLockedDeleteCharac(param_1);
        if (cVar2 == '\0') {
          cVar2 = CUser::lock4DataLoad(param_1);
          if (cVar2 == '\x01') {
            uVar10 = 0;
          }
          else {
            uVar10 = 0xfffffffc;
          }
        }
        else {
          puVar9 = (undefined4 *)
                   std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                             ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                              (param_1 + 0x796e8),(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd))
          ;
          uVar10 = *puVar9;
          cMyTrace::cMyTrace(local_20,"int DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)",
                             0x171c,0);
          cMyTrace::operator()(local_20,"select_charac error during delete charac_no(%d)",uVar10);
          uVar10 = 0x7fffffff;
        }
      }
      else {
        uVar10 = 0xfffffffd;
      }
    }
    else {
      uVar10 = 8;
    }
  }
  std::string::~string((string *)&local_38);
  return uVar10;
}
```
