# LoadCreatureScriptFile

`_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv`

`user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScriptMgr` | `0x0833cba6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833cba6  _ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv
#           user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()
# range [0x0833cba6, 0x0833d3bb]
0833cba6 +0x000:  push   %ebp
0833cba7 +0x001:  mov    %esp,%ebp
0833cba9 +0x003:  push   %edi
0833cbaa +0x004:  push   %esi
0833cbab +0x005:  push   %ebx
0833cbac +0x006:  sub    $0x6cc,%esp
0833cbb2 +0x00c:  movl   $0x0,-0x60(%ebp)
0833cbb9 +0x013:  lea    -0x6b8(%ebp),%eax
0833cbbf +0x019:  mov    %eax,(%esp)
0833cbc2 +0x01c:  call   0833e5ac <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x679>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x679
0833cbc7 +0x021:  movl   $0x0,-0x20(%ebp)
0833cbce +0x028:  lea    -0x170(%ebp),%ebx
0833cbd4 +0x02e:  mov    $0x0,%eax
0833cbd9 +0x033:  mov    $0x40,%edx
0833cbde +0x038:  mov    %ebx,%edi
0833cbe0 +0x03a:  mov    %edx,%ecx
0833cbe2 +0x03c:  rep stos %eax,%es:(%edi)
0833cbe4 +0x03e:  lea    -0x270(%ebp),%ebx
0833cbea +0x044:  mov    $0x0,%eax
0833cbef +0x049:  mov    $0x40,%edx
0833cbf4 +0x04e:  mov    %ebx,%edi
0833cbf6 +0x050:  mov    %edx,%ecx
0833cbf8 +0x052:  rep stos %eax,%es:(%edi)
0833cbfa +0x054:  lea    -0x370(%ebp),%ebx
0833cc00 +0x05a:  mov    $0x0,%eax
0833cc05 +0x05f:  mov    $0x40,%edx
0833cc0a +0x064:  mov    %ebx,%edi
0833cc0c +0x066:  mov    %edx,%ecx
0833cc0e +0x068:  rep stos %eax,%es:(%edi)
0833cc10 +0x06a:  lea    -0x4a4(%ebp),%eax
0833cc16 +0x070:  mov    %eax,(%esp)
0833cc19 +0x073:  call   0889037c <_ZN10AttackInfoC1Ev>  ; AttackInfo::AttackInfo()
0833cc1e +0x078:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0833cc23 +0x07d:  mov    %eax,(%esp)
0833cc26 +0x080:  call   08624390 <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv>  ; sync_script::CSyncScript::truncate_creature_info_table()
0833cc2b +0x085:  xor    $0x1,%eax
0833cc2e +0x088:  test   %al,%al
0833cc30 +0x08a:  je     0833cc48 <+0xa2>
0833cc32 +0x08c:  movl   $"failed to truncate creature info table",(%esp)
0833cc39 +0x093:  call   0807e570 <_init+0xe68>
0833cc3e +0x098:  mov    $0x0,%ebx
0833cc43 +0x09d:  jmp    0833d372 <+0x7cc>
0833cc48 +0x0a2:  lea    -0x64(%ebp),%eax
0833cc4b +0x0a5:  movl   $&g_creatureScriptFileList,0x4(%esp)
0833cc53 +0x0ad:  mov    %eax,(%esp)
0833cc56 +0x0b0:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0833cc5b +0x0b5:  sub    $0x4,%esp
0833cc5e +0x0b8:  jmp    0833d320 <+0x77a>
0833cc63 +0x0bd:  lea    -0x64(%ebp),%eax
0833cc66 +0x0c0:  mov    %eax,(%esp)
0833cc69 +0x0c3:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0833cc6e +0x0c8:  add    $0x4,%eax
0833cc71 +0x0cb:  mov    %eax,(%esp)
0833cc74 +0x0ce:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cc79 +0x0d3:  mov    %eax,-0x20(%ebp)
0833cc7c +0x0d6:  cmpl   $0x0,-0x20(%ebp)
0833cc80 +0x0da:  je     0833d352 <+0x7ac>
0833cc86 +0x0e0:  mov    -0x20(%ebp),%eax
0833cc89 +0x0e3:  mov    %eax,0x4(%esp)
0833cc8d +0x0e7:  lea    -0x6b8(%ebp),%eax
0833cc93 +0x0ed:  mov    %eax,(%esp)
0833cc96 +0x0f0:  call   08a35e47 <_Z20importCreatureScriptP14CreatureScriptPKc>  ; importCreatureScript(CreatureScript*, char const*)
0833cc9b +0x0f5:  xor    $0x1,%eax
0833cc9e +0x0f8:  test   %al,%al
0833cca0 +0x0fa:  je     0833ccdf <+0x139>
0833cca2 +0x0fc:  mov    -0x20(%ebp),%eax
0833cca5 +0x0ff:  mov    %eax,0x14(%esp)
0833cca9 +0x103:  movl   $"importCreatureScript fail file - %s",0x10(%esp)
0833ccb1 +0x10b:  movl   $0xf6b,0xc(%esp)
0833ccb9 +0x113:  movl   $&_ZZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEvE19__PRETTY_FUNCTION__,0x8(%esp)
0833ccc1 +0x11b:  movl   $"Creature.cpp",0x4(%esp)
0833ccc9 +0x123:  movl   $0x1,(%esp)
0833ccd0 +0x12a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0833ccd5 +0x12f:  mov    $0x0,%ebx
0833ccda +0x134:  jmp    0833d372 <+0x7cc>
0833ccdf +0x139:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0833cce4 +0x13e:  mov    %eax,(%esp)
0833cce7 +0x141:  call   082a7208 <_GLOBAL__I__ZN4CLog5this_E+0x362f>  ; global constructors keyed to CLog::this_+0x362f
0833ccec +0x146:  test   %al,%al
0833ccee +0x148:  je     0833d145 <+0x59f>
0833ccf4 +0x14e:  lea    -0x6b8(%ebp),%eax
0833ccfa +0x154:  add    $0x11c,%eax
0833ccff +0x159:  mov    %eax,(%esp)
0833cd02 +0x15c:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0833cd07 +0x161:  test   %eax,%eax
0833cd09 +0x163:  setne  %al
0833cd0c +0x166:  test   %al,%al
0833cd0e +0x168:  je     0833cf1c <+0x376>
0833cd14 +0x16e:  movl   $0x0,0x4(%esp)
0833cd1c +0x176:  lea    -0x6b8(%ebp),%eax
0833cd22 +0x17c:  add    $0x11c,%eax
0833cd27 +0x181:  mov    %eax,(%esp)
0833cd2a +0x184:  call   08342d00 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4dcd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4dcd
0833cd2f +0x189:  mov    %eax,(%esp)
0833cd32 +0x18c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cd37 +0x191:  movzbl (%eax),%eax
0833cd3a +0x194:  test   %al,%al
0833cd3c +0x196:  setne  %al
0833cd3f +0x199:  test   %al,%al
0833cd41 +0x19b:  je     0833cf1c <+0x376>
0833cd47 +0x1a1:  movl   $0x0,0x4(%esp)
0833cd4f +0x1a9:  lea    -0x6b8(%ebp),%eax
0833cd55 +0x1af:  add    $0x11c,%eax
0833cd5a +0x1b4:  mov    %eax,(%esp)
0833cd5d +0x1b7:  call   08342d00 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4dcd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4dcd
0833cd62 +0x1bc:  mov    %eax,(%esp)
0833cd65 +0x1bf:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cd6a +0x1c4:  mov    %eax,%ebx
0833cd6c +0x1c6:  lea    -0x6b8(%ebp),%eax
0833cd72 +0x1cc:  add    $0x170,%eax
0833cd77 +0x1d1:  mov    %eax,(%esp)
0833cd7a +0x1d4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cd7f +0x1d9:  mov    %ebx,0xc(%esp)
0833cd83 +0x1dd:  mov    %eax,0x8(%esp)
0833cd87 +0x1e1:  movl   $"%s%s",0x4(%esp)
0833cd8f +0x1e9:  lea    -0x170(%ebp),%eax
0833cd95 +0x1ef:  mov    %eax,(%esp)
0833cd98 +0x1f2:  call   0807e440 <_init+0xd38>
0833cd9d +0x1f7:  movl   $0x0,0x8(%esp)
0833cda5 +0x1ff:  lea    -0x170(%ebp),%eax
0833cdab +0x205:  mov    %eax,0x4(%esp)
0833cdaf +0x209:  lea    -0x4a4(%ebp),%eax
0833cdb5 +0x20f:  mov    %eax,(%esp)
0833cdb8 +0x212:  call   088d145a <_Z22ImportAttackInfoScriptP10AttackInfoPKci>  ; ImportAttackInfoScript(AttackInfo*, char const*, int)
0833cdbd +0x217:  test   %al,%al
0833cdbf +0x219:  je     0833cef2 <+0x34c>
0833cdc5 +0x21f:  mov    -0x494(%ebp),%eax
0833cdcb +0x225:  mov    %eax,%ecx
0833cdcd +0x227:  flds   -0x4a4(%ebp)
0833cdd3 +0x22d:  mov    -0x658(%ebp),%edx
0833cdd9 +0x233:  mov    -0x650(%ebp),%eax
0833cddf +0x239:  mov    %ecx,0x18(%esp)
0833cde3 +0x23d:  fstpl  0x10(%esp)
0833cde7 +0x241:  mov    %edx,0xc(%esp)
0833cdeb +0x245:  mov    %eax,0x8(%esp)
0833cdef +0x249:  movl   $"%d,%d,%f,%d",0x4(%esp)
0833cdf7 +0x251:  lea    -0x270(%ebp),%eax
0833cdfd +0x257:  mov    %eax,(%esp)
0833ce00 +0x25a:  call   0807e440 <_init+0xd38>
0833ce05 +0x25f:  lea    -0x4a4(%ebp),%eax
0833ce0b +0x265:  add    $0xa4,%eax
0833ce10 +0x26a:  mov    %eax,(%esp)
0833ce13 +0x26d:  call   08342d2c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4df9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4df9
0833ce18 +0x272:  test   %eax,%eax
0833ce1a +0x274:  sete   %al
0833ce1d +0x277:  test   %al,%al
0833ce1f +0x279:  je     0833ce56 <+0x2b0>
0833ce21 +0x27b:  lea    -0x270(%ebp),%eax
0833ce27 +0x281:  mov    %eax,(%esp)
0833ce2a +0x284:  call   0807e3b0 <_init+0xca8>
0833ce2f +0x289:  mov    %eax,%edx
0833ce31 +0x28b:  lea    -0x270(%ebp),%eax
0833ce37 +0x291:  add    %edx,%eax
0833ce39 +0x293:  movl   $0x4,0x8(%esp)
0833ce41 +0x29b:  movl   $",%d",0x4(%esp)
0833ce49 +0x2a3:  mov    %eax,(%esp)
0833ce4c +0x2a6:  call   0807e440 <_init+0xd38>
0833ce51 +0x2ab:  jmp    0833cf1c <+0x376>
0833ce56 +0x2b0:  lea    -0x6c(%ebp),%eax
0833ce59 +0x2b3:  lea    -0x4a4(%ebp),%edx
0833ce5f +0x2b9:  add    $0xa4,%edx
0833ce65 +0x2bf:  mov    %edx,0x4(%esp)
0833ce69 +0x2c3:  mov    %eax,(%esp)
0833ce6c +0x2c6:  call   08342d40 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e0d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e0d
0833ce71 +0x2cb:  sub    $0x4,%esp
0833ce74 +0x2ce:  jmp    0833cebc <+0x316>
0833ce76 +0x2d0:  lea    -0x6c(%ebp),%eax
0833ce79 +0x2d3:  mov    %eax,(%esp)
0833ce7c +0x2d6:  call   08342dbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e8b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e8b
0833ce81 +0x2db:  mov    (%eax),%eax
0833ce83 +0x2dd:  mov    %eax,%ebx
0833ce85 +0x2df:  lea    -0x270(%ebp),%eax
0833ce8b +0x2e5:  mov    %eax,(%esp)
0833ce8e +0x2e8:  call   0807e3b0 <_init+0xca8>
0833ce93 +0x2ed:  mov    %eax,%edx
0833ce95 +0x2ef:  lea    -0x270(%ebp),%eax
0833ce9b +0x2f5:  add    %edx,%eax
0833ce9d +0x2f7:  mov    %ebx,0x8(%esp)
0833cea1 +0x2fb:  movl   $",%d",0x4(%esp)
0833cea9 +0x303:  mov    %eax,(%esp)
0833ceac +0x306:  call   0807e440 <_init+0xd38>
0833ceb1 +0x30b:  lea    -0x6c(%ebp),%eax
0833ceb4 +0x30e:  mov    %eax,(%esp)
0833ceb7 +0x311:  call   08342da0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e6d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e6d
0833cebc +0x316:  lea    -0x58(%ebp),%eax
0833cebf +0x319:  lea    -0x4a4(%ebp),%edx
0833cec5 +0x31f:  add    $0xa4,%edx
0833cecb +0x325:  mov    %edx,0x4(%esp)
0833cecf +0x329:  mov    %eax,(%esp)
0833ced2 +0x32c:  call   08342d66 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e33>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e33
0833ced7 +0x331:  sub    $0x4,%esp
0833ceda +0x334:  lea    -0x58(%ebp),%eax
0833cedd +0x337:  mov    %eax,0x4(%esp)
0833cee1 +0x33b:  lea    -0x6c(%ebp),%eax
0833cee4 +0x33e:  mov    %eax,(%esp)
0833cee7 +0x341:  call   08342d8c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e59>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e59
0833ceec +0x346:  test   %al,%al
0833ceee +0x348:  jne    0833ce76 <+0x2d0>
0833cef0 +0x34a:  jmp    0833cf1c <+0x376>
0833cef2 +0x34c:  mov    -0x658(%ebp),%edx
0833cef8 +0x352:  mov    -0x650(%ebp),%eax
0833cefe +0x358:  mov    %edx,0xc(%esp)
0833cf02 +0x35c:  mov    %eax,0x8(%esp)
0833cf06 +0x360:  movl   $"%d,%d",0x4(%esp)
0833cf0e +0x368:  lea    -0x270(%ebp),%eax
0833cf14 +0x36e:  mov    %eax,(%esp)
0833cf17 +0x371:  call   0807e440 <_init+0xd38>
0833cf1c +0x376:  lea    -0x6b8(%ebp),%eax
0833cf22 +0x37c:  add    $0x11c,%eax
0833cf27 +0x381:  mov    %eax,(%esp)
0833cf2a +0x384:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0833cf2f +0x389:  cmp    $0x1,%eax
0833cf32 +0x38c:  seta   %al
0833cf35 +0x38f:  test   %al,%al
0833cf37 +0x391:  je     0833d145 <+0x59f>
0833cf3d +0x397:  movl   $0x1,0x4(%esp)
0833cf45 +0x39f:  lea    -0x6b8(%ebp),%eax
0833cf4b +0x3a5:  add    $0x11c,%eax
0833cf50 +0x3aa:  mov    %eax,(%esp)
0833cf53 +0x3ad:  call   08342d00 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4dcd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4dcd
0833cf58 +0x3b2:  mov    %eax,(%esp)
0833cf5b +0x3b5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cf60 +0x3ba:  movzbl (%eax),%eax
0833cf63 +0x3bd:  test   %al,%al
0833cf65 +0x3bf:  setne  %al
0833cf68 +0x3c2:  test   %al,%al
0833cf6a +0x3c4:  je     0833d145 <+0x59f>
0833cf70 +0x3ca:  movl   $0x1,0x4(%esp)
0833cf78 +0x3d2:  lea    -0x6b8(%ebp),%eax
0833cf7e +0x3d8:  add    $0x11c,%eax
0833cf83 +0x3dd:  mov    %eax,(%esp)
0833cf86 +0x3e0:  call   08342d00 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4dcd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4dcd
0833cf8b +0x3e5:  mov    %eax,(%esp)
0833cf8e +0x3e8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cf93 +0x3ed:  mov    %eax,%ebx
0833cf95 +0x3ef:  lea    -0x6b8(%ebp),%eax
0833cf9b +0x3f5:  add    $0x170,%eax
0833cfa0 +0x3fa:  mov    %eax,(%esp)
0833cfa3 +0x3fd:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0833cfa8 +0x402:  mov    %ebx,0xc(%esp)
0833cfac +0x406:  mov    %eax,0x8(%esp)
0833cfb0 +0x40a:  movl   $"%s%s",0x4(%esp)
0833cfb8 +0x412:  lea    -0x170(%ebp),%eax
0833cfbe +0x418:  mov    %eax,(%esp)
0833cfc1 +0x41b:  call   0807e440 <_init+0xd38>
0833cfc6 +0x420:  movl   $0x0,0x8(%esp)
0833cfce +0x428:  lea    -0x170(%ebp),%eax
0833cfd4 +0x42e:  mov    %eax,0x4(%esp)
0833cfd8 +0x432:  lea    -0x4a4(%ebp),%eax
0833cfde +0x438:  mov    %eax,(%esp)
0833cfe1 +0x43b:  call   088d145a <_Z22ImportAttackInfoScriptP10AttackInfoPKci>  ; ImportAttackInfoScript(AttackInfo*, char const*, int)
0833cfe6 +0x440:  test   %al,%al
0833cfe8 +0x442:  je     0833d11b <+0x575>
0833cfee +0x448:  mov    -0x494(%ebp),%eax
0833cff4 +0x44e:  mov    %eax,%ecx
0833cff6 +0x450:  flds   -0x4a4(%ebp)
0833cffc +0x456:  mov    -0x654(%ebp),%edx
0833d002 +0x45c:  mov    -0x64c(%ebp),%eax
0833d008 +0x462:  mov    %ecx,0x18(%esp)
0833d00c +0x466:  fstpl  0x10(%esp)
0833d010 +0x46a:  mov    %edx,0xc(%esp)
0833d014 +0x46e:  mov    %eax,0x8(%esp)
0833d018 +0x472:  movl   $"%d,%d,%f,%d",0x4(%esp)
0833d020 +0x47a:  lea    -0x370(%ebp),%eax
0833d026 +0x480:  mov    %eax,(%esp)
0833d029 +0x483:  call   0807e440 <_init+0xd38>
0833d02e +0x488:  lea    -0x4a4(%ebp),%eax
0833d034 +0x48e:  add    $0xa4,%eax
0833d039 +0x493:  mov    %eax,(%esp)
0833d03c +0x496:  call   08342d2c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4df9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4df9
0833d041 +0x49b:  test   %eax,%eax
0833d043 +0x49d:  sete   %al
0833d046 +0x4a0:  test   %al,%al
0833d048 +0x4a2:  je     0833d07f <+0x4d9>
0833d04a +0x4a4:  lea    -0x370(%ebp),%eax
0833d050 +0x4aa:  mov    %eax,(%esp)
0833d053 +0x4ad:  call   0807e3b0 <_init+0xca8>
0833d058 +0x4b2:  mov    %eax,%edx
0833d05a +0x4b4:  lea    -0x370(%ebp),%eax
0833d060 +0x4ba:  add    %edx,%eax
0833d062 +0x4bc:  movl   $0x4,0x8(%esp)
0833d06a +0x4c4:  movl   $",%d",0x4(%esp)
0833d072 +0x4cc:  mov    %eax,(%esp)
0833d075 +0x4cf:  call   0807e440 <_init+0xd38>
0833d07a +0x4d4:  jmp    0833d145 <+0x59f>
0833d07f +0x4d9:  lea    -0x70(%ebp),%eax
0833d082 +0x4dc:  lea    -0x4a4(%ebp),%edx
0833d088 +0x4e2:  add    $0xa4,%edx
0833d08e +0x4e8:  mov    %edx,0x4(%esp)
0833d092 +0x4ec:  mov    %eax,(%esp)
0833d095 +0x4ef:  call   08342d40 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e0d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e0d
0833d09a +0x4f4:  sub    $0x4,%esp
0833d09d +0x4f7:  jmp    0833d0e5 <+0x53f>
0833d09f +0x4f9:  lea    -0x70(%ebp),%eax
0833d0a2 +0x4fc:  mov    %eax,(%esp)
0833d0a5 +0x4ff:  call   08342dbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e8b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e8b
0833d0aa +0x504:  mov    (%eax),%eax
0833d0ac +0x506:  mov    %eax,%ebx
0833d0ae +0x508:  lea    -0x370(%ebp),%eax
0833d0b4 +0x50e:  mov    %eax,(%esp)
0833d0b7 +0x511:  call   0807e3b0 <_init+0xca8>
0833d0bc +0x516:  mov    %eax,%edx
0833d0be +0x518:  lea    -0x370(%ebp),%eax
0833d0c4 +0x51e:  add    %edx,%eax
0833d0c6 +0x520:  mov    %ebx,0x8(%esp)
0833d0ca +0x524:  movl   $",%d",0x4(%esp)
0833d0d2 +0x52c:  mov    %eax,(%esp)
0833d0d5 +0x52f:  call   0807e440 <_init+0xd38>
0833d0da +0x534:  lea    -0x70(%ebp),%eax
0833d0dd +0x537:  mov    %eax,(%esp)
0833d0e0 +0x53a:  call   08342da0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e6d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e6d
0833d0e5 +0x53f:  lea    -0x54(%ebp),%eax
0833d0e8 +0x542:  lea    -0x4a4(%ebp),%edx
0833d0ee +0x548:  add    $0xa4,%edx
0833d0f4 +0x54e:  mov    %edx,0x4(%esp)
0833d0f8 +0x552:  mov    %eax,(%esp)
0833d0fb +0x555:  call   08342d66 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e33>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e33
0833d100 +0x55a:  sub    $0x4,%esp
0833d103 +0x55d:  lea    -0x54(%ebp),%eax
0833d106 +0x560:  mov    %eax,0x4(%esp)
0833d10a +0x564:  lea    -0x70(%ebp),%eax
0833d10d +0x567:  mov    %eax,(%esp)
0833d110 +0x56a:  call   08342d8c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e59>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e59
0833d115 +0x56f:  test   %al,%al
0833d117 +0x571:  jne    0833d09f <+0x4f9>
0833d119 +0x573:  jmp    0833d145 <+0x59f>
0833d11b +0x575:  mov    -0x654(%ebp),%edx
0833d121 +0x57b:  mov    -0x64c(%ebp),%eax
0833d127 +0x581:  mov    %edx,0xc(%esp)
0833d12b +0x585:  mov    %eax,0x8(%esp)
0833d12f +0x589:  movl   $"%d,%d",0x4(%esp)
0833d137 +0x591:  lea    -0x370(%ebp),%eax
0833d13d +0x597:  mov    %eax,(%esp)
0833d140 +0x59a:  call   0807e440 <_init+0xd38>
0833d145 +0x59f:  movl   $0x74,(%esp)
0833d14c +0x5a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0833d151 +0x5ab:  mov    %eax,%ebx
0833d153 +0x5ad:  mov    %ebx,%eax
0833d155 +0x5af:  mov    %eax,(%esp)
0833d158 +0x5b2:  call   0833c77e <_ZN13user_creature15CCreatureScriptC1Ev>  ; user_creature::CCreatureScript::CCreatureScript()
0833d15d +0x5b7:  jmp    0833d174 <+0x5ce>
0833d15f +0x5b9:  mov    %edx,%esi
0833d161 +0x5bb:  mov    %eax,%edi
0833d163 +0x5bd:  mov    %ebx,(%esp)
0833d166 +0x5c0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0833d16b +0x5c5:  mov    %edi,%eax
0833d16d +0x5c7:  mov    %esi,%edx
0833d16f +0x5c9:  jmp    0833d35a <+0x7b4>
0833d174 +0x5ce:  mov    %ebx,%eax
0833d176 +0x5d0:  mov    %eax,-0x60(%ebp)
0833d179 +0x5d3:  mov    -0x60(%ebp),%eax
0833d17c +0x5d6:  lea    -0x6b8(%ebp),%edx
0833d182 +0x5dc:  mov    %edx,0x4(%esp)
0833d186 +0x5e0:  mov    %eax,(%esp)
0833d189 +0x5e3:  call   0833c8e8 <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript>  ; user_creature::CCreatureScript::Set(CreatureScript*)
0833d18e +0x5e8:  mov    0x8(%ebp),%eax
0833d191 +0x5eb:  lea    -0x6b8(%ebp),%edx
0833d197 +0x5f1:  mov    %edx,0x4(%esp)
0833d19b +0x5f5:  mov    %eax,(%esp)
0833d19e +0x5f8:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0833d1a3 +0x5fd:  mov    (%eax),%eax
0833d1a5 +0x5ff:  mov    %eax,-0x1c(%ebp)
0833d1a8 +0x602:  mov    -0x60(%ebp),%eax
0833d1ab +0x605:  mov    -0x1c(%ebp),%edx
0833d1ae +0x608:  mov    %edx,0x4(%esp)
0833d1b2 +0x60c:  mov    %eax,(%esp)
0833d1b5 +0x60f:  call   0833f11a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11e7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11e7
0833d1ba +0x614:  mov    -0x1c(%ebp),%ebx
0833d1bd +0x617:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0833d1c2 +0x61c:  lea    -0x370(%ebp),%edx
0833d1c8 +0x622:  mov    %edx,0x10(%esp)
0833d1cc +0x626:  lea    -0x270(%ebp),%edx
0833d1d2 +0x62c:  mov    %edx,0xc(%esp)
0833d1d6 +0x630:  lea    -0x6b8(%ebp),%edx
0833d1dc +0x636:  mov    %edx,0x8(%esp)
0833d1e0 +0x63a:  mov    %ebx,0x4(%esp)
0833d1e4 +0x63e:  mov    %eax,(%esp)
0833d1e7 +0x641:  call   08624414 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_>  ; sync_script::CSyncScript::insert_creature_info_to_db(unsigned int, CreatureScript const*, char const*, char const*)
0833d1ec +0x646:  xor    $0x1,%eax
0833d1ef +0x649:  test   %al,%al
0833d1f1 +0x64b:  je     0833d213 <+0x66d>
0833d1f3 +0x64d:  mov    -0x6b8(%ebp),%eax
0833d1f9 +0x653:  mov    %eax,0x4(%esp)
0833d1fd +0x657:  movl   $"failed to insert id number < %d > creature info to db\n",(%esp)
0833d204 +0x65e:  call   0807db60 <_init+0x458>
0833d209 +0x663:  mov    $0x0,%ebx
0833d20e +0x668:  jmp    0833d372 <+0x7cc>
0833d213 +0x66d:  mov    0x8(%ebp),%eax
0833d216 +0x670:  lea    0x18(%eax),%ecx
0833d219 +0x673:  lea    -0x68(%ebp),%eax
0833d21c +0x676:  lea    -0x6b8(%ebp),%edx
0833d222 +0x67c:  mov    %edx,0x8(%esp)
0833d226 +0x680:  mov    %ecx,0x4(%esp)
0833d22a +0x684:  mov    %eax,(%esp)
0833d22d +0x687:  call   08342dcc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4e99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4e99
0833d232 +0x68c:  sub    $0x4,%esp
0833d235 +0x68f:  mov    0x8(%ebp),%eax
0833d238 +0x692:  lea    0x18(%eax),%edx
0833d23b +0x695:  lea    -0x50(%ebp),%eax
0833d23e +0x698:  mov    %edx,0x4(%esp)
0833d242 +0x69c:  mov    %eax,(%esp)
0833d245 +0x69f:  call   08342df8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ec5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ec5
0833d24a +0x6a4:  sub    $0x4,%esp
0833d24d +0x6a7:  lea    -0x50(%ebp),%eax
0833d250 +0x6aa:  mov    %eax,0x4(%esp)
0833d254 +0x6ae:  lea    -0x68(%ebp),%eax
0833d257 +0x6b1:  mov    %eax,(%esp)
0833d25a +0x6b4:  call   08342e1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4eeb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4eeb
0833d25f +0x6b9:  test   %al,%al
0833d261 +0x6bb:  je     0833d2b3 <+0x70d>
0833d263 +0x6bd:  movl   $0x5,0xc(%esp)
0833d26b +0x6c5:  movl   $0xfbe,0x8(%esp)
0833d273 +0x6cd:  movl   $&_ZZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEvE19__PRETTY_FUNCTION__,0x4(%esp)
0833d27b +0x6d5:  lea    -0x4c(%ebp),%eax
0833d27e +0x6d8:  mov    %eax,(%esp)
0833d281 +0x6db:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833d286 +0x6e0:  movl   $0xfbe,0xc(%esp)
0833d28e +0x6e8:  movl   $&_ZZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEvE19__PRETTY_FUNCTION__,0x8(%esp)
0833d296 +0x6f0:  movl   $"[%s][%d]",0x4(%esp)
0833d29e +0x6f8:  lea    -0x4c(%ebp),%eax
0833d2a1 +0x6fb:  mov    %eax,(%esp)
0833d2a4 +0x6fe:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833d2a9 +0x703:  mov    $0x0,%ebx
0833d2ae +0x708:  jmp    0833d372 <+0x7cc>
0833d2b3 +0x70d:  lea    -0x2c(%ebp),%eax
0833d2b6 +0x710:  lea    -0x60(%ebp),%edx
0833d2b9 +0x713:  mov    %edx,0x8(%esp)
0833d2bd +0x717:  lea    -0x6b8(%ebp),%edx
0833d2c3 +0x71d:  mov    %edx,0x4(%esp)
0833d2c7 +0x721:  mov    %eax,(%esp)
0833d2ca +0x724:  call   08342e32 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4eff>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4eff
0833d2cf +0x729:  sub    $0x4,%esp
0833d2d2 +0x72c:  lea    -0x2c(%ebp),%eax
0833d2d5 +0x72f:  mov    %eax,0x4(%esp)
0833d2d9 +0x733:  lea    -0x34(%ebp),%eax
0833d2dc +0x736:  mov    %eax,(%esp)
0833d2df +0x739:  call   08342e70 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4f3d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4f3d
0833d2e4 +0x73e:  mov    0x8(%ebp),%eax
0833d2e7 +0x741:  lea    0x18(%eax),%ecx
0833d2ea +0x744:  lea    -0x3c(%ebp),%eax
0833d2ed +0x747:  lea    -0x34(%ebp),%edx
0833d2f0 +0x74a:  mov    %edx,0x8(%esp)
0833d2f4 +0x74e:  mov    %ecx,0x4(%esp)
0833d2f8 +0x752:  mov    %eax,(%esp)
0833d2fb +0x755:  call   08342ea0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4f6d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4f6d
0833d300 +0x75a:  sub    $0x4,%esp
0833d303 +0x75d:  lea    -0x24(%ebp),%eax
0833d306 +0x760:  movl   $0x0,0x8(%esp)
0833d30e +0x768:  lea    -0x64(%ebp),%edx
0833d311 +0x76b:  mov    %edx,0x4(%esp)
0833d315 +0x76f:  mov    %eax,(%esp)
0833d318 +0x772:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
0833d31d +0x777:  sub    $0x4,%esp
0833d320 +0x77a:  lea    -0x5c(%ebp),%eax
0833d323 +0x77d:  movl   $&g_creatureScriptFileList,0x4(%esp)
0833d32b +0x785:  mov    %eax,(%esp)
0833d32e +0x788:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0833d333 +0x78d:  sub    $0x4,%esp
0833d336 +0x790:  lea    -0x5c(%ebp),%eax
0833d339 +0x793:  mov    %eax,0x4(%esp)
0833d33d +0x797:  lea    -0x64(%ebp),%eax
0833d340 +0x79a:  mov    %eax,(%esp)
0833d343 +0x79d:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0833d348 +0x7a2:  test   %al,%al
0833d34a +0x7a4:  jne    0833cc63 <+0xbd>
0833d350 +0x7aa:  jmp    0833d353 <+0x7ad>
0833d352 +0x7ac:  nop
0833d353 +0x7ad:  mov    $0x1,%ebx
0833d358 +0x7b2:  jmp    0833d372 <+0x7cc>
0833d35a +0x7b4:  mov    %edx,%ebx
0833d35c +0x7b6:  mov    %eax,%esi
0833d35e +0x7b8:  lea    -0x4a4(%ebp),%eax
0833d364 +0x7be:  mov    %eax,(%esp)
0833d367 +0x7c1:  call   083415e2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x36af>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x36af
0833d36c +0x7c6:  mov    %esi,%eax
0833d36e +0x7c8:  mov    %ebx,%edx
0833d370 +0x7ca:  jmp    0833d382 <+0x7dc>
0833d372 +0x7cc:  lea    -0x4a4(%ebp),%eax
0833d378 +0x7d2:  mov    %eax,(%esp)
0833d37b +0x7d5:  call   083415e2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x36af>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x36af
0833d380 +0x7da:  jmp    0833d3a0 <+0x7fa>
0833d382 +0x7dc:  mov    %edx,%ebx
0833d384 +0x7de:  mov    %eax,%esi
0833d386 +0x7e0:  lea    -0x6b8(%ebp),%eax
0833d38c +0x7e6:  mov    %eax,(%esp)
0833d38f +0x7e9:  call   08340ca4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d71>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d71
0833d394 +0x7ee:  mov    %esi,%eax
0833d396 +0x7f0:  mov    %ebx,%edx
0833d398 +0x7f2:  mov    %eax,(%esp)
0833d39b +0x7f5:  call   08ae3750 <_Unwind_Resume>
0833d3a0 +0x7fa:  lea    -0x6b8(%ebp),%eax
0833d3a6 +0x800:  mov    %eax,(%esp)
0833d3a9 +0x803:  call   08340ca4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d71>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d71
0833d3ae +0x808:  mov    %ebx,%eax
0833d3b0 +0x80a:  lea    -0xc(%ebp),%esp
0833d3b3 +0x80d:  add    $0x0,%esp
0833d3b6 +0x810:  pop    %ebx
0833d3b7 +0x811:  pop    %esi
0833d3b8 +0x812:  pop    %edi
0833d3b9 +0x813:  pop    %ebp
0833d3ba +0x814:  ret
0833d3bb +0x815:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScriptMgr::LoadCreatureScriptFile @ 0x833cba6

/* user_creature::CCreatureScriptMgr::LoadCreatureScriptFile() */

undefined4 __thiscall
user_creature::CCreatureScriptMgr::LoadCreatureScriptFile(CCreatureScriptMgr *this)

{
  char cVar1;
  CSyncScript *pCVar2;
  string *psVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  uint uVar7;
  undefined4 *puVar8;
  CCreatureScript *this_00;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  double dVar13;
  CCreatureScript *local_6bc [24];
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  vector<std::string,std::allocator<std::string>> avStack_5a0 [84];
  string asStack_54c [164];
  float local_4a8 [4];
  undefined4 local_498;
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> asStack_404 [144];
  char local_374 [256];
  char local_274 [256];
  char local_174 [256];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_74 [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_70 [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> local_6c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_68 [4];
  CCreatureScript *local_64;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_60 [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_5c [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_58 [4];
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_54 [4];
  cMyTrace local_50 [16];
  pair local_40 [8];
  pair<int_const,user_creature::CCreatureScript*> local_38 [8];
  int local_30 [2];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_28 [4];
  char *local_24;
  uint local_20;
  
  bVar12 = 0;
  local_64 = (CCreatureScript *)0x0;
  CreatureScript::CreatureScript((CreatureScript *)local_6bc);
  local_24 = (char *)0x0;
  pcVar4 = local_174;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
  }
  pcVar4 = local_274;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
  }
  pcVar4 = local_374;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
  }
                    /* try { // try from 0833cc19 to 0833cc1d has its CatchHandler @ 0833d382 */
  AttackInfo::AttackInfo((AttackInfo *)local_4a8);
                    /* try { // try from 0833cc1e to 0833d150 has its CatchHandler @ 0833d35a */
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar1 = sync_script::CSyncScript::truncate_creature_info_table(pCVar2);
  if (cVar1 == '\x01') {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_68);
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_60);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_68,
                         (_Rb_tree_iterator *)local_60);
      if (cVar1 == '\0') break;
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_68);
      local_24 = (char *)std::string::c_str((string *)(iVar10 + 4));
      if (local_24 == (char *)0x0) break;
      cVar1 = importCreatureScript((CreatureScript *)local_6bc,local_24);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"Creature.cpp",
                   "bool user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()",0xf6b,
                   "importCreatureScript fail file - %s");
        uVar11 = 0;
        goto LAB_0833d372;
      }
      pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::IsEnable(pCVar2);
      if (cVar1 != '\0') {
        iVar10 = std::vector<std::string,std::allocator<std::string>>::size(avStack_5a0);
        if (iVar10 != 0) {
          psVar3 = (string *)std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,0)
          ;
          pcVar4 = (char *)std::string::c_str(psVar3);
          if (*pcVar4 != '\0') {
            psVar3 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,0);
            uVar11 = std::string::c_str(psVar3);
            uVar5 = std::string::c_str(asStack_54c);
            sprintf(local_174,"%s%s",uVar5,uVar11);
            cVar1 = ImportAttackInfoScript((AttackInfo *)local_4a8,local_174,0);
            if (cVar1 == '\0') {
              sprintf(local_274,"%d,%d",local_654,local_65c);
            }
            else {
              dVar13 = (double)local_4a8[0];
              uVar11 = local_65c;
              uVar5 = local_498;
              sprintf(local_274,"%d,%d,%f,%d",local_654,local_65c,dVar13,local_498);
              iVar10 = std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::
                       size(asStack_404);
              if (iVar10 == 0) {
                sVar6 = strlen(local_274);
                sprintf(local_274 + sVar6,",%d",4,uVar11,dVar13,uVar5);
              }
              else {
                std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::begin
                          (local_70);
                while( true ) {
                  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::end
                            (local_5c);
                  cVar1 = std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator!=
                                    ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_70,
                                     (_Rb_tree_const_iterator *)local_5c);
                  if (cVar1 == '\0') break;
                  puVar8 = (undefined4 *)
                           std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator*
                                     ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_70);
                  uVar11 = *puVar8;
                  sVar6 = strlen(local_274);
                  sprintf(local_274 + sVar6,",%d",uVar11);
                  std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator++
                            ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_70);
                }
              }
            }
          }
        }
        uVar7 = std::vector<std::string,std::allocator<std::string>>::size(avStack_5a0);
        if (1 < uVar7) {
          psVar3 = (string *)std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,1)
          ;
          pcVar4 = (char *)std::string::c_str(psVar3);
          if (*pcVar4 != '\0') {
            psVar3 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,1);
            uVar11 = std::string::c_str(psVar3);
            uVar5 = std::string::c_str(asStack_54c);
            sprintf(local_174,"%s%s",uVar5,uVar11);
            cVar1 = ImportAttackInfoScript((AttackInfo *)local_4a8,local_174,0);
            if (cVar1 == '\0') {
              sprintf(local_374,"%d,%d",local_650,local_658);
            }
            else {
              dVar13 = (double)local_4a8[0];
              uVar11 = local_658;
              uVar5 = local_498;
              sprintf(local_374,"%d,%d,%f,%d",local_650,local_658,dVar13,local_498);
              iVar10 = std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::
                       size(asStack_404);
              if (iVar10 == 0) {
                sVar6 = strlen(local_374);
                sprintf(local_374 + sVar6,",%d",4,uVar11,dVar13,uVar5);
              }
              else {
                std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::begin
                          (local_74);
                while( true ) {
                  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::end
                            (local_58);
                  cVar1 = std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator!=
                                    ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_74,
                                     (_Rb_tree_const_iterator *)local_58);
                  if (cVar1 == '\0') break;
                  puVar8 = (undefined4 *)
                           std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator*
                                     ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_74);
                  uVar11 = *puVar8;
                  sVar6 = strlen(local_374);
                  sprintf(local_374 + sVar6,",%d",uVar11);
                  std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator++
                            ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_74);
                }
              }
            }
          }
        }
      }
      this_00 = operator_new(0x74);
                    /* try { // try from 0833d158 to 0833d15c has its CatchHandler @ 0833d15f */
      CCreatureScript::CCreatureScript(this_00);
      local_64 = this_00;
                    /* try { // try from 0833d189 to 0833d332 has its CatchHandler @ 0833d35a */
      CCreatureScript::Set(this_00,(CreatureScript *)local_6bc);
      puVar9 = (uint *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   *)this,(int *)local_6bc);
      local_20 = *puVar9;
      CCreatureScript::SetItemId(local_64,local_20);
      uVar7 = local_20;
      pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::insert_creature_info_to_db
                        (pCVar2,uVar7,(CreatureScript *)local_6bc,local_274,local_374);
      if (cVar1 != '\x01') {
        printf("failed to insert id number < %d > creature info to db\n",local_6bc[0]);
        uVar11 = 0;
        goto LAB_0833d372;
      }
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::find((int *)local_6c);
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::end(local_54);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::
              operator!=(local_6c,(_Rb_tree_iterator *)local_54);
      if (cVar1 != '\0') {
        cMyTrace::cMyTrace(local_50,
                           "bool user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()",0xfbe,
                           5);
        cMyTrace::operator()
                  (local_50,"[%s][%d]",
                   "bool user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()",0xfbe);
        uVar11 = 0;
        goto LAB_0833d372;
      }
      std::make_pair<int&,user_creature::CCreatureScript*&>(local_30,local_6bc);
      std::pair<int_const,user_creature::CCreatureScript*>::
      pair<int,user_creature::CCreatureScript*>(local_38,(pair *)local_30);
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::insert(local_40);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_28,(int)local_68);
    }
    uVar11 = 1;
  }
  else {
    puts("failed to truncate creature info table");
    uVar11 = 0;
  }
LAB_0833d372:
                    /* try { // try from 0833d37b to 0833d37f has its CatchHandler @ 0833d382 */
  AttackInfo::~AttackInfo((AttackInfo *)local_4a8);
  CreatureScript::~CreatureScript((CreatureScript *)local_6bc);
  return uVar11;
}
```
