# LoadGmListFromDb

`_ZN7Gm_List16LoadGmListFromDbEv`

`Gm_List::LoadGmListFromDb()`

| 类 | 地址 |
|---|---|
| `Gm_List` | `0x0829996c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829996c  _ZN7Gm_List16LoadGmListFromDbEv
#           Gm_List::LoadGmListFromDb()
# range [0x0829996c, 0x08299d53]
0829996c +0x000:  push   %ebp
0829996d +0x001:  mov    %esp,%ebp
0829996f +0x003:  push   %esi
08299970 +0x004:  push   %ebx
08299971 +0x005:  sub    $0xa0,%esp
08299977 +0x00b:  movb   $0x0,-0x11(%ebp)
0829997b +0x00f:  movl   $0x0,-0x10(%ebp)
08299982 +0x016:  movl   $0x0,-0x74(%ebp)
08299989 +0x01d:  movl   $0x0,-0x78(%ebp)
08299990 +0x024:  mov    0x8(%ebp),%eax
08299993 +0x027:  mov    (%eax),%eax
08299995 +0x029:  movl   $"seLect m_id, level from gm_manifest",0x4(%esp)
0829999d +0x031:  mov    %eax,(%esp)
082999a0 +0x034:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
082999a5 +0x039:  mov    0x8(%ebp),%eax
082999a8 +0x03c:  mov    (%eax),%eax
082999aa +0x03e:  movl   $0x1,0x4(%esp)
082999b2 +0x046:  mov    %eax,(%esp)
082999b5 +0x049:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
082999ba +0x04e:  mov    %al,-0x11(%ebp)
082999bd +0x051:  movzbl -0x11(%ebp),%eax
082999c1 +0x055:  xor    $0x1,%eax
082999c4 +0x058:  test   %al,%al
082999c6 +0x05a:  je     08299a18 <+0xac>
082999c8 +0x05c:  movl   $0x1,0x14(%esp)
082999d0 +0x064:  movl   $0x1,0x10(%esp)
082999d8 +0x06c:  movl   $0x9,0xc(%esp)
082999e0 +0x074:  movl   $0x15d4,0x8(%esp)
082999e8 +0x07c:  movl   $&_ZZN7Gm_List16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
082999f0 +0x084:  lea    -0x70(%ebp),%eax
082999f3 +0x087:  mov    %eax,(%esp)
082999f6 +0x08a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
082999fb +0x08f:  movl   $"Failed to get GM list from DB.",0x4(%esp)
08299a03 +0x097:  lea    -0x70(%ebp),%eax
08299a06 +0x09a:  mov    %eax,(%esp)
08299a09 +0x09d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08299a0e +0x0a2:  mov    $0x0,%ebx
08299a13 +0x0a7:  jmp    08299d47 <+0x3db>
08299a18 +0x0ac:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
08299a1d +0x0b1:  mov    %eax,(%esp)
08299a20 +0x0b4:  call   08109510 <_ZN8WongWork11CGMAccounts11clearGmListEv>  ; WongWork::CGMAccounts::clearGmList()
08299a25 +0x0b9:  lea    -0x7c(%ebp),%eax
08299a28 +0x0bc:  mov    %eax,(%esp)
08299a2b +0x0bf:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08299a30 +0x0c4:  mov    0x8(%ebp),%eax
08299a33 +0x0c7:  mov    (%eax),%eax
08299a35 +0x0c9:  mov    %eax,(%esp)
08299a38 +0x0cc:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08299a3d +0x0d1:  mov    %eax,-0x10(%ebp)
08299a40 +0x0d4:  movl   $0x0,-0xc(%ebp)
08299a47 +0x0db:  jmp    08299c87 <+0x31b>
08299a4c +0x0e0:  mov    0x8(%ebp),%eax
08299a4f +0x0e3:  mov    (%eax),%eax
08299a51 +0x0e5:  mov    %eax,(%esp)
08299a54 +0x0e8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08299a59 +0x0ed:  mov    0x8(%ebp),%eax
08299a5c +0x0f0:  mov    (%eax),%eax
08299a5e +0x0f2:  lea    -0x74(%ebp),%edx
08299a61 +0x0f5:  mov    %edx,0x8(%esp)
08299a65 +0x0f9:  movl   $0x0,0x4(%esp)
08299a6d +0x101:  mov    %eax,(%esp)
08299a70 +0x104:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08299a75 +0x109:  mov    %al,-0x11(%ebp)
08299a78 +0x10c:  movzbl -0x11(%ebp),%eax
08299a7c +0x110:  xor    $0x1,%eax
08299a7f +0x113:  test   %al,%al
08299a81 +0x115:  je     08299ad3 <+0x167>
08299a83 +0x117:  movl   $0x1,0x14(%esp)
08299a8b +0x11f:  movl   $0x1,0x10(%esp)
08299a93 +0x127:  movl   $0x9,0xc(%esp)
08299a9b +0x12f:  movl   $0x15e5,0x8(%esp)
08299aa3 +0x137:  movl   $&_ZZN7Gm_List16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
08299aab +0x13f:  lea    -0x60(%ebp),%eax
08299aae +0x142:  mov    %eax,(%esp)
08299ab1 +0x145:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08299ab6 +0x14a:  movl   $"Failed to get GM's m_id from DB.",0x4(%esp)
08299abe +0x152:  lea    -0x60(%ebp),%eax
08299ac1 +0x155:  mov    %eax,(%esp)
08299ac4 +0x158:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08299ac9 +0x15d:  mov    $0x0,%ebx
08299ace +0x162:  jmp    08299d3c <+0x3d0>
08299ad3 +0x167:  lea    -0x45(%ebp),%eax
08299ad6 +0x16a:  mov    %eax,(%esp)
08299ad9 +0x16d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08299ade +0x172:  mov    -0x74(%ebp),%eax
08299ae1 +0x175:  movl   $0x0,0x4(%esp)
08299ae9 +0x17d:  mov    %eax,(%esp)
08299aec +0x180:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08299af1 +0x185:  lea    -0x45(%ebp),%edx
08299af4 +0x188:  mov    %edx,0x8(%esp)
08299af8 +0x18c:  mov    %eax,0x4(%esp)
08299afc +0x190:  lea    -0x4c(%ebp),%eax
08299aff +0x193:  mov    %eax,(%esp)
08299b02 +0x196:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08299b07 +0x19b:  lea    -0x50(%ebp),%eax
08299b0a +0x19e:  movl   $", ",0x8(%esp)
08299b12 +0x1a6:  lea    -0x4c(%ebp),%edx
08299b15 +0x1a9:  mov    %edx,0x4(%esp)
08299b19 +0x1ad:  mov    %eax,(%esp)
08299b1c +0x1b0:  call   0816c779 <_GLOBAL__I__ZN11COpensslRSAC2Ev+0x80>  ; global constructors keyed to COpensslRSA::COpensslRSA()+0x80
08299b21 +0x1b5:  sub    $0x4,%esp
08299b24 +0x1b8:  lea    -0x50(%ebp),%eax
08299b27 +0x1bb:  mov    %eax,0x4(%esp)
08299b2b +0x1bf:  lea    -0x7c(%ebp),%eax
08299b2e +0x1c2:  mov    %eax,(%esp)
08299b31 +0x1c5:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
08299b36 +0x1ca:  jmp    08299b4d <+0x1e1>
08299b38 +0x1cc:  mov    %edx,%ebx
08299b3a +0x1ce:  mov    %eax,%esi
08299b3c +0x1d0:  lea    -0x50(%ebp),%eax
08299b3f +0x1d3:  mov    %eax,(%esp)
08299b42 +0x1d6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08299b47 +0x1db:  mov    %esi,%eax
08299b49 +0x1dd:  mov    %ebx,%edx
08299b4b +0x1df:  jmp    08299b5a <+0x1ee>
08299b4d +0x1e1:  lea    -0x50(%ebp),%eax
08299b50 +0x1e4:  mov    %eax,(%esp)
08299b53 +0x1e7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08299b58 +0x1ec:  jmp    08299b6f <+0x203>
08299b5a +0x1ee:  mov    %edx,%ebx
08299b5c +0x1f0:  mov    %eax,%esi
08299b5e +0x1f2:  lea    -0x4c(%ebp),%eax
08299b61 +0x1f5:  mov    %eax,(%esp)
08299b64 +0x1f8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08299b69 +0x1fd:  mov    %esi,%eax
08299b6b +0x1ff:  mov    %ebx,%edx
08299b6d +0x201:  jmp    08299b7c <+0x210>
08299b6f +0x203:  lea    -0x4c(%ebp),%eax
08299b72 +0x206:  mov    %eax,(%esp)
08299b75 +0x209:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08299b7a +0x20e:  jmp    08299b94 <+0x228>
08299b7c +0x210:  mov    %edx,%ebx
08299b7e +0x212:  mov    %eax,%esi
08299b80 +0x214:  lea    -0x45(%ebp),%eax
08299b83 +0x217:  mov    %eax,(%esp)
08299b86 +0x21a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08299b8b +0x21f:  mov    %esi,%eax
08299b8d +0x221:  mov    %ebx,%edx
08299b8f +0x223:  jmp    08299d21 <+0x3b5>
08299b94 +0x228:  lea    -0x45(%ebp),%eax
08299b97 +0x22b:  mov    %eax,(%esp)
08299b9a +0x22e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08299b9f +0x233:  mov    -0x74(%ebp),%eax
08299ba2 +0x236:  movl   $0x0,0x4(%esp)
08299baa +0x23e:  mov    %eax,(%esp)
08299bad +0x241:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08299bb2 +0x246:  mov    %eax,%ebx
08299bb4 +0x248:  movl   $0x0,0xc(%esp)
08299bbc +0x250:  movl   $0x15ec,0x8(%esp)
08299bc4 +0x258:  movl   $&_ZZN7Gm_List16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
08299bcc +0x260:  lea    -0x44(%ebp),%eax
08299bcf +0x263:  mov    %eax,(%esp)
08299bd2 +0x266:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08299bd7 +0x26b:  mov    %ebx,0x8(%esp)
08299bdb +0x26f:  movl   $"GM M_ID : %s",0x4(%esp)
08299be3 +0x277:  lea    -0x44(%ebp),%eax
08299be6 +0x27a:  mov    %eax,(%esp)
08299be9 +0x27d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08299bee +0x282:  mov    0x8(%ebp),%eax
08299bf1 +0x285:  mov    (%eax),%eax
08299bf3 +0x287:  lea    -0x78(%ebp),%edx
08299bf6 +0x28a:  mov    %edx,0x8(%esp)
08299bfa +0x28e:  movl   $0x1,0x4(%esp)
08299c02 +0x296:  mov    %eax,(%esp)
08299c05 +0x299:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08299c0a +0x29e:  mov    %al,-0x11(%ebp)
08299c0d +0x2a1:  movzbl -0x11(%ebp),%eax
08299c11 +0x2a5:  xor    $0x1,%eax
08299c14 +0x2a8:  test   %al,%al
08299c16 +0x2aa:  je     08299c68 <+0x2fc>
08299c18 +0x2ac:  movl   $0x1,0x14(%esp)
08299c20 +0x2b4:  movl   $0x1,0x10(%esp)
08299c28 +0x2bc:  movl   $0x9,0xc(%esp)
08299c30 +0x2c4:  movl   $0x15f2,0x8(%esp)
08299c38 +0x2cc:  movl   $&_ZZN7Gm_List16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
08299c40 +0x2d4:  lea    -0x34(%ebp),%eax
08299c43 +0x2d7:  mov    %eax,(%esp)
08299c46 +0x2da:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08299c4b +0x2df:  movl   $"Failed to get GM's lv from DB.",0x4(%esp)
08299c53 +0x2e7:  lea    -0x34(%ebp),%eax
08299c56 +0x2ea:  mov    %eax,(%esp)
08299c59 +0x2ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08299c5e +0x2f2:  mov    $0x0,%ebx
08299c63 +0x2f7:  jmp    08299d3c <+0x3d0>
08299c68 +0x2fc:  mov    -0x78(%ebp),%ecx
08299c6b +0x2ff:  mov    -0x74(%ebp),%edx
08299c6e +0x302:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
08299c73 +0x307:  mov    %ecx,0x8(%esp)
08299c77 +0x30b:  mov    %edx,0x4(%esp)
08299c7b +0x30f:  mov    %eax,(%esp)
08299c7e +0x312:  call   081094ea <_ZN8WongWork11CGMAccounts10LoadGmListEji>  ; WongWork::CGMAccounts::LoadGmList(unsigned int, int)
08299c83 +0x317:  addl   $0x1,-0xc(%ebp)
08299c87 +0x31b:  mov    -0xc(%ebp),%eax
08299c8a +0x31e:  cmp    -0x10(%ebp),%eax
08299c8d +0x321:  setl   %al
08299c90 +0x324:  test   %al,%al
08299c92 +0x326:  jne    08299a4c <+0xe0>
08299c98 +0x32c:  lea    -0x7c(%ebp),%eax
08299c9b +0x32f:  mov    %eax,(%esp)
08299c9e +0x332:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08299ca3 +0x337:  mov    %eax,%ebx
08299ca5 +0x339:  movl   $0x1,0x14(%esp)
08299cad +0x341:  movl   $0x1,0x10(%esp)
08299cb5 +0x349:  movl   $0x9,0xc(%esp)
08299cbd +0x351:  movl   $0x15f9,0x8(%esp)
08299cc5 +0x359:  movl   $&_ZZN7Gm_List16LoadGmListFromDbEvE19__PRETTY_FUNCTION__,0x4(%esp)
08299ccd +0x361:  lea    -0x24(%ebp),%eax
08299cd0 +0x364:  mov    %eax,(%esp)
08299cd3 +0x367:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08299cd8 +0x36c:  mov    %ebx,0x8(%esp)
08299cdc +0x370:  movl   $"\t- GM m_id: %s",0x4(%esp)
08299ce4 +0x378:  lea    -0x24(%ebp),%eax
08299ce7 +0x37b:  mov    %eax,(%esp)
08299cea +0x37e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08299cef +0x383:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08299cf4 +0x388:  mov    %eax,(%esp)
08299cf7 +0x38b:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08299cfc +0x390:  cmp    $0x1,%eax
08299cff +0x393:  sete   %al
08299d02 +0x396:  test   %al,%al
08299d04 +0x398:  je     08299d1b <+0x3af>
08299d06 +0x39a:  mov    &_ZN10GlobalData6gmListE,%eax
08299d0b +0x39f:  movl   $0x0,0x4(%esp)
08299d13 +0x3a7:  mov    %eax,(%esp)
08299d16 +0x3aa:  call   08299d54 <_ZN7Gm_List25SendGMList_To_UpperServerEi>  ; Gm_List::SendGMList_To_UpperServer(int)
08299d1b +0x3af:  movzbl -0x11(%ebp),%ebx
08299d1f +0x3b3:  jmp    08299d3c <+0x3d0>
08299d21 +0x3b5:  mov    %edx,%ebx
08299d23 +0x3b7:  mov    %eax,%esi
08299d25 +0x3b9:  lea    -0x7c(%ebp),%eax
08299d28 +0x3bc:  mov    %eax,(%esp)
08299d2b +0x3bf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08299d30 +0x3c4:  mov    %esi,%eax
08299d32 +0x3c6:  mov    %ebx,%edx
08299d34 +0x3c8:  mov    %eax,(%esp)
08299d37 +0x3cb:  call   08ae3750 <_Unwind_Resume>
08299d3c +0x3d0:  lea    -0x7c(%ebp),%eax
08299d3f +0x3d3:  mov    %eax,(%esp)
08299d42 +0x3d6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08299d47 +0x3db:  mov    %ebx,%eax
08299d49 +0x3dd:  lea    -0x8(%ebp),%esp
08299d4c +0x3e0:  add    $0x0,%esp
08299d4f +0x3e3:  pop    %ebx
08299d50 +0x3e4:  pop    %esi
08299d51 +0x3e5:  pop    %ebp
08299d52 +0x3e6:  ret
08299d53 +0x3e7:  nop
```

