# execute

`_ZN11game_master16CMonsterDropTest7executeEv`

`game_master::CMonsterDropTest::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084acf98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084acf98  _ZN11game_master16CMonsterDropTest7executeEv
#           game_master::CMonsterDropTest::execute()
# range [0x084acf98, 0x084ad6d5]
084acf98 +0x000:  push   %ebp
084acf99 +0x001:  mov    %esp,%ebp
084acf9b +0x003:  push   %edi
084acf9c +0x004:  push   %esi
084acf9d +0x005:  push   %ebx
084acf9e +0x006:  sub    $&_ZL14gUnicodeBuffer+0xd3a0,%esp
084acfa4 +0x00c:  mov    0x8(%ebp),%eax
084acfa7 +0x00f:  mov    %eax,(%esp)
084acfaa +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084acfaf +0x017:  mov    %eax,-0x28(%ebp)
084acfb2 +0x01a:  cmpl   $0x0,-0x28(%ebp)
084acfb6 +0x01e:  je     084ad6c6 <+0x72e>
084acfbc +0x024:  mov    -0x28(%ebp),%eax
084acfbf +0x027:  mov    %eax,(%esp)
084acfc2 +0x02a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084acfc7 +0x02f:  mov    %eax,-0x24(%ebp)
084acfca +0x032:  cmpl   $0x0,-0x24(%ebp)
084acfce +0x036:  je     084ad6c9 <+0x731>
084acfd4 +0x03c:  mov    -0x24(%ebp),%eax
084acfd7 +0x03f:  mov    %eax,0x4(%esp)
084acfdb +0x043:  mov    0x8(%ebp),%eax
084acfde +0x046:  mov    %eax,(%esp)
084acfe1 +0x049:  call   084ad82a <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty>  ; game_master::CMonsterDropTest::checkCommandExecuteError(CParty*)
084acfe6 +0x04e:  mov    %eax,-0x20(%ebp)
084acfe9 +0x051:  cmpl   $0x0,-0x20(%ebp)
084acfed +0x055:  je     084ad006 <+0x6e>
084acfef +0x057:  mov    -0x20(%ebp),%eax
084acff2 +0x05a:  mov    %eax,0x4(%esp)
084acff6 +0x05e:  mov    -0x28(%ebp),%eax
084acff9 +0x061:  mov    %eax,(%esp)
084acffc +0x064:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084ad001 +0x069:  jmp    084ad6ca <+0x732>
084ad006 +0x06e:  movl   $"Dungeon Monster Drop 결과체크를 시작합니다",0x4(%esp)
084ad00e +0x076:  mov    -0x28(%ebp),%eax
084ad011 +0x079:  mov    %eax,(%esp)
084ad014 +0x07c:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084ad019 +0x081:  mov    0x8(%ebp),%eax
084ad01c +0x084:  mov    0xc(%eax),%eax
084ad01f +0x087:  test   %eax,%eax
084ad021 +0x089:  jne    084ad02d <+0x95>
084ad023 +0x08b:  mov    0x8(%ebp),%eax
084ad026 +0x08e:  movl   $0x2710,0xc(%eax)
084ad02d +0x095:  mov    0x8(%ebp),%eax
084ad030 +0x098:  mov    0xc(%eax),%eax
084ad033 +0x09b:  mov    %eax,0x8(%esp)
084ad037 +0x09f:  movl   $"%d번 통계입니다",0x4(%esp)
084ad03f +0x0a7:  lea    -0x4d(%ebp),%eax
084ad042 +0x0aa:  mov    %eax,(%esp)
084ad045 +0x0ad:  call   0807e440 <_init+0xd38>
084ad04a +0x0b2:  lea    -0x4d(%ebp),%eax
084ad04d +0x0b5:  mov    %eax,0x4(%esp)
084ad051 +0x0b9:  mov    -0x28(%ebp),%eax
084ad054 +0x0bc:  mov    %eax,(%esp)
084ad057 +0x0bf:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084ad05c +0x0c4:  lea    -0x197(%ebp),%edx
084ad062 +0x0ca:  mov    $0xff,%ebx
084ad067 +0x0cf:  mov    $0x0,%eax
084ad06c +0x0d4:  mov    %edx,%ecx
084ad06e +0x0d6:  and    $0x1,%ecx
084ad071 +0x0d9:  test   %ecx,%ecx
084ad073 +0x0db:  je     084ad07d <+0xe5>
084ad075 +0x0dd:  mov    %al,(%edx)
084ad077 +0x0df:  add    $0x1,%edx
084ad07a +0x0e2:  sub    $0x1,%ebx
084ad07d +0x0e5:  mov    %edx,%ecx
084ad07f +0x0e7:  and    $0x2,%ecx
084ad082 +0x0ea:  test   %ecx,%ecx
084ad084 +0x0ec:  je     084ad08f <+0xf7>
084ad086 +0x0ee:  mov    %ax,(%edx)
084ad089 +0x0f1:  add    $0x2,%edx
084ad08c +0x0f4:  sub    $0x2,%ebx
084ad08f +0x0f7:  mov    %ebx,%ecx
084ad091 +0x0f9:  shr    $0x2,%ecx
084ad094 +0x0fc:  mov    %edx,%edi
084ad096 +0x0fe:  rep stos %eax,%es:(%edi)
084ad098 +0x100:  mov    %edi,%edx
084ad09a +0x102:  mov    %ebx,%ecx
084ad09c +0x104:  and    $0x2,%ecx
084ad09f +0x107:  test   %ecx,%ecx
084ad0a1 +0x109:  je     084ad0a9 <+0x111>
084ad0a3 +0x10b:  mov    %ax,(%edx)
084ad0a6 +0x10e:  add    $0x2,%edx
084ad0a9 +0x111:  mov    %ebx,%ecx
084ad0ab +0x113:  and    $0x1,%ecx
084ad0ae +0x116:  test   %ecx,%ecx
084ad0b0 +0x118:  je     084ad0b7 <+0x11f>
084ad0b2 +0x11a:  mov    %al,(%edx)
084ad0b4 +0x11c:  add    $0x1,%edx
084ad0b7 +0x11f:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad0bd +0x125:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084ad0c2 +0x12a:  mov    %edx,0x8(%esp)
084ad0c6 +0x12e:  movl   $0x0,0x4(%esp)
084ad0ce +0x136:  mov    %eax,(%esp)
084ad0d1 +0x139:  call   0807dcc0 <_init+0x5b8>
084ad0d6 +0x13e:  lea    -0x68(%ebp),%eax
084ad0d9 +0x141:  mov    %eax,(%esp)
084ad0dc +0x144:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
084ad0e1 +0x149:  lea    -0x80(%ebp),%eax
084ad0e4 +0x14c:  mov    %eax,(%esp)
084ad0e7 +0x14f:  call   083858a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15342>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15342
084ad0ec +0x154:  lea    -0x80(%ebp),%eax
084ad0ef +0x157:  mov    %eax,0xc(%esp)
084ad0f3 +0x15b:  lea    -0x68(%ebp),%eax
084ad0f6 +0x15e:  mov    %eax,0x8(%esp)
084ad0fa +0x162:  mov    -0x24(%ebp),%eax
084ad0fd +0x165:  mov    %eax,0x4(%esp)
084ad101 +0x169:  mov    0x8(%ebp),%eax
084ad104 +0x16c:  mov    %eax,(%esp)
084ad107 +0x16f:  call   084ad8dc <_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE>  ; game_master::CMonsterDropTest::processDungeonDrop(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
084ad10c +0x174:  movb   $0x1,-0x19(%ebp)
084ad110 +0x178:  mov    0x8(%ebp),%eax
084ad113 +0x17b:  mov    0x8(%eax),%eax
084ad116 +0x17e:  cmp    $0x2,%eax
084ad119 +0x181:  je     084ad128 <+0x190>
084ad11b +0x183:  cmp    $0x3,%eax
084ad11e +0x186:  je     084ad14c <+0x1b4>
084ad120 +0x188:  test   %eax,%eax
084ad122 +0x18a:  jne    084ad29b <+0x303>
084ad128 +0x190:  movl   $0x44,0x8(%esp)
084ad130 +0x198:  movl   $"item_id\t item_name\t rarity\t drop_cnt\t price\t sell_price\t usable_lv\n",0x4(%esp)
084ad138 +0x1a0:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad13e +0x1a6:  mov    %eax,(%esp)
084ad141 +0x1a9:  call   0807d8a0 <_init+0x198>
084ad146 +0x1ae:  nop
084ad147 +0x1af:  jmp    084ad29b <+0x303>
084ad14c +0x1b4:  movl   $0x23,0x8(%esp)
084ad154 +0x1bc:  movl   $"item_name\tgold_quantity\t drop_cnt\n",0x4(%esp)
084ad15c +0x1c4:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad162 +0x1ca:  mov    %eax,(%esp)
084ad165 +0x1cd:  call   0807d8a0 <_init+0x198>
084ad16a +0x1d2:  jmp    084ad29b <+0x303>
084ad16f +0x1d7:  mov    0x8(%ebp),%eax
084ad172 +0x1da:  mov    0x8(%eax),%eax
084ad175 +0x1dd:  cmp    $0x2,%eax
084ad178 +0x1e0:  je     084ad1c9 <+0x231>
084ad17a +0x1e2:  cmp    $0x3,%eax
084ad17d +0x1e5:  je     084ad207 <+0x26f>
084ad183 +0x1eb:  test   %eax,%eax
084ad185 +0x1ed:  jne    084ad243 <+0x2ab>
084ad18b +0x1f3:  mov    0x8(%ebp),%eax
084ad18e +0x1f6:  mov    0xc(%eax),%eax
084ad191 +0x1f9:  mov    %eax,0x8(%esp)
084ad195 +0x1fd:  movl   $"single_dungeon_drop_%d.txt",0x4(%esp)
084ad19d +0x205:  lea    -0x197(%ebp),%eax
084ad1a3 +0x20b:  mov    %eax,(%esp)
084ad1a6 +0x20e:  call   0807e440 <_init+0xd38>
084ad1ab +0x213:  lea    -0x68(%ebp),%eax
084ad1ae +0x216:  mov    %eax,0x8(%esp)
084ad1b2 +0x21a:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad1b8 +0x220:  mov    %eax,0x4(%esp)
084ad1bc +0x224:  mov    -0x28(%ebp),%eax
084ad1bf +0x227:  mov    %eax,(%esp)
084ad1c2 +0x22a:  call   084af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084ad1c7 +0x22f:  jmp    084ad243 <+0x2ab>
084ad1c9 +0x231:  mov    0x8(%ebp),%eax
084ad1cc +0x234:  mov    0xc(%eax),%eax
084ad1cf +0x237:  mov    %eax,0x8(%esp)
084ad1d3 +0x23b:  movl   $"passed_dungeon_drop_%d.txt",0x4(%esp)
084ad1db +0x243:  lea    -0x197(%ebp),%eax
084ad1e1 +0x249:  mov    %eax,(%esp)
084ad1e4 +0x24c:  call   0807e440 <_init+0xd38>
084ad1e9 +0x251:  lea    -0x68(%ebp),%eax
084ad1ec +0x254:  mov    %eax,0x8(%esp)
084ad1f0 +0x258:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad1f6 +0x25e:  mov    %eax,0x4(%esp)
084ad1fa +0x262:  mov    -0x28(%ebp),%eax
084ad1fd +0x265:  mov    %eax,(%esp)
084ad200 +0x268:  call   084af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084ad205 +0x26d:  jmp    084ad243 <+0x2ab>
084ad207 +0x26f:  mov    0x8(%ebp),%eax
084ad20a +0x272:  mov    0xc(%eax),%eax
084ad20d +0x275:  mov    %eax,0x8(%esp)
084ad211 +0x279:  movl   $"gold_dungeon_drop_%d.txt",0x4(%esp)
084ad219 +0x281:  lea    -0x197(%ebp),%eax
084ad21f +0x287:  mov    %eax,(%esp)
084ad222 +0x28a:  call   0807e440 <_init+0xd38>
084ad227 +0x28f:  lea    -0x68(%ebp),%eax
084ad22a +0x292:  mov    %eax,0x8(%esp)
084ad22e +0x296:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad234 +0x29c:  mov    %eax,0x4(%esp)
084ad238 +0x2a0:  mov    -0x28(%ebp),%eax
084ad23b +0x2a3:  mov    %eax,(%esp)
084ad23e +0x2a6:  call   084ad6d6 <_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CMonsterDropTest::makeFileGoldContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084ad243 +0x2ab:  lea    -0x68(%ebp),%eax
084ad246 +0x2ae:  mov    %eax,(%esp)
084ad249 +0x2b1:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
084ad24e +0x2b6:  test   %al,%al
084ad250 +0x2b8:  je     084ad256 <+0x2be>
084ad252 +0x2ba:  movb   $0x0,-0x19(%ebp)
084ad256 +0x2be:  movzbl -0x19(%ebp),%eax
084ad25a +0x2c2:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%edx
084ad260 +0x2c8:  mov    %edx,0xc(%esp)
084ad264 +0x2cc:  lea    -0x197(%ebp),%edx
084ad26a +0x2d2:  mov    %edx,0x8(%esp)
084ad26e +0x2d6:  mov    %eax,0x4(%esp)
084ad272 +0x2da:  mov    -0x28(%ebp),%eax
084ad275 +0x2dd:  mov    %eax,(%esp)
084ad278 +0x2e0:  call   084aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>  ; game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
084ad27d +0x2e5:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x8(%esp)
084ad285 +0x2ed:  movl   $0x0,0x4(%esp)
084ad28d +0x2f5:  lea    -&_ZL14gUnicodeBuffer+0xd383(%ebp),%eax
084ad293 +0x2fb:  mov    %eax,(%esp)
084ad296 +0x2fe:  call   0807dcc0 <_init+0x5b8>
084ad29b +0x303:  cmpb   $0x0,-0x19(%ebp)
084ad29f +0x307:  jne    084ad16f <+0x1d7>
084ad2a5 +0x30d:  lea    -0x80(%ebp),%eax
084ad2a8 +0x310:  mov    %eax,(%esp)
084ad2ab +0x313:  call   084b47a2 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x855>  ; global constructors keyed to game_master::CMacro::Reset()+0x855
084ad2b0 +0x318:  test   %eax,%eax
084ad2b2 +0x31a:  setne  %al
084ad2b5 +0x31d:  test   %al,%al
084ad2b7 +0x31f:  je     084ad667 <+0x6cf>
084ad2bd +0x325:  lea    -0x84(%ebp),%eax
084ad2c3 +0x32b:  mov    %eax,(%esp)
084ad2c6 +0x32e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084ad2cb +0x333:  lea    -0x84(%ebp),%eax
084ad2d1 +0x339:  mov    %eax,(%esp)
084ad2d4 +0x33c:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
084ad2d9 +0x341:  lea    -0x88(%ebp),%eax
084ad2df +0x347:  lea    -0x80(%ebp),%edx
084ad2e2 +0x34a:  mov    %edx,0x4(%esp)
084ad2e6 +0x34e:  mov    %eax,(%esp)
084ad2e9 +0x351:  call   083931fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c9e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c9e
084ad2ee +0x356:  sub    $0x4,%esp
084ad2f1 +0x359:  jmp    084ad5e0 <+0x648>
084ad2f6 +0x35e:  movl   $0x0,-0x8c(%ebp)
084ad300 +0x368:  jmp    084ad446 <+0x4ae>
084ad305 +0x36d:  lea    -0x597(%ebp),%edx
084ad30b +0x373:  mov    $0x400,%ebx
084ad310 +0x378:  mov    $0x0,%eax
084ad315 +0x37d:  mov    %edx,%ecx
084ad317 +0x37f:  and    $0x1,%ecx
084ad31a +0x382:  test   %ecx,%ecx
084ad31c +0x384:  je     084ad326 <+0x38e>
084ad31e +0x386:  mov    %al,(%edx)
084ad320 +0x388:  add    $0x1,%edx
084ad323 +0x38b:  sub    $0x1,%ebx
084ad326 +0x38e:  mov    %edx,%ecx
084ad328 +0x390:  and    $0x2,%ecx
084ad32b +0x393:  test   %ecx,%ecx
084ad32d +0x395:  je     084ad338 <+0x3a0>
084ad32f +0x397:  mov    %ax,(%edx)
084ad332 +0x39a:  add    $0x2,%edx
084ad335 +0x39d:  sub    $0x2,%ebx
084ad338 +0x3a0:  mov    %ebx,%ecx
084ad33a +0x3a2:  shr    $0x2,%ecx
084ad33d +0x3a5:  mov    %edx,%edi
084ad33f +0x3a7:  rep stos %eax,%es:(%edi)
084ad341 +0x3a9:  mov    %edi,%edx
084ad343 +0x3ab:  mov    %ebx,%ecx
084ad345 +0x3ad:  and    $0x2,%ecx
084ad348 +0x3b0:  test   %ecx,%ecx
084ad34a +0x3b2:  je     084ad352 <+0x3ba>
084ad34c +0x3b4:  mov    %ax,(%edx)
084ad34f +0x3b7:  add    $0x2,%edx
084ad352 +0x3ba:  mov    %ebx,%ecx
084ad354 +0x3bc:  and    $0x1,%ecx
084ad357 +0x3bf:  test   %ecx,%ecx
084ad359 +0x3c1:  je     084ad360 <+0x3c8>
084ad35b +0x3c3:  mov    %al,(%edx)
084ad35d +0x3c5:  add    $0x1,%edx
084ad360 +0x3c8:  lea    -0x88(%ebp),%eax
084ad366 +0x3ce:  mov    %eax,(%esp)
084ad369 +0x3d1:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ad36e +0x3d6:  lea    0x4(%eax),%ecx
084ad371 +0x3d9:  lea    -0x90(%ebp),%eax
084ad377 +0x3df:  lea    -0x8c(%ebp),%edx
084ad37d +0x3e5:  mov    %edx,0x8(%esp)
084ad381 +0x3e9:  mov    %ecx,0x4(%esp)
084ad385 +0x3ed:  mov    %eax,(%esp)
084ad388 +0x3f0:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084ad38d +0x3f5:  sub    $0x4,%esp
084ad390 +0x3f8:  lea    -0x88(%ebp),%eax
084ad396 +0x3fe:  mov    %eax,(%esp)
084ad399 +0x401:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ad39e +0x406:  lea    0x4(%eax),%edx
084ad3a1 +0x409:  lea    -0x34(%ebp),%eax
084ad3a4 +0x40c:  mov    %edx,0x4(%esp)
084ad3a8 +0x410:  mov    %eax,(%esp)
084ad3ab +0x413:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ad3b0 +0x418:  sub    $0x4,%esp
084ad3b3 +0x41b:  lea    -0x34(%ebp),%eax
084ad3b6 +0x41e:  mov    %eax,0x4(%esp)
084ad3ba +0x422:  lea    -0x90(%ebp),%eax
084ad3c0 +0x428:  mov    %eax,(%esp)
084ad3c3 +0x42b:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ad3c8 +0x430:  test   %al,%al
084ad3ca +0x432:  je     084ad437 <+0x49f>
084ad3cc +0x434:  lea    -0x90(%ebp),%eax
084ad3d2 +0x43a:  mov    %eax,(%esp)
084ad3d5 +0x43d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ad3da +0x442:  mov    0x4(%eax),%esi
084ad3dd +0x445:  lea    -0x90(%ebp),%eax
084ad3e3 +0x44b:  mov    %eax,(%esp)
084ad3e6 +0x44e:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ad3eb +0x453:  mov    (%eax),%ebx
084ad3ed +0x455:  lea    -0x88(%ebp),%eax
084ad3f3 +0x45b:  mov    %eax,(%esp)
084ad3f6 +0x45e:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ad3fb +0x463:  mov    (%eax),%eax
084ad3fd +0x465:  mov    %esi,0x10(%esp)
084ad401 +0x469:  mov    %ebx,0xc(%esp)
084ad405 +0x46d:  mov    %eax,0x8(%esp)
084ad409 +0x471:  movl   $"%5d\t\t%2d\t\t%8d\n",0x4(%esp)
084ad411 +0x479:  lea    -0x597(%ebp),%eax
084ad417 +0x47f:  mov    %eax,(%esp)
084ad41a +0x482:  call   0807e440 <_init+0xd38>
084ad41f +0x487:  lea    -0x597(%ebp),%eax
084ad425 +0x48d:  mov    %eax,0x4(%esp)
084ad429 +0x491:  lea    -0x84(%ebp),%eax
084ad42f +0x497:  mov    %eax,(%esp)
084ad432 +0x49a:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084ad437 +0x49f:  mov    -0x8c(%ebp),%eax
084ad43d +0x4a5:  add    $0x1,%eax
084ad440 +0x4a8:  mov    %eax,-0x8c(%ebp)
084ad446 +0x4ae:  mov    -0x8c(%ebp),%eax
084ad44c +0x4b4:  cmp    $0xa,%eax
084ad44f +0x4b7:  setle  %al
084ad452 +0x4ba:  test   %al,%al
084ad454 +0x4bc:  jne    084ad305 <+0x36d>
084ad45a +0x4c2:  movl   $0x3e9,-0x94(%ebp)
084ad464 +0x4cc:  jmp    084ad5aa <+0x612>
084ad469 +0x4d1:  lea    -0x597(%ebp),%edx
084ad46f +0x4d7:  mov    $0x400,%ebx
084ad474 +0x4dc:  mov    $0x0,%eax
084ad479 +0x4e1:  mov    %edx,%ecx
084ad47b +0x4e3:  and    $0x1,%ecx
084ad47e +0x4e6:  test   %ecx,%ecx
084ad480 +0x4e8:  je     084ad48a <+0x4f2>
084ad482 +0x4ea:  mov    %al,(%edx)
084ad484 +0x4ec:  add    $0x1,%edx
084ad487 +0x4ef:  sub    $0x1,%ebx
084ad48a +0x4f2:  mov    %edx,%ecx
084ad48c +0x4f4:  and    $0x2,%ecx
084ad48f +0x4f7:  test   %ecx,%ecx
084ad491 +0x4f9:  je     084ad49c <+0x504>
084ad493 +0x4fb:  mov    %ax,(%edx)
084ad496 +0x4fe:  add    $0x2,%edx
084ad499 +0x501:  sub    $0x2,%ebx
084ad49c +0x504:  mov    %ebx,%ecx
084ad49e +0x506:  shr    $0x2,%ecx
084ad4a1 +0x509:  mov    %edx,%edi
084ad4a3 +0x50b:  rep stos %eax,%es:(%edi)
084ad4a5 +0x50d:  mov    %edi,%edx
084ad4a7 +0x50f:  mov    %ebx,%ecx
084ad4a9 +0x511:  and    $0x2,%ecx
084ad4ac +0x514:  test   %ecx,%ecx
084ad4ae +0x516:  je     084ad4b6 <+0x51e>
084ad4b0 +0x518:  mov    %ax,(%edx)
084ad4b3 +0x51b:  add    $0x2,%edx
084ad4b6 +0x51e:  mov    %ebx,%ecx
084ad4b8 +0x520:  and    $0x1,%ecx
084ad4bb +0x523:  test   %ecx,%ecx
084ad4bd +0x525:  je     084ad4c4 <+0x52c>
084ad4bf +0x527:  mov    %al,(%edx)
084ad4c1 +0x529:  add    $0x1,%edx
084ad4c4 +0x52c:  lea    -0x88(%ebp),%eax
084ad4ca +0x532:  mov    %eax,(%esp)
084ad4cd +0x535:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ad4d2 +0x53a:  lea    0x4(%eax),%ecx
084ad4d5 +0x53d:  lea    -0x98(%ebp),%eax
084ad4db +0x543:  lea    -0x94(%ebp),%edx
084ad4e1 +0x549:  mov    %edx,0x8(%esp)
084ad4e5 +0x54d:  mov    %ecx,0x4(%esp)
084ad4e9 +0x551:  mov    %eax,(%esp)
084ad4ec +0x554:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084ad4f1 +0x559:  sub    $0x4,%esp
084ad4f4 +0x55c:  lea    -0x88(%ebp),%eax
084ad4fa +0x562:  mov    %eax,(%esp)
084ad4fd +0x565:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ad502 +0x56a:  lea    0x4(%eax),%edx
084ad505 +0x56d:  lea    -0x30(%ebp),%eax
084ad508 +0x570:  mov    %edx,0x4(%esp)
084ad50c +0x574:  mov    %eax,(%esp)
084ad50f +0x577:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ad514 +0x57c:  sub    $0x4,%esp
084ad517 +0x57f:  lea    -0x30(%ebp),%eax
084ad51a +0x582:  mov    %eax,0x4(%esp)
084ad51e +0x586:  lea    -0x98(%ebp),%eax
084ad524 +0x58c:  mov    %eax,(%esp)
084ad527 +0x58f:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ad52c +0x594:  test   %al,%al
084ad52e +0x596:  je     084ad59b <+0x603>
084ad530 +0x598:  lea    -0x98(%ebp),%eax
084ad536 +0x59e:  mov    %eax,(%esp)
084ad539 +0x5a1:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ad53e +0x5a6:  mov    0x4(%eax),%esi
084ad541 +0x5a9:  lea    -0x98(%ebp),%eax
084ad547 +0x5af:  mov    %eax,(%esp)
084ad54a +0x5b2:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ad54f +0x5b7:  mov    (%eax),%ebx
084ad551 +0x5b9:  lea    -0x88(%ebp),%eax
084ad557 +0x5bf:  mov    %eax,(%esp)
084ad55a +0x5c2:  call   0839327c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d1c
084ad55f +0x5c7:  mov    (%eax),%eax
084ad561 +0x5c9:  mov    %esi,0x10(%esp)
084ad565 +0x5cd:  mov    %ebx,0xc(%esp)
084ad569 +0x5d1:  mov    %eax,0x8(%esp)
084ad56d +0x5d5:  movl   $"%5d\t\t%2d\t\t%8d\n",0x4(%esp)
084ad575 +0x5dd:  lea    -0x597(%ebp),%eax
084ad57b +0x5e3:  mov    %eax,(%esp)
084ad57e +0x5e6:  call   0807e440 <_init+0xd38>
084ad583 +0x5eb:  lea    -0x597(%ebp),%eax
084ad589 +0x5f1:  mov    %eax,0x4(%esp)
084ad58d +0x5f5:  lea    -0x84(%ebp),%eax
084ad593 +0x5fb:  mov    %eax,(%esp)
084ad596 +0x5fe:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084ad59b +0x603:  mov    -0x94(%ebp),%eax
084ad5a1 +0x609:  add    $0x1,%eax
084ad5a4 +0x60c:  mov    %eax,-0x94(%ebp)
084ad5aa +0x612:  mov    -0x94(%ebp),%eax
084ad5b0 +0x618:  cmp    $0x3ed,%eax
084ad5b5 +0x61d:  setle  %al
084ad5b8 +0x620:  test   %al,%al
084ad5ba +0x622:  jne    084ad469 <+0x4d1>
084ad5c0 +0x628:  lea    -0x2c(%ebp),%eax
084ad5c3 +0x62b:  movl   $0x0,0x8(%esp)
084ad5cb +0x633:  lea    -0x88(%ebp),%edx
084ad5d1 +0x639:  mov    %edx,0x4(%esp)
084ad5d5 +0x63d:  mov    %eax,(%esp)
084ad5d8 +0x640:  call   084b47b6 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x869>  ; global constructors keyed to game_master::CMacro::Reset()+0x869
084ad5dd +0x645:  sub    $0x4,%esp
084ad5e0 +0x648:  lea    -0x38(%ebp),%eax
084ad5e3 +0x64b:  lea    -0x80(%ebp),%edx
084ad5e6 +0x64e:  mov    %edx,0x4(%esp)
084ad5ea +0x652:  mov    %eax,(%esp)
084ad5ed +0x655:  call   08393224 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cc4
084ad5f2 +0x65a:  sub    $0x4,%esp
084ad5f5 +0x65d:  lea    -0x38(%ebp),%eax
084ad5f8 +0x660:  mov    %eax,0x4(%esp)
084ad5fc +0x664:  lea    -0x88(%ebp),%eax
084ad602 +0x66a:  mov    %eax,(%esp)
084ad605 +0x66d:  call   0839324a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22cea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22cea
084ad60a +0x672:  test   %al,%al
084ad60c +0x674:  jne    084ad2f6 <+0x35e>
084ad612 +0x67a:  lea    -0x84(%ebp),%eax
084ad618 +0x680:  mov    %eax,(%esp)
084ad61b +0x683:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ad620 +0x688:  mov    %eax,0xc(%esp)
084ad624 +0x68c:  movl   $"drop_grade_list.txt",0x8(%esp)
084ad62c +0x694:  movl   $0x1,0x4(%esp)
084ad634 +0x69c:  mov    -0x28(%ebp),%eax
084ad637 +0x69f:  mov    %eax,(%esp)
084ad63a +0x6a2:  call   084aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>  ; game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
084ad63f +0x6a7:  jmp    084ad659 <+0x6c1>
084ad641 +0x6a9:  mov    %edx,%ebx
084ad643 +0x6ab:  mov    %eax,%esi
084ad645 +0x6ad:  lea    -0x84(%ebp),%eax
084ad64b +0x6b3:  mov    %eax,(%esp)
084ad64e +0x6b6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ad653 +0x6bb:  mov    %esi,%eax
084ad655 +0x6bd:  mov    %ebx,%edx
084ad657 +0x6bf:  jmp    084ad67c <+0x6e4>
084ad659 +0x6c1:  lea    -0x84(%ebp),%eax
084ad65f +0x6c7:  mov    %eax,(%esp)
084ad662 +0x6ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ad667 +0x6cf:  movl   $"Dungeon Monster Drop 결과체크가 완료되었습니다",0x4(%esp)
084ad66f +0x6d7:  mov    -0x28(%ebp),%eax
084ad672 +0x6da:  mov    %eax,(%esp)
084ad675 +0x6dd:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084ad67a +0x6e2:  jmp    084ad691 <+0x6f9>
084ad67c +0x6e4:  mov    %edx,%ebx
084ad67e +0x6e6:  mov    %eax,%esi
084ad680 +0x6e8:  lea    -0x80(%ebp),%eax
084ad683 +0x6eb:  mov    %eax,(%esp)
084ad686 +0x6ee:  call   08371ec6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xbe92>  ; global constructors keyed to CServerEvent::m_nExpRate+0xbe92
084ad68b +0x6f3:  mov    %esi,%eax
084ad68d +0x6f5:  mov    %ebx,%edx
084ad68f +0x6f7:  jmp    084ad69e <+0x706>
084ad691 +0x6f9:  lea    -0x80(%ebp),%eax
084ad694 +0x6fc:  mov    %eax,(%esp)
084ad697 +0x6ff:  call   08371ec6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xbe92>  ; global constructors keyed to CServerEvent::m_nExpRate+0xbe92
084ad69c +0x704:  jmp    084ad6b9 <+0x721>
084ad69e +0x706:  mov    %edx,%ebx
084ad6a0 +0x708:  mov    %eax,%esi
084ad6a2 +0x70a:  lea    -0x68(%ebp),%eax
084ad6a5 +0x70d:  mov    %eax,(%esp)
084ad6a8 +0x710:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084ad6ad +0x715:  mov    %esi,%eax
084ad6af +0x717:  mov    %ebx,%edx
084ad6b1 +0x719:  mov    %eax,(%esp)
084ad6b4 +0x71c:  call   08ae3750 <_Unwind_Resume>
084ad6b9 +0x721:  lea    -0x68(%ebp),%eax
084ad6bc +0x724:  mov    %eax,(%esp)
084ad6bf +0x727:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084ad6c4 +0x72c:  jmp    084ad6ca <+0x732>
084ad6c6 +0x72e:  nop
084ad6c7 +0x72f:  jmp    084ad6ca <+0x732>
084ad6c9 +0x731:  nop
084ad6ca +0x732:  lea    -0xc(%ebp),%esp
084ad6cd +0x735:  add    $0x0,%esp
084ad6d0 +0x738:  pop    %ebx
084ad6d1 +0x739:  pop    %esi
084ad6d2 +0x73a:  pop    %edi
084ad6d3 +0x73b:  pop    %ebp
084ad6d4 +0x73c:  ret
084ad6d5 +0x73d:  nop
```

