# DisConnSig

`_ZN5CUser10DisConnSigE11DISCONN_SIGbi`

`CUser::DisConnSig(DISCONN_SIG, bool, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086489f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086489f4  _ZN5CUser10DisConnSigE11DISCONN_SIGbi
#           CUser::DisConnSig(DISCONN_SIG, bool, int)
# range [0x086489f4, 0x086493c7]
086489f4 +0x000:  push   %ebp
086489f5 +0x001:  mov    %esp,%ebp
086489f7 +0x003:  push   %edi
086489f8 +0x004:  push   %esi
086489f9 +0x005:  push   %ebx
086489fa +0x006:  sub    $0xd1c,%esp
08648a00 +0x00c:  mov    0x10(%ebp),%eax
08648a03 +0x00f:  mov    %al,-0xccc(%ebp)
08648a09 +0x015:  mov    0x8(%ebp),%eax
08648a0c +0x018:  add    $0x8cfa0,%eax
08648a11 +0x01d:  mov    %eax,0x4(%esp)
08648a15 +0x021:  lea    -0x70(%ebp),%eax
08648a18 +0x024:  mov    %eax,(%esp)
08648a1b +0x027:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08648a20 +0x02c:  lea    -0x65(%ebp),%eax
08648a23 +0x02f:  mov    %eax,(%esp)
08648a26 +0x032:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08648a2b +0x037:  lea    -0x65(%ebp),%eax
08648a2e +0x03a:  mov    %eax,0x8(%esp)
08648a32 +0x03e:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
08648a3a +0x046:  lea    -0x6c(%ebp),%eax
08648a3d +0x049:  mov    %eax,(%esp)
08648a40 +0x04c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08648a45 +0x051:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
08648a4a +0x056:  lea    -0x6c(%ebp),%edx
08648a4d +0x059:  mov    %edx,0x4(%esp)
08648a51 +0x05d:  mov    %eax,(%esp)
08648a54 +0x060:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08648a59 +0x065:  mov    0x8(%ebp),%edx
08648a5c +0x068:  mov    %edx,0x4(%esp)
08648a60 +0x06c:  mov    %eax,(%esp)
08648a63 +0x06f:  call   08195b06 <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser>  ; ARAD::Arad_EventPeriodDataManager::delUserRewardData(CUser*)
08648a68 +0x074:  jmp    08648a7f <+0x8b>
08648a6a +0x076:  mov    %edx,%ebx
08648a6c +0x078:  mov    %eax,%esi
08648a6e +0x07a:  lea    -0x6c(%ebp),%eax
08648a71 +0x07d:  mov    %eax,(%esp)
08648a74 +0x080:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08648a79 +0x085:  mov    %esi,%eax
08648a7b +0x087:  mov    %ebx,%edx
08648a7d +0x089:  jmp    08648a8c <+0x98>
08648a7f +0x08b:  lea    -0x6c(%ebp),%eax
08648a82 +0x08e:  mov    %eax,(%esp)
08648a85 +0x091:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08648a8a +0x096:  jmp    08648aa4 <+0xb0>
08648a8c +0x098:  mov    %edx,%ebx
08648a8e +0x09a:  mov    %eax,%esi
08648a90 +0x09c:  lea    -0x65(%ebp),%eax
08648a93 +0x09f:  mov    %eax,(%esp)
08648a96 +0x0a2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08648a9b +0x0a7:  mov    %esi,%eax
08648a9d +0x0a9:  mov    %ebx,%edx
08648a9f +0x0ab:  jmp    08649397 <+0x9a3>
08648aa4 +0x0b0:  lea    -0x65(%ebp),%eax
08648aa7 +0x0b3:  mov    %eax,(%esp)
08648aaa +0x0b6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08648aaf +0x0bb:  mov    0x8(%ebp),%eax
08648ab2 +0x0be:  mov    0xe0(%eax),%eax
08648ab8 +0x0c4:  test   %eax,%eax
08648aba +0x0c6:  js     08648acd <+0xd9>
08648abc +0x0c8:  mov    0x8(%ebp),%eax
08648abf +0x0cb:  mov    0x8cfc4(%eax),%eax
08648ac5 +0x0d1:  test   %eax,%eax
08648ac7 +0x0d3:  jne    08648b65 <+0x171>
08648acd +0x0d9:  mov    0xc(%ebp),%eax
08648ad0 +0x0dc:  mov    %eax,-0xcf4(%ebp)
08648ad6 +0x0e2:  mov    0x8(%ebp),%eax
08648ad9 +0x0e5:  mov    0x704ac(%eax),%eax
08648adf +0x0eb:  movl   $0x0,0x4(%esp)
08648ae7 +0x0f3:  mov    %eax,(%esp)
08648aea +0x0f6:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08648aef +0x0fb:  mov    %eax,%ebx
08648af1 +0x0fd:  mov    0x8(%ebp),%eax
08648af4 +0x100:  mov    %eax,(%esp)
08648af7 +0x103:  call   084ecd42 <_GLOBAL__I__Z7getUserj+0x3cf4>  ; global constructors keyed to getUser(unsigned int)+0x3cf4
08648afc +0x108:  movswl %ax,%edi
08648aff +0x10b:  mov    0x8(%ebp),%eax
08648b02 +0x10e:  mov    %eax,(%esp)
08648b05 +0x111:  call   082a683c <_GLOBAL__I__ZN4CLog5this_E+0x2c63>  ; global constructors keyed to CLog::this_+0x2c63
08648b0a +0x116:  movswl %ax,%esi
08648b0d +0x119:  movl   $0x5,0xc(%esp)
08648b15 +0x121:  movl   $0x911,0x8(%esp)
08648b1d +0x129:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x4(%esp)
08648b25 +0x131:  lea    -0x64(%ebp),%eax
08648b28 +0x134:  mov    %eax,(%esp)
08648b2b +0x137:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08648b30 +0x13c:  mov    -0xcf4(%ebp),%edx
08648b36 +0x142:  mov    %edx,0x18(%esp)
08648b3a +0x146:  mov    %ebx,0x14(%esp)
08648b3e +0x14a:  mov    %edi,0x10(%esp)
08648b42 +0x14e:  mov    %esi,0xc(%esp)
08648b46 +0x152:  mov    0x8(%ebp),%eax
08648b49 +0x155:  mov    %eax,0x8(%esp)
08648b4d +0x159:  movl   $"this %x,incre_id= %d, idx= %d, m_socket<0,m_ChState==NONE , DisConnSig %s, From %d",0x4(%esp)
08648b55 +0x161:  lea    -0x64(%ebp),%eax
08648b58 +0x164:  mov    %eax,(%esp)
08648b5b +0x167:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08648b60 +0x16c:  jmp    086493b2 <+0x9be>
08648b65 +0x171:  mov    0x8(%ebp),%eax
08648b68 +0x174:  mov    %eax,(%esp)
08648b6b +0x177:  call   082a6796 <_GLOBAL__I__ZN4CLog5this_E+0x2bbd>  ; global constructors keyed to CLog::this_+0x2bbd
08648b70 +0x17c:  test   %al,%al
08648b72 +0x17e:  je     08648c10 <+0x21c>
08648b78 +0x184:  mov    0xc(%ebp),%eax
08648b7b +0x187:  mov    %eax,-0xcf0(%ebp)
08648b81 +0x18d:  mov    0x8(%ebp),%eax
08648b84 +0x190:  mov    0x704ac(%eax),%eax
08648b8a +0x196:  movl   $0x0,0x4(%esp)
08648b92 +0x19e:  mov    %eax,(%esp)
08648b95 +0x1a1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08648b9a +0x1a6:  mov    %eax,%ebx
08648b9c +0x1a8:  mov    0x8(%ebp),%eax
08648b9f +0x1ab:  mov    %eax,(%esp)
08648ba2 +0x1ae:  call   084ecd42 <_GLOBAL__I__Z7getUserj+0x3cf4>  ; global constructors keyed to getUser(unsigned int)+0x3cf4
08648ba7 +0x1b3:  movswl %ax,%edi
08648baa +0x1b6:  mov    0x8(%ebp),%eax
08648bad +0x1b9:  mov    %eax,(%esp)
08648bb0 +0x1bc:  call   082a683c <_GLOBAL__I__ZN4CLog5this_E+0x2c63>  ; global constructors keyed to CLog::this_+0x2c63
08648bb5 +0x1c1:  movswl %ax,%esi
08648bb8 +0x1c4:  movl   $0x5,0xc(%esp)
08648bc0 +0x1cc:  movl   $0x917,0x8(%esp)
08648bc8 +0x1d4:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x4(%esp)
08648bd0 +0x1dc:  lea    -0x54(%ebp),%eax
08648bd3 +0x1df:  mov    %eax,(%esp)
08648bd6 +0x1e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08648bdb +0x1e7:  mov    -0xcf0(%ebp),%edx
08648be1 +0x1ed:  mov    %edx,0x18(%esp)
08648be5 +0x1f1:  mov    %ebx,0x14(%esp)
08648be9 +0x1f5:  mov    %edi,0x10(%esp)
08648bed +0x1f9:  mov    %esi,0xc(%esp)
08648bf1 +0x1fd:  mov    0x8(%ebp),%eax
08648bf4 +0x200:  mov    %eax,0x8(%esp)
08648bf8 +0x204:  movl   $"[Prog log out...]this %x,incre_id= %d, idx= %d, DisConnSig %s, From %d",0x4(%esp)
08648c00 +0x20c:  lea    -0x54(%ebp),%eax
08648c03 +0x20f:  mov    %eax,(%esp)
08648c06 +0x212:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08648c0b +0x217:  jmp    086493b2 <+0x9be>
08648c10 +0x21c:  mov    0x8(%ebp),%eax
08648c13 +0x21f:  mov    %eax,(%esp)
08648c16 +0x222:  call   0869735e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3bb3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3bb3
08648c1b +0x227:  mov    0x8(%ebp),%eax
08648c1e +0x22a:  lea    0xe0(%eax),%edx
08648c24 +0x230:  movl   $0x10,0x8(%esp)
08648c2c +0x238:  lea    -0x80(%ebp),%eax
08648c2f +0x23b:  mov    %eax,0x4(%esp)
08648c33 +0x23f:  mov    %edx,(%esp)
08648c36 +0x242:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08648c3b +0x247:  test   %eax,%eax
08648c3d +0x249:  setne  %al
08648c40 +0x24c:  test   %al,%al
08648c42 +0x24e:  je     08648d31 <+0x33d>
08648c48 +0x254:  mov    0x8(%ebp),%eax
08648c4b +0x257:  mov    %eax,(%esp)
08648c4e +0x25a:  call   0867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>  ; CUser::getPlayingDungeonIndex()
08648c53 +0x25f:  mov    %eax,%ebx
08648c55 +0x261:  mov    0x8(%ebp),%eax
08648c58 +0x264:  mov    0x8cf08(%eax),%eax
08648c5e +0x26a:  mov    %eax,-0xcec(%ebp)
08648c64 +0x270:  mov    0x8(%ebp),%eax
08648c67 +0x273:  movzbl 0x8cf0c(%eax),%eax
08648c6e +0x27a:  movzbl %al,%eax
08648c71 +0x27d:  mov    %eax,-0xce8(%ebp)
08648c77 +0x283:  mov    0x8(%ebp),%eax
08648c7a +0x286:  movzbl 0x8cf0d(%eax),%eax
08648c81 +0x28d:  movzbl %al,%eax
08648c84 +0x290:  mov    %eax,-0xce4(%ebp)
08648c8a +0x296:  mov    0x8(%ebp),%eax
08648c8d +0x299:  movzwl 0x704a8(%eax),%eax
08648c94 +0x2a0:  movzwl %ax,%eax
08648c97 +0x2a3:  mov    %eax,-0xce0(%ebp)
08648c9d +0x2a9:  mov    0x8(%ebp),%eax
08648ca0 +0x2ac:  mov    0x704ac(%eax),%eax
08648ca6 +0x2b2:  movl   $0x0,0x4(%esp)
08648cae +0x2ba:  mov    %eax,(%esp)
08648cb1 +0x2bd:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08648cb6 +0x2c2:  mov    %eax,%esi
08648cb8 +0x2c4:  mov    0xc(%ebp),%edi
08648cbb +0x2c7:  movl   $0x0,0xc(%esp)
08648cc3 +0x2cf:  movl   $0x937,0x8(%esp)
08648ccb +0x2d7:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x4(%esp)
08648cd3 +0x2df:  lea    -0x44(%ebp),%eax
08648cd6 +0x2e2:  mov    %eax,(%esp)
08648cd9 +0x2e5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08648cde +0x2ea:  mov    %ebx,0x24(%esp)
08648ce2 +0x2ee:  lea    -0x80(%ebp),%eax
08648ce5 +0x2f1:  mov    %eax,0x20(%esp)
08648ce9 +0x2f5:  mov    -0xcec(%ebp),%eax
08648cef +0x2fb:  mov    %eax,0x1c(%esp)
08648cf3 +0x2ff:  mov    -0xce8(%ebp),%edx
08648cf9 +0x305:  mov    %edx,0x18(%esp)
08648cfd +0x309:  mov    -0xce4(%ebp),%eax
08648d03 +0x30f:  mov    %eax,0x14(%esp)
08648d07 +0x313:  mov    -0xce0(%ebp),%edx
08648d0d +0x319:  mov    %edx,0x10(%esp)
08648d11 +0x31d:  mov    %esi,0xc(%esp)
08648d15 +0x321:  mov    %edi,0x8(%esp)
08648d19 +0x325:  movl   $"from (%d) m_id[%s] uid[%d], send(%d:%d), recv(%d), ip(%s), dungeon(%d)",0x4(%esp)
08648d21 +0x32d:  lea    -0x44(%ebp),%eax
08648d24 +0x330:  mov    %eax,(%esp)
08648d27 +0x333:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08648d2c +0x338:  jmp    08648e0e <+0x41a>
08648d31 +0x33d:  mov    0x8(%ebp),%eax
08648d34 +0x340:  mov    %eax,(%esp)
08648d37 +0x343:  call   0867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>  ; CUser::getPlayingDungeonIndex()
08648d3c +0x348:  mov    %eax,%esi
08648d3e +0x34a:  mov    0x8(%ebp),%eax
08648d41 +0x34d:  mov    0x8cf08(%eax),%eax
08648d47 +0x353:  mov    %eax,-0xcdc(%ebp)
08648d4d +0x359:  mov    0x8(%ebp),%eax
08648d50 +0x35c:  movzbl 0x8cf0c(%eax),%eax
08648d57 +0x363:  movzbl %al,%eax
08648d5a +0x366:  mov    %eax,-0xcd8(%ebp)
08648d60 +0x36c:  mov    0x8(%ebp),%eax
08648d63 +0x36f:  movzbl 0x8cf0d(%eax),%eax
08648d6a +0x376:  movzbl %al,%eax
08648d6d +0x379:  mov    %eax,-0xcd4(%ebp)
08648d73 +0x37f:  mov    0x8(%ebp),%eax
08648d76 +0x382:  movzwl 0x704a8(%eax),%eax
08648d7d +0x389:  movzwl %ax,%eax
08648d80 +0x38c:  mov    %eax,-0xcd0(%ebp)
08648d86 +0x392:  mov    0x8(%ebp),%eax
08648d89 +0x395:  mov    0x704ac(%eax),%eax
08648d8f +0x39b:  movl   $0x0,0x4(%esp)
08648d97 +0x3a3:  mov    %eax,(%esp)
08648d9a +0x3a6:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08648d9f +0x3ab:  mov    %eax,%ebx
08648da1 +0x3ad:  mov    0xc(%ebp),%edi
08648da4 +0x3b0:  movl   $0x0,0xc(%esp)
08648dac +0x3b8:  movl   $0x939,0x8(%esp)
08648db4 +0x3c0:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x4(%esp)
08648dbc +0x3c8:  lea    -0x34(%ebp),%eax
08648dbf +0x3cb:  mov    %eax,(%esp)
08648dc2 +0x3ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08648dc7 +0x3d3:  mov    %esi,0x20(%esp)
08648dcb +0x3d7:  mov    -0xcdc(%ebp),%eax
08648dd1 +0x3dd:  mov    %eax,0x1c(%esp)
08648dd5 +0x3e1:  mov    -0xcd8(%ebp),%edx
08648ddb +0x3e7:  mov    %edx,0x18(%esp)
08648ddf +0x3eb:  mov    -0xcd4(%ebp),%eax
08648de5 +0x3f1:  mov    %eax,0x14(%esp)
08648de9 +0x3f5:  mov    -0xcd0(%ebp),%edx
08648def +0x3fb:  mov    %edx,0x10(%esp)
08648df3 +0x3ff:  mov    %ebx,0xc(%esp)
08648df7 +0x403:  mov    %edi,0x8(%esp)
08648dfb +0x407:  movl   $"from (%d) m_id[%s] uid[%d], send(%d:%d), recv(%d), ip(GetPeerIP:NONE), dungeon(%d)",0x4(%esp)
08648e03 +0x40f:  lea    -0x34(%ebp),%eax
08648e06 +0x412:  mov    %eax,(%esp)
08648e09 +0x415:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08648e0e +0x41a:  cmpl   $0x5,0xc(%ebp)
08648e12 +0x41e:  jne    08648e87 <+0x493>
08648e14 +0x420:  mov    0x8(%ebp),%eax
08648e17 +0x423:  mov    0x704ac(%eax),%eax
08648e1d +0x429:  test   %eax,%eax
08648e1f +0x42b:  jne    08648e3b <+0x447>
08648e21 +0x42d:  lea    -0x80(%ebp),%eax
08648e24 +0x430:  movzbl (%eax),%eax
08648e27 +0x433:  test   %al,%al
08648e29 +0x435:  je     08648e3b <+0x447>
08648e2b +0x437:  movl   $0x30,0xc(%ebp)
08648e32 +0x43e:  movb   $0x1,-0xccc(%ebp)
08648e39 +0x445:  jmp    08648e87 <+0x493>
08648e3b +0x447:  mov    0x8(%ebp),%eax
08648e3e +0x44a:  mov    0x704ac(%eax),%eax
08648e44 +0x450:  test   %eax,%eax
08648e46 +0x452:  je     08648e62 <+0x46e>
08648e48 +0x454:  lea    -0x80(%ebp),%eax
08648e4b +0x457:  movzbl (%eax),%eax
08648e4e +0x45a:  test   %al,%al
08648e50 +0x45c:  jne    08648e62 <+0x46e>
08648e52 +0x45e:  movl   $0x31,0xc(%ebp)
08648e59 +0x465:  movb   $0x1,-0xccc(%ebp)
08648e60 +0x46c:  jmp    08648e87 <+0x493>
08648e62 +0x46e:  mov    0x8(%ebp),%eax
08648e65 +0x471:  mov    0x704ac(%eax),%eax
08648e6b +0x477:  test   %eax,%eax
08648e6d +0x479:  jne    08648e87 <+0x493>
08648e6f +0x47b:  lea    -0x80(%ebp),%eax
08648e72 +0x47e:  movzbl (%eax),%eax
08648e75 +0x481:  test   %al,%al
08648e77 +0x483:  jne    08648e87 <+0x493>
08648e79 +0x485:  movl   $0x32,0xc(%ebp)
08648e80 +0x48c:  movb   $0x1,-0xccc(%ebp)
08648e87 +0x493:  mov    0xc(%ebp),%eax
08648e8a +0x496:  mov    %eax,0x4(%esp)
08648e8e +0x49a:  mov    0x8(%ebp),%eax
08648e91 +0x49d:  mov    %eax,(%esp)
08648e94 +0x4a0:  call   0864870e <_ZN5CUser29SendClientCrashDownLogToLogDBEi>  ; CUser::SendClientCrashDownLogToLogDB(int)
08648e99 +0x4a5:  lea    -0x90(%ebp),%eax
08648e9f +0x4ab:  mov    %eax,(%esp)
08648ea2 +0x4ae:  call   082a4224 <_GLOBAL__I__ZN4CLog5this_E+0x64b>  ; global constructors keyed to CLog::this_+0x64b
08648ea7 +0x4b3:  movzbl -0x8d(%ebp),%eax
08648eae +0x4ba:  cmp    $0x12,%al
08648eb0 +0x4bc:  jle    08648f4d <+0x559>
08648eb6 +0x4c2:  movzbl -0x8d(%ebp),%eax
08648ebd +0x4c9:  cmp    $0x16,%al
08648ebf +0x4cb:  jg     08648f4d <+0x559>
08648ec5 +0x4d1:  lea    -0xaa(%ebp),%eax
08648ecb +0x4d7:  mov    %eax,(%esp)
08648ece +0x4da:  call   08694504 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xd59>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xd59
08648ed3 +0x4df:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08648eda +0x4e6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08648edf +0x4eb:  mov    %eax,%ebx
08648ee1 +0x4ed:  mov    0x8(%ebp),%eax
08648ee4 +0x4f0:  mov    %eax,(%esp)
08648ee7 +0x4f3:  call   0863bec0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3d1
08648eec +0x4f8:  mov    %ebx,%edx
08648eee +0x4fa:  sub    %eax,%edx
08648ef0 +0x4fc:  mov    %edx,%eax
08648ef2 +0x4fe:  mov    %eax,-0xa0(%ebp)
08648ef8 +0x504:  mov    0x8(%ebp),%eax
08648efb +0x507:  mov    0x704ac(%eax),%eax
08648f01 +0x50d:  mov    %eax,-0x9c(%ebp)
08648f07 +0x513:  mov    -0xa0(%ebp),%eax
08648f0d +0x519:  test   %eax,%eax
08648f0f +0x51b:  jle    08648f4d <+0x559>
08648f11 +0x51d:  mov    -0xa0(%ebp),%eax
08648f17 +0x523:  cmp    $0x2a30,%eax
08648f1c +0x528:  jg     08648f4d <+0x559>
08648f1e +0x52a:  lea    -0xaa(%ebp),%ebx
08648f24 +0x530:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08648f29 +0x535:  movl   $0x0,0x4(%esp)
08648f31 +0x53d:  mov    %eax,(%esp)
08648f34 +0x540:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08648f39 +0x545:  movl   $0x12,0x8(%esp)
08648f41 +0x54d:  mov    %ebx,0x4(%esp)
08648f45 +0x551:  mov    %eax,(%esp)
08648f48 +0x554:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08648f4d +0x559:  mov    0x8(%ebp),%eax
08648f50 +0x55c:  mov    0xe0(%eax),%eax
08648f56 +0x562:  cmp    $0xffffffff,%eax
08648f59 +0x565:  jne    08648fa9 <+0x5b5>
08648f5b +0x567:  mov    0x8(%ebp),%eax
08648f5e +0x56a:  mov    0x704ac(%eax),%eax
08648f64 +0x570:  movl   $0x0,0x4(%esp)
08648f6c +0x578:  mov    %eax,(%esp)
08648f6f +0x57b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08648f74 +0x580:  mov    %eax,0x14(%esp)
08648f78 +0x584:  movl   $"[CUser::DisConnSig] Already Disconnected! Socket(-1) ACCID[%s]",0x10(%esp)
08648f80 +0x58c:  movl   $0x971,0xc(%esp)
08648f88 +0x594:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x8(%esp)
08648f90 +0x59c:  movl   $"user.cpp",0x4(%esp)
08648f98 +0x5a4:  movl   $0x1,(%esp)
08648f9f +0x5ab:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08648fa4 +0x5b0:  jmp    086493b2 <+0x9be>
08648fa9 +0x5b5:  cmpl   $0x6,0xc(%ebp)
08648fad +0x5b9:  je     086490a2 <+0x6ae>
08648fb3 +0x5bf:  cmpl   $0x30,0xc(%ebp)
08648fb7 +0x5c3:  je     086490a2 <+0x6ae>
08648fbd +0x5c9:  cmpl   $0x31,0xc(%ebp)
08648fc1 +0x5cd:  je     086490a2 <+0x6ae>
08648fc7 +0x5d3:  cmpl   $0x32,0xc(%ebp)
08648fcb +0x5d7:  je     086490a2 <+0x6ae>
08648fd1 +0x5dd:  lea    -0xb8(%ebp),%eax
08648fd7 +0x5e3:  mov    %eax,(%esp)
08648fda +0x5e6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08648fdf +0x5eb:  movl   $0xc7,0x8(%esp)
08648fe7 +0x5f3:  movl   $0x0,0x4(%esp)
08648fef +0x5fb:  lea    -0xb8(%ebp),%eax
08648ff5 +0x601:  mov    %eax,(%esp)
08648ff8 +0x604:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08648ffd +0x609:  mov    0xc(%ebp),%eax
08649000 +0x60c:  mov    %eax,0x4(%esp)
08649004 +0x610:  lea    -0xb8(%ebp),%eax
0864900a +0x616:  mov    %eax,(%esp)
0864900d +0x619:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08649012 +0x61e:  movl   $0x1,0x4(%esp)
0864901a +0x626:  lea    -0xb8(%ebp),%eax
08649020 +0x62c:  mov    %eax,(%esp)
08649023 +0x62f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08649028 +0x634:  lea    -0xb8(%ebp),%eax
0864902e +0x63a:  mov    %eax,0x4(%esp)
08649032 +0x63e:  mov    0x8(%ebp),%eax
08649035 +0x641:  mov    %eax,(%esp)
08649038 +0x644:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0864903d +0x649:  xor    $0x1,%eax
08649040 +0x64c:  test   %al,%al
08649042 +0x64e:  je     08649094 <+0x6a0>
08649044 +0x650:  mov    0xc(%ebp),%eax
08649047 +0x653:  mov    %eax,0x14(%esp)
0864904b +0x657:  movl   $"[CUser::DisConnSig] Fail to disconnect reason send: reason[%d]",0x10(%esp)
08649053 +0x65f:  movl   $0x988,0xc(%esp)
0864905b +0x667:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x8(%esp)
08649063 +0x66f:  movl   $"user.cpp",0x4(%esp)
0864906b +0x677:  movl   $0x1,(%esp)
08649072 +0x67e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08649077 +0x683:  jmp    08649094 <+0x6a0>
08649079 +0x685:  mov    %edx,%ebx
0864907b +0x687:  mov    %eax,%esi
0864907d +0x689:  lea    -0xb8(%ebp),%eax
08649083 +0x68f:  mov    %eax,(%esp)
08649086 +0x692:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0864908b +0x697:  mov    %esi,%eax
0864908d +0x699:  mov    %ebx,%edx
0864908f +0x69b:  jmp    08649397 <+0x9a3>
08649094 +0x6a0:  lea    -0xb8(%ebp),%eax
0864909a +0x6a6:  mov    %eax,(%esp)
0864909d +0x6a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086490a2 +0x6ae:  movl   $0x0,-0x24(%ebp)
086490a9 +0x6b5:  mov    0x8(%ebp),%eax
086490ac +0x6b8:  mov    0xe0(%eax),%ebx
086490b2 +0x6be:  call   082a70ab <_GLOBAL__I__ZN4CLog5this_E+0x34d2>  ; global constructors keyed to CLog::this_+0x34d2
086490b7 +0x6c3:  mov    %ebx,0x4(%esp)
086490bb +0x6c7:  mov    %eax,(%esp)
086490be +0x6ca:  call   0857c258 <_ZN12EpollHandler10ResetEpollEi>  ; EpollHandler::ResetEpoll(int)
086490c3 +0x6cf:  mov    %eax,-0x24(%ebp)
086490c6 +0x6d2:  cmpl   $0x0,-0x24(%ebp)
086490ca +0x6d6:  setne  %al
086490cd +0x6d9:  test   %al,%al
086490cf +0x6db:  je     08649141 <+0x74d>
086490d1 +0x6dd:  mov    -0x24(%ebp),%eax
086490d4 +0x6e0:  mov    %eax,(%esp)
086490d7 +0x6e3:  call   0807d730 <_init+0x28>
086490dc +0x6e8:  mov    %eax,%ebx
086490de +0x6ea:  mov    0x8(%ebp),%eax
086490e1 +0x6ed:  mov    0xe0(%eax),%esi
086490e7 +0x6f3:  mov    0x8(%ebp),%eax
086490ea +0x6f6:  mov    %eax,(%esp)
086490ed +0x6f9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086490f2 +0x6fe:  movl   $0x0,0x4(%esp)
086490fa +0x706:  mov    %eax,(%esp)
086490fd +0x709:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08649102 +0x70e:  mov    %ebx,0x20(%esp)
08649106 +0x712:  mov    -0x24(%ebp),%edx
08649109 +0x715:  mov    %edx,0x1c(%esp)
0864910d +0x719:  mov    %esi,0x18(%esp)
08649111 +0x71d:  mov    %eax,0x14(%esp)
08649115 +0x721:  movl   $"(m_id: %s) G_EpollHandler()->ResetEpoll(pUser->get_socket(%d)) %d(%s)",0x10(%esp)
0864911d +0x729:  movl   $0x98e,0xc(%esp)
08649125 +0x731:  movl   $&_ZZN5CUser10DisConnSigE11DISCONN_SIGbiE19__PRETTY_FUNCTION__,0x8(%esp)
0864912d +0x739:  movl   $"user.cpp",0x4(%esp)
08649135 +0x741:  movl   $0x1,(%esp)
0864913c +0x748:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08649141 +0x74d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08649146 +0x752:  movl   $0x991,0x8(%esp)
0864914e +0x75a:  movl   $"user.cpp",0x4(%esp)
08649156 +0x762:  mov    %eax,(%esp)
08649159 +0x765:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0864915e +0x76a:  movl   $0x1,0x8(%esp)
08649166 +0x772:  mov    %eax,0x4(%esp)
0864916a +0x776:  lea    -0x98(%ebp),%eax
08649170 +0x77c:  mov    %eax,(%esp)
08649173 +0x77f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08649178 +0x784:  lea    -0x98(%ebp),%eax
0864917e +0x78a:  mov    %eax,(%esp)
08649181 +0x78d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08649186 +0x792:  movl   $0x1,0x4(%esp)
0864918e +0x79a:  mov    %eax,(%esp)
08649191 +0x79d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08649196 +0x7a2:  mov    0x8(%ebp),%eax
08649199 +0x7a5:  mov    %eax,(%esp)
0864919c +0x7a8:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086491a1 +0x7ad:  mov    %eax,%ebx
086491a3 +0x7af:  lea    -0x98(%ebp),%eax
086491a9 +0x7b5:  mov    %eax,(%esp)
086491ac +0x7b8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086491b1 +0x7bd:  mov    %ebx,0x4(%esp)
086491b5 +0x7c1:  mov    %eax,(%esp)
086491b8 +0x7c4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086491bd +0x7c9:  mov    0x8(%ebp),%eax
086491c0 +0x7cc:  movzbl 0x8d0df(%eax),%eax
086491c7 +0x7d3:  xor    $0x1,%eax
086491ca +0x7d6:  test   %al,%al
086491cc +0x7d8:  je     0864934e <+0x95a>
086491d2 +0x7de:  movzbl -0xccc(%ebp),%eax
086491d9 +0x7e5:  xor    $0x1,%eax
086491dc +0x7e8:  test   %al,%al
086491de +0x7ea:  je     08649277 <+0x883>
086491e4 +0x7f0:  mov    0x8(%ebp),%eax
086491e7 +0x7f3:  mov    0x8cf08(%eax),%ebx
086491ed +0x7f9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086491f2 +0x7fe:  mov    %eax,(%esp)
086491f5 +0x801:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
086491fa +0x806:  mov    %ebx,0x4(%esp)
086491fe +0x80a:  mov    %eax,(%esp)
08649201 +0x80d:  call   0860bb88 <_ZN24StatisticsToObserveCrash24incUserLastCrashPacketIDEi>  ; StatisticsToObserveCrash::incUserLastCrashPacketID(int)
08649206 +0x812:  mov    0x8(%ebp),%eax
08649209 +0x815:  mov    %eax,(%esp)
0864920c +0x818:  call   0867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>  ; CUser::getPlayingDungeonIndex()
08649211 +0x81d:  mov    %eax,%ebx
08649213 +0x81f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08649218 +0x824:  mov    %eax,(%esp)
0864921b +0x827:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
08649220 +0x82c:  mov    %ebx,0x4(%esp)
08649224 +0x830:  mov    %eax,(%esp)
08649227 +0x833:  call   0860bd2e <_ZN24StatisticsToObserveCrash25incUserLastCrashDungeonIDEi>  ; StatisticsToObserveCrash::incUserLastCrashDungeonID(int)
0864922c +0x838:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08649231 +0x83d:  mov    %eax,(%esp)
08649234 +0x840:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
08649239 +0x845:  mov    %eax,(%esp)
0864923c +0x848:  call   0860bb52 <_ZN24StatisticsToObserveCrash24incAbnormalDownUserCountEv>  ; StatisticsToObserveCrash::incAbnormalDownUserCount()
08649241 +0x84d:  movl   $0x0,-0x1c(%ebp)
08649248 +0x854:  mov    0x8(%ebp),%eax
0864924b +0x857:  mov    %eax,(%esp)
0864924e +0x85a:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
08649253 +0x85f:  test   %al,%al
08649255 +0x861:  je     0864925b <+0x867>
08649257 +0x863:  orl    $0x1,-0x1c(%ebp)
0864925b +0x867:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08649260 +0x86c:  mov    %eax,(%esp)
08649263 +0x86f:  call   0844dc26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x83c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x83c
08649268 +0x874:  mov    -0x1c(%ebp),%edx
0864926b +0x877:  mov    %edx,0x4(%esp)
0864926f +0x87b:  mov    %eax,(%esp)
08649272 +0x87e:  call   0860bed4 <_ZN24StatisticsToObserveCrash26incUserLastCrashPlayStatusEi>  ; StatisticsToObserveCrash::incUserLastCrashPlayStatus(int)
08649277 +0x883:  mov    0x8(%ebp),%eax
0864927a +0x886:  mov    %eax,(%esp)
0864927d +0x889:  call   0822fcd6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5380>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5380
08649282 +0x88e:  mov    %eax,-0x20(%ebp)
08649285 +0x891:  lea    -0xcbe(%ebp),%eax
0864928b +0x897:  mov    %eax,(%esp)
0864928e +0x89a:  call   0822bc18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x12c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x12c2
08649293 +0x89f:  movb   $0x1,-0xcb4(%ebp)
0864929a +0x8a6:  mov    -0x20(%ebp),%eax
0864929d +0x8a9:  movzbl 0x1(%eax),%eax
086492a1 +0x8ad:  mov    %al,-0xcb3(%ebp)
086492a7 +0x8b3:  mov    0x14(%ebp),%eax
086492aa +0x8b6:  mov    %eax,-0xcb2(%ebp)
086492b0 +0x8bc:  mov    0x8(%ebp),%eax
086492b3 +0x8bf:  mov    %eax,(%esp)
086492b6 +0x8c2:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
086492bb +0x8c7:  mov    %ax,-0xcae(%ebp)
086492c2 +0x8ce:  movzbl -0xcb3(%ebp),%eax
086492c9 +0x8d5:  movzbl %al,%edx
086492cc +0x8d8:  mov    %edx,%eax
086492ce +0x8da:  add    %eax,%eax
086492d0 +0x8dc:  add    %edx,%eax
086492d2 +0x8de:  shl    $0x2,%eax
086492d5 +0x8e1:  mov    -0x20(%ebp),%edx
086492d8 +0x8e4:  add    $0x4,%edx
086492db +0x8e7:  mov    %eax,0x8(%esp)
086492df +0x8eb:  mov    %edx,0x4(%esp)
086492e3 +0x8ef:  lea    -0xcbe(%ebp),%eax
086492e9 +0x8f5:  add    $0x12,%eax
086492ec +0x8f8:  mov    %eax,(%esp)
086492ef +0x8fb:  call   0807d8a0 <_init+0x198>
086492f4 +0x900:  movzbl -0xcb3(%ebp),%eax
086492fb +0x907:  movzbl %al,%edx
086492fe +0x90a:  mov    %edx,%eax
08649300 +0x90c:  add    %eax,%eax
08649302 +0x90e:  add    %edx,%eax
08649304 +0x910:  shl    $0x2,%eax
08649307 +0x913:  add    $0x12,%eax
0864930a +0x916:  mov    %ax,-0xcbc(%ebp)
08649311 +0x91d:  movzwl -0xcbc(%ebp),%eax
08649318 +0x924:  movzwl %ax,%esi
0864931b +0x927:  lea    -0xcbe(%ebp),%ebx
08649321 +0x92d:  mov    0x8(%ebp),%eax
08649324 +0x930:  mov    %eax,(%esp)
08649327 +0x933:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0864932c +0x938:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
08649332 +0x93e:  mov    %eax,0x4(%esp)
08649336 +0x942:  mov    %edx,(%esp)
08649339 +0x945:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0864933e +0x94a:  mov    %esi,0x8(%esp)
08649342 +0x94e:  mov    %ebx,0x4(%esp)
08649346 +0x952:  mov    %eax,(%esp)
08649349 +0x955:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0864934e +0x95a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08649353 +0x95f:  lea    -0x98(%ebp),%edx
08649359 +0x965:  mov    %edx,0x8(%esp)
0864935d +0x969:  movl   $0x1,0x4(%esp)
08649365 +0x971:  mov    %eax,(%esp)
08649368 +0x974:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0864936d +0x979:  jmp    08649387 <+0x993>
0864936f +0x97b:  mov    %edx,%ebx
08649371 +0x97d:  mov    %eax,%esi
08649373 +0x97f:  lea    -0x98(%ebp),%eax
08649379 +0x985:  mov    %eax,(%esp)
0864937c +0x988:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08649381 +0x98d:  mov    %esi,%eax
08649383 +0x98f:  mov    %ebx,%edx
08649385 +0x991:  jmp    08649397 <+0x9a3>
08649387 +0x993:  lea    -0x98(%ebp),%eax
0864938d +0x999:  mov    %eax,(%esp)
08649390 +0x99c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08649395 +0x9a1:  jmp    086493b2 <+0x9be>
08649397 +0x9a3:  mov    %edx,%ebx
08649399 +0x9a5:  mov    %eax,%esi
0864939b +0x9a7:  lea    -0x70(%ebp),%eax
0864939e +0x9aa:  mov    %eax,(%esp)
086493a1 +0x9ad:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
086493a6 +0x9b2:  mov    %esi,%eax
086493a8 +0x9b4:  mov    %ebx,%edx
086493aa +0x9b6:  mov    %eax,(%esp)
086493ad +0x9b9:  call   08ae3750 <_Unwind_Resume>
086493b2 +0x9be:  lea    -0x70(%ebp),%eax
086493b5 +0x9c1:  mov    %eax,(%esp)
086493b8 +0x9c4:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
086493bd +0x9c9:  add    $0xd1c,%esp
086493c3 +0x9cf:  pop    %ebx
086493c4 +0x9d0:  pop    %esi
086493c5 +0x9d1:  pop    %edi
086493c6 +0x9d2:  pop    %ebp
086493c7 +0x9d3:  ret
```