## 反编译 C

```c
// Gm_List::LoadGmListFromDb @ 0x829996c

/* Gm_List::LoadGmListFromDb() */

char __thiscall Gm_List::LoadGmListFromDb(Gm_List *this)

{
  char *pcVar1;
  undefined4 uVar2;
  CEnvironment *this_00;
  int iVar3;
  char cVar4;
  string local_80 [4];
  int local_7c;
  uint local_78;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  string local_54;
  string local_50;
  allocator<char> local_49;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  int local_14;
  int local_10;
  
  local_15 = 0;
  local_14 = 0;
  local_78 = 0;
  local_7c = 0;
  MySQL::set_query(*(MySQL **)this,"seLect m_id, level from gm_manifest");
  local_15 = MySQL::exec(*(MySQL **)this,true);
  if (local_15 == '\x01') {
    WongWork::CGMAccounts::clearGmList(GlobalData::s_pGMAccounts_);
    std::string::string(local_80);
    local_14 = MySQL::get_n_rows(*(MySQL **)this);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
                    /* try { // try from 08299a54 to 08299ac8 has its CatchHandler @ 08299d21 */
      MySQL::fetch(*(MySQL **)this);
      local_15 = MySQL::get_int(*(MySQL **)this,0,&local_78);
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_64,"bool Gm_List::LoadGmListFromDb()",0x15e5,9,true,true);
        cMyTrace::operator()(local_64,"Failed to get GM\'s m_id from DB.");
        cVar4 = '\0';
        goto LAB_08299d3c;
      }
      std::allocator<char>::allocator();
                    /* try { // try from 08299aec to 08299b06 has its CatchHandler @ 08299b7c */
      pcVar1 = (char *)NumberToString(local_78,0);
      std::string::string((string *)&local_50,pcVar1,(allocator *)&local_49);
                    /* try { // try from 08299b1c to 08299b20 has its CatchHandler @ 08299b5a */
      std::operator+(&local_54,&local_50,", ");
                    /* try { // try from 08299b31 to 08299b35 has its CatchHandler @ 08299b38 */
      std::string::append(local_80,(string *)&local_54);
                    /* try { // try from 08299b53 to 08299b57 has its CatchHandler @ 08299b5a */
      std::string::~string((string *)&local_54);
                    /* try { // try from 08299b75 to 08299b79 has its CatchHandler @ 08299b7c */
      std::string::~string((string *)&local_50);
      std::allocator<char>::~allocator(&local_49);
                    /* try { // try from 08299bad to 08299d1a has its CatchHandler @ 08299d21 */
      uVar2 = NumberToString(local_78,0);
      cMyTrace::cMyTrace(local_48,"bool Gm_List::LoadGmListFromDb()",0x15ec,0);
      cMyTrace::operator()(local_48,"GM M_ID : %s",uVar2);
      local_15 = MySQL::get_int(*(MySQL **)this,1,&local_7c);
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool Gm_List::LoadGmListFromDb()",0x15f2,9,true,true);
        cMyTrace::operator()(local_38,"Failed to get GM\'s lv from DB.");
        cVar4 = '\0';
        goto LAB_08299d3c;
      }
      WongWork::CGMAccounts::LoadGmList(GlobalData::s_pGMAccounts_,local_78,local_7c);
    }
    uVar2 = std::string::c_str(local_80);
    cMyTrace::cMyTrace(local_28,"bool Gm_List::LoadGmListFromDb()",0x15f9,9,true,true);
    cMyTrace::operator()(local_28,"\t- GM m_id: %s",uVar2);
    this_00 = (CEnvironment *)G_CEnvironment();
    iVar3 = CEnvironment::get_channel_no(this_00);
    cVar4 = local_15;
    if (iVar3 == 1) {
      SendGMList_To_UpperServer(GlobalData::gmList,0);
      cVar4 = local_15;
    }
LAB_08299d3c:
    std::string::~string(local_80);
  }
  else {
    cMyTrace::cMyTrace(local_74,"bool Gm_List::LoadGmListFromDb()",0x15d4,9,true,true);
    cMyTrace::operator()(local_74,"Failed to get GM list from DB.");
    cVar4 = '\0';
  }
  return cVar4;
}
```