## 反编译 C

```c
// game_master::CMonsterDropTest::execute @ 0x84acf98

/* game_master::CMonsterDropTest::execute() */

void __thiscall game_master::CMonsterDropTest::execute(CMonsterDropTest *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  *pmVar11;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  amStack_178b3 [95000];
  char local_59b;
  char local_59a [1023];
  char local_19b;
  char local_19a [254];
  _Rb_tree_iterator<std::pair<int_const,int>> local_9c [4];
  int local_98;
  _Rb_tree_iterator<std::pair<int_const,int>> local_94 [4];
  int local_90;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_8c [4];
  string local_88 [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_84 [24];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_6c [27];
  char local_51 [21];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_3c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [4];
  _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_30 [4];
  CUser *local_2c;
  CParty *local_28;
  char *local_24;
  bool local_1d;
  
  bVar10 = 0;
  local_2c = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_2c == (CUser *)0x0) {
    return;
  }
  local_28 = (CParty *)CUser::GetParty(local_2c);
  if (local_28 == (CParty *)0x0) {
    return;
  }
  local_24 = (char *)checkCommandExecuteError(this,local_28);
  if (local_24 != (char *)0x0) {
    CBoosterTest::SendChatMsg(local_2c,local_24);
    return;
  }
  CBoosterTest::SendChatMsg(local_2c,&DAT_08c7fdb0);
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0xc) = 10000;
  }
  sprintf(local_51,&DAT_08c7fddb,*(undefined4 *)(this + 0xc));
  CBoosterTest::SendChatMsg(local_2c,local_51);
  pcVar7 = &local_19b;
  uVar8 = 0xff;
  bVar9 = ((uint)pcVar7 & 1) != 0;
  if (bVar9) {
    local_19b = '\0';
    pcVar7 = local_19a;
    uVar8 = 0xfe;
  }
  if (((uint)pcVar7 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
    uVar8 = uVar8 - 2;
  }
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
  }
  if ((uVar8 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
  }
  if (!bVar9) {
    *pcVar7 = '\0';
  }
  memset(amStack_178b3,0,95000);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_6c);
                    /* try { // try from 084ad0e7 to 084ad0eb has its CatchHandler @ 084ad69e */
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::map(local_84);
  pmVar11 = local_84;
                    /* try { // try from 084ad107 to 084ad2ca has its CatchHandler @ 084ad67c */
  processDungeonDrop((CParty *)this,(map *)local_28,(map *)local_6c);
  local_1d = true;
  iVar4 = *(int *)(this + 8);
  if (iVar4 != 2) {
    if (iVar4 == 3) {
      memcpy(amStack_178b3,"item_name\tgold_quantity\t drop_cnt\n",0x23);
      goto LAB_084ad29b;
    }
    if (iVar4 != 0) goto LAB_084ad29b;
  }
  memcpy(amStack_178b3,"item_id\t item_name\t rarity\t drop_cnt\t price\t sell_price\t usable_lv\n",
         0x44);
LAB_084ad29b:
  while (local_1d != false) {
    iVar4 = *(int *)(this + 8);
    if (iVar4 == 2) {
      sprintf(&local_19b,"passed_dungeon_drop_%d.txt",*(undefined4 *)(this + 0xc),pmVar11);
      CBoosterTest::makeFileContents(local_2c,(char *)amStack_178b3,(map *)local_6c);
    }
    else if (iVar4 == 3) {
      sprintf(&local_19b,"gold_dungeon_drop_%d.txt",*(undefined4 *)(this + 0xc),pmVar11);
      makeFileGoldContents(local_2c,(char *)amStack_178b3,(map *)local_6c);
    }
    else if (iVar4 == 0) {
      sprintf(&local_19b,"single_dungeon_drop_%d.txt",*(undefined4 *)(this + 0xc),pmVar11);
      CBoosterTest::makeFileContents(local_2c,(char *)amStack_178b3,(map *)local_6c);
    }
    cVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                      (local_6c);
    if (cVar3 != '\0') {
      local_1d = false;
    }
    pmVar11 = amStack_178b3;
    CBoosterTest::printClient(local_2c,local_1d,&local_19b,(char *)pmVar11);
    memset(amStack_178b3,0,95000);
  }
  iVar4 = std::
          map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
          ::size(local_84);
  if (iVar4 != 0) {
    std::string::string(local_88);
                    /* try { // try from 084ad2d4 to 084ad63e has its CatchHandler @ 084ad641 */
    std::string::clear(local_88);
    std::
    map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
    ::begin(local_8c);
    while( true ) {
      std::
      map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
      ::end(local_3c);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                            *)local_8c,(_Rb_tree_iterator *)local_3c);
      if (cVar3 == '\0') break;
      for (local_90 = 0; local_90 < 0xb; local_90 = local_90 + 1) {
        pcVar7 = &local_59b;
        uVar8 = 0x400;
        bVar9 = ((uint)pcVar7 & 1) != 0;
        if (bVar9) {
          local_59b = '\0';
          pcVar7 = local_59a;
          uVar8 = 0x3ff;
        }
        if (((uint)pcVar7 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
          uVar8 = uVar8 - 2;
        }
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
        }
        if ((uVar8 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
        }
        if (bVar9) {
          *pcVar7 = '\0';
        }
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_94);
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_94,(_Rb_tree_iterator *)local_38);
        if (cVar3 != '\0') {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
          uVar1 = *(undefined4 *)(iVar4 + 4);
          puVar5 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
          uVar2 = *puVar5;
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                   ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                                 *)local_8c);
          sprintf(&local_59b,"%5d\t\t%2d\t\t%8d\n",*puVar5,uVar2,uVar1);
          std::string::operator+=(local_88,&local_59b);
        }
      }
      for (local_98 = 0x3e9; local_98 < 0x3ee; local_98 = local_98 + 1) {
        pcVar7 = &local_59b;
        uVar8 = 0x400;
        bVar9 = ((uint)pcVar7 & 1) != 0;
        if (bVar9) {
          local_59b = '\0';
          pcVar7 = local_59a;
          uVar8 = 0x3ff;
        }
        if (((uint)pcVar7 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
          uVar8 = uVar8 - 2;
        }
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
        }
        if ((uVar8 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
        }
        if (bVar9) {
          *pcVar7 = '\0';
        }
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_9c);
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_34);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_9c,(_Rb_tree_iterator *)local_34);
        if (cVar3 != '\0') {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_9c);
          uVar1 = *(undefined4 *)(iVar4 + 4);
          puVar5 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_9c);
          uVar2 = *puVar5;
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                   ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                                 *)local_8c);
          sprintf(&local_59b,"%5d\t\t%2d\t\t%8d\n",*puVar5,uVar2,uVar1);
          std::string::operator+=(local_88,&local_59b);
        }
      }
      std::
      _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
      ::operator++(local_30,(int)local_8c);
    }
    pcVar7 = (char *)std::string::c_str(local_88);
    CBoosterTest::printClient(local_2c,true,"drop_grade_list.txt",pcVar7);
                    /* try { // try from 084ad662 to 084ad679 has its CatchHandler @ 084ad67c */
    std::string::~string(local_88);
  }
  CBoosterTest::SendChatMsg(local_2c,&DAT_08c7fec8);
                    /* try { // try from 084ad697 to 084ad69b has its CatchHandler @ 084ad69e */
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::~map(local_84);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_6c);
  return;
}
```