## 反编译 C

```c
// CUser::DisConnSig @ 0x86489f4

/* CUser::DisConnSig(DISCONN_SIG, bool, int) */

void __thiscall CUser::DisConnSig(CUser *this,int param_2,char param_3,undefined4 param_4)

{
  CUser CVar1;
  CUser CVar2;
  ushort uVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  Arad_DataManager *this_00;
  Arad_EventPeriodDataManager *this_01;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CStatisticServerProxy *pCVar11;
  EpollHandler *this_02;
  char *pcVar12;
  uint uVar13;
  Stream *pSVar14;
  CStreamGuard *pCVar15;
  GameWorld *pGVar16;
  StatisticsToObserveCrash *this_03;
  char local_cd0;
  Packet_Client_Spec_Statistic local_cc2 [2];
  ushort local_cc0;
  undefined1 local_cb8;
  byte local_cb7;
  undefined4 local_cb6;
  undefined2 local_cb2;
  undefined1 auStack_cb0 [3060];
  PacketGuard local_bc [14];
  Packet_User_Ting_TimeCheck_Statistic_Add local_ae [10];
  int local_a4;
  undefined4 local_a0;
  CStreamGuard local_9c [8];
  CommonTime local_94 [3];
  char local_91;
  char local_84 [16];
  Guard<Mutex> local_74 [4];
  string local_70 [7];
  allocator<char> local_69;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  uint local_20;
  
  local_cd0 = param_3;
  Guard<Mutex>::Guard(local_74,(Mutex *)(this + 0x8cfa0));
  std::allocator<char>::allocator();
                    /* try { // try from 08648a40 to 08648a44 has its CatchHandler @ 08648a8c */
  std::string::string(local_70,"Arad_EventPeriodDataManager",(allocator *)&local_69);
                    /* try { // try from 08648a45 to 08648a67 has its CatchHandler @ 08648a6a */
  this_00 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
  this_01 = (Arad_EventPeriodDataManager *)
            ARAD::Arad_DataManager::findGameScript(this_00,(string)local_70);
  ARAD::Arad_EventPeriodDataManager::delUserRewardData(this_01,this);
                    /* try { // try from 08648a85 to 08648a89 has its CatchHandler @ 08648a8c */
  std::string::~string(local_70);
  std::allocator<char>::~allocator(&local_69);
  if ((*(int *)(this + 0xe0) < 0) || (*(int *)(this + 0x8cfc4) == 0)) {
                    /* try { // try from 08648aea to 08648fde has its CatchHandler @ 08649397 */
    uVar7 = NumberToString(*(uint *)(this + 0x704ac),0);
    sVar5 = GetSlotIDX(this);
    sVar6 = GetIncreID(this);
    cMyTrace::cMyTrace(local_68,"void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x911,5);
    cMyTrace::operator()
              (local_68,
               "this %x,incre_id= %d, idx= %d, m_socket<0,m_ChState==NONE , DisConnSig %s, From %d",
               this,(int)sVar6,(int)sVar5,uVar7,param_2);
  }
  else {
    cVar4 = IsProgLogout(this);
    if (cVar4 == '\0') {
      SetProgLogout(this);
      iVar8 = CNetwork<4096,450000>::GetPeerIP2
                        ((CNetwork<4096,450000> *)(this + 0xe0),local_84,0x10);
      if (iVar8 == 0) {
        uVar9 = getPlayingDungeonIndex(this);
        uVar7 = *(undefined4 *)(this + 0x8cf08);
        CVar1 = this[0x8cf0c];
        CVar2 = this[0x8cf0d];
        uVar3 = *(ushort *)(this + 0x704a8);
        uVar10 = NumberToString(*(uint *)(this + 0x704ac),0);
        cMyTrace::cMyTrace(local_38,"void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x939,0);
        cMyTrace::operator()
                  (local_38,
                   "from (%d) m_id[%s] uid[%d], send(%d:%d), recv(%d), ip(GetPeerIP:NONE), dungeon(%d)"
                   ,param_2,uVar10,(uint)uVar3,(uint)(byte)CVar2,(uint)(byte)CVar1,uVar7,uVar9);
      }
      else {
        uVar9 = getPlayingDungeonIndex(this);
        uVar7 = *(undefined4 *)(this + 0x8cf08);
        CVar1 = this[0x8cf0c];
        CVar2 = this[0x8cf0d];
        uVar3 = *(ushort *)(this + 0x704a8);
        uVar10 = NumberToString(*(uint *)(this + 0x704ac),0);
        cMyTrace::cMyTrace(local_48,"void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x937,0);
        cMyTrace::operator()
                  (local_48,"from (%d) m_id[%s] uid[%d], send(%d:%d), recv(%d), ip(%s), dungeon(%d)"
                   ,param_2,uVar10,(uint)uVar3,(uint)(byte)CVar2,(uint)(byte)CVar1,uVar7,local_84,
                   uVar9);
      }
      if (param_2 == 5) {
        if ((*(int *)(this + 0x704ac) == 0) && (local_84[0] != '\0')) {
          param_2 = 0x30;
          local_cd0 = '\x01';
        }
        else if ((*(int *)(this + 0x704ac) == 0) || (local_84[0] != '\0')) {
          if ((*(int *)(this + 0x704ac) == 0) && (local_84[0] == '\0')) {
            param_2 = 0x32;
            local_cd0 = '\x01';
          }
        }
        else {
          param_2 = 0x31;
          local_cd0 = '\x01';
        }
      }
      SendClientCrashDownLogToLogDB(this,param_2);
      CommonTime::SetCurTime(local_94);
      if (('\x12' < local_91) && (local_91 < '\x17')) {
        Packet_User_Ting_TimeCheck_Statistic_Add::Packet_User_Ting_TimeCheck_Statistic_Add(local_ae)
        ;
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_a4 = GetLoginTime(this);
        local_a4 = iVar8 - local_a4;
        local_a0 = *(undefined4 *)(this + 0x704ac);
        if ((0 < local_a4) && (local_a4 < 0x2a31)) {
          pCVar11 = (CStatisticServerProxy *)
                    CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                              (GlobalData::s_statistic_proxy_mgr,0);
          CStatisticServerProxy::SendPacket(pCVar11,(char *)local_ae,0x12);
        }
      }
      if (*(int *)(this + 0xe0) == -1) {
        uVar7 = NumberToString(*(uint *)(this + 0x704ac),0);
        LogManager::logFormat
                  (1,"user.cpp","void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x971,
                   "[CUser::DisConnSig] Already Disconnected! Socket(-1) ACCID[%s]",uVar7);
      }
      else {
        if ((((param_2 != 6) && (param_2 != 0x30)) && (param_2 != 0x31)) && (param_2 != 0x32)) {
          PacketGuard::PacketGuard(local_bc);
                    /* try { // try from 08648ff8 to 08649076 has its CatchHandler @ 08649079 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,199);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_bc,param_2);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
          cVar4 = Send(this,local_bc);
          if (cVar4 != '\x01') {
            LogManager::logFormat
                      (1,"user.cpp","void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x988,
                       "[CUser::DisConnSig] Fail to disconnect reason send: reason[%d]",param_2);
          }
                    /* try { // try from 0864909d to 0864915d has its CatchHandler @ 08649397 */
          PacketGuard::~PacketGuard(local_bc);
        }
        local_28 = 0;
        iVar8 = *(int *)(this + 0xe0);
        this_02 = (EpollHandler *)G_EpollHandler();
        local_28 = EpollHandler::ResetEpoll(this_02,iVar8);
        if (local_28 != 0) {
          pcVar12 = strerror(local_28);
          uVar7 = *(undefined4 *)(this + 0xe0);
          uVar13 = get_acc_id(this);
          uVar9 = NumberToString(uVar13,0);
          LogManager::logFormat
                    (1,"user.cpp","void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x98e,
                     "(m_id: %s) G_EpollHandler()->ResetEpoll(pUser->get_socket(%d)) %d(%s)",uVar9,
                     uVar7,local_28,pcVar12);
        }
        pSVar14 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x991);
        CStreamGuard::CStreamGuard(local_9c,pSVar14,true);
        pCVar15 = (CStreamGuard *)CStreamGuard::operator*(local_9c);
                    /* try { // try from 08649191 to 0864936c has its CatchHandler @ 0864936f */
        CStreamGuard::operator<<(pCVar15,1);
        iVar8 = GetUID(this);
        pCVar15 = (CStreamGuard *)CStreamGuard::operator*(local_9c);
        CStreamGuard::operator<<(pCVar15,iVar8);
        if (this[0x8d0df] != (CUser)0x1) {
          if (local_cd0 != '\x01') {
            pGVar16 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::getStatisticsToObserveCrash(pGVar16);
            StatisticsToObserveCrash::incUserLastCrashPacketID(iVar8);
            getPlayingDungeonIndex(this);
            pGVar16 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::getStatisticsToObserveCrash(pGVar16);
            StatisticsToObserveCrash::incUserLastCrashDungeonID(iVar8);
            pGVar16 = (GameWorld *)G_GameWorld();
            this_03 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar16);
            StatisticsToObserveCrash::incAbnormalDownUserCount(this_03);
            local_20 = 0;
            cVar4 = CheckInParty(this);
            if (cVar4 != '\0') {
              local_20 = local_20 | 1;
            }
            pGVar16 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::getStatisticsToObserveCrash(pGVar16);
            StatisticsToObserveCrash::incUserLastCrashPlayStatus(iVar8);
          }
          local_24 = getClientHWSpec(this);
          Packet_Client_Spec_Statistic::Packet_Client_Spec_Statistic(local_cc2);
          local_cb8 = 1;
          local_cb7 = *(byte *)(local_24 + 1);
          local_cb6 = param_4;
          local_cb2 = GetLastLoginChannelNo(this);
          memcpy(auStack_cb0,(void *)(local_24 + 4),(uint)local_cb7 * 0xc);
          local_cc0 = (ushort)local_cb7 * 0xc + 0x12;
          uVar13 = (uint)local_cc0;
          uVar7 = GetServerGroup(this);
          pCVar11 = (CStatisticServerProxy *)
                    CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                              (GlobalData::s_statistic_proxy_mgr,uVar7);
          CStatisticServerProxy::SendPacket(pCVar11,(char *)local_cc2,uVar13);
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_9c);
                    /* try { // try from 08649390 to 08649394 has its CatchHandler @ 08649397 */
        CStreamGuard::~CStreamGuard(local_9c);
      }
    }
    else {
      uVar7 = NumberToString(*(uint *)(this + 0x704ac),0);
      sVar5 = GetSlotIDX(this);
      sVar6 = GetIncreID(this);
      cMyTrace::cMyTrace(local_58,"void CUser::DisConnSig(DISCONN_SIG, bool, int)",0x917,5);
      cMyTrace::operator()
                (local_58,"[Prog log out...]this %x,incre_id= %d, idx= %d, DisConnSig %s, From %d",
                 this,(int)sVar6,(int)sVar5,uVar7,param_2);
    }
  }
  Guard<Mutex>::~Guard(local_74);
  return;
}
```
