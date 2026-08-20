# Reward

`_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result`

`CHARAC_LOAD_MERCENARY::Reward(CUser*, competition_reward_result&)`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b3b68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b3b68  _ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result
#           CHARAC_LOAD_MERCENARY::Reward(CUser*, competition_reward_result&)
# range [0x081b3b68, 0x081b4109]
081b3b68 +0x000:  push   %ebp
081b3b69 +0x001:  mov    %esp,%ebp
081b3b6b +0x003:  push   %edi
081b3b6c +0x004:  push   %esi
081b3b6d +0x005:  push   %ebx
081b3b6e +0x006:  sub    $0x8c,%esp
081b3b74 +0x00c:  cmpl   $0x0,0xc(%ebp)
081b3b78 +0x010:  jne    081b3b84 <+0x1c>
081b3b7a +0x012:  mov    $0x0,%ebx
081b3b7f +0x017:  jmp    081b40fd <+0x595>
081b3b84 +0x01c:  mov    0x8(%ebp),%eax
081b3b87 +0x01f:  mov    %eax,(%esp)
081b3b8a +0x022:  call   081b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>  ; CHARAC_LOAD_MERCENARY::GetCompetitionState() const
081b3b8f +0x027:  test   %eax,%eax
081b3b91 +0x029:  sete   %al
081b3b94 +0x02c:  test   %al,%al
081b3b96 +0x02e:  je     081b3ba2 <+0x3a>
081b3b98 +0x030:  mov    $0x0,%ebx
081b3b9d +0x035:  jmp    081b40fd <+0x595>
081b3ba2 +0x03a:  mov    $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem,%eax
081b3ba7 +0x03f:  movzbl (%eax),%eax
081b3baa +0x042:  test   %al,%al
081b3bac +0x044:  jne    081b3bdb <+0x73>
081b3bae +0x046:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem,(%esp)
081b3bb5 +0x04d:  call   08725330 <__cxa_guard_acquire>
081b3bba +0x052:  test   %eax,%eax
081b3bbc +0x054:  setne  %al
081b3bbf +0x057:  test   %al,%al
081b3bc1 +0x059:  je     081b3bdb <+0x73>
081b3bc3 +0x05b:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem,(%esp)
081b3bca +0x062:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081b3bcf +0x067:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem,(%esp)
081b3bd6 +0x06e:  call   08725250 <__cxa_guard_release>
081b3bdb +0x073:  mov    $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,%eax
081b3be0 +0x078:  movzbl (%eax),%eax
081b3be3 +0x07b:  test   %al,%al
081b3be5 +0x07d:  jne    081b3cb8 <+0x150>
081b3beb +0x083:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,(%esp)
081b3bf2 +0x08a:  call   08725330 <__cxa_guard_acquire>
081b3bf7 +0x08f:  test   %eax,%eax
081b3bf9 +0x091:  setne  %al
081b3bfc +0x094:  test   %al,%al
081b3bfe +0x096:  je     081b3cb8 <+0x150>
081b3c04 +0x09c:  mov    $0x0,%ebx
081b3c09 +0x0a1:  lea    -0x39(%ebp),%eax
081b3c0c +0x0a4:  mov    %eax,(%esp)
081b3c0f +0x0a7:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081b3c14 +0x0ac:  movl   $0x0,0xc(%esp)
081b3c1c +0x0b4:  movl   $"game_server_msg_225",0x8(%esp)
081b3c24 +0x0bc:  movl   $0x4,0x4(%esp)
081b3c2c +0x0c4:  movl   $&g_scriptStringManager_,(%esp)
081b3c33 +0x0cb:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081b3c38 +0x0d0:  lea    -0x39(%ebp),%edx
081b3c3b +0x0d3:  mov    %edx,0x8(%esp)
081b3c3f +0x0d7:  mov    %eax,0x4(%esp)
081b3c43 +0x0db:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,(%esp)
081b3c4a +0x0e2:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081b3c4f +0x0e7:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,(%esp)
081b3c56 +0x0ee:  call   08725250 <__cxa_guard_release>
081b3c5b +0x0f3:  mov    $&_ZNSsD1Ev,%eax
081b3c60 +0x0f8:  movl   $&__dso_handle,0x8(%esp)
081b3c68 +0x100:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,0x4(%esp)
081b3c70 +0x108:  mov    %eax,(%esp)
081b3c73 +0x10b:  call   0807ddd0 <_init+0x6c8>
081b3c78 +0x110:  lea    -0x39(%ebp),%eax
081b3c7b +0x113:  mov    %eax,(%esp)
081b3c7e +0x116:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081b3c83 +0x11b:  jmp    081b3cb8 <+0x150>
081b3c85 +0x11d:  mov    %edx,%esi
081b3c87 +0x11f:  mov    %eax,%edi
081b3c89 +0x121:  lea    -0x39(%ebp),%eax
081b3c8c +0x124:  mov    %eax,(%esp)
081b3c8f +0x127:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081b3c94 +0x12c:  mov    %edi,%eax
081b3c96 +0x12e:  mov    %esi,%edx
081b3c98 +0x130:  mov    %edx,%esi
081b3c9a +0x132:  mov    %eax,%edi
081b3c9c +0x134:  test   %bl,%bl
081b3c9e +0x136:  jne    081b3cac <+0x144>
081b3ca0 +0x138:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,(%esp)
081b3ca7 +0x13f:  call   087252c0 <__cxa_guard_abort>
081b3cac +0x144:  mov    %edi,%eax
081b3cae +0x146:  mov    %esi,%edx
081b3cb0 +0x148:  mov    %eax,(%esp)
081b3cb3 +0x14b:  call   08ae3750 <_Unwind_Resume>
081b3cb8 +0x150:  mov    $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,%eax
081b3cbd +0x155:  movzbl (%eax),%eax
081b3cc0 +0x158:  test   %al,%al
081b3cc2 +0x15a:  jne    081b3d35 <+0x1cd>
081b3cc4 +0x15c:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,(%esp)
081b3ccb +0x163:  call   08725330 <__cxa_guard_acquire>
081b3cd0 +0x168:  test   %eax,%eax
081b3cd2 +0x16a:  setne  %al
081b3cd5 +0x16d:  test   %al,%al
081b3cd7 +0x16f:  je     081b3d35 <+0x1cd>
081b3cd9 +0x171:  mov    $0x0,%ebx
081b3cde +0x176:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,(%esp)
081b3ce5 +0x17d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081b3cea +0x182:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,(%esp)
081b3cf1 +0x189:  call   08725250 <__cxa_guard_release>
081b3cf6 +0x18e:  mov    $&_ZNSsD1Ev,%eax
081b3cfb +0x193:  movl   $&__dso_handle,0x8(%esp)
081b3d03 +0x19b:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,0x4(%esp)
081b3d0b +0x1a3:  mov    %eax,(%esp)
081b3d0e +0x1a6:  call   0807ddd0 <_init+0x6c8>
081b3d13 +0x1ab:  jmp    081b3d35 <+0x1cd>
081b3d15 +0x1ad:  mov    %edx,%esi
081b3d17 +0x1af:  mov    %eax,%edi
081b3d19 +0x1b1:  test   %bl,%bl
081b3d1b +0x1b3:  jne    081b3d29 <+0x1c1>
081b3d1d +0x1b5:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,(%esp)
081b3d24 +0x1bc:  call   087252c0 <__cxa_guard_abort>
081b3d29 +0x1c1:  mov    %edi,%eax
081b3d2b +0x1c3:  mov    %esi,%edx
081b3d2d +0x1c5:  mov    %eax,(%esp)
081b3d30 +0x1c8:  call   08ae3750 <_Unwind_Resume>
081b3d35 +0x1cd:  movl   $0x0,-0x28(%ebp)
081b3d3c +0x1d4:  movb   $0x0,-0x22(%ebp)
081b3d40 +0x1d8:  movb   $0x0,-0x3a(%ebp)
081b3d44 +0x1dc:  mov    0x10(%ebp),%eax
081b3d47 +0x1df:  mov    %eax,0x8(%esp)
081b3d4b +0x1e3:  mov    0xc(%ebp),%eax
081b3d4e +0x1e6:  mov    %eax,0x4(%esp)
081b3d52 +0x1ea:  mov    0x8(%ebp),%eax
081b3d55 +0x1ed:  mov    %eax,(%esp)
081b3d58 +0x1f0:  call   081b3046 <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result>  ; CHARAC_LOAD_MERCENARY::GetRewardGold(CUser*, competition_reward_result&) const
081b3d5d +0x1f5:  mov    %eax,-0x28(%ebp)
081b3d60 +0x1f8:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,0x10(%esp)
081b3d68 +0x200:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem,0xc(%esp)
081b3d70 +0x208:  mov    0x10(%ebp),%eax
081b3d73 +0x20b:  mov    %eax,0x8(%esp)
081b3d77 +0x20f:  mov    0xc(%ebp),%eax
081b3d7a +0x212:  mov    %eax,0x4(%esp)
081b3d7e +0x216:  mov    0x8(%ebp),%eax
081b3d81 +0x219:  mov    %eax,(%esp)
081b3d84 +0x21c:  call   081b3276 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs>  ; CHARAC_LOAD_MERCENARY::GetRewardItem(CUser*, competition_reward_result&, Inven_Item&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
081b3d89 +0x221:  mov    %al,-0x22(%ebp)
081b3d8c +0x224:  movzbl -0x22(%ebp),%eax
081b3d90 +0x228:  xor    $0x1,%eax
081b3d93 +0x22b:  test   %al,%al
081b3d95 +0x22d:  je     081b3e4b <+0x2e3>
081b3d9b +0x233:  movl   $&_ZN31MercenaryHardCodingSettingValueL29MERCENARY_BASE_POSTAL_MESSAGEE,0x4(%esp)
081b3da3 +0x23b:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,(%esp)
081b3daa +0x242:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081b3daf +0x247:  jmp    081b3e4b <+0x2e3>
081b3db4 +0x24c:  mov    %eax,(%esp)
081b3db7 +0x24f:  call   08725ce0 <__cxa_begin_catch>
081b3dbc +0x254:  mov    0x8(%ebp),%eax
081b3dbf +0x257:  movl   $0x0,0x28(%eax)
081b3dc6 +0x25e:  mov    0x8(%ebp),%eax
081b3dc9 +0x261:  movl   $0x0,0x2c(%eax)
081b3dd0 +0x268:  mov    0x8(%ebp),%eax
081b3dd3 +0x26b:  movb   $0xff,0x30(%eax)
081b3dd7 +0x26f:  mov    0x8(%ebp),%eax
081b3dda +0x272:  movb   $0xff,0x31(%eax)
081b3dde +0x276:  mov    0x8(%ebp),%eax
081b3de1 +0x279:  mov    %eax,(%esp)
081b3de4 +0x27c:  call   081b47c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3c
081b3de9 +0x281:  movl   $0x5,0xc(%esp)
081b3df1 +0x289:  movl   $0x1ea,0x8(%esp)
081b3df9 +0x291:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE19__PRETTY_FUNCTION__,0x4(%esp)
081b3e01 +0x299:  lea    -0x38(%ebp),%eax
081b3e04 +0x29c:  mov    %eax,(%esp)
081b3e07 +0x29f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b3e0c +0x2a4:  movl   $0x1ea,0x8(%esp)
081b3e14 +0x2ac:  movl   $"mercenary Line:%d exception\n",0x4(%esp)
081b3e1c +0x2b4:  lea    -0x38(%ebp),%eax
081b3e1f +0x2b7:  mov    %eax,(%esp)
081b3e22 +0x2ba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b3e27 +0x2bf:  mov    $0x1,%ebx
081b3e2c +0x2c4:  call   08725c30 <__cxa_end_catch>
081b3e31 +0x2c9:  jmp    081b40fd <+0x595>
081b3e36 +0x2ce:  mov    %edx,%ebx
081b3e38 +0x2d0:  mov    %eax,%esi
081b3e3a +0x2d2:  call   08725c30 <__cxa_end_catch>
081b3e3f +0x2d7:  mov    %esi,%eax
081b3e41 +0x2d9:  mov    %ebx,%edx
081b3e43 +0x2db:  mov    %eax,(%esp)
081b3e46 +0x2de:  call   08ae3750 <_Unwind_Resume>
081b3e4b +0x2e3:  cmpl   $0x0,-0x28(%ebp)
081b3e4f +0x2e7:  jg     081b3ee3 <+0x37b>
081b3e55 +0x2ed:  lea    -0x3a(%ebp),%eax
081b3e58 +0x2f0:  mov    %eax,0x4(%esp)
081b3e5c +0x2f4:  mov    0x8(%ebp),%eax
081b3e5f +0x2f7:  mov    %eax,(%esp)
081b3e62 +0x2fa:  call   081b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>  ; CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const
081b3e67 +0x2ff:  mov    0x8(%ebp),%edx
081b3e6a +0x302:  mov    0x2c(%edx),%edx
081b3e6d +0x305:  mov    %edx,%ebx
081b3e6f +0x307:  mov    0x8(%ebp),%edx
081b3e72 +0x30a:  mov    0x28(%edx),%edx
081b3e75 +0x30d:  mov    %edx,%ecx
081b3e77 +0x30f:  mov    0x8(%ebp),%edx
081b3e7a +0x312:  mov    (%edx),%edx
081b3e7c +0x314:  mov    0xc(%ebp),%esi
081b3e7f +0x317:  lea    0x79700(%esi),%edi
081b3e85 +0x31d:  movl   $0x0,0x18(%esp)
081b3e8d +0x325:  mov    -0x28(%ebp),%esi
081b3e90 +0x328:  mov    %esi,0x14(%esp)
081b3e94 +0x32c:  mov    %eax,0x10(%esp)
081b3e98 +0x330:  mov    %ebx,0xc(%esp)
081b3e9c +0x334:  mov    %ecx,0x8(%esp)
081b3ea0 +0x338:  mov    %edx,0x4(%esp)
081b3ea4 +0x33c:  mov    %edi,(%esp)
081b3ea7 +0x33f:  call   08686b0a <_ZN15cUserHistoryLog15MercenaryReturnEjiiiii>  ; cUserHistoryLog::MercenaryReturn(unsigned int, int, int, int, int, int)
081b3eac +0x344:  mov    0x8(%ebp),%eax
081b3eaf +0x347:  movl   $0x0,0x28(%eax)
081b3eb6 +0x34e:  mov    0x8(%ebp),%eax
081b3eb9 +0x351:  movl   $0x0,0x2c(%eax)
081b3ec0 +0x358:  mov    0x8(%ebp),%eax
081b3ec3 +0x35b:  movb   $0xff,0x30(%eax)
081b3ec7 +0x35f:  mov    0x8(%ebp),%eax
081b3eca +0x362:  movb   $0xff,0x31(%eax)
081b3ece +0x366:  mov    0x8(%ebp),%eax
081b3ed1 +0x369:  mov    %eax,(%esp)
081b3ed4 +0x36c:  call   081b47c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3c
081b3ed9 +0x371:  mov    $0x1,%ebx
081b3ede +0x376:  jmp    081b40fd <+0x595>
081b3ee3 +0x37b:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE13serverMessage,(%esp)
081b3eea +0x382:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081b3eef +0x387:  movl   $0x0,0xc(%esp)
081b3ef7 +0x38f:  mov    %eax,0x8(%esp)
081b3efb +0x393:  movl   $0x4,0x4(%esp)
081b3f03 +0x39b:  movl   $&g_scriptStringManager_,(%esp)
081b3f0a +0x3a2:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081b3f0f +0x3a7:  movl   $0xff,0x8(%esp)
081b3f17 +0x3af:  mov    %eax,0x4(%esp)
081b3f1b +0x3b3:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE10strMessage,(%esp)
081b3f22 +0x3ba:  call   0807d8d0 <_init+0x1c8>
081b3f27 +0x3bf:  mov    0xc(%ebp),%eax
081b3f2a +0x3c2:  mov    %eax,(%esp)
081b3f2d +0x3c5:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081b3f32 +0x3ca:  mov    %eax,%ebx
081b3f34 +0x3cc:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE10strMessage,(%esp)
081b3f3b +0x3d3:  call   0807e3b0 <_init+0xca8>
081b3f40 +0x3d8:  mov    %eax,-0x5c(%ebp)
081b3f43 +0x3db:  mov    0x8(%ebp),%eax
081b3f46 +0x3de:  mov    (%eax),%edi
081b3f48 +0x3e0:  mov    -0x28(%ebp),%esi
081b3f4b +0x3e3:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9mailTitle,(%esp)
081b3f52 +0x3ea:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081b3f57 +0x3ef:  movl   $0x0,0x24(%esp)
081b3f5f +0x3f7:  movl   $0x0,0x20(%esp)
081b3f67 +0x3ff:  mov    %ebx,0x1c(%esp)
081b3f6b +0x403:  movl   $0x1e,0x18(%esp)
081b3f73 +0x40b:  mov    -0x5c(%ebp),%edx
081b3f76 +0x40e:  mov    %edx,0x14(%esp)
081b3f7a +0x412:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE10strMessage,0x10(%esp)
081b3f82 +0x41a:  mov    %edi,0xc(%esp)
081b3f86 +0x41e:  mov    %esi,0x8(%esp)
081b3f8a +0x422:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem,0x4(%esp)
081b3f92 +0x42a:  mov    %eax,(%esp)
081b3f95 +0x42d:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081b3f9a +0x432:  lea    -0x3a(%ebp),%eax
081b3f9d +0x435:  mov    %eax,0x4(%esp)
081b3fa1 +0x439:  mov    0x8(%ebp),%eax
081b3fa4 +0x43c:  mov    %eax,(%esp)
081b3fa7 +0x43f:  call   081b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>  ; CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const
081b3fac +0x444:  mov    0x8(%ebp),%edx
081b3faf +0x447:  mov    0x2c(%edx),%edx
081b3fb2 +0x44a:  mov    %edx,%ebx
081b3fb4 +0x44c:  mov    0x8(%ebp),%edx
081b3fb7 +0x44f:  mov    0x28(%edx),%edx
081b3fba +0x452:  mov    %edx,%ecx
081b3fbc +0x454:  mov    0x8(%ebp),%edx
081b3fbf +0x457:  mov    (%edx),%edx
081b3fc1 +0x459:  mov    0xc(%ebp),%esi
081b3fc4 +0x45c:  lea    0x79700(%esi),%edi
081b3fca +0x462:  movl   $0x0,0x18(%esp)
081b3fd2 +0x46a:  mov    -0x28(%ebp),%esi
081b3fd5 +0x46d:  mov    %esi,0x14(%esp)
081b3fd9 +0x471:  mov    %eax,0x10(%esp)
081b3fdd +0x475:  mov    %ebx,0xc(%esp)
081b3fe1 +0x479:  mov    %ecx,0x8(%esp)
081b3fe5 +0x47d:  mov    %edx,0x4(%esp)
081b3fe9 +0x481:  mov    %edi,(%esp)
081b3fec +0x484:  call   08686b0a <_ZN15cUserHistoryLog15MercenaryReturnEjiiiii>  ; cUserHistoryLog::MercenaryReturn(unsigned int, int, int, int, int, int)
081b3ff1 +0x489:  movzbl -0x3a(%ebp),%eax
081b3ff5 +0x48d:  test   %al,%al
081b3ff7 +0x48f:  je     081b4000 <+0x498>
081b3ff9 +0x491:  mov    $0x2,%eax
081b3ffe +0x496:  jmp    081b4005 <+0x49d>
081b4000 +0x498:  mov    $0x1,%eax
081b4005 +0x49d:  mov    %al,-0x21(%ebp)
081b4008 +0x4a0:  mov    &_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem+0x2,%eax
081b400d +0x4a5:  mov    %eax,%ebx
081b400f +0x4a7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b4014 +0x4ac:  mov    %ebx,0x4(%esp)
081b4018 +0x4b0:  mov    %eax,(%esp)
081b401b +0x4b3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081b4020 +0x4b8:  mov    %eax,-0x20(%ebp)
081b4023 +0x4bb:  movl   $0xffffffff,-0x1c(%ebp)
081b402a +0x4c2:  cmpl   $0x0,-0x20(%ebp)
081b402e +0x4c6:  je     081b403e <+0x4d6>
081b4030 +0x4c8:  mov    -0x20(%ebp),%eax
081b4033 +0x4cb:  mov    %eax,(%esp)
081b4036 +0x4ce:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081b403b +0x4d3:  mov    %eax,-0x1c(%ebp)
081b403e +0x4d6:  mov    &_ZZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_resultE9emptyItem+0x2,%eax
081b4043 +0x4db:  mov    %eax,%ebx
081b4045 +0x4dd:  mov    0x8(%ebp),%eax
081b4048 +0x4e0:  movzbl 0x30(%eax),%eax
081b404c +0x4e4:  movsbl %al,%eax
081b404f +0x4e7:  mov    %eax,-0x58(%ebp)
081b4052 +0x4ea:  mov    0x8(%ebp),%eax
081b4055 +0x4ed:  movzbl 0x31(%eax),%eax
081b4059 +0x4f1:  movsbl %al,%eax
081b405c +0x4f4:  mov    %eax,-0x54(%ebp)
081b405f +0x4f7:  movsbl -0x21(%ebp),%eax
081b4063 +0x4fb:  mov    %eax,-0x50(%ebp)
081b4066 +0x4fe:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081b406d +0x505:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081b4072 +0x50a:  mov    %eax,-0x4c(%ebp)
081b4075 +0x50d:  mov    0x8(%ebp),%eax
081b4078 +0x510:  mov    0x28(%eax),%edi
081b407b +0x513:  mov    0x8(%ebp),%eax
081b407e +0x516:  mov    (%eax),%esi
081b4080 +0x518:  mov    0xc(%ebp),%eax
081b4083 +0x51b:  mov    %eax,(%esp)
081b4086 +0x51e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081b408b +0x523:  mov    %eax,%edx
081b408d +0x525:  mov    -0x1c(%ebp),%eax
081b4090 +0x528:  mov    %eax,0x24(%esp)
081b4094 +0x52c:  mov    %ebx,0x20(%esp)
081b4098 +0x530:  mov    -0x28(%ebp),%eax
081b409b +0x533:  mov    %eax,0x1c(%esp)
081b409f +0x537:  mov    -0x58(%ebp),%eax
081b40a2 +0x53a:  mov    %eax,0x18(%esp)
081b40a6 +0x53e:  mov    -0x54(%ebp),%eax
081b40a9 +0x541:  mov    %eax,0x14(%esp)
081b40ad +0x545:  mov    -0x50(%ebp),%eax
081b40b0 +0x548:  mov    %eax,0x10(%esp)
081b40b4 +0x54c:  mov    -0x4c(%ebp),%eax
081b40b7 +0x54f:  mov    %eax,0xc(%esp)
081b40bb +0x553:  mov    %edi,0x8(%esp)
081b40bf +0x557:  mov    %esi,0x4(%esp)
081b40c3 +0x55b:  mov    %edx,(%esp)
081b40c6 +0x55e:  call   08446340 <_ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii>  ; DB_MercenaryLogInfo::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char, char, char, int, int, int)
081b40cb +0x563:  mov    0x8(%ebp),%eax
081b40ce +0x566:  movl   $0x0,0x28(%eax)
081b40d5 +0x56d:  mov    0x8(%ebp),%eax
081b40d8 +0x570:  movl   $0x0,0x2c(%eax)
081b40df +0x577:  mov    0x8(%ebp),%eax
081b40e2 +0x57a:  movb   $0xff,0x30(%eax)
081b40e6 +0x57e:  mov    0x8(%ebp),%eax
081b40e9 +0x581:  movb   $0xff,0x31(%eax)
081b40ed +0x585:  mov    0x8(%ebp),%eax
081b40f0 +0x588:  mov    %eax,(%esp)
081b40f3 +0x58b:  call   081b47c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3c
081b40f8 +0x590:  mov    $0x1,%ebx
081b40fd +0x595:  mov    %ebx,%eax
081b40ff +0x597:  add    $0x8c,%esp
081b4105 +0x59d:  pop    %ebx
081b4106 +0x59e:  pop    %esi
081b4107 +0x59f:  pop    %edi
081b4108 +0x5a0:  pop    %ebp
081b4109 +0x5a1:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::Reward @ 0x81b3b68

