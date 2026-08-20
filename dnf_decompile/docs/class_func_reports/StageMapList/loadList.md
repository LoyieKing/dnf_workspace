# loadList

`_ZN12StageMapList8loadListEv`

`StageMapList::loadList()`

| 类 | 地址 |
|---|---|
| `StageMapList` | `0x0836485c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836485c  _ZN12StageMapList8loadListEv
#           StageMapList::loadList()
# range [0x0836485c, 0x08364df5]
0836485c +0x000:  push   %ebp
0836485d +0x001:  mov    %esp,%ebp
0836485f +0x003:  push   %esi
08364860 +0x004:  push   %ebx
08364861 +0x005:  sub    $0xf0,%esp
08364867 +0x00b:  lea    -0x8c(%ebp),%eax
0836486d +0x011:  mov    %eax,(%esp)
08364870 +0x014:  call   08395466 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24f06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24f06
08364875 +0x019:  movl   $0x0,-0x28(%ebp)
0836487c +0x020:  lea    -0x90(%ebp),%eax
08364882 +0x026:  movl   $&g_stageMapScriptFileList,0x4(%esp)
0836488a +0x02e:  mov    %eax,(%esp)
0836488d +0x031:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08364892 +0x036:  sub    $0x4,%esp
08364895 +0x039:  jmp    08364c1b <+0x3bf>
0836489a +0x03e:  lea    -0x90(%ebp),%eax
083648a0 +0x044:  mov    %eax,(%esp)
083648a3 +0x047:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
083648a8 +0x04c:  add    $0x4,%eax
083648ab +0x04f:  mov    %eax,(%esp)
083648ae +0x052:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
083648b3 +0x057:  mov    %eax,-0x28(%ebp)
083648b6 +0x05a:  cmpl   $0x0,-0x28(%ebp)
083648ba +0x05e:  je     08364c50 <+0x3f4>
083648c0 +0x064:  lea    -0xdc(%ebp),%eax
083648c6 +0x06a:  mov    %eax,(%esp)
083648c9 +0x06d:  call   08373488 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd454>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd454
083648ce +0x072:  mov    -0x28(%ebp),%eax
083648d1 +0x075:  mov    %eax,0x4(%esp)
083648d5 +0x079:  lea    -0xdc(%ebp),%eax
083648db +0x07f:  mov    %eax,(%esp)
083648de +0x082:  call   088a9f28 <_Z20importStageMapScriptPN8stagemap14StageMapScriptEPKc>  ; importStageMapScript(stagemap::StageMapScript*, char const*)
083648e3 +0x087:  xor    $0x1,%eax
083648e6 +0x08a:  test   %al,%al
083648e8 +0x08c:  je     0836490c <+0xb0>
083648ea +0x08e:  mov    -0x28(%ebp),%eax
083648ed +0x091:  mov    %eax,0x4(%esp)
083648f1 +0x095:  movl   $"Stage Map Script Error: %s\n",(%esp)
083648f8 +0x09c:  call   0807db60 <_init+0x458>
083648fd +0x0a1:  mov    $0x0,%esi
08364902 +0x0a6:  mov    $0x0,%ebx
08364907 +0x0ab:  jmp    08364be5 <+0x389>
0836490c +0x0b0:  lea    -0x94(%ebp),%eax
08364912 +0x0b6:  lea    -0xdc(%ebp),%edx
08364918 +0x0bc:  add    $0x14,%edx
0836491b +0x0bf:  mov    %edx,0x4(%esp)
0836491f +0x0c3:  mov    %eax,(%esp)
08364922 +0x0c6:  call   083954d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24f78>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24f78
08364927 +0x0cb:  sub    $0x4,%esp
0836492a +0x0ce:  jmp    08364b8b <+0x32f>
0836492f +0x0d3:  movl   $0x0,-0x20(%ebp)
08364936 +0x0da:  lea    -0x94(%ebp),%eax
0836493c +0x0e0:  mov    %eax,(%esp)
0836493f +0x0e3:  call   08395582 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25022>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25022
08364944 +0x0e8:  add    $0x20,%eax
08364947 +0x0eb:  mov    %eax,-0x1c(%ebp)
0836494a +0x0ee:  lea    -0x98(%ebp),%eax
08364950 +0x0f4:  mov    -0x1c(%ebp),%edx
08364953 +0x0f7:  mov    %edx,0x4(%esp)
08364957 +0x0fb:  mov    %eax,(%esp)
0836495a +0x0fe:  call   0839558c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2502c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2502c
0836495f +0x103:  sub    $0x4,%esp
08364962 +0x106:  jmp    08364aa4 <+0x248>
08364967 +0x10b:  lea    -0x98(%ebp),%eax
0836496d +0x111:  mov    %eax,(%esp)
08364970 +0x114:  call   08395636 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x250d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x250d6
08364975 +0x119:  add    $0x4,%eax
08364978 +0x11c:  mov    %eax,-0x14(%ebp)
0836497b +0x11f:  lea    -0x9c(%ebp),%eax
08364981 +0x125:  mov    -0x14(%ebp),%edx
08364984 +0x128:  mov    %edx,0x4(%esp)
08364988 +0x12c:  mov    %eax,(%esp)
0836498b +0x12f:  call   08395640 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x250e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x250e0
08364990 +0x134:  sub    $0x4,%esp
08364993 +0x137:  movl   $0x0,-0x10(%ebp)
0836499a +0x13e:  jmp    08364a3f <+0x1e3>
0836499f +0x143:  lea    -0xac(%ebp),%eax
083649a5 +0x149:  mov    %eax,(%esp)
083649a8 +0x14c:  call   083748aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe876>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe876
083649ad +0x151:  movb   $0x0,-0xa0(%ebp)
083649b4 +0x158:  lea    -0x9c(%ebp),%eax
083649ba +0x15e:  mov    %eax,(%esp)
083649bd +0x161:  call   083956ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2518a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2518a
083649c2 +0x166:  mov    (%eax),%eax
083649c4 +0x168:  mov    %eax,-0xa8(%ebp)
083649ca +0x16e:  lea    -0x98(%ebp),%eax
083649d0 +0x174:  mov    %eax,(%esp)
083649d3 +0x177:  call   08395636 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x250d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x250d6
083649d8 +0x17c:  mov    (%eax),%ebx
083649da +0x17e:  lea    -0x94(%ebp),%eax
083649e0 +0x184:  mov    %eax,(%esp)
083649e3 +0x187:  call   08395582 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25022>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25022
083649e8 +0x18c:  mov    (%eax),%eax
083649ea +0x18e:  mov    -0x10(%ebp),%edx
083649ed +0x191:  mov    %edx,0x8(%esp)
083649f1 +0x195:  mov    %ebx,0x4(%esp)
083649f5 +0x199:  mov    %eax,(%esp)
083649f8 +0x19c:  call   08364818 <_ZN12StageMapList20makeStageMapUniqueIdEiii>  ; StageMapList::makeStageMapUniqueId(int, int, int)
083649fd +0x1a1:  mov    %eax,-0xac(%ebp)
08364a03 +0x1a7:  lea    -0xac(%ebp),%eax
08364a09 +0x1ad:  mov    %eax,0x4(%esp)
08364a0d +0x1b1:  lea    -0x8c(%ebp),%eax
08364a13 +0x1b7:  mov    %eax,(%esp)
08364a16 +0x1ba:  call   083956f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25194>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25194
08364a1b +0x1bf:  lea    -0x70(%ebp),%eax
08364a1e +0x1c2:  movl   $0x0,0x8(%esp)
08364a26 +0x1ca:  lea    -0x9c(%ebp),%edx
08364a2c +0x1d0:  mov    %edx,0x4(%esp)
08364a30 +0x1d4:  mov    %eax,(%esp)
08364a33 +0x1d7:  call   083956b6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25156>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25156
08364a38 +0x1dc:  sub    $0x4,%esp
08364a3b +0x1df:  addl   $0x1,-0x10(%ebp)
08364a3f +0x1e3:  lea    -0x74(%ebp),%eax
08364a42 +0x1e6:  mov    -0x14(%ebp),%edx
08364a45 +0x1e9:  mov    %edx,0x4(%esp)
08364a49 +0x1ed:  mov    %eax,(%esp)
08364a4c +0x1f0:  call   08395664 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25104>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25104
08364a51 +0x1f5:  sub    $0x4,%esp
08364a54 +0x1f8:  lea    -0x74(%ebp),%eax
08364a57 +0x1fb:  mov    %eax,0x4(%esp)
08364a5b +0x1ff:  lea    -0x9c(%ebp),%eax
08364a61 +0x205:  mov    %eax,(%esp)
08364a64 +0x208:  call   0839568a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2512a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2512a
08364a69 +0x20d:  test   %al,%al
08364a6b +0x20f:  jne    0836499f <+0x143>
08364a71 +0x215:  lea    -0x98(%ebp),%eax
08364a77 +0x21b:  mov    %eax,(%esp)
08364a7a +0x21e:  call   08395636 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x250d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x250d6
08364a7f +0x223:  mov    (%eax),%eax
08364a81 +0x225:  mov    %eax,-0x20(%ebp)
08364a84 +0x228:  lea    -0x6c(%ebp),%eax
08364a87 +0x22b:  movl   $0x0,0x8(%esp)
08364a8f +0x233:  lea    -0x98(%ebp),%edx
08364a95 +0x239:  mov    %edx,0x4(%esp)
08364a99 +0x23d:  mov    %eax,(%esp)
08364a9c +0x240:  call   08395602 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x250a2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x250a2
08364aa1 +0x245:  sub    $0x4,%esp
08364aa4 +0x248:  lea    -0x78(%ebp),%eax
08364aa7 +0x24b:  mov    -0x1c(%ebp),%edx
08364aaa +0x24e:  mov    %edx,0x4(%esp)
08364aae +0x252:  mov    %eax,(%esp)
08364ab1 +0x255:  call   083955b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25050>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25050
08364ab6 +0x25a:  sub    $0x4,%esp
08364ab9 +0x25d:  lea    -0x78(%ebp),%eax
08364abc +0x260:  mov    %eax,0x4(%esp)
08364ac0 +0x264:  lea    -0x98(%ebp),%eax
08364ac6 +0x26a:  mov    %eax,(%esp)
08364ac9 +0x26d:  call   083955d6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25076>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25076
08364ace +0x272:  test   %al,%al
08364ad0 +0x274:  jne    08364967 <+0x10b>
08364ad6 +0x27a:  movl   $0x0,-0x18(%ebp)
08364add +0x281:  addl   $0x1,-0x20(%ebp)
08364ae1 +0x285:  lea    -0x94(%ebp),%eax
08364ae7 +0x28b:  mov    %eax,(%esp)
08364aea +0x28e:  call   08395582 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25022>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25022
08364aef +0x293:  mov    0x2c(%eax),%eax
08364af2 +0x296:  test   %eax,%eax
08364af4 +0x298:  setg   %al
08364af7 +0x29b:  test   %al,%al
08364af9 +0x29d:  je     08364b6b <+0x30f>
08364afb +0x29f:  lea    -0xbc(%ebp),%eax
08364b01 +0x2a5:  mov    %eax,(%esp)
08364b04 +0x2a8:  call   083748aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe876>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe876
08364b09 +0x2ad:  movb   $0x1,-0xb0(%ebp)
08364b10 +0x2b4:  lea    -0x94(%ebp),%eax
08364b16 +0x2ba:  mov    %eax,(%esp)
08364b19 +0x2bd:  call   08395582 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25022>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25022
08364b1e +0x2c2:  mov    0x2c(%eax),%eax
08364b21 +0x2c5:  mov    %eax,-0xb8(%ebp)
08364b27 +0x2cb:  lea    -0x94(%ebp),%eax
08364b2d +0x2d1:  mov    %eax,(%esp)
08364b30 +0x2d4:  call   08395582 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25022>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25022
08364b35 +0x2d9:  mov    (%eax),%eax
08364b37 +0x2db:  mov    -0x18(%ebp),%edx
08364b3a +0x2de:  mov    %edx,0x8(%esp)
08364b3e +0x2e2:  mov    -0x20(%ebp),%edx
08364b41 +0x2e5:  mov    %edx,0x4(%esp)
08364b45 +0x2e9:  mov    %eax,(%esp)
08364b48 +0x2ec:  call   08364818 <_ZN12StageMapList20makeStageMapUniqueIdEiii>  ; StageMapList::makeStageMapUniqueId(int, int, int)
08364b4d +0x2f1:  mov    %eax,-0xbc(%ebp)
08364b53 +0x2f7:  lea    -0xbc(%ebp),%eax
08364b59 +0x2fd:  mov    %eax,0x4(%esp)
08364b5d +0x301:  lea    -0x8c(%ebp),%eax
08364b63 +0x307:  mov    %eax,(%esp)
08364b66 +0x30a:  call   083956f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25194>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25194
08364b6b +0x30f:  lea    -0x68(%ebp),%eax
08364b6e +0x312:  movl   $0x0,0x8(%esp)
08364b76 +0x31a:  lea    -0x94(%ebp),%edx
08364b7c +0x320:  mov    %edx,0x4(%esp)
08364b80 +0x324:  mov    %eax,(%esp)
08364b83 +0x327:  call   0839554e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24fee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24fee
08364b88 +0x32c:  sub    $0x4,%esp
08364b8b +0x32f:  lea    -0x7c(%ebp),%eax
08364b8e +0x332:  lea    -0xdc(%ebp),%edx
08364b94 +0x338:  add    $0x14,%edx
08364b97 +0x33b:  mov    %edx,0x4(%esp)
08364b9b +0x33f:  mov    %eax,(%esp)
08364b9e +0x342:  call   083954fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24f9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24f9c
08364ba3 +0x347:  sub    $0x4,%esp
08364ba6 +0x34a:  lea    -0x7c(%ebp),%eax
08364ba9 +0x34d:  mov    %eax,0x4(%esp)
08364bad +0x351:  lea    -0x94(%ebp),%eax
08364bb3 +0x357:  mov    %eax,(%esp)
08364bb6 +0x35a:  call   08395522 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24fc2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24fc2
08364bbb +0x35f:  test   %al,%al
08364bbd +0x361:  jne    0836492f <+0xd3>
08364bc3 +0x367:  mov    $0x1,%ebx
08364bc8 +0x36c:  jmp    08364be5 <+0x389>
08364bca +0x36e:  mov    %edx,%ebx
08364bcc +0x370:  mov    %eax,%esi
08364bce +0x372:  lea    -0xdc(%ebp),%eax
08364bd4 +0x378:  mov    %eax,(%esp)
08364bd7 +0x37b:  call   0837f782 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf222>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf222
08364bdc +0x380:  mov    %esi,%eax
08364bde +0x382:  mov    %ebx,%edx
08364be0 +0x384:  jmp    08364dbe <+0x562>
08364be5 +0x389:  lea    -0xdc(%ebp),%eax
08364beb +0x38f:  mov    %eax,(%esp)
08364bee +0x392:  call   0837f782 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf222>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf222
08364bf3 +0x397:  test   %ebx,%ebx
08364bf5 +0x399:  je     08364ddc <+0x580>
08364bfb +0x39f:  lea    -0x64(%ebp),%eax
08364bfe +0x3a2:  movl   $0x0,0x8(%esp)
08364c06 +0x3aa:  lea    -0x90(%ebp),%edx
08364c0c +0x3b0:  mov    %edx,0x4(%esp)
08364c10 +0x3b4:  mov    %eax,(%esp)
08364c13 +0x3b7:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
08364c18 +0x3bc:  sub    $0x4,%esp
08364c1b +0x3bf:  lea    -0x80(%ebp),%eax
08364c1e +0x3c2:  movl   $&g_stageMapScriptFileList,0x4(%esp)
08364c26 +0x3ca:  mov    %eax,(%esp)
08364c29 +0x3cd:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08364c2e +0x3d2:  sub    $0x4,%esp
08364c31 +0x3d5:  lea    -0x80(%ebp),%eax
08364c34 +0x3d8:  mov    %eax,0x4(%esp)
08364c38 +0x3dc:  lea    -0x90(%ebp),%eax
08364c3e +0x3e2:  mov    %eax,(%esp)
08364c41 +0x3e5:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08364c46 +0x3ea:  test   %al,%al
08364c48 +0x3ec:  jne    0836489a <+0x3e>
08364c4e +0x3f2:  jmp    08364c51 <+0x3f5>
08364c50 +0x3f4:  nop
08364c51 +0x3f5:  lea    -0x60(%ebp),%eax
08364c54 +0x3f8:  lea    -0x8c(%ebp),%edx
08364c5a +0x3fe:  mov    %edx,0x4(%esp)
08364c5e +0x402:  mov    %eax,(%esp)
08364c61 +0x405:  call   0839578c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2522c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2522c
08364c66 +0x40a:  sub    $0x4,%esp
08364c69 +0x40d:  lea    -0x5c(%ebp),%eax
08364c6c +0x410:  lea    -0x8c(%ebp),%edx
08364c72 +0x416:  mov    %edx,0x4(%esp)
08364c76 +0x41a:  mov    %eax,(%esp)
08364c79 +0x41d:  call   08395768 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25208>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25208
08364c7e +0x422:  sub    $0x4,%esp
08364c81 +0x425:  movl   $&_ZN12StageMapList7compareERKNS_16_StageMapSummaryES2_,0x8(%esp)
08364c89 +0x42d:  mov    -0x60(%ebp),%eax
08364c8c +0x430:  mov    %eax,0x4(%esp)
08364c90 +0x434:  mov    -0x5c(%ebp),%eax
08364c93 +0x437:  mov    %eax,(%esp)
08364c96 +0x43a:  call   083957b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25252>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25252
08364c9b +0x43f:  movl   $0x0,-0x24(%ebp)
08364ca2 +0x446:  movl   $0x0,-0xc(%ebp)
08364ca9 +0x44d:  jmp    08364d9b <+0x53f>
08364cae +0x452:  cmpl   $0x0,-0xc(%ebp)
08364cb2 +0x456:  jne    08364cd1 <+0x475>
08364cb4 +0x458:  mov    -0xc(%ebp),%eax
08364cb7 +0x45b:  mov    %eax,0x4(%esp)
08364cbb +0x45f:  lea    -0x8c(%ebp),%eax
08364cc1 +0x465:  mov    %eax,(%esp)
08364cc4 +0x468:  call   08395840 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252e0
08364cc9 +0x46d:  mov    0x4(%eax),%edx
08364ccc +0x470:  mov    0x8(%ebp),%eax
08364ccf +0x473:  mov    %edx,(%eax)
08364cd1 +0x475:  lea    -0x8c(%ebp),%eax
08364cd7 +0x47b:  mov    %eax,(%esp)
08364cda +0x47e:  call   08395824 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252c4
08364cdf +0x483:  sub    $0x1,%eax
08364ce2 +0x486:  cmp    -0xc(%ebp),%eax
08364ce5 +0x489:  setne  %al
08364ce8 +0x48c:  test   %al,%al
08364cea +0x48e:  je     08364d21 <+0x4c5>
08364cec +0x490:  mov    -0xc(%ebp),%eax
08364cef +0x493:  mov    %eax,0x4(%esp)
08364cf3 +0x497:  lea    -0x8c(%ebp),%eax
08364cf9 +0x49d:  mov    %eax,(%esp)
08364cfc +0x4a0:  call   08395840 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252e0
08364d01 +0x4a5:  mov    %eax,%ebx
08364d03 +0x4a7:  mov    -0xc(%ebp),%eax
08364d06 +0x4aa:  add    $0x1,%eax
08364d09 +0x4ad:  mov    %eax,0x4(%esp)
08364d0d +0x4b1:  lea    -0x8c(%ebp),%eax
08364d13 +0x4b7:  mov    %eax,(%esp)
08364d16 +0x4ba:  call   08395840 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252e0
08364d1b +0x4bf:  mov    0x4(%eax),%eax
08364d1e +0x4c2:  mov    %eax,0x8(%ebx)
08364d21 +0x4c5:  mov    -0xc(%ebp),%eax
08364d24 +0x4c8:  mov    %eax,0x4(%esp)
08364d28 +0x4cc:  lea    -0x8c(%ebp),%eax
08364d2e +0x4d2:  mov    %eax,(%esp)
08364d31 +0x4d5:  call   08395840 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252e0
08364d36 +0x4da:  mov    %eax,%ebx
08364d38 +0x4dc:  mov    -0xc(%ebp),%eax
08364d3b +0x4df:  mov    %eax,0x4(%esp)
08364d3f +0x4e3:  lea    -0x8c(%ebp),%eax
08364d45 +0x4e9:  mov    %eax,(%esp)
08364d48 +0x4ec:  call   08395840 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252e0
08364d4d +0x4f1:  lea    0x4(%eax),%edx
08364d50 +0x4f4:  lea    -0x3c(%ebp),%eax
08364d53 +0x4f7:  mov    %ebx,0x8(%esp)
08364d57 +0x4fb:  mov    %edx,0x4(%esp)
08364d5b +0x4ff:  mov    %eax,(%esp)
08364d5e +0x502:  call   08395852 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252f2
08364d63 +0x507:  sub    $0x4,%esp
08364d66 +0x50a:  lea    -0x3c(%ebp),%eax
08364d69 +0x50d:  mov    %eax,0x4(%esp)
08364d6d +0x511:  lea    -0x50(%ebp),%eax
08364d70 +0x514:  mov    %eax,(%esp)
08364d73 +0x517:  call   08395890 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25330>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25330
08364d78 +0x51c:  mov    0x8(%ebp),%eax
08364d7b +0x51f:  lea    0x4(%eax),%ecx
08364d7e +0x522:  lea    -0x58(%ebp),%eax
08364d81 +0x525:  lea    -0x50(%ebp),%edx
08364d84 +0x528:  mov    %edx,0x8(%esp)
08364d88 +0x52c:  mov    %ecx,0x4(%esp)
08364d8c +0x530:  mov    %eax,(%esp)
08364d8f +0x533:  call   083958d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25374>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25374
08364d94 +0x538:  sub    $0x4,%esp
08364d97 +0x53b:  addl   $0x1,-0xc(%ebp)
08364d9b +0x53f:  lea    -0x8c(%ebp),%eax
08364da1 +0x545:  mov    %eax,(%esp)
08364da4 +0x548:  call   08395824 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x252c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x252c4
08364da9 +0x54d:  cmp    -0xc(%ebp),%eax
08364dac +0x550:  seta   %al
08364daf +0x553:  test   %al,%al
08364db1 +0x555:  jne    08364cae <+0x452>
08364db7 +0x55b:  mov    $0x1,%esi
08364dbc +0x560:  jmp    08364ddc <+0x580>
08364dbe +0x562:  mov    %edx,%ebx
08364dc0 +0x564:  mov    %eax,%esi
08364dc2 +0x566:  lea    -0x8c(%ebp),%eax
08364dc8 +0x56c:  mov    %eax,(%esp)
08364dcb +0x56f:  call   0839547a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24f1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24f1a
08364dd0 +0x574:  mov    %esi,%eax
08364dd2 +0x576:  mov    %ebx,%edx
08364dd4 +0x578:  mov    %eax,(%esp)
08364dd7 +0x57b:  call   08ae3750 <_Unwind_Resume>
08364ddc +0x580:  lea    -0x8c(%ebp),%eax
08364de2 +0x586:  mov    %eax,(%esp)
08364de5 +0x589:  call   0839547a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24f1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24f1a
08364dea +0x58e:  mov    %esi,%eax
08364dec +0x590:  lea    -0x8(%ebp),%esp
08364def +0x593:  add    $0x0,%esp
08364df2 +0x596:  pop    %ebx
08364df3 +0x597:  pop    %esi
08364df4 +0x598:  pop    %ebp
08364df5 +0x599:  ret
```