/* CHARAC_LOAD_MERCENARY::Reward(CUser*, competition_reward_result&) */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::Reward
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,competition_reward_result *param_2)

{
  CHARAC_LOAD_MERCENARY CVar1;
  CHARAC_LOAD_MERCENARY CVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  size_t sVar9;
  undefined4 uVar10;
  CDataManager *this_00;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  bool local_3e;
  allocator<char> local_3d [17];
  int local_2c;
  char local_26;
  char local_25;
  CItem *local_24;
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    uVar13 = 0;
  }
  else {
    iVar6 = GetCompetitionState(this);
    if (iVar6 == 0) {
      uVar13 = 0;
    }
    else {
      if (Reward(CUser*,competition_reward_result&)::emptyItem == '\0') {
        iVar6 = __cxa_guard_acquire(&Reward(CUser*,competition_reward_result&)::emptyItem);
        if (iVar6 != 0) {
          Inven_Item::Inven_Item((Inven_Item *)Reward(CUser*,competition_reward_result&)::emptyItem)
          ;
          __cxa_guard_release(&Reward(CUser*,competition_reward_result&)::emptyItem);
        }
      }
      if (Reward(CUser*,competition_reward_result&)::mailTitle == '\0') {
        iVar6 = __cxa_guard_acquire(&Reward(CUser*,competition_reward_result&)::mailTitle);
        if (iVar6 != 0) {
          std::allocator<char>::allocator();
                    /* try { // try from 081b3c33 to 081b3c4e has its CatchHandler @ 081b3c85 */
          pcVar7 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_225",(bool *)0x0);
          std::string::string((string *)&Reward(CUser*,competition_reward_result&)::mailTitle,pcVar7
                              ,(allocator *)local_3d);
          __cxa_guard_release(&Reward(CUser*,competition_reward_result&)::mailTitle);
          __cxa_atexit(std::string::~string,&Reward(CUser*,competition_reward_result&)::mailTitle,
                       &__dso_handle);
          std::allocator<char>::~allocator(local_3d);
        }
      }
      if (Reward(CUser*,competition_reward_result&)::serverMessage == '\0') {
        iVar6 = __cxa_guard_acquire(&Reward(CUser*,competition_reward_result&)::serverMessage);
        if (iVar6 != 0) {
                    /* try { // try from 081b3ce5 to 081b3ce9 has its CatchHandler @ 081b3d15 */
          std::string::string((string *)&Reward(CUser*,competition_reward_result&)::serverMessage);
          __cxa_guard_release(&Reward(CUser*,competition_reward_result&)::serverMessage);
          __cxa_atexit(std::string::~string,
                       &Reward(CUser*,competition_reward_result&)::serverMessage,&__dso_handle);
        }
      }
      local_2c = 0;
      local_26 = 0;
      local_3e = false;
                    /* try { // try from 081b3d58 to 081b3dae has its CatchHandler @ 081b3db4 */
      local_2c = GetRewardGold(this,param_1,param_2);
      local_26 = GetRewardItem(this,param_1,param_2,
                               (Inven_Item *)Reward(CUser*,competition_reward_result&)::emptyItem,
                               (string *)&Reward(CUser*,competition_reward_result&)::serverMessage);
      if (local_26 != '\x01') {
        std::string::operator=
                  ((string *)&Reward(CUser*,competition_reward_result&)::serverMessage,
                   (string *)&MercenaryHardCodingSettingValue::MERCENARY_BASE_POSTAL_MESSAGE);
      }
      if (local_2c < 1) {
        iVar6 = GetCompetitionPeriodTerm(this,&local_3e);
        cUserHistoryLog::MercenaryReturn
                  ((cUserHistoryLog *)(param_1 + 0x79700),*(uint *)this,*(int *)(this + 0x28),
                   *(int *)(this + 0x2c),iVar6,local_2c,0);
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
        this[0x30] = (CHARAC_LOAD_MERCENARY)0xff;
        this[0x31] = (CHARAC_LOAD_MERCENARY)0xff;
        alter(this);
        uVar13 = 1;
      }
      else {
        pcVar7 = (char *)std::string::c_str((string *)
                                            &Reward(CUser*,competition_reward_result&)::
                                             serverMessage);
        pcVar7 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                    (bool *)0x0);
        strncpy(Reward(CUser*,competition_reward_result&)::strMessage,pcVar7,0xff);
        uVar8 = CUser::GetServerGroup(param_1);
        sVar9 = strlen(Reward(CUser*,competition_reward_result&)::strMessage);
        iVar6 = local_2c;
        uVar13 = *(undefined4 *)this;
        uVar10 = std::string::c_str((string *)&Reward(CUser*,competition_reward_result&)::mailTitle)
        ;
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar10,Reward(CUser*,competition_reward_result&)::emptyItem,iVar6,uVar13,
                   Reward(CUser*,competition_reward_result&)::strMessage,sVar9,0x1e,uVar8,0,0);
        iVar6 = GetCompetitionPeriodTerm(this,&local_3e);
        cUserHistoryLog::MercenaryReturn
                  ((cUserHistoryLog *)(param_1 + 0x79700),*(uint *)this,*(int *)(this + 0x28),
                   *(int *)(this + 0x2c),iVar6,local_2c,0);
        uVar13 = Reward(CUser*,competition_reward_result&)::emptyItem._2_4_;
        if (local_3e == false) {
          local_25 = '\x01';
        }
        else {
          local_25 = '\x02';
        }
        this_00 = (CDataManager *)G_CDataManager();
        local_24 = (CItem *)CDataManager::find_item(this_00,uVar13);
        local_20 = -1;
        if (local_24 != (CItem *)0x0) {
          local_20 = CItem::get_rarity(local_24);
        }
        cVar5 = local_25;
        uVar13 = Reward(CUser*,competition_reward_result&)::emptyItem._2_4_;
        CVar1 = this[0x30];
        CVar2 = this[0x31];
        uVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        uVar3 = *(uint *)(this + 0x28);
        uVar4 = *(uint *)this;
        uVar12 = CUser::get_acc_id(param_1);
        DB_MercenaryLogInfo::makeRequest
                  (uVar12,uVar4,uVar3,uVar11,cVar5,(char)CVar2,(char)CVar1,local_2c,uVar13,local_20)
        ;
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
        this[0x30] = (CHARAC_LOAD_MERCENARY)0xff;
        this[0x31] = (CHARAC_LOAD_MERCENARY)0xff;
        alter(this);
        uVar13 = 1;
      }
    }
  }
  return uVar13;
}
```