## 反编译 C

```c
// StageMapList::loadList @ 0x836485c

/* StageMapList::loadList() */

undefined4 __thiscall StageMapList::loadList(StageMapList *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  StageMapScript local_e0 [32];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a4;
  __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
  local_a0 [4];
  __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
  local_9c [4];
  __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
  local_98 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_94 [4];
  vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
  local_90 [12];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_84 [4];
  __normal_iterator local_80 [4];
  __normal_iterator local_7c [4];
  __normal_iterator local_78 [4];
  __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
  local_74 [4];
  __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
  local_70 [4];
  __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
  local_6c [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  pair local_5c [8];
  pair<int_const,StageMapList::_StageMapSummary> local_54 [20];
  int local_40 [5];
  char *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::vector
            (local_90);
  local_2c = (char *)0x0;
                    /* try { // try from 0836488d to 083648cd has its CatchHandler @ 08364dbe */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_94);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_84);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_94,
                       (_Rb_tree_iterator *)local_84);
    if (cVar2 == '\0') break;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_94);
    local_2c = (char *)std::string::c_str((string *)(iVar5 + 4));
    if (local_2c == (char *)0x0) break;
    stagemap::StageMapScript::StageMapScript(local_e0);
                    /* try { // try from 083648de to 08364bba has its CatchHandler @ 08364bca */
    cVar2 = importStageMapScript(local_e0,local_2c);
    if (cVar2 == '\x01') {
      std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>::begin();
      while( true ) {
        std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>::end();
        bVar1 = __gnu_cxx::operator!=(local_98,local_80);
        if (!bVar1) break;
        local_24 = 0;
        local_20 = __gnu_cxx::
                   __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                   ::operator->(local_98);
        local_20 = local_20 + 0x20;
        std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>::begin();
        while( true ) {
          std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>::end();
          bVar1 = __gnu_cxx::operator!=(local_9c,local_7c);
          if (!bVar1) break;
          local_18 = __gnu_cxx::
                     __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
                     ::operator->(local_9c);
          local_18 = local_18 + 4;
          std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>::begin();
          local_14 = 0;
          while( true ) {
            std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>::end();
            bVar1 = __gnu_cxx::operator!=(local_a0,local_78);
            if (!bVar1) break;
            _StageMapSummary::_StageMapSummary((_StageMapSummary *)&local_b0);
            local_a4 = 0;
            puVar3 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
                     ::operator->(local_a0);
            local_ac = *puVar3;
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
                            ::operator->(local_9c);
            iVar5 = *piVar4;
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                            ::operator->(local_98);
            local_b0 = makeStageMapUniqueId(*piVar4,iVar5,local_14);
            std::
            vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
            push_back(local_90,(_StageMapSummary *)&local_b0);
            __gnu_cxx::
            __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
            ::operator++(local_74,(int)local_a0);
            local_14 = local_14 + 1;
          }
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
                          ::operator->(local_9c);
          local_24 = *piVar4;
          __gnu_cxx::
          __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
          ::operator++(local_70,(int)local_9c);
        }
        local_1c = 0;
        local_24 = local_24 + 1;
        iVar5 = __gnu_cxx::
                __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                ::operator->(local_98);
        if (0 < *(int *)(iVar5 + 0x2c)) {
          _StageMapSummary::_StageMapSummary((_StageMapSummary *)&local_c0);
          local_b4 = 1;
          iVar5 = __gnu_cxx::
                  __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                  ::operator->(local_98);
          local_bc = *(undefined4 *)(iVar5 + 0x2c);
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                          ::operator->(local_98);
          local_c0 = makeStageMapUniqueId(*piVar4,local_24,local_1c);
          std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
          ::push_back(local_90,(_StageMapSummary *)&local_c0);
        }
        __gnu_cxx::
        __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
        ::operator++(local_6c,(int)local_98);
      }
      bVar1 = true;
    }
    else {
      printf("Stage Map Script Error: %s\n",local_2c);
      unaff_ESI = 0;
      bVar1 = false;
    }
                    /* try { // try from 08364bee to 08364d93 has its CatchHandler @ 08364dbe */
    stagemap::StageMapScript::~StageMapScript(local_e0);
    if (!bVar1) goto LAB_08364ddc;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_68,(int)local_94);
  }
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::end();
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::begin
            ();
  std::
  sort<__gnu_cxx::__normal_iterator<StageMapList::_StageMapSummary*,std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>>,bool(*)(StageMapList::_StageMapSummary_const&,StageMapList::_StageMapSummary_const&)>
            (local_60,local_64,compare);
  local_28 = 0;
  local_10 = 0;
  while (uVar7 = std::
                 vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
                 ::size(local_90), local_10 < uVar7) {
    if (local_10 == 0) {
      iVar5 = std::
              vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
              ::operator[](local_90,0);
      *(undefined4 *)this = *(undefined4 *)(iVar5 + 4);
    }
    iVar5 = std::
            vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
            size(local_90);
    if (iVar5 - 1U != local_10) {
      iVar5 = std::
              vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
              ::operator[](local_90,local_10);
      iVar6 = std::
              vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
              ::operator[](local_90,local_10 + 1);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar6 + 4);
    }
    std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
    operator[](local_90,local_10);
    iVar5 = std::
            vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
            operator[](local_90,local_10);
    std::make_pair<int&,StageMapList::_StageMapSummary&>(local_40,(_StageMapSummary *)(iVar5 + 4));
    std::pair<int_const,StageMapList::_StageMapSummary>::pair<int,StageMapList::_StageMapSummary>
              (local_54,(pair *)local_40);
    std::
    map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
    ::insert(local_5c);
    local_10 = local_10 + 1;
  }
  unaff_ESI = 1;
LAB_08364ddc:
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
  ~vector(local_90);
  return unaff_ESI;
}
```
